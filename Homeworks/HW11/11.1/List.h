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

//���������� ��� ������
bool listcmp(List* list1, List* list2);

//������� ������ �� �������
List* createListByArray(int* array, int arraySize);

//������� ������ �������
List** createArrayOfLists(int numberOfLists);

//������� ������ �������
void deleteArrayOfLists(List** listOfLists, int numberOfLists);