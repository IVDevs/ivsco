void main()
{
    int iVar2;

    l_U0 = 0;
    l_U1 = 0;
    l_U105 = 0;
    l_U106 = 1;
    l_U107 = 3;
    l_U109 = 0;
    l_U126 = -1;
    l_U130 = 0;
    l_U131 = 1;
    l_U132 = 1;
    l_U140 = 150.00000000;
    l_U230 = 0;
    l_U231 = 150.00000000;
    l_U281 = 0;
    l_U484 = 0;
    l_U485 = 0;
    l_U486 = 0;
    l_U487 = 0;
    l_U488 = 6;
    l_U489 = 0;
    l_U490 = 0;
    l_U491 = 0;
    l_U492 = 0;
    l_U493 = 0;
    l_U494 = 0;
    l_U495 = 0;
    l_U496 = 0;
    l_U497 = 0;
    l_U561 = 6;
    l_U562 = 0;
    l_U563 = 0;
    l_U568 = 0;
    l_U569 = {758.22060000, 334.76560000, -0.07390000};
    l_U572 = 2.35170000;
    l_U573 = {763.78940000, 334.60470000, 1.00900000};
    l_U576 = {762.78940000, 334.60470000, 1.00900000};
    l_U579 = {764.78940000, 334.60470000, 1.00900000};
    l_U582 = 128.98470000;
    l_U583 = {763.78940000, 336.60470000, 1.00900000};
    l_U586 = 65.41830000;
    l_U593 = -1;
    l_U600 = "BBR1_GOSF";
    l_U607 = "BBR1_SF";
    l_U614 = "BBR1_GOP";
    l_U621 = "BBR1_P";
    l_U628 = "BBR1_P45";
    l_U635 = "BBR1_GOP45";
    l_U642 = "BBR1_GODR";
    l_U649 = "BBR1_DR";
    l_U656 = "BBR1_GOIND";
    l_U663 = "BBR1_IND";
    l_U670 = "BBR1_GOSS";
    l_U677 = "BBR1_SS";
    l_U684 = "BBR1_CRASH";
    l_U691 = "BBR1_DRIVE";
    l_U698 = "BBR1_BACK";
    l_U705 = "FCB3_GIRL1A";
    l_U712 = "FCB3_GIRL2A";
    l_U719 = "FCB3_GIRL3A";
    l_U726 = "FCB3_GIRL4A";
    l_U733 = "FCB3_GIRL5A";
    l_U740 = "FCB3_GIRL6A";
    l_U747 = "FCB2_ARRBT";
    l_U754 = "FCB2_ACNLG";
    l_U761 = "FCB2_ALG";
    l_U762 = -1136052597;
    l_U763 = 400514754;
    l_U764 = 1353709999;
    l_U804 = 0;
    l_U805 = 0;
    l_U806 = 486987393;
    if (HAS_DEATHARREST_EXECUTED())
    {
        l_U497 = 1;
        g_U2226 = 0;
        sub_836();
    }
    sub_2134( 76 );
    while (true)
    {
        WAIT( 0 );
        if (IS_PLAYER_PLAYING( sub_897() ))
        {
            iVar2 = 0;
            sub_2185();
            switch (l_U484)
            {
                case 0:
                sub_6756();
                sub_7396();
                sub_7784();
                sub_7928();
                iVar2 = sub_8110( ref l_U765 );
                GET_GROUP_SIZE( sub_8164(), ref l_U591, ref l_U592 );
                if (l_U592 == 1)
                {
                    GET_GROUP_MEMBER( sub_8164(), 0, ref l_U802 );
                }
                else if (l_U592 == 2)
                {
                    GET_GROUP_MEMBER( sub_8164(), 0, ref l_U802 );
                    GET_GROUP_MEMBER( sub_8164(), 1, ref l_U800 );
                }
                else if (l_U592 == 3)
                {
                    GET_GROUP_MEMBER( sub_8164(), 0, ref l_U802 );
                    GET_GROUP_MEMBER( sub_8164(), 1, ref l_U800 );
                    GET_GROUP_MEMBER( sub_8164(), 2, ref l_U801 );
                };;;
                sub_1311( 0 );
                sub_8374();
                if (g_U22274[8]._fU28 == 0)
                {
                    sub_2711( l_U754, "FCB2AU", ref l_U748, 6, 1 );
                }
                else
                {
                    sub_2711( l_U761, "FCB2AU", ref l_U755, 6, 1 );
                }
                g_U2226 = 1;
                REQUEST_CAR_RECORDING( 76 );
                l_U484 = 4;
                break;
                case 4:
                GET_GAME_TIMER( ref l_U559 );
                l_U560 = l_U559 - l_U558;
                if (l_U560 > 2000)
                {
                    GET_GAME_TIMER( ref l_U558 );
                    l_U484 = 3;
                }
                break;
                case 3:
                sub_8629();
                if (l_U560 > 1000)
                {
                    if (l_U804 > 3)
                    {
                        if (IS_SCREEN_FADED_IN())
                        {
                            if (sub_10477())
                            {
                                l_U484 = 5;
                            }
                        }
                    }
                }
                break;
                case 5:
                if (NOT (IS_CHAR_INJURED( l_U802 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U800 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U801 )))
                        {
                            if (IS_VEH_DRIVEABLE( l_U766 ))
                            {
                                SET_PLAYER_CONTROL( sub_897(), 1 );
                                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_990() );
                                if (NOT (IS_CHAR_INJURED( l_U802 )))
                                {
                                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U802 );
                                }
                                if (NOT (IS_CHAR_INJURED( l_U800 )))
                                {
                                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U800 );
                                }
                                if (NOT (IS_CHAR_INJURED( l_U801 )))
                                {
                                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U801 );
                                }
                                sub_9173( sub_990(), l_U766, -1 );
                                sub_9173( l_U802, l_U766, 0 );
                                sub_9173( l_U800, l_U766, 1 );
                                sub_9173( l_U801, l_U766, 2 );
                                sub_870( 0 );
                                SET_GAME_CAM_HEADING( 0.00000000 );
                                sub_10863( sub_990() );
                                sub_10863( l_U802 );
                                sub_10863( l_U800 );
                                sub_10863( l_U801 );
                                if (IS_SCREEN_FADED_OUT())
                                {
                                    DO_SCREEN_FADE_IN( 3000 );
                                }
                                l_U484 = 1;
                            }
                        }
                    }
                }
                break;
                case 1:
                if (IS_VEH_DRIVEABLE( l_U766 ))
                {
                    RESET_STUCK_TIMER( l_U766, 3 );
                    RESET_STUCK_TIMER( l_U766, 2 );
                    RESET_STUCK_TIMER( l_U766, 1 );
                    if ((((IS_CHAR_IN_CAR( sub_990(), l_U766 )) AND (sub_11075( l_U802, l_U766 ))) AND (sub_11075( l_U800, l_U766 ))) AND (sub_11075( l_U801, l_U766 )))
                    {
                        sub_11180();
                        iVar2 = sub_8110( ref l_U765 );
                        RESET_STUCK_TIMER( l_U766, 3 );
                        RESET_STUCK_TIMER( l_U766, 2 );
                        RESET_STUCK_TIMER( l_U766, 1 );
                        sub_1311( 0 );
                        ANCHOR_BOAT( l_U766, 0 );
                        if (DOES_BLIP_EXIST( l_U799 ))
                        {
                            CHANGE_BLIP_DISPLAY( l_U799, 0 );
                        }
                        LOCK_CAR_DOORS( l_U766, 4 );
                        GET_GAME_TIMER( ref l_U552 );
                        GET_GAME_TIMER( ref l_U549 );
                        l_U484 = 2;
                    }
                }
                break;
                case 2:
                sub_11511();
                sub_13008();
                break;
                case 6:
                sub_11511();
                if (IS_VEH_DRIVEABLE( l_U766 ))
                {
                    if (LOCATE_CAR_3D( l_U766, l_U498[l_U545]._fU0, l_U498[l_U545]._fU4, l_U498[l_U545]._fU8, 15.00000000, 15.00000000, 15.00000000, 0 ))
                    {
                        if (DOES_BLIP_EXIST( l_U777[l_U545] ))
                        {
                            CHANGE_BLIP_DISPLAY( l_U777[l_U545], 0 );
                        }
                        if (DOES_OBJECT_EXIST( l_U803 ))
                        {
                            DELETE_OBJECT( ref l_U803 );
                        }
                        sub_1170( 0 );
                        SET_PLAYER_CONTROL( sub_897(), 0 );
                        TASK_CAR_MISSION( sub_990(), l_U766, 0, 5, 0.00000000, 0, 3, 20 );
                        l_U484 = 7;
                    }
                    else
                    {
                        sub_14210();
                    }
                }
                break;
                case 7:
                sub_15625();
                break;
                case 9:
                sub_19884();
                break;
                case 10:
                switch (l_U562)
                {
                    case 0:
                    GET_GAME_TIMER( ref l_U553 );
                    l_U554 = l_U553 - l_U552;
                    INCREMENT_INT_STAT_NO_MESSAGE( 66, l_U554 );
                    if (IS_PLAYER_PLAYING( sub_897() ))
                    {
                        CLEAR_WANTED_LEVEL( sub_897() );
                    }
                    if (NOT (IS_CAR_DEAD( l_U766 )))
                    {
                        DELETE_CAR( ref l_U766 );
                    }
                    l_U562++;
                    break;
                    case 1:
                    SET_PLAYER_CONTROL( sub_897(), 1 );
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    l_U562++;
                    break;
                    case 2:
                    sub_836();
                    break;
                }
                break;
            }
        }
    }
    return;
}

void sub_836()
{
    if (l_U484 == 7)
    {
        if (l_U486 == 2)
        {
            sub_870( 0 );
            sub_1143( ref l_U564 );
        }
    }
    sub_1170( 0 );
    sub_1311( 0 );
    if (IS_PLAYER_PLAYING( sub_897() ))
    {
        SET_PLAYER_CONTROL( sub_897(), 1 );
    }
    if (l_U484 > 1)
    {
        if (l_U491 == 1)
        {
            sub_1506( 3 );
            sub_1682();
        }
        else if (l_U492 == 1)
        {
            sub_1506( 6 );
            sub_1682();
        }
        else if (l_U493 == 1)
        {
            sub_1506( 4 );
            sub_1682();
        }
        else if (l_U495 == 1)
        {
            sub_1506( 5 );
            sub_1682();
        }
        else if (l_U494 == 1)
        {
            sub_1506( 0 );
            sub_1682();
        };;;;;
    }
    else if (l_U491 == 1)
    {
        sub_1506( 3 );
    }
    else if (l_U492 == 1)
    {
        sub_1506( 6 );
    }
    else if (l_U493 == 1)
    {
        sub_1506( 4 );
    }
    else if (l_U495 == 1)
    {
        sub_1506( 5 );
    };;;;
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 3000 );
    }
    g_U2226 = 0;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_870(boolean bParam0)
{
    SET_USE_HIGHDOF( bParam0 );
    SET_WIDESCREEN_BORDERS( bParam0 );
    if (IS_PLAYER_PLAYING( sub_897() ))
    {
        SET_PLAYER_CONTROL( sub_897(), NOT bParam0 );
    }
    ACTIVATE_SCRIPTED_CAMS( bParam0, bParam0 );
    SET_EVERYONE_IGNORE_PLAYER( sub_897(), bParam0 );
    ALLOW_EMERGENCY_SERVICES( NOT bParam0 );
    if (NOT (IS_CHAR_DEAD( sub_990() )))
    {
        CLEAR_CHAR_TASKS( sub_990() );
    }
    if (bParam0)
    {
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_990(), 1 );
    }
    else
    {
        sub_1081();
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_990(), 0 );
    }
    return;
}

void sub_897()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_990()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1081()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_1143(unknown uParam0)
{
    END_CAM_COMMANDS( uParam0 );
    return;
}

void sub_1170(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_AMBIENT_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8392 >= 1) AND (g_U8392 <= 3))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_1311(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8392 >= 4) AND (g_U8392 <= 8))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_1506(unknown uParam0)
{
    if (g_U32898._fU0 == 54)
    {
        return;
    }
    if (NOT (g_U32898._fU8 == 9))
    {
        g_U32898._fU20 = uParam0;
        if (sub_1573( g_U32898._fU0 ))
        {
            g_U32898._fU16 = uParam0;
        }
        return;
    }
    g_U32898._fU16 = uParam0;
    return;
}

int sub_1573(unknown uParam0)
{
    switch (uParam0)
    {
        case 2:
        case 10:
        case 28:
        case 29:
        case 30: return 1;
    }
    return 0;
}

void sub_1682()
{
    DISPLAY_RADAR( 1 );
    SET_MINIGAME_IN_PROGRESS( 0 );
    g_U10979 = 0;
    if (g_U32898._fU0 == 54)
    {
        g_U10978 = 0;
        sub_1737();
        return;
    }
    if (NOT (g_U32898._fU8 == 9))
    {
        if (g_U32898._fU20 == 8)
        {
            g_U32898._fU20 = 3;
        }
    }
    else if (NOT (g_U32898._fU4 == 9))
    {
        if (g_U32898._fU16 == 8)
        {
            g_U32898._fU16 = 3;
        }
    }
    else
    {
        return;
    }
    g_U32898._fU28 = 1;
    return;
}

void sub_1737()
{
    g_U32896._fU4 = 1;
    return;
}

void sub_2134(unknown uParam0)
{
    return;
}

void sub_2185()
{
    switch (l_U563)
    {
        case 0:
        if (l_U766 != nil)
        {
            if (NOT (IS_CAR_DEAD( l_U766 )))
            {
                if (IS_CHAR_IN_CAR( sub_990(), l_U766 ))
                {
                    if (((CHECK_STUCK_TIMER( l_U766, 3, 10000 )) || (CHECK_STUCK_TIMER( l_U766, 2, 30000 ))) || (CHECK_STUCK_TIMER( l_U766, 1, 40000 )))
                    {
                        sub_2356();
                        sub_2690( l_U684, ref l_U678, 6, 1 );
                        l_U492 = 1;
                        l_U563++;
                    }
                }
                if (NOT (IS_VEH_DRIVEABLE( l_U766 )))
                {
                    sub_2356();
                    sub_2690( l_U684, ref l_U678, 6, 1 );
                    l_U492 = 1;
                    l_U563++;
                }
                if (IS_CAR_UPSIDEDOWN( l_U766 ))
                {
                    sub_3745( 1 );
                    sub_5866( l_U802 );
                    sub_5866( l_U800 );
                    sub_5866( l_U801 );
                    GET_GAME_TIMER( ref l_U556 );
                    l_U557 = l_U556 - l_U555;
                    if (l_U557 > 3000)
                    {
                        if (NOT (IS_CHAR_INJURED( sub_990() )))
                        {
                            TASK_LEAVE_CAR( sub_990(), l_U766 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U802 )))
                        {
                            TASK_LEAVE_CAR( l_U802, l_U766 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U800 )))
                        {
                            TASK_LEAVE_CAR( l_U800, l_U766 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U801 )))
                        {
                            TASK_LEAVE_CAR( l_U801, l_U766 );
                        }
                        sub_6114( l_U802 );
                        sub_6114( l_U800 );
                        sub_6114( l_U801 );
                        l_U492 = 1;
                        GET_GAME_TIMER( ref l_U555 );
                        l_U563++;
                    }
                }
                else
                {
                    sub_3745( 0 );
                    sub_6114( l_U802 );
                    sub_6114( l_U800 );
                    sub_6114( l_U801 );
                    GET_GAME_TIMER( ref l_U555 );
                }
            }
            else
            {
                sub_2356();
                l_U492 = 1;
                l_U563++;
            }
        }
        if (l_U802 != nil)
        {
            if (DOES_CHAR_EXIST( l_U802 ))
            {
                if (IS_CHAR_INJURED( l_U802 ))
                {
                    l_U493 = 1;
                    l_U563++;
                }
            }
        }
        if (l_U800 != nil)
        {
            if (DOES_CHAR_EXIST( l_U800 ))
            {
                if (IS_CHAR_INJURED( l_U800 ))
                {
                    l_U493 = 1;
                    l_U563++;
                }
            }
        }
        if (l_U801 != nil)
        {
            if (DOES_CHAR_EXIST( l_U801 ))
            {
                if (IS_CHAR_INJURED( l_U801 ))
                {
                    l_U493 = 1;
                    l_U563++;
                }
            }
        }
        break;
        case 1:
        GET_GAME_TIMER( ref l_U556 );
        l_U557 = l_U556 - l_U555;
        if (l_U557 > 3000)
        {
            if (NOT (sub_3769( l_U678 )))
            {
                DO_SCREEN_FADE_OUT( 3000 );
                l_U563++;
            }
        }
        break;
        case 2:
        if (IS_SCREEN_FADED_OUT())
        {
            l_U563++;
        }
        break;
        case 3:
        if (IS_PLAYER_PLAYING( sub_897() ))
        {
            SET_PLAYER_CONTROL( sub_897(), 1 );
        }
        l_U563++;
        break;
        case 4:
        sub_836();
        break;
    }
    return;
}

void sub_2356()
{
    sub_2368( "" );
    sub_2487( 0, sub_990(), "NIKO", 0 );
    if (NOT (IS_CHAR_DEAD( l_U802 )))
    {
        sub_2487( 1, l_U802, "BRUCIE", 0 );
    }
    return;
}

void sub_2368(unknown uParam0)
{
    StrCopy( ref l_U3._fU0, uParam0, 16 );
    sub_2385();
    return;
}

void sub_2385()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U3._fU16[I]._fU0 = nil;
        StrCopy( ref l_U3._fU16[I]._fU4, "", 32 );
        l_U3._fU344[I] = 0;
    }
    return;
}

void sub_2487(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U3._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U3._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_2567( "\n PED NUMBER ", uParam0 );
    sub_2607( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_2567(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_2607(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_2690(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_2711( uParam0, ref l_U3._fU0, uParam1, uParam2, uParam3 );
}

void sub_2711(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_2765( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_2765(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_2787( iParam1 )))
    {
        return 0;
    }
    l_U3._fU384 = 0;
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
    sub_3475( ref g_U8395, ref l_U3 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_2787(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_2864( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_2864( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_2864( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_2864(unknown uParam0)
{
    return;
}

void sub_3475(int iParam0, int iParam1)
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

void sub_3745(int iParam0)
{
    if (iParam0 == 1)
    {
        if (sub_3769( l_U594 ))
        {
            sub_3940( ref l_U594 );
        }
        if (sub_3769( l_U601 ))
        {
            sub_3940( ref l_U601 );
        }
        if (sub_3769( l_U608 ))
        {
            sub_3940( ref l_U608 );
        }
        if (sub_3769( l_U615 ))
        {
            sub_3940( ref l_U615 );
        }
        if (sub_3769( l_U622 ))
        {
            sub_3940( ref l_U622 );
        }
        if (sub_3769( l_U629 ))
        {
            sub_3940( ref l_U629 );
        }
        if (sub_3769( l_U636 ))
        {
            sub_3940( ref l_U636 );
        }
        if (sub_3769( l_U643 ))
        {
            sub_3940( ref l_U643 );
        }
        if (sub_3769( l_U650 ))
        {
            sub_3940( ref l_U650 );
        }
        if (sub_3769( l_U657 ))
        {
            sub_3940( ref l_U657 );
        }
        if (sub_3769( l_U664 ))
        {
            sub_3940( ref l_U664 );
        }
        if (sub_3769( l_U671 ))
        {
            sub_3940( ref l_U671 );
        }
        if (sub_3769( l_U678 ))
        {
            sub_3940( ref l_U678 );
        }
        if (sub_3769( l_U685 ))
        {
            sub_3940( ref l_U685 );
        }
        if (sub_3769( l_U692 ))
        {
            sub_3940( ref l_U692 );
        }
        if (sub_3769( l_U699 ))
        {
            sub_3940( ref l_U699 );
        }
        if (sub_3769( l_U706 ))
        {
            sub_3940( ref l_U706 );
        }
        if (sub_3769( l_U713 ))
        {
            sub_3940( ref l_U713 );
        }
        if (sub_3769( l_U720 ))
        {
            sub_3940( ref l_U720 );
        }
        if (sub_3769( l_U727 ))
        {
            sub_3940( ref l_U727 );
        }
        if (sub_3769( l_U734 ))
        {
            sub_3940( ref l_U734 );
        }
        if (sub_3769( l_U741 ))
        {
            sub_3940( ref l_U741 );
        }
    }
    else if (sub_4927( l_U594 ))
    {
        sub_4967( l_U600, "", ref l_U594, 6, 1 );
    }
    if (sub_4927( l_U601 ))
    {
        sub_4967( l_U607, "", ref l_U601, 6, 1 );
    }
    if (sub_4927( l_U608 ))
    {
        sub_4967( l_U614, "", ref l_U608, 6, 1 );
    }
    if (sub_4927( l_U615 ))
    {
        sub_4967( l_U621, "", ref l_U615, 6, 1 );
    }
    if (sub_4927( l_U622 ))
    {
        sub_4967( l_U628, "", ref l_U622, 6, 1 );
    }
    if (sub_4927( l_U629 ))
    {
        sub_4967( l_U635, "", ref l_U629, 6, 1 );
    }
    if (sub_4927( l_U636 ))
    {
        sub_4967( l_U642, "", ref l_U636, 6, 1 );
    }
    if (sub_4927( l_U643 ))
    {
        sub_4967( l_U649, "", ref l_U643, 6, 1 );
    }
    if (sub_4927( l_U650 ))
    {
        sub_4967( l_U656, "", ref l_U650, 6, 1 );
    }
    if (sub_4927( l_U657 ))
    {
        sub_4967( l_U663, "", ref l_U657, 6, 1 );
    }
    if (sub_4927( l_U664 ))
    {
        sub_4967( l_U670, "", ref l_U664, 6, 1 );
    }
    if (sub_4927( l_U671 ))
    {
        sub_4967( l_U677, "", ref l_U671, 6, 1 );
    }
    if (sub_4927( l_U678 ))
    {
        sub_4967( l_U684, "", ref l_U678, 6, 1 );
    }
    if (sub_4927( l_U685 ))
    {
        sub_4967( l_U691, "", ref l_U685, 6, 1 );
    }
    if (sub_4927( l_U692 ))
    {
        sub_4967( l_U698, "", ref l_U692, 6, 1 );
    }
    if (sub_4927( l_U699 ))
    {
        sub_4967( l_U705, "FCB4AUD", ref l_U699, 6, 1 );
    }
    if (sub_4927( l_U706 ))
    {
        sub_4967( l_U712, "FCB4AUD", ref l_U706, 6, 1 );
    }
    if (sub_4927( l_U713 ))
    {
        sub_4967( l_U719, "FCB4AUD", ref l_U713, 6, 1 );
    }
    if (sub_4927( l_U720 ))
    {
        sub_4967( l_U726, "FCB4AUD", ref l_U720, 6, 1 );
    }
    if (sub_4927( l_U727 ))
    {
        sub_4967( l_U733, "FCB4AUD", ref l_U727, 6, 1 );
    }
    if (sub_4927( l_U734 ))
    {
        sub_4967( l_U740, "FCB4AUD", ref l_U734, 6, 1 );
    }
    if (sub_4927( l_U741 ))
    {
        sub_4967( l_U747, "FCB2AU", ref l_U741, 6, 1 );
    }
    return;
}

int sub_3769(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_2864( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_2864( "\n speech is not playing" );
    }
    return 0;
}

int sub_3940(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_2864( "\n already paused" );
    }
    else if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_2864( "\n CONVERSATION PAUSED AT LINE " );
            sub_4096( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_2864( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_2864( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_2864( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_4096(unknown uParam0)
{
    return;
}

void sub_4927(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

int sub_4967(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
    if (iParam2->_fU12)
    {
        StrCopy( ref cVar11[0], uParam0, 16 );
        StrCopy( ref cVar11[1], "END", 16 );
        return sub_2765( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

void sub_5866(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        STOP_PED_SPEAKING( uParam0, 1 );
    }
    return;
}

void sub_6114(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        STOP_PED_SPEAKING( uParam0, 0 );
    }
    return;
}

void sub_6756()
{
    if (DOES_BLIP_EXIST( l_U798 ))
    {
        REMOVE_BLIP( l_U798 );
    }
    if (NOT (DOES_BLIP_EXIST( l_U798 )))
    {
        ADD_BLIP_FOR_COORD( l_U569._fU0, l_U569._fU4, l_U569._fU8, ref l_U798 );
    }
    if (DOES_BLIP_EXIST( l_U798 ))
    {
        CHANGE_BLIP_COLOUR( l_U798, 5 );
        CHANGE_BLIP_DISPLAY( l_U798, 0 );
    }
    if (NOT (DOES_BLIP_EXIST( l_U799 )))
    {
        ADD_BLIP_FOR_COORD( l_U569._fU0, l_U569._fU4, l_U569._fU8, ref l_U799 );
    }
    if (DOES_BLIP_EXIST( l_U799 ))
    {
        CHANGE_BLIP_SPRITE( l_U799, 48 );
    }
    REQUEST_MODEL( l_U763 );
    while (NOT (HAS_MODEL_LOADED( l_U763 )))
    {
        WAIT( 0 );
    }
    REQUEST_MODEL( l_U764 );
    while (NOT (HAS_MODEL_LOADED( l_U764 )))
    {
        WAIT( 0 );
    }
    REQUEST_MODEL( l_U762 );
    while (NOT (HAS_MODEL_LOADED( l_U762 )))
    {
        WAIT( 0 );
    }
    if (HAS_MODEL_LOADED( l_U763 ))
    {
        CREATE_CAR( l_U763, l_U569._fU0, l_U569._fU4, l_U569._fU8, ref l_U766, 1 );
        SET_CAR_HEADING( l_U766, l_U572 - 180 );
    }
    if (IS_VEH_DRIVEABLE( l_U766 ))
    {
        CHANGE_CAR_COLOUR( l_U766, 59, 0 );
        SET_EXTRA_CAR_COLOURS( l_U766, 0, 0 );
        ANCHOR_BOAT( l_U766, 1 );
    }
    sub_7245( "BBRIDE", 0 );
    return;
}

void sub_7245(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_7281())
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

int sub_7281()
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

void sub_7396()
{
    int I;

    l_U498[0] = {-658.06370000, -604.78540000, 0.11220000};
    l_U517[0] = 2;
    l_U498[1] = {-86.02680000, -1059.66700000, 0.29720000};
    l_U517[1] = 2;
    l_U498[2] = {497.41600000, -557.89000000, 0.39510000};
    l_U517[2] = 2;
    l_U498[3] = {-2093.71300000, -593.52250000, 0.20300000};
    l_U517[3] = 3;
    l_U498[4] = {-1050.15400000, -144.21160000, 0.20080000};
    l_U517[4] = 3;
    l_U498[5] = {-846.57380000, -5.79990000, 0.18960000};
    l_U517[5] = 3;
    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    for ( I = 0; I <= (l_U561 - 1); I++ )
    {
        if (NOT (DOES_BLIP_EXIST( l_U777[I] )))
        {
            ADD_BLIP_FOR_COORD( l_U498[I]._fU0, l_U498[I]._fU4, l_U498[I]._fU8, ref l_U777[I] );
            CHANGE_BLIP_COLOUR( l_U777[I], 5 );
            CHANGE_BLIP_DISPLAY( l_U777[I], 0 );
        }
    }
    return;
}

void sub_7784()
{
    int J;
    int I;
    int iVar4;

    iVar4 = 0;
    for ( J = 0; J <= (l_U561 - 1); J++ )
    {
        if (g_U64581[J] == 1)
        {
            iVar4++;
        }
        if (J == (l_U561 - 1))
        {
            if (iVar4 == (l_U561 - 1))
            {
                for ( I = 0; I <= (l_U561 - 1); I++ )
                {
                    g_U64581[I] = 0;
                }
            }
        }
    }
    return;
}

void sub_7928()
{
    int J;
    int I;
    int iVar4;
    int iVar5;

    iVar5 = 0;
    iVar4 = GET_INT_STAT( 363 );
    if (iVar4 < 4)
    {
        for ( J = 0; J <= (l_U561 - 1); J++ )
        {
            if (l_U517[J] == 2)
            {
                if (g_U64581[J] == 1)
                {
                    iVar5++;
                }
            }
            if (J == (l_U561 - 1))
            {
                if (iVar5 == 3)
                {
                    for ( I = 0; I <= (l_U561 - 1); I++ )
                    {
                        iVar5 = 0;
                        g_U64581[I] = 0;
                    }
                }
            }
        }
    }
    return;
}

int sub_8110(unknown uParam0)
{
    (uParam0^) = g_U32898._fU0;
    if (g_U32898._fU0 == 54)
    {
        return 0;
    }
    return 1;
}

void sub_8164()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_8374()
{
    sub_2368( "FCB2AU" );
    sub_2487( 0, sub_990(), "NIKO", 0 );
    if (NOT (IS_CHAR_DEAD( l_U802 )))
    {
        sub_2487( 1, l_U802, "BRUCIE", 0 );
    }
    return;
}

void sub_8629()
{
    if (NOT (IS_CHAR_INJURED( l_U802 )))
    {
        if (NOT (IS_CHAR_INJURED( l_U800 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U801 )))
            {
                switch (l_U804)
                {
                    case 0:
                    if ((NOT (sub_3769( l_U748 ))) || (sub_8796()))
                    {
                        if ((NOT (sub_3769( l_U755 ))) || (sub_8796()))
                        {
                            DO_SCREEN_FADE_OUT( 3000 );
                            if (DOES_CAM_EXIST( l_U807 ))
                            {
                                DESTROY_CAM( l_U807 );
                            }
                            if (IS_VEH_DRIVEABLE( l_U808 ))
                            {
                                DELETE_CAR( ref l_U808 );
                            }
                            REQUEST_MODEL( l_U806 );
                            l_U804 = 1;
                        }
                    }
                    break;
                    case 1:
                    if (IS_SCREEN_FADED_OUT())
                    {
                        SET_PLAYER_CONTROL( sub_897(), 0 );
                        if (HAS_MODEL_LOADED( l_U806 ))
                        {
                            if (HAS_CAR_RECORDING_BEEN_LOADED( 76 ))
                            {
                                sub_1311( 0 );
                                sub_1170( 0 );
                                CREATE_CAR( l_U806, 804.96440000, 345.87010000, 5.66360000, ref l_U808, 1 );
                                SET_CAR_HEADING( l_U808, 71.78550000 );
                                CHANGE_CAR_COLOUR( l_U808, 0, 90 );
                                SET_EXTRA_CAR_COLOURS( l_U808, 127, 0 );
                                sub_9173( sub_990(), l_U808, -1 );
                                sub_9173( l_U802, l_U808, 0 );
                                sub_9173( l_U800, l_U808, 1 );
                                sub_9173( l_U801, l_U808, 2 );
                                LOAD_SCENE( 772.09250000, 331.83720000, 5.01190000 );
                                if (IS_VEH_DRIVEABLE( l_U808 ))
                                {
                                    START_PLAYBACK_RECORDED_CAR( l_U808, 76 );
                                }
                                GET_GAME_TIMER( ref l_U809 );
                                l_U804 = 2;
                            }
                        }
                    }
                    break;
                    case 2:
                    GET_GAME_TIMER( ref l_U810 );
                    l_U811 = l_U810 - l_U809;
                    if (l_U811 > 1000)
                    {
                        sub_9509( 749.32540000, 353.37400000, 11.49632000, -18.45691000, -0.00000000, -130.99810000, 45, l_U807 );
                        sub_870( 1 );
                        DO_SCREEN_FADE_IN( 3000 );
                        l_U804 = 3;
                    }
                    break;
                    case 3:
                    if (IS_SCREEN_FADED_IN())
                    {
                        GET_GAME_TIMER( ref l_U809 );
                        GET_GAME_TIMER( ref l_U558 );
                        l_U804 = 4;
                    }
                    break;
                    case 4:
                    if (IS_VEH_DRIVEABLE( l_U808 ))
                    {
                        if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U808 )))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U802 )))
                            {
                                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U802, 768.26000000, 320.35000000, 4.47000000, 2, -2, 3.00000000 );
                                if (IS_VEH_DRIVEABLE( l_U766 ))
                                {
                                    TASK_LOOK_AT_VEHICLE( l_U802, l_U766, 7000, 0 );
                                }
                                GET_GAME_TIMER( ref l_U809 );
                                l_U804 = 5;
                            }
                        }
                    }
                    break;
                    case 5:
                    GET_GAME_TIMER( ref l_U810 );
                    l_U811 = l_U810 - l_U809;
                    if (l_U811 > 1200)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U800 )))
                        {
                            sub_9916();
                            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U800, 768.26000000, 320.35000000, 4.47000000, 2, -2, 3.00000000 );
                            GET_GAME_TIMER( ref l_U809 );
                            l_U804 = 6;
                        }
                    }
                    break;
                    case 6:
                    GET_GAME_TIMER( ref l_U810 );
                    l_U811 = l_U810 - l_U809;
                    if (l_U811 > 1000)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U801 )))
                        {
                            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U801, 768.26000000, 320.35000000, 4.47000000, 2, -2, 3.00000000 );
                            GET_GAME_TIMER( ref l_U809 );
                            l_U804 = 7;
                        }
                    }
                    break;
                    case 7:
                    GET_GAME_TIMER( ref l_U810 );
                    l_U811 = l_U810 - l_U809;
                    if (l_U811 > 1000)
                    {
                        if (NOT (IS_CHAR_INJURED( sub_990() )))
                        {
                            TASK_FOLLOW_NAV_MESH_TO_COORD( sub_990(), 768.26000000, 320.35000000, 4.47000000, 2, -2, 3.00000000 );
                            GET_GAME_TIMER( ref l_U809 );
                            l_U804 = 8;
                        }
                    }
                    break;
                    case 8:
                    GET_GAME_TIMER( ref l_U810 );
                    l_U811 = l_U810 - l_U809;
                    if (NOT (sub_3769( l_U741 )))
                    {
                        DO_SCREEN_FADE_OUT( 2500 );
                        l_U804 = 11;
                    }
                    break;
                    case 11:
                    if (IS_SCREEN_FADED_OUT())
                    {
                        l_U484 = 5;
                    }
                    break;
                }
            }
        }
    }
    return;
}

int sub_8796()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_9173(unknown uParam0, unknown uParam1, int iParam2)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (IS_VEH_DRIVEABLE( uParam1 ))
        {
            if ((IS_CHAR_IN_ANY_CAR( uParam0 )) || (IS_CHAR_SITTING_IN_ANY_CAR( sub_990() )))
            {
                WARP_CHAR_FROM_CAR_TO_CAR( uParam0, uParam1, iParam2 );
            }
            else if (iParam2 == -1)
            {
                WARP_CHAR_INTO_CAR( uParam0, uParam1 );
            }
            else
            {
                WARP_CHAR_INTO_CAR_AS_PASSENGER( uParam0, uParam1, iParam2 );
            }
        }
    }
    return;
}

void sub_9509(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    CLEAR_PRINTS();
    if (DOES_CAM_EXIST( uParam7 ))
    {
        DESTROY_CAM( uParam7 );
    }
    CREATE_CAM( 14, ref uParam7 );
    SET_CAM_POS( uParam7, uParam0._fU0, uParam0._fU4, uParam0._fU8 );
    SET_CAM_ROT( uParam7, uParam3._fU0, uParam3._fU4, uParam3._fU8 );
    SET_CAM_FOV( uParam7, uParam6 );
    SET_CAM_ACTIVE( uParam7, 1 );
    SET_CAM_PROPAGATE( uParam7, 1 );
    return;
}

void sub_9916()
{
    if (l_U496 == 0)
    {
        if (IS_VEH_DRIVEABLE( l_U766 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U802 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U800 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U801 )))
                    {
                        sub_8374();
                        if (sub_2711( l_U747, "FCB2AU", ref l_U741, 6, 1 ))
                        {
                            l_U496 = 1;
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_10477()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_10863(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (NOT (IS_GROUP_MEMBER( uParam0, sub_8164() )))
        {
            SET_GROUP_MEMBER( sub_8164(), uParam0 );
        }
    }
    return;
}

int sub_11075(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_VEH_DRIVEABLE( uParam1 ))
        {
            if (IS_CHAR_IN_CAR( uParam0, uParam1 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_11180()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    g_U10979 = 1;
    if (NOT (g_U32898._fU0 == 54))
    {
        g_U32898._fU24 = 1;
        g_U32898._fU28 = 0;
        if (NOT (g_U32898._fU8 == 9))
        {
            sub_11259();
        }
        return;
    }
    g_U10978 = 1;
    sub_11331();
    return;
}

void sub_11259()
{
    if (NOT (g_U32898._fU32 > 0))
    {
        return;
    }
    g_U32898._fU32--;
    return;
}

void sub_11331()
{
    g_U32896._fU4 = 0;
    return;
}

void sub_11511()
{
    int iVar2;
    unknown uVar3;

    if (IS_VEH_DRIVEABLE( l_U766 ))
    {
        switch (l_U489)
        {
            case 0:
            if (l_U563 == 0)
            {
                GET_GAME_TIMER( ref l_U553 );
                l_U554 = l_U553 - l_U552;
                if (IS_SCREEN_FADED_IN())
                {
                    if (l_U568 == 0)
                    {
                        PRINT_HELP( "brucboat_quitA" );
                        l_U568 = 1;
                    }
                    if (IS_CONTROL_PRESSED( 2, 3 ))
                    {
                        GET_GAME_TIMER( ref l_U550 );
                        l_U551 = l_U550 - l_U549;
                        iVar2 = 6000 - l_U551;
                        uVar3 = TO_FLOAT( iVar2 / 1000 );
                        l_U565 = (FLOOR( uVar3 )) + 1;
                        switch (l_U567)
                        {
                            case 0:
                            if (l_U565 > 1)
                            {
                                PRINT_HELP_WITH_NUMBER( "Boat_warn1", l_U565 );
                            }
                            else
                            {
                                PRINT_HELP_WITH_NUMBER( "Boat_warn2", l_U565 );
                            }
                            l_U566 = l_U565;
                            l_U567++;
                            break;
                            case 1:
                            if (l_U566 != l_U565)
                            {
                                l_U567--;
                            }
                            break;
                        }
                        if (l_U551 > 6000)
                        {
                            SET_PLAYER_CONTROL( sub_897(), 0 );
                            TASK_CAR_MISSION( sub_990(), l_U766, 0, 5, 0.00000000, 0, 3, 20 );
                            sub_1170( 0 );
                            l_U491 = 1;
                            l_U489 = 1;
                        }
                    }
                    else
                    {
                        l_U567 = 0;
                        sub_12013( "Boat_warn1", l_U566 );
                        sub_12013( "Boat_warn2", l_U566 );
                        GET_GAME_TIMER( ref l_U549 );
                    }
                }
            }
            break;
            case 1:
            sub_12123( "brucboat_quitA" );
            DO_SCREEN_FADE_OUT( 2000 );
            l_U489 = 2;
            break;
            case 2:
            if (IS_SCREEN_FADED_OUT())
            {
                if (IS_CHAR_IN_ANY_CAR( sub_990() ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( sub_990(), l_U573._fU0, l_U573._fU4, l_U573._fU8 );
                    SET_CHAR_HEADING( sub_990(), 125.87690000 );
                }
                else
                {
                    SET_CHAR_COORDINATES( sub_990(), l_U573._fU0, l_U573._fU4, l_U573._fU8 );
                    SET_CHAR_HEADING( sub_990(), 125.87690000 );
                }
                if (IS_CHAR_IN_ANY_CAR( l_U802 ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( l_U802, l_U576._fU0, l_U576._fU4, l_U576._fU8 );
                    SET_CHAR_HEADING( l_U802, l_U572 - 20 );
                }
                else
                {
                    SET_CHAR_COORDINATES( l_U802, l_U576._fU0, l_U576._fU4, l_U576._fU8 );
                    SET_CHAR_HEADING( l_U802, l_U572 - 20 );
                }
                GET_GAME_TIMER( ref l_U546 );
                SET_CAM_BEHIND_PED( sub_990() );
                if (NOT (IS_CHAR_DEAD( l_U800 )))
                {
                    if (IS_CHAR_IN_ANY_CAR( l_U800 ))
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( l_U800, l_U579._fU0, l_U579._fU4, l_U579._fU8 );
                        SET_CHAR_HEADING( l_U800, l_U582 );
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( l_U800, l_U579._fU0, l_U579._fU4, l_U579._fU8 );
                        SET_CHAR_HEADING( l_U800, l_U582 );
                    }
                }
                if (NOT (IS_CHAR_DEAD( l_U801 )))
                {
                    if (IS_CHAR_IN_ANY_CAR( l_U801 ))
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( l_U801, l_U583._fU0, l_U583._fU4, l_U583._fU8 );
                        SET_CHAR_HEADING( l_U801, l_U586 );
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( l_U801, l_U583._fU0, l_U583._fU4, l_U583._fU8 );
                        SET_CHAR_HEADING( l_U801, l_U586 );
                    }
                }
                LOAD_SCENE( l_U569._fU0, l_U569._fU4, l_U569._fU8 );
                l_U489 = 3;
            }
            break;
            case 3:
            sub_12800();
            break;
        }
    }
    return;
}

void sub_12013(unknown uParam0, unknown uParam1)
{
    if (DOES_TEXT_LABEL_EXIST( uParam0 ))
    {
        if (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( uParam0, uParam1 ))
        {
            CLEAR_HELP();
        }
    }
    return;
}

void sub_12123(unknown uParam0)
{
    if (DOES_TEXT_LABEL_EXIST( uParam0 ))
    {
        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( uParam0 ))
        {
            CLEAR_HELP();
        }
    }
    return;
}

void sub_12800()
{
    switch (l_U488)
    {
        case 6:
        LOCK_CAR_DOORS( l_U766, 1 );
        l_U488 = 7;
        break;
        case 7:
        if (IS_SCREEN_FADED_OUT())
        {
            l_U488 = 9;
        }
        break;
        case 9:
        l_U488 = 10;
        break;
        case 10:
        GET_GAME_TIMER( ref l_U547 );
        l_U548 = l_U547 - l_U546;
        l_U488 = 11;
        break;
        case 11:
        l_U488 = 12;
        break;
        case 12:
        l_U484 = 10;
        break;
    }
    return;
}

void sub_13008()
{
    int iVar2;
    unknown uVar3;

    switch (l_U485)
    {
        case 0:
        GENERATE_RANDOM_INT_IN_RANGE( 0, l_U561, ref l_U545 );
        uVar3 = GET_MAP_AREA_FROM_COORDS( l_U498[l_U545] );
        iVar2 = GET_INT_STAT( 363 );
        if (l_U517[l_U545] != 3)
        {
            if (g_U64581[l_U545] == 0)
            {
                l_U485 = 2;
            }
        }
        if ((l_U517[l_U545] == 3) AND (iVar2 >= 3))
        {
            if (g_U64581[l_U545] == 0)
            {
                l_U485 = 2;
            }
        }
        break;
        case 2:
        if (NOT (sub_3769( l_U741 )))
        {
            sub_2356();
            if (l_U545 == 0)
            {
                if (sub_2690( l_U600, ref l_U594, 6, 1 ))
                {
                    l_U485 = 1;
                }
            }
            else if (l_U545 == 1)
            {
                if (sub_2690( l_U614, ref l_U608, 6, 1 ))
                {
                    l_U485 = 1;
                }
            }
            else if (l_U545 == 2)
            {
                if (sub_2690( l_U635, ref l_U629, 6, 1 ))
                {
                    l_U485 = 1;
                }
            }
            else if (l_U545 == 3)
            {
                if (sub_2690( l_U670, ref l_U664, 6, 1 ))
                {
                    l_U485 = 1;
                }
            }
            else if (l_U545 == 4)
            {
                if (sub_2690( l_U656, ref l_U650, 6, 1 ))
                {
                    l_U485 = 1;
                }
            }
            else if (l_U545 == 5)
            {
                if (sub_2690( l_U642, ref l_U636, 6, 1 ))
                {
                    l_U485 = 1;
                }
            };;;;;;
            if (l_U548 > 11500)
            {
                l_U485 = 1;
            }
        }
        break;
        case 1:
        if (DOES_BLIP_EXIST( l_U777[l_U545] ))
        {
            CHANGE_BLIP_DISPLAY( l_U777[l_U545], 4 );
            l_U485 = 3;
        }
        break;
        case 3:
        if (NOT (sub_3769( l_U636 )))
        {
            if (NOT (sub_3769( l_U650 )))
            {
                if (NOT (sub_3769( l_U664 )))
                {
                    if (NOT (sub_3769( l_U629 )))
                    {
                        if (NOT (sub_3769( l_U608 )))
                        {
                            if (NOT (sub_3769( l_U594 )))
                            {
                                if (l_U545 == 0)
                                {
                                    PRINT_NOW( "statue", 7500, 1 );
                                }
                                else if (l_U545 == 1)
                                {
                                    PRINT_NOW( "pier", 7500, 1 );
                                }
                                else if (l_U545 == 2)
                                {
                                    PRINT_NOW( "pier45", 7500, 1 );
                                }
                                else if (l_U545 == 3)
                                {
                                    PRINT_NOW( "ships", 7500, 1 );
                                }
                                else if (l_U545 == 4)
                                {
                                    PRINT_NOW( "indust", 7500, 1 );
                                }
                                else if (l_U545 == 5)
                                {
                                    PRINT_NOW( "golf", 7500, 1 );
                                };;;;;;
                                GET_GAME_TIMER( ref l_U546 );
                                l_U485 = 4;
                            }
                        }
                    }
                }
            }
        }
        break;
        case 4:
        GET_GAME_TIMER( ref l_U547 );
        l_U548 = l_U547 - l_U546;
        if (l_U548 > 7500)
        {
            l_U484 = 6;
        }
        break;
    }
    return;
}

void sub_14210()
{
    if (NOT (IS_CHAR_INJURED( l_U802 )))
    {
        switch (l_U593)
        {
            case -1:
            if (NOT (sub_3769( l_U594 )))
            {
                if (NOT (sub_3769( l_U608 )))
                {
                    if (NOT (sub_3769( l_U629 )))
                    {
                        if (NOT (sub_3769( l_U636 )))
                        {
                            if (NOT (sub_3769( l_U650 )))
                            {
                                if (NOT (sub_3769( l_U664 )))
                                {
                                    GET_GAME_TIMER( ref l_U588 );
                                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U587 );
                                    if (g_U9130[0]._fU0 == 0)
                                    {
                                        sub_14468();
                                        sub_14558();
                                        l_U593 = 0;
                                    }
                                    else if (g_U9130[1]._fU0 == 0)
                                    {
                                        sub_14468();
                                        sub_14558();
                                        l_U593 = 1;
                                    }
                                    else if (g_U9130[2]._fU0 == 0)
                                    {
                                        sub_14468();
                                        sub_14558();
                                        l_U593 = 2;
                                    }
                                    else if (g_U9130[3]._fU0 == 0)
                                    {
                                        sub_14468();
                                        sub_14558();
                                        l_U593 = 3;
                                    }
                                    else if (g_U9130[4]._fU0 == 0)
                                    {
                                        sub_14468();
                                        sub_14558();
                                        l_U593 = 4;
                                    }
                                    else if (g_U9130[5]._fU0 == 0)
                                    {
                                        sub_14468();
                                        sub_14558();
                                        l_U593 = 5;
                                    }
                                    else
                                    {
                                        SAY_AMBIENT_SPEECH( l_U802, "LISTEN_TO_RADIO", 0, 0, 0 );
                                        l_U593 = 6;
                                    };;;;;;
                                }
                            }
                        }
                    }
                }
            }
            break;
            case 0:
            GET_GAME_TIMER( ref l_U589 );
            l_U590 = l_U589 - l_U588;
            if (l_U590 > l_U587)
            {
                if (sub_2711( l_U705, "FCB4AUD", ref l_U699, 6, 1 ))
                {
                    g_U9130[0]._fU0 = 1;
                    l_U593 = 6;
                }
            }
            break;
            case 1:
            GET_GAME_TIMER( ref l_U589 );
            l_U590 = l_U589 - l_U588;
            if (l_U590 > l_U587)
            {
                if (sub_2711( l_U712, "FCB4AUD", ref l_U706, 6, 1 ))
                {
                    g_U9130[1]._fU0 = 1;
                    l_U593 = 6;
                }
            }
            break;
            case 2:
            GET_GAME_TIMER( ref l_U589 );
            l_U590 = l_U589 - l_U588;
            if (l_U590 > l_U587)
            {
                if (sub_2711( l_U719, "FCB4AUD", ref l_U713, 6, 1 ))
                {
                    g_U9130[2]._fU0 = 1;
                    l_U593 = 6;
                }
            }
            break;
            case 3:
            GET_GAME_TIMER( ref l_U589 );
            l_U590 = l_U589 - l_U588;
            if (l_U590 > l_U587)
            {
                if (sub_2711( l_U726, "FCB4AUD", ref l_U720, 6, 1 ))
                {
                    g_U9130[3]._fU0 = 1;
                    l_U593 = 6;
                }
            }
            break;
            case 4:
            GET_GAME_TIMER( ref l_U589 );
            l_U590 = l_U589 - l_U588;
            if (l_U590 > l_U587)
            {
                if (sub_2711( l_U733, "FCB4AUD", ref l_U727, 6, 1 ))
                {
                    g_U9130[4]._fU0 = 1;
                    l_U593 = 6;
                }
            }
            break;
            case 5:
            GET_GAME_TIMER( ref l_U589 );
            l_U590 = l_U589 - l_U588;
            if (l_U590 > l_U587)
            {
                if (sub_2711( l_U740, "FCB4AUD", ref l_U734, 6, 1 ))
                {
                    g_U9130[5]._fU0 = 1;
                    l_U593 = 6;
                }
            }
            break;
            case 6:
            if (NOT (sub_3769( l_U699 )))
            {
                if (NOT (sub_3769( l_U706 )))
                {
                    if (NOT (sub_3769( l_U713 )))
                    {
                        if (NOT (sub_3769( l_U720 )))
                        {
                            if (NOT (sub_3769( l_U727 )))
                            {
                                if (NOT (sub_3769( l_U734 )))
                                {
                                    l_U593++;
                                }
                            }
                        }
                    }
                }
            }
            break;
            case 7: break;
        }
    }
    return;
}

void sub_14468()
{
    sub_2368( "FCB4AUD" );
    sub_2487( 0, sub_990(), "NIKO", 0 );
    if (NOT (IS_CHAR_DEAD( l_U802 )))
    {
        sub_2487( 1, l_U802, "BRUCIE", 0 );
    }
    return;
}

void sub_14558()
{
    if (NOT (IS_CHAR_DEAD( l_U800 )))
    {
        sub_2487( 2, l_U800, "BRUCIE_BABE_1", 0 );
    }
    if (NOT (IS_CHAR_DEAD( l_U801 )))
    {
        sub_2487( 3, l_U801, "BRUCIE_BABE_2", 0 );
    }
    return;
}

void sub_15625()
{
    if (IS_VEH_DRIVEABLE( l_U766 ))
    {
        switch (l_U486)
        {
            case 0:
            sub_12123( "brucboat_quitA" );
            sub_1170( 0 );
            sub_1311( 0 );
            sub_15734( l_U545 );
            break;
            case 1:
            sub_19346( ref l_U564 );
            SET_CAM_ACTIVE( l_U767, 1 );
            SET_CAM_PROPAGATE( l_U767, 1 );
            if (DOES_OBJECT_EXIST( l_U803 ))
            {
                DELETE_OBJECT( ref l_U803 );
            }
            SET_CAM_SPLINE_PROGRESS( l_U767, 0.00000000 );
            sub_870( 1 );
            GET_GAME_TIMER( ref l_U546 );
            l_U486 = 2;
            break;
            case 2:
            GET_GAME_TIMER( ref l_U547 );
            l_U548 = l_U547 - l_U546;
            if (l_U548 > 1000)
            {
                if (sub_10477())
                {
                    l_U486 = 3;
                }
            }
            if (l_U545 == 0)
            {
                if (l_U548 > (l_U524[l_U545] + 1500))
                {
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    l_U486 = 3;
                }
            }
            else if (l_U548 > (l_U524[l_U545] - 1000))
            {
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                l_U486 = 3;
            }
            break;
            case 3:
            sub_870( 0 );
            if (IS_PLAYER_PLAYING( sub_897() ))
            {
                SET_PLAYER_CONTROL( sub_897(), 1 );
            }
            sub_19674();
            sub_1143( ref l_U564 );
            sub_19789();
            break;
        }
    }
    return;
}

void sub_15734(int iParam0)
{
    if (iParam0 == 0)
    {
        l_U524[0] = 10000;
        CREATE_CAM( 25, ref l_U767 );
        SET_CAM_SPLINE_DURATION( l_U767, l_U524[0] );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U767, 1 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U767, 1 );
        CREATE_CAM( 14, ref l_U768[0] );
        SET_CAM_POS( l_U768[0], -682.08500000, -633.00880000, 7.66757300 );
        SET_CAM_ROT( l_U768[0], -26.45633000, -0.00000100, -143.73230000 );
        SET_CAM_FOV( l_U768[0], 70.00000000 );
        ADD_CAM_SPLINE_NODE( l_U767, l_U768[0] );
        CREATE_CAM( 14, ref l_U768[1] );
        SET_CAM_POS( l_U768[1], -660.66510000, -697.90390000, 43.43665000 );
        SET_CAM_ROT( l_U768[1], 14.26735000, -0.00000000, -118.36610000 );
        SET_CAM_FOV( l_U768[1], 70.00000000 );
        ADD_CAM_SPLINE_NODE( l_U767, l_U768[1] );
    }
    else if (iParam0 == 1)
    {
        l_U524[1] = 15000;
        CREATE_CAM( 25, ref l_U767 );
        SET_CAM_SPLINE_DURATION( l_U767, l_U524[1] );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U767, 1 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U767, 1 );
        CREATE_CAM( 14, ref l_U768[0] );
        SET_CAM_POS( l_U768[0], -90.94316000, -1046.61800000, 5.32498900 );
        SET_CAM_ROT( l_U768[0], -6.71783800, -0.00000000, 34.44198000 );
        SET_CAM_FOV( l_U768[0], 70.00000000 );
        ADD_CAM_SPLINE_NODE( l_U767, l_U768[0] );
        CREATE_CAM( 14, ref l_U768[1] );
        SET_CAM_POS( l_U768[1], -91.03799000, -1046.48000000, 24.54558000 );
        SET_CAM_ROT( l_U768[1], 2.48137500, 0.00000000, 34.44198000 );
        SET_CAM_FOV( l_U768[1], 70.00000000 );
        ADD_CAM_SPLINE_NODE( l_U767, l_U768[1] );
    }
    else if (iParam0 == 2)
    {
        l_U524[2] = 15000;
        CREATE_CAM( 25, ref l_U767 );
        SET_CAM_SPLINE_DURATION( l_U767, l_U524[2] );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U767, 1 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U767, 1 );
        CREATE_CAM( 14, ref l_U768[0] );
        SET_CAM_POS( l_U768[0], 496.71420000, -587.72930000, 3.42791800 );
        SET_CAM_ROT( l_U768[0], 6.77844700, 0.00000000, -0.95769900 );
        SET_CAM_FOV( l_U768[0], 70.00000000 );
        ADD_CAM_SPLINE_NODE( l_U767, l_U768[0] );
        CREATE_CAM( 14, ref l_U768[1] );
        SET_CAM_POS( l_U768[1], 405.34890000, -585.03830000, 3.44765800 );
        SET_CAM_ROT( l_U768[1], 6.72358000, 0.00000000, -4.08696700 );
        SET_CAM_FOV( l_U768[1], 60.00000000 );
        ADD_CAM_SPLINE_NODE( l_U767, l_U768[1] );
    }
    else if (iParam0 == 3)
    {
        l_U524[3] = 17000;
        CREATE_CAM( 25, ref l_U767 );
        SET_CAM_SPLINE_DURATION( l_U767, l_U524[3] );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U767, 1 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U767, 1 );
        CREATE_CAM( 14, ref l_U768[0] );
        SET_CAM_POS( l_U768[0], -2151.72200000, -602.10530000, 29.20898000 );
        SET_CAM_ROT( l_U768[0], -7.16840900, -0.00000000, -30.38510000 );
        SET_CAM_FOV( l_U768[0], 70.00000000 );
        ADD_CAM_SPLINE_NODE( l_U767, l_U768[0] );
        CREATE_CAM( 14, ref l_U768[1] );
        SET_CAM_POS( l_U768[1], -2151.72200000, -368.22600000, 29.20898000 );
        SET_CAM_ROT( l_U768[1], -7.16840900, 0.00000000, -139.59080000 );
        SET_CAM_FOV( l_U768[1], 70.00000000 );
        ADD_CAM_SPLINE_NODE( l_U767, l_U768[1] );
    }
    else if (iParam0 == 4)
    {
        l_U524[4] = 20000;
        CREATE_CAM( 25, ref l_U767 );
        SET_CAM_SPLINE_DURATION( l_U767, l_U524[4] );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U767, 1 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U767, 1 );
        CREATE_CAM( 14, ref l_U768[0] );
        SET_CAM_POS( l_U768[0], -991.56270000, -94.33484000, 7.01546700 );
        SET_CAM_ROT( l_U768[0], -0.10253900, -0.00000000, 134.82790000 );
        SET_CAM_FOV( l_U768[0], 70.00000000 );
        ADD_CAM_SPLINE_NODE( l_U767, l_U768[0] );
        CREATE_CAM( 14, ref l_U768[1] );
        SET_CAM_POS( l_U768[1], -1140.06900000, -184.04070000, 44.04297000 );
        SET_CAM_ROT( l_U768[1], -0.84683600, 0.00000000, 166.64830000 );
        SET_CAM_FOV( l_U768[1], 70.00000000 );
        ADD_CAM_SPLINE_NODE( l_U767, l_U768[1] );
        CREATE_CAM( 14, ref l_U768[2] );
        SET_CAM_POS( l_U768[2], -1122.09200000, -258.56810000, 43.33916000 );
        SET_CAM_ROT( l_U768[2], -2.37822500, -0.00000000, -121.79990000 );
        SET_CAM_FOV( l_U768[2], 70.00000000 );
        ADD_CAM_SPLINE_NODE( l_U767, l_U768[2] );
        CREATE_CAM( 14, ref l_U768[3] );
        SET_CAM_POS( l_U768[3], -1084.33000000, -279.59640000, 41.53773000 );
        SET_CAM_ROT( l_U768[3], 10.59793000, -0.00000000, -80.84201000 );
        SET_CAM_FOV( l_U768[3], 70.00000000 );
        ADD_CAM_SPLINE_NODE( l_U767, l_U768[3] );
    }
    else if (iParam0 == 5)
    {
        l_U524[5] = 25000;
        CREATE_CAM( 25, ref l_U767 );
        SET_CAM_SPLINE_DURATION( l_U767, l_U524[5] );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U767, 1 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U767, 1 );
        CREATE_CAM( 14, ref l_U768[0] );
        SET_CAM_POS( l_U768[0], -878.44930000, 17.62793000, 7.06743400 );
        SET_CAM_ROT( l_U768[0], -15.39420000, -0.00000100, -126.74420000 );
        SET_CAM_FOV( l_U768[0], 70.00000000 );
        ADD_CAM_SPLINE_NODE( l_U767, l_U768[0] );
        CREATE_CAM( 14, ref l_U768[1] );
        SET_CAM_POS( l_U768[1], -836.59160000, -13.04520000, 12.67731000 );
        SET_CAM_ROT( l_U768[1], 0.29734200, 0.00000000, -88.49830000 );
        SET_CAM_FOV( l_U768[1], 70.00000000 );
        ADD_CAM_SPLINE_NODE( l_U767, l_U768[1] );
        CREATE_CAM( 14, ref l_U768[2] );
        SET_CAM_POS( l_U768[2], -836.06130000, -13.10017000, 66.79539000 );
        SET_CAM_ROT( l_U768[2], 7.42836600, -0.00000000, -95.91484000 );
        SET_CAM_FOV( l_U768[2], 70.00000000 );
        ADD_CAM_SPLINE_NODE( l_U767, l_U768[2] );
    }
    else if (iParam0 == 6)
    {
        l_U524[6] = 20000;
        CREATE_CAM( 25, ref l_U767 );
        SET_CAM_SPLINE_DURATION( l_U767, l_U524[6] );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U767, 1 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U767, 1 );
        CREATE_CAM( 14, ref l_U768[0] );
        SET_CAM_POS( l_U768[0], -754.69190000, 1000.51200000, 16.18376000 );
        SET_CAM_ROT( l_U768[0], -20.53683000, -0.00000100, 128.94400000 );
        SET_CAM_FOV( l_U768[0], 70.00000000 );
        ADD_CAM_SPLINE_NODE( l_U767, l_U768[0] );
        CREATE_CAM( 14, ref l_U768[1] );
        SET_CAM_POS( l_U768[1], -823.89940000, 984.67140000, 55.52168000 );
        SET_CAM_ROT( l_U768[1], 17.83699000, -0.00000000, 153.08020000 );
        SET_CAM_FOV( l_U768[1], 70.00000000 );
        ADD_CAM_SPLINE_NODE( l_U767, l_U768[1] );
        CREATE_CAM( 14, ref l_U768[2] );
        SET_CAM_POS( l_U768[2], -787.20650000, 1056.93500000, 71.95443000 );
        SET_CAM_ROT( l_U768[2], 4.74013400, -0.00000000, 146.02760000 );
        SET_CAM_FOV( l_U768[2], 70.00000000 );
        ADD_CAM_SPLINE_NODE( l_U767, l_U768[2] );
    }
    else if (iParam0 == 7)
    {
        l_U524[7] = 30000;
        CREATE_CAM( 25, ref l_U767 );
        SET_CAM_SPLINE_DURATION( l_U767, l_U524[7] );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U767, 1 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U767, 1 );
        CREATE_CAM( 14, ref l_U768[0] );
        SET_CAM_POS( l_U768[0], -737.10750000, 1557.23500000, 6.37634800 );
        SET_CAM_ROT( l_U768[0], -2.56248700, 0.00000000, -115.09000000 );
        SET_CAM_FOV( l_U768[0], 70.00000000 );
        ADD_CAM_SPLINE_NODE( l_U767, l_U768[0] );
        CREATE_CAM( 14, ref l_U768[1] );
        SET_CAM_POS( l_U768[1], -755.74880000, 1460.07300000, 12.20190000 );
        SET_CAM_ROT( l_U768[1], 3.97468400, -0.00000000, -29.89274000 );
        SET_CAM_FOV( l_U768[1], 70.00000000 );
        ADD_CAM_SPLINE_NODE( l_U767, l_U768[1] );
        CREATE_CAM( 14, ref l_U768[2] );
        SET_CAM_POS( l_U768[2], -641.25600000, 1475.39300000, 24.79806000 );
        SET_CAM_ROT( l_U768[2], -8.53293200, -0.00000000, 57.39568000 );
        SET_CAM_FOV( l_U768[2], 70.00000000 );
        ADD_CAM_SPLINE_NODE( l_U767, l_U768[2] );
    }
    else if (iParam0 == 8)
    {
        l_U524[8] = 30000;
        CREATE_CAM( 25, ref l_U767 );
        SET_CAM_SPLINE_DURATION( l_U767, l_U524[8] );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U767, 1 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U767, 1 );
        CREATE_CAM( 14, ref l_U768[0] );
        SET_CAM_POS( l_U768[0], -1155.57900000, 1911.83300000, 12.71543000 );
        SET_CAM_ROT( l_U768[0], -18.27713000, 0.00000000, 59.22514000 );
        SET_CAM_FOV( l_U768[0], 70.00000000 );
        ADD_CAM_SPLINE_NODE( l_U767, l_U768[0] );
        CREATE_CAM( 14, ref l_U768[1] );
        SET_CAM_POS( l_U768[1], -1180.60900000, 1927.46600000, 11.63037000 );
        SET_CAM_ROT( l_U768[1], -1.07796900, 0.00000000, 167.66670000 );
        SET_CAM_FOV( l_U768[1], 70.00000000 );
        ADD_CAM_SPLINE_NODE( l_U767, l_U768[1] );
        CREATE_CAM( 14, ref l_U768[2] );
        SET_CAM_POS( l_U768[2], -1314.75000000, 1947.09700000, 11.63037000 );
        SET_CAM_ROT( l_U768[2], -1.07796900, 0.00000000, -125.89600000 );
        SET_CAM_FOV( l_U768[2], 70.00000000 );
        ADD_CAM_SPLINE_NODE( l_U767, l_U768[2] );
    };;;;;;;;;
    l_U486 = 1;
    return;
}

void sub_19346(unknown uParam0)
{
    BEGIN_CAM_COMMANDS( uParam0 );
    return;
}

void sub_19674()
{
    int I;

    for ( I = 0; I <= 7; I++ )
    {
        if (DOES_CAM_EXIST( l_U768[I] ))
        {
            DESTROY_CAM( l_U768[I] );
        }
    }
    if (DOES_CAM_EXIST( l_U767 ))
    {
        DESTROY_CAM( l_U767 );
    }
    return;
}

void sub_19789()
{
    l_U485 = 0;
    l_U486 = 0;
    l_U489 = 0;
    l_U490 = 0;
    if (DOES_BLIP_EXIST( l_U798 ))
    {
        CHANGE_BLIP_DISPLAY( l_U798, 4 );
    }
    l_U484 = 9;
    return;
}

void sub_19884()
{
    if (IS_VEH_DRIVEABLE( l_U766 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U802 )))
        {
            switch (l_U487)
            {
                case 0:
                sub_2356();
                if (l_U545 == 0)
                {
                    if (sub_2690( l_U607, ref l_U601, 6, 1 ))
                    {
                        l_U487 = 2;
                    }
                }
                else if (l_U545 == 1)
                {
                    if (sub_2690( l_U621, ref l_U615, 6, 1 ))
                    {
                        l_U487 = 2;
                    }
                }
                else if (l_U545 == 2)
                {
                    if (sub_2690( l_U628, ref l_U622, 6, 1 ))
                    {
                        l_U487 = 2;
                    }
                }
                else if (l_U545 == 3)
                {
                    if (sub_2690( l_U677, ref l_U671, 6, 1 ))
                    {
                        l_U487 = 2;
                    }
                }
                else if (l_U545 == 4)
                {
                    if (sub_2690( l_U663, ref l_U657, 6, 1 ))
                    {
                        l_U487 = 2;
                    }
                }
                else if (l_U545 == 5)
                {
                    if (sub_2690( l_U649, ref l_U643, 6, 1 ))
                    {
                        l_U487 = 2;
                    }
                };;;;;;
                if (l_U548 > 11500)
                {
                    l_U487 = 2;
                }
                sub_11511();
                l_U487 = 1;
                break;
                case 1:
                sub_11511();
                if (NOT (sub_3769( l_U643 )))
                {
                    if (NOT (sub_3769( l_U657 )))
                    {
                        if (NOT (sub_3769( l_U671 )))
                        {
                            if (NOT (sub_3769( l_U622 )))
                            {
                                if (NOT (sub_3769( l_U615 )))
                                {
                                    if (NOT (sub_3769( l_U601 )))
                                    {
                                        PRINT_NOW( "homeboat", 7500, 1 );
                                        GET_GAME_TIMER( ref l_U546 );
                                        l_U487 = 3;
                                    }
                                }
                            }
                        }
                    }
                }
                break;
                case 3:
                sub_11511();
                GET_GAME_TIMER( ref l_U547 );
                l_U548 = l_U547 - l_U546;
                if (l_U548 > 7500)
                {
                    l_U487 = 2;
                }
                break;
                case 2:
                sub_11511();
                if (LOCATE_CAR_3D( l_U766, l_U569._fU0, l_U569._fU4, l_U569._fU8, 40.00000000, 40.00000000, 10.00000000, 0 ))
                {
                    if (DOES_BLIP_EXIST( l_U798 ))
                    {
                        CHANGE_BLIP_DISPLAY( l_U798, 0 );
                    }
                    SET_PLAYER_CONTROL( sub_897(), 0 );
                    ANCHOR_BOAT( l_U766, 1 );
                    sub_1311( 0 );
                    l_U487 = 4;
                }
                break;
                case 4:
                CLEAR_HELP();
                if (NOT (sub_3769( l_U692 )))
                {
                    DO_SCREEN_FADE_OUT( 3000 );
                    g_U64581[l_U545] = 1;
                    TASK_CAR_MISSION( sub_990(), l_U766, 0, 5, 0.00000000, 0, 3, 20 );
                    l_U494 = 1;
                    GET_GAME_TIMER( ref l_U546 );
                    l_U487 = 5;
                }
                break;
                case 5:
                CLEAR_HELP();
                l_U487 = 6;
                break;
                case 6:
                if (IS_SCREEN_FADED_OUT())
                {
                    l_U487 = 7;
                }
                break;
                case 7:
                sub_20829();
                GET_GAME_TIMER( ref l_U559 );
                l_U560 = l_U559 - l_U558;
                if (l_U560 > 1000)
                {
                    if (IS_SCREEN_FADED_IN())
                    {
                        if (sub_10477())
                        {
                            l_U487 = 8;
                        }
                    }
                }
                break;
                case 8:
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    DO_SCREEN_FADE_OUT( 3000 );
                }
                while (IS_SCREEN_FADING_OUT())
                {
                    WAIT( 0 );
                }
                sub_870( 0 );
                CLEAR_PRINTS();
                l_U487 = 9;
                break;
                case 9:
                l_U487 = 10;
                break;
                case 10:
                l_U487 = 11;
                break;
                case 11:
                l_U487 = 12;
                break;
                case 12:
                INCREMENT_INT_STAT_NO_MESSAGE( 352, 1 );
                l_U484 = 10;
                break;
            }
        }
    }
    return;
}

void sub_20829()
{
    if (NOT (IS_CHAR_INJURED( l_U802 )))
    {
        if (NOT (IS_CHAR_INJURED( l_U800 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U801 )))
            {
                if (IS_VEH_DRIVEABLE( l_U766 ))
                {
                    switch (l_U805)
                    {
                        case 0:
                        SET_PLAYER_CONTROL( sub_897(), 0 );
                        if (IS_SCREEN_FADED_IN())
                        {
                            DO_SCREEN_FADE_OUT( 2500 );
                        }
                        l_U805 = 1;
                        break;
                        case 1:
                        if (IS_SCREEN_FADED_OUT())
                        {
                            SET_CAR_COORDINATES( l_U766, l_U569._fU0, l_U569._fU4, l_U569._fU8 );
                            SET_CAR_HEADING( l_U766, l_U572 );
                            sub_21114( l_U802 );
                            sub_21114( l_U800 );
                            sub_21114( l_U801 );
                            sub_21219( sub_990(), 762.99680000, 336.58740000, 1.00900000, 225.98250000 );
                            sub_21219( l_U802, 765.01140000, 332.44840000, 1.00900000, 43.39640000 );
                            sub_21219( l_U800, 765.86570000, 329.61080000, 1.58100000, 138.46480000 );
                            sub_21219( l_U801, 766.09920000, 326.75210000, 2.45420000, 351.17740000 );
                            LOAD_SCENE( l_U569._fU0, l_U569._fU4, l_U569._fU8 );
                            l_U805 = 2;
                        }
                        break;
                        case 2:
                        l_U805 = 3;
                        break;
                        case 3:
                        TASK_LOOK_AT_CHAR( sub_990(), l_U802, 15000, 0 );
                        TASK_LOOK_AT_CHAR( l_U802, sub_990(), 15000, 0 );
                        TASK_LOOK_AT_CHAR( l_U800, l_U802, 10000, 0 );
                        TASK_LOOK_AT_CHAR( l_U801, l_U802, 7000, 0 );
                        sub_9509( 752.71800000, 346.62880000, 1.03155900, 10.19466000, 0.00000100, -142.09710000, 39.60001000, l_U807 );
                        sub_870( 1 );
                        DO_SCREEN_FADE_IN( 3000 );
                        l_U805 = 4;
                        break;
                        case 4:
                        if (IS_SCREEN_FADED_IN())
                        {
                            GET_GAME_TIMER( ref l_U809 );
                            GET_GAME_TIMER( ref l_U558 );
                            if (sub_2711( l_U698, "", ref l_U692, 6, 1 ))
                            {
                                l_U805 = 5;
                            }
                        }
                        break;
                        case 5:
                        GET_GAME_TIMER( ref l_U810 );
                        l_U811 = l_U810 - l_U809;
                        if (l_U811 > 1000)
                        {
                            if (NOT (IS_CHAR_INJURED( l_U801 )))
                            {
                                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U801, 804.96440000, 345.87010000, 5.66360000, 2, -2, 3.00000000 );
                                GET_GAME_TIMER( ref l_U809 );
                                l_U805 = 6;
                            }
                        }
                        break;
                        case 6:
                        GET_GAME_TIMER( ref l_U810 );
                        l_U811 = l_U810 - l_U809;
                        if (l_U811 > 500)
                        {
                            if (NOT (IS_CHAR_INJURED( l_U800 )))
                            {
                                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U800, 804.96440000, 345.87010000, 5.66360000, 2, -2, 3.00000000 );
                                GET_GAME_TIMER( ref l_U809 );
                                l_U805 = 7;
                            }
                        }
                        break;
                        case 7:
                        GET_GAME_TIMER( ref l_U810 );
                        l_U811 = l_U810 - l_U809;
                        if (l_U811 > 1000)
                        {
                            if (NOT (IS_CHAR_INJURED( l_U800 )))
                            {
                                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U802, 804.96440000, 345.87010000, 5.66360000, 2, -2, 3.00000000 );
                                l_U805 = 8;
                            }
                        }
                        break;
                        case 8:
                        if (NOT (sub_3769( l_U692 )))
                        {
                            DO_SCREEN_FADE_OUT( 3000 );
                            l_U805 = 11;
                        }
                        break;
                        case 11:
                        if (IS_SCREEN_FADED_OUT())
                        {
                            CLEAR_PRINTS();
                            l_U487 = 8;
                        }
                        break;
                    }
                }
            }
        }
    }
    return;
}

void sub_21114(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_GROUP_MEMBER( uParam0, sub_8164() ))
        {
            REMOVE_CHAR_FROM_GROUP( uParam0 );
        }
    }
    return;
}

void sub_21219(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if ((IS_CHAR_IN_ANY_CAR( uParam0 )) || (IS_CHAR_SITTING_IN_ANY_CAR( sub_990() )))
        {
            WARP_CHAR_FROM_CAR_TO_COORD( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8 );
            SET_CHAR_HEADING( uParam0, uParam4 );
        }
        else
        {
            SET_CHAR_COORDINATES( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8 );
            SET_CHAR_HEADING( uParam0, uParam4 );
        }
    }
    return;
}
