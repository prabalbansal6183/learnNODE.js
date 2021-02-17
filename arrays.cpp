#include<bits/stdc++.h>
using namespace std;
int solve(int A, vector<int> &B) {
    int sum = 0;
 for (int i = 0; i < A; i++){
    sum=sum+B[i];   
 }
 
 if(sum%3!=0){
     return 0;
 }
 int oneThird = sum/3;
 vector<int> temp(A,0);
 
 int tempSum=0;
 for(int i=A-1;i>=0;i--){
     tempSum += B[i];
     if(tempSum==oneThird){
         temp[i]=1;
     }
 }
 for(int i=0;i<A;i++)
 {
     cout<<temp[i]<<" ";
 }
 
 tempSum=0;
 int total=0;
 for(int i=0; i <A; i++){
     tempSum += B[i];
     if(tempSum == oneThird){
         for(int j=i+2;j<A;j++){
             if(temp[j]==1){
                 total+=1;
             }
         }
     }
     
 }
 return total;
}
int main()
{
    vector <int> v = {1,2,0,3,0,0,3 };
    cout<<solve(v.size(),v);
    return 0;
}