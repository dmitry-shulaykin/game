#include <Renders/OpenGL/Camera.hpp>
#include <glm/glm.hpp>

class Camera2D : public OpenGL::Camera {
    public: 
        glm::mat4 getProjectionMatrix(float width, float height) const override {
            return glm::ortho(-width/2, width/2, -height/2, height/2);
        };

};