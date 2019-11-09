#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <math.h>
#define maxvalue 1000

struct values
{

    int textlength;
    int wordcount;
    int sentencelength;

}getinfo;

void get_info (char text[]);
int getAvg ();
int main ()

{
    int index;
    int a;
    char text[maxvalue];
    printf("Enter text: ");
    fgets(text, maxvalue, stdin);
    get_info(text);
    printf("Total number of letters: %d\nWords: %d\nSentences: %d\n", getinfo.textlength, getinfo.wordcount, getinfo.sentencelength);
    getAvg();//get index in this function.
    if (getAvg() < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (getAvg() > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", getAvg());
    }

}



void get_info (char text[])
{
    getinfo.textlength = 0;
    getinfo.wordcount = 0;
    getinfo.sentencelength = 0;


    int i;
    for (i = 0; text[i] != '\0'; i++ )
    {
        if (text[i] == ' ')

        {
            if ((text[i] + text[i + 1]) == 64) //if next character is also a space, don't increase the value
            {}
            else
            {
                getinfo.wordcount ++;
            }
        }
        else if (text[i] == '.'||text[i] == '!'||text[i] == '?' )
        {
            getinfo.sentencelength++;
        }
        else if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z' ))//if characters encounter are equal to letters only
        {
            getinfo.textlength ++;
        }
        else //if it's something else, then do nothing, basically. (like ; :, * and so on)
        {}
    }
       getinfo.wordcount++;//for first word


return ;
}


int getAvg ()
{
    int L = (getinfo.textlength *100) / getinfo.wordcount;
    int S = (getinfo.sentencelength *100) / getinfo.wordcount;
    int index =  round((0.0588 * L) - (0.296 * S) - 15.8);
    return index;

}
