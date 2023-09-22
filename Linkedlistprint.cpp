#include<iostream>
using namespace std;

class IntSLinkedList {
public:
    class Node; // Forward declaration

private:
    Node* head;
    Node* tail;
    int count;
public:
 IntSLinkedList() : head(NULL), tail(NULL), count(0) {};
    void pushback(int element){
        Node *temp = new Node(element);
        if(count == 0){
        head = temp;
        tail = temp;
        count++;
        }
        else 
        tail->next = temp;
        tail = temp;
    }
 
    void duyet()
    {
        while(head!=NULL){
            cout<<head->data<<" ";
            head=head->next;
        }

    }

    void popfront(){
        if(head == NULL){return;}
        Node *temp = head;
        head = head ->next;
        delete temp;
        count --;
    }
    void popback(){
        if(head ==  NULL){return;} // TH 1
        Node *temp = head;
        if(temp->next == NULL){
            head = NULL; // cập nhật lại head
            delete temp;
            count--;
        }
        while(temp->next->next != NULL){
            temp=temp->next;
        }
        Node *tail = temp->next;
        temp->next = NULL;
        delete tail;



    }
public:
    class Node {
    public:
        int data;
        Node* next;

    public:
        Node() : next(NULL) {};
        Node(int data) : 
            data(data), next(NULL) {};
    };

};

int main()
{

int n =0;

cin>>n;
int x=0;


IntSLinkedList *list = new IntSLinkedList();
for(int i = 0; i<n; i++){
cin>>x;
list->pushback(x);
}


list->popback();
list->duyet();



}