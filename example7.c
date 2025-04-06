#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int searchText(char* text, char* pattern){
    unsigned size_text = strlen(text);
    unsigned size_pattern = strlen(pattern);
    for(unsigned i = 0; i < (size_text-size_pattern)+1; ++i){
        int match = 1;
        for(unsigned j = 0; j < size_pattern; ++j){
            if(text[i+j] != pattern[j]){
                match = 0;
            }
        }
        if(match){
            free(text);
            return i;
        }
        printf("%c",text[i]);
    }
    return 0;
}
int main() {
    char* raw_text = NULL;
    char* search_pattern = "hello";
    size_t num_read = 0;
    if(getline(&raw_text,&num_read,stdin) == -1){
        perror("Input");
        exit(EXIT_FAILURE);
    }
    int index = 0;
    index = searchText(raw_text,search_pattern);
    printf("%s\n",(raw_text+index));
    free(raw_text);
}