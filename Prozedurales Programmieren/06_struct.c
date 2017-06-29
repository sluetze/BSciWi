#include <stdio.h>
#include <stdlib.h>

struct node {
	int iValue;
	struct node * pNext;
};

struct node * pStart = NULL;

//EIingabe 
struct node * input() {
	struct node * pNewNode = malloc(sizeof(struct node));

	printf("Bitte geben Sie ihre Zahl ein:");
	scanf_s("%d", &(pNewNode->iValue));
	pNewNode->pNext = NULL;
	return pNewNode;
};

// Einfügen
void insert(struct node *pNode) {
	if (pStart == NULL)
	{
		pStart = pNode;
	}
	else
	{
		struct node * pWalker = pStart;
		if (pWalker->iValue > pNode->iValue)
		{
			pNode->pNext = pWalker;
			pStart = pNode;
		}
		else
		{
			while (pWalker->pNext != NULL && pWalker->pNext->iValue < pNode->iValue)
			{
				pWalker = pWalker->pNext;
			}
			pNode->pNext = pWalker->pNext;
			pWalker->pNext = pNode;
		}
	}
};

//Ausgabe
void output() {
	struct node * pWalker = pStart;
	printf("----Ausgabe---\n");
	while (pWalker != NULL)
	{
		printf("%d\n", pWalker->iValue);
		pWalker = pWalker->pNext;
	}
}

//Sortieren

int main(int argc, int *argv[])
{
	for (int i = 0; i < 5; i++) {
		insert(input());
		output();
	}
	fflush;
	getchar();
	return 0;
};