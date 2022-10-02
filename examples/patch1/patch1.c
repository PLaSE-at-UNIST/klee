/*
 * First KLEE tutorial: testing a small function
 */

#include "klee/klee.h"

int foo(int x, int y) {
  int z = x + y;
  return z;
}

int main() {
  int a = klee_int("a");
  return foo(a, 2);
}
