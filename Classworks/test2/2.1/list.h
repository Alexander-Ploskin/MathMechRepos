#pragma once

//��� ������ ������
struct List;

//��������� ������� ������
bool isEmpty(List* list);

//������� ������
List* createList();

//������� ������
void deleteList(List* list);

//���������, ���� �� �������� � ������
bool contains(List* list, int value);

//��������� � ������ ����� ��������
void add(List* list, int value);

//���������� ����� ������
int length(List* list);

//�������� ������
void printList(List* list);

//���������� ������ � ���������� ������������ ����������������������
List* increasingList(List* list);

//���������, ����� �� ������
bool compareOfLists(List* list1, List* list2);