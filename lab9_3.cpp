#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    ifstream source("score.txt");
    string textline;
    bool have = bool(getline(source , textline));
    int cnt = 0;
    double sum = 0 , sum2 = 0;
    while(have){
        double value = stod(textline);
        cnt++;
        sum += value;
        sum2 += value*value;
        have = bool(getline(source , textline));
    }
    double mean = sum / cnt;
    cout << "Number of data = " << cnt << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sqrt(sum2 / cnt - mean * mean);
    source.close();
}