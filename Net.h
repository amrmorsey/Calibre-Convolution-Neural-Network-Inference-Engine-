//
// Created by Amr on 8/22/17.
//

#ifndef INFERENCEENGINE_NET_H
#define INFERENCEENGINE_NET_H

#include <vector>
#include <string>
#include <memory>
#include <map>
#include "layers/abstract_layers/AbstractLayer.h"

class Net {
private:
    const string prototxt_path;
    const string weights_dir;
    vector<std::unique_ptr<AbstractLayer>> layers;

    std::map<std::string, vector<int>> getWeightShapes();
    std::tuple<std::unique_ptr<Matrix>, std::unique_ptr<Matrix>> getWeightAndBias(const std::string &layer_name, const std::map<std::string, vector<int>> &shape_map);
    vector<float> extractValues(const std::string &file_name);
public:
    Net(const string &protoxt_path, const string &weights_dir);

    ~Net() {};


};


#endif //INFERENCEENGINE_NET_H
