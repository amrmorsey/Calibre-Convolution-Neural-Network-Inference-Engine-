//
// Created by shadyf on 29/08/17.
//

#ifndef INFERENCEENGINE_POOLING_LAYER_H
#define INFERENCEENGINE_POOLING_LAYER_H

#include <string>
#include <vector>
#include "AbstractLayer.h"

class AbstractPoolingLayer : AbstractLayer {
private:
    int kernel_size;
    int stride;
    int padding;
//    double *input;
//    double *output;
//    std::vector<int> input_dims;
//    std::vector<int> output_dims;
public:
    AbstractPoolingLayer(std::string name, int kernel_size, int stride, int padding)
            : AbstractLayer(name), kernel_size(kernel_size),
              stride(stride),
              padding(padding) {};

    ~AbstractPoolingLayer() {};
};


#endif //INFERENCEENGINE_POOLING_LAYER_H