#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
//I included standard input-output library,stdlib libraries to use functions in my code and to communicate with arduino Windows.h library.
HANDLE serial_port; // that HANDLE uses for communicate with serial port 
DWORD bytes_written; // it keeps the how many bytes are written in writing_file operation DWORD(double word)
void welcome()
{
    printf("## WELCOME TO GTU ARDUINO LAB            ##\n");
    printf("## STUDENT NAME: HALİT BATUHAN ASLAN    ##\n");
}
void menu()
{
    printf("## PLEASE SELECT FROM THE FOLLOWING      ##\n");
    printf("## MENU  :                               ##\n");
    printf("(1) TURN ON LED ON ARDUINO\n");
    printf("(2) TURN OFF LED ON ARDUINO\n");
    printf("(3) FLASH ARDUINO LED 5 TIMES\n");
    printf("(4) SEND A NUMBER TO ARDUINO TO COMPUTE THE FACTORIAL BY ARDUINO\n");
    printf("(5) BUTTON PRESS COUNTER\n");
    printf("(6) TURN ON EXTERNAL LED\n");
    printf("(0) EXIT\n");
    printf("PLEASE SELECT: ");
}
void successfully()
{
    printf("Data written successfully :)\n");
}
void Error()
{
    printf("Error :(\n");
}
void writing_file(char case_value)
{
    if(!WriteFile(serial_port, &case_value, sizeof(case_value), &bytes_written, NULL)) // I used it to write data to a given(certained) input/output devices(arduino)
        Error();
    else
        successfully();
}
int main()
{
    int choise = -1; //for choise of the user, and firstly is it -1 to enter the while loop(except 0 every numbers can be written)
    char first_case = '1' ;  //for all cases write them as char to communicate with arduino
    char second_case = '2';
    char third_case = '3';
    char fourth_case = '4';
    char fifth_case = '5';
    char sixth_case = '6';
    serial_port = CreateFile("\\\\.\\COM3", GENERIC_READ | GENERIC_WRITE, 0, 0, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 0); //informations about serial_port
    if(serial_port == INVALID_HANDLE_VALUE) //if serial_port HANDLE is invalid then it gves the error message and the code of error with GetLastError
    {
        printf("There is an error while opening COM3 port. Error code: %d\n", GetLastError());
        return 1;
    } 
    else //if there is not any mistakes then it prints the following message to user
        printf("COM port opened successfully\n");
    COMMTIMEOUTS timeouts = { MAXDWORD, 0, 0, 0, 0 };
    SetCommTimeouts(serial_port, &timeouts);
    welcome();
    while(choise) 
    {
        menu();
        while(!scanf("%d",&choise)) //if user does not enter a number it takes value again and again
        {
            printf("Please enter an integer number !!!\n");
            getchar();
            scanf("%d",&choise);
        }
        printf("Sending: %d\n", choise); //taking the choise of user
        if(choise == 1) //if choise is 1 then with writin_file function it sents message to arduino to make the relevant function
            writing_file(first_case);
        else if(choise == 2) //if choise is 2 then with writin_file function it sents message to arduino to make the relevant function
           writing_file(second_case);
        else if(choise == 3) //if choise is 3 then with writin_file function it sents message to arduino to make the relevant function
            writing_file(third_case);
        else if(choise == 4) //if choise is 4 then with writin_file function it sents message to arduino to make the relevant function
        {
            writing_file(fourth_case);
            int number;
            printf("Which numbers factorial do you want to learn : ");
            scanf("%d",&number); //takes the number which user want to learn the factorial form
            if(number >= 0) //if number is larger than 0
            {
                char string_number[10]; //for sending the number  
                itoa(number,string_number,10); //it changes the integer number to ascii character as a string 
                WriteFile(serial_port,&string_number,sizeof(string_number),&bytes_written,NULL); //same writing things, but it is for the number wihch we want to learn factorial
                char result_string[10]; //for result
                DWORD bytesRead; //same with the DWORD bytes_written but in this case it is for readining 
                Sleep(3750); //to make communcate is better between arduino and c I need to use same time gaps in both arduino and c and in c I use 'Sleep' function 
                ReadFile(serial_port, &result_string, sizeof(result_string), &bytesRead, NULL); //opposite of WriteFile
                int result = atoi(result_string); //opposite of the itoa(integer to ascii and ascii to integer)
                printf("The factorial of %d is %d\n",number,result);
                Sleep(500); 
            }
            else        //if number is less than 0 tjan it gives that output
                printf("Negative numbers do not have factorial!\n");
        }
        else if(choise == 5) //if choise is 5 then with writin_file function it sents message to arduino to make the relevant function
        {
            writing_file(fifth_case);
            char result_string[20];
            int i = 0;
            while(i<12)
            {
                DWORD bytesRead;
                if(ReadFile(serial_port,&result_string, sizeof(result_string), &bytesRead, NULL)== 1)
                {    
                    i ++;
                    int result = atoi(result_string);
                    printf("You have pushed the button %d times.\n",result);      
                }
            }
       //     printf("The factorial of %d is %d\n",numberresult,result);
        }
        else if(choise == 6) //if choise is 6 then with writin_file function it sents message to arduino to make the relevant function
            writing_file(sixth_case);
        else if(choise == 0 ) //if choise is 0 then exit from the program
            break;
        else //if user does not enter  values between 0-6
            printf("Please select a value between 0-6 !!!\n");
    }
    CloseHandle(serial_port); //closing the port
    return 0;
}