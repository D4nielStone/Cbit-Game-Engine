/**
 * @file    main.cpp
 * @brief   Main file for the game.
 * @details This file contains the main function for the game. The main function is responsible
 *          for creating the game object and running the game loop. The game loop is responsible
 *          for updating the game and rendering the game.
 * @author  Nur Akmal bin Jalil
 * @date    2024-07-28
 */

// #include "../../src/Application.h"
// #include "scenes/TriangleScene.h"
// #include "scenes/RectangleScene.h"
// #include "scenes/RectangleCameraScene.h"
// #include "scenes/CubeScene.h"
// #include "scenes/CubeTextureScene.h"
// #include "scenes/MeshScene.h"
// #include "scenes/SimpleScene.h"
#include <iostream>

// WARNING: THIS IS BROKEN FOR NOW, USE CbitGameEngine INSTEAD OF CbitApplication

int main(int argc, char *args[]) {
    // Application game; // Create game here
    //
    // if (!game.initialize()) {
    //     return -1; // if game initialization failed, return -1
    // }
    //
    // game.getSceneManager().addScene("triangle", std::make_shared<TriangleScene>());
    // game.getSceneManager().addScene("rectangle", std::make_shared<RectangleScene>());
    // game.getSceneManager().addScene("rectangle_camera", std::make_shared<RectangleCameraScene>());
    // game.getSceneManager().addScene("cube", std::make_shared<CubeScene>());
    // game.getSceneManager().addScene("cube_texture", std::make_shared<CubeTextureScene>());
    // game.getSceneManager().addScene("mesh", std::make_shared<MeshScene>());
    // game.getSceneManager().addScene("simple", std::make_shared<SimpleScene>());
    //
    // game.getSceneManager().setActiveScene("simple");
    //
    // game.run(); // run the game loop

    std::cout << "WARNING: THIS IS BROKEN FOR NOW, USE CbitGameEngine INSTEAD OF CbitApplication" << std::endl;

    return 0;
}

/**
 * NOTE: int argv, char** args this line is actually important and I don't know why?
 * Answer get from: https://stackoverflow.com/questions/10803918/undefined-reference-to-sdl-main
 * Explanation:@JochemKuijpers this particular signature is required, because SDL alters default program entry point resolving.
 * In normal circumstances, you can use one of many standard signatures for the main function, int main(),
 * void main(), int main (int, char**), etc. The compiler will accept all these variants.
 * But SDL intercepts the main entry point, as described in my answer,
 * and calls your entry point expecting a specific signature, which is no longer subject to compiler interpretation.
 * – Marcin Kaczmarek Feb 19 '18 at 11:19
 */
