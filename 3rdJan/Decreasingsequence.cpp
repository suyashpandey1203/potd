#define MOD 1000000007
int minMoves(int a[], int n, int k)
{ 
int count=0,c=0;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            c++;
            if(c==n-1)
            {
                return  0;
                }
        }
        else if(a[i+1]>a[i]){
            int diff=a[i+1]-a[i];
          
               if(diff%k==0){
                a[i+1]-=((diff));
                count = (count + (diff)/k) % MOD; 
                   
               }
               else {
                a[i+1]-=((diff+k)/k)*k;
                count = (count + (diff+k)/k) % MOD; 
            }
        
            
            
        
  }
     
    
}
return count; 
}