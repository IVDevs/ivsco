void main()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    float fVar8;
    float fVar9;
    int I;
    boolean bVar11;
    int iVar12;
    unknown uVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    unknown uVar17;

    l_U0 = 150.00000000;
    l_U1 = -789894171;
    l_U87 = 0;
    l_U88 = 86.00000000;
    l_U89 = 274.00000000;
    l_U198 = 999999.90000000;
    l_U199 = 0.00000000;
    l_U200 = 0.26000000;
    l_U201 = 0.65000000;
    l_U203 = 0;
    l_U206 = "amb@smoking_idles";
    l_U207 = "stand_smoke";
    l_U208 = "walk_smoke";
    l_U209 = {0.01400000, -0.01900000, 0.01100000};
    l_U212 = {0.00000000, 0.00000000, 0.00000000};
    l_U215 = {0.14700000, -0.02900000, 0.00000000};
    l_U218 = {0.00000000, 0.00000000, 0.00000000};
    l_U221 = {0.00000000, 0.00000000, 1.00000000};
    l_U224 = 0;
    l_U225 = 1;
    l_U226 = 3;
    l_U259 = 1;
    l_U284 = 0;
    l_U285 = 0;
    l_U286 = 0;
    l_U287 = 0;
    l_U288 = 0;
    l_U289 = 0;
    l_U290 = 0;
    l_U291 = 1;
    l_U292 = 0;
    l_U293 = 0;
    l_U294 = 1;
    l_U295 = 0;
    l_U296 = 0;
    l_U297 = 0;
    l_U298 = 0;
    l_U352 = 30.00000000;
    l_U353 = 45.00000000;
    l_U354 = 24.70000000;
    l_U355 = 1.00000000;
    l_U356 = 999999.00000000;
    l_U359 = 10.30000000;
    l_U360 = 7.70000000;
    l_U361 = 0;
    l_U362 = 0;
    l_U366 = 0;
    l_U367 = 0;
    l_U376 = -1;
    l_U377 = -1;
    l_U378 = -1;
    l_U379 = -1;
    l_U380 = -1;
    l_U382 = 255;
    l_U383 = 211;
    l_U384 = 211;
    l_U385 = 99;
    l_U409 = -1;
    g_U11191 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        PRINTSTRING( "Terry gun van - QUIT_OUT_OF_SCRIPT() - 1 \n" );
        sub_612();
    }
    sub_2890();
    l_U325 = {sub_6587( g_U43645 )};
    REQUEST_MODEL( l_U1 );
    REQUEST_ANIMS( "MISSGUN_CAR" );
    REQUEST_MODEL( sub_2339( 3 ) );
    REQUEST_MODEL( -1256082323 );
    l_U410[0] = 443141696;
    l_U410[1] = 1015062504;
    l_U410[2] = 1350491501;
    l_U410[3] = -97968031;
    l_U410[4] = 1941123364;
    l_U410[5] = -1658159368;
    l_U410[6] = 1343754678;
    l_U410[8] = -2139514995;
    l_U410[7] = 61597377;
    l_U410[9] = -2049396802;
    l_U410[10] = -1758615024;
    l_U410[11] = 781982585;
    l_U410[12] = 50360401;
    l_U410[13] = 507691841;
    l_U410[14] = 1411013402;
    l_U410[15] = 138725886;
    l_U410[16] = 1979018644;
    l_U410[17] = 420267182;
    l_U410[18] = 85476598;
    l_U410[19] = -621511506;
    l_U410[20] = 141468302;
    l_U410[21] = 833537224;
    while ((((NOT (HAS_MODEL_LOADED( l_U1 ))) || (NOT (HAS_MODEL_LOADED( sub_2339( 3 ) )))) || (NOT (HAS_MODEL_LOADED( -1256082323 )))) || (NOT (HAVE_ANIMS_LOADED( "MISSGUN_CAR" ))))
    {
        WAIT( 0 );
    }
    if (g_U11193)
    {
        ;
    }
    if (g_U11193)
    {
        l_U457 = g_U11195;
        l_U1182 = g_U11194;
        l_U260 = 1;
        l_U361 = 2;
        SET_MINIGAME_IN_PROGRESS( 1 );
        g_U10542 = 1;
        l_U252 = 1;
        sub_8663();
        l_U362 = 0;
    }
    while (true)
    {
        SUPPRESS_CAR_MODEL( l_U1 );
        sub_9220();
        if (NOT g_U11193)
        {
            if (NOT (l_U361 == 4))
            {
                if (IS_VEH_DRIVEABLE( l_U1182 ))
                {
                    GET_CAR_COORDINATES( l_U1182, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                    if (NOT (sub_9373( uVar2._fU0, uVar2._fU4, uVar2._fU8, 5.00000000 )))
                    {
                        CLEAR_AREA_OF_CHARS( uVar2._fU0, uVar2._fU4, uVar2._fU8, 5.00000000 );
                    }
                }
            }
        }
        if (IS_PLAYER_PLAYING( sub_691() ))
        {
            if ((l_U253) || (IS_KEYBOARD_KEY_JUST_PRESSED( 36 )))
            {
                if (IS_VEH_DRIVEABLE( l_U1182 ))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1182, 0.00000000, 5.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                    GET_CAR_HEADING( l_U1182, ref fVar8 );
                    fVar8 += 180.00000000;
                    SET_CHAR_COORDINATES( sub_740(), uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                    SET_CHAR_HEADING( sub_740(), fVar8 );
                    LOAD_SCENE( uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                    l_U253 = 0;
                }
            }
            switch (l_U361)
            {
                case 0:
                CREATE_CAR( l_U1, l_U325._fU0._fU0, l_U325._fU0._fU4, l_U325._fU0._fU8, ref l_U1182, 1 );
                TURN_OFF_VEHICLE_EXTRA( l_U1182, 1, 1 );
                TURN_OFF_VEHICLE_EXTRA( l_U1182, 2, 1 );
                TURN_OFF_VEHICLE_EXTRA( l_U1182, 3, 1 );
                TURN_OFF_VEHICLE_EXTRA( l_U1182, 4, 1 );
                TURN_OFF_VEHICLE_EXTRA( l_U1182, 5, 0 );
                TURN_OFF_VEHICLE_EXTRA( l_U1182, 6, 1 );
                TURN_OFF_VEHICLE_EXTRA( l_U1182, 7, 1 );
                TURN_OFF_VEHICLE_EXTRA( l_U1182, 8, 1 );
                TURN_OFF_VEHICLE_EXTRA( l_U1182, 9, 1 );
                CHANGE_CAR_COLOUR( l_U1182, 0, 0 );
                SET_EXTRA_CAR_COLOURS( l_U1182, 0, 0 );
                SET_CAR_HEADING( l_U1182, l_U325._fU12 );
                SET_CAR_COORDINATES( l_U1182, l_U325._fU0._fU0, l_U325._fU0._fU4, l_U325._fU0._fU8 );
                LOCK_CAR_DOORS( l_U1182, 3 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1182, -1.31800000, -0.50000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1182, -15.00000000, -15.00000000, -15.00000000, ref l_U1173._fU0, ref l_U1173._fU4, ref l_U1173._fU8 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1182, 15.00000000, 15.00000000, 15.00000000, ref l_U1176._fU0, ref l_U1176._fU4, ref l_U1176._fU8 );
                if (l_U1173._fU0 > l_U1176._fU0)
                {
                    fVar9 = l_U1176._fU0;
                    l_U1176._fU0 = l_U1173._fU0;
                    l_U1173._fU0 = fVar9;
                }
                if (l_U1173._fU4 > l_U1176._fU4)
                {
                    fVar9 = l_U1176._fU4;
                    l_U1176._fU4 = l_U1173._fU4;
                    l_U1173._fU4 = fVar9;
                }
                if (l_U1173._fU8 > l_U1176._fU8)
                {
                    fVar9 = l_U1176._fU8;
                    l_U1176._fU8 = l_U1173._fU8;
                    l_U1173._fU8 = fVar9;
                }
                SWITCH_PED_PATHS_OFF( l_U1173._fU0, l_U1173._fU4, l_U1173._fU8, l_U1176._fU0, l_U1176._fU4, l_U1176._fU8 );
                sub_10401( 3, ref l_U457, uVar2._fU0, uVar2._fU4, uVar2._fU8, l_U325._fU12 + 25.00000000 );
                SET_CHAR_HEADING( l_U457, l_U325._fU12 + 25.00000000 );
                SET_PED_DIES_WHEN_INJURED( l_U457, 1 );
                ADD_BLIP_FOR_COORD( l_U325._fU0._fU0, l_U325._fU0._fU4, l_U325._fU0._fU8, ref l_U251 );
                CHANGE_BLIP_SPRITE( l_U251, 105 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U457, 1 );
                l_U254 = 1;
                SETTIMERA( 0 );
                sub_11597( 1 );
                break;
                case 1:
                if (NOT g_U11207)
                {
                    if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                    {
                        if (NOT sub_11676())
                        {
                            PRINT_HELP( "GC_EXP" );
                            g_U11207 = 1;
                        }
                    }
                }
                if (NOT l_U260)
                {
                    l_U347 = 0.00000000;
                    l_U256 = 0;
                    l_U366 = sub_6073();
                    l_U367 = 0;
                    l_U260 = 1;
                }
                if (l_U254)
                {
                    if (IS_VEH_DRIVEABLE( l_U1182 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U457 )))
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1182, -1.31800000, -0.50000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            GET_CAR_HEADING( l_U1182, ref fVar8 );
                            fVar8 += 25.00000000;
                            SET_CHAR_COORDINATES( l_U457, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                            SET_CHAR_HEADING( l_U457, fVar8 );
                        }
                    }
                    l_U254 = 0;
                }
                if (IS_VEH_DRIVEABLE( l_U1182 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U457 )))
                    {
                        if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U1182, sub_740() ))
                        {
                            CLEAR_CHAR_TASKS( l_U457 );
                            OPEN_SEQUENCE_TASK( ref l_U458 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_740() );
                            CLOSE_SEQUENCE_TASK( l_U458 );
                            TASK_PERFORM_SEQUENCE( l_U457, l_U458 );
                            CLEAR_SEQUENCE_TASK( l_U458 );
                            CLEAR_CAR_LAST_DAMAGE_ENTITY( l_U1182 );
                            if (l_U385 == 99)
                            {
                                l_U385 = 4;
                            }
                        }
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U457, sub_740(), 0 ))
                        {
                            CLEAR_CHAR_TASKS( l_U457 );
                            OPEN_SEQUENCE_TASK( ref l_U458 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_740() );
                            CLOSE_SEQUENCE_TASK( l_U458 );
                            TASK_PERFORM_SEQUENCE( l_U457, l_U458 );
                            CLEAR_SEQUENCE_TASK( l_U458 );
                            CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U457 );
                            if (l_U385 == 99)
                            {
                                l_U385 = 5;
                            }
                        }
                        if (LOCATE_CHAR_ON_FOOT_CHAR_3D( l_U457, sub_740(), 6.00000000, 6.00000000, 3.00000000, 0 ))
                        {
                            if ((l_U356 > 30000.00000000) AND (l_U385 == 99))
                            {
                                CLEAR_CHAR_TASKS( l_U457 );
                                TASK_LOOK_AT_CHAR( l_U457, sub_740(), -2, 0 );
                                OPEN_SEQUENCE_TASK( ref l_U458 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_740() );
                                CLOSE_SEQUENCE_TASK( l_U458 );
                                TASK_PERFORM_SEQUENCE( l_U457, l_U458 );
                                CLEAR_SEQUENCE_TASK( l_U458 );
                                l_U385 = 0;
                                l_U356 = 0.00000000;
                            }
                        }
                        if (NOT (IS_CHAR_FACING_CHAR( l_U457, sub_740(), 45.00000000 )))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U457, 29, ref l_U459 );
                            if (l_U459 == 7)
                            {
                                CLEAR_CHAR_TASKS( l_U457 );
                                TASK_LOOK_AT_CHAR( l_U457, sub_740(), -2, 0 );
                                OPEN_SEQUENCE_TASK( ref l_U458 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_740() );
                                CLOSE_SEQUENCE_TASK( l_U458 );
                                TASK_PERFORM_SEQUENCE( l_U457, l_U458 );
                                CLEAR_SEQUENCE_TASK( l_U458 );
                            }
                        }
                    }
                }
                if (sub_12687())
                {
                    iVar12 = 0;
                    if (((IS_VEH_DRIVEABLE( l_U1182 )) AND (NOT (IS_CHAR_INJURED( l_U457 )))) AND (sub_12905()))
                    {
                        GET_CAR_COORDINATES( l_U1182, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        if (LOCATE_CHAR_ON_FOOT_3D( sub_740(), uVar2._fU0, uVar2._fU4, uVar2._fU8, 6.00000000, 6.00000000, 2.00000000, 0 ))
                        {
                            iVar12 = 1;
                        }
                    }
                    if ((iVar12) AND (sub_13065( 3, 0 )))
                    {
                        if (sub_13288( 3, "E1GV_H01", 0 ))
                        {
                            fVar9 = 0.00000000;
                            sub_13919();
                            if (NOT (IS_CHAR_INJURED( l_U457 )))
                            {
                                TASK_CLEAR_LOOK_AT( l_U457 );
                                UNLOCK_RAGDOLL( l_U457, 0 );
                            }
                            sub_11597( 2 );
                            l_U252 = 1;
                            g_U10542 = 1;
                            SET_MINIGAME_IN_PROGRESS( 1 );
                            break;
                        }
                    }
                    else
                    {
                        sub_1237( 3, "E1GV_H01" );
                    }
                }
                else
                {
                    l_U385 = 6;
                    sub_11597( 4 );
                }
                if (l_U361 == 1)
                {
                    if (IS_PLAYER_PLAYING( sub_691() ))
                    {
                        if (LOCATE_CHAR_ON_FOOT_3D( sub_740(), l_U325._fU0._fU0, l_U325._fU0._fU4, l_U325._fU0._fU8, 15.00000000, 15.00000000, 5.00000000, 0 ))
                        {
                            if (IS_WANTED_LEVEL_GREATER( sub_691(), 0 ))
                            {
                                l_U385 = 6;
                                sub_11597( 4 );
                            }
                        }
                    }
                }
                if (l_U361 == 1)
                {
                    if (IS_PLAYER_PLAYING( sub_691() ))
                    {
                        if (TIMERA() > 300000)
                        {
                            if (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_740(), l_U325._fU0._fU0, l_U325._fU0._fU4, 100.00000000, 100.00000000, 0 )))
                            {
                                PRINT( "E1GV_GONE", 7500, 1 );
                                sub_11597( 4 );
                            }
                        }
                    }
                }
                break;
                case 7: break;
                case 2:
                sub_14506();
                if (NOT l_U260)
                {
                    CLEAR_HELP();
                    SET_PLAYER_CONTROL( sub_691(), 0 );
                    SET_WIDESCREEN_BORDERS( 1 );
                    if (IS_VEH_DRIVEABLE( l_U1182 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U457 )))
                        {
                            if (IS_CHAR_DUCKING( l_U457 ))
                            {
                                SET_CHAR_DUCKING( l_U457, 0 );
                            }
                            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, l_U457, 0, 0, 6000 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U457, 1 );
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1182, -0.30000000, -3.20000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar2._fU8 );
                            GET_CAR_HEADING( l_U1182, ref fVar8 );
                            CLEAR_CHAR_TASKS( l_U457 );
                            OPEN_SEQUENCE_TASK( ref l_U458 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar2._fU0, uVar2._fU4, uVar2._fU8, 2, -1, 0.50000000 );
                            TASK_ACHIEVE_HEADING( 0, fVar8 );
                            CLOSE_SEQUENCE_TASK( l_U458 );
                            TASK_PERFORM_SEQUENCE( l_U457, l_U458 );
                            CLEAR_SEQUENCE_TASK( l_U458 );
                            l_U385 = 1;
                        }
                        if (IS_CHAR_DUCKING( sub_740() ))
                        {
                            SET_CHAR_DUCKING( sub_740(), 0 );
                        }
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1182, l_U1161._fU0, l_U1161._fU4, l_U1161._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar2._fU8 );
                        GET_CAR_HEADING( l_U1182, ref fVar8 );
                        fVar8 += l_U346;
                        OPEN_SEQUENCE_TASK( ref l_U458 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar2._fU0, uVar2._fU4, uVar2._fU8, 2, -1, 0.50000000 );
                        CLOSE_SEQUENCE_TASK( l_U458 );
                        TASK_PERFORM_SEQUENCE( sub_740(), l_U458 );
                        CLEAR_SEQUENCE_TASK( l_U458 );
                    }
                    sub_16694();
                    sub_8663();
                    SETTIMERA( 0 );
                    l_U260 = 1;
                }
                switch (l_U362)
                {
                    case 0:
                    bVar11 = false;
                    if (IS_VEH_DRIVEABLE( l_U1182 ))
                    {
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1182, l_U1158._fU0 - 0.30000000, l_U1158._fU4, l_U1158._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        if (IS_PLAYER_PLAYING( sub_691() ))
                        {
                            if (LOCATE_CHAR_ON_FOOT_3D( sub_740(), uVar2._fU0, uVar2._fU4, uVar2._fU8, 3.00000000, 3.00000000, 3.00000000, 0 ))
                            {
                                bVar11 = true;
                            }
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U457 )))
                    {
                        if (IS_CHAR_PLAYING_ANIM( l_U457, "MISSGUN_CAR", "open_trunk" ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( l_U457, "MISSGUN_CAR", "open_trunk", ref fVar9 );
                            if (fVar9 >= l_U339)
                            {
                                bVar11 = true;
                            }
                        }
                    }
                    if (NOT (l_U385 == 99))
                    {
                        bVar11 = false;
                    }
                    if (g_U11193)
                    {
                        bVar11 = true;
                    }
                    if (TIMERA() > 7000)
                    {
                        bVar11 = true;
                    }
                    if (bVar11)
                    {
                        if (g_U11193)
                        {
                            while (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( "GUNCARL", 3 )))
                            {
                                REQUEST_ADDITIONAL_TEXT( "GUNCARL", 3 );
                                WAIT( 0 );
                            }
                        }
                        else
                        {
                            while (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( "GUNCAR", 3 )))
                            {
                                REQUEST_ADDITIONAL_TEXT( "GUNCAR", 3 );
                                WAIT( 0 );
                            }
                        }
                        if (IS_VEH_DRIVEABLE( l_U1182 ))
                        {
                            if (g_U11193)
                            {
                                GET_CAR_COORDINATES( l_U1182, ref l_U325._fU0._fU0, ref l_U325._fU0._fU4, ref l_U325._fU0._fU8 );
                                GET_CAR_HEADING( l_U1182, ref l_U325._fU12 );
                            }
                            sub_17747();
                            if (NOT g_U11193)
                            {
                                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1182, 0.00000000, 2.50000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                                sub_17875( ref uVar5, ref fVar8 );
                                sub_18773( uVar2, 5.00000000, uVar5, fVar8 );
                                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1182, 0.00000000, -7.50000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                                GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( uVar2._fU0, uVar2._fU4, uVar2._fU8, 5.00000000, 0, 1, ref uVar13 );
                                if (DOES_VEHICLE_EXIST( uVar13 ))
                                {
                                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1182, 0.00000000, 3.00000000, 0.00000000, ref l_U325._fU0._fU0, ref l_U325._fU0._fU4, ref l_U325._fU0._fU8 );
                                    SET_CAR_HEADING( l_U1182, l_U325._fU12 );
                                    SET_CAR_COORDINATES( l_U1182, l_U325._fU0._fU0, l_U325._fU0._fU4, l_U325._fU0._fU8 );
                                }
                            }
                            SET_CAR_HEADING( l_U1182, l_U325._fU12 );
                            SET_CAR_COORDINATES( l_U1182, l_U325._fU0._fU0, l_U325._fU0._fU4, l_U325._fU0._fU8 );
                            FREEZE_CAR_POSITION( l_U1182, 1 );
                            if (NOT (IS_CHAR_INJURED( l_U457 )))
                            {
                                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1182, 0.00000000, -3.40000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                                GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar2._fU8 );
                                GET_CAR_HEADING( l_U1182, ref fVar8 );
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U457 );
                                SET_CHAR_COORDINATES( l_U457, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                                SET_CHAR_HEADING( l_U457, fVar8 );
                                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1182, l_U1164._fU0, l_U1164._fU4, l_U1164._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                                TASK_PLAY_ANIM( l_U457, "open_trunk", "MISSGUN_CAR", 1000.00000000, 0, 0, 0, 1, -1 );
                            }
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1182, l_U1161._fU0, l_U1161._fU4 - 1.00000000, l_U1161._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar2._fU8 );
                            GET_CAR_HEADING( l_U1182, ref fVar8 );
                            SET_CHAR_COORDINATES_DONT_WARP_GANG( sub_740(), uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                            SET_CHAR_HEADING( sub_740(), fVar8 );
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1182, l_U1161._fU0, l_U1161._fU4 - 0.20000000, l_U1161._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            fVar8 += l_U346;
                            OPEN_SEQUENCE_TASK( ref l_U458 );
                            TASK_GO_STRAIGHT_TO_COORD( 0, uVar2._fU0, uVar2._fU4, uVar2._fU8, 2, -1 );
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1182, l_U1164._fU0, l_U1164._fU4, l_U1164._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            TASK_TURN_CHAR_TO_FACE_COORD( 0, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                            CLOSE_SEQUENCE_TASK( l_U458 );
                            TASK_PERFORM_SEQUENCE( sub_740(), l_U458 );
                            CLEAR_SEQUENCE_TASK( l_U458 );
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1182, l_U1164._fU0, l_U1164._fU4, l_U1164._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            SETTIMERA( 0 );
                            if (IS_VEH_DRIVEABLE( l_U1182 ))
                            {
                                FREEZE_CAR_POSITION( l_U1182, 0 );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U457 )))
                            {
                                if (IS_CHAR_PLAYING_ANIM( l_U457, "MISSGUN_CAR", "open_trunk" ))
                                {
                                    SET_CHAR_ANIM_CURRENT_TIME( l_U457, "MISSGUN_CAR", "open_trunk", l_U339 );
                                }
                            }
                            DISPLAY_RADAR( 0 );
                            BEGIN_CAM_COMMANDS( ref l_U365 );
                            l_U256 = 1;
                            CREATE_CAM( 14, ref l_U322 );
                            ATTACH_CAM_TO_VEHICLE( l_U322, l_U1182 );
                            SET_CAM_ATTACH_OFFSET( l_U322, l_U1164._fU0, l_U1164._fU4, l_U1164._fU8 );
                            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U322, 1 );
                            POINT_CAM_AT_VEHICLE( l_U322, l_U1182 );
                            SET_CAM_POINT_OFFSET( l_U322, l_U1167._fU0, l_U1167._fU4, l_U1167._fU8 );
                            SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U322, 1 );
                            SET_CAM_FOV( l_U322, l_U354 );
                            SET_CAM_ACTIVE( l_U322, 1 );
                            SET_CAM_PROPAGATE( l_U322, 1 );
                            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                            l_U385 = 3;
                            l_U362 = 2;
                        }
                    }
                    break;
                    case 2:
                    if (TIMERA() < 2000)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U457 )))
                        {
                            BLOCK_CHAR_GESTURE_ANIMS( l_U457, 1 );
                            if (IS_CHAR_PLAYING_ANIM( l_U457, "MISSGUN_CAR", "open_trunk" ))
                            {
                                GET_CHAR_ANIM_CURRENT_TIME( l_U457, "MISSGUN_CAR", "open_trunk", ref fVar9 );
                                if (fVar9 < l_U339)
                                {
                                    fVar9 = l_U339;
                                }
                                if (fVar9 > l_U340)
                                {
                                    fVar9 = l_U340;
                                }
                                fVar9 -= l_U339;
                                l_U347 = (fVar9 / (l_U340 - l_U339)) * l_U341;
                                if (IS_VEH_DRIVEABLE( l_U1182 ))
                                {
                                    if (NOT l_U288)
                                    {
                                        if (fVar9 >= 0.11000000)
                                        {
                                            POP_CAR_BOOT( l_U1182 );
                                            l_U288 = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    else if (IS_VEH_DRIVEABLE( l_U1182 ))
                    {
                        ;
                    }
                    if (NOT (IS_CHAR_INJURED( l_U457 )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U457 );
                        BLOCK_CHAR_GESTURE_ANIMS( l_U457, 0 );
                    }
                    SETTIMERA( 0 );
                    l_U362 = 3;;
                    break;
                    case 3:
                    if (IS_VEH_DRIVEABLE( l_U1182 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U457 )))
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1182, l_U1158._fU0, l_U1158._fU4, l_U1158._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar2._fU8 );
                            GET_CAR_HEADING( l_U1182, ref fVar8 );
                            fVar8 += l_U345;
                            SET_CHAR_COORDINATES( l_U457, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                            SET_CHAR_HEADING( l_U457, fVar8 );
                        }
                    }
                    if (IS_VEH_DRIVEABLE( l_U1182 ))
                    {
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1182, l_U1161._fU0, l_U1161._fU4, l_U1161._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar2._fU8 );
                        GET_CAR_HEADING( l_U1182, ref fVar8 );
                        fVar8 += l_U346;
                        CLEAR_AREA( uVar2._fU0, uVar2._fU4, uVar2._fU8, 4.00000000, 1 );
                        SET_CHAR_COORDINATES_DONT_WARP_GANG( sub_740(), uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                        SET_CHAR_HEADING( sub_740(), fVar8 );
                    }
                    l_U1164 = {l_U1152};
                    l_U1167 = {l_U1155};
                    l_U354 = l_U353;
                    if (DOES_CAM_EXIST( l_U322 ))
                    {
                        SET_CAM_ATTACH_OFFSET( l_U322, l_U1164._fU0, l_U1164._fU4, l_U1164._fU8 );
                        SET_CAM_POINT_OFFSET( l_U322, l_U1167._fU0, l_U1167._fU4, l_U1167._fU8 );
                        SET_CAM_FOV( l_U322, l_U354 );
                    }
                    SET_CAM_ACTIVE( l_U322, 1 );
                    SET_CAM_PROPAGATE( l_U322, 0 );
                    l_U1164 = {l_U1152};
                    l_U1167 = {l_U1155};
                    l_U354 = l_U352;
                    CREATE_CAM( 14, ref l_U323 );
                    if (IS_VEH_DRIVEABLE( l_U1182 ))
                    {
                        ATTACH_CAM_TO_VEHICLE( l_U323, l_U1182 );
                        SET_CAM_ATTACH_OFFSET( l_U323, l_U1164._fU0, l_U1164._fU4, l_U1164._fU8 );
                        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U323, 1 );
                        POINT_CAM_AT_VEHICLE( l_U323, l_U1182 );
                        SET_CAM_POINT_OFFSET( l_U323, l_U1167._fU0, l_U1167._fU4, l_U1167._fU8 );
                        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U323, 1 );
                        SET_CAM_FOV( l_U323, l_U354 );
                    }
                    SET_CAM_ACTIVE( l_U323, 1 );
                    SET_CAM_PROPAGATE( l_U323, 0 );
                    CREATE_CAM( 3, ref l_U324 );
                    SET_CAM_INTERP_STYLE_DETAILED( l_U324, 1, 1, 1, 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U324, l_U322, l_U323, 2000, 0 );
                    SET_CAM_ACTIVE( l_U324, 1 );
                    SET_CAM_PROPAGATE( l_U324, 1 );
                    if (NOT (IS_CHAR_INJURED( l_U457 )))
                    {
                        CLEAR_CHAR_TASKS( l_U457 );
                    }
                    SETTIMERA( 0 );
                    l_U362 = 4;
                    break;
                    case 4:
                    if (IS_VEH_DRIVEABLE( l_U1182 ))
                    {
                        l_U290 = 1;
                    }
                    if ((NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U324 ))) || (TIMERA() > 2500))
                    {
                        DESTROY_CAM( l_U324 );
                        DESTROY_CAM( l_U323 );
                        l_U1164 = {l_U1152};
                        l_U1167 = {l_U1155};
                        l_U354 = l_U352;
                        if (DOES_CAM_EXIST( l_U322 ))
                        {
                            SET_CAM_ATTACH_OFFSET( l_U322, l_U1164._fU0, l_U1164._fU4, l_U1164._fU8 );
                            SET_CAM_POINT_OFFSET( l_U322, l_U1167._fU0, l_U1167._fU4, l_U1167._fU8 );
                            SET_CAM_FOV( l_U322, l_U354 );
                        }
                        SET_CAM_ACTIVE( l_U322, 1 );
                        SET_CAM_PROPAGATE( l_U322, 1 );
                        l_U362 = 5;
                    }
                    break;
                    case 5:
                    sub_11597( 3 );
                    break;
                }
                break;
                case 3:
                if (NOT l_U260)
                {
                    l_U290 = 1;
                    SET_WIDESCREEN_BORDERS( 0 );
                    SETTIMERA( 0 );
                    l_U260 = 1;
                }
                DISPLAY_CASH( 1 );
                DISPLAY_RADAR( 1 );
                sub_21947();
                if (IS_VEH_DRIVEABLE( l_U1182 ))
                {
                    ;
                }
                if (NOT l_U261[l_U366])
                {
                    l_U366 = sub_6073();
                }
                if (NOT l_U289)
                {
                    if (l_U366 != 18)
                    {
                        if (NOT l_U287)
                        {
                            sub_22338( l_U366 );
                        }
                        else
                        {
                            sub_26108( l_U366 );
                        }
                    }
                    else if ((NOT (HAS_CHAR_GOT_WEAPON( sub_740(), 31 ))) AND (NOT (HAS_CHAR_GOT_WEAPON( sub_740(), 30 ))))
                    {
                        if (NOT l_U287)
                        {
                            sub_22338( l_U366 );
                        }
                        else
                        {
                            sub_26108( l_U366 );
                        }
                    }
                    else if ((HAS_CHAR_GOT_WEAPON( sub_740(), 31 )) AND (NOT (HAS_CHAR_GOT_WEAPON( sub_740(), 30 ))))
                    {
                        if (NOT l_U287)
                        {
                            sub_22338( l_U366 );
                        }
                        else
                        {
                            sub_26108( l_U366 );
                        }
                    }
                    else if (HAS_CHAR_GOT_WEAPON( sub_740(), 30 ))
                    {
                        if (NOT l_U287)
                        {
                            sub_22338( 20 );
                        }
                        else
                        {
                            sub_26108( 20 );
                        }
                    };;;;
                }
                else if (l_U289)
                {
                    if (l_U289)
                    {
                        PRINT_HELP_FOREVER( "E2GV_NoMon" );
                    }
                    if (TIMERA() > 5000)
                    {
                        l_U289 = 0;
                    }
                }
                if (l_U287)
                {
                    if (TIMERB() > 5000)
                    {
                        l_U287 = 0;
                        l_U367 = 0;
                    }
                }
                if (l_U254)
                {
                    if (IS_VEH_DRIVEABLE( l_U1182 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U457 )))
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1182, l_U1158._fU0, l_U1158._fU4, l_U1158._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar2._fU8 );
                            GET_CAR_HEADING( l_U1182, ref fVar8 );
                            fVar8 += l_U345;
                            SET_CHAR_COORDINATES( l_U457, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                            SET_CHAR_HEADING( l_U457, fVar8 );
                        }
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1182, l_U1161._fU0, l_U1161._fU4, l_U1161._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar2._fU8 );
                        GET_CAR_HEADING( l_U1182, ref fVar8 );
                        fVar8 += l_U346;
                        SET_CHAR_COORDINATES_DONT_WARP_GANG( sub_740(), uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                        SET_CHAR_HEADING( sub_740(), fVar8 );
                    }
                    l_U254 = 0;
                }
                else if (IS_VEH_DRIVEABLE( l_U1182 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U457 )))
                    {
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1182, l_U1158._fU0, l_U1158._fU4, l_U1158._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar2._fU8 );
                        if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U457, uVar2._fU0, uVar2._fU4, uVar2._fU8, 0.10000000, 0.10000000, 2.00000000, 0 )))
                        {
                            if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar2._fU0, uVar2._fU4, uVar2._fU8, 0.10000000, 0.10000000, 2.00000000 )))
                            {
                                l_U254 = 1;
                            }
                        }
                    }
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1182, l_U1161._fU0, l_U1161._fU4, l_U1161._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                    GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar2._fU8 );
                    if (NOT (LOCATE_CHAR_ON_FOOT_3D( sub_740(), uVar2._fU0, uVar2._fU4, uVar2._fU8, 0.10000000, 0.10000000, 2.00000000, 0 )))
                    {
                        if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar2._fU0, uVar2._fU4, uVar2._fU8, 0.10000000, 0.10000000, 2.00000000 )))
                        {
                            l_U254 = 1;
                        }
                    }
                }
                if (IS_VEH_DRIVEABLE( l_U1182 ))
                {
                    if (IS_OBJECT_ATTACHED( l_U456 ))
                    {
                        DETACH_OBJECT( l_U456, 1 );
                        ATTACH_OBJECT_TO_CAR( l_U456, l_U1182, l_U363, l_U1137, l_U1140 );
                    }
                    for ( I = 0; I < 22; I++ )
                    {
                        if (I == l_U366)
                        {
                            if (sub_6083( I ))
                            {
                                if (NOT (DOES_OBJECT_EXIST( l_U433[I] )))
                                {
                                    sub_8817( I );
                                }
                                sub_31649( I );
                            }
                            else if (DOES_OBJECT_EXIST( l_U433[I] ))
                            {
                                if (IS_OBJECT_ATTACHED( l_U433[I] ))
                                {
                                    DETACH_OBJECT( l_U433[I], 1 );
                                }
                                DELETE_OBJECT( ref l_U433[I] );
                            }
                        }
                        else if (sub_6083( I ))
                        {
                            if (NOT (DOES_OBJECT_EXIST( l_U433[I] )))
                            {
                                sub_8817( I );
                            }
                            sub_32654( I );
                        }
                        else if (DOES_OBJECT_EXIST( l_U433[I] ))
                        {
                            if (IS_OBJECT_ATTACHED( l_U433[I] ))
                            {
                                DETACH_OBJECT( l_U433[I], 1 );
                            }
                            DELETE_OBJECT( ref l_U433[I] );
                        };;;
                    }
                }
                if ((((NOT (sub_33365( 1 ))) AND (NOT (sub_33447( 1 )))) AND (NOT (sub_33530( 1 )))) AND (NOT (sub_33613( 1 ))))
                {
                    l_U357 = 0.00000000;
                }
                if (NOT (DOES_CAM_EXIST( l_U324 )))
                {
                    if (DOES_CAM_EXIST( l_U322 ))
                    {
                        SET_CAM_ATTACH_OFFSET( l_U322, l_U1152._fU0, l_U1152._fU4, l_U1152._fU8 );
                        SET_CAM_POINT_OFFSET( l_U322, l_U1155._fU0, l_U1155._fU4, l_U1155._fU8 );
                        SET_CAM_FOV( l_U322, l_U352 );
                    }
                }
                if ((NOT l_U252) || (l_U357 > 1000.00000000))
                {
                    if ((sub_33365( 1 )) AND (l_U358 > 400.00000000))
                    {
                        sub_33875( 3 );
                        l_U252 = 1;
                        if (l_U357 > 1000.00000000)
                        {
                            l_U358 = 0.00000000;
                        }
                    }
                }
                if ((NOT l_U252) || (l_U357 > 1000.00000000))
                {
                    if ((sub_33447( 1 )) AND (l_U358 > 400.00000000))
                    {
                        sub_33875( 2 );
                        l_U252 = 1;
                        if (l_U357 > 1000.00000000)
                        {
                            l_U358 = 0.00000000;
                        }
                    }
                }
                if ((NOT l_U252) || (l_U357 > 1000.00000000))
                {
                    if ((sub_33530( 1 )) AND (l_U358 > 400.00000000))
                    {
                        sub_33875( 0 );
                        l_U252 = 1;
                        if (l_U357 > 1000.00000000)
                        {
                            l_U358 = 0.00000000;
                        }
                    }
                }
                if ((NOT l_U252) || (l_U357 > 1000.00000000))
                {
                    if ((sub_33613( 1 )) AND (l_U358 > 400.00000000))
                    {
                        sub_33875( 1 );
                        l_U252 = 1;
                        if (l_U357 > 1000.00000000)
                        {
                            l_U358 = 0.00000000;
                        }
                    }
                }
                if (NOT (l_U366 == 18))
                {
                    if (NOT l_U252)
                    {
                        if (IS_CONTROL_PRESSED( 2, 77 ))
                        {
                            sub_1674( l_U366, ref l_U1183 );
                            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
                            {
                                I = (sub_37704( l_U366 )) - 1;
                            }
                            else
                            {
                                I = (sub_38137( l_U366 )) - 1;
                            }
                            if ((IS_SCORE_GREATER( sub_691(), I )) || (g_U11193))
                            {
                                if (sub_38644( l_U366 ))
                                {
                                    if ((sub_6083( l_U366 )) || ((sub_26208( l_U1183 )) > 0))
                                    {
                                        if (NOT (sub_38809( l_U1183 )))
                                        {
                                            if (NOT (sub_39416( l_U1183 )))
                                            {
                                                if (l_U367 < 0)
                                                {
                                                    l_U367 = 0;
                                                }
                                                switch (l_U366)
                                                {
                                                    case 10:
                                                    if (IS_PLAYER_PLAYING( sub_691() ))
                                                    {
                                                        GET_PLAYER_MAX_ARMOUR( sub_691(), ref iVar14 );
                                                        GET_CHAR_ARMOUR( sub_740(), ref iVar15 );
                                                        iVar16 = iVar14 - iVar15;
                                                        ADD_ARMOUR_TO_CHAR( sub_740(), iVar16 );
                                                        if (NOT g_U11193)
                                                        {
                                                            ADD_SCORE( sub_691(), (sub_37704( l_U366 )) * -1 );
                                                            INCREMENT_INT_STAT_NO_MESSAGE( 106, sub_37704( l_U366 ) );
                                                        }
                                                    }
                                                    break;
                                                    case 21:
                                                    if (IS_PLAYER_PLAYING( sub_691() ))
                                                    {
                                                        if (NOT g_U11193)
                                                        {
                                                            GIVE_WEAPON_TO_CHAR( sub_740(), l_U1183, sub_26208( l_U1183 ), 0 );
                                                            ADD_SCORE( sub_691(), (sub_37704( l_U366 )) * -1 );
                                                            INCREMENT_INT_STAT_NO_MESSAGE( 106, sub_37704( l_U366 ) );
                                                        }
                                                    }
                                                    break;
                                                    default:
                                                    l_U286 = 0;
                                                    if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
                                                    {
                                                        if (NOT g_U11193)
                                                        {
                                                            ADD_SCORE( sub_691(), (sub_37704( l_U366 )) * -1 );
                                                            INCREMENT_INT_STAT_NO_MESSAGE( 106, sub_37704( l_U366 ) );
                                                        }
                                                        l_U286 = 1;
                                                    }
                                                    else if (NOT g_U11193)
                                                    {
                                                        ADD_SCORE( sub_691(), (sub_38137( l_U366 )) * -1 );
                                                        INCREMENT_INT_STAT_NO_MESSAGE( 106, sub_38137( l_U366 ) );
                                                    }
                                                    GIVE_WEAPON_TO_CHAR( sub_740(), l_U1183, sub_26208( l_U1183 ), 0 );
                                                    SET_CURRENT_CHAR_WEAPON( sub_740(), l_U1183, 1 );
                                                    sub_39974( l_U1183 );
                                                    DISPLAY_AMMO( 1 );
                                                    break;
                                                }
                                                if (((NOT (l_U1183 == 3)) AND (NOT (l_U1183 == 48))) AND (NOT (l_U1183 == 41)))
                                                {
                                                    if (NOT l_U292)
                                                    {
                                                        l_U292 = 1;
                                                    }
                                                }
                                                sub_40094( l_U1183 );
                                                if (l_U284)
                                                {
                                                    l_U261[l_U366] = 0;
                                                }
                                                if (NOT l_U286)
                                                {
                                                    l_U385 = 7;
                                                }
                                                l_U287 = 1;
                                                l_U367++;
                                            }
                                            else
                                            {
                                                l_U287 = 1;
                                                l_U367 = 9999;
                                            }
                                        }
                                        else
                                        {
                                            l_U287 = 1;
                                            l_U367 = 2;
                                            PRINTNL();
                                            PRINTSTRING( "************* already got one!" );
                                            PRINTINT( l_U367 );
                                            PRINTNL();
                                        }
                                    }
                                    else
                                    {
                                        l_U367 = 0;
                                    }
                                }
                                else
                                {
                                    PRINTNL();
                                    PRINTSTRING( "************* going to replace interface!" );
                                    PRINTNL();
                                    sub_11597( 6 );
                                    l_U252 = 1;
                                    break;
                                }
                            }
                            else if ((sub_6083( l_U366 )) || ((sub_26208( l_U1183 )) > 0))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U457 )))
                                {
                                    GET_SCRIPT_TASK_STATUS( l_U457, 80, ref l_U459 );
                                    if (l_U459 == 7)
                                    {
                                        switch (l_U364)
                                        {
                                            case 0:
                                            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U457, "no_way_a", "MISSGUN_CAR", 8.00000000, 0, 0, 0, 0, -1 );
                                            break;
                                            case 1:
                                            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U457, "no_way_b", "MISSGUN_CAR", 8.00000000, 0, 0, 0, 0, -1 );
                                            break;
                                            case 2:
                                            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U457, "no_way_c", "MISSGUN_CAR", 8.00000000, 0, 0, 0, 0, -1 );
                                            break;
                                        }
                                        l_U364++;
                                        if (l_U364 > 2)
                                        {
                                            l_U364 = 0;
                                        }
                                    }
                                }
                                l_U385 = 8;
                                PLAY_AUDIO_EVENT( "FRONTEND_MENU_ERROR" );
                                l_U289 = 1;
                                l_U367 = 0;
                            }
                            else
                            {
                                l_U367 = 0;
                            }
                            l_U252 = 1;
                            SETTIMERA( 0 );
                            SETTIMERB( 0 );
                        }
                    }
                }
                else if (NOT l_U252)
                {
                    if (IS_CONTROL_PRESSED( 2, 77 ))
                    {
                        if ((HAS_CHAR_GOT_WEAPON( sub_740(), 31 )) || ((NOT (HAS_CHAR_GOT_WEAPON( sub_740(), 31 ))) AND (NOT (HAS_CHAR_GOT_WEAPON( sub_740(), 30 )))))
                        {
                            l_U1183 = 31;
                            I = (sub_37704( l_U366 )) - 1;
                            if (IS_SCORE_GREATER( sub_691(), I ))
                            {
                                if (sub_38644( l_U366 ))
                                {
                                    if ((sub_6083( l_U366 )) || ((sub_26208( l_U1183 )) > 0))
                                    {
                                        if (NOT (sub_38809( l_U1183 )))
                                        {
                                            if (NOT (sub_39416( l_U1183 )))
                                            {
                                                if (l_U367 < 0)
                                                {
                                                    l_U367 = 0;
                                                }
                                                l_U286 = 0;
                                                if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
                                                {
                                                    if (NOT g_U11193)
                                                    {
                                                        ADD_SCORE( sub_691(), (sub_37704( l_U366 )) * -1 );
                                                        INCREMENT_INT_STAT_NO_MESSAGE( 106, sub_37704( l_U366 ) );
                                                    }
                                                    l_U286 = 1;
                                                }
                                                else if (NOT g_U11193)
                                                {
                                                    ADD_SCORE( sub_691(), (sub_38137( l_U366 )) * -1 );
                                                    INCREMENT_INT_STAT_NO_MESSAGE( 106, sub_38137( l_U366 ) );
                                                }
                                                GIVE_WEAPON_TO_CHAR( sub_740(), l_U1183, sub_26208( l_U1183 ), 0 );
                                                SET_CURRENT_CHAR_WEAPON( sub_740(), l_U1183, 1 );
                                                sub_39974( l_U1183 );
                                                DISPLAY_AMMO( 1 );
                                                sub_40094( l_U1183 );
                                                if (NOT l_U292)
                                                {
                                                    l_U292 = 1;
                                                }
                                                if (NOT l_U286)
                                                {
                                                    l_U385 = 7;
                                                }
                                                l_U287 = 1;
                                                l_U367++;
                                            }
                                            else
                                            {
                                                l_U287 = 1;
                                                l_U367 = 9999;
                                            }
                                        }
                                        else
                                        {
                                            l_U287 = 1;
                                            l_U367 = 2;
                                        }
                                    }
                                    else
                                    {
                                        l_U367 = 0;
                                    }
                                }
                                else
                                {
                                    sub_11597( 6 );
                                    l_U252 = 1;
                                }
                            }
                            else if ((sub_6083( l_U366 )) || ((sub_26208( l_U1183 )) > 0))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U457 )))
                                {
                                    GET_SCRIPT_TASK_STATUS( l_U457, 80, ref l_U459 );
                                    if (l_U459 == 7)
                                    {
                                        switch (l_U364)
                                        {
                                            case 0:
                                            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U457, "no_way_a", "MISSGUN_CAR", 8.00000000, 0, 0, 0, 0, -1 );
                                            break;
                                            case 1:
                                            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U457, "no_way_b", "MISSGUN_CAR", 8.00000000, 0, 0, 0, 0, -1 );
                                            break;
                                            case 2:
                                            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U457, "no_way_c", "MISSGUN_CAR", 8.00000000, 0, 0, 0, 0, -1 );
                                            break;
                                        }
                                        l_U364++;
                                        if (l_U364 > 2)
                                        {
                                            l_U364 = 0;
                                        }
                                    }
                                }
                                l_U385 = 8;
                                PLAY_AUDIO_EVENT( "FRONTEND_MENU_ERROR" );
                                l_U289 = 1;
                                l_U367 = 0;
                            }
                            else
                            {
                                l_U367 = 0;
                            }
                            l_U252 = 1;
                            SETTIMERA( 0 );
                            SETTIMERB( 0 );
                        }
                        else if (HAS_CHAR_GOT_WEAPON( sub_740(), 30 ))
                        {
                            l_U1183 = 31;
                            I = (sub_37704( l_U366 )) - 1;
                            if (IS_SCORE_GREATER( sub_691(), I ))
                            {
                                if (sub_38644( l_U366 ))
                                {
                                    if ((sub_6083( l_U366 )) || ((sub_26208( l_U1183 )) > 0))
                                    {
                                        if (NOT (sub_38809( l_U1183 )))
                                        {
                                            if (NOT (sub_39416( l_U1183 )))
                                            {
                                                if (l_U367 < 0)
                                                {
                                                    l_U367 = 0;
                                                }
                                                l_U286 = 0;
                                                if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
                                                {
                                                    if (NOT g_U11193)
                                                    {
                                                        ADD_SCORE( sub_691(), (sub_37704( l_U366 )) * -1 );
                                                        INCREMENT_INT_STAT_NO_MESSAGE( 106, sub_37704( l_U366 ) );
                                                    }
                                                    l_U286 = 1;
                                                }
                                                else if (NOT g_U11193)
                                                {
                                                    ADD_SCORE( sub_691(), (sub_38137( l_U366 )) * -1 );
                                                    INCREMENT_INT_STAT_NO_MESSAGE( 106, sub_38137( l_U366 ) );
                                                }
                                                GIVE_WEAPON_TO_CHAR( sub_740(), l_U1183, sub_26208( l_U1183 ), 0 );
                                                SET_CURRENT_CHAR_WEAPON( sub_740(), l_U1183, 1 );
                                                sub_39974( l_U1183 );
                                                DISPLAY_AMMO( 1 );
                                                if (NOT l_U292)
                                                {
                                                    l_U292 = 1;
                                                }
                                                if (NOT l_U286)
                                                {
                                                    l_U385 = 7;
                                                }
                                                l_U287 = 1;
                                                l_U367++;
                                            }
                                            else
                                            {
                                                l_U287 = 1;
                                                l_U367 = 9999;
                                            }
                                        }
                                        else
                                        {
                                            l_U287 = 1;
                                            l_U367 = 2;
                                        }
                                    }
                                    else
                                    {
                                        l_U367 = 0;
                                    }
                                }
                                else
                                {
                                    sub_11597( 6 );
                                    l_U252 = 1;
                                }
                            }
                            else if ((sub_6083( l_U366 )) || ((sub_26208( l_U1183 )) > 0))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U457 )))
                                {
                                    GET_SCRIPT_TASK_STATUS( l_U457, 80, ref l_U459 );
                                    if (l_U459 == 7)
                                    {
                                        switch (l_U364)
                                        {
                                            case 0:
                                            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U457, "no_way_a", "MISSGUN_CAR", 8.00000000, 0, 0, 0, 0, -1 );
                                            break;
                                            case 1:
                                            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U457, "no_way_b", "MISSGUN_CAR", 8.00000000, 0, 0, 0, 0, -1 );
                                            break;
                                            case 2:
                                            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U457, "no_way_c", "MISSGUN_CAR", 8.00000000, 0, 0, 0, 0, -1 );
                                            break;
                                        }
                                        l_U364++;
                                        if (l_U364 > 2)
                                        {
                                            l_U364 = 0;
                                        }
                                    }
                                }
                                l_U385 = 8;
                                PLAY_AUDIO_EVENT( "FRONTEND_MENU_ERROR" );
                                l_U289 = 1;
                                l_U367 = 0;
                            }
                            else
                            {
                                l_U367 = 0;
                            }
                            l_U252 = 1;
                            SETTIMERA( 0 );
                            SETTIMERB( 0 );
                        }
                    }
                }
                if (NOT l_U252)
                {
                    if ((IS_CONTROL_PRESSED( 2, 78 )) AND (g_U15811[64]))
                    {
                        if (HAS_CHAR_GOT_WEAPON( sub_740(), 31 ))
                        {
                            l_U1183 = 30;
                            I = (sub_37704( 20 )) - 1;
                            if (IS_SCORE_GREATER( sub_691(), I ))
                            {
                                if (sub_38644( 20 ))
                                {
                                    if ((sub_6083( 20 )) || ((sub_26208( l_U1183 )) > 0))
                                    {
                                        if (NOT (sub_38809( l_U1183 )))
                                        {
                                            if (NOT (sub_39416( l_U1183 )))
                                            {
                                                if (l_U367 < 0)
                                                {
                                                    l_U367 = 0;
                                                }
                                                l_U286 = 0;
                                                if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
                                                {
                                                    if (NOT g_U11193)
                                                    {
                                                        ADD_SCORE( sub_691(), (sub_37704( 20 )) * -1 );
                                                        INCREMENT_INT_STAT_NO_MESSAGE( 106, sub_37704( 20 ) );
                                                    }
                                                    l_U286 = 1;
                                                }
                                                else if (NOT g_U11193)
                                                {
                                                    ADD_SCORE( sub_691(), (sub_38137( 20 )) * -1 );
                                                    INCREMENT_INT_STAT_NO_MESSAGE( 106, sub_38137( 20 ) );
                                                }
                                                GIVE_WEAPON_TO_CHAR( sub_740(), l_U1183, sub_26208( l_U1183 ), 0 );
                                                SET_CURRENT_CHAR_WEAPON( sub_740(), l_U1183, 1 );
                                                sub_39974( l_U1183 );
                                                DISPLAY_AMMO( 1 );
                                                if (NOT l_U292)
                                                {
                                                    l_U292 = 1;
                                                }
                                                if (NOT l_U286)
                                                {
                                                    l_U385 = 7;
                                                }
                                                l_U287 = 1;
                                                l_U367++;
                                            }
                                            else
                                            {
                                                l_U287 = 1;
                                                l_U367 = 9999;
                                            }
                                        }
                                        else
                                        {
                                            l_U287 = 1;
                                            l_U367 = 2;
                                        }
                                    }
                                    else
                                    {
                                        l_U367 = 0;
                                    }
                                }
                                else
                                {
                                    sub_11597( 6 );
                                    l_U252 = 1;
                                }
                            }
                            else if ((sub_6083( 20 )) || ((sub_26208( l_U1183 )) > 0))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U457 )))
                                {
                                    GET_SCRIPT_TASK_STATUS( l_U457, 80, ref l_U459 );
                                    if (l_U459 == 7)
                                    {
                                        switch (l_U364)
                                        {
                                            case 0:
                                            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U457, "no_way_a", "MISSGUN_CAR", 8.00000000, 0, 0, 0, 0, -1 );
                                            break;
                                            case 1:
                                            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U457, "no_way_b", "MISSGUN_CAR", 8.00000000, 0, 0, 0, 0, -1 );
                                            break;
                                            case 2:
                                            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U457, "no_way_c", "MISSGUN_CAR", 8.00000000, 0, 0, 0, 0, -1 );
                                            break;
                                        }
                                        l_U364++;
                                        if (l_U364 > 2)
                                        {
                                            l_U364 = 0;
                                        }
                                    }
                                }
                                l_U385 = 8;
                                PLAY_AUDIO_EVENT( "FRONTEND_MENU_ERROR" );
                                l_U289 = 1;
                                l_U367 = 0;
                            }
                            else
                            {
                                l_U367 = 0;
                            }
                            l_U252 = 1;
                            SETTIMERA( 0 );
                            SETTIMERB( 0 );
                        }
                        else if (HAS_CHAR_GOT_WEAPON( sub_740(), 30 ))
                        {
                            l_U1183 = 30;
                            I = (sub_37704( 20 )) - 1;
                            if (IS_SCORE_GREATER( sub_691(), I ))
                            {
                                if (sub_38644( 20 ))
                                {
                                    if ((sub_6083( 20 )) || ((sub_26208( l_U1183 )) > 0))
                                    {
                                        if (NOT (sub_38809( l_U1183 )))
                                        {
                                            if (NOT (sub_39416( l_U1183 )))
                                            {
                                                if (l_U367 < 0)
                                                {
                                                    l_U367 = 0;
                                                }
                                                l_U286 = 0;
                                                if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
                                                {
                                                    if (NOT g_U11193)
                                                    {
                                                        ADD_SCORE( sub_691(), (sub_37704( 20 )) * -1 );
                                                        INCREMENT_INT_STAT_NO_MESSAGE( 106, sub_37704( 20 ) );
                                                    }
                                                    l_U286 = 1;
                                                }
                                                else if (NOT g_U11193)
                                                {
                                                    ADD_SCORE( sub_691(), (sub_38137( 20 )) * -1 );
                                                    INCREMENT_INT_STAT_NO_MESSAGE( 106, sub_38137( 20 ) );
                                                }
                                                GIVE_WEAPON_TO_CHAR( sub_740(), l_U1183, sub_26208( l_U1183 ), 0 );
                                                sub_40094( 30 );
                                                SET_CURRENT_CHAR_WEAPON( sub_740(), l_U1183, 1 );
                                                sub_39974( l_U1183 );
                                                DISPLAY_AMMO( 1 );
                                                if (NOT l_U292)
                                                {
                                                    l_U292 = 1;
                                                }
                                                if (NOT l_U286)
                                                {
                                                    l_U385 = 7;
                                                }
                                                l_U287 = 1;
                                                l_U367++;
                                            }
                                            else
                                            {
                                                l_U287 = 1;
                                                l_U367 = 9999;
                                            }
                                        }
                                        else
                                        {
                                            l_U287 = 1;
                                            l_U367 = 2;
                                        }
                                    }
                                    else
                                    {
                                        l_U367 = 0;
                                    }
                                }
                                else
                                {
                                    sub_11597( 6 );
                                    l_U252 = 1;
                                }
                            }
                            else if ((sub_6083( 20 )) || ((sub_26208( l_U1183 )) > 0))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U457 )))
                                {
                                    GET_SCRIPT_TASK_STATUS( l_U457, 80, ref l_U459 );
                                    if (l_U459 == 7)
                                    {
                                        switch (l_U364)
                                        {
                                            case 0:
                                            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U457, "no_way_a", "MISSGUN_CAR", 8.00000000, 0, 0, 0, 0, -1 );
                                            break;
                                            case 1:
                                            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U457, "no_way_b", "MISSGUN_CAR", 8.00000000, 0, 0, 0, 0, -1 );
                                            break;
                                            case 2:
                                            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U457, "no_way_c", "MISSGUN_CAR", 8.00000000, 0, 0, 0, 0, -1 );
                                            break;
                                        }
                                        l_U364++;
                                        if (l_U364 > 2)
                                        {
                                            l_U364 = 0;
                                        }
                                    }
                                }
                                l_U385 = 8;
                                PLAY_AUDIO_EVENT( "FRONTEND_MENU_ERROR" );
                                l_U289 = 1;
                                l_U367 = 0;
                            }
                            else
                            {
                                l_U367 = 0;
                            }
                            l_U252 = 1;
                            SETTIMERA( 0 );
                            SETTIMERB( 0 );
                        }
                    }
                }
                if (NOT l_U252)
                {
                    if (IS_CONTROL_PRESSED( 2, 23 ))
                    {
                        sub_45291();
                        sub_45348();
                        l_U252 = 1;
                        if (g_U11193)
                        {
                            sub_11597( 5 );
                        }
                        else
                        {
                            sub_11597( 4 );
                        }
                    }
                }
                break;
                case 6:
                if ((NOT (l_U1183 == 31)) AND (NOT (l_U1183 == 30)))
                {
                    DISPLAY_CASH( 1 );
                    sub_45846( l_U366 );
                    if (IS_VEH_DRIVEABLE( l_U1182 ))
                    {
                        if (IS_OBJECT_ATTACHED( l_U456 ))
                        {
                            DETACH_OBJECT( l_U456, 1 );
                            ATTACH_OBJECT_TO_CAR( l_U456, l_U1182, l_U363, l_U1137, l_U1140 );
                        }
                        for ( I = 0; I < 22; I++ )
                        {
                            if (I == l_U366)
                            {
                                if (sub_6083( I ))
                                {
                                    if (NOT (DOES_OBJECT_EXIST( l_U433[I] )))
                                    {
                                        sub_8817( I );
                                    }
                                    sub_31649( I );
                                }
                                else if (DOES_OBJECT_EXIST( l_U433[I] ))
                                {
                                    if (IS_OBJECT_ATTACHED( l_U433[I] ))
                                    {
                                        DETACH_OBJECT( l_U433[I], 1 );
                                    }
                                    DELETE_OBJECT( ref l_U433[I] );
                                }
                            }
                            else if (sub_6083( I ))
                            {
                                if (NOT (DOES_OBJECT_EXIST( l_U433[I] )))
                                {
                                    sub_8817( I );
                                }
                                sub_32654( I );
                            }
                            else if (DOES_OBJECT_EXIST( l_U433[I] ))
                            {
                                if (IS_OBJECT_ATTACHED( l_U433[I] ))
                                {
                                    DETACH_OBJECT( l_U433[I], 1 );
                                }
                                DELETE_OBJECT( ref l_U433[I] );
                            };;;
                        }
                    }
                    if (NOT l_U252)
                    {
                        if (IS_CONTROL_PRESSED( 2, 78 ))
                        {
                            sub_11597( 3 );
                            l_U252 = 1;
                        }
                    }
                    if (NOT l_U252)
                    {
                        if (IS_CONTROL_PRESSED( 2, 77 ))
                        {
                            l_U252 = 1;
                            if (NOT g_U11193)
                            {
                                ADD_SCORE( sub_691(), (sub_38137( l_U366 )) * -1 );
                                INCREMENT_INT_STAT_NO_MESSAGE( 106, sub_38137( l_U366 ) );
                            }
                            GIVE_WEAPON_TO_CHAR( sub_740(), l_U1183, sub_26208( l_U1183 ), 0 );
                            SET_CURRENT_CHAR_WEAPON( sub_740(), l_U1183, 1 );
                            if (l_U284)
                            {
                                l_U261[l_U366] = 0;
                            }
                            DISPLAY_AMMO( 1 );
                            l_U385 = 7;
                            l_U367 = 0;
                            sub_40094( l_U1183 );
                            sub_11597( 3 );
                        }
                    }
                    if (NOT l_U252)
                    {
                        if (IS_CONTROL_PRESSED( 2, 23 ))
                        {
                            sub_45291();
                            sub_45348();
                            if (l_U380 == -1)
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U380 );
                            }
                            if (l_U380 == 0)
                            {
                                ;
                            }
                            l_U252 = 1;
                            if (IS_VEH_DRIVEABLE( l_U1182 ))
                            {
                                CONTROL_CAR_DOOR( l_U1182, 3, 0, 1.00000000 );
                                CONTROL_CAR_DOOR( l_U1182, 2, 0, 1.00000000 );
                            }
                            if (g_U11193)
                            {
                                sub_11597( 5 );
                            }
                            else
                            {
                                sub_11597( 4 );
                            }
                        }
                    }
                }
                else if ((l_U1183 == 31) AND (NOT (HAS_CHAR_GOT_WEAPON( sub_740(), 30 ))))
                {
                    DISPLAY_CASH( 1 );
                    sub_45846( l_U366 );
                    if (IS_VEH_DRIVEABLE( l_U1182 ))
                    {
                        if (IS_OBJECT_ATTACHED( l_U456 ))
                        {
                            DETACH_OBJECT( l_U456, 1 );
                            ATTACH_OBJECT_TO_CAR( l_U456, l_U1182, l_U363, l_U1137, l_U1140 );
                        }
                        for ( I = 0; I < 22; I++ )
                        {
                            if (I == l_U366)
                            {
                                if (sub_6083( I ))
                                {
                                    if (NOT (DOES_OBJECT_EXIST( l_U433[I] )))
                                    {
                                        sub_8817( I );
                                    }
                                    sub_31649( I );
                                }
                                else if (DOES_OBJECT_EXIST( l_U433[I] ))
                                {
                                    if (IS_OBJECT_ATTACHED( l_U433[I] ))
                                    {
                                        DETACH_OBJECT( l_U433[I], 1 );
                                    }
                                    DELETE_OBJECT( ref l_U433[I] );
                                }
                            }
                            else if (sub_6083( I ))
                            {
                                if (NOT (DOES_OBJECT_EXIST( l_U433[I] )))
                                {
                                    sub_8817( I );
                                }
                                sub_32654( I );
                            }
                            else if (DOES_OBJECT_EXIST( l_U433[I] ))
                            {
                                if (IS_OBJECT_ATTACHED( l_U433[I] ))
                                {
                                    DETACH_OBJECT( l_U433[I], 1 );
                                }
                                DELETE_OBJECT( ref l_U433[I] );
                            };;;
                        }
                    }
                    if (NOT l_U252)
                    {
                        if (IS_CONTROL_PRESSED( 2, 78 ))
                        {
                            sub_11597( 3 );
                            l_U252 = 1;
                        }
                    }
                    if (NOT l_U252)
                    {
                        if (IS_CONTROL_PRESSED( 2, 77 ))
                        {
                            l_U252 = 1;
                            if (NOT g_U11193)
                            {
                                ADD_SCORE( sub_691(), (sub_38137( l_U366 )) * -1 );
                                INCREMENT_INT_STAT_NO_MESSAGE( 106, sub_38137( l_U366 ) );
                            }
                            GIVE_WEAPON_TO_CHAR( sub_740(), l_U1183, sub_26208( l_U1183 ), 0 );
                            SET_CURRENT_CHAR_WEAPON( sub_740(), l_U1183, 1 );
                            if (l_U284)
                            {
                                l_U261[l_U366] = 0;
                            }
                            DISPLAY_AMMO( 1 );
                            l_U385 = 7;
                            l_U367 = 0;
                            sub_40094( l_U1183 );
                            sub_11597( 3 );
                        }
                    }
                    if (NOT l_U252)
                    {
                        if (IS_CONTROL_PRESSED( 2, 23 ))
                        {
                            sub_45291();
                            sub_45348();
                            if (l_U380 == -1)
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U380 );
                            }
                            if (l_U380 == 0)
                            {
                                ;
                            }
                            l_U252 = 1;
                            if (IS_VEH_DRIVEABLE( l_U1182 ))
                            {
                                CONTROL_CAR_DOOR( l_U1182, 3, 0, 1.00000000 );
                                CONTROL_CAR_DOOR( l_U1182, 2, 0, 1.00000000 );
                            }
                            if (g_U11193)
                            {
                                sub_11597( 5 );
                            }
                            else
                            {
                                sub_11597( 4 );
                            }
                        }
                    }
                }
                else if ((l_U1183 == 31) AND (HAS_CHAR_GOT_WEAPON( sub_740(), 30 )))
                {
                    DISPLAY_CASH( 1 );
                    sub_45846( l_U366 );
                    if (IS_VEH_DRIVEABLE( l_U1182 ))
                    {
                        if (IS_OBJECT_ATTACHED( l_U456 ))
                        {
                            DETACH_OBJECT( l_U456, 1 );
                            ATTACH_OBJECT_TO_CAR( l_U456, l_U1182, l_U363, l_U1137, l_U1140 );
                        }
                        for ( I = 0; I < 22; I++ )
                        {
                            if (I == l_U366)
                            {
                                if (sub_6083( I ))
                                {
                                    if (NOT (DOES_OBJECT_EXIST( l_U433[I] )))
                                    {
                                        sub_8817( I );
                                    }
                                    sub_31649( I );
                                }
                                else if (DOES_OBJECT_EXIST( l_U433[I] ))
                                {
                                    if (IS_OBJECT_ATTACHED( l_U433[I] ))
                                    {
                                        DETACH_OBJECT( l_U433[I], 1 );
                                    }
                                    DELETE_OBJECT( ref l_U433[I] );
                                }
                            }
                            else if (sub_6083( I ))
                            {
                                if (NOT (DOES_OBJECT_EXIST( l_U433[I] )))
                                {
                                    sub_8817( I );
                                }
                                sub_32654( I );
                            }
                            else if (DOES_OBJECT_EXIST( l_U433[I] ))
                            {
                                if (IS_OBJECT_ATTACHED( l_U433[I] ))
                                {
                                    DETACH_OBJECT( l_U433[I], 1 );
                                }
                                DELETE_OBJECT( ref l_U433[I] );
                            };;;
                        }
                    }
                    if (NOT l_U252)
                    {
                        if (IS_CONTROL_PRESSED( 2, 78 ))
                        {
                            sub_11597( 3 );
                            l_U252 = 1;
                        }
                    }
                    if (NOT l_U252)
                    {
                        if (IS_CONTROL_PRESSED( 2, 77 ))
                        {
                            l_U252 = 1;
                            if (NOT g_U11193)
                            {
                                ADD_SCORE( sub_691(), (sub_38137( l_U366 )) * -1 );
                                INCREMENT_INT_STAT_NO_MESSAGE( 106, sub_38137( l_U366 ) );
                            }
                            GET_AMMO_IN_CHAR_WEAPON( sub_740(), 30, ref uVar17 );
                            GIVE_WEAPON_TO_CHAR( sub_740(), l_U1183, uVar17, 0 );
                            SET_CURRENT_CHAR_WEAPON( sub_740(), l_U1183, 1 );
                            if (l_U284)
                            {
                                l_U261[l_U366] = 0;
                            }
                            DISPLAY_AMMO( 1 );
                            l_U385 = 7;
                            l_U367 = 0;
                            sub_40094( l_U1183 );
                            sub_11597( 3 );
                        }
                    }
                    if (NOT l_U252)
                    {
                        if (IS_CONTROL_PRESSED( 2, 23 ))
                        {
                            sub_45291();
                            sub_45348();
                            if (l_U380 == -1)
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U380 );
                            }
                            if (l_U380 == 0)
                            {
                                ;
                            }
                            l_U252 = 1;
                            if (IS_VEH_DRIVEABLE( l_U1182 ))
                            {
                                CONTROL_CAR_DOOR( l_U1182, 3, 0, 1.00000000 );
                                CONTROL_CAR_DOOR( l_U1182, 2, 0, 1.00000000 );
                            }
                            if (g_U11193)
                            {
                                sub_11597( 5 );
                            }
                            else
                            {
                                sub_11597( 4 );
                            }
                        }
                    }
                }
                else if (l_U1183 == 30)
                {
                    DISPLAY_CASH( 1 );
                    sub_45846( l_U366 );
                    if (IS_VEH_DRIVEABLE( l_U1182 ))
                    {
                        if (IS_OBJECT_ATTACHED( l_U456 ))
                        {
                            DETACH_OBJECT( l_U456, 1 );
                            ATTACH_OBJECT_TO_CAR( l_U456, l_U1182, l_U363, l_U1137, l_U1140 );
                        }
                        for ( I = 0; I < 22; I++ )
                        {
                            if (I == l_U366)
                            {
                                if (sub_6083( I ))
                                {
                                    if (NOT (DOES_OBJECT_EXIST( l_U433[I] )))
                                    {
                                        sub_8817( I );
                                    }
                                    sub_31649( I );
                                }
                                else if (DOES_OBJECT_EXIST( l_U433[I] ))
                                {
                                    if (IS_OBJECT_ATTACHED( l_U433[I] ))
                                    {
                                        DETACH_OBJECT( l_U433[I], 1 );
                                    }
                                    DELETE_OBJECT( ref l_U433[I] );
                                }
                            }
                            else if (sub_6083( I ))
                            {
                                if (NOT (DOES_OBJECT_EXIST( l_U433[I] )))
                                {
                                    sub_8817( I );
                                }
                                sub_32654( I );
                            }
                            else if (DOES_OBJECT_EXIST( l_U433[I] ))
                            {
                                if (IS_OBJECT_ATTACHED( l_U433[I] ))
                                {
                                    DETACH_OBJECT( l_U433[I], 1 );
                                }
                                DELETE_OBJECT( ref l_U433[I] );
                            };;;
                        }
                    }
                    if (NOT l_U252)
                    {
                        if (IS_CONTROL_PRESSED( 2, 78 ))
                        {
                            sub_11597( 3 );
                            l_U252 = 1;
                        }
                    }
                    if (NOT l_U252)
                    {
                        if (IS_CONTROL_PRESSED( 2, 77 ))
                        {
                            l_U252 = 1;
                            if (NOT g_U11193)
                            {
                                ADD_SCORE( sub_691(), (sub_38137( 20 )) * -1 );
                                INCREMENT_INT_STAT_NO_MESSAGE( 106, sub_38137( 20 ) );
                            }
                            GIVE_WEAPON_TO_CHAR( sub_740(), l_U1183, 20, 0 );
                            SET_CURRENT_CHAR_WEAPON( sub_740(), l_U1183, 1 );
                            if (l_U284)
                            {
                                l_U261[l_U366] = 0;
                            }
                            DISPLAY_AMMO( 1 );
                            l_U385 = 7;
                            l_U367 = 0;
                            sub_40094( l_U1183 );
                            sub_11597( 3 );
                        }
                    }
                    if (NOT l_U252)
                    {
                        if (IS_CONTROL_PRESSED( 2, 23 ))
                        {
                            sub_45291();
                            sub_45348();
                            if (l_U380 == -1)
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U380 );
                            }
                            if (l_U380 == 0)
                            {
                                ;
                            }
                            l_U252 = 1;
                            if (IS_VEH_DRIVEABLE( l_U1182 ))
                            {
                                CONTROL_CAR_DOOR( l_U1182, 3, 0, 1.00000000 );
                                CONTROL_CAR_DOOR( l_U1182, 2, 0, 1.00000000 );
                            }
                            if (g_U11193)
                            {
                                sub_11597( 5 );
                            }
                            else
                            {
                                sub_11597( 4 );
                            }
                        }
                    }
                };;;;
                break;
                case 5:
                if (NOT l_U260)
                {
                    if (IS_VEH_DRIVEABLE( l_U1182 ))
                    {
                        FREEZE_CAR_POSITION( l_U1182, 0 );
                    }
                    if (IS_VEH_DRIVEABLE( l_U1182 ))
                    {
                        LOCK_CAR_DOORS( l_U1182, 3 );
                        if (NOT (IS_CHAR_INJURED( l_U457 )))
                        {
                            CLEAR_CHAR_TASKS( l_U457 );
                            TASK_CLEAR_LOOK_AT( l_U457 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U457, 1 );
                            BLOCK_CHAR_GESTURE_ANIMS( l_U457, 1 );
                            SET_NEXT_DESIRED_MOVE_STATE( 2 );
                            OPEN_SEQUENCE_TASK( ref l_U458 );
                            TASK_CLEAR_LOOK_AT( 0 );
                            if (l_U290)
                            {
                                TASK_PLAY_ANIM( 0, "shut_trunk", "MISSGUN_CAR", 4.00000000, 0, 0, 0, 0, -1 );
                            }
                            CLOSE_SEQUENCE_TASK( l_U458 );
                            TASK_PERFORM_SEQUENCE( l_U457, l_U458 );
                            CLEAR_SEQUENCE_TASK( l_U458 );
                        }
                    }
                    l_U255 = 0;
                    l_U293 = 0;
                    SETTIMERA( 0 );
                    l_U260 = 1;
                }
                if (IS_VEH_DRIVEABLE( l_U1182 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U457 )))
                    {
                        BLOCK_CHAR_GESTURE_ANIMS( l_U457, 1 );
                        if (IS_CHAR_PLAYING_ANIM( l_U457, "MISSGUN_CAR", "shut_trunk" ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( l_U457, "MISSGUN_CAR", "shut_trunk", ref fVar9 );
                            if (fVar9 < l_U342)
                            {
                                fVar9 = l_U342;
                            }
                            if (fVar9 > l_U343)
                            {
                                fVar9 = l_U343;
                            }
                            fVar9 -= l_U342;
                            l_U347 -= 1.00000000 - ((fVar9 / (l_U343 - l_U342)) * l_U344);
                            if (l_U347 < 0.80000000)
                            {
                                sub_51197( 7 );
                                sub_51197( 8 );
                                sub_51197( 10 );
                            }
                            if (l_U347 < 0.30000000)
                            {
                                if (NOT l_U255)
                                {
                                    sub_51327();
                                    l_U255 = 1;
                                }
                            }
                            if (IS_VEH_DRIVEABLE( l_U1182 ))
                            {
                                CONTROL_CAR_DOOR( l_U1182, 5, 1, l_U347 );
                            }
                        }
                    }
                }
                if (NOT l_U296)
                {
                    if (l_U347 < 0.05000000)
                    {
                        l_U296 = 1;
                    }
                }
                else if (IS_VEH_DRIVEABLE( l_U1182 ))
                {
                    ;
                }
                if (NOT l_U293)
                {
                    if (NOT (IS_CHAR_INJURED( l_U457 )))
                    {
                        if ((TIMERA() > 3000) || (l_U296))
                        {
                            BLOCK_CHAR_GESTURE_ANIMS( l_U457, 0 );
                            l_U293 = 1;
                            PRINTSTRING( "Terry gun van - QUIT_OUT_OF_SCRIPT() - 2 \n" );
                            sub_612();
                        }
                    }
                }
                break;
                case 4:
                if (NOT l_U260)
                {
                    if (IS_VEH_DRIVEABLE( l_U1182 ))
                    {
                        FREEZE_CAR_POSITION( l_U1182, 0 );
                    }
                    if (DOES_BLIP_EXIST( l_U251 ))
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U251 );
                    }
                    if (IS_VEH_DRIVEABLE( l_U1182 ))
                    {
                        LOCK_CAR_DOORS( l_U1182, 3 );
                        if (NOT (IS_CHAR_INJURED( l_U457 )))
                        {
                            CLEAR_CHAR_TASKS( l_U457 );
                            TASK_CLEAR_LOOK_AT( l_U457 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U457, 1 );
                            BLOCK_CHAR_GESTURE_ANIMS( l_U457, 1 );
                            SET_NEXT_DESIRED_MOVE_STATE( 2 );
                            OPEN_SEQUENCE_TASK( ref l_U458 );
                            TASK_CLEAR_LOOK_AT( 0 );
                            if (l_U290)
                            {
                                TASK_PLAY_ANIM( 0, "shut_trunk", "MISSGUN_CAR", 4.00000000, 0, 0, 0, 0, -1 );
                            }
                            TASK_ENTER_CAR_AS_DRIVER( 0, l_U1182, -2 );
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1182, 0.00000000, 10.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            TASK_CAR_DRIVE_TO_COORD( 0, l_U1182, uVar2._fU0, uVar2._fU4, uVar2._fU8, 20.00000000, 0, 0, 0, 3.00000000, 10 );
                            TASK_CAR_DRIVE_WANDER( 0, l_U1182, 20.00000000, 2 );
                            TASK_WANDER_STANDARD( 0 );
                            CLOSE_SEQUENCE_TASK( l_U458 );
                            TASK_PERFORM_SEQUENCE( l_U457, l_U458 );
                            CLEAR_SEQUENCE_TASK( l_U458 );
                        }
                    }
                    l_U255 = 0;
                    l_U293 = 0;
                    SETTIMERA( 0 );
                    l_U260 = 1;
                }
                if (TIMERA() > 1000)
                {
                    sub_1237( 3, "E1GV_H01" );
                    if (g_U10542 == 1)
                    {
                        g_U10542 = 0;
                        l_U385 = 9;
                        if ((NOT (IS_CHAR_INJURED( l_U457 ))) AND (IS_PLAYER_PLAYING( sub_691() )))
                        {
                            TASK_LOOK_AT_CHAR( l_U457, sub_740(), 10000, 0 );
                            TASK_LOOK_AT_CHAR( sub_740(), l_U457, 7000, 0 );
                        }
                        SET_MINIGAME_IN_PROGRESS( 0 );
                    }
                }
                if (IS_VEH_DRIVEABLE( l_U1182 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U457 )))
                    {
                        if (IS_CHAR_PLAYING_ANIM( l_U457, "MISSGUN_CAR", "shut_trunk" ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( l_U457, "MISSGUN_CAR", "shut_trunk", ref fVar9 );
                            if (fVar9 < l_U342)
                            {
                                fVar9 = l_U342;
                            }
                            if (fVar9 > l_U343)
                            {
                                fVar9 = l_U343;
                            }
                            fVar9 -= l_U342;
                            l_U347 = 1.00000000 - ((fVar9 / (l_U343 - l_U342)) * l_U344);
                            if (l_U347 < 0.80000000)
                            {
                                sub_51197( 7 );
                                sub_51197( 8 );
                                sub_51197( 10 );
                            }
                            if (l_U347 < 0.30000000)
                            {
                                if (NOT l_U255)
                                {
                                    sub_51327();
                                    l_U255 = 1;
                                }
                            }
                            if (IS_VEH_DRIVEABLE( l_U1182 ))
                            {
                                CONTROL_CAR_DOOR( l_U1182, 5, 1, l_U347 );
                            }
                        }
                    }
                }
                if (NOT l_U296)
                {
                    if (l_U347 < 0.05000000)
                    {
                        l_U296 = 1;
                    }
                }
                else if (IS_VEH_DRIVEABLE( l_U1182 ))
                {
                    ;
                }
                if (NOT l_U293)
                {
                    if (NOT (IS_CHAR_INJURED( l_U457 )))
                    {
                        if ((TIMERA() > 3000) || (IS_CHAR_IN_ANY_CAR( l_U457 )))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U457, 0 );
                            BLOCK_CHAR_GESTURE_ANIMS( l_U457, 0 );
                            l_U293 = 1;
                        }
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U457 )))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U457, sub_740(), 100.00000000, 100.00000000, 100.00000000, 0 )))
                    {
                        if (NOT (IS_CHAR_ON_SCREEN( l_U457 )))
                        {
                            if (IS_CHAR_IN_ANY_CAR( l_U457 ))
                            {
                                if (NOT (IS_CAR_DEAD( l_U1182 )))
                                {
                                    if (IS_CHAR_IN_CAR( l_U457, l_U1182 ))
                                    {
                                        if (NOT (IS_CAR_ON_SCREEN( l_U1182 )))
                                        {
                                            sub_52879();
                                        }
                                    }
                                }
                                else
                                {
                                    DELETE_CHAR( ref l_U457 );
                                }
                            }
                            else
                            {
                                DELETE_CHAR( ref l_U457 );
                            }
                        }
                    }
                }
                break;
            }
            l_U466 = 3;
            switch (l_U385)
            {
                case 0:
                if (sub_53201( "E2FA_GUN1", ref l_U460, l_U466 ))
                {
                    l_U385 = 11;
                }
                break;
                case 1:
                if (sub_53201( "E2FA_GUN2", ref l_U460, l_U466 ))
                {
                    l_U385 = 11;
                }
                break;
                case 2:
                if (NOT sub_54679())
                {
                    if ((NOT (IS_CHAR_INJURED( l_U457 ))) AND (IS_PLAYER_PLAYING( sub_691() )))
                    {
                        if (NOT g_U11193)
                        {
                            if (sub_53201( "E2FA_GUN3", ref l_U460, l_U466 ))
                            {
                                if (NOT (IS_CHAR_INJURED( sub_740() )))
                                {
                                    TASK_LOOK_AT_CHAR( sub_740(), l_U457, 2000, 0 );
                                }
                                l_U385 = 11;
                            }
                        }
                        else if (sub_53201( "E1BE_FREE", ref l_U460, l_U466 ))
                        {
                            if (NOT (IS_CHAR_INJURED( sub_740() )))
                            {
                                TASK_LOOK_AT_CHAR( sub_740(), l_U457, 2000, 0 );
                            }
                            l_U385 = 11;
                        }
                    }
                    else
                    {
                        l_U385 = 11;
                    }
                }
                break;
                case 3:
                if (sub_53201( "E2FA_GUN4", ref l_U460, l_U466 ))
                {
                    l_U385 = 2;
                }
                break;
                case 4:
                if (sub_53201( "E2FA_GUN5", ref l_U460, l_U466 ))
                {
                    l_U385 = 11;
                }
                break;
                case 5:
                if (sub_53201( "E2FA_GUN6", ref l_U460, l_U466 ))
                {
                    l_U385 = 11;
                }
                break;
                case 6:
                if (sub_53201( "E2FA_GUN7", ref l_U460, l_U466 ))
                {
                    l_U385 = 11;
                }
                break;
                case 7:
                if (sub_53201( "E2FA_GUN8", ref l_U460, l_U466 ))
                {
                    l_U385 = 11;
                }
                break;
                case 8:
                if (sub_53201( "E2FA_GUN9", ref l_U460, l_U466 ))
                {
                    l_U385 = 11;
                    if ((NOT (IS_CHAR_INJURED( l_U457 ))) AND (NOT (IS_CHAR_INJURED( sub_740() ))))
                    {
                        TASK_LOOK_AT_CHAR( l_U457, sub_740(), 2000, 0 );
                    }
                }
                break;
                case 9:
                if (sub_53201( "E2FA_GUN10", ref l_U460, l_U466 ))
                {
                    l_U385 = 10;
                }
                break;
                case 10:
                if (NOT sub_54679())
                {
                    if ((NOT (IS_CHAR_INJURED( l_U457 ))) AND (IS_PLAYER_PLAYING( sub_691() )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_740(), l_U457, 15.00000000, 15.00000000, 5.00000000, 0 ))
                        {
                            if (sub_53201( "E2FA_GUN11", ref l_U460, l_U466 ))
                            {
                                l_U385 = 11;
                            }
                        }
                        else
                        {
                            l_U385 = 11;
                        }
                    }
                    else
                    {
                        l_U385 = 11;
                    }
                }
                break;
                case 11:
                if (NOT sub_54679())
                {
                    l_U385 = 99;
                }
                break;
                case 99: break;
            }
            if (NOT (IS_CHAR_INJURED( l_U457 )))
            {
                sub_55605( l_U457 );
            }
        }
        else
        {
            PRINTSTRING( "Terry gun van - QUIT_OUT_OF_SCRIPT() - 3 \n" );
            sub_612();
        }
        sub_59093();
        if (g_U11191)
        {
            PRINTSTRING( "Gun van is being dismissed \n" );
            sub_59392();
            PRINTSTRING( "Terry gun van - QUIT_OUT_OF_SCRIPT() - 6 \n" );
            sub_612();
        }
        if (DOES_CHAR_EXIST( l_U457 ))
        {
            if (IS_CHAR_INJURED( l_U457 ))
            {
                bVar11 = false;
                if (NOT (IS_CHAR_DEAD( l_U457 )))
                {
                    if (NOT (IS_CHAR_DEAD( sub_740() )))
                    {
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U457, sub_740(), 0 ))
                        {
                            bVar11 = true;
                        }
                    }
                }
                sub_59670( 3, l_U457, 3 );
                sub_1237( 3, "E1GV_H01" );
                if (g_U10542 == 1)
                {
                    g_U10542 = 0;
                    SET_MINIGAME_IN_PROGRESS( 0 );
                }
                if (NOT l_U255)
                {
                    sub_51327();
                    l_U255 = 1;
                }
                if (IS_VEH_DRIVEABLE( l_U1182 ))
                {
                    FREEZE_CAR_POSITION( l_U1182, 0 );
                    LOCK_CAR_DOORS( l_U1182, 3 );
                    CONTROL_CAR_DOOR( l_U1182, 3, 0, 0.00000000 );
                    CONTROL_CAR_DOOR( l_U1182, 2, 0, 0.00000000 );
                    SHUT_CAR_DOOR( l_U1182, 3 );
                    SHUT_CAR_DOOR( l_U1182, 2 );
                }
                sub_45527( 1 );
                sub_45348();
                PRINTSTRING( "Terry gun van - QUIT_OUT_OF_SCRIPT() - 4 \n" );
                sub_612();
            }
        }
        else
        {
            PRINTSTRING( "Terry gun van - QUIT_OUT_OF_SCRIPT() - 5 \n" );
            sub_612();
        }
        if ((l_U294) AND (NOT l_U295))
        {
            if (NOT (IS_CAR_DEAD( l_U1182 )))
            {
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1182, l_U1179._fU0, l_U1179._fU4, l_U1179._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                DRAW_LIGHT_WITH_RANGE( uVar2._fU0, uVar2._fU4, uVar2._fU8, l_U382, l_U383, l_U384, l_U359, l_U360 );
            }
        }
        if (l_U295)
        {
            l_U295 = 0;
        }
        else
        {
            WAIT( 0 );
        }
    }
    return;
}

void sub_612()
{
    int I;

    if (g_U11193)
    {
        sub_631();
    }
    else
    {
        sub_1237( 3, "E1GV_H01" );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1 );
        for ( I = 0; I < 22; I++ )
        {
            PRINTNL();
            PRINTSTRING( "*************** Model Number: " );
            PRINTINT( I );
            PRINTNL();
            sub_1674( I, ref l_U1183 );
            sub_2101( l_U1183, ref l_U410[I] );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U410[I] );
            PRINTNL();
            PRINTSTRING( "*************** Model Number: " );
            PRINTINT( I );
            PRINTNL();
        }
        g_U43645 = -1;
        SWITCH_PED_ROADS_BACK_TO_ORIGINAL( l_U1173._fU0, l_U1173._fU4, l_U1173._fU8, l_U1176._fU0, l_U1176._fU4, l_U1176._fU8 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_2339( 3 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1256082323 );
        REMOVE_ANIMS( "MISSGUN_CAR" );
        g_U11191 = 0;
        if (g_U10542)
        {
            g_U10542 = 0;
            SET_MINIGAME_IN_PROGRESS( 0 );
        }
        sub_819( l_U457, 1 );
        TERMINATE_THIS_SCRIPT();
    }
    return;
}

void sub_631()
{
    g_U43645 = -1;
    g_U11191 = 0;
    if (g_U10542)
    {
        g_U10542 = 0;
        SET_MINIGAME_IN_PROGRESS( 0 );
    }
    if ((NOT (IS_CHAR_INJURED( l_U457 ))) AND (IS_PLAYER_PLAYING( sub_691() )))
    {
        TASK_LOOK_AT_CHAR( l_U457, sub_740(), 2000, 0 );
        TASK_LOOK_AT_CHAR( sub_740(), l_U457, 1000, 0 );
    }
    sub_819( l_U457, 1 );
    g_U11193 = 0;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_691()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_740()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_819(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_OBJECT_EXIST( l_U204 ))
        {
            DELETE_OBJECT( ref l_U204 );
            l_U204 = nil;
        }
    }
    else if (DOES_OBJECT_EXIST( l_U204 ))
    {
        if (IS_OBJECT_ATTACHED( l_U204 ))
        {
            DETACH_OBJECT( l_U204, 1 );
        }
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U204 );
        l_U204 = nil;
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (HAVE_ANIMS_LOADED( l_U206 ))
        {
            if ((IS_CHAR_PLAYING_ANIM( uParam0, l_U206, l_U207 )) || (IS_CHAR_PLAYING_ANIM( uParam0, l_U206, l_U208 )))
            {
                CLEAR_CHAR_SECONDARY_TASK( uParam0 );
            }
        }
    }
    if (HAVE_ANIMS_LOADED( l_U206 ))
    {
        REMOVE_ANIMS( l_U206 );
    }
    if (HAS_MODEL_LOADED( -268530289 ))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( -268530289 );
    }
    l_U205 = nil;
    l_U199 = 0.00000000;
    if (l_U193)
    {
        sub_1115( ref l_U203 );
        l_U193 = 0;
    }
    return;
}

void sub_1115(unknown uParam0)
{
    if (sub_1127( (uParam0^) ))
    {
        STOP_PTFX( (uParam0^) );
    }
    (uParam0^) = 0;
    return;
}

int sub_1127(int iParam0)
{
    if (iParam0 > 0)
    {
        return 1;
    }
    return 0;
}

void sub_1237(int iParam0, string sParam1)
{
    string sVar4;

    if (USING_STANDARD_CONTROLS())
    {
        sVar4 = "CNTBUT1";
    }
    else
    {
        sVar4 = "CNTBUT2";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (NOT (IS_STRING_NULL( sParam1 )))
    {
        if (COMPARE_STRING( sParam1, ref g_U10536 ))
        {
            if ((g_U10534 == iParam0) AND (l_U93))
            {
                StrCopy( ref g_U10536, "", 16 );
                g_U10534 = 0;
                g_U10535 = 0;
                g_U10540 = nil;
                l_U93 = 0;
                if (l_U91)
                {
                    sub_1464();
                    l_U91 = 0;
                }
            }
            if (l_U92)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_691(), 1 );
                l_U92 = 0;
            }
            if (l_U90)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U90 = 0;
            }
        }
    }
    return;
}

void sub_1464()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_1674(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 7;
        break;
        case 1:
        (uParam1^) = 10;
        break;
        case 2:
        (uParam1^) = 13;
        break;
        case 3:
        (uParam1^) = 12;
        break;
        case 4:
        (uParam1^) = 16;
        break;
        case 5:
        (uParam1^) = 3;
        break;
        case 6:
        (uParam1^) = 4;
        break;
        case 7:
        (uParam1^) = 15;
        break;
        case 8:
        (uParam1^) = 14;
        break;
        case 9:
        (uParam1^) = 5;
        break;
        case 10:
        (uParam1^) = 48;
        break;
        case 11:
        (uParam1^) = 18;
        break;
        case 12:
        (uParam1^) = 21;
        break;
        case 13:
        (uParam1^) = 29;
        break;
        case 14:
        (uParam1^) = 33;
        break;
        case 15:
        (uParam1^) = 35;
        break;
        case 16:
        (uParam1^) = 36;
        break;
        case 17:
        (uParam1^) = 32;
        break;
        case 18:
        (uParam1^) = 31;
        break;
        case 19:
        (uParam1^) = 34;
        break;
        case 20:
        (uParam1^) = 30;
        break;
        case 21:
        (uParam1^) = 41;
        break;
    }
    return;
}

void sub_2101(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 48:
        (uParam1^) = l_U410[10];
        break;
        case 41:
        (uParam1^) = l_U410[21];
        break;
        default:
        GET_WEAPONTYPE_MODEL( uParam0, uParam1 );
        break;
    }
    return;
}

int sub_2339(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -274568867;
        case 1: return 1662225612;
        case 2: return -448171135;
        case 3: return 1370299619;
        case 4: return -773750838;
        case 5: return 243666427;
        case 6: return -913924918;
        case 7: return 1905515841;
        case 9:
        SCRIPT_ASSERT( "Attempt to Return the model for the Reserve Strand 1 Character" );
        return 0;
        case 30: return -1949352469;
        case 31: return -401698464;
        case 32: return -487173849;
        case 33: return -407067034;
        case 13: return 714517099;
        case 14: return 653404222;
        case 15: return 1798610950;
    }
    sub_2754( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_2754(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2890()
{
    int I;

    l_U362 = 0;
    l_U1170 = {-0.25000000, -3.20000000, 0.00000000};
    l_U351 = 145.00000000;
    l_U1158 = {-0.45000000, -3.50000000, 2.00000000};
    l_U1161 = {0.36500000, -3.50000000, 2.00000000};
    l_U345 = 330.00000000;
    l_U346 = 40.00000000;
    l_U1164 = {-0.45800000, -0.69300000, 0.76100000};
    l_U1167 = {2.14900000, -10.00000000, 1.13800000};
    l_U347 = 1.00000000;
    l_U1152 = {-0.01600000, -4.32000000, 1.14400000};
    l_U1155 = {0.00000000, 0.00000000, -0.32600000};
    l_U1137 = {0.00000000, -1.86000000, 0.21800000};
    l_U1140 = {0.00000000, 0.00000000, 0.00000000};
    l_U329 = 0.30000000;
    l_U330 = 0.30000000;
    l_U339 = 0.29000000;
    l_U340 = 0.61200000;
    l_U341 = 1.00000000;
    l_U342 = 0.28000000;
    l_U343 = 0.62000000;
    l_U344 = 1.00000000;
    l_U363 = 0;
    l_U331 = 0.38900000;
    l_U332 = 0.47100000;
    l_U333 = 0.50000000;
    l_U334 = 0.92100000;
    l_U335 = 0.38900000;
    l_U336 = 0.47100000;
    l_U337 = 0.50000000;
    l_U338 = 0.83500000;
    l_U256 = 0;
    l_U367 = 0;
    l_U258 = 1;
    l_U1143 = {0.00000000, 0.00000000, 0.01000000};
    l_U1146 = {0.00000000, 0.00000000, 0.01000000};
    l_U348 = 0.20000000;
    l_U349 = 0.10000000;
    l_U1179 = {0.00000000, -2.35300000, 0.79300000};
    l_U467[0] = {-0.50700000, -0.07000000, -0.21800000};
    l_U534[0] = {0.00000000, 0.70400000, 1.57900000};
    l_U869[0] = {0.00000000, -0.53800000, 0.00000000};
    l_U936[0] = {-0.21400000, 0.00000000, 0.00000000};
    l_U467[1] = {0.03600000, -0.09800000, -0.29300000};
    l_U534[1] = {1.59900000, 0.00000000, 3.14100000};
    l_U869[1] = {0.00000000, -0.53800000, 0.00000000};
    l_U936[1] = {-0.21400000, 0.00000000, 0.00000000};
    l_U467[2] = {0.60500000, -0.18200000, -0.22100000};
    l_U534[2] = {-1.57800000, -0.69900000, 1.56700000};
    l_U869[2] = {0.00000000, -0.53800000, 0.00000000};
    l_U936[2] = {-0.21400000, 0.00000000, 0.00000000};
    l_U467[3] = {0.54830000, 0.37830000, 0.25400000};
    l_U534[3] = {1.61270000, -2.38180000, -1.55510000};
    l_U869[3] = {0.00000000, -0.53800000, 0.00000000};
    l_U936[3] = {-0.21400000, 0.00000000, 0.00000000};
    l_U467[4] = {-0.38300000, 0.35100000, 0.08900000};
    l_U534[4] = {0.00000000, -0.99600000, 1.49300000};
    l_U869[4] = {0.00000000, -0.53800000, 0.00000000};
    l_U936[4] = {-0.21400000, 0.00000000, 0.00000000};
    l_U467[5] = {-0.22900000, -0.58300000, -0.26800000};
    l_U534[5] = {-1.59300000, 0.00000000, 1.57300000};
    l_U869[5] = {0.00000000, -0.53800000, 0.00000000};
    l_U936[5] = {-0.21400000, 0.00000000, 0.00000000};
    l_U467[6] = {-0.32300000, -0.07600000, -0.29000000};
    l_U534[6] = {-1.50000000, 0.00000000, 0.00000000};
    l_U869[6] = {0.00000000, -0.53800000, 0.00000000};
    l_U936[6] = {-0.21400000, 0.00000000, 0.00000000};
    l_U467[7] = {-0.29400000, 0.36600000, 0.06300000};
    l_U534[7] = {0.00000000, -0.94300000, 1.57100000};
    l_U869[7] = {0.00000000, -0.53800000, 0.00000000};
    l_U936[7] = {-0.21400000, 0.00000000, 0.00000000};
    l_U467[8] = {-0.18800000, 0.38600000, 0.10800000};
    l_U534[8] = {0.00000000, -0.92400000, 1.55000000};
    l_U869[8] = {0.00000000, -0.53800000, 0.00000000};
    l_U936[8] = {-0.21400000, 0.00000000, 0.00000000};
    l_U467[9] = {0.41170000, 0.22470000, -0.18070000};
    l_U534[9] = {-0.51000000, 0.00000000, 0.00000000};
    l_U869[9] = {0.00000000, -0.53800000, 0.00000000};
    l_U936[9] = {-0.21400000, 0.00000000, 0.00000000};
    l_U467[10] = {0.63230000, -0.44300000, -0.18150000};
    l_U534[10] = {0.00000000, 0.00000000, -1.60140000};
    l_U869[10] = {0.00000000, -0.53800000, 0.00000000};
    l_U936[10] = {-0.21400000, 0.00000000, 0.00000000};
    l_U467[11] = {0.09600000, -0.44800000, -0.28000000};
    l_U534[11] = {-1.71200000, 0.00000000, 0.00000000};
    l_U869[11] = {0.00000000, -0.53800000, 0.00000000};
    l_U936[11] = {-0.21400000, 0.00000000, 0.00000000};
    l_U467[12] = {-0.13800000, -0.22400000, -0.31100000};
    l_U534[12] = {-1.60000000, 0.00000000, 0.00000000};
    l_U869[12] = {0.00000000, -0.53800000, 0.00000000};
    l_U936[12] = {-0.21400000, 0.00000000, 0.00000000};
    l_U467[13] = {-0.57800000, -0.18900000, -0.13800000};
    l_U534[13] = {0.00000000, 0.70400000, 1.57900000};
    l_U869[13] = {0.00000000, -0.53800000, 0.00000000};
    l_U936[13] = {-0.21400000, 0.00000000, 0.00000000};
    l_U467[14] = {0.62500000, 0.25300000, 0.14000000};
    l_U534[14] = {1.57000000, -0.70000000, 1.57000000};
    l_U869[14] = {0.00000000, -0.53800000, 0.00000000};
    l_U936[14] = {-0.21400000, 0.00000000, 0.00000000};
    l_U467[15] = {-0.06200000, 0.38300000, 0.12600000};
    l_U534[15] = {0.00000000, -0.97600000, 1.57000000};
    l_U869[15] = {0.00000000, -0.53800000, 0.00000000};
    l_U936[15] = {-0.21400000, 0.00000000, 0.00000000};
    l_U467[16] = {0.50600000, -0.25900000, -0.28600000};
    l_U534[16] = {-1.57000000, 0.00000000, 0.00000000};
    l_U869[16] = {0.00000000, -0.53800000, 0.00000000};
    l_U936[16] = {-0.21400000, 0.00000000, 0.00000000};
    l_U467[17] = {-0.58000000, 0.22500000, 0.12500000};
    l_U534[17] = {1.57000000, -2.29100000, -1.58000000};
    l_U869[17] = {0.00000000, -0.53800000, 0.00000000};
    l_U936[17] = {-0.21400000, 0.00000000, 0.00000000};
    l_U467[18] = {0.08000000, 0.29100000, -0.03700000};
    l_U534[18] = {0.00000000, -1.01500000, 1.57000000};
    l_U869[18] = {0.00000000, -0.53800000, 0.00000000};
    l_U936[18] = {-0.21400000, 0.00000000, 0.00000000};
    l_U467[19] = {0.29100000, 0.27000000, 0.00600000};
    l_U534[19] = {0.00000000, -1.01500000, 1.57000000};
    l_U869[19] = {0.00000000, -0.53800000, 0.00000000};
    l_U936[19] = {-0.21400000, 0.00000000, 0.00000000};
    l_U467[20] = {0.08000000, 0.29100000, -0.03700000};
    l_U534[20] = {0.00000000, -1.01500000, 1.57000000};
    l_U869[20] = {0.00000000, -0.53800000, 0.00000000};
    l_U936[20] = {-0.21400000, 0.00000000, 0.00000000};
    l_U467[21] = {-0.75700000, -0.32400000, -0.00900000};
    l_U534[21] = {0.27500000, 0.02800000, 1.59400000};
    l_U869[21] = {0.00000000, -0.53800000, 0.00000000};
    l_U936[21] = {-0.21400000, 0.00000000, 0.00000000};
    for ( I = 0; I < 22; I++ )
    {
        l_U1070[I] = {(l_U467[I] + l_U869[I]) / 2.00000000};
        l_U1003[I] = {(l_U534[I] + l_U936[I]) / 2.00000000};
    }
    g_U11168[0] = 1;
    g_U11168[1] = 1;
    g_U11168[2] = 1;
    g_U11168[3] = 1;
    g_U11168[4] = 1;
    g_U11168[5] = 1;
    g_U11168[6] = 1;
    g_U11168[7] = 1;
    g_U11168[8] = 1;
    g_U11168[9] = 1;
    g_U11168[10] = 1;
    g_U11168[11] = g_U15811[55];
    g_U11168[10] = 1;
    g_U11168[12] = g_U15811[56];
    g_U11168[13] = g_U15811[57];
    g_U11168[14] = g_U15811[58];
    g_U11168[15] = g_U15811[59];
    g_U11168[16] = g_U15811[60];
    g_U11168[17] = g_U15811[61];
    g_U11168[18] = g_U15811[63];
    g_U11168[19] = g_U15811[62];
    g_U11168[20] = g_U15811[64];
    g_U11168[21] = g_U15811[65];
    for ( I = 0; I < 22; I++ )
    {
        l_U261[I] = g_U11168[I];
    }
    l_U366 = sub_6073();
    return;
}

int sub_6073()
{
    if (sub_6083( 0 ))
    {
        return 0;
    }
    else if (sub_6083( 5 ))
    {
        return 5;
    }
    else if (sub_6083( 1 ))
    {
        return 1;
    }
    else if (sub_6083( 2 ))
    {
        return 2;
    }
    else if (sub_6083( 3 ))
    {
        return 3;
    }
    else if (sub_6083( 4 ))
    {
        return 4;
    }
    else if (sub_6083( 7 ))
    {
        return 7;
    }
    else if (sub_6083( 8 ))
    {
        return 8;
    }
    else if (sub_6083( 6 ))
    {
        return 6;
    }
    else if (sub_6083( 9 ))
    {
        return 9;
    }
    else if (sub_6083( 10 ))
    {
        return 10;
    }
    else if (sub_6083( 11 ))
    {
        return 11;
    }
    else if (sub_6083( 12 ))
    {
        return 12;
    }
    else if (sub_6083( 13 ))
    {
        return 13;
    }
    else if (sub_6083( 14 ))
    {
        return 14;
    }
    else if (sub_6083( 15 ))
    {
        return 15;
    }
    else if (sub_6083( 16 ))
    {
        return 16;
    }
    else if (sub_6083( 17 ))
    {
        return 17;
    }
    else if (sub_6083( 18 ))
    {
        return 18;
    }
    else if (sub_6083( 19 ))
    {
        return 19;
    }
    else if (sub_6083( 20 ))
    {
        return 20;
    }
    else if (sub_6083( 21 ))
    {
        return 21;
    };;;;;;;;;;;;;;;;;;;;;;
    return 0;
}

int sub_6083(unknown uParam0)
{
    if ((l_U261[uParam0]) AND (g_U11168[uParam0]))
    {
        return 1;
    }
    return 0;
}

void sub_6587(int iParam0)
{
    if (NOT l_U87)
    {
        sub_6607();
    }
    if (NOT (iParam0 == -1))
    {
        g_U43645 = iParam0;
    }
    else if ((g_U6) || (g_U7))
    {
        g_U43645 = 7;
    }
    else if (NOT sub_7469())
    {
        g_U43645 = 0;
    };;;
    if ((g_U43645 < 0) || (g_U43645 >= 21))
    {
        g_U43645 = 0;
    }
    return l_U2[g_U43645];
}

void sub_6607()
{
    l_U2[0]._fU0 = {981.24620000, 677.71870000, 25.16520000};
    l_U2[0]._fU12 = 87.58470000;
    l_U2[1]._fU0 = {1193.90000000, 403.70000000, 23.67900000};
    l_U2[1]._fU12 = 180.00000000;
    l_U2[2]._fU0 = {1790.69900000, 524.48700000, 28.38270000};
    l_U2[2]._fU12 = 270.00000000;
    l_U2[3]._fU0 = {805.50000000, 300.20000000, 5.69210000};
    l_U2[3]._fU12 = 274.61480000;
    l_U2[4]._fU0 = {1225.97300000, 33.00000000, 35.53100000};
    l_U2[4]._fU12 = 180.67800000;
    l_U2[5]._fU0 = {802.12500000, -292.07300000, 15.00000000};
    l_U2[5]._fU12 = 90.00000000;
    l_U2[6]._fU0 = {1348.87900000, -114.44550000, 22.69970000};
    l_U2[6]._fU12 = 181.00000000;
    l_U2[7]._fU0 = {-506.38070000, 912.21570000, 9.47690000};
    l_U2[7]._fU12 = 0.38190000;
    l_U2[8]._fU0 = {-414.51600000, 1400.21400000, 13.00000000};
    l_U2[8]._fU12 = 0.35210000;
    l_U2[9]._fU0 = {-425.25230000, -185.48700000, 10.13280000};
    l_U2[9]._fU12 = 3.02340000;
    l_U2[10]._fU0 = {442.95880000, 211.50000000, 8.32940000};
    l_U2[10]._fU12 = 269.28920000;
    l_U2[11]._fU0 = {941.47850000, 1815.17400000, 20.11440000};
    l_U2[11]._fU12 = 315.96110000;
    l_U2[12]._fU0 = {721.89440000, 1421.56900000, 13.28050000};
    l_U2[12]._fU12 = 270.55690000;
    l_U2[13]._fU0 = {661.19930000, 1003.47200000, 2.17850000};
    l_U2[13]._fU12 = 79.74240000;
    l_U2[14]._fU0 = {139.78970000, 989.38050000, 13.81190000};
    l_U2[14]._fU12 = 88.19730000;
    l_U2[15]._fU0 = {180.45650000, -251.98280000, 12.00170000};
    l_U2[15]._fU12 = 359.50900000;
    l_U2[16]._fU0 = {-1457.18400000, -473.49020000, 2.34640000};
    l_U2[16]._fU12 = 0.63190000;
    l_U2[17]._fU0 = {-1307.58700000, 194.70990000, 7.41500000};
    l_U2[17]._fU12 = 271.86490000;
    l_U2[18]._fU0 = {-1604.29800000, 581.67050000, 24.69900000};
    l_U2[18]._fU12 = 269.34070000;
    l_U2[19]._fU0 = {-1054.01000000, 923.32170000, 12.86440000};
    l_U2[19]._fU12 = 268.74620000;
    l_U2[20]._fU0 = {-1008.63300000, 1525.69100000, 22.44340000};
    l_U2[20]._fU12 = 54.87580000;
    l_U87 = 1;
    return;
}

int sub_7469()
{
    int I;
    int iVar3;
    int J;
    int iVar5;
    int[5] iVar6;
    float[5] fVar12;
    int iVar18;
    float fVar19;
    vector vVar20;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    int iVar26;

    if (NOT l_U87)
    {
        sub_6607();
    }
    array(ref iVar6, 5);
    array(ref fVar12, 5);
    if (IS_PLAYER_PLAYING( sub_691() ))
    {
        GET_CHAR_COORDINATES( sub_740(), ref vVar20.x, ref vVar20.y, ref vVar20.z );
        iVar26 = GET_MAP_AREA_FROM_COORDS( vVar20 );
    }
    else
    {
        return 0;
    }
    for ( I = 0; I < 5; I++ )
    {
        iVar6[I] = -1;
        fVar12[I] = 1E8;
    }
    iVar18 = -1;
    fVar19 = 1E8;
    for ( I = 0; I < 21; I++ )
    {
        if ((GET_MAP_AREA_FROM_COORDS( l_U2[I]._fU0 )) == iVar26)
        {
            if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( l_U2[I]._fU0._fU0, l_U2[I]._fU0._fU4, l_U2[I]._fU0._fU8, 5.00000000, 5.00000000, 5.00000000 )))
            {
                uVar23 = {l_U2[I]._fU0 - vVar20};
                for ( iVar3 = 0; iVar3 < 5; iVar3++ )
                {
                    if ((VMAG( uVar23 )) < fVar12[iVar3])
                    {
                        for ( J = 0; J < 5; J++ )
                        {
                            iVar5 = 5 - (J + 1);
                            if ((iVar5 > iVar3) AND (iVar5 > 0))
                            {
                                iVar6[iVar5] = iVar6[iVar5 - 1];
                                fVar12[iVar5] = fVar12[iVar5 - 1];
                            }
                        }
                        iVar6[iVar3] = I;
                        fVar12[iVar3] = VMAG( uVar23 );
                        iVar3 = 5;
                    }
                }
            }
        }
    }
    for ( I = 0; I < 5; I++ )
    {
        if (NOT (iVar6[I] == -1))
        {
            if (fVar12[I] > l_U0)
            {
                if (fVar12[I] < fVar19)
                {
                    iVar18 = iVar6[I];
                    fVar19 = fVar12[I];
                }
            }
        }
    }
    if (iVar18 == -1)
    {
        for ( I = 0; I < 5; I++ )
        {
            if (NOT (iVar6[I] == -1))
            {
                iVar18 = iVar6[I];
                fVar19 = fVar12[I];
            }
        }
    }
    if (NOT (iVar18 == -1))
    {
        g_U43645 = iVar18;
        return 1;
        break;
    }
    return 0;
}

void sub_8663()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (IS_VEH_DRIVEABLE( l_U1182 ))
    {
        GET_CAR_COORDINATES( l_U1182, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        if (NOT (DOES_OBJECT_EXIST( l_U456 )))
        {
            CREATE_OBJECT( -1256082323, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U456, 1 );
        }
        ATTACH_OBJECT_TO_CAR( l_U456, l_U1182, l_U363, l_U1137, l_U1140 );
        for ( I = 0; I < 22; I++ )
        {
            if (sub_6083( I ))
            {
                sub_8817( I );
            }
        }
        sub_9044();
        for ( I = 0; I < 22; I++ )
        {
            l_U601[I] = {l_U534[I]};
            l_U735[I] = {l_U467[I]};
        }
    }
    sub_9044();
    return;
}

void sub_8817(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if ((iParam0 != 20) AND (iParam0 != 3))
    {
        if (IS_VEH_DRIVEABLE( l_U1182 ))
        {
            GET_CAR_COORDINATES( l_U1182, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            if (NOT (DOES_OBJECT_EXIST( l_U433[iParam0] )))
            {
                CREATE_OBJECT( l_U410[iParam0], uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U433[iParam0], 1 );
            }
            SET_OBJECT_COLLISION( l_U433[iParam0], 0 );
            sub_8956( iParam0 );
            l_U386[iParam0] = 1;
        }
    }
    return;
}

void sub_8956(unknown uParam0)
{
    ATTACH_OBJECT_TO_OBJECT( l_U433[uParam0], l_U456, 0, l_U467[uParam0], l_U534[uParam0] );
    return;
}

void sub_9044()
{
    int I;

    for ( I = 0; I < 22; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U433[I] ))
        {
            SET_OBJECT_VISIBLE( l_U433[I], 0 );
        }
    }
    return;
}

void sub_9220()
{
    float fVar2;

    GET_FRAME_TIME( ref fVar2 );
    fVar2 *= 1000.00000000;
    l_U356 += fVar2;
    l_U357 += fVar2;
    l_U358 += fVar2;
    return;
}

int sub_9373(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (IS_PLAYER_PLAYING( sub_691() ))
    {
        if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0, uParam1, uParam2, uParam3 ))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_740(), uParam0, uParam1, 100.00000000, 100.00000000, 0 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_10401(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( sub_10412( uParam0 ), sub_2339( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    sub_10458( uParam0, (uParam1^) );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_10492( uParam0, (uParam1^) );
    return;
}

int sub_10412(unknown uParam0)
{
    return 25;
}

void sub_10458(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_10492(unknown uParam0, unknown uParam1)
{
    sub_10504( ref uParam1, uParam0 );
    return;
}

void sub_10504(unknown uParam0, int iParam1)
{
    sub_10515( uParam0 );
    if (iParam1 == 37)
    {
        sub_10617( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_11201( (uParam0^), iParam1, g_U42825[iParam1] );
    }
    return;
}

void sub_10515(unknown uParam0)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    return;
}

void sub_10617(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == iParam2)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, iParam2, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 2 )) == iParam3)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 2 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 2, iParam3, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 5 )) == iParam4)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 5 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 5, iParam4, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 4 )) == iParam5)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 4 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 4, iParam5, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 3 )) == iParam6)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 3 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 3, iParam6, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 7 )) == iParam7)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 7 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 7, iParam7, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 8 )) == 0)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 8 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 8, 0, 0 );
        }
        iVar12 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar12 );
        if (NOT (iVar12 == iParam8))
        {
            if (iParam8 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 0 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 0, iParam8 );
            }
        }
        iVar13 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 1, ref iVar13 );
        if (NOT (iVar13 == iParam9))
        {
            if (iParam9 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 1 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 1, iParam9 );
            }
        }
    }
    return;
}

void sub_11201(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        sub_10617( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
        case 1:
        sub_10617( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, 0 );
        return;
        case 31:
        sub_10617( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
        return;
        case 7:
        sub_10617( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_10617( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_11597(int iParam0)
{
    if (NOT (l_U361 == iParam0))
    {
        l_U295 = 1;
        l_U260 = 0;
        l_U361 = iParam0;
    }
    return;
}

int sub_11676()
{
    if (NOT (IS_PLAYER_CONTROL_ON( sub_691() )))
    {
        if ((ARE_WIDESCREEN_BORDERS_ACTIVE()) AND (sub_11710()))
        {
            return 1;
        }
        if (HAS_CUTSCENE_LOADED())
        {
            if (NOT HAS_CUTSCENE_FINISHED())
            {
                return 1;
            }
        }
        if (IS_SCREEN_FADED_OUT())
        {
            return 1;
        }
    }
    if (PLAYER_IS_INTERACTING_WITH_GARAGE())
    {
        return 1;
    }
    return 0;
}

int sub_11710()
{
    if ((COUNT_SCRIPT_CAMS_BY_TYPE_AND_OR_STATE( 6, 1, 1 )) > 0)
    {
        return 1;
    }
    return 0;
}

int sub_12687()
{
    if (NOT (IS_VEH_DRIVEABLE( l_U1182 )))
    {
        return 0;
    }
    else if (IS_CHAR_INJURED( l_U457 ))
    {
        return 0;
    }
    else if (IS_PED_RAGDOLL( l_U457 ))
    {
        return 0;
    }
    else if (IS_CHAR_ON_FIRE( l_U457 ))
    {
        return 0;
    }
    else if (NOT (LOCATE_CAR_2D( l_U1182, l_U325._fU0._fU0, l_U325._fU0._fU4, 2.00000000, 2.00000000, 0 )))
    {
        return 0;
    }
    else
    {
        return 1;
    };;;;;
    return 1;
}

void sub_12905()
{
    return sub_12916( 0, 0 );
}

int sub_12916(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U95._fU104 = 1;
    }
    if ((uParam1) AND (g_U560 != 9))
    {
        g_U95._fU100 = 1;
    }
    return 1;
}

int sub_13065(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_691() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_691() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_691() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9200)))
                {
                    if (NOT sub_13161())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_740() )) == nil)
                        {
                            if (g_U10534 <= iParam0)
                            {
                                if (g_U10535 == 0)
                                {
                                    if (sub_12905())
                                    {
                                        return 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_13161()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_13288(unknown uParam0, string sParam1, unknown uParam2)
{
    string sVar5;
    string sVar6;

    if (USING_STANDARD_CONTROLS())
    {
        sVar5 = "CNTBUT1";
        sVar6 = "CNTBUT2";
    }
    else
    {
        sVar5 = "CNTBUT2";
        sVar6 = "CNTBUT1";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (sub_13065( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U92)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_691(), 0 );
                l_U92 = 1;
            }
            g_U10534 = uParam0;
            l_U93 = 1;
            StrCopy( ref g_U10536, sParam1, 16 );
            g_U10540 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_13569();
                l_U91 = 1;
                g_U10535 = 6;
                if (NOT (IS_STRING_NULL( sParam1 )))
                {
                    if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))
                    {
                        CLEAR_HELP();
                    }
                }
                return 1;
            }
            else
            {
                g_U10535 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U90 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U90)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U90 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_13569()
{
    return sub_12916( 1, 1 );
}

void sub_13919()
{
    sub_13929( 0 );
    sub_13929( 2 );
    sub_13929( 1 );
    return;
}

void sub_13929(unknown uParam0)
{
    PRINTSTRING( "UNLOAD_CLUB_BEFORE_MOCAP - called for " );
    switch (uParam0)
    {
        case 2:
        PRINTSTRING( "HERCULES" );
        break;
        case 0:
        PRINTSTRING( "BAHAMA_MAMAS" );
        break;
        case 1:
        PRINTSTRING( "MAISONETTE 9" );
        break;
    }
    PRINTNL();
    g_U30120[uParam0] = 1;
    return;
}

void sub_14506()
{
    if (g_U43645 == 0)
    {
        l_U1158 = {-0.46000000, -3.60000000, 2.00000000};
        l_U1161 = {0.35000000, -3.62500000, 2.00000000};
    }
    if (g_U43645 == 1)
    {
        l_U1158 = {-0.55000000, -3.50000000, 2.00000000};
        l_U1161 = {0.36500000, -3.57500000, 2.00000000};
        l_U1152 = {-0.08100000, -4.32000000, 1.14400000};
        l_U1155 = {0.02900000, -0.31900000, -0.46900000};
        l_U352 = 32.00000000;
    }
    if (g_U43645 == 2)
    {
        l_U1158 = {-0.46000000, -3.60000000, 2.00000000};
        l_U1161 = {0.35000000, -3.62500000, 2.00000000};
    }
    if (g_U43645 == 3)
    {
        l_U1158 = {-0.46000000, -3.60000000, 2.00000000};
        l_U1161 = {0.35000000, -3.62500000, 2.00000000};
    }
    if (g_U43645 == 4)
    {
        l_U1158 = {-0.46000000, -3.60000000, 2.00000000};
        l_U1161 = {0.30000000, -3.62500000, 2.00000000};
    }
    if (g_U43645 == 5)
    {
        l_U1158 = {-0.35000000, -3.60000000, 2.00000000};
        l_U1161 = {0.50000000, -3.62500000, 2.00000000};
        l_U1152 = {-0.03500000, -4.32000000, 1.14400000};
        l_U1155 = {0.02900000, -0.31900000, -0.32600000};
        l_U352 = 32.00000000;
    }
    if (g_U43645 == 6)
    {
        l_U1158 = {-0.30000000, -3.60000000, 2.00000000};
        l_U1161 = {0.50000000, -3.62500000, 2.00000000};
        l_U1152 = {-0.03500000, -4.32000000, 1.14400000};
        l_U1155 = {0.02900000, -0.31900000, -0.32600000};
        l_U352 = 32.00000000;
    }
    if (g_U43645 == 7)
    {
        l_U1158 = {-0.41000000, -3.60000000, 2.00000000};
        l_U1161 = {0.36000000, -3.62500000, 2.00000000};
        l_U1152 = {0.07200000, -4.32800000, 1.18400000};
        l_U1155 = {-0.08500000, -0.31900000, -0.50200000};
        l_U352 = 31.52000000;
    }
    if (g_U43645 == 8)
    {
        l_U1158 = {-0.44000000, -3.60000000, 2.00000000};
        l_U1161 = {0.36000000, -3.67500000, 2.00000000};
        l_U1152 = {0.03000000, -4.32300000, 1.14400000};
        l_U1155 = {-0.01100000, -0.31900000, -0.32600000};
        l_U352 = 32.00000000;
    }
    if (g_U43645 == 9)
    {
        l_U1158 = {-0.33000000, -3.60000000, 2.00000000};
        l_U1161 = {0.34000000, -3.62500000, 2.00000000};
    }
    if (g_U43645 == 10)
    {
        l_U1158 = {-0.48000000, -3.60000000, 2.00000000};
        l_U1161 = {0.29000000, -3.62500000, 2.00000000};
    }
    if (g_U43645 == 11)
    {
        l_U1158 = {-0.46000000, -3.60000000, 2.00000000};
        l_U1161 = {0.35000000, -3.62500000, 2.00000000};
    }
    if (g_U43645 == 12)
    {
        l_U1158 = {-0.45000000, -3.60000000, 2.00000000};
        l_U1161 = {0.35000000, -3.62500000, 2.00000000};
    }
    if (g_U43645 == 13)
    {
        l_U1158 = {-0.46000000, -3.60000000, 2.00000000};
        l_U1161 = {0.35000000, -3.62500000, 2.00000000};
    }
    if (g_U43645 == 14)
    {
        l_U1158 = {-0.46000000, -3.60000000, 2.00000000};
        l_U1161 = {0.35000000, -3.62500000, 2.00000000};
    }
    if (g_U43645 == 15)
    {
        l_U1158 = {-0.58000000, -3.60000000, 2.00000000};
        l_U1161 = {0.31000000, -3.62500000, 2.00000000};
    }
    if (g_U43645 == 16)
    {
        l_U1158 = {-0.46000000, -3.60000000, 2.00000000};
        l_U1161 = {0.35000000, -3.62500000, 2.00000000};
    }
    if (g_U43645 == 17)
    {
        l_U1158 = {-0.51000000, -3.60000000, 2.00000000};
        l_U1161 = {0.28000000, -3.62500000, 2.00000000};
    }
    if (g_U43645 == 18)
    {
        l_U1158 = {-0.46000000, -3.60000000, 2.00000000};
        l_U1161 = {0.35000000, -3.62500000, 2.00000000};
    }
    if (g_U43645 == 19)
    {
        l_U1158 = {-0.48000000, -3.60000000, 2.00000000};
        l_U1161 = {0.31000000, -3.62500000, 2.00000000};
    }
    if (g_U43645 == 20)
    {
        l_U1158 = {-0.46000000, -3.60000000, 2.00000000};
        l_U1161 = {0.35000000, -3.62500000, 2.00000000};
    }
    if (g_U43645 == 21)
    {
        l_U1158 = {-0.46000000, -3.60000000, 2.00000000};
        l_U1161 = {0.35000000, -3.62500000, 2.00000000};
    }
    if (g_U43645 == 22)
    {
        l_U1158 = {-0.46000000, -3.60000000, 2.00000000};
        l_U1161 = {0.35000000, -3.62500000, 2.00000000};
    }
    return;
}

void sub_16694()
{
    int I;

    for ( I = 0; I < 22; I++ )
    {
        REQUEST_MODEL( l_U410[I] );
    }
    while (((((((((((((((((((((((NOT (HAS_MODEL_LOADED( l_U410[0] ))) || (NOT (HAS_MODEL_LOADED( l_U410[1] )))) || (NOT (HAS_MODEL_LOADED( l_U410[2] )))) || (NOT (HAS_MODEL_LOADED( l_U410[3] )))) || (NOT (HAS_MODEL_LOADED( l_U410[4] )))) || (NOT (HAS_MODEL_LOADED( l_U410[5] )))) || (NOT (HAS_MODEL_LOADED( l_U410[6] )))) || (NOT (HAS_MODEL_LOADED( l_U410[8] )))) || (NOT (HAS_MODEL_LOADED( l_U410[9] )))) || (NOT (HAS_MODEL_LOADED( l_U410[7] )))) || (NOT (HAS_MODEL_LOADED( l_U410[10] )))) || (NOT (HAS_MODEL_LOADED( l_U410[11] )))) || (NOT (HAS_MODEL_LOADED( l_U410[12] )))) || (NOT (HAS_MODEL_LOADED( l_U410[13] )))) || (NOT (HAS_MODEL_LOADED( l_U410[14] )))) || (NOT (HAS_MODEL_LOADED( l_U410[15] )))) || (NOT (HAS_MODEL_LOADED( l_U410[16] )))) || (NOT (HAS_MODEL_LOADED( l_U410[17] )))) || (NOT (HAS_MODEL_LOADED( l_U410[18] )))) || (NOT (HAS_MODEL_LOADED( l_U410[19] )))) || (NOT (HAS_MODEL_LOADED( l_U410[20] )))) || (NOT (HAS_MODEL_LOADED( l_U410[21] )))) || (NOT (HAS_MODEL_LOADED( 781982585 ))))
    {
        WAIT( 0 );
    }
    return;
}

void sub_17747()
{
    int I;

    for ( I = 0; I < 22; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U433[I] ))
        {
            SET_OBJECT_VISIBLE( l_U433[I], 1 );
        }
    }
    return;
}

void sub_17875(unknown uParam0, unknown uParam1)
{
    switch (g_U43645)
    {
        case 0:
        (uParam0^) = {970.80210000, 668.16120000, 25.02470000};
        (uParam1^) = 0.99880000;
        break;
        case 1:
        (uParam0^) = {1203.07300000, 392.07280000, 21.71800000};
        (uParam1^) = 90.16410000;
        break;
        case 2:
        (uParam0^) = {1804.00700000, 532.73410000, 27.63010000};
        (uParam1^) = 179.76700000;
        break;
        case 3:
        (uParam0^) = {821.19220000, 312.32260000, 4.76140000};
        (uParam1^) = 183.95940000;
        break;
        case 4:
        (uParam0^) = {1234.01000000, 22.92430000, 34.82580000};
        (uParam1^) = 86.96900000;
        break;
        case 5:
        (uParam0^) = {780.24460000, -298.45810000, 12.67650000};
        (uParam1^) = 330.17000000;
        break;
        case 6:
        (uParam0^) = {1355.16200000, -137.54990000, 21.55410000};
        (uParam1^) = 93.01810000;
        break;
        case 7:
        (uParam0^) = {-514.22280000, 928.72960000, 8.82900000};
        (uParam1^) = 269.26660000;
        break;
        case 8:
        (uParam0^) = {-407.46880000, 1414.62900000, 11.36570000};
        (uParam1^) = 89.33140000;
        break;
        case 9:
        (uParam0^) = {-437.43400000, -168.73870000, 9.01730000};
        (uParam1^) = 268.30150000;
        break;
        case 10:
        (uParam0^) = {464.28290000, 204.91090000, 7.59600000};
        (uParam1^) = 357.84070000;
        break;
        case 11:
        (uParam0^) = {963.02530000, 1845.98900000, 20.86240000};
        (uParam1^) = 177.77260000;
        break;
        case 12:
        (uParam0^) = {735.41320000, 1429.20700000, 13.24840000};
        (uParam1^) = 178.10590000;
        break;
        case 13:
        (uParam0^) = {655.25990000, 994.21520000, 1.92710000};
        (uParam1^) = 61.58810000;
        break;
        case 14:
        (uParam0^) = {132.27410000, 978.43620000, 13.56270000};
        (uParam1^) = 15.24320000;
        break;
        case 15:
        (uParam0^) = {186.59590000, -238.89250000, 10.61700000};
        (uParam1^) = 89.48030000;
        break;
        case 16:
        (uParam0^) = {-1466.92200000, -457.71330000, 1.93410000};
        (uParam1^) = 269.45970000;
        break;
        case 17:
        (uParam0^) = {-1292.30600000, 204.24240000, 7.66750000};
        (uParam1^) = 178.56490000;
        break;
        case 18:
        (uParam0^) = {-1589.63100000, 590.20750000, 24.32560000};
        (uParam1^) = 180.34580000;
        break;
        case 19:
        (uParam0^) = {-1034.47700000, 935.03470000, 12.56840000};
        (uParam1^) = 183.54430000;
        break;
        case 20:
        (uParam0^) = {-1033.85600000, 1526.04600000, 23.28970000};
        (uParam1^) = 324.69980000;
        break;
    }
    return;
}

void sub_18773(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    unknown uVar10;
    boolean bVar11;

    bVar11 = false;
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar10 );
    if (DOES_VEHICLE_EXIST( uVar10 ))
    {
        if (NOT (IS_CAR_DEAD( uVar10 )))
        {
            if (NOT (IS_CHAR_SITTING_IN_CAR( sub_740(), uVar10 )))
            {
                if (NOT (IS_CAR_A_MISSION_CAR( uVar10 )))
                {
                    SET_CAR_AS_MISSION_CAR( uVar10 );
                    bVar11 = true;
                }
            }
            else
            {
                uVar10 = nil;
            }
        }
    }
    CLEAR_AREA_OF_CARS( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3 );
    if (DOES_VEHICLE_EXIST( uVar10 ))
    {
        if (NOT (IS_CAR_DEAD( uVar10 )))
        {
            if (LOCATE_CAR_3D( uVar10, uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3, uParam3, uParam3, 0 ))
            {
                CLEAR_AREA( uParam4._fU0, uParam4._fU4, uParam4._fU8, 5.00000000, 0 );
                SET_CAR_HEADING( uVar10, uParam7 );
                SET_CAR_COORDINATES( uVar10, uParam4._fU0, uParam4._fU4, uParam4._fU8 );
                sub_19035( uVar10 );
                SET_CAR_ON_GROUND_PROPERLY( uVar10 );
            }
        }
    }
    if (bVar11)
    {
        if (DOES_VEHICLE_EXIST( uVar10 ))
        {
            sub_19147( uVar10 );
        }
    }
    return;
}

void sub_19035(unknown uParam0)
{
    unknown uVar3;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_MODEL( uParam0, ref uVar3 );
        if ((IS_THIS_MODEL_A_CAR( uVar3 )) || (IS_THIS_MODEL_A_HELI( uVar3 )))
        {
            CLOSE_ALL_CAR_DOORS( uParam0 );
        }
    }
    return;
}

void sub_19147(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_21947()
{
    int iVar2;

    if (NOT (IS_CHAR_INJURED( sub_740() )))
    {
        sub_1674( l_U366, ref l_U1183 );
        GET_CURRENT_CHAR_WEAPON( sub_740(), ref iVar2 );
        if (NOT (iVar2 == l_U1183))
        {
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                DISPLAY_AMMO( 1 );
                SET_CURRENT_CHAR_WEAPON( sub_740(), l_U1183, 0 );
                PRINTSTRING( "UPDATE_PLAYERS_WEAPON - player set to new weapontype \n" );
                l_U1184 = l_U1183;
            }
            else if (NOT (iVar2 == 0))
            {
                SET_CURRENT_CHAR_WEAPON( sub_740(), 0, 1 );
                PRINTSTRING( "UPDATE_PLAYERS_WEAPON - player set to unarmed \n" );
            }
        }
        else if (NOT (iVar2 == 0))
        {
            l_U1184 = iVar2;
        }
    }
    return;
}

void sub_22338(unknown uParam0)
{
    sub_1674( uParam0, ref l_U1183 );
    if (NOT g_U11193)
    {
        switch (uParam0)
        {
            case 0:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T60", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T01", "" );
            }
            break;
            case 1:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T61", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T02", "" );
            }
            break;
            case 3:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T62", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T03", "" );
            }
            break;
            case 2:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T65", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T12", "" );
            }
            break;
            case 4:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T63", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T04", "" );
            }
            break;
            case 5:
            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T05", "" );
            break;
            case 6:
            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T06", "" );
            break;
            case 8:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T64", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T11", "" );
            }
            break;
            case 7:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T66", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T13", "" );
            }
            break;
            case 9:
            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T14", "" );
            break;
            case 10:
            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T68", "" );
            break;
            case 11:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T81", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T82", "" );
            }
            break;
            case 12:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T83", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T91", "" );
            }
            break;
            case 13:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T112_APRI", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T112_WPRI", "" );
            }
            break;
            case 14:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T113_APRI", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T113_WPRI", "" );
            }
            break;
            case 15:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T114_APRI", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T114_WPRI", "" );
            }
            break;
            case 16:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T115_APRI", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T115_WPRI", "" );
            }
            break;
            case 17:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T116_APRI", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T116_WPRI", "" );
            }
            break;
            case 18:
            if ((HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 )) AND (NOT g_U15811[64]))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E2GV_EXUN_APRI", "" );
                PRINTNL();
                PRINTSTRING( "******** Printing only standard help ********" );
                PRINTNL();
            }
            else if ((HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 )) AND (g_U15811[64]))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T117_APRI", "" );
                PRINTNL();
                PRINTSTRING( "******** Printing stan/expl ammo help ********" );
                PRINTNL();
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T117_WPRI", "" );
                PRINTNL();
                PRINTSTRING( "******** Printing stan/expl weap help ********" );
                PRINTNL();
            }
            break;
            case 19:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T118_APRI", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T118_WPRI", "" );
            }
            break;
            case 20:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T117_APRI", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T119_WPRI", "" );
            }
            break;
            case 21:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T119_WPRI", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T119_WPRI", "" );
            }
            break;
        }
    }
    else
    {
        switch (uParam0)
        {
            case 0:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T60_L", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T01_L", "" );
            }
            break;
            case 1:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T61_L", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T02_L", "" );
            }
            break;
            case 3:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T62_L", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T03_L", "" );
            }
            break;
            case 2:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T65_L", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T12_L", "" );
            }
            break;
            case 4:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T63_L", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T04_L", "" );
            }
            break;
            case 5:
            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T05_L", "" );
            break;
            case 6:
            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T06_L", "" );
            break;
            case 8:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T64_L", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T11_L", "" );
            }
            break;
            case 7:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T66_L", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T13_L", "" );
            }
            break;
            case 9:
            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T14_L", "" );
            break;
            case 10:
            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T68_L", "" );
            break;
            case 11:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T81_L", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T82_L", "" );
            }
            break;
            case 12:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T81_L", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T82_L", "" );
            }
            break;
            case 13:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T81_L", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T82_L", "" );
            }
            break;
            case 14:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T81_L", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T82_L", "" );
            }
            break;
            case 15:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T81_L", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T82_L", "" );
            }
            break;
            case 16:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T81_L", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T82_L", "" );
            }
            break;
            case 17:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T81_L", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T82_L", "" );
            }
            break;
            case 18:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T81_L", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T82_L", "" );
            }
            break;
            case 19:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T81_L", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T82_L", "" );
            }
            break;
            case 20:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T81_L", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T82_L", "" );
            }
            break;
            case 21:
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1183 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T81_L", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T82_L", "" );
            }
            break;
        }
    }
    return;
}

void sub_26108(unknown uParam0)
{
    int iVar3;

    if (l_U367 >= 9999)
    {
        if (NOT g_U11193)
        {
            PRINT_HELP_FOREVER( "E1GV_T80" );
        }
        else
        {
            PRINT_HELP_FOREVER( "E1GV_T80_L" );
        }
        DISPLAY_AMMO( 1 );
    }
    else
    {
        iVar3 = l_U367 * (sub_26208( l_U1183 ));
        sub_1674( uParam0, ref l_U1183 );
        if (iVar3 > (sub_26485( l_U1183 )))
        {
            iVar3 = sub_26485( l_U1183 );
        }
        if (NOT g_U11193)
        {
            switch (uParam0)
            {
                case 0:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T30" );
                }
                else if (l_U367 > 0)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T31", iVar3 );
                }
                break;
                case 1:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T32" );
                }
                else if (l_U367 > 0)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T33", iVar3 );
                }
                break;
                case 2:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T42" );
                }
                else if (l_U367 > 0)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T43", iVar3 );
                }
                break;
                case 3:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T34" );
                }
                else if (l_U367 > 0)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T35", iVar3 );
                }
                break;
                case 4:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T36" );
                }
                else if (l_U367 > 0)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T37", iVar3 );
                }
                break;
                case 5:
                if (l_U367 == 1)
                {
                    PRINT_HELP_FOREVER( "E1GV_T38" );
                }
                else if (l_U367 > 1)
                {
                    PRINT_HELP_FOREVER( "E1GV_T47" );
                }
                break;
                case 6:
                if (l_U367 == 1)
                {
                    PRINT_HELP_FOREVER( "E1GV_T39" );
                }
                else if (l_U367 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T49", iVar3 );
                }
                break;
                case 7:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T44" );
                }
                else if (l_U367 > 0)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T45", iVar3 );
                }
                break;
                case 8:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T40" );
                }
                else if (l_U367 > 0)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T41", iVar3 );
                }
                break;
                case 9:
                if (l_U367 == 1)
                {
                    PRINT_HELP_FOREVER( "E1GV_T46" );
                }
                else if (l_U367 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T48", iVar3 );
                }
                break;
                case 10:
                if (l_U367 == 1)
                {
                    PRINT_HELP_FOREVER( "E1GV_T67" );
                }
                else if (l_U367 > 1)
                {
                    PRINT_HELP_FOREVER( "E1GV_T69" );
                }
                break;
                case 11:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T94" );
                }
                else if (l_U367 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T95", iVar3 );
                }
                break;
                case 12:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T104" );
                }
                else if (l_U367 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T112_AMM", iVar3 );
                }
                break;
                case 13:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T112_PUR" );
                }
                else if (l_U367 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T113_AMM", iVar3 );
                }
                break;
                case 14:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T113_PUR" );
                }
                else if (l_U367 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T114_AMM", iVar3 );
                }
                break;
                case 15:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T114_PUR" );
                }
                else if (l_U367 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T115_AMM", iVar3 );
                }
                break;
                case 16:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T115_PUR" );
                }
                else if (l_U367 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T116_AMM", iVar3 );
                }
                break;
                case 17:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T116_PUR" );
                }
                else if (l_U367 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T117_AMM", iVar3 );
                }
                break;
                case 18:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T117_PUR" );
                }
                else if (l_U367 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T118_AMM", iVar3 );
                }
                break;
                case 19:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T118_PUR" );
                }
                else if (l_U367 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T119_AMM", iVar3 );
                }
                break;
                case 20:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T94" );
                }
                else if (l_U367 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T121_AMM", iVar3 );
                }
                break;
                case 21:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T119_PUR" );
                }
                else if (l_U367 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T120_GOT", iVar3 );
                }
                break;
            }
        }
        else
        {
            switch (uParam0)
            {
                case 0:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T30_L" );
                }
                else if (l_U367 > 0)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T31_L", iVar3 );
                }
                break;
                case 1:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T32_L" );
                }
                else if (l_U367 > 0)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T33_L", iVar3 );
                }
                break;
                case 2:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T42_L" );
                }
                else if (l_U367 > 0)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T43_L", iVar3 );
                }
                break;
                case 3:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T34_L" );
                }
                else if (l_U367 > 0)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T35_L", iVar3 );
                }
                break;
                case 4:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T36_L" );
                }
                else if (l_U367 > 0)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T37_L", iVar3 );
                }
                break;
                case 5:
                if (l_U367 == 1)
                {
                    PRINT_HELP_FOREVER( "E1GV_T38_L" );
                }
                else if (l_U367 > 1)
                {
                    PRINT_HELP_FOREVER( "E1GV_T47_L" );
                }
                break;
                case 6:
                if (l_U367 == 1)
                {
                    PRINT_HELP_FOREVER( "E1GV_T39_L" );
                }
                else if (l_U367 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T49_L", iVar3 );
                }
                break;
                case 7:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T44_L" );
                }
                else if (l_U367 > 0)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T45_L", iVar3 );
                }
                break;
                case 8:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T40_L" );
                }
                else if (l_U367 > 0)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T41_L", iVar3 );
                }
                break;
                case 9:
                if (l_U367 == 1)
                {
                    PRINT_HELP_FOREVER( "E1GV_T46_L" );
                }
                else if (l_U367 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T48_L", iVar3 );
                }
                break;
                case 10:
                if (l_U367 == 1)
                {
                    PRINT_HELP_FOREVER( "E1GV_T67_L" );
                }
                else if (l_U367 > 1)
                {
                    PRINT_HELP_FOREVER( "E1GV_T69_L" );
                }
                break;
                case 11:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T94_L" );
                }
                else if (l_U367 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T95_L", iVar3 );
                }
                break;
                case 12:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T94_L" );
                }
                else if (l_U367 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T95_L", iVar3 );
                }
                break;
                case 13:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T94_L" );
                }
                else if (l_U367 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T95_L", iVar3 );
                }
                break;
                case 14:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T94_L" );
                }
                else if (l_U367 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T95_L", iVar3 );
                }
                break;
                case 15:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T94_L" );
                }
                else if (l_U367 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T95_L", iVar3 );
                }
                break;
                case 16:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T94_L" );
                }
                else if (l_U367 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T95_L", iVar3 );
                }
                break;
                case 17:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T94_L" );
                }
                else if (l_U367 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T95_L", iVar3 );
                }
                break;
                case 18:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T94_L" );
                }
                else if (l_U367 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T95_L", iVar3 );
                }
                break;
                case 19:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T94_L" );
                }
                else if (l_U367 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T95_L", iVar3 );
                }
                break;
                case 20:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T94_L" );
                }
                else if (l_U367 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T95_L", iVar3 );
                }
                break;
                case 21:
                if ((l_U367 == 1) AND (NOT l_U286))
                {
                    PRINT_HELP_FOREVER( "E1GV_T94_L" );
                }
                else if (l_U367 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T95_L", iVar3 );
                }
                break;
            }
        }
    }
    return;
}

void sub_26208(unknown uParam0)
{
    int Result;

    switch (uParam0)
    {
        case 4:
        case 5:
        case 28:
        case 18:
        case 21:
        case 36:
        Result = 1;
        break;
        case 7:
        case 10:
        case 11:
        case 12:
        case 13:
        case 15:
        case 14:
        case 16:
        case 22:
        case 26:
        case 27:
        case 29:
        case 33:
        case 35:
        case 32:
        case 31:
        case 34:
        case 30:
        GET_MAX_AMMO_IN_CLIP( sub_740(), uParam0, ref Result );
        break;
        default:
        Result = 0;
        break;
    }
    return Result;
}

void sub_26485(unknown uParam0)
{
    unknown Result;

    GET_MAX_AMMO( sub_740(), uParam0, ref Result );
    return Result;
}

void sub_31649(int iParam0)
{
    vector vVar3;
    vector vVar6;
    vector vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;

    if (DOES_OBJECT_EXIST( l_U433[iParam0] ))
    {
        if (IS_OBJECT_ATTACHED( l_U433[iParam0] ))
        {
            if (NOT (l_U409 == iParam0))
            {
                if (l_U386[iParam0] == 0)
                {
                    l_U735[iParam0] = {l_U467[iParam0]};
                    l_U802[iParam0] = {l_U1070[iParam0]};
                    l_U601[iParam0] = {l_U534[iParam0]};
                    l_U668[iParam0] = {l_U1003[iParam0]};
                    l_U386[iParam0]++;
                }
                if (l_U386[iParam0] == 1)
                {
                    vVar3 = {l_U869[iParam0] - l_U802[iParam0]};
                    vVar3 = {vVar3 * l_U329};
                    l_U802[iParam0] = {l_U802[iParam0] + vVar3};
                    vVar3 = {l_U936[iParam0] - l_U668[iParam0]};
                    vVar3 = {vVar3 * l_U330};
                    l_U668[iParam0] = {l_U668[iParam0] + vVar3};
                    vVar6 = {l_U802[iParam0] - l_U735[iParam0]};
                    vVar9 = {l_U668[iParam0] - l_U601[iParam0]};
                    if ((VMAG( vVar6 )) > 0.00100000)
                    {
                        vVar6 = {vVar6 * l_U329};
                        l_U735[iParam0] = {l_U735[iParam0] + vVar6};
                    }
                    else
                    {
                        l_U1149 = {0.00000000, 0.00000000, 0.00000000};
                        l_U259 = 1;
                    }
                    if ((VMAG( vVar9 )) > 0.00100000)
                    {
                        vVar9 = {vVar9 * l_U330};
                        l_U601[iParam0] = {l_U601[iParam0] + vVar9};
                    }
                }
                if (l_U258)
                {
                    sub_32181( iParam0 );
                    l_U735[iParam0] = {l_U735[iParam0] + l_U1149};
                }
            }
            else
            {
                l_U735[iParam0] = {l_U1070[iParam0]};
                l_U601[iParam0] = {l_U1003[iParam0]};
            }
            DETACH_OBJECT( l_U433[iParam0], 1 );
            ATTACH_OBJECT_TO_OBJECT( l_U433[iParam0], l_U456, 0, l_U735[iParam0], l_U601[iParam0] );
            l_U299[iParam0] = 1;
        }
    }
    return;
}

void sub_32181(unknown uParam0)
{
    vector vVar3;

    vVar3 = {l_U1143};
    if (l_U259)
    {
        l_U350 += (1.00000000 - l_U350) * l_U348;
    }
    else
    {
        l_U350 -= (1.00000000 - l_U350) * l_U348;
    }
    if (l_U350 > (1.00000000 - l_U349))
    {
        l_U350 = 1.00000000 - l_U349;
        l_U259 = 0;
    }
    if (l_U350 < l_U349)
    {
        l_U350 = l_U349;
        l_U259 = 1;
    }
    l_U1149 = {vVar3 * l_U350};
    return;
}

void sub_32654(int iParam0)
{
    vector vVar3;
    vector vVar6;
    vector vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;

    if (DOES_OBJECT_EXIST( l_U433[iParam0] ))
    {
        if (IS_OBJECT_ATTACHED( l_U433[iParam0] ))
        {
            if (l_U299[iParam0])
            {
                if (NOT (l_U409 == iParam0))
                {
                    if (l_U386[iParam0] == 0)
                    {
                        l_U735[iParam0] = {l_U869[iParam0]};
                        l_U802[iParam0] = {l_U1070[iParam0]};
                        l_U601[iParam0] = {l_U936[iParam0]};
                        l_U668[iParam0] = {l_U1003[iParam0]};
                        l_U386[iParam0]++;
                    }
                    if (l_U386[iParam0] == 1)
                    {
                        vVar3 = {l_U467[iParam0] - l_U802[iParam0]};
                        vVar3 = {vVar3 * l_U329};
                        l_U802[iParam0] = {l_U802[iParam0] + vVar3};
                        vVar3 = {l_U534[iParam0] - l_U668[iParam0]};
                        vVar3 = {vVar3 * l_U330};
                        l_U668[iParam0] = {l_U668[iParam0] + vVar3};
                        vVar6 = {l_U802[iParam0] - l_U735[iParam0]};
                        vVar9 = {l_U668[iParam0] - l_U601[iParam0]};
                        if ((VMAG( vVar6 )) > 0.00100000)
                        {
                            vVar6 = {vVar6 * l_U329};
                            l_U735[iParam0] = {l_U735[iParam0] + vVar6};
                        }
                        if ((VMAG( vVar9 )) > 0.00100000)
                        {
                            vVar9 = {vVar9 * l_U330};
                            l_U601[iParam0] = {l_U601[iParam0] + vVar9};
                        }
                    }
                }
                else
                {
                    l_U735[iParam0] = {l_U1070[iParam0]};
                    l_U601[iParam0] = {l_U1003[iParam0]};
                }
                DETACH_OBJECT( l_U433[iParam0], 1 );
                ATTACH_OBJECT_TO_OBJECT( l_U433[iParam0], l_U456, 0, l_U735[iParam0], l_U601[iParam0] );
            }
        }
    }
    return;
}

int sub_33365(unknown uParam0)
{
    int iVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar3, ref iVar4, ref uVar5, ref uVar6 );
    if ((iVar3 == 0) AND (iVar4 == 0))
    {
        GET_KEYBOARD_MOVE_INPUT( ref iVar3, ref iVar4 );
    }
    if ((iVar3 > 32) || ((uParam0) AND (IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 0 ))))
    {
        return 1;
    }
    return 0;
}

int sub_33447(unknown uParam0)
{
    int iVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar3, ref iVar4, ref uVar5, ref uVar6 );
    if ((iVar3 == 0) AND (iVar4 == 0))
    {
        GET_KEYBOARD_MOVE_INPUT( ref iVar3, ref iVar4 );
    }
    if ((iVar3 < 65504) || ((uParam0) AND (IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 0 ))))
    {
        return 1;
    }
    return 0;
}

int sub_33530(unknown uParam0)
{
    int iVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar3, ref iVar4, ref uVar5, ref uVar6 );
    if ((iVar3 == 0) AND (iVar4 == 0))
    {
        GET_KEYBOARD_MOVE_INPUT( ref iVar3, ref iVar4 );
    }
    if ((iVar4 < 65504) || ((uParam0) AND (IS_GAME_KEYBOARD_NAV_UP_PRESSED( 0 ))))
    {
        return 1;
    }
    return 0;
}

int sub_33613(unknown uParam0)
{
    int iVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar3, ref iVar4, ref uVar5, ref uVar6 );
    if ((iVar3 == 0) AND (iVar4 == 0))
    {
        GET_KEYBOARD_MOVE_INPUT( ref iVar3, ref iVar4 );
    }
    if ((iVar4 > 32) || ((uParam0) AND (IS_GAME_KEYBOARD_NAV_DOWN_PRESSED( 0 ))))
    {
        return 1;
    }
    return 0;
}

void sub_33875(unknown uParam0)
{
    int iVar3;

    if (l_U367 > 0)
    {
        if (l_U284)
        {
            l_U261[l_U366] = 0;
        }
        l_U367 = 0;
    }
    l_U289 = 0;
    l_U287 = 0;
    iVar3 = l_U366;
    l_U366 = sub_33951( l_U366, uParam0 );
    if (NOT (iVar3 == l_U366))
    {
        l_U386[l_U366] = 0;
        l_U386[iVar3] = 0;
    }
    if (NOT (IS_CHAR_INJURED( sub_740() )))
    {
        GET_SCRIPT_TASK_STATUS( sub_740(), 80, ref l_U459 );
        if (l_U459 == 7)
        {
            ;
        }
    }
    if (DOES_OBJECT_EXIST( l_U433[l_U366] ))
    {
        PLAY_AUDIO_EVENT_FROM_OBJECT( "JACOB_GUN_CAR_SELECT_WEAPON", l_U433[l_U366] );
    }
    return;
}

void sub_33951(unknown uParam0, unknown uParam1)
{
    int Result;

    Result = uParam0;
    switch (uParam0)
    {
        case 0:
        switch (uParam1)
        {
            case 0:
            l_U368[0] = 17;
            l_U368[1] = 4;
            l_U375 = 2;
            break;
            case 1:
            l_U368[0] = 11;
            l_U368[1] = 5;
            l_U375 = 2;
            break;
            case 2:
            l_U368[0] = 13;
            l_U368[1] = 21;
            l_U375 = 2;
            break;
            case 3:
            l_U368[0] = 4;
            l_U368[1] = 6;
            l_U375 = 2;
            break;
        }
        break;
        case 1:
        switch (uParam1)
        {
            case 0:
            l_U368[0] = 18;
            l_U368[1] = 20;
            l_U368[2] = 19;
            l_U368[3] = 15;
            l_U375 = 4;
            break;
            case 1:
            l_U368[0] = 12;
            l_U368[1] = 11;
            l_U368[2] = 16;
            l_U375 = 3;
            break;
            case 2:
            l_U368[0] = 6;
            l_U368[1] = 0;
            l_U375 = 2;
            break;
            case 3:
            l_U368[0] = 16;
            l_U368[1] = 2;
            l_U375 = 2;
            break;
        }
        break;
        case 2:
        switch (uParam1)
        {
            case 0:
            l_U368[0] = 14;
            l_U375 = 1;
            break;
            case 1:
            l_U368[0] = 16;
            l_U368[1] = 11;
            l_U375 = 2;
            break;
            case 2:
            l_U368[0] = 9;
            l_U368[1] = 19;
            l_U375 = 2;
            break;
            case 3:
            l_U368[0] = 10;
            l_U375 = 1;
            break;
        }
        break;
        case 4:
        switch (uParam1)
        {
            case 0:
            l_U375 = 0;
            break;
            case 1:
            l_U368[0] = 6;
            l_U368[1] = 12;
            l_U375 = 2;
            break;
            case 2:
            l_U368[0] = 17;
            l_U368[1] = 0;
            l_U375 = 2;
            break;
            case 3:
            l_U368[0] = 7;
            l_U368[1] = 8;
            l_U375 = 2;
            break;
        }
        break;
        case 5:
        switch (uParam1)
        {
            case 0:
            l_U368[0] = 11;
            l_U368[1] = 12;
            l_U375 = 1;
            break;
            case 1:
            l_U375 = 0;
            break;
            case 2:
            l_U368[0] = 11;
            l_U368[1] = 21;
            l_U375 = 2;
            break;
            case 3:
            l_U368[0] = 11;
            l_U368[1] = 10;
            l_U375 = 2;
            break;
        }
        break;
        case 6:
        switch (uParam1)
        {
            case 0:
            l_U368[1] = 7;
            l_U368[2] = 4;
            l_U375 = 2;
            break;
            case 1:
            l_U368[0] = 12;
            l_U368[1] = 11;
            l_U375 = 2;
            break;
            case 2:
            l_U368[0] = 0;
            l_U368[1] = 13;
            l_U368[2] = 21;
            l_U375 = 3;
            break;
            case 3:
            l_U368[0] = 1;
            l_U375 = 1;
            break;
        }
        break;
        case 7:
        switch (uParam1)
        {
            case 0:
            l_U375 = 0;
            break;
            case 1:
            l_U368[0] = 6;
            l_U375 = 1;
            break;
            case 2:
            l_U368[0] = 4;
            l_U368[1] = 17;
            l_U375 = 2;
            break;
            case 3:
            l_U368[0] = 8;
            l_U368[1] = 15;
            l_U375 = 2;
            break;
        }
        break;
        case 8:
        switch (uParam1)
        {
            case 0:
            l_U375 = 0;
            break;
            case 1:
            l_U368[0] = 1;
            l_U368[1] = 12;
            l_U375 = 2;
            break;
            case 2:
            l_U368[0] = 7;
            l_U368[1] = 4;
            l_U375 = 2;
            break;
            case 3:
            l_U368[0] = 15;
            l_U368[1] = 18;
            l_U368[2] = 20;
            l_U368[3] = 9;
            l_U375 = 4;
            break;
        }
        break;
        case 9:
        switch (uParam1)
        {
            case 0:
            l_U368[0] = 19;
            l_U375 = 1;
            break;
            case 1:
            l_U368[0] = 1;
            l_U375 = 1;
            break;
            case 2:
            l_U368[0] = 19;
            l_U368[1] = 18;
            l_U368[2] = 20;
            l_U368[3] = 15;
            l_U368[4] = 8;
            l_U375 = 2;
            break;
            case 3:
            l_U368[0] = 2;
            l_U375 = 1;
            break;
        }
        break;
        case 10:
        switch (uParam1)
        {
            case 0:
            l_U368[0] = 14;
            l_U375 = 1;
            break;
            case 1:
            l_U368[0] = 11;
            l_U375 = 1;
            break;
            case 2:
            l_U368[0] = 16;
            l_U368[1] = 2;
            l_U375 = 2;
            break;
            case 3:
            l_U375 = 0;
            break;
        }
        break;
        case 11:
        switch (uParam1)
        {
            case 0:
            l_U368[0] = 12;
            l_U368[1] = 1;
            l_U375 = 2;
            break;
            case 1:
            l_U368[0] = 5;
            l_U375 = 1;
            break;
            case 2:
            l_U368[0] = 21;
            l_U375 = 1;
            break;
            case 3:
            l_U368[0] = 16;
            l_U368[1] = 10;
            l_U375 = 2;
            break;
        }
        break;
        case 12:
        switch (uParam1)
        {
            case 0:
            l_U368[0] = 1;
            l_U368[1] = 15;
            l_U375 = 2;
            break;
            case 1:
            l_U368[0] = 11;
            l_U368[1] = 5;
            l_U375 = 2;
            break;
            case 2:
            l_U368[0] = 6;
            l_U368[1] = 21;
            l_U375 = 2;
            break;
            case 3:
            l_U368[0] = 16;
            l_U368[1] = 1;
            l_U375 = 2;
            break;
        }
        break;
        case 13:
        switch (uParam1)
        {
            case 0:
            l_U368[0] = 17;
            l_U375 = 1;
            break;
            case 1:
            l_U368[0] = 11;
            l_U368[1] = 5;
            l_U375 = 2;
            break;
            case 2:
            l_U368[0] = 21;
            l_U375 = 1;
            break;
            case 3:
            l_U368[0] = 0;
            l_U368[1] = 4;
            l_U375 = 2;
            break;
        }
        break;
        case 14:
        switch (uParam1)
        {
            case 0: break;
            case 1:
            l_U368[0] = 2;
            l_U375 = 1;
            break;
            case 2:
            l_U368[0] = 19;
            l_U368[0] = 9;
            l_U375 = 2;
            break;
            case 3:
            l_U375 = 0;
            break;
        }
        break;
        case 15:
        switch (uParam1)
        {
            case 0:
            l_U375 = 0;
            break;
            case 1:
            l_U368[0] = 1;
            l_U375 = 1;
            break;
            case 2:
            l_U368[0] = 8;
            l_U375 = 1;
            break;
            case 3:
            l_U368[0] = 18;
            l_U368[1] = 20;
            l_U368[2] = 19;
            l_U368[3] = 9;
            l_U375 = 4;
            break;
        }
        break;
        case 16:
        switch (uParam1)
        {
            case 0:
            l_U368[0] = 2;
            l_U375 = 1;
            break;
            case 1:
            l_U368[0] = 11;
            l_U375 = 1;
            break;
            case 2:
            l_U368[0] = 1;
            l_U375 = 1;
            break;
            case 3:
            l_U368[0] = 10;
            l_U375 = 1;
            break;
        }
        break;
        case 17:
        switch (uParam1)
        {
            case 0:
            l_U375 = 0;
            break;
            case 1:
            l_U368[0] = 13;
            l_U368[1] = 0;
            l_U375 = 2;
            break;
            case 2:
            l_U375 = 0;
            break;
            case 3:
            l_U368[0] = 4;
            l_U375 = 1;
            break;
        }
        break;
        case 18:
        case 20:
        switch (uParam1)
        {
            case 0:
            l_U375 = 0;
            break;
            case 1:
            l_U368[0] = 1;
            l_U375 = 1;
            break;
            case 2:
            l_U368[0] = 15;
            l_U368[1] = 8;
            l_U375 = 2;
            break;
            case 3:
            l_U368[0] = 19;
            l_U368[1] = 9;
            l_U375 = 1;
            break;
        }
        break;
        case 19:
        switch (uParam1)
        {
            case 0:
            l_U375 = 0;
            break;
            case 1:
            l_U368[0] = 9;
            l_U368[1] = 1;
            l_U375 = 2;
            break;
            case 2:
            l_U368[0] = 18;
            l_U368[1] = 20;
            l_U368[2] = 15;
            l_U368[3] = 8;
            l_U375 = 4;
            break;
            case 3:
            l_U368[0] = 14;
            l_U375 = 1;
            break;
        }
        break;
        case 21:
        switch (uParam1)
        {
            case 0:
            l_U368[0] = 17;
            l_U375 = 1;
            break;
            case 1:
            l_U368[0] = 11;
            l_U368[1] = 5;
            l_U375 = 2;
            break;
            case 2:
            l_U375 = 0;
            break;
            case 3:
            l_U368[0] = 13;
            l_U368[1] = 0;
            l_U375 = 2;
            break;
        }
        break;
    }
    Result = sub_37042();
    if (Result == -1)
    {
        Result = uParam0;
    }
    return Result;
}

int sub_37042()
{
    int I;

    for ( I = 0; I < 22; I++ )
    {
        if (sub_6083( l_U368[I] ))
        {
            if (NOT l_U291)
            {
                if (I > l_U375)
                {
                    return -1;
                }
            }
            return l_U368[I];
        }
    }
    return -1;
}

void sub_37704(unknown uParam0)
{
    int Result;

    switch (uParam0)
    {
        case 0:
        Result = 25;
        break;
        case 1:
        Result = 70;
        break;
        case 2:
        Result = 20;
        break;
        case 3:
        Result = 20;
        break;
        case 4:
        Result = 500;
        break;
        case 5:
        Result = 100;
        break;
        case 6:
        Result = 700;
        break;
        case 7:
        Result = 70;
        break;
        case 8:
        Result = 55;
        break;
        case 9:
        Result = 350;
        break;
        case 10:
        Result = 300;
        break;
        case 11:
        Result = 3500;
        break;
        case 12:
        Result = 1000;
        break;
        case 13:
        Result = 50;
        break;
        case 14:
        Result = 60;
        break;
        case 15:
        Result = 200;
        break;
        case 16:
        Result = 800;
        break;
        case 17:
        Result = 150;
        break;
        case 18:
        Result = 80;
        break;
        case 19:
        Result = 400;
        break;
        case 20:
        Result = 160;
        break;
        case 21:
        Result = 100;
        break;
    }
    return Result;
}

void sub_38137(unknown uParam0)
{
    int Result;

    switch (uParam0)
    {
        case 0:
        Result = 420;
        break;
        case 1:
        Result = 840;
        break;
        case 2:
        Result = 1750;
        break;
        case 3:
        Result = 840;
        break;
        case 4:
        Result = 5000;
        break;
        case 5:
        Result = 100;
        break;
        case 6:
        Result = 700;
        break;
        case 7:
        Result = 3500;
        break;
        case 8:
        Result = 2450;
        break;
        case 9:
        Result = 350;
        break;
        case 10:
        Result = 300;
        break;
        case 11:
        Result = 10000;
        break;
        case 12:
        Result = 8000;
        break;
        case 13:
        Result = 640;
        break;
        case 14:
        Result = 5000;
        break;
        case 15:
        Result = 4750;
        break;
        case 16:
        Result = 800;
        break;
        case 17:
        Result = 6725;
        break;
        case 18:
        if (NOT (HAS_CHAR_GOT_WEAPON( sub_740(), 30 )))
        {
            Result = 1250;
        }
        else if (HAS_CHAR_GOT_WEAPON( sub_740(), 30 ))
        {
            Result = 80;
        }
        break;
        case 19:
        Result = 7550;
        break;
        case 20:
        Result = 160;
        break;
        case 21:
        Result = 100;
        break;
    }
    return Result;
}

int sub_38644(unknown uParam0)
{
    unknown uVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    unknown uVar7;

    sub_1674( uParam0, ref iVar5 );
    if ((NOT (iVar5 == 48)) AND (NOT (iVar5 == 41)))
    {
        GET_WEAPONTYPE_SLOT( iVar5, ref uVar3 );
    }
    GET_CHAR_WEAPON_IN_SLOT( sub_740(), uVar3, ref iVar6, ref iVar4, ref uVar7 );
    if (((iVar6 == 0) || (iVar6 == 41)) || (iVar6 == 48))
    {
        iVar4 = 0;
        return 1;
        break;
    }
    if (iVar6 == iVar5)
    {
        return 1;
        break;
    }
    return 0;
}

int sub_38809(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (IS_PLAYER_PLAYING( sub_691() ))
    {
        switch (uParam0)
        {
            case 3:
            PRINTNL();
            PRINTSTRING( "************* checking knife *****************" );
            PRINTNL();
            if (HAS_CHAR_GOT_WEAPON( sub_740(), 3 ))
            {
                PRINTNL();
                PRINTSTRING( "************* one off knife! *****************" );
                PRINTNL();
                return 1;
            }
            break;
            case 48:
            GET_PLAYER_MAX_ARMOUR( sub_691(), ref iVar4 );
            GET_CHAR_ARMOUR( sub_740(), ref iVar3 );
            if (iVar3 >= iVar4)
            {
                PRINTNL();
                PRINTSTRING( "************* one off armour! *****************" );
                PRINTNL();
                return 1;
            }
            break;
            case 41:
            PRINTNL();
            PRINTSTRING( "************* checking parachute *****************" );
            PRINTNL();
            if (HAS_CHAR_GOT_WEAPON( sub_740(), 41 ))
            {
                PRINTNL();
                PRINTSTRING( "************* one off parachute! *****************" );
                PRINTNL();
                return 1;
            }
            break;
        }
    }
    PRINTNL();
    PRINTSTRING( "************* Not got one! *****************" );
    PRINTNL();
    return 0;
}

int sub_39416(unknown uParam0)
{
    int iVar3;

    if (HAS_CHAR_GOT_WEAPON( sub_740(), uParam0 ))
    {
        GET_AMMO_IN_CHAR_WEAPON( sub_740(), uParam0, ref iVar3 );
        if (iVar3 >= (sub_26485( uParam0 )))
        {
            return 1;
        }
    }
    return 0;
}

void sub_39974(unknown uParam0)
{
    if (sub_39416( uParam0 ))
    {
        SET_CHAR_AMMO( sub_740(), uParam0, sub_26485( uParam0 ) );
    }
    return;
}

void sub_40094(unknown uParam0)
{
    switch (uParam0)
    {
        case 7:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_HANDGUN" );
        break;
        case 10:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_SHOTGUN" );
        break;
        case 11:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_BARETTA" );
        break;
        case 13:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_MP5K" );
        break;
        case 12:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_UZI" );
        break;
        case 16:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_SNIPER_RIFLE" );
        break;
        case 3:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_KNIFE" );
        break;
        case 4:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_GRENADE" );
        break;
        case 15:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_M4" );
        break;
        case 14:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_AK47" );
        break;
        case 5:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_MOLOTOV" );
        break;
        case 48:
        PLAY_AUDIO_EVENT( "BODY_ARMOUR_BUY" );
        break;
        case 18:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_RPG" );
        break;
        case 21:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_GRENADE_LAUNCHER" );
        break;
        case 29:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_44A" );
        break;
        case 33:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_GOLD_UZI" );
        break;
        case 35:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_DSR" );
        break;
        case 36:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_STICKY_BOMB" );
        break;
        case 32:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_P90" );
        break;
        case 31:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_AA12" );
        break;
        case 34:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_M249" );
        break;
        case 30:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_AA12" );
        break;
        case 41:
        PLAY_AUDIO_EVENT( "BODY_ARMOUR_BUY" );
        break;
        default: break;
    }
    return;
}

void sub_45291()
{
    sub_45301( 0 );
    sub_45301( 2 );
    sub_45301( 1 );
    return;
}

void sub_45301(unknown uParam0)
{
    g_U30120[uParam0] = 0;
    return;
}

void sub_45348()
{
    DISPLAY_CASH( 0 );
    DISPLAY_RADAR( 1 );
    if (IS_PLAYER_PLAYING( sub_691() ))
    {
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_740(), 0 );
        TASK_CLEAR_LOOK_AT( sub_740() );
        CLEAR_CHAR_TASKS( sub_740() );
        SET_PLAYER_CONTROL( sub_691(), 1 );
    }
    if (IS_PLAYER_PLAYING( sub_691() ))
    {
        GET_CURRENT_CHAR_WEAPON( sub_740(), ref l_U1183 );
        if (l_U1183 == 0)
        {
            if (HAS_CHAR_GOT_WEAPON( sub_740(), l_U1184 ))
            {
                SET_CURRENT_CHAR_WEAPON( sub_740(), l_U1184, 1 );
            }
        }
    }
    sub_45527( 0 );
    CLEAR_HELP();
    if (NOT g_U11193)
    {
        CLEAR_PRINTS();
    }
    return;
}

void sub_45527(boolean bParam0)
{
    if (l_U256)
    {
        if (bParam0)
        {
            SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 0 );
        }
        else
        {
            SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 2000 );
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        if (DOES_CAM_EXIST( l_U322 ))
        {
            DESTROY_CAM( l_U322 );
        }
        if (DOES_CAM_EXIST( l_U323 ))
        {
            DESTROY_CAM( l_U323 );
        }
        if (DOES_CAM_EXIST( l_U324 ))
        {
            DESTROY_CAM( l_U324 );
        }
        END_CAM_COMMANDS( ref l_U365 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        if (IS_PLAYER_PLAYING( sub_691() ))
        {
            SET_CAM_BEHIND_PED( sub_740() );
        }
        l_U256 = 0;
    }
    return;
}

void sub_45846(unknown uParam0)
{
    if (NOT g_U11193)
    {
        switch (uParam0)
        {
            case 0:
            PRINT_HELP_FOREVER( "E1GV_T70" );
            break;
            case 1:
            PRINT_HELP_FOREVER( "E1GV_T71" );
            break;
            case 2:
            PRINT_HELP_FOREVER( "E1GV_T77" );
            break;
            case 3:
            PRINT_HELP_FOREVER( "E1GV_T72" );
            break;
            case 4:
            PRINT_HELP_FOREVER( "E1GV_T73" );
            break;
            case 5:
            PRINT_HELP_FOREVER( "E1GV_T74" );
            break;
            case 6:
            PRINT_HELP_FOREVER( "E1GV_T75" );
            break;
            case 7:
            PRINT_HELP_FOREVER( "E1GV_T78" );
            break;
            case 8:
            PRINT_HELP_FOREVER( "E1GV_T76" );
            break;
            case 9:
            PRINT_HELP_FOREVER( "E1GV_T79" );
            break;
            case 11:
            PRINT_HELP_FOREVER( "E1GV_T106" );
            break;
            case 12:
            PRINT_HELP_FOREVER( "E1GV_T112" );
            break;
            case 13:
            PRINT_HELP_FOREVER( "E1GV_T113" );
            break;
            case 14:
            PRINT_HELP_FOREVER( "E1GV_T114" );
            break;
            case 15:
            PRINT_HELP_FOREVER( "E1GV_T115" );
            break;
            case 16:
            PRINT_HELP_FOREVER( "E1GV_T116" );
            break;
            case 17:
            PRINT_HELP_FOREVER( "E1GV_T117" );
            break;
            case 18:
            if ((NOT (HAS_CHAR_GOT_WEAPON( sub_740(), 31 ))) AND (NOT (HAS_CHAR_GOT_WEAPON( sub_740(), 30 ))))
            {
                PRINT_HELP_FOREVER( "E1GV_T118" );
            }
            else if (HAS_CHAR_GOT_WEAPON( sub_740(), 31 ))
            {
                PRINT_HELP_FOREVER( "E2GV_S2E" );
            }
            else if (HAS_CHAR_GOT_WEAPON( sub_740(), 30 ))
            {
                PRINT_HELP_FOREVER( "E2GV_S2S" );
            };;;
            break;
            case 19:
            PRINT_HELP_FOREVER( "E1GV_T119" );
            break;
            case 20:
            PRINT_HELP_FOREVER( "E1GV_T120" );
            break;
            case 21:
            PRINT_HELP_FOREVER( "E1GV_T120" );
            break;
        }
    }
    else
    {
        switch (uParam0)
        {
            case 0:
            PRINT_HELP_FOREVER( "E1GV_T70_L" );
            break;
            case 1:
            PRINT_HELP_FOREVER( "E1GV_T71_L" );
            break;
            case 2:
            PRINT_HELP_FOREVER( "E1GV_T77_L" );
            break;
            case 3:
            PRINT_HELP_FOREVER( "E1GV_T72_L" );
            break;
            case 4:
            PRINT_HELP_FOREVER( "E1GV_T73_L" );
            break;
            case 5:
            PRINT_HELP_FOREVER( "E1GV_T74_L" );
            break;
            case 6:
            PRINT_HELP_FOREVER( "E1GV_T75_L" );
            break;
            case 7:
            PRINT_HELP_FOREVER( "E1GV_T78_L" );
            break;
            case 8:
            PRINT_HELP_FOREVER( "E1GV_T76_L" );
            break;
            case 9:
            PRINT_HELP_FOREVER( "E1GV_T79_L" );
            break;
            case 11:
            PRINT_HELP_FOREVER( "E1GV_T106_L" );
            break;
            case 12:
            PRINT_HELP_FOREVER( "E1GV_T106_L" );
            break;
            case 13:
            PRINT_HELP_FOREVER( "E1GV_T106_L" );
            break;
            case 14:
            PRINT_HELP_FOREVER( "E1GV_T106_L" );
            break;
            case 15:
            PRINT_HELP_FOREVER( "E1GV_T106_L" );
            break;
            case 16:
            PRINT_HELP_FOREVER( "E1GV_T106_L" );
            break;
            case 17:
            PRINT_HELP_FOREVER( "E1GV_T106_L" );
            break;
            case 18:
            PRINT_HELP_FOREVER( "E1GV_T106_L" );
            break;
            case 19:
            PRINT_HELP_FOREVER( "E1GV_T106_L" );
            break;
            case 20:
            PRINT_HELP_FOREVER( "E1GV_T106_L" );
            break;
            case 21:
            PRINT_HELP_FOREVER( "E1GV_T106_L" );
            break;
        }
    }
    return;
}

void sub_51197(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( l_U433[uParam0] ))
    {
        if (IS_OBJECT_ATTACHED( l_U433[uParam0] ))
        {
            DETACH_OBJECT( l_U433[uParam0], 1 );
        }
        DELETE_OBJECT( ref l_U433[uParam0] );
    }
    return;
}

void sub_51327()
{
    int I;

    for ( I = 0; I < 22; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U433[I] ))
        {
            if (IS_OBJECT_ATTACHED( l_U433[I] ))
            {
                DETACH_OBJECT( l_U433[I], 1 );
            }
            DELETE_OBJECT( ref l_U433[I] );
        }
    }
    if (DOES_OBJECT_EXIST( l_U456 ))
    {
        DELETE_OBJECT( ref l_U456 );
    }
    return;
}

void sub_52879()
{
    PRINTSTRING( "gun van - DELETE_EVERYTHING() \n" );
    if (DOES_BLIP_EXIST( l_U251 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U251 );
    }
    if (DOES_CHAR_EXIST( l_U457 ))
    {
        DELETE_CHAR( ref l_U457 );
    }
    if (DOES_VEHICLE_EXIST( l_U1182 ))
    {
        DELETE_CAR( ref l_U1182 );
    }
    return;
}

int sub_53201(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (sub_53220( "E2FAAU", 7 ))
    {
        if (sub_53637( uParam0, uParam1, uParam2, 1 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_53220(unknown uParam0, unknown uParam1)
{
    if (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 ))
    {
        sub_53247( uParam0 );
        if (NOT (IS_CHAR_INJURED( sub_740() )))
        {
            sub_53392( 0, sub_740(), "LUIS", 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U457 )))
        {
            sub_53392( 1, l_U457, "ARMANDO", 0 );
        }
        return 1;
    }
    else if (NOT (IS_STREAMING_ADDITIONAL_TEXT( uParam1 )))
    {
        REQUEST_ADDITIONAL_TEXT( uParam0, uParam1 );
    }
    return 0;
}

void sub_53247(unknown uParam0)
{
    StrCopy( ref l_U94._fU0, uParam0, 16 );
    sub_53266();
    return;
}

void sub_53266()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U94._fU16[I]._fU0 = nil;
        StrCopy( ref l_U94._fU16[I]._fU4, "", 32 );
        l_U94._fU344[I] = 0;
    }
    return;
}

void sub_53392(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U94._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U94._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_53476( "\n PED NUMBER ", uParam0 );
    sub_53516( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_53476(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_53516(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_53637(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_53660( uParam0, ref l_U94._fU0, uParam1, uParam2, uParam3 );
}

void sub_53660(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;
    char[12] cVar11;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;

    StrCopy( ref cVar7, uParam1, 16 );
    array(ref cVar11, 2);
    StrCopy( ref cVar11[0], uParam0, 16 );
    StrCopy( ref cVar11[1], "END", 16 );
    return sub_53714( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_53714(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_53736( iParam1 )))
    {
        return 0;
    }
    l_U94._fU384 = 0;
    iParam1->_fU16 = 0;
    iParam1->_fU20 = uParam5;
    if (bParam3)
    {
        if (iParam1->_fU12)
        {
            iVar12 = iParam1->_fU8;
            iParam1->_fU12 = 0;
        }
    }
    else
    {
        iParam1->_fU12 = 0;
        if (bParam4)
        {
            iVar12 = uParam6;
            iParam1->_fU8 = uParam6;
            iParam1->_fU12 = 0;
        }
        else
        {
            iParam1->_fU8 = 0;
            iParam1->_fU12 = 0;
        }
    }
    iParam1->_fU16 = bParam4;
    for ( I = 0; I <= (g_U8972 - 1); I++ )
    {
        StrCopy( ref g_U8972[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8972[I] = {(uParam0^)[I]};
    }
    g_U8966 = {(iParam1^)};
    sub_54428( ref g_U8868, ref l_U94 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_53736(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_53813( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U561[1] ))
    {
        switch (g_U95._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_53813( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8867)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8865 > iParam0->_fU0)
        {
            sub_53813( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8865 = iParam0->_fU0;
    g_U8866++;
    if (g_U8866 > 100000)
    {
        g_U8866 = 1;
    }
    iParam0->_fU4 = g_U8866;
    return 1;
}

void sub_53813(unknown uParam0)
{
    return;
}

void sub_54428(int iParam0, int iParam1)
{
    int I;

    iParam0->_fU0 = {iParam1->_fU0};
    for ( I = 0; I <= 8; I++ )
    {
        iParam0->_fU16[I] = {iParam1->_fU16[I]};
        iParam0->_fU344[I] = iParam1->_fU344[I];
    }
    iParam0->_fU384 = iParam1->_fU384;
    iParam0->_fU388 = iParam1->_fU388;
    return;
}

int sub_54679()
{
    unknown uVar2;

    if (NOT (IS_CHAR_INJURED( sub_740() )))
    {
        if (IS_ANY_SPEECH_PLAYING( sub_740() ))
        {
            return 1;
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U457 )))
    {
        if (IS_ANY_SPEECH_PLAYING( l_U457 ))
        {
            return 1;
        }
    }
    if (NOT (sub_54770( ref l_U460 )))
    {
        return 1;
    }
    return 0;
}

int sub_54770(int iParam0)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8866)
        {
            return 0;
        }
    }
    return 1;
}

void sub_55605(unknown uParam0)
{
    float fVar3;
    unknown uVar4;

    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            if ((NOT IS_MINIGAME_IN_PROGRESS()) AND (IS_PED_A_MISSION_PED( uParam0 )))
            {
                GET_FRAME_TIME( ref fVar3 );
                l_U198 += fVar3 * 1000.00000000;
                l_U199 += fVar3 * 1000.00000000;
                if (l_U195)
                {
                    if (HAVE_ANIMS_LOADED( l_U206 ))
                    {
                        if ((NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U206, l_U207 ))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U206, l_U208 ))))
                        {
                            l_U198 = 0.00000000;
                            sub_55798( uParam0, 0 );
                            l_U195 = 0;
                        }
                    }
                    else
                    {
                        l_U198 = 0.00000000;
                        sub_55798( uParam0, 0 );
                        l_U195 = 0;
                    }
                }
                switch (l_U202)
                {
                    case 0:
                    if (NOT (sub_55917( uParam0 )))
                    {
                        l_U199 = 0.00000000;
                    }
                    if (l_U192)
                    {
                        sub_56895( uParam0 );
                    }
                    if (l_U199 > 5000.00000000)
                    {
                        if (NOT (HAVE_ANIMS_LOADED( l_U206 )))
                        {
                            REQUEST_ANIMS( l_U206 );
                        }
                        if (NOT (HAS_MODEL_LOADED( -268530289 )))
                        {
                            REQUEST_MODEL( -268530289 );
                        }
                        if (HAVE_ANIMS_LOADED( l_U206 ))
                        {
                            if ((NOT (IS_CHAR_IN_ANY_CAR( uParam0 ))) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( uParam0 ))))
                            {
                                sub_55798( uParam0, 1 );
                                TASK_CLEAR_LOOK_AT( uParam0 );
                                TASK_PLAY_ANIM_WITH_FLAGS( uParam0, l_U207, l_U206, 8.00000000, -1, 3328 );
                                l_U197 = 0;
                                l_U195 = 1;
                                l_U198 = 0.00000000;
                                l_U202 = 1;
                            }
                            else
                            {
                                sub_56895( uParam0 );
                                l_U198 = 0.00000000;
                                l_U202 = 1;
                            }
                        }
                    }
                    else if (HAVE_ANIMS_LOADED( l_U206 ))
                    {
                        REMOVE_ANIMS( l_U206 );
                    }
                    if (HAS_MODEL_LOADED( -268530289 ))
                    {
                        MARK_MODEL_AS_NO_LONGER_NEEDED( -268530289 );
                    }
                    break;
                    case 1:
                    if (sub_55928( uParam0 ))
                    {
                        if (NOT (HAVE_ANIMS_LOADED( l_U206 )))
                        {
                            REQUEST_ANIMS( l_U206 );
                        }
                        if (NOT (HAS_MODEL_LOADED( -268530289 )))
                        {
                            REQUEST_MODEL( -268530289 );
                        }
                        if (DOES_OBJECT_EXIST( l_U204 ))
                        {
                            if (HAVE_ANIMS_LOADED( l_U206 ))
                            {
                                if (((((((((((NOT (IS_PED_RAGDOLL( uParam0 ))) AND (NOT (IS_CHAR_DUCKING( uParam0 )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U206, l_U207 )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U206, l_U208 )))) AND (NOT (IS_CHAR_GESTURING( uParam0 )))) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( uParam0 )))) AND (NOT (sub_57703( uParam0 )))) AND (NOT (IS_AMBIENT_SPEECH_PLAYING( uParam0 )))) AND (NOT (IS_SCRIPTED_SPEECH_PLAYING( uParam0 )))) AND (NOT (sub_56089( uParam0 )))) AND (NOT l_U197))
                                {
                                    if ((l_U199 > 60000.00000000) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))))
                                    {
                                        TASK_CLEAR_LOOK_AT( uParam0 );
                                        sub_55798( uParam0, 1 );
                                        l_U199 = 0.00000000;
                                        l_U195 = 1;
                                    }
                                    else if (l_U198 > 10000.00000000)
                                    {
                                        TASK_CLEAR_LOOK_AT( uParam0 );
                                        sub_55798( uParam0, 1 );
                                        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
                                        {
                                            TASK_PLAY_ANIM_WITH_FLAGS( uParam0, l_U208, l_U206, 8.00000000, -1, 3328 );
                                        }
                                        l_U195 = 1;
                                        l_U198 = 0.00000000;
                                    }
                                }
                            }
                            if (NOT l_U197)
                            {
                                if (NOT l_U193)
                                {
                                    if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
                                    {
                                        if (HAVE_ANIMS_LOADED( l_U206 ))
                                        {
                                            if (IS_CHAR_PLAYING_ANIM( uParam0, l_U206, l_U207 ))
                                            {
                                                GET_CHAR_ANIM_CURRENT_TIME( uParam0, l_U206, l_U207, ref fVar3 );
                                                if (fVar3 > l_U201)
                                                {
                                                    l_U203 = START_PTFX_ON_OBJ( "ambient_cig_smoke", l_U204, l_U215, l_U218, 1065353216 );
                                                    l_U193 = 1;
                                                }
                                            }
                                            else
                                            {
                                                l_U203 = START_PTFX_ON_OBJ( "ambient_cig_smoke", l_U204, l_U215, l_U218, 1065353216 );
                                                l_U193 = 1;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar4 );
                                        if (DOES_VEHICLE_EXIST( uVar4 ))
                                        {
                                            if (NOT (IS_CAR_DEAD( uVar4 )))
                                            {
                                                if (NOT (DOES_CAR_HAVE_ROOF( uVar4 )))
                                                {
                                                    if (NOT (sub_58268( uParam0 )))
                                                    {
                                                        l_U203 = START_PTFX_ON_OBJ( "ambient_cig_smoke", l_U204, l_U215, l_U218, 1065353216 );
                                                        l_U193 = 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                else if ((sub_58425( uParam0 )) || (sub_58268( uParam0 )))
                                {
                                    sub_1115( ref l_U203 );
                                    l_U193 = 0;
                                }
                            }
                        }
                        else if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
                        {
                            if (HAVE_ANIMS_LOADED( l_U206 ))
                            {
                                if (IS_CHAR_PLAYING_ANIM( uParam0, l_U206, l_U207 ))
                                {
                                    GET_CHAR_ANIM_CURRENT_TIME( uParam0, l_U206, l_U207, ref fVar3 );
                                    if (NOT (DOES_OBJECT_EXIST( l_U204 )))
                                    {
                                        if (fVar3 > l_U200)
                                        {
                                            sub_56895( uParam0 );
                                        }
                                    }
                                }
                                else
                                {
                                    sub_56895( uParam0 );
                                }
                            }
                        }
                        else
                        {
                            sub_56895( uParam0 );
                        }
                        if (sub_57703( uParam0 ))
                        {
                            CLEAR_CHAR_SECONDARY_TASK( uParam0 );
                        }
                    }
                    else
                    {
                        l_U202 = 0;
                        l_U199 = 0.00000000;
                    }
                    break;
                }
            }
            else
            {
                sub_819( uParam0, 0 );
                if (l_U196)
                {
                    PRINTSTRING( "REMOVE_CIGGY - 4 \n" );
                }
            }
        }
        else
        {
            sub_819( uParam0, 1 );
            if (l_U196)
            {
                PRINTSTRING( "REMOVE_CIGGY - 5 \n" );
            }
        }
    }
    else
    {
        sub_819( uParam0, 0 );
        if (l_U196)
        {
            PRINTSTRING( "REMOVE_CIGGY - 6 \n" );
        }
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (DOES_OBJECT_EXIST( l_U204 ))
        {
            if (HAVE_ANIMS_LOADED( l_U206 ))
            {
                if ((IS_CHAR_PLAYING_ANIM( uParam0, l_U206, l_U207 )) || (IS_CHAR_PLAYING_ANIM( uParam0, l_U206, l_U208 )))
                {
                    BLOCK_CHAR_HEAD_IK( uParam0, 1 );
                }
            }
        }
    }
    return;
}

void sub_55798(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        BLOCK_CHAR_GESTURE_ANIMS( uParam0, uParam1 );
        BLOCK_CHAR_AMBIENT_ANIMS( uParam0, uParam1 );
    }
    return;
}

int sub_55917(unknown uParam0)
{
    float fVar3;

    if (NOT (sub_55928( uParam0 )))
    {
        return 0;
    }
    else if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
    {
        GET_CHAR_SPEED( uParam0, ref fVar3 );
        if (fVar3 > 2.00000000)
        {
            return 0;
        }
        if (IS_CHAR_GESTURING( uParam0 ))
        {
            return 0;
        }
    }
    else
    {
        l_U199 = 999999.90000000;
    }
    if (IS_PLAYER_PLAYING( sub_691() ))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_740(), uParam0, 50.00000000, 50.00000000, 0 )))
        {
            return 0;
        }
    }
    if (sub_56089( uParam0 ))
    {
        return 0;
    }
    return 1;
}

int sub_55928(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (l_U192)
    {
        return 1;
    }
    if (l_U194)
    {
        sub_819( uParam0, 1 );
        l_U194 = 0;
        if (l_U196)
        {
            PRINTSTRING( "REMOVE_CIGGY - 1 \n" );
        }
        return 0;
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
        {
            if ((((((IS_PED_IN_COMBAT( uParam0 )) || (IS_CHAR_IN_MELEE_COMBAT( uParam0 ))) || (IS_CHAR_SHOOTING( uParam0 ))) || (IS_CHAR_ARMED( uParam0, 7 ))) || (sub_56089( uParam0 ))) || (IS_CHAR_IN_WATER( uParam0 )))
            {
                sub_819( uParam0, 1 );
                if (l_U196)
                {
                    PRINTSTRING( "REMOVE_CIGGY - 1B \n" );
                }
                return 0;
            }
        }
        else
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            if (DOES_VEHICLE_EXIST( uVar3 ))
            {
                GET_CAR_MODEL( uVar3, ref uVar4 );
                if (IS_THIS_MODEL_A_BIKE( uVar4 ))
                {
                    sub_819( uParam0, 0 );
                    if (l_U196)
                    {
                        PRINTSTRING( "REMOVE_CIGGY - 2 \n" );
                    }
                    return 0;
                }
            }
            if (sub_56321( uParam0 ))
            {
                sub_819( uParam0, 0 );
                if (l_U196)
                {
                    PRINTSTRING( "REMOVE_CIGGY - 3 \n" );
                }
                return 0;
            }
        }
    }
    else
    {
        sub_819( uParam0, 1 );
        if (l_U196)
        {
            PRINTSTRING( "REMOVE_CIGGY - 3B \n" );
        }
        return 0;
    }
    return 1;
}

int sub_56089(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_SCRIPT_TASK_STATUS( uParam0, 83, ref iVar3 );
        if (NOT (iVar3 == 7))
        {
            return 1;
        }
    }
    return 0;
}

int sub_56321(int iParam0)
{
    unknown uVar3;
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( iParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( iParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0, ref uVar3 );
            if (IS_VEH_DRIVEABLE( uVar3 ))
            {
                if (sub_56385( uVar3 ))
                {
                    GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar3, ref iVar5 );
                    if (iVar5 == 3)
                    {
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar3, 1 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar3, 1, ref iVar4 );
                            if (iVar4 == iParam0)
                            {
                                return 1;
                            }
                        }
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar3, 2 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar3, 2, ref iVar4 );
                            if (iVar4 == iParam0)
                            {
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_56385(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2687))
    {
        return 1;
    }
    return 0;
}

void sub_56895(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    int iVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (DOES_OBJECT_EXIST( l_U204 )))
        {
            GET_CHAR_COORDINATES( uParam0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            CREATE_OBJECT( -268530289, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U204, 1 );
            GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar6 );
            if (NOT (iVar6 == 0))
            {
                ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U204, iVar6 );
            }
        }
        if (l_U192)
        {
            if (IS_OBJECT_ATTACHED( l_U204 ))
            {
                DETACH_OBJECT( l_U204, 1 );
            }
        }
        if (sub_57060( uParam0 ))
        {
            if (IS_OBJECT_ATTACHED( l_U204 ))
            {
                DETACH_OBJECT( l_U204, 1 );
            }
        }
        if (NOT (IS_OBJECT_ATTACHED( l_U204 )))
        {
            ATTACH_OBJECT_TO_PED( l_U204, uParam0, 1232, l_U209, l_U212, 0 );
            l_U205 = uParam0;
        }
        if (NOT (l_U202 == 1))
        {
            l_U202 = 1;
            l_U198 = 18000.00000000;
        }
    }
    return;
}

int sub_57060(int iParam0)
{
    if (iParam0 == l_U205)
    {
        return 1;
    }
    return 0;
}

int sub_57703(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_58268(unknown uParam0)
{
    unknown uVar3;
    float fVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            GET_CAR_SPEED( uVar3, ref fVar4 );
            if (fVar4 > 1.00000000)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_58425(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            if (NOT (IS_CAR_DEAD( uVar3 )))
            {
                GET_CAR_MODEL( uVar3, ref uVar4 );
                if ((IS_THIS_MODEL_A_CAR( uVar4 )) || (IS_THIS_MODEL_A_HELI( uVar4 )))
                {
                    if (DOES_CAR_HAVE_ROOF( uVar3 ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_59093()
{
    if (l_U252)
    {
        if ((((((((((((((((((((NOT (IS_CONTROL_PRESSED( 2, 77 ))) AND (NOT (IS_CONTROL_PRESSED( 2, 78 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 2 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 3 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 23 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 83 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 82 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 84 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 8 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 9 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 11 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 10 )))) AND (NOT (IS_GAME_KEYBOARD_NAV_UP_PRESSED( 0 )))) AND (NOT (IS_GAME_KEYBOARD_NAV_DOWN_PRESSED( 0 )))) AND (NOT (IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 0 )))) AND (NOT (IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 0 )))) AND (NOT (sub_33530( 1 )))) AND (NOT (sub_33613( 1 )))) AND (NOT (sub_33365( 1 )))) AND (NOT (sub_33447( 1 ))))
        {
            l_U252 = 0;
        }
    }
    return;
}

void sub_59392()
{
    if (NOT g_U11193)
    {
        sub_52879();
    }
    if (g_U11193)
    {
        sub_45348();
    }
    if (NOT g_U11193)
    {
        sub_51327();
    }
    sub_45527( 0 );
    SET_PLAYER_CONTROL( sub_691(), 1 );
    sub_2890();
    if (NOT g_U11193)
    {
        CLEAR_HELP();
        CLEAR_PRINTS();
    }
    return;
}

void sub_59670(unknown uParam0, int iParam1, unknown uParam2)
{
    if (iParam1 == nil)
    {
        return;
    }
    if (NOT (DOES_CHAR_EXIST( iParam1 )))
    {
        return;
    }
    g_U42871._fU0 = uParam0;
    g_U42871._fU4 = iParam1;
    g_U42871._fU8 = uParam2;
    g_U42871._fU12 = 0;
    if (g_U12379)
    {
        g_U42871._fU12 = 1;
    }
    return;
}
