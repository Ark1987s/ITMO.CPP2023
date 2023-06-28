#include "triangle2.h"
#include <cmath>


Triangle2::Triangle2(Dot* d1, Dot* d2, Dot* d3) : a(d1), b(d2), c(d3)
{
	ab = a->distanceTo(*b);
	bc = b->distanceTo(*c);
	ca = c->distanceTo(*a);
}


double Triangle2::perimeter() 
{
	return ab + bc + ca;
}

double Triangle2::square()
{
	double pol = perimeter() / 2.0;
	return sqrt(pol * (pol - ab) * (pol - bc) * (pol - ca));
}