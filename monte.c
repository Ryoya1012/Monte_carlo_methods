#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	int i;   
	int n;   //半径1の円内に入った点の数
	int N = 0;   //試行回数
	float x, y, pai, z;
	float PAI = 3.1415926535;

	srand(time(NULL));
       for(int p = 10 ; p < 1000000000 ; p*=1000 ){
        for(i = 1; i < p; i++)
         {
	    x = (float)rand()/RAND_MAX;  //randで発生させた乱数をRAND_MAXで割ることにより0~1の数を生成している
	    y = (float)rand()/RAND_MAX;
	    z = x*x + y*y;               //円の方程式
             if(z<1)
              {
                  n++;	 
               }
	 }
 printf("Number of trials : %d ",i);	
 pai = 4 * (float)n / p;                // 一辺2ｒの正方形内に接する円は半径ｒである。このとき、正方形の面積は4r^2、円の面積はπr^2となる。
 printf("pai:%lg\n", pai);               //面積の割合を考えると円/正方形＝π/4となる。これより、半径rの円内にある点と正方形内にある点の割合を計算すると円周率が求まることがわかる。
                                       //よって以上の式を変形するとπ=4*A（A：円内にある点の数/正方形内にある点の数）				
       } 
 return 0;
}
