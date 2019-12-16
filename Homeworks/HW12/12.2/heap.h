#pragma once

//��� ������ ���� ������ �����
struct Heap;

//���������� ������� � ����
void add(Heap* heap, int vertex, int distance, int adjacentVertex);

//���������� �� ���� ��������� �������
int popNearestVertex(Heap* heap, int& adjacentVertex);

//������� ����
Heap* createHeap();

//������� ����
void deleteHeap(Heap* heap);

//��������� ������� ����
bool isEmptyHeap(Heap* heap);