#pragma once

//��� ������ ������
struct List;

//������� �����
struct ListElement;

//�������� ������� ������
bool isEmpty(List* list);

//������� ����� ������
List* createList();

//���� ������� ������, � ������� �������� ��������� �� ������ �������, ����� ������ ������
ListElement* searchPositionNotInHead(List* list, int searchValue);

//�������� ������
void printList(List* list);

//������� ������
void deleteList(List* list);

//��������� ����� ������ � ������
void push(List* list, int value);

//������� ������ �� ������
void deleteElement(List* list, int value);

//��������� ����������������� ������
bool isSorted(List* list);

//���������, ���� �� � ������ ����� ��������
bool isContains(List* list, int searchValue);

//��������� ��������� �� �������� � ������ ������
bool checkHead(List* list, int searchValue);