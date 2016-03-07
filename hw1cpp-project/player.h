/**
 * Simple representation of a member of an athletic team
 */
#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <iostream>

using namespace std;

class Player
{
    public:
        /** Default constructor */
        Player(string _firstName, string _lastName, int _number): firstName(_firstName), lastName(_lastName), number(_number) {}
        /** Stream output operator */
        friend ostream & operator<<(ostream & out, const Player & player);
    protected:
        string firstName, lastName; // name of player
        int number; // uniform number of player
};

#endif // PLAYER_H
