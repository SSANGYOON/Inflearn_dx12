#pragma once
#include "MonoBehavior.h"

class TestCameraScript : public MonoBehavior
{
public:
	TestCameraScript();
	virtual ~TestCameraScript();

	virtual void LateUpdate() override;

private:
	float		_speed = 100.f;
};
