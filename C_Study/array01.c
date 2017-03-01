//
//  array01.c
//  C_Study
//
//  Created by lyle on 2017/3/1.
//  Copyright © 2017年 lyleKP. All rights reserved.
//

#include "array01.h"

void aryInitialSample () {
    int ary1[3] ;
    ary1[0]= 357;
    printf("%d\n%d\n%d\n",ary1[0],ary1[1],ary1[2]);// 结果357，0，0 未初始化的值是0？
    int ary2[4] = {877};
    printf("%d\n%d\n%d\n%d\n",ary2[0],ary2[1],ary2[2],ary2[3]);// 结果877,0,0,0 未初始化的值是0？
    int ary3[4] = {};
    printf("%d\n%d\n%d\n%d\n",ary3[0],ary3[1],ary3[2],ary3[3]);// 结果877,0,0,0 未初始化的值是0？
    //数组的复制 需要在循环遍历中每个元素去赋值
    /*
     以下写法会报错，需要注意数组不支持赋值操作
     int ary4[5];
     ary4 = {1,2,3,4}
     */
    /*
     以下写法会报错，需要注意数组不支持赋值操作
     int ary4[4];
     ary4 = ary3;
     */
    
}
