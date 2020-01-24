#include <math.h>
#include "RANDOM.h"
long double Random::Seed = 1;
float Random::rand( long float max, long float mod1) {
	Random::Seed += cos(Random::Seed)*max;
	return Seed; 
}
 float Random::rand( long float max, long float c1, long float mod1) {
	 long float tempseed = Random::Seed; 
	 Random::Seed += cos(cos(Random::Seed*c1)*max)*cos(max+c1)*max;
	 return cos(cos(tempseed * c1) * max) * cos(max + c1) * max;
}