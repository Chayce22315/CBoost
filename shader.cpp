#include "shader.hpp"
#include <iostream>

namespace cboost {
Shader::Shader(const std::string& vertexPath, const std::string& fragmentPath) {
    // Minimal shader loader (example purposes)
    ID = glCreateProgram();
}

Shader::~Shader() {
    glDeleteProgram(ID);
}

void Shader::use() {
    glUseProgram(ID);
}
}