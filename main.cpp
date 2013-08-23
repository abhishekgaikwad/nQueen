#include <iostream>
#include <cmath>
#include "nQueen.h"

using namespace std;

int main()
{
	nQueen q = nQueen(8) ;
	q.queenConfig(0);
	cout << q.solutionCount() << endl ;
	return 0;
}
