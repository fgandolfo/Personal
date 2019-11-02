#include <iostream>
#include <cassert>

double 	f(double);
int 	y(int);
int		Id(int);
int		Suc(int);
int		Neg(int);
int		Double(int);
double 	valabs(double);
double 	absoluto(double);

int main () {
	// función f
	assert (-7 == f(-4));
	assert (0 == f(-0.5));
	assert (7 == f(3));	

	// función y
	assert (42 == y(-5));
	assert (42 == y(0));
	assert (42 == y(5));
	
	// función Id
	assert (-3 == Id(-3));
	assert (0 == Id(0));
	assert (5 == Id(5));

	// función Suc
	assert (-2 == Suc(-3));
	assert (0 == Suc(-1));
	assert (6 == Suc(5));

	// función Neg
	assert (3 == Neg(-3));
	assert (0 == Neg(0));
	assert (-5 == Neg(5));

	// función Double
	assert (-4 == Double(-2));
	assert (0 == Double(0));
	assert (10 == Double(5));
	
	// funcion valabs
	assert (2 == valabs(-2));
	assert (0 == valabs(0));
	assert (5 == valabs(5));

	// funcion absoluto
	assert (2 == absoluto(-2));
	assert (0 == absoluto(0));
	assert (5 == absoluto(5));
}

double 	f(double x){ return 2*x+1; }
int 	y(int x){ return 42; }
int		Id(int x){ return x; }
int		Suc(int x){ return x+1; }
int		Neg(int x){ return -x; }
int		Double(int n){return 2*n; }
double 	valabs(double x) {
	if (x<0)					// función partida con condicional
		return -x;
	else {return x;}
}
double absoluto (double x) { return x<0 ?  -x : x; } //función partida con condicional ternario
