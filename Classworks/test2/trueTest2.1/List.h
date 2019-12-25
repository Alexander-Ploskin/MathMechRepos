#pragma once
#include <stdio.h>

//��� ������ ������
struct List;

//������ ����� ������
List* createList();

void addToList(List* list, int value);

//��������� ������� ������
bool isEmpty(List* list);

//�������� ������
void printList(List* list);

//������� ������
void deleteList(List* list);

//������������ ������ � ����
void writeListToFile(List* list, FILE* filePtr);