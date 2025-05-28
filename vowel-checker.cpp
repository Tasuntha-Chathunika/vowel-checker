#include <iostream>
using namespace std;

int main(){
    char alphabet;  

    cout<<"Enter an alphabet: ";
    cin>>alphabet;  
    if((alphabet>='A' && alphabet<='Z')||(alphabet>='a' && alphabet<='z')){
        if(alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u'){
            cout<<'"'<<alphabet<<'"'<<" is a VOWEL"<<endl;
        }
        else if(alphabet=='A' || alphabet=='E' || alphabet=='I' || alphabet=='O' || alphabet=='U'){
            cout<<'"'<<alphabet<<'"'<<" is a VOWEL"<<endl;
        }
        else{
            cout<<'"'<<alphabet<<'"'<<" is a CONSONANT"<<endl;
        }
    }
    else{
        cout<<'"'<<alphabet<<'"'<<" is not an alphabet"<<endl;
    }
    return 0;
}