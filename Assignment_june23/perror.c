/*It shows the most recent error that was occurred before the function was called. 
 * Basically, it prints one error message to stderr. */

#include <stdio.h>
#include <errno.h>
int main()
{
    //1
    perror("error found");
    printf("errno = %d\n", errno);
    FILE *f;
    //2
    if ((f = fopen("file.txt", "r")) == NULL)
    {
        //3
        perror("Error opening the file");
        printf("errno = %d\n", errno);
    }
    //4
    perror("error found");
    printf("errno = %d\n", errno);
}

#if 0

sampath@sampath-HP-EliteBook-840-G1:~/Xilinx/june23Valgrind$ vim perror.c
sampath@sampath-HP-EliteBook-840-G1:~/Xilinx/june23Valgrind$ gcc perror.c -o perror
sampath@sampath-HP-EliteBook-840-G1:~/Xilinx/june23Valgrind$ ./perror 
error found: Success
errno = 0
Error opening the file: No such file or directory
errno = 2
error found: No such file or directory
errno = 2

#endif
