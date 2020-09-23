#ifndef LINKED_LISTS_NODESLIST_H
#define LINKED_LISTS_NODESLIST_H

#include <string>

using namespace std;

struct Node
{
    string word;
    Node *next = nullptr;
};

class NodesList
{
private:
    Node *head;

public:
    int n_nodes;
    NodesList()
    {
        n_nodes = 0;
        head = nullptr;
    }
    void printList(Node *ptr);
    void printListBackward(Node *ptr);
    void insertNode(string word);
    Node* getHeadPtr();
};

#endif

