#include<iostream>
using namespace std;

class node{

    public:
    int data;
    node*next;
    node*prev;

    node(int d){

        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }

    ~node(){

        int val = this->data;
        if (next!=NULL)
        {
            delete next;
            next=NULL;
        }

        cout<<"Memory free for node with data "<<val<<endl;
        
    }
};

void print(node*head){

    node* temp = head;

    while (temp!=NULL)
    {
        cout<<temp->data<<"  ";
        temp = temp->next;
    }

    cout<<endl;
    
}

void insertAtHead(node* &head,node* &tail, int d){

    //empty list
    if (head==NULL)
    {
        node*temp = new node(d);
        head=temp;
        tail=temp;
    }

    else{
    node* temp = new node(d);
    temp->next = head;
    head->prev= temp;
    head = temp;
    }

}

//Length of the String
int getlengthofnode(node*head){

    int length = 0;
    node*temp=head;
    while (temp!=NULL)
    {
        length++;
        temp= temp->next;

    }

    return length;
    
}

void insertAtTail(node* &tail, node* &head,int d){

     if (tail==NULL)
    {
        node*temp = new node(d);
        tail=temp;
        head=temp;
    }
    else{
    node * temp = new node(d);
    tail->next= temp;
    temp->prev = tail;
    tail= temp;
    }
}

void insertAtPosition(node* &tail, node* & head, int position, int d) {


    //insert at Start
    if(position == 1) {
        insertAtHead(head,tail, d);
        return;
    }

    node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,head,d);
        return ;
    }

    //creating a node for d
    node* nodeToInsert = new node(d);

    nodeToInsert -> next = temp -> next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;

}


void deleteNode(int position, node* & head) { 

    //deleting first or start node
    if(position == 1) {
        node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp-> next = NULL;
        delete temp;


    }
    else
    {
        //deleting any middle node or last node
        node* curr = head;
        node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

       curr->prev=NULL;
       prev->next = curr->next;
       curr->next =NULL;
        delete curr;


    //Deleting last node   

    }
}



int main(){

    node* node1 = new node(10);
    
    node*head=node1;

    node*tail=node1;

    print(head);
    cout<<getlengthofnode(head)<<endl;
    insertAtTail(tail,head,11);
    insertAtHead(head,tail,9);
    print(head);

    insertAtPosition(tail,head,2,7);
    print(head);

    deleteNode(2,head);
    print(head);

    return 0;
}