#include <stdio.h>
#include <stdbool.h>


int multi() {
    int num1 = printf("Please enter a number: ");
    scanf("%i", &num1);
    int num2 = printf("Please enter another number: ");
    scanf("%i", &num2);
    int multi_result = num1 * num2;
    printf("The product of %i & %i %s %i\n", num1, num2, "is", multi_result);
    return 0;
}

int adding() {
    int num1 = printf("Please enter a number: ");
    scanf("%i", &num1);
    int num2 = printf("Please enter another number: ");
    scanf("%i", &num2);
    int sum_result = num1 + num2;
    printf("The sum of %i & %i is %i\n", num1, num2, sum_result);
    return 0;
}

int minus() {
    int num1 = printf("Please enter a number: ");
    scanf("%i", &num1);
    int num2 = printf("Please enter another number: ");
    scanf("%i", &num2);
    int difference_result = num1 - num2;
    printf("The difference of %i & %i is %i.\n", num1, num2, difference_result);
    return 0;
}

int divide() {
    int num1 = printf("Please enter a number: ");
    scanf("%i", &num1);
    int num2 = printf("Please enter another number: ");
    scanf("%i", &num2);
    double quotient_result = ((double)num1 / num2);
    printf("The quotient of %i & %i is %.2f\n", num1, num2, quotient_result);
    return 0;
}

int main(void)

{  
    int keep_counting = 1;
    while (keep_counting > 0)
    {

        // Greeting with user's name
        char name[20];
        printf("Please enter your name: ");
        scanf("%s", name);
        printf("Hi %s! %s", name, "We are going to do some fun calculations!\n");

        //  Choices of calculations to perform
        int choice = printf("We can perfom addition, subtraction, multiplication and division!\nWhat kind of calculation would you like to perform?\nPlease enter:\n\'1\' for addition\n\'2\' for subtraction\n\'3\' for multiplication\n\'4\' for division:\n");
        scanf("%i", &choice);

        switch (choice) {
        case 1:
            printf("You chose to do stack up and add up!\n");
            adding();
        break;
        case 2:
            printf("You chose to be cool and minus the extras!\n");
            minus();
        break;
        case 3:
            printf("You chose to be fruitful and multiply!\n");
            multi();
        break;
        case 4:
            printf("You chose to divide and conquer!\n");
            divide();
        break;

    }   
        
        int option = printf("Do you wish to perform more calculations?\nEnter \"1\" to continue or \"0\" to quit: ");
        scanf("%i", &option);
        
        if (option > 0)
        {   
            keep_counting = 1;
            printf("Here we go again!\n");
        
        } else
         {   
            keep_counting = 0;
            printf("We are counting on you to keep counting!\nGoodbye!!!");
            return 0;

        }
    }
  return 0;

    
}
