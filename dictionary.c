/**
 * Implements a dictionary's functionality.
 */

#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include "hashtable.c"
#include "dictionary.h"

/**
 * Returns true if word is in dictionary else false.
 */
bool check(const char *word)
{
    // TODO
    return false;
}

/**
 * Loads dictionary into memory. Returns true if successful else false.
 */
bool load(const char *dictionary)
{
    char word[LENGTH + 1];
    FILE* file = fopen(dictionary, "r");

    if (file == NULL)
    {
        printf("sorry\n");
        return false;
    }
    
    while(fscanf(file, "%s", word) != EOF)
    {
        install(word);
    }
    fclose(file);
    return true;
}

/**
 * Returns number of words in dictionary if loaded else 0 if not yet loaded.
 */
unsigned int size(void)
{
    // TODO
    return 0;
}

/**
 * Unloads dictionary from memory. Returns true if successful else false.
 */
bool unload(void)
{
    // TODO
    return false;
}
