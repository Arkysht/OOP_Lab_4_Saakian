#include <iostream>
#include <Windows.h>

using namespace std;

class Vector3D {
    double A[3];
    double B[3];
    double x = 0;
    int y = 0;
    double z = 0;

    public:
        void Init(const Vector3D& val) {
            A[3] = val.A[3];
            B[3] = val.B[3];
            x = val.x;
            y = val.y;
            z = val.z;
        }
        void Read() {
            cout << "Input A:\n";
            for (int i = 0; i < 3; i++)
                cin >> A[i];
            cout << "Input B:\n";
            for (int i = 0; i < 3; i++)
                cin >> B[i];
            cout << "Input scalar: ";
            cin >> y;
        }
        void Display() {
            Plus();
            Minus();
            Multiply();
            Scalar_mul();
            Vector_Com();
            Vector_length();
            Vector_len_com();
        }

        void Plus() {
            cout << "A+B: (";
            for (int i = 0; i < 3; i++) {
                cout << A[i] + B[i] << ";";
            }
            cout << ")" << endl << endl;
        }
        void Minus() {
            cout << "A-B: (";
            for (int i = 0; i < 3; i++) {
                cout << A[i] - B[i] << ";";
            }
            cout << ")" << endl << endl;
        }
        void Multiply() {
            cout << "A*B: ";
            x = 0;
            for (int i = 0; i < 3; i++) {
                x += A[i] * B[i];
            }
            cout << x << endl << endl;
        }
        void Scalar_mul() {
            cout << y << "*A: (";
            for (int i = 0; i < 3; i++) {
                cout << y * A[i] << ";";
            }
            cout << ")" << endl << endl;

            cout << y << "*B: (";
            for (int i = 0; i < 3; i++) {
                cout << y * B[i] << ";";
            }
            cout << ")" << endl << endl;
        }
        void Vector_Com() {
            cout << "Vector comparison:\n";
            for (int i = 0; i < 3; i++) {
                if (A[i] == B[i])
                    cout << A[i] << " = " << B[i] << endl;
                else if (A[i] > B[i])
                    cout << A[i] << " > " << B[i] << endl;
                else
                    cout << A[i] << " < " << B[i] << endl;
            }
            cout << endl;
        }
        void Vector_length() {
            cout << "Vector length A: ";
            for (int i = 0; i < 3; i++) {
                x += (A[i] * A[i]);
            }
            cout << sqrt(x) << endl;

            cout << "Vector length B: ";
            for (int i = 0; i < 3; i++) {
                z += (B[i] * B[i]);
            }
            cout << sqrt(z) << endl;
        }
        void Vector_len_com() {
            cout << "Vector length comparison: ";
            if (x == z)
                cout << "A = B";
            else if (x > z)
                cout << "A > B";
            else
                cout << "A < B";
            cout << endl;
        }
};

int main(int args, char* argv[])
{
    Vector3D p1, p2, *p3;
    p2.Read();
    p1.Init(p2);
    p3 = new Vector3D();
    p3->Read();
    p3->Init(p2);
    p3->Display();
    delete p3;

    system("pause");
    return 0;
}