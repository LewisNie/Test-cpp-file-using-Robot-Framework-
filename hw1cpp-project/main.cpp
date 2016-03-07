/**
 * Crude depth chart management
 * In particular, it is "append-only", so a player can only
 * be added, and cannot be added in front of another player
 * at a position.
 * Needless to say, there is minimal error handling
 */
#include <iostream>
#include "menu.h"
#include "depthchart.h"
#include "player.h"

using namespace std;

int main()
{
    DepthChart chart;
    string commands[] = {"Quit program", "Add to position", "Display depth chart"};
    const int QUIT = 0, // 0 is code to quit the program
              ADD = 1,
              DISPLAY = 2,
              NUM_COMMANDS = 3;
    Menu choices(commands, NUM_COMMANDS);

    int choice = -1;
    // temporary variables to hold input values
    string playerFirstName, playerLastName, position;
    int playerNumber;

    cout << "Welcome to Depth Chart Manager 0.01" << endl;
    while ((choice = choices.get()) != QUIT) {
        // process the choice
        switch (choice) {
            case ADD:
                cout << "Please enter the player's first name: ";
                cin >> playerFirstName;
                cout << "Please enter the player's last name: ";
                cin >> playerLastName;
                cout << "Please enter the player's uniform number: ";
                cin >> playerNumber;
                cout << "Please enter the player's position." << endl;
                cout << "Valid positions are PG, SG, SF, PF, C : ";
                cin >> position;
                chart.add(position, new Player(playerFirstName, playerLastName, playerNumber));
                break;
            case DISPLAY:
                chart.display();
                break;
            default:
                cerr << "Invalid choice: " << choice << endl;
                cerr << "Please try again" << endl;
                break;
        }
    }

    return 0;
}
