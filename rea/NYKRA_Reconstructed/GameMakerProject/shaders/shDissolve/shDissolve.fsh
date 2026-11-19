varying vec2 v_vTexcoord;
varying vec4 v_vColour;
uniform float size;
uniform float amount;
uniform vec3 fadeColor;
uniform float offset;
void main() {
    gl_FragColor = v_vColour * texture2D(gm_BaseTexture, v_vTexcoord);
    gl_FragColor.a *= 1.0 + 0.0 * (size + amount + offset + fadeColor.x);
}
