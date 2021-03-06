#include <iostream>
#include "plplot/plplot.h"
#include "plplot/plstream.h"

#define NSIZE 101

int main( int argc, const char *argv[] )
{

	PLFLT x[NSIZE], y[NSIZE];
	PLFLT xmin = 0., xmax = 1., ymin = 0., ymax = 100.;

	for (int i = 0; i < NSIZE; i++)
	{
		x[i] = (PLFLT) (i) / (PLFLT) (NSIZE-1);
		y[i] = ymax * x[i] * x[i];
	}

	plparseopts( &argc, argv, PL_PARSE_FULL );

	plinit();
	plenv(xmin, xmax, ymin, ymax, 0, 0);
	pllab("x", "y", "Simple PLplot demo of a 2D line plot");
	plline(NSIZE, x, y);

	plend();

	return 0;
}
