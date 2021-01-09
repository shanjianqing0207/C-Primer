int i, *const cp; // i是整型变量，*const未初始化，不合法

int *p1, *const p2; // p1是指向整型对象的指针，*const未初始化，不合法

const int ic, &r = ic; // const int未初始化，不合法

const int *const p3; // *const未初始化，不合法

const int *p; // p是指向常量整型对象的指针
