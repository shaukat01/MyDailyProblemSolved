 #include<iostream>
 using namespace std;

 int checkPal(string name,int i,int j){
                       
    cout<<"step b step "<< name <<endl;
    if(i>j)
        return true;

    if(name[i]!=name[j]){
        return false;
    } 
             else{
      return  checkPal(name,i+1,j-1);
        }
     
 }


int main(){

   string name="abba";
   cout<<endl;
   checkPal(name,0,name.length()-1);

   if(checkPal){
    cout<<"It is palindrome: "<<endl;
   }
   else{
    cout<<"It is not a palindrome: "<<endl;
   }
    return 0;
}