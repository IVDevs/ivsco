void main()
{
    unknown uVar2;

    l_U4 = 0;
    l_U5 = 1;
    l_U6 = 3;
    l_U8 = 0;
    l_U25 = -1;
    l_U29 = 0;
    l_U30 = 1;
    l_U31 = 1;
    l_U39 = 150.00000000;
    l_U129 = 0;
    l_U130 = 150.00000000;
    l_U180 = 0;
    l_U481 = 0;
    l_U482 = 0;
    l_U491 = {881.20000000, -483.77000000, 14.88270000};
    l_U494 = {879.26000000, -483.77000000, 14.88260000};
    l_U497 = {882.77920000, -486.58260000, 16.03978000};
    l_U500 = {-0.69154900, -0.00000000, 26.85593000};
    l_U503 = {879.13390000, -483.74130000, 16.15152000};
    l_U506 = {-2.82455100, -0.00000000, -56.45518000};
    l_U509 = 36.30002000;
    l_U510 = 37.50000000;
    l_U511 = 2.00000000;
    l_U512 = 5.00000000;
    l_U513 = 1.60000000;
    l_U514 = 3.00000000;
    l_U515 = 0;
    l_U516 = 0;
    l_U517 = 0;
    l_U518 = 0;
    l_U519 = 0;
    l_U520 = 0;
    l_U521 = 0;
    l_U522 = 0;
    l_U523 = 0;
    l_U524 = 0;
    l_U525 = 0;
    l_U526 = 0;
    l_U527 = 0;
    l_U528 = 0;
    l_U529 = 0;
    l_U530 = 0;
    l_U531 = 0;
    l_U532 = 0;
    l_U534 = 0;
    l_U535 = 0;
    l_U536 = 0;
    l_U537 = 0;
    l_U538 = 0.00000000;
    l_U539 = 8.00000000;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_452();
        sub_2562();
    }
    sub_2992();
    if (IS_PLAYER_PLAYING( sub_2681() ))
    {
        SET_PLAYER_CONTROL( sub_2681(), 1 );
    }
    while (true)
    {
        WAIT( 0 );
        if ((NOT l_U524) AND (NOT l_U520))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_2571(), l_U488._fU0, l_U488._fU4, l_U488._fU8, 25, 25, 25, 0 ))
            {
                sub_4642( 0 );
            }
        }
        if ((((((NOT l_U522) AND (NOT IS_MESSAGE_BEING_DISPLAYED())) AND (NOT (sub_4167( sub_2571() )))) AND (NOT l_U530)) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_2681(), 0 )))) AND (NOT l_U518))
        {
            if (NOT l_U520)
            {
                PRINT_NOW( "DAN4_02", 7500, 1 );
            }
            else
            {
                PRINT_NOW( "DAN4_23", 7500, 1 );
            }
            l_U522 = 1;
        }
        switch (l_U481)
        {
            case 0:
            if (NOT l_U530)
            {
                if (((IS_WANTED_LEVEL_GREATER( sub_2681(), 0 )) AND (NOT l_U529)) AND (NOT (IS_CHAR_INJURED( l_U485 ))))
                {
                    PRINT_NOW( "DAN4_LOSECOPS", 7500, 1 );
                    l_U530 = 1;
                }
            }
            else if (NOT (IS_WANTED_LEVEL_GREATER( sub_2681(), 0 )))
            {
                sub_5221();
                if (NOT l_U518)
                {
                    l_U522 = 0;
                }
                l_U530 = 0;
            }
            if (l_U524)
            {
                if (NOT l_U525)
                {
                    if (NOT (IS_CHAR_INJURED( l_U485 )))
                    {
                        if (IS_CHAR_SITTING_IDLE( l_U485 ))
                        {
                            l_U525 = 1;
                        }
                    }
                }
                sub_5521();
                sub_5680();
            }
            if (NOT l_U519)
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_2571(), l_U491._fU0, l_U491._fU4, l_U491._fU8, 25.00000000, 25.00000000, 25.00000000, 0 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U485 )))
                    {
                        TASK_SIT_DOWN( l_U485, 0, 2, -2 );
                        l_U519 = 1;
                    }
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U485 )))
            {
                if (((sub_6420( sub_2571(), l_U485 )) AND (sub_6578( 1, 1 ))) AND (l_U522))
                {
                    sub_6876( 2 );
                }
            }
            if ((sub_4167( sub_2571() )) AND (NOT (IS_CHAR_DEAD( l_U485 ))))
            {
                if (sub_4167( l_U485 ))
                {
                    GET_CHAR_COORDINATES( l_U485, ref l_U540, ref l_U541, ref l_U542 );
                    if ((((LOCATE_CHAR_ON_FOOT_3D( sub_2571(), l_U540, l_U541, l_U542, 1.60000000, 1.60000000, 2.00000000, 0 )) AND (NOT l_U529)) AND (NOT l_U530)) AND (sub_6578( 1, 1 )))
                    {
                        l_U481 = 2;
                    }
                }
            }
            break;
            case 1:
            if (NOT l_U530)
            {
                if (IS_WANTED_LEVEL_GREATER( sub_2681(), 0 ))
                {
                    PRINT_NOW( "DAN4_LOSECOPS", 7500, 1 );
                    l_U530 = 1;
                }
            }
            else if (NOT (IS_WANTED_LEVEL_GREATER( sub_2681(), 0 )))
            {
                sub_5221();
                if (NOT l_U518)
                {
                    l_U522 = 0;
                }
                l_U530 = 0;
            }
            if ((sub_4167( sub_2571() )) AND (NOT l_U530))
            {
                l_U481 = 2;
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            break;
            case 2:
            if (NOT (IS_CHAR_INJURED( l_U485 )))
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U485, 1 );
                BLOCK_CHAR_AMBIENT_ANIMS( l_U485, 1 );
            }
            if (IS_WANTED_LEVEL_GREATER( sub_2681(), 0 ))
            {
                CLEAR_WANTED_LEVEL( sub_2681() );
            }
            switch (l_U482)
            {
                case 0:
                SET_PLAYER_CONTROL( sub_2681(), 0 );
                REMOVE_PLAYER_HELMET( sub_2681(), 1 );
                SET_CURRENT_CHAR_WEAPON( sub_2571(), 0, 1 );
                BLOCK_CHAR_GESTURE_ANIMS( sub_2571(), 1 );
                CLEAR_AREA_OF_CARS( l_U491._fU0, l_U491._fU4, l_U491._fU8, 4.00000000 );
                EXTINGUISH_FIRE_AT_POINT( l_U491._fU0, l_U491._fU4, l_U491._fU8, 20.00000000 );
                SET_WIDESCREEN_BORDERS( 1 );
                l_U522 = 1;
                if (DOES_BLIP_EXIST( l_U484 ))
                {
                    REMOVE_BLIP( l_U484 );
                }
                CLEAR_PRINTS();
                CLEAR_HELP();
                CLEAR_WANTED_LEVEL( sub_2681() );
                sub_8527();
                if (l_U520)
                {
                    if (NOT (IS_CHAR_DEAD( sub_2571() )))
                    {
                        while (NOT (IS_CHAR_SITTING_IDLE( sub_2571() )))
                        {
                            WAIT( 0 );
                        }
                    }
                    sub_4642( 1 );
                    if (NOT (IS_CHAR_INJURED( l_U485 )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U544 );
                        TASK_PAUSE( 0, 2500 );
                        TASK_GO_STRAIGHT_TO_COORD( 0, l_U491._fU0, l_U491._fU4, l_U491._fU8, 2, -1 );
                        TASK_CHAR_SLIDE_TO_COORD( 0, l_U491._fU0, l_U491._fU4, l_U491._fU8, 90, 0.75000000 );
                        TASK_SIT_DOWN( 0, 0, 2, -2 );
                        CLOSE_SEQUENCE_TASK( l_U544 );
                        TASK_PERFORM_SEQUENCE( l_U485, l_U544 );
                        CLEAR_SEQUENCE_TASK( l_U544 );
                    }
                }
                BEGIN_CAM_COMMANDS( ref l_U533 );
                SET_USE_HIGHDOF( 1 );
                CREATE_CAM( 14, ref l_U486 );
                SET_CAM_POS( l_U486, l_U497._fU0, l_U497._fU4, l_U497._fU8 );
                SET_CAM_ROT( l_U486, l_U500._fU0, l_U500._fU4, l_U500._fU8 );
                SET_CAM_ACTIVE( l_U486, 1 );
                SET_CAM_PROPAGATE( l_U486, 1 );
                SET_CAM_FOV( l_U486, l_U509 );
                SET_CAM_FAR_DOF( l_U486, l_U512 );
                SET_CAM_NEAR_DOF( l_U486, l_U511 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                END_CAM_COMMANDS( ref l_U533 );
                if (NOT (IS_CHAR_DEAD( l_U485 )))
                {
                    SET_CHAR_PROOFS( l_U485, 1, 1, 1, 1, 1 );
                }
                if (l_U520)
                {
                    DO_SCREEN_FADE_IN( 500 );
                }
                l_U482 = 1;
                SETTIMERA( 0 );
                SETTIMERB( 0 );
                break;
                case 1:
                sub_9149();
                if ((NOT l_U516) AND (NOT (IS_CHAR_INJURED( l_U485 ))))
                {
                    if ((IS_CHAR_SITTING_IDLE( sub_2571() )) AND (IS_CHAR_SITTING_IDLE( l_U485 )))
                    {
                        l_U516 = 1;
                        sub_10182( "BR3_MEET", ref l_U546, 7, 1 );
                        SETTIMERB( 0 );
                    }
                }
                if (((sub_9359( l_U546 )) == 0) AND (l_U532 == 0))
                {
                    BEGIN_CAM_COMMANDS( ref l_U533 );
                    SET_CAM_POS( l_U486, l_U503._fU0, l_U503._fU4, l_U503._fU8 );
                    SET_CAM_ROT( l_U486, l_U506._fU0, l_U506._fU4, l_U506._fU8 );
                    SET_CAM_FOV( l_U486, l_U510 );
                    SET_CAM_FAR_DOF( l_U486, l_U514 );
                    SET_CAM_NEAR_DOF( l_U486, l_U513 );
                    END_CAM_COMMANDS( ref l_U533 );
                    SETTIMERB( 0 );
                    l_U532 = 1;
                }
                if ((NOT (sub_9164( l_U546 ))) AND (l_U532 == 1))
                {
                    SETTIMERB( 0 );
                    l_U532 = 2;
                }
                if ((l_U532 == 2) AND (TIMERB() >= 400))
                {
                    l_U482 = 2;
                }
                break;
                case 2:
                BEGIN_CAM_COMMANDS( ref l_U533 );
                SET_USE_HIGHDOF( 0 );
                SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 1500 );
                SET_CAM_ACTIVE( l_U486, 0 );
                SET_CAM_PROPAGATE( l_U486, 0 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                END_CAM_COMMANDS( ref l_U533 );
                SET_GAME_CAM_HEADING( 90.00000000 );
                SET_WIDESCREEN_BORDERS( 0 );
                SET_PLAYER_CONTROL( sub_2681(), 1 );
                if (NOT (IS_CHAR_DEAD( l_U485 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U485, ref l_U483 );
                    SET_BLIP_AS_FRIENDLY( l_U483, 0 );
                    SET_CHAR_PROOFS( l_U485, 0, 0, 0, 0, 0 );
                }
                if (NOT l_U523)
                {
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                }
                l_U523 = 0;
                l_U534 = 0;
                l_U535 = 0;
                l_U536 = 0;
                l_U537 = 0;
                l_U481 = 3;
                SETTIMERA( 0 );
                SETTIMERB( 0 );
                break;
            }
            break;
            case 3:
            if (NOT l_U517)
            {
                sub_11666();
            }
            if (NOT l_U521)
            {
                BLOCK_CHAR_AMBIENT_ANIMS( sub_2571(), 1 );
            }
            if (NOT (IS_CHAR_INJURED( l_U485 )))
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U485, 1 );
                BLOCK_CHAR_AMBIENT_ANIMS( l_U485, 1 );
                if (NOT l_U529)
                {
                    if (((NOT l_U521) AND (IS_CONTROL_JUST_PRESSED( 2, 23 ))) AND (l_U526))
                    {
                        BLOCK_CHAR_AMBIENT_ANIMS( sub_2571(), 0 );
                        BLOCK_CHAR_GESTURE_ANIMS( sub_2571(), 0 );
                        TASK_PAUSE( sub_2571(), 10 );
                        sub_2808( ref l_U546, 0 );
                        if (NOT l_U517)
                        {
                            if (l_U536 < 9)
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref uVar2 );
                                sub_15019( "BR3_STAND", uVar2, 1, ref l_U552, 7, 1 );
                            }
                            else
                            {
                                sub_15019( "BR3_STAND", 2, 1, ref l_U552, 7, 1 );
                            }
                            l_U535 = 0;
                        }
                        if (NOT (IS_CHAR_INJURED( l_U485 )))
                        {
                            TASK_LOOK_AT_CHAR( l_U485, sub_2571(), -2, 0 );
                        }
                        l_U521 = 1;
                        l_U535 = 0;
                        l_U536 = 0;
                        l_U537 = 0;
                    }
                    if (((NOT l_U526) AND (TIMERB() >= 2000)) AND (l_U527))
                    {
                        PRINT_HELP( "DAN4_GETUP" );
                        l_U526 = 1;
                    }
                    if ((((NOT l_U527) AND (NOT (sub_9164( l_U546 )))) AND (NOT l_U528)) AND (TIMERB() >= 400))
                    {
                        sub_10182( "BR3_ARR", ref l_U546, 7, 1 );
                        l_U527 = 1;
                    }
                    if ((NOT l_U528) AND (NOT l_U517))
                    {
                        if (l_U521)
                        {
                            if (IS_CHAR_ARMED( sub_2571(), 7 ))
                            {
                                if ((HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U485, sub_2571() )) AND (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U485, sub_2571(), 0 ))))
                                {
                                    GET_CURRENT_CHAR_WEAPON( sub_2571(), ref l_U487 );
                                    if ((((((((((l_U487 == 7) || (l_U487 == 9)) || (l_U487 == 10)) || (l_U487 == 11)) || (l_U487 == 12)) || (l_U487 == 13)) || (l_U487 == 14)) || (l_U487 == 15)) || (l_U487 == 16)) || (l_U487 == 17))
                                    {
                                        sub_2808( ref l_U552, 0 );
                                        sub_10182( "BR3_GUN2", ref l_U552, 7, 1 );
                                        l_U528 = 1;
                                    }
                                    else if (l_U487 == 3)
                                    {
                                        sub_2808( ref l_U552, 0 );
                                        sub_10182( "BR3_KNIFE", ref l_U552, 7, 1 );
                                        l_U528 = 1;
                                    }
                                    else if (l_U487 == 1)
                                    {
                                        sub_2808( ref l_U552, 0 );
                                        sub_10182( "BR3_BAT", ref l_U552, 7, 1 );
                                        l_U528 = 1;
                                    }
                                    else if (((l_U487 == 4) || (l_U487 == 18)) || (l_U487 == 6))
                                    {
                                        sub_2808( ref l_U552, 0 );
                                        sub_10182( "BR3_GRENADE", ref l_U552, 7, 1 );
                                        l_U528 = 1;
                                    }
                                    else if (l_U487 == 5)
                                    {
                                        sub_2808( ref l_U552, 0 );
                                        sub_10182( "BR3_MOLO", ref l_U552, 7, 1 );
                                        l_U528 = 1;
                                    };;;;;
                                }
                            }
                            else if (((l_U487 == 0) AND (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U485, sub_2571(), 0 ))) || (NOT (IS_CHAR_SITTING_IDLE( l_U485 ))))
                            {
                                sub_2808( ref l_U552, 0 );
                                sub_10182( "BR3_PUNCH", ref l_U552, 7, 1 );
                                l_U528 = 1;
                            }
                        }
                        else if ((NOT (sub_9164( l_U546 ))) AND (TIMERB() >= 3000))
                        {
                            l_U528 = 1;
                        }
                    }
                    if ((l_U528) AND (NOT l_U517))
                    {
                        sub_5853();
                    }
                }
                if (((((((NOT l_U515) AND (NOT (sub_9164( l_U546 )))) AND (NOT (sub_9164( l_U552 )))) AND (NOT IS_MESSAGE_BEING_DISPLAYED())) AND (l_U516)) AND (l_U528)) AND (l_U517))
                {
                    PRINT_NOW( "DAN4_04", 7500, 1 );
                    l_U515 = 1;
                }
                GET_CHAR_COORDINATES( l_U485, ref l_U540, ref l_U541, ref l_U542 );
                if ((((LOCATE_CHAR_ANY_MEANS_3D( sub_2571(), l_U540, l_U541, l_U542, 10.00000000, 10.00000000, 10.00000000, 0 )) AND (l_U517)) AND (TIMERA() >= 4000)) AND (l_U515))
                {
                    sub_16160();
                }
                if (l_U517)
                {
                    GET_SCRIPT_TASK_STATUS( l_U485, 29, ref l_U545 );
                    if (l_U545 == 7)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U485 )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U544 );
                            TASK_SMART_FLEE_CHAR( 0, sub_2571(), 100000.00000000, 100000 );
                            CLOSE_SEQUENCE_TASK( l_U544 );
                            TASK_PERFORM_SEQUENCE( l_U485, l_U544 );
                            CLEAR_SEQUENCE_TASK( l_U544 );
                        }
                    }
                }
                if ((sub_6420( sub_2571(), l_U485 )) AND (sub_6578( 1, 1 )))
                {
                    sub_6876( 2 );
                }
                if (sub_16487( sub_2571() ))
                {
                    if (IS_SCREEN_FADED_OUT())
                    {
                        l_U531 = 1;
                    }
                    if (l_U531)
                    {
                        if (IS_SCREEN_FADING_IN())
                        {
                            if (DOES_CHAR_EXIST( l_U485 ))
                            {
                                DELETE_CHAR( ref l_U485 );
                            }
                        }
                        CLEAR_PRINTS();
                        sub_6876( 2 );
                    }
                }
            }
            else
            {
                REMOVE_BLIP( l_U483 );
                sub_16850( 1 );
                WAIT( 2000 );
                if (IS_WANTED_LEVEL_GREATER( sub_2681(), 0 ))
                {
                    PRINT_NOW( "DAN4_LOSECOPS2", 7500, 1 );
                    l_U481 = 4;
                }
                else
                {
                    CLEAR_THIS_PRINT( "DAN4_04" );
                    sub_17118();
                }
            }
            break;
            case 4:
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_2681(), 0 )))
            {
                CLEAR_THIS_PRINT( "DAN4_LOSECOPS2" );
                sub_17118();
            }
            break;
        }
    }
    return;
}

void sub_452()
{
    sub_461();
    return;
}

void sub_461()
{
    int iVar2;

    iVar2 = 8;
    sub_475( iVar2 );
    sub_1651( iVar2 );
    return;
}

void sub_475(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_519();
        sub_680();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_788();
            sub_827();
        }
    }
    sub_903();
    sub_1004();
    uVar5 = sub_1117( uParam0 );
    sub_1558( uVar5, 0 );
    return;
}

void sub_519()
{
    sub_533( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_633();
    }
    return;
}

void sub_533(int iParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    iVar3 = g_U26758[iParam0]._fU100;
    iVar3--;
    g_U26758[iParam0]._fU100 = iVar3;
    DECREMENT_INT_STAT( 255, 1 );
    return;
}

void sub_633()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_680()
{
    sub_689();
    return;
}

void sub_689()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_788()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_827()
{
    sub_836();
    return;
}

void sub_836()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_903()
{
    int I;

    I = 0;
    for ( I = 0; I < 28; I++ )
    {
        if (g_U10981[I]._fU144._fU36)
        {
            g_U10981[I]._fU28 = 1;
        }
        g_U10981[I]._fU144._fU36 = 0;
    }
    return;
}

void sub_1004()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1026();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1026()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1117(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 1: return 1;
        case 2: return 2;
        case 3: return 3;
        case 4: return 4;
        case 5: return 5;
        case 6: return 6;
        case 7: return 7;
        case 8: return 8;
        case 9: return 9;
        case 10: return 10;
        case 11: return 11;
        case 12: return 12;
        case 13: return 13;
        case 14: return 14;
        case 15: return 15;
        case 16: return 16;
        case 17: return 17;
        case 18: return 18;
        case 19: return 19;
        case 20: return 22;
        case 21: return 20;
        case 22: return 21;
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_1516( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1516(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1558(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 57))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U26671[iParam0] = iVar4;
    if (bParam1)
    {
        g_U26671[iParam0] += 30000;
    }
    return;
}

void sub_1651(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1660();
    if (g_U0)
    {
        return;
    }
    if (g_U91._fU40 == 0)
    {
        return;
    }
    if (NOT g_U10978)
    {
        return;
    }
    iVar3 = g_U13391[iParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (bVar4)
    {
        return;
    }
    if (g_U10981[iParam0]._fU12)
    {
        return;
    }
    if (g_U9893._fU40 == -1)
    {
        return;
    }
    if (NOT (g_U9893._fU40 == iParam0))
    {
        return;
    }
    if (NOT g_U813)
    {
        sub_2435();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1660()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_1698( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_1698( 1, g_U569[I] )) != 0)
            {
                sub_1984( I );
            }
        }
    }
    if (NOT sub_2150())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    if (g_U91._fU0 == 1014)
    {
        g_U91._fU92 = 1;
    }
    return;
}

int sub_1698(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1984(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2069( g_U569 - 1 );
    return;
}

void sub_2069(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2150()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1698( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2435()
{
    g_U9893._fU4 = 0;
    g_U9893._fU8 = 0;
    g_U9893._fU12 = 0;
    g_U9893._fU16 = 0;
    g_U9893._fU20 = 0;
    g_U9893._fU28 = 0;
    g_U9893._fU32 = 0;
    g_U9893._fU36 = 0;
    g_U9893._fU48 = 0;
    return;
}

void sub_2562()
{
    if (NOT (IS_CHAR_DEAD( sub_2571() )))
    {
        if (IS_CHAR_SITTING_IDLE( sub_2571() ))
        {
            TASK_PAUSE( sub_2571(), 10 );
        }
        BLOCK_CHAR_AMBIENT_ANIMS( sub_2571(), 0 );
        BLOCK_CHAR_GESTURE_ANIMS( sub_2571(), 0 );
        SET_PLAYER_CONTROL( sub_2681(), 1 );
    }
    g_U64951 = 0;
    sub_2728();
    sub_2808( ref l_U552, 1 );
    sub_2808( ref l_U546, 1 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 838.76000000, -479.04000000, -10, 902.83000000, -456.46000000, 100 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2571()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2681()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_2728()
{
    if (DOES_BLIP_EXIST( l_U483 ))
    {
        REMOVE_BLIP( l_U483 );
    }
    if (DOES_BLIP_EXIST( l_U484 ))
    {
        REMOVE_BLIP( l_U484 );
    }
    return;
}

void sub_2808(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_2992()
{
    unknown uVar2;

    CLEAR_PRINTS();
    SETTIMERA( 0 );
    SETTIMERB( 0 );
    sub_3024();
    sub_3496( 7 );
    if (IS_WANTED_LEVEL_GREATER( sub_2681(), 0 ))
    {
        g_U64951 = 1;
    }
    l_U520 = g_U64951;
    REQUEST_ANIMS( "MISSBRUCIE3" );
    while (NOT (HAVE_ANIMS_LOADED( "MISSBRUCIE3" )))
    {
        WAIT( 0 );
    }
    ADD_SCENARIO_BLOCKING_AREA( 879.63000000, -487.09000000, -10, 881.78000000, -484.86000000, 40 );
    l_U488 = {g_U10324[2]._fU0};
    if (NOT (IS_CHAR_DEAD( sub_2571() )))
    {
        if (g_U64951)
        {
            if (sub_4167( sub_2571() ))
            {
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_2681(), 0 )))
                {
                    l_U481 = 2;
                    DO_SCREEN_FADE_OUT( 500 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    if (NOT (IS_CHAR_DEAD( sub_2571() )))
                    {
                        if (IS_CHAR_IN_ANY_CAR( sub_2571() ))
                        {
                            GET_CAR_CHAR_IS_USING( sub_2571(), ref uVar2 );
                            WARP_CHAR_FROM_CAR_TO_COORD( sub_2571(), 878.23000000, -482.73000000, 16.40000000 );
                            if (DOES_VEHICLE_EXIST( uVar2 ))
                            {
                                DELETE_CAR( ref uVar2 );
                            }
                            WAIT( 0 );
                        }
                    }
                }
                else
                {
                    l_U481 = 1;
                }
            }
            else
            {
                l_U481 = 1;
            }
            l_U524 = 1;
        }
    }
    if (NOT l_U520)
    {
        if (NOT IS_SCREEN_FADED_IN())
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        if (IS_PLAYER_PLAYING( sub_2681() ))
        {
            SET_PLAYER_CONTROL( sub_2681(), 1 );
        }
    }
    return;
}

void sub_3024()
{
    sub_3044( "BRUCIE3", 0 );
    sub_3196( "BR3AUD" );
    sub_3044( "BR3AUD", 6 );
    sub_3338( 0, sub_2571(), "NIKO", 0 );
    return;
}

void sub_3044(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_3080())
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

int sub_3080()
{
    int I;

    for ( I = 0; I <= (8 - 1); I++ )
    {
        if (IS_STREAMING_ADDITIONAL_TEXT( I ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_3196(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_3215();
    return;
}

void sub_3215()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U181._fU16[I]._fU0 = nil;
        StrCopy( ref l_U181._fU16[I]._fU4, "", 32 );
        l_U181._fU344[I] = 0;
    }
    return;
}

void sub_3338(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3422( "\n PED NUMBER ", uParam0 );
    sub_3462( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_3422(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3462(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3496(unknown uParam0)
{
    int iVar3;
    unknown uVar4;

    sub_3509( uParam0, ref iVar3, ref uVar4 );
    if (iVar3 == 8)
    {
        return;
    }
    sub_3772( iVar3, uVar4, uParam0 );
    return;
}

void sub_3509(int iParam0, unknown uParam1, unknown uParam2)
{
    int J;
    int I;

    for ( J = 0; J <= (7 - 1); J++ )
    {
        for ( I = 0; I <= 3; I++ )
        {
            if ((sub_3548( J, I )) == iParam0)
            {
                (uParam1^) = J;
                (uParam2^) = I;
                return;
            }
        }
    }
    (uParam1^) = 8;
    return;
}

int sub_3548(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU0, 0, 15 );
        case 1: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU0, 16, 31 );
        case 2: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU4, 0, 15 );
        case 3: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU4, 16, 31 );
    }
    return -1;
}

void sub_3772(unknown uParam0, unknown uParam1, int iParam2)
{
    if ((sub_3548( uParam0, uParam1 )) == iParam2)
    {
        sub_3803( uParam0, uParam1, 0 );
    }
    return;
}

void sub_3803(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam1)
    {
        case 0:
        SET_BITS_IN_RANGE( ref g_U465[uParam0]._fU0, 0, 15, uParam2 );
        break;
        case 1:
        SET_BITS_IN_RANGE( ref g_U465[uParam0]._fU0, 16, 31, uParam2 );
        break;
        case 2:
        SET_BITS_IN_RANGE( ref g_U465[uParam0]._fU4, 0, 15, uParam2 );
        break;
        case 3:
        SET_BITS_IN_RANGE( ref g_U465[uParam0]._fU4, 16, 31, uParam2 );
        break;
    }
    return;
}

int sub_4167(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (IS_CHAR_IN_AREA_3D( uParam0, 876.80000000, -488.17000000, 0, 891.61000000, -481.85000000, 18.50000000, 0 ))
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
    }
    return 0;
}

void sub_4642(boolean bParam0)
{
    REQUEST_MODEL( 1424670436 );
    while (NOT (HAS_MODEL_LOADED( 1424670436 )))
    {
        WAIT( 0 );
    }
    if (NOT bParam0)
    {
        CREATE_CHAR( 26, 1424670436, l_U491._fU0, l_U491._fU4, l_U491._fU8, ref l_U485, 1 );
    }
    else
    {
        CREATE_CHAR( 26, 1424670436, 883.78510000, -484.34370000, 14.88280000, ref l_U485, 1 );
    }
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U485, 1 );
    SET_CHAR_IS_TARGET_PRIORITY( l_U485, 1 );
    SET_CHAR_RELATIONSHIP( l_U485, 5, 0 );
    SET_CHAR_KEEP_TASK( l_U485, 1 );
    SET_PED_DIES_WHEN_INJURED( l_U485, 1 );
    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U485, 1 );
    SET_CHAR_HEADING( l_U485, 90.00000000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U485, "dinerMloRoom01" );
    sub_3338( 1, l_U485, "TOM", 0 );
    l_U524 = 1;
    return;
}

void sub_5221()
{
    if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2571(), l_U488._fU0, l_U488._fU4, l_U488._fU8, 30.00000000, 30.00000000, 4.00000000, 0 ))) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
    {
        PRINT_NOW( "DAN4_24", 7500, 1 );
        if (NOT (DOES_BLIP_EXIST( l_U484 )))
        {
            ADD_BLIP_FOR_COORD( l_U488._fU0, l_U488._fU4, l_U488._fU8, ref l_U484 );
            sub_5369( ref l_U484 );
            CHANGE_BLIP_PRIORITY( l_U484, 2 );
            CHANGE_BLIP_SPRITE( l_U484, 54 );
        }
        l_U518 = 1;
    }
    return;
}

void sub_5369(unknown uParam0)
{
    g_U2221 = (uParam0^);
    return;
}

void sub_5521()
{
    if (NOT l_U530)
    {
        if (NOT l_U518)
        {
            sub_5221();
        }
        else if (LOCATE_CHAR_ANY_MEANS_3D( sub_2571(), l_U488._fU0, l_U488._fU4, l_U488._fU8, 30.00000000, 30.00000000, 4.00000000, 0 ))
        {
            PRINT_NOW( "DAN4_02", 7500, 1 );
            if (DOES_BLIP_EXIST( l_U484 ))
            {
                REMOVE_BLIP( l_U484 );
            }
            l_U518 = 0;
        }
    }
    return;
}

void sub_5680()
{
    if (NOT (IS_CHAR_INJURED( l_U485 )))
    {
        if ((((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U485, sub_2571(), 0 )) || (IS_ANY_CHAR_SHOOTING_IN_AREA( 877.27000000, -488.17000000, -10, 891.79000000, -481.69000000, 19, 0 ))) || ((((IS_PLAYER_TARGETTING_CHAR( sub_2681(), l_U485 )) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_2681(), l_U485 ))) AND (IS_CHAR_ARMED( sub_2571(), 7 ))) AND (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U485, sub_2571() )))) || ((l_U525) AND (NOT (IS_CHAR_SITTING_IDLE( l_U485 )))))
        {
            sub_5853();
            if (l_U481 == 0)
            {
                l_U529 = 1;
            }
            l_U481 = 3;
            if (NOT (DOES_BLIP_EXIST( l_U483 )))
            {
                ADD_BLIP_FOR_CHAR( l_U485, ref l_U483 );
                SET_BLIP_AS_FRIENDLY( l_U483, 0 );
            }
        }
    }
    else if (l_U481 == 0)
    {
        l_U529 = 1;
    }
    l_U481 = 3;;
    return;
}

void sub_5853()
{
    if (NOT (IS_CHAR_INJURED( l_U485 )))
    {
        TASK_CLEAR_LOOK_AT( l_U485 );
        OPEN_SEQUENCE_TASK( ref l_U543 );
        TASK_FLUSH_ROUTE();
        if (IS_CHAR_IN_AREA_2D( sub_2571(), 885.42000000, -487.66000000, 896.77000000, -481.87000000, 0 ))
        {
            TASK_EXTEND_ROUTE( 884.36000000, -484.40000000, 15.88280000 );
            TASK_EXTEND_ROUTE( 884.09000000, -480.62000000, 15.48040000 );
            TASK_EXTEND_ROUTE( 880.83000000, -480.62000000, 15.01000000 );
            TASK_FOLLOW_POINT_ROUTE( 0, 3, 0 );
        }
        else
        {
            TASK_EXTEND_ROUTE( 893.05570000, -484.27030000, 15.88280000 );
            TASK_EXTEND_ROUTE( 893.02000000, -479.60000000, 15.48040000 );
            TASK_FOLLOW_POINT_ROUTE( 0, 4, 0 );
        }
        TASK_SMART_FLEE_CHAR( 0, sub_2571(), 100000.00000000, 100000 );
        CLOSE_SEQUENCE_TASK( l_U543 );
        TASK_PERFORM_SEQUENCE( l_U485, l_U543 );
        CLEAR_SEQUENCE_TASK( l_U543 );
        l_U516 = 1;
        l_U528 = 1;
        l_U517 = 1;
    }
    return;
}

int sub_6420(unknown uParam0, unknown uParam1)
{
    float fVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
    }
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
    }
    fVar4 = VDIST( uVar5, uVar8 );
    if (IS_CHAR_ON_SCREEN( uParam1 ))
    {
        if (fVar4 > 350.00000000)
        {
            return 1;
        }
    }
    else if (fVar4 > 220.00000000)
    {
        return 1;
    }
    return 0;
}

int sub_6578(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_2571() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2571(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_2571() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2571(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2571()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2571() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2571() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_2681() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_2681() )))
    {
        return 0;
    }
    return 1;
}

void sub_6876(unknown uParam0)
{
    sub_6885();
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_2681(), 150 );
        SAY_AMBIENT_SPEECH( sub_2571(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    switch (uParam0)
    {
        case 0:
        PRINT_NOW( "DAN4_FAIL2", 7000, 1 );
        sub_7140( 8, "BR3_FAIL1", "BR3AUD", 0 );
        break;
        case 1:
        PRINT_NOW( "DAN4_FAIL3", 7000, 1 );
        sub_7140( 8, "BR3_FAIL3", "BR3AUD", 0 );
        break;
        case 2:
        if (l_U517)
        {
            PRINT_NOW( "DAN4_FAIL1", 7000, 1 );
        }
        else
        {
            PRINT_NOW( "DAN4_FAIL2", 7000, 1 );
        }
        sub_7140( 8, "BR3_FAIL2", "BR3AUD", 0 );
        break;
    }
    sub_2562();
    return;
}

void sub_6885()
{
    sub_6894();
    return;
}

void sub_6894()
{
    int iVar2;

    iVar2 = 8;
    sub_6908( iVar2 );
    sub_1651( iVar2 );
    return;
}

void sub_6908(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_2681(), 150 );
    CLEAR_HELP();
    sub_475( uParam0 );
    return;
}

void sub_7140(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_7184( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_7184(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

    array(ref uVar8._fU32, 5);
    ref uVar8;
    iVar38 = uVar8._fU32;
    if (NOT (IS_THREAD_ACTIVE( g_U812 )))
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
        g_U811 = 1;
        g_U812 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

void sub_8527()
{
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2571() );
    WAIT( 0 );
    if (NOT (IS_CHAR_DEAD( sub_2571() )))
    {
        SET_CHAR_COORDINATES( sub_2571(), l_U494._fU0, l_U494._fU4, l_U494._fU8 );
        SET_CHAR_HEADING( sub_2571(), 270.00000000 );
        TASK_SIT_DOWN( sub_2571(), 0, 3, -2 );
    }
    return;
}

void sub_9149()
{
    if (sub_9164( l_U546 ))
    {
        l_U537 = l_U536;
        l_U536 = sub_9359( l_U546 );
        if (NOT (l_U536 == l_U537))
        {
            l_U535 = 0;
            l_U534 = 0;
        }
        if (NOT (IS_CHAR_INJURED( l_U485 )))
        {
            if (IS_CHAR_SITTING_IDLE( l_U485 ))
            {
                if (HAS_OVERRIDEN_SIT_IDLE_ANIM_FINISHED( l_U485 ))
                {
                    switch (l_U536)
                    {
                        case 0:
                        switch (l_U535)
                        {
                            case 0:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_WHAT!_U_WISH", 0 );
                            break;
                            case 1:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_OH_MY_GOD", 0 );
                            break;
                        }
                        l_U535++;
                        break;
                        case 1:
                        switch (l_U535)
                        {
                            case 0:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_I_DONT_THINK_SO", 0 );
                            break;
                            case 1:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_DONT_KNOW", 0 );
                            break;
                            case 2:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_ABSOLUTELY", 0 );
                            break;
                        }
                        l_U535++;
                        break;
                    }
                }
            }
        }
        if (NOT (IS_CHAR_INJURED( sub_2571() )))
        {
            if (IS_CHAR_SITTING_IDLE( sub_2571() ))
            {
                if (HAS_OVERRIDEN_SIT_IDLE_ANIM_FINISHED( sub_2571() ))
                {
                    switch (l_U536)
                    {
                        case 2:
                        switch (l_U534)
                        {
                            case 0:
                            CHANGE_CHAR_SIT_IDLE_ANIM( sub_2571(), "MISSBRUCIE3", "niko_nod_yes", 0 );
                            break;
                            case 1:
                            CHANGE_CHAR_SIT_IDLE_ANIM( sub_2571(), "MISSBRUCIE3", "niko_yes", 0 );
                            break;
                        }
                        l_U534++;
                        break;
                        default:
                    }
                }
            }
        }
    }
    return;
}

int sub_9164(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_9276( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_9276( "\n speech is not playing" );
    }
    return 0;
}

void sub_9276(unknown uParam0)
{
    return;
}

void sub_9359(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_9164( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

void sub_10182(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_10205( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_10205(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_10259( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_10259(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_10281( iParam1 )))
    {
        return 0;
    }
    l_U181._fU384 = 0;
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
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8499[I] = {(uParam0^)[I]};
    }
    g_U8493 = {(iParam1^)};
    sub_10961( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_10281(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_9276( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U556[1] ))
    {
        switch (g_U91._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_9276( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 > iParam0->_fU0)
        {
            sub_9276( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8392 = iParam0->_fU0;
    g_U8393++;
    if (g_U8393 > 100000)
    {
        g_U8393 = 1;
    }
    iParam0->_fU4 = g_U8393;
    return 1;
}

void sub_10961(int iParam0, int iParam1)
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

void sub_11666()
{
    if (sub_9164( l_U546 ))
    {
        l_U537 = l_U536;
        l_U536 = sub_9359( l_U546 );
        if (NOT (l_U536 == l_U537))
        {
            l_U535 = 0;
            l_U534 = 0;
        }
        if (NOT (IS_CHAR_INJURED( l_U485 )))
        {
            if (IS_CHAR_SITTING_IDLE( l_U485 ))
            {
                if (HAS_OVERRIDEN_SIT_IDLE_ANIM_FINISHED( l_U485 ))
                {
                    switch (l_U536)
                    {
                        case 0:
                        switch (l_U535)
                        {
                            case 0:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_OF_COARSE", 0 );
                            break;
                            case 1:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_OH_COME_ON", 0 );
                            break;
                        }
                        l_U535++;
                        break;
                        case 2:
                        switch (l_U535)
                        {
                            case 0:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_NO_WAY", 0 );
                            break;
                            case 1:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_CANT_BE", 0 );
                            break;
                        }
                        l_U535++;
                        break;
                        case 5:
                        switch (l_U535)
                        {
                            case 0:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_AGREE", 0 );
                            break;
                            case 1:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_MAYBE_U", 0 );
                            break;
                            case 2:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_CANT_BE", 0 );
                            break;
                        }
                        l_U535++;
                        break;
                        case 6:
                        switch (l_U535)
                        {
                            case 0:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_ABSOLUTELY", 0 );
                            break;
                            case 1:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_ALL_GONE", 0 );
                            break;
                            case 2:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_THANK_U", 0 );
                            break;
                            case 3:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_DONT_EVEN", 0 );
                            break;
                        }
                        l_U535++;
                        break;
                        case 7:
                        switch (l_U535)
                        {
                            case 0:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_I_DONT_CARE", 0 );
                            break;
                            case 1:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_THANK_U", 0 );
                            break;
                            case 2:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_CANT_BE", 0 );
                            break;
                        }
                        l_U535++;
                        break;
                        case 9:
                        switch (l_U535)
                        {
                            case 0:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_YOUR_RIGHT", 0 );
                            break;
                            case 1:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_CANT_BE", 0 );
                            break;
                            case 2:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_OH_MY_GOD", 0 );
                            break;
                        }
                        l_U535++;
                        break;
                        case 10:
                        switch (l_U535)
                        {
                            case 0:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_I_CANT", 0 );
                            break;
                            case 1:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_ME", 0 );
                            break;
                            case 2:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_NO", 0 );
                            break;
                            case 3:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_CANT_BE", 0 );
                            break;
                        }
                        l_U535++;
                        break;
                        case 12:
                        switch (l_U535)
                        {
                            case 0:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_I_DONT_THINK_SO", 0 );
                            break;
                            case 1:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_YOUR_RIGHT", 0 );
                            break;
                        }
                        l_U535++;
                        break;
                        case 3:
                        switch (l_U535)
                        {
                            case 0:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_DONT_U_DARE", 0 );
                            break;
                            default:
                        }
                        l_U535++;
                        break;
                    }
                }
            }
        }
        if (NOT (IS_CHAR_INJURED( sub_2571() )))
        {
            if (IS_CHAR_SITTING_IDLE( sub_2571() ))
            {
                if (HAS_OVERRIDEN_SIT_IDLE_ANIM_FINISHED( sub_2571() ))
                {
                    switch (l_U536)
                    {
                        case 1:
                        switch (l_U534)
                        {
                            case 0:
                            CHANGE_CHAR_SIT_IDLE_ANIM( sub_2571(), "MISSBRUCIE3", "niko_nod_NO", 0 );
                            break;
                            case 1:
                            CHANGE_CHAR_SIT_IDLE_ANIM( sub_2571(), "MISSBRUCIE3", "niko_DISELIEF", 0 );
                            break;
                        }
                        l_U534++;
                        break;
                        case 8:
                        switch (l_U534)
                        {
                            case 0:
                            CHANGE_CHAR_SIT_IDLE_ANIM( sub_2571(), "MISSBRUCIE3", "niko_nod_NO", 0 );
                            break;
                            case 1:
                            CHANGE_CHAR_SIT_IDLE_ANIM( sub_2571(), "MISSBRUCIE3", "niko_DISELIEF", 0 );
                            break;
                        }
                        l_U534++;
                        break;
                        case 4:
                        switch (l_U534)
                        {
                            case 0:
                            CHANGE_CHAR_SIT_IDLE_ANIM( sub_2571(), "MISSBRUCIE3", "niko_NOT_ME", 0 );
                            break;
                            default:
                        }
                        l_U534++;
                        break;
                        case 11:
                        switch (l_U534)
                        {
                            case 0:
                            CHANGE_CHAR_SIT_IDLE_ANIM( sub_2571(), "MISSBRUCIE3", "niko_I_WILL", 0 );
                            break;
                            case 1:
                            CHANGE_CHAR_SIT_IDLE_ANIM( sub_2571(), "MISSBRUCIE3", "niko_YES", 0 );
                            break;
                            case 2:
                            CHANGE_CHAR_SIT_IDLE_ANIM( sub_2571(), "MISSBRUCIE3", "niko_IS_THIS_IT", 0 );
                            break;
                        }
                        l_U534++;
                        break;
                    }
                }
            }
        }
    }
    else if (sub_9164( l_U552 ))
    {
        l_U537 = l_U536;
        l_U536 = sub_9359( l_U552 );
        if (NOT (l_U536 == l_U537))
        {
            l_U535 = 0;
            l_U534 = 0;
        }
        if (NOT (IS_CHAR_INJURED( l_U485 )))
        {
            if (IS_CHAR_SITTING_IDLE( l_U485 ))
            {
                if (HAS_OVERRIDEN_SIT_IDLE_ANIM_FINISHED( l_U485 ))
                {
                    switch (l_U536)
                    {
                        case 0:
                        switch (l_U535)
                        {
                            case 0:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_DONT_KNOW", 0 );
                            break;
                            case 1:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_DONT_EVEN", 0 );
                            break;
                            case 2:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_THANK_U", 0 );
                            break;
                        }
                        l_U535++;
                        break;
                        case 1:
                        switch (l_U535)
                        {
                            case 0:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_THIS_HIGH", 0 );
                            break;
                            case 1:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_DEFINITELY_NOT", 0 );
                            break;
                        }
                        l_U535++;
                        break;
                        case 2:
                        switch (l_U535)
                        {
                            case 0:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_NO", 0 );
                            break;
                            case 1:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_DONT_KNOW", 0 );
                            break;
                            case 2:
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U485, "MISSBRUCIE3", "TOM_CANT_BE", 0 );
                            break;
                        }
                        l_U535++;
                        break;
                    }
                }
            }
        }
    }
    return;
}

void sub_15019(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_15046( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_15046(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    char[16] cVar9;
    char[12] cVar13;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;

    StrCopy( ref cVar9, uParam1, 16 );
    array(ref cVar13, 2);
    StrCopy( ref cVar13[0], uParam0, 16 );
    StrCopy( ref cVar13[1], "END", 16 );
    return sub_10259( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

void sub_16160()
{
    if (((NOT (sub_9164( l_U546 ))) AND (NOT (sub_9164( l_U552 )))) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
    {
        if (l_U538 >= l_U539)
        {
            sub_10182( "BR3_CHASE", ref l_U552, 6, 1 );
            l_U538 = 0.00000000;
            GENERATE_RANDOM_FLOAT_IN_RANGE( 7.00000000, 10.00000000, ref l_U539 );
        }
        else
        {
            l_U538 += 1.00000000 * TIMESTEP();
        }
    }
    return;
}

int sub_16487(int iParam0)
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
                if (sub_16551( uVar3 ))
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

int sub_16551(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2239))
    {
        return 1;
    }
    return 0;
}

void sub_16850(boolean bParam0)
{
    int iVar3;

    if (bParam0)
    {
        if (sub_9164( l_U546 ))
        {
            sub_9359( l_U546 );
            if ((((iVar3 == 0) || (iVar3 == 2)) || (iVar3 == 3)) || (iVar3 == 5))
            {
                sub_2808( ref l_U546, 0 );
            }
            else
            {
                sub_2808( ref l_U546, 1 );
            }
        }
        if (sub_9164( l_U552 ))
        {
            sub_2808( ref l_U552, 0 );
        }
    }
    else if (sub_9164( l_U546 ))
    {
        sub_2808( ref l_U546, 1 );
    }
    if (sub_9164( l_U552 ))
    {
        sub_2808( ref l_U552, 1 );
    }
    return;
}

void sub_17118()
{
    sub_17127();
    TRIGGER_MISSION_COMPLETE_AUDIO( 52 );
    CLEAR_WANTED_LEVEL( sub_2681() );
    sub_28737( 19 );
    UNLOCK_MISSION_NEWS_STORY( 19 );
    sub_31939( 3041, 3 );
    sub_32017( "PD_TOM", "PD_RIVAS" );
    sub_32206( 2 );
    sub_32267( 2, 0 );
    sub_32267( 1, 1 );
    sub_32313( 1, 1 );
    sub_7140( 8, "BR3_DONE", "BR3AUD", 0 );
    sub_2562();
    return;
}

void sub_17127()
{
    sub_17136();
    return;
}

void sub_17136()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_17154();
    sub_17213( iVar2, iVar3, iVar4 );
    return;
}

void sub_17154()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_17213(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 8;
    sub_17244( iVar5, uParam0, uParam1, uParam2, "Friend_9" );
    return;
}

void sub_17244(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    char[64] cVar9;
    int iVar25;
    int iVar26;
    boolean bVar27;
    unknown uVar28;
    unknown uVar29;
    int iVar30;
    boolean bVar31;

    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U13391[iParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_17340( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_17340( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U13391[iParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_17340( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_17340( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_17340( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_17340( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_17917( iParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U10981[iParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U13391[iParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        g_U10981[iParam0]._fU144._fU8++;
        if ((NOT g_U10981[iParam0]._fU144._fU12) AND (g_U10981[iParam0]._fU144._fU8 >= g_U10981[iParam0]._fU144._fU4))
        {
            iVar26 = 0;
            GET_GAME_TIMER( ref iVar26 );
            g_U10981[iParam0]._fU144._fU16 = iVar26 + 60000;
        }
        if (g_U10981[iParam0]._fU144._fU8 == 1)
        {
            if (iParam0 == 3)
            {
                sub_18314( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_18314( 0, 4 );
            }
        }
    }
    if (NOT (sub_18403( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_2681(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_2681() );
    }
    sub_1660();
    bVar27 = true;
    uVar28 = sub_17917( iParam0, iVar7 );
    uVar29 = sub_1117( iParam0 );
    if (bParam1)
    {
        iVar30 = g_U13391[iParam0]._fU0._fU56;
        if ((iVar30 == 5) || (iVar30 == 6))
        {
            bVar27 = false;
        }
        if (NOT g_U0)
        {
            bVar31 = true;
            if (IS_BIT_SET( g_U26758[uVar28]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U9921 );
                sub_27779( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_28209();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_28294( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_28351( iParam0 );
                sub_28390( 0 );
                sub_1558( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_28498();
        }
    }
    if (bParam2)
    {
        sub_28209();
        sub_28586();
        sub_28390( 0 );
    }
    if (bParam3)
    {
        sub_28209();
        sub_28626();
        sub_28390( 0 );
        sub_1558( uVar29, 0 );
    }
    sub_1004();
    return;
}

void sub_17340(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_17917(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_1516( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U32640[iParam0]._fU0;
    iVar5 = g_U32640[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U26758[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

void sub_18314(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_18403(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_18611( uParam1 );
        break;
        case 1:
        bVar8 = sub_20689( uParam1 );
        break;
        case 2:
        bVar8 = sub_20915( uParam1 );
        break;
        case 3:
        bVar8 = sub_21065( uParam1 );
        break;
        case 4:
        bVar8 = sub_21343( uParam1 );
        break;
        case 5:
        bVar8 = sub_21646( uParam1 );
        break;
        case 6:
        bVar8 = sub_21845( uParam1 );
        break;
        case 7:
        bVar8 = sub_22071( uParam1 );
        break;
        case 8:
        bVar8 = sub_22306( uParam1 );
        break;
        case 9:
        bVar8 = sub_22681( uParam1 );
        break;
        case 10:
        bVar8 = sub_22928( uParam1 );
        break;
        case 11:
        bVar8 = sub_23067( uParam1 );
        break;
        case 12:
        bVar8 = sub_23366( uParam1 );
        break;
        case 13:
        bVar8 = sub_23594( uParam1 );
        break;
        case 14:
        bVar8 = sub_23881( uParam1 );
        break;
        case 15:
        bVar8 = sub_24163( uParam1 );
        break;
        case 16:
        bVar8 = sub_24445( uParam1 );
        break;
        case 17:
        bVar8 = sub_24646( uParam1 );
        break;
        case 18:
        bVar8 = sub_24719( uParam1 );
        break;
        case 19:
        bVar8 = sub_24933( uParam1 );
        break;
        case 20:
        bVar8 = sub_25186( uParam1 );
        break;
        case 21:
        bVar8 = sub_25433( uParam1 );
        break;
        case 22:
        bVar8 = sub_25634( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_20294( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_17917( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_25957( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_18611(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_18890( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_18890( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_18890( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_18890( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_18890( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_18890( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_18890( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_18890( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_18890( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_18890( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_18890( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_18890( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_18890( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_18890( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_18890( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_18890( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_18890( iVar3, 0, 3, 1, 0, 0 );
        break;
        case 3:
        case 30:
        case 14:
        case 37:
        case 18:
        case 19:
        case 17:
        case 21: break;
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        sub_18890( iVar3, 0, sub_20172(), sub_20438(), 0, 0 );
        break;
        default:
        sub_20597( "Friend 1", 1 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20597( "Friend 1", 0 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_18890(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_18901( uParam1 );
    sub_19075( uParam0, 0, uParam2 );
    sub_19075( uParam0, 1, uParam3 );
    sub_19075( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_17154();
    return;
}

void sub_18901(unknown uParam0)
{
    ADD_SCORE( sub_2681(), uParam0 );
    sub_18926( uParam0 );
    return;
}

void sub_18926(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1516( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_19075(unknown uParam0, int iParam1, int iParam2)
{
    g_U10981[uParam0]._fU40[iParam1] += iParam2;
    if (g_U10981[uParam0]._fU40[iParam1] < 0)
    {
        g_U10981[uParam0]._fU40[iParam1] = 0;
    }
    if (g_U10981[uParam0]._fU40[iParam1] > 100)
    {
        g_U10981[uParam0]._fU40[iParam1] = 100;
    }
    if (iParam1 == 1)
    {
        sub_19232( uParam0 );
    }
    return;
}

void sub_19232(unknown uParam0)
{
    if (g_U0)
    {
        return;
    }
    if (IS_BIT_SET( ProtectedGet(g_U64791), 11 ))
    {
        return;
    }
    if (g_U10981[uParam0]._fU40[1] < 90)
    {
        return;
    }
    switch (uParam0)
    {
        case 0:
        SET_BIT( 1, 6 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 3:
        SET_BIT( 1, 7 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 7:
        SET_BIT( 1, 8 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 8:
        SET_BIT( 1, 9 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 13:
        SET_BIT( 1, 10 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
    }
    if (((((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 1 ))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 2 )))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 3 )))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 4 )))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 5 ))))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 7 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 9 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 10 )))
    {
        return;
    }
    if (g_U10981[0]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 6 )))
        {
            return;
        }
    }
    if (g_U10981[7]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 8 )))
        {
            return;
        }
    }
    SET_BIT( 1, 11 );
    AWARD_ACHIEVEMENT( 35 );
    return;
    break;
    2;
    1;
    ref g_U64791;
    1;
    ref g_U64791;
    break;
}

int sub_20172()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_20294( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_20294(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_20438()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_20294( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_20597(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_20689(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_18890( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_18890( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_18890( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_18890( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_20597( "Contact 2", 1 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20597( "Contact 2", 0 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_20915(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_18890( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_20597( "Girl 3", 1 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20597( "Girl 3", 0 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_21065(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_18890( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_18890( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_18890( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_18890( iVar3, 0, sub_20172(), sub_20438(), 0, 0 );
        break;
        default:
        sub_20597( "Friend 4", 1 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20597( "Friend 4", 0 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_21343(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_18890( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_18890( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_18890( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_18890( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_18890( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_18890( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_18890( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_20597( "Contact 5", 1 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20597( "Contact 5", 0 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_21646(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_18890( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_18890( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_18890( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_20597( "Contact 7", 1 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20597( "Contact 7", 0 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_21845(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_18890( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_18890( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_18890( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_18890( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_20597( "Contact 7b", 1 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20597( "Contact 7b", 0 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_22071(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_18890( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_18890( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_18890( iVar3, 0, sub_20172(), sub_20438(), 0, 0 );
        break;
        default:
        sub_20597( "Friend 8", 1 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20597( "Friend 8", 0 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_22306(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;

    iVar3 = 8;
    bVar4 = false;
    iVar5 = 500;
    switch (uParam0)
    {
        case 0:
        sub_18890( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_18890( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_18890( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_18890( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_18890( iVar3, iVar5, 3, 1, 0, 0 );
        INCREMENT_INT_STAT_NO_MESSAGE( 109, iVar5 );
        break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        sub_18890( iVar3, 0, sub_20172(), sub_20438(), 0, 0 );
        break;
        default:
        sub_20597( "Friend 9", 1 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20597( "Friend 9", 0 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_22681(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 9;
    iVar4 = 7;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_18890( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_18890( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_18890( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_18890( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_20597( "Contact 10", 1 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_20597( "Contact 10", 0 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_22928(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_18890( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_20597( "Girl 11", 1 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20597( "Girl 11", 0 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_23067(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_18890( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_18890( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_18890( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_18890( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_18890( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_18890( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_20597( "Contact 12", 1 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20597( "Contact 12", 0 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_23366(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_18890( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_18890( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_18890( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_18890( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_20597( "Contact 13", 1 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20597( "Contact 13", 0 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_23594(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_18890( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_18890( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_18890( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_18890( iVar3, 0, sub_20172(), sub_20438(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_20597( "Friend 15", 1 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20597( "Friend 15", 0 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_23881(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_18890( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_18890( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_18890( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_18890( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_18890( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_18890( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_20597( "Contact 16", 1 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20597( "Contact 16", 0 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_24163(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_18890( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_18890( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_18890( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_18890( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_18890( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_20597( "Contact 18", 1 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20597( "Contact 18", 0 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_24445(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_18890( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_18890( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_18890( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_20597( "Contact 19", 1 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20597( "Contact 19", 0 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_24646(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_20597( "Girl 20", 0 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_24719(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_18890( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_18890( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_18890( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_20597( "Contact 21", 1 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20597( "Contact 21", 0 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_24933(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_18890( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_18890( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_18890( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_18890( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_18890( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_20597( "Contact 22", 1 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20597( "Contact 22", 0 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_25186(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_18890( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_18890( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_18890( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_18890( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_20597( "Contact 24", 1 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20597( "Contact 24", 0 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_25433(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_18890( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_18890( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_18890( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_20597( "Contact 25", 1 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20597( "Contact 25", 0 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_25634(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 22;
    iVar4 = 8;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_18890( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_20597( "Girl 26", 1 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_20597( "Girl 26", 0 );
        sub_18890( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_25957(int iParam0, int iParam1)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (iParam1 == -1)
    {
        return;
    }
    if (sub_26005( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_26736( iParam1 );
    }
    return;
}

int sub_26005(int iParam0, int iParam1)
{
    int iVar4;
    boolean bVar5;
    int iVar6;

    if (g_U0)
    {
        return 0;
    }
    if (iParam0 == -1)
    {
        return 0;
    }
    if (iParam1 == -1)
    {
        return 0;
    }
    iVar4 = g_U13391[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U26758[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U26758[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_26145( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_26145(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_26327( 0 );
    return;
}

void sub_26327(boolean bParam0)
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
        if (g_U32871[I]._fU4 == g_U32871[I]._fU0)
        {
            fVar4 = g_U32871[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U32871[I]._fU0 );
            fVar6 = TO_FLOAT( g_U32871[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U32871[I]._fU8;
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
    SET_FLOAT_STAT( 0, fVar3 );
    if (bVar7)
    {
        sub_26582();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_26582()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_26736(int iParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (g_U13334[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U13334[iParam0]._fU4 == g_U13334[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U13334[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U13334[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_27069( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_27069( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_27069( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_27069( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_27069( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_27069( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_27069( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_27069( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_27069( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_27069( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_27069( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_27069( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_27069( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_27069( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_27069( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_27069( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_27069( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_27069( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_27069( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_27069(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_27779(unknown uParam0, unknown uParam1)
{
    sub_27798( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_27798(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
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

    switch (uParam0)
    {
        case 0:
        PLAYSTATS_INT( "SPRUNK_BOUGHT", uParam1 );
        break;
        case 1:
        PLAYSTATS_INT( "HOTDOG_BOUGHT", uParam1 );
        break;
        case 2:
        PLAYSTATS_INT( "NUTS_BOUGHT", uParam1 );
        break;
        case 3:
        PLAYSTATS_INT( "BURGERS_BOUGHT", uParam1 );
        break;
        case 7:
        PLAYSTATS_INT( "DONATE_BEGGAR", uParam1 );
        break;
        case 8:
        PLAYSTATS_INT( "DONATE_BUSKER", uParam1 );
        break;
        case 4:
        PLAYSTATS_INT( "BSHOT_BOUGHT", uParam1 );
        break;
        case 5:
        PLAYSTATS_INT( "CBELL_BOUGHT", uParam1 );
        break;
        case 6:
        PLAYSTATS_INT( "CAFE_BOUGHT", uParam1 );
        break;
        case 9: break;
    }
    return;
}

void sub_28209()
{
    g_U9914._fU0 = 1;
    g_U9914._fU4 = 0;
    g_U9914._fU8 = 0;
    g_U9914._fU12 = 0;
    g_U9914._fU16 = 0;
    g_U9914._fU20 = 0;
    g_U9914._fU24 = 7;
    return;
}

int sub_28294(int iParam0, int iParam1)
{
    if (iParam0 == 0)
    {
        if (iParam1 == 20)
        {
            return 1;
        }
    }
    return 0;
}

void sub_28351(unknown uParam0)
{
    sub_903();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_28390(unknown uParam0)
{
    if (g_U9385)
    {
        g_U9385 = 0;
        return;
    }
    g_U9380._fU0 = 1;
    g_U9380._fU4 = uParam0;
    g_U9380._fU8 = 0;
    g_U9380._fU12 = 0;
    g_U9380._fU16 = 0;
    return;
}

void sub_28498()
{
    sub_28507();
    return;
}

void sub_28507()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_28586()
{
    sub_28507();
    return;
}

void sub_28626()
{
    sub_28507();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_28737(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_28824( iParam0 ))
    {
        sub_29874( iParam0 );
    }
    return;
}

int sub_28824(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 20 )) || (IS_BIT_SET( g_U1452[uParam0], 21 )))
    {
        return 0;
    }
    sub_28881( ref uVar3, 1, 0, 0 );
    sub_29493( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_9276( "\n ----------------------------------------------------------------" );
    sub_3422( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_9276( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_28881(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_28934( iParam0, uParam1, uParam2 );
    if (NOT bParam3)
    {
        return;
    }
    if (NOT ((ref iParam0->_fU8->_fU4) == 0))
    {
        if ((ref iParam0->_fU8->_fU4) <= 15)
        {
            ref iParam0->_fU8->_fU4 = 15;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 30)
        {
            ref iParam0->_fU8->_fU4 = 30;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 45)
        {
            ref iParam0->_fU8->_fU4 = 45;
        }
        else
        {
            ref iParam0->_fU8->_fU4 = 0;
            ref iParam0->_fU8->_fU0++;
        };;;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_29066( iParam0 + 0 );
    }
    return;
}

void sub_28934(int iParam0, int iParam1, int iParam2)
{
    ref iParam0->_fU8->_fU4 += iParam2;
    ref iParam0->_fU8->_fU0 += iParam1;
    while ((ref iParam0->_fU8->_fU4) >= 60)
    {
        ref iParam0->_fU8->_fU4 -= 60;
        ref iParam0->_fU8->_fU0++;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_29066( iParam0 + 0 );
    }
    return;
}

void sub_29066(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_29097( iParam0->_fU4 )))
    {
        iParam0->_fU0 = 1;
        iParam0->_fU4++;
        if (iParam0->_fU4 > 12)
        {
            iParam0->_fU4 = 1;
        }
    }
    return;
}

int sub_29097(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: return 31;
        case 4:
        case 6:
        case 9:
        case 11: return 30;
        case 2: return 28;
    }
    return 30;
}

void sub_29493(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_29874(unknown uParam0)
{
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    iVar3 = GET_BITS_IN_RANGE( g_U953, 12, 14 );
    array(ref uVar4._fU0._fU0, 3);
    ref uVar4._fU0;
    ref uVar4;
    switch (uParam0)
    {
        case 14:
        SET_BITS_IN_RANGE( ref g_U953, 0, 2, iVar3 );
        iVar3++;
        break;
        case 20:
        SET_BITS_IN_RANGE( ref g_U953, 3, 5, iVar3 );
        iVar3++;
        break;
        case 24:
        SET_BITS_IN_RANGE( ref g_U953, 6, 8, iVar3 );
        iVar3++;
        break;
        case 29:
        g_U963 = 1;
        sub_30085( 20, 6, 16383, 16383, ref uVar4 );
        sub_30761( ref uVar4, 7 );
        sub_30792( ref uVar4, 0 );
        break;
        case 36:
        g_U963 = 2;
        break;
        case 39:
        SET_BITS_IN_RANGE( ref g_U953, 9, 11, iVar3 );
        iVar3++;
        break;
        case 40:
        g_U963 = 3;
        sub_30085( 20, 7, 9, 16383, ref uVar4 );
        sub_30761( ref uVar4, 7 );
        sub_30792( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_30085(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_30109( uParam0, 0, iParam4 + 0 );
    sub_30109( uParam1, 1, iParam4 + 0 );
    sub_30109( uParam2, 2, iParam4 + 0 );
    sub_30109( uParam3, 3, iParam4 + 0 );
    sub_30109( 0, 4, iParam4 + 0 );
    sub_30109( 1, 5, iParam4 + 0 );
    sub_30109( 65535, 6, iParam4 + 0 );
    sub_30109( 0, 12, iParam4 + 0 );
    sub_30109( 0, 11, iParam4 + 0 );
    sub_30109( 0, 14, iParam4 + 0 );
    sub_30109( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_30109( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_30109( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_30109(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 14, 23, uParam0 );
        break;
        case 1:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 0, 13, uParam0 );
        break;
        case 2:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 14, 27, uParam0 );
        break;
        case 3:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 0, 13, uParam0 );
        break;
        case 4:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 22, 25, uParam0 );
        break;
        case 5:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 28, 31, uParam0 );
        break;
        case 6:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 0, 15, uParam0 );
        break;
        case 8:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 16, 18, uParam0 );
        break;
        case 9:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 19, 21, uParam0 );
        break;
        case 11:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 27, 31, uParam0 );
        break;
        case 12:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 29, 31, uParam0 );
        break;
        case 13:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 24, 26, uParam0 );
        break;
        case 14:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 26, 28, uParam0 );
        break;
    }
    return;
}

void sub_30761(int iParam0, unknown uParam1)
{
    sub_30109( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_30792(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_30832())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_31519( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_31318( iVar5 );
    }
    for ( I = 0; I <= 39; I++ )
    {
        if (g_U968[I]._fU0[0] == -1)
        {
            g_U968[I] = {iParam0->_fU0};
            iParam0->_fU40 = I;
            I = 40;
            INCREMENT_INT_STAT_NO_MESSAGE( 368, 1 );
        }
    }
    g_U967 = 1;
    return 1;
}

int sub_30832()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_30866( 5, g_U968[I] )) == 7)
        {
            sub_31318( I );
            return 1;
        }
    }
    return 0;
}

int sub_30866(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 22, 25 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 0, 15 );
        break;
        case 8:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 16, 18 );
        break;
        case 9:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 19, 21 );
        break;
        case 11:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 27, 31 );
        break;
        case 12:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 29, 31 );
        break;
        case 13:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 26 );
        break;
        case 14:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 26, 28 );
        break;
    }
    return -1;
}

void sub_31318(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_31391( 39 );
    return;
}

void sub_31391(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_31519(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_31580( uParam0, g_U968[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = 40;
        }
    }
    return -1;
}

int sub_31580(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[0] == uParam10._fU0[0]) AND (uParam0._fU0[1] == uParam10._fU0[1]))
    {
        return 1;
    }
    return 0;
}

void sub_31939(int iParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = iParam0 mod 1000;
    SET_BITS_IN_RANGE( ref g_U1502[iVar4 / 16], (iVar4 mod 16) * 2, ((iVar4 mod 16) * 2) + 1, uParam1 );
    return;
}

void sub_32017(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_32030( uParam0, uParam1 );
    if (iVar4 != -1)
    {
        g_U2273[iVar4]._fU180 = 1;
        g_U2273[iVar4]._fU212 = 1;
    }
    return;
}

int sub_32030(unknown uParam0, unknown uParam1)
{
    int Result;

    if ((DOES_TEXT_LABEL_EXIST( uParam0 )) AND (DOES_TEXT_LABEL_EXIST( uParam1 )))
    {
        for ( Result = 0; Result <= 99; Result++ )
        {
            if (COMPARE_STRING( ref g_U2273[Result]._fU16, uParam0 ))
            {
                if (COMPARE_STRING( ref g_U2273[Result]._fU0, uParam1 ))
                {
                    return Result;
                }
            }
        }
    }
    return -1;
}

void sub_32206(unknown uParam0)
{
    if (g_U1916[uParam0] == 0)
    {
        sub_28881( ref g_U1924[uParam0], 4, 0, 0 );
        g_U1916[uParam0] = 1;
    }
    return;
}

void sub_32267(int iParam0, unknown uParam1)
{
    if (iParam0 <= 2)
    {
        g_U1430[iParam0] = uParam1;
    }
    return;
}

void sub_32313(unknown uParam0, unknown uParam1)
{
    g_U1413[uParam0] = uParam1;
    return;
}
