// This codes is just a prove. It will change when components arrive.
#include <Keyboard.h>

void ejecute() {
  Keyboard.begin();
  delay(500);;
  script();
  Keyboard.end();
}

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void script() {
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();

  delay(200);

  Keyboard.print("notepad");

  typeKey(KEY_RETURN);
  delay(100);
  Keyboard.print("YOU HAVE BEEN PWNED MY BRUTHA\n");
  typeKey(KEY_RETURN);
  Keyboard.print(" &&&&&&&                                     .#&&@&&@&\n");
  Keyboard.print(" &(((&&&&&&&@@@@@@&@&&&&&&&&&@&&&&&@&&&&&&&@@@@@@&&(&\n");
  Keyboard.print("  &((((&&&&&&&&&@@@@@&&@&&@&&@@@&@@@&@&&@@&&@@@@(((@*\n");
  Keyboard.print("   &&((&&@&@@&&&@@&@@@@@@&&@@&@@&&@@@&@@@@@@@@((((&\n");
  Keyboard.print("     &&&@&@&@@&&@&&@&@@@@@@@@@@&@@@@@@@@@@@@@@&@#&\n");
  Keyboard.print("    #&&@&@@@&@&&@@&@&@@&@@@@@@@@@@@@@@&@@@@@&@@@@(\n");
  Keyboard.print("   &&&&&@@&@@@&&@@@@@@&@@@@@@@@@@@@@@@@@@@@@@@@&@&,\n");
  Keyboard.print("  &&&@&@@&@@#@@@@@@&@@@&@@@@@@@@@@@@@@@@@@@@@@@@@&\n");
  Keyboard.print("  @&&@@@@@##  %@@&#&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&\n");
  Keyboard.print(" &&&&@@@@&@#@@@  ##&@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@&\n");
  Keyboard.print(" &@&@@&@@@&@@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&\n");
  Keyboard.print(" @@@@@@@@@@@&@&@@@@@@@@@((((@@@@@@@@@@@@@@@@@@@@@@@@%\n");
  Keyboard.print(" @@@&@&@@@@@@@@@@@@@@@@@@(#@@@@@@@@@@@@@@@@@@@@@@@&\n");
  Keyboard.print("   &@@@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&\n");
  Keyboard.print("     &&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
  Keyboard.print("        &&@@@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@&#\n");
  Keyboard.print("            /@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
  Keyboard.print("               *&@@@@@@@///((@@@@@@@@@&*\n");
  Keyboard.print("                         (((\n");
  typeKey(KEY_RETURN);
  typeKey(KEY_RETURN);
  Keyboard.print("GRRRRRR...\n");
  typeKey(KEY_RETURN);
  Keyboard.print("GOOD BOY");
  delay(3000);

  // End Payload

  // Stop Keyboard and Mouse
}
