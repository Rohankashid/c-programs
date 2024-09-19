#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *replaceWord(const char *str, const char *oldWord, const char *newWord)
{
    char *resultString;
    int i, count = 0;
    int newWordLength = strlen(newWord);
    int oldWordLength = strlen(oldWord);

    // lets count the number of times old word occurs in the string

    for (int i = 0; str[i] != '\0'; i++)
    {
        /* code */
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;

            // jump over this word

            i = i + oldWordLength - 1;
        }
    }

    // making the new string to fit in the replaced words

    resultString = (char *)malloc(i + count * (newWordLength - oldWordLength) + 1);

    i = 0;
    while (*str)
    {
        // comparee the substring with result

        if (strstr(str, oldWord) == str)
        {
            /* code */
            strcpy(&resultString[i], newWord);
            i += newWordLength;
            str += oldWordLength;
        }
        else
        {
            resultString[i] = *str;
            i += 1;
            str += 1;
        }
    }
    resultString[i] = '\0';
    return resultString;
}

int main()
{
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;

    ptr = fopen("bill.txt", "r");
    ptr2 = fopen("genBill.txt", "w");
    char str[200];
    fgets(str, 200, ptr);
    printf("\n the given bill template was %s", str);

    // call the replace word function and generate newStr

    char *newStr;


    newStr = replaceWord(str,"{{item}}","Table Fan");
    newStr = replaceWord(newStr,"{{outlet}}","Ram Laxmi fan outlet");
    newStr = replaceWord(newStr,"{{name}}","rohan");
    
    printf("\n the actual bill generated is:   %s", newStr);
    printf("\n the gererated bill has been written to the file genbill.txt");

    fprintf(ptr2, "%s", newStr);
    fclose(ptr);
    fclose(ptr2);
    return 0;
}