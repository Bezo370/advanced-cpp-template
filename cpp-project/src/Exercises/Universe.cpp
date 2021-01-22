// { autofold
#include "Universe.h"
// }
#include <numeric>
int Universe::CountAllStars(vector<int>& galaxies) {
    
    int total_stars = accumulate(galaxies.begin() , galaxies.end() , 0);
    return total_stars;
}

