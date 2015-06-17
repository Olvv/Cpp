/* 
 * Illustrates how the classes must be of polymorphic types for dynamic_cast<> to compile.
 *
 * In order for this base-to-derived casting to work using dynamic_cast<>, Base,
 * and Der must be what the Standard calls polymorphic types. In order to be a
 * polymorphic type, your class must have at least one virtual function. If your
 * classes are not polymorphic types, the base-to-derived use of dynamic_cast will
 * not compile.
 *
 * References:
 *
 *   [1] http://stackoverflow.com/questions/2253168/dynamic-cast-and-static-cast-in-c
 */

class Base
{
// Adding a virtual function to base, such as a virtual dtor, will make both Base and Der polymorphic types
// and get the code to compile:
//public:
//    virtual ~Base(){};
};

class Der : public Base
{
};


int main()
{
    Base* base = new Der;
    Der* der = dynamic_cast<Der*>(base); // ERROR - Won't compile

    return 0;
}
