#include <iostream>
#include <vector>
#include <math.h>

using namespace std;
vector<int> numberToDigits(int number){
    vector<int> digits;
    int len = 0;
    int div = number;
    while(div > 0){
        div /= 10;
        len++;
    }
    int idk = number;
    cout << "Length: " << len << endl;
    for(int i = len - 1; i >= 0; i--){
        cout << "i: " << i << endl;
        if(i == len - 1){
            idk /= pow(10,i);
           // cout << "idk" << idk << endl;
            digits.push_back(idk);
            number -= idk * pow(10, i);
           // cout << "a" << number << endl;
        }else{
            idk = (number - (idk * pow(10, i + 1))) / pow(10, i);

        }
    }


    return digits;


}
int main(){

    int n;
    vector<int> siu;
    cin >> n;
    siu = numberToDigits(n);

    for(int x: siu){
        cout << x << endl;
    }


    return 0;
}
