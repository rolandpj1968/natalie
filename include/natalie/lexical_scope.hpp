#pragma once

namespace Natalie {
class ModuleObject;

class LexicalScope {
public:
    LexicalScope(LexicalScope* parent, ModuleObject* module)
        : m_parent(parent)
        , m_module(module) {}

    ModuleObject *module() {
        return m_module;
    }

    LexicalScope *parent() {
        return m_parent;
    }

private:
    LexicalScope *m_parent;
    ModuleObject *m_module;
};
}
