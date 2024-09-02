#ifndef ARRAY_LIST
#define ARRAY_LIST
#include<iostream>
#include"ADT.h"
using namespace std;
class listArray:public ADT{
	public:
	int size=1;
	int*array=new int[size];
	void insert(int val){
		array[size-1]=val;
		size++;
	}	
	void printlist()override{
		cout<<" \nThe list is : ";
		for(int i=0;i<size-1;i++){
			cout<<array[i]<<" ";
		}
	}
	void remove()override{
		size--;
	}
	void removeAtHead()override{
	for(int i=0;i<size-1;i++){
		array[i]=array[i+1];
	}
	size--;
	}
	void insertAtHead(int val)override{
		int*newarray=new int[size*2];
		 newarray[0]=val;
		for(int i=0;i<size-1;i++){
			newarray[i+1]=array[i];
		}
		delete[]array;
		array=newarray;
		delete[]newarray;
		size++;
	}
	};
	#endif
