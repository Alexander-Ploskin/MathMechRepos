#pragma once

//��� ������ ������
struct List;

//������� ������
struct ListElement;

//��������� � ������ ����� �������
void push(List* list, int number);

//������� ������� ������
void deleteElement(List* list, ListElement* previousElement);

//������� ������
List* createList();

//��������� ������� ������
bool isEmpty(List* list);

//�������� ������
void printList(List* list);

//������� ����� ��������� �����
int counting(List* list, int m);

//������� ������
void deleteList(List* list);