#include <stdio.h>

class CTest {
    public:
        void func() {
            printf("function was called.\n");
        }
        virtual void virtualFunc() {
            printf("virtual function was called.\n");
        }
};

int main (int argc, char ** argv) {
    CTest * obj = NULL;
    /* What does the following print? */
    obj->func(); // this would print "func called" as what's inside the func()
    /* What does the following print? */
    obj->virtualFunc(); //this results in segfault because C *obj is NULL; You would need to allocated obj on the heap
    //by doing C*obj = new C; to be able to print the cotents of virtualFunc() successfully.
   //line above results in segfault because C *obj is on stack; 
   //You would need to allocated obj on the heap for the virtual function to not Seg Fault.WHY?
   //by using "C*obj = new C", I am able to print the contents of virtualFunc() successfully.
}
