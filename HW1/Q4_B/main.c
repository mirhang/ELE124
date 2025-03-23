#include <stdio.h>
#include <math.h>

void computeHomeValue(void){
    
     
    int popularity;
    int size;
    int homeValue;

    
    
    printf("Please Enter the popularity value");
    scanf("%d",&popularity);
    printf("Please Enter the size value");
    scanf("%d",&size);
    
    double popularity_3 = pow(popularity,3);
    double size_2 = pow(size,2);
    homeValue = (( popularity_3 + size_2 ) * 10000);


    
    printf("This is your Home Value: %d \n",homeValue);
    
}


int main()
{
    computeHomeValue();
   

    return 0;
}
