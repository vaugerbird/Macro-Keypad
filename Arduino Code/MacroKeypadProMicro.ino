// Macro Keypad by Preston Crowe 
// Github Repository: https://github.com/PrestonCrowe/Macro-Keypad/

#include <Mouse.h>
#include <Keyboard.h>

// Defining each pin, with a unique name
// S# = Switch #
#define S1 4
#define S2 5
#define S3 6
#define S4 7
#define S5 8
#define S6 9

void setup() {
  // Telling the Arduino that the switches are inputs //
  pinMode (S1, INPUT_PULLUP);
  pinMode (S2, INPUT_PULLUP);
  pinMode (S3, INPUT_PULLUP);
  pinMode (S4, INPUT_PULLUP);
  pinMode (S5, INPUT_PULLUP);
  pinMode (S6, INPUT_PULLUP);

  Keyboard.begin();
  Mouse.begin();
}

void loop() {

    //Switch 2//
    if (digitalRead(S2) == LOW)
    {
      Keyboard.press(KEY_UP_ARROW);
    }
    if (digitalRead(S2) == HIGH)
    {
      Keyboard.release(KEY_UP_ARROW);
    }

    //Switch 5//
    if (digitalRead(S5) == LOW)
    {
      Keyboard.press(KEY_DOWN_ARROW);
    }
    if (digitalRead(S5) == HIGH)
    {
      Keyboard.release(KEY_DOWN_ARROW);
    }

    //Switch 6//
    if (digitalRead(S6) == LOW)
    {
      Keyboard.press(KEY_RIGHT_ARROW);
    }
    if (digitalRead(S6) == HIGH)
    {
      Keyboard.release(KEY_RIGHT_ARROW);
    }

    //Switch 4//
    if (digitalRead(S4) == LOW)
    {
      Keyboard.press(KEY_LEFT_ARROW);
    }
    if (digitalRead(S4) == HIGH)
    {
      Keyboard.release(KEY_LEFT_ARROW);
    }

    //Switch 3//
    if (digitalRead(S3) == LOW)
    {
      Keyboard.press(KEY_LEFT_CTRL);
    }
    if (digitalRead(S3)==HIGH)
    {
      Keyboard.release(KEY_LEFT_CTRL);
    }

    //Switch 1//
    if (digitalRead(S1) == LOW)
    {
      Keyboard.press(KEY_LEFT_ALT);
    }
    if (digitalRead(S1) == HIGH)
    {
      Keyboard.release(KEY_LEFT_ALT);
    }
  }
}
