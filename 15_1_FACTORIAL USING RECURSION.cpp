//Name: Srihari Nair
//Prn: 23070123131
//Class: EnTC B-2
# include <iostream>
using namespace std;
// Creating a function
int fact (int n){
    if (n<=1){
        // Terminating statement (base condition)
        return 1;
    }
    else {
        return (n*fact(n-1));    // Recursion
    }
}
int main (){
    int X,n;
    cout<< "Enter number : ";
    cin>>n;
    X= fact(n);      // Function calling
    cout<<n<<"!="<<X;
    return 0;
}
