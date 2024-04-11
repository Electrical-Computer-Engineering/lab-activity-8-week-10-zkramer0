#include <stdio.h>
#include <string.h>


void ex1(char str[]) {
    int len = strlen(str);
    for (int i = 1; i < len; i++) {
        str[i - 1] = str[i];
    }
    str[len - 1] = '\0';
}

void ex2(char s1[], char s2[]) {
    char result[strlen(s1) + 1];
    int pos = 0;
    for (int i = 0; i < strlen(s1); i++) {
        char current = s1[i];
        int found = 0;
        for (int j = 0; j < strlen(s2); j++) {
            if (current == s2[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            result[pos] = current;
            pos++;
        }
    }
    result[pos] = '\0';
   
    strcpy(s1, result);
}

void squeeze(char s1[], char s2[])
{
    int i, j, k;
    k=0;
    for(i=0; s1[i]!='\0'; i++)
    {
        j = 0;
        while(s2[j] != '\0' && s2[j] != s1[i])
            j++;
        if(s2[j] == '\0')
        {
            s1[k] = s1[i];
            k++;
        }
    }
    s1[k] = '\0';
    printf("\n%s\n", s1);
}



int main() {

    char s1[] = "Hi ESE 124!";
    char s2[] = "Hi !";
    char s11[] = "Hi ESE 124!";
    char s12[] = "Hi !";

    ex1(s1);
    ex2(s1, s2);
    squeeze(s11,s12);
