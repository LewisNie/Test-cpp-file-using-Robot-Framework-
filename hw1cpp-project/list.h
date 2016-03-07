/** A list data structure
 * Note that the dependency on Player makes it hard to re-use
 * this class
 */
#ifndef LIST_H
#define LIST_H
#include "player.h"

struct Node;    // defined inside list.cpp

class List
{
    public:
        /** Default constructor */
        List();
        /** Copy constructor */
        List(const List & source);
        /** Assignment operator */
        List & operator=(const List & source);
        /** Default destructor */
        virtual ~List();
        /** add an element */
        void add(Player * player);
        /** display the list */
        void display() const;
    protected:
        Node * head; // points to first element in list
};

#endif // LIST_H
