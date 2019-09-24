//
//  main.c
//  class
//
//  Created by s20181106116 on 2019/9/24.
//  Copyright © 2019 s20181106116. All rights reserved.
//

#include <stdio.h>
#include "stdlib.h"
int main() {
    static signed int i = 5;
    char*p;
    int j=10;
    p=(char*)&i;
    printf("sum=%d\n",i+j);
    return 0;
}
