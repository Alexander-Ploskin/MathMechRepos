#pragma once
#include <stdio.h>

//������������ ����� �����
const int maxLength = 100;

//��� ������ �������� ������ ������
typedef char* Type;

//��� ������ ������
struct List;

//������� ������
List* createList();

//������� ������
void deleteList(List* list);

//��������� � ������ ����� ��������
void add(List* list, Type value);

//������� �������� �� ������
void remove(List* list, Type value);

//��������� ������� �������� � ������
bool contains(List* list, Type value);

//��������� ��������� ���� �������
bool listCmp(List* list1, List* list2);

//��������� ������ ���������� �� �������
void fillListByArray(List* list, Type* array, int sizeOfArray);

//��������� ������� ������
bool isEmpty(List* list);

//�������� ������
void printList(List* list);

//�������� ������ � ����
void printListToFile(List* list, FILE* filePtr);