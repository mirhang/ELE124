#include <stdio.h>
#include <math.h>


int computeHomeValue(int popularity, int size)
{
    
    double popularity_3 = pow(popularity,3);
    double size_2 = pow(size,2);
    int homeValue_infunction = (( popularity_3 + size_2 ) * 10000);
    
    return homeValue_infunction;
}



int main()
{
    
    int popularity;
    int size;
    int homeValue;
    
    
    printf("Please Enter the popularity value");
    scanf("%d",&popularity);
    printf("Please Enter the size value");
    scanf("%d",&size);

    homeValue = computeHomeValue(popularity, size);
    
    printf("This is your Home Value: %d",homeValue);
    

    return 0;
}





