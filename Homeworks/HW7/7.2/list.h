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
int counting(int m, int n, bool doVisualize);

//������� ������
void deleteList(List* list);