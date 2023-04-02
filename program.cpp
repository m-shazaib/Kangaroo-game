/*Program for 2 kangaroos moving from different positions, to reach same point*/

#include <iostream>
using namespace std;



class kangaroo {
public:
    //constructor
    kangaroo(int p1 = 0, int p2 = 0, int s1 = 0, int s2 = 0) : position1(p1), position2(p2), speed1(s1), speed2(s2) {}

    void SetValues() {
        cin >> position1 >> speed1 >> position2 >> speed2;
        return;
    }

    string SetAnswer() {
        string ans("NO");

        if (position1 == position2) { return "YES"; } //if both the kangaroos start at same position

        else if (position1 > position2) { ans = "NO"; }//if by any chance position of kangaroo1 is greater than kangaroo2, which is a constraint of this program



        //when adding the speed of kangaroo1 to its position, check whether it is equal to kangaroo2's position and is less then it
        while (position2 > position1 && position1 != position2) {
            NewPos1();
            NewPos2();

               if (position1 == position2) {
                return "YES";
            }
            else { return "NO"; }
        }
       
    }



    void NewPos1() {
        position1 = position1 + speed1;
        return;
    }

    void NewPos2() {
        position2 = position2 + speed2;
        return;
    }




private:

    int position1;
    int position2;
    int speed1;
    int speed2;
 



};



int main() {
    kangaroo k1;
    k1.SetValues();
    //k1.function();
    //k1.SetAnswer();
    cout << k1.SetAnswer() << endl;


    return 0;
}

