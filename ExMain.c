#include <stdio.h>
#include "simpleOO.h"
#include "ExClass.h"

int main (){
  // Constructor to attributes in the order they were declared
	ExClass something = {1, 0};	
	
	// This will set the methods of something to the default
	set_ExClass(something);
	
	// Calling attributes is simple 
	something.attribute1 += 2;
	
	// The method call is very different:
	// $([instance_name], [method_name], [args...])
	printf("%d\n", $(something, method1, 50, 3)); // 153
	// If there is no need for args then just don't put any
	printf("%d\n", $(something, get1)); // 3
	return 0;
}
