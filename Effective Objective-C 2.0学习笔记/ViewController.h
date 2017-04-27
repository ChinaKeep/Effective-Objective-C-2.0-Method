//
//  ViewController.h
//  Effective Objective-C 2.0学习笔记
//
//  Created by 品德信息 on 2017/4/27.
//  Copyright © 2017年 品德信息. All rights reserved.
//

#import <UIKit/UIKit.h>
/*
定义常量方法，优于使用预处理指令#define定义常量，因为编译器会确保常量值不变
一旦在实现文件中定义好，即可随处使用，而采用预处理指令所定义的常量可能会无意中
遭人修改从而导致应用程序各个部分所使用的值互不相同
总之：勿使用预处理指令定义常量，而应该接触编译器来确保常量正确，比方说可以在实现
文件中用static const来声明变量，也可以声明一些全局变量。

*/

//第5条： 用枚举表示状态、选项、选项码
/*
 枚举只是一种常量命名方式。某个对象所经历的各种状态可以定义为一个枚举集
 
 */

extern  const NSTimeInterval MenuAnimationDuration;

@interface ViewController : UIViewController


@end

