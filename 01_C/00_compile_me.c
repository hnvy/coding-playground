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

	total = digit1 * digit2; // Multiply the two digits.

	printf("Multiplying %d and %d will give us %.3f", digit1, digit2, total);
	// Ta-daaa! We used the placeholders (which we learned about in the 02_placeholders.c lesson) to create a beautiful ~printf~ statement!
	// ^ Note how we have this ~.3f~? Well, this is to tell C that we want the answer to 3 decimal places.
}
