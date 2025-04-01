#ifndef LINEAR_HPP
#define LINEAR_HPP

#include <Eigen/Dense>
#include "Layer.hpp"

class Linear : public Layer {

    public:
        Linear(int in_features, int out_features);
        Eigen::VectorXd forward(const Eigen::VectorXd& input);
        Eigen::VectorXd backward(const Eigen::VectorXd& grad_output);
        bool has_parameters() const override { return true; }
        void update_parameters(const Eigen::MatrixXd& weight_grad, const Eigen::VectorXd& bias_grad) override;
        void zero_grad() override;

    private:
        Eigen::MatrixXd weight_, weight_grad_;
        Eigen::VectorXd bias_, bias_grad_;
        Eigen::MatrixXd input;
    };

#endif // LINEAR_HPP
