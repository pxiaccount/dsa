#include <fstream>
#include <iostream>
using namespace std;

class Node {
	public:
		int data;
		Node* next;
	
	Node(int val) {
		data = val;
		next = nullptr;
	}
};

class LinkedLists {
	private:
		Node* head;

	public:
		LinkedLists() {
			head = nullptr;
		}




		void insert_at_end(int data) {
			Node* current = head;
			Node* newNode = new Node(data);
	
			if (head == nullptr) {
				head = newNode;
				return;
			}

			while (current->next) {
				current = current->next;
			}

			current->next = newNode;
		}

		void print() {
			Node* current = head;
	
			while (current) {
				cout << current->data << " --> ";
				current = current->next;
			}
		}
};

int main() {
	LinkedLists x;
	x.insert_at_end(3);
	x.insert_at_end(2);
	x.insert_at_end(1);
	x.print();
}
