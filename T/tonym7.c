void main()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int iVar11;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 1;
    l_U4 = 3;
    l_U10 = 0;
    l_U11 = -1;
    l_U12 = 0;
    l_U13 = 0;
    l_U18 = 1;
    l_U203 = 0;
    l_U204 = 0;
    l_U205 = 0;
    l_U206 = 0;
    l_U207 = 0;
    l_U208 = 0;
    l_U236 = 10.00000000;
    l_U237 = 15.00000000;
    l_U252 = 350;
    l_U253 = 1.00000000;
    l_U254 = 20.00000000;
    l_U255 = 0.00000000;
    l_U256 = 0.50000000;
    l_U257 = 0;
    l_U262 = 1;
    l_U264 = 0.20000000;
    l_U269 = 0;
    l_U270 = 28;
    l_U271 = {-460.70340000, 149.11790000, 8.74160000};
    l_U275 = {-277.31690000, 183.64290000, 13.74200000};
    l_U279 = {-278.47420000, 345.05130000, 13.69070000};
    l_U474 = 0;
    l_U475 = 0;
    l_U479 = {-460.67510000, 152.90150000, 8.74310000};
    l_U482 = 183.67400000;
    l_U491 = {-477.53300000, 156.73000000, 6.55090000};
    l_U494 = {-481.89720000, 147.04190000, 6.55070000};
    l_U497 = {-480.67240000, 165.78080000, 10.61200000};
    l_U500 = {-477.60400000, 142.40070000, 6.55290000};
    l_U503 = {-468.55550000, 140.33990000, 8.85910000};
    l_U506 = 129.90300000;
    l_U507 = 104.42500000;
    l_U508 = 184.52100000;
    l_U509 = 90.00000000;
    l_U510 = 45.32310000;
    l_U511 = 0;
    l_U512 = 0;
    l_U513 = 0;
    l_U514 = 0;
    l_U515 = 0;
    l_U516 = 0;
    l_U517 = 0;
    l_U518 = 0;
    l_U519 = 0;
    l_U520 = 0;
    l_U521 = 0;
    l_U522 = 0;
    l_U525 = 8000;
    l_U534 = 1;
    l_U536 = 1;
    l_U538 = 0;
    l_U539 = 0;
    l_U549 = 0;
    l_U550 = 0;
    l_U551 = 0;
    l_U561 = 0;
    l_U572 = {0.00000000, 0.30000000, 0.00000000};
    l_U575 = 40.00000000;
    l_U576 = 2000;
    l_U577 = 4.00000000;
    l_U580 = -45.00000000;
    l_U581 = 45.00000000;
    l_U582 = -89.00000000;
    l_U583 = 89.00000000;
    l_U585 = 50.00000000;
    l_U586 = {0.00000000, 0.00000000, 0.70000000};
    sub_715();
    while (true)
    {
        WAIT( 0 );
        switch (l_U269)
        {
            case 0:
            switch (l_U526)
            {
                case 0:
                g_U30180 = 1;
                if (g_U30199 != -1)
                {
                    if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
                    {
                        sub_3679( g_U30199, 1 );
                        WAIT( 0 );
                        sub_3822( "CLBPRC7", 0 );
                        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "LA7" )))
                        {
                            PRINT_HELP_FOREVER( "LA7" );
                        }
                        sub_3997();
                        SETTIMERA( 0 );
                        REQUEST_CAR_RECORDING( 1901 );
                        REQUEST_CAR_RECORDING( 1900 );
                        REQUEST_MODEL( -1788328884 );
                        REQUEST_MODEL( -1099960214 );
                        REQUEST_MODEL( -46564867 );
                        REQUEST_MODEL( -1457673263 );
                        REQUEST_MODEL( sub_5174( 0 ) );
                        REQUEST_ANIMS( "misstonym7" );
                        sub_3822( "E2Tm6AU", 6 );
                        sub_5381( "E2Tm6AU" );
                        sub_5500( 0, sub_4411(), "LUIS", 0 );
                        sub_5647( 28, 0 );
                        g_U8781 = 0;
                        l_U526++;
                    }
                }
                break;
                case 1:
                sub_3997();
                if ((((((((HAS_CAR_RECORDING_BEEN_LOADED( 1901 )) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1900 ))) AND (HAS_MODEL_LOADED( sub_5174( 0 ) ))) AND (HAS_MODEL_LOADED( -1788328884 ))) AND (HAS_MODEL_LOADED( -1099960214 ))) AND (HAS_MODEL_LOADED( -46564867 ))) AND (HAS_MODEL_LOADED( -1457673263 ))) AND (HAVE_ANIMS_LOADED( "misstonym7" )))
                {
                    l_U526++;
                }
                break;
                case 2:
                sub_3997();
                if (TIMERA() > 4000)
                {
                    sub_5967();
                    CLEAR_HELP();
                    l_U526++;
                }
                break;
                case 3:
                sub_6186( sub_4411() );
                SET_WIDESCREEN_BORDERS( 1 );
                sub_7276( 1 );
                OPEN_SEQUENCE_TASK( ref l_U562 );
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "luis_check_earpiece_intro", "misstonym7", 8.00000000, 0, 0, 0, 0, 0 );
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "luis_check_earpiece_loop", "misstonym7", 8.00000000, 1, 0, 0, 0, 0 );
                CLOSE_SEQUENCE_TASK( l_U562 );
                TASK_PERFORM_SEQUENCE( sub_4411(), l_U562 );
                CLEAR_SEQUENCE_TASK( l_U562 );
                if (g_U30199 != -1)
                {
                    if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
                    {
                        sub_5500( 1, g_U29971[g_U30199]._fU12, "DESSIE", 0 );
                        sub_7592( "E2TM6_BLUE", ref l_U563, 7, 0 );
                    }
                }
                l_U526++;
                break;
                case 4:
                if ((NOT (sub_8576( l_U563 ))) || (sub_8739()))
                {
                    if (g_U30199 != -1)
                    {
                        if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
                        {
                            sub_3679( g_U30199, 0 );
                        }
                    }
                    CLEAR_CHAR_TASKS( sub_4411() );
                    if (sub_8576( l_U563 ))
                    {
                        sub_8924( ref l_U563, 0 );
                    }
                    sub_9048();
                    sub_7276( 0 );
                    SET_WIDESCREEN_BORDERS( 0 );
                    SET_PLAYER_CONTROL( sub_859(), 1 );
                    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_4411(), 0 );
                    SET_CAR_GENERATORS_ACTIVE_IN_AREA( 65346, 615, -10, 65391, 620, 100, 0 );
                    SET_WANTED_MULTIPLIER( 0.50000000 );
                    sub_9279();
                    l_U526 = 0;
                    l_U269 = 1;
                }
                break;
            }
            break;
            case 1:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_4411(), l_U275._fU0, l_U275._fU4, l_U275._fU8, 150, 150, 150, 0 ))
            {
                if (NOT l_U513)
                {
                    sub_10670();
                }
            }
            sub_11294();
            if (NOT IS_INTERIOR_SCENE())
            {
                if (NOT (sub_12737( 0 )))
                {
                    if (NOT l_U538)
                    {
                        if (g_U30199 != -1)
                        {
                            if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
                            {
                                sub_5500( 1, g_U29971[g_U30199]._fU12, "DESSIE", 0 );
                                sub_13080( ref l_U540, "E2TM6_BYE", "E2TM6_SORTD" );
                                sub_13427( ref l_U540, ref l_U563, 7, 1 );
                                l_U538 = 1;
                            }
                        }
                    }
                }
            }
            sub_13503();
            if (sub_13773( l_U275._fU0, l_U275._fU4, l_U275._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1, "CP7_01", "CP7_11", 3, 1, "CP7_07" ))
            {
                SET_PLAYER_CONTROL( sub_859(), 0 );
                if (DOES_VEHICLE_EXIST( l_U478 ))
                {
                    if (NOT (IS_CAR_DEAD( l_U478 )))
                    {
                        if (NOT (IS_CHAR_IN_CAR( sub_4411(), l_U478 )))
                        {
                            sub_2757();
                        }
                    }
                }
                GET_CAR_CHAR_IS_USING( sub_4411(), ref l_U490 );
                if (DOES_VEHICLE_EXIST( l_U490 ))
                {
                    if (NOT (IS_CAR_DEAD( l_U490 )))
                    {
                        if (NOT (IS_CAR_MODEL( l_U490, -713569950 )))
                        {
                            TASK_LEAVE_ANY_CAR( sub_4411() );
                        }
                    }
                }
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U278 );
                sub_20332();
                sub_21339();
                l_U269 = 2;
            }
            break;
            case 2:
            sub_11400( 0 );
            CLEAR_WANTED_LEVEL( sub_859() );
            ENABLE_SCENE_STREAMING( 0 );
            BEGIN_CAM_COMMANDS( ref l_U528 );
            if (NOT l_U529)
            {
                sub_21572();
            }
            GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U490 );
            if (DOES_VEHICLE_EXIST( l_U490 ))
            {
                if (IS_VEH_DRIVEABLE( l_U490 ))
                {
                    SET_CAR_COORDINATES( l_U490, -277.61190000, 183.81300000, 13.74090000 );
                    SET_CAR_HEADING( l_U490, 92.08870000 );
                }
            }
            CLEAR_AREA( -277.61190000, 183.81300000, 13.74090000, 100, 1 );
            SET_USE_HIGHDOF( 1 );
            SET_WIDESCREEN_BORDERS( 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            SET_CAM_POS( l_U530, -288.47970000, 181.03930000, 14.58421000 );
            SET_CAM_ROT( l_U530, 10.31195000, 0.00000000, -65.12206000 );
            SET_CAM_FOV( l_U530, 42.60001000 );
            SET_CAM_ACTIVE( l_U530, 1 );
            SET_CAM_PROPAGATE( l_U530, 1 );
            if (NOT (IS_CAR_DEAD( l_U490 )))
            {
                if (NOT (IS_CAR_MODEL( l_U490, -713569950 )))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U490, -1, -2, 0, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U490, -2, 0, 0, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                    OPEN_SEQUENCE_TASK( ref l_U562 );
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    TASK_OPEN_PASSENGER_DOOR( 0, l_U490, 60000, 2 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, uVar2._fU0, uVar2._fU4, uVar2._fU8, 2, 30000, 1 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, uVar5._fU0, uVar5._fU4, uVar5._fU8, 2, 30000, 1 );
                    TASK_ENTER_CAR_AS_DRIVER( 0, l_U490, 30000 );
                    CLOSE_SEQUENCE_TASK( l_U562 );
                    TASK_PERFORM_SEQUENCE( sub_4411(), l_U562 );
                    CLEAR_SEQUENCE_TASK( l_U562 );
                }
                else
                {
                    SOUND_CAR_HORN( l_U490, 500 );
                    l_U535 = -1;
                }
            }
            SETTIMERA( 0 );
            while (l_U534 == 1)
            {
                switch (l_U535)
                {
                    case -1:
                    if (TIMERA() > 5200)
                    {
                        if (NOT (IS_CAR_DEAD( l_U490 )))
                        {
                            SOUND_CAR_HORN( l_U490, 1000 );
                        }
                        l_U535++;
                    }
                    break;
                    case 0:
                    if (TIMERA() > 6000)
                    {
                        if (NOT (IS_CAR_DEAD( l_U490 )))
                        {
                            if (NOT (IS_CAR_MODEL( l_U490, -713569950 )))
                            {
                                sub_7592( "E2Tm7_ARRV", ref l_U563, 7, 1 );
                                if (NOT (IS_CHAR_INJURED( l_U358[1] )))
                                {
                                    CLEAR_CHAR_TASKS( l_U358[1] );
                                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U358[1], -275.87420000, 185.71940000, 13.69120000, 2, 20000, 2 );
                                }
                                l_U535++;
                            }
                            else
                            {
                                sub_7592( "E2Tm7_ARRV", ref l_U563, 7, 1 );
                                if (NOT (IS_CHAR_INJURED( l_U358[1] )))
                                {
                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                    TASK_ENTER_CAR_AS_PASSENGER( l_U358[1], l_U490, 30000, 2 );
                                }
                                l_U535++;
                            }
                        }
                    }
                    break;
                    case 1:
                    if (TIMERA() > 7000)
                    {
                        if (NOT (IS_CAR_DEAD( l_U490 )))
                        {
                            if (NOT (IS_CAR_MODEL( l_U490, -713569950 )))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U358[0] )))
                                {
                                    CLEAR_CHAR_TASKS( l_U358[0] );
                                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U358[0], -278.59180000, 185.85860000, 13.68770000, 2, 20000, 2 );
                                }
                                l_U535++;
                            }
                            else if (NOT (IS_CHAR_INJURED( l_U358[0] )))
                            {
                                SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                TASK_ENTER_CAR_AS_PASSENGER( l_U358[0], l_U490, 30000, 2 );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U358[1] )))
                            {
                                SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                TASK_ENTER_CAR_AS_PASSENGER( l_U358[1], l_U490, 30000, 2 );
                            }
                            l_U535++;;
                        }
                    }
                    break;
                    case 2:
                    if (NOT (sub_12737( 0 )))
                    {
                        if (NOT l_U539)
                        {
                            sub_7592( "E2TM6_WHRE", ref l_U563, 7, 1 );
                            l_U539 = 1;
                        }
                    }
                    if (NOT (IS_CAR_DEAD( l_U490 )))
                    {
                        if (NOT (IS_CAR_MODEL( l_U490, -713569950 )))
                        {
                            if (IS_CAR_DOOR_FULLY_OPEN( l_U490, 3 ))
                            {
                                SET_CAM_POS( l_U531, -285.02440000, 185.51060000, 14.92333000 );
                                SET_CAM_ROT( l_U531, -1.15344000, 0.00000000, -86.03159000 );
                                SET_CAM_FOV( l_U531, 30.60004000 );
                                SET_CAM_POS( l_U532, -284.96070000, 185.51500000, 18.09656000 );
                                SET_CAM_ROT( l_U532, -7.51315000, -0.00000000, -86.03159000 );
                                SET_CAM_FOV( l_U532, 30.60004000 );
                                SET_CAM_ACTIVE( l_U530, 0 );
                                SET_CAM_PROPAGATE( l_U530, 0 );
                                SET_CAM_ACTIVE( l_U533, 1 );
                                SET_CAM_PROPAGATE( l_U533, 1 );
                                SET_CAM_INTERP_STYLE_CORE( l_U533, l_U531, l_U532, 8000, 0 );
                                if (NOT (IS_CHAR_INJURED( l_U358[1] )))
                                {
                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                    TASK_ENTER_CAR_AS_PASSENGER( l_U358[1], l_U490, 30000, 2 );
                                }
                                l_U535++;
                            }
                        }
                        else
                        {
                            l_U535++;
                        }
                    }
                    break;
                    case 3:
                    if (NOT (IS_CAR_DEAD( l_U490 )))
                    {
                        if (NOT (IS_CAR_MODEL( l_U490, -713569950 )))
                        {
                            if (NOT (IS_CHAR_DEAD( l_U358[1] )))
                            {
                                if (IS_CHAR_GETTING_IN_TO_A_CAR( l_U358[1] ))
                                {
                                    if (NOT (IS_CAR_DEAD( l_U490 )))
                                    {
                                        if (NOT (IS_CHAR_INJURED( l_U358[0] )))
                                        {
                                            SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                            TASK_ENTER_CAR_AS_PASSENGER( l_U358[0], l_U490, 30000, 1 );
                                        }
                                        sub_23520();
                                        l_U535++;
                                    }
                                }
                            }
                        }
                        else
                        {
                            sub_23520();
                            l_U535++;
                        }
                    }
                    break;
                    case 4:
                    if (TIMERA() > 9000)
                    {
                        if (DOES_VEHICLE_EXIST( l_U471[1] ))
                        {
                            if (IS_VEH_DRIVEABLE( l_U471[1] ))
                            {
                                START_PLAYBACK_RECORDED_CAR( l_U471[1], 1901 );
                            }
                        }
                        l_U535++;
                    }
                    break;
                    case 5:
                    if (TIMERA() > 12500)
                    {
                        if (DOES_VEHICLE_EXIST( l_U471[0] ))
                        {
                            if (IS_VEH_DRIVEABLE( l_U471[0] ))
                            {
                                START_PLAYBACK_RECORDED_CAR( l_U471[0], 1900 );
                            }
                        }
                        sub_7592( "E2TM6_VANS", ref l_U563, 7, 1 );
                        if (DOES_CHAR_EXIST( l_U467[1] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U467[1] )))
                            {
                                TASK_START_SCENARIO_AT_POSITION( l_U467[1], "Vehicle_DeliveryDriver", -291.20820000, 181.53930000, 13.72810000, 68.03930000 );
                            }
                        }
                        l_U535++;
                    }
                    break;
                    case 6:
                    if (TIMERA() > 13000)
                    {
                        SET_CAM_POS( l_U530, -242.02960000, 183.35380000, 16.36396000 );
                        SET_CAM_ROT( l_U530, -4.08897300, 0.00000000, 92.12577000 );
                        SET_CAM_FOV( l_U530, 30.60004000 );
                        SET_CAM_ACTIVE( l_U533, 0 );
                        SET_CAM_PROPAGATE( l_U533, 0 );
                        SET_CAM_ACTIVE( l_U530, 1 );
                        SET_CAM_PROPAGATE( l_U530, 1 );
                        l_U535++;
                    }
                    break;
                    case 7:
                    if (NOT (sub_12737( 0 )))
                    {
                        if (NOT l_U514)
                        {
                            sub_7592( "E2Tm7_TEEN1", ref l_U563, 7, 1 );
                            l_U514 = 1;
                        }
                        else if (NOT l_U515)
                        {
                            sub_7592( "E2Tm7_TEEN2", ref l_U563, 7, 1 );
                            l_U515 = 1;
                        }
                        else if (NOT l_U516)
                        {
                            sub_7592( "E2Tm7_TEEN3", ref l_U563, 7, 1 );
                            l_U516 = 1;
                        }
                        else if (NOT l_U517)
                        {
                            sub_7592( "E2Tm7_TTEN4", ref l_U563, 7, 1 );
                            l_U517 = 1;
                            l_U535++;
                        };;;;
                    }
                    break;
                    case 8:
                    if (TIMERA() > 19000)
                    {
                        if (DOES_CHAR_EXIST( l_U358[0] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U358[0] )))
                            {
                                if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U358[0] )))
                                {
                                    if (DOES_VEHICLE_EXIST( l_U490 ))
                                    {
                                        if (IS_VEH_DRIVEABLE( l_U490 ))
                                        {
                                            if (IS_CAR_MODEL( l_U490, -713569950 ))
                                            {
                                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U358[0], l_U490, 0 );
                                            }
                                            else
                                            {
                                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U358[0], l_U490, 0 );
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if (DOES_CHAR_EXIST( l_U358[1] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U358[1] )))
                            {
                                if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U358[1] )))
                                {
                                    if (DOES_VEHICLE_EXIST( l_U490 ))
                                    {
                                        if (IS_VEH_DRIVEABLE( l_U490 ))
                                        {
                                            if (IS_CAR_MODEL( l_U490, -713569950 ))
                                            {
                                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U358[1], l_U490, 1 );
                                            }
                                            else
                                            {
                                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U358[1], l_U490, 1 );
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        SET_CAM_ACTIVE( l_U533, 0 );
                        SET_CAM_PROPAGATE( l_U533, 0 );
                        SET_USE_HIGHDOF( 0 );
                        SET_WIDESCREEN_BORDERS( 0 );
                        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                        SET_CAM_BEHIND_PED( sub_4411() );
                        l_U534 = 0;
                    }
                    break;
                }
                if (sub_25557())
                {
                    l_U534 = 0;
                    if (IS_SCREEN_FADED_IN())
                    {
                        DO_SCREEN_FADE_OUT( 500 );
                        while (NOT IS_SCREEN_FADED_OUT())
                        {
                            WAIT( 0 );
                        }
                    }
                    sub_23520();
                    CLEAR_CHAR_TASKS( sub_4411() );
                    if (DOES_VEHICLE_EXIST( l_U490 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U490 ))
                        {
                            if (NOT (IS_CHAR_IN_CAR( sub_4411(), l_U490 )))
                            {
                                WARP_CHAR_INTO_CAR( sub_4411(), l_U490 );
                            }
                        }
                    }
                    if (DOES_CHAR_EXIST( l_U358[0] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U358[0] )))
                        {
                            if (NOT (IS_CHAR_IN_ANY_CAR( l_U358[0] )))
                            {
                                if (DOES_VEHICLE_EXIST( l_U490 ))
                                {
                                    if (IS_VEH_DRIVEABLE( l_U490 ))
                                    {
                                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U358[0], l_U490, 1 );
                                    }
                                }
                            }
                        }
                    }
                    if (DOES_CHAR_EXIST( l_U358[1] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U358[1] )))
                        {
                            if (NOT (IS_CHAR_IN_ANY_CAR( l_U358[1] )))
                            {
                                if (DOES_VEHICLE_EXIST( l_U490 ))
                                {
                                    if (IS_VEH_DRIVEABLE( l_U490 ))
                                    {
                                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U358[1], l_U490, 2 );
                                    }
                                }
                            }
                        }
                    }
                    if (DOES_VEHICLE_EXIST( l_U471[0] ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U471[0] ))
                        {
                            SET_CAR_COORDINATES( l_U471[0], -294.45610000, 188.24280000, 13.74520000 );
                            SET_CAR_HEADING( l_U471[0], 359.86560000 );
                        }
                    }
                    if (DOES_VEHICLE_EXIST( l_U471[1] ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U471[1] ))
                        {
                            SET_CAR_COORDINATES( l_U471[1], -297.52490000, 179.94740000, 13.62730000 );
                            SET_CAR_HEADING( l_U471[1], 180 );
                        }
                    }
                    if (DOES_CHAR_EXIST( l_U467[1] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U467[1] )))
                        {
                            if (DOES_CHAR_EXIST( l_U467[0] ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U467[0] )))
                                {
                                    if (IS_CHAR_IN_ANY_CAR( l_U467[1] ))
                                    {
                                        WARP_CHAR_FROM_CAR_TO_COORD( l_U467[1], -290.62430000, 183.01440000, 13.70230000 );
                                    }
                                    else
                                    {
                                        SET_CHAR_COORDINATES( l_U467[1], -290.62430000, 183.01440000, 13.70230000 );
                                    }
                                    SET_CHAR_HEADING( l_U467[1], 84.72590000 );
                                    if (IS_CHAR_IN_ANY_CAR( l_U467[0] ))
                                    {
                                        WARP_CHAR_FROM_CAR_TO_COORD( l_U467[0], -293.01390000, 182.10890000, 13.70670000 );
                                    }
                                    else
                                    {
                                        SET_CHAR_COORDINATES( l_U467[0], -293.01390000, 182.10890000, 13.70670000 );
                                    }
                                    SET_CHAR_HEADING( l_U467[0], 291.86370000 );
                                    TASK_CHAT_WITH_CHAR( l_U467[0], l_U467[1], 1, 1 );
                                    TASK_CHAT_WITH_CHAR( l_U467[1], l_U467[0], 0, 1 );
                                }
                            }
                        }
                    }
                    for ( l_U523 = 0; l_U523 <= 19; l_U523++ )
                    {
                        if (DOES_CHAR_EXIST( l_U364[l_U523] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U364[l_U523] )))
                            {
                                SET_CHAR_COORDINATES( l_U364[l_U523], l_U296[l_U523]._fU0, l_U296[l_U523]._fU4, l_U296[l_U523]._fU8 );
                            }
                            if (DOES_CHAR_EXIST( l_U358[1] ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U358[1] )))
                                {
                                    sub_26754( l_U364[l_U523], l_U358[1] );
                                }
                            }
                        }
                    }
                    INCREMENT_INT_STAT( 372, 1 );
                    SET_CAM_ACTIVE( l_U533, 0 );
                    SET_CAM_PROPAGATE( l_U533, 0 );
                    SET_USE_HIGHDOF( 0 );
                    SET_WIDESCREEN_BORDERS( 0 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    SET_CAM_BEHIND_PED( sub_4411() );
                }
                WAIT( 0 );
            }
            END_CAM_COMMANDS( ref l_U528 );
            ENABLE_SCENE_STREAMING( 1 );
            if (IS_SCREEN_FADED_OUT())
            {
                DO_SCREEN_FADE_IN( 500 );
                while (NOT IS_SCREEN_FADED_IN())
                {
                    WAIT( 0 );
                }
            }
            SET_PLAYER_CONTROL( sub_859(), 1 );
            SETTIMERA( 0 );
            l_U269 = 4;
            break;
            case 4:
            sub_13503();
            sub_27117();
            sub_2802();
            sub_11294();
            if (NOT l_U522)
            {
                sub_27263();
                l_U522 = 1;
            }
            if (l_U561 == 0)
            {
                if (TIMERA() > 10000)
                {
                    sub_27569();
                }
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_4411(), -260.31000000, 182.44000000, 15.95000000, 50.00000000, 50.00000000, 50.00000000, 0 )))
                {
                    l_U561 = 1;
                }
            }
            if (TIMERA() > 8000)
            {
                if ((NOT (sub_12737( 0 ))) AND (l_U561 == 1))
                {
                    if ((DOES_CHAR_EXIST( l_U358[0] )) AND (DOES_CHAR_EXIST( l_U358[1] )))
                    {
                        if ((NOT (IS_CHAR_INJURED( l_U358[0] ))) AND (NOT (IS_CHAR_INJURED( l_U358[1] ))))
                        {
                            if (sub_27951( l_U358[0], l_U358[1], sub_4411(), 1 ))
                            {
                                if (NOT l_U549)
                                {
                                    sub_7592( "E2TM6_IFAN", ref l_U563, 7, 1 );
                                    l_U549 = 1;
                                }
                                else if (NOT l_U550)
                                {
                                    sub_7592( "E2TM6_OFAN", ref l_U563, 7, 1 );
                                    l_U550 = 1;
                                }
                                else if (NOT (sub_12737( 0 )))
                                {
                                    if (NOT l_U551)
                                    {
                                        if (g_U43690 == 0)
                                        {
                                            sub_13080( ref l_U552, "E2TM6_B1AV1", "E2TM6_B1BV1" );
                                            sub_13427( ref l_U552, ref l_U563, 7, 1 );
                                        }
                                        else if (g_U43690 == 1)
                                        {
                                            sub_13080( ref l_U552, "E2TM6_B1AV2", "E2TM6_B1BV2" );
                                            sub_13427( ref l_U552, ref l_U563, 7, 1 );
                                        }
                                        else if (g_U43690 > 1)
                                        {
                                            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar11 );
                                            if (iVar11 == 0)
                                            {
                                                sub_13080( ref l_U552, "E2TM6_B1AV1", "E2TM6_B1BV1" );
                                                sub_13427( ref l_U552, ref l_U563, 7, 1 );
                                            }
                                            else if (iVar11 == 1)
                                            {
                                                sub_13080( ref l_U552, "E2TM6_B1AV2", "E2TM6_B1BV2" );
                                                sub_13427( ref l_U552, ref l_U563, 7, 1 );
                                            }
                                        };;;
                                        l_U551 = 1;
                                    }
                                };;;
                            }
                            else
                            {
                                sub_8924( ref l_U563, 1 );
                            }
                        }
                    }
                }
            }
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_4411(), l_U271._fU0, l_U271._fU4, l_U271._fU8, 20, 20, 5, 0 ))
            {
                for ( l_U523 = 0; l_U523 <= 19; l_U523++ )
                {
                    if (DOES_CHAR_EXIST( l_U364[l_U523] ))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U364[l_U523] )))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U364[l_U523] )))
                            {
                                CLEAR_CHAR_TASKS( l_U364[l_U523] );
                                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U364[l_U523] );
                            }
                        }
                    }
                }
            }
            if (sub_28958( l_U271._fU0, l_U271._fU4, l_U271._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1, l_U358[0], l_U358[1], 0, "CP7_02", "CP7_04", "CP7_05", "CP7_06", "CP7_06", "CP7_11", 0, 1, "CP7_07", 0 ))
            {
                SET_PLAYER_CONTROL_ADVANCED( sub_859(), 0, 1, 1 );
                sub_3158();
                for ( l_U523 = 0; l_U523 <= 19; l_U523++ )
                {
                    if (DOES_CHAR_EXIST( l_U364[l_U523] ))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U364[l_U523] )))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U364[l_U523] )))
                            {
                                CLEAR_CHAR_TASKS( l_U364[l_U523] );
                            }
                        }
                    }
                }
                l_U269 = 5;
            }
            break;
            case 5:
            sub_36083();
            sub_38068();
            break;
            case 6:
            if (DOES_CHAR_EXIST( l_U358[1] ))
            {
                if (IS_CHAR_INJURED( l_U358[1] ))
                {
                    if (NOT l_U474)
                    {
                        sub_11400( 0 );
                        sub_8924( ref l_U563, 0 );
                        if (DOES_CHAR_EXIST( l_U358[0] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U358[0] )))
                            {
                                sub_7592( "E2TM6_ODED", ref l_U563, 7, 1 );
                            }
                        }
                        l_U474 = 1;
                        for ( l_U523 = 0; l_U523 <= 19; l_U523++ )
                        {
                            if (DOES_CHAR_EXIST( l_U364[l_U523] ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U364[l_U523] )))
                                {
                                    TASK_SMART_FLEE_CHAR( l_U364[l_U523], sub_4411(), 250, 160000 );
                                }
                            }
                        }
                    }
                    else if (NOT (sub_12737( 0 )))
                    {
                        if (NOT l_U475)
                        {
                            PRINT( "CP7_09", 7500, 0 );
                            l_U475 = 1;
                        }
                        else
                        {
                            sub_39644();
                            sub_39851( 28, l_U477, "E2Tm6AU", 1 );
                            sub_11577();
                        }
                    }
                }
            }
            break;
            case 7:
            if (DOES_CHAR_EXIST( l_U358[0] ))
            {
                if (IS_CHAR_INJURED( l_U358[0] ))
                {
                    if (NOT l_U474)
                    {
                        sub_11400( 0 );
                        sub_8924( ref l_U563, 0 );
                        if (DOES_CHAR_EXIST( l_U358[1] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U358[1] )))
                            {
                                sub_7592( "E2TM6_IDED", ref l_U563, 7, 1 );
                            }
                        }
                        l_U474 = 1;
                        for ( l_U523 = 0; l_U523 <= 19; l_U523++ )
                        {
                            if (DOES_CHAR_EXIST( l_U364[l_U523] ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U364[l_U523] )))
                                {
                                    TASK_SMART_FLEE_CHAR( l_U364[l_U523], sub_4411(), 250, 160000 );
                                }
                            }
                        }
                    }
                    else if (NOT (sub_12737( 0 )))
                    {
                        if (NOT l_U475)
                        {
                            PRINT( "CP7_08", 7500, 0 );
                            l_U475 = 1;
                        }
                        else
                        {
                            sub_39644();
                            sub_39851( 28, l_U477, "E2Tm6AU", 1 );
                            sub_11577();
                        }
                    }
                }
            }
            break;
            case 8:
            if (NOT l_U474)
            {
                sub_11400( 0 );
                sub_8924( ref l_U563, 0 );
                if (DOES_CHAR_EXIST( l_U358[0] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U358[0] )))
                    {
                        if (DOES_CHAR_EXIST( l_U358[0] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U358[0] )))
                            {
                                sub_7592( "E2TM6_FHUR", ref l_U563, 7, 1 );
                            }
                        }
                    }
                }
                for ( l_U523 = 0; l_U523 <= 19; l_U523++ )
                {
                    if (DOES_CHAR_EXIST( l_U364[l_U523] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U364[l_U523] )))
                        {
                            TASK_SMART_FLEE_CHAR( l_U364[l_U523], sub_4411(), 250, 160000 );
                        }
                    }
                }
                l_U474 = 1;
            }
            else if (NOT (sub_12737( 0 )))
            {
                if (NOT l_U475)
                {
                    PRINT( "CP7_10", 7500, 0 );
                    l_U475 = 1;
                }
                else
                {
                    sub_39644();
                    sub_39851( 28, l_U477, "E2Tm6AU", 1 );
                    sub_11577();
                }
            }
            break;
        }
    }
    return;
}

void sub_715()
{
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_736();
        sub_2656();
    }
    return;
}

void sub_736()
{
    int iVar2;

    iVar2 = 0;
    sub_750( iVar2 );
    sub_1694();
    return;
}

void sub_750(unknown uParam0)
{
    if (g_U819)
    {
        sub_769();
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_859(), 150 );
    switch (uParam0)
    {
        case 0:
        case 1:
        sub_932( uParam0, 0, 0, -3, 0, 0 );
        break;
        default: sub_1464( "Flow_Proc_Fail_Stats_Update: Need to add stat details for strand" );
    }
    sub_1599();
    return;
}

void sub_769()
{
    sub_778();
    return;
}

void sub_778()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_859()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_932(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_943( uParam1 );
    sub_1138( uParam0, 0, uParam2 );
    sub_1138( uParam0, 1, uParam3 );
    sub_1138( uParam0, 2, uParam4 );
    ProtectedSet(g_U22949[4], ProtectedGet(g_U22949[4]) + iParam5);
    sub_1331();
    return;
}

void sub_943(unknown uParam0)
{
    ADD_SCORE( sub_859(), uParam0 );
    sub_968( uParam0 );
    return;
}

void sub_968(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1079( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_1079(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1138(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U12382[uParam0]._fU44[uParam1] += iParam2;
    if (g_U12382[uParam0]._fU44[uParam1] < 0)
    {
        g_U12382[uParam0]._fU44[uParam1] = 0;
    }
    if (g_U12382[uParam0]._fU44[uParam1] > 100)
    {
        g_U12382[uParam0]._fU44[uParam1] = 100;
    }
    return;
}

void sub_1331()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U196[I] = 4;
    }
    return;
}

void sub_1464(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

void sub_1599()
{
    sub_1608();
    return;
}

void sub_1608()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_1694()
{
    int iVar2;

    iVar2 = 0;
    sub_1706();
    return;
}

void sub_1706()
{
    int iVar2;

    iVar2 = 0;
    g_U12379 = 0;
    g_U30153 = 0;
    sub_1730();
    sub_2354();
    sub_2390( iVar2, 0 );
    sub_2473();
    sub_2512();
    g_U30097[1] = 0;
    return;
}

void sub_1730()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if (((sub_1768( 5, g_U575[I] )) == 1) AND (g_U575[I]._fU20))
        {
            if ((sub_1768( 1, g_U575[I] )) != 0)
            {
                sub_2054( I );
            }
        }
    }
    if (NOT sub_2220())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U95._fU404 = 1000;
    }
    if (g_U95._fU0 == 1016)
    {
        g_U95._fU92 = 1;
    }
    return;
}

int sub_1768(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    switch (uParam0)
    {
        case 0:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 14, 23 );
        break;
        case 1:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 0, 13 );
        break;
        case 2:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 14, 27 );
        break;
        case 3:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 0, 13 );
        break;
        case 4:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 27 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return uParam1._fU0[2];
        break;
    }
    return -1;
}

void sub_2054(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_2139( g_U575 - 1 );
    return;
}

void sub_2139(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_2220()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_1768( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2354()
{
    unknown uVar2;

    uVar2 = g_U10965;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

void sub_2390(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 37))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U22883[iParam0] = iVar4;
    if (bParam1)
    {
        g_U22883[iParam0] += 30000;
    }
    return;
}

void sub_2473()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    g_U22959 = iVar2 + 2000;
    return;
}

void sub_2512()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_2534();
    if (iVar3 > g_U42731._fU4)
    {
        g_U42731._fU4 = iVar3;
        g_U42731._fU8 = iVar2;
    }
    return;
}

int sub_2534()
{
    if (g_U15811[0])
    {
        return 27000;
    }
    return 15000;
}

void sub_2656()
{
    g_U30180 = 0;
    g_U8781 = 1;
    if (DOES_BLIP_EXIST( l_U274 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U274 );
    }
    if (DOES_BLIP_EXIST( l_U278 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U278 );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1457673263 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1099960214 );
    sub_2757();
    sub_2802();
    sub_3158();
    g_U43673++;
    if (g_U43673 > 7)
    {
        g_U43673 = 0;
    }
    g_U43690++;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2757()
{
    if (DOES_VEHICLE_EXIST( l_U478 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U478 );
    }
    return;
}

void sub_2802()
{
    for ( l_U523 = 0; l_U523 <= 19; l_U523++ )
    {
        if (DOES_CHAR_EXIST( l_U364[l_U523] ))
        {
            if (NOT (IS_CHAR_DEAD( l_U364[l_U523] )))
            {
                if (NOT (IS_CHAR_DEAD( l_U358[1] )))
                {
                    if ((sub_2920( l_U364[l_U523], l_U358[1], 1 )) > 100)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U364[l_U523] )))
                        {
                            CLEAR_CHAR_TASKS( l_U364[l_U523] );
                        }
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U364[l_U523] );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( -1788328884 );
                    }
                }
            }
        }
    }
    return;
}

void sub_2920(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return VDIST( sub_2933( uParam0, uParam2 ), sub_2933( uParam1, uParam2 ) );
}

void sub_2933(unknown uParam0, boolean bParam1)
{
    unknown Result;
    unknown uVar5;
    unknown uVar6;

    if (IS_CHAR_DEAD( uParam0 ))
    {
        N_1363505769( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else
    {
        GET_CHAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    if (NOT bParam1)
    {
        Result._fU8 = 0.00000000;
    }
    return Result;
}

void sub_3158()
{
    for ( l_U523 = 0; l_U523 <= 1; l_U523++ )
    {
        if (DOES_VEHICLE_EXIST( l_U471[l_U523] ))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U471[l_U523] );
        }
    }
    for ( l_U523 = 0; l_U523 <= 2; l_U523++ )
    {
        if (DOES_CHAR_EXIST( l_U467[l_U523] ))
        {
            if (NOT (IS_CHAR_DEAD( l_U467[l_U523] )))
            {
                if (NOT (IS_CHAR_INJURED( l_U467[l_U523] )))
                {
                    CLEAR_CHAR_TASKS( l_U467[l_U523] );
                }
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U467[l_U523] );
                MARK_MODEL_AS_NO_LONGER_NEEDED( -46564867 );
            }
        }
    }
    return;
}

void sub_3679(int iParam0, unknown uParam1)
{
    if (NOT (iParam0 == -1))
    {
        g_U30132[iParam0] = uParam1;
    }
    else
    {
        SCRIPT_ASSERT( "SET_GLOBAL_CLUBPED_SLOT_AS_SCRIPT_CONTROLLED - invalid slot number (-1)" );
    }
    return;
}

void sub_3822(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_3858())
            {
                REQUEST_ADDITIONAL_TEXT( uParam0, uParam1 );
            }
            WAIT( 0 );
        }
        else
        {
            bVar4 = false;
        }
    }
    return;
}

int sub_3858()
{
    int I;

    for ( I = 0; I <= (14 - 1); I++ )
    {
        if (IS_STREAMING_ADDITIONAL_TEXT( I ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_3997()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    int iVar6;

    sub_4007( 1 );
    if (DOES_CAM_EXIST( l_U569 ))
    {
        GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar3, ref uVar4, ref iVar5, ref iVar6 );
        if (NOT IS_USING_CONTROLLER())
        {
            GET_MOUSE_INPUT( ref iVar5, ref iVar6 );
        }
        if (NOT IS_LOOK_INVERTED())
        {
            iVar6 *= -1;
        }
        if ((iVar6 > 28) || (iVar6 < 65508))
        {
            fVar2 = TO_FLOAT( iVar6 );
            fVar2 *= fVar2;
            fVar2 /= (TO_FLOAT( 100 )) * (TO_FLOAT( 100 ));
            fVar2 *= l_U577;
            if (iVar6 < 0)
            {
                fVar2 *= -1.00000000;
            }
            l_U579 += fVar2;
            if (l_U579 < l_U580)
            {
                l_U579 = l_U580;
            }
            if (l_U579 > l_U581)
            {
                l_U579 = l_U581;
            }
        }
        if ((iVar5 > 28) || (iVar5 < 65508))
        {
            fVar2 = TO_FLOAT( iVar5 );
            fVar2 *= fVar2;
            fVar2 /= (TO_FLOAT( 100 )) * (TO_FLOAT( 100 ));
            fVar2 *= l_U577;
            if (iVar5 > 0)
            {
                fVar2 *= -1.00000000;
            }
            l_U578 += fVar2;
            if (l_U578 < l_U582)
            {
                l_U578 = l_U582;
            }
            if (l_U578 > l_U583)
            {
                l_U578 = l_U583;
            }
        }
        sub_4471( sub_4411(), ref l_U569, l_U579, 0.00000000, l_U578 );
        SET_CAM_FOV( l_U569, l_U585 );
        SET_CAM_ATTACH_OFFSET( l_U569, l_U586._fU0, l_U586._fU4, l_U586._fU8 );
    }
    else if (DOES_CAM_EXIST( l_U594 ))
    {
        sub_4664();
    }
    BEGIN_CAM_COMMANDS( ref l_U595 );
    if (DOES_CAM_EXIST( l_U569 ))
    {
        DESTROY_CAM( l_U569 );
    }
    CREATE_CAM( 14, ref l_U569 );
    ATTACH_CAM_TO_PED( l_U569, sub_4411() );
    SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U569, 1 );
    SET_CAM_NEAR_CLIP( l_U569, 0.01000000 );
    l_U578 = 0.00000000;
    l_U579 = -9.00000000;
    sub_4471( sub_4411(), ref l_U569, l_U579, 0.00000000, l_U578 );
    SET_CAM_FOV( l_U569, l_U585 );
    SET_CAM_ATTACH_OFFSET( l_U569, l_U586._fU0, l_U586._fU4, l_U586._fU8 );
    SET_CAM_ACTIVE( l_U569, 1 );
    SET_CAM_PROPAGATE( l_U569, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    if (IS_PLAYER_PLAYING( sub_859() ))
    {
        FREEZE_CHAR_POSITION( sub_4411(), 1 );
        SET_CHAR_VISIBLE( sub_4411(), 0 );
    }
    return;
}

void sub_4007(unknown uParam0)
{
    g_U10597 = uParam0;
    return;
}

void sub_4411()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4471(unknown uParam0, unknown uParam1, vector vParam2)
{
    unknown uVar7;
    vector vVar8;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (DOES_CAM_EXIST( (uParam1^) ))
        {
            GET_CHAR_HEADING( uParam0, ref uVar7 );
            vVar8.x = 0.00000000;
            vVar8.y = 0.00000000;
            vVar8.z = uVar7;
            vVar8 = {vVar8 + vParam2};
            SET_CAM_ROT( (uParam1^), vVar8.x, vVar8.y, vVar8.z );
        }
    }
    return;
}

void sub_4664()
{
    for ( l_U523 = 0; l_U523 < l_U589; l_U523++ )
    {
        if (DOES_CAM_EXIST( l_U589[l_U523] ))
        {
            DESTROY_CAM( l_U589[l_U523] );
        }
    }
    if (DOES_CAM_EXIST( l_U594 ))
    {
        DESTROY_CAM( l_U594 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        END_CAM_COMMANDS( ref l_U595 );
    }
    return;
}

int sub_5174(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -1255452397;
        case 3: return -789894171;
        case 2: return 1638119866;
        case 1: return -304802106;
    }
    SCRIPT_ASSERT( "Return_Contact_Vehicle_Model: Unknown Contact ID\n" );
    return -1660661558;
}

void sub_5381(unknown uParam0)
{
    StrCopy( ref l_U19._fU0, uParam0, 16 );
    sub_5398();
    return;
}

void sub_5398()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U19._fU16[I]._fU0 = nil;
        StrCopy( ref l_U19._fU16[I]._fU4, "", 32 );
        l_U19._fU344[I] = 0;
    }
    return;
}

void sub_5500(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U19._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U19._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_5580( "\n PED NUMBER ", uParam0 );
    sub_5620( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_5580(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5620(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5647(unknown uParam0, boolean bParam1)
{
    char[16] cVar4;

    if (NOT g_U16014[uParam0]._fU212._fU0)
    {
        if (g_U95._fU0 == 1012)
        {
            g_U95._fU92 = 1;
        }
        g_U16014[uParam0]._fU212._fU0 = 1;
        if (bParam1)
        {
            StrCopy( ref cVar4, "CONT_", 16 );
            ConcatString(ref cVar4, ref g_U16014[uParam0]._fU212._fU8, 16);
            SET_PHONE_HUD_ITEM( 2, ref cVar4, -1 );
        }
        g_U95._fU520 = 0;
    }
    return;
}

void sub_5967()
{
    sub_4007( 0 );
    sub_4664();
    if (DOES_CAM_EXIST( l_U570 ))
    {
        DESTROY_CAM( l_U570 );
    }
    if (DOES_CAM_EXIST( l_U571 ))
    {
        DESTROY_CAM( l_U571 );
    }
    if (DOES_CAM_EXIST( l_U569 ))
    {
        DESTROY_CAM( l_U569 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        if (IS_PLAYER_PLAYING( sub_859() ))
        {
            FREEZE_CHAR_POSITION( sub_4411(), 0 );
            SET_CHAR_VISIBLE( sub_4411(), 1 );
            SET_CAM_BEHIND_PED( sub_4411() );
        }
        END_CAM_COMMANDS( ref l_U595 );
    }
    return;
}

void sub_6186(unknown uParam0)
{
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    CREATE_CAM( 14, ref l_U589[0] );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U589[0], uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U589[0], 1.61040000, 0.91440000, 0.59110000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U589[0], 1 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U589[0], uParam0 );
        POINT_CAM_AT_PED( l_U589[0], uParam0 );
        SET_CAM_POINT_OFFSET( l_U589[0], 0.73220000, 0.43610000, 0.58830000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U589[0], 1 );
    }
    SET_CAM_FOV( l_U589[0], 13.20010000 );
    SET_CAM_ACTIVE( l_U589[0], 1 );
    CREATE_CAM( 14, ref l_U589[1] );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U589[1], uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U589[1], 1.18410000, 1.13140000, 0.62390000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U589[1], 1 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U589[1], uParam0 );
        POINT_CAM_AT_PED( l_U589[1], uParam0 );
        SET_CAM_POINT_OFFSET( l_U589[1], 0.52730000, 0.48740000, 0.60610000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U589[1], 1 );
    }
    SET_CAM_FOV( l_U589[1], 13.20010000 );
    SET_CAM_ACTIVE( l_U589[1], 1 );
    CREATE_CAM( 14, ref l_U589[2] );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U589[2], uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U589[2], 0.75790000, 1.34850000, 0.65670000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U589[2], 1 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U589[2], uParam0 );
        POINT_CAM_AT_PED( l_U589[2], uParam0 );
        SET_CAM_POINT_OFFSET( l_U589[2], 0.32250000, 0.53870000, 0.62380000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U589[2], 1 );
    }
    SET_CAM_FOV( l_U589[2], 13.20010000 );
    SET_CAM_ACTIVE( l_U589[2], 1 );
    CREATE_CAM( 14, ref l_U589[3] );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U589[3], uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U589[3], 0.33170000, 1.56560000, 0.68950000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U589[3], 1 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U589[3], uParam0 );
        POINT_CAM_AT_PED( l_U589[3], uParam0 );
        SET_CAM_POINT_OFFSET( l_U589[3], 0.11770000, 0.58990000, 0.64160000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U589[3], 1 );
    }
    SET_CAM_FOV( l_U589[3], 13.20010000 );
    SET_CAM_ACTIVE( l_U589[3], 1 );
    CREATE_CAM( 25, ref l_U594 );
    SET_CAM_SPLINE_DURATION( l_U594, 20000 );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U594, 0 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U594, 0 );
    ADD_CAM_SPLINE_NODE( l_U594, l_U589[0] );
    ADD_CAM_SPLINE_NODE( l_U594, l_U589[1] );
    ADD_CAM_SPLINE_NODE( l_U594, l_U589[2] );
    ADD_CAM_SPLINE_NODE( l_U594, l_U589[3] );
    SET_CAM_ACTIVE( l_U594, 1 );
    SET_CAM_PROPAGATE( l_U594, 1 );
    return;
}

void sub_7276(boolean bParam0)
{
    if (bParam0)
    {
        g_U30166 = 1;
        g_U30234 = GET_ID_OF_THIS_THREAD();
    }
    else
    {
        g_U30166 = 0;
        g_U30234 = nil;
    }
    return;
}

void sub_7592(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_7613( uParam0, ref l_U19._fU0, uParam1, uParam2, uParam3 );
}

void sub_7613(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_7667( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_7667(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_7689( iParam1 )))
    {
        return 0;
    }
    l_U19._fU384 = 0;
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
    sub_8377( ref g_U8868, ref l_U19 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_7689(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_7766( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_7766( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_7766( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_7766(unknown uParam0)
{
    return;
}

void sub_8377(int iParam0, int iParam1)
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

int sub_8576(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8867 == 1)) || (g_U8867 == 2))
    {
        if (uParam0._fU4 == g_U8866)
        {
            return 1;
        }
        else
        {
            sub_7766( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_7766( "\n speech is not playing" );
    }
    return 0;
}

int sub_8739()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_8924(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8866)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_9048()
{
    for ( l_U523 = 0; l_U523 < l_U589; l_U523++ )
    {
        if (DOES_CAM_EXIST( l_U589[l_U523] ))
        {
            DESTROY_CAM( l_U589[l_U523] );
        }
    }
    if (DOES_CAM_EXIST( l_U594 ))
    {
        DESTROY_CAM( l_U594 );
    }
    SET_CAM_BEHIND_PED( sub_4411() );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    return;
}

void sub_9279()
{
    sub_9304( 0, l_U479, l_U482, ref l_U478 );
    SET_CAR_AS_MISSION_CAR( l_U478 );
    return;
}

void sub_9304(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;

    uVar8 = sub_5174( uParam0 );
    return sub_9335( uParam5, uVar8, uParam1, uParam4, uParam0 );
}

int sub_9335(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    SUPPRESS_CAR_MODEL( uParam1 );
    REQUEST_MODEL( uParam1 );
    if (NOT (HAS_MODEL_LOADED( uParam1 )))
    {
        REQUEST_MODEL( uParam1 );
        return 0;
    }
    CLEAR_AREA( uParam2._fU0, uParam2._fU4, uParam2._fU8, 5.00000000, 0 );
    CREATE_CAR( uParam1, uParam2._fU0, uParam2._fU4, uParam2._fU8, uParam0, 1 );
    SET_CAR_HEADING( (uParam0^), uParam5 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    sub_9467( (uParam0^), uParam6 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uParam1 );
    }
    return 1;
}

void sub_9467(unknown uParam0, int iParam1)
{
    if (iParam1 == 8)
    {
        return;
    }
    switch (iParam1)
    {
        case 0:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 0, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 1, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 0.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_4411() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_4411() )))
            {
                PRINTSTRING( "KGM.............Retune TONY car to K109_THE_STUDIO\n" );
                RETUNE_RADIO_TO_STATION_NAME( "K109_THE_STUDIO" );
            }
        }
        break;
        case 3:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 0 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 0, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 0, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 3.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_4411() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_4411() )))
            {
                PRINTSTRING( "KGM.............Retune DOMINICANS car to SAN_JUAN_SOUNDS\n" );
                RETUNE_RADIO_TO_STATION_NAME( "SAN_JUAN_SOUNDS" );
            }
        }
        break;
        case 2:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 134, 136 );
        SET_EXTRA_CAR_COLOURS( uParam0, 134, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 0.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_4411() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_4411() )))
            {
                PRINTSTRING( "KGM.............Retune YUSUF car to BEAT\n" );
                RETUNE_RADIO_TO_STATION_NAME( "BEAT_95" );
            }
        }
        break;
        case 1:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 45, 45 );
        SET_EXTRA_CAR_COLOURS( uParam0, 35, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 0.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_4411() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_4411() )))
            {
                PRINTSTRING( "KGM.............Retune MORI car to DANCE_ROCK\n" );
                RETUNE_RADIO_TO_STATION_NAME( "DANCE_ROCK" );
            }
        }
        break;
    }
    return;
}

void sub_10670()
{
    CREATE_CHAR( 26, -1457673263, -277.74930000, 189.66400000, 13.74520000, ref l_U358[0], 1 );
    SET_CHAR_HEADING( l_U358[0], 197.44790000 );
    SET_CHAR_COMPONENT_VARIATION( l_U358[0], 0, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U358[0], 7, 1, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U358[0], 2, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U358[0], 1, 0, 0 );
    sub_5500( 3, l_U358[0], "BILL_BLUE", 0 );
    SET_AMBIENT_VOICE_NAME( l_U358[0], "BILL_BLUE" );
    CREATE_CHAR( 26, -1457673263, -276.88890000, 189.04840000, 13.74520000, ref l_U358[1], 1 );
    SET_CHAR_HEADING( l_U358[1], 213.70260000 );
    SET_CHAR_COMPONENT_VARIATION( l_U358[1], 0, 0, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U358[1], 7, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U358[1], 2, 0, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U358[1], 1, 0, 1 );
    sub_5500( 2, l_U358[1], "BOBBY_BLUE", 0 );
    SET_AMBIENT_VOICE_NAME( l_U358[1], "BOBBY_BLUE" );
    for ( l_U523 = 0; l_U523 <= 1; l_U523++ )
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U358[l_U523], 1 );
    }
    OPEN_SEQUENCE_TASK( ref l_U562 );
    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U358[1] );
    TASK_CHAT_WITH_CHAR( 0, l_U358[1], 1, 0 );
    CLOSE_SEQUENCE_TASK( l_U562 );
    TASK_PERFORM_SEQUENCE( l_U358[0], l_U562 );
    CLEAR_SEQUENCE_TASK( l_U562 );
    OPEN_SEQUENCE_TASK( ref l_U562 );
    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U358[0] );
    TASK_CHAT_WITH_CHAR( 0, l_U358[0], 0, 0 );
    CLOSE_SEQUENCE_TASK( l_U562 );
    TASK_PERFORM_SEQUENCE( l_U358[1], l_U562 );
    CLEAR_SEQUENCE_TASK( l_U562 );
    l_U513 = 1;
    return;
}

void sub_11294()
{
    if (g_U30199 != -1)
    {
        if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( g_U29971[g_U30199]._fU12, sub_4411(), 0 ))
            {
                if (IS_CHAR_INJURED( g_U29971[g_U30199]._fU12 ))
                {
                    sub_11400( 0 );
                    sub_8924( ref l_U563, 0 );
                    CLEAR_PRINTS();
                    PRINT( "CP7_16", 7000, 0 );
                    sub_11577();
                }
            }
        }
    }
    if (g_U30200 != -1)
    {
        if (DOES_CHAR_EXIST( g_U29971[g_U30200]._fU12 ))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( g_U29971[g_U30200]._fU12, sub_4411(), 0 ))
            {
                if (IS_CHAR_INJURED( g_U29971[g_U30200]._fU12 ))
                {
                    sub_11400( 0 );
                    sub_8924( ref l_U563, 0 );
                    CLEAR_PRINTS();
                    PRINT( "CP7_16", 7000, 0 );
                    sub_11577();
                }
            }
        }
    }
    if ((sub_11755( sub_4411(), 1, 1 )) || (sub_11755( sub_4411(), 2, 1 )))
    {
        if (IS_CHAR_SHOOTING( sub_4411() ))
        {
            sub_11400( 0 );
            sub_8924( ref l_U563, 0 );
            CLEAR_PRINTS();
            PRINT( "CP7_16", 7000, 0 );
            sub_11577();
        }
    }
    if (g_U30198 != -1)
    {
        if (DOES_CHAR_EXIST( g_U29971[g_U30198]._fU12 ))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( g_U29971[g_U30198]._fU12, sub_4411(), 0 ))
            {
                if (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 ))
                {
                    sub_11400( 0 );
                    sub_8924( ref l_U563, 0 );
                    CLEAR_PRINTS();
                    PRINT( "CP7_16", 7000, 0 );
                    sub_11577();
                }
            }
        }
    }
    return;
}

void sub_11400(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_AMBIENT_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8865 >= 1) AND (g_U8865 <= 3))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_11577()
{
    sub_736();
    sub_2656();
    return;
}

int sub_11755(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_11783( uParam0, uParam1 ))
        {
            return 1;
        }
        switch (uParam1)
        {
            case 0:
            if (bParam2)
            {
                if ((LOCATE_CHAR_ON_FOOT_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 )) || ((IS_CHAR_ON_ANY_BIKE( uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
                {
                    return 1;
                }
            }
            break;
            case 1:
            if (bParam2)
            {
                if ((LOCATE_CHAR_ON_FOOT_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 )) || ((IS_CHAR_ON_ANY_BIKE( uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
                {
                    return 1;
                }
            }
            break;
            case 2:
            if (bParam2)
            {
                if ((LOCATE_CHAR_ON_FOOT_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 )) || ((IS_CHAR_ON_ANY_BIKE( uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
                {
                    return 1;
                }
            }
            break;
        }
    }
    return 0;
}

int sub_11783(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        switch (uParam1)
        {
            case 0:
            GET_INTERIOR_AT_COORDS( -395.22000000, 400.50000000, 14.40000000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 1:
            GET_INTERIOR_AT_COORDS( -483.90180000, 149.43310000, 7.56070000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 2:
            GET_INTERIOR_AT_COORDS( -431.82560000, 351.76230000, 11.71660000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            if (IS_CHAR_IN_AREA_3D( sub_4411(), -438.84750000, 349.78630000, 9.59170000, -436.09750000, 353.78630000, 14.46670000, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

int sub_12737(boolean bParam0)
{
    if (((((IS_MESSAGE_BEING_DISPLAYED()) || (((sub_12753()) AND (NOT bParam0)) || ((sub_12807()) AND (bParam0)))) || (sub_12836())) || (IS_SCRIPTED_CONVERSATION_ONGOING())) || (sub_12895()))
    {
        return 1;
    }
    return 0;
}

int sub_12753()
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8867 == 1)) || (g_U8867 == 2))
    {
        return 1;
    }
    return 0;
}

void sub_12807()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

int sub_12836()
{
    if ((g_U95._fU0 == 1007) || (g_U95._fU0 == 1008))
    {
        return 1;
    }
    return 0;
}

int sub_12895()
{
    int iVar2;
    int iVar3;

    GET_GAME_TIMER( ref iVar3 );
    iVar2 = iVar3 - l_U239;
    if (iVar2 < 35)
    {
        return 1;
    }
    return 0;
}

void sub_13080(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_13131( uParam0, uParam1, uParam2, "END", "END", "END", "END", "END", "END" );
    return;
}

void sub_13131(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    char[16] cVar11;
    int I;

    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        switch (I)
        {
            case 0:
            StrCopy( ref cVar11, uParam1, 16 );
            break;
            case 1:
            StrCopy( ref cVar11, uParam2, 16 );
            break;
            case 2:
            StrCopy( ref cVar11, uParam3, 16 );
            break;
            case 3:
            StrCopy( ref cVar11, uParam4, 16 );
            break;
            case 4:
            StrCopy( ref cVar11, uParam5, 16 );
            break;
            case 5:
            StrCopy( ref cVar11, uParam6, 16 );
            break;
            case 6:
            StrCopy( ref cVar11, uParam7, 16 );
            break;
            case 7:
            StrCopy( ref cVar11, uParam8, 16 );
            break;
            case 8:
            StrCopy( ref cVar11, "END", 16 );
            break;
        }
        (uParam0^)[I] = {cVar11};
        if (COMPARE_STRING( ref (uParam0^)[I], "END" ))
        {
            I = (uParam0^);
        }
    }
    return;
}

void sub_13427(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_13448( uParam0, ref l_U19._fU0, uParam1, uParam2, uParam3 );
}

void sub_13448(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    return sub_7667( uParam0, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

void sub_13503()
{
    if (DOES_CHAR_EXIST( l_U358[0] ))
    {
        if (IS_CHAR_INJURED( l_U358[0] ))
        {
            l_U269 = 7;
        }
    }
    if (DOES_CHAR_EXIST( l_U358[1] ))
    {
        if (IS_CHAR_INJURED( l_U358[1] ))
        {
            l_U269 = 6;
        }
    }
    for ( l_U523 = 0; l_U523 <= 19; l_U523++ )
    {
        if (DOES_CHAR_EXIST( l_U364[l_U523] ))
        {
            if (IS_CHAR_INJURED( l_U364[l_U523] ))
            {
                l_U269 = 8;
            }
        }
    }
    return;
}

int sub_13773(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, int iParam9, unknown uParam10, unknown uParam11)
{
    unknown uVar14;
    int iVar15;

    sub_13782();
    sub_14662();
    if (IS_SCREEN_FADED_IN())
    {
        if ((uParam10) AND (IS_WANTED_LEVEL_GREATER( sub_859(), 0 )))
        {
            if (DOES_BLIP_EXIST( l_U234 ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U234 );
                sub_14860( uParam7 );
            }
            if ((NOT (sub_12737( 0 ))) AND (NOT l_U203))
            {
                sub_14924( uParam11, 0 );
                l_U247 = uParam11;
                l_U203 = 1;
            }
        }
        else if (l_U203)
        {
            sub_14860( uParam11 );
            l_U203 = 0;
        }
        if (NOT (DOES_BLIP_EXIST( l_U234 )))
        {
            ADD_BLIP_FOR_COORD( uParam0, uParam1, uParam2 - 1.00000000, ref l_U234 );
            sub_15095( l_U234 );
            if (l_U222)
            {
                SHOW_BLIP_ON_ALTIMETER( l_U234, 1 );
            }
        }
        if (NOT (sub_12737( 0 )))
        {
            if (NOT l_U205)
            {
                sub_14924( uParam7, 0 );
                l_U205 = 1;
            }
        }
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_4411(), uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6 ))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_4411() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4411(), ref uVar14 );
                GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar14, ref iVar15 );
                if (iVar15 >= (iParam9 - 1))
                {
                    if (sub_15321())
                    {
                        sub_14860( uParam7 );
                        sub_14860( uParam8 );
                        sub_14860( uParam11 );
                        sub_15841();
                        return 1;
                    }
                }
                else if (NOT (sub_12737( 0 )))
                {
                    sub_14924( uParam8, 0 );
                }
            }
            else if (NOT (sub_12737( 0 )))
            {
                sub_14924( uParam8, 0 );
            }
        }
        sub_16347( uParam0, uParam1, uParam2, 0, 0 );
    }
    sub_19807( uParam0, uParam1, uParam2 );
    return 0;
}

void sub_13782()
{
    if (NOT l_U216)
    {
        l_U251 = CREATE_WIDGET_GROUP( "Locates Header" );
        ADD_WIDGET_TOGGLE( "bPrintedLoseWantedLevel", ref l_U203 );
        ADD_WIDGET_TOGGLE( "bPlayLostCopsSpeech", ref l_U204 );
        ADD_WIDGET_TOGGLE( "bInitialGodTextPrinted", ref l_U205 );
        ADD_WIDGET_TOGGLE( "bPrintedGetACar", ref l_U206 );
        ADD_WIDGET_TOGGLE( "bPrintedGetBackInCar", ref l_U208 );
        ADD_WIDGET_TOGGLE( "bPrintedGetInCar", ref l_U207 );
        ADD_WIDGET_TOGGLE( "bPrintedPickupAllBuddysText", ref l_U209 );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[0]", ref l_U210[0] );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[1]", ref l_U210[1] );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[2]", ref l_U210[2] );
        ADD_WIDGET_TOGGLE( "bUseSpecificJSkipCoords", ref l_U214 );
        ADD_WIDGET_TOGGLE( "bDontDoSafeForCutsceneCheck", ref l_U215 );
        ADD_WIDGET_FLOAT_SLIDER( "fClearCarDistance", ref l_U236, 0.00000000, 100.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "fBuddyJoinDistance", ref l_U237, 0.00000000, 100.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "fSkipHeading", ref l_U238, 0.00000000, 360.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.x", ref l_U248._fU0, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.y", ref l_U248._fU4, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.z", ref l_U248._fU8, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_TOGGLE( "bToldPlayerToFindCarWithMoreSeats", ref l_U217 );
        ADD_WIDGET_TOGGLE( "bHasBeenInCar", ref l_U218 );
        END_WIDGET_GROUP();
        l_U216 = 1;
    }
    return;
}

void sub_14662()
{
    int I;

    if (IS_PLAYER_PLAYING( sub_859() ))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_4411(), 0 );
    }
    for ( I = 0; I < l_U243; I++ )
    {
        if (DOES_CHAR_EXIST( l_U243[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U243[I] )))
            {
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U243[I], 0 );
            }
        }
    }
    return;
}

void sub_14860(unknown uParam0)
{
    if (NOT (IS_STRING_NULL( uParam0 )))
    {
        CLEAR_THIS_PRINT( uParam0 );
    }
    return;
}

void sub_14924(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (NOT (IS_STRING_NULL( uParam0 )))
        {
            if (NOT (COMPARE_STRING( uParam0, "" )))
            {
                PRINT_NOW( uParam0, 7500, 1 );
            }
        }
    }
    GET_GAME_TIMER( ref l_U239 );
    return;
}

void sub_15095(unknown uParam0)
{
    if (DOES_BLIP_EXIST( uParam0 ))
    {
        if (DOES_BLIP_EXIST( l_U235 ))
        {
            SET_ROUTE( l_U235, 0 );
        }
        l_U235 = uParam0;
        SET_ROUTE( uParam0, 1 );
    }
    return;
}

int sub_15321()
{
    int iVar2;

    iVar2 = 1;
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_4411() ))
    {
        if ((IS_CHAR_ON_ANY_BIKE( sub_4411() )) || (IS_CHAR_IN_ANY_HELI( sub_4411() )))
        {
            iVar2 = 0;
        }
    }
    if (l_U221)
    {
        if (sub_15398( sub_4411() ))
        {
            if ((sub_15476( 1, iVar2 )) || (l_U215))
            {
                return 1;
            }
        }
    }
    else if ((sub_15476( 1, iVar2 )) || (l_U215))
    {
        return 1;
    }
    return 0;
}

int sub_15398(unknown uParam0)
{
    float fVar3;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_SPEED( uParam0, ref fVar3 );
        if ((fVar3 > -0.50000000) AND (fVar3 < 0.50000000))
        {
            return 1;
        }
    }
    return 0;
}

int sub_15476(boolean bParam0, boolean bParam1)
{
    unknown uVar4;
    int iVar5;
    float fVar6;

    if (IS_MINIGAME_IN_PROGRESS())
    {
        return 0;
    }
    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_4411() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4411(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_CAR_UPRIGHT_VALUE( uVar4, ref fVar6 );
                if ((fVar6 < 0.95000000) || (fVar6 > 1.01100000))
                {
                    return 0;
                }
            }
        }
    }
    if (bParam0)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_4411() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4411(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_4411()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_4411() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_4411() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_859() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_859() )))
    {
        return 0;
    }
    return 1;
}

void sub_15841()
{
    int I;

    sub_15850();
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_BLIP_EXIST( l_U230[I] ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U230[I] );
        }
    }
    if (DOES_BLIP_EXIST( l_U229 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U229 );
    }
    l_U235 = nil;
    l_U209 = 0;
    for ( I = 0; I < l_U210; I++ )
    {
        l_U210[I] = 0;
        l_U225[I] = 0;
    }
    l_U205 = 0;
    l_U203 = 0;
    l_U204 = 0;
    l_U206 = 0;
    l_U208 = 0;
    l_U207 = 0;
    l_U214 = 0;
    l_U215 = 0;
    l_U217 = 0;
    l_U218 = 0;
    l_U241 = 0;
    for ( I = 0; I < l_U243; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U243[I] )))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U243[I], 0 );
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U243[I], 1 );
        }
    }
    if (IS_PLAYER_PLAYING( sub_859() ))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( sub_4411(), 0 );
    }
    if (IS_PLAYER_PLAYING( sub_859() ))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_4411(), 1 );
    }
    l_U219 = 0;
    l_U220 = 0;
    l_U221 = 0;
    l_U222 = 0;
    return;
}

void sub_15850()
{
    if (DOES_BLIP_EXIST( l_U234 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U234 );
    }
    return;
}

void sub_16347(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown[1] uVar7;

    array(ref uVar7, 1);
    sub_16370( uParam0, uParam1, uParam2, uParam3, uParam4 );
    return;
}

void sub_16370(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4)
{
    int I;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    sub_13782();
    if (l_U214)
    {
        uParam0 = l_U248._fU0;
        uParam1 = l_U248._fU4;
        uParam2 = l_U248._fU8;
        uVar12 = l_U238;
        l_U214 = 0;
    }
    else if (NOT (IS_CHAR_INJURED( sub_4411() )))
    {
        GET_CHAR_HEADING( sub_4411(), ref uVar12 );
    }
    if (IS_SCREEN_FADED_IN())
    {
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
        {
            PRINTSTRING( "J_SKIP - called" );
            PRINTNL();
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            CLEAR_WANTED_LEVEL( sub_859() );
            sub_16581( ref uVar8 );
            if (bParam3)
            {
                PRINTSTRING( "J_SKIP - onFoot = TRUE" );
                PRINTNL();
                sub_17002( uParam0, uParam1, uParam2, 0 );
                for ( I = 0; I < l_U243; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U243[I] );
                        if (NOT (IS_CHAR_INJURED( sub_4411() )))
                        {
                            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4411(), 0.00000000, 1.00000000 + (TO_FLOAT( I )), 0.00000000, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                            SET_CHAR_COORDINATES( l_U243[I], uVar9._fU0, uVar9._fU4, uVar9._fU8 );
                            SET_CHAR_HEADING( l_U243[I], uVar12 );
                        }
                    }
                }
            }
            else if (DOES_VEHICLE_EXIST( uParam4 ))
            {
                PRINTSTRING( "J_SKIP - SpecificCarID exists" );
                PRINTNL();
                if (IS_VEH_DRIVEABLE( uParam4 ))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_4411() );
                    WARP_CHAR_INTO_CAR( sub_4411(), uParam4 );
                    for ( I = 0; I < l_U243; I++ )
                    {
                        if (DOES_CHAR_EXIST( l_U243[I] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U243[I] );
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U243[I], uParam4, I );
                                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U243[I], 0 );
                            }
                        }
                    }
                }
                sub_17002( uParam0, uParam1, uParam2, uVar12 );
                if (IS_VEH_DRIVEABLE( uParam4 ))
                {
                    SET_CAR_COORDINATES( uParam4, uParam0, uParam1, uParam2 );
                }
            }
            else
            {
                PRINTSTRING( "J_SKIP - searching for temp_car" );
                PRINTNL();
                if (DOES_VEHICLE_EXIST( uVar8 ))
                {
                    if (NOT (IS_VEH_DRIVEABLE( uVar8 )))
                    {
                        PRINTSTRING( "J_SKIP - temp_car existed but not driveable" );
                        PRINTNL();
                        uVar8 = nil;
                    }
                }
                if (NOT (DOES_VEHICLE_EXIST( uVar8 )))
                {
                    PRINTSTRING( "J_SKIP - creating new temp_car" );
                    PRINTNL();
                    REQUEST_MODEL( 1264341792 );
                    while (NOT (HAS_MODEL_LOADED( 1264341792 )))
                    {
                        WAIT( 0 );
                    }
                    CREATE_CAR( 1264341792, uParam0, uParam1, uParam2, ref uVar8, 1 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( 1264341792 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_4411() );
                    WARP_CHAR_INTO_CAR( sub_4411(), uVar8 );
                    sub_17909( uVar8 );
                }
                else
                {
                    PRINTSTRING( "J_SKIP - temp_car exists" );
                    PRINTNL();
                    if (IS_VEH_DRIVEABLE( uVar8 ))
                    {
                        PRINTSTRING( "J_SKIP - temp_car is driveable" );
                        PRINTNL();
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_4411() );
                        WARP_CHAR_INTO_CAR( sub_4411(), uVar8 );
                    }
                }
                for ( I = 0; I < l_U243; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U243[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                        {
                            PRINTSTRING( "J_SKIP - buddy exists, clearing tasks." );
                            PRINTNL();
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U243[I] );
                            if (IS_VEH_DRIVEABLE( uVar8 ))
                            {
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U243[I], uVar8, I );
                            }
                            else
                            {
                                PRINTSTRING( "J_SKIP - buddy exists, clearing tasks." );
                                PRINTNL();
                            }
                        }
                    }
                }
                for ( I = 0; I < l_U243; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U243[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                        {
                            if (IS_VEH_DRIVEABLE( uVar8 ))
                            {
                                PRINTSTRING( "J_SKIP - warping buddy into car" );
                                PRINTNL();
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U243[I], uVar8, I );
                            }
                        }
                    }
                }
                if (IS_VEH_DRIVEABLE( uVar8 ))
                {
                    SET_CAR_COORDINATES( uVar8, uParam0, uParam1, uParam2 );
                    SET_CAR_HEADING( uVar8, uVar12 );
                }
            }
            LOAD_SCENE( uParam0, uParam1, uParam2 );
            WAIT( 500 );
            sub_18529( 0, 0 );
            DO_SCREEN_FADE_IN( 500 );
        }
    }
    return;
}

void sub_16581(unknown uParam0)
{
    if (IS_PLAYER_PLAYING( sub_859() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_4411() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4411(), uParam0 );
        }
    }
    if (NOT (DOES_VEHICLE_EXIST( (uParam0^) )))
    {
        GET_CAR_CHAR_IS_USING( sub_4411(), uParam0 );
    }
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            sub_16701( (uParam0^) );
        }
        else
        {
            (uParam0^) = nil;
        }
    }
    else
    {
        (uParam0^) = nil;
    }
    return;
}

void sub_16701(unknown uParam0)
{
    unknown uVar3;
    int I;
    int iVar5;

    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            GET_DRIVER_OF_CAR( uParam0, ref uVar3 );
            if (DOES_CHAR_EXIST( uVar3 ))
            {
                if (NOT (IS_CHAR_INJURED( uVar3 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( uVar3 );
                }
                else
                {
                    DELETE_CHAR( ref uVar3 );
                }
            }
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar5 );
            for ( I = 0; I < iVar5; I++ )
            {
                if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uParam0, I )))
                {
                    GET_CHAR_IN_CAR_PASSENGER_SEAT( uParam0, I, ref uVar3 );
                    if (DOES_CHAR_EXIST( uVar3 ))
                    {
                        if (NOT (IS_CHAR_INJURED( uVar3 )))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( uVar3 );
                        }
                        else
                        {
                            DELETE_CHAR( ref uVar3 );
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_17002(unknown uParam0, unknown uParam1, float fParam2, unknown uParam3)
{
    fParam2 += 1.00000000;
    SET_CHAR_COORDINATES( sub_4411(), uParam0, uParam1, fParam2 );
    SET_GAME_CAM_HEADING( 0 );
    REQUEST_COLLISION_AT_POSN( uParam0, uParam1, fParam2 );
    LOAD_ALL_OBJECTS_NOW();
    GET_CHAR_COORDINATES( sub_4411(), ref uParam0, ref uParam1, ref fParam2 );
    GET_GROUND_Z_FOR_3D_COORD( uParam0, uParam1, fParam2, ref fParam2 );
    SET_CHAR_COORDINATES( sub_4411(), uParam0, uParam1, fParam2 );
    SET_CHAR_HEADING( sub_4411(), uParam3 );
    return;
}

void sub_17909(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_18529(boolean bParam0, unknown uParam1)
{
    boolean bVar4;
    int iVar5;
    int iVar6;

    PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - called for " );
    PRINTNL();
    if (NOT bParam0)
    {
        if (NOT IS_SCREEN_FADED_OUT())
        {
            SCRIPT_ASSERT( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN() - should only be called when screen is faded out." );
        }
        else
        {
            WAIT( 0 );
        }
    }
    if ((NOT (IS_CHAR_INJURED( sub_4411() ))) AND ((IS_SCREEN_FADED_OUT()) || (bParam0)))
    {
        PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - checking if player is near a club..." );
        PRINTNL();
        g_U30093[0] = 0;
        g_U30093[1] = 0;
        g_U30093[2] = 0;
        g_U30176 = uParam1;
        if (sub_18909( sub_4411(), 0, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - bahama mamas" );
            PRINTNL();
            g_U30110[0] = 1;
        }
        if (sub_18909( sub_4411(), 1, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - maisonette 9" );
            PRINTNL();
            g_U30110[1] = 1;
        }
        if (sub_18909( sub_4411(), 2, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - hercules" );
            PRINTNL();
            g_U30110[2] = 1;
        }
        sub_19458( 0 );
        sub_19458( 1 );
        sub_19458( 2 );
        bVar4 = false;
        GET_GAME_TIMER( ref l_U202 );
        while (NOT bVar4)
        {
            GET_GAME_TIMER( ref iVar5 );
            iVar6 = iVar5 - l_U202;
            if ((iVar6 > 15000) || (((g_U30110[0] == 0) AND (g_U30110[1] == 0)) AND (g_U30110[2] == 0)))
            {
                if (iVar6 > 15000)
                {
                    ;
                }
                bVar4 = true;
            }
            else
            {
                PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN  - loading stuff" );
                PRINTNL();
                WAIT( 0 );
            }
        }
        if (NOT bParam0)
        {
            WAIT( 0 );
        }
        PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - finished" );
        PRINTNL();
    }
    return;
}

int sub_18909(unknown uParam0, unknown uParam1, unknown uParam2)
{
    vector vVar5;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    vVar5 = {sub_18920( uParam1 )};
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_11755( uParam0, uParam1, 0 ))
        {
            return 1;
        }
        else
        {
            GET_CHAR_COORDINATES( uParam0, ref vVar8.x, ref vVar8.y, ref vVar8.z );
            uVar11 = {vVar5 - vVar8};
            uVar11._fU8 = 0.00000000;
            if ((VMAG2( uVar11 )) < (uParam2 * uParam2))
            {
                return 1;
            }
        }
    }
    return 0;
}

vector sub_18920(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return vector( 14.17720000, 397.67000000, -399.10690000);
        break;
        case 1:
        return vector( 9.80000000, 153.41000000, -468.03000000);
        break;
        case 2:
        return vector( 11.54000000, 356.98000000, -440.28000000);
        break;
    }
    return vector( 0.00000000, 0.00000000, 0.00000000);
}

void sub_19458(unknown uParam0)
{
    g_U30114[uParam0] = 1;
    return;
}

void sub_19807(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    if (NOT (sub_19832( uParam0, uParam1, uParam2, l_U236, 1120403456 )))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_4411(), uParam0, uParam1, uParam2, 50.00000000, 50.00000000, 50.00000000, 0 )))
        {
            GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar5 );
            if (DOES_VEHICLE_EXIST( uVar5 ))
            {
                if (NOT (IS_CAR_DEAD( uVar5 )))
                {
                    if (NOT (LOCATE_CAR_3D( uVar5, uParam0, uParam1, uParam2, l_U236, l_U236, l_U236, 0 )))
                    {
                        CLEAR_AREA_OF_CARS( uParam0, uParam1, uParam2, l_U236 );
                    }
                }
            }
            else
            {
                CLEAR_AREA_OF_CARS( uParam0, uParam1, uParam2, l_U236 );
            }
        }
    }
    return;
}

int sub_19832(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (sub_19849( uParam0, uParam1, uParam2, uParam3 ))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_4411(), uParam0, uParam1, uParam4, uParam4, 0 )))
        {
            return 0;
        }
        else if (IS_SCREEN_FADED_OUT())
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int sub_19849(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0, uParam1, uParam2, uParam3 ))
    {
        return 1;
    }
    return 0;
}

void sub_20332()
{
    l_U406[0] = {-220.19910000, 174.41700000, 13.75180000};
    l_U406[1] = {-220.82540000, 174.38410000, 13.75390000};
    l_U406[2] = {-221.24490000, 174.77160000, 13.75400000};
    l_U406[3] = {-221.64120000, 175.62290000, 13.75420000};
    l_U406[4] = {-221.56900000, 175.96780000, 13.75360000};
    l_U406[5] = {-221.27590000, 176.52660000, 13.75020000};
    l_U406[6] = {-220.81530000, 177.47970000, 13.70830000};
    l_U406[7] = {-218.04820000, 192.88470000, 13.75550000};
    l_U406[8] = {-218.46860000, 193.01100000, 13.75540000};
    l_U406[9] = {-219.65880000, 192.55870000, 13.75570000};
    l_U406[10] = {-220.41580000, 192.64670000, 13.75560000};
    l_U406[11] = {-220.74280000, 192.71180000, 13.75560000};
    l_U406[12] = {-221.05750000, 192.59920000, 13.75570000};
    l_U406[13] = {-220.99270000, 191.93660000, 13.75580000};
    l_U406[14] = {-220.40690000, 191.59450000, 13.75190000};
    l_U406[15] = {-222.57960000, 171.98610000, 13.75790000};
    l_U406[16] = {-221.84960000, 172.48020000, 13.75790000};
    l_U406[17] = {-220.99220000, 173.00060000, 13.75770000};
    l_U406[18] = {-220.26590000, 173.56310000, 13.75767000};
    l_U406[19] = {-219.75780000, 174.31750000, 13.75180000};
    for ( l_U523 = 0; l_U523 <= 19; l_U523++ )
    {
        CREATE_CHAR( 26, -1788328884, l_U406[l_U523]._fU0, l_U406[l_U523]._fU4, l_U406[l_U523]._fU8, ref l_U364[l_U523], 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U364[l_U523], 1 );
        SET_CHAR_NEVER_TARGETTED( l_U364[l_U523], 1 );
        SET_CHAR_HEALTH( l_U364[l_U523], 200 );
        SET_CHAR_MAX_HEALTH( l_U364[l_U523], 200 );
        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U364[l_U523], 1 );
    }
    sub_5500( 4, l_U364[7], "TEEN_HORDE_1", 0 );
    SET_AMBIENT_VOICE_NAME( l_U364[7], "F_Y_HOTCHICK_01_FULL_01" );
    sub_5500( 5, l_U364[3], "TEEN_HORDE_2", 0 );
    SET_AMBIENT_VOICE_NAME( l_U364[3], "F_Y_HOTCHICK_02_FULL_01" );
    sub_5500( 6, l_U364[16], "TEEN_HORDE_3", 0 );
    SET_AMBIENT_VOICE_NAME( l_U364[16], "F_Y_HOTCHICK_01_FULL_02" );
    sub_5500( 7, l_U364[12], "TEEN_HORDE_4", 0 );
    SET_AMBIENT_VOICE_NAME( l_U364[12], "F_Y_HOTCHICK_02_FULL_02" );
    return;
}

void sub_21339()
{
    CREATE_CAR( -1099960214, -297.54590000, 176.12740000, 13.62370000, ref l_U471[1], 1 );
    CREATE_CHAR_INSIDE_CAR( l_U471[1], 26, -46564867, ref l_U467[0] );
    CREATE_CHAR_AS_PASSENGER( l_U471[1], 26, -46564867, 0, ref l_U467[1] );
    CREATE_CAR( -1099960214, -294.44310000, 193.82980000, 13.74520000, ref l_U471[0], 1 );
    CREATE_CHAR_INSIDE_CAR( l_U471[0], 26, -46564867, ref l_U467[2] );
    return;
}

void sub_21572()
{
    if (NOT (DOES_CAM_EXIST( l_U530 )))
    {
        CREATE_CAM( 14, ref l_U530 );
    }
    if (NOT (DOES_CAM_EXIST( l_U532 )))
    {
        CREATE_CAM( 14, ref l_U532 );
    }
    if (NOT (DOES_CAM_EXIST( l_U531 )))
    {
        CREATE_CAM( 14, ref l_U531 );
    }
    if (NOT (DOES_CAM_EXIST( l_U533 )))
    {
        CREATE_CAM( 3, ref l_U533 );
    }
    l_U529 = 1;
    return;
}

void sub_23520()
{
    int iVar2;
    unknown uVar3;

    l_U296[0] = {-273.94800000, 184.17960000, 13.72570000};
    l_U296[1] = {-274.59140000, 182.32570000, 13.70730000};
    l_U296[2] = {-274.04560000, 182.80150000, 13.70810000};
    l_U296[3] = {-273.47250000, 182.43330000, 13.70600000};
    l_U296[4] = {-272.88780000, 183.49630000, 13.71850000};
    l_U296[5] = {-272.88780000, 183.49630000, 13.71850000};
    l_U296[6] = {-273.93150000, 184.00020000, 13.72770000};
    l_U296[7] = {-273.93150000, 184.00020000, 13.72770000};
    l_U296[8] = {-274.23370000, 184.53180000, 13.72250000};
    l_U296[9] = {-274.11060000, 185.07370000, 13.71590000};
    l_U296[10] = {-274.78260000, 185.99910000, 13.73930000};
    l_U296[11] = {-275.48560000, 186.18320000, 13.74520000};
    l_U296[12] = {-276.45510000, 185.81470000, 13.68870000};
    l_U296[13] = {-270.23700000, 183.62110000, 13.72890000};
    l_U296[14] = {-276.45510000, 185.81470000, 13.68870000};
    l_U296[15] = {-277.14360000, 185.11260000, 13.70740000};
    l_U296[16] = {-277.90310000, 184.98820000, 13.71070000};
    l_U296[17] = {-277.82190000, 185.66410000, 13.69280000};
    l_U296[18] = {-276.57320000, 186.20150000, 13.74520000};
    l_U296[19] = {-273.49320000, 184.92890000, 13.71570000};
    for ( l_U523 = 0; l_U523 <= 19; l_U523++ )
    {
        if (DOES_CHAR_EXIST( l_U364[l_U523] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U364[l_U523] )))
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar2 );
                GENERATE_RANDOM_INT_IN_RANGE( 0, 1500, ref uVar3 );
                if (iVar2 < 50)
                {
                    OPEN_SEQUENCE_TASK( ref l_U562 );
                    TASK_STAND_STILL( 0, uVar3 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U296[l_U523]._fU0, l_U296[l_U523]._fU4, l_U296[l_U523]._fU8, 4, 120000, 1 );
                    CLOSE_SEQUENCE_TASK( l_U562 );
                    TASK_PERFORM_SEQUENCE( l_U364[l_U523], l_U562 );
                    CLEAR_SEQUENCE_TASK( l_U562 );
                }
                else
                {
                    OPEN_SEQUENCE_TASK( ref l_U562 );
                    TASK_STAND_STILL( 0, uVar3 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U296[l_U523]._fU0, l_U296[l_U523]._fU4, l_U296[l_U523]._fU8, 3, 120000, 1 );
                    CLOSE_SEQUENCE_TASK( l_U562 );
                    TASK_PERFORM_SEQUENCE( l_U364[l_U523], l_U562 );
                    CLEAR_SEQUENCE_TASK( l_U562 );
                }
            }
        }
    }
    return;
}

int sub_25557()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_26754(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    }
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
    }
    uVar10 = {vVar7 - vVar4};
    GET_HEADING_FROM_VECTOR_2D( uVar10._fU0, uVar10._fU4, ref uVar13 );
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_PED_RAGDOLL( uParam0 )))
        {
            SET_CHAR_HEADING( uParam0, uVar13 );
        }
    }
    return;
}

void sub_27117()
{
    if ((sub_2920( sub_4411(), l_U358[0], 1 )) > 150)
    {
        PRINT( "CP7_12", 7000, 0 );
        sub_11577();
    }
    if ((sub_2920( sub_4411(), l_U358[1], 1 )) > 150)
    {
        PRINT( "CP7_13", 7000, 0 );
        sub_11577();
    }
    return;
}

void sub_27263()
{
    unknown uVar2;
    int iVar3;

    for ( l_U523 = 0; l_U523 <= 19; l_U523++ )
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar3 );
        if (iVar3 < 50)
        {
            uVar2 = l_U358[1];
        }
        else
        {
            uVar2 = l_U358[0];
        }
        if (DOES_CHAR_EXIST( l_U364[l_U523] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U364[l_U523] )))
            {
                if (NOT (IS_CHAR_INJURED( uVar2 )))
                {
                    if (NOT (IS_PED_LOOKING_AT_PED( l_U364[l_U523], uVar2 )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U562 );
                        TASK_LOOK_AT_CHAR( 0, uVar2, -2, 0 );
                        TASK_FOLLOW_FOOTSTEPS( 0, uVar2 );
                        CLOSE_SEQUENCE_TASK( l_U562 );
                        TASK_PERFORM_SEQUENCE( l_U364[l_U523], l_U562 );
                        CLEAR_SEQUENCE_TASK( l_U562 );
                    }
                }
            }
        }
    }
    return;
}

void sub_27569()
{
    GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref l_U527 );
    if (NOT (sub_12737( 0 )))
    {
        if (l_U527 == 0)
        {
            sub_7592( "E2Tm7_TEEN1", ref l_U563, 7, 1 );
        }
        if (l_U527 == 1)
        {
            sub_7592( "E2Tm7_TEEN2", ref l_U563, 7, 1 );
        }
        if (l_U527 == 2)
        {
            sub_7592( "E2Tm7_TEEN3", ref l_U563, 7, 1 );
        }
        if (l_U527 == 3)
        {
            sub_7592( "E2Tm7_TTEN4", ref l_U563, 7, 1 );
        }
    }
    return;
}

void sub_27951(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown[3] uVar6;

    array(ref uVar6, 3);
    uVar6[0] = uParam0;
    uVar6[1] = uParam1;
    uVar6[2] = uParam2;
    return sub_27988( ref uVar6, uParam3 );
}

int sub_27988(unknown uParam0, unknown uParam1)
{
    int I;
    unknown[2] uVar5;

    array(ref uVar5, 2);
    if (NOT (sub_28013( (uParam0^)[0], ref uVar5[0], uParam1 )))
    {
        return 0;
    }
    for ( I = 1; I <= ((uParam0^) - 1); I++ )
    {
        if (sub_28013( (uParam0^)[I], ref uVar5[1], uParam1 ))
        {
            if (uVar5[0] != uVar5[1])
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int sub_28013(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
        {
            return 0;
        }
    }
    else if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
    {
        return 0;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, uParam1 );
    return 1;
}

int sub_28958(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, int iParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    unknown uVar22;
    int iVar23;
    int I;

    l_U243[0] = uParam7;
    l_U243[1] = uParam8;
    l_U243[2] = uParam9;
    l_U242 = uParam7;
    sub_29006();
    sub_13782();
    sub_14662();
    if (sub_29350( l_U243[0], l_U243[1], l_U243[2], uParam11, uParam12, uParam13, uParam14, l_U237, uParam16, 0, 0, 0 ))
    {
        sub_14860( uParam11 );
        sub_14860( uParam12 );
        sub_14860( uParam13 );
        sub_14860( uParam14 );
        if (IS_SCREEN_FADED_IN())
        {
            if (sub_34850())
            {
                l_U207 = 1;
                l_U218 = 1;
                sub_14860( uParam15 );
                sub_14860( uParam19 );
                if ((uParam17) AND (IS_WANTED_LEVEL_GREATER( sub_859(), 0 )))
                {
                    if (DOES_BLIP_EXIST( l_U234 ))
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U234 );
                        sub_14860( uParam10 );
                    }
                    if (((NOT (sub_12737( 0 ))) AND (NOT sub_35012())) AND (NOT l_U203))
                    {
                        sub_14924( uParam18, 0 );
                        l_U247 = uParam18;
                        l_U203 = 1;
                        l_U204 = 0;
                        if (NOT (IS_CHAR_INJURED( l_U243[0] )))
                        {
                            SAY_AMBIENT_SPEECH( l_U243[0], "CAR_POLICE_PURSUIT", 1, 1, 0 );
                        }
                    }
                }
                else if (l_U203)
                {
                    sub_14860( uParam18 );
                    l_U203 = 0;
                    l_U204 = 1;
                }
                if (l_U204)
                {
                    if (NOT (sub_12737( 0 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U243[0] )))
                        {
                            SAY_AMBIENT_SPEECH( l_U243[0], "LOSE_WANTED_LEVEL", 1, 1, 0 );
                        }
                        l_U204 = 0;
                    }
                }
                if (NOT (DOES_BLIP_EXIST( l_U234 )))
                {
                    ADD_BLIP_FOR_COORD( uParam0, uParam1, uParam2 - 1.00000000, ref l_U234 );
                    sub_15095( l_U234 );
                    if (l_U222)
                    {
                        SHOW_BLIP_ON_ALTIMETER( l_U234, 1 );
                    }
                }
                if (NOT (sub_12737( 0 )))
                {
                    if (NOT l_U205)
                    {
                        sub_14924( uParam10, 0 );
                        l_U205 = 1;
                    }
                }
                if (l_U223)
                {
                    iParam6 = 0;
                }
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_4411(), uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, iParam6 ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4411(), ref uVar22 );
                    iVar23 = 1;
                    for ( I = 0; I < l_U243; I++ )
                    {
                        if (DOES_CHAR_EXIST( l_U243[I] ))
                        {
                            if (NOT (IS_CHAR_IN_CAR( l_U243[I], uVar22 )))
                            {
                                iVar23 = 0;
                            }
                        }
                    }
                    if ((iVar23) AND (sub_15321()))
                    {
                        sub_14860( uParam10 );
                        sub_14860( uParam15 );
                        sub_14860( uParam11 );
                        sub_14860( uParam12 );
                        sub_14860( uParam13 );
                        sub_14860( uParam14 );
                        sub_14860( uParam18 );
                        sub_14860( uParam19 );
                        sub_15841();
                        return 1;
                    }
                }
            }
            else if (DOES_BLIP_EXIST( l_U234 ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U234 );
                sub_14860( uParam10 );
            }
            if (NOT (sub_12737( 0 )))
            {
                if (NOT l_U207)
                {
                    sub_14924( uParam15, 0 );
                    l_U207 = 1;
                }
                else if (l_U218)
                {
                    if (NOT (IS_STRING_NULL( uParam19 )))
                    {
                        if (NOT l_U208)
                        {
                            sub_14924( uParam19, 0 );
                            l_U208 = 1;
                        }
                    }
                    else if (NOT l_U208)
                    {
                        sub_14924( uParam15, 0 );
                        l_U208 = 1;
                    }
                }
            }
        }
    }
    else if (l_U203)
    {
        l_U203 = 0;
    }
    sub_14860( uParam10 );
    sub_14860( uParam15 );
    sub_14860( uParam19 );
    sub_14860( uParam18 );
    if (DOES_BLIP_EXIST( l_U234 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U234 );
    }
    sub_16370( uParam0, uParam1, uParam2, 0, 0 );
    sub_19807( uParam0, uParam1, uParam2 );
    return 0;
}

void sub_29006()
{
    int I;

    for ( I = 0; I < l_U243; I++ )
    {
        if (DOES_CHAR_EXIST( l_U243[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U243[I] )))
            {
                if (((IS_CHAR_SITTING_IN_ANY_CAR( l_U243[I] )) AND (sub_29099( l_U243[I] ))) AND (sub_12753()))
                {
                    BLOCK_CHAR_AMBIENT_ANIMS( l_U243[I], 1 );
                }
            }
        }
    }
    if (IS_PLAYER_PLAYING( sub_859() ))
    {
        if (NOT (IS_CHAR_INJURED( sub_4411() )))
        {
            if (((IS_CHAR_SITTING_IN_ANY_CAR( sub_4411() )) AND (sub_29099( sub_4411() ))) AND (sub_12753()))
            {
                BLOCK_CHAR_AMBIENT_ANIMS( sub_4411(), 1 );
            }
        }
    }
    return;
}

int sub_29099(int iParam0)
{
    int I;

    for ( I = 0; I < 9; I++ )
    {
        if (l_U19._fU16[I]._fU0 == iParam0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_29350(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, int iParam9, unknown uParam10, unknown uParam11)
{
    int I;
    int iVar15;
    int iVar16;
    int iVar17;
    int iVar18;
    int iVar19;
    int[3] iVar20;
    boolean bVar24;
    boolean bVar25;
    int iVar26;
    int iVar27;
    unknown[3] uVar28;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;

    array(ref iVar20, 3);
    l_U243[0] = uParam0;
    l_U243[1] = uParam1;
    l_U243[2] = uParam2;
    l_U242 = uParam0;
    array(ref uVar28, 3);
    uVar28[0] = uParam3;
    uVar28[1] = uParam4;
    uVar28[2] = uParam5;
    iVar18 = 1;
    iVar15 = 0;
    iVar16 = 0;
    iVar20[0] = 0;
    iVar20[1] = 0;
    iVar20[2] = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U243[I] )))
        {
            iVar16++;
        }
    }
    if (((NOT sub_29521()) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_4411() ))) AND (NOT (DOES_VEHICLE_EXIST( iParam9 ))))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4411(), ref iVar26 );
        if (IS_VEH_DRIVEABLE( iVar26 ))
        {
            if (NOT l_U223)
            {
                sub_14924( "MORE_SEATS", 0 );
                l_U223 = 1;
            }
            bVar25 = true;
        }
    }
    else
    {
        bVar25 = false;
        l_U223 = 0;
        sub_14860( "MORE_SEATS" );
    }
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_CHAR_EXIST( l_U243[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U243[I] )))
            {
                if (NOT (IS_GROUP_MEMBER( l_U243[I], sub_29895() )))
                {
                    SET_CHAR_DROWNS_IN_WATER( l_U243[I], 1 );
                }
                else
                {
                    SET_CHAR_DROWNS_IN_WATER( l_U243[I], 0 );
                }
                if (IS_CHAR_SITTING_IN_ANY_CAR( sub_4411() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4411(), ref iVar26 );
                    if (IS_VEH_DRIVEABLE( iVar26 ))
                    {
                        if (IS_GROUP_MEMBER( l_U243[I], sub_29895() ))
                        {
                            if ((NOT sub_29521()) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_4411() )))
                            {
                                if (NOT (sub_30097( l_U243[I] )))
                                {
                                    REMOVE_CHAR_FROM_GROUP( l_U243[I] );
                                    PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 1" );
                                    PRINTNL();
                                }
                            }
                        }
                    }
                }
                bVar24 = true;
                if (NOT (IS_GROUP_MEMBER( l_U243[I], sub_29895() )))
                {
                    if (IS_CHAR_SITTING_IN_ANY_CAR( l_U243[I] ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U243[I], ref iVar26 );
                        if (IS_VEH_DRIVEABLE( iParam9 ))
                        {
                            if (NOT (iVar26 == iParam9))
                            {
                                if (NOT (IS_CAR_DEAD( iVar26 )))
                                {
                                    if (NOT (IS_CHAR_SITTING_IN_CAR( sub_4411(), iVar26 )))
                                    {
                                        TASK_LEAVE_CAR_IMMEDIATELY( l_U243[I], iVar26 );
                                        PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - Buddy told to leave car" );
                                        PRINTNL();
                                        bVar24 = false;
                                    }
                                }
                            }
                        }
                    }
                }
                if (IS_GROUP_MEMBER( l_U243[I], sub_29895() ))
                {
                    if (sub_30658())
                    {
                        if (l_U225[I])
                        {
                            SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U243[I], -1 );
                            l_U225[I] = 0;
                        }
                    }
                    else if (NOT l_U225[I])
                    {
                        SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U243[I], 2 );
                        l_U225[I] = 1;
                    }
                }
                if (((NOT (IS_GROUP_MEMBER( l_U243[I], sub_29895() ))) AND (NOT (sub_30840( l_U243[I], iParam9 )))) AND (NOT (sub_30936( l_U243[I], iParam9 ))))
                {
                    if (sub_31049( l_U243[I], uParam7, uParam10 ))
                    {
                        if (NOT (IS_GROUP_MEMBER( l_U243[I], sub_29895() )))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U243[I], 11, ref iVar27 );
                            if (iVar27 == 7)
                            {
                                CLEAR_CHAR_TASKS( l_U243[I] );
                                PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - CLEAR_CHAR_TASKS - 1" );
                                PRINTNL();
                            }
                            SET_GROUP_MEMBER( sub_29895(), l_U243[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 1" );
                            PRINTNL();
                            bVar24 = false;
                        }
                    }
                    if (bVar24)
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U230[I] )))
                        {
                            GET_GAME_TIMER( ref l_U240 );
                            ADD_BLIP_FOR_CHAR( l_U243[I], ref l_U230[I] );
                            CHANGE_BLIP_DISPLAY( l_U230[I], 2 );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - add blip for char - 1" );
                            PRINTNL();
                            SET_BLIP_AS_FRIENDLY( l_U230[I], 1 );
                            if (bParam8)
                            {
                                sub_15095( l_U230[I] );
                            }
                        }
                    }
                    iVar18 = 0;
                }
                else if (DOES_BLIP_EXIST( l_U230[I] ))
                {
                    if (((sub_31818( l_U243[I] )) || (sub_30840( l_U243[I], iParam9 ))) || (uParam11))
                    {
                        if (DOES_BLIP_EXIST( l_U230[I] ))
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U230[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 1" );
                            PRINTNL();
                            sub_14860( uVar28[I] );
                            iVar19 = 1;
                        }
                    }
                    else if (bParam8)
                    {
                        sub_15095( l_U230[I] );
                    }
                    iVar18 = 0;;
                }
                else if (IS_VEH_DRIVEABLE( iParam9 ))
                {
                    if (NOT (IS_CHAR_SITTING_IN_CAR( l_U243[I], iParam9 )))
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U243[I], iParam9, 20.00000000, 20.00000000, 5.00000000, 0 )) AND (NOT l_U220))
                        {
                            if (IS_CHAR_SITTING_IN_ANY_CAR( l_U243[I] ))
                            {
                                if (NOT (IS_CHAR_IN_CAR( l_U243[I], iParam9 )))
                                {
                                    if (NOT (sub_31818( l_U243[I] )))
                                    {
                                        if (sub_15398( l_U243[I] ))
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U243[I], 31, ref iVar27 );
                                            if (iVar27 == 7)
                                            {
                                                TASK_LEAVE_ANY_CAR( l_U243[I] );
                                            }
                                        }
                                    }
                                }
                            }
                            else if (NOT (IS_CHAR_SITTING_IN_CAR( sub_4411(), iParam9 )))
                            {
                                SET_FORCE_PLAYER_TO_ENTER_THROUGH_DIRECT_DOOR( sub_4411(), 1 );
                            }
                            if (IS_GROUP_MEMBER( l_U243[I], sub_29895() ))
                            {
                                REMOVE_CHAR_FROM_GROUP( l_U243[I] );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 2" );
                                PRINTNL();
                            }
                            GET_SCRIPT_TASK_STATUS( l_U243[I], 11, ref iVar27 );
                            if (iVar27 == 7)
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U243[I], 1 );
                                if (l_U219)
                                {
                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                }
                                TASK_ENTER_CAR_AS_PASSENGER( l_U243[I], iParam9, -1, I );
                                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U243[I], 0 );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - told to enter car as passenger" );
                                PRINTNL();
                            }
                            else if (IS_CHAR_IN_CAR( sub_4411(), iParam9 ))
                            {
                                ADD_BLIP_FOR_CHAR( l_U243[I], ref l_U230[I] );
                                CHANGE_BLIP_DISPLAY( l_U230[I], 2 );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - add blip for char - 2" );
                                PRINTNL();
                                SET_BLIP_AS_FRIENDLY( l_U230[I], 1 );
                                iVar18 = 0;
                            };;;
                        }
                        else if (NOT (IS_GROUP_MEMBER( l_U243[I], sub_29895() )))
                        {
                            if (sub_31049( l_U243[I], uParam7, uParam10 ))
                            {
                                GET_SCRIPT_TASK_STATUS( l_U243[I], 11, ref iVar27 );
                                if (iVar27 == 7)
                                {
                                    CLEAR_CHAR_TASKS( l_U243[I] );
                                    PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - CLEAR_CHAR_TASKS - 2" );
                                    PRINTNL();
                                }
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U243[I], 0 );
                                SET_GROUP_MEMBER( sub_29895(), l_U243[I] );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 2" );
                                PRINTNL();
                            }
                        }
                    }
                    else if (IS_CHAR_SITTING_IN_CAR( sub_4411(), iParam9 ))
                    {
                        if (NOT (IS_GROUP_MEMBER( l_U243[I], sub_29895() )))
                        {
                            SET_GROUP_MEMBER( sub_29895(), l_U243[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 3" );
                            PRINTNL();
                        }
                    }
                    else if (IS_GROUP_MEMBER( l_U243[I], sub_29895() ))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U243[I] );
                        PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 3" );
                        PRINTNL();
                    };;;
                };;;
            }
            else if (DOES_BLIP_EXIST( l_U230[I] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U230[I] );
                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 2" );
                PRINTNL();
                sub_14860( uVar28[I] );
                iVar19 = 1;
            }
        }
    }
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_BLIP_EXIST( l_U230[I] ))
        {
            iVar20[I] = 1;
            iVar15++;
        }
    }
    if (NOT (sub_12737( 0 )))
    {
        if (iVar15 > 0)
        {
            for ( I = 0; I < 3; I++ )
            {
                if (iVar20[I])
                {
                    if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                    {
                        if ((sub_30097( l_U243[I] )) || (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U243[I], sub_4411(), 40.00000000, 40.00000000, 40.00000000, 0 )))
                        {
                            iVar15--;
                            iVar20[I] = 0;
                        }
                    }
                }
            }
        }
        GET_GAME_TIMER( ref iVar17 );
        if (((iVar17 - l_U240) > 1500) || (iVar16 == 1))
        {
            if (iVar15 > 0)
            {
                if (l_U241 < iVar15)
                {
                    PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - printing 'pickup' text" );
                    PRINTNL();
                    PRINTSTRING( "iPrintedMissingBuddiesNumber = " );
                    PRINTINT( l_U241 );
                    PRINTNL();
                    PRINTSTRING( "iBuddiesMissing = " );
                    PRINTINT( iVar15 );
                    PRINTNL();
                    PRINTSTRING( "iTotalBuddies = " );
                    PRINTINT( iVar16 );
                    PRINTNL();
                    if ((iVar15 == iVar16) AND (iVar16 > 1))
                    {
                        if ((NOT l_U209) AND (NOT (l_U241 == iVar15)))
                        {
                            sub_14924( uParam6, 0 );
                            l_U209 = 1;
                            l_U241 = iVar15;
                        }
                    }
                    else
                    {
                        for ( I = 0; I < 3; I++ )
                        {
                            if (iVar20[I])
                            {
                                if ((NOT l_U210[I]) AND (NOT (l_U241 == iVar15)))
                                {
                                    sub_14924( uVar28[I], 0 );
                                    l_U210[I] = 1;
                                    l_U241 = iVar15;
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                l_U241 = 0;
            }
        }
    }
    l_U219 = 0;
    if ((iVar18) AND (NOT bVar25))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (DOES_BLIP_EXIST( l_U230[I] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U230[I] );
                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 3" );
                PRINTNL();
                sub_14860( uVar28[I] );
            }
        }
        sub_14860( "MORE_SEATS" );
        return 1;
    }
    if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (NOT (IS_CHAR_INJURED( sub_4411() )))
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4411(), 0.00000000, 1.00000000 + (TO_FLOAT( I )), 0.00000000, ref uVar32._fU0, ref uVar32._fU4, ref uVar32._fU8 );
                if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                {
                    SET_CHAR_COORDINATES( l_U243[I], uVar32._fU0, uVar32._fU4, uVar32._fU8 );
                }
            }
        }
    }
    return 0;
}

int sub_29521()
{
    unknown uVar2;

    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_4411() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4411(), ref uVar2 );
        if (sub_29562( uVar2 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_29562(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        iVar3 = 0;
        for ( I = 0; I < l_U243; I++ )
        {
            if (DOES_CHAR_EXIST( l_U243[I] ))
            {
                iVar3++;
            }
        }
        GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar4 );
        if (iVar4 >= iVar3)
        {
            return 1;
        }
    }
    return 0;
}

void sub_29895()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_30097(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (IS_PLAYER_PLAYING( sub_859() ))
    {
        GET_CAR_CHAR_IS_USING( sub_4411(), ref iVar3 );
        if (IS_VEH_DRIVEABLE( iVar3 ))
        {
            if (NOT (IS_CHAR_INJURED( uParam0 )))
            {
                GET_CAR_CHAR_IS_USING( uParam0, ref iVar4 );
                if (IS_VEH_DRIVEABLE( iVar4 ))
                {
                    if (iVar3 == iVar4)
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4411(), uParam0, 20.00000000, 20.00000000, 20.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_CAR_3D( uParam0, iVar4, 20.00000000, 20.00000000, 20.00000000, 0 )))
                        {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_30658()
{
    unknown uVar2;

    GET_CAR_CHAR_IS_USING( sub_4411(), ref uVar2 );
    if (sub_29562( uVar2 ))
    {
        return 1;
    }
    return 0;
}

int sub_30840(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (DOES_VEHICLE_EXIST( uParam1 ))
        {
            if (IS_VEH_DRIVEABLE( uParam1 ))
            {
                if (IS_CHAR_SITTING_IN_CAR( uParam0, uParam1 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_30936(unknown uParam0, int iParam1)
{
    int iVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_GROUP_MEMBER( uParam0, sub_29895() )))
        {
            GET_CAR_CHAR_IS_USING( uParam0, ref iVar4 );
            if (IS_VEH_DRIVEABLE( iParam1 ))
            {
                if (iVar4 == iParam1)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_31049(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar5 );
            if (NOT (IS_CAR_DEAD( uVar5 )))
            {
                if (IS_VEH_DRIVEABLE( uVar5 ))
                {
                    if (IS_CHAR_SITTING_IN_CAR( sub_4411(), uVar5 ))
                    {
                        if (sub_29521())
                        {
                            return 1;
                        }
                    }
                }
                else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4411(), uParam0, uParam1, uParam1, 3.00000000, 0 ))
                {
                    return 1;
                }
            }
        }
        else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4411(), uParam0, uParam1, uParam1, 3.00000000, 0 ))
        {
            if (NOT bParam2)
            {
                if (sub_30658())
                {
                    return 1;
                }
                else
                {
                    GET_CAR_CHAR_IS_USING( sub_4411(), ref uVar5 );
                    if (NOT (DOES_VEHICLE_EXIST( uVar5 )))
                    {
                        return 1;
                    }
                }
            }
            else
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_31818(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_4411() ))
        {
            if (sub_31866( sub_4411(), uParam0 ))
            {
                SET_GROUP_SEPARATION_RANGE( sub_29895(), 40.00000000 );
                return 1;
            }
        }
        else if (IS_GROUP_MEMBER( uParam0, sub_29895() ))
        {
            SET_GROUP_SEPARATION_RANGE( sub_29895(), 40.00000000 );
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int sub_31866(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar4 );
            if (IS_VEH_DRIVEABLE( uVar4 ))
            {
                if (NOT (IS_CHAR_INJURED( uParam1 )))
                {
                    if (IS_CHAR_SITTING_IN_CAR( uParam1, uVar4 ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_34850()
{
    unknown uVar2;

    if (IS_CHAR_IN_ANY_CAR( sub_4411() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4411(), ref uVar2 );
        if (sub_29562( uVar2 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_35012()
{
    if (NOT (IS_CHAR_INJURED( l_U242 )))
    {
        if (IS_AMBIENT_SPEECH_PLAYING( l_U242 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_36083()
{
    unknown uVar2;
    float fVar3;

    SET_PLAYER_CONTROL( sub_859(), 0 );
    sub_11400( 1 );
    CLEAR_WANTED_LEVEL( sub_859() );
    CLEAR_AREA( -457.64210000, 155.78990000, 8.87160000, 100, 1 );
    ENABLE_SCENE_STREAMING( 0 );
    BEGIN_CAM_COMMANDS( ref l_U528 );
    if (NOT l_U529)
    {
        sub_21572();
    }
    for ( l_U523 = 0; l_U523 <= 1; l_U523++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U358[l_U523] )))
        {
            if (IS_PED_IN_GROUP( l_U358[l_U523] ))
            {
                REMOVE_CHAR_FROM_GROUP( l_U358[l_U523] );
            }
        }
    }
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar2 );
    SET_CHAR_COORDINATES( sub_4411(), -460.75300000, 152.09870000, 8.73910000 );
    if (NOT (IS_CAR_DEAD( uVar2 )))
    {
        GET_CAR_HEADING( uVar2, ref fVar3 );
        if ((fVar3 > 270) || (fVar3 < 90))
        {
            SET_CAR_HEADING( uVar2, 0 );
        }
        if (fVar3 > 90)
        {
            if (fVar3 < 270)
            {
                SET_CAR_HEADING( uVar2, 180 );
            }
        }
        SET_CAR_ON_GROUND_PROPERLY( uVar2 );
    }
    if (NOT (IS_CAR_DEAD( uVar2 )))
    {
        SET_CAR_ON_GROUND_PROPERLY( uVar2 );
    }
    SET_USE_HIGHDOF( 1 );
    SET_WIDESCREEN_BORDERS( 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    SET_CAM_POS( l_U531, -455.15360000, 131.16770000, 15.60304000 );
    SET_CAM_ROT( l_U531, -16.88537000, 0.00000000, 23.84632000 );
    SET_CAM_FOV( l_U531, 30.60004000 );
    SET_CAM_POS( l_U532, -455.43230000, 131.79780000, 15.39391000 );
    SET_CAM_ROT( l_U532, -16.88537000, 0.00000000, 23.84632000 );
    SET_CAM_FOV( l_U532, 30.60004000 );
    SET_CAM_ACTIVE( l_U533, 1 );
    SET_CAM_PROPAGATE( l_U533, 1 );
    SET_CAM_INTERP_STYLE_CORE( l_U533, l_U531, l_U532, 10500, 0 );
    SETTIMERA( 0 );
    sub_7592( "E2TM6_MAIS", ref l_U563, 7, 1 );
    while (l_U536 == 1)
    {
        switch (l_U537)
        {
            case 0:
            if (TIMERA() > 2500)
            {
                if (NOT (IS_CAR_DEAD( uVar2 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U358[0] )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U562 );
                        TASK_LEAVE_CAR( 0, uVar2 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -468.81370000, 149.23190000, 8.85890000, 2, 30000, 2 );
                        CLOSE_SEQUENCE_TASK( l_U562 );
                        TASK_PERFORM_SEQUENCE( l_U358[0], l_U562 );
                        CLEAR_SEQUENCE_TASK( l_U562 );
                        l_U537++;
                    }
                }
            }
            break;
            case 1:
            if (TIMERA() > 3000)
            {
                if (NOT (IS_CAR_DEAD( uVar2 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U358[1] )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U562 );
                        TASK_LEAVE_CAR( 0, uVar2 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -468.81370000, 149.23190000, 8.85890000, 2, 30000, 2 );
                        CLOSE_SEQUENCE_TASK( l_U562 );
                        TASK_PERFORM_SEQUENCE( l_U358[1], l_U562 );
                        CLEAR_SEQUENCE_TASK( l_U562 );
                        l_U537++;
                    }
                }
            }
            break;
            case 2:
            if (TIMERA() > 10000)
            {
                SET_CAM_POS( l_U531, -459.78900000, 139.90580000, 9.31833700 );
                SET_CAM_ROT( l_U531, 1.61459600, -0.00000000, 24.94532000 );
                SET_CAM_FOV( l_U531, 30.60004000 );
                SET_CAM_POS( l_U532, -460.51680000, 141.47030000, 9.36698500 );
                SET_CAM_ROT( l_U532, 1.61459600, -0.00000000, 24.94532000 );
                SET_CAM_FOV( l_U532, 30.60004000 );
                SET_CAM_ACTIVE( l_U533, 0 );
                SET_CAM_PROPAGATE( l_U533, 0 );
                SET_CAM_ACTIVE( l_U533, 1 );
                SET_CAM_PROPAGATE( l_U533, 1 );
                SET_CAM_INTERP_STYLE_CORE( l_U533, l_U531, l_U532, 9000, 0 );
                l_U537++;
            }
            break;
            case 3:
            if (TIMERA() > 14000)
            {
                if (g_U30199 != -1)
                {
                    if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
                    {
                        sub_5500( 1, g_U29971[g_U30199]._fU12, "DESSIE", 0 );
                        sub_7592( "E2TM6_WELC", ref l_U563, 7, 1 );
                    }
                }
                l_U537++;
            }
            break;
            case 4:
            if (TIMERA() > 19000)
            {
                l_U537++;
            }
            break;
            case 5:
            SET_CHAR_COORDINATES( sub_4411(), -460.36110000, 139.62630000, 8.75670000 );
            SET_CHAR_HEADING( sub_4411(), 184.13660000 );
            if (NOT (IS_CAR_DEAD( uVar2 )))
            {
                SET_CAR_ON_GROUND_PROPERLY( uVar2 );
            }
            SET_CAM_ACTIVE( l_U530, 0 );
            SET_CAM_PROPAGATE( l_U530, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_CAM_BEHIND_PED( sub_4411() );
            l_U536 = 0;
            break;
        }
        if (sub_25557())
        {
            l_U536 = 0;
            if (IS_SCREEN_FADED_IN())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            SET_CHAR_COORDINATES( sub_4411(), -460.36110000, 139.62630000, 8.75670000 );
            SET_CHAR_HEADING( sub_4411(), 184.13660000 );
            if (NOT (IS_CAR_DEAD( uVar2 )))
            {
                SET_CAR_ON_GROUND_PROPERLY( uVar2 );
            }
            INCREMENT_INT_STAT( 372, 1 );
            sub_8924( ref l_U563, 0 );
            SET_CAM_ACTIVE( l_U533, 0 );
            SET_CAM_PROPAGATE( l_U533, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_CAM_BEHIND_PED( sub_4411() );
        }
        WAIT( 0 );
    }
    TASK_CLEAR_LOOK_AT( sub_4411() );
    if (DOES_CHAR_EXIST( l_U358[0] ))
    {
        DELETE_CHAR( ref l_U358[0] );
    }
    if (DOES_CHAR_EXIST( l_U358[1] ))
    {
        DELETE_CHAR( ref l_U358[1] );
    }
    END_CAM_COMMANDS( ref l_U528 );
    ENABLE_SCENE_STREAMING( 1 );
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 500 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
    }
    SET_PLAYER_CONTROL( sub_859(), 1 );
    return;
}

void sub_38068()
{
    g_U25 = 82;
    INCREMENT_INT_STAT( 244, 1 );
    g_U43681 = 1;
    g_U43674++;
    if (g_U43674 > 7)
    {
        sub_38133( 0 );
        sub_38780();
        g_U43683 = 1;
    }
    sub_38941();
    sub_2656();
    return;
}

void sub_38133(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (g_U0)
    {
        return;
    }
    iVar3 = 1;
    switch (uParam0)
    {
        case 0:
        iVar3 = 0;
        break;
        default: return;
    }
    if (iVar3 == 1)
    {
        return;
    }
    iVar4 = 0;
    if (NOT g_U43026[iVar3]._fU0)
    {
        iVar4 = g_U43026[iVar3]._fU8;
        if (iVar4 > 0)
        {
            sub_38245( 1, iVar4 );
            g_U43026[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_38245(unknown uParam0, int iParam1)
{
    g_U28780[uParam0]._fU4 += iParam1;
    if (g_U28780[uParam0]._fU4 > g_U28780[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U28780[uParam0]._fU4 = g_U28780[uParam0]._fU0;
    }
    sub_38415( 0 );
    return;
}

void sub_38415(boolean bParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    boolean bVar7;
    int I;

    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    fVar6 = 0.00000000;
    bVar7 = true;
    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        if (g_U28780[I]._fU4 == g_U28780[I]._fU0)
        {
            fVar4 = g_U28780[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U28780[I]._fU0 );
            fVar6 = TO_FLOAT( g_U28780[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U28780[I]._fU8;
        }
        fVar3 += fVar4;
    }
    if (fVar3 > 100.00000000)
    {
        fVar3 = 99.99000000;
    }
    if (bVar7)
    {
        fVar3 = 100.00000000;
    }
    SET_FLOAT_STAT( 187, fVar3 );
    if (bVar7)
    {
        sub_38660();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_38660()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15811[5] = 1;
    return;
}

void sub_38780()
{
    g_U15811[38] = 1;
    sub_38809( 2, 10000, 60000 );
    return;
}

void sub_38809(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_38824( uParam0, uParam1, uParam2 );
    return;
}

void sub_38824(unknown uParam0, int iParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    g_U15904[uParam0]._fU0 = 1;
    g_U15904[uParam0]._fU4 = iVar5 + iParam1;
    g_U15904[uParam0]._fU8 = uParam2;
    g_U15904[uParam0]._fU12 = 0;
    g_U15904[uParam0]._fU16 = 0;
    return;
}

void sub_38941()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    iVar2 = 0;
    iVar3 = 0;
    iVar4 = 1;
    iVar5 = 0;
    sub_932( iVar2, 500, 3, 1, 0, 0 );
    SET_PLAYER_MOOD_NORMAL( sub_859() );
    sub_38988();
    sub_39072();
    sub_39160( 0 );
    sub_1694();
    return;
}

void sub_38988()
{
    if (g_U0)
    {
        return;
    }
    g_U10953._fU0 = 1;
    g_U10953._fU4 = 0;
    g_U10953._fU8 = 0;
    g_U10953._fU12 = 0;
    g_U10953._fU16 = 0;
    g_U10953._fU20 = 0;
    g_U10953._fU28 = 5;
    return;
}

void sub_39072()
{
    sub_39081();
    return;
}

void sub_39081()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_39160(unknown uParam0)
{
    if (g_U10754)
    {
        g_U10754 = 0;
        return;
    }
    SET_BIT( ref g_U10751._fU0, 1 );
    sub_39211( ref g_U10751._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10751._fU0, 3 );
    g_U10751._fU4 = 0;
    g_U10751._fU8 = 0;
    return;
}

void sub_39211(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_39644()
{
    GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref l_U476 );
    if (l_U476 == 0)
    {
        l_U477 = "E2Tm6_CMGEN6";
    }
    if (l_U476 == 1)
    {
        l_U477 = "E2Tm6_CMGEN7";
    }
    if (l_U476 == 2)
    {
        l_U477 = "E2Tm6_CMGEN8";
    }
    if (l_U476 == 3)
    {
        l_U477 = "E2Tm6_CMGEN9";
    }
    if (l_U476 == 4)
    {
        l_U477 = "E2Tm6_CMGEN0";
    }
    return;
}

void sub_39851(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    char[12] cVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref cVar6, 2);
    StrCopy( ref cVar6[0], uParam1, 16 );
    StrCopy( ref cVar6[1], "END", 16 );
    sub_39895( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_39895(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    int I;
    int iVar38;

    if (g_U43133)
    {
        PRINTSTRING( "KGM........End of mission call blocked because the mission is being repeated\n" );
        return;
    }
    array(ref uVar8._fU32, 5);
    ref uVar8;
    iVar38 = uVar8._fU32;
    if (NOT (IS_THREAD_ACTIVE( g_U818 )))
    {
        uVar8._fU12 = uParam0;
        if ((uParam1^) > iVar38)
        {
            SCRIPT_ASSERT( "TELL SIMON END CALL ARRAY SIZE NEEDS INCREASING" );
            return;
        }
        for ( I = 0; I <= ((uParam1^) - 1); I++ )
        {
            uVar8._fU32[I] = {(uParam1^)[I]};
        }
        if ((uParam1^) < iVar38)
        {
            StrCopy( ref uVar8._fU32[(uParam1^)], "END", 16 );
        }
        StrCopy( ref uVar8._fU16, uParam2, 16 );
        uVar8._fU0 = uParam3;
        uVar8._fU4 = uParam4;
        uVar8._fU8 = uParam5;
        REQUEST_SCRIPT( "SPcellphoneEndCall" );
        while (NOT (HAS_SCRIPT_LOADED( "SPcellphoneEndCall" )))
        {
            REQUEST_SCRIPT( "SPcellphoneEndCall" );
            WAIT( 0 );
        }
        g_U817 = 1;
        g_U818 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}
