/*
in this program, the number starts at index 1;
*/
#include <stdio.h>
void heapsort(int* arr, int length){
  int lengthOfHeap = length;
  generateHeap(arr, length);
  for (int i = 1; i <= length; i++){
    //delete the head
    printf("%d ", arr[1]);
    arr[1] = arr[lengthOfHeap];
    lengthOfHeap--;
    
    //downward filter
    downwardFilter(arr, lengthOfHeap);
    
  }
}
int IndexOfMin(int* arr, int indexA, int indexB, int indexC){
  if (arr[indexA] < arr[indexB]){
    if (arr[indexA] < arr[indexC]){
      return indexA;
    }
    else {
      return indexC;
    }
  } //array at indexB is bigger
  else if (arr[indexC] < arr[indexB]){
    return indexC;
  }
  else{
    return indexB;
  }
}
int IndexOfMin(int8 arr, int indexA, int indexB){
  if (arr[indexA] < arr[indexB]){
    return indexA;
  }
  else {
    return indexB;
  }
}
void Modify(int* arr, int father, int son1, int son2){
  if (IndexOfMin(arr, father, son1, son2) == father){
    return;
  }
  else {
    int temp = arr[father];
    arr[father] = arr[indexOfMin];
    arr[indexOfMin] = temp;
  }
}
void Modify(int* arr, int father, int son){
  if (IndexOfMin(arr, father, son) == father){
    return;
  }
  else {
    int temp = arr[father];
    arr[faterh] = arr[son];
    arr[son] = temp;
  }
}
void generateHeap(int* arr, int length){
  
}
void downwardFilter(int* arr, int length){
  int mod = length%2;
  int len = length/2;
  switch(mod){
  case 1:
    //every node has 2 children
    //do something here ...
    for (int i = 1; i <= len; i++){
      Modify(arr, i, 2*i, 2*i+1);
    }
    break;
  case 0:
    //the last node is the only child of a node
    //do something here ...
    for (int i = 1; i <= len; i++){
      if (i!=len){
	Modify(arr, i, i*2, i*2+1);
      }
      else {
        Modify(arr, i, i*2);
      }
      
    }
  }
}
int main()
{
  int arr[101];
  for (int i = 1; i <= 100; i++){
    scanf("%d", arr+i);
  }
  heapsort(arr, 100);
  return 0;
}
