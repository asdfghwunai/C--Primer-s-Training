int &refval4=10;   //错误， 初始化必须是对象
double dval=3.14; 
int &refval5=&dval; //错误，类型不匹配

int &refs[10]=/* ? */;   //xxx,不存在引用的数组
int (&arrRef)[10]=arr;   //数组的引用
