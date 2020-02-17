#include "Distributor.h"
#include "List.h"
#include "set.h"

List** distribution(int** adjacencyMatrix, int* capitals, int numberOfTowns, int numberOfStates)
{
	bool* occuped = new bool[numberOfTowns] {}; //������� ������
	for (int i = 0; i < numberOfStates; ++i) 
	{
		occuped[capitals[i] - 1] = true;  //������� ������� ��������
	}

	bool continueDistribution = true;

	List** result = new List*  [numberOfStates] {};  //������ �������, ������� ������ ������������

	for (int i = 0; i < numberOfStates; ++i)
	{
		result[i] = createList();
		add(result[i], capitals[i] - 1);
	}

	Set** adjacentTowns = new Set * [numberOfStates] {}; //��������� ������� � ������������ �������
	for (int i = 0; i < numberOfStates; ++i)
	{
		adjacentTowns[i] = createSet();
	}

	while (continueDistribution)
	{
		continueDistribution = false;

		
	}

}