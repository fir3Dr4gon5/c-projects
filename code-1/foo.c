#include <stdio.h>

int main()
{
    char topping[24];
    int slices;
    int day, month, year;
    float cost;

    printf("What is your Favourite one word pizza topping?\n");
    scanf("%s", topping);

    printf("how much does a pizza cost? ");
    printf("Write as £XX.XX)\n");
    scanf(" £%f", &cost);

    printf("How many slices of %s pizza ", topping);
    printf("can you eat in one sitting?\n");
    scanf(" %d", &slices);

    printf("What day is it today (enter as XX/XX/XX form).\n");
    scanf(" %d/%d/%d", &day, &month, &year);

    printf("\n\nWhy not treat yourself to dinner on %d/%d/%d", day, month, year);
    printf("\nand have %d slices of %s pizza!\n", slices, topping);
    printf("It will only cost you £%.2f!\n\n\n", cost);

    return(0);
    
}