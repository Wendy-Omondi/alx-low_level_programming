#include "holberton.h"
/**
* _isdigit - checks or digits between 0 and 9
*@c: tested integer
* Return: Always 0 (Success)
*/
int _isdigit(int c)
{
if (c >= 0 && c < 9)
{    
return (1);
}  
else
{
return (0);
}
}
