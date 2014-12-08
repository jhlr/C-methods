#ifndef _SIMPLEOO_H_
#define _SIMPLEOO_H_

#define class(class_name)\
	typedef struct class_name class_name; struct class_name
#define VA1(...)\
	, ## __VA_ARGS__
#define method(class_name, meth_name, args...)\
	class_name ## _ ## meth_name (class_name *self VA1(args))
#define $(inst, meth, args...)\
	inst.meth(&inst VA1(args))

#endif
