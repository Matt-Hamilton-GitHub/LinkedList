
#pragma once

#include <iostream>
using namespace std;


class List{
	
private:
	
typedef struct node{
	
	int data;
	node* next;

}* nodePtr;


nodePtr head;
nodePtr	curr;
nodePtr temp;

public:

	List(){
	head = NULL;
	curr = NULL;
	temp = NULL;
	};
	
	 void AddNode(int addData){
		 nodePtr n = new node;
		 n->next = NULL;
		 n->data = addData;
		 
		 if(head != NULL){
			 curr = head;
			 while(curr ->next != NULL){
				 curr = curr->next;
			 }
			 
			 curr->next = n;
			 
		 }else{
			 head = n;
			 
		 }
		 
	 }
	 
	 void DeleteNode (int delData){
		 nodePtr delPtr = NULL;
		 temp = head;
		 curr = head;
		 
		 while(curr != NULL && curr->data != delData){
			 temp = curr;
			 curr = curr->next;
		 }
		 
		 if(curr == NULL){
			 cout << delData << " was not in the list\n" ;
			 delete delPtr;
		 }else{
			 delPtr = curr;
			 curr = curr->next;
			 temp->next = curr;
			 
			 if(delPtr == head){
				 head = head->next;
				 temp = NULL;
			 }
			 
			 delete delPtr;
			 
			  cout << delData << " was deleted from the list\n" ;
		 }
	 }
	 
	 void PrintList(){
		 curr = head;
		 
	 while(curr != NULL){
		 cout << curr->data << endl;
		curr =  curr->next;
	 }
	 }
	 
	

};
