#pragma once

//������������ ����� �����
const int maxLength = 100;

//��� ������ ������
struct List;

//������� ����� ������
List* createList();

//������� ������
void deleteList(List* list);

//��������� � ������ ����� �������
void add(List* list, char* value);

//�������� ������
void printList(List*list);

//��������� ������������ ���� ��������� ������
bool checkRight(List* list);

//������� ����� ��������� ������
void clearList(List* list);