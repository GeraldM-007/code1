#include<stdio.h>
#include<math.h>
  float rate=0.1;
int main()  
{  
    int p, t;  
    float ci, interest;  
  //ask for user input
    printf("Enter principal amount\n");  
    scanf("%d", &p);  
  
    printf("Enter time period\n");  
    scanf("%d", &t);  
  
    for(t=1; t<=50; t++)
    {

          ci = p *pow( (1 + rate), t ); 
    
    }
    printf("%d\n" ,interest);
    printf("Compound Interest is: %.2f\n", ci);  
  
    return 0;  
}  