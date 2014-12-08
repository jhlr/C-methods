#ifndef _EXCLASS_H_
#define _EXCLASS_H_

// This macro must be defined with the class and has to be called after every 
// declaration of an instance of the class.
#define set_ExClass(var)	{\
	var.method1 = ExClass_method1;\
	var.get1 = ExClass_get1;\
}

// class macro with the class_name
class (ExClass){
	// Definition of attributes looks exactly like in structs but they must 
	// come before the declaration of the methods.
	int attribute1, attribute2; 
	// Methods declared as function pointers. 1st arg is needed to pass the 'self' pointer.
	int (*method1)(ExClass*, int, int);
	int (*get1)(ExClass*);
};

// Definition of methods as:
// [ret_type] method ([class_name], [method_name], [args...]){ [body] } 
int method (ExClass, method1, int num, int a){
	return self->attribute1 + num * a;
}
// 1st arg is needed for the 'self' pointer.
int method (ExClass, get1){
	return self->attribute1;
}
#endif