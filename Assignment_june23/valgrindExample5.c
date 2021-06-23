/*5. Doubly freed memory*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *p = (char*)malloc(1);
    *p = 'a';

    char c = *p;
    printf("\n [%c]\n",c);
    free(p);
    free(p);
    return 0;
}

#if 0
sampath@sampath-HP-EliteBook-840-G1:~/Xilinx/june23Valgrind$ vim valgrindExample5.c
sampath@sampath-HP-EliteBook-840-G1:~/Xilinx/june23Valgrind$ gcc -g valgrindExample5.c -o vlgnd5
sampath@sampath-HP-EliteBook-840-G1:~/Xilinx/june23Valgrind$ valgrind --tool=memcheck --leak-check=yes ./vlgnd5
==5386== Memcheck, a memory error detector
==5386== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5386== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5386== Command: ./vlgnd5
==5386== 

 [a]
==5386== Invalid free() / delete / delete[] / realloc()
==5386==    at 0x4C30D3B: free (in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
==5386==    by 0x10872F: main (valgrindExample5.c:14)
==5386==  Address 0x522d040 is 0 bytes inside a block of size 1 free'd
==5386==    at 0x4C30D3B: free (in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
==5386==    by 0x108723: main (valgrindExample5.c:13)
==5386==  Block was alloc'd at
==5386==    at 0x4C2FB0F: malloc (in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
==5386==    by 0x1086EB: main (valgrindExample5.c:8)
==5386== 
==5386== 
==5386== HEAP SUMMARY:
==5386==     in use at exit: 0 bytes in 0 blocks
==5386==   total heap usage: 2 allocs, 3 frees, 1,025 bytes allocated
==5386== 
==5386== All heap blocks were freed -- no leaks are possible
==5386== 
==5386== For counts of detected and suppressed errors, rerun with: -v
==5386== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)


#endif
