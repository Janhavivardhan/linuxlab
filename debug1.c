/*
ORIGINAL CODE:

#include <stdio.h>
int main()
	{    
	char *s = "goal";
        char *t = "home";
        while(*s++ == *t++)
        printf(*s);
        return 0;
	}

 

DEBUGGED CODE:
*/
#include <stdio.h>
int main()
{
    char *s="oal";
    char *t="ome";
    while(*s==*t)
    {
    printf("the value is:%c",*s);
  s++;
 t++;
    }
    return 0;
}
 