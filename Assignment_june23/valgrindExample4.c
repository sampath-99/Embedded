/*4.Detecting The Use Of Uninitialized Variables*/




#include <stdio.h>

int foo(int x)
{
    if(x < 10)
    {
        printf("x is less than 10\n");
    }
}

int main()
{
    int y;
    foo(y);
}

#if 0
sampath@sampath-HP-EliteBook-840-G1:~/Xilinx/june23Valgrind$ vim valgrindExample4.c 
sampath@sampath-HP-EliteBook-840-G1:~/Xilinx/june23Valgrind$ gcc -g  valgrindExample4.c -o vlgnd4 
sampath@sampath-HP-EliteBook-840-G1:~/Xilinx/june23Valgrind$ valgrind --tool=memcheck --leak-check=yes ./vlgnd4
==5089== Memcheck, a memory error detector
==5089== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5089== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5089== Command: ./vlgnd4
==5089== 
==5089== Conditional jump or move depends on uninitialised value(s)
==5089==    at 0x108649: foo (valgrindExample4.c:10)
==5089==    by 0x10866B: main (valgrindExample4.c:19)
==5089== 
x is less than 10
==5089== 
==5089== HEAP SUMMARY:
==5089==     in use at exit: 0 bytes in 0 blocks
==5089==   total heap usage: 1 allocs, 1 frees, 1,024 bytes allocated
==5089== 
==5089== All heap blocks were freed -- no leaks are possible
==5089== 
==5089== For counts of detected and suppressed errors, rerun with: -v
==5089== Use --track-origins=yes to see where uninitialised values come from
==5089== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

#endif
