#include <cboost/engine.hpp>
#include <cboost/shader.hpp>

int main() {
    cboost::Engine engine;
    cboost::Shader shader("basic.vert", "shaders/basic.frag");
    engine.run();
    return 0;
}