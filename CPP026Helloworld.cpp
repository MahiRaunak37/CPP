#include <iostream>	//preprocessor directive that includes the content of the standard c++ header file iostream.
 int main()  //The main functions is called upon execution of the program. There must be only one main function in a c++ ,and it must always retrun a number of the int type.
 {
  std::cout<<"hello world"<<std::endl;   //std is a namespace, and :: is the scope resolution operator that allows look-ups for objects by name within a namespace.
 }

//"std::cout" is the standard output stream object, defined in iostreaam, and it prits to the standard output (stdout)
//"<< is" in this context, the stream insertion operator, so called because it inserts an object into the stream object.
//"std::endl" is a special I/O stream manipulator object, also defined in file iostream. Inserting a manipulator into a stream changes the state of the stream.
