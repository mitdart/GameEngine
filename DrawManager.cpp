//
// Created by adm1n on 4/24/19.
//

#include "DrawManager.h"

namespace engine {

    void DrawManager::Render() {
        render_window->clear();
        for (auto renderer : renderers) {
            renderer->setPosition(renderer->GetPosition() - coords);
            render_window->draw(*renderer);
        }
        render_window->display();
    }

}