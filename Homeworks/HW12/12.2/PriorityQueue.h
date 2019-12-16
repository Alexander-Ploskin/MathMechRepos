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
void addToQueue(PriorityQueue* queue, int value, int key, int additionalValue);

//��������� �� ������� ������� � ���������� ������
int extractMin(PriorityQueue* queue, int& bufferOfAdditionalValue);

//��������� ������� �������
bool isEmptyQueue(PriorityQueue* queue);