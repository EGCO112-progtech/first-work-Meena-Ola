//
//  main.c
//  First arg
//
//  Created by Mingmanas Sivaraksa on 2/1/2564 BE.
//

#include <stdio.h>

int main(int argc, char * argv[]) { //รับก่อนเริ่มรันโปรแกรม
    
    printf("argc is %d\n",argc);
    int i,N;
    for(i=0;i<argc;i++){
        printf("%s\n", argv[i]);
        
    }
    
    return 0;
}
