#ifndef LAYER_HPP
#define LAYER_HPP

#include <Eigen/Dense>

class Layer {

    public:
        Layer() = default;
        virtual ~Layer() = default;
        
        virtual Eigen::MatrixXd forward(const Eigen::MatrixXd& input) = 0;
        virtual Eigen::MatrixXd backward(const Eigen::MatrixXd& grad_output) = 0;
        
        virtual bool has_parameters() const { return false; }
        virtual void update_parameters(const Eigen::MatrixXd& weight_grad, const Eigen::VectorXd& bias_grad) {}
        virtual void zero_grad() {}

};

#endif // LAYER_HPP