#include <string>
#include <iostream>
using namespace std;
long long degree(long long c){
    long long a = 1;
    while(c != 0){
        a = a * 10;
        c--;}
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
    if (a[0] == '-'){
        for (int i = 1; a[i] != '\0'; i++){
            c += a[i];}
    }
    return c;
}
long long len(string a){
  int b = 0;
    while (a[b] != '\0'){
        b++;}
    return b;
}

string translation(long long e){
    string b;
    long long c;
while (e != 1 or e != 0){
        c = e % 2;
        e = e / 2;
        if (c == 1){
            b = '1' + b;}
        if (c == 0){
            b = '0' + b;}}
    return b;}
string fractional(string a){
    long long b = 1;
    string c;
    for (long long i = 0; a[i] != '.'; i++){
        b = i;}
    b +=2;
    for (b; a[b] != '\0'; b++){
        c += a[b];}
    return c;
}
string integer(string a){
    string b;
   for (long long i = 0; a[i] != '.'; i++){
        b += a[i];} 
    return b;
}
long long  translation2(string e){
    long long c, d = 0;
    c = len(e);
    for (long long i = 0; e[i] != '\0'; i++){
        if (e[i] == '0'){
            d += 0 * degree(c);
            c--;}
        if (e[i] == '1'){
            d += 1 * degree(c);
            c--;}
        if (e[i] == '2'){
            d += 2  * degree(c);
            c--;}
        if (e[i] == '3'){
            d += 3 * degree(c);
            c--;}
        if (e[i] == '4'){
            d += 4 * degree(c);
            c--;}
        if (e[i] == '5'){
            d += 5 * degree(c);
            c--;}
        if (e[i] == '6'){
            d += 6 * degree(c);
            c--;}
        if (e[i] == '7'){
            d += 7 * degree(c);
            c--;}
        if (e[i] == '8'){
            d += 8 * degree(c);
            c--;}
        if (e[i] == '9'){
            d += 9 * degree(c);
            c--;}
    }
    d = d / 10;
    return d;
}
string translation3(double h, long long o ){
    string a;
    for (long long i = 0; i != 23 - o; i++){
        h = h * 2;
        if (h >= 1){
            h--;
            a += '1';
        }else{
            a += '0';}}
    return a;}
long long search(string u){
    long long b = 132454;
    for (long long i = 0; u[i] != '1'; i++){
        b = i;}
    return b;
}
int main(){
    string a, b, c, e, g, f, u;
    long long p, r, m, o, l, s, n, v;
    double h;
    cin >> a;
    b += sign(a);
    a = clear(a);
    e = integer(a);
    p = translation2(e);
    g = translation(p);
    o = len(g);
    f = fractional(a);
    r = translation2(f);
    m = len(f);
    h = r;
    h = h / degree(m);
    u = translation3(h, o);
    s = search(u);
    m = translation2(u);
    if (o >= 1 or m == 0){
        l = 127 + s;}
    if (o == 0){
        l = 127 - s;
    }
    //cout << s;
    
}
}
