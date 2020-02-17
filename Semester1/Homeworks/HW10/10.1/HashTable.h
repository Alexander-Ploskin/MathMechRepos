#pragma once

//��� ������ ���-�������
struct HashTable;

//������� ����� ���-�������
HashTable* createTable();

//������� ���-�������
void deleteTable(HashTable* table);

//��������� � ���-������� ����� ��������
HashTable* addToTable(HashTable* table, char* value, int amount);

//���������, ���� �� �������� � �������
bool containsInTable(HashTable* table, char* value);

//������� �������� �� �������
void removeFromeTable(HashTable* table, char* value);

//�������� �������
void printTable(HashTable* table);

