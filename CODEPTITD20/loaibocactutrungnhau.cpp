#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define delim " \n"
int main()
{
	char s[1000]={};
	fgets(s, 100, stdin);
    int n = 0,i;
    char x[100][100]={}; 
    char *p = strtok(s, delim);
    while (p!= NULL)
    {
        bool check = 0;
        for(i = 0; i < n; i++)
        {
            if (strcmp(x[i], p) == 0) 
            {
                check = 1;
                break;
            }
        }
        if(check == 0)
        {
            strcpy(x[n], p);
            n++;
        }
        p = strtok(NULL, delim);
    }

    for(i =0; i < n; i++)
    {
        printf("%s ", x[i]);
    }
	return 0;
}
