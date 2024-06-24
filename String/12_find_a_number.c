//12.Write a program in C to find the number of times a given word 'is' appears in the given string.

#include<stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_STRING_LENGTH 1000
main()
{

int countWordOccurrences(char *str, const char *word) 
{
    int count = 0;
    char *pos = str;
    int wordLen = strlen(word);
    while ((pos = strstr(pos, word)) != NULL) 
    {

        if ((pos == str||!isalpha(*(pos - 1))) &&  (!isalpha(*(pos + wordLen)))) 
        {
            count++;
        }
        pos += wordLen;
    }

    return count;
}
    {
    char str[MAX_STRING_LENGTH];
    const char *word = "is";

    printf("\n\n\t Enter a string: ");
    fgets(str, MAX_STRING_LENGTH, stdin);

    size_t length = strlen(str);
    if (str[length-1]=='\n') 
    {
        str[length - 1]='\0';
    }

    int occurrences = countWordOccurrences(str, word);

    printf("\n\n\t The word  appears times in the given string.%s,%d", word, occurrences);

}

}

 
