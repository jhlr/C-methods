#ifndef _METHODS_H_
#define _METHODS_H_

#define class(class_name)\
	typedef struct class_name class_name;\
	class_name class_name ## _default;\
	struct class_name 
#define VA1(...)\
	, ## __VA_ARGS__
#define method(class_name, meth_name, args...)\
	_ ## class_name ## _ ## meth_name (class_name *self VA1(args))
#define $(inst, meth, args...)\
	inst.meth(&inst VA1(args))

#endif
