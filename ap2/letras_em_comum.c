#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 101
#define MAX_WORDS 10

int main() {
    char sentence[MAX_LENGTH];
    char* words[MAX_WORDS];
    int wordCount = 0;

    fgets(sentence, MAX_LENGTH, stdin);
    
    sentence[strcspn(sentence, "\n")] = '\0';
    
    char* token = strtok(sentence, " ");
    
    while (token != NULL && wordCount < MAX_WORDS) {
        words[wordCount] = token;
        // words[wordCount] = strlwr(words[wordCount]);
        wordCount++;
        token = strtok(NULL, " ");
    }

    int qComuns = 0;
    for (int i = 0; i < strlen(words[0]); i++) {
        char letter = words[0][i];
        // evitar testar a mesma letra novamente
        if (strchr(words[0] + i + 1, letter) != NULL) continue;
        int isCommon = 1;
        for(int j = 1; j < wordCount; j++) {
            if((strchr(words[j], letter) == NULL)) {
                isCommon = 0;
                break;
            }
        }
        if (isCommon) qComuns++;
    }
    
    printf("%d\n", qComuns);
    return 0;
}
