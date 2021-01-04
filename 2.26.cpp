const int buf; // 不合法，buf是一个未经初始化的常量
int cnt = 0; // 合法
const int sz = cnt; // 合法
++cnt; ++sz; // 不合法，sz是const对象，它的值不能被改变
