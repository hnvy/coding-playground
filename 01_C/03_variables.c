// TITLE: 03_variables.c

// We can declare a variable. Let's have look:

#include <stdio.h> // Same old, same old...

int main()
{
	// It seems that, usually, we should declare the variables before we create any statements.
	int digit1, digit2, total; // ~int~ is a special keyword which C reads. It stands for "integer". You can replace the words which follow with whatever you like.
	float decimal; // ~float~ is another special word. It stands for floating-point. You can replace the word "decimal" with whatever you like.

	/*
	// We can declare many things at once:
	int variable1, variable2, variable3, variable4, variable5; // All of these will be classed as integers.
	*/

	// Now, the stuff we declared above are all EMPTY! Let's give (i.e., assign) them some values. You must ALWAYS declare before assign.

	digit1 = 30;
	digit2 = 326;
	decimal = 23.827f; // Since this has a decimal point, it seems that people recommend that we add the letter ~f~ at the end.

	total = digit1*digit2; // Multiply the two digits.

	printf("Multiplying %d and %d will give us %d", digit1, digit2, total);
	// Ta-daaa! We used the placeholders (which we learned about in the 02_placeholders.c lesson) to create a beautiful ~printf~ statement!
	
	// If you want to print a float value to a certain number of decimal places, then you can do something like this
	printf("\n\nThis is the decimal number to 2 d.p.: %.2f", decimal);
	// Note how we have this ~.2f~? Well, this is to tell C that we want the answer to be rounded to 2 decimal places.
}

// ** TEST 4: Test time! Based on the concepts above, write a program which prints out the solution for ~((12+90)/18.23)*50~. Store each number in an appropriate variable. Round the answer to 4 decimal places.

/* 
#include <stdio.h>

int main()
{
	int d1, d2, d3;
	float decimal, result;

	d1 = 12;
	d2 = 90;
	d3 = 50;

	decimal = 18.23f;

	result = ((d1+d2)/decimal)*d3;

	printf("The answer to ((%d+%d)/%f)*%d = 'fg' %.4f", d1, d2, decimal, d3, result);

	return(0);
}
*/
