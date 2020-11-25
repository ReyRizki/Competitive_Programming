#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;

        SinglyLinkedList() {
            this->head = nullptr;
        }

};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep, ofstream& fout) {
    while (node) {
        fout << node->data;

        node = node->next;

        if (node) {
            fout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

SinglyLinkedListNode* getTail(SinglyLinkedListNode* head)
{
    if (head == NULL)
        return head;

    SinglyLinkedListNode* current = head;
    SinglyLinkedListNode* peek = current->next;

    while(peek != NULL)
    {
        current = peek;
        peek = peek->next;
    }

    return current;
}

// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* node = new SinglyLinkedListNode(data);
	
    if (head == NULL)
        head = node;
    else
    {
        SinglyLinkedListNode* tail = getTail(head);

        tail->next = node;
    }
    
    return head;
}

void printLinkedList(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* current = head;
    
    if (current == NULL)
        return;

    do
    {
        cout << current->data << "\n";
    } while ((current = current->next) != NULL);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    SinglyLinkedList* llist = new SinglyLinkedList();

    int llist_count;
    cin >> llist_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

  
    for (int i = 0; i < llist_count; i++) {
        int llist_item;
        cin >> llist_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    	SinglyLinkedListNode* llist_head = insertNodeAtTail(llist->head, llist_item);
      	llist->head = llist_head;
    }


    print_singly_linked_list(llist->head, "\n", fout);
    fout << "\n";

    printLinkedList(llist->head);

    free_singly_linked_list(llist->head);

    fout.close();

    return 0;
}
