

#include <stdlib.h>
#include <stdio.h>

class C {
    public:
        void func() {
            printf("func calledn");
        }
        virtual void virtualFunc() {
            printf("virtual func calledn");
        }
};

int main (int argc, char ** argv) {
    C * obj = NULL; //this line is assiging a NULL pointer and we can't use it to call member functions of the C lass. We should create a new object using the new keyword.
    /* What does the following print? */
    obj->func();
    /* What does the following print? */
    obj->virtualFunc();
    /* What's the difference? */
}

// in order to make the code work the NULL should be replaced by a new keyword.
