#include <stdio.h>
#include "Distributor.h"
#include "List.h"
#include "ListOfVertexes.h"

void updateListOfAdjacentVertexes(int** adjacencyMatrix, bool* occupied, ListOfVertexes* list, int newVertex, int numberOfTowns)
{
	for (int j = 0; j < numberOfTowns; ++j) //���������� ��������� ������� ������
	{
		if (adjacencyMatrix[newVertex - 1][j] > 0 && !occupied[j + 1])
		{
			addVertex(list, adjacencyMatrix[newVertex - 1][j], j + 1);
		}
	}
}

List** distribution(int** adjacencyMatrix, int* capitals, int numberOfTowns, int numberOfStates)
{
	bool* occupied = new bool[numberOfTowns + 1] {}; //������� ����� �������������� �������
	for (int i = 0; i < numberOfStates; ++i)
	{
		occupied[capitals[i]] = true;
	}

	List** result = createArrayOfLists(numberOfStates); //��������� �������������
	for (int i = 0; i < numberOfStates; ++i)
	{
		addToList(result[i], capitals[i]);
	}

	ListOfVertexes** listOfAdjacentVertexes = createArrayOfListsOfVertexes(numberOfStates);//������ ������� ������ ��� ������ �������

	bool continueDistribution = true;

	while (continueDistribution)
	{
		continueDistribution = false;
		for (int i = 0; i < numberOfStates; ++i) //��� ��������� ��� ������ �������
		{
			int lastAddedTown = popFromList(result[i]);
			ListOfVertexes* currentList = listOfAdjacentVertexes[i];
			updateListOfAdjacentVertexes(adjacencyMatrix, occupied, currentList, lastAddedTown, numberOfTowns);
			int nearestTown = nearestVertex(currentList);
			removeVertex(currentList, nearestTown);
			while (occupied[nearestTown] && nearestTown > 0)
			{
				nearestTown = nearestVertex(currentList);
				removeVertex(currentList, nearestTown);
			}
			if (nearestTown > 0)
			{
				addToList(result[i], nearestTown);
				occupied[nearestTown] = true;
				continueDistribution = true;
			}
		}
	}

	delete[] occupied;
	deleteArrayOfListsOfVertexes(listOfAdjacentVertexes, numberOfStates);
	return result;
}