
// Implememtation file for the Die class
#include <cstdlib> // For rand and srand
#include <ctime>   // For the time function
#include "Die.h"
using namespace std;

Die::Die(int numSides)
{
    // Set the number of sides.
    sides = numSides;
	
	// Get the system time.
    unsigned seed = time(0);

    // Seed the random number generator.
    srand(seed);    

    // Perform an initial roll.
    roll();
}

//simulates the rolling of the die (get a random value)
void Die::roll()
{ value = (rand() % sides) + 1; }

int Die::getSides()
{ return sides; }

int Die::getValue()
{ return value; }


