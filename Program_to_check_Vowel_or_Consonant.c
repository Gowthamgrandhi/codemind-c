#include<stdio.h>
int main()
{
    char k;
    int lower_case,upper_case;
    scanf("%c",&k);
    lower_case=(k=='a'||k=='e'||k=='i'||k=='o'||k=='u');
    upper_case=(k=='A'||k=='E'||k=='I'||k=='O'||k=='U');
    if(lower_case||upper_case)
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
}