#include "Calculator.h"

double Calculator::Calculate(double x, char oper, double y)

// double data type supports decimals, handling both int and float maths.
{
	switch (oper)
	{
	case '+':
		return x + y;
	case '-':
		return x - y;
	case '*':
		return x * y;
	case '/':
		return x / y;
	default:
		return 0.0;		// default case is a fallback for User input of an incorrect operator.
	}
}
