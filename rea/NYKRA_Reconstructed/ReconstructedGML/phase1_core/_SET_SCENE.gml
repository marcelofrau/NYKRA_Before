/// @description _SET_SCENE()
/// Reconstructed from NYKRA.exe (gml_Script__SET_SCENE @ 0x140047690)
with (oControl) {
    switch (planet) {
        case 0: // MALDIS & PRAEDIM
            MUSIC[2] = instance_exists(oIs_Inside) ? sndAmb_inside : sndAmb_windbirds;
            if (CURRENTROOM == "rmMal_Origin") {
                MUSIC[0] = -1;
            } else {
                MUSIC[0] = instance_exists(oIs_Inside) ? sndM_Amb_1 : sndM_Maldis;
            }
            GRV_SPD = 0.218;
            switch (CURRENTROOM) {
                case "rmPrae_Comp":
                case "rmPrae_elevator":
                case "rmPrae_front":
                case "rmPrae_front2":
                case "rmPrae_Keu_Bedroom":
                case "rmPrae_Main":
                case "rmPrae_Main2":
                case "rmPrae_t1":
                case "rmPrae_t2":
                case "rmPrae_t3":
                case "rmPrae_t4":
                case "rmPrae_t5":
                case "rmPrae_t6":
                case "rmPrae_t7":
                    MUSIC[0] = sndM_Praedim;
                    break;
                case "rmPrae_escapepod":
                case "rmPrae_Keu":
                    MUSIC[0] = -1;
                    break;
            }
            if (!instance_exists(oIs_Inside)) {
                instance_create_one(1, 1, -111, oSun_Mal);
            }
            break;

        case 1: // MEXULTA & EO
            MUSIC[2] = instance_exists(oIs_Inside) ? sndAmb_inside : sndAmb_windbirds;
            switch (CURRENTROOM) {
                case "rmMex_ServerRoom":
                case "rmMex_StrongElevator":
                    MUSIC[0] = sndM_ServerFarms;
                    break;
                case "rmMex_Office":
                case "rmMex_Office2":
                    MUSIC[0] = sndM_Confide;
                    break;
                case "rmMex_Office3":
                case "rmMex_Strong5_2":
                case "rmMex_KS_pod":
                    MUSIC[0] = -1;
                    break;
                case "rmMex_Office4":
                case "rmMex_Office5":
                case "rmMex_VEN":
                    MUSIC[0] = sndM_EO;
                    break;
                case "rmMex_Strong1":
                case "rmMex_Strong2":
                case "rmMex_Strong3":
                case "rmMex_Strong4":
                case "rmMex_Strong4_2":
                case "rmMex_Strong5":
                case "rmMex_Strong5_1":
                case "rmMex_Strong5b":
                case "rmMex_Strong6":
                case "rmMex_StrongM":
                case "rmMex_StrongM_1":
                case "rmMex_StrongM_2":
                    MUSIC[0] = sndM_Stronghold;
                    break;
                case "rmEO_1":
                case "rmEO_2":
                case "rmEO_3":
                case "rmEO_4":
                case "rmEO_5":
                case "rmEO_6":
                case "rmEO_4_1":
                case "rmEO_4_2":
                case "rmEO_5_1":
                case "rmEO_5_2":
                case "rmEO_6_1":
                case "rmEO_6_2":
                case "rmEO_CHAMBER":
                case "rmEO_Train":
                case "rmEO_Break":
                case "rmMex_HeptagateInside":
                    MUSIC[0] = sndOMWARN;
                    break;
                default:
                    MUSIC[0] = instance_exists(oIs_Inside) ? -1 : sndM_Mexulta;
                    break;
            }
            GRV_SPD = 0.18748;
            if (!instance_exists(oIs_Inside)) {
                instance_create_one(1, 1, -111, oSun_Mex);
            }
            break;

        case 2: // ARTHEK
            MUSIC[0] = -1;
            if (CURRENTROOM == "rmArt_ST7_inside") {
                MUSIC[0] = -1;
            } else {
                MUSIC[0] = sndM_Arthek;
            }
            break;

        case 3: // IRNEM
            MUSIC[0] = -1;
            if (CURRENTROOM == "rm") {
                MUSIC[0] = -1;
            } else {
                MUSIC[0] = sndM_Irnem;
            }
            GRV_SPD = 0.229474;
            if (!instance_exists(oIs_Inside)) {
                instance_create_one(1, 1, -111, oSun_Irn);
            }
            break;

        case 4: // SEPTEON
            MUSIC[0] = -1;
            MUSIC[1] = sndAmb_inside;
            MUSIC[2] = -1;
            switch (CURRENTROOM) {
                case "rmSep_3":
                case "rmSep_b":
                case "rmSep_1":
                case "rmSep_2":
                case "rmSep_2_1":
                case "rmSep_2_2":
                    MUSIC[0] = sndM_Septeon;
                    MUSIC[2] = sndM_WindLoop;
                    break;
                default:
                    MUSIC[0] = -1;
                    break;
            }
            if (!instance_exists(oIs_Inside)) {
                instance_create_one(1, 1, -111, oSun_Sep);
            }
            break;

        case 5: // QUORNEM
            MUSIC[2] = instance_exists(oIs_Inside) ? sndAmb_inside : sndAmb_windbirds;
            switch (CURRENTROOM) {
                case "rmMoriiem":
                    MUSIC[0] = -1;
                    break;
                case "rmQuo_2":
                    MUSIC[0] = sndM_EDG;
                    break;
                default:
                    MUSIC[0] = sndM_Quornem;
                    break;
            }
            GRV_SPD = 0.193778;
            if (!instance_exists(oIs_Inside)) {
                instance_create_one(1, 1, -111, oSun_Quo);
            }
            break;

        case 6: // IIEDAKAMA
            MUSIC[2] = sndAmb_windbirds;
            MUSIC[0] = sndM_Iiedakama;
            GRV_SPD = 0.169556;
            instance_create_one(1, 1, -111, oSun_Iie);
            break;
    }
}
