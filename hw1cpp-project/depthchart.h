/**
 * Depth chart for a basketball team
 */
#ifndef DEPTHCHART_H
#define DEPTHCHART_H
#include "player.h"
#include "list.h"

class DepthChart
{
    public:
        static const int
            PG = 0, // point guard
            SG = 1, // shooting guard
            SF = 2, // small forward
            PF = 3, // power forward
            C = 4,  // center
            NUM_POSITIONS = 5; // for basketball
        /** Default constructor */
        DepthChart();
        /** Default destructor */
        virtual ~DepthChart();
        /** Add a player to the depth chart at a specific position */
        void add(string position, Player *player);
        /** Display the complete depth chart */
        void display() const;
    protected:
        List chart[NUM_POSITIONS];
};

#endif // DEPTHCHART_H
