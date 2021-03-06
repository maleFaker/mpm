#ifndef __CONSTANTS
#define __CONSTANTS

#include "mesh.h"
#include "snowModel.h"

#include <iostream>

#define THREADCOUNT 64
#define WITH_GUI 0
#define DIMENSION 2

struct Constants{

    Constants(std::string meshin);

    double h;
    double dt;
    double dt2;
    double beta;
    Vector3D domainExtent;
    Vector3D bodyForce;
    Mesh* mesh;

    const SnowModel* snowModel;


};

#endif
