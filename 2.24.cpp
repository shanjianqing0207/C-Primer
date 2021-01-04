int i = 42;
void *p = &i;
long *lp = &i;
// 因为void*可以存放任意类型的地址，long*不能存放int类型的地址
