#pragma once

//������������ ���������� ����� ��������
const int maxDistance = 10000;

//��� ������ ������
struct List;

//������ ����� ������
List* createList();

//��������� ������� ������
bool isEmpty(List* list);

//���������, ���� �� ����� ������� � ������
bool contains(List* list, int vertex);

//��������� � ������ ����� ��������
void addToList(List* list, int vertex, int distance);

//������� �������� �� ������
void removeFromList(List* list, int vertex);

//������� ������
void deleteList(List* list);

//���������� ����� ��������� �������
int SearchOfNearestTown(List* list, int& distanceBuffer);