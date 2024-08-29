#include <stdio.h>
#include <string.h>

int main() {
    char input[1000], words[100][1000];
    int word_count = 0, start = 0, end = 0;

    printf("Enter the string: ");
    fgets(input, sizeof(input), stdin);

    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    while (input[end] != '\0')
        {
        while (input[start] == ' ' && input[start] != '\0') {
            start++;
        }
        end = start;

        while (input[end] != ' ' && input[end] != '\0') {
            end++;
        }

        if (start != end) {
            int j = 0;
            for (int i = start; i < end; i++) {
                words[word_count][j++] = input[i];
            }
            words[word_count][j] = '\0';
            word_count++;
        }

        start = end;
    }

    for (int i = word_count - 1; i >= 0; i--) {
        printf("%s", words[i]);
        if (i > 0) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
