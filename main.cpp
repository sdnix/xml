#include <iostream>
#include "../tinyxml/tinyxml.h"
#include "../tinyxml/tinystr.h

void main() 
{
	TiXmlDocument doc("level2.xml");
	doc.LoadFile();


	//root
	TiXmlHandle hdoc(&doc);
	TiXmlElement* root = NULL;
	root = doc.FirstChildElement("Level2");
	TiXmlElement* second = NULL;
	second = doc.FirstChildElement("GameAsset");

	if (!root) 
	{
		std::cout << "Error parser did not read Level2 in xml";
	}
	else
	{
		float name, x, y, angle;
		second->QueryFloatAttribute("name", &name);
		second->QueryFloatAttribute("x", &x);
		second->QueryFloatAttribute("y", &y);
		second->QueryFloatAttribute("angle", &angle);
		std::cout << "the parser recieved this : " << std::endl;
		std::cout << name << std::endl;
		std::cout << x    << std::endl;
		std::cout << y    << std::endl;
		std::cout << angle;
	}
