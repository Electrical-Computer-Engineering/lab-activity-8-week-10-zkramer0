#include <stdio.h>

char *MyStrCmp (char str1[], char str2[]){
    int i;
    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++){
        if (str1[i] == str2[i]){
            return 0;
        }
        else{
            return 1;
        }
    }
}

char *MyStrCmp (char str1[], char str2[]){
    int i, n;
    printf("Enter the number of characters: ");
    scanf("%d", &n);

    while (i < n){
        for (i=0; str1[i] != '\0' && str2[i] != '\0';i++){
            if (str1[i] == str2[i]){
                return 0;
            }
            else{
                return 1;
            }
        }
    }

}

char *MyStrCpy (char str1[], char str2[]){
    int i = 0;
    while ((str1[i] = str2[i]) != '\0'){
        i++;
    }
    return str1;
}


void _strcat(char t[], char s[]) {
    int t_len = 0;
    while (t[t_len] != '\0') {
        t_len++;
    }

    int i = 0;
    while (s[i] != '\0') {
        t[t_len] = s[i];
        t_len++;
        i++;
    }

    t[t_len] = '\0';
}

char* my_reverse(char str1[], char str2[]) {
    int len = 0;
    while (str2[len] != '\0') {
        len++;
    }
    for (int i = 0; i < len; i++) {
        str1[i] = str2[len - 1 - i];
    }

    str1[len] = '\0';
    return str1;
}



int main() {

    char str1[20] = "Hi ESE";
    char str2[40] = "Computer engineering";

    printf("MyStrCmp: %d\n", MyStrCmp(str1, str2));

    MyStrCpy(str1, str2);
    printf("MyStrCpy: %s\n", str1);

    _strcat(str1, str2);
    printf("_strcat: %s\n", str1);

    my_reverse(str1, str2);
    printf("my_reverse: %s\n", str1);

    return 0;
}
