#pragma once

//������������ ����� �����
const int maxLength = 100;

//��� ������ ������
struct List;

//������ ����� ������
List* createList();

//��������� ������� ������
bool isEmpty(List* list);

//���������, ���� �� ����� ������ � ������
bool contains(List* list, char* value);

//��������� � ������ ����� ��������
void addToList(List* list, char* value);

//������� �������� �� ������
void removeFromList(List* list, char* value);

//�������� ������
void printList(List* list);

//������� �������� � ������ ������
int pop(List* list, char* buffer);

//������� ������
void deleteList(List* list);