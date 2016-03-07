/**
 * Implementation code related to depth chart for a basketball team
 */
#include "depthchart.h"

/** constructor -- nothing to do since array has a static size */
DepthChart::DepthChart()
{
}

/** destructor */
DepthChart::~DepthChart()
{
}

/** Add a player to the depth chart at a specific position
 * @param position  add to this position
 * @param player    whom to add
 */
void DepthChart::add(string position, Player *player) {
    if ("PG" == position)
        chart[PG].add(player);
    else if ("SG" == position)
        chart[SG].add(player);
    else if ("SF" == position)
        chart[SF].add(player);
    else if ("PF" == position)
        chart[PF].add(player);
    else if ("C" == position)
        chart[C].add(player);
    else cerr << "Invalid position" << endl;
}

/** Display the complete depth chart
 *  Note the repetition of code with slight changes
 */
void DepthChart::display() const {
    cout << "PG:";
    chart[PG].display();
    cout << endl;
    cout << "SG:";
    chart[SG].display();
    cout << endl;
    cout << "SF:";
    chart[SF].display();
    cout << endl;
    cout << "PF:";
    chart[PF].display();
    cout << endl;
    cout << "C:";
    chart[C].display();
    cout << endl;
}
