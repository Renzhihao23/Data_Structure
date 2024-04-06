// Queue Linked list implementation  First-in-First-out FIFO
#include<iostream>
using namespace std; 

class Node
{
private:
	int data;
	Node* next;
public:

Node* front = NULL;  // glboal variables
Node* rear = NULL;

    void Enqueue(int x){
	    Node* temp = new Node();
	    temp->data = x;
	    temp->next = NULL;
	    if(front == NULL && rear == NULL)
	    {
	    	front = rear = temp;
	    	return;
	    }
    	rear->next = temp;
    	rear = temp;
    }

    void Dequeue(){
	    Node* temp = front;
	    if(front == NULL) return;
	    if(front == rear){
	    	front = rear = NULL;
	    }
    	else{
	    	front = front->next;
    	}
    	delete(temp);
    }

    void Print(){
	    Node* temp = front;
	    while (temp != NULL)
	    {
	    	cout << temp->data << " ";
	    	temp = temp->next;
	    }
	    cout << endl;
    }
};


int main()
{
	
   Node Q; // creating an instance of Queue. 
   Q.Enqueue(2);  Q.Print();  
   Q.Enqueue(4);  Q.Print();  
   Q.Enqueue(6);  Q.Print();
   Q.Dequeue();	  Q.Print();
   Q.Enqueue(8);  Q.Print();
}