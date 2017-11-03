#include <stdio.h>
#include <vector>

class Main;
class Util;

// App
class Main {
public:

    int name;

    static Main* getInstance(void);

    static Main* instance;

private:
    Main ();
};

class Util {
public:
    static int addTwo (int a, int b);
};