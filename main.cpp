#include <stdexcept> //domain_error
#include <string>
#include <cstdlib>     // std::rand
#include <iostream>

#include "martist.hpp"

int main(){
	size_t height = 100;
	size_t width = 100;
	int reddepth = 5;
	int greendepth = 5;
	int bluedepth = 6;
	//int seed;
/*	std::cout <<"reddepth:";
	std::cin >> reddepth;

	std::cout <<"greendepth:";
	std::cin >> greendepth;

	std::cout <<"bluedepth:";
	std::cin >> bluedepth;
	std::cout << "" << std::endl;

	std::cout <<"height:";
	std::cin >> height;
	std::cout << "" << std::endl;

	std::cout <<"width:";
	std::cin >> width;
	std::cout << "" << std::endl;

  std::cout <<"seed:";
	std::cin >> seed;
	std::cout << "" << std::endl;

*/

	unsigned char* buffer = (unsigned char*) malloc(3*width*height*sizeof(unsigned char));

	Martist martist(buffer,height,width,reddepth,greendepth,bluedepth);

	martist.redDepth(1);
	martist.greenDepth(1);
	martist.blueDepth(1);


	//	std::cin.clear();
	//	std::cin >> martist;

	//std::string myString = martist.getExpression(100);
	//std::cout << myString;
	try{
		martist.paint(); 
	}catch(std::domain_error& e){
		std::cout << "Caught error (paint): " << e.what() << std::endl;
	}
	std::cout << martist;
	
	free(buffer);
	return 0;
}






/*	int depth;
	std::cout << "" << std::endl;
	std::cout << "Insert depth of the expression: ";
	std::cin >> depth;
	std::string myString = getExpression(depth);
	std::cout << myString << std::endl;
*/