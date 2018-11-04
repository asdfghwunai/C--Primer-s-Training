数组作为形参会被当成指针
void print(const int *)
void print(const int[])
void print(const int[10])  //xxx,三个等价的，算重定义，这是底层

数组传参要传一个大小，不然不知道
void print(const int ia[],size_t size)


