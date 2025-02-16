#include<iostream>
using namespace std;

class node {
public:
    int value;
    node* next;

    node(int data) {
        value = data;
        next = NULL;
    }
};

class linkedlist {
public:
    node* head;

    linkedlist() {
        head = NULL;
    }
    void insertattail(int value) {
        node* new_node = new node(value);
        if (head == NULL) {
            head = new_node;
            return;
        }

        node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void display() {
        node* temp = head;
        while (temp != NULL) {
            cout << temp->value << "->";
            temp = temp->next;
        } 
        cout << "NULL" << endl;
    }
};

void deletealternativeelement(node* &head) {
    node* current_node = head;
    while (current_node != NULL && current_node->next != NULL) {
        node* temp = current_node->next;
        current_node->next = current_node->next->next;
        delete temp;
        current_node = current_node->next;
    }
}

int main() {
    linkedlist ll;
    ll.insertattail(4);
    ll.insertattail(5);
    ll.insertattail(7);
    ll.insertattail(9);
    ll.display();
    deletealternativeelement(ll.head);
    ll.display();

    return 0;
}
