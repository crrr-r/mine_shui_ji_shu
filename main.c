#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int count = 3;
    int guessNum = 0;
    int oldNum = 0;


     srand(time(0));


    for (;  ; ) {
        for (int i = 0; i < count ; ++i) {
            int temp = rand() % 9 + 1;

            printf("%d", temp);
            oldNum = oldNum * 10 + temp;
        }


        fflush(stdout);
        _sleep(1000);


        printf("\r       ");
        printf("请输入你刚刚看到的数字：");
        scanf("%d",&guessNum);

        if (guessNum == oldNum){
            printf("正确了，记性真好！继续努力吧\n");

            count++;
            oldNum = 0;


        }else{
            printf("噢！你怎么这个都记不住，真笨\n游戏结束！\n");
            break;
        }



    }





    return 0;
}
