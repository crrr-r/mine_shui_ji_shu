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
        printf("��������ոտ��������֣�");
        scanf("%d",&guessNum);

        if (guessNum == oldNum){
            printf("��ȷ�ˣ�������ã�����Ŭ����\n");

            count++;
            oldNum = 0;


        }else{
            printf("�ޣ�����ô������ǲ�ס���汿\n��Ϸ������\n");
            break;
        }



    }





    return 0;
}
