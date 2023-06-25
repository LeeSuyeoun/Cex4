//
//  main.c
//  Cex4
//  static변수
//  Created by 이수연 on 2023/06/25.
//

#include <stdio.h>
void fn(){
    static int a = 3;
    a = a + 1;
    printf("%d\n", a);
}
void main() {
    // insert code here...
    fn();
    fn();
}
