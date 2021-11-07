#include <iostream>
#include "List.h"

using namespace std;


int main()
{
	
	
	List myList;
	myList.AddNode(11);
	myList.AddNode(16);
	myList.AddNode(1995);
	
	myList.PrintList();
	
	myList.DeleteNode(1995);
	
	myList.PrintList();
	
	myList.DeleteNode(19);
	system("pause");
	return 0;
}
