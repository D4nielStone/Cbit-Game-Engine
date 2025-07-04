/**
 * @file    RectangleScene.h
 * @brief   Header file for the RectangleScene class.
 * @details This file contains the definition of the RectangleScene class which is a subclass of the Scene class.
 *          The RectangleScene class is responsible for rendering a rectangle on the screen.
 * @author  Nur Akmal bin Jalil
 * @date    2024-08-02
 */

#ifndef CBIT_RECTANGLESCENE_H
#define CBIT_RECTANGLESCENE_H

#include "core/project/Scene.h"
#include "../../../src/core/graphic/ShaderProgram.h"

class RectangleScene final : public Scene {
public:
    RectangleScene();

    ~RectangleScene() override;

    void setup() override;

    void update(float deltaTime, Input &input) override;

    void render() override;
private:
    GLuint _vao;
    GLuint _vbo;
    ShaderProgram _shaderProgram;
};


#endif //CBIT_RECTANGLESCENE_H
