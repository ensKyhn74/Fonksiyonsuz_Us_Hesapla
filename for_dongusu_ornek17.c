#include <stdio.h>
// klavyeden 2 sayı girilir;
// ilk sayı taban,ikinci sayı üs.Üs hesaplanır

int main() 

{
 
 int x,y;
 int i;
 int sonuc = 1;
 
 printf("1.sayiyi girin: ");
 scanf("%d",&x);

 printf("2.sayiyi girin: ");
 scanf("%d",&y);

 
 if(x == 0 && y == 0)
 {
  printf("0 uzeri 0 belirsiz!");
 } 
 
 else
 {
  for(i = 1 ; i <= y; i++)
  {
    sonuc *= x;
  }
  
  printf("%d",sonuc);
 }
  
 return 0;

}