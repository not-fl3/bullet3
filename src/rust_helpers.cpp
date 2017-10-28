#include "LinearMath/btMotionState.h"
#include "LinearMath/btDefaultMotionState.h"
#include "BulletCollision/CollisionShapes/btSphereShape.h"

btDefaultMotionState newDefaultMotionState(const btTransform& trans) {
  return btDefaultMotionState(trans);
}

btSphereShape newSphereShape(btScalar radius) {
  return btSphereShape(radius);
}

