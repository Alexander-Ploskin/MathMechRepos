#pragma once

//��� ������ ������
struct List;

//������� ������
List* createList();

//������� ������
void deleteList(List* list);

//��������� � ������ ������ ����� ��������
void addToList(List* list, int value);

//���������� ��������� ����������� ��������
int popFromList(List* list);

//�������� ������
void printList(List* list);

//������� ������
void deleteList(List* list);

//������� ������ �������
List** createArrayOfLists(int numberOfLists);

//������� ������ �������
void deleteArrayOfLists(List** listOfLists, int numberOfLists);

//������� ������� �� ������, ���������� false, ���� ������� ������ �� �������
bool removeFromList(List* list, int value);

//��������� ������� ������
bool isEmpty(List* list);

//������� ������ �� �������
List* createListByArray(int* array, int sizeOfArray);

//���������� ��� ������� �������
bool arrayOfListscmp(List** array1, List** array2, int sizeOfArray1, int sizeOfArray2);

//������� ��� ������ � ������� �������
void deleteListsOfTheArray(List** arrayOfLists, int numberOfLists);