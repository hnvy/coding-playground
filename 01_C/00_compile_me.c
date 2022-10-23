// TITLE: 02_placeholders.c

// We can use placeholders in order to "place" values in a string. Let's have a look:

#include <stdio.h> // We are going to use the ~printf~ function, so therefore we need to include the ~stdio.h~ header.

int main()
{
	printf("Hello, here we have a number in the string format (so, really, it's not a number): 73498\n"); // The ~\n~ is simply telling the program to start a new line (this is called an escape sequence). There is a whole massive list of these escape sequences: ~\t~ (for a tab), ~\\~ (for a literal slash character)...

	printf("Woah, now we can use the placeholder print out an actual number: %d\n", 847562); // As can be seen, there is now a ~%d~ inside the double quotes. This is the placeholder. The number 847562 corresponds to that ~%d~.

	printf("Let's experiment with some of these placeholders, shall we?\n");

	printf("We can add many placeholders into one string, like so: (first number) %d - (second number) %d = (third number) %d\n", 10, 4, 6); // As can be seen, 10 corresponds to the first ~%d~, 4 corresponds to the second ~%d~, and finally, 6 corresponds to the third ~%d~. Cool, huh?

	printf("Interestingly, we can make C do the maths for us! Like so: %d - %d = %d", 10, 4, 10-4); // The last argument (i.e., 10-4) makes C actually place the result of 10-4.

	printf("\n\n\n"); // Printing 3 new lines to leave some space.
	
	printf("There is a\nnew line going\nto be inserted\nright here!\n\n");

	printf("We can place some %s", "dinosaurs"); // You guessed it! ~%s~ is just like ~%d~, but instead, it's for strings rather than digits. You can replace "dinosaurs" with any word you like!

	return(0);
}

// ** TEST 2: Test time! Write a program which prints out the following: There are many numbers in life, some arer big (like 297563476) and others are small (such as 3). Use the correct placeholder for the numbers.
