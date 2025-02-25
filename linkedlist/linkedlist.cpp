#include<iostream>
using namespace std;

 class node {
    public:
    int value;
    node* next;

    node(int data){
        value = data;
        next = NULL;
    }
 };

 void insertionathead(node* &head,int value){

    node* new_node = new node(value);
    new_node->next=head;
    head=new_node;
 }

 void insertattail(node* &head,int value){
    node* new_node = new node(value);

    node* temp = head;
    while (temp->next!=NULL)
    {
        /* code */
       temp=temp->next;

    }
    temp->next= new_node;
    
 }

 void insertattailbytailnode(node* &tail,int value){

    node* temp = new node(value);
    tail->next = temp;
    tail= tail->next;  // or tail= temp;
 }

 void insertionatnthposition(node* &head, int value, int pos) {
    if (pos == 0) {
        insertionathead(head, value);
        return;
    }
    node* new_node = new node(value);
    node* temp = head;
    int current_pos = 0;
    while (current_pos != pos-1) {
        temp = temp->next;
        current_pos++;
    }
    new_node->next = temp->next;// Naye Node ka Next Set karna
    temp->next = new_node;//Pichle Node ka Next Update karna
    /*

    1.new_node->next = temp->next;// Naye Node ka Next Set karna
    Before
    temp -> [next_node] -> ...
              |
            [new_node]


    2. temp->next = new_node;//Pichle Node ka Next Update karna    
    After

    temp -> [new_node] -> [next_node] -> ...    

       */    
}

void updateatkelement(node* &head, int k,int value){

    node* temp= head;
    int current_postition=0;
    while(current_postition!=k)
    {
        /* code */
        temp = temp->next;
        current_postition++;
        
    }
   //temp will be pointing to kth position
    temp->value=value;

  // We can use for loop also like this
  
//   for (int i = 0; i < k; i++)
//  {
//     /* code */
//     temp= temp->next;
//  }
//   temp->value=value;
 
    
}

void deletehead(node* &head){
      
      node* temp=head;// node to be deleted
      head=head->next;
      free(temp);
}

void deleteattail(node* &head){
    node* second_last = head;
    while(second_last->next->next!=NULL)
    {
        /* code */
        second_last=second_last->next;
    }

    // now the second_last is points to second_last element
    node* temp = second_last->next;
    second_last->next=NULL;
    free(temp);

    
}
 
void deleteatposition(node* &head,int pos){
    if (pos=0)
    {
        deleteattail(head);
        return;

    }

    int curr_pos=0;
    node* prev = head;
    while (curr_pos!=pos-1)
    {
        /* code */
        prev=prev->next;
        curr_pos++;
    }
  // prev is pointing to node at pos-1
    node* temp=prev->next;//node to be deleted
    prev->next=prev->next->next;
    free(temp);
    
    
}
 void display(node* head){
    node* temp = head;
    while (temp!=NULL)
    {
        /* code */
        cout<<temp->value<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    
 }

int main(){

    node* head = NULL;
    insertionathead(head,23);
    insertionathead(head,45);
    insertionathead(head,7);
    insertionathead(head,9);
    insertattail(head,34);
    // display(head);
    insertionatnthposition(head,6,2);
    display(head);
    updateatkelement(head,3,8);
    // deletehead(head);
    // display(head);
    // deleteattail(head);
    // display(head);
    deleteatposition(head,2);
    display(head);

    

    return 0;
}