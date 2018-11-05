对initializer_list不动可以参考https://www.cnblogs.com/5iedu/p/7628091.html


用到initializer_list<T> li; //里面的元素都是const类型
初始化可以
initializer_list<T> li;
initializer_list<T> li{"",""};  
initializer_list<T> li={};  //我看定义里没定义拷贝构造函数，博客说是见{}就把它转为一个initializer_list<T>对象

void error_msg(initializer_list<T> li)
{
  
}


调用是
error_msg({"aa","bb","cc"});
