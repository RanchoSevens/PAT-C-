#include<cstdio>
#include<cstring>
int main()
{
    char str1[80], str2[80];
    gets(str1);
    gets(str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    char c1, c2;
    bool hashtable[128] = { false };
    for (int i = 0; i < len1; i++)
    {
        int j;
        c1 = str1[i];
        for ( j = 0; j < len2; j++)
        {
            c2 = str2[j];
            if (str1[i] >= 'a'&&str1[i] <= 'z')
                c1 = str1[i] - 32;
            if (str2[j] >= 'a'&&str2[j] <= 'z')
                c2 = str2[j] - 32;
            if (c1 == c2) break;
        }
        if (j==len2&&hashtable[c1] == false)
        {
            printf ("%c", c1);
            hashtable[c1] = true;
        }
    }
    return 0;
}
