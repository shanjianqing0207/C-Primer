r1 = v2; // 合法，v2是顶层const

p1 = p2; // 不合法，p2是底层const，只能从非常量转换成常量

p2 = p1; // 合法

p1 = p3; // 不合法，p3包含一个底层const

p2 = p3; // 合法，p2与p3都包含一个底层const
