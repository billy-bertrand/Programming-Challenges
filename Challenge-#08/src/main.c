#include <stdio.h>
#include <stdlib.h>

int vowelCounter(char *word){
    int vowels = 0;
    while (*word != '\0')
    {
        if(*word == 'a' || *word == 'A' || *word == 'e' ||
        *word == 'E' || *word == 'i' || *word == 'I'|| 
        *word == 'o' || *word == 'O' || *word == 'u' || *word == 'U'
        )
        {
            ++vowels;
        }
        word++;
    } 
    return vowels;
}

int main(void){
    int wordCount = 0;
    int vowelCount = 0;

    //open the file
    FILE *file = fopen("lorem.txt", "r");
    if(file == NULL){
        exit(EXIT_FAILURE);
    }
    
    //read the file until its end
    while (!feof(file))
    {
        char word[20];
        fscanf(file, "%s", word);
        wordCount ++;
        vowelCount += vowelCounter(word);
    }
    //close the file
    fclose(file);

    //print results
    printf("The text file contains %d words and %d vowels\n", wordCount, vowelCount);
    return 0;
}