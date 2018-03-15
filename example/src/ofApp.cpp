//
// Copyright (c) 2018 Christopher Baker <https://christopherbaker.net>
//
// SPDX-License-Identifier:	MIT
//


#include "ofApp.h"


void ofApp::setup()
{
    // From the Getting Started guide.
    // http://eigen.tuxfamily.org/dox/GettingStarted.html
    {
        // Example 1.
        Eigen::MatrixXd m(2,2);
        m(0,0) = 3;
        m(1,0) = 2.5;
        m(0,1) = -1;
        m(1,1) = m(1,0) + m(0,1);

        // Should output:
        //   3  -1
        //   2.5 1.5
        std::cout << m << std::endl;
        std::cout << "--" << std::endl;
    }
    {
        // Example 2a.
        // Should output:
        // m = ... random numbers.
        // m * v = ... random numbers.

        Eigen::MatrixXd m = Eigen::MatrixXd::Random(3,3);
        m = (m + Eigen::MatrixXd::Constant(3,3,1.2)) * 50;
        std::cout << "m =" << std::endl << m << std::endl;
        Eigen::VectorXd v(3);
        v << 1, 2, 3;
        std::cout << "m * v =" << endl << m * v << std::endl;
    }

    {
        // Example 2b.
        // Should output:
        // m = ... random numbers.
        // m * v = ... random numbers.
        Eigen::Matrix3d m = Eigen::Matrix3d::Random();
        m = (m + Eigen::Matrix3d::Constant(1.2)) * 50;
        std::cout << "m =" << std::endl << m << std::endl;
        Eigen::Vector3d v(1,2,3);

        std::cout << "m * v =" << std::endl << m * v << std::endl;
    }

    ofExit();
}
