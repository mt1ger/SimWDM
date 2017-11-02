#include <cstdlib>
#include <cmath>
#include "RandomVariable.h"
#include <iostream>

using namespace std;

double universal_rv () {
	return (double) rand () / (double) RAND_MAX;
}

int uniform_rv (int NumofNodes) {
	double rv = universal_rv ();
	return (int) (rv * NumofNodes);	
}

double exponential_rv (double lambda) {
    double exp;
	double rv = universal_rv (); 
    exp = ((-1) / lambda) * log (rv);
    return (exp);
}   	
