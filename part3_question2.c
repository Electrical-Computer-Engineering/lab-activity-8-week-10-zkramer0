#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

int length(char *s) {
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}

bool isVowel(char ch) {
    return strchr("aeiouAEIOU", ch) != NULL;
}

char ToPigLatin(char *word) {
    int len = length(word);
    bool capital = (word[0] >= 65 && word[0] <= 90);

    if (isVowel(word[0])) {
        strcat(word, "way");
    } else {
        char Consonants[40] = {0};
        int pos = 0;

        while (word[pos] != '\0' && !isVowel(word[pos]) && !(word[pos] == 'y' || word[pos] == 'Y')) {
            Consonants[pos] = word[pos];
            pos++;
        }

        for (int i = pos; word[i] != '\0'; ++i) {
            word[i - pos] = word[i];
        }
        word[len - pos] = '\0';

        strcat(word, Consonants);
        strcat(word, "ay");
    }

    if (capital) {
        word[0] = toupper(word[0]);
        for (int i = 1; word[i] != '\0'; ++i) {
            word[i] = tolower(word[i]);
        }
    }
}

int main() {
    char input[80];
    printf("Input 5 values:\n");

    for (int i = 0; i < 5; ++i) {
        if (fgets(input, sizeof(input), stdin)) {
            input[strcspn(input, "\n")] = 0;
            ToPigLatin(input);
            printf("ans: %s\n", input);
        }
    }

    return 0;
}

