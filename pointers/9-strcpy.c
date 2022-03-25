#include <stdio.h>
#include <string.h>

/** 
 * _strcpy: copying string pointed to by src to dest
 */

char* _strcpy(char *dest, char *src)
{
	int i;
    for (i = 0; *src != '\0';i++)
    {
	    *dest = *src;
	    printf("%c", *dest);
	    dest++;
	    src++;

    }



   return (0);
}
int main(void)
{
	    char s1[98];
	        char *ptr;

		    ptr =  _strcpy(s1, "First, solve the problem. Then, write the code\n");
		        printf("%s", s1);
			    printf("%s", ptr);
			        return (0);
}
