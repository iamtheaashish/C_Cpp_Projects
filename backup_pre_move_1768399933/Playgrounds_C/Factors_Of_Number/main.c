#include <stdio.h>                                                               
void main(){                                                                     
     int i,n;                                                                       
     printf("Enter a Number: \n");                                                  
     scanf("%d",&n);                                                                
                                                                                    
     for(i=1;i<=n;i++)                                                              
     {                                                                              
     if(n%i==0){                                                                    
      printf("%d is a factor\n",i);                                                                  
       }                                                                            
     }                                                                              
}