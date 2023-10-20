#include <stdio.h>
#include "bst.h"

int main () {
  Tree t = createTree();
  link x;
  insert(t, 88);
  imprime(t, "oi");
  insert(t, 74);
  imprime(t, "oi");
  insert(t, 69);
  imprime(t, "oi");
  insert(t, 47);
  imprime(t, "oi");
  insert(t, 33);
  imprime(t, "oi");
  insert(t, 22);
  imprime(t, "oi");
  insert(t, 37);
  imprime(t, "oi");


  
  return 0;
}
