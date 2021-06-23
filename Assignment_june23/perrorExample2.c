/*
 * *The perror() function prints the following to stderr:
1.the given prefix, followed by “: ”
2.the error message returned by strerror() for the current value of errno
3.a newline character 

*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
  {
    FILE *fp;

    fp = fopen( "data.fil", "r" );
    if( fp == NULL ) {
      perror("\nUnable to open file" );
      return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
  }


#if 0
sampath@sampath-HP-EliteBook-840-G1:~/Xilinx/june23Valgrind$ vim  perrorExample2.c 
sampath@sampath-HP-EliteBook-840-G1:~/Xilinx/june23Valgrind$ gcc perrorExample2.c -o perror2
sampath@sampath-HP-EliteBook-840-G1:~/Xilinx/june23Valgrind$ ./perror2

Unable to open file: No such file or directory

#endif
