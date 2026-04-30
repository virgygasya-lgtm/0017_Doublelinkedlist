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
    }

    void deleteNode()
    {
        if (START == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }

        int rollNo;
        cout << "Enter the roll number of the student whose record is to be deleted: ";
        cin >> rollNo;

        Node *current = START;

        while (current != NULL && current->noMhs != rollNo)
        {
            current = current->next;
        }

        if (current == NULL)
        {
            cout << "Record not found" << endl;
            return;
        } 

        if (current == START)
        {
            START = current->next;

            if (START != NULL)
                START->prev = NULL;
        }
        else
        {
            if (current->next != NULL)
                current->next->prev = current->prev;

            current->prev->next = current->next;
        }

           delete current;
        cout << "Record with roll number " << rollNo << " deleted" << endl;
    }

     void traverse()
    {
        if (START == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }

          Node *currentnode = START;
        cout << "Records in ascending order of roll number are:" << endl;

        while (currentnode != NULL)
        {
            cout << currentnode->noMhs << " ";
            currentnode = currentnode->next;
        }
        cout << endl;
    }


        void reverseTraverse()
    {
        if (START == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }

        Node *currentnode = START;

        while (currentnode->next != NULL)
        {
            currentnode = currentnode->next;
        }

        cout << "Records in descending order of roll number are:" << endl;
        while (currentnode != NULL)
        {
            cout << currentnode->noMhs << " ";
            currentnode = currentnode->prev;
        }
        cout << endl;
    }
    {

       while (currentnode != NULL)
        {
            cout << currentnode->noMhs << " ";
            currentnode = currentnode->prev;
        }
        cout << endl;
    }