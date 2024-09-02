#include"LINKED_LIST.h"
int main(){
linkedlist list;
list.insert(30);
list.insert(40);
list.insert(50);
list.insert(60);
list.insert(70);
list.insert(80);
list.printlist();
list.remove();
list.printlist();
list.insertAtHead(20);
list.printlist();
list.removeAtHead();
list.printlist();
return 0;
}
