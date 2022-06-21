

// ex207 
// #include <stdio.h>
// char hello();
// int main() {
//   hello();
//   return 0;
// }
// char hello() {
//   printf("hello!");
//   return 1;
// }

// ex208
// #include <stdio.h>
// int multiple(int n);
// int main(void) {
//   int a;
//   printf("数値を入力してください ->");
//   scanf("%d",&a);
//   a = multiple(a);
//   printf("2倍にしたい数値%dです.\n",a);
//   return 0;
// }
// int multiple(int n) {
//   // int n =  a
//   int result = n << 1;
//   return result;
  
// }

// ex209
// #include <stdio.h>
// int add(int n);
// int main(void) {
//   int sum;
//   add(sum);
 
//   return 0;
// }
// int add(int n) {
//   // sum = n
//   // 우리가 입력받는수와 ,우리가 타이핑할 수
//   int input_num = 1; // 입력할수
//   int num = 0;
//   while(input_num != 0) {
//     printf("입력한 수 ->");
//     scanf("%d",&input_num);
//     if(input_num == 0) {
//      printf("処理終了。最終的なsumの値:%d\n",num); 
//       break;
//     }
//     num += input_num;
//     printf("sum => %d\n",num);
    
//   }
//   return 1;
  
  

// }

// ex210
// #include <stdio.h>
// int summation(int n);
// int main() {
//   int N;
//   int input_Num;
//   printf("우리가 출력할수 -> ");
//   scanf("%d",&N);
//   printf("1부터 %d까지 의 합은 %d입니다",N,summation(N));
//   return 0;
// }
// int summation(int n) {
//   if(n <= 1) {
//     return 1;
//   }
//   return n + summation(n - 1);
// }


// // ex211
// #include <stdio.h>
// void kakunou(void);
// void average(void);
// int main() {
//   kakunou();
//   average();

//   return 0;
// }
// void kakunou(void) {
//   // 
//   for(int i = 0; i<5; i++) {
//   printf("%d번쨰의 정수입력 -> ",i+1);

//     scanf("%d",&score);
//   
//   }
//   // 점수들 다 있음 

// }
// void average(void) {
//    // 배열 요소 평균 구하는 함수
    int sum = 0;
   for(int i = 0; i<5; i++) { 
   sum += score[i];
}
printf("5명의 총 평균은 %d입니다", (sum / 5 )) ;
 //   }
// ex212
// #include <stdio.h>

// void kakunou(void);
// void average(void);
// int score[3][2];
// int main(void) {
//   kakunou();
//   average();
//   return 0;
  
//   // 3이 인원 
//   // 2가 과목
// }
// void kakunou(void) {
//   float sum = 0.0;

//   for(int i = 0; i<3; i++) {
//     for(int j = 0; j<2; j++) {
//       printf("%d명의 %d번째 과목 점수 ->",i+1,j+1);
//       scanf("%d",&score[i][j]);
//       sum += score[i][j];
//     }
//   }
//    printf("3명의 평균 점수는 %.f",sum / (3 * 2));
// }
// void average(void) {
  
//   int i = 0;
//   while(i != 0) {
//     kakunou();
//   }
// }


#include <stdio.h>

void kakunou(void);
void average(void);
int score[3][2];
int main(void) {
  kakunou();
  average();
  return 0;
  
  // 3이 인원 
  // 2가 과목
}
void kakunou(void) {


  for(int i = 0; i<3; i++) {
    for(int j = 0; j<2; j++) {
      printf("%d명의 %d번째 과목 점수 ->",i+1,j+1);
      scanf("%d",&score[i][j]);
      
    }
  }

}
void average(void) {
   int sum = 0;
   for(int i = 0; i<3; i++) {
     for(int j = 0; j<2; j++) {
       sum += score[i][j];
     }
   }
  printf("3명의 전 과목평균은 %d점입니다\n",sum / 6);
}

// ex213
// #include <stdio.h>
// void search_linear(int s);
// int nums[14] = {
//     1,2,3,4,5,6,7,8,9,10,11,12,13,14
// };
// int main(void) {
//     int s;
//     printf("우리가 찾고싶은 수 -> ");
//     scanf("%d",&s);
//     search_linear(s);
//     return 0;
// }
// void search_linear(int s) {
//     // int s  = s
//   // s에 9 입력시 0,1,2,3,4,5,6,7,8,9 출력후 멈춤
  
//   for(int i = 0; i<nums[s]; i++) {
//     printf("\n배열의 %d번째 요소 수 => %d",i,nums[i]);
//     if(nums[i] == s) {
//       printf("\n%d 발견 종료합니다 : %d 번쨰",s,i);
//       break;
//     }
//   }
  
// }
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void search_binary(int s);
int nums[14] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
int main(void)
{
    int s;
    printf("우리가 찾고싶은 수 -> ");
    scanf("%d",&s);
    
    search_binary(s);
    return 0;
}
void search_binary(int s) {
    int low = 0;
    int high = 13;
    while(low <= high) {
        int mid = (low + high) / 2;  // 6 배출
        printf("배열의 %d번쨰 요소 호출 ->  %d\n",mid,nums[mid]);
        if(s == nums[mid]) {
            printf("%d find! : %d번쨰 \n",s,mid);
            printf("호출 종료 !");
            break;
        }
        else if(s < nums[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
}
