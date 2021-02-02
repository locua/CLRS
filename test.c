#include <stdio.h>
#include <stdbool.h>
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
//    for(int x =0; x < 1; x++){
//        printf("x  %d\n", x); 
//    }

    char yo= 0;
    if(yo==0)
        printf("not yo\n");
    char ye= 1;
    if(ye==1)
        printf("ye\n");
    
    
  return 0; 
} 

