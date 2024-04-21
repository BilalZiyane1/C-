#include <iostream>
int seracharray(int array[],int size,int num);
int main ()
{
   int numbers[]={1,2,3,4,5,6,7,8,9,10};
   int size =sizeof(numbers)/sizeof(numbers[0]);
   int index;
   int num;
   std::cout <<"enter the number you want :";
   std::cin >> num;
   index=seracharray(numbers,size,num);
   //std::cout <<"the index of the number is:" << index;
   if (index!=-1){
      std::cout <<num <<" is at index " <<index;
   }
   else{
      std::cout << num <<" isn't part of the array";
   }


   return 0;
}
int seracharray(int array[],int size,int num){
   int index;
   for(int i=0;i<size;i++){
      if(array[i]==num){
         //index=i;
         return i;
      }
   }
   return -1;
   //return index;
}