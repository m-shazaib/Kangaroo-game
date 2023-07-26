#include <iostream>
using namespace std;

class kangaroo {
public:
    kangaroo(int p1 = 0, int p2 = 0, int s1 = 0, int s2 = 0) : position1(p1), position2(p2), speed1(s1), speed2(s2) {}

    void SetValues() {
        cin >> position1 >> speed1 >> position2 >> speed2;
        return;
    }
    string SetAnswer() {
        string ans = "NO";
        if (position1 == position2) {
            ans = "YES";
        }
        else if (position1 < position2 && speed1 <= speed2) {
            // kangaroo 1 is behind and slower
            ans = "NO";
        }
        else if (position2 < position1 && speed2 <= speed1) {
            // kangaroo 2 is behind and slower
            ans = "NO";
        }
        else {
            while (position2 > position1) {
                NewPos1();
                NewPos2();

                if (position1 == position2) {
                    ans = "YES";
                    break;
                }
            }
        }
        return ans;
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
    cout << k1.SetAnswer() << endl;
    return 0;
}
