/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
char *_strcpy(char *dest, char *src)
{
char *ptr = dest;
while (*src)
*dest++ = *src++;
*dest = 0;
return (ptr);
}
