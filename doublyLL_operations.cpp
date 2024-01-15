#include <iostream>

using namespace std;

struct Node
{

    int data;

    Node *next;

    Node *prev;
};

class DoublyLinkedList
{

private:
    Node *head;

public:
    DoublyLinkedList()

        : head(NULL)

    {
    }

    void insertAtStart(int data)

    {

        Node *newNode = new Node;

        newNode->data = data;

        newNode->next = head;

        newNode->prev = NULL;

        if (head != NULL)

            head->prev = newNode;

        head = newNode;
    }

    void deleteNode(int data)

    {

        Node *temp = head;

        while (temp != NULL && temp->data != data)

            temp = temp->next;

        if (temp == NULL)

            return;

        if (temp->prev != NULL)

            temp->prev->next = temp->next;

        else

            head = temp->next;

        if (temp->next != NULL)

            temp->next->prev = temp->prev;

        delete temp;
    }

    void printList()

    {

        Node *temp = head;

        while (temp != NULL)
        {

            std::cout << temp->data << " ";

            temp = temp->next;
        }

        std::cout << std::endl;
    }
};

int main()
{

    DoublyLinkedList dll;

    dll.insertAtStart(1);

    dll.insertAtStart(2);

    dll.insertAtStart(3);

    dll.insertAtStart(4);

    dll.insertAtStart(5);

    std::cout << "Original Doubly Linked List: ";

    dll.printList();

    dll.deleteNode(2);

    std::cout << "Doubly Linked List after deletion: ";

    dll.printList();

    return 0;
}
