//
//  Textes.metal
//  Episan
//
//  Created by Rémy on 10/12/2025.
//

#include <metal_stdlib>
using namespace metal;

#include "RMDLMainRenderer_shared.h"

struct VSOut
{
    float4 position [[position]];
    float2 uv;
};

vertex VSOut textVS(uint id [[vertex_id]],
                     const device TextVertex* v [[buffer(0)]])
{
    VSOut o;
    o.position = float4(v[id].pos, 0.0, 1.0);
    o.uv = v[id].uv;
    return o;
}

fragment float4 textFS(VSOut in [[stage_in]],
                       texture2d<float> fontTex [[texture(0)]])
{
    constexpr sampler s(filter::linear, address::clamp_to_edge);
    float4 c = fontTex.sample(s, in.uv);
    return c;
}
