int led_pin = 10; //Decleration of the variables
int coming_choise;
int button_pin = 6;
int button_press_count = 0;
int button_state = 0;
void setup() //setup part of the arduino code
{
  pinMode(led_pin,OUTPUT); // for external led
  pinMode(LED_BUILTIN,OUTPUT); //for led on arduino.It can be written as LED_BUILTIN
  pinMode(button_pin,INPUT);
  Serial.begin(9600); 
}
int factorial(int number) //factorial function 
{
  if(number == 0 || number == 1)
    return(1);
  else
  {  
    int result = 1;
    for(int i = 2;i<=number;i++)
      result *= i;
    return(result);
  }
}
void loop() 
{
  if(Serial.available()>0) //if it can be readining from c
  {
    coming_choise = Serial.parseInt(); 
    if(coming_choise == 1) //first 3 is for external led
      digitalWrite(LED_BUILTIN,HIGH);
    else if(coming_choise == 2)
      digitalWrite(LED_BUILTIN,LOW);
    else if(coming_choise == 3)
    {
      for(int i = 0;i<5;i++)
      {
        digitalWrite(LED_BUILTIN,HIGH);
        delay(1000);
        digitalWrite(LED_BUILTIN,LOW);
        delay(1000);
      }
    }
    else if(coming_choise == 4) //if choise is 4 then it takes number for factorial and then it calculates it and then writing it
    {
      delay(1000); //I used delay to make communicate better between arduino and c if I do not use them then it starts giving wrong results to c
      if(Serial.available()>0)
      {
        delay(750);
        int coming_number = Serial.parseInt(); //readining the value ant turnes it to integer 
        delay(1000);
        int result = factorial(coming_number);
        char result_string[20];
        sprintf(result_string, "%d", result); //I change the integer value to string to take it to c
        Serial.println(result_string);
        Serial.flush(); //to wait till the data sending to c and it does not allowed to countinue with the new line
      }
    }
    else if(coming_choise == 5) //explaining in report
    {
      while(button_press_count < 12)
      {
          button_state = digitalRead(button_pin);
          if(button_state == HIGH)
          {
            button_press_count ++;
            Serial.println(button_press_count);
          }
          while (button_state == HIGH)
          {
            delay(20);
            button_state = digitalRead(button_pin);
          }
          while(button_state == LOW)
          {
            delay(20);
            button_state = digitalRead(button_pin);
          }
      }
    }
    else if(coming_choise == 6) //it is for external eld which connected to pin 10
    {
      digitalWrite(led_pin,HIGH);
        delay(2500);
      digitalWrite(led_pin,LOW);
        delay(2500);
    }
  }
}
