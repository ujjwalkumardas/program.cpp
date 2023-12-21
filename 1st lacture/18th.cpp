/*write a program to print the following pattern
         1
        12
       123
      1234
     12345
 -----------------------------------------------------------*/
 #include<iostream>
 using namespace std;
 int main(){
    int i,n,k,j;
    cin>>n;
 for(i=1;i<=n;i++){
   for( k=n;k>=i;k--){
      cout<<" ";}
   for( j=1;j<=i;j++){
      cout<<j;
      
   }
   cout<<endl;
   

 }
 }