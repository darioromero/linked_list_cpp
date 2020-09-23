#include <iostream>
#include "NodesList.h"

using namespace std;

void NodesList::insertNode(string word)
{
    Node *tmp = new Node;
    tmp->word = word;
    tmp->next = head;
    /* set new address for head */
    head = tmp;
    n_nodes++;
    cout << "inserted node [" << n_nodes << "] - ";
    cout << "head->word: [" << head->word << "] - ";
    cout << "tmp->next: [" << tmp->next << "] - ";
    cout << "new head: [" << head << "]" << endl;
}

void NodesList::printList(Node *ptr) {
    //cout << "printList" << endl;
    //cout << "entry ptr: [" << ptr << "]" << endl;
    //cout << "ptr->next: [" << ptr->next << "]" << endl;
    if (ptr->next != nullptr) {
        //cout << "exit ptr: [" << ptr->next << "]" << endl;
        //cout << "------------------------" << endl;
        printList(ptr->next);
        //cout << "in-side [ptr->next != nullptr]: [" << ptr->word;
        //cout << "]" << endl;
        //return ptr->word;
    }
    //cout << "last ptr->next: [" << ptr->next << "]" << endl;
    //cout << "out-side [ptr->next != nullptr]: [" << ptr->word;
    //cout << "]" << endl;
    cout << ptr->word << " ";
}

void NodesList::printListBackward(Node *ptr) {
    cout << ptr->word << " ";
    if (ptr->next != nullptr) {
        printListBackward(ptr->next);
    }
}

Node *NodesList::getHeadPtr() {
    //cout << "head: " << head << endl;
    return head;
}
