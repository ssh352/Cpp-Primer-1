#include <iostream>

/**
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 */
int main(){

  /**
   * 为了支持分离式编译，C++语言将生命和定义区分开来。
   * 声明：使得名字为程度所知，一个文件如果想使用别处定义的名字，则必须包含对那个名字的声明。
   * 定义：负责创建与名字关联的实体，申请内存空间，还可能会为变量赋一个初始值。
   * 注意：变量只能被定义一次，但是可以被多次声明。
   */
  extern int i; // 声明 i 而非定义 i，以为还未初始化，所以还不能被引用，引用的话编译能通过，但是运行会报错
  int j;        // 声明并定义 j
//  extern double pi = 3.1416; // 定义：虽然有extern关键字，但因为有赋值，所以抵消了extern的作用 // TODO：书上说可以，但是编译不通过？

  std::cout << j << std::endl;

  return 0;
}