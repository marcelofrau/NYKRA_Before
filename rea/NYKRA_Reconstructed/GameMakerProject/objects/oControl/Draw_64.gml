// PROVISIONAL diagnostics overlay (plan section 7, P1): what the reconstructed map_load did.
// Only at LOG_LEVEL 2 so a normal F5 run has a clean screen.
if (global.LOG_LEVEL < 2) exit;
draw_set_alpha(1);
draw_set_color(c_white);
draw_text(900, 16, "PROVISIONAL oControl (plan section 7, P1)");
for (var _i = 0; _i < array_length(level_report); _i++) {
    draw_text(900, 40 + _i * 20, level_report[_i]);
}
