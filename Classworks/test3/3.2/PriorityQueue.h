#pragma once

//������������ ����� ��������� � ����
const int maxNumberOfElements = 1000;

//��� ������ ������� � ������������
struct PriorityQueue;

//������� �������
PriorityQueue* createQueue();

//������� �������
void deleteQueue(PriorityQueue* queue);

//��������� � ������� ����� �������
void enqueue(PriorityQueue* queue, int value, int key);

//��������� �� ������� ������� � ��������� �����������
int dequeue(PriorityQueue* queue);

//��������� ������� �������
bool isEmptyQueue(PriorityQueue* queue);