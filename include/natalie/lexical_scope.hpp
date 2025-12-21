#pragma once

namespace Natalie {
class ModuleObject;

class LexicalScope {
public:
    LexicalScope(LexicalScope* parent, ModuleObject* module)
        : m_parent(parent)
        , m_module(module) {
        assert(module);
    }

private:
    LexicalScope *m_parent;
    ModuleObject *m_module;
};
}
