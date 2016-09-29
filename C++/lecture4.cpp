#include <fstream>
#include <iostream>
using namespace std;

void max_min_value();
void input_error();

int main(int argc, char const* argv[])
{
    //max_min_value();
    input_error();
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

void input_error(){
    ifstream in;
    in.open("data.txt");

    if(in){
        cout<<"the file open successfully"<<endl;
        int age = -1;
        in >> age;
        if(!in){
            //could not read the age, age still has the -1;
            cout<<"the age could not be read"<<endl;
        }else{
            cout<<"age="<<age<<endl;
        }
    }else{
        cout<<"the file was not opened"<<endl;
    }
}

