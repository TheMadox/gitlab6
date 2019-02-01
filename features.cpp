#include <iostream>
using namespace std;
double dzielenie(double a, double b){
if(b!=0){
return a/b;
}
else{
cout << "Nie dziel przez 0!";
return 0;
}
}
double mnozenie(double a, double b){
return a*b;
}
double odejmowanie(double a, double b){
return a-b;
}
double dodawanie(double a, double b){
return a+b;
}
