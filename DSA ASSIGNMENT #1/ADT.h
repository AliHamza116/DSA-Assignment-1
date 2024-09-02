#ifndef ADT_H
#define ADT_H
struct Node{
	int data;
	Node*next;
	Node(int val):data(val),next(nullptr){}
};
class ADT{
	public:
	virtual void insert(int val)=0;
	virtual void insertAtHead(int val)=0;
	virtual void printlist()=0;
	virtual void remove()=0;
	virtual void removeAtHead()=0;
};

#endif
