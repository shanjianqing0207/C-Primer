int ival = 1.01; //不合法，int是整型
int &rval1 = 1.01; //不合法，引用的初始值必须是一个对象
int &rval2 = ival; //合法
int &rval3; //不合法，引用必须被初始化
