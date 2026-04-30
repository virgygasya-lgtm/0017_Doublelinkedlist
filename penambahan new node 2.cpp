#include <iostream>
#include <string>
using namespace std; 

class Node
{
public:
    int noMhs;
    Node *next;
    Node *prev;
};

class DoubleLinkedList
{
private:
    Node *START;
}

public:
    DoubleLinkedList()
    {
        START = NULL;
    }

     void addNode()
    {
        int nim;
        cout << "Enter the roll number of the student: ";
        cin >> nim;

        Node *newnode = new Node();

        newnode->noMhs = nim;
    }

    if (START == NULL)
        {
            if (START != NULL && nim == START->noMhs)
            {
                cout << "Duplicate roll numbers not allowed" << endl;
                return;
            }
        }
        {

         newnode->next = START;

            if (START != NULL)
                START->prev = newnode;

            newnode->prev = NULL;

            START = newnode;
            return;
        }

        Node *current = START;
        while (current->next != NULL && current->next->noMhs < nim)
        {
            current = current->next;
        }

        if (current->next != NULL && nim == current->next->noMhs)
        {
            cout << "Duplicate roll numbers not allowed" << endl;
            return;
        }

        Node *newnode2 = new Node();
        newnode2->noMhs = nim;

        newnode2->next = current->next;
        newnode2->prev = current;

        if (current->next != NULL)
            current->next->prev = newnode2;

        current->next = newnode2;
    