#pragma once

//��� ������ ������
struct List;

//������� �����
struct ListElement;

//�������� ������� ������
bool isEmpty(List* list);

//������� ����� ������
List* createList();

//�������� ������
void printList(List* list);

//������� ������
void deleteList(List* list);

//��������� ����� ������ � ������
void push(List* list, int value);

//���������, ���� �� � ������ ����� ��������
bool isContains(List* list, int searchValue);