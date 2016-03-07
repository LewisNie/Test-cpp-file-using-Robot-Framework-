/**
 * Represents menu of choices for a program
 */
#ifndef MENU_H
#define MENU_H
#include <string>

using namespace std;

class Menu
{
    public:
        /** Default constructor */
        Menu(string _choices[], int _numChoices);
        /** Copy constructor */
        Menu(const Menu & source);
        /** Assignment operator */
        Menu & operator=(const Menu & source);
        /** Default destructor */
        virtual ~Menu();
        /** Get the id of the next choice from the user */
        int get();
    protected:
        int numChoices; // number of menu choices
        string * choices; // array of descriptions of choices
};

#endif // MENU_H
