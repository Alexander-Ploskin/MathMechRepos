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
ListOfVertexes** createArrayOfLists(int numberOfLists);

//������� ������ �������
void deleteArrayOfLists(ListOfVertexes** array, int numberOfLists);