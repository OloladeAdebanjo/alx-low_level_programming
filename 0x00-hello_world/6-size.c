#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
     int i;
     long int l;
     long long int ll;
     float d;
     char c;

     print("Size of a char; %lu byte(s)\n", sizeof(c));
     print("Size of an int: %lu byte(s)\n", sizeof(i));     
     print("Size of a long int: %lu byte(s)\n", sizeof(l));
     print("Size of a long long int: %lu byte(s)\n", sizeof(ll));
     print("Size of a float: %lu byte(s)\n", sizeof(d));
     return (0);
}
