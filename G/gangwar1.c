void main()
{
    int iVar2;
    int iVar3;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 1;
    l_U4 = 3;
    l_U10 = 0;
    l_U11 = -1;
    l_U12 = 0;
    l_U13 = 0;
    l_U14 = 0;
    l_U15 = 0;
    l_U16 = 0;
    l_U17 = 0;
    l_U18 = 0;
    l_U20 = -1;
    l_U132 = 15.00000000;
    l_U133 = 35.00000000;
    l_U134 = 16.00000000;
    l_U135 = 0.00000000;
    l_U141 = 1000.00000000;
    l_U142 = 7500.00000000;
    l_U151 = 1;
    l_U152 = 30.00000000;
    l_U153 = 30.00000000;
    l_U154 = 2.00000000;
    l_U164 = 0.00000000;
    l_U165 = 0.00000000;
    l_U177 = 1;
    l_U178 = 0;
    l_U179 = -1;
    l_U180 = 1;
    l_U181 = -1;
    l_U182 = -1;
    l_U183 = 15.00000000;
    l_U210 = 0;
    l_U211 = -1949702649;
    l_U212 = 2075870698;
    l_U217 = 0.12000000;
    l_U228 = 1;
    l_U229 = 1;
    l_U354 = 150.00000000;
    l_U444 = 0;
    l_U445 = {0.00000000, 0.00000000, 0.00000000};
    l_U563 = {1.00000000, 1.00000000, 1.00000000};
    l_U566 = {0.00000000, 1.00000000, 0.00000000};
    l_U569 = {0.00000000, -1.00000000, 0.00000000};
    l_U582 = 0;
    l_U583 = 0;
    l_U594 = 100.00000000;
    l_U595 = 10.50000000;
    l_U596 = 0.50000000;
    l_U597 = 2.85000000;
    l_U602 = 1;
    l_U617 = 0;
    l_U618 = 0;
    l_U619 = 0;
    l_U620 = 0;
    l_U621 = 0;
    l_U622 = 0;
    l_U623 = 0;
    l_U624 = 0;
    l_U641 = 0;
    l_U642 = 0;
    l_U643 = 0;
    l_U644 = 0;
    l_U645 = 0;
    l_U646 = 0;
    l_U652 = 0;
    l_U653 = 0;
    l_U654 = 0;
    l_U655 = 0;
    l_U656 = 0;
    l_U657 = 0;
    l_U658 = 0;
    l_U659 = 0;
    l_U660 = 0;
    l_U661 = 0;
    l_U662 = 0;
    l_U663 = 0;
    l_U664 = 0;
    l_U665 = 0;
    l_U666 = 0;
    l_U667 = 0;
    l_U668 = 0;
    l_U669 = 1;
    l_U670 = 1;
    l_U671 = 0;
    l_U672 = 1;
    l_U673 = 1;
    l_U674 = 1;
    l_U675 = 1;
    l_U676 = 0;
    l_U697 = 50;
    l_U698 = 40;
    l_U699 = 200;
    l_U701 = 0;
    l_U702 = 1000;
    l_U705 = 0;
    l_U706 = 1;
    l_U707 = 0;
    l_U708 = 0;
    l_U709 = 9000;
    l_U710 = 0;
    l_U711 = 0;
    l_U712 = 6000;
    l_U713 = 0;
    l_U714 = 0;
    l_U715 = 11000;
    l_U716 = {0, 0, 0};
    l_U719 = {41.95110000, 523.06050000, 13.66110000};
    l_U722 = {0, 0, 0};
    l_U725 = {0, 0, 0};
    l_U728 = {0, 0, 0};
    l_U731 = {-347.40990000, 643.33900000, 13.61330000};
    l_U734 = {-344.05540000, 640.53090000, 13.79580000};
    l_U737 = {-347.50660000, 647.35620000, 13.61320000};
    l_U740 = {-342.66310000, 636.32290000, 13.80300000};
    l_U746 = 0.00000000;
    l_U747 = 1.00000000;
    l_U748 = 119.95330000;
    l_U749 = 50.62960000;
    l_U750 = 146.08380000;
    l_U751 = 133.27190000;
    l_U759 = 0;
    l_U768 = 25;
    l_U769 = 0;
    l_U1061 = 0;
    l_U1062 = 0;
    l_U1063 = 0;
    l_U1088 = "";
    l_U1090 = 12;
    l_U1091 = 870892404;
    l_U1099 = -570033273;
    l_U1123 = 0;
    l_U1124 = 0;
    l_U1125 = 0;
    l_U1126 = 0;
    l_U1127 = 0;
    l_U1128 = 0;
    l_U1133 = 0;
    SET_MISSION_FLAG( 1 );
    LOAD_ADDITIONAL_TEXT( "JIMGANG", 0 );
    sub_1150();
    if ((g_U15728[8] == 0) || (g_U12306[1]._fU108 == 1))
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 101, ref iVar2 );
        if (iVar2 < 25)
        {
            l_U602 = 6;
        }
        else if (iVar2 > 75)
        {
            l_U602 = 7;
        }
        else
        {
            l_U602 = 1;
        }
    }
    else
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 101, ref iVar2 );
        if (iVar2 > 50)
        {
            l_U602 = 6;
        }
        else
        {
            l_U602 = 7;
        }
    }
    if (NOT (IS_CHAR_DEAD( sub_5968() )))
    {
        SET_PLAYER_CONTROL_ADVANCED( sub_5899(), 0, 0, 0 );
    }
    if (NOT IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_OUT( 1000 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            if (NOT (IS_CHAR_DEAD( sub_5968() )))
            {
                GET_CHAR_COORDINATES( sub_5968(), ref l_U716._fU0, ref l_U716._fU4, ref l_U716._fU8 );
                if (IS_PROJECTILE_IN_AREA( l_U716._fU0 - 2.50000000, l_U716._fU4 - 2.50000000, l_U716._fU8 - 2.50000000, l_U716._fU0 + 2.50000000, l_U716._fU4 + 2.50000000, l_U716._fU8 + 2.50000000 ))
                {
                    CLEAR_AREA( l_U716._fU0, l_U716._fU4, l_U716._fU8, 5, 1 );
                }
            }
            WAIT( 0 );
        }
    }
    CLEAR_HELP();
    CLEAR_PRINTS();
    sub_7183( 1, 1 );
    iVar3 = 1;
    SETTIMERA( 0 );
    iVar3 = GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" );
    while ((iVar3 != 0) AND (TIMERA() < 4000))
    {
        iVar3 = GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" );
        WAIT( 0 );
    }
    sub_7866();
    GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref l_U667 );
    if ((l_U667 > 75) AND (g_U39123 == 1))
    {
        l_U1061 = 1;
    }
    sub_8202();
    sub_8641();
    sub_8697();
    GET_CHAR_COORDINATES( sub_5968(), ref l_U716._fU0, ref l_U716._fU4, ref l_U716._fU8 );
    CLEAR_AREA_OF_COPS( l_U716._fU0, l_U716._fU4, l_U716._fU8, 1000 );
    l_U666 = 0;
    l_U617 = 1;
    while (l_U617)
    {
        switch (l_U666)
        {
            case 0:
            sub_8928();
            break;
            case 1:
            sub_50664();
            break;
            case 2:
            sub_82168();
            break;
            case 3:
            sub_83549();
            break;
            case -1: break;
        }
        WAIT( 0 );
        if (l_U619 == 1)
        {
            CLEAR_HELP();
            sub_92452();
        }
        else if (l_U618 == 1)
        {
            CLEAR_HELP();
            sub_97710();
        }
    }
    sub_2433();
    return;
}

void sub_1150()
{
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_1181( l_U602, l_U616 );
        sub_1239( 1 );
        sub_1239( 2 );
        sub_1239( 3 );
        if ((g_U15728[8] == 1) || (g_U12306[1]._fU108 == 1))
        {
            sub_1239( 4 );
        }
        sub_1891();
        sub_2057();
        sub_2079();
        g_U39124 = 0;
        l_U618 = 1;
        l_U666 = -1;
        sub_2433();
    }
    return;
}

void sub_1181(unknown uParam0, unknown uParam1)
{
    g_U15862[uParam0]._fU228._fU12[uParam1] = 2;
    g_U15862[uParam0]._fU228._fU0 = 2;
    return;
}

void sub_1239(unknown uParam0)
{
    if (NOT g_U1)
    {
        return;
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_1262( uParam0 ) );
    return;
}

int sub_1262(unknown uParam0)
{
    int iVar3;
    unknown uVar4;

    iVar3 = sub_1273( uParam0 );
    if (iVar3 == -1)
    {
        return 1439613707;
    }
    uVar4 = g_U38937[iVar3]._fU20;
    switch (uVar4)
    {
        case 0: return 1914397972;
        case 1: return -2138439183;
        case 2: return 1215631816;
        case 3: return 1706970202;
        case 4: return 717510247;
        case 5: return 965080042;
        case 6: return 693982133;
        case 7: return 454735664;
        case 8: return 1409362172;
        case 9: return 767450539;
        case 10: return 1686719296;
        case 11: return 1917871822;
        case 12: return 422524045;
    }
    SCRIPT_ASSERT( "Return_Recurring_Lost_Model: Required arrayPos is greater than number of Recurrign Lost characters" );
    return 1914397972;
}

int sub_1273(int iParam0)
{
    int iVar3;
    int Result;

    iVar3 = 0;
    Result = 0;
    for ( Result = 0; Result < 13; Result++ )
    {
        if ((g_U38937[Result]._fU0) || (g_U38937[Result]._fU4))
        {
            iVar3++;
            if (iVar3 == iParam0)
            {
                return Result;
            }
        }
    }
    SCRIPT_ASSERT( "Get_Recurring_Lost_ArrayPos: Run out of alive Recurring Lost characters" );
    return -1;
}

void sub_1891()
{
    int I;

    I = 0;
    for ( I = 0; I < 13; I++ )
    {
        if (g_U38937[I]._fU4)
        {
            g_U38937[I]._fU0 = 1;
            g_U38937[I]._fU4 = 0;
        }
    }
    for ( I = 0; I < 6; I++ )
    {
        if (g_U39058[I]._fU4)
        {
            g_U39058[I]._fU0 = 1;
            g_U39058[I]._fU4 = 0;
        }
    }
    g_U39102 = 0;
    return;
}

void sub_2057()
{
    sub_1891();
    return;
}

void sub_2079()
{
    sub_2088();
    sub_2233();
    return;
}

void sub_2088()
{
    if (l_U18)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED KILL_CHASE_HINT_CAM()" );
    }
    if (IS_HINT_RUNNING())
    {
        HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
    }
    l_U16 = 0;
    l_U15 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_2233()
{
    int iVar2;

    if (DOES_CAM_EXIST( l_U19 ))
    {
        BEGIN_CAM_COMMANDS( ref iVar2 );
        if (iVar2 != 1)
        {
            ;
        }
        else
        {
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_CAM_PROPAGATE( l_U19, 0 );
            SET_CAM_ACTIVE( l_U19, 0 );
            DESTROY_CAM( l_U19 );
            l_U19 = nil;
            l_U20 = -1;
            l_U32 = 0;
            if (IS_CONTROL_PRESSED( 0, 51 ))
            {
                GET_GAME_TIMER( ref l_U32 );
            }
            else
            {
                l_U32 = 0;
            }
            SET_GAME_CAMERA_CONTROLS_ACTIVE( 1 );
            SET_CINEMATIC_BUTTON_ENABLED( 1 );
        }
        END_CAM_COMMANDS( ref iVar2 );
    }
    return;
}

void sub_2433()
{
    int I;
    int iVar3;

    PRINTSTRING( "\n*\n*\n ----> CLEANUP <---- \n*\n*\n" );
    sub_2483();
    sub_2563();
    sub_2643();
    sub_2719();
    DESTROY_ALL_CAMS();
    ENABLE_SCENE_STREAMING( 1 );
    MARK_STREAMED_TXD_AS_NO_LONGER_NEEDED( "GangWar" );
    g_U10956 = 0;
    g_U2771 = 0;
    SET_CREATE_RANDOM_COPS( 1 );
    sub_2873( 1 );
    g_U10460 = 1;
    sub_2943( ref g_U18635[6]._fU300[0]._fU64, 1, 0, 0 );
    sub_2943( ref g_U18635[7]._fU300[0]._fU64, 1, 0, 0 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    sub_2079();
    if (NOT (IS_CAR_DEAD( l_U1010[0] )))
    {
        LOCK_CAR_DOORS( l_U1010[0], 1 );
    }
    I = 0;
    for ( I = 0; I <= 27; I++ )
    {
        if (DOES_BLIP_EXIST( l_U1015[I] ))
        {
            REMOVE_BLIP( l_U1015[I] );
        }
        if (NOT (IS_CHAR_DEAD( l_U809[I] )))
        {
            SET_CHAR_KEEP_TASK( l_U809[I], 1 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U809[I] );
        }
    }
    for ( I = 0; I <= 11; I++ )
    {
        if (DOES_BLIP_EXIST( l_U796[I] ))
        {
            REMOVE_BLIP( l_U796[I] );
        }
        if (NOT (IS_CHAR_DEAD( l_U783[I] )))
        {
            SET_CHAR_KEEP_TASK( l_U783[I], 1 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U783[I] );
        }
    }
    l_U838[0] = sub_3888( ref l_U845[0] );
    l_U838[2] = sub_3888( ref l_U845[1] );
    l_U838[4] = sub_3888( ref l_U845[2] );
    for ( I = 0; I <= 5; I++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U838[I] )))
        {
            sub_4001( ref l_U845[I], 3 );
            sub_4036( ref l_U845[I], 1 );
        }
    }
    for ( I = 0; I <= 5; I++ )
    {
        if (DOES_BLIP_EXIST( l_U1044[I] ))
        {
            REMOVE_BLIP( l_U1044[I] );
        }
        if (NOT (IS_CHAR_DEAD( l_U838[I] )))
        {
            CLEAR_CHAR_TASKS( l_U838[I] );
            SET_CHAR_KEEP_TASK( l_U838[I], 1 );
            GET_CHAR_COORDINATES( l_U838[I], ref l_U722._fU0, ref l_U722._fU4, ref l_U722._fU8 );
            if (((I == 0) || (I == 2)) || (I == 4))
            {
                iVar3 = 0;
                if (I == 0)
                {
                    iVar3 = 0;
                }
                else if (I == 2)
                {
                    iVar3 = 1;
                }
                else if (I == 4)
                {
                    iVar3 = 2;
                };;;
                if (NOT (IS_CHAR_INJURED( l_U838[I] )))
                {
                    if (NOT (IS_CAR_DEAD( l_U1010[iVar3] )))
                    {
                        if (NOT (IS_CHAR_IN_CAR( l_U838[I], l_U1010[iVar3] )))
                        {
                            if (LOCATE_CAR_3D( l_U1010[iVar3], l_U722._fU0, l_U722._fU4, l_U722._fU8, 25.00000000, 25.00000000, 8.00000000, 0 ))
                            {
                                OPEN_SEQUENCE_TASK( ref l_U1086 );
                                TASK_ENTER_CAR_AS_DRIVER( 0, l_U1010[iVar3], 20000 );
                                TASK_CAR_MISSION_COORS_TARGET( 0, l_U1010[iVar3], l_U722._fU0, l_U722._fU4, l_U722._fU8, 8, 30.00000000, 2, 200, 5 );
                                CLOSE_SEQUENCE_TASK( l_U1086 );
                                TASK_PERFORM_SEQUENCE( l_U838[I], l_U1086 );
                                CLEAR_SEQUENCE_TASK( l_U1086 );
                            }
                            else
                            {
                                TASK_SMART_FLEE_POINT( l_U838[I], l_U722._fU0, l_U722._fU4, l_U722._fU8, 200, -1 );
                            }
                        }
                        else
                        {
                            TASK_CAR_MISSION_COORS_TARGET( l_U838[I], l_U1010[iVar3], l_U722._fU0, l_U722._fU4, l_U722._fU8, 8, 30.00000000, 2, 200, 5 );
                        }
                    }
                    else
                    {
                        TASK_SMART_FLEE_POINT( l_U838[I], l_U722._fU0, l_U722._fU4, l_U722._fU8, 200, -1 );
                    }
                }
            }
            else if (NOT (IS_CHAR_INJURED( l_U838[I] )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( l_U838[I] )))
                {
                    TASK_SMART_FLEE_POINT( l_U838[I], l_U722._fU0, l_U722._fU4, l_U722._fU8, 200, -1 );
                }
            }
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U838[I] );
        }
    }
    if (DOES_VEHICLE_EXIST( l_U1014 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U1014 );
    }
    for ( I = 0; I <= 27; I++ )
    {
        if (DOES_BLIP_EXIST( l_U1015[I] ))
        {
            REMOVE_BLIP( l_U1015[I] );
        }
    }
    for ( I = 0; I <= 11; I++ )
    {
        if (DOES_BLIP_EXIST( l_U796[I] ))
        {
            REMOVE_BLIP( l_U796[I] );
        }
    }
    if (DOES_BLIP_EXIST( l_U1051 ))
    {
        REMOVE_BLIP( l_U1051 );
    }
    if (DOES_BLIP_EXIST( l_U1064 ))
    {
        REMOVE_BLIP( l_U1064 );
    }
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    sub_5216( l_U602 );
    sub_5265( l_U602 );
    sub_5309();
    PRINTSTRING( "\n*\n ----> BACKUP ACTIVATED <---- \n*\n" );
    sub_7183( 0, 1 );
    PRINTSTRING( "\n*\n ----> BACKUP DISMISSED <---- \n*\n" );
    if (DOES_VEHICLE_EXIST( l_U1010[0] ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U1010[0] );
    }
    g_U39122 = 0;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2483()
{
    int I;

    if (l_U1117 != 0)
    {
        for ( I = 0; I <= (l_U1117 - 1); I++ )
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1104[I] );
        }
    }
    l_U1117 = 0;
    return;
}

void sub_2563()
{
    int I;

    if (l_U1120 != 0)
    {
        for ( I = 0; I <= (l_U1120 - 1); I++ )
        {
            REMOVE_ANIMS( l_U1118[I] );
        }
    }
    l_U1120 = 0;
    return;
}

void sub_2643()
{
    int I;

    for ( I = 0; I <= 0; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U1121[I] ))
        {
            MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U1121[I] );
        }
    }
    return;
}

void sub_2719()
{
    REMOVE_DECISION_MAKER( l_U1054 );
    REMOVE_DECISION_MAKER( l_U1053 );
    REMOVE_DECISION_MAKER( l_U1052 );
    REMOVE_DECISION_MAKER( l_U1055 );
    REMOVE_DECISION_MAKER( l_U1056 );
    REMOVE_DECISION_MAKER( l_U1057 );
    REMOVE_DECISION_MAKER( l_U1058 );
    return;
}

void sub_2873(boolean bParam0)
{
    if (bParam0)
    {
        g_U11116 = 0;
    }
    else
    {
        g_U11116 = 1;
    }
    return;
}

void sub_2943(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_2996( iParam0, uParam1, uParam2 );
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
        sub_3128( iParam0 + 0 );
    }
    return;
}

void sub_2996(int iParam0, int iParam1, int iParam2)
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
        sub_3128( iParam0 + 0 );
    }
    return;
}

void sub_3128(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_3159( iParam0->_fU4 )))
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

int sub_3159(unknown uParam0)
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

void sub_3888(int iParam0)
{
    return iParam0->_fU0;
}

void sub_4001(int iParam0, unknown uParam1)
{
    iParam0->_fU36 = uParam1;
    return;
}

void sub_4036(int iParam0, unknown uParam1)
{
    if (DOES_BLIP_EXIST( iParam0->_fU100 ))
    {
        REMOVE_BLIP( iParam0->_fU100 );
    }
    if ((DOES_VEHICLE_EXIST( iParam0->_fU4 )) AND (uParam1))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( iParam0 + 4 );
    }
    if (DOES_CHAR_EXIST( iParam0->_fU0 ))
    {
        if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
        {
            if (IS_PED_IN_GROUP( iParam0->_fU0 ))
            {
                REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
            }
            SET_CHAR_KEEP_TASK( iParam0->_fU0, 1 );
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( iParam0 + 0 );
    }
    iParam0->_fU0 = nil;
    iParam0->_fU4 = nil;
    iParam0->_fU8 = nil;
    iParam0->_fU12 = nil;
    iParam0->_fU36 = 4;
    return;
}

void sub_5216(int iParam0)
{
    if (g_U94._fU68 == iParam0)
    {
        g_U94._fU68 = -1;
    }
    return;
}

void sub_5265(int iParam0)
{
    if (g_U94._fU72 == iParam0)
    {
        g_U94._fU72 = -1;
    }
    return;
}

void sub_5309()
{
    sub_5318();
    sub_5342( 0 );
    return;
}

void sub_5318()
{
    g_U11090 = 1;
    return;
}

void sub_5342(unknown uParam0)
{
    int I;

    for ( I = 0; I < 2; I++ )
    {
        sub_5374( g_U11081[I], uParam0 );
    }
    return;
}

void sub_5374(int iParam0, boolean bParam1)
{
    int I;
    int iVar5;

    if (bParam1)
    {
        if (sub_5390())
        {
            if (NOT sub_5448())
            {
                sub_5318();
            }
        }
    }
    if (DOES_CHAR_EXIST( iParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( iParam0 )))
        {
            for ( I = 0; I < 2; I++ )
            {
                if (g_U11028[I]._fU0 == iParam0)
                {
                    iVar5 = I;
                }
            }
            if (bParam1)
            {
                sub_5602( ref g_U11028[iVar5], ref g_U11081[iVar5], ref g_U11087[iVar5] );
            }
            else if (IS_PLAYER_PLAYING( sub_5899() ))
            {
                CLEAR_CHAR_TASKS( g_U11028[iVar5]._fU0 );
                sub_6009( ref g_U11028[iVar5], sub_5968() );
                if (g_U11090)
                {
                    sub_7015( ref g_U11028[iVar5], 4 );
                }
            }
            g_U11117[iVar5] = bParam1;
        }
    }
    return;
}

int sub_5390()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" )) > 0)
    {
        return 1;
    }
    return 0;
}

void sub_5448()
{
    if (NOT sub_5390())
    {
        return 0;
    }
    return g_U11090;
}

void sub_5602(int iParam0, unknown uParam1, unknown uParam2)
{
    (uParam1^) = iParam0->_fU0;
    (uParam2^) = iParam0->_fU4;
    iParam0->_fU36 = 0;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
        if (IS_VEH_DRIVEABLE( sub_5667( iParam0 ) ))
        {
            SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
        }
        if (iParam0->_fU0 == g_U11197)
        {
            g_U11197 = nil;
        }
        if (iParam0->_fU0 == g_U11198)
        {
            g_U11198 = nil;
        }
        if ((iParam0->_fU0 != g_U11081[0]) AND (iParam0->_fU0 != g_U11081[1]))
        {
            g_U11114 = 1;
        }
        TASK_STAND_STILL( iParam0->_fU0, -2 );
    }
    return;
}

void sub_5667(int iParam0)
{
    unknown Result;
    int iVar4;

    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref Result );
        if (IS_VEH_DRIVEABLE( Result ))
        {
            GET_DRIVER_OF_CAR( Result, ref iVar4 );
            if (iVar4 == iParam0->_fU0)
            {
                return Result;
            }
        }
    }
    return nil;
}

void sub_5899()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_5968()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_6009(int iParam0, int iParam1)
{
    unknown uVar4;
    unknown uVar5;
    int iVar6;

    if (IS_CHAR_INJURED( iParam1 ))
    {
        return;
    }
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                if (sub_6105( iParam0->_fU0, uVar4 ))
                {
                    if (NOT (IS_CHAR_IN_CAR( iParam1, uVar4 )))
                    {
                        return;
                    }
                }
            }
        }
    }
    if ((iParam0->_fU8 == sub_5968()) AND (iParam1 != sub_5968()))
    {
        if (iParam0->_fU0 == g_U11198)
        {
            g_U11198 = nil;
        }
        if (iParam0->_fU0 == g_U11197)
        {
            g_U11197 = nil;
        }
    }
    if ((iParam0->_fU0 != g_U11081[0]) AND (iParam0->_fU0 != g_U11081[1]))
    {
        if (DOES_CHAR_EXIST( g_U11197 ))
        {
            if ((g_U11197 == g_U11081[0]) || (g_U11197 == g_U11081[1]))
            {
                g_U11197 = nil;
            }
        }
        if (DOES_CHAR_EXIST( g_U11198 ))
        {
            if ((g_U11198 == g_U11081[0]) || (g_U11198 == g_U11081[1]))
            {
                g_U11198 = nil;
            }
        }
        g_U11114 = 1;
    }
    if ((NOT (IS_CHAR_INJURED( iParam0->_fU0 ))) AND ((iParam0->_fU8 != iParam1) || (iParam0->_fU36 != 1)))
    {
        TASK_PAUSE( iParam0->_fU0, 30 );
    }
    iParam0->_fU8 = iParam1;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (IS_PED_IN_GROUP( iParam0->_fU0 ))
        {
            GET_PED_GROUP_INDEX( iParam0->_fU0, ref uVar5 );
            GET_GROUP_LEADER( uVar5, ref iVar6 );
            if (DOES_GROUP_EXIST( uVar5 ))
            {
                GET_GROUP_LEADER( uVar5, ref iVar6 );
                if (iVar6 != iParam0->_fU8)
                {
                    REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
                }
            }
        }
        sub_4001( iParam0, 1 );
        if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
        {
            SET_CHAR_DEFENSIVE_AREA_ATTACHED_TO_PED( iParam0->_fU0, iParam0->_fU8, 0, 2, -2, 0, 65516, 5, 20, 1 );
        }
        if (iParam0->_fU8 == sub_5968())
        {
            if (NOT (DOES_CHAR_EXIST( g_U11198 )))
            {
                sub_6684( iParam0, 0 );
            }
            else if (IS_CHAR_INJURED( g_U11198 ))
            {
                sub_6684( iParam0, 0 );
            }
            else if (NOT (g_U11198 == iParam0->_fU0))
            {
                if (NOT (DOES_CHAR_EXIST( g_U11197 )))
                {
                    sub_6684( iParam0, 1 );
                }
                else if (IS_CHAR_INJURED( g_U11197 ))
                {
                    sub_6684( iParam0, 1 );
                }
                else if (NOT (g_U11197 == iParam0->_fU0))
                {
                    sub_6684( iParam0, 2 );
                };;;
            };;;
        }
    }
    return;
}

boolean sub_6105(unknown uParam0, unknown uParam1)
{
    return (IS_CHAR_SITTING_IN_CAR( uParam0, uParam1 )) AND (NOT (sub_6129( uParam0, uParam1 )));
}

boolean sub_6129(int iParam0, unknown uParam1)
{
    int iVar4;

    GET_DRIVER_OF_CAR( uParam1, ref iVar4 );
    return iVar4 == iParam0;
}

void sub_6684(int iParam0, int iParam1)
{
    if (iParam0->_fU8 == sub_5968())
    {
        if (iParam1 == 1)
        {
            g_U11197 = iParam0->_fU0;
            if (g_U11198 == iParam0->_fU0)
            {
                g_U11198 = nil;
            }
        }
        if (iParam1 == 0)
        {
            g_U11198 = iParam0->_fU0;
            if (g_U11197 == iParam0->_fU0)
            {
                g_U11197 = nil;
            }
        }
    }
    if ((iParam0->_fU0 != g_U11081[0]) AND (iParam0->_fU0 != g_U11081[1]))
    {
        g_U11114 = 1;
    }
    iParam0->_fU40 = iParam1;
    return;
}

void sub_7015(int iParam0, int iParam1)
{
    iParam0->_fU88 = (iParam0->_fU88) || (iParam1);
    if (iParam1 == 1)
    {
        if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
        {
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 1 );
        }
    }
    return;
}

void sub_7183(boolean bParam0, unknown uParam1)
{
    if ((NOT g_U11094) AND (NOT g_U11093))
    {
        if (bParam0)
        {
            g_U11092 = 1;
        }
        else
        {
            g_U11091 = 1;
        }
        g_U11098 = uParam1;
    }
    return;
}

void sub_7866()
{
    sub_7884( "GWAUD", 6 );
    sub_7884( "JIMGANG", 0 );
    while (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( "GWAUD", 6 )))
    {
        REQUEST_ADDITIONAL_TEXT( "GWAUD", 6 );
        WAIT( 0 );
    }
    while (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( "JIMGANG", 0 )))
    {
        REQUEST_ADDITIONAL_TEXT( "JIMGANG", 0 );
        WAIT( 0 );
    }
    return;
}

void sub_7884(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_7920())
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

int sub_7920()
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

void sub_8202()
{
    sub_8219( "GWAUD" );
    sub_8348( 0, sub_5968(), "Johnny", 0 );
    l_U592 = sub_5968();
    l_U593 = sub_5899();
    while (NOT sub_8517())
    {
        WAIT( 0 );
    }
    l_U602 = g_U26739._fU0;
    return;
}

void sub_8219(unknown uParam0)
{
    StrCopy( ref l_U34._fU0, uParam0, 16 );
    sub_8238();
    return;
}

void sub_8238()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U34._fU16[I]._fU0 = nil;
        StrCopy( ref l_U34._fU16[I]._fU4, "", 32 );
        l_U34._fU344[I] = 0;
    }
    return;
}

void sub_8348(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U34._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U34._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_8432( "\n PED NUMBER ", uParam0 );
    sub_8472( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_8432(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_8472(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_8517()
{
    int I;

    if (l_U1117 != 0)
    {
        for ( I = 0; I <= (l_U1117 - 1); I++ )
        {
            if (NOT (HAS_MODEL_LOADED( l_U1104[I] )))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_8641()
{
    l_U1100[0] = -571009320;
    l_U1100[1] = 2006142190;
    l_U1100[2] = -359167535;
    return;
}

void sub_8697()
{
    l_U1092[0] = 977480632;
    l_U1092[1] = -1159156463;
    l_U1092[2] = 479817841;
    l_U1092[3] = 226415164;
    l_U1092[4] = 15972646;
    l_U1092[5] = -2107556865;
    return;
}

void sub_8928()
{
    unknown uVar2;

    if (l_U642 == 0)
    {
        GET_CHAR_COORDINATES( l_U592, ref l_U716._fU0, ref l_U716._fU4, ref l_U716._fU8 );
        CLEAR_AREA( l_U716._fU0, l_U716._fU4, l_U716._fU8, 5, 1 );
        sub_9010();
        if (l_U602 == 6)
        {
            l_U743 = {l_U737};
        }
        else if (l_U602 == 7)
        {
            l_U743 = {l_U734};
        }
        else
        {
            l_U743 = {l_U731};
        }
        g_U39222 = {l_U743};
        l_U642 = 1;
    }
    sub_10832();
    sub_7866();
    if (NOT (IS_CHAR_DEAD( l_U592 )))
    {
        SET_CHAR_HEADING( l_U592, l_U751 );
        SET_CHAR_COORDINATES( l_U592, l_U740._fU0, l_U740._fU4, l_U740._fU8 );
        if (sub_11003( sub_5968() ))
        {
            uVar2 = sub_11079( sub_5968() );
            if (DOES_VEHICLE_EXIST( uVar2 ))
            {
                if (IS_VEH_DRIVEABLE( uVar2 ))
                {
                    SET_CAR_ON_GROUND_PROPERLY( uVar2 );
                }
            }
        }
    }
    SET_GAME_CAM_HEADING( 0.00000000 );
    sub_11179();
    sub_12453();
    sub_20437();
    l_U641 = 1;
    sub_20632();
    l_U838[0] = sub_3888( ref l_U845[0] );
    sub_12719( 1 );
    sub_41022();
    sub_41539();
    sub_41757();
    sub_2873( 0 );
    sub_44285();
    CLEAR_HELP();
    SETTIMERA( 0 );
    l_U725 = {l_U731};
    GET_RANDOM_CAR_NODE( l_U725, 700.00000000, 1, 1, 1, ref l_U719, ref l_U668 );
    while (((LOCATE_CHAR_ANY_MEANS_3D( l_U592, l_U719._fU0, l_U719._fU4, l_U719._fU8, 350, 350, 350, 0 )) || (l_U719._fU8 < 0)) AND (TIMERA() < 10000))
    {
        GET_RANDOM_CAR_NODE( l_U725, 700.00000000, 1, 1, 1, ref l_U719, ref l_U668 );
        WAIT( 0 );
        sub_45277();
    }
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 500 );
    }
    sub_5309();
    if (NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 )))
    {
        sub_6009( ref g_U11028[0], l_U592 );
        sub_6684( ref g_U11028[0], 0 );
        if (NOT (IS_CHAR_INJURED( l_U845[0]._fU0 )))
        {
            sub_6009( ref l_U845[0], g_U11028[0]._fU0 );
            sub_6684( ref l_U845[0], 1 );
        }
    }
    else if (NOT (IS_CHAR_INJURED( l_U845[0]._fU0 )))
    {
        sub_6009( ref l_U845[0], l_U592 );
        sub_6684( ref l_U845[0], 2 );
    }
    if (NOT (IS_CHAR_INJURED( g_U11028[1]._fU0 )))
    {
        sub_6009( ref g_U11028[1], l_U592 );
        sub_6684( ref g_U11028[1], 1 );
    }
    sub_48435();
    SET_PLAYER_CONTROL_ADVANCED( sub_5899(), 1, 1, 1 );
    l_U612 = GET_MAP_AREA_FROM_COORDS( l_U719 );
    sub_20437();
    sub_48510();
    StrCopy( ref l_U603[0], "E1FCT3_BNLJ", 16 );
    StrCopy( ref l_U603[1], "E1FCT3_BNLB", 16 );
    if (l_U706 == 0)
    {
        sub_48727();
    }
    else if (l_U706 == 1)
    {
        sub_48956();
    }
    else
    {
        sub_49173();
    }
    sub_48510();
    if (l_U706 == 0)
    {
        sub_49402();
    }
    else if (l_U706 == 1)
    {
        sub_49751();
    }
    else
    {
        sub_50088();
    }
    sub_50428( ref l_U603, ref l_U752, 7, 1 );
    g_U10460 = 0;
    SET_CAR_DENSITY_MULTIPLIER( 0.40000000 );
    sub_2563();
    PRINTSTRING( "\n*\n ----> BACKUP ACTIVATED <---- \n*\n" );
    if ((DOES_VEHICLE_EXIST( l_U1014 )) AND (NOT (IS_CAR_DEAD( l_U1014 ))))
    {
        if (IS_CHAR_IN_CAR( l_U592, l_U1014 ))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U1014 );
        }
    }
    g_U2771 = 1;
    l_U666++;
    return;
}

void sub_9010()
{
    if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, -1018.00000000, 1299.00000000, 24.72840000, 20, 20, 20, 0 ))
    {
        l_U731 = {-1018.00000000, 1299.00000000, 24.72840000};
        l_U734 = {-1019.52000000, 1301.84400000, 24.75550000};
        l_U737 = {-1019.19800000, 1303.72300000, 24.74510000};
        l_U748 = 298.73830000;
        l_U749 = 267.47010000;
        l_U750 = 275.98100000;
        l_U740 = {-1018.25100000, 1300.58700000, 24.71440000};
        l_U751 = 290.64990000;
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, -1520.37500000, 654.83600000, 23.93500000, 20, 20, 20, 0 ))
    {
        l_U731 = {-1723.20000000, 358.34680000, 24.44400000};
        l_U734 = {-1726.16200000, 355.13320000, 24.44400000};
        l_U737 = {-1723.98400000, 353.91440000, 24.44400000};
        l_U748 = 339.29860000;
        l_U749 = 317.08660000;
        l_U750 = 341.32020000;
        l_U740 = {-1520.37500000, 654.83600000, 23.93500000};
        l_U751 = 337.61610000;
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, -1249.56600000, -287.56780000, 2.26780000, 20, 20, 20, 0 ))
    {
        l_U731 = {-1249.56600000, -287.56780000, 2.26780000};
        l_U734 = {-1251.41500000, -285.16510000, 2.26780000};
        l_U737 = {-1262.60900000, -290.51320000, 2.26780000};
        l_U748 = 83.74900000;
        l_U749 = 138.95080000;
        l_U750 = 287.24300000;
        l_U740 = {-1250.38300000, -288.56790000, 2.26780000};
        l_U751 = 99.50900000;
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, -120.46630000, 1428.77600000, 19.41560000, 20, 20, 20, 0 ))
    {
        l_U731 = {-70.75950000, 1525.68900000, 17.44460000};
        l_U734 = {-73.56910000, 1527.75800000, 17.54800000};
        l_U737 = {-68.10390000, 1524.00000000, 17.41950000};
        l_U748 = 304.75100000;
        l_U749 = 317.32300000;
        l_U750 = 283.52590000;
        l_U740 = {-120.46630000, 1428.77600000, 19.41560000};
        l_U751 = 179.22220000;
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, -347.40990000, 643.33900000, 13.61330000, 20, 20, 20, 0 ))
    {
        l_U731 = {-347.40990000, 643.33900000, 13.61330000};
        l_U734 = {-344.05540000, 640.53090000, 13.79580000};
        l_U737 = {-347.50660000, 647.35620000, 13.61320000};
        l_U748 = 119.95330000;
        l_U749 = 50.62960000;
        l_U750 = 146.08380000;
        l_U740 = {-342.66310000, 636.32290000, 13.80300000};
        l_U751 = 133.27190000;
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, 151.08310000, -391.72350000, 13.75050000, 20, 20, 20, 0 ))
    {
        l_U731 = {151.08310000, -391.72350000, 13.75050000};
        l_U734 = {149.91700000, -390.62040000, 13.75050000};
        l_U737 = {152.02820000, -393.47380000, 13.75050000};
        l_U748 = 132.60530000;
        l_U749 = 108.09920000;
        l_U750 = 152.61750000;
        l_U740 = {151.63360000, -388.32460000, 13.75420000};
        l_U751 = 125.69640000;
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, 425.74800000, 1521.55600000, 15.59500000, 20, 20, 20, 0 ))
    {
        l_U731 = {813.99070000, 1575.27700000, 16.89010000};
        l_U734 = {816.50760000, 1574.44600000, 16.76850000};
        l_U737 = {810.14980000, 1576.15800000, 17.01150000};
        l_U748 = 303.69770000;
        l_U749 = 347.21460000;
        l_U750 = 300.00340000;
        l_U740 = {425.74800000, 1521.55600000, 15.59500000};
        l_U751 = 44.10210000;
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, 813.99070000, 1575.27700000, 16.89010000, 20, 20, 20, 0 ))
    {
        l_U731 = {813.99070000, 1575.27700000, 16.89010000};
        l_U734 = {816.50760000, 1574.44600000, 16.76850000};
        l_U737 = {810.14980000, 1576.15800000, 17.01150000};
        l_U748 = 303.69770000;
        l_U749 = 347.21460000;
        l_U750 = 300.00340000;
        l_U740 = {821.13190000, 1579.15300000, 16.42320000};
        l_U751 = 335.07740000;
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, 1346.20300000, 545.29910000, 29.39200000, 20, 20, 20, 0 ))
    {
        l_U731 = {1346.20300000, 545.29910000, 29.39260000};
        l_U734 = {1346.00400000, 542.75000000, 29.16860000};
        l_U737 = {1346.14600000, 549.22720000, 29.73780000};
        l_U748 = 73.96130000;
        l_U749 = 40.73380000;
        l_U750 = 148.86500000;
        l_U740 = {1344.76300000, 537.68550000, 28.72320000};
        l_U751 = 87.23530000;
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, 879.65420000, -478.55340000, 13.98490000, 20, 20, 20, 0 ))
    {
        l_U731 = {879.65420000, -478.55340000, 13.98490000};
        l_U734 = {877.92700000, -478.89370000, 13.92470000};
        l_U737 = {876.62050000, -478.51970000, 13.89730000};
        l_U748 = 332.91490000;
        l_U749 = 328.59880000;
        l_U750 = 336.32590000;
        l_U740 = {879.64480000, -477.59940000, 13.97320000};
        l_U751 = 358.62180000;
    };;;;;;;;;;
    return;
}

void sub_10832()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_gun_car" )) > 0)
    {
        g_U11219 = 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_vehicle" )) > 0)
    {
        g_U11226 = 1;
    }
    return;
}

int sub_11003(int iParam0)
{
    unknown uVar3;
    int iVar4;

    if (IS_CHAR_IN_ANY_CAR( iParam0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0, ref uVar3 );
        GET_DRIVER_OF_CAR( uVar3, ref iVar4 );
        if (iParam0 == iVar4)
        {
            return 1;
        }
    }
    return 0;
}

void sub_11079(unknown uParam0)
{
    unknown Result;

    if (IS_CHAR_IN_ANY_CAR( uParam0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref Result );
        return Result;
    }
    return nil;
}

void sub_11179()
{
    # -sub_C1FFC0-0xc214c8( 2, ref l_U1054 );
    # -sub_C1FFC0-0xc214c8( 3, ref l_U1053 );
    # -sub_C1FFC0-0xc214c8( 1, ref l_U1052 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U1055 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U1055, 0 );
    LOAD_COMBAT_DECISION_MAKER( 10, ref l_U1056 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U1056, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_CAUTION( l_U1056, 2 );
    LOAD_COMBAT_DECISION_MAKER( 9, ref l_U1057 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U1057, 0 );
    LOAD_COMBAT_DECISION_MAKER( 1, ref l_U1058 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U1058, 0 );
    sub_11338( 1 );
    sub_11338( 2 );
    sub_11338( 3 );
    sub_11382( 6 );
    sub_11382( 7 );
    sub_11754( 6 );
    sub_11754( 7 );
    if ((g_U15728[8] == 1) || (g_U12306[1]._fU108 == 1))
    {
        sub_11338( 4 );
    }
    else
    {
        l_U1091 = sub_11393( 1 );
        sub_12039( l_U1091 );
        l_U1099 = sub_11754( 1 );
        sub_12039( l_U1099 );
        SUPPRESS_CAR_MODEL( l_U1099 );
    }
    LOAD_ALL_OBJECTS_NOW();
    while (NOT sub_8517())
    {
        WAIT( 0 );
        if ((g_U15728[8] == 0) AND (g_U12306[1]._fU108 == 0))
        {
            if (NOT (HAS_MODEL_LOADED( l_U1091 )))
            {
                REQUEST_MODEL( l_U1091 );
            }
            if (NOT (HAS_MODEL_LOADED( l_U1099 )))
            {
                REQUEST_MODEL( l_U1099 );
            }
        }
        PRINTSTRING( "\n -----> Waiting for models to load...\n\n" );
    }
    while (((NOT (sub_12298( 1 ))) AND (NOT (sub_12298( 2 )))) AND (NOT (sub_12298( 3 ))))
    {
        sub_11338( 1 );
        sub_11338( 2 );
        sub_11338( 3 );
        WAIT( 0 );
    }
    if ((g_U15728[8] == 1) || (g_U12306[1]._fU108 == 1))
    {
        while (NOT (sub_12298( 4 )))
        {
            sub_11338( 4 );
            WAIT( 0 );
        }
    }
    return;
}

void sub_11338(unknown uParam0)
{
    REQUEST_MODEL( sub_1262( uParam0 ) );
    return;
}

void sub_11382(unknown uParam0)
{
    REQUEST_MODEL( sub_11393( uParam0 ) );
    return;
}

int sub_11393(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -451718857;
        case 1: return 870892404;
        case 2: return -411638179;
        case 3: return -727962858;
        case 4: return -900623157;
        case 5: return 954215094;
        case 6: return 1728056212;
        case 7: return 1825562762;
        case 8: return -411638179;
        case 16: return 170756246;
        case 17: return -73790512;
        case 13: return 349841464;
        case 15: return -239294183;
    }
    sub_11692( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_11692(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_11754(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -359167535;
        case 1: return -570033273;
        case 6: return -408052231;
        case 7: return -408052231;
        case 13: return -408052231;
        case 16: return -408052231;
        case 17: return -255678177;
        case 15: return -1759858085;
    }
    SCRIPT_ASSERT( "Return_Contact_Vehicle_Model: Unknown Contact ID\n" );
    return -570033273;
}

void sub_12039(unknown uParam0)
{
    REQUEST_MODEL( uParam0 );
    l_U1104[l_U1117] = uParam0;
    l_U1117++;
    return;
}

void sub_12298(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_1262( uParam0 ) );
}

void sub_12453()
{
    int I;

    PRINTSTRING( "\n*\n ----> CREATE BACKUP <---- \n*\n" );
    sub_12528( l_U734, l_U749, l_U737, l_U750, 1 );
    if ((g_U15728[8] == 1) || (g_U12306[1]._fU108 == 1))
    {
        while (NOT (sub_12938( 4, l_U731, l_U748, ref l_U845[0] )))
        {
            WAIT( 0 );
        }
    }
    else
    {
        sub_17889( l_U731, l_U748, l_U1091, l_U1099, ref l_U845[0], 1 );
        sub_18244( 1 );
    }
    SETTIMERA( 0 );
    PRINTSTRING( "\n*\n ----> START WAITING FOR TERRY AND CLAY TO BE CREATED <---- \n*\n" );
    while (((NOT (DOES_VEHICLE_EXIST( g_U11087[0] ))) || (NOT (DOES_VEHICLE_EXIST( g_U11087[1] )))) AND (TIMERA() < 5000))
    {
        WAIT( 0 );
    }
    PRINTSTRING( "\n*\n ----> END WAITING FOR TERRY AND CLAY TO BE CREATED <---- \n*\n" );
    sub_18627( ref g_U11028[0], 1 );
    sub_18627( ref g_U11028[1], 1 );
    for ( I = 0; I <= 5; I++ )
    {
        if (I == 1)
        {
            l_U1010[0] = sub_18780( ref l_U845[0] );
            if (NOT (IS_CAR_DEAD( l_U1010[0] )))
            {
                if ((IS_CAR_PASSENGER_SEAT_FREE( l_U1010[0], 0 )) AND (sub_12298( 1 )))
                {
                    sub_18877( 1, ref l_U838[I], l_U1010[0], 0 );
                    GIVE_PED_HELMET_WITH_OPTS( l_U838[I], 0 );
                }
                sub_13157( l_U1010[0], l_U1099, 1 );
                SET_CAR_ON_GROUND_PROPERLY( l_U1010[0] );
            }
        }
        else if (I == 3)
        {
            if (NOT (IS_CAR_DEAD( g_U11087[0] )))
            {
                if ((IS_CAR_PASSENGER_SEAT_FREE( g_U11087[0], 0 )) AND (sub_12298( 2 )))
                {
                    sub_18877( 2, ref l_U838[I], g_U11087[0], 0 );
                    GIVE_PED_HELMET_WITH_OPTS( l_U838[I], 0 );
                }
                SET_CAR_ON_GROUND_PROPERLY( g_U11087[0] );
            }
        }
        else if (I == 5)
        {
            if (NOT (IS_CAR_DEAD( g_U11087[1] )))
            {
                if ((IS_CAR_PASSENGER_SEAT_FREE( g_U11087[1], 0 )) AND (sub_12298( 3 )))
                {
                    sub_18877( 3, ref l_U838[I], g_U11087[1], 0 );
                    GIVE_PED_HELMET_WITH_OPTS( l_U838[I], 0 );
                }
                SET_CAR_ON_GROUND_PROPERLY( g_U11087[1] );
            }
        };;;
        sub_19262();
        sub_19795( ref l_U845, l_U1090, 30000, 0 );
        sub_19886( ref l_U845, 3 );
        sub_4001( ref l_U845[I], 0 );
        sub_20011( ref l_U845, ref l_U1054, ref l_U1056 );
        sub_20011( ref g_U11028, ref l_U1054, ref l_U1056 );
        if (NOT (IS_CHAR_INJURED( l_U845[0]._fU0 )))
        {
            SET_CHAR_RELATIONSHIP_GROUP( l_U845[0]._fU0, 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U838[I] )))
        {
            SET_CHAR_RELATIONSHIP_GROUP( l_U838[I], 0 );
            SET_CHAR_DECISION_MAKER( l_U838[I], l_U1054 );
            SET_COMBAT_DECISION_MAKER( l_U838[I], l_U1056 );
            SET_CHAR_AS_ENEMY( l_U838[I], 0 );
            SET_CHAR_NEVER_TARGETTED( l_U838[I], 1 );
            SET_CHAR_WILL_DO_DRIVEBYS( l_U838[I], 1 );
            if (I == 0)
            {
                ;
            }
            else
            {
                SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE( l_U838[I], 3 );
                sub_19262();
                GIVE_DELAYED_WEAPON_TO_CHAR( l_U838[I], l_U1090, 25000, 0 );
            }
            SET_CHAR_SUFFERS_CRITICAL_HITS( l_U838[I], 0 );
        }
    }
    if (NOT (IS_CAR_DEAD( l_U1010[0] )))
    {
        LOCK_CAR_DOORS( l_U1010[0], 3 );
    }
    return;
}

void sub_12528(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    if (NOT sub_5390())
    {
        sub_12571( uParam0, uParam3, 0, uParam0, uParam3, uParam4, uParam7, 0, uParam4, uParam7, 1 );
        sub_12719( uParam8 );
        sub_12743();
    }
    return;
}

void sub_12571(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18)
{
    g_U11183[0] = {uParam0};
    g_U11159[0] = uParam3;
    g_U11120[0] = uParam4;
    g_U11190[0] = {uParam5};
    g_U11162[0] = uParam8;
    g_U11183[1] = {uParam9};
    g_U11159[1] = uParam12;
    g_U11120[1] = uParam13;
    g_U11190[1] = {uParam14};
    g_U11162[1] = uParam17;
    g_U11097 = uParam18;
    g_U11099 = 1;
    return;
}

void sub_12719(unknown uParam0)
{
    g_U11100 = uParam0;
    return;
}

void sub_12743()
{
    REQUEST_SCRIPT( "ability_backup" );
    while (NOT (HAS_SCRIPT_LOADED( "ability_backup" )))
    {
        REQUEST_SCRIPT( "ability_backup" );
        WAIT( 0 );
    }
    START_NEW_SCRIPT( "ability_backup", 1828 );
    return;
}

int sub_12938(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    if (NOT (sub_12298( uParam0 )))
    {
        sub_11338( uParam0 );
        return 0;
    }
    if (NOT (sub_12980( iParam5 + 4, uParam1, uParam4 )))
    {
        return 0;
    }
    sub_14574( uParam0, iParam5 + 0, iParam5->_fU4 );
    sub_16531( iParam5 );
    GIVE_PED_HELMET_WITH_OPTS( iParam5->_fU0, 1 );
    iParam5->_fU92 = uParam0;
    sub_1239( uParam0 );
    return 1;
}

void sub_12980(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    uVar7 = sub_12989();
    return sub_13023( uParam0, uVar7, uParam1, uParam4, 9 );
}

int sub_12989()
{
    return 802082487;
}

int sub_13023(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    sub_13157( (uParam0^), uParam1, uParam6 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uParam1 );
    }
    return 1;
}

void sub_13157(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case -159126838:
        CHANGE_CAR_COLOUR( uParam0, 106, 106 );
        SET_EXTRA_CAR_COLOURS( uParam0, 127, 0 );
        break;
        case 301427732:
        CHANGE_CAR_COLOUR( uParam0, 69, 112 );
        SET_EXTRA_CAR_COLOURS( uParam0, 112, 0 );
        break;
        case -570033273:
        if (iParam2 == 1)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 0, 0 );
            SET_EXTRA_CAR_COLOURS( uParam0, 4, 35 );
        }
        break;
        case -408052231:
        switch (iParam2)
        {
            case 6:
            case 13:
            case 16:
            case 7:
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            if (iParam2 == 6)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
                CHANGE_CAR_COLOUR( uParam0, 78, 37 );
                SET_EXTRA_CAR_COLOURS( uParam0, 81, 1 );
            }
            else if (iParam2 == 13)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 0 );
                CHANGE_CAR_COLOUR( uParam0, 37, 90 );
                SET_EXTRA_CAR_COLOURS( uParam0, 129, 1 );
            }
            else if (iParam2 == 16)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
                CHANGE_CAR_COLOUR( uParam0, 69, 88 );
                SET_EXTRA_CAR_COLOURS( uParam0, 125, 1 );
            }
            else if (iParam2 == 7)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 0 );
                CHANGE_CAR_COLOUR( uParam0, 70, 78 );
                SET_EXTRA_CAR_COLOURS( uParam0, 1, 1 );
            }
            else
            {
                SCRIPT_ASSERT( "Set_Gang_Bike_Colours: DIABOLUS - missing bike extras and colours for contact" );
            };;;;
            break;
        }
        break;
        case 584879743:
        CHANGE_CAR_COLOUR( uParam0, 78, 66 );
        SET_EXTRA_CAR_COLOURS( uParam0, 90, 0 );
        break;
        case 802082487: break;
        case -359167535:
        CHANGE_CAR_COLOUR( uParam0, 1, 90 );
        SET_EXTRA_CAR_COLOURS( uParam0, 95, 0 );
        break;
        case -571009320:
        CHANGE_CAR_COLOUR( uParam0, 112, 74 );
        SET_EXTRA_CAR_COLOURS( uParam0, 4, 0 );
        break;
        case 2006142190:
        CHANGE_CAR_COLOUR( uParam0, 132, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 131, 0 );
        break;
        case -1606187161:
        CHANGE_CAR_COLOUR( uParam0, 85, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 82, 0 );
        break;
        case -618617997:
        CHANGE_CAR_COLOUR( uParam0, 33, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 5, 0 );
        break;
        case -77769032: break;
        case -1670998136: break;
        case -1759858085:
        if (iParam2 == 15)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 132, 1 );
            SET_EXTRA_CAR_COLOURS( uParam0, 112, 112 );
        }
        break;
        case 1265391242: break;
        case -255678177:
        if (iParam2 == 17)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 112, 112 );
            SET_EXTRA_CAR_COLOURS( uParam0, 1, 112 );
        }
        break;
        case -114291515: break;
        case -891462355: break;
    }
    return;
}

void sub_14574(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    CREATE_CHAR_INSIDE_CAR( uParam2, 9, sub_1262( uParam0 ), uParam1 );
    SET_CHAR_RELATIONSHIP_GROUP( (uParam1^), 6 );
    iVar5 = sub_14618( uParam0, (uParam1^) );
    if (iVar5 == -1)
    {
        return;
    }
    g_U38937[iVar5]._fU4 = 1;
    g_U39102 = 1;
    return;
}

void sub_14618(unknown uParam0, unknown uParam1)
{
    int Result;
    unknown uVar5;

    Result = sub_1273( uParam0 );
    if (Result == -1)
    {
        return -1;
    }
    uVar5 = sub_14651( Result );
    switch (uVar5)
    {
        case 0:
        SET_AMBIENT_VOICE_NAME( uParam1, "M_Y_GLOST_01_FULL_01" );
        break;
        case 1:
        SET_AMBIENT_VOICE_NAME( uParam1, "M_Y_GLOST_01_GANG_01" );
        break;
        case 2:
        SET_AMBIENT_VOICE_NAME( uParam1, "M_Y_GLOST_02_FULL_01" );
        break;
        case 3:
        SET_AMBIENT_VOICE_NAME( uParam1, "M_Y_GLOST_02_GANG_01" );
        break;
        case 4:
        SET_AMBIENT_VOICE_NAME( uParam1, "M_Y_GLOST_03_FULL_01" );
        break;
        case 5:
        SET_AMBIENT_VOICE_NAME( uParam1, "M_Y_GLOST_03_GANG_01" );
        break;
        case 6:
        SET_AMBIENT_VOICE_NAME( uParam1, "M_Y_GLOST_04_FULL_01" );
        break;
        case 7:
        SET_AMBIENT_VOICE_NAME( uParam1, "M_Y_GLOST_04_GANG_01" );
        break;
        case 8:
        SET_AMBIENT_VOICE_NAME( uParam1, "M_Y_GLOST_05_FULL_01" );
        break;
        case 9:
        SET_AMBIENT_VOICE_NAME( uParam1, "M_Y_GLOST_05_GANG_01" );
        break;
        case 10:
        SET_AMBIENT_VOICE_NAME( uParam1, "M_Y_GLOST_06_FULL_01" );
        break;
        case 11:
        SET_AMBIENT_VOICE_NAME( uParam1, "M_Y_GLOST_06_GANG_01" );
        break;
    }
    sub_15378( ref uParam1 );
    sub_15462( uParam1, Result );
    return Result;
}

void sub_14651(unknown uParam0)
{
    int Result;

    Result = g_U38937[uParam0]._fU24;
    if (NOT (Result == -1))
    {
        return Result;
    }
    Result = sub_14690();
    g_U38937[uParam0]._fU24 = Result;
    return Result;
}

void sub_14690()
{
    int Result;
    int iVar3;
    int I;

    Result = g_U39029[0];
    iVar3 = 0;
    for ( I = 1; I < 12; I++ )
    {
        g_U39029[iVar3] = g_U39029[I];
        iVar3++;
    }
    g_U39029[iVar3] = -1;
    if (Result == -1)
    {
        Result = 0;
    }
    return Result;
}

void sub_15378(unknown uParam0)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    return;
}

void sub_15462(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    iVar4 = g_U38937[uParam1]._fU12;
    iVar5 = FLOOR( 7.00000000 );
    if (iVar4 > iVar5)
    {
        iVar4 = iVar5;
    }
    iVar6 = iVar5 - iVar4;
    iVar7 = 200;
    if (iVar4 < iVar5)
    {
        if (iVar4 == 0)
        {
            iVar7 = 0;
        }
        else
        {
            iVar7 -= (200 / iVar5) * iVar6;
        }
    }
    iVar8 = 250 + iVar7;
    SET_CHAR_MAX_HEALTH( uParam0, iVar8 );
    SET_CHAR_HEALTH( uParam0, iVar8 );
    iVar9 = 50 + (5 * iVar4);
    if (iVar9 > 80)
    {
        iVar9 = 80;
    }
    SET_CHAR_ACCURACY( uParam0, iVar9 );
    PRINTSTRING( "................." );
    uVar10 = {sub_15670( uParam1 )};
    PRINTSTRING( GET_STRING_FROM_TEXT_FILE( ref uVar10 ) );
    PRINTSTRING( " campaigns: " );
    PRINTINT( iVar4 );
    PRINTSTRING( " ---> Health addition = " );
    PRINTINT( iVar7 );
    PRINTSTRING( " ---> Accuracy = " );
    PRINTINT( iVar9 );
    PRINTNL();
    return;
}

void sub_15670(int iParam0)
{
    char[16] Result;
    unknown uVar7;

    StrCopy( ref Result, "ERROR", 16 );
    if (iParam0 == -1)
    {
        return Result;
    }
    uVar7 = g_U38937[iParam0]._fU16;
    return sub_15722( uVar7 );
}

void sub_15722(int iParam0)
{
    int iVar3;
    char[16] Result;
    int iVar8;

    iVar3 = 30;
    StrCopy( ref Result, "RECLOST_", 16 );
    if ((iParam0 < 0) || (iParam0 >= iVar3))
    {
        SCRIPT_ASSERT( "Return_Recurring_Lost_Name_From_NameID: NameID out of range" );
        return Result;
    }
    iVar8 = iParam0;
    if (iVar8 >= 40)
    {
        SCRIPT_ASSERT( "Return_Recurring_Lost_Name_From_NameID: more than 40 Lost Member names?" );
        return Result;
    }
    if (iVar8 >= 30)
    {
        ConcatString(ref Result, "3", 16);
        iVar8 -= 30;
    }
    if (iVar8 >= 20)
    {
        ConcatString(ref Result, "2", 16);
        iVar8 -= 20;
    }
    if (iVar8 >= 10)
    {
        ConcatString(ref Result, "1", 16);
        iVar8 -= 10;
    }
    switch (iVar8)
    {
        case 0:
        ConcatString(ref Result, "0", 16);
        break;
        case 1:
        ConcatString(ref Result, "1", 16);
        break;
        case 2:
        ConcatString(ref Result, "2", 16);
        break;
        case 3:
        ConcatString(ref Result, "3", 16);
        break;
        case 4:
        ConcatString(ref Result, "4", 16);
        break;
        case 5:
        ConcatString(ref Result, "5", 16);
        break;
        case 6:
        ConcatString(ref Result, "6", 16);
        break;
        case 7:
        ConcatString(ref Result, "7", 16);
        break;
        case 8:
        ConcatString(ref Result, "8", 16);
        break;
        case 9:
        ConcatString(ref Result, "9", 16);
        break;
        default: SCRIPT_ASSERT( "Return_Recurring_Lost_Name_From_NameID: array position not in range 0 - 9" );
    }
    return Result;
}

void sub_16531(int iParam0)
{
    int iVar3;

    SET_CHAR_WILL_DO_DRIVEBYS( iParam0->_fU0, 1 );
    ENABLE_PED_HELMET( iParam0->_fU0, 0 );
    iVar3 = sub_16570( iParam0 + 0 );
    if (iVar3 == 1)
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, 0 );
        SET_CHAR_RELATIONSHIP( iParam0->_fU0, 0, 0 );
        SET_CHAR_NEVER_TARGETTED( iParam0->_fU0, 1 );
    }
    else if (iVar3 == 3)
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, 0 );
        SET_CHAR_RELATIONSHIP( iParam0->_fU0, 1, 0 );
    }
    else if (iVar3 == 2)
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, sub_17323( iVar3 ) );
        SET_CHAR_AS_ENEMY( iParam0->_fU0, 1 );
    }
    else
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, sub_17323( iVar3 ) );
    };;;
    SET_CHAR_PROOFS( iParam0->_fU0, 0, 0, 0, 1, 0 );
    SET_CHAR_WILL_USE_CARS_IN_COMBAT( iParam0->_fU0, 1 );
    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 0 );
    SET_PED_FALL_OFF_BIKES_WHEN_SHOT( iParam0->_fU0, 0 );
    iParam0->_fU8 = nil;
    iParam0->_fU12 = nil;
    iParam0->_fU92 = 0;
    iParam0->_fU16 = {0, 0, 0};
    iParam0->_fU28 = 18.00000000;
    iParam0->_fU32 = 0;
    iParam0->_fU36 = 4;
    iParam0->_fU40 = 2;
    iParam0->_fU88 = 12;
    iParam0->_fU96 = 5;
    if (iVar3 == 1)
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" )) == 0)
        {
            sub_17610( iParam0 );
        }
        else if ((NOT (IS_CHAR_MODEL( iParam0->_fU0, sub_11393( 6 ) ))) AND (NOT (IS_CHAR_MODEL( iParam0->_fU0, sub_11393( 7 ) ))))
        {
            sub_17610( iParam0 );
        }
    }
    return;
}

void sub_16570(unknown uParam0)
{
    unknown uVar3;
    int Result;

    Result = 0;
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        GET_CHAR_MODEL( (uParam0^), ref uVar3 );
        Result = sub_16610( ref uVar3 );
    }
    return Result;
}

void sub_16610(unknown uParam0)
{
    int Result;

    Result = 0;
    switch ((uParam0^))
    {
        case -159126838:
        case 301427732:
        case -570033273:
        case -408052231:
        case 584879743:
        case 802082487:
        case -359167535:
        case 1439613707:
        case 1737188996:
        case -411638179:
        case -2130437771:
        case -1832534792:
        case -1670328242:
        case 188410296:
        case 1414790133:
        case 630267504:
        case 1719115836:
        case 1914397972:
        case -2138439183:
        case 1215631816:
        case 1706970202:
        case 717510247:
        case 965080042:
        case 693982133:
        case 454735664:
        case 1409362172:
        case 767450539:
        case 1686719296:
        case 1917871822:
        case 422524045:
        Result = 1;
        break;
        case -571009320:
        case 2006142190:
        case -1606187161:
        case -77769032:
        case -618617997:
        case 977480632:
        case -1159156463:
        case 479817841:
        case 226415164:
        case 15972646:
        case -2107556865:
        case -150646512:
        case 690697563:
        case -504027408:
        Result = 2;
        break;
        case -114291515:
        case -891462355:
        case -1670998136:
        case -1759858085:
        case 1265391242:
        case -255678177:
        case 236691815:
        case 1590280898:
        Result = 3;
        break;
    }
    if (Result == 0)
    {
        if (((((((uParam0^) == (sub_11393( 0 ))) || ((uParam0^) == (sub_11393( 1 )))) || ((uParam0^) == (sub_11393( 6 )))) || ((uParam0^) == (sub_11393( 7 )))) || ((uParam0^) == (sub_11393( 13 )))) || ((uParam0^) == (sub_11393( 16 ))))
        {
            Result = 1;
        }
        else if (((uParam0^) == (sub_11393( 15 ))) || ((uParam0^) == (sub_11393( 17 ))))
        {
            Result = 3;
        }
    }
    return Result;
}

int sub_17323(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        return 6;
        break;
        case 2:
        return 5;
        break;
    }
    return 22;
}

void sub_17610(int iParam0)
{
    if (l_U151)
    {
        ADD_BLIP_FOR_CHAR( iParam0->_fU0, iParam0 + 100 );
        SET_BLIP_AS_FRIENDLY( iParam0->_fU100, 1 );
        CHANGE_BLIP_PRIORITY( iParam0->_fU100, 0 );
        SET_BLIP_AS_SHORT_RANGE( iParam0->_fU100, 1 );
        CHANGE_BLIP_SCALE( iParam0->_fU100, 0.50000000 );
        CHANGE_BLIP_DISPLAY( iParam0->_fU100, 5 );
    }
    return;
}

void sub_17889(vector vParam0, unknown uParam3, unknown uParam4, unknown uParam5, int iParam6, boolean bParam7)
{
    unknown uVar10;

    sub_17923( vParam0 + (vector( 2.00000000, 0.00000000, 0.00000000)), uParam3, uParam4, iParam6 );
    uVar10 = sub_18086( vParam0, uParam3, uParam5 );
    WARP_CHAR_INTO_CAR( iParam6->_fU0, uVar10 );
    GIVE_PED_HELMET_WITH_OPTS( iParam6->_fU0, 1 );
    iParam6->_fU4 = uVar10;
    if (NOT bParam7)
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar10 );
    }
    return;
}

void sub_17923(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    CREATE_CHAR( sub_17938( sub_16610( ref uParam4 ) ), uParam4, uParam0._fU0, uParam0._fU4, uParam0._fU8, iParam5 + 0, 1 );
    SET_CHAR_HEADING( iParam5->_fU0, uParam3 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( iParam5->_fU0 );
    SET_CHAR_WILL_USE_CARS_IN_COMBAT( iParam5->_fU0, 1 );
    sub_16531( iParam5 );
    return;
}

int sub_17938(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        return 9;
        break;
        case 2:
        return 8;
        break;
    }
    return 25;
}

void sub_18086(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown Result;

    CREATE_CAR( uParam4, uParam0._fU0, uParam0._fU4, uParam0._fU8, ref Result, 1 );
    SET_CAR_HEADING( Result, uParam3 );
    sub_13157( Result, uParam4, 9 );
    SET_LOAD_COLLISION_FOR_CAR_FLAG( Result, 1 );
    SET_BLIP_THROTTLE_RANDOMLY( Result, 1 );
    VEHICLE_CAN_BE_TARGETTED_BY_HS_MISSILE( Result, 0 );
    return Result;
}

void sub_18244(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_18255( uParam0 );
    if (iVar3 == 6)
    {
        return;
    }
    g_U39058[iVar3]._fU4 = 1;
    g_U39102 = 1;
    return;
}

int sub_18255(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 1: return 1;
        case 6: return 2;
        case 7: return 3;
        case 13: return 4;
        case 16: return 5;
    }
    return 6;
}

void sub_18627(int iParam0, int iParam1)
{
    if (sub_18640( iParam0, iParam1 ))
    {
        iParam0->_fU88 = (iParam0->_fU88) XOR (iParam1);
    }
    if (iParam1 == 1)
    {
        if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
        {
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 0 );
        }
    }
    return;
}

boolean sub_18640(int iParam0, unknown uParam1)
{
    return ((iParam0->_fU88) AND (uParam1)) > 0;
}

void sub_18780(int iParam0)
{
    return iParam0->_fU4;
}

void sub_18877(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    CREATE_CHAR_AS_PASSENGER( uParam2, 9, sub_1262( uParam0 ), uParam3, uParam1 );
    SET_CHAR_RELATIONSHIP_GROUP( (uParam1^), 6 );
    iVar6 = sub_14618( uParam0, (uParam1^) );
    if (iVar6 == -1)
    {
        return;
    }
    g_U38937[iVar6]._fU4 = 1;
    g_U39102 = 1;
    return;
}

void sub_19262()
{
    int iVar2;
    int iVar3;

    GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref iVar2 );
    GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref iVar3 );
    if (g_U39219 <= 10)
    {
        iVar3 = 0;
    }
    else if (g_U39219 >= 20)
    {
        iVar3 = 100;
    }
    if (iVar2 <= 25)
    {
        if (l_U671 == 0)
        {
            if (g_U15728[41] == 0)
            {
                l_U1090 = 7;
            }
            else
            {
                l_U1090 = 27;
            }
        }
        else if (l_U671 == 4)
        {
            l_U1090 = 9;
        }
        else
        {
            l_U1090 = 7;
        }
    }
    else if ((iVar2 > 25) AND (iVar2 <= 75))
    {
        if (l_U671 > 2)
        {
            l_U1090 = 13;
        }
        else
        {
            l_U1090 = 12;
        }
    }
    else if ((iVar2 > 75) AND (iVar2 <= 95))
    {
        if (l_U671 == 0)
        {
            l_U1090 = 26;
        }
        else if (l_U671 == 1)
        {
            l_U1090 = 10;
        }
        else if (iVar3 <= 50)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref iVar3 );
            if (iVar3 <= 50)
            {
                l_U1090 = 26;
            }
            else
            {
                l_U1090 = 10;
            }
        }
        else
        {
            GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref iVar3 );
            if (iVar3 <= 50)
            {
                l_U1090 = 26;
            }
            else
            {
                l_U1090 = 11;
            }
        };;;
    }
    else if (iVar2 == 100)
    {
        if (g_U15728[53] == 0)
        {
            l_U1090 = 21;
        }
        else if (l_U671 > 2)
        {
            l_U1090 = 15;
        }
        else
        {
            l_U1090 = 14;
        }
    }
    else if (iVar3 <= 50)
    {
        l_U1090 = 5;
    }
    else if (g_U15728[55] == 0)
    {
        l_U1090 = 28;
    }
    else
    {
        l_U1090 = 4;
    };;;;;;
    return;
}

void sub_19795(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int I;

    for ( I = 0; I < (uParam0^); I++ )
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))
        {
            GIVE_WEAPON_TO_CHAR( (uParam0^)[I]._fU0, uParam1, uParam2, uParam3 );
        }
    }
    return;
}

void sub_19886(unknown uParam0, unknown uParam1)
{
    int I;

    for ( I = 0; I < (uParam0^); I++ )
    {
        sub_19917( ref (uParam0^)[I], uParam1 );
    }
    return;
}

void sub_19917(int iParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE( iParam0->_fU0, uParam1 );
    }
    return;
}

void sub_20011(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;

    for ( I = 0; I < (uParam0^); I++ )
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))
        {
            SET_CHAR_DECISION_MAKER( (uParam0^)[I]._fU0, (uParam1^) );
            SET_COMBAT_DECISION_MAKER( (uParam0^)[I]._fU0, (uParam2^) );
        }
    }
    return;
}

void sub_20437()
{
    if (NOT (IS_CHAR_INJURED( sub_5968() )))
    {
        sub_8348( 0, sub_5968(), "JOHNNY", 0 );
    }
    if (NOT (IS_CHAR_INJURED( l_U845[0]._fU0 )))
    {
        sub_8348( 1, l_U845[0]._fU0, "JIM", 0 );
    }
    if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
    {
        sub_8348( 2, g_U11081[0], "TERRY", 0 );
    }
    if (NOT (IS_CHAR_INJURED( g_U11081[1] )))
    {
        sub_8348( 3, g_U11081[1], "CLAY", 0 );
    }
    return;
}

void sub_20632()
{
    if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, -1018.00000000, 1299.00000000, 24.72840000, 20, 20, 20, 0 ))
    {
        while (sub_20681() == 0)
        {
            WAIT( 0 );
            l_U705 = 0;
            sub_22662();
            sub_26971();
        }
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, -1520.37500000, 654.83600000, 23.93500000, 20, 20, 20, 0 ))
    {
        while (sub_27823() == 0)
        {
            WAIT( 0 );
            l_U705 = 1;
            sub_22662();
            sub_26971();
        }
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, -1249.56600000, -287.56780000, 2.26780000, 20, 20, 20, 0 ))
    {
        while (sub_29448() == 0)
        {
            WAIT( 0 );
            l_U705 = 2;
            sub_22662();
            sub_26971();
        }
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, -120.46630000, 1428.77600000, 19.41560000, 20, 20, 20, 0 ))
    {
        while (sub_31082() == 0)
        {
            WAIT( 0 );
            l_U705 = 3;
            sub_22662();
            sub_26971();
        }
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, -347.40990000, 643.33900000, 13.61330000, 20, 20, 20, 0 ))
    {
        while (sub_32614() == 0)
        {
            WAIT( 0 );
            l_U705 = 4;
            sub_22662();
            sub_26971();
        }
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, 151.08310000, -391.72350000, 13.75050000, 20, 20, 20, 0 ))
    {
        while (sub_33942() == 0)
        {
            WAIT( 0 );
            l_U705 = 5;
            sub_22662();
            sub_26971();
        }
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, 425.74800000, 1521.55600000, 15.59500000, 20, 20, 20, 0 ))
    {
        while (sub_35218() == 0)
        {
            WAIT( 0 );
            l_U705 = 6;
            sub_22662();
            sub_26971();
        }
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, 813.99070000, 1575.27700000, 16.89010000, 20, 20, 20, 0 ))
    {
        while (sub_36483() == 0)
        {
            WAIT( 0 );
            l_U705 = 7;
            sub_22662();
            sub_26971();
        }
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, 1346.20300000, 545.29910000, 29.39200000, 20, 20, 20, 0 ))
    {
        while (sub_37745() == 0)
        {
            WAIT( 0 );
            l_U705 = 8;
            sub_22662();
            sub_26971();
        }
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, 879.65420000, -478.55340000, 13.98490000, 20, 20, 20, 0 ))
    {
        while (sub_39383() == 0)
        {
            WAIT( 0 );
            l_U705 = 9;
            sub_22662();
            sub_26971();
        }
    };;;;;;;;;;
    return;
}

int sub_20681()
{
    unknown uVar2;

    CLEAR_AREA_OF_CARS( -1018.25100000, 1300.58700000, 24.71440000, 100.00000000 );
    CLEAR_AREA_OF_CHARS( -1018.25100000, 1300.58700000, 24.71440000, 100.00000000 );
    switch (l_U1133)
    {
        case 0:
        REQUEST_CAR_RECORDING( 1770 );
        REQUEST_CAR_RECORDING( 1771 );
        REQUEST_CAR_RECORDING( 1772 );
        l_U1133 = 1;
        break;
        case 1:
        PRINTSTRING( "waiting on loading\n" );
        if (((HAS_CAR_RECORDING_BEEN_LOADED( 1771 )) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1770 ))) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1772 )))
        {
            l_U1133 = 2;
        }
        break;
        case 2:
        REQUEST_MODEL( 301427732 );
        while (NOT (HAS_MODEL_LOADED( 301427732 )))
        {
            WAIT( 0 );
            if (NOT (HAS_MODEL_LOADED( 301427732 )))
            {
                REQUEST_MODEL( 301427732 );
            }
        }
        if (NOT (IS_CHAR_IN_ANY_CAR( l_U592 )))
        {
            CREATE_CAR( 301427732, -1018.25100000, 1300.58700000, 24.71440000, ref uVar2, 1 );
            WARP_CHAR_INTO_CAR( l_U592, uVar2 );
        }
        SET_CHAR_COORDINATES( l_U592, -1018.25100000, 1300.58700000, 24.71440000 );
        SET_CHAR_HEADING( l_U592, 290.64990000 );
        sub_21104();
        SET_CAM_POS( l_U590, -951.58010000, 1301.58400000, 23.86526000 );
        SET_CAM_ROT( l_U590, 5.71496900, -0.00000000, 91.22739000 );
        SET_CAM_FOV( l_U590, 45.00000000 );
        if (NOT (IS_CAR_DEAD( l_U1010[0] )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U1010[0], 1770 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1010[0], 500.00000000 );
            SET_PLAYBACK_SPEED( l_U1010[0], 0.90000000 );
            SET_BLIP_THROTTLE_RANDOMLY( l_U1010[0], 1 );
        }
        if (NOT (IS_CAR_DEAD( g_U11087[0] )))
        {
            START_PLAYBACK_RECORDED_CAR( g_U11087[0], 1771 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( g_U11087[0], 500.00000000 );
            SET_PLAYBACK_SPEED( g_U11087[0], 0.90000000 );
            SET_BLIP_THROTTLE_RANDOMLY( g_U11087[0], 1 );
        }
        if (NOT (IS_CAR_DEAD( g_U11087[1] )))
        {
            START_PLAYBACK_RECORDED_CAR( g_U11087[1], 1772 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( g_U11087[1], 500.00000000 );
            SET_PLAYBACK_SPEED( g_U11087[1], 0.90000000 );
            SET_BLIP_THROTTLE_RANDOMLY( g_U11087[1], 1 );
        }
        SETTIMERA( 0 );
        sub_21608( 1 );
        sub_21711( ref l_U590, 1 );
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        l_U1133 = 3;
        break;
        case 3:
        if ((((sub_21824( l_U1010[0], -951.58010000, 1301.58400000, 23.86526000 )) < 2.90000000) || ((sub_21824( g_U11087[0], -951.58010000, 1301.58400000, 23.86526000 )) < 2.90000000)) || ((sub_21824( g_U11087[1], -951.58010000, 1301.58400000, 23.86526000 )) < 2.90000000))
        {
            if (l_U658 == 0)
            {
                SET_CAM_COMPONENT_SHAKE( l_U590, 0, 3, 1250, 0.00500000, 3.90000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 1, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 3, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 4, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                l_U658 = 1;
            }
        }
        if (TIMERA() > 5550)
        {
            SET_CAM_POS( l_U585, -1020.81900000, 1301.51900000, 27.49944000 );
            SET_CAM_ROT( l_U585, -5.36306000, 0.00000000, -93.58821000 );
            SET_CAM_FOV( l_U585, 45.00000000 );
            SET_CAM_POS( l_U587, -1020.58100000, 1301.63600000, 25.21162000 );
            SET_CAM_ROT( l_U587, 5.38686700, 0.00000000, -104.79430000 );
            SET_CAM_FOV( l_U587, 51.59998000 );
            SET_CAM_INTERP_STYLE_CORE( l_U588, l_U585, l_U587, 5000, 0 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U588, 3, 3, 1, 1 );
            sub_21711( ref l_U590, 0 );
            sub_21711( ref l_U588, 1 );
            SETTIMERA( 0 );
            l_U1133 = 4;
        }
        break;
        case 4:
        if ((TIMERA() > 6500) AND (NOT (sub_22391( l_U752 ))))
        {
            l_U1133 = 6;
        }
        break;
        case 6:
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_21711( ref l_U590, 0 );
        sub_21608( 0 );
        l_U1133 = 0;
        l_U658 = 0;
        return 1;
        break;
    }
    return 0;
}

void sub_21104()
{
    if (NOT (DOES_CAM_EXIST( l_U585 )))
    {
        CREATE_CAM( 14, ref l_U585 );
    }
    if (NOT (DOES_CAM_EXIST( l_U587 )))
    {
        CREATE_CAM( 14, ref l_U587 );
    }
    if (NOT (DOES_CAM_EXIST( l_U588 )))
    {
        CREATE_CAM( 3, ref l_U588 );
    }
    if (NOT (DOES_CAM_EXIST( l_U590 )))
    {
        CREATE_CAM( 14, ref l_U590 );
    }
    return;
}

void sub_21608(boolean bParam0)
{
    if (bParam0)
    {
        BEGIN_CAM_COMMANDS( ref l_U584 );
    }
    SET_USE_HIGHDOF( bParam0 );
    SET_WIDESCREEN_BORDERS( bParam0 );
    SET_PLAYER_CONTROL( l_U593, NOT bParam0 );
    ACTIVATE_SCRIPTED_CAMS( bParam0, bParam0 );
    if (NOT bParam0)
    {
        END_CAM_COMMANDS( ref l_U584 );
    }
    return;
}

void sub_21711(unknown uParam0, unknown uParam1)
{
    if (DOES_CAM_EXIST( (uParam0^) ))
    {
        SET_CAM_ACTIVE( (uParam0^), uParam1 );
        SET_CAM_PROPAGATE( (uParam0^), uParam1 );
    }
    return;
}

void sub_21824(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    }
    else
    {
        return -1.00000000;
    }
    return VDIST( uVar6, uParam1 );
}

int sub_22391(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8946 == 1)) || (g_U8946 == 2))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_22503( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_22503( "\n speech is not playing" );
    }
    return 0;
}

void sub_22503(unknown uParam0)
{
    return;
}

void sub_22662()
{
    if ((IS_SCREEN_FADED_IN()) AND (l_U663 == 0))
    {
        if (NOT (IS_CAR_DEAD( l_U1010[0] )))
        {
            if (((LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U592, l_U1010[0], 15, 15, 15, 0 )) AND (IS_CAR_ON_SCREEN( l_U1010[0] ))) AND (NOT (IS_CHAR_INJURED( sub_5968() ))))
            {
                sub_22793( "E1FCC3_HEY", ref l_U752, 7, 1 );
                if (NOT (IS_CHAR_INJURED( l_U838[0] )))
                {
                    sub_23915( l_U592, sub_23775( 1 ), l_U838[0], 39 );
                }
                sub_26566();
                l_U663 = 1;
            }
        }
    }
    return;
}

void sub_22793(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_22816( uParam0, ref l_U34._fU0, uParam1, uParam2, uParam3 );
}

void sub_22816(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_22870( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_22870(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_22892( iParam1 )))
    {
        return 0;
    }
    l_U34._fU384 = 0;
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
    for ( I = 0; I <= (g_U9051 - 1); I++ )
    {
        StrCopy( ref g_U9051[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U9051[I] = {(uParam0^)[I]};
    }
    g_U9045 = {(iParam1^)};
    sub_23572( ref g_U8947, ref l_U34 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_22892(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_22503( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U559[1] ))
    {
        switch (g_U94._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_22503( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 > iParam0->_fU0)
        {
            sub_22503( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8944 = iParam0->_fU0;
    g_U8945++;
    if (g_U8945 > 100000)
    {
        g_U8945 = 1;
    }
    iParam0->_fU4 = g_U8945;
    return 1;
}

void sub_23572(int iParam0, int iParam1)
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

void sub_23775(boolean bParam0)
{
    unknown uVar3;
    string Result;

    Result = nil;
    if (bParam0)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar3 );
        switch (uVar3)
        {
            case 0:
            Result = "gest_thumbsup";
            break;
            case 1:
            Result = "gest_hey";
            break;
        }
    }
    else
    {
        Result = "p_gest_rockin";
    }
    return Result;
}

void sub_23915(int iParam0, unknown uParam1, int iParam2, int iParam3)
{
    boolean Result;
    unknown uVar7;
    int iVar8;

    Result = false;
    if (IS_CHAR_INJURED( iParam0 ))
    {
        PRINTSTRING( "PERFORM_BIKER_GESTURE: ped is injured\n" );
        return 0;
    }
    if (IS_STRING_NULL( uParam1 ))
    {
        Result = true;
    }
    else if (COMPARE_STRING( uParam1, "" ))
    {
        Result = true;
    }
    else if (NOT ((IS_CHAR_ON_ANY_BIKE( iParam0 )) AND (IS_CHAR_SITTING_IN_ANY_CAR( iParam0 ))))
    {
        Result = true;
    }
    else
    {
        uVar7 = sub_24405( sub_24075( iParam0 ) );
        if (NOT (IS_STRING_NULL( uVar7 )))
        {
            if (HAVE_ANIMS_LOADED( uVar7 ))
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( iParam0, uVar7, uParam1 )))
                {
                    TASK_PLAY_ANIM_SECONDARY_IN_CAR( iParam0, uParam1, uVar7, 8.00000000, 0, 0, 0, 0, 0 );
                    Result = true;
                }
            }
        }
    };;;
    if (Result)
    {
        l_U175 = iParam0;
        l_U176 = iParam2;
        if (DOES_CHAR_EXIST( iParam2 ))
        {
            if (NOT (IS_PED_LOOKING_AT_PED( iParam0, iParam2 )))
            {
                TASK_LOOK_AT_CHAR( iParam0, iParam2, sub_24749( 2000, 5500 ), 0 );
            }
            if (iParam0 != sub_5968())
            {
                iVar8 = sub_16570( ref iParam0 );
                if ((iVar8 == 1) AND (iParam2 != sub_5968()))
                {
                    if (NOT (IS_PED_LOOKING_AT_PED( sub_5968(), iParam2 )))
                    {
                        TASK_LOOK_AT_CHAR( sub_5968(), iParam2, sub_24749( 2000, 5500 ), 0 );
                    }
                }
                else if (NOT (IS_PED_LOOKING_AT_PED( sub_5968(), iParam0 )))
                {
                    TASK_LOOK_AT_CHAR( sub_5968(), iParam0, sub_24749( 2000, 5500 ), 0 );
                }
            }
        }
        if (iParam3 != 39)
        {
            if ((iParam3 == 38) AND (IS_CHAR_MODEL( iParam0, sub_11393( 0 ) )))
            {
                if (l_U180)
                {
                    SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0, "E1B1_WA", "BILLY", 1, 1, 2 );
                }
            }
            else
            {
                SAY_AMBIENT_SPEECH( iParam0, sub_25013( iParam3 ), 1, 1, 2 );
            }
            l_U174 = iParam3;
        }
        GET_GAME_TIMER( ref l_U173 );
        switch (iParam3)
        {
            case 35: SET_BIT( ref l_U178, 2 );
            case 36: SET_BIT( ref l_U178, 1 );
            case 24:
            SET_BIT( ref l_U178, 0 );
            break;
            case 38:
            SET_BIT( ref l_U178, 6 );
            break;
        }
    }
    return Result;
}

void sub_24075(unknown uParam0)
{
    unknown uVar3;
    int Result;

    Result = 5;
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            Result = sub_24128( uVar3 );
        }
    }
    return Result;
}

void sub_24128(unknown uParam0)
{
    int Result;
    unknown uVar4;

    Result = 5;
    GET_CAR_MODEL( uParam0, ref uVar4 );
    switch (uVar4)
    {
        case -1830458836:
        case 584879743:
        case -1606187161:
        case -618617997:
        case 301427732:
        case 802082487:
        case -359167535:
        case -159126838:
        case -408052231:
        Result = 0;
        break;
        case -570033273:
        case -571009320:
        case 2006142190:
        case -77769032:
        Result = 1;
        break;
        case 1203311498:
        case -909201658:
        case -1670998136:
        case -1759858085:
        case 1265391242:
        case -255678177:
        case -114291515:
        case -891462355:
        Result = 2;
        break;
        case 788045382:
        Result = 4;
        break;
        case -1842748181:
        Result = 3;
        break;
    }
    return Result;
}

void sub_24405(unknown uParam0)
{
    string Result;

    Result = nil;
    switch (uParam0)
    {
        case 0:
        Result = "MISSBIKE_GESTFREE";
        break;
        case 1:
        Result = "MISSBIKE_GESTCHOP";
        break;
        case 2:
        Result = "MISSBIKE_GESTSPT";
        break;
        case 3:
        Result = "MISSBIKE_GESTSCOT";
        break;
        case 4:
        Result = "MISSBIKE_GESTDIRT";
        break;
    }
    return Result;
}

void sub_24749(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_25013(unknown uParam0)
{
    string Result;

    Result = nil;
    switch (uParam0)
    {
        case 0:
        Result = "ABUSE_COPS";
        break;
        case 1:
        Result = "ABUSE_GENERIC_BIKER_PED";
        break;
        case 2:
        Result = "ABUSE_HOOKER";
        break;
        case 3:
        Result = "ANGELS_OF_DEATH_TAUNT_LOST";
        break;
        case 4:
        Result = "ANGELS_OF_DEATH_TAUNT_LOST_TRUCE";
        break;
        case 5:
        Result = "BIKE_CRASH_DRIVEN";
        break;
        case 6:
        Result = "BIKE_DRIVE_MORE_CAREFUL";
        break;
        case 7:
        Result = "BIKE_HIT_PED";
        break;
        case 8:
        Result = "BIKE_JUMP";
        break;
        case 9:
        Result = "BIKE_ON_FIRE";
        break;
        case 10:
        Result = "BIKE_OVERTAKE";
        break;
        case 11:
        Result = "BIKER_ACHIEVE_MISSION_OBJECTIVE";
        break;
        case 12:
        Result = "BIKER_CLIPS_ANOTHER_BIKE";
        break;
        case 13:
        Result = "BIKER_CLIPS_ANYTHING";
        break;
        case 14:
        Result = "BIKER_FALLING_BEHIND";
        break;
        case 15:
        Result = "BIKER_FALLS_BEHIND";
        break;
        case 16:
        Result = "BIKER_PASSENGER_SHOOT_GENERIC";
        break;
        case 17:
        Result = "BIKER_PLAYER_FALLS_BEHIND";
        break;
        case 18:
        Result = "COME_UNDER_ATTACK";
        break;
        case 19:
        Result = "FOLLOW_ME_GUYS";
        break;
        case 20:
        Result = "GENERIC_CELEBRATION";
        break;
        case 21:
        Result = "GET_A_MOVE_ON";
        break;
        case 22:
        Result = "GET_IN_COVER";
        break;
        case 23:
        Result = "GET_THE_HELL_OUT_OF_HERE";
        break;
        case 24:
        Result = "GET_WANTED_LEVEL";
        break;
        case 25:
        Result = "GREET_JOHNNY";
        break;
        case 26:
        Result = "JACKED_BY_PLAYER_LIKE";
        break;
        case 27:
        Result = "KEEP_SHOOTING";
        break;
        case 28:
        Result = "LOST_TAUNT_ANGELS_OF_DEATH";
        break;
        case 29:
        Result = "LOST_TAUNT_LOST";
        break;
        case 30:
        Result = "LOST_WHOOP";
        break;
        case 31:
        Result = "NEED_BIKE_NOT_CAR";
        break;
        case 32:
        Result = "NEED_SOME_HELP";
        break;
        case 33:
        Result = "NICE_BIKE";
        break;
        case 34:
        Result = "NICE_SHOOTING_JOHNNY";
        break;
        case 35:
        Result = "POLICE_PURSUIT";
        break;
        case 36:
        Result = "SPOT_POLICE";
        break;
        case 37:
        Result = "JACKING_LOST_BIKE";
        break;
        case 38:
        Result = "WAIT_FOR_ME";
        break;
    }
    return Result;
}

void sub_26566()
{
    int iVar2;
    unknown uVar3;
    int I;

    if (NOT (IS_CHAR_INJURED( l_U845[0]._fU0 )))
    {
        TASK_LOOK_AT_CHAR( l_U592, l_U845[0]._fU0, 10000, 0 );
    }
    if (NOT (IS_CHAR_INJURED( l_U845[0]._fU0 )))
    {
        TASK_LOOK_AT_CHAR( l_U845[0]._fU0, l_U592, 10000, 0 );
    }
    GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref iVar2 );
    if (iVar2 > 50)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 3000, 10000, ref uVar3 );
        if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
        {
            TASK_LOOK_AT_CHAR( g_U11081[0], l_U592, uVar3, 0 );
        }
    }
    GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref iVar2 );
    if (iVar2 > 50)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 3000, 10000, ref uVar3 );
        if (NOT (IS_CHAR_INJURED( g_U11081[1] )))
        {
            TASK_LOOK_AT_CHAR( g_U11081[1], l_U592, uVar3, 0 );
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref iVar2 );
        if (iVar2 > 50)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 3000, 10000, ref uVar3 );
            if (NOT (IS_CHAR_INJURED( l_U838[(I * 2) + 1] )))
            {
                TASK_LOOK_AT_CHAR( l_U838[(I * 2) + 1], l_U592, uVar3, 0 );
            }
        }
    }
    return;
}

void sub_26971()
{
    if ((sub_26980()) AND (IS_SCREEN_FADED_IN()))
    {
        DO_SCREEN_FADE_OUT( 500 );
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        l_U705 *= 3;
        if (NOT (IS_CAR_DEAD( l_U1010[0] )))
        {
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1010[0] )))
            {
                while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 1770 + l_U705 )))
                {
                    REQUEST_CAR_RECORDING( 1770 + l_U705 );
                    WAIT( 0 );
                }
                if (NOT (IS_CAR_DEAD( l_U1010[0] )))
                {
                    START_PLAYBACK_RECORDED_CAR( l_U1010[0], 1770 + l_U705 );
                }
            }
            if (NOT (IS_CAR_DEAD( l_U1010[0] )))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1010[0] ))
                {
                    SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_CAR( l_U1010[0] );
                }
            }
        }
        if (NOT (IS_CAR_DEAD( g_U11087[0] )))
        {
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( g_U11087[0] )))
            {
                while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 1771 + l_U705 )))
                {
                    REQUEST_CAR_RECORDING( 1771 + l_U705 );
                    WAIT( 0 );
                }
                if (NOT (IS_CAR_DEAD( g_U11087[0] )))
                {
                    START_PLAYBACK_RECORDED_CAR( g_U11087[0], 1771 + l_U705 );
                }
            }
            if (NOT (IS_CAR_DEAD( g_U11087[0] )))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( g_U11087[0] ))
                {
                    SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_CAR( g_U11087[0] );
                }
            }
        }
        if (NOT (IS_CAR_DEAD( g_U11087[1] )))
        {
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( g_U11087[1] )))
            {
                while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 1772 + l_U705 )))
                {
                    REQUEST_CAR_RECORDING( 1772 + l_U705 );
                    WAIT( 0 );
                }
                if (NOT (IS_CAR_DEAD( g_U11087[1] )))
                {
                    START_PLAYBACK_RECORDED_CAR( g_U11087[1], 1772 + l_U705 );
                }
            }
            if (NOT (IS_CAR_DEAD( g_U11087[1] )))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( g_U11087[1] ))
                {
                    SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_CAR( g_U11087[1] );
                }
            }
        }
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_CAM_BEHIND_PED( sub_5968() );
        l_U1133 = 6;
        l_U660 = 1;
        DO_SCREEN_FADE_IN( 500 );
    }
    return;
}

int sub_26980()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_27823()
{
    unknown uVar2;

    CLEAR_AREA_OF_CARS( -1520.37500000, 654.83600000, 23.93500000, 100.00000000 );
    CLEAR_AREA_OF_CHARS( -1520.37500000, 654.83600000, 23.93500000, 100.00000000 );
    switch (l_U1133)
    {
        case 0:
        REQUEST_CAR_RECORDING( 1773 );
        REQUEST_CAR_RECORDING( 1774 );
        REQUEST_CAR_RECORDING( 1775 );
        l_U1133 = 1;
        break;
        case 1:
        PRINTSTRING( "waiting on loading\n" );
        if (((HAS_CAR_RECORDING_BEEN_LOADED( 1773 )) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1774 ))) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1775 )))
        {
            l_U1133 = 2;
        }
        break;
        case 2:
        REQUEST_MODEL( 301427732 );
        while (NOT (HAS_MODEL_LOADED( 301427732 )))
        {
            WAIT( 0 );
            if (NOT (HAS_MODEL_LOADED( 301427732 )))
            {
                REQUEST_MODEL( 301427732 );
            }
        }
        if (NOT (IS_CHAR_IN_ANY_CAR( l_U592 )))
        {
            CREATE_CAR( 301427732, -1520.37500000, 654.83600000, 23.93500000, ref uVar2, 1 );
            WARP_CHAR_INTO_CAR( l_U592, uVar2 );
        }
        SET_CHAR_COORDINATES( l_U592, -1520.37500000, 654.83600000, 23.93500000 );
        SET_CHAR_HEADING( l_U592, 337.61610000 );
        sub_21104();
        SET_CAM_POS( l_U585, -1509.41300000, 650.82090000, 22.99788000 );
        SET_CAM_ROT( l_U585, 10.46284000, -0.00000000, 82.05753000 );
        SET_CAM_FOV( l_U585, 37.80002000 );
        SET_CAM_POS( l_U587, -1509.41300000, 648.98090000, 22.99788000 );
        SET_CAM_ROT( l_U587, 10.46284000, -0.00000000, 82.05753000 );
        SET_CAM_FOV( l_U587, 45.00000000 );
        if (NOT (IS_CAR_DEAD( l_U1010[0] )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U1010[0], 1773 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1010[0], 750.00000000 );
            SET_PLAYBACK_SPEED( l_U1010[0], 0.90000000 );
            SET_BLIP_THROTTLE_RANDOMLY( l_U1010[0], 1 );
        }
        if (NOT (IS_CAR_DEAD( g_U11087[0] )))
        {
            START_PLAYBACK_RECORDED_CAR( g_U11087[0], 1774 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( g_U11087[0], 750.00000000 );
            SET_PLAYBACK_SPEED( g_U11087[0], 0.90000000 );
            SET_BLIP_THROTTLE_RANDOMLY( g_U11087[0], 1 );
        }
        if (NOT (IS_CAR_DEAD( g_U11087[1] )))
        {
            START_PLAYBACK_RECORDED_CAR( g_U11087[1], 1775 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( g_U11087[1], 750.00000000 );
            SET_PLAYBACK_SPEED( g_U11087[1], 0.90000000 );
            SET_BLIP_THROTTLE_RANDOMLY( g_U11087[1], 1 );
        }
        SETTIMERA( 0 );
        SET_CAM_INTERP_STYLE_CORE( l_U588, l_U585, l_U587, 5000, 0 );
        sub_21608( 1 );
        sub_21711( ref l_U588, 1 );
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        l_U1133 = 3;
        break;
        case 3:
        if ((((sub_21824( l_U1010[0], -951.58010000, 1301.58400000, 23.86526000 )) < 2.90000000) || ((sub_21824( g_U11087[0], -951.58010000, 1301.58400000, 23.86526000 )) < 2.90000000)) || ((sub_21824( g_U11087[1], -951.58010000, 1301.58400000, 23.86526000 )) < 2.90000000))
        {
            if (l_U658 == 0)
            {
                SET_CAM_COMPONENT_SHAKE( l_U590, 0, 3, 1250, 0.00500000, 3.90000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 1, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 3, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 4, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                l_U658 = 1;
            }
        }
        if (TIMERA() > 5750)
        {
            SET_CAM_POS( l_U585, -1520.24600000, 657.23270000, 24.50341000 );
            SET_CAM_ROT( l_U585, -1.11089900, 0.00000000, -160.14230000 );
            SET_CAM_FOV( l_U585, 45.00000000 );
            SET_CAM_POS( l_U587, -1520.38100000, 657.60800000, 24.51115000 );
            SET_CAM_ROT( l_U587, -1.11089900, 0.00000000, -160.14230000 );
            SET_CAM_FOV( l_U587, 45.00000000 );
            SET_CAM_INTERP_STYLE_CORE( l_U588, l_U585, l_U587, 7000, 0 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U588, 3, 3, 1, 1 );
            sub_21711( ref l_U590, 0 );
            sub_21711( ref l_U588, 1 );
            SETTIMERA( 0 );
            l_U1133 = 4;
        }
        break;
        case 4:
        if ((TIMERA() > 3000) AND (NOT (sub_22391( l_U752 ))))
        {
            l_U1133 = 6;
        }
        break;
        case 6:
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_21711( ref l_U590, 0 );
        sub_21608( 0 );
        l_U658 = 0;
        l_U1133 = 0;
        return 1;
        break;
    }
    return 0;
}

int sub_29448()
{
    unknown uVar2;

    CLEAR_AREA_OF_CARS( -1250.38300000, -288.56790000, 2.26780000, 100.00000000 );
    CLEAR_AREA_OF_CHARS( -1250.38300000, -288.56790000, 2.26780000, 100.00000000 );
    switch (l_U1133)
    {
        case 0:
        REQUEST_CAR_RECORDING( 1776 );
        REQUEST_CAR_RECORDING( 1777 );
        REQUEST_CAR_RECORDING( 1778 );
        l_U1133 = 1;
        break;
        case 1:
        PRINTSTRING( "waiting on loading\n" );
        if (((HAS_CAR_RECORDING_BEEN_LOADED( 1776 )) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1777 ))) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1778 )))
        {
            l_U1133 = 2;
        }
        break;
        case 2:
        REQUEST_MODEL( 301427732 );
        while (NOT (HAS_MODEL_LOADED( 301427732 )))
        {
            WAIT( 0 );
            if (NOT (HAS_MODEL_LOADED( 301427732 )))
            {
                REQUEST_MODEL( 301427732 );
            }
        }
        if (NOT (IS_CHAR_IN_ANY_CAR( l_U592 )))
        {
            CREATE_CAR( 301427732, -1250.38300000, -288.56790000, 2.26780000, ref uVar2, 1 );
            WARP_CHAR_INTO_CAR( l_U592, uVar2 );
        }
        SET_CHAR_COORDINATES( l_U592, -1250.38300000, -288.56790000, 2.26780000 );
        SET_CHAR_HEADING( l_U592, 99.50900000 );
        sub_21104();
        SET_CAM_POS( l_U585, -1249.42700000, -290.24460000, 2.72642000 );
        SET_CAM_ROT( l_U585, 13.12696000, 0.00000100, 35.79051000 );
        SET_CAM_FOV( l_U585, 45.00000000 );
        SET_CAM_POS( l_U587, -1250.96000000, -290.24460000, 2.72642000 );
        SET_CAM_ROT( l_U587, -0.66880400, 0.00000000, 46.01213000 );
        SET_CAM_FOV( l_U587, 45.00000000 );
        if (NOT (IS_CAR_DEAD( l_U1010[0] )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U1010[0], 1776 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1010[0], 1550.00000000 + 500 );
            SET_PLAYBACK_SPEED( l_U1010[0], 0.90000000 );
            SET_BLIP_THROTTLE_RANDOMLY( l_U1010[0], 1 );
        }
        if (NOT (IS_CAR_DEAD( g_U11087[0] )))
        {
            START_PLAYBACK_RECORDED_CAR( g_U11087[0], 1777 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( g_U11087[0], 1550.00000000 );
            SET_PLAYBACK_SPEED( g_U11087[0], 0.90000000 );
            SET_BLIP_THROTTLE_RANDOMLY( g_U11087[0], 1 );
        }
        if (NOT (IS_CAR_DEAD( g_U11087[1] )))
        {
            START_PLAYBACK_RECORDED_CAR( g_U11087[1], 1778 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( g_U11087[1], 1550.00000000 );
            SET_PLAYBACK_SPEED( g_U11087[1], 0.90000000 );
            SET_BLIP_THROTTLE_RANDOMLY( g_U11087[1], 1 );
        }
        SETTIMERA( 0 );
        SET_CAM_INTERP_STYLE_CORE( l_U588, l_U585, l_U587, 6000, 0 );
        sub_21608( 1 );
        sub_21711( ref l_U588, 1 );
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        l_U1133 = 3;
        break;
        case 3:
        if ((((sub_21824( l_U1010[0], -951.58010000, 1301.58400000, 23.86526000 )) < 2.90000000) || ((sub_21824( g_U11087[0], -951.58010000, 1301.58400000, 23.86526000 )) < 2.90000000)) || ((sub_21824( g_U11087[1], -951.58010000, 1301.58400000, 23.86526000 )) < 2.90000000))
        {
            if (l_U658 == 0)
            {
                SET_CAM_COMPONENT_SHAKE( l_U590, 0, 3, 1250, 0.00500000, 3.90000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 1, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 3, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 4, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                l_U658 = 1;
            }
        }
        if (TIMERA() > 6000)
        {
            SET_CAM_POS( l_U585, -1247.06700000, -291.91730000, 5.28816400 );
            SET_CAM_ROT( l_U585, -20.81781000, 0.64266800, 49.03782000 );
            SET_CAM_FOV( l_U585, 37.80002000 );
            SET_CAM_POS( l_U587, -1247.06700000, -291.91730000, 5.28816400 );
            SET_CAM_ROT( l_U587, -20.81781000, 0.64266800, 49.03782000 );
            SET_CAM_FOV( l_U587, 40.80002000 );
            SET_CAM_INTERP_STYLE_CORE( l_U588, l_U585, l_U587, 7000, 0 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U588, 3, 3, 1, 1 );
            sub_21711( ref l_U590, 0 );
            sub_21711( ref l_U588, 1 );
            SETTIMERA( 0 );
            l_U1133 = 4;
        }
        break;
        case 4:
        if ((TIMERA() > 4000) AND (NOT (sub_22391( l_U752 ))))
        {
            l_U1133 = 6;
        }
        break;
        case 6:
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_21711( ref l_U590, 0 );
        sub_21608( 0 );
        l_U658 = 0;
        l_U1133 = 0;
        return 1;
        break;
    }
    return 0;
}

int sub_31082()
{
    unknown uVar2;

    CLEAR_AREA_OF_CARS( -120.46630000, 1428.77600000, 19.41560000, 100.00000000 );
    CLEAR_AREA_OF_CHARS( -120.46630000, 1428.77600000, 19.41560000, 100.00000000 );
    switch (l_U1133)
    {
        case 0:
        REQUEST_CAR_RECORDING( 1779 );
        REQUEST_CAR_RECORDING( 1780 );
        REQUEST_CAR_RECORDING( 1781 );
        l_U1133 = 1;
        break;
        case 1:
        PRINTSTRING( "waiting on loading\n" );
        if (((HAS_CAR_RECORDING_BEEN_LOADED( 1779 )) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1780 ))) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1781 )))
        {
            l_U1133 = 2;
        }
        break;
        case 2:
        REQUEST_MODEL( 301427732 );
        while (NOT (HAS_MODEL_LOADED( 301427732 )))
        {
            WAIT( 0 );
            if (NOT (HAS_MODEL_LOADED( 301427732 )))
            {
                REQUEST_MODEL( 301427732 );
            }
        }
        if (NOT (IS_CHAR_IN_ANY_CAR( l_U592 )))
        {
            CREATE_CAR( 301427732, -120.46630000, 1428.77600000, 19.41560000, ref uVar2, 1 );
            WARP_CHAR_INTO_CAR( l_U592, uVar2 );
        }
        LOAD_SCENE( -120.46630000, 1428.77600000, 19.41560000 );
        SET_CHAR_COORDINATES( l_U592, -120.46630000, 1428.77600000, 19.41560000 );
        SET_CHAR_HEADING( l_U592, 179.22220000 );
        sub_21104();
        SET_CAM_POS( l_U590, -120.60600000, 1424.29100000, 19.69459000 );
        SET_CAM_ROT( l_U590, 5.96055700, 0.00000000, -0.32322000 );
        SET_CAM_FOV( l_U590, 45.00000000 );
        if (NOT (IS_CAR_DEAD( l_U1010[0] )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U1010[0], 1779 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1010[0], 500.00000000 );
            SET_PLAYBACK_SPEED( l_U1010[0], 0.90000000 );
            SET_BLIP_THROTTLE_RANDOMLY( l_U1010[0], 1 );
        }
        if (NOT (IS_CAR_DEAD( g_U11087[0] )))
        {
            START_PLAYBACK_RECORDED_CAR( g_U11087[0], 1780 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( g_U11087[0], 1150.00000000 );
            SET_PLAYBACK_SPEED( g_U11087[0], 0.90000000 );
            SET_BLIP_THROTTLE_RANDOMLY( g_U11087[0], 1 );
        }
        if (NOT (IS_CAR_DEAD( g_U11087[1] )))
        {
            START_PLAYBACK_RECORDED_CAR( g_U11087[1], 1781 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( g_U11087[1], 800.00000000 );
            SET_PLAYBACK_SPEED( g_U11087[1], 0.90000000 );
            SET_BLIP_THROTTLE_RANDOMLY( g_U11087[1], 1 );
        }
        SETTIMERA( 0 );
        sub_21608( 1 );
        sub_21711( ref l_U590, 1 );
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        l_U1133 = 3;
        break;
        case 3:
        if ((((sub_21824( l_U1010[0], -951.58010000, 1301.58400000, 23.86526000 )) < 2.90000000) || ((sub_21824( g_U11087[0], -951.58010000, 1301.58400000, 23.86526000 )) < 2.90000000)) || ((sub_21824( g_U11087[1], -951.58010000, 1301.58400000, 23.86526000 )) < 2.90000000))
        {
            if (l_U658 == 0)
            {
                SET_CAM_COMPONENT_SHAKE( l_U590, 0, 3, 1250, 0.00500000, 3.90000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 1, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 3, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 4, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                l_U658 = 1;
            }
        }
        if (TIMERA() > 5550)
        {
            SET_CAM_POS( l_U585, -123.32010000, 1426.93000000, 19.86418000 );
            SET_CAM_ROT( l_U585, 4.34122300, -0.00000000, -51.62643000 );
            SET_CAM_FOV( l_U585, 43.00000000 );
            SET_CAM_POS( l_U587, -123.32010000, 1426.93000000, 19.86418000 );
            SET_CAM_ROT( l_U587, 4.34122300, -0.00000000, -51.62643000 );
            SET_CAM_FOV( l_U587, 45.00000000 );
            SET_CAM_INTERP_STYLE_CORE( l_U588, l_U585, l_U587, 5000, 0 );
            sub_21711( ref l_U590, 0 );
            sub_21711( ref l_U588, 1 );
            SETTIMERA( 0 );
            l_U1133 = 4;
        }
        break;
        case 4:
        if ((TIMERA() > 3000) AND (NOT (sub_22391( l_U752 ))))
        {
            l_U1133 = 6;
        }
        break;
        case 6:
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_21711( ref l_U590, 0 );
        sub_21608( 0 );
        l_U1133 = 0;
        l_U658 = 0;
        return 1;
        break;
    }
    return 0;
}

int sub_32614()
{
    unknown uVar2;
    unknown uVar3;

    CLEAR_AREA_OF_CARS( -342.66310000, 636.32290000, 13.80300000, 100.00000000 );
    CLEAR_AREA_OF_CHARS( -342.66310000, 636.32290000, 13.80300000, 100.00000000 );
    switch (l_U1133)
    {
        case 0:
        REQUEST_CAR_RECORDING( 1782 );
        REQUEST_CAR_RECORDING( 1783 );
        REQUEST_CAR_RECORDING( 1784 );
        l_U1133 = 1;
        break;
        case 1:
        PRINTSTRING( "waiting on loading\n" );
        if (((HAS_CAR_RECORDING_BEEN_LOADED( 1782 )) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1783 ))) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1784 )))
        {
            l_U1133 = 2;
        }
        break;
        case 2:
        REQUEST_MODEL( 301427732 );
        while (NOT (HAS_MODEL_LOADED( 301427732 )))
        {
            WAIT( 0 );
            if (NOT (HAS_MODEL_LOADED( 301427732 )))
            {
                REQUEST_MODEL( 301427732 );
            }
        }
        if (NOT (IS_CHAR_IN_ANY_CAR( l_U592 )))
        {
            CREATE_CAR( 301427732, -342.66310000, 636.32290000, 14.29260000, ref uVar2, 1 );
            WARP_CHAR_INTO_CAR( l_U592, uVar2 );
        }
        LOAD_SCENE( -342.66310000, 636.32290000, 14.29260000 );
        SET_CHAR_COORDINATES( l_U592, -342.66310000, 636.32290000, 14.69260000 );
        SET_CHAR_HEADING( l_U592, 133.27190000 );
        GET_CAR_CHAR_IS_USING( l_U592, ref uVar3 );
        SET_CAR_ON_GROUND_PROPERLY( uVar3 );
        sub_21104();
        SET_CAM_POS( l_U585, -346.52620000, 632.61380000, 31.81870000 );
        SET_CAM_ROT( l_U585, 2.52909900, -0.00000000, -44.08124000 );
        SET_CAM_FOV( l_U585, 21.60006000 );
        SETTIMERA( 0 );
        sub_21608( 1 );
        sub_21711( ref l_U585, 1 );
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        l_U1133 = 3;
        break;
        case 3:
        if (TIMERA() > 2000)
        {
            SET_CAM_POS( l_U585, -346.52620000, 632.61380000, 31.81870000 );
            SET_CAM_ROT( l_U585, 2.52909900, -0.00000000, -44.08124000 );
            SET_CAM_FOV( l_U585, 21.60006000 );
            SET_CAM_POS( l_U587, -345.98740000, 633.17050000, 14.28842000 );
            SET_CAM_ROT( l_U587, 2.52909900, -0.00000000, -44.08124000 );
            SET_CAM_FOV( l_U587, 60.00000000 );
            SET_CAM_INTERP_STYLE_CORE( l_U588, l_U585, l_U587, 11000, 0 );
            SETTIMERA( 0 );
            sub_21711( ref l_U588, 1 );
            sub_21711( ref l_U585, 0 );
            l_U1133 = 4;
        }
        break;
        case 4:
        if ((TIMERA() > 7000) AND (l_U659 == 0))
        {
            if (NOT (IS_CAR_DEAD( l_U1010[0] )))
            {
                START_PLAYBACK_RECORDED_CAR( l_U1010[0], 1782 );
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1010[0], 0.00000000 );
                SET_PLAYBACK_SPEED( l_U1010[0], 0.90000000 );
                SET_BLIP_THROTTLE_RANDOMLY( l_U1010[0], 1 );
            }
            if (NOT (IS_CAR_DEAD( g_U11087[0] )))
            {
                START_PLAYBACK_RECORDED_CAR( g_U11087[0], 1783 );
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( g_U11087[0], 0.00000000 );
                SET_PLAYBACK_SPEED( g_U11087[0], 0.90000000 );
                SET_BLIP_THROTTLE_RANDOMLY( g_U11087[0], 1 );
            }
            if (NOT (IS_CAR_DEAD( g_U11087[1] )))
            {
                START_PLAYBACK_RECORDED_CAR( g_U11087[1], 1784 );
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( g_U11087[1], 500.00000000 );
                SET_PLAYBACK_SPEED( g_U11087[1], 0.90000000 );
                SET_BLIP_THROTTLE_RANDOMLY( g_U11087[1], 1 );
            }
            l_U659 = 1;
        }
        if ((TIMERA() > 12500) AND (NOT (sub_22391( l_U752 ))))
        {
            l_U1133 = 6;
        }
        break;
        case 6:
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_21711( ref l_U590, 0 );
        sub_21608( 0 );
        l_U658 = 0;
        l_U1133 = 0;
        return 1;
        break;
    }
    return 0;
}

int sub_33942()
{
    unknown uVar2;

    CLEAR_AREA_OF_CARS( 151.63360000, -388.32460000, 13.75420000, 100.00000000 );
    CLEAR_AREA_OF_CHARS( 151.63360000, -388.32460000, 13.75420000, 100.00000000 );
    switch (l_U1133)
    {
        case 0:
        REQUEST_CAR_RECORDING( 1785 );
        REQUEST_CAR_RECORDING( 1786 );
        REQUEST_CAR_RECORDING( 1787 );
        l_U1133 = 1;
        break;
        case 1:
        PRINTSTRING( "waiting on loading\n" );
        if (((HAS_CAR_RECORDING_BEEN_LOADED( 1785 )) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1786 ))) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1787 )))
        {
            l_U1133 = 2;
        }
        break;
        case 2:
        REQUEST_MODEL( 301427732 );
        while (NOT (HAS_MODEL_LOADED( 301427732 )))
        {
            WAIT( 0 );
            if (NOT (HAS_MODEL_LOADED( 301427732 )))
            {
                REQUEST_MODEL( 301427732 );
            }
        }
        if (NOT (IS_CHAR_IN_ANY_CAR( l_U592 )))
        {
            CREATE_CAR( 301427732, 151.63360000, -388.32460000, 13.75420000, ref uVar2, 1 );
            WARP_CHAR_INTO_CAR( l_U592, uVar2 );
        }
        LOAD_SCENE( 151.63360000, -388.32460000, 13.75420000 );
        SET_CHAR_COORDINATES( l_U592, 151.63360000, -388.32460000, 13.75420000 );
        SET_CHAR_HEADING( l_U592, 125.69640000 );
        sub_21104();
        SET_CAM_POS( l_U590, 151.18980000, -400.58730000, 13.97530000 );
        SET_CAM_ROT( l_U590, 8.71182300, -0.00000000, -86.07436000 );
        SET_CAM_FOV( l_U590, 45.00000000 );
        if (NOT (IS_CAR_DEAD( l_U1010[0] )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U1010[0], 1785 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1010[0], 800.00000000 );
            SET_PLAYBACK_SPEED( l_U1010[0], 0.90000000 );
            SET_BLIP_THROTTLE_RANDOMLY( l_U1010[0], 1 );
        }
        if (NOT (IS_CAR_DEAD( g_U11087[0] )))
        {
            START_PLAYBACK_RECORDED_CAR( g_U11087[0], 1786 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( g_U11087[0], 800.00000000 );
            SET_PLAYBACK_SPEED( g_U11087[0], 0.90000000 );
            SET_BLIP_THROTTLE_RANDOMLY( g_U11087[0], 1 );
        }
        if (NOT (IS_CAR_DEAD( g_U11087[1] )))
        {
            START_PLAYBACK_RECORDED_CAR( g_U11087[1], 1787 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( g_U11087[1], 800.00000000 );
            SET_PLAYBACK_SPEED( g_U11087[1], 0.90000000 );
            SET_BLIP_THROTTLE_RANDOMLY( g_U11087[1], 1 );
        }
        SETTIMERA( 0 );
        sub_21608( 1 );
        sub_21711( ref l_U590, 1 );
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        l_U1133 = 3;
        break;
        case 3:
        if (TIMERA() > 5550)
        {
            SET_CAM_POS( l_U585, 150.36560000, -386.29510000, 15.10306000 );
            SET_CAM_ROT( l_U585, -2.73543700, -0.00000000, -157.41010000 );
            SET_CAM_FOV( l_U585, 28.20004000 );
            SET_CAM_POS( l_U587, 150.36560000, -386.29510000, 15.10306000 );
            SET_CAM_ROT( l_U587, -2.73543700, -0.00000000, -157.41010000 );
            SET_CAM_FOV( l_U587, 31.20004000 );
            SET_CAM_INTERP_STYLE_CORE( l_U588, l_U585, l_U587, 5000, 0 );
            sub_21711( ref l_U590, 0 );
            sub_21711( ref l_U588, 1 );
            SETTIMERA( 0 );
            l_U1133 = 4;
        }
        break;
        case 4:
        if ((TIMERA() > 6500) AND (NOT (sub_22391( l_U752 ))))
        {
            l_U1133 = 6;
        }
        break;
        case 6:
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_21711( ref l_U590, 0 );
        sub_21608( 0 );
        l_U1133 = 0;
        l_U658 = 0;
        return 1;
        break;
    }
    return 0;
}

int sub_35218()
{
    unknown uVar2;

    CLEAR_AREA_OF_CARS( 425.74800000, 1521.55600000, 15.59500000, 100.00000000 );
    CLEAR_AREA_OF_CHARS( 425.74800000, 1521.55600000, 15.59500000, 100.00000000 );
    switch (l_U1133)
    {
        case 0:
        REQUEST_CAR_RECORDING( 1788 );
        REQUEST_CAR_RECORDING( 1789 );
        REQUEST_CAR_RECORDING( 1790 );
        l_U1133 = 1;
        break;
        case 1:
        PRINTSTRING( "waiting on loading\n" );
        if (((HAS_CAR_RECORDING_BEEN_LOADED( 1788 )) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1789 ))) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1790 )))
        {
            l_U1133 = 2;
        }
        break;
        case 2:
        REQUEST_MODEL( 301427732 );
        while (NOT (HAS_MODEL_LOADED( 301427732 )))
        {
            WAIT( 0 );
            if (NOT (HAS_MODEL_LOADED( 301427732 )))
            {
                REQUEST_MODEL( 301427732 );
            }
        }
        if (NOT (IS_CHAR_IN_ANY_CAR( l_U592 )))
        {
            CREATE_CAR( 301427732, 425.74800000, 1521.55600000, 15.59500000, ref uVar2, 1 );
            WARP_CHAR_INTO_CAR( l_U592, uVar2 );
        }
        LOAD_SCENE( 425.74800000, 1521.55600000, 15.59500000 );
        SET_CHAR_COORDINATES( l_U592, 425.74800000, 1521.55600000, 15.59500000 );
        SET_CHAR_HEADING( l_U592, 44.10210000 );
        sub_21104();
        SET_CAM_POS( l_U585, 422.95080000, 1522.26600000, 15.92950000 );
        SET_CAM_ROT( l_U585, 6.27611400, 0.00000000, -93.67178000 );
        SET_CAM_FOV( l_U585, 45.00000000 );
        if (NOT (IS_CAR_DEAD( l_U1010[0] )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U1010[0], 1788 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1010[0], 0.00000000 );
            SET_PLAYBACK_SPEED( l_U1010[0], 0.86000000 );
            SET_BLIP_THROTTLE_RANDOMLY( l_U1010[0], 1 );
        }
        if (NOT (IS_CAR_DEAD( g_U11087[0] )))
        {
            START_PLAYBACK_RECORDED_CAR( g_U11087[0], 1789 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( g_U11087[0], 0.00000000 );
            SET_PLAYBACK_SPEED( g_U11087[0], 0.80000000 );
            SET_BLIP_THROTTLE_RANDOMLY( g_U11087[0], 1 );
        }
        if (NOT (IS_CAR_DEAD( g_U11087[1] )))
        {
            START_PLAYBACK_RECORDED_CAR( g_U11087[1], 1790 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( g_U11087[1], 0.00000000 );
            SET_PLAYBACK_SPEED( g_U11087[1], 0.50000000 );
            SET_BLIP_THROTTLE_RANDOMLY( g_U11087[1], 1 );
        }
        SETTIMERA( 0 );
        sub_21608( 1 );
        sub_21711( ref l_U585, 1 );
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        l_U1133 = 3;
        break;
        case 3:
        if (TIMERA() > 1550)
        {
            SET_CAM_POS( l_U585, 422.95080000, 1522.26600000, 15.92950000 );
            SET_CAM_ROT( l_U585, 6.27611400, 0.00000000, -93.67178000 );
            SET_CAM_FOV( l_U585, 45.00000000 );
            SET_CAM_POS( l_U587, 414.45140000, 1533.86800000, 20.18112000 );
            SET_CAM_ROT( l_U587, -25.49888000, -0.00000000, -109.90870000 );
            SET_CAM_FOV( l_U587, 45.00000000 );
            SET_CAM_INTERP_STYLE_CORE( l_U588, l_U585, l_U587, 6000, 0 );
            sub_21711( ref l_U585, 0 );
            sub_21711( ref l_U588, 1 );
            l_U1133 = 4;
        }
        break;
        case 4:
        if ((TIMERA() > 8750) AND (NOT (sub_22391( l_U752 ))))
        {
            SETTIMERA( 0 );
            l_U1133 = 6;
        }
        break;
        case 6:
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_21711( ref l_U590, 0 );
        sub_21608( 0 );
        l_U658 = 0;
        l_U1133 = 0;
        return 1;
        break;
    }
    return 0;
}

int sub_36483()
{
    unknown uVar2;

    CLEAR_AREA_OF_CARS( 821.13190000, 1579.15300000, 16.42320000, 100.00000000 );
    CLEAR_AREA_OF_CHARS( 821.13190000, 1579.15300000, 16.42320000, 100.00000000 );
    switch (l_U1133)
    {
        case 0:
        REQUEST_CAR_RECORDING( 1791 );
        REQUEST_CAR_RECORDING( 1792 );
        REQUEST_CAR_RECORDING( 1793 );
        l_U1133 = 1;
        break;
        case 1:
        PRINTSTRING( "waiting on loading\n" );
        if (((HAS_CAR_RECORDING_BEEN_LOADED( 1791 )) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1792 ))) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1793 )))
        {
            l_U1133 = 2;
        }
        break;
        case 2:
        REQUEST_MODEL( 301427732 );
        while (NOT (HAS_MODEL_LOADED( 301427732 )))
        {
            WAIT( 0 );
            if (NOT (HAS_MODEL_LOADED( 301427732 )))
            {
                REQUEST_MODEL( 301427732 );
            }
        }
        if (NOT (IS_CHAR_IN_ANY_CAR( l_U592 )))
        {
            CREATE_CAR( 301427732, 821.13190000, 1579.15300000, 16.42320000, ref uVar2, 1 );
            WARP_CHAR_INTO_CAR( l_U592, uVar2 );
        }
        LOAD_SCENE( 821.13190000, 1579.15300000, 16.42320000 );
        SET_CHAR_COORDINATES( l_U592, 821.13190000, 1579.15300000, 16.42320000 );
        SET_CHAR_HEADING( l_U592, 335.07740000 );
        sub_21104();
        SET_CAM_POS( l_U585, 829.55430000, 1575.37200000, 16.66040000 );
        SET_CAM_ROT( l_U585, 5.04278700, -0.00000000, 72.23485000 );
        SET_CAM_FOV( l_U585, 35.40002000 );
        if (NOT (IS_CAR_DEAD( l_U1010[0] )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U1010[0], 1791 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1010[0], 0.00000000 );
            SET_PLAYBACK_SPEED( l_U1010[0], 0.75000000 );
            SET_BLIP_THROTTLE_RANDOMLY( l_U1010[0], 1 );
        }
        if (NOT (IS_CAR_DEAD( g_U11087[0] )))
        {
            START_PLAYBACK_RECORDED_CAR( g_U11087[0], 1792 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( g_U11087[0], 0.00000000 );
            SET_PLAYBACK_SPEED( g_U11087[0], 0.75000000 );
            SET_BLIP_THROTTLE_RANDOMLY( g_U11087[0], 1 );
        }
        if (NOT (IS_CAR_DEAD( g_U11087[1] )))
        {
            START_PLAYBACK_RECORDED_CAR( g_U11087[1], 1793 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( g_U11087[1], 0.00000000 );
            SET_PLAYBACK_SPEED( g_U11087[1], 0.75000000 );
            SET_BLIP_THROTTLE_RANDOMLY( g_U11087[1], 1 );
        }
        SETTIMERA( 0 );
        sub_21608( 1 );
        sub_21711( ref l_U585, 1 );
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        l_U1133 = 3;
        break;
        case 3:
        if (TIMERA() > 1000)
        {
            SET_CAM_POS( l_U585, 829.55430000, 1575.37200000, 16.66040000 );
            SET_CAM_ROT( l_U585, 5.04278700, -0.00000000, 72.23485000 );
            SET_CAM_FOV( l_U585, 35.40002000 );
            SET_CAM_POS( l_U587, 829.21880000, 1585.32900000, 16.88915000 );
            SET_CAM_ROT( l_U587, 6.12839700, 0.00000000, 65.49046000 );
            SET_CAM_FOV( l_U587, 31.50003000 );
            SET_CAM_INTERP_STYLE_CORE( l_U588, l_U585, l_U587, 6000, 0 );
            sub_21711( ref l_U585, 0 );
            sub_21711( ref l_U588, 1 );
            l_U1133 = 4;
        }
        break;
        case 4:
        if ((TIMERA() > 8750) AND (NOT (sub_22391( l_U752 ))))
        {
            SETTIMERA( 0 );
            l_U1133 = 6;
        }
        break;
        case 6:
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_21711( ref l_U590, 0 );
        sub_21608( 0 );
        l_U658 = 0;
        l_U1133 = 0;
        return 1;
        break;
    }
    return 0;
}

int sub_37745()
{
    unknown uVar2;

    CLEAR_AREA_OF_CARS( 1344.76300000, 537.68550000, 28.72320000, 100.00000000 );
    CLEAR_AREA_OF_CHARS( 1344.76300000, 537.68550000, 28.72320000, 100.00000000 );
    switch (l_U1133)
    {
        case 0:
        REQUEST_CAR_RECORDING( 1794 );
        REQUEST_CAR_RECORDING( 1795 );
        REQUEST_CAR_RECORDING( 1796 );
        l_U1133 = 1;
        break;
        case 1:
        PRINTSTRING( "waiting on loading\n" );
        if (((HAS_CAR_RECORDING_BEEN_LOADED( 1794 )) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1795 ))) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1796 )))
        {
            l_U1133 = 2;
        }
        break;
        case 2:
        REQUEST_MODEL( 301427732 );
        while (NOT (HAS_MODEL_LOADED( 301427732 )))
        {
            WAIT( 0 );
            if (NOT (HAS_MODEL_LOADED( 301427732 )))
            {
                REQUEST_MODEL( 301427732 );
            }
        }
        if (NOT (IS_CHAR_IN_ANY_CAR( l_U592 )))
        {
            CREATE_CAR( 301427732, 1344.76300000, 537.68550000, 28.72320000, ref uVar2, 1 );
            WARP_CHAR_INTO_CAR( l_U592, uVar2 );
        }
        LOAD_SCENE( 1344.76300000, 537.68550000, 28.72320000 );
        SET_CHAR_COORDINATES( l_U592, 1344.76300000, 537.68550000, 28.72320000 );
        SET_CHAR_HEADING( l_U592, 87.23530000 );
        sub_21104();
        SET_CAM_POS( l_U585, 1344.66600000, 535.96650000, 35.24185000 );
        SET_CAM_ROT( l_U585, -4.75198200, -0.00000000, 10.78190000 );
        SET_CAM_FOV( l_U585, 35.00000000 );
        SET_CAM_POS( l_U587, 1344.67600000, 536.23040000, 29.77342000 );
        SET_CAM_ROT( l_U587, 3.54675200, 0.00000000, 10.92815000 );
        SET_CAM_FOV( l_U587, 45.00000000 );
        if (NOT (IS_CAR_DEAD( l_U1010[0] )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U1010[0], 1794 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1010[0], 750.00000000 );
            SET_PLAYBACK_SPEED( l_U1010[0], 0.90000000 );
            SET_BLIP_THROTTLE_RANDOMLY( l_U1010[0], 1 );
        }
        if (NOT (IS_CAR_DEAD( g_U11087[0] )))
        {
            START_PLAYBACK_RECORDED_CAR( g_U11087[0], 1795 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( g_U11087[0], 750.00000000 );
            SET_PLAYBACK_SPEED( g_U11087[0], 0.90000000 );
            SET_BLIP_THROTTLE_RANDOMLY( g_U11087[0], 1 );
        }
        if (NOT (IS_CAR_DEAD( g_U11087[1] )))
        {
            START_PLAYBACK_RECORDED_CAR( g_U11087[1], 1796 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( g_U11087[1], 750.00000000 );
            SET_PLAYBACK_SPEED( g_U11087[1], 0.90000000 );
            SET_BLIP_THROTTLE_RANDOMLY( g_U11087[1], 1 );
        }
        SETTIMERA( 0 );
        SET_CAM_INTERP_STYLE_CORE( l_U588, l_U585, l_U587, 7000, 0 );
        sub_21608( 1 );
        sub_21711( ref l_U588, 1 );
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        l_U1133 = 3;
        break;
        case 3:
        if ((((sub_21824( l_U1010[0], -951.58010000, 1301.58400000, 23.86526000 )) < 2.90000000) || ((sub_21824( g_U11087[0], -951.58010000, 1301.58400000, 23.86526000 )) < 2.90000000)) || ((sub_21824( g_U11087[1], -951.58010000, 1301.58400000, 23.86526000 )) < 2.90000000))
        {
            if (l_U658 == 0)
            {
                SET_CAM_COMPONENT_SHAKE( l_U590, 0, 3, 1250, 0.00500000, 3.90000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 1, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 3, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 4, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                l_U658 = 1;
            }
        }
        if (TIMERA() > 6000)
        {
            SET_CAM_POS( l_U585, 1346.57800000, 531.89680000, 31.82141000 );
            SET_CAM_ROT( l_U585, -14.50094000, -0.00000000, 31.06181000 );
            SET_CAM_FOV( l_U585, 35.70002000 );
            SET_CAM_POS( l_U587, 1346.57800000, 531.89680000, 31.82141000 );
            SET_CAM_ROT( l_U587, -14.50094000, -0.00000000, 31.06181000 );
            SET_CAM_FOV( l_U587, 37.70002000 );
            SET_CAM_INTERP_STYLE_CORE( l_U588, l_U585, l_U587, 7000, 0 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U588, 3, 3, 1, 1 );
            sub_21711( ref l_U590, 0 );
            sub_21711( ref l_U588, 1 );
            SETTIMERA( 0 );
            l_U1133 = 4;
        }
        break;
        case 4:
        if ((TIMERA() > 4000) AND (NOT (sub_22391( l_U752 ))))
        {
            l_U1133 = 6;
        }
        break;
        case 6:
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_21711( ref l_U590, 0 );
        sub_21608( 0 );
        l_U658 = 0;
        l_U1133 = 0;
        return 1;
        break;
    }
    return 0;
}

int sub_39383()
{
    unknown uVar2;

    CLEAR_AREA_OF_CARS( 879.64480000, -477.59940000, 13.97320000, 75.00000000 );
    CLEAR_AREA_OF_CHARS( 879.64480000, -477.59940000, 13.97320000, 50.00000000 );
    switch (l_U1133)
    {
        case 0:
        REQUEST_CAR_RECORDING( 1797 );
        REQUEST_CAR_RECORDING( 1798 );
        REQUEST_CAR_RECORDING( 1799 );
        l_U1133 = 1;
        break;
        case 1:
        PRINTSTRING( "waiting on loading\n" );
        if (((HAS_CAR_RECORDING_BEEN_LOADED( 1797 )) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1798 ))) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1799 )))
        {
            l_U1133 = 2;
        }
        break;
        case 2:
        REQUEST_MODEL( 301427732 );
        while (NOT (HAS_MODEL_LOADED( 301427732 )))
        {
            WAIT( 0 );
            if (NOT (HAS_MODEL_LOADED( 301427732 )))
            {
                REQUEST_MODEL( 301427732 );
            }
        }
        if (NOT (IS_CHAR_IN_ANY_CAR( l_U592 )))
        {
            CREATE_CAR( 301427732, 879.64480000, -477.59940000, 13.97320000, ref uVar2, 1 );
            WARP_CHAR_INTO_CAR( l_U592, uVar2 );
        }
        LOAD_SCENE( 879.64480000, -477.59940000, 13.97320000 );
        SET_CHAR_COORDINATES( l_U592, 879.64480000, -477.59940000, 13.97320000 );
        SET_CHAR_HEADING( l_U592, 358.62180000 );
        sub_21104();
        SET_CAM_POS( l_U585, 868.52940000, -474.32400000, 13.90569000 );
        SET_CAM_ROT( l_U585, 14.50532000, 0.00000100, -119.19390000 );
        SET_CAM_FOV( l_U585, 45.00000000 );
        SET_CAM_POS( l_U587, 872.13030000, -469.16390000, 13.90569000 );
        SET_CAM_ROT( l_U587, 14.50532000, -0.00000000, -138.78880000 );
        SET_CAM_FOV( l_U587, 45.00000000 );
        if (NOT (IS_CAR_DEAD( l_U1010[0] )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U1010[0], 1797 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1010[0], 750.00000000 );
            SET_PLAYBACK_SPEED( l_U1010[0], 0.70000000 );
            SET_BLIP_THROTTLE_RANDOMLY( l_U1010[0], 1 );
        }
        if (NOT (IS_CAR_DEAD( g_U11087[0] )))
        {
            START_PLAYBACK_RECORDED_CAR( g_U11087[0], 1798 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( g_U11087[0], 500.00000000 );
            SET_PLAYBACK_SPEED( g_U11087[0], 0.70000000 );
            SET_BLIP_THROTTLE_RANDOMLY( g_U11087[0], 1 );
        }
        if (NOT (IS_CAR_DEAD( g_U11087[1] )))
        {
            START_PLAYBACK_RECORDED_CAR( g_U11087[1], 1799 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( g_U11087[1], 0.00000000 );
            SET_PLAYBACK_SPEED( g_U11087[1], 0.70000000 );
            SET_BLIP_THROTTLE_RANDOMLY( g_U11087[1], 1 );
        }
        SETTIMERA( 0 );
        SET_CAM_INTERP_STYLE_CORE( l_U588, l_U585, l_U587, 8000, 0 );
        sub_21608( 1 );
        sub_21711( ref l_U588, 1 );
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        l_U1133 = 3;
        break;
        case 3:
        if ((((sub_21824( l_U1010[0], 868.52940000, -474.32400000, 13.90569000 )) < 4.90000000) || ((sub_21824( g_U11087[0], 868.52940000, -474.32400000, 13.90569000 )) < 3.90000000)) || ((sub_21824( g_U11087[1], 868.52940000, -474.32400000, 13.90569000 )) < 3.90000000))
        {
            if (l_U658 == 0)
            {
                SET_CAM_COMPONENT_SHAKE( l_U590, 0, 3, 1250, 0.00500000, 3.90000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 1, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 3, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 4, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                l_U658 = 1;
            }
        }
        if (TIMERA() > 6550)
        {
            SET_CAM_POS( l_U585, 876.72570000, -480.65960000, 15.42315000 );
            SET_CAM_ROT( l_U585, -9.10053900, -0.00000000, -27.86421000 );
            SET_CAM_FOV( l_U585, 45.00000000 );
            SET_CAM_POS( l_U587, 876.72570000, -480.65960000, 15.42315000 );
            SET_CAM_ROT( l_U587, -9.10053900, -0.00000000, -27.86421000 );
            SET_CAM_FOV( l_U587, 47.00000000 );
            SET_CAM_INTERP_STYLE_CORE( l_U588, l_U585, l_U587, 4500, 0 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U588, 3, 3, 1, 1 );
            sub_21711( ref l_U590, 0 );
            sub_21711( ref l_U588, 1 );
            SETTIMERA( 0 );
            l_U1133 = 4;
        }
        break;
        case 4:
        if ((TIMERA() > 3000) AND (NOT (sub_22391( l_U752 ))))
        {
            l_U1133 = 6;
        }
        break;
        case 6:
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_21711( ref l_U590, 0 );
        sub_21608( 0 );
        l_U1133 = 0;
        l_U658 = 0;
        return 1;
        break;
    }
    return 0;
}

void sub_41022()
{
    int I;

    if ((NOT (DOES_BLIP_EXIST( l_U1044[0] ))) AND (NOT (IS_CHAR_INJURED( l_U845[0]._fU0 ))))
    {
        ADD_BLIP_FOR_CHAR( l_U845[0]._fU0, ref l_U1044[0] );
        SET_BLIP_AS_FRIENDLY( l_U1044[0], 1 );
        CHANGE_BLIP_SCALE( l_U1044[0], 0.50000000 );
        CHANGE_BLIP_DISPLAY( l_U1044[0], 5 );
    }
    if ((NOT (DOES_BLIP_EXIST( l_U1044[1] ))) AND (NOT (IS_CHAR_INJURED( g_U11081[0] ))))
    {
        ADD_BLIP_FOR_CHAR( g_U11081[0], ref l_U1044[1] );
        SET_BLIP_AS_FRIENDLY( l_U1044[1], 1 );
        CHANGE_BLIP_SCALE( l_U1044[1], 0.50000000 );
        CHANGE_BLIP_DISPLAY( l_U1044[1], 5 );
    }
    if ((NOT (DOES_BLIP_EXIST( l_U1044[2] ))) AND (NOT (IS_CHAR_INJURED( g_U11081[1] ))))
    {
        ADD_BLIP_FOR_CHAR( g_U11081[1], ref l_U1044[2] );
        SET_BLIP_AS_FRIENDLY( l_U1044[2], 1 );
        CHANGE_BLIP_SCALE( l_U1044[2], 0.50000000 );
        CHANGE_BLIP_DISPLAY( l_U1044[2], 5 );
    }
    for ( I = 0; I <= 2; I++ )
    {
        if ((NOT (DOES_BLIP_EXIST( l_U1044[I + 3] ))) AND (NOT (IS_CHAR_INJURED( l_U838[(I * 2) + 1] ))))
        {
            ADD_BLIP_FOR_CHAR( l_U838[(I * 2) + 1], ref l_U1044[I + 3] );
            SET_BLIP_AS_FRIENDLY( l_U1044[I + 3], 1 );
            CHANGE_BLIP_SCALE( l_U1044[I + 3], 0.50000000 );
            CHANGE_BLIP_DISPLAY( l_U1044[I + 3], 5 );
        }
    }
    return;
}

void sub_41539()
{
    int I;

    if (NOT (IS_CHAR_INJURED( l_U845[0]._fU0 )))
    {
        SET_CHAR_PROOFS( l_U845[0]._fU0, 0, 0, 0, 1, 0 );
    }
    if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
    {
        SET_CHAR_PROOFS( g_U11081[0], 0, 0, 0, 1, 0 );
    }
    if (NOT (IS_CHAR_INJURED( g_U11081[1] )))
    {
        SET_CHAR_PROOFS( g_U11081[1], 0, 0, 0, 1, 0 );
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U838[(I * 2) + 1] )))
        {
            SET_CHAR_PROOFS( l_U838[(I * 2) + 1], 0, 0, 0, 1, 0 );
        }
    }
    return;
}

void sub_41757()
{
    int iVar2;
    int iVar3;

    GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref l_U667 );
    if (g_U39123 == 0)
    {
        l_U667 = 0;
    }
    if (l_U667 <= 40)
    {
        l_U1092[0] = 977480632;
        l_U1092[1] = -1159156463;
        l_U1092[2] = 479817841;
        l_U1092[3] = 226415164;
        l_U1092[4] = 15972646;
        l_U1092[5] = -2107556865;
        l_U671 = 0;
        l_U1100[0] = -571009320;
        l_U1100[1] = 2006142190;
        l_U1100[2] = 729783779;
        l_U677[0] = 112;
        l_U682[0] = 74;
        l_U687[0] = 27;
        l_U692[0] = 0;
        l_U625[0] = 0;
        l_U629[0] = 0;
        l_U633[0] = 0;
        l_U637[0] = 0;
        l_U677[1] = 132;
        l_U682[1] = 0;
        l_U687[1] = 131;
        l_U692[1] = 0;
        l_U625[1] = 0;
        l_U629[1] = 0;
        l_U633[1] = 0;
        l_U637[1] = 0;
        l_U677[2] = 0;
        l_U682[2] = 0;
        l_U687[2] = 0;
        l_U692[2] = 0;
        l_U625[2] = 0;
        l_U629[2] = 0;
        l_U633[2] = 0;
        l_U637[2] = 0;
    }
    else if ((l_U667 > 40) AND (l_U667 <= 55))
    {
        l_U1092[0] = -1500397869;
        l_U1092[1] = -881358690;
        l_U1092[2] = 1609755055;
        l_U1092[3] = -330497431;
        l_U1092[4] = 1117105909;
        l_U1092[5] = -1500397869;
        l_U671 = 1;
        l_U1100[0] = 486987393;
        l_U1100[1] = 2006667053;
        l_U1100[2] = 1063483177;
        l_U677[0] = 0;
        l_U682[0] = 59;
        l_U687[0] = 113;
        l_U692[0] = 90;
        l_U625[0] = 0;
        l_U629[0] = 1;
        l_U633[0] = 0;
        l_U637[0] = 0;
        l_U677[1] = 0;
        l_U682[1] = 59;
        l_U687[1] = 113;
        l_U692[1] = 127;
        l_U625[1] = 0;
        l_U629[1] = 0;
        l_U633[1] = 0;
        l_U637[1] = 0;
        l_U677[2] = 0;
        l_U682[2] = 59;
        l_U687[2] = 113;
        l_U692[2] = 90;
        l_U625[2] = 0;
        l_U629[2] = 0;
        l_U633[2] = 0;
        l_U637[2] = 0;
    }
    else if ((l_U667 > 55) AND (l_U667 <= 70))
    {
        l_U1092[0] = -503930010;
        l_U1092[1] = -235584669;
        l_U1092[2] = 207714363;
        l_U1092[3] = 514268366;
        l_U1092[4] = -503930010;
        l_U1092[5] = -235584669;
        l_U671 = 2;
        l_U1100[0] = -341892653;
        l_U1100[1] = 2016857647;
        if (l_U1061 == 1)
        {
            l_U1100[2] = 569305213;
        }
        else
        {
            l_U1100[2] = 904750859;
        }
        l_U677[0] = 33;
        l_U682[0] = 30;
        l_U687[0] = 37;
        l_U692[0] = 0;
        l_U625[0] = 1;
        l_U629[0] = 1;
        l_U633[0] = 1;
        l_U637[0] = 1;
        l_U677[1] = 32;
        l_U682[1] = 0;
        l_U687[1] = 30;
        l_U692[1] = 1;
        l_U625[1] = 1;
        l_U629[1] = 1;
        l_U633[1] = 1;
        l_U637[1] = 1;
        l_U677[2] = 32;
        l_U682[2] = 0;
        l_U687[2] = 30;
        l_U692[2] = 1;
        l_U625[2] = 0;
        l_U629[2] = 0;
        l_U633[2] = 0;
        l_U637[2] = 0;
    }
    else if ((l_U667 > 70) AND (l_U667 <= 85))
    {
        l_U1092[0] = -2088164056;
        l_U1092[1] = 1976502708;
        l_U1092[2] = 1543404628;
        l_U1092[3] = 1865532596;
        l_U1092[4] = 431692232;
        l_U1092[5] = -1836006237;
        l_U671 = 3;
        l_U1100[0] = 83136452;
        l_U1100[1] = -322343873;
        l_U1100[2] = -1961627517;
        l_U677[0] = 0;
        l_U682[0] = 0;
        l_U687[0] = 3;
        l_U692[0] = 0;
        l_U625[0] = 1;
        l_U629[0] = 1;
        l_U633[0] = 1;
        l_U637[0] = 1;
        l_U677[1] = 0;
        l_U682[1] = 1;
        l_U687[1] = 1;
        l_U692[1] = 0;
        l_U625[1] = 1;
        l_U629[1] = 1;
        l_U633[1] = 1;
        l_U637[1] = 0;
        l_U677[2] = 0;
        l_U682[2] = 0;
        l_U687[2] = 0;
        l_U692[2] = 0;
        l_U625[2] = 0;
        l_U629[2] = 0;
        l_U633[2] = 0;
        l_U637[2] = 0;
    }
    else if (l_U667 > 85)
    {
        l_U1092[0] = -302362397;
        l_U1092[1] = -1616890832;
        l_U1092[2] = 64730935;
        l_U1092[3] = 510389335;
        l_U1092[4] = -302362397;
        l_U1092[5] = -1616890832;
        l_U671 = 4;
        l_U1100[0] = 1349725314;
        l_U1100[1] = 1376298265;
        l_U1100[2] = -2137348917;
        l_U677[0] = 0;
        l_U682[0] = 1;
        l_U687[0] = 50;
        l_U692[0] = 0;
        l_U625[0] = 1;
        l_U629[0] = 1;
        l_U633[0] = 1;
        l_U637[0] = 0;
        l_U677[1] = 0;
        l_U682[1] = 0;
        l_U687[1] = 37;
        l_U692[1] = 0;
        l_U625[1] = 1;
        l_U629[1] = 1;
        l_U633[1] = 1;
        l_U637[1] = 0;
        l_U677[2] = 0;
        l_U682[2] = 0;
        l_U687[2] = 0;
        l_U692[2] = 0;
        l_U625[2] = 0;
        l_U629[2] = 0;
        l_U633[2] = 0;
        l_U637[2] = 0;
    }
    else
    {
        l_U1092[0] = 977480632;
        l_U1092[1] = -1159156463;
        l_U1092[2] = 479817841;
        l_U1092[3] = 226415164;
        l_U1092[4] = 15972646;
        l_U1092[5] = -2107556865;
        l_U671 = 0;
        l_U1100[0] = -571009320;
        l_U1100[1] = 2006142190;
        l_U1100[2] = 729783779;
        l_U677[0] = 112;
        l_U682[0] = 74;
        l_U687[0] = 27;
        l_U692[0] = 0;
        l_U625[0] = 0;
        l_U629[0] = 0;
        l_U633[0] = 0;
        l_U637[0] = 0;
        l_U677[1] = 132;
        l_U682[1] = 0;
        l_U687[1] = 131;
        l_U692[1] = 0;
        l_U625[1] = 0;
        l_U629[1] = 0;
        l_U633[1] = 0;
        l_U637[1] = 0;
        l_U677[2] = 0;
        l_U682[2] = 0;
        l_U687[2] = 0;
        l_U692[2] = 0;
        l_U625[2] = 0;
        l_U629[2] = 0;
        l_U633[2] = 0;
        l_U637[2] = 0;
    };;;;;
    if ((g_U39219 >= 10) AND (g_U39219 < 20))
    {
        iVar2 = 0;
        iVar3 = 1;
    }
    else if ((g_U39219 >= 20) AND (g_U39219 < 30))
    {
        iVar2 = 1;
        iVar3 = 2;
    }
    else if (g_U39219 >= 30)
    {
        iVar2 = 2;
        iVar3 = 2;
    }
    else
    {
        iVar2 = 0;
        iVar3 = 0;
    };;;
    GENERATE_RANDOM_INT_IN_RANGE( 3 + iVar2, 4 + iVar3, ref l_U667 );
    l_U670 = l_U667;
    if (l_U671 == 0)
    {
        l_U670 = l_U667 + 2;
    }
    if (l_U671 == 0)
    {
        GENERATE_RANDOM_INT_IN_RANGE( (l_U670 * 2) - 1, l_U670 * 2, ref l_U667 );
    }
    else
    {
        GENERATE_RANDOM_INT_IN_RANGE( (l_U670 * 2) - 1, l_U670 * 4, ref l_U667 );
    }
    l_U669 = l_U667;
    return;
}

void sub_44285()
{
    sub_44294();
    sub_44439( ref g_U10959._fU32 );
    g_U10959._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_44513();
    return;
}

void sub_44294()
{
    CLEAR_BIT( ref g_U10959._fU0, 2 );
    CLEAR_BIT( ref g_U10959._fU0, 3 );
    CLEAR_BIT( ref g_U10959._fU0, 4 );
    CLEAR_BIT( ref g_U10959._fU0, 5 );
    CLEAR_BIT( ref g_U10959._fU0, 6 );
    CLEAR_BIT( ref g_U10959._fU0, 8 );
    CLEAR_BIT( ref g_U10959._fU0, 9 );
    CLEAR_BIT( ref g_U10959._fU0, 10 );
    g_U10959._fU12 = 0;
    return;
}

void sub_44439(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_44513()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_44551( 1, g_U572[I] )) == 0)
        {
            sub_44802( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_44980())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U94._fU404 = 1000;
    }
    g_U94._fU404 = 1000;
    return;
}

int sub_44551(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_44802(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_44887( g_U572 - 1 );
    return;
}

void sub_44887(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_44980()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_44551( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_45277()
{
    if (IS_CHAR_ON_ANY_BIKE( l_U592 ))
    {
        sub_45307( ref l_U845 );
    }
    else
    {
        sub_2079();
    }
    return;
}

void sub_45307(unknown uParam0)
{
    int I;
    boolean bVar4;
    boolean bVar5;
    boolean bVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    float fVar10;
    float fVar11;
    int iVar12;
    unknown uVar13;
    int iVar14;

    bVar4 = true;
    bVar5 = false;
    bVar6 = false;
    if (l_U20 < 0)
    {
        bVar4 = false;
    }
    GET_GAME_TIMER( ref iVar7 );
    iVar8 = -1;
    iVar9 = -1;
    fVar10 = 0.00000000;
    if (l_U20 >= 0)
    {
        if (g_U39213)
        {
            if ((NOT g_U39212) AND ((uParam0^) > 1))
            {
                if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                {
                    PRINT_HELP( "BKR_CAM_HLP1" );
                    g_U39212 = 1;
                }
            }
        }
        GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar13, ref uVar13, ref iVar12, ref uVar13 );
        if (iVar12 == 0)
        {
            GET_MOUSE_INPUT( ref iVar12, ref uVar13 );
        }
        if (l_U21)
        {
            if ((iVar12 < 80) AND (iVar12 > 65456))
            {
                l_U21 = 0;
            }
        }
        else if (iVar12 >= 80)
        {
            iVar9 = sub_45534( uParam0 );
        }
        else if (iVar12 <= 65456)
        {
            iVar9 = sub_46126( uParam0 );
        };;;
    }
    if (IS_CHAR_IN_ANY_CAR( sub_5968() ))
    {
        for ( I = 0; I < (uParam0^); I++ )
        {
            if (sub_45568( uParam0, I ))
            {
                if (iVar9 < 0)
                {
                    fVar11 = sub_46344( (uParam0^)[I]._fU0, sub_5968(), 1 );
                    if (fVar11 > fVar10)
                    {
                        fVar10 = fVar11;
                        iVar8 = I;
                    }
                }
                if (l_U20 == I)
                {
                    bVar5 = true;
                }
            }
        }
    }
    if (bVar5)
    {
        if (iVar9 < 0)
        {
            bVar4 = false;
            sub_46464( ref (uParam0^)[l_U20] );
        }
        else
        {
            iVar8 = iVar9;
            if (DOES_CAM_EXIST( l_U19 ))
            {
                bVar6 = true;
            }
        }
    }
    else if (iVar8 >= 0)
    {
        if (DOES_CAM_EXIST( l_U19 ))
        {
            bVar6 = true;
        }
    }
    if (l_U20 >= 0)
    {
        if ((((l_U32 + 2500) > iVar7) AND (IS_VEH_DRIVEABLE( (uParam0^)[l_U20]._fU4 ))) AND (NOT bVar6))
        {
            bVar4 = false;
        }
    }
    else if ((l_U32 + 2500) > iVar7)
    {
        bVar4 = true;
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar14 );
    if ((((((((IS_CONTROL_PRESSED( 0, 51 )) AND (NOT (IS_CONTROL_PRESSED( 0, 38 )))) AND (NOT (IS_CONTROL_PRESSED( 0, 39 )))) AND (IS_CHAR_ON_ANY_BIKE( sub_5968() ))) AND (NOT sub_47643())) AND (NOT (iVar14 == 4))) AND (iVar8 >= 0)) AND (NOT bVar4))
    {
        sub_47706( uParam0, iVar8 );
    }
    else
    {
        sub_2233();
        if (bVar6)
        {
            sub_47706( uParam0, iVar8 );
        }
    }
    return;
}

void sub_45534(unknown uParam0)
{
    int I;
    int Result;

    Result = -1;
    for ( I = l_U20; I <= ((uParam0^) - 1); I++ )
    {
        if (((sub_45568( uParam0, I )) AND (I != l_U20)) AND (Result < 0))
        {
            Result = I;
        }
    }
    if (Result == -1)
    {
        for ( I = 0; I <= l_U20; I++ )
        {
            if (((sub_45568( uParam0, I )) AND (I != l_U20)) AND (Result < 0))
            {
                Result = I;
            }
        }
    }
    return Result;
}

int sub_45568(unknown uParam0, int iParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    float fVar10;
    unknown uVar11;

    if (((NOT (IS_CHAR_INJURED( (uParam0^)[iParam1]._fU0 ))) AND (IS_VEH_DRIVEABLE( (uParam0^)[iParam1]._fU4 ))) AND (NOT (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_5968() ))))
    {
        if (((NOT (IS_CHAR_IN_CAR( sub_5968(), (uParam0^)[iParam1]._fU4 ))) AND (IS_CHAR_IN_CAR( (uParam0^)[iParam1]._fU0, (uParam0^)[iParam1]._fU4 ))) AND (IS_CHAR_ON_ANY_BIKE( (uParam0^)[iParam1]._fU0 )))
        {
            uVar4 = {sub_45710( (uParam0^)[iParam1]._fU0, 1 )};
            uVar7 = {sub_45710( sub_5968(), 1 )};
            fVar10 = VDIST( uVar4, uVar7 );
            if (fVar10 < 4.50000000)
            {
                return 0;
            }
            if (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( (uParam0^)[iParam1]._fU0, sub_5968() ))
            {
                return 1;
            }
            if ((iParam1 == l_U20) AND (DOES_CAM_EXIST( l_U19 )))
            {
                if (IS_CAM_ACTIVE( l_U19 ))
                {
                    if ((fVar10 < 38.00000000) AND (fVar10 > 29.00000000))
                    {
                        GET_GAME_VIEWPORT_ID( ref uVar11 );
                        if (CAM_IS_SPHERE_VISIBLE( uVar11, uVar7._fU0, uVar7._fU4, uVar7._fU8, 0.20000000 ))
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

void sub_45710(unknown uParam0, boolean bParam1)
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

void sub_46126(unknown uParam0)
{
    int I;
    int Result;

    Result = -1;
    for ( I = l_U20; I >= 0; I += -1 )
    {
        if (((sub_45568( uParam0, I )) AND (I != l_U20)) AND (Result < 0))
        {
            Result = I;
        }
    }
    if (Result == -1)
    {
        for ( I = (uParam0^) - 1; I >= l_U20; I += -1 )
        {
            if (((sub_45568( uParam0, I )) AND (I != l_U20)) AND (Result < 0))
            {
                Result = I;
            }
        }
    }
    return Result;
}

void sub_46344(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return VDIST( sub_45710( uParam0, uParam2 ), sub_45710( uParam1, uParam2 ) );
}

void sub_46464(int iParam0)
{
    vector vVar3;
    vector vVar6;
    float fVar9;
    int iVar10;
    float fVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    vector vVar16;
    float fVar19;
    vector vVar20;
    unknown uVar23;
    vector vVar24;

    vVar3 = {sub_45710( sub_5968(), 1 )};
    vVar6 = {sub_45710( iParam0->_fU0, 1 )};
    fVar9 = VDIST( vVar3, vVar6 );
    GET_GAME_TIMER( ref iVar10 );
    if ((ABSF( fVar9 - l_U22 )) < 3.00000000)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 500, ref l_U25 );
        l_U25 += iVar10;
    }
    if (iVar10 > (l_U25 + 1000))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_5968() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5968(), ref uVar12 );
            GET_CAR_SPEED_VECTOR( uVar12, ref uVar13, 0 );
            vVar16 = {vVar3 - vVar6};
            vVar16 = {vVar16 / (VMAG( vVar16 ))};
            fVar11 = ((vVar16.x * uVar13._fU0) + (vVar16.y * uVar13._fU4)) + (vVar16.z * uVar13._fU8);
        }
        l_U22 = fVar9 + ((5.00000000 * fVar11) * TIMESTEP());
    }
    if ((ABSF( l_U23 - l_U22 )) < 2.00000000)
    {
        l_U24 *= 0.70000000;
    }
    else if (l_U22 > l_U23)
    {
        l_U24 += 0.20000000;
    }
    else if (l_U22 < l_U23)
    {
        l_U24 -= 0.20000000;
    };;;
    if (l_U24 > 1.00000000)
    {
        l_U24 = 1.00000000;
    }
    else if (l_U24 < -1.00000000)
    {
        l_U24 = -1.00000000;
    }
    l_U23 += l_U24;
    GET_CHAR_SPEED( iParam0->_fU0, ref fVar19 );
    fVar19 -= 15.00000000;
    if (fVar19 < 0.00000000)
    {
        fVar19 = 0.00000000;
    }
    SET_CAM_FOV( l_U19, sub_46942( l_U23 - fVar19 ) );
    SET_CAM_MOTION_BLUR( l_U19, fVar19 / 185.00000000 );
    vVar20 = {vVar3 - vVar6};
    vVar20 = {vVar20 * (l_U23 / (VMAG( vVar20 )))};
    vVar20 = {vVar20 + vVar6};
    SET_CAM_DOF_FOCUSPOINT( l_U19, vVar20.x, vVar20.y, vVar20.z, 1.50000000 );
    GET_CHAR_SPEED( sub_5968(), ref uVar23 );
    GENERATE_RANDOM_FLOAT_IN_RANGE( -1.00000000, 1.00000000, ref vVar24.x );
    GENERATE_RANDOM_FLOAT_IN_RANGE( (-10.00000000 * uVar23) / fVar9, 0.00000000, ref vVar24.y );
    GENERATE_RANDOM_FLOAT_IN_RANGE( -0.50000000, 0.50000000, ref vVar24.z );
    vVar24 = {vVar24 * (0.00400000 * fVar9)};
    if (fVar9 < 20.00000000)
    {
        vVar24.z += 0.60000000 + ((0.75000000 * fVar9) / 20.00000000);
    }
    else
    {
        vVar24.z += 1.35000000;
    }
    l_U29 = {l_U29 + (((vVar24 - l_U26) * 0.50000000) / fVar9)};
    if ((VMAG2( l_U29 )) > 1.00000000)
    {
        l_U29 = {l_U29 / (VMAG( l_U29 ))};
    }
    else
    {
        l_U29 = {l_U29 * (0.98000000 - (0.10000000 / fVar9))};
    }
    l_U26 = {l_U26 + l_U29};
    SET_CAM_POINT_OFFSET( l_U19, l_U26._fU0, l_U26._fU4, l_U26._fU8 );
    return;
}

void sub_46942(float fParam0)
{
    if (fParam0 < 4.55000000)
    {
        fParam0 = 4.55000000;
    }
    else if (fParam0 > 90.00000000)
    {
        fParam0 = 90.00000000;
    }
    return ATAN2( 6.50000000, fParam0 );
}

int sub_47643()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_47706(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    unknown uVar7;

    GET_KEY_FOR_CHAR_IN_ROOM( (uParam0^)[uParam1]._fU0, ref iVar4 );
    if (NOT (DOES_CAM_EXIST( l_U19 )))
    {
        GET_KEY_FOR_CHAR_IN_ROOM( sub_5968(), ref iVar6 );
        if (iVar4 != iVar6)
        {
            return;
        }
        BEGIN_CAM_COMMANDS( ref iVar5 );
        if (iVar5 != 1)
        {
            ;
        }
        else
        {
            CREATE_CAM( 14, ref l_U19 );
            ATTACH_CAM_TO_VEHICLE( l_U19, (uParam0^)[uParam1]._fU4 );
            SET_CAM_ATTACH_OFFSET( l_U19, 0.00000000, 0.45000000, 0.70000000 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U19, 1 );
            POINT_CAM_AT_PED( l_U19, sub_5968() );
            SET_CAM_ACTIVE( l_U19, 1 );
            SET_CAM_PROPAGATE( l_U19, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U33 = 0;
            l_U21 = 1;
            l_U20 = uParam1;
            SET_GAME_CAMERA_CONTROLS_ACTIVE( 0 );
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            l_U22 = sub_46344( (uParam0^)[l_U20]._fU0, sub_5968(), 1 );
            l_U23 = l_U22;
            l_U24 = 0.00000000;
            l_U26 = {0, 0, 1.35000000};
            if (l_U22 < 20.00000000)
            {
                l_U26._fU8 = 0.60000000 + ((0.75000000 * l_U22) / 20.00000000);
            }
            l_U29 = {0, 0, 0};
            GET_GAME_TIMER( ref l_U25 );
            sub_46464( ref (uParam0^)[l_U20] );
            GET_GAME_TIMER( ref l_U32 );
        }
        END_CAM_COMMANDS( ref iVar5 );
    }
    else if (NOT l_U33)
    {
        GET_GAME_VIEWPORT_ID( ref uVar7 );
        SET_ROOM_FOR_VIEWPORT_BY_KEY( uVar7, iVar4 );
        l_U33 = 1;
    }
    return;
}

void sub_48435()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_48510()
{
    int iVar2;

    if ((g_U15728[8] == 0) AND (g_U12306[1]._fU108 == 0))
    {
        GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref iVar2 );
        if ((iVar2 > 25) AND (iVar2 <= 75))
        {
            l_U706 = 0;
        }
        else if (iVar2 <= 25)
        {
            l_U706 = 1;
        }
        else
        {
            l_U706 = 2;
        }
    }
    else
    {
        GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref iVar2 );
        if (iVar2 <= 50)
        {
            l_U706 = 1;
        }
        else
        {
            l_U706 = 2;
        }
    }
    return;
}

void sub_48727()
{
    if (l_U671 == 0)
    {
        StrCopy( ref l_U603[0], "E1FCJ3_BNLG", 16 );
    }
    else if (l_U671 == 1)
    {
        StrCopy( ref l_U603[0], "E1FCJ3_BNLJ", 16 );
    }
    else if (l_U671 == 2)
    {
        StrCopy( ref l_U603[0], "E1FCJ3_BNLB", 16 );
    }
    else if (l_U671 == 3)
    {
        StrCopy( ref l_U603[0], "E1FCJ3_BNLR", 16 );
    }
    else if (l_U671 == 4)
    {
        StrCopy( ref l_U603[0], "E1FCJ3_BNLI", 16 );
    };;;;;
    return;
}

void sub_48956()
{
    if (l_U671 == 0)
    {
        StrCopy( ref l_U603[0], "E1FCT3_BNLA", 16 );
    }
    else if (l_U671 == 1)
    {
        StrCopy( ref l_U603[0], "E1FCT3_BNLJ", 16 );
    }
    else if (l_U671 == 2)
    {
        StrCopy( ref l_U603[0], "E1FCT3_BNLB", 16 );
    }
    else if (l_U671 == 3)
    {
        StrCopy( ref l_U603[0], "E1FCT3_BNLR", 16 );
    }
    else if (l_U671 == 4)
    {
        StrCopy( ref l_U603[0], "E1FCT3_BNLI", 16 );
    };;;;;
    return;
}

void sub_49173()
{
    if (l_U671 == 0)
    {
        StrCopy( ref l_U603[0], "E1FCC3_BNLA", 16 );
    }
    else if (l_U671 == 1)
    {
        StrCopy( ref l_U603[0], "E1FCC3_BNLJ", 16 );
    }
    else if (l_U671 == 2)
    {
        StrCopy( ref l_U603[0], "E1FCC3_BNLB", 16 );
    }
    else if (l_U671 == 3)
    {
        StrCopy( ref l_U603[0], "E1FCC3_BNLR", 16 );
    }
    else if (l_U671 == 4)
    {
        StrCopy( ref l_U603[0], "E1FCC3_BNLI", 16 );
    };;;;;
    return;
}

void sub_49402()
{
    if (l_U612 == 0)
    {
        if (l_U1061 == 1)
        {
            StrCopy( ref l_U603[1], "E1FCJ3_GBRV", 16 );
        }
        else
        {
            StrCopy( ref l_U603[1], "E1FCJ3_GBRC", 16 );
        }
    }
    else if (l_U612 == 1)
    {
        if (l_U1061 == 1)
        {
            StrCopy( ref l_U603[1], "E1FCJ3_GBOV", 16 );
        }
        else
        {
            StrCopy( ref l_U603[1], "E1FCJ3_GBOC", 16 );
        }
    }
    else if (l_U612 == 2)
    {
        if (l_U1061 == 1)
        {
            StrCopy( ref l_U603[1], "E1FCJ3_GAGV", 16 );
        }
        else
        {
            StrCopy( ref l_U603[1], "E1FCJ3_GAGC", 16 );
        }
    }
    else if (l_U612 == 3)
    {
        if (l_U1061 == 1)
        {
            StrCopy( ref l_U603[1], "E1FCJ3_GALV", 16 );
        }
        else
        {
            StrCopy( ref l_U603[1], "E1FCJ3_GALC", 16 );
        }
    };;;;
    return;
}

void sub_49751()
{
    if (l_U612 == 0)
    {
        if (l_U1061 == 1)
        {
            StrCopy( ref l_U603[1], "E1FCT3_GBRV", 16 );
        }
        else
        {
            StrCopy( ref l_U603[1], "E1FCT3_GBRC", 16 );
        }
    }
    else if (l_U612 == 1)
    {
        if (l_U1061 == 1)
        {
            StrCopy( ref l_U603[1], "E1FCT3_GBOV", 16 );
        }
        else
        {
            StrCopy( ref l_U603[1], "E1FCT3_GBOC", 16 );
        }
    }
    else if (l_U612 == 2)
    {
        if (l_U1061 == 1)
        {
            StrCopy( ref l_U603[1], "E1FCT3_GAGV", 16 );
        }
        else
        {
            StrCopy( ref l_U603[1], "E1FCT3_GAGC", 16 );
        }
    }
    else if (l_U612 == 3)
    {
        if (l_U1061 == 1)
        {
            StrCopy( ref l_U603[1], "E1FCT3_GALV", 16 );
        }
        else
        {
            StrCopy( ref l_U603[1], "E1FCT3_GALC", 16 );
        }
    };;;;
    return;
}

void sub_50088()
{
    if (l_U612 == 0)
    {
        if (l_U1061 == 1)
        {
            StrCopy( ref l_U603[1], "E1FCC3_GBRO", 16 );
        }
        else
        {
            StrCopy( ref l_U603[1], "E1FCC3_GBRC", 16 );
        }
    }
    else if (l_U612 == 1)
    {
        if (l_U1061 == 1)
        {
            StrCopy( ref l_U603[1], "E1FCC3_GBOH", 16 );
        }
        else
        {
            StrCopy( ref l_U603[1], "E1FCC3_GBOC", 16 );
        }
    }
    else if (l_U612 == 2)
    {
        if (l_U1061 == 1)
        {
            StrCopy( ref l_U603[1], "E1FCC3_GALV", 16 );
        }
        else
        {
            StrCopy( ref l_U603[1], "E1FCC3_GALG", 16 );
        }
    }
    else if (l_U612 == 3)
    {
        if (l_U1061 == 1)
        {
            StrCopy( ref l_U603[1], "E1FCC3_GAV", 16 );
        }
        else
        {
            StrCopy( ref l_U603[1], "E1FCC3_GAC", 16 );
        }
    };;;;
    return;
}

void sub_50428(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_50451( uParam0, ref l_U34._fU0, uParam1, uParam2, uParam3 );
}

void sub_50451(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    return sub_22870( uParam0, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

void sub_50664()
{
    int I;
    int J;

    if (l_U620 == 0)
    {
        if (NOT (DOES_BLIP_EXIST( l_U1051 )))
        {
            ADD_BLIP_FOR_COORD( l_U719._fU0, l_U719._fU4, l_U719._fU8, ref l_U1051 );
            SET_BLIP_AS_FRIENDLY( l_U1051, 0 );
            SET_ROUTE( l_U1051, 1 );
        }
        I = 0;
        for ( I = 0; I <= 5; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U838[I] )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U838[I], 0 );
            }
        }
        l_U620 = 1;
    }
    if ((((NOT (sub_22391( l_U752 ))) AND (sub_50844())) AND (l_U662 == 0)) AND (NOT (IS_CHAR_INJURED( sub_5968() ))))
    {
        sub_22793( "E1FCJ3_LGO", ref l_U752, 7, 1 );
        if (NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 )))
        {
            sub_23915( l_U592, sub_51209( 1 ), g_U11028[0]._fU0, 39 );
        }
        l_U662 = 1;
    }
    if ((NOT (sub_22391( l_U752 ))) AND (l_U652 == 0))
    {
        PRINT_NOW( "GW_COMMAND_02", 7500, 1 );
        if (NOT (IS_CHAR_INJURED( l_U838[3] )))
        {
            SAY_AMBIENT_SPEECH( l_U838[3], "GENERIC_HI", 1, 0, 2 );
        }
        l_U652 = 1;
    }
    if ((l_U621 == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U592, l_U719._fU0, l_U719._fU4, l_U719._fU8, 450.00000000, 450.00000000, 200.00000000, 0 )))
    {
        sub_51740();
        sub_52010();
        sub_52204();
        sub_54357();
        J = 0;
        for ( J = 0; J <= 27; J++ )
        {
            if (NOT (IS_CHAR_DEAD( l_U809[J] )))
            {
                if (DOES_BLIP_EXIST( l_U1051 ))
                {
                    REMOVE_BLIP( l_U1051 );
                    SET_ROUTE( l_U1051, 0 );
                }
                if ((l_U1061 == 1) AND (l_U1063 == 0))
                {
                    if (NOT (DOES_BLIP_EXIST( l_U1064 )))
                    {
                        ADD_BLIP_FOR_CAR( l_U1002[1], ref l_U1064 );
                        SET_BLIP_AS_FRIENDLY( l_U1064, 0 );
                        SET_ROUTE( l_U1064, 1 );
                        l_U1063 = 0;
                    }
                }
                else if (NOT (DOES_BLIP_EXIST( l_U1015[J] )))
                {
                    ADD_BLIP_FOR_CHAR( l_U809[J], ref l_U1015[J] );
                    SET_BLIP_AS_FRIENDLY( l_U1015[J], 0 );
                    if (J == 0)
                    {
                        SET_ROUTE( l_U1015[J], 1 );
                    }
                }
            }
        }
        SET_WANTED_MULTIPLIER( 0.05000000 );
        sub_58018();
        l_U621 = 1;
        l_U666++;
    }
    sub_58138();
    sub_58492();
    sub_59404( ref l_U845 );
    sub_78964( ref l_U845 );
    sub_45277();
    sub_81062();
    if ((((NOT (sub_22391( l_U752 ))) AND (l_U661 == 0)) AND (g_U39123 == 0)) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED()))
    {
        PRINT_HELP( "Leader_4" );
        l_U661 = 1;
    }
    return;
}

int sub_50844()
{
    int I;

    if (NOT (IS_CHAR_DEAD( l_U845[0]._fU0 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U845[0]._fU0, l_U592, 25, 25, 25, 0 ))
        {
            return 1;
        }
    }
    if (NOT (IS_CHAR_DEAD( g_U11081[0] )))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( g_U11081[0], l_U592, 25, 25, 25, 0 ))
        {
            return 1;
        }
    }
    if (NOT (IS_CHAR_DEAD( g_U11081[1] )))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( g_U11081[1], l_U592, 25, 25, 25, 0 ))
        {
            return 1;
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U838[(I * 2) + 1] )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U838[(I * 2) + 1], l_U592, 25, 25, 25, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_51209(boolean bParam0)
{
    unknown uVar3;
    string Result;

    Result = nil;
    if (bParam0)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 1, 3, ref uVar3 );
        switch (uVar3)
        {
            case 1:
            Result = "gest_thumbsup";
            break;
            default:
            Result = "gest_thumbsup";
            break;
        }
    }
    else
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 7, ref uVar3 );
        switch (uVar3)
        {
            case 0:
            Result = "p_gest_celeb_a";
            break;
            case 1:
            Result = "p_gest_celeb_b";
            break;
            case 2:
            Result = "p_gest_celeb_c";
            break;
            case 3:
            Result = "p_gest_celeb_d";
            break;
            case 5:
            Result = "p_gest_rockin";
            break;
            case 6:
            Result = "p_gest_yes";
            break;
            default:
            Result = "p_gest_yes";
            break;
        }
    }
    return Result;
}

void sub_51740()
{
    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U674 );
    sub_12039( l_U1100[l_U674] );
    GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref l_U667 );
    if (l_U667 < 45)
    {
        l_U675 = 0;
    }
    else if (l_U667 > 55)
    {
        l_U675 = 1;
    }
    else
    {
        l_U675 = 2;
    }
    if (l_U1061 == 1)
    {
        l_U675 = 2;
    }
    sub_12039( l_U1100[l_U675] );
    SUPPRESS_CAR_MODEL( l_U1100[l_U674] );
    SUPPRESS_CAR_MODEL( l_U1100[l_U675] );
    while (NOT sub_8517())
    {
        WAIT( 0 );
        PRINTSTRING( "\n -----> Waiting for models to load...\n\n" );
        sub_45277();
    }
    return;
}

void sub_52010()
{
    GENERATE_RANDOM_INT_IN_RANGE( 0, 6, ref l_U672 );
    sub_12039( l_U1092[l_U672] );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 6, ref l_U673 );
    sub_12039( l_U1092[l_U673] );
    SUPPRESS_PED_MODEL( l_U1092[l_U672] );
    SUPPRESS_PED_MODEL( l_U1092[l_U673] );
    while (NOT sub_8517())
    {
        WAIT( 0 );
        PRINTSTRING( "\n -----> Waiting for models to load...\n\n" );
        sub_45277();
    }
    return;
}

void sub_52204()
{
    int iVar2;
    unknown uVar3;
    int I;
    int iVar5;

    iVar2 = 1;
    I = 0;
    for ( I = 0; I <= (l_U670 - 1); I++ )
    {
        if (I == 0)
        {
            GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING( l_U719._fU0, l_U719._fU4, l_U719._fU8, I + iVar2, ref l_U728._fU0, ref l_U728._fU4, ref l_U728._fU8, ref l_U746 );
        }
        else
        {
            GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING( l_U719._fU0, l_U719._fU4, l_U719._fU8, I + iVar2, ref l_U728._fU0, ref l_U728._fU4, ref l_U728._fU8, ref uVar3 );
            while (l_U644 == 0)
            {
                if (NOT (IS_CAR_DEAD( l_U1002[0] )))
                {
                    if ((NOT (LOCATE_CAR_3D( l_U1002[0], l_U728._fU0, l_U728._fU4, l_U728._fU8, 50.00000000, 50.00000000, 2.50000000, 0 ))) || (l_U728._fU8 < 0))
                    {
                        iVar2++;
                        GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING( l_U719._fU0, l_U719._fU4, l_U719._fU8, I + iVar2, ref l_U728._fU0, ref l_U728._fU4, ref l_U728._fU8, ref uVar3 );
                    }
                    else
                    {
                        l_U644 = 1;
                    }
                    if (iVar2 > 50)
                    {
                        l_U670 = I;
                        l_U644 = 1;
                    }
                }
                WAIT( 0 );
                sub_45277();
            }
        }
        if (l_U675 == 2)
        {
            if (I == 1)
            {
                CREATE_CAR( l_U1100[l_U675], l_U728._fU0, l_U728._fU4, l_U728._fU8, ref l_U1002[I], 1 );
                if (l_U1100[l_U675] != 904750859)
                {
                    CHANGE_CAR_COLOUR( l_U1002[I], l_U677[l_U675], l_U682[l_U675] );
                    SET_EXTRA_CAR_COLOURS( l_U1002[I], l_U687[l_U675], l_U692[l_U675] );
                }
                TURN_OFF_VEHICLE_EXTRA( l_U1002[I], 5, l_U625[l_U675] );
                TURN_OFF_VEHICLE_EXTRA( l_U1002[I], 6, l_U629[l_U675] );
                TURN_OFF_VEHICLE_EXTRA( l_U1002[I], 7, l_U633[l_U675] );
                TURN_OFF_VEHICLE_EXTRA( l_U1002[I], 8, l_U637[l_U675] );
                if (l_U1100[l_U675] == 569305213)
                {
                    TURN_OFF_VEHICLE_EXTRA( l_U1002[I], 1, 0 );
                    TURN_OFF_VEHICLE_EXTRA( l_U1002[I], 5, 1 );
                    TURN_OFF_VEHICLE_EXTRA( l_U1002[I], 6, 1 );
                    TURN_OFF_VEHICLE_EXTRA( l_U1002[I], 7, 1 );
                    TURN_OFF_VEHICLE_EXTRA( l_U1002[I], 8, 1 );
                }
            }
            else if (I > 0)
            {
                CREATE_CAR( l_U1100[l_U674], l_U728._fU0, l_U728._fU4, l_U728._fU8, ref l_U1002[I], 1 );
            }
            else
            {
                CREATE_CAR( l_U1100[l_U674], l_U719._fU0, l_U719._fU4, l_U719._fU8, ref l_U1002[I], 1 );
            }
            if (l_U1100[l_U674] != 904750859)
            {
                CHANGE_CAR_COLOUR( l_U1002[I], l_U677[l_U674], l_U682[l_U674] );
                SET_EXTRA_CAR_COLOURS( l_U1002[I], l_U687[l_U674], l_U692[l_U674] );
            }
            TURN_OFF_VEHICLE_EXTRA( l_U1002[I], 5, l_U625[l_U674] );
            TURN_OFF_VEHICLE_EXTRA( l_U1002[I], 6, l_U629[l_U674] );
            TURN_OFF_VEHICLE_EXTRA( l_U1002[I], 7, l_U633[l_U674] );
            TURN_OFF_VEHICLE_EXTRA( l_U1002[I], 8, l_U637[l_U674] );;
        }
        else
        {
            GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref iVar5 );
            if (iVar5 < 51)
            {
                if (I > 0)
                {
                    CREATE_CAR( l_U1100[l_U675], l_U728._fU0, l_U728._fU4, l_U728._fU8, ref l_U1002[I], 1 );
                }
                else
                {
                    CREATE_CAR( l_U1100[l_U675], l_U719._fU0, l_U719._fU4, l_U719._fU8, ref l_U1002[I], 1 );
                }
                if (l_U1100[l_U675] != 904750859)
                {
                    CHANGE_CAR_COLOUR( l_U1002[I], l_U677[l_U674], l_U682[l_U674] );
                    SET_EXTRA_CAR_COLOURS( l_U1002[I], l_U687[l_U674], l_U692[l_U674] );
                }
                TURN_OFF_VEHICLE_EXTRA( l_U1002[I], 5, l_U625[l_U674] );
                TURN_OFF_VEHICLE_EXTRA( l_U1002[I], 6, l_U629[l_U674] );
                TURN_OFF_VEHICLE_EXTRA( l_U1002[I], 7, l_U633[l_U674] );
                TURN_OFF_VEHICLE_EXTRA( l_U1002[I], 8, l_U637[l_U674] );
            }
            else if (I > 0)
            {
                CREATE_CAR( l_U1100[l_U674], l_U728._fU0, l_U728._fU4, l_U728._fU8, ref l_U1002[I], 1 );
            }
            else
            {
                CREATE_CAR( l_U1100[l_U674], l_U719._fU0, l_U719._fU4, l_U719._fU8, ref l_U1002[I], 1 );
            }
            if (l_U1100[l_U674] != 904750859)
            {
                CHANGE_CAR_COLOUR( l_U1002[I], l_U677[l_U675], l_U682[l_U675] );
                SET_EXTRA_CAR_COLOURS( l_U1002[I], l_U687[l_U675], l_U692[l_U675] );
            }
            TURN_OFF_VEHICLE_EXTRA( l_U1002[I], 5, l_U625[l_U675] );
            TURN_OFF_VEHICLE_EXTRA( l_U1002[I], 6, l_U629[l_U675] );
            TURN_OFF_VEHICLE_EXTRA( l_U1002[I], 7, l_U633[l_U675] );
            TURN_OFF_VEHICLE_EXTRA( l_U1002[I], 8, l_U637[l_U675] );;
        }
        sub_54007();
        SET_CAR_HEALTH( l_U1002[I], l_U702 );
        SET_PETROL_TANK_HEALTH( l_U1002[I], TO_FLOAT( l_U702 ) );
        SET_ENGINE_HEALTH( l_U1002[I], TO_FLOAT( l_U702 ) );
        SET_CAR_HEADING( l_U1002[I], l_U746 );
        SET_CAR_ON_GROUND_PROPERLY( l_U1002[I] );
    }
    return;
}

void sub_54007()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 1000 + (g_U39219 * 10), 1301 + (g_U39219 * 15), ref iVar2 );
    if (l_U671 == 0)
    {
        l_U702 = iVar2;
    }
    else if (l_U671 == 1)
    {
        l_U702 = iVar2 - 50;
    }
    else if (l_U671 == 2)
    {
        l_U702 = iVar2 - 100;
    }
    else if (l_U671 == 3)
    {
        l_U702 = iVar2 + 50;
    }
    else if (l_U671 == 4)
    {
        l_U702 = iVar2 + 100;
    }
    else
    {
        l_U702 = iVar2;
    };;;;;
    if (l_U702 > 2000)
    {
        l_U702 = 2000;
    }
    return;
}

void sub_54357()
{
    int J;
    int I;
    int iVar4;
    int iVar5;
    char[64] cVar6;

    J = 0;
    for ( J = 0; J <= (l_U669 - 1); J++ )
    {
        if (J == 0)
        {
            if (NOT (IS_CAR_DEAD( l_U1002[J] )))
            {
                GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref l_U667 );
                if (l_U667 < 51)
                {
                    CREATE_CHAR_INSIDE_CAR( l_U1002[J], 7, l_U1092[l_U672], ref l_U809[J] );
                }
                else
                {
                    CREATE_CHAR_INSIDE_CAR( l_U1002[J], 7, l_U1092[l_U673], ref l_U809[J] );
                }
                TASK_CAR_DRIVE_WANDER( l_U809[J], l_U1002[J], 12.00000000, 2 );
            }
        }
        else if (J < l_U670)
        {
            if (NOT (IS_CAR_DEAD( l_U1002[J] )))
            {
                GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref l_U667 );
                if (l_U667 < 51)
                {
                    CREATE_CHAR_INSIDE_CAR( l_U1002[J], 7, l_U1092[l_U672], ref l_U809[J] );
                }
                else
                {
                    CREATE_CHAR_INSIDE_CAR( l_U1002[J], 7, l_U1092[l_U673], ref l_U809[J] );
                }
                GET_CAR_MODEL( l_U1002[J], ref l_U1089 );
                if (l_U1089 == -1660661558)
                {
                    if (NOT (IS_CAR_DEAD( l_U1002[0] )))
                    {
                        TASK_HELI_MISSION( l_U809[J], l_U1002[J], l_U1002[0], 0, 0, 0, 0, 12, 20.00000000, 20, 0, 20, 15 );
                    }
                    else
                    {
                        TASK_CAR_DRIVE_WANDER( l_U809[J], l_U1002[J], 12.00000000, 2 );
                    }
                }
                else if (NOT (IS_CAR_DEAD( l_U1002[0] )))
                {
                    if (sub_54884( l_U1002[J] ))
                    {
                        TASK_CAR_MISSION( l_U809[J], l_U1002[J], l_U1002[J - 1], 12, 12.00000000 + (J * 4), 2, 3, 3 );
                    }
                    else
                    {
                        TASK_CAR_MISSION( l_U809[J], l_U1002[J], l_U1002[0], 12, 20.00000000, 2, J * 5, 5 );
                    }
                }
                else
                {
                    TASK_CAR_DRIVE_WANDER( l_U809[J], l_U1002[J], 12.00000000, 2 );
                }
                if ((l_U1061 == 1) AND (J == 1))
                {
                    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U809[J], 0 );
                    SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U809[J], 0 );
                }
            }
        }
        else
        {
            while (l_U624 == 0)
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, l_U670, ref l_U667 );
                if (NOT (IS_CAR_DEAD( l_U1002[l_U667] )))
                {
                    I = 0;
                    iVar4 = 0;
                    GET_MAXIMUM_NUMBER_OF_PASSENGERS( l_U1002[l_U667], ref iVar4 );
                    iVar4--;
                    for ( I = 0; I <= iVar4; I++ )
                    {
                        if ((IS_CAR_PASSENGER_SEAT_FREE( l_U1002[l_U667], I )) AND (l_U624 == 0))
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref iVar5 );
                            if (iVar5 < 51)
                            {
                                CREATE_CHAR_AS_PASSENGER( l_U1002[l_U667], 7, l_U1092[l_U672], I, ref l_U809[J] );
                                if ((l_U1061 == 1) AND (l_U667 == 1))
                                {
                                    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U809[J], 0 );
                                    SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U809[J], 0 );
                                }
                            }
                            else
                            {
                                CREATE_CHAR_AS_PASSENGER( l_U1002[l_U667], 7, l_U1092[l_U673], I, ref l_U809[J] );
                            }
                            l_U624 = 1;
                        }
                    }
                }
                l_U676++;
                if (l_U676 > 10)
                {
                    l_U624 = 1;
                }
                WAIT( 0 );
                sub_45277();
            }
            l_U676 = 0;
            l_U624 = 0;
        }
        if (NOT (IS_CHAR_INJURED( l_U809[J] )))
        {
            SET_CHAR_RELATIONSHIP_GROUP( l_U809[J], 23 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U809[J] );
            if (J == 0)
            {
                l_U664 = 1;
                sub_55564();
            }
            else if (J < l_U670)
            {
                if (l_U664 == 0)
                {
                    l_U1060 = l_U1057;
                }
                else
                {
                    sub_55564();
                }
            }
            else
            {
                sub_55564();
            }
            SET_CHAR_DECISION_MAKER( l_U809[J], l_U1059 );
            SET_COMBAT_DECISION_MAKER( l_U809[J], l_U1060 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U809[J], 1 );
            SET_CHAR_AS_ENEMY( l_U809[J], 1 );
            SET_INFORM_RESPECTED_FRIENDS( l_U809[J], 150, 999 );
            SET_CHAR_WILL_DO_DRIVEBYS( l_U809[J], 1 );
            sub_56212();
            GIVE_DELAYED_WEAPON_TO_CHAR( l_U809[J], l_U1090, 25000, 0 );
            sub_19262();
            GIVE_DELAYED_WEAPON_TO_CHAR( l_U809[J], l_U1090, 25000, 0 );
            sub_56364();
            SET_CHAR_ACCURACY( l_U809[J], l_U697 );
            sub_56603();
            SET_CHAR_SHOOT_RATE( l_U809[J], l_U698 );
            sub_56826();
            SET_CHAR_FIRE_DAMAGE_MULTIPLIER( l_U809[J], l_U747 );
            sub_57094();
            SET_CHAR_MAX_HEALTH( l_U809[J], l_U699 );
            SET_CHAR_HEALTH( l_U809[J], l_U699 );
            sub_57344();
            SET_CHAR_MONEY( l_U809[J], l_U701 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U809[J], 1 );
            SET_CHAR_DROWNS_IN_SINKING_VEHICLE( l_U809[J], 1 );
            if (l_U671 == 0)
            {
                SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE( l_U809[J], 3 );
            }
            StrCopy( ref cVar6, "Gang Ped ", 64 );
            StrCopy( ref cVar6, "Gang Ped ", 64 );
            ConcatString(ref cVar6, J, 64);
            SET_CHAR_NAME_DEBUG( l_U809[J], ref cVar6 );
        }
    }
    return;
}

void sub_54884(unknown uParam0)
{
    unknown uVar3;

    GET_CAR_MODEL( uParam0, ref uVar3 );
    return IS_THIS_MODEL_A_BIKE( uVar3 );
}

void sub_55564()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0 + g_U39219, 101 + g_U39219, ref iVar2 );
    if (l_U671 == 0)
    {
        iVar2 = iVar2;
    }
    else if (l_U671 == 1)
    {
        iVar2 -= 5;
    }
    else if (l_U671 == 2)
    {
        iVar2 -= 10;
    }
    else if (l_U671 == 3)
    {
        iVar2 += 5;
    }
    else if (l_U671 == 4)
    {
        iVar2 += 10;
    }
    else
    {
        iVar2 = iVar2;
    };;;;;
    if (iVar2 <= 5)
    {
        l_U1059 = l_U1053;
    }
    else if ((iVar2 > 5) AND (iVar2 <= 30))
    {
        l_U1059 = l_U1052;
    }
    else
    {
        l_U1059 = l_U1054;
    }
    GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref iVar2 );
    if (l_U671 == 0)
    {
        iVar2 = iVar2;
    }
    else if (l_U671 == 1)
    {
        iVar2 -= 5;
    }
    else if (l_U671 == 2)
    {
        iVar2 -= 10;
    }
    else if (l_U671 == 3)
    {
        iVar2 += 5;
    }
    else if (l_U671 == 4)
    {
        iVar2 += 10;
    }
    else
    {
        iVar2 = iVar2;
    };;;;;
    if (iVar2 <= 5)
    {
        l_U1060 = l_U1058;
        if (l_U664 == 1)
        {
            l_U665 = 1;
            l_U664 = 0;
        }
    }
    else if ((iVar2 > 5) AND (iVar2 <= 20))
    {
        l_U1060 = l_U1055;
    }
    else if ((iVar2 > 20) AND (iVar2 <= 50))
    {
        l_U1060 = l_U1057;
    }
    else
    {
        l_U1060 = l_U1056;
    };;;
    return;
}

void sub_56212()
{
    if (l_U671 == 0)
    {
        if (g_U15728[41] == 0)
        {
            l_U1090 = 7;
        }
        else
        {
            l_U1090 = 27;
        }
    }
    else if (l_U671 == 4)
    {
        l_U1090 = 9;
    }
    else
    {
        l_U1090 = 7;
    }
    return;
}

void sub_56364()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 5 + g_U39219, 25 + g_U39219, ref iVar2 );
    if (l_U671 == 0)
    {
        l_U697 = iVar2;
    }
    else if (l_U671 == 1)
    {
        l_U697 = iVar2 - 8;
    }
    else if (l_U671 == 2)
    {
        l_U697 = iVar2 - 16;
    }
    else if (l_U671 == 3)
    {
        l_U697 = iVar2 + 8;
    }
    else if (l_U671 == 4)
    {
        l_U697 = iVar2 + 16;
    }
    else
    {
        l_U697 = iVar2;
    };;;;;
    if (l_U697 < 5)
    {
        l_U697 = 5;
    }
    if (l_U697 > 100)
    {
        l_U697 = 100;
    }
    return;
}

void sub_56603()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 25 + g_U39219, 51 + g_U39219, ref iVar2 );
    if (l_U671 == 0)
    {
        l_U698 = iVar2;
    }
    else if (l_U671 == 1)
    {
        l_U698 = iVar2 - 5;
    }
    else if (l_U671 == 2)
    {
        l_U698 = iVar2 - 10;
    }
    else if (l_U671 == 3)
    {
        l_U698 = iVar2 + 5;
    }
    else if (l_U671 == 4)
    {
        l_U698 = iVar2 + 10;
    }
    else
    {
        l_U698 = iVar2;
    };;;;;
    if (l_U698 > 100)
    {
        l_U698 = 100;
    }
    return;
}

void sub_56826()
{
    unknown uVar2;
    int iVar3;

    iVar3 = g_U39219;
    TO_FLOAT( iVar3 );
    GENERATE_RANDOM_FLOAT_IN_RANGE( 0.75000000 + (iVar3 / 40), 1.06000000 + (iVar3 / 40), ref uVar2 );
    if (l_U671 == 0)
    {
        l_U747 = uVar2;
    }
    else if (l_U671 == 1)
    {
        l_U747 = uVar2 - 0.10000000;
    }
    else if (l_U671 == 2)
    {
        l_U747 = uVar2 - 0.20000000;
    }
    else if (l_U671 == 3)
    {
        l_U747 = uVar2 + 0.10000000;
    }
    else if (l_U671 == 4)
    {
        l_U747 = uVar2 + 0.20000000;
    }
    else
    {
        l_U747 = uVar2;
    };;;;;
    if (l_U747 > 2.00000000)
    {
        l_U747 = 2.00000000;
    }
    return;
}

void sub_57094()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 200 + (g_U39219 * 5), 251 + (g_U39219 * 5), ref iVar2 );
    if (l_U671 == 0)
    {
        l_U699 = iVar2;
    }
    else if (l_U671 == 1)
    {
        l_U699 = iVar2 - 10;
    }
    else if (l_U671 == 2)
    {
        l_U699 = iVar2 - 25;
    }
    else if (l_U671 == 3)
    {
        l_U699 = iVar2 + 10;
    }
    else if (l_U671 == 4)
    {
        l_U699 = iVar2 + 25;
    }
    else
    {
        l_U699 = iVar2;
    };;;;;
    if (l_U699 > 500)
    {
        l_U699 = 500;
    }
    return;
}

void sub_57344()
{
    int iVar2;
    int iVar3;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 20, ref iVar3 );
    if (iVar3 >= 10)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 101, ref iVar2 );
        if (l_U671 == 0)
        {
            l_U701 = iVar2;
        }
        else if (l_U671 == 1)
        {
            l_U701 = iVar2 - 10;
        }
        else if (l_U671 == 2)
        {
            l_U701 = iVar2 - 5;
        }
        else if (l_U671 == 3)
        {
            l_U701 = iVar2 + 5;
        }
        else if (l_U671 == 4)
        {
            l_U701 = iVar2 + 10;
        }
        else
        {
            l_U701 = iVar2;
        };;;;;
    }
    else
    {
        l_U701 = 0;
    }
    if (l_U701 < 0)
    {
        l_U701 = 0;
    }
    if (l_U701 > 60)
    {
        l_U701 = 60;
    }
    return;
}

void sub_58018()
{
    int iVar2;
    int iVar3;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 101, ref iVar2 );
    if (g_U39219 > 25)
    {
        iVar3 = iVar2 + 50;
    }
    else
    {
        iVar3 = iVar2 + (g_U39219 * 2);
    }
    if (iVar3 > 75)
    {
        SET_CREATE_RANDOM_COPS( 1 );
    }
    else
    {
        SET_CREATE_RANDOM_COPS( 0 );
    }
    return;
}

void sub_58138()
{
    int I;

    I = 0;
    if (DOES_CHAR_EXIST( l_U845[0]._fU0 ))
    {
        if ((IS_CHAR_DEAD( l_U845[0]._fU0 )) || (IS_CHAR_FATALLY_INJURED( l_U845[0]._fU0 )))
        {
            PRINT_NOW( "GW_FAIL_03", 7500, 1 );
            l_U666 = -1;
            l_U618 = 1;
        }
    }
    for ( I = 0; I <= 1; I++ )
    {
        if (DOES_CHAR_EXIST( g_U11081[I] ))
        {
            if ((IS_CHAR_DEAD( g_U11081[I] )) || (IS_CHAR_FATALLY_INJURED( g_U11081[I] )))
            {
                PRINT_NOW( "GW_FAIL_03", 7500, 1 );
                l_U666 = -1;
                l_U618 = 1;
            }
        }
    }
    for ( I = 0; I <= 5; I++ )
    {
        if (DOES_CHAR_EXIST( l_U838[I] ))
        {
            if ((IS_CHAR_DEAD( l_U838[I] )) || (IS_CHAR_FATALLY_INJURED( l_U838[I] )))
            {
                PRINT_NOW( "GW_FAIL_03", 7500, 1 );
                l_U666 = -1;
                l_U618 = 1;
            }
        }
    }
    return;
}

void sub_58492()
{
    if (((IS_CHAR_INJURED( l_U838[1] )) AND (DOES_CHAR_EXIST( l_U838[1] ))) AND (l_U647[0] == 0))
    {
        if (DOES_BLIP_EXIST( l_U1044[3] ))
        {
            REMOVE_BLIP( l_U1044[3] );
        }
        sub_58584( 1 );
        l_U647[0] = 1;
    }
    if (((IS_CHAR_INJURED( l_U838[3] )) AND (DOES_CHAR_EXIST( l_U838[3] ))) AND (l_U647[1] == 0))
    {
        if (DOES_BLIP_EXIST( l_U1044[4] ))
        {
            REMOVE_BLIP( l_U1044[4] );
        }
        sub_58584( 2 );
        l_U647[1] = 1;
    }
    if (((IS_CHAR_INJURED( l_U838[5] )) AND (DOES_CHAR_EXIST( l_U838[5] ))) AND (l_U647[2] == 0))
    {
        if (DOES_BLIP_EXIST( l_U1044[5] ))
        {
            REMOVE_BLIP( l_U1044[5] );
        }
        sub_58584( 3 );
        l_U647[2] = 1;
    }
    if (((g_U15728[8] == 1) || (g_U12306[1]._fU108 == 1)) AND (l_U647[3] == 0))
    {
        if ((IS_CHAR_INJURED( l_U845[0]._fU0 )) AND (DOES_CHAR_EXIST( l_U845[0]._fU0 )))
        {
            if (DOES_BLIP_EXIST( l_U1044[0] ))
            {
                REMOVE_BLIP( l_U1044[0] );
            }
            sub_58584( 4 );
            l_U647[3] = 1;
        }
    }
    if ((IS_CHAR_INJURED( l_U845[0]._fU0 )) AND (DOES_CHAR_EXIST( l_U845[0]._fU0 )))
    {
        if (DOES_BLIP_EXIST( l_U845[0]._fU100 ))
        {
            REMOVE_BLIP( l_U845[0]._fU100 );
        }
        if (DOES_BLIP_EXIST( l_U1044[0] ))
        {
            REMOVE_BLIP( l_U1044[0] );
        }
        sub_59198( 1 );
    }
    if ((IS_CHAR_INJURED( g_U11081[0] )) AND (DOES_CHAR_EXIST( g_U11081[0] )))
    {
        if (DOES_BLIP_EXIST( l_U1044[1] ))
        {
            REMOVE_BLIP( l_U1044[1] );
        }
    }
    if ((IS_CHAR_INJURED( g_U11081[1] )) AND (DOES_CHAR_EXIST( g_U11081[1] )))
    {
        if (DOES_BLIP_EXIST( l_U1044[2] ))
        {
            REMOVE_BLIP( l_U1044[2] );
        }
    }
    return;
}

void sub_58584(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_1273( uParam0 );
    if (iVar3 == -1)
    {
        return;
    }
    if (NOT g_U38937[iVar3]._fU4)
    {
        PRINTSTRING( "Recurring_Lost_Killed: marked as killed but wasn't in use: " );
        PRINTINT( iVar3 );
        PRINTNL();
        return;
    }
    g_U38937[iVar3]._fU0 = 0;
    return;
}

void sub_59198(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_18255( uParam0 );
    if (iVar3 == 6)
    {
        return;
    }
    g_U39058[iVar3]._fU4 = 0;
    return;
}

void sub_59404(unknown uParam0)
{
    int iVar3;
    int I;

    if ((l_U223 >= (uParam0^)) || (l_U223 < 0))
    {
        l_U223 = 0;
    }
    sub_59443( uParam0 );
    if (NOT (IS_CHAR_INJURED( (uParam0^)[l_U223]._fU0 )))
    {
        sub_59756( ref (uParam0^)[l_U223], 1 );
        if (DOES_CHAR_EXIST( (uParam0^)[l_U223]._fU8 ))
        {
            if (IS_CHAR_INJURED( (uParam0^)[l_U223]._fU8 ))
            {
                iVar3 = sub_78669( uParam0, (uParam0^)[l_U223]._fU8 );
                if (iVar3 >= 0)
                {
                    (uParam0^)[l_U223]._fU8 = (uParam0^)[iVar3]._fU8;
                    (uParam0^)[l_U223]._fU40 = (uParam0^)[iVar3]._fU40;
                    PRINTSTRING( "BIKER_BUDDIES_AI_TICK: Biker " );
                    PRINTINT( l_U223 );
                    PRINTSTRING( " is changing leader to " );
                    PRINTINT( iVar3 );
                    PRINTSTRING( "'s leader\n" );
                }
            }
        }
    }
    l_U223++;
    for ( I = 0; I < (uParam0^); I++ )
    {
        sub_78118( ref (uParam0^)[I] );
    }
    return;
}

void sub_59443(unknown uParam0)
{
    int[5] iVar3;
    int I;
    unknown uVar10;
    unknown uVar11;

    array(ref iVar3, 5);
    for ( I = 0; I < (uParam0^); I++ )
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))
        {
            if (IS_CHAR_ON_ANY_BIKE( (uParam0^)[I]._fU0 ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( (uParam0^)[I]._fU0, ref uVar10 );
                iVar3[sub_24128( uVar10 )] = 1;
            }
        }
    }
    if (IS_CHAR_ON_ANY_BIKE( sub_5968() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5968(), ref uVar10 );
        iVar3[sub_24128( uVar10 )] = 1;
    }
    for ( I = 0; I < iVar3; I++ )
    {
        uVar11 = sub_24405( I );
        if (iVar3[I])
        {
            if (NOT (HAVE_ANIMS_LOADED( uVar11 )))
            {
                REQUEST_ANIMS( uVar11 );
            }
        }
        else if (HAVE_ANIMS_LOADED( uVar11 ))
        {
            REMOVE_ANIMS( uVar11 );
        }
    }
    return;
}

void sub_59756(int iParam0, boolean bParam1)
{
    unknown uVar4;
    int iVar5;

    if (IS_CHAR_INJURED( iParam0->_fU0 ))
    {
        if (iParam0->_fU92 > 0)
        {
            sub_58584( iParam0->_fU92 );
            iParam0->_fU92 = 0;
        }
        if (DOES_BLIP_EXIST( iParam0->_fU100 ))
        {
            REMOVE_BLIP( iParam0->_fU100 );
        }
        return;
    }
    if (iParam0->_fU36 != 0)
    {
        if ((sub_59868( iParam0 )) == 2)
        {
            return;
        }
        sub_60753( iParam0 );
        if (iParam0->_fU36 != 0)
        {
            sub_62507( iParam0 );
        }
        if (sub_18640( iParam0, 1 ))
        {
            sub_66808( iParam0 + 0, 0 );
        }
        else
        {
            sub_66808( iParam0 + 0, 1 );
        }
        if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
        {
            if (IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 ))
            {
                uVar4 = nil;
                STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar4 );
                if (NOT (IS_CAR_DEAD( uVar4 )))
                {
                    if ((IS_CAR_UPSIDEDOWN( uVar4 )) AND (NOT (IS_CAR_IN_AIR_PROPER( uVar4 ))))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( iParam0->_fU0 );
                    }
                }
            }
        }
    }
    switch (iParam0->_fU36)
    {
        case 2:
        iVar5 = sub_67099( iParam0 );
        if (iVar5 == 1)
        {
            if (sub_18640( iParam0, 32 ))
            {
                sub_4001( iParam0, 3 );
            }
            else if (sub_18640( iParam0, 64 ))
            {
                if (sub_18640( iParam0, 1 ))
                {
                    sub_4001( iParam0, 5 );
                }
                else
                {
                    sub_4001( iParam0, 4 );
                }
            }
        }
        else if (iVar5 == 2)
        {
            ;
        }
        else if ((sub_68150( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_68407( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_69575( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_69689( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_69810( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_70110( iParam0 )) != 0)
        {
            ;
        };;;;;;;;
        break;
        case 3:
        if ((sub_70466( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_68150( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_68407( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_69575( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_69689( iParam0 )) != 0)
        {
            ;
        };;;;;
        break;
        case 1:
        if ((g_U10956 != 0) || (g_U10958 != 0))
        {
            if ((sub_60446( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_70725( iParam0 )) != 0)
            {
                ;
            }
        }
        else if ((sub_70882( iParam0 )) != 0)
        {
            ;
        }
        break;
        case 4:
        if ((sub_60446( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_68150( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_68407( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_69575( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_69689( iParam0 )) != 0)
        {
            ;
        };;;;;
        break;
        case 5:
        if ((sub_67196( iParam0 )) > 30.00000000)
        {
            sub_78033( iParam0 );
        }
        else if ((sub_70725( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_60284( iParam0, 1, 0 )) != 0)
        {
            ;
        };;;
        break;
        default: break;
    }
    if (NOT bParam1)
    {
        sub_78118( iParam0 );
    }
    return;
}

int sub_59868(int iParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    if ((NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))) || (IS_CHAR_SITTING_IN_ANY_CAR( sub_5968() )))
    {
        return 0;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref iVar3 );
    GET_CAR_CHAR_IS_USING( sub_5968(), ref iVar4 );
    GET_DRIVER_OF_CAR( iVar3, ref iVar5 );
    if (iVar5 != iParam0->_fU0)
    {
        return 0;
    }
    GET_CAR_DOOR_LOCK_STATUS( iVar3, ref iVar6 );
    if (iVar6 != 1)
    {
        return 0;
    }
    if (iVar4 == iVar3)
    {
        if (NOT (((sub_16570( iParam0 + 0 )) == 3) AND ((sub_60011( iVar3 )) == sub_60040())))
        {
            if ((((sub_16570( iParam0 + 0 )) != 1) || ((sub_60086( iParam0->_fU0 )) == (sub_11393( 0 )))) || ((sub_60128( sub_5968() )) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_5968() )))))
            {
                return 0;
            }
            else
            {
                GET_CAR_DOOR_LOCK_STATUS( iVar4, ref iVar7 );
                if (iVar7 != 1)
                {
                    return 0;
                }
            }
        }
        if ((sub_16570( iParam0 + 0 )) == 3)
        {
            sub_23915( iParam0->_fU0, "", sub_5968(), 26 );
        }
        else
        {
            sub_23915( sub_5968(), "", iParam0->_fU0, 37 );
        }
        return sub_60284( iParam0, 1, 1 );
    }
    return 0;
}

void sub_60011(unknown uParam0)
{
    unknown Result;

    GET_CAR_MODEL( uParam0, ref Result );
    return Result;
}

int sub_60040()
{
    return 301427732;
}

void sub_60086(unknown uParam0)
{
    unknown Result;

    GET_CHAR_MODEL( uParam0, ref Result );
    return Result;
}

boolean sub_60128(unknown uParam0)
{
    return (IS_CHAR_IN_ANY_CAR( uParam0 )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )));
}

int sub_60284(int iParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    float fVar6;
    int iVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (IS_CHAR_ON_FOOT( iParam0->_fU0 ))
    {
        return 1;
    }
    else if ((sub_60128( iParam0->_fU0 )) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( iParam0->_fU0 ))))
    {
        return 2;
    }
    else if ((uParam1) || (sub_18640( iParam0, 1 )))
    {
        uVar5 = nil;
        if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar5 );
        }
        if (IS_VEH_DRIVEABLE( uVar5 ))
        {
            GET_CAR_SPEED( uVar5, ref fVar6 );
            if (fVar6 > 0.20000000)
            {
                return sub_60446( iParam0 );
            }
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 31, ref iVar7 );
            if (iVar7 == 7)
            {
                if (bParam2)
                {
                    uVar8 = {sub_45710( sub_5968(), 1 )};
                    GET_OFFSET_FROM_CAR_GIVEN_WORLD_COORDS( uVar5, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                    TASK_LEAVE_CAR_IN_DIRECTION( iParam0->_fU0, uVar5, uVar8._fU0 > 0.00000000 );
                }
                else
                {
                    TASK_LEAVE_ANY_CAR( iParam0->_fU0 );
                }
            }
            return 2;
        }
    };;;
    return 0;
}

int sub_60446(int iParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = sub_5667( iParam0 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        if (IS_CHAR_STOPPED( iParam0->_fU0 ))
        {
            return 1;
        }
        else
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar4 );
            if ((iVar4 == 7) || (iParam0->_fU96 != 5))
            {
                iParam0->_fU96 = 5;
                TASK_CAR_MISSION( iParam0->_fU0, uVar3, 0, iParam0->_fU96, 0.00000000, 2, -1, -1 );
            }
            return 2;
        }
    }
    return 0;
}

void sub_60753(int iParam0)
{
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (NOT (sub_60784( (iParam0^) )))
        {
            if (((sub_60819( (iParam0^) )) AND (NOT l_U162)) AND (NOT l_U163))
            {
                if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT sub_60871()))
                {
                    if ((IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 )) AND (IS_CHAR_ON_ANY_BIKE( sub_5968() )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_5968(), iParam0->_fU0, l_U152, l_U152, l_U152, 0 ))
                        {
                            if (sub_60970())
                            {
                                if (iParam0->_fU0 == l_U161)
                                {
                                    if (NOT (ref iParam0->_fU44->_fU8))
                                    {
                                        sub_22793( (iParam0 + 44) + 12, ref l_U155, 7, 1 );
                                    }
                                    else
                                    {
                                        sub_22793( (iParam0 + 44) + 28, ref l_U155, 7, 1 );
                                    }
                                    sub_61096( iParam0 );
                                    if (NOT (IS_CHAR_INJURED( sub_5968() )))
                                    {
                                        TASK_LOOK_AT_CHAR( iParam0->_fU0, sub_5968(), -2, 0 );
                                        TASK_LOOK_AT_CHAR( sub_5968(), iParam0->_fU0, -2, 128 );
                                    }
                                    l_U138 = 0;
                                }
                                else
                                {
                                    GET_CHAR_COORDINATES( sub_5968(), ref l_U167._fU0, ref l_U167._fU4, ref l_U167._fU8 );
                                    GET_CHAR_COORDINATES( iParam0->_fU0, ref l_U170._fU0, ref l_U170._fU4, ref l_U170._fU8 );
                                    GET_DISTANCE_BETWEEN_COORDS_3D( l_U167._fU0, l_U167._fU4, l_U167._fU8, l_U170._fU0, l_U170._fU4, l_U170._fU8, ref l_U166 );
                                    if (iParam0->_fU0 == l_U161)
                                    {
                                        l_U165 += 1.00000000 * TIMESTEP();
                                        l_U164 = l_U166;
                                    }
                                    else if ((l_U166 <= l_U164) || (IS_CHAR_INJURED( l_U161 )))
                                    {
                                        l_U161 = iParam0->_fU0;
                                        l_U164 = l_U166;
                                        l_U165 = 0.00000000;
                                    }
                                }
                            }
                            else if (NOT sub_61524())
                            {
                                sub_61552();
                            }
                            else if (sub_61609())
                            {
                                sub_61573();
                            }
                            GET_CHAR_COORDINATES( sub_5968(), ref l_U167._fU0, ref l_U167._fU4, ref l_U167._fU8 );
                            GET_CHAR_COORDINATES( iParam0->_fU0, ref l_U170._fU0, ref l_U170._fU4, ref l_U170._fU8 );
                            GET_DISTANCE_BETWEEN_COORDS_3D( l_U167._fU0, l_U167._fU4, l_U167._fU8, l_U170._fU0, l_U170._fU4, l_U170._fU8, ref l_U166 );
                            if (iParam0->_fU0 == l_U161)
                            {
                                l_U165 += 1.00000000 * TIMESTEP();
                                l_U164 = l_U166;
                            }
                            else if ((l_U166 <= l_U164) || (IS_CHAR_INJURED( l_U161 )))
                            {
                                l_U161 = iParam0->_fU0;
                                l_U164 = l_U166;
                                l_U165 = 0.00000000;
                            };;;;
                        }
                        else if (NOT sub_61873())
                        {
                            sub_61924( (iParam0^) );
                        }
                    }
                    else if (NOT sub_61873())
                    {
                        sub_61924( (iParam0^) );
                    }
                }
                else if (NOT sub_61873())
                {
                    sub_61924( (iParam0^) );
                }
            }
            else if (NOT sub_61873())
            {
                sub_61924( (iParam0^) );
            }
        }
        else if (NOT sub_61873())
        {
            if ((((((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_5968(), iParam0->_fU0, l_U153, l_U153, l_U153, 0 ))) || (NOT (IS_CHAR_ON_ANY_BIKE( sub_5968() )))) || (NOT (IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 )))) || (NOT (IS_CHAR_SITTING_IN_ANY_CAR( iParam0->_fU0 )))) || (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_5968() )))) || (NOT (sub_22391( l_U155 ))))
            {
                sub_62225( iParam0 );
            }
        }
    }
    else if (sub_60784( (iParam0^) ))
    {
        sub_62239( ref l_U155, 0 );
        sub_62225( iParam0 );
    }
    return;
}

void sub_60784(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25)
{
    return uParam0._fU44._fU4;
}

void sub_60819(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25)
{
    return uParam0._fU44._fU0;
}

void sub_60871()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

int sub_60970()
{
    if (NOT l_U139)
    {
        if (l_U138)
        {
            return 1;
        }
    }
    return 0;
}

void sub_61096(int iParam0)
{
    ref iParam0->_fU44->_fU4 = 1;
    if (ref iParam0->_fU44->_fU8)
    {
        ref iParam0->_fU44->_fU0 = 0;
    }
    else if (COMPARE_STRING( (iParam0 + 44) + 28, "" ))
    {
        ref iParam0->_fU44->_fU0 = 0;
    }
    else
    {
        ref iParam0->_fU44->_fU8 = 1;
    }
    l_U161 = nil;
    l_U165 = 0.00000000;
    l_U162 = 1;
    return;
}

void sub_61524()
{
    return l_U137;
}

void sub_61552()
{
    l_U137 = 1;
    l_U138 = 0;
    sub_61573();
    return;
}

void sub_61573()
{
    l_U139 = 0;
    return;
}

void sub_61609()
{
    return l_U139;
}

void sub_61873()
{
    int Result;

    Result = 0;
    if (sub_22391( l_U145 ))
    {
        Result = 1;
    }
    return Result;
}

void sub_61924(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25)
{
    if (uParam0._fU0 == l_U161)
    {
        l_U161 = nil;
        l_U165 = 0.00000000;
        sub_61965();
    }
    return;
}

void sub_61965()
{
    if (l_U136 == 1)
    {
        l_U140 = 0.00000000;
        l_U139 = 1;
        l_U138 = 0;
    }
    return;
}

void sub_62225(int iParam0)
{
    sub_62239( ref l_U155, 1 );
    ref iParam0->_fU44->_fU4 = 0;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        TASK_CLEAR_LOOK_AT( iParam0->_fU0 );
    }
    if (NOT (IS_CHAR_DEAD( sub_5968() )))
    {
        TASK_CLEAR_LOOK_AT( sub_5968() );
    }
    l_U162 = 0;
    return;
}

void sub_62239(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8945)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_62507(int iParam0)
{
    unknown uVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int iVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    int iVar15;
    boolean bVar16;
    boolean bVar17;
    boolean bVar18;
    int iVar19;
    int iVar20;
    float fVar21;
    unknown uVar22;
    unknown uVar23;
    int iVar24;
    unknown uVar25;
    float fVar26;

    GET_GAME_TIMER( ref iVar4 );
    if ((NOT l_U177) || (iParam0->_fU36 == 0))
    {
        return;
    }
    if ((sub_60784( (iParam0^) )) AND (sub_60871()))
    {
        if ((NOT (IS_CHAR_INJURED( iParam0->_fU0 ))) AND (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
        {
            if (((IS_CHAR_SITTING_IN_CAR( iParam0->_fU0, iParam0->_fU4 )) AND (IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 ))) AND (IS_CHAR_ON_ANY_BIKE( sub_5968() )))
            {
                GET_CHAR_COORDINATES( sub_5968(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                GET_OFFSET_FROM_CAR_GIVEN_WORLD_COORDS( iParam0->_fU4, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                if (IS_SCRIPTED_SPEECH_PLAYING( iParam0->_fU0 ))
                {
                    if ((l_U175 != iParam0->_fU0) || (l_U176 != sub_5968()))
                    {
                        sub_23915( iParam0->_fU0, sub_62781( uVar8._fU0 < 0.00000000, sub_24128( iParam0->_fU4 ) ), sub_5968(), 39 );
                        PRINTSTRING( "PERFORM_BIKER_GESTURE(biker.ped, GET_RANDOM_SPEECH_ANIM(TRUE), PLAYER_CHAR_ID())\n" );
                    }
                    return;
                }
                else if (IS_SCRIPTED_SPEECH_PLAYING( sub_5968() ))
                {
                    l_U175 = sub_5968();
                    l_U176 = iParam0->_fU0;
                }
            }
        }
    }
    if (((sub_60871()) || (sub_60784( (iParam0^) ))) || ((iVar4 - l_U173) < 33))
    {
        return;
    }
    if (l_U173 <= 0)
    {
        l_U173 = iVar4;
        return;
    }
    if ((NOT (IS_CHAR_INJURED( iParam0->_fU0 ))) AND (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        iVar11 = nil;
        uVar12 = nil;
        uVar13 = nil;
        uVar14 = nil;
        iVar15 = 39;
        bVar16 = false;
        bVar17 = false;
        bVar18 = false;
        iVar19 = 10000;
        GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar20 );
        if (iVar20 == iParam0->_fU0)
        {
            uVar12 = iParam0->_fU4;
            bVar16 = true;
        }
        else if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar12 );
        }
        if (NOT (IS_CAR_DEAD( uVar12 )))
        {
            if (sub_54884( uVar12 ))
            {
                fVar21 = sub_63446( iParam0 );
                if (((NOT (sub_60784( (iParam0^) ))) AND (((IS_CHAR_ON_SCREEN( iParam0->_fU0 )) AND (fVar21 < 19)) || (fVar21 < 15))) AND (iParam0->_fU0 != l_U175))
                {
                    GET_CAR_PITCH( uVar12, ref uVar22 );
                    if ((l_U14) AND ((iParam0->_fU36 != 1) || ((sub_24749( 0, 10 )) == 0)))
                    {
                        l_U14 = 0;
                        iVar15 = 17;
                        iVar11 = sub_5968();
                    }
                    else if ((((sub_63599( iParam0 )) AND (iParam0->_fU36 == 2)) AND ((sub_16570( iParam0 + 0 )) == 1)) AND (NOT (IS_BIT_SET( l_U178, 6 ))))
                    {
                        iVar15 = 38;
                        uVar13 = sub_63713( bVar16 );
                        iVar11 = sub_5968();
                    }
                    else if (((IS_CAR_IN_AIR_PROPER( uVar12 )) AND ((ABSF( uVar22 )) < 20.00000000)) AND (sub_63801( 8 )))
                    {
                        uVar13 = sub_51209( bVar16 );
                        iVar15 = 8;
                    }
                    else if ((HAS_CAR_BEEN_DAMAGED_BY_CHAR( uVar12, sub_5968() )) AND (sub_63801( 12 )))
                    {
                        uVar13 = sub_63713( bVar16 );
                        iVar11 = sub_5968();
                        iVar15 = 12;
                        bVar17 = true;
                    }
                    else if (((HAS_CAR_BEEN_DAMAGED_BY_CHAR( uVar12, 0 )) || (IS_PED_RAGDOLL( iParam0->_fU0 ))) AND (sub_63801( 13 )))
                    {
                        uVar13 = sub_63713( bVar16 );
                        iVar11 = nil;
                        iVar15 = 13;
                        bVar17 = true;
                    }
                    else if (((((sub_16570( iParam0 + 0 )) == 1) AND (NOT (IS_PLAYER_PRESSING_HORN( sub_5899() )))) AND (IS_BIT_SET( l_U178, 7 ))) AND (sub_63801( 20 )))
                    {
                        if (bVar16)
                        {
                            bVar18 = true;
                            uVar13 = sub_51209( bVar16 );
                        }
                        iVar15 = 20;
                        iVar11 = sub_5968();
                        CLEAR_BIT( ref l_U178, 7 );
                    }
                    else if ((((IS_WANTED_LEVEL_GREATER( sub_5899(), 0 )) AND (NOT (IS_BIT_SET( l_U178, 0 )))) AND (sub_63801( 24 ))) AND ((sub_16570( iParam0 + 0 )) == 1))
                    {
                        iVar15 = 24;
                        iVar11 = sub_5968();
                    }
                    else if ((((NOT (IS_WANTED_LEVEL_GREATER( sub_5899(), 0 ))) AND (IS_BIT_SET( l_U178, 0 ))) AND (sub_63801( 30 ))) AND ((sub_16570( iParam0 + 0 )) == 1))
                    {
                        iVar15 = 30;
                    }
                    else
                    {
                        uVar5 = {sub_45710( sub_5968(), 1 )};
                        uVar23 = nil;
                        if (iVar15 == 39)
                        {
                            if (IS_BIT_SET( l_U178, 3 ))
                            {
                                if (NOT (IS_CHAR_ON_ANY_BIKE( sub_5968() )))
                                {
                                    if (IS_PED_RAGDOLL( sub_5968() ))
                                    {
                                        if (sub_63801( 20 ))
                                        {
                                            iVar15 = 20;
                                            iVar11 = sub_5968();
                                            if ((sub_24749( 0, 2 )) == 0)
                                            {
                                                uVar13 = sub_51209( bVar16 );
                                            }
                                            else
                                            {
                                                uVar13 = sub_63713( bVar16 );
                                            }
                                            CLEAR_BIT( ref l_U178, 3 );
                                        }
                                    }
                                    else if (IS_CHAR_ON_FOOT( sub_5968() ))
                                    {
                                        CLEAR_BIT( ref l_U178, 3 );
                                        CLEAR_BIT( ref l_U178, 4 );
                                    }
                                }
                            }
                            else if (IS_CHAR_ON_ANY_BIKE( sub_5968() ))
                            {
                                if (((sub_63801( 33 )) AND (NOT (IS_BIT_SET( l_U178, 4 )))) AND ((sub_16570( iParam0 + 0 )) == 1))
                                {
                                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5968(), ref uVar23 );
                                    if (DOES_VEHICLE_EXIST( uVar23 ))
                                    {
                                        iVar24 = sub_24128( uVar23 );
                                        if ((NOT (IS_CAR_A_MISSION_CAR( uVar23 ))) AND ((iVar24 == 1) || (iVar24 == 0)))
                                        {
                                            iVar15 = 33;
                                            SET_BIT( ref l_U178, 4 );
                                        }
                                    }
                                }
                                SET_BIT( ref l_U178, 3 );
                            }
                            else if (IS_CHAR_SITTING_IN_ANY_CAR( sub_5968() ))
                            {
                                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5968(), ref uVar23 );
                                if (DOES_VEHICLE_EXIST( uVar23 ))
                                {
                                    if (((sub_63801( 31 )) AND (NOT (IS_BIT_SET( l_U178, 4 )))) AND ((sub_16570( iParam0 + 0 )) == 1))
                                    {
                                        if (NOT (IS_CAR_A_MISSION_CAR( uVar23 )))
                                        {
                                            iVar15 = 31;
                                            SET_BIT( ref l_U178, 4 );
                                        }
                                    }
                                }
                                SET_BIT( ref l_U178, 3 );
                            }
                            else if ((IS_CHAR_ON_FOOT( sub_5968() )) AND (NOT (IS_PED_RAGDOLL( sub_5968() ))))
                            {
                                CLEAR_BIT( ref l_U178, 3 );
                                CLEAR_BIT( ref l_U178, 4 );
                            };;;
                            uVar23 = nil;;
                        }
                        if (iVar15 == 39)
                        {
                            BEGIN_CHAR_SEARCH_CRITERIA();
                            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 30 );
                            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 28 );
                            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 26 );
                            END_CHAR_SEARCH_CRITERIA();
                            if (GET_CLOSEST_CHAR( uVar5._fU0, uVar5._fU4, uVar5._fU8, 25.00000000, 1, 1, ref iVar11 ))
                            {
                                if ((IS_CHAR_INJURED( iVar11 )) || (iVar11 == l_U176))
                                {
                                    iVar11 = nil;
                                }
                                else if ((sub_63801( 0 )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_5899(), 0 ))))
                                {
                                    if (IS_CHAR_ON_SCREEN( iVar11 ))
                                    {
                                        uVar13 = nil;
                                        iVar15 = 0;
                                        bVar18 = (sub_24749( 0, 10 )) == 0;
                                    }
                                }
                                else if (((sub_63801( 36 )) AND (IS_WANTED_LEVEL_GREATER( sub_5899(), 0 ))) AND (NOT (IS_BIT_SET( l_U178, 1 ))))
                                {
                                    if (IS_CHAR_ON_SCREEN( iVar11 ))
                                    {
                                        uVar13 = nil;
                                        iVar15 = 36;
                                    }
                                }
                                else if ((IS_WANTED_LEVEL_GREATER( sub_5899(), 2 )) AND (sub_63801( 23 )))
                                {
                                    uVar13 = nil;
                                    iVar15 = 23;
                                };;;;
                            }
                        }
                        if ((sub_63801( 2 )) AND (iVar15 == 39))
                        {
                            BEGIN_CHAR_SEARCH_CRITERIA();
                            SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 1 );
                            END_CHAR_SEARCH_CRITERIA();
                            ALLOW_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND( 1 );
                            if (GET_CLOSEST_CHAR( uVar5._fU0, uVar5._fU4, uVar5._fU8, 25.00000000, 1, 1, ref iVar11 ))
                            {
                                if ((IS_CHAR_INJURED( iVar11 )) || (iVar11 == l_U176))
                                {
                                    iVar11 = nil;
                                }
                                else if ((IS_CHAR_MODEL( iVar11, 552542187 )) || (IS_CHAR_MODEL( iVar11, 996267216 )))
                                {
                                    uVar13 = nil;
                                    iVar15 = 2;
                                    bVar18 = (sub_24749( 0, 100 )) == 0;
                                }
                                else
                                {
                                    iVar11 = nil;
                                }
                            }
                        }
                        if (iVar15 == 39)
                        {
                            if ((IS_WANTED_LEVEL_GREATER( sub_5899(), 0 )) AND (NOT (IS_BIT_SET( l_U178, 2 ))))
                            {
                                if (IS_COP_VEHICLE_IN_AREA_3D_NO_SAVE( uVar5._fU0 - 25.00000000, uVar5._fU4 - 25.00000000, uVar5._fU8 - 25.00000000, uVar5._fU0 + 25.00000000, uVar5._fU4 + 25.00000000, uVar5._fU8 + 25.00000000 ))
                                {
                                    iVar15 = 35;
                                }
                            }
                        }
                        if (iVar15 == 39)
                        {
                            uVar23 = sub_65615( uVar5, 25.00000000, 4 );
                            if (IS_VEH_DRIVEABLE( uVar23 ))
                            {
                                GET_DRIVER_OF_CAR( uVar23, ref iVar11 );
                                if ((IS_CHAR_INJURED( iVar11 )) || (iVar11 == l_U176))
                                {
                                    iVar11 = nil;
                                }
                                else if (NOT (IS_CHAR_ON_SCREEN( iVar11 )))
                                {
                                    iVar11 = nil;
                                }
                                else
                                {
                                    uVar13 = nil;
                                    uVar25 = sub_16570( ref iVar11 );
                                    switch (uVar25)
                                    {
                                        case 2:
                                        if ((sub_63801( 28 )) AND ((sub_16570( iParam0 + 0 )) == 1))
                                        {
                                            iVar15 = 28;
                                        }
                                        break;
                                        case 1:
                                        if ((sub_16570( iParam0 + 0 )) == 2)
                                        {
                                            if ((sub_63801( 3 )) AND (sub_63801( 4 )))
                                            {
                                                if (g_U15728[13])
                                                {
                                                    iVar15 = 4;
                                                }
                                                else
                                                {
                                                    iVar15 = 3;
                                                }
                                            }
                                        }
                                        else if ((sub_16570( iParam0 + 0 )) == 1)
                                        {
                                            if (sub_63801( 30 ))
                                            {
                                                uVar13 = sub_23775( bVar16 );
                                                iVar15 = 30;
                                            }
                                        }
                                        break;
                                        default:
                                        if (sub_63801( 1 ))
                                        {
                                            iVar15 = 1;
                                        }
                                        break;
                                    }
                                }
                            }
                        }
                        GET_CHAR_SPEED( sub_5968(), ref fVar26 );
                        if (iVar15 == 39)
                        {
                            if (((sub_16570( iParam0 + 0 )) == 1) AND (fVar26 < 5))
                            {
                                if ((sub_63801( 23 )) AND (IS_WANTED_LEVEL_GREATER( sub_5899(), 0 )))
                                {
                                    iVar15 = 23;
                                }
                                else if (sub_63801( 21 ))
                                {
                                    iVar15 = 21;
                                }
                            }
                        }
                        if (iVar15 == 39)
                        {
                            if ((NOT (IS_BIT_SET( l_U178, 5 ))) AND (fVar26 > 30))
                            {
                                if ((sub_63801( 30 )) AND ((sub_16570( iParam0 + 0 )) == 1))
                                {
                                    iVar15 = 30;
                                }
                                else if (sub_63801( 20 ))
                                {
                                    iVar15 = 20;
                                }
                            }
                        }
                    };;;;;;;;
                    if (bVar18)
                    {
                        SOUND_CAR_HORN( uVar12, sub_24749( 1500, 2500 ) );
                    }
                    if (bVar17)
                    {
                        CLEAR_CAR_LAST_DAMAGE_ENTITY( uVar12 );
                    }
                    if ((iVar15 != 39) || (NOT (IS_STRING_NULL( uVar13 ))))
                    {
                        if (sub_23915( iParam0->_fU0, uVar13, iVar11, iVar15 ))
                        {
                            ;
                        }
                    }
                }
            }
        }
    }
    if (((iVar4 - l_U173) > 10000) AND (IS_BIT_SET( l_U178, 6 )))
    {
        CLEAR_BIT( ref l_U178, 6 );
    }
    if ((IS_PLAYER_PRESSING_HORN( sub_5899() )) AND (NOT (IS_BIT_SET( l_U178, 7 ))))
    {
        SET_BIT( ref l_U178, 7 );
    }
    if (((iVar4 - l_U173) > 28000) AND (l_U175 != nil))
    {
        if ((sub_16570( iParam0 + 0 )) == 1)
        {
            sub_23915( iParam0->_fU0, "", sub_5968(), 30 );
        }
        else
        {
            sub_23915( iParam0->_fU0, "", sub_5968(), 20 );
        }
        l_U175 = iParam0->_fU0;
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_5899(), 0 )))
        {
            CLEAR_BIT( ref l_U178, 0 );
            CLEAR_BIT( ref l_U178, 2 );
            CLEAR_BIT( ref l_U178, 1 );
        }
        CLEAR_BIT( ref l_U178, 7 );
    }
    return;
}

void sub_62781(boolean bParam0, int iParam1)
{
    string Result;

    Result = nil;
    if ((iParam1 == 1) || (iParam1 == 0))
    {
        if (bParam0)
        {
            switch (sub_24749( 0, 3 ))
            {
                case 0:
                Result = "chat_left_e";
                break;
                case 1:
                Result = "chat_left_f";
                break;
                default:
                Result = "chat_left_g";
                break;
            }
        }
        else
        {
            switch (sub_24749( 0, 3 ))
            {
                case 0:
                Result = "chat_right_e";
                break;
                case 1:
                Result = "chat_right_f";
                break;
                default:
                Result = "chat_right_g";
                break;
            }
        }
        PRINTSTRING( "Anim used: " );
        PRINTSTRING( Result );
        PRINTNL();
    }
    return Result;
}

void sub_63446(int iParam0)
{
    return sub_46344( iParam0->_fU0, sub_5968(), 1 );
}

void sub_63599(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( iParam0->_fU4, 0, 11, 0, ref uVar3, ref uVar4, ref uVar5 );
    return LOCATE_CHAR_IN_CAR_3D( sub_5968(), uVar3, uVar4, uVar5, 10, 10, 10, 0 );
}

void sub_63713(boolean bParam0)
{
    string Result;

    Result = nil;
    if (bParam0)
    {
        Result = "gest_damn";
    }
    return Result;
}

boolean sub_63801(int iParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 10000;
    switch (iParam0)
    {
        case 20:
        iVar3 = 2500;
        break;
        case 8:
        iVar3 = 4500;
        break;
        case 6:
        iVar3 = 2500;
        break;
        case 5:
        iVar3 = 1000;
        break;
        case 33:
        iVar3 = 2000;
        break;
        case 31:
        iVar3 = 2000;
        break;
        case 0:
        iVar3 = 18000;
        break;
        case 1:
        iVar3 = 19000;
        break;
        case 21:
        iVar3 = 25000;
        break;
        case 38:
        iVar3 = 2000;
        break;
    }
    GET_GAME_TIMER( ref iVar4 );
    if (iParam0 == 39)
    {
        return 0;
    }
    return (iVar4 - l_U173) > iVar3;
}

void sub_65615(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown Result;
    int[22] iVar8;
    int I;

    Result = nil;
    array(ref iVar8, 22);
    iVar8[0] = -408052231;
    iVar8[1] = 584879743;
    iVar8[2] = 802082487;
    iVar8[3] = -570033273;
    iVar8[4] = 301427732;
    iVar8[5] = -159126838;
    iVar8[6] = -359167535;
    iVar8[7] = -571009320;
    iVar8[8] = 2006142190;
    iVar8[9] = -1606187161;
    iVar8[10] = -618617997;
    iVar8[11] = -77769032;
    iVar8[12] = 1265391242;
    iVar8[13] = -255678177;
    iVar8[14] = -1670998136;
    iVar8[15] = -1759858085;
    iVar8[16] = -114291515;
    iVar8[17] = -891462355;
    iVar8[18] = 1203311498;
    iVar8[19] = -909201658;
    iVar8[20] = 788045382;
    iVar8[21] = -1842748181;
    for ( I = 0; I < iVar8; I++ )
    {
        Result = GET_CLOSEST_CAR( uParam0, uParam3, iVar8[I], uParam4 );
        if (IS_VEH_DRIVEABLE( Result ))
        {
            return Result;
        }
    }
    return nil;
}

void sub_66808(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if ((sub_16570( uParam0 )) == 1)
        {
            if ((IS_SCREEN_FADED_OUT()) || (NOT (IS_CHAR_ON_SCREEN( (uParam0^) ))))
            {
                if ((IS_CHAR_ON_ANY_BIKE( (uParam0^) )) || (uParam1))
                {
                    GIVE_PED_HELMET_WITH_OPTS( (uParam0^), 1 );
                }
                else
                {
                    REMOVE_PED_HELMET( (uParam0^), 1 );
                }
            }
        }
    }
    return;
}

int sub_67099(int iParam0)
{
    int iVar3;
    float fVar4;
    int iVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    if (NOT (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    else if ((sub_5667( iParam0 )) != iParam0->_fU4)
    {
        if (sub_54884( iParam0->_fU4 ))
        {
            SET_CAR_TRACTION( iParam0->_fU4, 1.00000000 );
        }
        return 0;
    }
    else if ((sub_67196( iParam0 )) < l_U183)
    {
        return 1;
    };;;
    if (sub_54884( iParam0->_fU4 ))
    {
        SET_CAR_TRACTION( iParam0->_fU4, 1.70000000 );
    }
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar3 );
    if ((iVar3 == 7) || ((iParam0->_fU96 != 4) AND (iParam0->_fU96 != 14)))
    {
        if (sub_18640( iParam0, 8 ))
        {
            iParam0->_fU96 = 14;
        }
        else
        {
            iParam0->_fU96 = 4;
        }
        if (sub_18640( iParam0, 16 ))
        {
            iVar5 = 4;
        }
        else
        {
            iVar5 = 2;
        }
        if (sub_18640( iParam0, 128 ))
        {
            TASK_CAR_MISSION_COORS_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, iParam0->_fU96, iParam0->_fU28, iVar5, l_U182, l_U181 );
        }
        else
        {
            TASK_CAR_MISSION_COORS_TARGET( iParam0->_fU0, iParam0->_fU4, ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, iParam0->_fU96, iParam0->_fU28, iVar5, l_U182, l_U181 );
        }
    }
    else if (sub_18640( iParam0, 64 ))
    {
        fVar4 = (sub_67196( iParam0 )) / 3.00000000;
        if (fVar4 < iParam0->_fU28)
        {
            SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, fVar4 );
        }
        else
        {
            SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
        }
    }
    else
    {
        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
    }
    if (sub_67724( iParam0->_fU4 ))
    {
        uVar6 = {sub_67874( iParam0->_fU4, 1 )};
        if (GET_RANDOM_CAR_NODE( uVar6, 12.00000000, 1, 0, 0, ref uVar6, ref uVar9 ))
        {
            SET_CAR_COORDINATES( iParam0->_fU4, uVar6._fU0, uVar6._fU4, uVar6._fU8 );
            SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
        }
    }
    return 2;
}

void sub_67196(int iParam0)
{
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        switch (iParam0->_fU36)
        {
            case 1:
            if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
            {
                return sub_46344( iParam0->_fU0, iParam0->_fU8, 1 );
            }
            break;
            default:
        }
    }
    return VDIST( sub_45710( iParam0->_fU0, 1 ), iParam0->_fU16 );
}

int sub_67724(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (CHECK_STUCK_TIMER( uParam0, 0, 5000 ))
        {
            return 1;
        }
        else if (CHECK_STUCK_TIMER( uParam0, 3, 60000 ))
        {
            return 1;
        }
        else if (CHECK_STUCK_TIMER( uParam0, 2, 30000 ))
        {
            return 1;
        }
        else if (CHECK_STUCK_TIMER( uParam0, 1, 40000 ))
        {
            return 1;
        };;;;
    }
    return 0;
}

void sub_67874(unknown uParam0, boolean bParam1)
{
    unknown Result;
    unknown uVar5;
    unknown uVar6;

    if (IS_CAR_DEAD( uParam0 ))
    {
        GET_DEAD_CAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else
    {
        GET_CAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    if (NOT bParam1)
    {
        Result._fU8 = 0.00000000;
    }
    return Result;
}

int sub_68150(int iParam0)
{
    unknown uVar3;
    int iVar4;

    if (NOT (sub_18640( iParam0, 2 )))
    {
        return 0;
    }
    uVar3 = sub_5667( iParam0 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        iParam0->_fU4 = uVar3;
        return 1;
    }
    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        GET_CAR_CHAR_IS_USING( iParam0->_fU0, ref uVar3 );
        if (NOT (IS_CAR_DEAD( uVar3 )))
        {
            if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
            {
                if (IS_CHAR_IN_CAR( iParam0->_fU8, uVar3 ))
                {
                    iParam0->_fU4 = uVar3;
                    return 1;
                }
            }
            GET_DRIVER_OF_CAR( uVar3, ref iVar4 );
            if (NOT (IS_CHAR_INJURED( iVar4 )))
            {
                if (((sub_16570( ref iVar4 )) == (sub_16570( iParam0 + 0 ))) || ((iVar4 == sub_5968()) AND ((sub_16570( iParam0 + 0 )) == 1)))
                {
                    sub_6009( iParam0, iVar4 );
                    return 2;
                }
            }
        }
    }
    return 0;
}

int sub_68407(int iParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
    {
        if (sub_68445( iParam0->_fU8, iParam0->_fU0, 0 ))
        {
            return 2;
        }
    }
    if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
    {
        if (sub_60128( iParam0->_fU0 ))
        {
            return 2;
        }
        if ((sub_5667( iParam0 )) == iParam0->_fU4)
        {
            if (sub_54884( iParam0->_fU4 ))
            {
                SET_BLIP_THROTTLE_RANDOMLY( iParam0->_fU4, 1 );
            }
            return 1;
        }
        if (NOT (sub_54884( iParam0->_fU4 )))
        {
            iParam0->_fU4 = nil;
            return 0;
        }
        iVar3 = nil;
        GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
        if ((iVar3 == sub_5968()) || ((iVar3 == iParam0->_fU8) AND (NOT (IS_CHAR_INJURED( iVar3 )))))
        {
            if (IS_CHAR_IN_CAR( iParam0->_fU0, iParam0->_fU4 ))
            {
                return 2;
            }
            else
            {
                return 0;
            }
        }
        else if (NOT (IS_CHAR_INJURED( iVar3 )))
        {
            if ((sub_16570( iParam0 + 0 )) == (sub_16570( ref iVar3 )))
            {
                return 0;
            }
        }
        if ((((IS_CHAR_IN_CAR( sub_5968(), iParam0->_fU4 )) || (IS_CHAR_ON_SCREEN( iParam0->_fU0 ))) || (IS_CAR_ON_SCREEN( iParam0->_fU4 ))) || ((sub_46344( iParam0->_fU0, sub_5968(), 1 )) < 90.00000000))
        {
            if (LOCATE_CHAR_ANY_MEANS_CAR_3D( iParam0->_fU0, iParam0->_fU4, 30.00000000, 30.00000000, 30.00000000, 0 ))
            {
                bVar4 = false;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            bVar4 = true;
            if (DOES_CHAR_EXIST( iVar3 ))
            {
                if (NOT (IS_CHAR_DEAD( iVar3 )))
                {
                    if (IS_PED_A_MISSION_PED( iVar3 ))
                    {
                        bVar4 = false;
                    }
                }
                if (bVar4)
                {
                    DELETE_CHAR( ref iVar3 );
                }
            }
        }
        sub_69129( iParam0 );
        if (bVar4)
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( iParam0->_fU0 );
            SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
            WARP_CHAR_INTO_CAR( iParam0->_fU0, iParam0->_fU4 );
            if (sub_54884( iParam0->_fU4 ))
            {
                SET_BLIP_THROTTLE_RANDOMLY( iParam0->_fU4, 1 );
            }
            return 1;
        }
        else
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 12, ref iVar5 );
            if (iVar5 == 7)
            {
                if (LOCATE_CHAR_ANY_MEANS_CAR_3D( iParam0->_fU0, iParam0->_fU4, 12.00000000, 30.00000000, 30.00000000, 0 ))
                {
                    TASK_ENTER_CAR_AS_DRIVER( iParam0->_fU0, iParam0->_fU4, -1 );
                }
                else
                {
                    TASK_ENTER_CAR_AS_DRIVER( iParam0->_fU0, iParam0->_fU4, -2 );
                }
            }
            return 2;
        }
    }
    return 0;
}

void sub_68445(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown[2] uVar5;

    array(ref uVar5, 2);
    uVar5[0] = uParam0;
    uVar5[1] = uParam1;
    return sub_68475( ref uVar5, uParam2 );
}

int sub_68475(unknown uParam0, unknown uParam1)
{
    int I;
    unknown[2] uVar5;

    array(ref uVar5, 2);
    if (NOT (sub_68500( (uParam0^)[0], ref uVar5[0], uParam1 )))
    {
        return 0;
    }
    for ( I = 1; I <= ((uParam0^) - 1); I++ )
    {
        if (sub_68500( (uParam0^)[I], ref uVar5[1], uParam1 ))
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

int sub_68500(unknown uParam0, unknown uParam1, boolean bParam2)
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

int sub_69129(int iParam0)
{
    if (sub_69143( iParam0->_fU0 ))
    {
        ;
    }
    return 1;
}

int sub_69143(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;

    if (IS_PED_IN_GROUP( uParam0 ))
    {
        GET_PED_GROUP_INDEX( uParam0, ref iVar3 );
        if (DOES_GROUP_EXIST( iVar3 ))
        {
            GET_GROUP_SIZE( iVar3, ref iVar4, ref iVar5 );
            if (NOT (IS_GROUP_LEADER( uParam0, iVar3 )))
            {
                if (((iVar4 < 1) || (iVar5 < 2)) AND (iVar3 != sub_69229()))
                {
                    REMOVE_GROUP( iVar3 );
                }
                else
                {
                    REMOVE_CHAR_FROM_GROUP( uParam0 );
                }
                return 1;
            }
            else if ((iVar5 < 1) AND (iVar3 != sub_69229()))
            {
                REMOVE_GROUP( iVar3 );
            }
        }
    }
    return 0;
}

void sub_69229()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_69575(int iParam0)
{
    unknown uVar3;

    if ((NOT (sub_18640( iParam0, 2 ))) AND (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    uVar3 = sub_65615( sub_45710( iParam0->_fU0, 1 ), 30.00000000, 190 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        iParam0->_fU4 = uVar3;
        return 1;
    }
    return 0;
}

int sub_69689(int iParam0)
{
    unknown uVar3;

    return 0;
    if ((NOT (sub_18640( iParam0, 2 ))) AND (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    uVar3 = GET_CLOSEST_CAR( sub_45710( iParam0->_fU0, 1 ), 30.00000000, 0, 190 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        iParam0->_fU4 = uVar3;
        return 1;
    }
    return 0;
}

int sub_69810(int iParam0)
{
    float fVar3;
    int iVar4;

    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        return 0;
    }
    fVar3 = sub_67196( iParam0 );
    if (fVar3 < 12.00000000)
    {
        return 1;
    }
    else if (fVar3 > 90.00000000)
    {
        return 0;
    }
    else
    {
        switch (iParam0->_fU36)
        {
            case 2:
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 27, ref iVar4 );
            if (iVar4 == 7)
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( iParam0->_fU0, ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, 4, -1, 12.00000000 / 2.00000000 );
            }
            else if ((GET_NAVMESH_ROUTE_RESULT( iParam0->_fU0 )) == 2)
            {
                return 0;
            }
            break;
            case 1:
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 21, ref iVar4 );
            if (iVar4 == 7)
            {
                TASK_GO_TO_CHAR( iParam0->_fU0, iParam0->_fU8, -1, 12.00000000 / 2.00000000 );
            }
            break;
            default: break;
        }
    }
    return 2;
}

int sub_70110(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (iParam0->_fU36 != 2)
    {
        return 0;
    }
    GET_GAME_VIEWPORT_ID( ref uVar3 );
    if ((sub_67196( iParam0 )) < 12.00000000)
    {
        return 1;
    }
    else if ((((sub_67196( iParam0 )) > 90.00000000) AND (NOT (IS_CHAR_ON_SCREEN( iParam0->_fU0 )))) AND ((sub_46344( iParam0->_fU0, sub_5968(), 1 )) > 90.00000000))
    {
        if (GET_SAFE_POSITION_FOR_CHAR( ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, 0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 ))
        {
            if (((CAM_IS_SPHERE_VISIBLE( uVar3, uVar4._fU0, uVar4._fU4, uVar4._fU8, 2.00000000 )) || (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar4._fU0, uVar4._fU4, uVar4._fU8, 2.00000000, 2.00000000, 2.00000000 ))) || ((VDIST( sub_45710( sub_5968(), 1 ), uVar4 )) < 30.00000000))
            {
                ;
            }
            else if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( iParam0->_fU0, uVar4._fU0, uVar4._fU4, uVar4._fU8 );
            }
            else
            {
                SET_CHAR_COORDINATES( iParam0->_fU0, uVar4._fU0, uVar4._fU4, uVar4._fU8 );
            }
            return 2;;
        }
    }
    return 0;
}

int sub_70466(int iParam0)
{
    int iVar3;

    if (NOT (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    else if ((sub_5667( iParam0 )) != iParam0->_fU4)
    {
        return 0;
    }
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 16, ref iVar3 );
    if (iVar3 == 7)
    {
        TASK_CAR_DRIVE_WANDER( iParam0->_fU0, iParam0->_fU4, iParam0->_fU28, 2 );
    }
    SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
    return 2;
}

int sub_70725(int iParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
    {
        if (NOT (IS_PED_IN_COMBAT( iParam0->_fU0 )))
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 34, ref iVar3 );
            if ((iVar3 == 7) AND (NOT (IS_CHAR_FACING_CHAR( iParam0->_fU0, sub_5968(), 45.00000000 ))))
            {
                TASK_LOOK_AT_CHAR( iParam0->_fU0, sub_5968(), -1, 0 );
                TASK_TURN_CHAR_TO_FACE_CHAR( iParam0->_fU0, sub_5968() );
            }
        }
        return 1;
    }
    return 0;
}

int sub_70882(int iParam0)
{
    unknown uVar3;
    int iVar4;
    boolean bVar5;
    boolean bVar6;
    unknown uVar7;
    float fVar8;
    int iVar9;

    if (IS_CHAR_INJURED( iParam0->_fU8 ))
    {
        return 0;
    }
    iVar4 = nil;
    bVar5 = false;
    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref iVar4 );
    }
    if (DOES_VEHICLE_EXIST( iVar4 ))
    {
        if (sub_6105( iParam0->_fU0, iVar4 ))
        {
            bVar5 = true;
            GET_DRIVER_OF_CAR( iVar4, ref uVar3 );
            bVar6 = false;
            if ((NOT (IS_CHAR_IN_CAR( sub_5968(), iVar4 ))) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_5968() ))))
            {
                if (IS_CHAR_INJURED( uVar3 ))
                {
                    bVar6 = true;
                }
            }
            if (IS_CAR_MODEL( iVar4, -960289747 ))
            {
                if (sub_68445( sub_5968(), iParam0->_fU0, 0 ))
                {
                    return 2;
                }
            }
            else if ((sub_16570( iParam0 + 0 )) == 1)
            {
                GET_CAR_CHAR_IS_USING( sub_5968(), ref uVar7 );
                if (DOES_VEHICLE_EXIST( uVar7 ))
                {
                    if (IS_CAR_MODEL( uVar7, 800869680 ))
                    {
                        return 2;
                    }
                }
            }
            if (bVar6)
            {
                return sub_60284( iParam0, 1, 0 );
            }
        }
    }
    if ((sub_18640( iParam0, 1 )) AND ((sub_67196( iParam0 )) < 30.00000000))
    {
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 1 );
        if (IS_PED_IN_COMBAT( iParam0->_fU0 ))
        {
            return 2;
        }
    }
    else
    {
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 0 );
        if ((IS_PED_IN_COMBAT( iParam0->_fU0 )) AND (NOT bVar5))
        {
            CLEAR_CHAR_TASKS( iParam0->_fU0 );
        }
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( iParam0->_fU0 )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0->_fU0, 1 );
        }
        else
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0->_fU0, 0 );
        }
    }
    iVar4 = nil;
    GET_CAR_CHAR_IS_USING( sub_5968(), ref iVar4 );
    fVar8 = 20.00000000;
    if (iParam0->_fU8 == sub_5968())
    {
        if ((IS_CHAR_ON_FOOT( iParam0->_fU0 )) AND (IS_CHAR_ON_FOOT( sub_5968() )))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( sub_5968(), ref iVar9 );
            if (iVar9 != 0)
            {
                fVar8 = 100.00000000;
            }
        }
    }
    if ((NOT (IS_CHAR_IN_WATER( iParam0->_fU8 ))) AND ((((IS_CHAR_SITTING_IN_ANY_CAR( iParam0->_fU8 )) || (IS_CHAR_GETTING_IN_TO_A_CAR( iParam0->_fU8 ))) || (DOES_VEHICLE_EXIST( iVar4 ))) || ((sub_46344( iParam0->_fU0, iParam0->_fU8, 1 )) > fVar8)))
    {
        if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
        {
            if ((sub_6129( iParam0->_fU8, iParam0->_fU4 )) || (iParam0->_fU4 == iVar4))
            {
                if ((sub_71568( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_68150( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_69575( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_72635( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_73046( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_69810( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_70725( iParam0 )) != 0)
                {
                    ;
                };;;;;;;
            }
            else if ((sub_6129( sub_5968(), iParam0->_fU4 )) AND ((sub_16570( iParam0 + 0 )) == 1))
            {
                if ((sub_68150( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_69575( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_72635( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_73046( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_69810( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_70725( iParam0 )) != 0)
                {
                    ;
                };;;;;;
            }
            else if ((sub_73872( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_74021( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_68407( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_68150( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_69575( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_73046( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_71568( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_72635( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_69810( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_70725( iParam0 )) != 0)
            {
                ;
            };;;;;;;;;;;;
        }
        else if ((sub_73872( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_68407( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_68150( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_71568( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_69575( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_69689( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_72635( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_73046( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_69810( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_70725( iParam0 )) != 0)
        {
            ;
        };;;;;;;;;;;
    }
    else if (((sub_68445( sub_5968(), iParam0->_fU0, 1 )) AND (iParam0->_fU8 != sub_5968())) AND ((sub_16570( iParam0 + 0 )) == 1))
    {
        sub_6009( iParam0, sub_5968() );
    }
    if (IS_CHAR_IN_WATER( iParam0->_fU8 ))
    {
        if (IS_CHAR_IN_WATER( iParam0->_fU0 ))
        {
            if ((sub_60446( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_68407( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_68150( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_73046( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_71907( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_69810( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_69575( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_69689( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_72635( iParam0 )) != 0)
            {
                ;
            };;;;;;;;;
        }
        else if ((NOT (sub_18640( iParam0, 1 ))) || (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
        {
            if ((sub_60446( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_68407( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_68150( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_73046( iParam0 )) != 0)
            {
                ;
            };;;;
        }
        else if ((sub_73872( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_71907( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_69810( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_70725( iParam0 )) != 0)
        {
            ;
        };;;;;;
    }
    else if ((sub_18640( iParam0, 1 )) AND (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU8 ))))
    {
        if ((sub_73872( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_71907( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_69810( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_60284( iParam0, 0, 0 )) != 0)
        {
            ;
        }
        else if ((sub_60446( iParam0 )) != 0)
        {
            ;
        };;;;;
    }
    else if ((sub_73872( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_60446( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_68407( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_68150( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_71568( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_69575( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_73046( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_72635( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_71907( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_69810( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_70725( iParam0 )) != 0)
    {
        ;
    };;;;;;;;;;;;;;
    return 2;
}

int sub_71568(int iParam0)
{
    unknown uVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    int iVar14;
    int iVar15;

    if (IS_CHAR_INJURED( iParam0->_fU8 ))
    {
        return 0;
    }
    else if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU8 )))
    {
        return 0;
    }
    else
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU8, ref uVar3 );
        if (NOT (IS_VEH_DRIVEABLE( uVar3 )))
        {
            return 0;
        }
        else if (IS_CHAR_IN_CAR( iParam0->_fU0, uVar3 ))
        {
            return 1;
        }
        else
        {
            iVar4 = sub_71697( uVar3 );
            if (iVar4 < 0)
            {
                return 0;
            }
        }
    }
    uVar5 = {sub_67874( uVar3, 1 )};
    uVar8 = {sub_45710( iParam0->_fU0, 1 )};
    uVar11 = {sub_45710( sub_5968(), 1 )};
    if (IS_PED_IN_GROUP( iParam0->_fU0 ))
    {
        if ((sub_67196( iParam0 )) > 30.00000000)
        {
            sub_69129( iParam0 );
            return 0;
        }
        else
        {
            return 2;
        }
    }
    else if ((sub_67196( iParam0 )) < 12.00000000)
    {
        iVar14 = sub_71907( iParam0 );
        if (iVar14 != 0)
        {
            return 2;
        }
    }
    if ((((IS_CHAR_ON_SCREEN( iParam0->_fU0 )) || (IS_CAR_ON_SCREEN( uVar3 ))) || ((VDIST( uVar11, uVar5 )) < 30.00000000)) || ((VDIST( uVar11, uVar8 )) < 30.00000000))
    {
        if ((VDIST( uVar8, uVar5 )) > 30.00000000)
        {
            return 0;
        }
        else
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 11, ref iVar15 );
            if (iVar15 == 7)
            {
                TASK_ENTER_CAR_AS_PASSENGER( iParam0->_fU0, uVar3, -2, iVar4 );
            }
            return 2;
        }
    }
    else
    {
        CLEAR_CHAR_TASKS( iParam0->_fU0 );
        WARP_CHAR_INTO_CAR_AS_PASSENGER( iParam0->_fU0, uVar3, iVar4 );
        return 1;
    }
    return 0;
}

int sub_71697(unknown uParam0)
{
    int Result;
    int iVar4;

    GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar4 );
    for ( Result = 0; Result < iVar4; Result++ )
    {
        if (IS_CAR_PASSENGER_SEAT_FREE( uParam0, Result ))
        {
            return Result;
        }
    }
    return -1;
}

int sub_71907(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    unknown uVar6;

    if (IS_CHAR_INJURED( iParam0->_fU8 ))
    {
        if (sub_69143( iParam0->_fU0 ))
        {
            ;
        }
        return 0;
    }
    else if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        if (NOT (sub_68445( iParam0->_fU0, iParam0->_fU8, 1 )))
        {
            return 0;
        }
    }
    else if ((sub_46344( iParam0->_fU0, iParam0->_fU8, 1 )) > 12.00000000)
    {
        return 0;
    }
    GET_PED_GROUP_INDEX( iParam0->_fU8, ref uVar3 );
    if (DOES_GROUP_EXIST( uVar3 ))
    {
        if (IS_GROUP_MEMBER( iParam0->_fU0, uVar3 ))
        {
            return 1;
        }
    }
    else
    {
        REMOVE_ALL_INACTIVE_GROUPS_FROM_CLEANUP_LIST();
        CREATE_GROUP( 0, ref uVar3, 1 );
        SET_GROUP_LEADER( uVar3, iParam0->_fU8 );
        PRINTSTRING( "e1_biker_buddy_task: CREATING GROUP with leader" );
        PRINTINT( iParam0->_fU8 );
        PRINTSTRING( " and ped " );
        PRINTINT( iParam0->_fU0 );
        PRINTNL();
    }
    if (DOES_GROUP_EXIST( uVar3 ))
    {
        GET_GROUP_SIZE( uVar3, ref uVar4, ref iVar5 );
        if (iVar5 < 7)
        {
            if (IS_PED_IN_GROUP( iParam0->_fU0 ))
            {
                REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
            }
            GET_GROUP_LEADER( uVar3, ref uVar6 );
            if (NOT (IS_CHAR_INJURED( uVar6 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0->_fU0, 0 );
                SET_GROUP_MEMBER( uVar3, iParam0->_fU0 );
                SET_CHAR_NEVER_LEAVES_GROUP( iParam0->_fU0, 1 );
                return 1;
            }
        }
    }
    return 0;
}

int sub_72635(int iParam0)
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

    if (NOT (sub_18640( iParam0, 2 )))
    {
        return 0;
    }
    iVar3 = 0;
    if (NOT (IS_CAR_DEAD( iParam0->_fU4 )))
    {
        iVar3 = sub_60011( iParam0->_fU4 );
    }
    else if (HAS_MODEL_LOADED( -408052231 ))
    {
        iVar3 = -408052231;
    }
    else if (HAS_MODEL_LOADED( -570033273 ))
    {
        iVar3 = -570033273;
    }
    else if (HAS_MODEL_LOADED( 584879743 ))
    {
        iVar3 = 584879743;
    }
    else if (HAS_MODEL_LOADED( 802082487 ))
    {
        iVar3 = 802082487;
    }
    else if (HAS_MODEL_LOADED( -1830458836 ))
    {
        iVar3 = -1830458836;
    };;;;;;
    if (iVar3 == 0)
    {
        ;
    }
    else if ((NOT (IS_CHAR_ON_SCREEN( iParam0->_fU0 ))) AND ((sub_63446( iParam0 )) > 30.00000000))
    {
        GET_CHAR_COORDINATES( iParam0->_fU0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        if (GET_CLOSEST_CAR_NODE_WITH_HEADING( uVar4._fU0, uVar4._fU4, uVar4._fU8, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8, ref uVar10 ))
        {
            uVar11 = sub_18086( uVar4, uVar10, iVar3 );
            WARP_CHAR_INTO_CAR( iParam0->_fU0, uVar11 );
            if (sub_54884( uVar11 ))
            {
                GIVE_PED_HELMET_WITH_OPTS( iParam0->_fU0, 0 );
                SET_BLIP_THROTTLE_RANDOMLY( uVar11, 1 );
            }
            MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar11 );
            return 1;
        }
    }
    return 0;
}

int sub_73046(int iParam0)
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
    int iVar13;
    int iVar14;
    boolean bVar15;

    if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
    {
        if (IS_CHAR_SITTING_IN_CAR( iParam0->_fU0, iParam0->_fU4 ))
        {
            GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
            if ((iVar3 == iParam0->_fU0) || (IS_CHAR_INJURED( iVar3 )))
            {
                return 0;
            }
            else if (iVar3 != iParam0->_fU8)
            {
                sub_6009( iParam0, iVar3 );
                return 2;
            }
            else
            {
                return 1;
            }
        }
        uVar4 = {sub_45710( sub_5968(), 1 )};
        uVar7 = {sub_45710( iParam0->_fU0, 1 )};
        uVar10 = {sub_67874( iParam0->_fU4, 1 )};
        if ((((IS_CHAR_ON_SCREEN( iParam0->_fU0 )) || (IS_CAR_ON_SCREEN( iParam0->_fU4 ))) || ((VDIST( uVar4, uVar10 )) < 30.00000000)) || ((VDIST( uVar4, uVar7 )) < 30.00000000))
        {
            if ((VDIST( uVar10, uVar7 )) > 30.00000000)
            {
                return 0;
            }
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 11, ref iVar13 );
            if (iVar13 != 7)
            {
                return 2;
            }
            GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
            if (IS_CHAR_INJURED( iVar3 ))
            {
                return 0;
            }
            else if ((iVar3 == sub_5968()) || ((sub_16570( ref iVar3 )) == (sub_16570( iParam0 + 0 ))))
            {
                iVar14 = sub_71697( iParam0->_fU4 );
                if (iVar14 < 0)
                {
                    return 0;
                }
                else
                {
                    TASK_ENTER_CAR_AS_PASSENGER( iParam0->_fU0, iParam0->_fU4, -2, iVar14 );
                    return 2;
                }
            }
            else
            {
                return 0;
            }
        }
        else
        {
            GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
            if (DOES_CHAR_EXIST( iVar3 ))
            {
                if (IS_PED_A_MISSION_PED( iVar3 ))
                {
                    bVar15 = false;
                }
                else
                {
                    DELETE_CHAR( ref iVar3 );
                    bVar15 = true;
                }
            }
            else
            {
                bVar15 = true;
            }
            if (bVar15)
            {
                CLEAR_CHAR_TASKS( iParam0->_fU0 );
                SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
                WARP_CHAR_INTO_CAR( iParam0->_fU0, iParam0->_fU4 );
                if (sub_54884( iParam0->_fU4 ))
                {
                    GIVE_PED_HELMET_WITH_OPTS( iParam0->_fU0, 0 );
                    SET_BLIP_THROTTLE_RANDOMLY( iParam0->_fU4, 1 );
                }
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
    iParam0->_fU4 = nil;
    return 0;
}

int sub_73872(int iParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (IS_CHAR_INJURED( iParam0->_fU0 ))
    {
        return 0;
    }
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 91, ref uVar3 );
    GET_CHAR_HIGHEST_PRIORITY_EVENT( iParam0->_fU0, ref uVar4 );
    if ((((IS_PED_IN_COMBAT( iParam0->_fU0 )) || (IS_CHAR_RESPONDING_TO_EVENT( iParam0->_fU0, 110 ))) || (IS_CHAR_RESPONDING_TO_EVENT( iParam0->_fU0, 115 ))) AND ((sub_67196( iParam0 )) < 30.00000000))
    {
        return 2;
    }
    return 0;
}

int sub_74021(int iParam0)
{
    int iVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    int iVar8;
    boolean bVar9;
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

    if (NOT (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    else if ((sub_5667( iParam0 )) != iParam0->_fU4)
    {
        if (sub_54884( iParam0->_fU4 ))
        {
            SET_CAR_TRACTION( iParam0->_fU4, 1.00000000 );
        }
        return 0;
    }
    else if (NOT (DOES_CHAR_EXIST( iParam0->_fU8 )))
    {
        if (sub_54884( iParam0->_fU4 ))
        {
            SET_CAR_TRACTION( iParam0->_fU4, 1.00000000 );
        }
        return 0;
    };;;
    if (sub_54884( iParam0->_fU4 ))
    {
        SET_CAR_TRACTION( iParam0->_fU4, 2.00000000 );
    }
    if ((CHECK_STUCK_TIMER( iParam0->_fU4, 0, 5000 )) AND (NOT (IS_CAR_ON_SCREEN( iParam0->_fU4 ))))
    {
        SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
    }
    sub_69129( iParam0 );
    iVar8 = 2;
    if (sub_18640( iParam0, 16 ))
    {
        iVar8 = 4;
    }
    bVar9 = false;
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar3 );
    fVar6 = sub_67196( iParam0 );
    uVar10 = nil;
    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU8 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU8, ref uVar10 );
    }
    else if ((iParam0->_fU8 == sub_5968()) AND (IS_CHAR_GETTING_IN_TO_A_CAR( sub_5968() )))
    {
        GET_VEHICLE_PLAYER_WOULD_ENTER( sub_5899(), ref uVar10 );
    }
    if (IS_VEH_DRIVEABLE( uVar10 ))
    {
        GET_CAR_MODEL( uVar10, ref uVar11 );
        if (NOT ((IS_THIS_MODEL_A_BIKE( uVar11 )) || (IS_THIS_MODEL_A_CAR( uVar11 ))))
        {
            uVar10 = nil;
        }
    }
    if (IS_VEH_DRIVEABLE( uVar10 ))
    {
        if (PLAYER_IS_INTERACTING_WITH_GARAGE())
        {
            uVar12 = {sub_45710( sub_5968(), 1 )};
            if (GET_NTH_CLOSEST_CAR_NODE( uVar12._fU0, uVar12._fU4, uVar12._fU8, 5, ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 ))
            {
                return sub_74539( iParam0, uVar12 );
            }
            else
            {
                return sub_60446( iParam0 );
            }
        }
        GET_CHAR_SPEED( iParam0->_fU8, ref fVar5 );
        GET_CHAR_SPEED( iParam0->_fU0, ref fVar4 );
        fVar7 = 50.00000000;
        if ((fVar4 < 2.50000000) AND (fVar6 < 9.00000000))
        {
            return sub_60446( iParam0 );
        }
        else if (fVar6 < 15.00000000)
        {
            if (fVar6 < 1.50000000)
            {
                fVar7 = 0.00000000;
            }
            else if (fVar5 < 0.50000000)
            {
                return sub_60446( iParam0 );
            }
            else if (fVar5 < 4.00000000)
            {
                fVar7 = fVar5;
            }
            else
            {
                GET_MODEL_DIMENSIONS( uVar11, ref uVar15, ref uVar18 );
                if (iParam0->_fU8 != sub_5968())
                {
                    if ((((fVar6 < 6.00000000) AND (iParam0->_fU40 == 2)) || ((fVar6 < 5.00000000) AND (iParam0->_fU40 == 3))) || (fVar6 < 3.00000000))
                    {
                        fVar7 = fVar5 - 2.00000000;
                        if (iParam0->_fU40 == 2)
                        {
                            SET_CAR_LANE_SHIFT( iParam0->_fU4, 1.50000000 );
                        }
                    }
                    else
                    {
                        SET_CAR_LANE_SHIFT( iParam0->_fU4, 0.00000000 );
                    }
                }
                else if (sub_74951())
                {
                    if (fVar6 < 5.00000000)
                    {
                        fVar7 = fVar5 - 5.00000000;
                    }
                    else
                    {
                        fVar7 = fVar5;
                    }
                }
                else if ((IS_THIS_MODEL_A_CAR( uVar11 )) AND (fVar6 < (((ABSF( uVar15._fU4 )) + uVar18._fU0) + 2.50000000)))
                {
                    fVar7 = fVar5 - 2.00000000;
                }
                else if ((fVar6 < 4.00000000) AND (iParam0->_fU40 == 2))
                {
                    fVar7 = fVar5 - 5.00000000;
                }
                else if (fVar6 < 2.50000000)
                {
                    fVar7 = fVar5;
                };;;;;
            };;;
        }
        else if (((sub_67724( iParam0->_fU4 )) || (sub_18640( iParam0, 4 ))) AND ((sub_63446( iParam0 )) >= l_U133))
        {
            bVar9 = sub_75221( iParam0, l_U133, l_U134, fVar5 + 4.00000000 );
            if (bVar9)
            {
                if (sub_18640( iParam0, 128 ))
                {
                    TASK_CAR_MISSION_PED_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, fVar5 + 6.00000000, iVar8, 12, -1 );
                }
                else
                {
                    TASK_CAR_MISSION_PED_TARGET( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, fVar5 + 6.00000000, iVar8, 12, -1 );
                }
                return 2;
            }
        };;;
        if (fVar7 < 0.00000000)
        {
            fVar7 = 0.00000000;
        }
        if (((((((iVar3 == 7) || ((iParam0->_fU96 == 10) AND (iParam0->_fU40 != 0))) || ((iParam0->_fU96 == 12) AND (iParam0->_fU40 != 2))) || ((iParam0->_fU96 == 11) AND (iParam0->_fU40 != 1))) || ((iParam0->_fU96 == 7) AND (iParam0->_fU40 != 3))) || ((((iParam0->_fU96 != 7) AND (iParam0->_fU96 != 10)) AND (iParam0->_fU96 != 12)) AND (iParam0->_fU96 != 11))) || ((iParam0->_fU8 != iParam0->_fU12) AND (NOT (iParam0->_fU12 == nil))))
        {
            switch (iParam0->_fU40)
            {
                case 0:
                iParam0->_fU96 = 10;
                break;
                case 1:
                iParam0->_fU96 = 11;
                break;
                case 2:
                iParam0->_fU96 = 12;
                break;
                default:
                iParam0->_fU96 = 7;
                break;
            }
            if (sub_18640( iParam0, 128 ))
            {
                TASK_CAR_MISSION_PED_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, fVar7, iVar8, 12, -1 );
            }
            else
            {
                TASK_CAR_MISSION_PED_TARGET( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, fVar7, iVar8, 12, -1 );
            }
            return 2;
        }
        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, fVar7 );
        return 2;
    }
    else
    {
        GET_CHAR_SPEED( iParam0->_fU0, ref fVar4 );
        if (fVar6 < 12.00000000)
        {
            return sub_60446( iParam0 );
        }
        else if (((((((iVar3 == 7) || ((iParam0->_fU96 == 10) AND (iParam0->_fU40 != 0))) || ((iParam0->_fU96 == 12) AND (iParam0->_fU40 != 2))) || ((iParam0->_fU96 == 11) AND (iParam0->_fU40 != 1))) || ((iParam0->_fU96 == 7) AND (iParam0->_fU40 != 3))) || ((((iParam0->_fU96 != 7) AND (iParam0->_fU96 != 10)) AND (iParam0->_fU96 != 12)) AND (iParam0->_fU96 != 11))) || ((iParam0->_fU8 != iParam0->_fU12) AND (NOT (iParam0->_fU12 == nil))))
        {
            switch (iParam0->_fU40)
            {
                case 0:
                iParam0->_fU96 = 10;
                break;
                case 1:
                iParam0->_fU96 = 11;
                break;
                case 2:
                iParam0->_fU96 = 12;
                break;
                default:
                iParam0->_fU96 = 7;
                break;
            }
            if (sub_18640( iParam0, 128 ))
            {
                TASK_CAR_MISSION_PED_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, iParam0->_fU28, iVar8, 12, -1 );
            }
            else
            {
                TASK_CAR_MISSION_PED_TARGET( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, iParam0->_fU28, iVar8, 12, -1 );
            }
        }
        fVar7 = fVar6;
        sub_76665( ref fVar7, 5.00000000, 50.00000000 );
        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, fVar7 );;
    }
    return 2;
}

void sub_74539(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown Result;

    uVar6 = {iParam0->_fU16};
    iParam0->_fU16 = {uParam1};
    uVar9 = iParam0->_fU88;
    sub_7015( iParam0, 64 );
    Result = sub_67099( iParam0 );
    iParam0->_fU16 = {uVar6};
    iParam0->_fU88 = uVar9;
    return Result;
}

boolean sub_74951()
{
    return ((IS_CONTROL_PRESSED( 0, 41 )) || (IS_CONTROL_PRESSED( 0, 44 ))) || (IS_CONTROL_PRESSED( 0, 45 ));
}

int sub_75221(int iParam0, unknown uParam1, float fParam2, unknown uParam3)
{
    vector vVar6;
    vector vVar9;
    vector vVar12;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    float fVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;

    if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( iParam0->_fU8, iParam0->_fU4, uParam1, uParam1, uParam1, 0 )))
    {
        if (NOT (IS_CAR_ON_SCREEN( iParam0->_fU4 )))
        {
            GET_CAR_COORDINATES( iParam0->_fU4, ref vVar6.x, ref vVar6.y, ref vVar6.z );
            GET_CHAR_COORDINATES( iParam0->_fU8, ref vVar12.x, ref vVar12.y, ref vVar12.z );
            vVar9 = {vVar6 - vVar12};
            vVar9 = {vVar9 * ((fParam2 + (10.00000000 / 2)) / (VMAG( vVar9 )))};
            vVar9 = {vVar9 + vVar12};
            if (GET_CLOSEST_CAR_NODE_WITH_HEADING( vVar9.x, vVar9.y, vVar9.z, ref uVar15._fU0, ref uVar15._fU4, ref uVar15._fU8, ref uVar18 ))
            {
                if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar15._fU0, uVar15._fU4, uVar15._fU8, 4.00000000, 4.00000000, 4.00000000 )))
                {
                    GET_GAME_VIEWPORT_ID( ref uVar19 );
                    if (((NOT (CAM_IS_SPHERE_VISIBLE( uVar19, uVar15._fU0, uVar15._fU4, uVar15._fU8, 6.00000000 ))) AND ((VDIST( uVar15, sub_45710( sub_5968(), 1 ) )) > fParam2)) AND ((VDIST2( uVar15, vVar6 )) > 9.00000000))
                    {
                        uVar21 = {-SIN( uVar18 ), COS( uVar18 ), 0.00000000};
                        GET_ANGLE_BETWEEN_2D_VECTORS( uVar21._fU0, uVar21._fU4, vVar12.x - uVar15._fU0, vVar12.y - uVar15._fU4, ref fVar20 );
                        if (fVar20 > 90.00000000)
                        {
                            LIMIT_ANGLE( fVar20 + 180.00000000, ref fVar20 );
                            LIMIT_ANGLE( uVar18 + 180.00000000, ref uVar18 );
                        }
                        if ((fVar20 < 45.00000000) || (fVar20 > 315.00000000))
                        {
                            SET_CAR_HEADING( iParam0->_fU4, uVar18 );
                            SET_CAR_COORDINATES( iParam0->_fU4, uVar15._fU0, uVar15._fU4, uVar15._fU8 );
                            SET_CAR_FORWARD_SPEED( iParam0->_fU4, uParam3 );
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_76665(unknown uParam0, float fParam1, float fParam2)
{
    float fVar5;

    if (fParam2 < fParam1)
    {
        fVar5 = fParam2;
        fParam2 = fParam1;
        fParam1 = fVar5;
    }
    if ((uParam0^) < fParam1)
    {
        (uParam0^) = fParam1;
        return 1;
    }
    else if ((uParam0^) > fParam2)
    {
        (uParam0^) = fParam2;
        return 1;
    }
    return 0;
}

void sub_78033(unknown uParam0)
{
    sub_4001( uParam0, 2 );
    return;
}

void sub_78118(int iParam0)
{
    if (PLAYER_IS_INTERACTING_WITH_GARAGE())
    {
        if (NOT (sub_18640( iParam0, 256 )))
        {
            if (DOES_CHAR_EXIST( iParam0->_fU0 ))
            {
                if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
                {
                    if (IS_CHAR_VISIBLE( iParam0->_fU0 ))
                    {
                        if (NOT (sub_68445( sub_5968(), iParam0->_fU0, 1 )))
                        {
                            SET_CHAR_VISIBLE( iParam0->_fU0, 0 );
                            FREEZE_CHAR_POSITION( iParam0->_fU0, 1 );
                            if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
                            {
                                SET_CHAR_COLLISION( iParam0->_fU0, 0 );
                            }
                        }
                    }
                }
            }
            if (NOT (IS_CAR_DEAD( iParam0->_fU4 )))
            {
                if (NOT (IS_CHAR_IN_CAR( sub_5968(), iParam0->_fU4 )))
                {
                    SET_CAR_VISIBLE( iParam0->_fU4, 0 );
                    FREEZE_CAR_POSITION( iParam0->_fU4, 1 );
                    SET_CAR_COLLISION( iParam0->_fU4, 0 );
                }
            }
            sub_7015( iParam0, 256 );
        }
    }
    else if (sub_18640( iParam0, 256 ))
    {
        if (DOES_CHAR_EXIST( iParam0->_fU0 ))
        {
            if (NOT (IS_CHAR_ON_SCREEN( iParam0->_fU0 )))
            {
                if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
                {
                    if (NOT (IS_CHAR_VISIBLE( iParam0->_fU0 )))
                    {
                        SET_CHAR_VISIBLE( iParam0->_fU0, 1 );
                        FREEZE_CHAR_POSITION( iParam0->_fU0, 0 );
                        if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
                        {
                            SET_CHAR_COLLISION( iParam0->_fU0, 1 );
                        }
                    }
                }
                if (NOT (IS_CAR_DEAD( iParam0->_fU4 )))
                {
                    SET_CAR_VISIBLE( iParam0->_fU4, 1 );
                    FREEZE_CAR_POSITION( iParam0->_fU4, 0 );
                    SET_CAR_COLLISION( iParam0->_fU4, 1 );
                }
                sub_18627( iParam0, 256 );
            }
        }
    }
    return;
}

int sub_78669(unknown uParam0, int iParam1)
{
    int Result;

    for ( Result = 0; Result < (uParam0^); Result++ )
    {
        if ((uParam0^)[Result]._fU0 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

void sub_78964(unknown uParam0)
{
    int I;
    int iVar4;
    int J;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown[10] uVar10;
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
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    int[10] iVar41;
    int iVar52;
    unknown uVar53;
    unknown uVar54;
    int iVar55;
    float fVar56;
    float fVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;

    if (l_U135 >= 1.20000000)
    {
        array(ref uVar10, 10);
        array(ref iVar41, 10);
        for ( I = 0; I < (uParam0^); I++ )
        {
            if ((NOT ((uParam0^)[I]._fU8 == nil)) AND ((uParam0^)[I]._fU36 == 1))
            {
                if ((NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU8 ))) AND (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 ))))
                {
                    if (IS_CHAR_SITTING_IN_ANY_CAR( (uParam0^)[I]._fU8 ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( (uParam0^)[I]._fU8, ref uVar6 );
                    }
                    else
                    {
                        uVar6 = nil;
                    }
                    if (((IS_VEH_DRIVEABLE( uVar6 )) AND (IS_CHAR_SITTING_IN_ANY_CAR( (uParam0^)[I]._fU0 ))) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( (uParam0^)[I]._fU8, (uParam0^)[I]._fU0, 30, 30, 30, 0 )))
                    {
                        GET_CHAR_COORDINATES( (uParam0^)[I]._fU0, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                        GET_OFFSET_FROM_CAR_GIVEN_WORLD_COORDS( uVar6, uVar7._fU0, uVar7._fU4, uVar7._fU8, ref uVar10[I]._fU0, ref uVar10[I]._fU4, ref uVar10[I]._fU8 );
                        if (uVar10[I]._fU4 < 0)
                        {
                            iVar41[I] = 1;
                        }
                    }
                }
            }
        }
        for ( I = 0; I < (uParam0^); I++ )
        {
            if (iVar41[I])
            {
                if ((((uParam0^)[I]._fU40 == 0) AND (uVar10[I]._fU0 > 0)) || (((uParam0^)[I]._fU40 == 1) AND (uVar10[I]._fU0 < 0)))
                {
                    for ( iVar4 = 0; iVar4 < (uParam0^); iVar4++ )
                    {
                        if ((((NOT (I == iVar4)) AND ((uParam0^)[I]._fU8 == (uParam0^)[iVar4]._fU8)) AND (iVar41[iVar4])) AND ((((uParam0^)[I]._fU40 == 0) AND ((uParam0^)[iVar4]._fU40 == 1)) || (((uParam0^)[I]._fU40 == 1) AND ((uParam0^)[iVar4]._fU40 == 0))))
                        {
                            if ((((uParam0^)[I]._fU40 == 0) AND (uVar10[I]._fU0 > uVar10[iVar4]._fU0)) || (((uParam0^)[I]._fU40 == 1) AND (uVar10[I]._fU0 < uVar10[iVar4]._fU0)))
                            {
                                uVar53 = (uParam0^)[I]._fU40;
                                (uParam0^)[I]._fU40 = (uParam0^)[iVar4]._fU40;
                                (uParam0^)[iVar4]._fU40 = uVar53;
                                for ( J = 0; J < (uParam0^); J++ )
                                {
                                    if ((NOT (J == I)) AND (NOT (J == iVar4)))
                                    {
                                        if ((uParam0^)[J]._fU8 == (uParam0^)[I]._fU0)
                                        {
                                            sub_6009( ref (uParam0^)[J], (uParam0^)[iVar4]._fU0 );
                                            iVar41[J] = 0;
                                        }
                                        else if ((uParam0^)[J]._fU8 == (uParam0^)[iVar4]._fU0)
                                        {
                                            sub_6009( ref (uParam0^)[J], (uParam0^)[I]._fU0 );
                                            iVar41[J] = 0;
                                        }
                                    }
                                }
                                iVar41[I] = 0;
                                iVar41[iVar4] = 0;
                            }
                        }
                    }
                }
            }
        }
        for ( I = 0; I < iVar41; I++ )
        {
            iVar41[I] = 1;
            if (I < (uParam0^))
            {
                if ((uParam0^)[I]._fU36 != 1)
                {
                    iVar41[I] = 0;
                }
                if (IS_CHAR_INJURED( (uParam0^)[I]._fU0 ))
                {
                    iVar41[I] = 0;
                }
                else if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( (uParam0^)[I]._fU0 )))
                {
                    iVar41[I] = 0;
                }
            }
        }
        for ( I = 0; I < (uParam0^); I++ )
        {
            if ((uParam0^)[I]._fU8 == nil)
            {
                if (NOT ((uParam0^)[I]._fU12 == nil))
                {
                    (uParam0^)[I]._fU8 = (uParam0^)[I]._fU12;
                }
            }
            if ((((NOT ((uParam0^)[I]._fU8 == nil)) AND (iVar41[I])) AND (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))) AND (NOT ((uParam0^)[I]._fU8 == sub_5968())))
            {
                if (IS_CHAR_SITTING_IN_ANY_CAR( (uParam0^)[I]._fU0 ))
                {
                    iVar55 = -1;
                    for ( iVar4 = 0; iVar4 < (uParam0^); iVar4++ )
                    {
                        if (((uParam0^)[iVar4]._fU0 == (uParam0^)[I]._fU8) AND (iVar41[iVar4]))
                        {
                            iVar55 = iVar4;
                        }
                    }
                    if (NOT (iVar55 == -1))
                    {
                        if (NOT ((uParam0^)[iVar55]._fU0 == nil))
                        {
                            if (NOT ((uParam0^)[iVar55]._fU8 == nil))
                            {
                                if (NOT (IS_CHAR_INJURED( (uParam0^)[iVar55]._fU8 )))
                                {
                                    if (NOT (IS_CHAR_INJURED( (uParam0^)[iVar55]._fU0 )))
                                    {
                                        GET_CHAR_COORDINATES( (uParam0^)[I]._fU0, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                                        GET_CHAR_COORDINATES( (uParam0^)[iVar55]._fU0, ref uVar58._fU0, ref uVar58._fU4, ref uVar58._fU8 );
                                        GET_CHAR_COORDINATES( (uParam0^)[iVar55]._fU8, ref uVar61._fU0, ref uVar61._fU4, ref uVar61._fU8 );
                                    }
                                    GET_DISTANCE_BETWEEN_COORDS_3D( uVar7._fU0, uVar7._fU4, uVar7._fU8, uVar61._fU0, uVar61._fU4, uVar61._fU8, ref fVar56 );
                                    if (fVar56 < 0)
                                    {
                                        fVar56 *= -1;
                                    }
                                    GET_DISTANCE_BETWEEN_COORDS_3D( uVar58._fU0, uVar58._fU4, uVar58._fU8, uVar61._fU0, uVar61._fU4, uVar61._fU8, ref fVar57 );
                                    if (fVar57 < 0)
                                    {
                                        fVar57 *= -1;
                                    }
                                    iVar52 = 0;
                                    if (IS_CHAR_INJURED( (uParam0^)[iVar55]._fU0 ))
                                    {
                                        iVar52 = 1;
                                    }
                                    else if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( (uParam0^)[iVar55]._fU0 )))
                                    {
                                        iVar52 = 1;
                                    }
                                    if ((iVar52) || (fVar56 < fVar57))
                                    {
                                        iVar41[I] = 0;
                                        iVar41[iVar55] = 0;
                                        for ( iVar4 = 0; iVar4 < (uParam0^); iVar4++ )
                                        {
                                            if (((((NOT ((uParam0^)[iVar4]._fU8 == nil)) AND (NOT (I == iVar4))) AND (NOT (iVar4 == iVar55))) AND ((uParam0^)[iVar4]._fU8 == (uParam0^)[I]._fU8)) AND (iVar41[iVar4]))
                                            {
                                                sub_6009( ref (uParam0^)[iVar4], (uParam0^)[I]._fU0 );
                                                iVar41[iVar4] = 0;
                                            }
                                        }
                                        uVar53 = (uParam0^)[I]._fU40;
                                        uVar54 = (uParam0^)[iVar55]._fU40;
                                        sub_6009( ref (uParam0^)[I], (uParam0^)[iVar55]._fU8 );
                                        sub_6009( ref (uParam0^)[iVar55], (uParam0^)[I]._fU0 );
                                        (uParam0^)[I]._fU40 = uVar54;
                                        (uParam0^)[iVar55]._fU40 = uVar53;
                                        for ( iVar4 = 0; iVar4 < (uParam0^); iVar4++ )
                                        {
                                            if ((((uParam0^)[iVar4]._fU8 == (uParam0^)[I]._fU0) AND (NOT (iVar4 == iVar55))) AND (iVar41[iVar4]))
                                            {
                                                sub_6009( ref (uParam0^)[iVar4], (uParam0^)[iVar55]._fU0 );
                                                iVar41[iVar4] = 0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        l_U135 = 0;
    }
    else
    {
        l_U135 += 1.00000000 * TIMESTEP();
    }
    return;
}

void sub_81062()
{
    unknown uVar2;

    if ((NOT (IS_CHAR_INJURED( l_U838[1] ))) AND (NOT (IS_CAR_DEAD( l_U1010[0] ))))
    {
        GET_SCRIPT_TASK_STATUS( l_U838[1], 11, ref l_U758 );
        if ((NOT (IS_CHAR_IN_CAR( l_U838[1], l_U1010[0] ))) AND (l_U758 == 7))
        {
            TASK_ENTER_CAR_AS_PASSENGER( l_U838[1], l_U1010[0], -2, 0 );
        }
        if ((NOT (IS_CHAR_IN_ANY_CAR( l_U838[1] ))) AND (IS_CAR_PASSENGER_SEAT_FREE( l_U1010[0], 0 )))
        {
            GET_GAME_VIEWPORT_ID( ref uVar2 );
            GET_CAR_COORDINATES( l_U1010[0], ref l_U722._fU0, ref l_U722._fU4, ref l_U722._fU8 );
            if (CAM_IS_SPHERE_VISIBLE( uVar2, l_U722._fU0, l_U722._fU4, l_U722._fU8, 5.00000000 ))
            {
                GET_CAR_COORDINATES( l_U1010[0], ref l_U722._fU0, ref l_U722._fU4, ref l_U722._fU8 );
                if (CAM_IS_SPHERE_VISIBLE( uVar2, l_U722._fU0, l_U722._fU4, l_U722._fU8, 5.00000000 ))
                {
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U838[1], l_U1010[0], 0 );
                }
            }
        }
    }
    if ((NOT (IS_CHAR_INJURED( l_U838[3] ))) AND (NOT (IS_CAR_DEAD( g_U11087[0] ))))
    {
        GET_SCRIPT_TASK_STATUS( l_U838[3], 11, ref l_U758 );
        if ((NOT (IS_CHAR_IN_CAR( l_U838[3], g_U11087[0] ))) AND (l_U758 == 7))
        {
            TASK_ENTER_CAR_AS_PASSENGER( l_U838[3], g_U11087[0], -2, 0 );
        }
        if ((NOT (IS_CHAR_IN_ANY_CAR( l_U838[3] ))) AND (IS_CAR_PASSENGER_SEAT_FREE( g_U11087[0], 0 )))
        {
            GET_GAME_VIEWPORT_ID( ref uVar2 );
            GET_CAR_COORDINATES( g_U11087[0], ref l_U722._fU0, ref l_U722._fU4, ref l_U722._fU8 );
            if (CAM_IS_SPHERE_VISIBLE( uVar2, l_U722._fU0, l_U722._fU4, l_U722._fU8, 5.00000000 ))
            {
                GET_CAR_COORDINATES( g_U11087[0], ref l_U722._fU0, ref l_U722._fU4, ref l_U722._fU8 );
                if (CAM_IS_SPHERE_VISIBLE( uVar2, l_U722._fU0, l_U722._fU4, l_U722._fU8, 5.00000000 ))
                {
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U838[3], g_U11087[0], 0 );
                }
            }
        }
    }
    if ((NOT (IS_CHAR_INJURED( l_U838[5] ))) AND (NOT (IS_CAR_DEAD( g_U11087[1] ))))
    {
        GET_SCRIPT_TASK_STATUS( l_U838[5], 11, ref l_U758 );
        if ((NOT (IS_CHAR_IN_CAR( l_U838[5], g_U11087[1] ))) AND (l_U758 == 7))
        {
            TASK_ENTER_CAR_AS_PASSENGER( l_U838[5], g_U11087[1], -2, 0 );
        }
        if ((NOT (IS_CHAR_IN_ANY_CAR( l_U838[5] ))) AND (IS_CAR_PASSENGER_SEAT_FREE( g_U11087[1], 0 )))
        {
            GET_GAME_VIEWPORT_ID( ref uVar2 );
            GET_CAR_COORDINATES( g_U11087[1], ref l_U722._fU0, ref l_U722._fU4, ref l_U722._fU8 );
            if (CAM_IS_SPHERE_VISIBLE( uVar2, l_U722._fU0, l_U722._fU4, l_U722._fU8, 5.00000000 ))
            {
                GET_CAR_COORDINATES( g_U11087[1], ref l_U722._fU0, ref l_U722._fU4, ref l_U722._fU8 );
                if (CAM_IS_SPHERE_VISIBLE( uVar2, l_U722._fU0, l_U722._fU4, l_U722._fU8, 5.00000000 ))
                {
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U838[5], g_U11087[1], 0 );
                }
            }
        }
    }
    return;
}

void sub_82168()
{
    int I;

    if ((((NOT (sub_22391( l_U752 ))) AND (sub_50844())) AND (l_U662 == 0)) AND (NOT (IS_CHAR_INJURED( sub_5968() ))))
    {
        sub_22793( "E1FCJ3_LGO", ref l_U752, 7, 1 );
        if (NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 )))
        {
            sub_23915( l_U592, sub_23775( 1 ), g_U11028[0]._fU0, 39 );
        }
        l_U662 = 1;
    }
    I = 0;
    for ( I = 0; I <= 27; I++ )
    {
        if (DOES_CHAR_EXIST( l_U809[I] ))
        {
            if ((l_U656 == 0) AND (NOT (IS_CHAR_DEAD( l_U809[I] ))))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U592, l_U809[I], 50.00000000, 50.00000000, 50.00000000, 0 ))
                {
                    if (l_U1061 == 1)
                    {
                        PRINT_NOW( "GW_COMMAND_05", 7500, 1 );
                    }
                    else
                    {
                        PRINT_NOW( "GW_COMMAND_03", 7500, 1 );
                    }
                    l_U656 = 1;
                }
            }
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U809[I], l_U592, 0 ))
            {
                l_U666 = 3;
            }
            if (NOT (IS_CHAR_DEAD( l_U809[I] )))
            {
                if (IS_CHAR_ARMED( l_U592, 7 ))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U592, l_U809[I], 10.00000000, 17.00000000, 4.00000000, 0 ))
                    {
                        l_U666 = 3;
                    }
                }
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U592, l_U809[I], 8.00000000, 15.00000000, 4.00000000, 0 ))
                {
                    l_U666 = 3;
                }
                GET_CHAR_COORDINATES( l_U809[I], ref l_U722._fU0, ref l_U722._fU4, ref l_U722._fU8 );
                if ((IS_SNIPER_BULLET_IN_AREA( l_U722._fU0 - 5, l_U722._fU4 - 5, l_U722._fU8 - 5, l_U722._fU0 + 5, l_U722._fU4 + 5, l_U722._fU8 + 5 )) || (IS_BULLET_IN_AREA( l_U722._fU0, l_U722._fU4, l_U722._fU8, 10.00000000, 1 )))
                {
                    l_U666 = 3;
                }
            }
        }
    }
    for ( I = 0; I <= 6; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1002[I] ))
        {
            if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U1002[I], l_U592 ))
            {
                l_U666 = 3;
            }
        }
        if (NOT (IS_CAR_DEAD( l_U1002[I] )))
        {
            if (IS_CHAR_IN_CAR( l_U592, l_U1002[I] ))
            {
                l_U666 = 3;
            }
        }
    }
    if (l_U1061 == 1)
    {
        if (NOT (IS_CAR_DEAD( l_U1002[1] )))
        {
            if ((LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U592, l_U1002[1], 50, 50, 50, 0 )) AND (l_U653 == 0))
            {
                l_U653 = 1;
            }
            if (l_U653 == 1)
            {
                sub_83056( ref l_U1002[1], 500 );
            }
            else
            {
                sub_83056( ref l_U1002[1], 1000 );
            }
        }
    }
    if ((((NOT (sub_22391( l_U752 ))) AND (l_U661 == 0)) AND (g_U39123 == 0)) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED()))
    {
        PRINT_HELP( "Leader_4" );
        l_U661 = 1;
    }
    sub_58138();
    sub_58492();
    sub_59404( ref l_U845 );
    sub_78964( ref l_U845 );
    sub_45277();
    sub_81062();
    return;
}

void sub_83056(unknown uParam0, float fParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    float fVar7;
    int I;

    if (NOT (IS_CAR_DEAD( (uParam0^) )))
    {
        GET_CAR_COORDINATES( (uParam0^), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
    }
    GET_CHAR_COORDINATES( l_U592, ref l_U716._fU0, ref l_U716._fU4, ref l_U716._fU8 );
    fVar7 = VDIST( uVar4, l_U716 );
    if (fVar7 > fParam1)
    {
        if (NOT (IS_CAR_DEAD( (uParam0^) )))
        {
            if (NOT (IS_CAR_ON_SCREEN( (uParam0^) )))
            {
                PRINT_NOW( "GW_FAIL_04", 7500, 1 );
                I = 0;
                for ( I = 0; I <= 27; I++ )
                {
                    if (DOES_BLIP_EXIST( l_U1015[I] ))
                    {
                        REMOVE_BLIP( l_U1015[I] );
                    }
                }
                for ( I = 0; I <= 11; I++ )
                {
                    if (DOES_BLIP_EXIST( l_U796[I] ))
                    {
                        REMOVE_BLIP( l_U796[I] );
                    }
                }
                if (DOES_BLIP_EXIST( l_U1064 ))
                {
                    REMOVE_BLIP( l_U1064 );
                }
                WAIT( 7000 );
                l_U618 = 1;
                l_U666 = -1;
            }
        }
    }
    return;
}

void sub_83549()
{
    int I;
    unknown uVar3;

    if (l_U622 == 0)
    {
        I = 0;
        sub_7015( ref l_U845[0], 1 );
        sub_7015( ref g_U11028[0], 1 );
        sub_7015( ref g_U11028[1], 1 );
        sub_83612();
        if (l_U1061 == 1)
        {
            if (DOES_BLIP_EXIST( l_U1064 ))
            {
                SET_ROUTE( l_U1064, 0 );
            }
        }
        else if (DOES_BLIP_EXIST( l_U1015[0] ))
        {
            SET_ROUTE( l_U1015[0], 0 );
        }
        if (l_U656 == 0)
        {
            if (l_U1061 == 1)
            {
                PRINT_NOW( "GW_COMMAND_05", 7500, 1 );
            }
            else
            {
                PRINT_NOW( "GW_COMMAND_03", 7500, 1 );
            }
            l_U656 = 1;
        }
        for ( I = 0; I <= 5; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U838[I] )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U838[I], 0 );
                SET_CHAR_RELATIONSHIP( l_U838[I], 5, 23 );
                SET_CHAR_KEEP_TASK( l_U838[I], 1 );
                if (NOT (IS_CHAR_INJURED( l_U809[I] )))
                {
                    TASK_COMBAT( l_U838[I], l_U809[I] );
                }
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U845[0]._fU0 )))
        {
            SET_CHAR_RELATIONSHIP( l_U845[0]._fU0, 5, 23 );
            SET_CHAR_KEEP_TASK( l_U845[0]._fU0, 1 );
            if (NOT (IS_CHAR_INJURED( l_U809[0] )))
            {
                TASK_COMBAT( l_U845[0]._fU0, l_U809[0] );
            }
        }
        for ( I = 0; I <= 27; I++ )
        {
            if (l_U1061 == 1)
            {
                if ((l_U1062 == 0) AND (NOT (IS_CAR_DEAD( l_U1002[1] ))))
                {
                    GET_DRIVER_OF_CAR( l_U1002[1], ref uVar3 );
                    if (NOT (IS_CHAR_INJURED( uVar3 )))
                    {
                        CLEAR_CHAR_TASKS( uVar3 );
                        SET_COMBAT_DECISION_MAKER( uVar3, l_U1058 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar3, 1 );
                        SET_CHAR_RELATIONSHIP( uVar3, 5, 0 );
                        SET_CHAR_KEEP_TASK( uVar3, 1 );
                    }
                    l_U1062 = 1;
                }
                else if (NOT (IS_CHAR_INJURED( l_U809[I] )))
                {
                    CLEAR_CHAR_TASKS( l_U809[I] );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U809[I], 0 );
                    SET_CHAR_RELATIONSHIP( l_U809[I], 5, 0 );
                    SET_CHAR_KEEP_TASK( l_U809[I], 1 );
                    TASK_COMBAT( l_U809[I], l_U592 );
                }
            }
            else if (NOT (IS_CHAR_INJURED( l_U809[I] )))
            {
                CLEAR_CHAR_TASKS( l_U809[I] );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U809[I], 0 );
                SET_CHAR_RELATIONSHIP( l_U809[I], 5, 0 );
                SET_CHAR_KEEP_TASK( l_U809[I], 1 );
                TASK_COMBAT( l_U809[I], l_U592 );
            }
        }
        if (l_U1061 == 1)
        {
            WAIT( 0 );
            if (NOT (IS_CAR_DEAD( l_U1002[1] )))
            {
                GET_DRIVER_OF_CAR( l_U1002[1], ref uVar3 );
                if (NOT (IS_CHAR_INJURED( uVar3 )))
                {
                    CLEAR_CHAR_TASKS( uVar3 );
                    SET_COMBAT_DECISION_MAKER( uVar3, l_U1058 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar3, 1 );
                    if (l_U671 == 1)
                    {
                        TASK_CAR_DRIVE_WANDER( uVar3, l_U1002[1], 30, 2 );
                    }
                    else
                    {
                        TASK_CAR_DRIVE_WANDER( uVar3, l_U1002[1], 30, 3 );
                    }
                    SET_CHAR_RELATIONSHIP( uVar3, 5, 0 );
                    SET_CHAR_KEEP_TASK( uVar3, 1 );
                }
            }
        }
        else
        {
            for ( I = 0; I <= (l_U670 - 1); I++ )
            {
                if ((NOT (IS_CAR_DEAD( l_U1002[I] ))) AND (l_U665 == 0))
                {
                    GET_DRIVER_OF_CAR( l_U1002[I], ref uVar3 );
                    if (NOT (IS_CHAR_INJURED( uVar3 )))
                    {
                        CLEAR_CHAR_TASKS( uVar3 );
                        OPEN_SEQUENCE_TASK( ref l_U1086 );
                        TASK_CAR_TEMP_ACTION( 0, l_U1002[I], 6, 1500 );
                        TASK_COMBAT( 0, l_U592 );
                        CLOSE_SEQUENCE_TASK( l_U1086 );
                        TASK_PERFORM_SEQUENCE( uVar3, l_U1086 );
                        CLEAR_SEQUENCE_TASK( l_U1086 );
                    }
                }
            }
        }
        sub_2079();
        SET_PED_DENSITY_MULTIPLIER( 0.50000000 );
        l_U622 = 1;
    }
    if (((((l_U654 == 0) AND (NOT (sub_22391( l_U752 )))) AND (NOT IS_MESSAGE_BEING_DISPLAYED())) AND (sub_50844())) AND (NOT (IS_CHAR_INJURED( sub_5968() ))))
    {
        if (l_U1061 == 1)
        {
            sub_22793( "E1FCJ3_ATGV", ref l_U752, 7, 1 );
        }
        else
        {
            sub_22793( "E1FCJ3_ATG", ref l_U752, 7, 1 );
        }
        l_U654 = 1;
    }
    if (l_U1061 == 1)
    {
        GET_GAME_TIMER( ref l_U703 );
        if ((l_U703 - l_U704) > 5000)
        {
            if (NOT (IS_CHAR_INJURED( l_U838[3] )))
            {
                sub_85233( l_U838[3] );
            }
            if (NOT (IS_CHAR_INJURED( l_U838[5] )))
            {
                sub_85233( l_U838[5] );
            }
            if (NOT (IS_CHAR_INJURED( l_U845[0]._fU0 )))
            {
                sub_85233( l_U845[0]._fU0 );
            }
            GET_GAME_TIMER( ref l_U704 );
        }
    }
    sub_85473();
    sub_58492();
    sub_88559();
    sub_91513();
    if (l_U1061 == 1)
    {
        if (NOT (IS_CAR_DEAD( l_U1002[1] )))
        {
            if ((LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U592, l_U1002[1], 50, 50, 50, 0 )) AND (l_U653 == 0))
            {
                l_U653 = 1;
            }
            if (l_U653 == 1)
            {
                sub_83056( ref l_U1002[1], 500 );
            }
            else
            {
                sub_83056( ref l_U1002[1], 1000 );
            }
        }
    }
    return;
}

void sub_83612()
{
    int I;

    if (NOT (IS_CHAR_INJURED( l_U845[0]._fU0 )))
    {
        SET_CHAR_PROOFS( l_U845[0]._fU0, 0, 0, 0, 0, 0 );
    }
    if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
    {
        SET_CHAR_PROOFS( g_U11081[0], 0, 0, 0, 0, 0 );
    }
    if (NOT (IS_CHAR_INJURED( g_U11081[1] )))
    {
        SET_CHAR_PROOFS( g_U11081[1], 0, 0, 0, 0, 0 );
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U838[(I * 2) + 1] )))
        {
            SET_CHAR_PROOFS( l_U838[(I * 2) + 1], 0, 0, 0, 0, 0 );
        }
    }
    return;
}

void sub_85233(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (((l_U1061 == 1) AND (NOT (IS_CAR_DEAD( l_U1002[1] )))) AND (NOT (IS_CHAR_INJURED( uParam0 ))))
    {
        if ((LOCATE_CHAR_ANY_MEANS_CAR_3D( uParam0, l_U1002[1], 25, 25, 25, 0 )) AND (NOT (IS_CHAR_IN_CAR( l_U592, l_U1002[1] ))))
        {
            GET_CAR_COORDINATES( l_U1002[1], ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            TASK_SHOOT_AT_COORD( uParam0, uVar3._fU0, uVar3._fU4, uVar3._fU8, 3000, 3 );
        }
    }
    return;
}

void sub_85473()
{
    int iVar2;
    unknown uVar3;

    GET_GAME_TIMER( ref l_U713 );
    if (((l_U713 - l_U714) > l_U715) AND (sub_85510()))
    {
        if (NOT (IS_CHAR_INJURED( l_U592 )))
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 7, ref iVar2 );
            if (iVar2 == 0)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U592 )))
                {
                    SAY_AMBIENT_SPEECH( l_U592, "LOST_TAUNT_ANGELS_OF_DEATH", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U714 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U715 );
                }
            }
            else if (iVar2 == 1)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U592 )))
                {
                    SAY_AMBIENT_SPEECH( l_U592, "GENERIC_CELEBRATION", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U714 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U715 );
                }
            }
            else if (iVar2 == 2)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U592 )))
                {
                    SAY_AMBIENT_SPEECH( l_U592, "SHOOT", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U714 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U715 );
                }
            }
            else if (iVar2 == 3)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U592 )))
                {
                    SAY_AMBIENT_SPEECH( l_U592, "FIGHT", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U714 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U715 );
                }
            }
            else if (iVar2 == 4)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U592 )))
                {
                    SAY_AMBIENT_SPEECH( l_U592, "GENERIC_CURSE", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U714 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U715 );
                }
            }
            else if (iVar2 == 5)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U592 )))
                {
                    SAY_AMBIENT_SPEECH( l_U592, "GENERIC_INSULT", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U714 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U715 );
                }
            }
            else if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U592 )))
            {
                SAY_AMBIENT_SPEECH( l_U592, "LOST_WHOOP", 1, 1, 2 );
                GET_GAME_TIMER( ref l_U714 );
                GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U715 );
            };;;;;;;
        }
    }
    GET_GAME_TIMER( ref l_U710 );
    if (((l_U710 - l_U711) > l_U712) AND (sub_85510()))
    {
        l_U838[0] = l_U845[0]._fU0;
        l_U838[2] = g_U11081[0];
        l_U838[4] = g_U11081[0];
        GENERATE_RANDOM_INT_IN_RANGE( 0, 6, ref uVar3 );
        if (NOT (IS_CHAR_INJURED( l_U838[uVar3] )))
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref iVar2 );
            if (iVar2 == 0)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U838[uVar3] )))
                {
                    SAY_AMBIENT_SPEECH( l_U838[uVar3], "BIKER_PASSENGER_SHOOT_GENERIC", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U711 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U712 );
                }
            }
            else if (iVar2 == 1)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U838[uVar3] )))
                {
                    SAY_AMBIENT_SPEECH( l_U838[uVar3], "COME_UNDER_ATTACK", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U711 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U712 );
                }
            }
            else if (iVar2 == 2)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U838[uVar3] )))
                {
                    SAY_AMBIENT_SPEECH( l_U838[uVar3], "LOST_TAUNT_ANGELS_OF_DEATH", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U711 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U712 );
                }
            }
            else if (iVar2 == 3)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U838[uVar3] )))
                {
                    SAY_AMBIENT_SPEECH( l_U838[uVar3], "LOST_WHOOP", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U711 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U712 );
                }
            }
            else if (iVar2 == 4)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U838[uVar3] )))
                {
                    SAY_AMBIENT_SPEECH( l_U838[uVar3], "GENERIC_CURSE", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U711 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U712 );
                }
            }
            else if (iVar2 == 5)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U838[uVar3] )))
                {
                    SAY_AMBIENT_SPEECH( l_U838[uVar3], "GENERIC_INSULT", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U711 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U712 );
                }
            }
            else if (iVar2 == 6)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U838[uVar3] )))
                {
                    SAY_AMBIENT_SPEECH( l_U838[uVar3], "SHOOT", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U711 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U712 );
                }
            }
            else if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U838[uVar3] )))
            {
                SAY_AMBIENT_SPEECH( l_U838[uVar3], "TARGET", 1, 1, 2 );
                GET_GAME_TIMER( ref l_U711 );
                GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U712 );
            };;;;;;;;
        }
    }
    GET_GAME_TIMER( ref l_U707 );
    if (((l_U707 - l_U708) > l_U709) AND (sub_85510()))
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, l_U669, ref uVar3 );
        if (NOT (IS_CHAR_INJURED( l_U809[uVar3] )))
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 6, ref iVar2 );
            if (l_U671 == 0)
            {
                if (iVar2 == 0)
                {
                    if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U809[uVar3] )))
                    {
                        SAY_AMBIENT_SPEECH( l_U809[uVar3], "SHOOT", 1, 1, 2 );
                        GET_GAME_TIMER( ref l_U708 );
                        GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U709 );
                    }
                }
                else if (iVar2 == 1)
                {
                    if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U809[uVar3] )))
                    {
                        SAY_AMBIENT_SPEECH( l_U809[uVar3], "GENERIC_INSULT", 1, 1, 2 );
                        GET_GAME_TIMER( ref l_U708 );
                        GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U709 );
                    }
                }
                else if (iVar2 == 2)
                {
                    if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U809[uVar3] )))
                    {
                        SAY_AMBIENT_SPEECH( l_U809[uVar3], "GENERIC_CURSE", 1, 1, 2 );
                        GET_GAME_TIMER( ref l_U708 );
                        GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U709 );
                    }
                }
                else if (iVar2 == 3)
                {
                    if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U809[uVar3] )))
                    {
                        SAY_AMBIENT_SPEECH( l_U809[uVar3], "BIKER_PASSENGER_SHOOT_GENERIC", 1, 1, 2 );
                        GET_GAME_TIMER( ref l_U708 );
                        GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U709 );
                    }
                }
                else if (iVar2 == 4)
                {
                    if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U809[uVar3] )))
                    {
                        SAY_AMBIENT_SPEECH( l_U809[uVar3], "GENERIC_CELEBRATION", 1, 1, 2 );
                        GET_GAME_TIMER( ref l_U708 );
                        GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U709 );
                    }
                }
                else if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U809[uVar3] )))
                {
                    SAY_AMBIENT_SPEECH( l_U809[uVar3], "ANGELS_OF_DEATH_TAUNT_LOST", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U708 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U709 );
                };;;;;;
            }
            else if (iVar2 == 0)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U809[uVar3] )))
                {
                    SAY_AMBIENT_SPEECH( l_U809[uVar3], "SHOOT", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U708 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U709 );
                }
            }
            else if (iVar2 == 1)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U809[uVar3] )))
                {
                    SAY_AMBIENT_SPEECH( l_U809[uVar3], "GENERIC_INSULT", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U708 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U709 );
                }
            }
            else if (iVar2 == 2)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U809[uVar3] )))
                {
                    SAY_AMBIENT_SPEECH( l_U809[uVar3], "GENERIC_CURSE", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U708 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U709 );
                }
            }
            else if (iVar2 == 3)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U809[uVar3] )))
                {
                    SAY_AMBIENT_SPEECH( l_U809[uVar3], "SHIT", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U708 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U709 );
                }
            }
            else if (iVar2 == 4)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U809[uVar3] )))
                {
                    SAY_AMBIENT_SPEECH( l_U809[uVar3], "TARGET", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U708 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U709 );
                }
            }
            else if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U809[uVar3] )))
            {
                SAY_AMBIENT_SPEECH( l_U809[uVar3], "FIGHT", 1, 1, 2 );
                GET_GAME_TIMER( ref l_U708 );
                GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U709 );
            };;;;;;;
        }
    }
    return;
}

int sub_85510()
{
    int I;

    for ( I = 0; I <= 27; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U809[I] )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U809[I], l_U592, 35, 35, 35, 0 ))
            {
                return 1;
            }
        }
    }
    for ( I = 0; I <= 11; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U783[I] )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U783[I], l_U592, 35, 35, 35, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_88559()
{
    int iVar2;
    float fVar3;
    int I;
    int iVar5;

    iVar2 = 0;
    fVar3 = 0.00000000;
    I = 0;
    iVar5 = 101;
    if (l_U759 == 0)
    {
        if (g_U39219 < 10)
        {
            l_U760[1] = 1;
            l_U760[2] = 1;
        }
        else if (g_U39219 < 20)
        {
            l_U760[2] = 1;
        }
        else if (g_U39219 < 30)
        {
            ;
        }
        else if (g_U39219 < 40)
        {
            ;
        };;;;
        for ( I = 0; I <= 2; I++ )
        {
            if (l_U760[I] == 0)
            {
                iVar5 -= g_U39219;
                if (iVar5 < 2)
                {
                    iVar5 = 2;
                }
                GENERATE_RANDOM_FLOAT_IN_RANGE( 1, TO_FLOAT( iVar5 ), ref fVar3 );
                if (I == 0)
                {
                    if (fVar3 > 50)
                    {
                        l_U760[I] = 1;
                    }
                }
                else if (fVar3 > (50 / I))
                {
                    l_U760[I] = 1;
                }
                GENERATE_RANDOM_INT_IN_RANGE( 10000 * (I + 1), 20000 * (I + 1), ref l_U764[I] );
            }
        }
        SETTIMERB( 0 );
        l_U759 = 1;
    }
    for ( I = 0; I <= 2; I++ )
    {
        if ((TIMERB() > l_U764[I]) AND (l_U760[I] == 0))
        {
            PRINTSTRING( "\n\n    ----> Try Create Backup: " );
            PRINTINT( I );
            PRINTNL();
            PRINTNL();
            l_U769 = I;
            if (sub_89015( ref l_U773, ref l_U770, ref l_U768 ))
            {
                iVar2 = 1;
            }
            else if (l_U768 > 25)
            {
                if (l_U771 > 0.00000000)
                {
                    l_U773 = {l_U776};
                    l_U770 = l_U772;
                    iVar2 = 1;
                }
            }
            if (iVar2 == 1)
            {
                PRINTSTRING( "\n\n\n\n    ----> Create Backup: " );
                PRINTINT( I );
                PRINTNL();
                PRINTNL();
                PRINTNL();
                PRINTNL();
                sub_89814();
            }
            l_U760[I] = 1;
            l_U768 = 25 + (I * 3);
        }
    }
    return;
}

int sub_89015(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;

    for ( I = 0; I < 10; I++ )
    {
        if ((uParam2^) >= 25)
        {
            if (sub_89053( uParam0, uParam1, (uParam2^) ))
            {
                return 1;
            }
        }
        else if (sub_89053( uParam0, uParam1, -1 ))
        {
            return 1;
        }
        (uParam2^)++;
    }
    return 0;
}

int sub_89053(unknown uParam0, unknown uParam1, int iParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    unknown uVar15;
    int iVar16;
    unknown uVar17;

    if (IS_PLAYER_PLAYING( sub_5899() ))
    {
        GET_CHAR_COORDINATES( sub_5968(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        if (IS_CHAR_IN_WATER( sub_5968() ))
        {
            uVar5._fU8 = 1.00000000;
        }
    }
    l_U612 = GET_MAP_AREA_FROM_COORDS( uVar5 );
    if (NOT (iParam2 == -1))
    {
        GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING_ON_ISLAND( uVar5._fU0, uVar5._fU4, uVar5._fU8, iParam2, l_U612, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8, ref uVar11, ref uVar15 );
    }
    else
    {
        GET_NEXT_CLOSEST_CAR_NODE_WITH_HEADING_ON_ISLAND( uVar5._fU0, uVar5._fU4, uVar5._fU8, l_U612, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8, ref uVar11 );
    }
    GET_DISTANCE_BETWEEN_COORDS_2D( uVar5._fU0, uVar5._fU4, uVar8._fU0, uVar8._fU4, ref fVar12 );
    fVar14 = 1.00000000;
    iVar16 = GET_MAP_AREA_FROM_COORDS( uVar8 );
    if (l_U612 != iVar16)
    {
        fVar14 *= 0.00000000;
    }
    fVar13 = uVar5._fU8 - uVar8._fU8;
    if (fVar13 < 0.00000000)
    {
        fVar13 *= -1.00000000;
    }
    if (NOT (fVar13 < 4.00000000))
    {
        if (fVar13 > 20.00000000)
        {
            fVar13 = 20.00000000;
        }
        fVar14 *= (20.00000000 - fVar13) / 20.00000000;
    }
    if (fVar12 < 100.00000000)
    {
        fVar14 *= fVar12 / 100.00000000;
    }
    GET_GAME_VIEWPORT_ID( ref uVar17 );
    if ((CAM_IS_SPHERE_VISIBLE( uVar17, uVar8._fU0, uVar8._fU4, uVar8._fU8, 5.00000000 )) || (uVar8._fU8 < 0))
    {
        fVar14 *= 0.00000000;
    }
    if (fVar14 >= 1.00000000)
    {
        (uParam0^) = {uVar8};
        (uParam1^) = uVar11;
        return 1;
    }
    if (fVar14 > 0.00000000)
    {
        if (fVar14 > l_U771)
        {
            l_U776 = {uVar8};
            l_U772 = uVar11;
            l_U771 = fVar14;
        }
    }
    return 0;
}

void sub_89814()
{
    int iVar2;
    int iVar3;
    int J;
    int I;
    int iVar6;
    char[64] cVar7;

    iVar2 = l_U769;
    GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref iVar3 );
    if (iVar3 < 51)
    {
        CREATE_CAR( l_U1100[l_U675], l_U773._fU0, l_U773._fU4, l_U773._fU8, ref l_U779[l_U769], 1 );
        if (l_U1100[l_U675] != 904750859)
        {
            CHANGE_CAR_COLOUR( l_U779[l_U769], l_U677[l_U674], l_U682[l_U674] );
            SET_EXTRA_CAR_COLOURS( l_U779[l_U769], l_U687[l_U674], l_U692[l_U674] );
        }
        TURN_OFF_VEHICLE_EXTRA( l_U779[l_U769], 5, l_U625[l_U674] );
        TURN_OFF_VEHICLE_EXTRA( l_U779[l_U769], 6, l_U629[l_U674] );
        TURN_OFF_VEHICLE_EXTRA( l_U779[l_U769], 7, l_U633[l_U674] );
        TURN_OFF_VEHICLE_EXTRA( l_U779[l_U769], 8, l_U637[l_U674] );
    }
    else
    {
        CREATE_CAR( l_U1100[l_U674], l_U773._fU0, l_U773._fU4, l_U773._fU8, ref l_U779[l_U769], 1 );
        if (l_U1100[l_U674] != 904750859)
        {
            CHANGE_CAR_COLOUR( l_U779[l_U769], l_U677[l_U675], l_U682[l_U675] );
            SET_EXTRA_CAR_COLOURS( l_U779[l_U769], l_U687[l_U675], l_U692[l_U675] );
        }
        TURN_OFF_VEHICLE_EXTRA( l_U779[l_U769], 5, l_U625[l_U675] );
        TURN_OFF_VEHICLE_EXTRA( l_U779[l_U769], 6, l_U629[l_U675] );
        TURN_OFF_VEHICLE_EXTRA( l_U779[l_U769], 7, l_U633[l_U675] );
        TURN_OFF_VEHICLE_EXTRA( l_U779[l_U769], 8, l_U637[l_U675] );
    }
    SET_CAR_HEADING( l_U779[l_U769], l_U770 );
    SET_CAR_ON_GROUND_PROPERLY( l_U779[l_U769] );
    for ( J = 0; J <= 3; J++ )
    {
        if (iVar2 < 3)
        {
            if (NOT (IS_CAR_DEAD( l_U779[l_U769] )))
            {
                GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref iVar3 );
                if (iVar3 < 51)
                {
                    CREATE_CHAR_INSIDE_CAR( l_U779[l_U769], 7, l_U1092[l_U672], ref l_U783[iVar2] );
                }
                else
                {
                    CREATE_CHAR_INSIDE_CAR( l_U779[l_U769], 7, l_U1092[l_U673], ref l_U783[iVar2] );
                }
            }
        }
        else
        {
            while (l_U624 == 0)
            {
                if (NOT (IS_CAR_DEAD( l_U779[l_U769] )))
                {
                    I = 0;
                    iVar6 = 0;
                    GET_MAXIMUM_NUMBER_OF_PASSENGERS( l_U779[l_U769], ref iVar6 );
                    iVar6--;
                    for ( I = 0; I <= iVar6; I++ )
                    {
                        if ((IS_CAR_PASSENGER_SEAT_FREE( l_U779[l_U769], I )) AND (l_U624 == 0))
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref iVar3 );
                            if (iVar3 < 51)
                            {
                                CREATE_CHAR_AS_PASSENGER( l_U779[l_U769], 7, l_U1092[l_U672], I, ref l_U783[iVar2] );
                            }
                            else
                            {
                                CREATE_CHAR_AS_PASSENGER( l_U779[l_U769], 7, l_U1092[l_U673], I, ref l_U783[iVar2] );
                            }
                            l_U624 = 1;
                        }
                    }
                }
                l_U676++;
                if (l_U676 > 10)
                {
                    l_U624 = 1;
                }
                WAIT( 0 );
                sub_45277();
            }
            l_U676 = 0;
            l_U624 = 0;
        }
        if (NOT (IS_CHAR_INJURED( l_U783[iVar2] )))
        {
            SET_CHAR_RELATIONSHIP_GROUP( l_U783[iVar2], 23 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U783[iVar2] );
            SET_CHAR_DECISION_MAKER( l_U783[iVar2], l_U1054 );
            SET_COMBAT_DECISION_MAKER( l_U783[iVar2], l_U1056 );
            SET_CHAR_AS_ENEMY( l_U783[iVar2], 1 );
            SET_CHAR_RELATIONSHIP( l_U783[iVar2], 5, 0 );
            SET_INFORM_RESPECTED_FRIENDS( l_U783[iVar2], 150, 999 );
            sub_19262();
            GIVE_DELAYED_WEAPON_TO_CHAR( l_U783[iVar2], l_U1090, 25000, 0 );
            sub_56364();
            SET_CHAR_ACCURACY( l_U783[iVar2], l_U697 );
            sub_56603();
            SET_CHAR_SHOOT_RATE( l_U783[iVar2], l_U698 );
            sub_56826();
            SET_CHAR_FIRE_DAMAGE_MULTIPLIER( l_U783[iVar2], l_U747 );
            sub_57094();
            SET_CHAR_MAX_HEALTH( l_U783[iVar2], l_U699 );
            SET_CHAR_HEALTH( l_U783[iVar2], l_U699 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U783[iVar2], 1 );
            if (l_U671 == 0)
            {
                SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE( l_U783[iVar2], 3 );
            }
            TASK_COMBAT( l_U783[iVar2], l_U592 );
            if ((NOT (DOES_BLIP_EXIST( l_U796[iVar2] ))) AND (l_U1061 == 0))
            {
                ADD_BLIP_FOR_CHAR( l_U783[iVar2], ref l_U796[iVar2] );
                SET_BLIP_AS_FRIENDLY( l_U796[iVar2], 0 );
            }
            StrCopy( ref cVar7, "Backup Ped ", 64 );
            StrCopy( ref cVar7, "Backup Ped ", 64 );
            ConcatString(ref cVar7, iVar2, 64);
            SET_CHAR_NAME_DEBUG( l_U783[iVar2], ref cVar7 );
        }
        iVar2 += 3;
    }
    return;
}

void sub_91513()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int iVar11;
    unknown uVar12;

    I = 0;
    l_U623 = 1;
    if (l_U1061 == 1)
    {
        if ((IS_CAR_DEAD( l_U1002[1] )) || (sub_91566( l_U1002[1] )))
        {
            if (DOES_BLIP_EXIST( l_U1064 ))
            {
                REMOVE_BLIP( l_U1064 );
            }
            GENERATE_RANDOM_INT_IN_RANGE( 10, 20, ref iVar11 );
            for ( I = 0; I <= iVar11; I++ )
            {
                if (DOES_VEHICLE_EXIST( l_U1002[1] ))
                {
                    GET_DEAD_CAR_COORDINATES( l_U1002[1], ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                    GENERATE_RANDOM_FLOAT_IN_RANGE( -4, 4, ref uVar3 );
                    GENERATE_RANDOM_FLOAT_IN_RANGE( -4, 4, ref uVar4 );
                    GENERATE_RANDOM_INT_IN_RANGE( 50, 151, ref uVar12 );
                    GET_SAFE_PICKUP_COORDS( uVar8._fU0 + uVar3, uVar8._fU4 + uVar4, uVar8._fU8 + 0.50000000, ref uVar5, ref uVar6, ref uVar7 );
                    CREATE_MONEY_PICKUP( uVar5, uVar6, uVar7, uVar12, 0, ref l_U1065[I] );
                }
            }
            l_U623 = 1;
        }
        else if (NOT (IS_CAR_DEAD( l_U1002[1] )))
        {
            if ((IS_CAR_IN_WATER( l_U1002[1] )) AND (CHECK_STUCK_TIMER( l_U1002[1], 2, 30000 )))
            {
                SET_ENGINE_HEALTH( l_U1002[1], 0 );
                if (DOES_BLIP_EXIST( l_U1064 ))
                {
                    REMOVE_BLIP( l_U1064 );
                }
                l_U623 = 1;
            }
            else
            {
                l_U623 = 0;
            }
        }
    }
    else
    {
        for ( I = 0; I <= 11; I++ )
        {
            if (((IS_CHAR_INJURED( l_U783[I] )) || (IS_CHAR_DEAD( l_U783[I] ))) || (NOT (DOES_CHAR_EXIST( l_U783[I] ))))
            {
                if (DOES_BLIP_EXIST( l_U796[I] ))
                {
                    REMOVE_BLIP( l_U796[I] );
                }
            }
            else
            {
                l_U623 = 0;
            }
        }
        for ( I = 0; I <= 27; I++ )
        {
            if (((IS_CHAR_INJURED( l_U809[I] )) || (IS_CHAR_DEAD( l_U809[I] ))) || (NOT (DOES_CHAR_EXIST( l_U809[I] ))))
            {
                if (DOES_BLIP_EXIST( l_U1015[I] ))
                {
                    REMOVE_BLIP( l_U1015[I] );
                }
            }
            else
            {
                l_U623 = 0;
            }
        }
    }
    if ((l_U623 == 1) AND (l_U619 == 0))
    {
        l_U666 = -1;
        l_U619 = 1;
    }
    return;
}

int sub_91566(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        return (IS_CAR_DEAD( uParam0 )) AND (IS_CAR_IN_WATER( uParam0 ));
    }
    return 0;
}

void sub_92452()
{
    int iVar2;

    sub_92461();
    g_U39219++;
    INCREMENT_INT_STAT( 177, 1 );
    CLEAR_WANTED_LEVEL( sub_5899() );
    sub_92591( 1 );
    iVar2 = 1000 + (g_U39219 * 250);
    if (iVar2 > 15000)
    {
        iVar2 = 15000;
    }
    sub_92764( iVar2 );
    if (g_U39219 == g_U39121)
    {
        sub_92816( 1 );
    }
    sub_1239( 1 );
    sub_1239( 2 );
    sub_1239( 3 );
    if ((g_U15728[8] == 1) || (g_U12306[1]._fU108 == 1))
    {
        sub_1239( 4 );
    }
    sub_93523();
    if ((g_U15728[8] == 0) AND (g_U12306[1]._fU108 == 0))
    {
        sub_95450();
    }
    g_U39101 = 1;
    sub_95485( 0.50000000 );
    l_U617 = 0;
    g_U39124 = 1;
    sub_97605();
    return;
}

void sub_92461()
{
    if ((sub_50844()) AND (NOT (IS_CHAR_INJURED( sub_5968() ))))
    {
        sub_22793( "E1FCJ3_KG", ref l_U752, 7, 1 );
        sub_23915( l_U592, sub_51209( 1 ), l_U592, 39 );
    }
    return;
}

void sub_92591(unknown uParam0)
{
    if (g_U10684)
    {
        g_U10684 = 0;
        return;
    }
    SET_BIT( ref g_U10681._fU0, 1 );
    sub_92642( ref g_U10681._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10681._fU0, 3 );
    g_U10681._fU4 = 0;
    g_U10681._fU8 = 0;
    return;
}

void sub_92642(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_92764(unknown uParam0)
{
    ADD_SCORE( sub_5899(), uParam0 );
    return;
}

void sub_92816(unknown uParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    iVar3 = 0;
    if (NOT g_U38835[uParam0]._fU0)
    {
        iVar3 = ProtectedGet(g_U38835[uParam0]._fU8);
        if (iVar3 > 0)
        {
            sub_92885( 7, iVar3 );
            g_U38835[uParam0]._fU0 = 1;
            switch (uParam0)
            {
                case 2:
                g_U15728[32] = 1;
                break;
                case 0:
                g_U15728[30] = 1;
                break;
            }
            return;
        }
    }
    return;
}

void sub_92885(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_93055( 0 );
    return;
}

void sub_93055(boolean bParam0)
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
        if (g_U26712[I]._fU4 == g_U26712[I]._fU0)
        {
            fVar4 = g_U26712[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U26712[I]._fU0 );
            fVar6 = TO_FLOAT( g_U26712[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U26712[I]._fU8;
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
    SET_FLOAT_STAT( 133, fVar3 );
    if (bVar7)
    {
        sub_93300();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_93300()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

void sub_93523()
{
    int I;
    boolean bVar3;

    I = 0;
    bVar3 = false;
    for ( I = 0; I < 13; I++ )
    {
        if (g_U38937[I]._fU4)
        {
            bVar3 = true;
        }
    }
    if (bVar3)
    {
        sub_93589();
        sub_93674();
        sub_93992();
    }
    bVar3 = false;
    for ( I = 0; I < 6; I++ )
    {
        if (g_U39058[I]._fU4)
        {
            g_U39058[I]._fU4 = 0;
            g_U39058[I]._fU12++;
            g_U39058[I]._fU20 = -2;
            if (sub_95230( g_U39058[I]._fU16 ))
            {
                g_U39104 = 1;
            }
            if (sub_95320( g_U39058[I]._fU16 ))
            {
                g_U39105 = 1;
            }
            bVar3 = true;
        }
    }
    return;
}

void sub_93589()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        g_U39042[I]._fU0 = -1;
        g_U39042[I]._fU4 = 0;
        g_U39042[I]._fU8 = 0;
    }
    return;
}

void sub_93674()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 0;
    for ( I = 0; I < 13; I++ )
    {
        if (g_U38937[I]._fU4)
        {
            if (g_U38937[I]._fU0)
            {
                g_U38937[I]._fU12++;
            }
            if (iVar3 >= 5)
            {
                SCRIPT_ASSERT( "Prepare_Recurring_Lost_Stats_For_Display: Trying to store too many sets of display stats" );
                return;
            }
            g_U39042[iVar3]._fU0 = g_U38937[I]._fU16;
            g_U39042[iVar3]._fU4 = g_U38937[I]._fU0;
            g_U39042[iVar3]._fU8 = g_U38937[I]._fU12;
            iVar3++;
            g_U38937[I]._fU4 = 0;
        }
    }
    return;
}

void sub_93992()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    boolean bVar9;
    int iVar10;
    int iVar11;
    int iVar12;

    bVar9 = false;
    iVar10 = 0;
    iVar11 = 0;
    iVar12 = 0;
    while (iVar12 < 13)
    {
        bVar9 = false;
        if (NOT g_U38937[iVar12]._fU0)
        {
            uVar2 = {g_U38937[iVar12]};
            iVar10 = iVar12 + 1;
            iVar11 = iVar12;
            while (iVar10 < 13)
            {
                g_U38937[iVar11] = {g_U38937[iVar10]};
                iVar11++;
                iVar10++;
            }
            g_U38937[iVar11] = {uVar2};
            sub_94157( iVar11 );
            sub_94579( iVar11 );
            bVar9 = true;
        }
        if (NOT bVar9)
        {
            iVar12++;
        }
    }
    return;
}

void sub_94157(unknown uParam0)
{
    int iVar3;
    unknown uVar4;
    unknown uVar5;

    iVar3 = g_U38937[uParam0]._fU20;
    if (g_U38937[uParam0]._fU8)
    {
        iVar3 += 13;
    }
    uVar4 = g_U38937[uParam0]._fU16;
    uVar5 = g_U38937[uParam0]._fU12;
    sub_94241( iVar3, uVar4, uVar5 );
    return;
}

void sub_94241(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    if (g_U9592[uParam1]._fU12 == 0)
    {
        PRINTNL();
        PRINTNL();
        PRINTSTRING( "-------------------------------------------------------------" );
        PRINTNL();
        PRINTSTRING( "Memorial - Keith returned number = " );
        PRINTINT( uParam1 );
        PRINTNL();
        PRINTSTRING( "-------------------------------------------------------------" );
        PRINTNL();
        PRINTNL();
        g_U9592[uParam1]._fU4 = uParam0;
        g_U9592[uParam1]._fU0 = uParam1;
        g_U9592[uParam1]._fU8 = uParam2;
        g_U9592[uParam1]._fU12 = 1;
        return;
    }
    return;
}

void sub_94579(unknown uParam0)
{
    unknown uVar3;

    g_U38937[uParam0]._fU0 = 1;
    g_U38937[uParam0]._fU4 = 0;
    g_U38937[uParam0]._fU12 = 1;
    g_U38937[uParam0]._fU16 = sub_94630();
    uVar3 = g_U38937[uParam0]._fU24;
    g_U38937[uParam0]._fU24 = -1;
    sub_94819( uVar3 );
    if (g_U38937[uParam0]._fU8)
    {
        g_U38937[uParam0]._fU8 = 0;
    }
    else
    {
        g_U38937[uParam0]._fU8 = 1;
    }
    return;
}

void sub_94630()
{
    int Result;
    boolean bVar3;
    int I;

    Result = -1;
    bVar3 = true;
    while (bVar3)
    {
        bVar3 = false;
        if (g_U38936 >= 24)
        {
            g_U38936 = 0;
        }
        Result = g_U38936;
        I = 0;
        for ( I = 0; I < 13; I++ )
        {
            if (NOT bVar3)
            {
                if (g_U38937[I]._fU16 == Result)
                {
                    bVar3 = true;
                }
            }
        }
        g_U38936++;
    }
    return Result;
}

void sub_94819(int iParam0)
{
    int I;

    if (iParam0 == -1)
    {
        SCRIPT_ASSERT( "Reuse_VoiceID: VoiceID being re-used is UNKNOWN" );
        return;
    }
    I = 0;
    for ( I = 0; I < 12; I++ )
    {
        if (g_U39029[I] == -1)
        {
            g_U39029[I] = iParam0;
            return;
        }
    }
    SCRIPT_ASSERT( "Reuse_VoiceID: Failed to find an unused slot for the VoiceID" );
    return;
}

int sub_95230(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    uVar3 = {sub_15722( uParam0 )};
    uVar7 = GET_STRING_FROM_TEXT_FILE( ref uVar3 );
    if (COMPARE_STRING( uVar7, "Terry" ))
    {
        return 1;
    }
    return 0;
}

int sub_95320(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    uVar3 = {sub_15722( uParam0 )};
    uVar7 = GET_STRING_FROM_TEXT_FILE( ref uVar3 );
    if (COMPARE_STRING( uVar7, "Clay" ))
    {
        return 1;
    }
    return 0;
}

void sub_95450()
{
    sub_93523();
    return;
}

void sub_95485(unknown uParam0)
{
    int I;

    for ( I = 0; I < 2; I++ )
    {
        sub_95511( I, uParam0, 0 );
    }
    g_U11101 = 1;
    return;
}

void sub_95511(int iParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;
    unknown uVar6;
    float fVar7;
    float fVar8;
    float fVar9;

    if ((NOT (IS_CHAR_INJURED( g_U11081[iParam0] ))) || (uParam2))
    {
        if (iParam0 == 0)
        {
            fVar5 = 20.00000000;
        }
        else
        {
            fVar5 = 20.00000000;
        }
        fVar7 = g_U11141[iParam0] + (((100.00000000 - fVar5) / 10.00000000) * uParam1);
        if (fVar7 > 100.00000000)
        {
            fVar7 = 100.00000000;
        }
        g_U11180[iParam0] = fVar7 - g_U11141[iParam0];
        g_U11141[iParam0] = fVar7;
        fVar8 = (g_U11141[iParam0] - fVar5) / (100.00000000 - fVar5);
        fVar9 = (-1.00000000 * ((fVar8 - 1.00000000) * (fVar8 - 1.00000000))) + 1.00000000;
        if (iParam0 == 0)
        {
            fVar5 = 350.00000000;
        }
        else
        {
            fVar5 = 475.00000000;
        }
        fVar7 = ((1000.00000000 - fVar5) * fVar8) + fVar5;
        if (fVar7 > 1000.00000000)
        {
            fVar7 = 1000.00000000;
        }
        g_U11165[iParam0] = fVar7 - g_U11144[iParam0];
        g_U11144[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 0.00000000;
        }
        else
        {
            fVar5 = 0.00000000;
        }
        fVar7 = ((13.00000000 - fVar5) * fVar8) + fVar5;
        if (fVar7 > 13.00000000)
        {
            fVar7 = 13.00000000;
        }
        g_U11168[iParam0] = fVar7 - g_U11147[iParam0];
        g_U11147[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 38.00000000;
        }
        else
        {
            fVar5 = 28.00000000;
        }
        fVar7 = ((100.00000000 - fVar5) * fVar9) + fVar5;
        if (fVar7 > 100.00000000)
        {
            fVar7 = 100.00000000;
        }
        g_U11171[iParam0] = fVar7 - g_U11150[iParam0];
        g_U11150[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 33.00000000;
        }
        else
        {
            fVar5 = 23.00000000;
        }
        fVar7 = ((100.00000000 - fVar5) * fVar9) + fVar5;
        if (fVar7 > 100.00000000)
        {
            fVar7 = 100.00000000;
        }
        g_U11174[iParam0] = fVar7 - g_U11153[iParam0];
        g_U11153[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 1.00000000;
        }
        else
        {
            fVar5 = 1.00000000;
        }
        fVar7 = ((5.00000000 - fVar5) * fVar8) + fVar5;
        if (fVar7 > 5.00000000)
        {
            fVar7 = 5.00000000;
        }
        g_U11177[iParam0] = fVar7 - g_U11156[iParam0];
        g_U11156[iParam0] = fVar7;
        if ((g_U11141[0] >= 100.00000000) AND (g_U11141[1] >= 100.00000000))
        {
            AWARD_ACHIEVEMENT( 55 );
        }
        SET_FLOAT_STAT( 168, g_U11141[0] );
        SET_FLOAT_STAT( 169, g_U11141[1] );
        sub_96281( iParam0 );
        g_U11129[iParam0] = 1;
        GET_GAME_TIMER( ref g_U11140 );
    }
    else
    {
        g_U11165[iParam0] = 0.00000000;
        g_U11168[iParam0] = 0.00000000;
        g_U11171[iParam0] = 0.00000000;
        g_U11174[iParam0] = 0.00000000;
        g_U11177[iParam0] = 0.00000000;
        g_U11129[iParam0] = 0;
    }
    return;
}

void sub_96281(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_INJURED( g_U11081[uParam0] )))
    {
        SET_CHAR_MAX_HEALTH( g_U11081[uParam0], FLOOR( g_U11144[uParam0] ) );
        GET_CHAR_HEALTH( g_U11081[uParam0], ref iVar3 );
        iVar3 += FLOOR( g_U11165[uParam0] );
        SET_CHAR_HEALTH( g_U11081[uParam0], iVar3 );
        GIVE_WEAPON_TO_CHAR( g_U11081[uParam0], sub_96420( g_U11147[uParam0], uParam0 ), 30000, 0 );
        GIVE_WEAPON_TO_CHAR( g_U11081[uParam0], sub_97074( g_U11147[uParam0], uParam0 ), 30000, 0 );
        SET_CURRENT_CHAR_WEAPON( g_U11081[uParam0], sub_97074( g_U11147[uParam0], uParam0 ), 0 );
        SET_CHAR_ACCURACY( g_U11081[uParam0], FLOOR( g_U11150[uParam0] ) );
        SET_CHAR_SHOOT_RATE( g_U11081[uParam0], FLOOR( g_U11153[uParam0] ) );
        SET_CHAR_FIRE_DAMAGE_MULTIPLIER( g_U11081[uParam0], g_U11156[uParam0] );
    }
    return;
}

int sub_96420(float fParam0, unknown uParam1)
{
    switch (uParam1)
    {
        default:
          case 0:
        if (fParam0 < 1.00000000)
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 0 - returned PISTOL \n" );
            return 7;
        }
        else if (fParam0 < 3.00000000)
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 0 - returned EPISODIC_7 \n" );
            return 27;
        }
        else
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 0 - returned UZI \n" );
            return 12;
        }
        break;
        case 1:
        if (fParam0 < 3.00000000)
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 1 - returned PISTOL \n" );
            return 7;
        }
        else
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 1 - returned EPISODIC 6 \n" );
            return 26;
        }
        break;
    }
    PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - returned default value \n" );
    return 7;
}

int sub_97074(float fParam0, unknown uParam1)
{
    switch (uParam1)
    {
        default:
          case 0:
        if (fParam0 < 1.00000000)
        {
            return 7;
        }
        else if (fParam0 < 3.00000000)
        {
            return 27;
        }
        else if (fParam0 < 8.00000000)
        {
            return 12;
        }
        else if (fParam0 < 13.00000000)
        {
            return 14;
        }
        else
        {
            return 15;
        };;;;
        break;
        case 1:
        if (fParam0 < 1.00000000)
        {
            return 7;
        }
        else if (fParam0 < 3.00000000)
        {
            return 10;
        }
        else if (fParam0 < 8.00000000)
        {
            return 26;
        }
        else if (fParam0 < 13.00000000)
        {
            return 11;
        }
        else
        {
            return 22;
        };;;;
        break;
    }
    return 7;
}

void sub_97605()
{
    g_U10974._fU0 = 1;
    g_U10974._fU4 = 0;
    g_U10974._fU8 = 0;
    g_U10974._fU12 = 0;
    g_U10974._fU16 = 0;
    g_U10974._fU20 = 0;
    g_U10974._fU28 = 6;
    return;
}

void sub_97710()
{
    if ((g_U10991 > 1) AND (NOT (IS_CHAR_INJURED( sub_5968() ))))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_5899(), 150 );
        SAY_AMBIENT_SPEECH( sub_5968(), "MISSION_FAIL_RAGE", 1, 1, 0 );
    }
    sub_1239( 1 );
    sub_1239( 2 );
    sub_1239( 3 );
    if ((g_U15728[8] == 1) || (g_U12306[1]._fU108 == 1))
    {
        sub_1239( 4 );
    }
    sub_1891();
    sub_2057();
    l_U617 = 0;
    g_U39124 = 0;
    sub_1181( l_U602, l_U616 );
    return;
}
