//--------------------------------------------------
// Robot Simulator
// box.cpp
// Date: 2020-08-30
// By Breno Cunha Queiroz
//--------------------------------------------------
#include "box.h"

Box::Box(std::string name, glm::vec3 position, glm::vec3 rotation, glm::vec3 size, float mass, glm::vec3 color):
	Object(name, position, rotation, size, mass), _color(color)
{
	_type = "Box";
	_model = new Model("box");
	_physics = new ObjectPhysics(_position, _rotation, mass);
}

Box::~Box()
{
}
