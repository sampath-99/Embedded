/*1.example for memory leaking*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    char *x = malloc(100); /* or, in C++, "char *x = new char[100] */
    return 0;
}

#if 0

sampath@sampath-HP-EliteBook-840-G1:~/Xilinx/june23Valgrind$ gcc -g valgrindExample.c -o vlgnd
sampath@sampath-HP-EliteBook-840-G1:~/Xilinx/june23Valgrind$ valgrind --tool=memcheck --leak-check=yes --show-reachable=yes ./vlgnd 
==4790== Memcheck, a memory error detector
==4790== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4790== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==4790== Command: ./vlgnd
==4790== 
==4790== 
==4790== HEAP SUMMARY:
==4790==     in use at exit: 100 bytes in 1 blocks
==4790==   total heap usage: 1 allocs, 0 frees, 100 bytes allocated
==4790== 
==4790== 100 bytes in 1 blocks are definitely lost in loss record 1 of 1
==4790==    at 0x4C2FB0F: malloc (in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
==4790==    by 0x10865B: main (valgrindExample.c:8)
==4790== 
==4790== LEAK SUMMARY:
==4790==    definitely lost: 100 bytes in 1 blocks
==4790==    indirectly lost: 0 bytes in 0 blocks
==4790==      possibly lost: 0 bytes in 0 blocks
==4790==    still reachable: 0 bytes in 0 blocks
==4790==         suppressed: 0 bytes in 0 blocks
==4790== 
==4790== For counts of detected and suppressed errors, rerun with: -v
==4790== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

#endif
