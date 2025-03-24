//Doubly linked list
#include <iostream>
using namespace std;
// Node structure for Doubly Linked List
struct Node {
int data;
Node* prev;
Node* next;
};
// Head pointer for the doubly linked list
Node* head = nullptr;
// Function to insert at the beginning
void insert_beg(int num) {
Node* new_node = new Node();
new_node->data = num;
new_node->prev = nullptr;
new_node->next = head;
if (head != nullptr)
head->prev = new_node;
head = new_node;
}
// Function to insert at the end
void insert_end(int num) {
Node* new_node = new Node();
new_node->data = num;
new_node->next = nullptr;
if (head == nullptr) {
new_node->prev = nullptr;
head = new_node;
return;
}

Node* temp = head;
while (temp->next != nullptr)
temp = temp->next;
temp->next = new_node;
new_node->prev = temp;
}
// Function to insert after a given value

void insert_after(int num, int val) {
Node* temp = head;
while (temp != nullptr && temp->data != val)
temp = temp->next;
if (temp == nullptr) {
cout << "Value " << val << " not found!\n";
return;
}
Node* new_node = new Node();
new_node->data = num;
new_node->next = temp->next;
new_node->prev = temp;
if (temp->next != nullptr)
temp->next->prev = new_node;
temp->next = new_node;
}
// Function to delete a node with a given value
void delete_node(int val) {
if (head == nullptr) {
cout << "List is empty!\n";
return;
}
Node* temp = head;
// If the node to be deleted is the first node
if (head->data == val) {
head = head->next;
if (head != nullptr)
head->prev = nullptr;
delete temp;
return;
}
while (temp != nullptr && temp->data != val)
temp = temp->next;
if (temp == nullptr) {
cout << "Value " << val << " not found!\n";
return;
}
temp->prev->next = temp->next;
if (temp->next != nullptr)
temp->next->prev = temp->prev;
delete temp;
}

// Function to display the list forward
void display_forward() {
if (head == nullptr) {
cout << "List is empty!\n";
return;
}
Node* temp = head;
cout << "List (Forward): ";
while (temp != nullptr) {
cout << temp->data << " ";
temp = temp->next;
}
cout << endl;
}
// Function to display the list backward
void display_backward() {
if (head == nullptr) {
cout << "List is empty!\n";
return;
}
Node* temp = head;
while (temp->next != nullptr)
temp = temp->next;
while (temp != nullptr) {
cout << temp->data << " ";
temp = temp->prev;
}
cout << endl;
}
// Function to count the number of nodes
int count() {
int cnt = 0;
Node* temp = head;
while (temp != nullptr) {
cnt++;
temp = temp->next;
}
return cnt;
}
// Function to search for a node
void search_list(int val) {
Node* temp = head;
int pos = 0;
while (temp != nullptr) {

pos++;
if (temp->data == val) {
cout << "Value found at position " << pos << endl;
return;
}
temp = temp->next;
}
cout << "Value not found!\n";
}
// Main menu function
int main() {
int option, num, val;
do {
cout << "\n\n***** DOUBLY LINKED LIST MENU *****";
cout << "\n1: Display list (Forward)";
cout << "\n2: Display list (Backward)";
cout << "\n3: Insert at the beginning";
cout << "\n4: Insert at the end";
cout << "\n5: Insert after a given node";
cout << "\n6: Delete a node";
cout << "\n7: Count nodes";
cout << "\n8: Search in the list";
cout << "\n9: EXIT";
cout << "\nEnter your choice: ";
cin >> option;
switch (option) {
case 1:
display_forward();
break;
case 2:
display_backward();
break;
case 3:
cout << "Enter the number to be added: ";
cin >> num;
insert_beg(num);
break;
case 4:
cout << "Enter the number to be added: ";
cin >> num;
insert_end(num);
break;
case 5:
cout << "Enter the number to be added: ";
cin >> num;

cout << "Enter the value after which to insert: ";
cin >> val;
insert_after(num, val);
break;
case 6:
cout << "Enter the value to be deleted: ";
cin >> val;
delete_node(val);
break;
case 7:
cout << "Number of nodes: " << count() << endl;
break;
case 8:
cout << "Enter the value to search: ";
cin >> val;
search_list(val);
break;
}
} while (option != 9);
return 0;
}

