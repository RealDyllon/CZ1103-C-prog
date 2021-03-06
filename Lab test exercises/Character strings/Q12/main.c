#include <stdio.h>
#include <string.h>
#define INIT_VALUE -1

int countSubstring(char str[], char substr[]);

int main()
{
    char str[80], substr[80], *p;
    int result=INIT_VALUE;

    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n'))
        *p = '\0';
    printf("Enter the substring: \n");
    fgets(substr, 80, stdin);
    if (p=strchr(substr,'\n'))
        *p = '\0';
    result = countSubstring(str, substr);
    printf("countSubstring(): %d\n", result);
    return 0;
}

int countSubstring(char str[], char substr[])
{
    /* Write your program code here */
    int i,j, mainlen, sublen,count,found;
    count = 0;
    mainlen = strlen(str);
    sublen = strlen(substr);
    for (i=0;i<(mainlen-sublen);i++) {
        found = 1;
        for (j=0;j<sublen;j++) {
            if (str[i+j] != substr[j]) {
                found = 0;
                break;
            };
        };
        if (found == 1)
            count += 1;
    };
    return count;
}

