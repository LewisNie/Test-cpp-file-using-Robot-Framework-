/**
 * Implementation code related to Player class
 */
#include "player.h"

/**
 * Output a player by sending the player's name to the output stream
 */
ostream & operator<<(ostream & out, const Player & player) {
    out << player.firstName << ' ' << player.lastName << ", #" << player.number;
    return out;
}
