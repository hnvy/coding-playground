// TITLE: 01_intro.c

/*
The following is what we call a dummy program. It literally does nothing:
~main () {}~

Let's print the good old "Hello, World!"

~include~ is a called a pre-processor directive. This tells the compiler "What's up old friend, next time you compile this text file, mind including the contents of the stdio.h (aka standard input/output) file? Okay, cool. Bye!"

The ~stdio.h~ is called a header file. It includes stuff (aka definitions) that we can use in our program. One of these definitions is... you guessed it, ~puts~.

In fact, I realised that you can view the content of this ~stdio.h~ file.

On Linux, it is located at ~/usr/include/stdio.h~.
*/

#include <stdio.h>

int main() // This is called the entry point to the C program.
{
	puts("Hello, World!");
	return(0);
}

// ** TEST 1: Test time! Write a program (from memory!) That prints out the following text: "This is my first ever mini C program. It's not much, but it's honest work..."

