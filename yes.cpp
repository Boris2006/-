#include <string>
#include <iostream>
using namespace std;
long long degree(long long c){
    long long a = 1;
    while(c != 0){
        a = a * 10;
        c--;
    }
    return a;
}
string sign(string a) {
    string c;
    if (a[0] == '-'){
        c += "1";
    }else{
        c += "0";}
    return c;}
string clear(string a){
    string c;
    for (int i = 1; a[i] != '\0'; i++){
        c += a[i];}
    return c;
}
long long len(string a){
  int b = 0;
    while (a[b] != '\0'){
        b++;}
    return b;
}

string translation(string a){
    string b;
    long long c = 0;
    for (int i = 0; a[i] != '\0'; i++){}
    return "0";
}
long long  translation2(string a){
    string b;
    long long c, d = 0;
    for (long long i = 0; a[i] != '.'; i++){
        b += a[i];}
    c = len(b);
    for (long long i = 0; b[i] != '\0'; i++){
        if (b[i] == '0'){
            d += 0 * degree(c);
            c--;}
        if (b[i] == '1'){
            d += 1 * degree(c);
            c--;}
        if (b[i] == '2'){
            d += 2  * degree(c);
            c--;}
        if (b[i] == '3'){
            d += 3 * degree(c);
            c--;}
        if (b[i] == '4'){
            d += 4 * degree(c);
            c--;}
        if (b[i] == '5'){
            d += 5 * degree(c);
            c--;}
        if (b[i] == '6'){
            d += 6 * degree(c);
            c--;}
        if (b[i] == '7'){
            d += 7 * degree(c);
            c--;}
        if (b[i] == '8'){
            d += 8 * degree(c);
            c--;}
        if (b[i] == '9'){
            d += 9 * degree(c);
            c--;}
    }
    d = d / 10;
    return d;
}
int main(){
    string a, b, c;
    long long p;
    cin >> a;
    b += sign(a);
    a = clear(a);
    p = translation2(a);
    cout << p;  
}
