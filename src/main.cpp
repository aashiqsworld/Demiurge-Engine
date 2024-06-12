/**
 * main.cpp
 * Entry point for the code. Just calls the vk_engine code.
 */

#include <vk_engine.h>

int main(int argc, char* argv[])
{
	VulkanEngine engine;

	engine.init();	
	
	engine.run();	

	engine.cleanup();	

	return 0;
}
