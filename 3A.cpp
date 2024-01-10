#include<iostream>
#define MOD 1000000007
using namespace std;
int minMoves(int a[], int n, int k)
{
int count=0,c=0;
    for(int i=0;i<n-1;i++){
        if(a[i]>=a[i+1]){
            c++;
            if(c==n-1)
            {
                return  0;
                }
        }
        else if(a[i+1]>a[i]){
            while(a[i+1]>a[i]){
                a[i+1]-=k;
                count++;
            }
        }


        }
 return count%MOD;   }

int main(){ int n,k,a[100];
cout<<"Enter the no of element in array:";
cin>>n;
cout<<"Enter the value of K:";
cin>>k;
for(int i=0;i<n;i++){
        cin>>a[i];
}
int ret= minMoves(a,n,k);
cout<<ret;
return 0;}