#pragma once

namespace Natalie {
class ModuleObject;

class LexicalScope {
public:
    LexicalScope(LexicalScope* parent, ModuleObject* module)
        : m_parent(parent)
        , m_module(module) {}

private:
    LexicalScope *m_parent { nullptr };
    ModuleObject *m_module { nullptr };
};
}
