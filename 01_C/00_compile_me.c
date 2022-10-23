#include <stdio.h> // Same old, same old...

int main()
{
	/*
	Sometimes, we might declare a variable, call it somewhere (e.g., in a ~printf~ statement), and get a weird error.

	This might be because we have not assigned a value to that variable.

	The issue outlined about can be easily overcome by initialising the variable with a value. Like so:

	The following program will calculate the area of a rectangle...
	*/

	int width = 5, height = 10, area;

	area = width * height;

	printf("The area of the square is\n%d * %d = %d", height, width, area);

	return(0);
}
