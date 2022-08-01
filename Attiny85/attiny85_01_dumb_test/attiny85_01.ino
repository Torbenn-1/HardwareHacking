#include "DigiKeyboard.h"


void setup() {
  // empty for now
}

void loop() {
 DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
 DigiKeyboard.delay(500);
 DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
 DigiKeyboard.delay(500) ;
 DigiKeyboard.print("notepad");
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.delay(800);
 DigiKeyboard.print("Hellow World");
 for(;;){/*empty*/}
 
}
