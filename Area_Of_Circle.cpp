#include<iostream>
using namespace std;
float circle(float r){
    return  3.14*r*r;
}
int main(){
    float radius;
    cout<<"Enter the radius=";
    cin>>radius;
    cout<<"The area of circle is="<<circle(radius);

}