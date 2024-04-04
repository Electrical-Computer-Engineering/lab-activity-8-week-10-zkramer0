
#include <stdio.h>

int my_isalpha(char c){
    return (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z');
}
int my_isdigit(char c){
    return (c >= '0' && c <= '9');
}

int my_isupper(char c){
    return (c >= 'A' && c <= 'Z');
}

char my_toupper(char c){
    if (c >= 'a' && c <= 'z'){
        return  c - 'a' + 'A';
    }
}

char my_tolower(char c){
    if (c >= 'A' && c <= 'Z'){
        return  c - 'A' + 'a';
    }
}

int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c", &c); getchar();

    printf("%d\n", my_isalpha(c));
    printf("%d\n", my_isdigit(c));
    printf("%d\n", my_isupper(c));
    printf("%c\n", my_toupper(c));
    printf("%c\n", my_tolower(c));
}