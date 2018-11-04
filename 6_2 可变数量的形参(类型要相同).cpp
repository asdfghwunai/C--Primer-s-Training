用到initializer_list<T> li; //里面的元素都是const类型
初始化可以
initializer_list<T> li;
initializer_list<T> li({"",""});  
initializer_list<T> li={};  //我看定义里没定义拷贝构造函数

void error_msg(initializer_list<T> li)
{
  
}


调用是
error_msg({"aa","bb","cc"});
