#pragma once

#include <visu/Forward.h>

#if !defined MUD_MODULES || defined MUD_TYPE_LIB
#include <type/Type.h>
#include <type/Vector.h>
#endif

#ifndef MUD_MODULES
#include <type/Types.h>
#include <gfx/Types.h>
#include <util/Types.h>
#include <core/Types.h>
#endif

#ifndef MUD_CPP_20
#include <stl/string.h>
#include <cstdint>
#include <stl/vector.h>
#endif


namespace mud
{
    // Exported types
    
    export_ template <> TOY_VISU_EXPORT Type& type<toy::PhysicDebugDraw>();
    export_ template <> TOY_VISU_EXPORT Type& type<toy::VisuScene>();
    
    export_ template struct TOY_VISU_EXPORT Typed<vector<toy::PhysicDebugDraw*>>;
    export_ template struct TOY_VISU_EXPORT Typed<vector<toy::VisuScene*>>;
}
