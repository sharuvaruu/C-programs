#include <stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node* next;
};

void removeLoop(struct Node*, struct Node*);

int detectAndRemoveLoop(struct Node* list)
{
	struct Node *slow= list, *fast= list;


	while (slow && fast && fast->next) {
		slow= slow->next;
		fast = fast->next->next;

		if (slow== fast) {
			removeLoop(slow, list);

			return 1;
		}
	}

	return 0;
}

void removeLoop(struct Node* loop_node, struct Node* head)
{
	struct Node* ptr1 = loop_node;
	struct Node* ptr2 = loop_node;
	unsigned int k = 1, i;
	while (ptr1->next != ptr2) {
		ptr1 = ptr1->next;
		k++;
	}
	ptr1 = head;
	ptr2 = head;
	for (i = 0; i < k; i++)
		ptr2 = ptr2->next;
	while (ptr2 != ptr1) {
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;
	}
	while (ptr2->next != ptr1)
		ptr2 = ptr2->next;

	ptr2->next = NULL;
}

void printList(struct Node* node)
{
	while (node != NULL) {
		printf("%d \n ",node->data);
		node = node->next;
	}
}

struct Node* newNode(int key)
{
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node*));
	temp->data = key;
	temp->next = NULL;
	return temp;
}

int main()
{
	struct Node* head = newNode(50);
	head->next = newNode(20);
	head->next->next = newNode(15);
	head->next->next->next = newNode(4);
	head->next->next->next->next = newNode(10);
	head->next->next->next->next->next = head->next->next;
	detectAndRemoveLoop(head);
	printf("Linked List after removing loop \n");
	printList(head);
	return 0;
}

