#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

struct LinkedList{
	Node* head; //pointer to the first node
	Node* tail; // pointer to the last node
};

void insertToList(LinkedList* list, int value){
	if(list->head ==0){
		//empty list
		Node* p = new Node; // A node on the heap
		p->data = value;
		p->next = 0;
		list->head = p;
		list->tail = p;
	} else{
		Node* p = new Node; // A node on the heap
		p->data = value;
		p->next = list->head;
		list->head = p;

	}

}


int main(){
	Node n; // A node on the stack
	n.data = 10;
	n.next = 0;

	Node* head  = new Node;
	head->data = 20;
	head->next = 0;

	LinkedList mylist;
	mylist.head = 0;
	mylist.tail =0;
	insertToList(&mylist, 10);
	insertToList(&mylist, 5);

	cout<<mylist.head->data<<endl;








	

}
