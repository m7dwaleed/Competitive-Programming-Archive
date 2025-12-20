#include<iostream>
using namespace std;



int  main(){

    int n=4;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}


  int count=0;
for(int i=0;i<n;i++){
    bool found=false;
    for(int j=0;j<i;j++){
        if(arr[i]==arr[j]){
            found=true;
            break;
        }
    }
  if(found==true){
    continue;
  }
   

  for(int k=i+1;k<n;k++){
    if(arr[i]==arr[k]){
        count++;
    }
  }


}
cout<<count;
    return 0;
}