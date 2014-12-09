C-methods
===========

A library to add a very simple Object Orienting to C. Yet limited tools. <br>
Just #include "methods.h" <br>

<h3>Usage:</h3>
```C
#include "methods.h"

// class declaration with the class keyword 
class (SomeClass){
  // attributes before methods
  int attr1;
  double attr2;
  // method declaration like function pointer
  // it is highly advised to put the first arg
  int (*method1)(SomeClass*, int, int);
}

// it is heavily advised to declare 
// a macro like this.
// it will help setting up the
// instances a lot faster.
// surround with do-while(0) to avoid bugs
#define SomeClass_set(var)\
  do{\
    var.method1 = SomeClass_method1;\
  }while(0)

// method keyword to define methods outside the class
// this will declar a function called SomeClass_method1
int method (SomeClass, method1, int num1, int num2){
  // self pointer
  self->attr1 += num1 * num2;
  return num1;
}

int main(){
  // fast initializer to the values
  SomeClass somevar = {35, 12};
  SomeClass_set(somevar); // without this, the methods won't work
  // different kind of method call
  $(somevar, method1, 9, 11);
  // is exactly the same as
  somevar.method1(&somevar, 9, 11);
  
  printf("%d\n", $(somevar, method1, 0, 3));
  return 0;
}


// if( problems || sugestions ){
//  send_email( jhlrietra@gmail.com );
// }
```

Already supports:
<ul>
  <li> class attribute access </li>
  <li> self pointer </li>
  <li> method calls with arguments or not </li>
  <li> brace enclosed initializer </li>
  <li> dynamic definition of methods </li>
  <li> static keyword </li>
</ul>

Developing:
<ul>
  <li> inheritance </li>
  <li> method override </li>
  <li> private methods </li>
  <li> private attributes </li>
  <li> superclass pointer </li>
</ul>

Feel free to contribute.
