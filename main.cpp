#include "main.hpp"
#include "./graph/graph.hpp"

int help(int argc, char *argv[]) {
    if ((argc == 2 && string(argv[1]) == "--help")) {
        cout << R"(Usage:
        ./calculator --help
        Start the project with ./calculator
        )" << endl;
        return 2;
    }
    else if (argc > 2) {
        cerr << "Error: Too much arguments. Try with \"--help\"" << endl;
        return 1;
    } else if (argc == 2 && string(argv[1]) != "--help") {
        cerr << "Bad argument. Try with \"--help\"" << endl;
        return 1;
    }
    return 0;
}

int main(int argc, char *argv[]) {
    int ret = help(argc, argv);
    if (ret == 0) {
        // int x = atoi(argv[2]);
        // int y = atoi(argv[3]);
        // string calcul = argv[1];
        my_window();
    }
    if (ret == 2)
        ret = 0;
    return ret;
}