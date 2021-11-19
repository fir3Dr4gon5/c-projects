#include <stdio.h>
#include <string.h>

int main()
{

    int ctr, numMovies, rating, favRating, leastRating;
    char moiveName[40], favourite[40], least[40];

    favRating = 0;
    leastRating = 10;

    do {
        printf("How many movies have you watched this year? ");
        scanf("%d", &numMovies);

        if(numMovies<1)
        {
            printf("No Moives! How can you rate them?\n try again!\n\n");
        }
    } while (numMovies <1);
    for (ctr = 1; ctr <= numMovies; ctr++)
    {
        printf("\nWhat was the name of the Moive?");
        printf("(1 word Titles only!)");
        scanf("%s", moiveName);
        printf("On a scale of 1 to 10 what would");
        printf("you rate it?");
        scanf("%d", &rating);

        if (rating > favRating)
        {
            strcpy(favourite,moiveName);
            favRating = rating;

        }
        if (rating<leastRating)
        {
            strcpy(least,moiveName);
            leastRating = rating;
        }

    }
    printf("\n Your Favourite Movie was %s\n",favourite);
    printf("\n Your least Favourite Movie was %s\n",least);

    return 0;
}


