#include <stdio.h>

int main(){
    char data[2001];
    fgets(data, 2000, stdin); //scanf와 비슷하지만 공백까지 인식하여 값을 저장할 수 있음
    printf("%s", data);

    return 0;
}