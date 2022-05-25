# 这里是起点，绝非终站

### 四个面向 窥探 C++的本质
- procedural 面向过程的
- generic 泛型的
- object-based 基于对象的
- object-oriented 面向对象的

### 不曾注意到的
- 数据的输入和输出，并非 C++ 程序语言本身定义的一部分（此精神同 C 语言，见 K & R 第 7 章）（由 C++ 的一套面向对象的层次体系（classes hierarchy）提供支持，并作为 C++ 标准库(standard library) 的一员）
- 照相机（计算机图形学，三维，空中摄影测量都白学了）常用 7 个 浮点数来描述：
    1. 空间位置 3个浮点数
    2. 视角方向 3个浮点数
    3. aspect ratio 照相机视窗的宽高比 1个浮点数

### 01 什么是类
    用户自定义的数据类型（user-defined data type），增强类型抽象化的层次
    class 定义 应该（分为） 分为两部分
     (1) 头文件（header file）————用来声明该 class 的各种操作行为
     (2) 源文件（source file）————包含了操作行为的具体实现

### 02 对象初始化方式
    (1) 使用 = 运算符 如 num_tries = 0;
        源自 C 语言
    (2) 构造函数语法（constructor syntax） 如 int num_right(0)
        解决 “多值初始化” 问题
        使 内置类型 与 class 类型 的 初始化方式 得到统一
        
### 99 杂记
1. 形参 和 实参 （英语）
   - 形参：paremeter / formal argument
   - 实参：argument  / actual argument