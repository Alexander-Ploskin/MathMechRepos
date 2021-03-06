#include <string.h>
#include <stdio.h>
#include "set.h"

struct SetElement
{
	SetElement* rightChild = nullptr;
	SetElement* leftChild = nullptr;
	SetElement* parent = nullptr;
	int key = 0;
	char string[maxLength]{};
	int balance = 0;
};

struct Set
{
	SetElement* root = nullptr;
};

bool isEmpty(Set* set)
{
	return set->root == nullptr;
}

Set* createSet()
{
	return new Set;
}

SetElement* searchElement(Set* set, int key, SetElement*& parent)
{
	SetElement* currentElement = set->root;
	if (currentElement->key == key)
	{
		return currentElement;
	}
	while (currentElement != nullptr)
	{
		if (currentElement->key == key)
		{
			parent = currentElement->parent;
			return currentElement;
		}
		else if (currentElement->key < key)
		{
			currentElement = currentElement->rightChild;
		}
		else
		{
			currentElement = currentElement->leftChild;
		}
	}
	return nullptr;
}

bool contains(Set* set, int key)
{
	if (isEmpty(set))
	{
		return false;
	}
	return searchElement(set, key, set->root) != nullptr;
}

void getValue(Set* set, int key, char* bufferString)
{
	if (!contains(set, key))
	{
		return;
	}
	SetElement* parent = nullptr;
	strcpy(bufferString, searchElement(set, key, parent)->string);
}

void setChild(SetElement* parent, SetElement* currentChild, SetElement* newChild)
{
	if (parent->leftChild == currentChild)
	{
		parent->leftChild = newChild;
	}
	else
	{
		parent->rightChild = newChild;
	}
}

void simpleLeftRotation(Set* set, SetElement* grandParent, SetElement* parent, SetElement* element)
{
	parent->rightChild = element->leftChild;
	if (parent->rightChild != nullptr)
	{
		parent->rightChild->parent = parent;
	}
	parent->parent = element;
	if (grandParent != nullptr)
	{
		setChild(grandParent, parent, element);
	}
	else
	{
		set->root = element;
	}
	element->parent = grandParent;

	element->leftChild = parent;

	if (element->balance == -1)
	{
		parent->balance = 0;
		element->balance = 0;
	}
	else
	{
		parent->balance = -1;
		element->balance = 1;
	}
}

void simpleRightRotation(Set* set, SetElement* grandParent, SetElement* parent, SetElement* element)
{
	parent->leftChild = element->rightChild;
	if (parent->leftChild != nullptr)
	{
		parent->leftChild->parent = parent;
	}
	parent->parent = element;
	if (grandParent != nullptr)
	{
		setChild(grandParent, parent, element);
	}
	else
	{
		set->root = element;
	}
	element->parent = grandParent;

	element->rightChild = parent;

	if (element->balance == 1)
	{
		parent->balance = 0;
		element->balance = 0;
	}
	else
	{
		parent->balance = 1;
		element->balance = -1;
	}
}

void doubleLeftRotation(Set* set, SetElement* grandParent, SetElement* parent, SetElement* element)
{
	SetElement* grandGrandParent = grandParent->parent;

	parent->leftChild = element->rightChild;
	if (parent->leftChild != nullptr)
	{
		parent->leftChild->parent = parent;
	}
	element->rightChild = parent;
	parent->parent = element;

	grandParent->rightChild = element->leftChild;
	if (grandParent->rightChild != nullptr)
	{
		grandParent->rightChild->parent = grandParent;
	}
	element->leftChild = grandParent;
	grandParent->parent = element;

	if (grandGrandParent != nullptr)
	{
		setChild(grandGrandParent, grandParent, element);
	}
	else
	{
		set->root = element;
	}
	element->parent = grandGrandParent;

	if (element->balance == 1)
	{
		grandParent->balance = 0;
		parent->balance = -1;
		element->balance = 0;
	}
	else if (element->balance == 0)
	{
		grandParent->balance = 0;
		parent->balance = 0;
		element->balance = 0;
	}
	else
	{
		grandParent->balance = 1;
		parent->balance = 0;
		element->balance = 0;
	}
}

void doubleRightRotation(Set* set, SetElement* grandParent, SetElement* parent, SetElement* element)
{
	SetElement* grandGrandParent = grandParent->parent;

	parent->rightChild = element->leftChild;
	if (parent->rightChild != nullptr)
	{
		parent->rightChild->parent = parent;
	}
	element->leftChild = parent;
	parent->parent = element;

	grandParent->leftChild = element->rightChild;
	if (grandParent->leftChild != nullptr)
	{
		grandParent->leftChild->parent = grandParent;
	}
	element->rightChild = grandParent;
	grandParent->parent = element;

	if (grandGrandParent != nullptr)
	{
		setChild(grandGrandParent, grandParent, element);
	}
	else
	{
		set->root = element;
	}
	element->parent = grandGrandParent;

	if (element->balance == -1)
	{
		grandParent->balance = 0;
		parent->balance = -1;
		element->balance = 0;
	}
	else if (element->balance == 0)
	{
		grandParent->balance = 0;
		parent->balance = 0;
		element->balance = 0;
	}
	else
	{
		grandParent->balance = 1;
		parent->balance = 0;
		element->balance = 0;
	}
}

void rotation(Set* set, SetElement* element, SetElement* child, SetElement* grandChild)
{
	if (element->balance == -2)
	{
		if (child->balance == 1)
		{
			doubleLeftRotation(set, element, child, grandChild);
			return;
		}
		simpleLeftRotation(set, element->parent, element, child);
		return;
	}

	if (child->balance == -1)
	{
		doubleRightRotation(set, element, child, grandChild);
		return;
	}
	simpleRightRotation(set, element->parent, element, child);
}

bool allright(Set* set, SetElement* element)
{
	SetElement* currentElement = element;
	while (element->parent != nullptr)
	{
		element = element->parent;
	}
	return element == set->root;
}

void balanceInCaseOfAdd(Set* set, SetElement* element)
{
	SetElement* currentGrandchild = nullptr;
	SetElement* currentChild = element;
	SetElement* currentParent = element->parent;

	while (currentParent != nullptr)
	{
		if (currentParent->leftChild == currentChild)
		{
			currentParent->balance++;
		}
		else
		{
			currentParent->balance--;
		}

		if (currentParent->balance == 0)
		{
			return;
		}
		else if (currentParent->balance == 1 || currentParent->balance == -1)
		{
			currentGrandchild = currentChild;
			currentChild = currentParent;
			currentParent = currentParent->parent;
		}
		else
		{
			rotation(set, currentParent, currentChild, currentGrandchild);
			return;
		}
	}
}

bool add(Set* set, int key, char* inputString)
{
	if (contains(set, key))
	{
		SetElement* parent = nullptr;
		strcpy(searchElement(set, key, parent)->string, inputString);
		return false;
	}

	if (isEmpty(set))
	{
		set->root = new SetElement{ nullptr, nullptr, nullptr, key };
		strcpy(set->root->string, inputString);
		return true;
	}

	SetElement* currentElement = set->root;
	while (true)
	{
		if (currentElement->key < key)
		{
			if (currentElement->rightChild == nullptr)
			{
				currentElement->rightChild = new SetElement{ nullptr, nullptr, currentElement, key };
				strcpy(currentElement->rightChild->string, inputString);
				balanceInCaseOfAdd(set, currentElement->rightChild);
				return true;
			}
			currentElement = currentElement->rightChild;
		}
		else
		{
			if (currentElement->leftChild == nullptr)
			{
				currentElement->leftChild = new SetElement{ nullptr, nullptr, currentElement, key };
				strcpy(currentElement->leftChild->string, inputString);
				balanceInCaseOfAdd(set, currentElement->leftChild);
				return true;
			}
			currentElement = currentElement->leftChild;
		}
	}
}

SetElement* searchOfNewElement(SetElement* element, SetElement*& parent)
{
	SetElement* currentElement = element->leftChild;
	while (currentElement->rightChild != nullptr)
	{
		parent = currentElement;
		currentElement = currentElement->rightChild;
	}
	return currentElement;
}

void rotationForRemove(Set* set, SetElement* element)
{
	if (element->balance == -2)
	{
		SetElement* child = element->rightChild;
		if (child->balance == 1)
		{
			SetElement* grandChild = child->leftChild;
			doubleLeftRotation(set, element, child, grandChild);
			return;
		}
		simpleLeftRotation(set, element->parent, element, child);
		return;
	}
	SetElement* child = element->leftChild;
	if (child->balance == -1)
	{
		SetElement* grandChild = child->rightChild;
		doubleRightRotation(set, element, child, grandChild);
		return;
	}
	simpleRightRotation(set, element->parent, element, child);
}

void balanceInCaseOfRemove(Set* set, SetElement* parentOfRemovedElement)
{
	SetElement* currentChild = nullptr;
	SetElement* currentParent = parentOfRemovedElement;
	if (currentParent->balance == 1 || currentParent->balance == -1)
	{
		return;
	}
	else if (currentParent->balance == 2 || currentParent->balance == -2)
	{
		rotationForRemove(set, currentParent);
		return;
	}
	else
	{
		currentChild = currentParent;
		currentParent = currentParent->parent;
	}

	while (currentParent != nullptr)
	{
		if (currentParent->leftChild == currentChild)
		{
			currentParent->balance--;
		}
		else
		{
			currentParent->balance++;
		}

		if (currentParent->balance == 1 || currentParent->balance == -1)
		{
			return;
		}
		else if (currentParent->balance == 2 || currentParent->balance == -2)
		{
			rotationForRemove(set, currentParent);
			return;
		}
		else
		{
			currentChild = currentParent;
			currentParent = currentParent->parent;
		}
	}
}

void updateParentBalance(SetElement* parent, SetElement* child)
{
	if (parent->leftChild == child)
	{
		parent->balance--;
	}
	else if (parent->rightChild == child)
	{
		parent->balance++;
	}
}

bool remove(Set* set, int key)
{
	if (isEmpty(set) || !contains(set, key))
	{
		return false;
	}
	SetElement* parent = nullptr;
	SetElement* element = searchElement(set, key, parent);
	if (element->leftChild != nullptr && element->rightChild != nullptr)
	{
		SetElement* parentOfNewElement = element;
		SetElement* newElement = searchOfNewElement(element, parentOfNewElement);
		const int newKey = newElement->key;
		strcpy(element->string, newElement->string);
		remove(set, newElement->key);
		element->key = newKey;
		return true;
	}
	if (element->leftChild != nullptr)
	{
		if (element == set->root)
		{
			set->root = element->leftChild;
			delete element;
			return true;
		}
		updateParentBalance(parent, element);
		setChild(parent, element, element->leftChild);
		delete element;
		balanceInCaseOfRemove(set, parent);
		return true;
	}
	if (element->rightChild != nullptr)
	{
		if (element == set->root)
		{
			set->root = element->rightChild;
			delete element;
			return true;
		}
		updateParentBalance(parent, element);
		setChild(parent, element, element->rightChild);
		delete element;
		balanceInCaseOfRemove(set, parent);
		return true;
	}
	if (element == set->root)
	{
		set->root = nullptr;
		delete element;
		return true;
	}
	updateParentBalance(parent, element);
	setChild(parent, element, nullptr);
	delete element;
	balanceInCaseOfRemove(set, parent);
	return true;
}

bool setNewValue(Set* set, int key, char* string)
{
	if (!contains(set, key))
	{
		return false;
	}
	else
	{
		SetElement* parent = nullptr;
		SetElement* element = searchElement(set, key, parent);
		strcpy(element->string, string);
		return true;
	}
}

void deleteSubtree(SetElement* element)
{
	if (element == nullptr)
	{
		return;
	}
	deleteSubtree(element->rightChild);
	deleteSubtree(element->leftChild);
	delete element;
}

bool deleteSet(Set* set)
{
	deleteSubtree(set->root);
	delete set;
	return true;
}

int height(SetElement* element)
{
	if (element == nullptr)
	{
		return 0;
	}
	const int leftHeight = height(element->leftChild);
	const int rightHeight = height(element->rightChild);
	
	if (leftHeight > rightHeight)
	{
		return leftHeight + 1;
	}
	return rightHeight + 1;
}

bool balancedSubtree(SetElement* element)
{
	if (element == nullptr)
	{
		return true;
	}
	const int leftHeight = height(element->leftChild);
	const int rightHeight = height(element->rightChild);
	if (element->balance != leftHeight - rightHeight)
	{
		return false;
	}
	return balancedSubtree(element->leftChild) && balancedSubtree(element->rightChild);
}

bool balanced(Set* set)
{
	return balancedSubtree(set->root);
}