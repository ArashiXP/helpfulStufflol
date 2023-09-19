*A little tutorial on how modular programming works, since the professor
is not good at explaining*

**Download the repo, and take a look at mainTest.c**

There will be the main function that includes the other.h header file

This header file contains the function definitions 'add5' and 'multiply10'

And other1 has the actual function for add5, while other2 has the one for multiply10

**When compiling use:**

**_gcc -o modTest mainTest.c other1.c other2.c_**

You must compile all 3, because that's just how it is sadly.
*modTest is just a name of executable, it can be renamed by just changing it there*

When you finish that call

**_./modTest 10_**

where the 10 can be any number

fin
