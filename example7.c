#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <ctype.h>

int searchText(char* text, char* pattern){
    unsigned size_text = strlen(text);
    unsigned size_pattern = strlen(pattern);
    // Converts uppercase letters to lowercase
    for(unsigned i = 0; i < size_pattern; ++i){
        pattern[i] = tolower(pattern[i]);
    }
    // Searches the text for the pattern
    for(unsigned i = 0; i < (size_text-size_pattern)+1; ++i){
        int match = 1;
        for(unsigned j = 0; j < size_pattern; ++j){
            // Loops until end of pattern, checking if it matches
            if(text[i+j] != pattern[j]){
                match = 0;
            }
        }
        // Returns the index of the first match
        if(match){
            return i;
        }
        printf("%c",text[i]);
    }
    return 0;
}
int main() {
    char* raw_text = NULL; // The text is input by the user
    char* search_pattern = "hello"; // The pattern being searched for

    size_t num_read = 0;
    // Reads input from the user
    if(getline(&raw_text,&num_read,stdin) == -1){
        perror("Input");
        exit(EXIT_FAILURE);
    }
    int index = 0;
    index = searchText(raw_text,search_pattern);
    printf("%s\n",(raw_text+index));
    free(raw_text);
}