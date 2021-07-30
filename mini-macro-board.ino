 #include "Keyboard.h"

#define KEY_F13 0xF0
#define KEY_F24 0xFB
#define KEY_F3 0xC4
#define COMMAND_KEY 0x83
#define LEFT_SHIFT 0x81
#define KEY_LEFT_ALT 0x82

//Display Constants
#define SSD_A 10
#define SSD_B 16
#define SSD_C 14
#define SSD_D 15
#define SSD_E 18
#define SSD_F 19
#define SSD_G 20

#define COUNTER_UP 9
#define COUNTER_DOWN 8
#define BUTTON_1 2
#define BUTTON_2 3
#define BUTTON_3 4
#define BUTTON_4 5
#define BUTTON_5 6
#define BUTTON_6 7

int counter = 0;

void setup()
{
  setupDisplay();
  
  pinMode(BUTTON_1, INPUT);
  pinMode(BUTTON_2, INPUT);
  pinMode(BUTTON_3, INPUT);
  pinMode(BUTTON_4, INPUT);
  pinMode(BUTTON_5, INPUT);
  pinMode(BUTTON_6, INPUT);
  pinMode(COUNTER_UP, INPUT);
  pinMode(COUNTER_DOWN, INPUT);

}

void loop()
{
  getDisplayStatus();
  if (counter == 0)
  {
    /******** SHOW OFF KEYS *********/
    if (digitalRead(BUTTON_1) == 1)
    {
      muteControls();
    }
    else if (digitalRead(BUTTON_2) == 1)
    {
      cameraControls();
    }
    else if (digitalRead(BUTTON_3) == 1)
    {
      // Minecraft F3
      Keyboard.press(KEY_F3);
      delay(500);
      Keyboard.releaseAll();
    }
    else if (digitalRead(BUTTON_4) == 1)
    {
      // Show Website
      Keyboard.press(KEY_LEFT_GUI);
      Keyboard.press(' ');
      Keyboard.release(KEY_LEFT_GUI);
      Keyboard.release(' ');
      delay(70); // Catchup Computer
      Keyboard.println("chrome");
      delay(70);
      Keyboard.press(0XB0);
      Keyboard.release(0XB0);
      delay(1500);
      Keyboard.press(KEY_LEFT_GUI);
      Keyboard.press('t');
      Keyboard.release(KEY_LEFT_GUI);
      Keyboard.release('t');
      delay(70); // Catchup Computer
      Keyboard.println("https://cameronthompson.io");
      Keyboard.press(0XB0);
      Keyboard.release(0XB0);
      delay(1500);
      Keyboard.releaseAll();
    }
    else if (digitalRead(BUTTON_5) == 1)
    {
      Keyboard.press(KEY_LEFT_GUI);
      Keyboard.press(KEY_LEFT_ALT);
      Keyboard.press('t');
      delay(1500);
      Keyboard.releaseAll();
    }
    else if (digitalRead(BUTTON_6) == 1)
    {
      Keyboard.press(KEY_LEFT_GUI);
      Keyboard.press(KEY_LEFT_ALT);
      Keyboard.press('s');
      delay(1500);
      Keyboard.releaseAll();
    }
  }
  /********* VSCODE KEYS ****************/
  else if (counter == 1)
  {
    /******** ZOOM SPECIFIC KEYS *********/
    if (digitalRead(BUTTON_1) == 1)
    {
      muteControls();
    }
    else if (digitalRead(BUTTON_2) == 1)
    {
      cameraControls();
    }
    else if (digitalRead(BUTTON_3) == 1)
    {
    }
    else if (digitalRead(BUTTON_4) == 1)
    {
    }
    else if (digitalRead(BUTTON_5) == 1)
    {
    }
    else if (digitalRead(BUTTON_6) == 1)
    {
    }
  }
  else if (counter == 2)
  {
    if (digitalRead(BUTTON_1) == 1)
    {
      muteControls();
    }
    else if (digitalRead(BUTTON_2) == 1)
    {
      cameraControls();
    }
    else if (digitalRead(BUTTON_3) == 1)
    {
    }
    else if (digitalRead(BUTTON_4) == 1)
    {
    }
    else if (digitalRead(BUTTON_5) == 1)
    {
    }
    else if (digitalRead(BUTTON_6) == 1)
    {
    }
  }
  else if (counter == 3)
  {
    if (digitalRead(BUTTON_1) == 1)
    {
      muteControls();
    }
    else if (digitalRead(BUTTON_2) == 1)
    {
      cameraControls();
    }
    else if (digitalRead(BUTTON_3) == 1)
    {
    }
    else if (digitalRead(BUTTON_4) == 1)
    {
    }
    else if (digitalRead(BUTTON_5) == 1)
    {
    }
    else if (digitalRead(BUTTON_6) == 1)
    {
    }
  }
  else if (counter == 4)
  {
    if (digitalRead(BUTTON_1) == 1)
    {
      muteControls();
    }
    else if (digitalRead(BUTTON_2) == 1)
    {
      cameraControls();
    }
    else if (digitalRead(BUTTON_3) == 1)
    {
    }
    else if (digitalRead(BUTTON_4) == 1)
    {
    }
    else if (digitalRead(BUTTON_5) == 1)
    {
    }
    else if (digitalRead(BUTTON_6) == 1)
    {
    }
  }
  else if (counter == 5)
  {
    if (digitalRead(BUTTON_1) == 1)
    {
      muteControls();
    }
    else if (digitalRead(BUTTON_2) == 1)
    {
      cameraControls();
    }
    else if (digitalRead(BUTTON_3) == 1)
    {
    }
    else if (digitalRead(BUTTON_4) == 1)
    {
    }
    else if (digitalRead(BUTTON_5) == 1)
    {
    }
    else if (digitalRead(BUTTON_6) == 1)
    {
    }
  }
  else if (counter == 6)
  {
    if (digitalRead(BUTTON_1) == 1)
    {
      muteControls();
    }
    else if (digitalRead(BUTTON_2) == 1)
    {
      cameraControls();
    }
    else if (digitalRead(BUTTON_3) == 1)
    {
    }
    else if (digitalRead(BUTTON_4) == 1)
    {
    }
    else if (digitalRead(BUTTON_5) == 1)
    {
    }
    else if (digitalRead(BUTTON_6) == 1)
    {
    }
  }
  else if (counter == 7)
  {
    if (digitalRead(BUTTON_1) == 1)
    {
      muteControls();
    }
    else if (digitalRead(BUTTON_2) == 1)
    {
      cameraControls();
    }
    else if (digitalRead(BUTTON_3) == 1)
    {
    }
    else if (digitalRead(BUTTON_4) == 1)
    {
    }
    else if (digitalRead(BUTTON_5) == 1)
    {
    }
    else if (digitalRead(BUTTON_6) == 1)
    {
    }
  }
  else if (counter == 8)
  {
    if (digitalRead(BUTTON_1) == 1)
    {
      muteControls();
    }
    else if (digitalRead(BUTTON_2) == 1)
    {
      cameraControls();
    }
    else if (digitalRead(BUTTON_3) == 1)
    {
    }
    else if (digitalRead(BUTTON_4) == 1)
    {
    }
    else if (digitalRead(BUTTON_5) == 1)
    {
    }
    else if (digitalRead(BUTTON_6) == 1)
    {
    }
  }
  else if (counter == 9)
  {
    if (digitalRead(BUTTON_1) == 1)
    {
      muteControls();
    }
    else if (digitalRead(BUTTON_2) == 1)
    {
      cameraControls();
    }
    else if (digitalRead(BUTTON_3) == 1)
    {
    }
    else if (digitalRead(BUTTON_4) == 1)
    {
    }
    else if (digitalRead(BUTTON_5) == 1)
    {
    }
    else if (digitalRead(BUTTON_6) == 1)
    {
    }
  }
}

/**********GLOBAL ZOOM FUNCTIONS**********/

/*
* Mute/Unmute Zoom
*/
void muteControls()
{
  Keyboard.press(COMMAND_KEY);
  Keyboard.press(LEFT_SHIFT);
  Keyboard.press('1');
  delay(500);
  Keyboard.releaseAll();
}

/*
* Camera On/Of Zoom
*/
void cameraControls()
{
  Keyboard.press(COMMAND_KEY);
  Keyboard.press(LEFT_SHIFT);
  Keyboard.press('2');
  delay(500);
  Keyboard.releaseAll();
}

/**********DISPLAY FUNCTIONS**************/
void getDisplayStatus()
{
  if (digitalRead(COUNTER_UP) == HIGH && counter < 9)
  {
    counter++;
    changeDisplay(counter);
    Serial.print(counter);
    delay(300);
  }
  else if (digitalRead(COUNTER_DOWN) == HIGH && counter > 0)
  {
    counter--;
    Serial.print(counter);
    changeDisplay(counter);
    delay(300);
  }
}

void changeDisplay(int num)
{
  if (num == 0)
  {
    displayZero();
  }
  else if (num == 1)
  {
    displayOne();
  }
  else if (num == 2)
  {
    displayTwo();
  }
  else if (num == 3)
  {
    displayThree();
  }
  else if (num == 4)
  {
    displayFour();
  }
  else if (num == 5)
  {
    displayFive();
  }
  else if (num == 6)
  {
    displaySix();
  }
  else if (num == 7)
  {
    displaySeven();
  }
  else if (num == 8)
  {
    displayEight();
  }
  else if (num == 9)
  {
    displayNine();
  }
}

void setupDisplay()
{
  pinMode(SSD_A, OUTPUT);
  pinMode(SSD_B, OUTPUT);
  pinMode(SSD_C, OUTPUT);
  pinMode(SSD_D, OUTPUT);
  pinMode(SSD_E, OUTPUT);
  pinMode(SSD_F, OUTPUT);
  pinMode(SSD_G, OUTPUT);
  changeDisplay(counter);
}

void displayZero()
{
  digitalWrite(SSD_A, HIGH);
  digitalWrite(SSD_B, HIGH);
  digitalWrite(SSD_C, HIGH);
  digitalWrite(SSD_D, HIGH);
  digitalWrite(SSD_E, HIGH);
  digitalWrite(SSD_F, HIGH);
  digitalWrite(SSD_G, LOW);
}

void displayOne()
{
  digitalWrite(SSD_A, LOW);
  digitalWrite(SSD_B, HIGH);
  digitalWrite(SSD_C, HIGH);
  digitalWrite(SSD_D, LOW);
  digitalWrite(SSD_E, LOW);
  digitalWrite(SSD_F, LOW);
  digitalWrite(SSD_G, LOW);
}

void displayTwo()
{
  digitalWrite(SSD_A, HIGH);
  digitalWrite(SSD_B, HIGH);
  digitalWrite(SSD_C, LOW);
  digitalWrite(SSD_D, HIGH);
  digitalWrite(SSD_E, HIGH);
  digitalWrite(SSD_F, LOW);
  digitalWrite(SSD_G, HIGH);
}

void displayThree()
{
  digitalWrite(SSD_A, HIGH);
  digitalWrite(SSD_B, HIGH);
  digitalWrite(SSD_C, HIGH);
  digitalWrite(SSD_D, HIGH);
  digitalWrite(SSD_E, LOW);
  digitalWrite(SSD_F, LOW);
  digitalWrite(SSD_G, HIGH);
}

void displayFour()
{
  digitalWrite(SSD_A, LOW);
  digitalWrite(SSD_B, HIGH);
  digitalWrite(SSD_C, HIGH);
  digitalWrite(SSD_D, LOW);
  digitalWrite(SSD_E, LOW);
  digitalWrite(SSD_F, HIGH);
  digitalWrite(SSD_G, HIGH);
}

void displayFive()
{
  digitalWrite(SSD_A, HIGH);
  digitalWrite(SSD_B, LOW);
  digitalWrite(SSD_C, HIGH);
  digitalWrite(SSD_D, HIGH);
  digitalWrite(SSD_E, LOW);
  digitalWrite(SSD_F, HIGH);
  digitalWrite(SSD_G, HIGH);
}

void displaySix()
{
  digitalWrite(SSD_A, HIGH);
  digitalWrite(SSD_B, LOW);
  digitalWrite(SSD_C, HIGH);
  digitalWrite(SSD_D, HIGH);
  digitalWrite(SSD_E, HIGH);
  digitalWrite(SSD_F, HIGH);
  digitalWrite(SSD_G, HIGH);
}

void displaySeven()
{
  digitalWrite(SSD_A, HIGH);
  digitalWrite(SSD_B, HIGH);
  digitalWrite(SSD_C, HIGH);
  digitalWrite(SSD_D, LOW);
  digitalWrite(SSD_E, LOW);
  digitalWrite(SSD_F, LOW);
  digitalWrite(SSD_G, LOW);
}

void displayEight()
{
  digitalWrite(SSD_A, HIGH);
  digitalWrite(SSD_B, HIGH);
  digitalWrite(SSD_C, HIGH);
  digitalWrite(SSD_D, HIGH);
  digitalWrite(SSD_E, HIGH);
  digitalWrite(SSD_F, HIGH);
  digitalWrite(SSD_G, HIGH);
}

void displayNine()
{
  digitalWrite(SSD_A, HIGH);
  digitalWrite(SSD_B, HIGH);
  digitalWrite(SSD_C, HIGH);
  digitalWrite(SSD_D, HIGH);
  digitalWrite(SSD_E, LOW);
  digitalWrite(SSD_F, HIGH);
  digitalWrite(SSD_G, HIGH);
}
