//
// Created by Luka Avbreht on 2019-09-30.
//
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;


class fraction {
private:
// Internal representation of a fraction as two integers
    int numerator;
    int denominator;

public:
// Class constructor
    fraction(int n, int d){
        this->numerator = n;
        this->denominator = d;

};

//    ~fraction(void){
//        delete this->numerator;
//        delete this->denominator;
//    };

vector<int> primes(int n){
    vector<int> res;
    bool ok = true;
    for(int i = 2; i <= sqrt(n)+1; i++){
        for(auto t=res.begin(); t!=res.end(); ++t){
            if(i % *t == 0){
                ok = false;
            }
        }
        if(ok) res.push_back(i);
        else ok = true;
    }
    return res;
}

// Methods to update the fraction
    void add(fraction f){
        this->numerator = f.numerator*this->denominator + this->numerator*f.denominator;
        this->denominator = this->denominator * f.denominator;
    };
    void mult(fraction f){
        this->numerator *= f.numerator;
        this->denominator *= f.denominator;
    };
    void div(fraction f){
        this->numerator *= f.denominator;
        this->denominator *= f.numerator;
    };

    void shorten(){
        vector<int> pri = primes(min(this->denominator,this->numerator));
        for(auto t=pri.begin(); t!=pri.end(); ++t){
            while(this->numerator % *t == 0 and this->denominator % *t == 0){
                this->denominator /= *t;
                this->numerator /= *t;
            }
        }
    };

// Display method
    void display(void){
        cout << this->numerator << " / " << this->denominator << endl;
    };
};

int main(){
    int a, b, c, d;
    string op;
    char br;
    while(cin >> a) {
        cin >> br >> b >> op >> c >> br >> d;

        fraction f1(a, b);
        fraction f2(c, d);

        if (op == "*") {
            f1.mult(f2);
            f1.shorten();
            f1.display();
        }
        if (op == "+") {
            f1.add(f2);
            f1.shorten();
            f1.display();
        }
        if (op == "div") {
            f1.div(f2);
            f1.shorten();
            f1.display();
        }
    }
    return 0;
}