// Reconstructed from gml_Object_parGnarcier_Step_0 @ 0x14036f4d0 (NativeAnalysis/decompiled/rmmal1_sun_annotated)
// Only the dying state has code: while anim != 0 the fragment is static (DRAW_GNARCIER jitters it).
if anim == 0 {
    anim1 -= 1;
    if anim1 > 0 {
        oCamera.follow = -60;
        oCamera.x = x;
        oCamera.y = y;
        oCamera.xx = x;
        oCamera.yy = y;
    } else {
        var _ang = random(360);
        create_flashline(x, y, _ang, -100, $4400ff, 1, 1);
        create_flashline(x, y, _ang+120, -100, $4400ff, 1, 1);
        create_flashline(x, y, _ang+240, -100, $4400ff, 1, 1);
        cam_shake += 1;
        play_sound_pos(choose(sndGnar_explode_02, sndGnar_explode_03, sndGnar_explode_04, sndGnar_explode_05, sndGnar_explode_06, sndGnar_explode_07), 10, 0,
            mean(random_range(0.9, 1.1), 0), 0.9, 1, x, y);
        play_sound_pos(choose(sndGnarcier_IMPACT_01, sndGnarcier_IMPACT_02, sndGnarcier_IMPACT_03, sndGnarcier_IMPACT_04, sndGnarcier_IMPACT_05, sndGnarcier_IMPACT_06, sndGnarcier_IMPACT_08), 10, 0,
            mean(random_range(0.9, 1.1), 0), 0.666666666666667, 1, x, y);
        repeat(8) {
            create_fx(x+random_range(-8, 8), y+random_range(-8, 8), -40,
                choose($ffff00, $4400ff, $4400ff, $4400ff), sqr(random(1.5)), random(360), 0, 1, 1, 0,
                random_range(0.97, 0.99), sFx_3, 0, 1, random_range(0.97, 0.99),
                random_range(0.2, mean(random(1), 0.5, 0.5)), 0);
            create_fx(x+random_range(-8, 8), y+random_range(-8, 8), -40,
                choose($ffff00, $4400ff, $4400ff, $4400ff), sqr(random(1.5))/2, random(360), 0, 1, 1, 0,
                random_range(0.97, 0.99), sFx_2, 0, 1, random_range(0.97, 0.99),
                random_range(0.2, mean(random(1), 0.5, 0.5)), 0);
            create_fx(x+random_range(-8, 8), y+random_range(-8, 8), -40,
                choose($ffff00, $4400ff, $4400ff, $4400ff), sqr(random(1.5))/4, random(360), 0, 1, 1, 0,
                random_range(0.97, 0.99), sFx_1, 0, 1, random_range(0.97, 0.99),
                random_range(0.2, mean(random(1), 0.5, 0.5)), 0);
            create_spark(x+random_range(-8, 8), y+random_range(-8, 8), -40, random(360), sqr(random(2)),
                random_range(-90, 90), choose($ffff00, $4400ff, $4400ff, $4400ff), 0, 0.975,
                mean(4, sqr(random(2))));
        }
        var _list = ds_list_create();
        var _n = collision_rectangle_list(bbox_left-2, bbox_top-2, bbox_right+2, bbox_bottom+2, parGnarcier, _list, false, true, true);
        if _n > 0 {
            var _i = 0;
            while _i < _n {
                var _found = ds_list_find_value(_list, _i);
                _found.anim = 0;
                var _fx = _found.x;
                var _fy = _found.y;
                create_poly(_fx, _fy, -40, 7, $ffff00, 0, 16, 8, 0, 0.85, random(360), choose(-2, 2), 1);
                repeat(2) {
                    with(instance_create_depth(x+random_range(-4, 4), y+random_range(-4, 4), -32, oBolt_Colour)) {
                        colour = $ffff00;
                        colour2 = $ffff00;
                        colour3 = $ffff00;
                        xd = _fx + random_range(-4, 4);
                        yd = _fy + random_range(-4, 4);
                        adr = 0.9;
                    }
                }
                _i++;
            }
        }
        ds_list_destroy(_list);
        sleep(irandom_range(15, 21));
        instance_destroy();
    }
}
