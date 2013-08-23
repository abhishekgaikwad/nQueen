/*
 * nQueen.h
 *
 *  Created on: Aug 23, 2013
 *      Author: Abhishek
 */

#ifndef NQUEEN_H_
#define NQUEEN_H_

class nQueen {
public:
	nQueen(int i) ;
	bool canPlaceQueen(int x, int y) ;
	void queenConfig(int config=0) ;
	void print() ;
	int solutionCount();

private:
	int noOfQueens ;
	int noOfSolutions ;
	int * queensInRow ;


};

#endif /* NQUEEN_H_ */
