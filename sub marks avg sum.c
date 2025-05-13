#include <stdio.h>
int main(){
   int tamil;
   printf("enter your tamil mark:");
   scanf("%d",&tamil );

  int english;
   printf("enter your english mark:");
   scanf(" %d",&english );

   int maths ;
   printf("enter your maths marks:");
   scanf(" %d",&maths );
   
   
   
   int science ;
   printf("enter your science marks:");
   scanf(" %d",&science );
   
   int social ;
   printf("enter your social marks:");
   scanf(" %d",&social );
   int sum;
   sum=tamil+english+maths+science+social;
   printf("%d\n",sum);
   float average;
   average=sum/5;
   printf("%.2f\n",average);
   
   if(average>=90){
    printf("O grade");
   }
    else if(average>=80)
    {
        printf("A grade");
    }
    else if(average>=70){
    printf("B grade");
        
    }
  else if(average>=60){
    printf("C grade");
      
  }
    else if(average>=40){
    printf("D");
        
    }
    
    else{
        
     printf("BETTER LUCK NEXT TIME");
    }
}


