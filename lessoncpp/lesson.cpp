#include <fstream>
#include <iostream>
#include <ostream>
#include <cstring>
#include <cmath>

using namespace std;

void fup (double x, double x_1, double x_2, double y_1, double y_2){//fup y
    double y;
    y=((x-x_1)*(y_2-y_1)/(x_2-x_1))+y1;
    cout << "y>>> " << y << endl;
}

int main(){

    double x;
    double y_1,y_2,x_1,x_2;

    cout << "x>>>" << endl;

        cin >> x;
        if(x < 0 || x > 200){
            cout << ">>>Errore" << endl;
            return 0;
        };

    ifstream coord;
    coord.open("text.txt");

    if(!coord){
        cout << ">>>Errore" <<endl;
        return 0;
        }
        else{
            f >> x_2 >> y_2;
            while(!coord.eof()) {
                if(x_2 < x){
                x_1 = x_2;
                y_1 = y_2;
                coord >> x_2 >> y_2;
                }
                else if(x_2 == x){
                    cout << y_2 << endl;
                    f.close();
                    return 0;
                }
                else {
                    fup (x, x_1, x_2, y_1, y_2);
                    coord.close();
                    return 0;
                }
            }
    }
    coord.close();
    return 0;
}
