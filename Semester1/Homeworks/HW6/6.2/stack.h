#pragma once

struct OpenBracket
{
	char bracket;
	OpenBracket* next;
};

//���������, ���� �� ����
bool isEmpty(OpenBracket* head);

//������� ������� �����
void deleteStackElement(OpenBracket** head);

//������� �������� � ������ �����
const char pop(OpenBracket** head);

//��������� ������� � ����
void push(char value, OpenBracket** head);