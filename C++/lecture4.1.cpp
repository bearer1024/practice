/*
 * author    :bearer1024
 * date      :29 Sep 2016
 * description: This is a sentinel controlled loop. it has been commonly used in programs
 */
#include <iostream>
using namespace std;

void getAverage();

int main(int argc,char const* argv[]){
    getAverage();
    return 0;
}

void getAverage(){
    const int SENTINEL = -1;
    int numRead = 0;
    int grade = 0,total = 0;

    cout<<"input grade here"<<endl;
    cout<<"please input"<<SENTINEL<<"to quit"<<endl;
    cin>>grade;

    while(grade != SENTINEL){
        total = total+grade;
        numRead++;
        cin>>grade;
    }
    if(numRead > 0){
        cout<< "Average is "<<(total *1.0)/numRead <<endl;
    }
}

