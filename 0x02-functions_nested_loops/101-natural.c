#include <stdio.h>            
                              
/**                           
 *main - Entry point.         
 *Return: Success             
 */                            
int main(void)                
{                             
int i;                        
int sum = 0;                  
                              
for (i = 1; i < 1024; i++)    
{

if (i % 3 == 0  || i % 5 == 0)
sum += i;                     

}
putchar(sum);
return (0);
}

