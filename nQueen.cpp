/*
 * nQueen.cpp
 *
 *  Created on: Aug 23, 2013
 *      Author: Abhishek
 */
#include <iostream>
#include <cmath>
#include "nQueen.h"

using namespace std ;


nQueen::nQueen(int i) {
	noOfQueens = i ;
	queensInRow = new int[noOfQueens] ;
	noOfSolutions = 0 ;
}

bool nQueen::canPlaceQueen(int x, int y) {
	for(int j=0; j<x; j++) {
		if((queensInRow[j]==y) || (abs(queensInRow[j]-y) == abs(j-x)))
			return false;
	}
	return true ;
}

void nQueen::queenConfig(int k) {
	for(int i=0; i<noOfQueens; i++) {
		if(canPlaceQueen(k, i)) {
			queensInRow[k] = i ;
			if(k == noOfQueens -1)
				print() ;
			else
				queenConfig(k+1);
		}
	}
}

void nQueen::print() {
	noOfSolutions++;
	cout << endl ;

	for (int i = 0; i < noOfQueens ; i++) {

		for (int j = 0; j < noOfQueens; j++) {
			if(queensInRow[i]==j)
				cout << i + 1<< " ";
			else
				cout << "*" << " ";
		}
		cout << endl ;

	}

}

int nQueen::solutionCount() {
	return noOfSolutions;
}



