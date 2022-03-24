 /*Expt. no. 7
 compute sin(x)/cos(x) using taylor series approximation.compare your result with the built in libary function.print both the results.with appropriate inferences
 USN
 Name:Pavani.B
 Date:03/02/2022

 sin(X)=x-x^3/3! + x^5/5! - x^7/7! + x^9/9! - ....
 cos(X)=1-x^2/2! + x^4/4! - x^6/6! + x^8/8!- ....
 

 */


 #include<stdio.h>
 #include<math.h>
 #define PI 3.14156
 int main()
{
   float x,degree;
   float sum, term, nume, deno ;
   int i;
   printf("Enter the degree:");
   scanf("%f",&degree);
   x=degree*(PI/180);
   
   sum=0;
   nume=x;
   deno=1;
   i=1;
   
   do{
        term = nume/deno;
        sum = sum+term;
        i=i+2;
        nume = 1*nume*x*x;
        deno = deno*(i-1)*i;
     }while(fabs(term) >= 0.00001);
   
   printf("computed value of sin(%f)=%f\n",degree,sum);
   printf("value of sin(%f)from the library function=%f\n",degree,sin(x));
   return 0;


}

