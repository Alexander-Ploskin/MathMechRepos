#pragma once

//��� ������ ������
struct List;

//������� ������
List* createList();

//������� ������
void deleteList(List* list);

//��������� � ������ ������ ����� ��������
void addToList(List* list, int value);

//���������� ��������� ����������� ��������
int popFromList(List* list);

//�������� ������
void printList(List* list);

//������� ������
void deleteList(List* list);
