//
//  main.cpp
//  123
//
//  Created by 陆天明 on 15/11/11.
//  Copyright © 2015年 陆天明. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a,*p;
    a=100;
    p=&a;
    
    printf("a=%d  &a=%d  &p=%d  p=%d   *p=%d/n",a,&a,&p,p,*p);
    return 0;
}
