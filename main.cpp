#include <iostream>
#include <cstdlib>

using namespace std;

int help(int argc, char *argv[]) {
    if ((argc == 2 && string(argv[1]) == "--help") || argc == 1) {
        cout << R"(Usage:
        ./calculator --help
        ./calculator [Type of calcul] [Number 1] [Number 2]

        Type of calcul:
        [add]    for a simple addition [+]
        [sub]    for a subtraction [-]
        [mul]    for a multiplication [*]
        [div]    for a division [/]
        )" << endl;
        return 0;
    }
    else if (argc < 4) {
        cerr << "Error: Not enough arguments or bad arguments" << endl;
        return 1;
    } else {
        cerr << "Error: Too much arguments" << endl;
    }
    return 0;
}

int main(int argc, char* argv[]) {
    int ret = help(argc, argv);
    if (ret == 0) {
        int x = atoi(argv[2]);
        int y = atoi(argv[3]);
        char *calcul = argv[1];
        cout << calcul << " / " << x << " / " << y << endl;
    }
    return ret;
}