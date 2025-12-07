#pragma once
#include <string>
#include <glad/glad.h>

namespace cboost {
class Shader {
public:
    Shader(const std::string& vertexPath, const std::string& fragmentPath);
    ~Shader();
    void use();
private:
    unsigned int ID;
};
}