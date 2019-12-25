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

//��������� ������� �������� � ������
bool contains(List* list, Type value);

//��������� ������� ������
bool isEmpty(List* list);

//�������� ������ � ����
void printListToFile(List* list, FILE* filePtr);