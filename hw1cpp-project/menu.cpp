/**
 * Implementation code related to menu of choices for a program
 */
#include "Menu.h"
#include <iostream>

/**
 * Constructor of menu
 *
 * @param choices       array of descriptions of choices
 * @param numChoices    number of possible choices
 */
Menu::Menu(string _choices[], int _numChoices): numChoices(_numChoices), choices(new string[numChoices])
{
    for (int nextChoice = 0; nextChoice < numChoices; ++nextChoice)
        choices[nextChoice] = _choices[nextChoice];
}

/**
 * Copy constructor
 *
 * @param source    menu to copy
 */
Menu::Menu(const Menu & source): numChoices(source.numChoices), choices(new string[numChoices])
{
    for (int nextChoice = 0; nextChoice < numChoices; ++nextChoice)
        choices[nextChoice] = source.choices[nextChoice];
}

/**
 * Assignment operator
 *
 * @param source    menu to copy
 */
Menu & Menu::operator=(const Menu & source) {
    numChoices = source.numChoices;
    choices = new string[numChoices];
    for (int nextChoice = 0; nextChoice < numChoices; ++nextChoice)
        choices[nextChoice] = source.choices[nextChoice];
    return *this;
}

/**
 * Destructor
 */
Menu::~Menu()
{
    delete[] choices;
}

/**
 * Gets next choice made by user -- does not do error checking
 * @return integer code for next command
 */
int Menu::get() {
    int choice = -1;
    cout << "Please choose one of the following: " << endl;
    for (int i = 0; i < numChoices; ++i) {
        cout << i << ". " << choices[i] << endl;
    }
    cin >> choice;
    return choice;

}
