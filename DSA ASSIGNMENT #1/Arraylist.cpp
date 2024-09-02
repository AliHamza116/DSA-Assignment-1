#include"Arraylist.h"
int main(){
	listArray list;
list.insert(20);
list.insert(30);
list.insert(40);
list.insert(50);
list.printlist();
list.insertAtHead(10);
list.printlist();
list.insert(60);
list.printlist();
list.remove();
list.printlist();
list.removeAtHead();
list.printlist();
	return 0;
}
