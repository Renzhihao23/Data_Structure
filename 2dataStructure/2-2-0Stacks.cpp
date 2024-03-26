// Linked list's Implementation of stacks     // use Linked list  //头插法
#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* link;
};
Node* top = NULL;

void Push(int x)
{
     Node *temp = new Node(); 
     temp->data = x;
     temp->link = top;   //temp->link存放的是节点下一个的地址  节点的地址是  *temp = Ox123342..
     top = temp;
}
 
void Pop()
{
    Node* temp;
    if(top == NULL)return;
    temp = top;
    top = top->link;
    delete(temp);

}

void Print()
{
    Node *temp = top;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->link;
    }
    cout << endl;
}
int main(void)
{
    Push(2);Print();
    Push(3);Print();
    Push(4);Print();
    Pop();Print();
    return 0;
}