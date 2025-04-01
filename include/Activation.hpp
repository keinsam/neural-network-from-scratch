#ifndef ACTIVATION_HPP
#define ACTIVATION_HPP

#include <Eigen/Dense>

class Activation {

    public:
        Activation() = default;
        virtual ~Activation() = default;
        virtual Eigen::MatrixXd forward(const Eigen::MatrixXd& input) = 0;
        virtual Eigen::MatrixXd backward(const Eigen::MatrixXd& grad_output) = 0;

};

#endif // ACTIVATION_HPP