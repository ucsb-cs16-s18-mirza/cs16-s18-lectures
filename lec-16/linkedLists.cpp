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
void appendToList(LinkedList* list, int value){
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
		p->next = 0;
		list->tail->next = p;
		list->tail =p;

	}

}

void printList( LinkedList* list){
	if(!list)
		return;
	Node* p = list->head;
	while(p!=0){
		cout<<p->data<<" ";
		p=p->next;

	}
	cout<<endl;
}

int sumElements(LinkedList* list){
	Node* tmp = list->head;
	int result =0;
	while(tmp){
		result+= tmp->data;
		tmp = tmp->next;
	}
	return result;
}


int sumList(Node* head){
	if(head==0) return 0;

	if(head->next ==0) return head->data;

	int result;
	result=sumList(head->next);
	return result +head->data;

}

int minList(Node* head){

	// Smallest valid input is a list with one element
	if(head->next == 0)
		return head->data;
	if(head->next->next ==0){
		if(head->data < head->next->data){
			return head->data;
		} else{
			return head->next->data;
		}
	}

	int tmp = minList(head->next); //partial result from solution to a smaller version of the problem

	if(tmp<head->data)
		return tmp;
	else
		return head->data;

}


bool search(Node* head, int value){
	if(head==0)
		return false;
	if(head->next ==0){
		if(head->data == value){
			return true;

		}else
			return false;
	}

	if(head->data == value)
		return true;
	else
		return search(head->next, value);

}
bool search(LinkedList* list, int value){
	Node* tmp = list->head;
	
	while(tmp){
		if(tmp->data== value){
			return true; //Found it!
		}
		tmp = tmp->next;
	}

	return false;


}

/* Precondition: list is a non-null pointer to a sorted
list that has nodes with key values in ascending order 
Post condition: A new node with given value is added while
maintaining the sorted order of the list
*/

void insertIntoSortedList(LinkedList* list, int value){
	
	Node* p = list->head;
	if(!p || (p->data > value)){
		//insert a new node at the head of the list
		insertToList(list, value);

	}else if(list->tail->data <= value){
		// insert a new node at the tail of the list
		appendToList(list, value);
	}else{
		// Need to insert somewhere in the middle 
		//of the list
		Node* n = new Node;
		n->data = value;
		n->next = 0;
		while(p->next && (p->next->data < value))
			p = p->next;
		//Insert the new node between p and p->next
		n->next = p->next;
		p->next = n;

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
	cout<<"Insert into unsorted list"<<endl;
	insertToList(&mylist, 10);
	insertToList(&mylist, 5);
	insertToList(&mylist, 25);
	insertToList(&mylist, 100);
	insertToList(&mylist, 50);
	insertToList(&mylist, 45);

	printList(&mylist);
	cout<<"Sum of all the elements: "<<sumElements(&mylist)<<endl;
	cout<<"Is 100 in the list? "<<search(&mylist, 100)<<endl;
	cout<<"Is -100 in the list? "<<search(&mylist, -100)<<endl;



}
