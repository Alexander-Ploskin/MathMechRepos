#pragma once

//������������ ���������� �� ������
const int maxDistance = 10000;

//��� ������ ������ ������
struct ListOfVertexes;

//������� ����� ������ ������
ListOfVertexes* createListOfVertexes();

//������� ������ ������
void deleteListOfVertexes(ListOfVertexes* list);

//��������� ����� �������
void addVertex(ListOfVertexes* list, int distance, int vertex);

//������� ������� �� ������
void removeVertex(ListOfVertexes* list, int vertex);

//���������� ��������� �������
int nearestVertex(ListOfVertexes* list);

//������� ������ �������
ListOfVertexes** createArrayOfListsOfVertexes(int numberOfLists);

//������� ������ �������
void deleteArrayOfListsOfVertexes(ListOfVertexes** array, int numberOfLists);