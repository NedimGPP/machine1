#include <stdio.h>
#include <stdlib.h>




int main(void)
{   


    int * number; 
    int count = 5; 


    // int array1[][]; 




    number = (int *) malloc(count*sizeof(int)); 

    for(int i = 0; i< count; i++){
        number[i] = i;  
    }

    for(int j = 0; j< count; j++){
        printf(":  %d \n ", number[j]); 
    }
    

    printf("%zu \n", sizeof(int)); 





    // printf("Here \n"); 
    return 0; 
}
