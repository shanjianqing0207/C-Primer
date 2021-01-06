int i = -1, &r = 0; // 不合法，引用必须初始化为一个对象

int *const p2 = &i2; // 合法

const int i = -1, &r = 0; // 合法

const int *const p3 = &i2; // 合法

const int *p1 = &i2; // 合法

const int &const r2; // 不合法，不符合语法

const int i2 = i, &r = i; // 合法
