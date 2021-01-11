const int v2 = 0; int v1 = v2; // v2是顶层const，v1是普通的int

int *p1 = &v1, &r1 = v1; // p1是普通的指针，r1是普通的引用

const int *p2 = &v2, *const p3 = &i, &r2 = v2; // p2是底层const，p3右端是顶层const，左端是底层const
                                               // r2是底层const
