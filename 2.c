

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
//   // 여기다가 배열,배열의 인덱스값처리
//   int i;
//   int N[5];
//   int score;
//   float sum = 0;
//   for(int i = 0; i<5; i++) {
//   printf("%d번쨰의 정수입력 -> ",i+1);

//     scanf("%d",&score);
//    N[i] = score;
//    sum += score;
//   }
//   // 점수들 다 있음 
//   printf("평균값은 %.f입니다",sum / 5);  
// }
// void average(void) {
//    // 배열 요소 평균 구하는 함수
//  int i;
//  while(i == 1) {
//     kakunou(); 
//    }
 
// }
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