#include "stdafx.h"
#include "mySTL.h"

int main()
{
	CList<int> listInt;
	CList<int>::CIterator iter;

	listInt.push_front(10);
	listInt.push_front(20);
	listInt.push_front(30);
	listInt.push_back(40);
	listInt.push_back(20);
	listInt.push_back(77);
	listInt.pop_front();
	listInt.pop_back();
	//listInt.remove(10);

	// ¼øÈ¸
	for (iter = listInt.begin(); iter != listInt.end(); ++iter)
	{
		printf("[%d]->", *iter);
	}
	
	//printf("\n Node Count : %d\n", listInt.nodeCount());
	
	return 0;
}