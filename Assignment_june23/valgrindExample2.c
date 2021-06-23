/*2.Finding Invalid Pointer Use With Valgrind */


#include<stdio.h>
#include <stdlib.h>

int main()
{
    char *x = malloc(10);
    x[10] = 'a';
    return 0;
}


#if 0

sampath@sampath-HP-EliteBook-840-G1:~/Xilinx/june23Valgrind$ gcc -g valgrindExample2.c -o vlgnd2
sampath@sampath-HP-EliteBook-840-G1:~/Xilinx/june23Valgrind$ valgrind --tool=memcheck --leak-check=yes ./vlgnd2
==4882== Memcheck, a memory error detector
==4882== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4882== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==4882== Command: ./vlgnd2
==4882== 
==4882== Invalid write of size 1
==4882==    at 0x108668: main (valgrindExample2.c:10)
==4882==  Address 0x522d04a is 0 bytes after a block of size 10 alloc'd
==4882==    at 0x4C2FB0F: malloc (in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
==4882==    by 0x10865B: main (valgrindExample2.c:9)
==4882== 
==4882== 
==4882== HEAP SUMMARY:
==4882==     in use at exit: 10 bytes in 1 blocks
==4882==   total heap usage: 1 allocs, 0 frees, 10 bytes allocated
==4882== 
==4882== 10 bytes in 1 blocks are definitely lost in loss record 1 of 1
==4882==    at 0x4C2FB0F: malloc (in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
==4882==    by 0x10865B: main (valgrindExample2.c:9)
==4882== 
==4882== LEAK SUMMARY:
==4882==    definitely lost: 10 bytes in 1 blocks
==4882==    indirectly lost: 0 bytes in 0 blocks
==4882==      possibly lost: 0 bytes in 0 blocks
==4882==    still reachable: 0 bytes in 0 blocks
==4882==         suppressed: 0 bytes in 0 blocks
==4882== 
==4882== For counts of detected and suppressed errors, rerun with: -v
==4882== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)

#endif
