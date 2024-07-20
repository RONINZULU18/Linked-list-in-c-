#include <iostream>
using namespace std;

// Define the structure for a node
class Node {
public:
    int data;
    Node* next;

    // Constructor to create a new node
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Define the class for the linked list
class LinkedList {
private:
    Node* head;

public:
    // Constructor to initialize the head
    LinkedList() {
        head = nullptr;
    }

    // Function to append a node to the end of the list
    void append(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Function to add a node at the beginning of the list
    void prepend(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    // Function to print the linked list
    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

// Main function to test the linked list
int main() {
    LinkedList list;

    list.append(10);
    list.append(20);
    list.append(30);
    list.append(40);

    cout << "Original List: ";
    list.printList();

    list.prepend(5);
    cout << "After Prepending 5: ";
    list.printList();

    return 0;
}
