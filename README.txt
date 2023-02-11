SIDI ABDALLAH Mohamed El Mokhtar
CHERGUI Mohamed

*******************Notes about our program******************
There is no memory leak in our program. we checked with valgrind.  

****************Questions's answers:***********************
Question 1:
The graph is a connex graph.

Question 2:
The obstacle's destructor has to be virtual to assure a recursive
destruction of all obstacles. 

********Notes for the deallocation of row_n and row_n_1*******
To avoid a double free of the pointers row_n and row_n_1 we have 
restored the initial value of row_n at the end of the loop 'for'.
So we will have two different values for row_n and row_n_1 
at the end of the program. 



