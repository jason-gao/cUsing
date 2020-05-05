[toc]

### env
MacBook Pro (Retina, 15-inch, Mid 2014)
mac os mojave 10.14.4 (xx)
编辑器： CLion
编译器： Apple LLVM version 10.0.1 (clang-1001.0.46.4)



### compile use clang
-  cc -c HelloWorld.c 编译
- cc -o HelloWorld HelloWorld.o 改变可执行文件名字，链接
- ./HelloWorld

- cc HelloWorld.c 一步到位
- ./a.out


### 关键字
auto double int struct break else long switch

case enum register typedef char extern return union

const float short unsigned continue for signed void

default goto sizeof volatile do if while static

### 标识符
标识符就是在程序中自定义的一些符号和名称。要跟关键字区分开来：关键字是C语言默认提供的符号，标识符是程序员自定义的。
1，只能由26个英文字母的大小写、10个阿拉伯数字0~9、下划线_组成
valid: test1    Mike2jack   My_tExt
invalid: test!32   haha(da)tt   哈哈_text

2，严格区分大小写，同一段英文字母的大写和小写是两个不同的标识符
main 和Main 不同
3，不能以数字开头
123haha  78text  98111

### 注释
单行 // 注释
多行 /* 注释*/

### 进制

1. 二进制
0和1
0b1010 需要以0b或者0B开头
0b1010 = 0*2^0+1*2^1+0*2^2+1*2^3 = 10 转成10进制
二进制转10进制最大制是2^n-1 0b1111 = 2^4-1 = 15  4位最大值是15
2. 八进制
0-7    0开头
010 = 0*8^0+1*8^1+0*8^2 = 8 转10进制
3. 十进制 
0-9
101 = 1*10^0+0*10^1+1*10^2
4. 二进制转八进制
不难发现一个十进制数可以表示的最大值是9，而一个八进制数可以表示的最大值是7，恰好3个二进制数可以表示的最大值0b111也是7。因此，我们可以用一个八进制数来代替3个二进制数。

0b11110011 = 0b 011  110  011  = 0363

如果是八进制转为二进制，那就反过来，用3位二进制数来表示1位八进制数

025 = 0b 010  101 = 0b10101

025 => 5*8^0+2*8^1 = 21
0b10101 => 1*2^0+0*2^1+1*2^2+0*2^3+1*2^4 = 21
5. 十六进制
由于十进制、八进制、十六进制中都包含了0~7，为了区分开来，在书写十六进制数的时候，需要在前面加个0x或者0X。比如0x76是个十六进制数，076是个八进制数，76则是个十进制数

### 内存
内存寻址是从大到小
