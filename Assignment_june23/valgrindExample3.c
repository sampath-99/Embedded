/*3.Detecting The Use Of Uninitialized Variables*/

#include <stdio.h>

int main()
{
    int x;
    if(x == 0)
    {
        printf("X is zero"); 
                             
    }
    return 0;
}


#if 0

sampath@sampath-HP-EliteBook-840-G1:~/Xilinx/june23Valgrind$ gcc -g valgrindExample3.c -o vlgnd3
sampath@sampath-HP-EliteBook-840-G1:~/Xilinx/june23Valgrind$ valgrind --tool=memcheck --leak-check=yes ./vlgnd3
==4954== Memcheck, a memory error detector
==4954== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4954== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==4954== Command: ./vlgnd3
==4954==
==4954== Conditional jump or move depends on uninitialised value(s)
==4954==    at 0x108656: main (valgrindExample3.c:8)
==4954==
X is zero==4954==
==4954== HEAP SUMMARY:
==4954==     in use at exit: 0 bytes in 0 blocks
==4954==   total heap usage: 1 allocs, 1 frees, 1,024 bytes allocated
==4954==
==4954== All heap blocks were freed -- no leaks are possible
==4954==
==4954== For counts of detected and suppressed errors, rerun with: -v
==4954== Use --track-origins=yes to see where uninitialised values come from
==4954== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

#endif

