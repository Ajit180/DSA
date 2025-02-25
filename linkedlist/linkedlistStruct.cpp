#include <iostream>
using namespace std;

// Node defined as a struct (default access is public)
struct Node {
    int data;
    Node* next;

    Node(int val) { // Constructor
        data = val;
        next = nullptr;
    }
};

// Using struct in a linked list
class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list;
    list.addAtHead(10);
    list.addAtHead(20);
    list.display(); // Output: 20 -> 10 -> NULL

    return 0;
}
