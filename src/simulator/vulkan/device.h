//--------------------------------------------------
// Robot Simulator
// device.h
// Date: 24/06/2020
// By Breno Cunha Queiroz
//--------------------------------------------------
#ifndef DEVICE_H
#define DEVICE_H

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <iostream>
#include <vector>
#include <set>
#include <string.h>
#include "defines.h"
#include "physicalDevice.h"

class Device
{
	public:
	Device(PhysicalDevice* physicalDevice);
	~Device();

	VkDevice handle() const { return _device; }
	PhysicalDevice* getPhysicalDevice() const { return _physicalDevice; }
	VkQueue getGraphicsQueue() const { return _graphicsQueue; }
	VkQueue getPresentQueue() const { return _presentQueue; }

	VkSampleCountFlagBits getMsaaSamples() const { return _msaaSamples; }
	private:
	VkSampleCountFlagBits getMaxUsableSampleCount();

    VkDevice _device;
	VkQueue _graphicsQueue;
	VkQueue _presentQueue;
	PhysicalDevice* _physicalDevice;
	VkSampleCountFlagBits _msaaSamples;
};

#endif// DEVICE_H
