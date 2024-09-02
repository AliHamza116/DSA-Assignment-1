#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include<iostream>
#include "ADT.h"
using namespace std;
 class linkedlist:public ADT{
 	public:
 		Node*head;
 	linkedlist(){
 		head=nullptr;
	 }
 void  insert(int val)override{
 	Node*newNode=new Node(val);
 	if(head==nullptr){
 		head=newNode;
 		return;
	 }
 	Node*temp=head;
 	while(temp->next!=nullptr)
 	temp=temp->next;
 	temp->next=newNode;
 }
 void insertAtHead(int val)override{
 	Node*newNode=new Node(val);
 	newNode->next=head;
 	head=newNode;
 }
 void printlist()override{
 	Node*temp=head;
 	cout<<endl<<"The linked list is: ";
 	while(temp!=nullptr){
 		cout<<temp->data<<" ";
	temp=temp->next;
	}
 }
 void remove()override{
 	Node*temp=head;
 	while(temp->next->next!=nullptr)
 	temp=temp->next;
 	delete temp->next;
 	temp->next=nullptr;
 }
 void removeAtHead()override{
 Node*temp=head;
 head=head->next;
 delete temp;	
 }
};
#endif
