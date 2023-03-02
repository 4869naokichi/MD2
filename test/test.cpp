#include <md2.h>

int main() {
  BOOL retval = md2::Setup("COM5", 115200);
  if (retval == FALSE) {
    return FALSE;
  }
  md2::SetMotor(0.0f);
}