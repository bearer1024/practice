#include <fstream>
#include <iostream>
using namespace std;

void max_min_value();

int main(int argc, char const* argv[])
{
    max_min_value();
    return 0;
}

void max_min_value(){
    cout<<"pls input 10 numbers"<<endl;
    int number,max,min;
    int count = 0;
    bool first = true;
    while(count<10){
        cin>>number;
        if(first){
            max = number;
            min = number;
            first = false;
        }else if(number>max){
            max = number;
        }else if(number<min){
            min = number;
        }
        count++;
    }
    cout<<"Maxium number is "<<max<<endl;
    cout<<"Minimum number is "<<min<<endl;
}
