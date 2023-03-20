#include <stdio.h>
#include <string.h>
int main()
{
    char s[100], t[100], ans[200];
    printf("Enter Two strings that you want to concatenate\n");
    scanf("%s%s", s, t);
    for (int i = 0; i <= strlen(s); i++)
    {
        ans[i] = s[i];
    }
    for (int i = 0; i <= strlen(t); i++)
    {
        ans[strlen(s) + i] = t[i];
    }
    printf("%s", ans);
    return 0;
}
