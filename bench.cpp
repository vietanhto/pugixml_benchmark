#include "pugixml.hpp"
#include <iostream>
#include <sstream>

int main()
{
    pugi::xml_document doc;
    pugi::xml_parse_result result;
    for (int i = 0; i < 1000; i++) {
        result = doc.load_file("large.xml");
    }
    std::cout << "Load result: " << result.description() << std::endl;
    std::cout << std::endl;
}