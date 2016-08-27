/**
    @file brainfuck2c.c
    @author kdbeall,

    Simple example of a source to source compiler;
    compiles Brainfuck to C.

    This program will take input from the standard input (piped in)
    and then output to standard output (piped out) from the terimal.

    Input will be a Brainfuck source file.
    Output will be the equivalent C source.

 */

//Begin include directives.
#include <stdio.h>
#include <stdlib.h>

//End include directives.

//Begin macros.
#define ARRAY_SIZE 30000

//End macros.


//Begin prototypes.

/**
    Creates the array and pointer at the start of our compiled Brainfuck program in C.

 */
void createArray();




//End prototypes.


/**
    Begins compilation.
    @return program exit status
 */
int main()
{


  return EXIT_SUCCESS;
}

void createArray()
{
  printf("char array[%d] = {0};", ARRAY_SIZE);
  printf("\n");
  printf("char *ptr = array;");
  printf("\n");

}
