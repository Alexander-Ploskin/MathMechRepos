#pragma once

//��� ������ ������
struct List;

//������� ����� ������
List* createList();

//��������� ������� ������
bool isEmpty(List* list);

//��������� � ������ ����� �������
void add(List* list, int value);

//������� �������� ������ �� �������
void printList(List* list);

//������� ������
void deleteList(List* list);

//��������� �������������� ������
bool isSymmetric(List* list);

//������� ������ �� �������
void createListByArray(List* list, int* array, int sizeOfArray);