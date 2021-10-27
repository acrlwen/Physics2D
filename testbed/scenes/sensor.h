#ifndef PHYSICS2D_SCENES_SENSOR_H
#define PHYSICS2D_SCENES_SENSOR_H
#include "testbed/frame.h"
namespace Physics2D
{
	class SensorFrame : public Frame
	{
	public:
		SensorFrame(PhysicsWorld* world, ContactMaintainer* maintainer,
			Tree* tree, DBVH* dbvh, Utils::Camera* camera) : Frame("Sensor", world, maintainer, tree, dbvh, camera)
		{

		}
		void load() override
		{

		}
		void render(QPainter* painter) override
		{

		}
	private:

	};
}
#endif