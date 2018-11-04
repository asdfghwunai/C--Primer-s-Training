顶层const被忽略，所以造成重定义
int lookup(int);
int lookup(const int);  //xxx,重定义

int lookup(int *);
int lookup(int *const); //xxx,重定义

底层const，不算重定义
int lookup(int &);
int lookup(const int&);  

int lookup(int *);
int lookup(const int*);  


