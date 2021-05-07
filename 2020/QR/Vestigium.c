#include <stdio.h>
#include <string.h>

//함수 선언
int check(int (*arr)[], int num, char* result);

//전역 변수 선언
int number = 0;

//메인 함수
int main() {
    //변수 선언
    int t;
    int n;
    char data[50];
    char result[90];
    char *total[100] = {};

    //시행 횟수 입력
    scanf("%d",&t);

    //반복문 실행
    for (int i = 0 ; i < t ; i++) {
        scanf("%d", &n);
        number = n;
        int array[n][n];
        for (int k = 0; k < n; k++){
            for (int m = 0; m < n; m++){
                scanf("%d", &array[k][m]);
            }
        }
        check(array,n,data);
        sprintf(result, "Case #%d: %s", t, data);
        //printf("%s\n", result);
        total[i] = result;
    }

    

    for (int k = 0 ; k < t ; k++) {
        printf("%s\n", total[k]);
    }
}

//검사 함수
int check(int (*arr)[number], int num, char* result) {
    int row, column, sum, count;
    row = 0;
    column = 0;
    sum = 0;
    
    //행 검사
    for (int x = 0; x < num ; x++) {
        for (int i = 0; i < num; i++) {
            for (int j = i+1; j < num ; j++) {
                if(arr[x][i] == arr[x][j]) {
                    count = 1;
                }
            }
        }
        if(count == 1) {
            row += 1;
            count = 0;
        }
    }
    //열 검사
    for (int x = 0; x < num ; x++) {
        for (int i = 0; i < num; i++) {
            for (int j = i+1; j < num ; j++) {
                if(arr[i][x] == arr[j][x]) {
                    count = 1;
                    //printf("%d %d\n", arr[i][x], arr[j][x]);
                }
            }
        }
        if(count == 1) {
            column += 1;
            count = 0;
            //printf("test");
        }
    }
    //대각합 구하기
    for (int q = 0; q< num; q++) {
        sum += arr[q][q];
        //printf("%d", arr[1][0]);
    }

    sprintf(result, "%d %d %d", sum, row, column);
    //printf("%d %d %d\n", sum, row, column);
    //printf("ASDfasdf");
    //printf("%s\n", result); //정상 작동
}

