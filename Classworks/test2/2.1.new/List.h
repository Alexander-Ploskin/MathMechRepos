#pragma once

//��� ������ ������
struct List;

//������� ����� ������
List* createList();

//������� ������
void deleteList(List* list);

//��������� � ������ ����� �������
void add(List* list, int value);

//������� ����� ������, ������������ ������
List* reverse(List* listToReverse);

//�������� ������
void printList(List* list);

//���������� ��� ������
bool listcmp(List* list1, List* list2);

//��������� ������ �� ������
void fillList(char* string, List* list);
