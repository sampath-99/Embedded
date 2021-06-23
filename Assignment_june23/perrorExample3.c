/* perror.c -- simplifies error reporting in unifying way */

#include <stdio.h>
#include <error.h>
#include <stdlib.h>
 
int main(int argc, char *argv[])
{
    FILE *fp;
 
    if (argc == 1) {
        puts("File Argument Missing");
        exit(EXIT_FAILURE);
    }
 
    fp = fopen(argv[1], "r");
 
    if (fp == NULL) {
        perror("File Open");
        exit(EXIT_FAILURE);
    }
 
    return 0;
}


#if 0

sampath@sampath-HP-EliteBook-840-G1:~/Xilinx/june23Valgrind$ gcc  perrorExample3.c  -o perror3
sampath@sampath-HP-EliteBook-840-G1:~/Xilinx/june23Valgrind$ ./perror3 
File Argument Missing
sampath@sampath-HP-EliteBook-840-G1:~/Xilinx/june23Valgrind$ ./perror3 test.txt
File Open: No such file or directory

#endif
