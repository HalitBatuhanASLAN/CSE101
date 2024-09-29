#include<stdio.h>
#include<stdlib.h>
// I include standard input-output library to use printf-scanf,and I include standard library to use function which help to clean the terminal screen
void menu()
{
    printf("%%                MENU                %%\n");
    printf("(1) ADD TWO NUMBERS\n");
    printf("(2) SUBTRACT TWO NUMBERS\n");
    printf("(3) MULTIPLY TWO NUMBERS\n");
    printf("(4) DIVIDE TWO NUMBERS\n");
    printf("(5) TAKE THE NTH POWER OF A NUMBER\n");
    printf("(6) FIND AVERAGE OF NUMBERS INPUTTED\n");
    printf("(7) FIND THE MAXIMUM OF NUMBERS INPUTTED\n");
    printf("(0) EXIT\n");
    printf("PLEASE SELECT : ");
} 
void adding()
{
    float number1,number2,sum; //number1 and number2 variables for taking an input from user and I want to take it as float.sum is for the result
    char decision = 'Y'; // decision value for user's decision to continue the operation
    // Continue the loop until the user did not want to continue more numbers
    while(decision == 'Y' || decision == 'y')
    {
        printf("Enter the first number : "); 
        while(scanf("%f",&number1) != 1)  //taking the value from user and controling the value if it is a valid or invalid value
        {
            printf("You entered an invalid character\nPlease enter a valid value : ");
            // Error message for invalid input
            while(getchar() != '\n'){}
            // Clear the input buffer
        }
        printf("Enter the second number : "); 
        while(scanf("%f",&number2) != 1)    //taking the value from user and controling the value if it is a valid or invalid value
        {
            printf("You entered an invalid character\nPlease enter a valid value : ");
            // Error message for invalid input
            while(getchar() != '\n'){}
            // Clear the input buffer
        }
        sum = number1 + number2; //adding 2 numbers and put it to the sum variable
        printf("(%f) + (%f) = %f\n",number1,number2,sum); //printing the value
        printf("Do you want to continue with same operation with new numbers?\n");
        printf("If yes enter Y or y; if not enter N or n : ");
        //asking for continuing user with new numbers or not
        scanf(" %c",&decision);
        // taking the user's decision
    }
}
void subtrating()
{
    float number1,number2,result; //number1 and number2 variables for taking an input from user and I want to take it as float.result is forresult
    char decision = 'Y'; // decision value for user's decision to continue the operation
    // Continue the loop until the user did not want to continue more numbers
    while(decision == 'Y' || decision == 'y')
    {
        printf("Enter the first number : ");
        while(scanf("%f",&number1) != 1) //taking the value from user and controling the value if it is a valid or invalid value
        {
            printf("You entered an invalid character\nPlease enter a valid value : ");
            // Error message for invalid input
            while(getchar() != '\n'){}
            // Clear the input buffer
        }
        printf("Enter the second number : ");
        while(scanf("%f",&number2) != 1) //taking the value from user and controling the value if it is a valid or invalid value
        {
            printf("You entered an invalid character\nPlease enter a valid value : ");
            // Error message for invalid input
            while(getchar() != '\n'){}
            // Clear the input buffer
        }
        result = number1 - number2; //subtract 2 numbers and put it to the result variable
        printf("(%f) - (%f) = %f\n",number1,number2,result); //printing the value
        printf("Do you want to continue with same operation with new numbers?\n");
        printf("If yes enter Y or y; if not enter N or n : ");
        //asking for continuing user with new numbers or not
        scanf(" %c",&decision);
        // taking the user's decision
    }
}
void multiplying()
{
    float number1,number2,result;  //number1 and number2 variables for taking an input from user and I want to take it as float.result is for result
    char decision = 'Y'; // decision value for user's decision to continue the operation
    // Continue the loop until the user did not want to continue more numbers
    while(decision == 'Y' || decision == 'y') 
    {
        printf("Enter the first number : "); 
        while(scanf("%f",&number1) != 1) //taking the value from user and controling the value if it is a valid or invalid value
        {
            printf("You entered an invalid character\nPlease enter a valid value : ");
            // Error message for invalid input
            while(getchar() != '\n'){}
            // Clear the input buffer
        }
        printf("Enter the second number : ");
        while(scanf("%f",&number2) != 1)  //taking the value from user and controling the value if it is a valid or invalid value
        {
            printf("You entered an invalid character\nPlease enter a valid value : ");
            // Error message for invalid input
            while(getchar() != '\n'){}
            // Clear the input buffer
        }
        result = number1 * number2; //multiply 2 numbers and put it to the result variable
        printf("(%f) * (%f) = %f\n",number1,number2,result); //printing the value
        printf("Do you want to continue with same operation with new numbers?\n");
        printf("If yes enter Y or y; if not enter N or n : ");
        //asking for continuing user with new numbers or not
        scanf(" %c",&decision);
        // taking the user's decision
    }
}
void dividing()
{
    float divided,divider,result;  //divided and divider variables for taking an input from user and I want to take it as float.result is for result
    char decision = 'Y'; // decision value for user's decision to continue the operation
    // Continue the loop until the user did not want to continue more numbers
    while(decision == 'Y' || decision == 'y')
    {
        printf("Enter the !'DIVIDER'! number : ");
        while(scanf("%f",&divider) != 1) //taking the value from user and controling the value if it is a valid or invalid value
        {
            printf("You entered an invalid character\nPlease enter a valid value : ");
            // Error message for invalid input
            while(getchar() != '\n'){}
            // Clear the input buffer
        }
        while (divider == 0) // until divider is not equal to 0 if the first value of divider is 0 program takinh input from user and printing error message
        {
            printf("Divider can not be zero(0)\n");
            printf("Enter the divider number : ");
            scanf("%f",&divider);
        }
        printf("Enter the divided number : ");
        while(scanf("%f",&divided) != 1) //taking the value from user and controling the value if it is a valid or invalid value
        {
            printf("You entered an invalid character\nPlease enter a valid value : ");
            // Error message for invalid input
            while(getchar() != '\n'){}
            // Clear the input buffer
        }
        if(divided == 0)
            result = 0;
        else
            result = divided / divider;
        printf("(%f) / (%f) = %f\n",divided,divider,result);
        printf("Do you want to continue with same operation with new numbers?\n");
        printf("If yes enter Y or y; if not enter N or n : ");
        //asking for continuing user with new numbers or not
        scanf(" %c",&decision);
        // taking the user's decision
    }
}
void powering()
{
    float base,power; //base and power variables for taking an input from user and I want to take it as float.
    char decision = 'Y'; // decision value for user's decision to continue the operation
    // Continue the loop until the user did not want to continue more numbers
    while(decision == 'Y' || decision == 'y')
    {
        float result = 1; //whenever the user make the same calculation again for right calculation I change the result to 1
        printf("Enter the base number : ");
        while(scanf("%f",&base) != 1) //taking the value from user and controling the value if it is a valid or invalid value
        {
            printf("You entered an invalid character\nPlease enter a valid value : ");
            // Error message for invalid input
            while(getchar() != '\n'){}
            // Clear the input buffer
        }
        printf("Enter the power number : ");
        while(scanf("%f",&power) != 1) //taking the value from user and controling the value if it is a valid or invalid value
        {
            printf("You entered an invalid character\nPlease enter a valid value : ");
            // Error message for invalid input
            while(getchar() != '\n'){}
            // Clear the input buffer
        }
        if(power == 0 && base != 0) 
            printf("(%f) ^ (%f) = 1\n",base,power);
        else if(power == 0 && base == 0)
            printf("(%f) ^ (%f) is uncertain value\n",base,power);
        else if(power != 0 && base == 0)
            printf("(%f) ^ (%f) = 0\n",base,power);
        //I checked the important conditionals
        else if(power > 0)
        {  
            int i = 1;
            for(;i<power;i ++)
            {
                result *= base;
                printf("(%f)*",base);
            }
            //with for loop calculating the ower of the number
            result *= base; 
            printf("(%f) = %f\n",base,result);
        }
        else //this condition for the negative powers
        {
            int i = 1;
            float first_power = power;
            power *= -1;
            for(;i<=power;i ++)
                result *= base;
            result = 1/result;
            printf("(%f) ^ (%f) = %f\n",base,first_power,result);
        }
        printf("Do you want to continue with same operation with new numbers?\n");
        printf("If yes enter Y or y; if not enter N or n : ");
        //asking for continuing user with new numbers or not
        scanf(" %c",&decision);
        // taking the user's decision
    }
}
void average()
{
    float number,average,sum; //number is variable for taking an input from user and I want to take it as float.Average is for the result of calculation.sum is for sum of numbers
    int number_count,length; //number counth is for taking the length of the list.length is for if the user knows how many numberr are written
    char decision = 'Y'; // decision value for user's decision to continue the operation
    char sum_decision = 'Y'; // decision value for user's decision to continue the operation
    // Continue the loop until the user did not want to continue more numbers
    while (decision == 'Y' || decision == 'y')
    {
        printf("Have you decided how many numbers do you want to enter?\nIf yes please enter the number\nIf not please enter 0 : ");
        scanf("%d",&length);
        if(length == 0) //if user does not know haw many numbers he/she add we use the following calculations
        {
            number_count = 0;
            sum = 0;
            sum_decision = 'Y';
            while (sum_decision == 'Y' || sum_decision == 'y')
            {
                printf("Enter the number : ");
                while(scanf("%f",&number) != 1) //taking the value from user and controling the value if it is a valid or invalid value
                {
                    printf("You entered an invalid character\nPlease enter a valid value : ");
                    // Error message for invalid input
                    while(getchar() != '\n'){}
                    // Clear the input buffer
                }
                sum += number; //adding new number to previous sum
                number_count ++; //to know the number of list
                printf("Do you want to continue entering numbers?\n"); // asking for adding user new numbers or not
                printf("If yes enter Y or y; if not enter N or n : "); 
                scanf(" %c",&sum_decision); // taking the user's decision
            }
            average = sum / number_count; //calculate the average
            printf("%f is the average of %d numbers which you entered\n",average,number_count); //printing the average
        }
        else if(length > 0) //if user know haw many numbers he/she add we use the following calculations
        {
            int i = 0,j = 0,k= 0; 
            float number[length]; //we create a list which has lenght from the user said
            sum = 0;
            printf("Enter the numbers\nWhen you entered one number keystroke 'enter';\n");
            for(;i<length ;i++)
                scanf("\n%f",&number[i]);  //we are taking the each value and put it to list
            for(;j<length;j ++)
                sum += number[j]; //we sum each values from list and put it to the result veriable
            average = sum / length; //we calculate the average
            printf("%f is the average of the list ;\n",average); 
            for(;k < length - 1;k++)
                printf("%f, ",number[k]); //we print each value
            printf("%f\n",number[k]);
        }
        printf("Do you want to continue with same operation with new numbers?\n");
        printf("If yes enter Y or y; if not enter n or n : ");
        //asking for continuing user with new numbers or not
        scanf(" %c",&decision);
        // taking the user's decision
    }
}
void maximum()
{
    float value; //value is variable for taking an input from user and I want to take it as float.
    char decision = 'Y' ; // decision value for user's decision to continue the operation
    int length; //length is for if the user knows how many numberr are written
    // Continue the loop until the user did not want to continue more numbers
    while(decision == 'Y' || decision == 'y')
    {
        printf("Have you decided how many numbers do you want to enter?\nIf yes please enter the number\nIf not please enter 0 : ");
        scanf("%d",&length);
        if(length == 0) //if user does not know haw many numbers he/she add we use the following calculations
        {
            char number_decision = 'Y';
            float first_value = -2147483648; //it is the minumum value if integer so the enterred number must be greater than that one
            number_decision = 'Y';
            while(number_decision == 'Y' || number_decision == 'y')
            {
                printf("Enter the number : ");
                scanf("%f",&value);
                if(first_value <= value) //program is checking if the new one is grater than the previous max value 
                    first_value = value; //if new one is grater I put it to first_value variable
                printf("Do you still want to countinue to enter number?\n");
                printf("If yes enter Y or y; if not enter N or n : "); //asking for continuing user with new numbers or not
                scanf(" %c",&number_decision);  // taking the user's decision
            }
            printf("(%f) is the maximum value in your entered numbers\n",first_value); //rpinting the maximum number
        }
        else if(length > 0) //if user know haw many numbers he/she add we use the following calculations
        {
            float numbers[length]; //program creating a list which has the length from the user entre for the length
            float temp; //it is for changing the nmbers
            int i = 0,k = 0,l = 0;
            printf("Enter the numbers\nWhen you entered one number keystroke 'enter';\n");
            for(;l<length ;l++)
                scanf("\n%f",&numbers[l]); //taking all values into the list
            for(; i < length - 1 ; i++) //that for loop is bubble sorting algorithm to sort the numbers
            {
                int j = 0;
                for(; j < length - i - 1; j++)
                {
                    if(numbers[j] > numbers[j + 1]) //if the number is bigger than the next one we change them
                    {
                        temp = numbers[j];
                        numbers[j] = numbers[j + 1];
                        numbers[j + 1] = temp;
                    }
                }
            }
            printf("The maximum value in your list = ");
            for(;k < length - 1;k++)
                printf("%f, ",numbers[k]); //printing the all list
            printf("%f is %f\n",numbers[k],numbers[k]);    
        }
        printf("Do you want to continue with same operation with new numbers?\n");
        printf("If yes enter Y or y; if not enter N or n : ");
        //asking for continuing user with new numbers or not
        scanf(" %c",&decision);
        // taking the user's decision
    }
}
int main()
{
    int menu_choice; //the number of the operation
    printf("%% WELCOME TO GTU CALCULATOR MACHINE   %%\n"); //printing the beginning o calculator
    printf("%% STUDENT NAME = HALIT BATUHAN ASLAN  %%\n");
    printf("%% PLEASE SELECT FROM FOLLOWING        %%\n");
    menu(); //printing the other parts of calculator
    while (1) 
    {
        if (scanf("%d", &menu_choice) != 1) //checking if the inputted valueis valid
        {
            printf("You entered an invalid character\nPlease enter a valid value : "); // Error message for invalid input
            while (getchar() != '\n'){}   // Clear the input buffer
        } 
        else 
            break; //if the first valu is acceptable it breaks the loop
    }
    if(menu_choice == 0) //if choice is '0' the calculator end from the beginnig
    {
        printf("You did not make any calculations.\n");
        return 0;
    }
    while(menu_choice <= 0 || menu_choice > 7) //till the number is not between 0 and 7 it takes a new inputs for valid value 
    {
        printf("You did not choose an accepted value\n");
        printf("Please enter a number from the menu!!! : ");
        scanf("%d",&menu_choice);
        if(menu_choice == 0)
        {
            printf("YOu did not make any calculations.\n");
            return 0;
        }
    }
    while(menu_choice > 0 && menu_choice <= 7)
    {
        system("CLS"); //after each new operators and calculating the terminal secreen is cleaning to make it better
        //for each choice program is running the relevent calculation program
        if(menu_choice == 1) 
            adding();
        else if (menu_choice == 2)
            subtrating();
        else if (menu_choice == 3)
            multiplying();
        else if(menu_choice == 4)
            dividing();
        else if(menu_choice == 5)
            powering();
        else if (menu_choice == 6)
            average();
        else if (menu_choice == 7)
            maximum();
        printf("If you want to continue with another operation please enter the number of operation\n");
        printf("If not enter 0 to exit ;\n"); //program askes for new calculations 
        menu(); //printing the menu again to show to user
        scanf("%d",&menu_choice);
    }
    printf("You have completed all your calculations. Thanks for choosing us :-)\n");
    return 0;
}