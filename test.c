#include <stdio.h>
// 
// C function using pass by value. (Notice no &) 
// 
void 
doit( int  x [] ) 
{ 
     x[0] = 5; 
} 

// 
// Test function for passing by value (i.e., making a copy) 
// 
int 
main() 
{ 
    for(int x =0; x < 1; x++){
        printf("x  %d\n", x); 
    }

  return 0; 
} 

