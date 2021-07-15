#include <iostream>
#include <stdexcept>

using namespace std;

int largest_proper_divisor(int n) {
    if (n == 0) {
        throw invalid_argument("largest proper divisor is not defined for n=0");
    }
    if (n == 1) {
        throw invalid_argument("largest proper divisor is not defined for n=1");
    }
    for (int i = n/2; i >= 1; --i) {
        if (n % i == 0) {
            return i;
        }
    }
    return -1; // will never happen
}

void process_input(int n) {
    try{
        int d = largest_proper_divisor(n); 
        cout << "result=" << d << endl;
    }
    /*class invalid_argument : public logic_error {
    public:
        explicit invalid_argument (const string& what_arg);
        explicit invalid_argument (const char* what_arg);
    };
    }*/
    catch (invalid_argument& ia) {
        cout<<ia.what()<<'\n';
    }
    catch(...){

    }
    cout << "returning control flow to caller"<<'\n';
}


int main() {
    int n;
    cin >> n;
    process_input(n);
    return 0;
}
