#include <stdio.h>

enum level {
  EMON = 20,
  EDU = 30  // C does not support strings as enum values it support only integers
};

int main() {
  enum level emon = EMON;
  printf("%d", emon);
  return 0;
}
