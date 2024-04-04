
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
    scanf("%c", &n);

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
    char temp[] = str1[];
    str1 = str2;
    printf("%s", temp[]);
    return temp[];
}

char *MyStrCat(char str1[], char str2[]){
    
}