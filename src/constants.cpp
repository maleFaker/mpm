#include "include/constants.h"

Constants::Constants(std::string meshin){
    
        // snowModel = new SnowModel(0.99, //theta_compression
        //                           0.0001, //theta_stretch
        //                           0.1, //muStick
        //                           1.4E5, //Youngs Modulus
        //                           0.2, //Poisson Ratio
        //                           20., //xi
        //                           0.95 //FLIP contribution
        //                          );
        snowModel = new SnowModel(0.025, //theta_compression
                                  0.0075, //theta_stretch
                                  0.9, //muStick
                                  1.5e5, //Youngs Modulus
                                  0.2, //Poisson Ratio
                                  10., //xi
                                  0.95 //FLIP contribution
                                  );

        mesh = new Mesh(meshin);
        beta = 0.5;
        h = 0.0066;
        // h = 0.1;
        dt = 0.001;
        dt2 = dt * dt;
        domainExtent = Vector3D(1.,1.,1.);        
        bodyForce = Vector3D(0.,0.,-10.0);
    };