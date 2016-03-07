/**
 * Implementation for singly-linked list of Players
 */
#include "list.h"
#include <iostream>

/**
 * Node for a singly-linked list of Players
 */
struct Node {
    Player * value;
    Node * next;
};

/**
 * Default constructor for singly-linked list
 */
List::List(): head(nullptr)
{
}

/**
 * Recursive help function to copy a list
 */
Node * rec_copy(Node * source) {
    if (nullptr == source)
        return nullptr;
    else {
        Node * newNode = new Node;
        newNode->value = source->value;
        newNode->next = rec_copy(source->next);
        return newNode;
    }
}

/** Copy constructor */
List::List(const List & source) : head(rec_copy(source.head)) {
}

/** Assignment operator */
List & List::operator=(const List & source) {
    head = rec_copy(source.head);
    return *this;
}


/**
 * Recursive helper function to deallocate list
 */
void rec_delete(Node * nextNode) {
    if (nullptr == nextNode) return;
    rec_delete(nextNode->next);
    delete nextNode;
}

/**
 * Destructor for singly-linked list
 */
List::~List()
{
    rec_delete(head);
}

/** add an element
 * @param player    player to add to list
 */
void List::add(Player * player) {
    Node * newNode = new Node;
    newNode->value = player;
    newNode->next = head;
    head = newNode;
}

/**
 * recursive helper function to display a list, in reverse order
 */
void rec_display(Node * nextNode) {
    if (nullptr == nextNode)
        return;
    rec_display(nextNode->next);
    cout << '\t' << *nextNode->value << endl;
}

/**
 * display the elements of the list, each on a separate line
 */
void List::display() const {
    rec_display(head);
    cout << endl;
}
