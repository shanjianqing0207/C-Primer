int i = 0;
double* dp = &i; // 非法，*位置错了，导致类型不同
int *ip = i; // 非法，指针应该存放的是变量的地址
int *p = &i; // 合法
