# Int2bitstr_C
converts an int into its binary mantis form and prints out the exponent used to calculate it.
gcc -Wall -g -m32 -c tester.c
gcc -Wall -g -m32 -c int2bitstr.c
gcc -Wall -g -m32 -o xtest tester.o int2bitstr.o
