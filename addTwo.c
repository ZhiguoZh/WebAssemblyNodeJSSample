#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int addTwo(int a, int b) {
  return a+b;
}
