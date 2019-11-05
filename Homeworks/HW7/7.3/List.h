#pragma once

typedef char TypeOfValue;

//������������ ����� ����� 
const int maxLength = 100;

//��� ������ ������������ ������
struct List;

//��������� ������� ������
bool isEmpty(List* list);

//������� ����� ������
List* createList();

//������� ������
void deleteList(List* list);

//�������� ������, ����� �� ������ ����� ���� main, ���� additional � ����������� �� ������ ������������
void printList(List* list, bool mainFirst);

//��������� � ������ ����� �������
void push(List* list, TypeOfValue* mainValue, TypeOfValue* additionalValue);

//������� �������� �� ����� ������. ������� � �������� ��������� �������� ��� �����
void popFromTail(List* list, TypeOfValue* mainValueBuffer, TypeOfValue* additionalValueBuffer);

//���������� �������� � ����� ���� �������
bool isLarger(List* list1, List* list2);

//������ ������ ������
int whatSize(List* list);

//��������� �������� ���������� ��������� �� ������ ������ � ������
void transfer(List* list, List* newList, int howMuch);

//��������� ������� �� ����� ������ ������ � ������ �������
void pushFromListToNewList(List* list, List* newList);