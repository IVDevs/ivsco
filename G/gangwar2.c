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
    l_U637 = 0;
    l_U638 = 0;
    l_U639 = 0;
    l_U640 = 0;
    l_U641 = 1;
    l_U642 = 1;
    l_U643 = 0;
    l_U644 = 0;
    l_U645 = 0;
    l_U646 = 0;
    l_U647 = 0;
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
    l_U665 = 1;
    l_U666 = 1;
    l_U667 = 0;
    l_U668 = 1;
    l_U669 = 1;
    l_U670 = 1;
    l_U671 = 1;
    l_U672 = 0;
    l_U693 = 50;
    l_U694 = 40;
    l_U695 = 200;
    l_U696 = 0;
    l_U697 = 0;
    l_U698 = 0;
    l_U699 = 0;
    l_U700 = 1;
    l_U701 = 0;
    l_U702 = 0;
    l_U703 = 9000;
    l_U704 = 0;
    l_U705 = 0;
    l_U706 = 6000;
    l_U707 = 0;
    l_U708 = 0;
    l_U709 = 11000;
    l_U710 = {41.95110000, 523.06050000, 13.66110000};
    l_U713 = {0, 0, 0};
    l_U716 = {0, 0, 0};
    l_U719 = {0, 0, 0};
    l_U722 = {-347.40990000, 643.33900000, 13.61330000};
    l_U725 = {-344.05540000, 640.53090000, 13.79580000};
    l_U728 = {-347.50660000, 647.35620000, 13.61320000};
    l_U731 = {-342.66310000, 636.32290000, 13.80300000};
    l_U783 = {0, 0, 0};
    l_U786 = 0.00000000;
    l_U787 = 0.00000000;
    l_U788 = 1.00000000;
    l_U789 = 119.95330000;
    l_U790 = 50.62960000;
    l_U791 = 146.08380000;
    l_U792 = 133.27190000;
    l_U800 = 0;
    l_U809 = 25;
    l_U810 = 0;
    l_U1116 = "";
    l_U1117 = 12;
    l_U1118 = -268530289;
    l_U1119 = 870892404;
    l_U1127 = -570033273;
    l_U1143 = 0;
    l_U1149 = 0;
    l_U1150 = 0;
    l_U1151 = 0;
    l_U1152 = 0;
    l_U1153 = 0;
    l_U1154 = 0;
    l_U1159 = 0;
    SET_MISSION_FLAG( 1 );
    LOAD_ADDITIONAL_TEXT( "JIMGANG", 0 );
    sub_1162();
    if ((g_U15728[8] == 0) AND (g_U12306[1]._fU108 == 0))
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
    if (NOT (IS_CHAR_DEAD( sub_5992() )))
    {
        SET_PLAYER_CONTROL_ADVANCED( sub_5923(), 0, 0, 0 );
    }
    if (NOT IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_OUT( 1000 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            if (NOT (IS_CHAR_DEAD( sub_5992() )))
            {
                GET_CHAR_COORDINATES( sub_5992(), ref l_U783._fU0, ref l_U783._fU4, ref l_U783._fU8 );
                if (IS_PROJECTILE_IN_AREA( l_U783._fU0 - 2.50000000, l_U783._fU4 - 2.50000000, l_U783._fU8 - 2.50000000, l_U783._fU0 + 2.50000000, l_U783._fU4 + 2.50000000, l_U783._fU8 + 2.50000000 ))
                {
                    CLEAR_AREA( l_U783._fU0, l_U783._fU4, l_U783._fU8, 5, 1 );
                }
            }
            WAIT( 0 );
        }
    }
    CLEAR_HELP();
    CLEAR_PRINTS();
    sub_7207( 1, 1 );
    iVar3 = 1;
    SETTIMERA( 0 );
    iVar3 = GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" );
    while ((iVar3 != 0) AND (TIMERA() < 4000))
    {
        iVar3 = GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" );
        WAIT( 0 );
    }
    sub_7890();
    sub_8181();
    sub_8620();
    sub_8676();
    GET_CHAR_COORDINATES( sub_5992(), ref l_U783._fU0, ref l_U783._fU4, ref l_U783._fU8 );
    CLEAR_AREA_OF_COPS( l_U783._fU0, l_U783._fU4, l_U783._fU8, 1000 );
    l_U663 = 0;
    l_U617 = 1;
    while (l_U617)
    {
        switch (l_U663)
        {
            case 0:
            sub_8907();
            break;
            case 1:
            sub_50384();
            break;
            case 2:
            sub_97210();
            break;
            case 3:
            sub_98190();
            break;
            case -1: break;
        }
        WAIT( 0 );
        if (l_U619 == 1)
        {
            CLEAR_HELP();
            sub_105734();
        }
        else if (l_U618 == 1)
        {
            CLEAR_HELP();
            sub_110992();
        }
    }
    sub_2445();
    return;
}

void sub_1162()
{
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_1193( l_U602, l_U616 );
        sub_1251( 1 );
        sub_1251( 2 );
        sub_1251( 3 );
        if ((g_U15728[8] == 1) || (g_U12306[1]._fU108 == 1))
        {
            sub_1251( 4 );
        }
        sub_1903();
        sub_2069();
        sub_2091();
        g_U39124 = 0;
        l_U618 = 1;
        l_U663 = -1;
        sub_2445();
    }
    return;
}

void sub_1193(unknown uParam0, unknown uParam1)
{
    g_U15862[uParam0]._fU228._fU12[uParam1] = 2;
    g_U15862[uParam0]._fU228._fU0 = 2;
    return;
}

void sub_1251(unknown uParam0)
{
    if (NOT g_U1)
    {
        return;
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_1274( uParam0 ) );
    return;
}

int sub_1274(unknown uParam0)
{
    int iVar3;
    unknown uVar4;

    iVar3 = sub_1285( uParam0 );
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

int sub_1285(int iParam0)
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

void sub_1903()
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

void sub_2069()
{
    sub_1903();
    return;
}

void sub_2091()
{
    sub_2100();
    sub_2245();
    return;
}

void sub_2100()
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

void sub_2245()
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

void sub_2445()
{
    int I;
    int iVar3;

    PRINTSTRING( "\n*\n*\n ----> CLEANUP <---- \n*\n*\n" );
    sub_2495();
    sub_2575();
    sub_2655();
    sub_2731();
    DESTROY_ALL_CAMS();
    ENABLE_SCENE_STREAMING( 1 );
    g_U10956 = 0;
    g_U2771 = 0;
    SET_CREATE_RANDOM_COPS( 1 );
    sub_2868( 1 );
    g_U10460 = 1;
    sub_2938( ref g_U18635[6]._fU300[0]._fU64, 1, 0, 0 );
    sub_2938( ref g_U18635[7]._fU300[0]._fU64, 1, 0, 0 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    sub_2091();
    if (NOT (IS_CAR_DEAD( l_U1068[0] )))
    {
        LOCK_CAR_DOORS( l_U1068[0], 1 );
    }
    I = 0;
    for ( I = 0; I <= 19; I++ )
    {
        if (DOES_BLIP_EXIST( l_U1073[I] ))
        {
            REMOVE_BLIP( l_U1073[I] );
        }
        if (NOT (IS_CHAR_DEAD( l_U850[I] )))
        {
            SET_CHAR_KEEP_TASK( l_U850[I], 1 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U850[I] );
        }
    }
    for ( I = 0; I <= 11; I++ )
    {
        if (DOES_BLIP_EXIST( l_U837[I] ))
        {
            REMOVE_BLIP( l_U837[I] );
        }
        if (NOT (IS_CHAR_DEAD( l_U824[I] )))
        {
            SET_CHAR_KEEP_TASK( l_U824[I], 1 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U824[I] );
        }
    }
    l_U871[0] = sub_3883( ref l_U879[0] );
    l_U871[2] = sub_3883( ref l_U879[1] );
    l_U871[4] = sub_3883( ref l_U879[2] );
    for ( I = 0; I <= 6; I++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U871[I] )))
        {
            sub_3996( ref l_U879[I], 3 );
            sub_4031( ref l_U879[I], 1 );
        }
    }
    for ( I = 0; I <= 6; I++ )
    {
        if (DOES_BLIP_EXIST( l_U1094[I] ))
        {
            REMOVE_BLIP( l_U1094[I] );
        }
        if (NOT (IS_CHAR_DEAD( l_U871[I] )))
        {
            CLEAR_CHAR_TASKS( l_U871[I] );
            SET_CHAR_KEEP_TASK( l_U871[I], 1 );
            GET_CHAR_COORDINATES( l_U871[I], ref l_U713._fU0, ref l_U713._fU4, ref l_U713._fU8 );
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
                if (NOT (IS_CHAR_INJURED( l_U871[I] )))
                {
                    if (NOT (IS_CAR_DEAD( l_U1068[iVar3] )))
                    {
                        if (NOT (IS_CHAR_IN_CAR( l_U871[I], l_U1068[iVar3] )))
                        {
                            if (LOCATE_CAR_3D( l_U1068[iVar3], l_U713._fU0, l_U713._fU4, l_U713._fU8, 25.00000000, 25.00000000, 8.00000000, 0 ))
                            {
                                OPEN_SEQUENCE_TASK( ref l_U1114 );
                                TASK_ENTER_CAR_AS_DRIVER( 0, l_U1068[iVar3], 20000 );
                                TASK_CAR_MISSION_COORS_TARGET( 0, l_U1068[iVar3], l_U713._fU0, l_U713._fU4, l_U713._fU8, 8, 30.00000000, 2, 200, 5 );
                                CLOSE_SEQUENCE_TASK( l_U1114 );
                                TASK_PERFORM_SEQUENCE( l_U871[I], l_U1114 );
                                CLEAR_SEQUENCE_TASK( l_U1114 );
                            }
                            else
                            {
                                TASK_SMART_FLEE_POINT( l_U871[I], l_U713._fU0, l_U713._fU4, l_U713._fU8, 200, -1 );
                            }
                        }
                        else
                        {
                            TASK_CAR_MISSION_COORS_TARGET( l_U871[I], l_U1068[iVar3], l_U713._fU0, l_U713._fU4, l_U713._fU8, 8, 30.00000000, 2, 200, 5 );
                        }
                    }
                    else
                    {
                        TASK_SMART_FLEE_POINT( l_U871[I], l_U713._fU0, l_U713._fU4, l_U713._fU8, 200, -1 );
                    }
                }
            }
            else if (NOT (IS_CHAR_INJURED( l_U871[I] )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( l_U871[I] )))
                {
                    TASK_SMART_FLEE_POINT( l_U871[I], l_U713._fU0, l_U713._fU4, l_U713._fU8, 200, -1 );
                }
            }
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U871[I] );
        }
    }
    if (DOES_VEHICLE_EXIST( l_U1072 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U1072 );
    }
    if (DOES_PICKUP_EXIST( l_U1103 ))
    {
        REMOVE_PICKUP( l_U1103 );
    }
    if (DOES_PICKUP_EXIST( l_U1104 ))
    {
        REMOVE_PICKUP( l_U1104 );
    }
    for ( I = 0; I <= 19; I++ )
    {
        if (DOES_BLIP_EXIST( l_U1073[I] ))
        {
            REMOVE_BLIP( l_U1073[I] );
        }
    }
    for ( I = 0; I <= 11; I++ )
    {
        if (DOES_BLIP_EXIST( l_U837[I] ))
        {
            REMOVE_BLIP( l_U837[I] );
        }
    }
    if (DOES_BLIP_EXIST( l_U1102 ))
    {
        REMOVE_BLIP( l_U1102 );
    }
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    sub_5240( l_U602 );
    sub_5289( l_U602 );
    sub_5333();
    PRINTSTRING( "\n*\n ----> BACKUP ACTIVATED <---- \n*\n" );
    sub_7207( 0, 1 );
    PRINTSTRING( "\n*\n ----> BACKUP DISMISSED <---- \n*\n" );
    if (DOES_VEHICLE_EXIST( l_U1068[0] ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U1068[0] );
    }
    g_U39122 = 0;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2495()
{
    int I;

    if (l_U1143 != 0)
    {
        for ( I = 0; I <= (l_U1143 - 1); I++ )
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1132[I] );
        }
    }
    l_U1143 = 0;
    return;
}

void sub_2575()
{
    int I;

    if (l_U1146 != 0)
    {
        for ( I = 0; I <= (l_U1146 - 1); I++ )
        {
            REMOVE_ANIMS( l_U1144[I] );
        }
    }
    l_U1146 = 0;
    return;
}

void sub_2655()
{
    int I;

    for ( I = 0; I <= 0; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U1147[I] ))
        {
            MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U1147[I] );
        }
    }
    return;
}

void sub_2731()
{
    REMOVE_DECISION_MAKER( l_U1107 );
    REMOVE_DECISION_MAKER( l_U1106 );
    REMOVE_DECISION_MAKER( l_U1105 );
    REMOVE_DECISION_MAKER( l_U1108 );
    REMOVE_DECISION_MAKER( l_U1109 );
    REMOVE_DECISION_MAKER( l_U1110 );
    REMOVE_DECISION_MAKER( l_U1111 );
    return;
}

void sub_2868(boolean bParam0)
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

void sub_2938(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_2991( iParam0, uParam1, uParam2 );
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
        sub_3123( iParam0 + 0 );
    }
    return;
}

void sub_2991(int iParam0, int iParam1, int iParam2)
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
        sub_3123( iParam0 + 0 );
    }
    return;
}

void sub_3123(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_3154( iParam0->_fU4 )))
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

int sub_3154(unknown uParam0)
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

void sub_3883(int iParam0)
{
    return iParam0->_fU0;
}

void sub_3996(int iParam0, unknown uParam1)
{
    iParam0->_fU36 = uParam1;
    return;
}

void sub_4031(int iParam0, unknown uParam1)
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

void sub_5240(int iParam0)
{
    if (g_U94._fU68 == iParam0)
    {
        g_U94._fU68 = -1;
    }
    return;
}

void sub_5289(int iParam0)
{
    if (g_U94._fU72 == iParam0)
    {
        g_U94._fU72 = -1;
    }
    return;
}

void sub_5333()
{
    sub_5342();
    sub_5366( 0 );
    return;
}

void sub_5342()
{
    g_U11090 = 1;
    return;
}

void sub_5366(unknown uParam0)
{
    int I;

    for ( I = 0; I < 2; I++ )
    {
        sub_5398( g_U11081[I], uParam0 );
    }
    return;
}

void sub_5398(int iParam0, boolean bParam1)
{
    int I;
    int iVar5;

    if (bParam1)
    {
        if (sub_5414())
        {
            if (NOT sub_5472())
            {
                sub_5342();
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
                sub_5626( ref g_U11028[iVar5], ref g_U11081[iVar5], ref g_U11087[iVar5] );
            }
            else if (IS_PLAYER_PLAYING( sub_5923() ))
            {
                CLEAR_CHAR_TASKS( g_U11028[iVar5]._fU0 );
                sub_6033( ref g_U11028[iVar5], sub_5992() );
                if (g_U11090)
                {
                    sub_7039( ref g_U11028[iVar5], 4 );
                }
            }
            g_U11117[iVar5] = bParam1;
        }
    }
    return;
}

int sub_5414()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" )) > 0)
    {
        return 1;
    }
    return 0;
}

void sub_5472()
{
    if (NOT sub_5414())
    {
        return 0;
    }
    return g_U11090;
}

void sub_5626(int iParam0, unknown uParam1, unknown uParam2)
{
    (uParam1^) = iParam0->_fU0;
    (uParam2^) = iParam0->_fU4;
    iParam0->_fU36 = 0;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
        if (IS_VEH_DRIVEABLE( sub_5691( iParam0 ) ))
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

void sub_5691(int iParam0)
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

void sub_5923()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_5992()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_6033(int iParam0, int iParam1)
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
                if (sub_6129( iParam0->_fU0, uVar4 ))
                {
                    if (NOT (IS_CHAR_IN_CAR( iParam1, uVar4 )))
                    {
                        return;
                    }
                }
            }
        }
    }
    if ((iParam0->_fU8 == sub_5992()) AND (iParam1 != sub_5992()))
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
        sub_3996( iParam0, 1 );
        if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
        {
            SET_CHAR_DEFENSIVE_AREA_ATTACHED_TO_PED( iParam0->_fU0, iParam0->_fU8, 0, 2, -2, 0, 65516, 5, 20, 1 );
        }
        if (iParam0->_fU8 == sub_5992())
        {
            if (NOT (DOES_CHAR_EXIST( g_U11198 )))
            {
                sub_6708( iParam0, 0 );
            }
            else if (IS_CHAR_INJURED( g_U11198 ))
            {
                sub_6708( iParam0, 0 );
            }
            else if (NOT (g_U11198 == iParam0->_fU0))
            {
                if (NOT (DOES_CHAR_EXIST( g_U11197 )))
                {
                    sub_6708( iParam0, 1 );
                }
                else if (IS_CHAR_INJURED( g_U11197 ))
                {
                    sub_6708( iParam0, 1 );
                }
                else if (NOT (g_U11197 == iParam0->_fU0))
                {
                    sub_6708( iParam0, 2 );
                };;;
            };;;
        }
    }
    return;
}

boolean sub_6129(unknown uParam0, unknown uParam1)
{
    return (IS_CHAR_SITTING_IN_CAR( uParam0, uParam1 )) AND (NOT (sub_6153( uParam0, uParam1 )));
}

boolean sub_6153(int iParam0, unknown uParam1)
{
    int iVar4;

    GET_DRIVER_OF_CAR( uParam1, ref iVar4 );
    return iVar4 == iParam0;
}

void sub_6708(int iParam0, int iParam1)
{
    if (iParam0->_fU8 == sub_5992())
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

void sub_7039(int iParam0, int iParam1)
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

void sub_7207(boolean bParam0, unknown uParam1)
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

void sub_7890()
{
    sub_7908( "GWAUD", 6 );
    sub_7908( "JIMGANG", 0 );
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

void sub_7908(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_7944())
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

int sub_7944()
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

void sub_8181()
{
    sub_8198( "GWAUD" );
    sub_8327( 0, sub_5992(), "Johnny", 0 );
    l_U592 = sub_5992();
    l_U593 = sub_5923();
    while (NOT sub_8496())
    {
        WAIT( 0 );
    }
    l_U602 = g_U26739._fU0;
    return;
}

void sub_8198(unknown uParam0)
{
    StrCopy( ref l_U34._fU0, uParam0, 16 );
    sub_8217();
    return;
}

void sub_8217()
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

void sub_8327(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U34._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U34._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_8411( "\n PED NUMBER ", uParam0 );
    sub_8451( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_8411(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_8451(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_8496()
{
    int I;

    if (l_U1143 != 0)
    {
        for ( I = 0; I <= (l_U1143 - 1); I++ )
        {
            if (NOT (HAS_MODEL_LOADED( l_U1132[I] )))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_8620()
{
    l_U1128[0] = -571009320;
    l_U1128[1] = 2006142190;
    l_U1128[2] = -359167535;
    return;
}

void sub_8676()
{
    l_U1120[0] = 977480632;
    l_U1120[1] = -1159156463;
    l_U1120[2] = 479817841;
    l_U1120[3] = 226415164;
    l_U1120[4] = 15972646;
    l_U1120[5] = -2107556865;
    return;
}

void sub_8907()
{
    unknown uVar2;

    if (l_U638 == 0)
    {
        GET_CHAR_COORDINATES( l_U592, ref l_U783._fU0, ref l_U783._fU4, ref l_U783._fU8 );
        CLEAR_AREA( l_U783._fU0, l_U783._fU4, l_U783._fU8, 5, 1 );
        sub_8989();
        if (l_U602 == 6)
        {
            l_U780 = {l_U728};
        }
        else if (l_U602 == 7)
        {
            l_U780 = {l_U725};
        }
        else
        {
            l_U780 = {l_U722};
        }
        g_U39222 = {l_U780};
        l_U638 = 1;
    }
    sub_10811();
    sub_7890();
    if (NOT (IS_CHAR_DEAD( l_U592 )))
    {
        SET_CHAR_HEADING( l_U592, l_U792 );
        SET_CHAR_COORDINATES( l_U592, l_U731._fU0, l_U731._fU4, l_U731._fU8 );
        if (sub_10982( sub_5992() ))
        {
            uVar2 = sub_11058( sub_5992() );
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
    sub_11158();
    sub_12432();
    sub_20468();
    l_U637 = 1;
    sub_20663();
    l_U871[0] = sub_3883( ref l_U879[0] );
    sub_12698( 1 );
    sub_41030();
    sub_41547();
    sub_41765();
    sub_45328();
    sub_2868( 0 );
    sub_47548();
    CLEAR_HELP();
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 500 );
    }
    sub_5333();
    if (NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 )))
    {
        sub_6033( ref g_U11028[0], l_U592 );
        sub_6708( ref g_U11028[0], 0 );
        if (NOT (IS_CHAR_INJURED( l_U879[0]._fU0 )))
        {
            sub_6033( ref l_U879[0], g_U11028[0]._fU0 );
            sub_6708( ref l_U879[0], 1 );
        }
    }
    else if (NOT (IS_CHAR_INJURED( l_U879[0]._fU0 )))
    {
        sub_6033( ref l_U879[0], l_U592 );
        sub_6708( ref l_U879[0], 2 );
    }
    if (NOT (IS_CHAR_INJURED( g_U11028[1]._fU0 )))
    {
        sub_6033( ref g_U11028[1], l_U592 );
        sub_6708( ref g_U11028[1], 1 );
    }
    sub_48627();
    SET_PLAYER_CONTROL_ADVANCED( sub_5923(), 1, 1, 1 );
    l_U612 = GET_MAP_AREA_FROM_COORDS( l_U734[l_U697] );
    sub_20468();
    sub_48709();
    StrCopy( ref l_U603[0], "E1FCT3_BNLJ", 16 );
    StrCopy( ref l_U603[1], "E1FCT3_BNLB", 16 );
    if (l_U700 == 0)
    {
        sub_48926();
    }
    else if (l_U700 == 1)
    {
        sub_49155();
    }
    else
    {
        sub_49372();
    }
    sub_48709();
    if (l_U700 == 0)
    {
        sub_49601();
    }
    else if (l_U700 == 1)
    {
        sub_49790();
    }
    else
    {
        sub_49967();
    }
    sub_50148( ref l_U603, ref l_U793, 8, 1 );
    g_U10460 = 0;
    SET_CAR_DENSITY_MULTIPLIER( 0.40000000 );
    sub_2575();
    PRINTSTRING( "\n*\n ----> BACKUP ACTIVATED <---- \n*\n" );
    if ((DOES_VEHICLE_EXIST( l_U1072 )) AND (NOT (IS_CAR_DEAD( l_U1072 ))))
    {
        if (IS_CHAR_IN_CAR( l_U592, l_U1072 ))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U1072 );
        }
    }
    g_U2771 = 1;
    l_U663++;
    return;
}

void sub_8989()
{
    if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, -1018.00000000, 1299.00000000, 24.72840000, 20, 20, 20, 0 ))
    {
        l_U722 = {-1018.00000000, 1299.00000000, 24.72840000};
        l_U725 = {-1019.52000000, 1301.84400000, 24.75550000};
        l_U728 = {-1019.19800000, 1303.72300000, 24.74510000};
        l_U789 = 298.73830000;
        l_U790 = 267.47010000;
        l_U791 = 275.98100000;
        l_U731 = {-1018.25100000, 1300.58700000, 24.71440000};
        l_U792 = 290.64990000;
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, -1520.37500000, 654.83600000, 23.93500000, 20, 20, 20, 0 ))
    {
        l_U722 = {-1723.20000000, 358.34680000, 24.44400000};
        l_U725 = {-1726.16200000, 355.13320000, 24.44400000};
        l_U728 = {-1723.98400000, 353.91440000, 24.44400000};
        l_U789 = 339.29860000;
        l_U790 = 317.08660000;
        l_U791 = 341.32020000;
        l_U731 = {-1520.37500000, 654.83600000, 23.93500000};
        l_U792 = 337.61610000;
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, -1249.56600000, -287.56780000, 2.26780000, 20, 20, 20, 0 ))
    {
        l_U722 = {-1249.56600000, -287.56780000, 2.26780000};
        l_U725 = {-1251.41500000, -285.16510000, 2.26780000};
        l_U728 = {-1262.60900000, -290.51320000, 2.26780000};
        l_U789 = 83.74900000;
        l_U790 = 138.95080000;
        l_U791 = 287.24300000;
        l_U731 = {-1250.38300000, -288.56790000, 2.26780000};
        l_U792 = 99.50900000;
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, -120.46630000, 1428.77600000, 19.41560000, 20, 20, 20, 0 ))
    {
        l_U722 = {-70.75950000, 1525.68900000, 17.44460000};
        l_U725 = {-73.56910000, 1527.75800000, 17.54800000};
        l_U728 = {-68.10390000, 1524.00000000, 17.41950000};
        l_U789 = 304.75100000;
        l_U790 = 317.32300000;
        l_U791 = 283.52590000;
        l_U731 = {-120.46630000, 1428.77600000, 19.41560000};
        l_U792 = 179.22220000;
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, -347.40990000, 643.33900000, 13.61330000, 20, 20, 20, 0 ))
    {
        l_U722 = {-347.40990000, 643.33900000, 13.61330000};
        l_U725 = {-344.05540000, 640.53090000, 13.79580000};
        l_U728 = {-347.50660000, 647.35620000, 13.61320000};
        l_U789 = 119.95330000;
        l_U790 = 50.62960000;
        l_U791 = 146.08380000;
        l_U731 = {-342.66310000, 636.32290000, 13.80300000};
        l_U792 = 133.27190000;
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, 151.08310000, -391.72350000, 13.75050000, 20, 20, 20, 0 ))
    {
        l_U722 = {151.08310000, -391.72350000, 13.75050000};
        l_U725 = {149.91700000, -390.62040000, 13.75050000};
        l_U728 = {152.02820000, -393.47380000, 13.75050000};
        l_U789 = 132.60530000;
        l_U790 = 108.09920000;
        l_U791 = 152.61750000;
        l_U731 = {151.63360000, -388.32460000, 13.75420000};
        l_U792 = 125.69640000;
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, 425.74800000, 1521.55600000, 15.59500000, 20, 20, 20, 0 ))
    {
        l_U722 = {813.99070000, 1575.27700000, 16.89010000};
        l_U725 = {816.50760000, 1574.44600000, 16.76850000};
        l_U728 = {810.14980000, 1576.15800000, 17.01150000};
        l_U789 = 303.69770000;
        l_U790 = 347.21460000;
        l_U791 = 300.00340000;
        l_U731 = {425.74800000, 1521.55600000, 15.59500000};
        l_U792 = 44.10210000;
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, 813.99070000, 1575.27700000, 16.89010000, 20, 20, 20, 0 ))
    {
        l_U722 = {813.99070000, 1575.27700000, 16.89010000};
        l_U725 = {816.50760000, 1574.44600000, 16.76850000};
        l_U728 = {810.14980000, 1576.15800000, 17.01150000};
        l_U789 = 303.69770000;
        l_U790 = 347.21460000;
        l_U791 = 300.00340000;
        l_U731 = {821.13190000, 1579.15300000, 16.42320000};
        l_U792 = 335.07740000;
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, 1346.20300000, 545.29910000, 29.39200000, 20, 20, 20, 0 ))
    {
        l_U722 = {1346.20300000, 545.29910000, 29.39260000};
        l_U725 = {1346.00400000, 542.75000000, 29.16860000};
        l_U728 = {1346.14600000, 549.22720000, 29.73780000};
        l_U789 = 73.96130000;
        l_U790 = 40.73380000;
        l_U791 = 148.86500000;
        l_U731 = {1344.76300000, 537.68550000, 28.72320000};
        l_U792 = 87.23530000;
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, 879.65420000, -478.55340000, 13.98490000, 20, 20, 20, 0 ))
    {
        l_U722 = {879.65420000, -478.55340000, 13.98490000};
        l_U725 = {877.92700000, -478.89370000, 13.92470000};
        l_U728 = {876.62050000, -478.51970000, 13.89730000};
        l_U789 = 332.91490000;
        l_U790 = 328.59880000;
        l_U791 = 336.32590000;
        l_U731 = {879.64480000, -477.59940000, 13.97320000};
        l_U792 = 358.62180000;
    };;;;;;;;;;
    return;
}

void sub_10811()
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

int sub_10982(int iParam0)
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

void sub_11058(unknown uParam0)
{
    unknown Result;

    if (IS_CHAR_IN_ANY_CAR( uParam0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref Result );
        return Result;
    }
    return nil;
}

void sub_11158()
{
    # -sub_C1FFC0-0xc214c8( 2, ref l_U1107 );
    # -sub_C1FFC0-0xc214c8( 3, ref l_U1106 );
    # -sub_C1FFC0-0xc214c8( 1, ref l_U1105 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U1108 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U1108, 0 );
    LOAD_COMBAT_DECISION_MAKER( 10, ref l_U1109 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U1109, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_CAUTION( l_U1109, 2 );
    LOAD_COMBAT_DECISION_MAKER( 9, ref l_U1110 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U1110, 0 );
    LOAD_COMBAT_DECISION_MAKER( 1, ref l_U1111 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U1111, 0 );
    sub_11317( 1 );
    sub_11317( 2 );
    sub_11317( 3 );
    sub_11361( 6 );
    sub_11361( 7 );
    sub_11733( 6 );
    sub_11733( 7 );
    if ((g_U15728[8] == 1) || (g_U12306[1]._fU108 == 1))
    {
        sub_11317( 4 );
    }
    else
    {
        l_U1119 = sub_11372( 1 );
        sub_12018( l_U1119 );
        l_U1127 = sub_11733( 1 );
        sub_12018( l_U1127 );
        SUPPRESS_CAR_MODEL( l_U1127 );
    }
    LOAD_ALL_OBJECTS_NOW();
    while (NOT sub_8496())
    {
        WAIT( 0 );
        if ((g_U15728[8] == 0) AND (g_U12306[1]._fU108 == 0))
        {
            if (NOT (HAS_MODEL_LOADED( l_U1119 )))
            {
                REQUEST_MODEL( l_U1119 );
            }
            if (NOT (HAS_MODEL_LOADED( l_U1127 )))
            {
                REQUEST_MODEL( l_U1127 );
            }
        }
        PRINTSTRING( "\n -----> Waiting for models to load...\n\n" );
    }
    while (((NOT (sub_12277( 1 ))) AND (NOT (sub_12277( 2 )))) AND (NOT (sub_12277( 3 ))))
    {
        sub_11317( 1 );
        sub_11317( 2 );
        sub_11317( 3 );
        WAIT( 0 );
    }
    if ((g_U15728[8] == 1) || (g_U12306[1]._fU108 == 1))
    {
        while (NOT (sub_12277( 4 )))
        {
            sub_11317( 4 );
            WAIT( 0 );
        }
    }
    return;
}

void sub_11317(unknown uParam0)
{
    REQUEST_MODEL( sub_1274( uParam0 ) );
    return;
}

void sub_11361(unknown uParam0)
{
    REQUEST_MODEL( sub_11372( uParam0 ) );
    return;
}

int sub_11372(unknown uParam0)
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
    sub_11671( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_11671(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_11733(unknown uParam0)
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

void sub_12018(unknown uParam0)
{
    REQUEST_MODEL( uParam0 );
    l_U1132[l_U1143] = uParam0;
    l_U1143++;
    return;
}

void sub_12277(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_1274( uParam0 ) );
}

void sub_12432()
{
    int I;

    PRINTSTRING( "\n*\n ----> CREATE BACKUP <---- \n*\n" );
    sub_12507( l_U725, l_U790, l_U728, l_U791, 1 );
    if ((g_U15728[8] == 1) || (g_U12306[1]._fU108 == 1))
    {
        while (NOT (sub_12917( 4, l_U722, l_U789, ref l_U879[0] )))
        {
            WAIT( 0 );
        }
    }
    else
    {
        sub_17868( l_U722, l_U789, l_U1119, l_U1127, ref l_U879[0], 1 );
        sub_18223( 1 );
    }
    SETTIMERA( 0 );
    PRINTSTRING( "\n*\n ----> START WAITING FOR TERRY AND CLAY TO BE CREATED <---- \n*\n" );
    while (((NOT (DOES_VEHICLE_EXIST( g_U11087[0] ))) || (NOT (DOES_VEHICLE_EXIST( g_U11087[1] )))) AND (TIMERA() < 5000))
    {
        WAIT( 0 );
    }
    PRINTSTRING( "\n*\n ----> END WAITING FOR TERRY AND CLAY TO BE CREATED <---- \n*\n" );
    sub_18606( ref g_U11028[0], 1 );
    sub_18606( ref g_U11028[1], 1 );
    for ( I = 0; I <= 5; I++ )
    {
        if (I == 1)
        {
            l_U1068[0] = sub_18759( ref l_U879[0] );
            if (NOT (IS_CAR_DEAD( l_U1068[0] )))
            {
                if ((IS_CAR_PASSENGER_SEAT_FREE( l_U1068[0], 0 )) AND (sub_12277( 1 )))
                {
                    sub_18856( 1, ref l_U871[I], l_U1068[0], 0 );
                    GIVE_PED_HELMET_WITH_OPTS( l_U871[I], 0 );
                }
                sub_13136( l_U1068[0], l_U1127, 1 );
                SET_CAR_ON_GROUND_PROPERLY( l_U1068[0] );
            }
        }
        else if (I == 3)
        {
            if (NOT (IS_CAR_DEAD( g_U11087[0] )))
            {
                if ((IS_CAR_PASSENGER_SEAT_FREE( g_U11087[0], 0 )) AND (sub_12277( 2 )))
                {
                    sub_18856( 2, ref l_U871[I], g_U11087[0], 0 );
                    GIVE_PED_HELMET_WITH_OPTS( l_U871[I], 0 );
                }
                SET_CAR_ON_GROUND_PROPERLY( g_U11087[0] );
            }
        }
        else if (I == 5)
        {
            if (NOT (IS_CAR_DEAD( g_U11087[1] )))
            {
                if ((IS_CAR_PASSENGER_SEAT_FREE( g_U11087[1], 0 )) AND (sub_12277( 3 )))
                {
                    sub_18856( 3, ref l_U871[I], g_U11087[1], 0 );
                    GIVE_PED_HELMET_WITH_OPTS( l_U871[I], 0 );
                }
                SET_CAR_ON_GROUND_PROPERLY( g_U11087[1] );
            }
        };;;
        sub_19241();
        sub_19826( ref l_U879, l_U1117, 30000, 0 );
        sub_19917( ref l_U879, 3 );
        sub_3996( ref l_U879[I], 0 );
        sub_20042( ref l_U879, ref l_U1107, ref l_U1109 );
        sub_20042( ref g_U11028, ref l_U1107, ref l_U1109 );
        if (NOT (IS_CHAR_INJURED( l_U879[0]._fU0 )))
        {
            SET_CHAR_RELATIONSHIP_GROUP( l_U879[0]._fU0, 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U871[I] )))
        {
            SET_CHAR_RELATIONSHIP_GROUP( l_U871[I], 0 );
            SET_CHAR_DECISION_MAKER( l_U871[I], l_U1107 );
            SET_COMBAT_DECISION_MAKER( l_U871[I], l_U1109 );
            SET_CHAR_AS_ENEMY( l_U871[I], 0 );
            SET_CHAR_NEVER_TARGETTED( l_U871[I], 1 );
            SET_CHAR_WILL_DO_DRIVEBYS( l_U871[I], 1 );
            if (I == 0)
            {
                ;
            }
            else
            {
                SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE( l_U871[I], 3 );
                sub_19241();
                GIVE_DELAYED_WEAPON_TO_CHAR( l_U871[I], l_U1117, 25000, 0 );
            }
            SET_CHAR_SUFFERS_CRITICAL_HITS( l_U871[I], 0 );
        }
    }
    if (NOT (IS_CAR_DEAD( l_U1068[0] )))
    {
        LOCK_CAR_DOORS( l_U1068[0], 3 );
    }
    return;
}

void sub_12507(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    if (NOT sub_5414())
    {
        sub_12550( uParam0, uParam3, 0, uParam0, uParam3, uParam4, uParam7, 0, uParam4, uParam7, 1 );
        sub_12698( uParam8 );
        sub_12722();
    }
    return;
}

void sub_12550(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18)
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

void sub_12698(unknown uParam0)
{
    g_U11100 = uParam0;
    return;
}

void sub_12722()
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

int sub_12917(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    if (NOT (sub_12277( uParam0 )))
    {
        sub_11317( uParam0 );
        return 0;
    }
    if (NOT (sub_12959( iParam5 + 4, uParam1, uParam4 )))
    {
        return 0;
    }
    sub_14553( uParam0, iParam5 + 0, iParam5->_fU4 );
    sub_16510( iParam5 );
    GIVE_PED_HELMET_WITH_OPTS( iParam5->_fU0, 1 );
    iParam5->_fU92 = uParam0;
    sub_1251( uParam0 );
    return 1;
}

void sub_12959(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    uVar7 = sub_12968();
    return sub_13002( uParam0, uVar7, uParam1, uParam4, 9 );
}

int sub_12968()
{
    return 802082487;
}

int sub_13002(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    sub_13136( (uParam0^), uParam1, uParam6 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uParam1 );
    }
    return 1;
}

void sub_13136(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_14553(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    CREATE_CHAR_INSIDE_CAR( uParam2, 9, sub_1274( uParam0 ), uParam1 );
    SET_CHAR_RELATIONSHIP_GROUP( (uParam1^), 6 );
    iVar5 = sub_14597( uParam0, (uParam1^) );
    if (iVar5 == -1)
    {
        return;
    }
    g_U38937[iVar5]._fU4 = 1;
    g_U39102 = 1;
    return;
}

void sub_14597(unknown uParam0, unknown uParam1)
{
    int Result;
    unknown uVar5;

    Result = sub_1285( uParam0 );
    if (Result == -1)
    {
        return -1;
    }
    uVar5 = sub_14630( Result );
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
    sub_15357( ref uParam1 );
    sub_15441( uParam1, Result );
    return Result;
}

void sub_14630(unknown uParam0)
{
    int Result;

    Result = g_U38937[uParam0]._fU24;
    if (NOT (Result == -1))
    {
        return Result;
    }
    Result = sub_14669();
    g_U38937[uParam0]._fU24 = Result;
    return Result;
}

void sub_14669()
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

void sub_15357(unknown uParam0)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    return;
}

void sub_15441(unknown uParam0, unknown uParam1)
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
    uVar10 = {sub_15649( uParam1 )};
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

void sub_15649(int iParam0)
{
    char[16] Result;
    unknown uVar7;

    StrCopy( ref Result, "ERROR", 16 );
    if (iParam0 == -1)
    {
        return Result;
    }
    uVar7 = g_U38937[iParam0]._fU16;
    return sub_15701( uVar7 );
}

void sub_15701(int iParam0)
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

void sub_16510(int iParam0)
{
    int iVar3;

    SET_CHAR_WILL_DO_DRIVEBYS( iParam0->_fU0, 1 );
    ENABLE_PED_HELMET( iParam0->_fU0, 0 );
    iVar3 = sub_16549( iParam0 + 0 );
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
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, sub_17302( iVar3 ) );
        SET_CHAR_AS_ENEMY( iParam0->_fU0, 1 );
    }
    else
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, sub_17302( iVar3 ) );
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
            sub_17589( iParam0 );
        }
        else if ((NOT (IS_CHAR_MODEL( iParam0->_fU0, sub_11372( 6 ) ))) AND (NOT (IS_CHAR_MODEL( iParam0->_fU0, sub_11372( 7 ) ))))
        {
            sub_17589( iParam0 );
        }
    }
    return;
}

void sub_16549(unknown uParam0)
{
    unknown uVar3;
    int Result;

    Result = 0;
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        GET_CHAR_MODEL( (uParam0^), ref uVar3 );
        Result = sub_16589( ref uVar3 );
    }
    return Result;
}

void sub_16589(unknown uParam0)
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
        if (((((((uParam0^) == (sub_11372( 0 ))) || ((uParam0^) == (sub_11372( 1 )))) || ((uParam0^) == (sub_11372( 6 )))) || ((uParam0^) == (sub_11372( 7 )))) || ((uParam0^) == (sub_11372( 13 )))) || ((uParam0^) == (sub_11372( 16 ))))
        {
            Result = 1;
        }
        else if (((uParam0^) == (sub_11372( 15 ))) || ((uParam0^) == (sub_11372( 17 ))))
        {
            Result = 3;
        }
    }
    return Result;
}

int sub_17302(unknown uParam0)
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

void sub_17589(int iParam0)
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

void sub_17868(vector vParam0, unknown uParam3, unknown uParam4, unknown uParam5, int iParam6, boolean bParam7)
{
    unknown uVar10;

    sub_17902( vParam0 + (vector( 2.00000000, 0.00000000, 0.00000000)), uParam3, uParam4, iParam6 );
    uVar10 = sub_18065( vParam0, uParam3, uParam5 );
    WARP_CHAR_INTO_CAR( iParam6->_fU0, uVar10 );
    GIVE_PED_HELMET_WITH_OPTS( iParam6->_fU0, 1 );
    iParam6->_fU4 = uVar10;
    if (NOT bParam7)
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar10 );
    }
    return;
}

void sub_17902(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    CREATE_CHAR( sub_17917( sub_16589( ref uParam4 ) ), uParam4, uParam0._fU0, uParam0._fU4, uParam0._fU8, iParam5 + 0, 1 );
    SET_CHAR_HEADING( iParam5->_fU0, uParam3 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( iParam5->_fU0 );
    SET_CHAR_WILL_USE_CARS_IN_COMBAT( iParam5->_fU0, 1 );
    sub_16510( iParam5 );
    return;
}

int sub_17917(unknown uParam0)
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

void sub_18065(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown Result;

    CREATE_CAR( uParam4, uParam0._fU0, uParam0._fU4, uParam0._fU8, ref Result, 1 );
    SET_CAR_HEADING( Result, uParam3 );
    sub_13136( Result, uParam4, 9 );
    SET_LOAD_COLLISION_FOR_CAR_FLAG( Result, 1 );
    SET_BLIP_THROTTLE_RANDOMLY( Result, 1 );
    VEHICLE_CAN_BE_TARGETTED_BY_HS_MISSILE( Result, 0 );
    return Result;
}

void sub_18223(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_18234( uParam0 );
    if (iVar3 == 6)
    {
        return;
    }
    g_U39058[iVar3]._fU4 = 1;
    g_U39102 = 1;
    return;
}

int sub_18234(unknown uParam0)
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

void sub_18606(int iParam0, int iParam1)
{
    if (sub_18619( iParam0, iParam1 ))
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

boolean sub_18619(int iParam0, unknown uParam1)
{
    return ((iParam0->_fU88) AND (uParam1)) > 0;
}

void sub_18759(int iParam0)
{
    return iParam0->_fU4;
}

void sub_18856(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    CREATE_CHAR_AS_PASSENGER( uParam2, 9, sub_1274( uParam0 ), uParam3, uParam1 );
    SET_CHAR_RELATIONSHIP_GROUP( (uParam1^), 6 );
    iVar6 = sub_14597( uParam0, (uParam1^) );
    if (iVar6 == -1)
    {
        return;
    }
    g_U38937[iVar6]._fU4 = 1;
    g_U39102 = 1;
    return;
}

void sub_19241()
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
        if (l_U667 == 0)
        {
            if (g_U15728[41] == 0)
            {
                l_U1117 = 7;
            }
            else
            {
                l_U1117 = 27;
            }
        }
        else if (l_U667 == 4)
        {
            l_U1117 = 9;
        }
        else
        {
            l_U1117 = 7;
        }
    }
    else if ((iVar2 > 25) AND (iVar2 <= 50))
    {
        if (l_U667 > 2)
        {
            l_U1117 = 13;
        }
        else
        {
            l_U1117 = 12;
        }
    }
    else if ((iVar2 > 50) AND (iVar2 <= 75))
    {
        if (l_U667 > 2)
        {
            l_U1117 = 15;
        }
        else
        {
            l_U1117 = 14;
        }
    }
    else if ((iVar2 > 75) AND (iVar2 <= 95))
    {
        if (l_U667 == 0)
        {
            l_U1117 = 26;
        }
        else if (l_U667 == 1)
        {
            l_U1117 = 10;
        }
        else if (iVar3 <= 50)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref iVar3 );
            if (iVar3 <= 50)
            {
                l_U1117 = 26;
            }
            else
            {
                l_U1117 = 10;
            }
        }
        else
        {
            GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref iVar3 );
            if (iVar3 <= 50)
            {
                l_U1117 = 26;
            }
            else
            {
                l_U1117 = 11;
            }
        };;;
    }
    else if (iVar2 == 100)
    {
        if (g_U15728[53] == 0)
        {
            l_U1117 = 21;
        }
        else if (l_U667 > 2)
        {
            l_U1117 = 15;
        }
        else
        {
            l_U1117 = 14;
        }
    }
    else if (iVar3 <= 50)
    {
        l_U1117 = 5;
    }
    else if (g_U15728[55] == 0)
    {
        l_U1117 = 28;
    }
    else
    {
        l_U1117 = 4;
    };;;;;;;
    return;
}

void sub_19826(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_19917(unknown uParam0, unknown uParam1)
{
    int I;

    for ( I = 0; I < (uParam0^); I++ )
    {
        sub_19948( ref (uParam0^)[I], uParam1 );
    }
    return;
}

void sub_19948(int iParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE( iParam0->_fU0, uParam1 );
    }
    return;
}

void sub_20042(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_20468()
{
    if (NOT (IS_CHAR_INJURED( sub_5992() )))
    {
        sub_8327( 0, sub_5992(), "JOHNNY", 0 );
    }
    if (NOT (IS_CHAR_INJURED( l_U879[0]._fU0 )))
    {
        sub_8327( 1, l_U879[0]._fU0, "JIM", 0 );
    }
    if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
    {
        sub_8327( 2, g_U11081[0], "TERRY", 0 );
    }
    if (NOT (IS_CHAR_INJURED( g_U11081[1] )))
    {
        sub_8327( 3, g_U11081[1], "CLAY", 0 );
    }
    return;
}

void sub_20663()
{
    if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, -1018.00000000, 1299.00000000, 24.72840000, 20, 20, 20, 0 ))
    {
        while (sub_20712() == 0)
        {
            WAIT( 0 );
            l_U699 = 0;
            sub_22693();
            sub_27002();
        }
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, -1520.37500000, 654.83600000, 23.93500000, 20, 20, 20, 0 ))
    {
        while (sub_27854() == 0)
        {
            WAIT( 0 );
            l_U699 = 1;
            sub_22693();
            sub_27002();
        }
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, -1249.56600000, -287.56780000, 2.26780000, 20, 20, 20, 0 ))
    {
        while (sub_29479() == 0)
        {
            WAIT( 0 );
            l_U699 = 2;
            sub_22693();
            sub_27002();
        }
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, -120.46630000, 1428.77600000, 19.41560000, 20, 20, 20, 0 ))
    {
        while (sub_31113() == 0)
        {
            WAIT( 0 );
            l_U699 = 3;
            sub_22693();
            sub_27002();
        }
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, -347.40990000, 643.33900000, 13.61330000, 20, 20, 20, 0 ))
    {
        while (sub_32645() == 0)
        {
            WAIT( 0 );
            l_U699 = 4;
            sub_22693();
            sub_27002();
        }
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, 151.08310000, -391.72350000, 13.75050000, 20, 20, 20, 0 ))
    {
        while (sub_33950() == 0)
        {
            WAIT( 0 );
            l_U699 = 5;
            sub_22693();
            sub_27002();
        }
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, 425.74800000, 1521.55600000, 15.59500000, 20, 20, 20, 0 ))
    {
        while (sub_35226() == 0)
        {
            WAIT( 0 );
            l_U699 = 6;
            sub_22693();
            sub_27002();
        }
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, 813.99070000, 1575.27700000, 16.89010000, 20, 20, 20, 0 ))
    {
        while (sub_36491() == 0)
        {
            WAIT( 0 );
            l_U699 = 7;
            sub_22693();
            sub_27002();
        }
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, 1346.20300000, 545.29910000, 29.39200000, 20, 20, 20, 0 ))
    {
        while (sub_37753() == 0)
        {
            WAIT( 0 );
            l_U699 = 8;
            sub_22693();
            sub_27002();
        }
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, 879.65420000, -478.55340000, 13.98490000, 20, 20, 20, 0 ))
    {
        while (sub_39391() == 0)
        {
            WAIT( 0 );
            l_U699 = 9;
            sub_22693();
            sub_27002();
        }
    };;;;;;;;;;
    return;
}

int sub_20712()
{
    unknown uVar2;

    CLEAR_AREA_OF_CARS( -1018.25100000, 1300.58700000, 24.71440000, 100.00000000 );
    CLEAR_AREA_OF_CHARS( -1018.25100000, 1300.58700000, 24.71440000, 100.00000000 );
    switch (l_U1159)
    {
        case 0:
        REQUEST_CAR_RECORDING( 1770 );
        REQUEST_CAR_RECORDING( 1771 );
        REQUEST_CAR_RECORDING( 1772 );
        l_U1159 = 1;
        break;
        case 1:
        PRINTSTRING( "waiting on loading\n" );
        if (((HAS_CAR_RECORDING_BEEN_LOADED( 1771 )) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1770 ))) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1772 )))
        {
            l_U1159 = 2;
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
        sub_21135();
        SET_CAM_POS( l_U590, -951.58010000, 1301.58400000, 23.86526000 );
        SET_CAM_ROT( l_U590, 5.71496900, -0.00000000, 91.22739000 );
        SET_CAM_FOV( l_U590, 45.00000000 );
        if (NOT (IS_CAR_DEAD( l_U1068[0] )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U1068[0], 1770 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1068[0], 500.00000000 );
            SET_PLAYBACK_SPEED( l_U1068[0], 0.90000000 );
            SET_BLIP_THROTTLE_RANDOMLY( l_U1068[0], 1 );
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
        sub_21639( 1 );
        sub_21742( ref l_U590, 1 );
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        l_U1159 = 3;
        break;
        case 3:
        if ((((sub_21855( l_U1068[0], -951.58010000, 1301.58400000, 23.86526000 )) < 2.90000000) || ((sub_21855( g_U11087[0], -951.58010000, 1301.58400000, 23.86526000 )) < 2.90000000)) || ((sub_21855( g_U11087[1], -951.58010000, 1301.58400000, 23.86526000 )) < 2.90000000))
        {
            if (l_U657 == 0)
            {
                SET_CAM_COMPONENT_SHAKE( l_U590, 0, 3, 1250, 0.00500000, 3.90000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 1, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 3, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 4, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                l_U657 = 1;
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
            sub_21742( ref l_U590, 0 );
            sub_21742( ref l_U588, 1 );
            SETTIMERA( 0 );
            l_U1159 = 4;
        }
        break;
        case 4:
        if ((TIMERA() > 6500) AND (NOT (sub_22422( l_U793 ))))
        {
            l_U1159 = 6;
        }
        break;
        case 6:
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_21742( ref l_U590, 0 );
        sub_21639( 0 );
        l_U1159 = 0;
        l_U657 = 0;
        return 1;
        break;
    }
    return 0;
}

void sub_21135()
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

void sub_21639(boolean bParam0)
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

void sub_21742(unknown uParam0, unknown uParam1)
{
    if (DOES_CAM_EXIST( (uParam0^) ))
    {
        SET_CAM_ACTIVE( (uParam0^), uParam1 );
        SET_CAM_PROPAGATE( (uParam0^), uParam1 );
    }
    return;
}

void sub_21855(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

int sub_22422(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8946 == 1)) || (g_U8946 == 2))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_22534( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_22534( "\n speech is not playing" );
    }
    return 0;
}

void sub_22534(unknown uParam0)
{
    return;
}

void sub_22693()
{
    if ((IS_SCREEN_FADED_IN()) AND (l_U662 == 0))
    {
        if (NOT (IS_CAR_DEAD( l_U1068[0] )))
        {
            if (((LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U592, l_U1068[0], 15, 15, 15, 0 )) AND (IS_CAR_ON_SCREEN( l_U1068[0] ))) AND (NOT (IS_CHAR_INJURED( sub_5992() ))))
            {
                sub_22824( "E1FCC3_HEY", ref l_U793, 7, 1 );
                if (NOT (IS_CHAR_INJURED( l_U871[0] )))
                {
                    sub_23946( l_U592, sub_23806( 1 ), l_U871[0], 39 );
                }
                sub_26597();
                l_U662 = 1;
            }
        }
    }
    return;
}

void sub_22824(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_22847( uParam0, ref l_U34._fU0, uParam1, uParam2, uParam3 );
}

void sub_22847(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_22901( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_22901(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_22923( iParam1 )))
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
    sub_23603( ref g_U8947, ref l_U34 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_22923(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_22534( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_22534( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_22534( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_23603(int iParam0, int iParam1)
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

void sub_23806(boolean bParam0)
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

void sub_23946(int iParam0, unknown uParam1, int iParam2, int iParam3)
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
        uVar7 = sub_24436( sub_24106( iParam0 ) );
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
                TASK_LOOK_AT_CHAR( iParam0, iParam2, sub_24780( 2000, 5500 ), 0 );
            }
            if (iParam0 != sub_5992())
            {
                iVar8 = sub_16549( ref iParam0 );
                if ((iVar8 == 1) AND (iParam2 != sub_5992()))
                {
                    if (NOT (IS_PED_LOOKING_AT_PED( sub_5992(), iParam2 )))
                    {
                        TASK_LOOK_AT_CHAR( sub_5992(), iParam2, sub_24780( 2000, 5500 ), 0 );
                    }
                }
                else if (NOT (IS_PED_LOOKING_AT_PED( sub_5992(), iParam0 )))
                {
                    TASK_LOOK_AT_CHAR( sub_5992(), iParam0, sub_24780( 2000, 5500 ), 0 );
                }
            }
        }
        if (iParam3 != 39)
        {
            if ((iParam3 == 38) AND (IS_CHAR_MODEL( iParam0, sub_11372( 0 ) )))
            {
                if (l_U180)
                {
                    SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0, "E1B1_WA", "BILLY", 1, 1, 2 );
                }
            }
            else
            {
                SAY_AMBIENT_SPEECH( iParam0, sub_25044( iParam3 ), 1, 1, 2 );
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

void sub_24106(unknown uParam0)
{
    unknown uVar3;
    int Result;

    Result = 5;
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            Result = sub_24159( uVar3 );
        }
    }
    return Result;
}

void sub_24159(unknown uParam0)
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

void sub_24436(unknown uParam0)
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

void sub_24780(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_25044(unknown uParam0)
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

void sub_26597()
{
    int iVar2;
    unknown uVar3;
    int I;

    if (NOT (IS_CHAR_INJURED( l_U879[0]._fU0 )))
    {
        TASK_LOOK_AT_CHAR( l_U592, l_U879[0]._fU0, 10000, 0 );
    }
    if (NOT (IS_CHAR_INJURED( l_U879[0]._fU0 )))
    {
        TASK_LOOK_AT_CHAR( l_U879[0]._fU0, l_U592, 10000, 0 );
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
            if (NOT (IS_CHAR_INJURED( l_U871[(I * 2) + 1] )))
            {
                TASK_LOOK_AT_CHAR( l_U871[(I * 2) + 1], l_U592, uVar3, 0 );
            }
        }
    }
    return;
}

void sub_27002()
{
    if ((sub_27011()) AND (IS_SCREEN_FADED_IN()))
    {
        DO_SCREEN_FADE_OUT( 500 );
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        l_U699 *= 3;
        if (NOT (IS_CAR_DEAD( l_U1068[0] )))
        {
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1068[0] )))
            {
                while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 1770 + l_U699 )))
                {
                    REQUEST_CAR_RECORDING( 1770 + l_U699 );
                    WAIT( 0 );
                }
                if (NOT (IS_CAR_DEAD( l_U1068[0] )))
                {
                    START_PLAYBACK_RECORDED_CAR( l_U1068[0], 1770 + l_U699 );
                }
            }
            if (NOT (IS_CAR_DEAD( l_U1068[0] )))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1068[0] ))
                {
                    SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_CAR( l_U1068[0] );
                }
            }
        }
        if (NOT (IS_CAR_DEAD( g_U11087[0] )))
        {
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( g_U11087[0] )))
            {
                while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 1771 + l_U699 )))
                {
                    REQUEST_CAR_RECORDING( 1771 + l_U699 );
                    WAIT( 0 );
                }
                if (NOT (IS_CAR_DEAD( g_U11087[0] )))
                {
                    START_PLAYBACK_RECORDED_CAR( g_U11087[0], 1771 + l_U699 );
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
                while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 1772 + l_U699 )))
                {
                    REQUEST_CAR_RECORDING( 1772 + l_U699 );
                    WAIT( 0 );
                }
                if (NOT (IS_CAR_DEAD( g_U11087[1] )))
                {
                    START_PLAYBACK_RECORDED_CAR( g_U11087[1], 1772 + l_U699 );
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
        SET_CAM_BEHIND_PED( sub_5992() );
        l_U1159 = 6;
        l_U659 = 1;
        DO_SCREEN_FADE_IN( 500 );
    }
    return;
}

int sub_27011()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_27854()
{
    unknown uVar2;

    CLEAR_AREA_OF_CARS( -1520.37500000, 654.83600000, 23.93500000, 100.00000000 );
    CLEAR_AREA_OF_CHARS( -1520.37500000, 654.83600000, 23.93500000, 100.00000000 );
    switch (l_U1159)
    {
        case 0:
        REQUEST_CAR_RECORDING( 1773 );
        REQUEST_CAR_RECORDING( 1774 );
        REQUEST_CAR_RECORDING( 1775 );
        l_U1159 = 1;
        break;
        case 1:
        PRINTSTRING( "waiting on loading\n" );
        if (((HAS_CAR_RECORDING_BEEN_LOADED( 1773 )) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1774 ))) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1775 )))
        {
            l_U1159 = 2;
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
        sub_21135();
        SET_CAM_POS( l_U585, -1509.41300000, 650.82090000, 22.99788000 );
        SET_CAM_ROT( l_U585, 10.46284000, -0.00000000, 82.05753000 );
        SET_CAM_FOV( l_U585, 37.80002000 );
        SET_CAM_POS( l_U587, -1509.41300000, 648.98090000, 22.99788000 );
        SET_CAM_ROT( l_U587, 10.46284000, -0.00000000, 82.05753000 );
        SET_CAM_FOV( l_U587, 45.00000000 );
        if (NOT (IS_CAR_DEAD( l_U1068[0] )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U1068[0], 1773 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1068[0], 750.00000000 );
            SET_PLAYBACK_SPEED( l_U1068[0], 0.90000000 );
            SET_BLIP_THROTTLE_RANDOMLY( l_U1068[0], 1 );
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
        sub_21639( 1 );
        sub_21742( ref l_U588, 1 );
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        l_U1159 = 3;
        break;
        case 3:
        if ((((sub_21855( l_U1068[0], -951.58010000, 1301.58400000, 23.86526000 )) < 2.90000000) || ((sub_21855( g_U11087[0], -951.58010000, 1301.58400000, 23.86526000 )) < 2.90000000)) || ((sub_21855( g_U11087[1], -951.58010000, 1301.58400000, 23.86526000 )) < 2.90000000))
        {
            if (l_U657 == 0)
            {
                SET_CAM_COMPONENT_SHAKE( l_U590, 0, 3, 1250, 0.00500000, 3.90000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 1, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 3, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 4, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                l_U657 = 1;
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
            sub_21742( ref l_U590, 0 );
            sub_21742( ref l_U588, 1 );
            SETTIMERA( 0 );
            l_U1159 = 4;
        }
        break;
        case 4:
        if ((TIMERA() > 3000) AND (NOT (sub_22422( l_U793 ))))
        {
            l_U1159 = 6;
        }
        break;
        case 6:
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_21742( ref l_U590, 0 );
        sub_21639( 0 );
        l_U657 = 0;
        l_U1159 = 0;
        return 1;
        break;
    }
    return 0;
}

int sub_29479()
{
    unknown uVar2;

    CLEAR_AREA_OF_CARS( -1250.38300000, -288.56790000, 2.26780000, 100.00000000 );
    CLEAR_AREA_OF_CHARS( -1250.38300000, -288.56790000, 2.26780000, 100.00000000 );
    switch (l_U1159)
    {
        case 0:
        REQUEST_CAR_RECORDING( 1776 );
        REQUEST_CAR_RECORDING( 1777 );
        REQUEST_CAR_RECORDING( 1778 );
        l_U1159 = 1;
        break;
        case 1:
        PRINTSTRING( "waiting on loading\n" );
        if (((HAS_CAR_RECORDING_BEEN_LOADED( 1776 )) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1777 ))) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1778 )))
        {
            l_U1159 = 2;
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
        sub_21135();
        SET_CAM_POS( l_U585, -1249.42700000, -290.24460000, 2.72642000 );
        SET_CAM_ROT( l_U585, 13.12696000, 0.00000100, 35.79051000 );
        SET_CAM_FOV( l_U585, 45.00000000 );
        SET_CAM_POS( l_U587, -1250.96000000, -290.24460000, 2.72642000 );
        SET_CAM_ROT( l_U587, -0.66880400, 0.00000000, 46.01213000 );
        SET_CAM_FOV( l_U587, 45.00000000 );
        if (NOT (IS_CAR_DEAD( l_U1068[0] )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U1068[0], 1776 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1068[0], 1550.00000000 + 500 );
            SET_PLAYBACK_SPEED( l_U1068[0], 0.90000000 );
            SET_BLIP_THROTTLE_RANDOMLY( l_U1068[0], 1 );
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
        sub_21639( 1 );
        sub_21742( ref l_U588, 1 );
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        l_U1159 = 3;
        break;
        case 3:
        if ((((sub_21855( l_U1068[0], -951.58010000, 1301.58400000, 23.86526000 )) < 2.90000000) || ((sub_21855( g_U11087[0], -951.58010000, 1301.58400000, 23.86526000 )) < 2.90000000)) || ((sub_21855( g_U11087[1], -951.58010000, 1301.58400000, 23.86526000 )) < 2.90000000))
        {
            if (l_U657 == 0)
            {
                SET_CAM_COMPONENT_SHAKE( l_U590, 0, 3, 1250, 0.00500000, 3.90000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 1, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 3, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 4, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                l_U657 = 1;
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
            sub_21742( ref l_U590, 0 );
            sub_21742( ref l_U588, 1 );
            SETTIMERA( 0 );
            l_U1159 = 4;
        }
        break;
        case 4:
        if ((TIMERA() > 4000) AND (NOT (sub_22422( l_U793 ))))
        {
            l_U1159 = 6;
        }
        break;
        case 6:
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_21742( ref l_U590, 0 );
        sub_21639( 0 );
        l_U657 = 0;
        l_U1159 = 0;
        return 1;
        break;
    }
    return 0;
}

int sub_31113()
{
    unknown uVar2;

    CLEAR_AREA_OF_CARS( -120.46630000, 1428.77600000, 19.41560000, 100.00000000 );
    CLEAR_AREA_OF_CHARS( -120.46630000, 1428.77600000, 19.41560000, 100.00000000 );
    switch (l_U1159)
    {
        case 0:
        REQUEST_CAR_RECORDING( 1779 );
        REQUEST_CAR_RECORDING( 1780 );
        REQUEST_CAR_RECORDING( 1781 );
        l_U1159 = 1;
        break;
        case 1:
        PRINTSTRING( "waiting on loading\n" );
        if (((HAS_CAR_RECORDING_BEEN_LOADED( 1779 )) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1780 ))) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1781 )))
        {
            l_U1159 = 2;
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
        sub_21135();
        SET_CAM_POS( l_U590, -120.60600000, 1424.29100000, 19.69459000 );
        SET_CAM_ROT( l_U590, 5.96055700, 0.00000000, -0.32322000 );
        SET_CAM_FOV( l_U590, 45.00000000 );
        if (NOT (IS_CAR_DEAD( l_U1068[0] )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U1068[0], 1779 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1068[0], 500.00000000 );
            SET_PLAYBACK_SPEED( l_U1068[0], 0.90000000 );
            SET_BLIP_THROTTLE_RANDOMLY( l_U1068[0], 1 );
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
        sub_21639( 1 );
        sub_21742( ref l_U590, 1 );
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        l_U1159 = 3;
        break;
        case 3:
        if ((((sub_21855( l_U1068[0], -951.58010000, 1301.58400000, 23.86526000 )) < 2.90000000) || ((sub_21855( g_U11087[0], -951.58010000, 1301.58400000, 23.86526000 )) < 2.90000000)) || ((sub_21855( g_U11087[1], -951.58010000, 1301.58400000, 23.86526000 )) < 2.90000000))
        {
            if (l_U657 == 0)
            {
                SET_CAM_COMPONENT_SHAKE( l_U590, 0, 3, 1250, 0.00500000, 3.90000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 1, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 3, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 4, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                l_U657 = 1;
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
            sub_21742( ref l_U590, 0 );
            sub_21742( ref l_U588, 1 );
            SETTIMERA( 0 );
            l_U1159 = 4;
        }
        break;
        case 4:
        if ((TIMERA() > 3000) AND (NOT (sub_22422( l_U793 ))))
        {
            l_U1159 = 6;
        }
        break;
        case 6:
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_21742( ref l_U590, 0 );
        sub_21639( 0 );
        l_U1159 = 0;
        l_U657 = 0;
        return 1;
        break;
    }
    return 0;
}

int sub_32645()
{
    unknown uVar2;

    CLEAR_AREA_OF_CARS( -342.66310000, 636.32290000, 13.80300000, 100.00000000 );
    CLEAR_AREA_OF_CHARS( -342.66310000, 636.32290000, 13.80300000, 100.00000000 );
    switch (l_U1159)
    {
        case 0:
        REQUEST_CAR_RECORDING( 1782 );
        REQUEST_CAR_RECORDING( 1783 );
        REQUEST_CAR_RECORDING( 1784 );
        l_U1159 = 1;
        break;
        case 1:
        PRINTSTRING( "waiting on loading\n" );
        if (((HAS_CAR_RECORDING_BEEN_LOADED( 1782 )) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1783 ))) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1784 )))
        {
            l_U1159 = 2;
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
        SET_CHAR_COORDINATES( l_U592, -342.66310000, 636.32290000, 14.29260000 );
        SET_CHAR_HEADING( l_U592, 133.27190000 );
        sub_21135();
        SET_CAM_POS( l_U585, -346.52620000, 632.61380000, 31.81870000 );
        SET_CAM_ROT( l_U585, 2.52909900, -0.00000000, -44.08124000 );
        SET_CAM_FOV( l_U585, 21.60006000 );
        SETTIMERA( 0 );
        sub_21639( 1 );
        sub_21742( ref l_U585, 1 );
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        l_U1159 = 3;
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
            sub_21742( ref l_U588, 1 );
            sub_21742( ref l_U585, 0 );
            l_U1159 = 4;
        }
        break;
        case 4:
        if ((TIMERA() > 7000) AND (l_U658 == 0))
        {
            if (NOT (IS_CAR_DEAD( l_U1068[0] )))
            {
                START_PLAYBACK_RECORDED_CAR( l_U1068[0], 1782 );
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1068[0], 0.00000000 );
                SET_PLAYBACK_SPEED( l_U1068[0], 0.90000000 );
                SET_BLIP_THROTTLE_RANDOMLY( l_U1068[0], 1 );
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
            l_U658 = 1;
        }
        if ((TIMERA() > 12500) AND (NOT (sub_22422( l_U793 ))))
        {
            l_U1159 = 6;
        }
        break;
        case 6:
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_21742( ref l_U590, 0 );
        sub_21639( 0 );
        l_U657 = 0;
        l_U1159 = 0;
        return 1;
        break;
    }
    return 0;
}

int sub_33950()
{
    unknown uVar2;

    CLEAR_AREA_OF_CARS( 151.63360000, -388.32460000, 13.75420000, 100.00000000 );
    CLEAR_AREA_OF_CHARS( 151.63360000, -388.32460000, 13.75420000, 100.00000000 );
    switch (l_U1159)
    {
        case 0:
        REQUEST_CAR_RECORDING( 1785 );
        REQUEST_CAR_RECORDING( 1786 );
        REQUEST_CAR_RECORDING( 1787 );
        l_U1159 = 1;
        break;
        case 1:
        PRINTSTRING( "waiting on loading\n" );
        if (((HAS_CAR_RECORDING_BEEN_LOADED( 1785 )) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1786 ))) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1787 )))
        {
            l_U1159 = 2;
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
        sub_21135();
        SET_CAM_POS( l_U590, 151.18980000, -400.58730000, 13.97530000 );
        SET_CAM_ROT( l_U590, 8.71182300, -0.00000000, -86.07436000 );
        SET_CAM_FOV( l_U590, 45.00000000 );
        if (NOT (IS_CAR_DEAD( l_U1068[0] )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U1068[0], 1785 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1068[0], 800.00000000 );
            SET_PLAYBACK_SPEED( l_U1068[0], 0.90000000 );
            SET_BLIP_THROTTLE_RANDOMLY( l_U1068[0], 1 );
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
        sub_21639( 1 );
        sub_21742( ref l_U590, 1 );
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        l_U1159 = 3;
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
            sub_21742( ref l_U590, 0 );
            sub_21742( ref l_U588, 1 );
            SETTIMERA( 0 );
            l_U1159 = 4;
        }
        break;
        case 4:
        if ((TIMERA() > 6500) AND (NOT (sub_22422( l_U793 ))))
        {
            l_U1159 = 6;
        }
        break;
        case 6:
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_21742( ref l_U590, 0 );
        sub_21639( 0 );
        l_U1159 = 0;
        l_U657 = 0;
        return 1;
        break;
    }
    return 0;
}

int sub_35226()
{
    unknown uVar2;

    CLEAR_AREA_OF_CARS( 425.74800000, 1521.55600000, 15.59500000, 100.00000000 );
    CLEAR_AREA_OF_CHARS( 425.74800000, 1521.55600000, 15.59500000, 100.00000000 );
    switch (l_U1159)
    {
        case 0:
        REQUEST_CAR_RECORDING( 1788 );
        REQUEST_CAR_RECORDING( 1789 );
        REQUEST_CAR_RECORDING( 1790 );
        l_U1159 = 1;
        break;
        case 1:
        PRINTSTRING( "waiting on loading\n" );
        if (((HAS_CAR_RECORDING_BEEN_LOADED( 1788 )) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1789 ))) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1790 )))
        {
            l_U1159 = 2;
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
        sub_21135();
        SET_CAM_POS( l_U585, 422.95080000, 1522.26600000, 15.92950000 );
        SET_CAM_ROT( l_U585, 6.27611400, 0.00000000, -93.67178000 );
        SET_CAM_FOV( l_U585, 45.00000000 );
        if (NOT (IS_CAR_DEAD( l_U1068[0] )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U1068[0], 1788 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1068[0], 0.00000000 );
            SET_PLAYBACK_SPEED( l_U1068[0], 0.86000000 );
            SET_BLIP_THROTTLE_RANDOMLY( l_U1068[0], 1 );
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
        sub_21639( 1 );
        sub_21742( ref l_U585, 1 );
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        l_U1159 = 3;
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
            sub_21742( ref l_U585, 0 );
            sub_21742( ref l_U588, 1 );
            l_U1159 = 4;
        }
        break;
        case 4:
        if ((TIMERA() > 8750) AND (NOT (sub_22422( l_U793 ))))
        {
            SETTIMERA( 0 );
            l_U1159 = 6;
        }
        break;
        case 6:
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_21742( ref l_U590, 0 );
        sub_21639( 0 );
        l_U657 = 0;
        l_U1159 = 0;
        return 1;
        break;
    }
    return 0;
}

int sub_36491()
{
    unknown uVar2;

    CLEAR_AREA_OF_CARS( 821.13190000, 1579.15300000, 16.42320000, 100.00000000 );
    CLEAR_AREA_OF_CHARS( 821.13190000, 1579.15300000, 16.42320000, 100.00000000 );
    switch (l_U1159)
    {
        case 0:
        REQUEST_CAR_RECORDING( 1791 );
        REQUEST_CAR_RECORDING( 1792 );
        REQUEST_CAR_RECORDING( 1793 );
        l_U1159 = 1;
        break;
        case 1:
        PRINTSTRING( "waiting on loading\n" );
        if (((HAS_CAR_RECORDING_BEEN_LOADED( 1791 )) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1792 ))) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1793 )))
        {
            l_U1159 = 2;
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
        sub_21135();
        SET_CAM_POS( l_U585, 829.55430000, 1575.37200000, 16.66040000 );
        SET_CAM_ROT( l_U585, 5.04278700, -0.00000000, 72.23485000 );
        SET_CAM_FOV( l_U585, 35.40002000 );
        if (NOT (IS_CAR_DEAD( l_U1068[0] )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U1068[0], 1791 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1068[0], 0.00000000 );
            SET_PLAYBACK_SPEED( l_U1068[0], 0.75000000 );
            SET_BLIP_THROTTLE_RANDOMLY( l_U1068[0], 1 );
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
        sub_21639( 1 );
        sub_21742( ref l_U585, 1 );
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        l_U1159 = 3;
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
            sub_21742( ref l_U585, 0 );
            sub_21742( ref l_U588, 1 );
            l_U1159 = 4;
        }
        break;
        case 4:
        if ((TIMERA() > 8750) AND (NOT (sub_22422( l_U793 ))))
        {
            SETTIMERA( 0 );
            l_U1159 = 6;
        }
        break;
        case 6:
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_21742( ref l_U590, 0 );
        sub_21639( 0 );
        l_U657 = 0;
        l_U1159 = 0;
        return 1;
        break;
    }
    return 0;
}

int sub_37753()
{
    unknown uVar2;

    CLEAR_AREA_OF_CARS( 1344.76300000, 537.68550000, 28.72320000, 100.00000000 );
    CLEAR_AREA_OF_CHARS( 1344.76300000, 537.68550000, 28.72320000, 100.00000000 );
    switch (l_U1159)
    {
        case 0:
        REQUEST_CAR_RECORDING( 1794 );
        REQUEST_CAR_RECORDING( 1795 );
        REQUEST_CAR_RECORDING( 1796 );
        l_U1159 = 1;
        break;
        case 1:
        PRINTSTRING( "waiting on loading\n" );
        if (((HAS_CAR_RECORDING_BEEN_LOADED( 1794 )) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1795 ))) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1796 )))
        {
            l_U1159 = 2;
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
        sub_21135();
        SET_CAM_POS( l_U585, 1344.66600000, 535.96650000, 35.24185000 );
        SET_CAM_ROT( l_U585, -4.75198200, -0.00000000, 10.78190000 );
        SET_CAM_FOV( l_U585, 35.00000000 );
        SET_CAM_POS( l_U587, 1344.67600000, 536.23040000, 29.77342000 );
        SET_CAM_ROT( l_U587, 3.54675200, 0.00000000, 10.92815000 );
        SET_CAM_FOV( l_U587, 45.00000000 );
        if (NOT (IS_CAR_DEAD( l_U1068[0] )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U1068[0], 1794 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1068[0], 750.00000000 );
            SET_PLAYBACK_SPEED( l_U1068[0], 0.90000000 );
            SET_BLIP_THROTTLE_RANDOMLY( l_U1068[0], 1 );
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
        sub_21639( 1 );
        sub_21742( ref l_U588, 1 );
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        l_U1159 = 3;
        break;
        case 3:
        if ((((sub_21855( l_U1068[0], -951.58010000, 1301.58400000, 23.86526000 )) < 2.90000000) || ((sub_21855( g_U11087[0], -951.58010000, 1301.58400000, 23.86526000 )) < 2.90000000)) || ((sub_21855( g_U11087[1], -951.58010000, 1301.58400000, 23.86526000 )) < 2.90000000))
        {
            if (l_U657 == 0)
            {
                SET_CAM_COMPONENT_SHAKE( l_U590, 0, 3, 1250, 0.00500000, 3.90000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 1, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 3, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 4, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                l_U657 = 1;
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
            sub_21742( ref l_U590, 0 );
            sub_21742( ref l_U588, 1 );
            SETTIMERA( 0 );
            l_U1159 = 4;
        }
        break;
        case 4:
        if ((TIMERA() > 4000) AND (NOT (sub_22422( l_U793 ))))
        {
            l_U1159 = 6;
        }
        break;
        case 6:
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_21742( ref l_U590, 0 );
        sub_21639( 0 );
        l_U657 = 0;
        l_U1159 = 0;
        return 1;
        break;
    }
    return 0;
}

int sub_39391()
{
    unknown uVar2;

    CLEAR_AREA_OF_CARS( 879.64480000, -477.59940000, 13.97320000, 75.00000000 );
    CLEAR_AREA_OF_CHARS( 879.64480000, -477.59940000, 13.97320000, 50.00000000 );
    switch (l_U1159)
    {
        case 0:
        REQUEST_CAR_RECORDING( 1797 );
        REQUEST_CAR_RECORDING( 1798 );
        REQUEST_CAR_RECORDING( 1799 );
        l_U1159 = 1;
        break;
        case 1:
        PRINTSTRING( "waiting on loading\n" );
        if (((HAS_CAR_RECORDING_BEEN_LOADED( 1797 )) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1798 ))) AND (HAS_CAR_RECORDING_BEEN_LOADED( 1799 )))
        {
            l_U1159 = 2;
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
        sub_21135();
        SET_CAM_POS( l_U585, 868.52940000, -474.32400000, 13.90569000 );
        SET_CAM_ROT( l_U585, 14.50532000, 0.00000100, -119.19390000 );
        SET_CAM_FOV( l_U585, 45.00000000 );
        SET_CAM_POS( l_U587, 872.13030000, -469.16390000, 13.90569000 );
        SET_CAM_ROT( l_U587, 14.50532000, -0.00000000, -138.78880000 );
        SET_CAM_FOV( l_U587, 45.00000000 );
        if (NOT (IS_CAR_DEAD( l_U1068[0] )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U1068[0], 1797 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1068[0], 750.00000000 );
            SET_PLAYBACK_SPEED( l_U1068[0], 0.70000000 );
            SET_BLIP_THROTTLE_RANDOMLY( l_U1068[0], 1 );
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
        sub_21639( 1 );
        sub_21742( ref l_U588, 1 );
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        l_U1159 = 3;
        break;
        case 3:
        if ((((sub_21855( l_U1068[0], 868.52940000, -474.32400000, 13.90569000 )) < 4.90000000) || ((sub_21855( g_U11087[0], 868.52940000, -474.32400000, 13.90569000 )) < 3.90000000)) || ((sub_21855( g_U11087[1], 868.52940000, -474.32400000, 13.90569000 )) < 3.90000000))
        {
            if (l_U657 == 0)
            {
                SET_CAM_COMPONENT_SHAKE( l_U590, 0, 3, 1250, 0.00500000, 3.90000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 1, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 3, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                SET_CAM_COMPONENT_SHAKE( l_U590, 4, 3, 1250, 0.00500000, 3.80000000, 0.00000000 );
                l_U657 = 1;
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
            sub_21742( ref l_U590, 0 );
            sub_21742( ref l_U588, 1 );
            SETTIMERA( 0 );
            l_U1159 = 4;
        }
        break;
        case 4:
        if ((TIMERA() > 3000) AND (NOT (sub_22422( l_U793 ))))
        {
            l_U1159 = 6;
        }
        break;
        case 6:
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_21742( ref l_U590, 0 );
        sub_21639( 0 );
        l_U1159 = 0;
        l_U657 = 0;
        return 1;
        break;
    }
    return 0;
}

void sub_41030()
{
    int I;

    if ((NOT (DOES_BLIP_EXIST( l_U1094[0] ))) AND (NOT (IS_CHAR_INJURED( l_U879[0]._fU0 ))))
    {
        ADD_BLIP_FOR_CHAR( l_U879[0]._fU0, ref l_U1094[0] );
        SET_BLIP_AS_FRIENDLY( l_U1094[0], 1 );
        CHANGE_BLIP_SCALE( l_U1094[0], 0.50000000 );
        CHANGE_BLIP_DISPLAY( l_U1094[0], 5 );
    }
    if ((NOT (DOES_BLIP_EXIST( l_U1094[1] ))) AND (NOT (IS_CHAR_INJURED( g_U11081[0] ))))
    {
        ADD_BLIP_FOR_CHAR( g_U11081[0], ref l_U1094[1] );
        SET_BLIP_AS_FRIENDLY( l_U1094[1], 1 );
        CHANGE_BLIP_SCALE( l_U1094[1], 0.50000000 );
        CHANGE_BLIP_DISPLAY( l_U1094[1], 5 );
    }
    if ((NOT (DOES_BLIP_EXIST( l_U1094[2] ))) AND (NOT (IS_CHAR_INJURED( g_U11081[1] ))))
    {
        ADD_BLIP_FOR_CHAR( g_U11081[1], ref l_U1094[2] );
        SET_BLIP_AS_FRIENDLY( l_U1094[2], 1 );
        CHANGE_BLIP_SCALE( l_U1094[2], 0.50000000 );
        CHANGE_BLIP_DISPLAY( l_U1094[2], 5 );
    }
    for ( I = 0; I <= 2; I++ )
    {
        if ((NOT (DOES_BLIP_EXIST( l_U1094[I + 3] ))) AND (NOT (IS_CHAR_INJURED( l_U871[(I * 2) + 1] ))))
        {
            ADD_BLIP_FOR_CHAR( l_U871[(I * 2) + 1], ref l_U1094[I + 3] );
            SET_BLIP_AS_FRIENDLY( l_U1094[I + 3], 1 );
            CHANGE_BLIP_SCALE( l_U1094[I + 3], 0.50000000 );
            CHANGE_BLIP_DISPLAY( l_U1094[I + 3], 5 );
        }
    }
    return;
}

void sub_41547()
{
    int I;

    if (NOT (IS_CHAR_INJURED( l_U879[0]._fU0 )))
    {
        SET_CHAR_PROOFS( l_U879[0]._fU0, 0, 0, 0, 1, 0 );
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
        if (NOT (IS_CHAR_INJURED( l_U871[(I * 2) + 1] )))
        {
            SET_CHAR_PROOFS( l_U871[(I * 2) + 1], 0, 0, 0, 1, 0 );
        }
    }
    return;
}

void sub_41765()
{
    int iVar2;

    l_U734[0] = {-834.74630000, 1358.17000000, 21.93830000};
    l_U734[1] = {-1667.68400000, -17.13430000, 8.56230000};
    l_U734[2] = {-1964.84200000, -266.16430000, 6.61210000};
    l_U734[3] = {-248.60930000, 1755.19300000, 3.49260000};
    l_U734[4] = {-317.12050000, -13.90330000, 13.65220000};
    l_U734[5] = {202.73360000, -825.66760000, 13.13160000};
    l_U734[6] = {1445.21200000, 1709.04400000, 15.68810000};
    l_U734[7] = {2248.07500000, 414.72390000, 4.90020000};
    l_U734[8] = {472.95160000, 1049.82700000, 1.71450000};
    l_U734[9] = {466.06890000, 339.47820000, 7.56640000};
    l_U734[10] = {1001.41700000, -680.72240000, 13.21910000};
    l_U734[11] = {-1810.13200000, 664.27230000, 9.91250000};
    l_U734[12] = {-603.57560000, 549.74970000, 3.67920000};
    l_U734[13] = {409.06210000, 2033.76500000, 5.69900000};
    l_U734[14] = {1209.14000000, -20.07850000, 34.21680000};
    iVar2 = 0;
    while (l_U640 == 0)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 15, ref l_U697 );
        if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U592, l_U734[l_U697]._fU0, l_U734[l_U697]._fU4, l_U734[l_U697]._fU8, 300, 300, 300, 0 ))) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U592, l_U734[l_U697]._fU0, l_U734[l_U697]._fU4, l_U734[l_U697]._fU8, 1500, 1500, 500, 0 )))
        {
            if ((l_U697 != g_U39220) AND (l_U697 != g_U39221))
            {
                l_U640 = 1;
            }
        }
        iVar2++;
        if (iVar2 > 50)
        {
            l_U640 = 1;
        }
        WAIT( 0 );
        sub_42385();
    }
    g_U39221 = g_U39220;
    g_U39220 = l_U697;
    return;
}

void sub_42385()
{
    if (IS_CHAR_ON_ANY_BIKE( l_U592 ))
    {
        sub_42415( ref l_U879 );
    }
    else
    {
        sub_2091();
    }
    return;
}

void sub_42415(unknown uParam0)
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
            iVar9 = sub_42642( uParam0 );
        }
        else if (iVar12 <= 65456)
        {
            iVar9 = sub_43234( uParam0 );
        };;;
    }
    if (IS_CHAR_IN_ANY_CAR( sub_5992() ))
    {
        for ( I = 0; I < (uParam0^); I++ )
        {
            if (sub_42676( uParam0, I ))
            {
                if (iVar9 < 0)
                {
                    fVar11 = sub_43452( (uParam0^)[I]._fU0, sub_5992(), 1 );
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
            sub_43572( ref (uParam0^)[l_U20] );
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
    if ((((((((IS_CONTROL_PRESSED( 0, 51 )) AND (NOT (IS_CONTROL_PRESSED( 0, 38 )))) AND (NOT (IS_CONTROL_PRESSED( 0, 39 )))) AND (IS_CHAR_ON_ANY_BIKE( sub_5992() ))) AND (NOT sub_44751())) AND (NOT (iVar14 == 4))) AND (iVar8 >= 0)) AND (NOT bVar4))
    {
        sub_44814( uParam0, iVar8 );
    }
    else
    {
        sub_2245();
        if (bVar6)
        {
            sub_44814( uParam0, iVar8 );
        }
    }
    return;
}

void sub_42642(unknown uParam0)
{
    int I;
    int Result;

    Result = -1;
    for ( I = l_U20; I <= ((uParam0^) - 1); I++ )
    {
        if (((sub_42676( uParam0, I )) AND (I != l_U20)) AND (Result < 0))
        {
            Result = I;
        }
    }
    if (Result == -1)
    {
        for ( I = 0; I <= l_U20; I++ )
        {
            if (((sub_42676( uParam0, I )) AND (I != l_U20)) AND (Result < 0))
            {
                Result = I;
            }
        }
    }
    return Result;
}

int sub_42676(unknown uParam0, int iParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    float fVar10;
    unknown uVar11;

    if (((NOT (IS_CHAR_INJURED( (uParam0^)[iParam1]._fU0 ))) AND (IS_VEH_DRIVEABLE( (uParam0^)[iParam1]._fU4 ))) AND (NOT (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_5992() ))))
    {
        if (((NOT (IS_CHAR_IN_CAR( sub_5992(), (uParam0^)[iParam1]._fU4 ))) AND (IS_CHAR_IN_CAR( (uParam0^)[iParam1]._fU0, (uParam0^)[iParam1]._fU4 ))) AND (IS_CHAR_ON_ANY_BIKE( (uParam0^)[iParam1]._fU0 )))
        {
            uVar4 = {sub_42818( (uParam0^)[iParam1]._fU0, 1 )};
            uVar7 = {sub_42818( sub_5992(), 1 )};
            fVar10 = VDIST( uVar4, uVar7 );
            if (fVar10 < 4.50000000)
            {
                return 0;
            }
            if (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( (uParam0^)[iParam1]._fU0, sub_5992() ))
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

void sub_42818(unknown uParam0, boolean bParam1)
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

void sub_43234(unknown uParam0)
{
    int I;
    int Result;

    Result = -1;
    for ( I = l_U20; I >= 0; I += -1 )
    {
        if (((sub_42676( uParam0, I )) AND (I != l_U20)) AND (Result < 0))
        {
            Result = I;
        }
    }
    if (Result == -1)
    {
        for ( I = (uParam0^) - 1; I >= l_U20; I += -1 )
        {
            if (((sub_42676( uParam0, I )) AND (I != l_U20)) AND (Result < 0))
            {
                Result = I;
            }
        }
    }
    return Result;
}

void sub_43452(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return VDIST( sub_42818( uParam0, uParam2 ), sub_42818( uParam1, uParam2 ) );
}

void sub_43572(int iParam0)
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

    vVar3 = {sub_42818( sub_5992(), 1 )};
    vVar6 = {sub_42818( iParam0->_fU0, 1 )};
    fVar9 = VDIST( vVar3, vVar6 );
    GET_GAME_TIMER( ref iVar10 );
    if ((ABSF( fVar9 - l_U22 )) < 3.00000000)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 500, ref l_U25 );
        l_U25 += iVar10;
    }
    if (iVar10 > (l_U25 + 1000))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_5992() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5992(), ref uVar12 );
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
    SET_CAM_FOV( l_U19, sub_44050( l_U23 - fVar19 ) );
    SET_CAM_MOTION_BLUR( l_U19, fVar19 / 185.00000000 );
    vVar20 = {vVar3 - vVar6};
    vVar20 = {vVar20 * (l_U23 / (VMAG( vVar20 )))};
    vVar20 = {vVar20 + vVar6};
    SET_CAM_DOF_FOCUSPOINT( l_U19, vVar20.x, vVar20.y, vVar20.z, 1.50000000 );
    GET_CHAR_SPEED( sub_5992(), ref uVar23 );
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

void sub_44050(float fParam0)
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

int sub_44751()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_44814(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    unknown uVar7;

    GET_KEY_FOR_CHAR_IN_ROOM( (uParam0^)[uParam1]._fU0, ref iVar4 );
    if (NOT (DOES_CAM_EXIST( l_U19 )))
    {
        GET_KEY_FOR_CHAR_IN_ROOM( sub_5992(), ref iVar6 );
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
            POINT_CAM_AT_PED( l_U19, sub_5992() );
            SET_CAM_ACTIVE( l_U19, 1 );
            SET_CAM_PROPAGATE( l_U19, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U33 = 0;
            l_U21 = 1;
            l_U20 = uParam1;
            SET_GAME_CAMERA_CONTROLS_ACTIVE( 0 );
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            l_U22 = sub_43452( (uParam0^)[l_U20]._fU0, sub_5992(), 1 );
            l_U23 = l_U22;
            l_U24 = 0.00000000;
            l_U26 = {0, 0, 1.35000000};
            if (l_U22 < 20.00000000)
            {
                l_U26._fU8 = 0.60000000 + ((0.75000000 * l_U22) / 20.00000000);
            }
            l_U29 = {0, 0, 0};
            GET_GAME_TIMER( ref l_U25 );
            sub_43572( ref (uParam0^)[l_U20] );
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

void sub_45328()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref l_U664 );
    if (g_U39123 == 0)
    {
        l_U664 = 0;
    }
    if (l_U664 <= 20)
    {
        l_U1120[0] = 977480632;
        l_U1120[1] = -1159156463;
        l_U1120[2] = 479817841;
        l_U1120[3] = 226415164;
        l_U1120[4] = 15972646;
        l_U1120[5] = -2107556865;
        l_U667 = 0;
        l_U1128[0] = -571009320;
        l_U1128[1] = 2006142190;
        l_U1128[2] = -1745203402;
        l_U673[0] = 112;
        l_U678[0] = 74;
        l_U683[0] = 27;
        l_U688[0] = 0;
        l_U625[0] = 0;
        l_U628[0] = 0;
        l_U631[0] = 0;
        l_U634[0] = 0;
        l_U673[1] = 132;
        l_U678[1] = 0;
        l_U683[1] = 131;
        l_U688[1] = 0;
        l_U625[1] = 0;
        l_U628[1] = 0;
        l_U631[1] = 0;
        l_U634[1] = 0;
        l_U673[2] = 0;
        l_U678[2] = 0;
        l_U683[2] = 0;
        l_U688[2] = 0;
    }
    else if ((l_U664 > 20) AND (l_U664 <= 40))
    {
        l_U1120[0] = -1500397869;
        l_U1120[1] = -881358690;
        l_U1120[2] = 1609755055;
        l_U1120[3] = -330497431;
        l_U1120[4] = 1117105909;
        l_U1120[5] = -1500397869;
        l_U667 = 1;
        l_U1128[0] = 486987393;
        l_U1128[1] = 2006667053;
        l_U1128[2] = 1063483177;
        l_U673[0] = 0;
        l_U678[0] = 59;
        l_U683[0] = 113;
        l_U688[0] = 90;
        l_U625[0] = 0;
        l_U628[0] = 1;
        l_U631[0] = 0;
        l_U634[0] = 0;
        l_U673[1] = 0;
        l_U678[1] = 59;
        l_U683[1] = 113;
        l_U688[1] = 127;
        l_U625[1] = 0;
        l_U628[1] = 0;
        l_U631[1] = 0;
        l_U634[1] = 0;
        l_U673[2] = 0;
        l_U678[2] = 59;
        l_U683[2] = 113;
        l_U688[2] = 90;
    }
    else if ((l_U664 > 40) AND (l_U664 <= 60))
    {
        l_U1120[0] = -503930010;
        l_U1120[1] = -235584669;
        l_U1120[2] = 207714363;
        l_U1120[3] = 514268366;
        l_U1120[4] = -503930010;
        l_U1120[5] = -235584669;
        l_U667 = 2;
        l_U1128[0] = -341892653;
        l_U1128[1] = 2016857647;
        l_U1128[2] = 904750859;
        l_U673[0] = 33;
        l_U678[0] = 30;
        l_U683[0] = 37;
        l_U688[0] = 0;
        l_U625[0] = 1;
        l_U628[0] = 1;
        l_U631[0] = 1;
        l_U634[0] = 1;
        l_U673[1] = 32;
        l_U678[1] = 0;
        l_U683[1] = 30;
        l_U688[1] = 1;
        l_U625[1] = 1;
        l_U628[1] = 1;
        l_U631[1] = 1;
        l_U634[1] = 1;
        l_U673[2] = 32;
        l_U678[2] = 0;
        l_U683[2] = 30;
        l_U688[2] = 1;
    }
    else if ((l_U664 > 60) AND (l_U664 <= 80))
    {
        l_U1120[0] = -2088164056;
        l_U1120[1] = 1976502708;
        l_U1120[2] = 1543404628;
        l_U1120[3] = 1865532596;
        l_U1120[4] = 431692232;
        l_U1120[5] = -1836006237;
        l_U667 = 3;
        l_U1128[0] = 83136452;
        l_U1128[1] = -322343873;
        l_U1128[2] = -1961627517;
        l_U673[0] = 0;
        l_U678[0] = 0;
        l_U683[0] = 3;
        l_U688[0] = 0;
        l_U625[0] = 1;
        l_U628[0] = 1;
        l_U631[0] = 1;
        l_U634[0] = 1;
        l_U673[1] = 0;
        l_U678[1] = 1;
        l_U683[1] = 1;
        l_U688[1] = 0;
        l_U625[1] = 1;
        l_U628[1] = 1;
        l_U631[1] = 1;
        l_U634[1] = 0;
        l_U673[2] = 0;
        l_U678[2] = 0;
        l_U683[2] = 0;
        l_U688[2] = 0;
    }
    else if (l_U664 > 80)
    {
        l_U1120[0] = -302362397;
        l_U1120[1] = -1616890832;
        l_U1120[2] = 64730935;
        l_U1120[3] = 510389335;
        l_U1120[4] = -302362397;
        l_U1120[5] = -1616890832;
        l_U667 = 4;
        l_U1128[0] = 1349725314;
        l_U1128[1] = 1376298265;
        l_U1128[2] = -2137348917;
        l_U673[0] = 0;
        l_U678[0] = 1;
        l_U683[0] = 50;
        l_U688[0] = 0;
        l_U625[0] = 1;
        l_U628[0] = 1;
        l_U631[0] = 1;
        l_U634[0] = 0;
        l_U673[1] = 0;
        l_U678[1] = 0;
        l_U683[1] = 37;
        l_U688[1] = 0;
        l_U625[1] = 1;
        l_U628[1] = 1;
        l_U631[1] = 1;
        l_U634[1] = 0;
        l_U673[2] = 0;
        l_U678[2] = 0;
        l_U683[2] = 0;
        l_U688[2] = 0;
    }
    else
    {
        l_U1120[0] = 977480632;
        l_U1120[1] = -1159156463;
        l_U1120[2] = 479817841;
        l_U1120[3] = 226415164;
        l_U1120[4] = 15972646;
        l_U1120[5] = -2107556865;
        l_U667 = 0;
        l_U1128[0] = -571009320;
        l_U1128[1] = 2006142190;
        l_U1128[2] = -1745203402;
        l_U673[0] = 34;
        l_U678[0] = 34;
        l_U683[0] = 32;
        l_U688[0] = 35;
        l_U625[0] = 0;
        l_U628[0] = 0;
        l_U631[0] = 0;
        l_U634[0] = 0;
        l_U673[1] = 132;
        l_U678[1] = 0;
        l_U683[1] = 131;
        l_U688[1] = 0;
        l_U625[1] = 0;
        l_U628[1] = 0;
        l_U631[1] = 0;
        l_U634[1] = 0;
        l_U673[2] = 0;
        l_U678[2] = 0;
        l_U683[2] = 0;
        l_U688[2] = 0;
    };;;;;
    if ((g_U39219 >= 10) AND (g_U39219 < 20))
    {
        iVar2 = 4;
    }
    else if ((g_U39219 >= 20) AND (g_U39219 < 30))
    {
        iVar2 = 6;
    }
    else if (g_U39219 >= 30)
    {
        iVar2 = 8;
    }
    else
    {
        iVar2 = 2;
    };;;
    GENERATE_RANDOM_INT_IN_RANGE( 9 + (iVar2 / 2), 13 + iVar2, ref l_U664 );
    l_U665 = l_U664;
    if (l_U667 == 0)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 4, 6, ref l_U664 );
    }
    else
    {
        GENERATE_RANDOM_INT_IN_RANGE( 3, 6, ref l_U664 );
    }
    l_U666 = l_U664;
    return;
}

void sub_47548()
{
    sub_47557();
    sub_47702( ref g_U10959._fU32 );
    g_U10959._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_47776();
    return;
}

void sub_47557()
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

void sub_47702(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_47776()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_47814( 1, g_U572[I] )) == 0)
        {
            sub_48065( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_48243())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U94._fU404 = 1000;
    }
    g_U94._fU404 = 1000;
    return;
}

int sub_47814(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_48065(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_48150( g_U572 - 1 );
    return;
}

void sub_48150(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_48243()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_47814( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_48627()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_48709()
{
    int iVar2;

    if ((g_U15728[8] == 0) AND (g_U12306[1]._fU108 == 0))
    {
        GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref iVar2 );
        if ((iVar2 > 25) AND (iVar2 <= 75))
        {
            l_U700 = 0;
        }
        else if (iVar2 <= 25)
        {
            l_U700 = 1;
        }
        else
        {
            l_U700 = 2;
        }
    }
    else
    {
        GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref iVar2 );
        if (iVar2 <= 50)
        {
            l_U700 = 1;
        }
        else
        {
            l_U700 = 2;
        }
    }
    return;
}

void sub_48926()
{
    if (l_U667 == 0)
    {
        StrCopy( ref l_U603[0], "E1FCJ3_BNLG", 16 );
    }
    else if (l_U667 == 1)
    {
        StrCopy( ref l_U603[0], "E1FCJ3_BNLJ", 16 );
    }
    else if (l_U667 == 2)
    {
        StrCopy( ref l_U603[0], "E1FCJ3_BNLB", 16 );
    }
    else if (l_U667 == 3)
    {
        StrCopy( ref l_U603[0], "E1FCJ3_BNLR", 16 );
    }
    else if (l_U667 == 4)
    {
        StrCopy( ref l_U603[0], "E1FCJ3_BNLI", 16 );
    };;;;;
    return;
}

void sub_49155()
{
    if (l_U667 == 0)
    {
        StrCopy( ref l_U603[0], "E1FCT3_BNLA", 16 );
    }
    else if (l_U667 == 1)
    {
        StrCopy( ref l_U603[0], "E1FCT3_BNLJ", 16 );
    }
    else if (l_U667 == 2)
    {
        StrCopy( ref l_U603[0], "E1FCT3_BNLB", 16 );
    }
    else if (l_U667 == 3)
    {
        StrCopy( ref l_U603[0], "E1FCT3_BNLR", 16 );
    }
    else if (l_U667 == 4)
    {
        StrCopy( ref l_U603[0], "E1FCT3_BNLI", 16 );
    };;;;;
    return;
}

void sub_49372()
{
    if (l_U667 == 0)
    {
        StrCopy( ref l_U603[0], "E1FCC3_BNLA", 16 );
    }
    else if (l_U667 == 1)
    {
        StrCopy( ref l_U603[0], "E1FCC3_BNLJ", 16 );
    }
    else if (l_U667 == 2)
    {
        StrCopy( ref l_U603[0], "E1FCC3_BNLB", 16 );
    }
    else if (l_U667 == 3)
    {
        StrCopy( ref l_U603[0], "E1FCC3_BNLR", 16 );
    }
    else if (l_U667 == 4)
    {
        StrCopy( ref l_U603[0], "E1FCC3_BNLI", 16 );
    };;;;;
    return;
}

void sub_49601()
{
    if (l_U612 == 0)
    {
        StrCopy( ref l_U603[1], "E1FCJ3_GBRF", 16 );
    }
    else if (l_U612 == 1)
    {
        StrCopy( ref l_U603[1], "E1FCJ3_GBOF", 16 );
    }
    else if (l_U612 == 2)
    {
        StrCopy( ref l_U603[1], "E1FCJ3_GAGF", 16 );
    }
    else if (l_U612 == 3)
    {
        StrCopy( ref l_U603[1], "E1FCJ3_GALF", 16 );
    };;;;
    return;
}

void sub_49790()
{
    if (l_U612 == 0)
    {
        StrCopy( ref l_U603[1], "E1FCT3_GBRF", 16 );
    }
    else if (l_U612 == 1)
    {
        StrCopy( ref l_U603[1], "E1FCT3_GBOF", 16 );
    }
    else if (l_U612 == 2)
    {
        StrCopy( ref l_U603[1], "E1FCT3_GAGF", 16 );
    }
    else if (l_U612 == 3)
    {
        StrCopy( ref l_U603[1], "E1FCT3_GALF", 16 );
    };;;;
    return;
}

void sub_49967()
{
    if (l_U612 == 0)
    {
        StrCopy( ref l_U603[1], "E1FCC3_GBRF", 16 );
    }
    else if (l_U612 == 1)
    {
        StrCopy( ref l_U603[1], "E1FCC3_GBOF", 16 );
    }
    else if (l_U612 == 2)
    {
        StrCopy( ref l_U603[1], "E1FCC3_GALF", 16 );
    }
    else if (l_U612 == 3)
    {
        StrCopy( ref l_U603[1], "E1FCC3_GAF", 16 );
    };;;;
    return;
}

void sub_50148(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_50171( uParam0, ref l_U34._fU0, uParam1, uParam2, uParam3 );
}

void sub_50171(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    return sub_22901( uParam0, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

void sub_50384()
{
    int I;
    int J;

    if (l_U620 == 0)
    {
        if (NOT (DOES_BLIP_EXIST( l_U1102 )))
        {
            ADD_BLIP_FOR_COORD( l_U734[l_U697]._fU0, l_U734[l_U697]._fU4, l_U734[l_U697]._fU8, ref l_U1102 );
            SET_BLIP_AS_FRIENDLY( l_U1102, 0 );
            SET_ROUTE( l_U1102, 1 );
        }
        I = 0;
        for ( I = 0; I <= 5; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U871[I] )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U871[I], 0 );
            }
        }
        l_U620 = 1;
    }
    if ((((NOT (sub_22422( l_U793 ))) AND (sub_50585())) AND (l_U661 == 0)) AND (NOT (IS_CHAR_INJURED( sub_5992() ))))
    {
        sub_22824( "E1FCJ3_LGO", ref l_U793, 7, 1 );
        if (NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 )))
        {
            sub_23946( l_U592, sub_50950( 1 ), g_U11028[0]._fU0, 39 );
        }
        l_U661 = 1;
    }
    if ((NOT (sub_22422( l_U793 ))) AND (l_U653 == 0))
    {
        PRINT_NOW( "GW_COMMAND_02", 7500, 1 );
        if (NOT (IS_CHAR_INJURED( l_U871[1] )))
        {
            SAY_AMBIENT_SPEECH( l_U871[1], "GENERIC_HI", 1, 0, 2 );
        }
        l_U653 = 1;
    }
    if ((l_U621 == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U592, l_U734[l_U697]._fU0, l_U734[l_U697]._fU4, l_U734[l_U697]._fU8, 400.00000000, 400.00000000, 200.00000000, 0 )))
    {
        PRINTSTRING( "\n\n ---> LOAD STUFF <--- \n\n" );
        sub_51538();
        sub_51790();
        sub_51994();
        sub_57071();
        sub_71070();
        J = 0;
        for ( J = 0; J <= 19; J++ )
        {
            if (NOT (IS_CHAR_DEAD( l_U850[J] )))
            {
                if (DOES_BLIP_EXIST( l_U1102 ))
                {
                    REMOVE_BLIP( l_U1102 );
                    SET_ROUTE( l_U1102, 0 );
                }
                if (NOT (DOES_BLIP_EXIST( l_U1073[J] )))
                {
                    ADD_BLIP_FOR_CHAR( l_U850[J], ref l_U1073[J] );
                    SET_BLIP_AS_FRIENDLY( l_U1073[J], 0 );
                    if (J == 0)
                    {
                        SET_ROUTE( l_U1073[J], 1 );
                    }
                }
            }
        }
        SET_WANTED_MULTIPLIER( 0.05000000 );
        sub_73029();
        l_U621 = 1;
        l_U663++;
    }
    sub_73149();
    sub_73503();
    sub_74415( ref l_U879 );
    sub_94006( ref l_U879 );
    sub_42385();
    sub_96104();
    if ((((NOT (sub_22422( l_U793 ))) AND (l_U660 == 0)) AND (g_U39123 == 0)) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED()))
    {
        PRINT_HELP( "Leader_4" );
        l_U660 = 1;
    }
    return;
}

int sub_50585()
{
    int I;

    if (NOT (IS_CHAR_DEAD( l_U879[0]._fU0 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U879[0]._fU0, l_U592, 25, 25, 25, 0 ))
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
        if (NOT (IS_CHAR_DEAD( l_U871[(I * 2) + 1] )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U871[(I * 2) + 1], l_U592, 25, 25, 25, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_50950(boolean bParam0)
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

void sub_51538()
{
    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U670 );
    sub_12018( l_U1128[l_U670] );
    GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref l_U664 );
    if (l_U664 < 45)
    {
        l_U671 = 0;
    }
    else if (l_U664 > 55)
    {
        l_U671 = 1;
    }
    else
    {
        l_U671 = 2;
    }
    sub_12018( l_U1128[l_U671] );
    SUPPRESS_CAR_MODEL( l_U1128[l_U670] );
    SUPPRESS_CAR_MODEL( l_U1128[l_U671] );
    while (NOT sub_8496())
    {
        WAIT( 0 );
        PRINTSTRING( "\n -----> Waiting for models to load...\n\n" );
        sub_42385();
    }
    return;
}

void sub_51790()
{
    GENERATE_RANDOM_INT_IN_RANGE( 0, 6, ref l_U668 );
    sub_12018( l_U1120[l_U668] );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 6, ref l_U669 );
    sub_12018( l_U1120[l_U669] );
    SUPPRESS_PED_MODEL( l_U1120[l_U668] );
    SUPPRESS_PED_MODEL( l_U1120[l_U669] );
    sub_12018( l_U1118 );
    while (NOT sub_8496())
    {
        WAIT( 0 );
        PRINTSTRING( "\n -----> Waiting for models to load...\n\n" );
        sub_42385();
    }
    return;
}

void sub_51994()
{
    int I;
    int iVar3;

    I = 0;
    for ( I = 0; I <= (l_U666 - 1); I++ )
    {
        sub_52024();
        if (l_U641 == 1)
        {
            PRINTSTRING( "\n\n ---> CREATE CAR <--- \n\n" );
            if (l_U671 == 2)
            {
                if (I == 1)
                {
                    CREATE_CAR( l_U1128[l_U671], l_U716._fU0, l_U716._fU4, l_U716._fU8, ref l_U1062[I], 1 );
                    if (l_U1128[l_U671] != 904750859)
                    {
                        CHANGE_CAR_COLOUR( l_U1062[I], l_U673[l_U671], l_U678[l_U671] );
                        SET_EXTRA_CAR_COLOURS( l_U1062[I], l_U683[l_U671], l_U688[l_U671] );
                    }
                    if (l_U671 < 2)
                    {
                        TURN_OFF_VEHICLE_EXTRA( l_U1062[I], 5, l_U625[l_U671] );
                        TURN_OFF_VEHICLE_EXTRA( l_U1062[I], 6, l_U628[l_U671] );
                        TURN_OFF_VEHICLE_EXTRA( l_U1062[I], 7, l_U631[l_U671] );
                        TURN_OFF_VEHICLE_EXTRA( l_U1062[I], 8, l_U634[l_U671] );
                    }
                }
                else if (I > 0)
                {
                    CREATE_CAR( l_U1128[l_U670], l_U716._fU0, l_U716._fU4, l_U716._fU8, ref l_U1062[I], 1 );
                }
                else
                {
                    CREATE_CAR( l_U1128[l_U670], l_U710._fU0, l_U710._fU4, l_U710._fU8, ref l_U1062[I], 1 );
                }
                if (l_U1128[l_U670] != 904750859)
                {
                    CHANGE_CAR_COLOUR( l_U1062[I], l_U673[l_U670], l_U678[l_U670] );
                    SET_EXTRA_CAR_COLOURS( l_U1062[I], l_U683[l_U670], l_U688[l_U670] );
                }
                if (l_U670 < 2)
                {
                    TURN_OFF_VEHICLE_EXTRA( l_U1062[I], 5, l_U625[l_U670] );
                    TURN_OFF_VEHICLE_EXTRA( l_U1062[I], 6, l_U628[l_U670] );
                    TURN_OFF_VEHICLE_EXTRA( l_U1062[I], 7, l_U631[l_U670] );
                    TURN_OFF_VEHICLE_EXTRA( l_U1062[I], 8, l_U634[l_U670] );
                }
            }
            else
            {
                GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref iVar3 );
                if (iVar3 < 51)
                {
                    if (I > 0)
                    {
                        CREATE_CAR( l_U1128[l_U671], l_U716._fU0, l_U716._fU4, l_U716._fU8, ref l_U1062[I], 1 );
                    }
                    else
                    {
                        CREATE_CAR( l_U1128[l_U671], l_U710._fU0, l_U710._fU4, l_U710._fU8, ref l_U1062[I], 1 );
                    }
                    if (l_U1128[l_U671] != 904750859)
                    {
                        CHANGE_CAR_COLOUR( l_U1062[I], l_U673[l_U670], l_U678[l_U670] );
                        SET_EXTRA_CAR_COLOURS( l_U1062[I], l_U683[l_U670], l_U688[l_U670] );
                    }
                    if (l_U670 < 2)
                    {
                        TURN_OFF_VEHICLE_EXTRA( l_U1062[I], 5, l_U625[l_U670] );
                        TURN_OFF_VEHICLE_EXTRA( l_U1062[I], 6, l_U628[l_U670] );
                        TURN_OFF_VEHICLE_EXTRA( l_U1062[I], 7, l_U631[l_U670] );
                        TURN_OFF_VEHICLE_EXTRA( l_U1062[I], 8, l_U634[l_U670] );
                    }
                }
                else if (I > 0)
                {
                    CREATE_CAR( l_U1128[l_U670], l_U716._fU0, l_U716._fU4, l_U716._fU8, ref l_U1062[I], 1 );
                }
                else
                {
                    CREATE_CAR( l_U1128[l_U670], l_U710._fU0, l_U710._fU4, l_U710._fU8, ref l_U1062[I], 1 );
                }
                if (l_U1128[l_U670] != 904750859)
                {
                    CHANGE_CAR_COLOUR( l_U1062[I], l_U673[l_U671], l_U678[l_U671] );
                    SET_EXTRA_CAR_COLOURS( l_U1062[I], l_U683[l_U671], l_U688[l_U671] );
                }
                if (l_U671 < 2)
                {
                    TURN_OFF_VEHICLE_EXTRA( l_U1062[I], 5, l_U625[l_U671] );
                    TURN_OFF_VEHICLE_EXTRA( l_U1062[I], 6, l_U628[l_U671] );
                    TURN_OFF_VEHICLE_EXTRA( l_U1062[I], 7, l_U631[l_U671] );
                    TURN_OFF_VEHICLE_EXTRA( l_U1062[I], 8, l_U634[l_U671] );
                }
            }
            SET_CAR_HEADING( l_U1062[I], l_U786 );
            SET_CAR_ON_GROUND_PROPERLY( l_U1062[I] );
        }
    }
    return;
}

void sub_52024()
{
    unknown uVar2;
    int iVar3;
    int iVar4;
    unknown[15] uVar5;
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
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    unknown uVar66;
    unknown uVar67;
    unknown uVar68;
    unknown uVar69;
    unknown uVar70;
    unknown uVar71;
    unknown uVar72;
    unknown uVar73;
    unknown uVar74;
    unknown uVar75;
    unknown uVar76;
    unknown uVar77;
    unknown uVar78;
    unknown uVar79;
    unknown uVar80;
    unknown uVar81;
    unknown uVar82;
    unknown uVar83;
    unknown uVar84;
    unknown uVar85;
    unknown uVar86;
    unknown uVar87;
    unknown uVar88;
    unknown uVar89;
    unknown uVar90;
    unknown uVar91;
    unknown uVar92;
    unknown uVar93;
    unknown uVar94;
    unknown uVar95;
    unknown uVar96;
    unknown uVar97;
    unknown uVar98;
    unknown uVar99;
    unknown uVar100;
    unknown uVar101;
    unknown uVar102;
    unknown uVar103;
    unknown uVar104;
    unknown uVar105;
    unknown uVar106;
    unknown uVar107;
    unknown uVar108;
    unknown uVar109;
    unknown uVar110;
    unknown uVar111;
    unknown uVar112;
    unknown uVar113;
    unknown uVar114;
    unknown uVar115;
    unknown uVar116;
    unknown uVar117;
    unknown uVar118;
    unknown uVar119;
    unknown uVar120;
    unknown uVar121;
    unknown uVar122;
    unknown uVar123;
    unknown uVar124;
    unknown uVar125;
    unknown uVar126;
    unknown uVar127;
    unknown uVar128;
    unknown uVar129;
    unknown uVar130;
    unknown uVar131;
    unknown uVar132;
    unknown uVar133;
    unknown uVar134;
    unknown uVar135;
    unknown uVar136;
    unknown uVar137;
    unknown uVar138;
    unknown uVar139;
    unknown uVar140;
    unknown uVar141;
    unknown uVar142;
    unknown uVar143;
    unknown uVar144;
    unknown uVar145;
    unknown uVar146;
    unknown uVar147;
    unknown uVar148;
    unknown uVar149;
    unknown uVar150;
    unknown uVar151;
    unknown uVar152;
    unknown uVar153;
    unknown uVar154;
    unknown uVar155;
    unknown uVar156;
    unknown uVar157;
    unknown uVar158;
    unknown uVar159;
    unknown uVar160;
    unknown uVar161;
    unknown uVar162;
    unknown uVar163;
    unknown uVar164;
    unknown uVar165;
    unknown uVar166;
    unknown uVar167;
    unknown uVar168;
    unknown uVar169;
    unknown uVar170;
    unknown uVar171;
    unknown uVar172;
    unknown uVar173;
    unknown uVar174;
    unknown uVar175;
    unknown uVar176;
    unknown uVar177;
    unknown uVar178;
    unknown uVar179;
    unknown uVar180;
    unknown uVar181;
    unknown uVar182;
    unknown uVar183;
    unknown uVar184;
    unknown uVar185;
    unknown uVar186;
    unknown uVar187;
    unknown uVar188;
    unknown uVar189;
    unknown uVar190;
    unknown uVar191;
    unknown uVar192;
    unknown uVar193;
    unknown uVar194;
    unknown uVar195;
    unknown uVar196;
    unknown uVar197;
    unknown uVar198;
    unknown uVar199;
    unknown uVar200;
    unknown uVar201;
    unknown uVar202;
    unknown uVar203;
    unknown uVar204;
    unknown uVar205;
    unknown uVar206;
    unknown uVar207;
    unknown uVar208;
    unknown uVar209;
    unknown uVar210;
    unknown uVar211;
    unknown uVar212;
    unknown uVar213;
    unknown uVar214;
    unknown uVar215;
    unknown uVar216;
    unknown uVar217;
    unknown uVar218;
    unknown uVar219;
    unknown uVar220;
    unknown uVar221;
    unknown uVar222;
    unknown uVar223;
    unknown uVar224;
    unknown uVar225;
    unknown uVar226;
    unknown uVar227;
    unknown uVar228;
    unknown uVar229;
    unknown uVar230;
    unknown uVar231;
    unknown uVar232;
    unknown uVar233;
    unknown uVar234;
    unknown uVar235;
    unknown uVar236;
    unknown uVar237;
    unknown uVar238;
    unknown uVar239;
    unknown uVar240;
    unknown uVar241;
    unknown uVar242;
    unknown uVar243;
    unknown uVar244;
    unknown uVar245;
    unknown[15] uVar246;
    unknown uVar262;
    unknown uVar263;
    unknown uVar264;
    unknown uVar265;
    unknown uVar266;
    unknown uVar267;
    unknown uVar268;
    unknown uVar269;
    unknown uVar270;
    unknown uVar271;
    unknown uVar272;
    unknown uVar273;
    unknown uVar274;
    unknown uVar275;
    unknown uVar276;
    unknown uVar277;
    unknown uVar278;
    unknown uVar279;
    unknown uVar280;
    unknown uVar281;
    unknown uVar282;
    unknown uVar283;
    unknown uVar284;
    unknown uVar285;
    unknown uVar286;
    unknown uVar287;
    unknown uVar288;
    unknown uVar289;
    unknown uVar290;
    unknown uVar291;
    unknown uVar292;
    unknown uVar293;
    unknown uVar294;
    unknown uVar295;
    unknown uVar296;
    unknown uVar297;
    unknown uVar298;
    unknown uVar299;
    unknown uVar300;
    unknown uVar301;
    unknown uVar302;
    unknown uVar303;
    unknown uVar304;
    unknown uVar305;
    unknown uVar306;
    unknown uVar307;
    unknown uVar308;
    unknown uVar309;
    unknown uVar310;
    unknown uVar311;
    unknown uVar312;
    unknown uVar313;
    unknown uVar314;
    unknown uVar315;
    unknown uVar316;
    unknown uVar317;
    unknown uVar318;
    unknown uVar319;
    unknown uVar320;
    unknown uVar321;
    unknown uVar322;
    unknown uVar323;
    unknown uVar324;
    unknown uVar325;
    unknown uVar326;
    unknown uVar327;
    unknown uVar328;
    unknown uVar329;
    unknown uVar330;
    unknown uVar331;
    unknown uVar332;
    unknown uVar333;
    unknown uVar334;
    unknown uVar335;
    unknown uVar336;
    int I;
    unknown uVar338;
    unknown uVar339;
    unknown uVar340;

    iVar3 = 0;
    iVar4 = 0;
    if (l_U645 == 0)
    {
        (array(ref array(ref array(ref array(ref array(ref array(ref array(ref array(ref array(ref array(ref array(ref array(ref array(ref array(ref array(ref array(ref uVar5, 15)->_fU4, 5)->_fU64, 5)->_fU64, 5)->_fU64, 5)->_fU64, 5)->_fU64, 5)->_fU64, 5)->_fU64, 5)->_fU64, 5)->_fU64, 5)->_fU64, 5)->_fU64, 5)->_fU64, 5)->_fU64, 5)->_fU64, 5)) + 64;
        array(ref uVar5, 15);
        (array(ref array(ref array(ref array(ref array(ref array(ref array(ref array(ref array(ref array(ref array(ref array(ref array(ref array(ref array(ref array(ref uVar246, 15)->_fU4, 5)->_fU24, 5)->_fU24, 5)->_fU24, 5)->_fU24, 5)->_fU24, 5)->_fU24, 5)->_fU24, 5)->_fU24, 5)->_fU24, 5)->_fU24, 5)->_fU24, 5)->_fU24, 5)->_fU24, 5)->_fU24, 5)) + 24;
        array(ref uVar246, 15);
        uVar5[0][0] = {-854.41010000, 1366.97300000, 22.14070000};
        uVar246[0][0] = 298.79950000;
        uVar5[0][1] = {-850.87990000, 1361.31600000, 22.14070000};
        uVar246[0][1] = 249.74370000;
        uVar5[0][2] = {-805.46350000, 1306.52500000, 17.54830000};
        uVar246[0][2] = 358.44380000;
        uVar5[0][3] = {-853.91810000, 1381.88600000, 22.14100000};
        uVar246[0][3] = 148.14650000;
        uVar5[0][4] = {-814.52480000, 1333.77700000, 17.75260000};
        uVar246[0][4] = 271.37050000;
        uVar5[1][0] = {-1676.91100000, -35.43140000, 7.75640000};
        uVar246[1][0] = 331.33470000;
        uVar5[1][1] = {-1683.00800000, -34.19950000, 7.89410000};
        uVar246[1][1] = 147.74480000;
        uVar5[1][2] = {-1665.81500000, -21.23820000, 8.38560000};
        uVar246[1][2] = 99.71110000;
        uVar5[1][3] = {-1668.59000000, -57.62020000, 6.02100000};
        uVar246[1][3] = 181.16640000;
        uVar5[1][4] = {-1659.96000000, 0.56530000, 9.10890000};
        uVar246[1][4] = 50.88000000;
        uVar5[2][0] = {-1910.53400000, -288.75880000, 4.43700000};
        uVar246[2][0] = 110.93440000;
        uVar5[2][1] = {-1930.72100000, -288.98830000, 4.43700000};
        uVar246[2][1] = 126.89450000;
        uVar5[2][2] = {-1979.54700000, -284.78560000, 1.62870000};
        uVar246[2][2] = 63.35980000;
        uVar5[2][3] = {-1991.12100000, -286.33350000, 1.83840000};
        uVar246[2][3] = 99.22840000;
        uVar5[2][4] = {-2012.63700000, -239.01180000, 1.75280000};
        uVar246[2][4] = 12.40960000;
        uVar5[3][0] = {-188.73960000, 1756.37400000, 6.48460000};
        uVar246[3][0] = 329.06800000;
        uVar5[3][1] = {-201.34480000, 1749.37500000, 6.55940000};
        uVar246[3][1] = 275.07310000;
        uVar5[3][2] = {-214.52850000, 1748.49300000, 6.52680000};
        uVar246[3][2] = 272.77980000;
        uVar5[3][3] = {-289.79320000, 1754.41800000, 6.56020000};
        uVar246[3][3] = 62.95430000;
        uVar5[3][4] = {-260.11330000, 1748.96000000, 6.55990000};
        uVar246[3][4] = 83.56060000;
        uVar5[4][0] = {-307.86370000, -41.33940000, 13.55660000};
        uVar246[4][0] = 271.49910000;
        uVar5[4][1] = {-317.05410000, -10.86940000, 13.65220000};
        uVar246[4][1] = 2.54840000;
        uVar5[4][2] = {-347.88460000, -41.36280000, 13.72220000};
        uVar246[4][2] = 87.62410000;
        uVar5[4][3] = {-345.45240000, 17.95090000, 13.75060000};
        uVar246[4][3] = 86.27380000;
        uVar5[4][4] = {-286.48730000, -20.81620000, 13.65020000};
        uVar246[4][4] = 269.26680000;
        uVar5[5][0] = {158.28790000, -859.88560000, 3.70290000};
        uVar246[5][0] = 149.10600000;
        uVar5[5][1] = {139.47060000, -860.81070000, 3.76250000};
        uVar246[5][1] = 208.36030000;
        uVar5[5][2] = {214.79160000, -792.56850000, 3.95050000};
        uVar246[5][2] = 271.10510000;
        uVar5[5][3] = {222.09130000, -799.88230000, 3.96040000};
        uVar246[5][3] = 59.74400000;
        uVar5[5][4] = {254.90390000, -798.83760000, 3.68630000};
        uVar246[5][4] = 82.15410000;
        uVar5[6][0] = {1446.68500000, 1709.32400000, 15.68830000};
        uVar246[6][0] = 90.25410000;
        uVar5[6][1] = {1460.48100000, 1700.55000000, 15.67430000};
        uVar246[6][1] = 89.05770000;
        uVar5[6][2] = {1446.82700000, 1717.56800000, 15.68810000};
        uVar246[6][2] = 90.14660000;
        uVar5[6][3] = {1432.24400000, 1729.46400000, 15.73440000};
        uVar246[6][3] = 139.45400000;
        uVar5[6][4] = {1429.60300000, 1711.12000000, 15.71350000};
        uVar246[6][4] = 183.95730000;
        uVar5[7][0] = {2278.02900000, 392.75340000, 6.48660000};
        uVar246[7][0] = 179.71380000;
        uVar5[7][1] = {2265.63000000, 330.17900000, 6.49800000};
        uVar246[7][1] = 269.36540000;
        uVar5[7][2] = {2243.13200000, 371.07890000, 16.20610000};
        uVar246[7][2] = 211.91410000;
        uVar5[7][3] = {2251.51000000, 367.75130000, 16.20610000};
        uVar246[7][3] = 88.58090000;
        uVar5[7][4] = {2266.00300000, 412.25960000, 11.38510000};
        uVar246[7][4] = 333.37570000;
        uVar5[8][0] = {507.66900000, 1032.48600000, 1.71680000};
        uVar246[8][0] = 333.99460000;
        uVar5[8][1] = {496.39700000, 1026.43300000, 2.96750000};
        uVar246[8][1] = 103.34410000;
        uVar5[8][2] = {506.61090000, 1022.23000000, 1.71790000};
        uVar246[8][2] = 42.46580000;
        uVar5[8][3] = {490.87140000, 1083.32900000, 1.71450000};
        uVar246[8][3] = 272.73050000;
        uVar5[8][4] = {480.40510000, 1054.16300000, 1.71450000};
        uVar246[8][4] = 36.20730000;
        uVar5[9][0] = {469.04570000, 304.44190000, 7.56130000};
        uVar246[9][0] = 87.50170000;
        uVar5[9][1] = {477.96120000, 300.29590000, 7.55330000};
        uVar246[9][1] = 2.42670000;
        uVar5[9][2] = {482.41080000, 293.72350000, 7.67390000};
        uVar246[9][2] = 88.89350000;
        uVar5[9][3] = {461.29710000, 300.95190000, 7.55090000};
        uVar246[9][3] = 137.86690000;
        uVar5[9][4] = {460.72030000, 291.34660000, 7.66740000};
        uVar246[9][4] = 359.96490000;
        uVar5[10][0] = {1031.55700000, -588.03850000, 13.21960000};
        uVar246[10][0] = 47.92570000;
        uVar5[10][1] = {1026.98300000, -620.32320000, 13.22030000};
        uVar246[10][1] = 61.89040000;
        uVar5[10][2] = {1032.10300000, -702.06400000, 15.44020000};
        uVar246[10][2] = 87.37060000;
        uVar5[10][3] = {972.05150000, -615.84660000, 13.22450000};
        uVar246[10][3] = 85.48480000;
        uVar5[10][4] = {971.29660000, -684.61330000, 15.44030000};
        uVar246[10][4] = 221.42520000;
        uVar5[11][0] = {-1797.88600000, 638.88600000, 13.89810000};
        uVar246[11][0] = 312.28040000;
        uVar5[11][1] = {-1792.13000000, 645.01030000, 14.17330000};
        uVar246[11][1] = 99.71260000;
        uVar5[11][2] = {-1807.05200000, 642.04900000, 11.67380000};
        uVar246[11][2] = 3.51470000;
        uVar5[11][3] = {-1842.79800000, 661.57840000, 0.66070000};
        uVar246[11][3] = 117.23590000;
        uVar5[11][4] = {-1842.56800000, 652.36990000, 0.76750000};
        uVar246[11][4] = 178.93410000;
        uVar5[12][0] = {-603.27870000, 593.47740000, 3.67920000};
        uVar246[12][0] = 288.21740000;
        uVar5[12][1] = {-607.88640000, 587.28720000, 3.67920000};
        uVar246[12][1] = 76.40240000;
        uVar5[12][2] = {-601.27060000, 580.79100000, 3.67920000};
        uVar246[12][2] = 137.32620000;
        uVar5[12][3] = {-608.47630000, 518.04870000, 3.67920000};
        uVar246[12][3] = 120.48630000;
        uVar5[12][4] = {-603.39810000, 539.39280000, 3.67670000};
        uVar246[12][4] = 180.01040000;
        uVar5[13][0] = {407.47650000, 2038.70600000, 5.69900000};
        uVar246[13][0] = 272.68830000;
        uVar5[13][1] = {421.64500000, 2039.60800000, 5.69900000};
        uVar246[13][1] = 55.04710000;
        uVar5[13][2] = {432.31610000, 2098.65200000, 5.69900000};
        uVar246[13][2] = 278.33650000;
        uVar5[13][3] = {423.73680000, 2093.36000000, 5.69900000};
        uVar246[13][3] = 32.99540000;
        uVar5[13][4] = {430.84380000, 2087.17400000, 5.69900000};
        uVar246[13][4] = 125.64040000;
        uVar5[14][0] = {1199.33300000, -43.45930000, 30.08980000};
        uVar246[14][0] = 6.35080000;
        uVar5[14][1] = {1200.69600000, -33.02690000, 32.37100000};
        uVar246[14][1] = 12.18750000;
        uVar5[14][2] = {1187.60100000, -23.36640000, 34.16930000};
        uVar246[14][2] = 72.11830000;
        uVar5[14][3] = {1237.64700000, -8.06840000, 34.89830000};
        uVar246[14][3] = 200.02630000;
        uVar5[14][4] = {1240.41000000, 0.43650000, 34.95360000};
        uVar246[14][4] = 110.83330000;
    }
    l_U641 = 1;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref uVar2 );
    while (iVar4 == 0)
    {
        for ( I = 0; I <= (l_U666 - 1); I++ )
        {
            if (NOT (IS_CAR_DEAD( l_U1062[I] )))
            {
                GET_CAR_COORDINATES( l_U1062[I], ref uVar338._fU0, ref uVar338._fU4, ref uVar338._fU8 );
                if ((VDIST( uVar5[l_U697][uVar2], uVar338 )) < 2)
                {
                    I += 55;
                }
            }
        }
        if (I > 50)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref uVar2 );
            iVar4 = 0;
        }
        else if (iVar3 > 100)
        {
            iVar4 = 1;
            l_U641 = 0;
        }
        else
        {
            iVar4 = 1;
            l_U641 = 1;
        }
        iVar3++;
        WAIT( 0 );
        sub_42385();
    }
    l_U716 = {uVar5[l_U697][uVar2]};
    l_U786 = uVar246[l_U697][uVar2];
    return;
}

void sub_57071()
{
    int I;
    char[64] cVar3;

    I = 0;
    for ( I = 0; I <= (l_U665 - 1); I++ )
    {
        sub_57101();
        if (l_U642 == 1)
        {
            PRINTSTRING( "\n\n ---> CREATE PED <--- \n\n" );
            GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref l_U664 );
            if (l_U664 < 51)
            {
                CREATE_CHAR( 7, l_U1120[l_U668], l_U719._fU0, l_U719._fU4, l_U719._fU8, ref l_U850[I], 1 );
            }
            else
            {
                CREATE_CHAR( 7, l_U1120[l_U669], l_U719._fU0, l_U719._fU4, l_U719._fU8, ref l_U850[I], 1 );
            }
            SET_CHAR_HEADING( l_U850[I], l_U787 );
            if (NOT (IS_CHAR_INJURED( l_U850[I] )))
            {
                SET_CHAR_RELATIONSHIP_GROUP( l_U850[I], 23 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U850[I] );
                sub_68382();
                SET_CHAR_DECISION_MAKER( l_U850[I], l_U1112 );
                SET_COMBAT_DECISION_MAKER( l_U850[I], l_U1113 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U850[I], 1 );
                SET_CHAR_AS_ENEMY( l_U850[I], 1 );
                SET_INFORM_RESPECTED_FRIENDS( l_U850[I], 150, 999 );
                SET_CHAR_WILL_DO_DRIVEBYS( l_U850[I], 1 );
                sub_19241();
                GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref l_U664 );
                if (l_U664 < 51)
                {
                    GIVE_DELAYED_WEAPON_TO_CHAR( l_U850[I], l_U1117, 25000, 0 );
                }
                else
                {
                    GIVE_DELAYED_WEAPON_TO_CHAR( l_U850[I], l_U1117, 25000, 1 );
                }
                sub_69039();
                SET_CHAR_ACCURACY( l_U850[I], l_U693 );
                sub_69278();
                SET_CHAR_SHOOT_RATE( l_U850[I], l_U694 );
                sub_69501();
                SET_CHAR_FIRE_DAMAGE_MULTIPLIER( l_U850[I], l_U788 );
                sub_69769();
                SET_CHAR_MAX_HEALTH( l_U850[I], l_U695 );
                SET_CHAR_HEALTH( l_U850[I], l_U695 );
                sub_70019();
                SET_CHAR_MONEY( l_U850[I], l_U698 );
                SET_CHAR_IS_TARGET_PRIORITY( l_U850[I], 1 );
                if (l_U667 == 0)
                {
                    SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE( l_U850[I], 3 );
                }
                sub_70322( I );
                StrCopy( ref cVar3, "Gang Ped ", 64 );
                StrCopy( ref cVar3, "Gang Ped ", 64 );
                ConcatString(ref cVar3, I, 64);
                SET_CHAR_NAME_DEBUG( l_U850[I], ref cVar3 );
            }
        }
    }
    return;
}

void sub_57101()
{
    unknown uVar2;
    int iVar3;
    int iVar4;
    vector[20] vVar5;
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
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    float[20] fVar66;
    int I;
    unknown uVar88;
    unknown uVar89;
    unknown uVar90;

    iVar3 = 0;
    iVar4 = 0;
    array(ref vVar5, 20);
    array(ref fVar66, 20);
    if (l_U646 == 0)
    {
        if (l_U697 == 0)
        {
            vVar5[0] = {-815.76200000, 1339.58900000, 17.75260000};
            fVar66[0] = 106.78880000;
            vVar5[1] = {-808.69220000, 1346.35000000, 17.75260000};
            fVar66[1] = 7.32830000;
            vVar5[2] = {-810.36860000, 1349.13700000, 17.75260000};
            fVar66[2] = 279.98680000;
            vVar5[3] = {-823.55140000, 1350.07300000, 17.64050000};
            fVar66[3] = 275.66530000;
            vVar5[4] = {-820.95540000, 1344.35400000, 17.68610000};
            fVar66[4] = 14.58410000;
            vVar5[5] = {-831.92790000, 1351.48500000, 20.83780000};
            fVar66[5] = 331.09360000;
            vVar5[6] = {-829.35890000, 1354.85400000, 20.83780000};
            fVar66[6] = 145.62480000;
            vVar5[7] = {-841.83580000, 1362.95200000, 22.14070000};
            fVar66[7] = 85.41750000;
            vVar5[8] = {-844.84570000, 1372.33500000, 22.14100000};
            fVar66[8] = 272.13320000;
            vVar5[9] = {-844.73630000, 1373.97700000, 22.14100000};
            fVar66[9] = 220.92540000;
            vVar5[10] = {-842.15840000, 1379.73800000, 22.19940000};
            fVar66[10] = 287.53360000;
            vVar5[11] = {-860.08070000, 1376.43100000, 22.14100000};
            fVar66[11] = 350.80110000;
            vVar5[12] = {-860.41880000, 1380.09200000, 22.14100000};
            fVar66[12] = 210.16960000;
            vVar5[13] = {-842.74320000, 1399.67400000, 22.15070000};
            fVar66[13] = 131.11660000;
            vVar5[14] = {-845.63700000, 1399.37800000, 22.14210000};
            fVar66[14] = 246.86260000;
            vVar5[15] = {-843.26730000, 1397.38600000, 22.17640000};
            fVar66[15] = 23.88050000;
            vVar5[16] = {-855.37380000, 1399.41600000, 22.14100000};
            fVar66[16] = 182.27560000;
            vVar5[17] = {-858.17710000, 1398.41500000, 22.14100000};
            fVar66[17] = 307.68410000;
            vVar5[18] = {-852.56400000, 1396.63600000, 22.14100000};
            fVar66[18] = 26.26680000;
            vVar5[19] = {-867.21060000, 1358.34900000, 22.21690000};
            fVar66[19] = 227.00670000;
        }
        else if (l_U697 == 1)
        {
            vVar5[0] = {-1658.28700000, 0.83590000, 9.08200000};
            fVar66[0] = 18.70200000;
            vVar5[1] = {-1658.23800000, 3.61620000, 9.18980000};
            fVar66[1] = 176.88380000;
            vVar5[2] = {-1651.73900000, -5.80540000, 8.70120000};
            fVar66[2] = 272.96580000;
            vVar5[3] = {-1651.30800000, -7.19420000, 8.64130000};
            fVar66[3] = 341.76880000;
            vVar5[4] = {-1646.53900000, 2.62950000, 8.88440000};
            fVar66[4] = 103.88940000;
            vVar5[5] = {-1664.60800000, -22.28610000, 8.28950000};
            fVar66[5] = 115.68030000;
            vVar5[6] = {-1666.60400000, -22.79750000, 8.29250000};
            fVar66[6] = 277.67380000;
            vVar5[7] = {-1662.02400000, -33.30080000, 7.68300000};
            fVar66[7] = 6.03890000;
            vVar5[8] = {-1683.69500000, -13.42080000, 11.03370000};
            fVar66[8] = 284.92790000;
            vVar5[9] = {-1681.69200000, -31.35320000, 8.02270000};
            fVar66[9] = 231.47990000;
            vVar5[10] = {-1680.61400000, -36.58650000, 7.73980000};
            fVar66[10] = 73.55470000;
            vVar5[11] = {-1677.55500000, -33.48910000, 7.86260000};
            fVar66[11] = 117.65590000;
            vVar5[12] = {-1670.01800000, -67.59760000, 5.90600000};
            fVar66[12] = 146.82930000;
            vVar5[13] = {-1682.35500000, -68.88360000, 5.91780000};
            fVar66[13] = 222.68150000;
            vVar5[14] = {-1649.39100000, -44.75790000, 5.91850000};
            fVar66[14] = 169.00030000;
            vVar5[15] = {-1649.76400000, -49.18510000, 5.91850000};
            fVar66[15] = 4.03800000;
            vVar5[16] = {-1645.41800000, -51.52950000, 5.91850000};
            fVar66[16] = 276.36790000;
            vVar5[17] = {-1665.02100000, -48.41250000, 5.91780000};
            fVar66[17] = 153.97550000;
            vVar5[18] = {-1662.58400000, 13.40120000, 8.99740000};
            fVar66[18] = 350.57920000;
            vVar5[19] = {-1677.21700000, 3.71540000, 9.36510000};
            fVar66[19] = 325.49500000;
        }
        else if (l_U697 == 2)
        {
            vVar5[0] = {-1912.80900000, -287.48980000, 4.43700000};
            fVar66[0] = 215.80880000;
            vVar5[1] = {-1933.13700000, -287.32460000, 4.43700000};
            fVar66[1] = 204.11880000;
            vVar5[2] = {-1979.15300000, -282.88020000, 1.62930000};
            fVar66[2] = 196.90630000;
            vVar5[3] = {-1992.74600000, -284.92930000, 1.88190000};
            fVar66[3] = 208.57120000;
            vVar5[4] = {-2010.23400000, -238.13490000, 1.69680000};
            fVar66[4] = 105.27320000;
            vVar5[5] = {-1948.64000000, -318.45320000, 7.93020000};
            fVar66[5] = 265.49080000;
            vVar5[6] = {-1992.24400000, -300.88200000, 7.71270000};
            fVar66[6] = 230.98000000;
            vVar5[7] = {-2019.19700000, -279.38240000, 7.71270000};
            fVar66[7] = 227.44380000;
            vVar5[8] = {-1980.98700000, -278.94870000, 7.71270000};
            fVar66[8] = 186.24110000;
            vVar5[9] = {-1953.50400000, -290.05660000, 5.06800000};
            fVar66[9] = 225.76200000;
            vVar5[10] = {-1893.11200000, -243.70910000, 18.55000000};
            fVar66[10] = 265.34650000;
            vVar5[11] = {-1916.64700000, -243.28880000, 18.55000000};
            fVar66[11] = 5.32760000;
            vVar5[12] = {-1936.06400000, -248.10920000, 18.55000000};
            fVar66[12] = 179.12070000;
            vVar5[13] = {-1970.89600000, -236.88640000, 3.24040000};
            fVar66[13] = 176.99260000;
            vVar5[14] = {-1971.13400000, -243.07400000, 7.05200000};
            fVar66[14] = 185.20770000;
            vVar5[15] = {-1984.73500000, -240.08710000, 13.21680000};
            fVar66[15] = 306.41120000;
            vVar5[16] = {-1971.09200000, -212.03300000, 1.62890000};
            fVar66[16] = 1.73330000;
            vVar5[17] = {-1967.52000000, -245.40780000, 23.88290000};
            fVar66[17] = 183.99530000;
            vVar5[18] = {-1985.29400000, -241.49220000, 23.88290000};
            fVar66[18] = 189.60570000;
            vVar5[19] = {-1983.40500000, -227.27240000, 18.54870000};
            fVar66[19] = 53.53960000;
        }
        else if (l_U697 == 3)
        {
            vVar5[0] = {-190.40800000, 1758.33100000, 6.48460000};
            fVar66[0] = 170.23800000;
            vVar5[1] = {-168.30260000, 1756.06100000, 6.55940000};
            fVar66[1] = 136.84380000;
            vVar5[2] = {-171.37340000, 1755.60300000, 6.55940000};
            fVar66[2] = 277.35890000;
            vVar5[3] = {-184.54690000, 1773.94500000, 6.71470000};
            fVar66[3] = 326.79090000;
            vVar5[4] = {-195.90390000, 1773.91600000, 3.14370000};
            fVar66[4] = 90.78530000;
            vVar5[5] = {-200.47720000, 1751.19900000, 6.55540000};
            fVar66[5] = 204.84230000;
            vVar5[6] = {-208.69690000, 1763.75800000, 6.85180000};
            fVar66[6] = 93.67460000;
            vVar5[7] = {-221.89810000, 1741.85800000, 8.80980000};
            fVar66[7] = 14.44530000;
            vVar5[8] = {-220.99120000, 1738.33500000, 22.66220000};
            fVar66[8] = 10.78910000;
            vVar5[9] = {-260.41850000, 1751.03500000, 6.52320000};
            fVar66[9] = 156.09440000;
            vVar5[10] = {-289.27570000, 1756.38200000, 6.53780000};
            fVar66[10] = 150.56790000;
            vVar5[11] = {-284.93040000, 1763.50200000, 3.97830000};
            fVar66[11] = 59.73060000;
            vVar5[12] = {-267.55410000, 1757.87100000, 3.40470000};
            fVar66[12] = 6.07750000;
            vVar5[13] = {-212.71240000, 1757.05500000, 3.39950000};
            fVar66[13] = 97.80780000;
            vVar5[14] = {-224.12200000, 1768.12000000, 1.95170000};
            fVar66[14] = 325.91060000;
            vVar5[15] = {-222.58700000, 1772.62600000, 1.95170000};
            fVar66[15] = 169.18030000;
            vVar5[16] = {-242.36000000, 1771.68500000, 1.95170000};
            fVar66[16] = 264.35930000;
            vVar5[17] = {-270.27770000, 1774.83800000, 1.94730000};
            fVar66[17] = 256.61620000;
            vVar5[18] = {-262.82240000, 1772.85000000, 1.94730000};
            fVar66[18] = 80.34800000;
            vVar5[19] = {-256.66070000, 1772.23100000, 1.94730000};
            fVar66[19] = 9.63660000;
        }
        else if (l_U697 == 4)
        {
            vVar5[0] = {-306.98490000, -37.20900000, 13.65220000};
            fVar66[0] = 210.13890000;
            vVar5[1] = {-308.99640000, -38.02830000, 13.65190000};
            fVar66[1] = 159.29390000;
            vVar5[2] = {-319.19510000, -9.02120000, 13.65220000};
            fVar66[2] = 281.82790000;
            vVar5[3] = {-314.59110000, -10.01140000, 13.65220000};
            fVar66[3] = 135.27660000;
            vVar5[4] = {-332.03200000, -16.38390000, 13.76260000};
            fVar66[4] = 88.08640000;
            vVar5[5] = {-343.63940000, -15.51960000, 13.76260000};
            fVar66[5] = 90.99590000;
            vVar5[6] = {-349.76970000, -34.69020000, 13.75890000};
            fVar66[6] = 178.36930000;
            vVar5[7] = {-355.94960000, -17.61200000, 13.54160000};
            fVar66[7] = 274.81740000;
            vVar5[8] = {-349.81560000, 11.80720000, 13.75830000};
            fVar66[8] = 16.19830000;
            vVar5[9] = {-362.16110000, -8.06880000, 13.66380000};
            fVar66[9] = 168.48740000;
            vVar5[10] = {-270.03510000, -16.25000000, 13.65220000};
            fVar66[10] = 267.89680000;
            vVar5[11] = {-263.47850000, -16.74830000, 13.65200000};
            fVar66[11] = 95.57770000;
            vVar5[12] = {-283.92060000, -21.84040000, 13.65130000};
            fVar66[12] = 46.51970000;
            vVar5[13] = {-289.12480000, 12.70560000, 13.70740000};
            fVar66[13] = 2.90540000;
            vVar5[14] = {-289.74030000, -5.31190000, 13.76230000};
            fVar66[14] = 0.53830000;
            vVar5[15] = {-300.27100000, -8.90410000, 13.66360000};
            fVar66[15] = 192.73970000;
            vVar5[16] = {-299.67250000, -12.02810000, 13.65220000};
            fVar66[16] = 35.66960000;
            vVar5[17] = {-306.20460000, -19.12460000, 13.61820000};
            fVar66[17] = 95.30160000;
            vVar5[18] = {-300.18940000, -7.89600000, 13.69240000};
            fVar66[18] = 188.06130000;
            vVar5[19] = {-360.66230000, -24.53540000, 13.78950000};
            fVar66[19] = 167.32190000;
        }
        else if (l_U697 == 5)
        {
            vVar5[0] = {135.81400000, -849.09030000, 3.95510000};
            fVar66[0] = 42.74190000;
            vVar5[1] = {141.92550000, -861.09670000, 3.77360000};
            fVar66[1] = 103.76880000;
            vVar5[2] = {153.28610000, -872.01310000, 3.70230000};
            fVar66[2] = 32.40520000;
            vVar5[3] = {159.87300000, -860.44650000, 3.70260000};
            fVar66[3] = 88.84940000;
            vVar5[4] = {148.60140000, -848.16050000, 6.62020000};
            fVar66[4] = 76.91640000;
            vVar5[5] = {160.76320000, -841.13620000, 10.26510000};
            fVar66[5] = 28.97180000;
            vVar5[6] = {164.46780000, -824.58650000, 13.27310000};
            fVar66[6] = 30.99260000;
            vVar5[7] = {180.81240000, -844.23370000, 13.13160000};
            fVar66[7] = 346.15880000;
            vVar5[8] = {190.35070000, -822.45840000, 13.13160000};
            fVar66[8] = 33.75890000;
            vVar5[9] = {215.35670000, -828.92850000, 13.13160000};
            fVar66[9] = 311.23210000;
            vVar5[10] = {220.92630000, -807.40360000, 13.13160000};
            fVar66[10] = 44.62250000;
            vVar5[11] = {226.18090000, -821.73060000, 13.13160000};
            fVar66[11] = 131.10950000;
            vVar5[12] = {221.48650000, -802.14910000, 3.94260000};
            fVar66[12] = 7.51810000;
            vVar5[13] = {201.60680000, -798.67910000, 3.96230000};
            fVar66[13] = 329.19570000;
            vVar5[14] = {216.33170000, -781.40920000, 3.94360000};
            fVar66[14] = 53.16660000;
            vVar5[15] = {180.42060000, -815.19650000, 10.21430000};
            fVar66[15] = 21.64490000;
            vVar5[16] = {201.57370000, -814.78890000, 4.01370000};
            fVar66[16] = 318.59140000;
            vVar5[17] = {172.66890000, -832.72580000, 3.91640000};
            fVar66[17] = 105.25470000;
            vVar5[18] = {202.61570000, -831.25920000, 3.70230000};
            fVar66[18] = 341.05410000;
            vVar5[19] = {254.29350000, -800.68490000, 3.68820000};
            fVar66[19] = 31.43670000;
        }
        else if (l_U697 == 6)
        {
            vVar5[0] = {1427.17700000, 1713.65300000, 15.63470000};
            fVar66[0] = 181.18170000;
            vVar5[1] = {1427.74400000, 1710.59600000, 15.71430000};
            fVar66[1] = 5.19020000;
            vVar5[2] = {1431.44700000, 1709.38300000, 15.71310000};
            fVar66[2] = 84.06390000;
            vVar5[3] = {1458.82500000, 1725.43300000, 15.68810000};
            fVar66[3] = 8.12750000;
            vVar5[4] = {1448.01900000, 1718.94500000, 15.68810000};
            fVar66[4] = 219.83600000;
            vVar5[5] = {1450.00100000, 1717.58200000, 15.68810000};
            fVar66[5] = 100.81780000;
            vVar5[6] = {1446.81400000, 1710.78200000, 15.68810000};
            fVar66[6] = 350.31420000;
            vVar5[7] = {1446.56500000, 1707.73400000, 15.68830000};
            fVar66[7] = 16.03060000;
            vVar5[8] = {1458.82100000, 1702.33300000, 15.68830000};
            fVar66[8] = 263.78260000;
            vVar5[9] = {1462.77700000, 1702.11000000, 15.68830000};
            fVar66[9] = 90.31010000;
            vVar5[10] = {1460.51100000, 1699.18800000, 15.64420000};
            fVar66[10] = 38.68590000;
            vVar5[11] = {1452.53700000, 1692.48300000, 15.48910000};
            fVar66[11] = 186.19330000;
            vVar5[12] = {1427.16100000, 1694.44000000, 15.66470000};
            fVar66[12] = 7.94700000;
            vVar5[13] = {1428.85400000, 1697.79700000, 15.65710000};
            fVar66[13] = 161.88560000;
            vVar5[14] = {1433.81600000, 1728.94800000, 15.72530000};
            fVar66[14] = 111.62430000;
            vVar5[15] = {1430.86600000, 1730.30600000, 15.74960000};
            fVar66[15] = 176.68670000;
            vVar5[16] = {1427.68800000, 1735.51200000, 15.83050000};
            fVar66[16] = 101.39490000;
            vVar5[17] = {1459.51000000, 1746.26000000, 15.85970000};
            fVar66[17] = 196.86660000;
            vVar5[18] = {1468.07500000, 1759.22900000, 15.72710000};
            fVar66[18] = 348.84090000;
            vVar5[19] = {1478.07400000, 1725.47400000, 15.55870000};
            fVar66[19] = 281.72870000;
        }
        else if (l_U697 == 7)
        {
            vVar5[0] = {2277.26300000, 397.95630000, 6.49240000};
            fVar66[0] = 252.95690000;
            vVar5[1] = {2276.51700000, 391.09700000, 6.49010000};
            fVar66[1] = 277.33470000;
            vVar5[2] = {2261.87600000, 329.75350000, 6.50310000};
            fVar66[2] = 209.57440000;
            vVar5[3] = {2267.72800000, 332.10260000, 6.49360000};
            fVar66[3] = 177.00150000;
            vVar5[4] = {2273.51100000, 328.57950000, 6.47960000};
            fVar66[4] = 183.87910000;
            vVar5[5] = {2244.41700000, 372.00020000, 16.20610000};
            fVar66[5] = 163.52810000;
            vVar5[6] = {2252.17300000, 369.47000000, 16.20610000};
            fVar66[6] = 85.40920000;
            vVar5[7] = {2248.92100000, 364.59300000, 16.34440000};
            fVar66[7] = 4.88280000;
            vVar5[8] = {2246.54300000, 357.81740000, 16.36110000};
            fVar66[8] = 275.69020000;
            vVar5[9] = {2245.87900000, 363.85740000, 16.20620000};
            fVar66[9] = 354.03970000;
            vVar5[10] = {2247.59300000, 376.33460000, 16.33670000};
            fVar66[10] = 179.22110000;
            vVar5[11] = {2265.62400000, 411.06460000, 16.14200000};
            fVar66[11] = 62.44620000;
            vVar5[12] = {2235.15300000, 329.25610000, 16.20620000};
            fVar66[12] = 202.49130000;
            vVar5[13] = {2264.12300000, 408.39940000, 11.30220000};
            fVar66[13] = 38.37720000;
            vVar5[14] = {2268.64700000, 413.04700000, 11.50290000};
            fVar66[14] = 72.11270000;
            vVar5[15] = {2248.78300000, 374.56410000, 11.41600000};
            fVar66[15] = 336.69810000;
            vVar5[16] = {2247.91200000, 359.74320000, 11.42010000};
            fVar66[16] = 158.46790000;
            vVar5[17] = {2234.96900000, 327.68630000, 11.30210000};
            fVar66[17] = 214.29470000;
            vVar5[18] = {2224.72500000, 326.29130000, 11.39010000};
            fVar66[18] = 244.73100000;
            vVar5[19] = {2242.88600000, 314.61230000, 10.85350000};
            fVar66[19] = 165.37470000;
        }
        else if (l_U697 == 8)
        {
            vVar5[0] = {505.51610000, 1019.17700000, 1.81550000};
            fVar66[0] = 199.70270000;
            vVar5[1] = {505.77050000, 1034.48800000, 1.71740000};
            fVar66[1] = 267.53740000;
            vVar5[2] = {494.04860000, 1027.41100000, 3.22060000};
            fVar66[2] = 38.20690000;
            vVar5[3] = {498.76440000, 1034.06300000, 2.25430000};
            fVar66[3] = 221.03090000;
            vVar5[4] = {456.88240000, 1035.68900000, 2.07200000};
            fVar66[4] = 197.67600000;
            vVar5[5] = {484.18230000, 1025.29800000, 3.34520000};
            fVar66[5] = 263.01300000;
            vVar5[6] = {476.06540000, 1081.47500000, 1.71450000};
            fVar66[6] = 286.92790000;
            vVar5[7] = {489.06010000, 1073.11800000, 1.71450000};
            fVar66[7] = 359.67180000;
            vVar5[8] = {478.41660000, 1052.01600000, 1.71450000};
            fVar66[8] = 22.35860000;
            vVar5[9] = {477.64640000, 1054.73900000, 1.71450000};
            fVar66[9] = 217.56580000;
            vVar5[10] = {453.22610000, 1058.62200000, 1.71530000};
            fVar66[10] = 155.96420000;
            vVar5[11] = {449.98320000, 1083.35000000, 1.71390000};
            fVar66[11] = 88.38500000;
            vVar5[12] = {445.36560000, 1070.89000000, 1.71390000};
            fVar66[12] = 359.41410000;
            vVar5[13] = {456.33000000, 1068.34200000, 1.71390000};
            fVar66[13] = 249.40440000;
            vVar5[14] = {478.92300000, 1066.95700000, 1.71450000};
            fVar66[14] = 250.01590000;
            vVar5[15] = {498.81640000, 1059.19600000, 1.71450000};
            fVar66[15] = 161.53680000;
            vVar5[16] = {472.16210000, 1098.17700000, 5.26230000};
            fVar66[16] = 142.63050000;
            vVar5[17] = {494.42400000, 1041.06800000, 1.71450000};
            fVar66[17] = 45.33060000;
            vVar5[18] = {483.21060000, 1055.76900000, 1.71450000};
            fVar66[18] = 113.16130000;
            vVar5[19] = {465.75930000, 1043.10000000, 1.71530000};
            fVar66[19] = 177.56700000;
        }
        else if (l_U697 == 9)
        {
            vVar5[0] = {460.00580000, 284.56270000, 7.70210000};
            fVar66[0] = 188.70410000;
            vVar5[1] = {478.29890000, 287.35850000, 7.70580000};
            fVar66[1] = 140.17620000;
            vVar5[2] = {483.05940000, 296.18410000, 7.56230000};
            fVar66[2] = 141.13280000;
            vVar5[3] = {478.88750000, 303.06170000, 7.55220000};
            fVar66[3] = 159.21280000;
            vVar5[4] = {470.83060000, 306.92210000, 7.56660000};
            fVar66[4] = 197.52840000;
            vVar5[5] = {467.55800000, 306.44360000, 7.56660000};
            fVar66[5] = 176.97860000;
            vVar5[6] = {460.59440000, 303.32610000, 7.55440000};
            fVar66[6] = 214.61030000;
            vVar5[7] = {459.03640000, 317.21620000, 7.56660000};
            fVar66[7] = 272.80560000;
            vVar5[8] = {475.57910000, 317.16870000, 7.56660000};
            fVar66[8] = 91.43260000;
            vVar5[9] = {490.05230000, 338.75250000, 7.56660000};
            fVar66[9] = 189.53080000;
            vVar5[10] = {493.63460000, 337.53540000, 7.57400000};
            fVar66[10] = 107.68950000;
            vVar5[11] = {487.98080000, 339.04290000, 7.56660000};
            fVar66[11] = 228.91460000;
            vVar5[12] = {487.51110000, 336.62220000, 7.59000000};
            fVar66[12] = 272.96930000;
            vVar5[13] = {490.84950000, 331.72840000, 7.56670000};
            fVar66[13] = 5.84680000;
            vVar5[14] = {469.02540000, 361.06310000, 7.55650000};
            fVar66[14] = 1.68510000;
            vVar5[15] = {468.87670000, 391.28120000, 7.27620000};
            fVar66[15] = 180.96440000;
            vVar5[16] = {481.11480000, 385.51140000, 7.69920000};
            fVar66[16] = 223.63400000;
            vVar5[17] = {448.02050000, 376.95860000, 7.70040000};
            fVar66[17] = 120.39000000;
            vVar5[18] = {519.64390000, 351.67420000, 7.56660000};
            fVar66[18] = 179.58260000;
            vVar5[19] = {411.33960000, 338.18470000, 7.56660000};
            fVar66[19] = 139.27330000;
        }
        else if (l_U697 == 10)
        {
            vVar5[0] = {1029.97100000, -589.31960000, 13.21960000};
            fVar66[0] = 359.30430000;
            vVar5[1] = {1019.48000000, -616.04580000, 13.22040000};
            fVar66[1] = 253.21250000;
            vVar5[2] = {1028.47900000, -624.23710000, 13.22000000};
            fVar66[2] = 352.98370000;
            vVar5[3] = {1031.00500000, -697.91440000, 15.36780000};
            fVar66[3] = 130.74160000;
            vVar5[4] = {1035.51200000, -698.83960000, 15.44020000};
            fVar66[4] = 235.47850000;
            vVar5[5] = {1025.57000000, -664.91210000, 13.21960000};
            fVar66[5] = 277.73610000;
            vVar5[6] = {1007.67000000, -679.15200000, 13.21900000};
            fVar66[6] = 144.54820000;
            vVar5[7] = {1000.85800000, -699.21160000, 15.44010000};
            fVar66[7] = 186.69800000;
            vVar5[8] = {986.93620000, -670.74100000, 13.21900000};
            fVar66[8] = 176.25960000;
            vVar5[9] = {1001.16600000, -659.34990000, 9.71890000};
            fVar66[9] = 351.93550000;
            vVar5[10] = {1003.11200000, -655.46900000, 9.71890000};
            fVar66[10] = 89.73080000;
            vVar5[11] = {1000.63800000, -651.32510000, 9.71890000};
            fVar66[11] = 203.95990000;
            vVar5[12] = {1008.62200000, -635.07240000, 13.21880000};
            fVar66[12] = 114.10100000;
            vVar5[13] = {972.26120000, -618.22970000, 13.22430000};
            fVar66[13] = 49.98740000;
            vVar5[14] = {979.20020000, -604.33920000, 13.21950000};
            fVar66[14] = 91.51900000;
            vVar5[15] = {972.75900000, -683.70200000, 15.44030000};
            fVar66[15] = 84.22860000;
            vVar5[16] = {976.79110000, -682.45450000, 15.44030000};
            fVar66[16] = 317.44090000;
            vVar5[17] = {983.33540000, -628.98200000, 13.21940000};
            fVar66[17] = 279.99210000;
            vVar5[18] = {997.39940000, -655.64280000, 13.21900000};
            fVar66[18] = 94.57980000;
            vVar5[19] = {998.73830000, -602.60250000, 13.21940000};
            fVar66[19] = 7.29340000;
        }
        else if (l_U697 == 11)
        {
            vVar5[0] = {-1809.73900000, 642.88400000, 11.33230000};
            fVar66[0] = 237.06430000;
            vVar5[1] = {-1792.30600000, 648.14150000, 13.65410000};
            fVar66[1] = 184.76100000;
            vVar5[2] = {-1801.57000000, 636.17820000, 13.49580000};
            fVar66[2] = 232.55690000;
            vVar5[3] = {-1776.52400000, 628.58470000, 25.68610000};
            fVar66[3] = 263.72670000;
            vVar5[4] = {-1784.85100000, 595.84020000, 27.11800000};
            fVar66[4] = 209.57520000;
            vVar5[5] = {-1822.71800000, 604.99450000, 11.34590000};
            fVar66[5] = 174.42140000;
            vVar5[6] = {-1818.07800000, 641.28080000, 10.37800000};
            fVar66[6] = 236.29760000;
            vVar5[7] = {-1781.68100000, 656.00980000, 19.59730000};
            fVar66[7] = 107.82010000;
            vVar5[8] = {-1775.74100000, 717.45560000, 20.87100000};
            fVar66[8] = 84.81570000;
            vVar5[9] = {-1779.92400000, 757.94810000, 11.71370000};
            fVar66[9] = 323.88060000;
            vVar5[10] = {-1796.45800000, 723.38280000, 10.20540000};
            fVar66[10] = 161.54290000;
            vVar5[11] = {-1801.83700000, 701.91550000, 8.35240000};
            fVar66[11] = 352.71020000;
            vVar5[12] = {-1842.81800000, 659.36080000, 0.68460000};
            fVar66[12] = 94.89460000;
            vVar5[13] = {-1844.44800000, 652.09030000, 0.70050000};
            fVar66[13] = 111.56630000;
            vVar5[14] = {-1843.90500000, 654.23770000, 0.69290000};
            fVar66[14] = 94.47520000;
            vVar5[15] = {-1846.95900000, 671.96150000, 0.50300000};
            fVar66[15] = 96.79830000;
            vVar5[16] = {-1819.62400000, 663.89480000, 5.87040000};
            fVar66[16] = 112.67800000;
            vVar5[17] = {-1844.09000000, 616.03150000, 0.93610000};
            fVar66[17] = 137.24960000;
            vVar5[18] = {-1833.29100000, 634.80050000, 2.14720000};
            fVar66[18] = 103.63500000;
            vVar5[19] = {-1839.89200000, 657.68840000, 0.63880000};
            fVar66[19] = 101.55870000;
        }
        else if (l_U697 == 12)
        {
            vVar5[0] = {-601.49150000, 591.33810000, 3.67920000};
            fVar66[0] = 10.23110000;
            vVar5[1] = {-617.43830000, 600.61800000, 3.69770000};
            fVar66[1] = 319.02550000;
            vVar5[2] = {-621.26670000, 584.49080000, 3.69700000};
            fVar66[2] = 107.97200000;
            vVar5[3] = {-624.16030000, 581.58260000, 3.62640000};
            fVar66[3] = 316.75230000;
            vVar5[4] = {-609.20850000, 585.61990000, 3.67920000};
            fVar66[4] = 359.19090000;
            vVar5[5] = {-598.75120000, 577.38280000, 3.68200000};
            fVar66[5] = 309.85840000;
            vVar5[6] = {-619.56960000, 579.25730000, 7.87090000};
            fVar66[6] = 334.58650000;
            vVar5[7] = {-610.04800000, 519.34480000, 3.67920000};
            fVar66[7] = 251.05440000;
            vVar5[8] = {-600.01510000, 539.20320000, 3.67550000};
            fVar66[8] = 9.51580000;
            vVar5[9] = {-609.03630000, 538.22480000, 3.67920000};
            fVar66[9] = 71.02380000;
            vVar5[10] = {-613.23440000, 536.80180000, 5.03900000};
            fVar66[10] = 15.05450000;
            vVar5[11] = {-612.60620000, 545.89580000, 5.02440000};
            fVar66[11] = 352.79170000;
            vVar5[12] = {-613.02340000, 556.75050000, 5.02800000};
            fVar66[12] = 326.33370000;
            vVar5[13] = {-638.81790000, 574.97200000, 3.81370000};
            fVar66[13] = 90.79110000;
            vVar5[14] = {-637.10000000, 562.81410000, 3.82900000};
            fVar66[14] = 149.72160000;
            vVar5[15] = {-630.60670000, 526.47500000, 3.82900000};
            fVar66[15] = 313.31140000;
            vVar5[16] = {-628.34470000, 528.76360000, 3.82900000};
            fVar66[16] = 147.13960000;
            vVar5[17] = {-636.03030000, 505.67320000, 3.67940000};
            fVar66[17] = 266.43540000;
            vVar5[18] = {-597.34020000, 501.93890000, 3.81900000};
            fVar66[18] = 276.04770000;
            vVar5[19] = {-614.69240000, 549.20740000, 8.12740000};
            fVar66[19] = 276.46830000;
        }
        else if (l_U697 == 13)
        {
            vVar5[0] = {407.84800000, 2040.42900000, 5.69900000};
            fVar66[0] = 202.99290000;
            vVar5[1] = {421.45720000, 2041.50500000, 5.69900000};
            fVar66[1] = 162.45870000;
            vVar5[2] = {414.77280000, 2032.49300000, 5.69900000};
            fVar66[2] = 189.48670000;
            vVar5[3] = {364.11400000, 2047.23200000, 5.69920000};
            fVar66[3] = 116.66990000;
            vVar5[4] = {384.48280000, 2050.10700000, 5.69900000};
            fVar66[4] = 204.52630000;
            vVar5[5] = {418.39990000, 2053.37800000, 5.69900000};
            fVar66[5] = 169.77160000;
            vVar5[6] = {427.19500000, 2050.69300000, 5.69900000};
            fVar66[6] = 171.55690000;
            vVar5[7] = {450.59290000, 2033.62800000, 5.69900000};
            fVar66[7] = 358.31670000;
            vVar5[8] = {451.12650000, 2037.31700000, 5.69900000};
            fVar66[8] = 172.43870000;
            vVar5[9] = {441.51860000, 2042.68100000, 5.69900000};
            fVar66[9] = 143.27050000;
            vVar5[10] = {429.64920000, 2089.98100000, 5.69900000};
            fVar66[10] = 8.88330000;
            vVar5[11] = {425.00690000, 2094.12800000, 5.69900000};
            fVar66[11] = 261.73330000;
            vVar5[12] = {430.45400000, 2093.99000000, 5.69900000};
            fVar66[12] = 157.87220000;
            vVar5[13] = {433.09900000, 2091.38400000, 5.69900000};
            fVar66[13] = 79.57850000;
            vVar5[14] = {432.25510000, 2104.24800000, 5.69900000};
            fVar66[14] = 6.47440000;
            vVar5[15] = {426.32440000, 2101.74200000, 5.69900000};
            fVar66[15] = 199.05270000;
            vVar5[16] = {436.67120000, 2092.36300000, 5.69900000};
            fVar66[16] = 86.27600000;
            vVar5[17] = {484.88570000, 2061.77300000, 5.69900000};
            fVar66[17] = 100.04200000;
            vVar5[18] = {481.80970000, 2061.56700000, 5.69900000};
            fVar66[18] = 280.28740000;
            vVar5[19] = {477.81360000, 2036.71900000, 5.69900000};
            fVar66[19] = 187.11460000;
        }
        else
        {
            vVar5[0] = {1237.35500000, -2.59810000, 34.89240000};
            fVar66[0] = 4.12970000;
            vVar5[1] = {1237.65500000, -12.06780000, 34.89840000};
            fVar66[1] = 0.38470000;
            vVar5[2] = {1237.43500000, -18.18700000, 34.89400000};
            fVar66[2] = 1.43450000;
            vVar5[3] = {1207.07800000, -14.22580000, 35.29550000};
            fVar66[3] = 298.94730000;
            vVar5[4] = {1210.41000000, -14.33380000, 35.29550000};
            fVar66[4] = 69.84080000;
            vVar5[5] = {1208.16500000, -16.82770000, 34.24430000};
            fVar66[5] = 8.04450000;
            vVar5[6] = {1213.03400000, -17.08470000, 34.26690000};
            fVar66[6] = 69.54290000;
            vVar5[7] = {1209.28600000, -12.38980000, 35.29550000};
            fVar66[7] = 184.42540000;
            vVar5[8] = {1209.15100000, -1.23990000, 35.29550000};
            fVar66[8] = 2.12110000;
            vVar5[9] = {1182.02800000, -9.32700000, 34.16930000};
            fVar66[9] = 13.11770000;
            vVar5[10] = {1194.23900000, -46.69930000, 34.16930000};
            fVar66[10] = 232.46370000;
            vVar5[11] = {1178.61900000, -24.03790000, 34.16930000};
            fVar66[11] = 74.76840000;
            vVar5[12] = {1195.96200000, -20.09720000, 34.03270000};
            fVar66[12] = 193.52380000;
            vVar5[13] = {1210.33600000, -39.59330000, 33.88760000};
            fVar66[13] = 142.13580000;
            vVar5[14] = {1224.78500000, -32.39390000, 35.24540000};
            fVar66[14] = 197.65920000;
            vVar5[15] = {1242.96100000, -29.66310000, 35.38860000};
            fVar66[15] = 235.66060000;
            vVar5[16] = {1245.16500000, -3.68180000, 34.97900000};
            fVar66[16] = 320.48750000;
            vVar5[17] = {1204.70000000, -2.79640000, 35.29550000};
            fVar66[17] = 345.77620000;
            vVar5[18] = {1213.63100000, 0.01730000, 34.41680000};
            fVar66[18] = 23.89840000;
            vVar5[19] = {1209.09700000, -2.22020000, 35.29550000};
            fVar66[19] = 187.22430000;
        };;;;;;;;;;;;;;
    }
    l_U642 = 1;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 20, ref uVar2 );
    while (iVar4 == 0)
    {
        for ( I = 0; I <= (l_U665 - 1); I++ )
        {
            if (NOT (IS_CHAR_DEAD( l_U850[I] )))
            {
                GET_CHAR_COORDINATES( l_U850[I], ref uVar88._fU0, ref uVar88._fU4, ref uVar88._fU8 );
                if ((VDIST( vVar5[uVar2], uVar88 )) < 2)
                {
                    I += 55;
                }
            }
        }
        if (I > 50)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 20, ref uVar2 );
            iVar4 = 0;
        }
        else if (iVar3 > 100)
        {
            iVar4 = 1;
            l_U642 = 0;
        }
        else
        {
            iVar4 = 1;
            l_U642 = 1;
        }
        iVar3++;
        WAIT( 0 );
        sub_42385();
    }
    l_U719 = {vVar5[uVar2]};
    l_U787 = fVar66[uVar2];
    return;
}

void sub_68382()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 1 + g_U39219, 101 + g_U39219, ref iVar2 );
    if (l_U667 == 0)
    {
        iVar2 = iVar2;
    }
    else if (l_U667 == 1)
    {
        iVar2 -= 5;
    }
    else if (l_U667 == 2)
    {
        iVar2 -= 10;
    }
    else if (l_U667 == 3)
    {
        iVar2 += 5;
    }
    else if (l_U667 == 4)
    {
        iVar2 += 10;
    }
    else
    {
        iVar2 = iVar2;
    };;;;;
    if (iVar2 <= 5)
    {
        l_U1112 = l_U1106;
    }
    else if ((iVar2 > 5) AND (iVar2 <= 30))
    {
        l_U1112 = l_U1105;
    }
    else
    {
        l_U1112 = l_U1107;
    }
    GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref iVar2 );
    if (l_U667 == 0)
    {
        iVar2 += 10;
    }
    else if (l_U667 == 1)
    {
        iVar2 += 5;
    }
    else if (l_U667 == 2)
    {
        iVar2 = iVar2;
    }
    else if (l_U667 == 3)
    {
        iVar2 -= 5;
    }
    else if (l_U667 == 4)
    {
        iVar2 -= 10;
    }
    else
    {
        iVar2 = iVar2;
    };;;;;
    if (iVar2 <= 5)
    {
        l_U1113 = l_U1108;
    }
    else if ((iVar2 > 5) AND (iVar2 <= 33))
    {
        l_U1113 = l_U1108;
    }
    else if ((iVar2 > 33) AND (iVar2 <= 66))
    {
        l_U1113 = l_U1110;
    }
    else
    {
        l_U1113 = l_U1109;
    };;;
    return;
}

void sub_69039()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 5 + g_U39219, 25 + g_U39219, ref iVar2 );
    if (l_U667 == 0)
    {
        l_U693 = iVar2;
    }
    else if (l_U667 == 1)
    {
        l_U693 = iVar2 - 8;
    }
    else if (l_U667 == 2)
    {
        l_U693 = iVar2 - 16;
    }
    else if (l_U667 == 3)
    {
        l_U693 = iVar2 + 8;
    }
    else if (l_U667 == 4)
    {
        l_U693 = iVar2 + 16;
    }
    else
    {
        l_U693 = iVar2;
    };;;;;
    if (l_U693 < 5)
    {
        l_U693 = 5;
    }
    if (l_U693 > 100)
    {
        l_U693 = 100;
    }
    return;
}

void sub_69278()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 25 + g_U39219, 51 + g_U39219, ref iVar2 );
    if (l_U667 == 0)
    {
        l_U694 = iVar2;
    }
    else if (l_U667 == 1)
    {
        l_U694 = iVar2 - 5;
    }
    else if (l_U667 == 2)
    {
        l_U694 = iVar2 - 10;
    }
    else if (l_U667 == 3)
    {
        l_U694 = iVar2 + 5;
    }
    else if (l_U667 == 4)
    {
        l_U694 = iVar2 + 10;
    }
    else
    {
        l_U694 = iVar2;
    };;;;;
    if (l_U694 > 100)
    {
        l_U694 = 100;
    }
    return;
}

void sub_69501()
{
    unknown uVar2;
    int iVar3;

    iVar3 = g_U39219;
    TO_FLOAT( iVar3 );
    GENERATE_RANDOM_FLOAT_IN_RANGE( 0.75000000 + (iVar3 / 40), 1.06000000 + (iVar3 / 40), ref uVar2 );
    if (l_U667 == 0)
    {
        l_U788 = uVar2;
    }
    else if (l_U667 == 1)
    {
        l_U788 = uVar2 - 0.10000000;
    }
    else if (l_U667 == 2)
    {
        l_U788 = uVar2 - 0.20000000;
    }
    else if (l_U667 == 3)
    {
        l_U788 = uVar2 + 0.10000000;
    }
    else if (l_U667 == 4)
    {
        l_U788 = uVar2 + 0.20000000;
    }
    else
    {
        l_U788 = uVar2;
    };;;;;
    if (l_U788 > 2.00000000)
    {
        l_U788 = 2.00000000;
    }
    return;
}

void sub_69769()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 200 + (g_U39219 * 5), 251 + (g_U39219 * 5), ref iVar2 );
    if (l_U667 == 0)
    {
        l_U695 = iVar2;
    }
    else if (l_U667 == 1)
    {
        l_U695 = iVar2 - 10;
    }
    else if (l_U667 == 2)
    {
        l_U695 = iVar2 - 25;
    }
    else if (l_U667 == 3)
    {
        l_U695 = iVar2 + 10;
    }
    else if (l_U667 == 4)
    {
        l_U695 = iVar2 + 25;
    }
    else
    {
        l_U695 = iVar2;
    };;;;;
    if (l_U695 > 500)
    {
        l_U695 = 500;
    }
    return;
}

void sub_70019()
{
    int iVar2;
    int iVar3;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 20, ref iVar3 );
    if (iVar3 >= 10)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 101, ref iVar2 );
        if (l_U667 == 0)
        {
            l_U698 = iVar2;
        }
        else if (l_U667 == 1)
        {
            l_U698 = iVar2 - 10;
        }
        else if (l_U667 == 2)
        {
            l_U698 = iVar2 - 5;
        }
        else if (l_U667 == 3)
        {
            l_U698 = iVar2 + 5;
        }
        else if (l_U667 == 4)
        {
            l_U698 = iVar2 + 10;
        }
        else
        {
            l_U698 = iVar2;
        };;;;;
    }
    else
    {
        l_U698 = 0;
    }
    if (l_U698 < 0)
    {
        l_U698 = 0;
    }
    if (l_U698 > 60)
    {
        l_U698 = 60;
    }
    return;
}

void sub_70322(int iParam0)
{
    int iVar3;

    if (((iParam0 == 0) || (iParam0 == 4)) || (iParam0 == 13))
    {
        if (HAS_MODEL_LOADED( l_U1118 ))
        {
            TASK_START_SCENARIO_AT_POSITION( l_U850[iParam0], "Scenario_SmokingOutsideOffice", l_U719._fU0, l_U719._fU4, l_U719._fU8, l_U787 );
            GIVE_PED_AMBIENT_OBJECT( l_U850[iParam0], l_U1118 );
        }
    }
    else if (((iParam0 == 1) || (iParam0 == 5)) || (iParam0 == 14))
    {
        TASK_START_SCENARIO_IN_PLACE( l_U850[iParam0], "Scenario_Bouncer", -1082130432 );
    }
    else if (((iParam0 == 2) || (iParam0 == 6)) || (iParam0 == 15))
    {
        OPEN_SEQUENCE_TASK( ref l_U1114 );
        TASK_SWAP_WEAPON( 0, 1 );
        TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_Standing", -1082130432 );
        CLOSE_SEQUENCE_TASK( l_U1114 );
        TASK_PERFORM_SEQUENCE( l_U850[iParam0], l_U1114 );
        CLEAR_SEQUENCE_TASK( l_U1114 );
    }
    else if (((iParam0 == 3) || (iParam0 == 7)) || (iParam0 == 16))
    {
        TASK_USE_MOBILE_PHONE( l_U850[iParam0], 1 );
    }
    else
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref iVar3 );
        if (iVar3 == 0)
        {
            if (HAS_MODEL_LOADED( l_U1118 ))
            {
                TASK_START_SCENARIO_AT_POSITION( l_U850[iParam0], "Scenario_SmokingOutsideOffice", l_U719._fU0, l_U719._fU4, l_U719._fU8, l_U787 );
                GIVE_PED_AMBIENT_OBJECT( l_U850[iParam0], l_U1118 );
            }
        }
        else if (iVar3 == 1)
        {
            TASK_START_SCENARIO_IN_PLACE( l_U850[iParam0], "Scenario_Bouncer", -1082130432 );
        }
        else if (iVar3 == 2)
        {
            OPEN_SEQUENCE_TASK( ref l_U1114 );
            TASK_SWAP_WEAPON( 0, 1 );
            TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_Standing", -1082130432 );
            CLOSE_SEQUENCE_TASK( l_U1114 );
            TASK_PERFORM_SEQUENCE( l_U850[iParam0], l_U1114 );
            CLEAR_SEQUENCE_TASK( l_U1114 );
        };;;
    };;;;
    return;
}

void sub_71070()
{
    if (l_U697 == 0)
    {
        CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -843.26220000, 1371.26200000, 23.34600000, 180.00000000, 180.00000000, 0.00000000, ref l_U1103 );
        CREATE_PICKUP_ROTATE( -1758615024, 22, 200, -862.95090000, 1362.31400000, 22.19570000, 90.00000000, 180.00000000, 0.00000000, ref l_U1104 );
    }
    else if (l_U697 == 1)
    {
        CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -1684.92900000, -3.78150000, 11.89190000, 0.00000000, 0.00000000, 90.00000000, ref l_U1103 );
        CREATE_PICKUP_ROTATE( -1758615024, 22, 200, -1661.67400000, 9.73580000, 10.22880000, 66.00000000, 175.00000000, 285.00000000, ref l_U1104 );
    }
    else if (l_U697 == 2)
    {
        CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -1946.23000000, -274.38430000, 3.13520000, 0, 0, 0, ref l_U1103 );
        CREATE_PICKUP_ROTATE( -1758615024, 22, 200, -1950.76900000, -293.35190000, 7.76770000, 90.00000000, 180.00000000, 0.00000000, ref l_U1104 );
    }
    else if (l_U697 == 3)
    {
        CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -208.32740000, 1759.36000000, 7.82700000, 180.00000000, 180.00000000, 0.00000000, ref l_U1103 );
        CREATE_PICKUP_ROTATE( -1758615024, 22, 200, -209.42740000, 1763.96000000, 7.72700000, 90.00000000, 180.00000000, 270.00000000, ref l_U1104 );
    }
    else if (l_U697 == 4)
    {
        CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -312.61910000, -7.63620000, 13.85720000, 0, 0, 90.00000000, ref l_U1103 );
        CREATE_PICKUP_ROTATE( -1758615024, 22, 200, -314.61910000, -7.18620000, 13.65720000, 90.00000000, 0.00000000, 90.00000000, ref l_U1104 );
    }
    else if (l_U697 == 5)
    {
        CREATE_PICKUP_ROTATE( 1069950328, 22, 200, 163.06120000, -840.93300000, 10.92020000, 0.00000000, 0.00000000, 118.00000000, ref l_U1103 );
        CREATE_PICKUP_ROTATE( -1758615024, 22, 200, 147.52400000, -848.46170000, 6.67560000, 90.00000000, 180.00000000, 180.00000000, ref l_U1104 );
    }
    else if (l_U697 == 6)
    {
        CREATE_PICKUP_ROTATE( 1069950328, 22, 200, 1446.44200000, 1727.91100000, 17.24320000, 0.00000000, 0.00000000, 180.00000000, ref l_U1103 );
        CREATE_PICKUP_ROTATE( -1758615024, 22, 200, 1429.05100000, 1693.41000000, 15.72000000, 270.00000000, 0.00000000, 180.00000000, ref l_U1104 );
    }
    else if (l_U697 == 7)
    {
        CREATE_PICKUP_ROTATE( 1069950328, 22, 200, 2276.88900000, 366.90870000, 17.21110000, 0.00000000, 0.00000000, 90.00000000, ref l_U1103 );
        CREATE_PICKUP_ROTATE( -1758615024, 22, 200, 2275.33000000, 370.38620000, 6.54870000, 90.00000000, 180.00000000, 0.00000000, ref l_U1104 );
    }
    else if (l_U697 == 8)
    {
        CREATE_PICKUP_ROTATE( 1069950328, 22, 200, 487.20910000, 1080.99200000, 2.91950000, 180.00000000, 180.00000000, 0.00000000, ref l_U1103 );
        CREATE_PICKUP_ROTATE( -1758615024, 22, 200, 490.15410000, 1075.96700000, 1.76950000, 90.00000000, 180.00000000, 90.00000000, ref l_U1104 );
    }
    else if (l_U697 == 9)
    {
        CREATE_PICKUP_ROTATE( 1069950328, 22, 200, 466.24720000, 307.88010000, 7.82280000, 180.00000000, 180.00000000, 0.00000000, ref l_U1103 );
        CREATE_PICKUP_ROTATE( -1758615024, 22, 200, 476.48010000, 287.84210000, 7.76230000, 90.00000000, 180.00000000, 90.00000000, ref l_U1104 );
    }
    else if (l_U697 == 10)
    {
        CREATE_PICKUP_ROTATE( 1069950328, 22, 200, 998.14600000, -632.81150000, 14.17400000, 0, 0, 0, ref l_U1103 );
        CREATE_PICKUP_ROTATE( -1758615024, 22, 200, 1001.84600000, -645.74280000, 9.79570000, 90.00000000, 180.00000000, 0.00000000, ref l_U1104 );
    }
    else if (l_U697 == 11)
    {
        CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -1788.26800000, 632.31580000, 19.62090000, 66.00000000, 200.00000000, 189.00000000, ref l_U1103 );
        CREATE_PICKUP_ROTATE( -1758615024, 22, 200, -1787.96800000, 631.36580000, 20.17090000, 67.00000000, 161.00000000, 270.00000000, ref l_U1104 );
    }
    else if (l_U697 == 12)
    {
        CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -614.47650000, 571.78090000, 5.46580000, 0.00000000, 0.00000000, 90.00000000, ref l_U1103 );
        CREATE_PICKUP_ROTATE( -1758615024, 22, 200, -622.53870000, 597.46430000, 3.71180000, 90.00000000, 180.00000000, 0.00000000, ref l_U1104 );
    }
    else if (l_U697 == 13)
    {
        CREATE_PICKUP_ROTATE( 1069950328, 22, 200, 409.89890000, 2052.85600000, 6.90470000, 180.00000000, 180.00000000, 251.00000000, ref l_U1103 );
        CREATE_PICKUP_ROTATE( -1758615024, 22, 200, 396.68420000, 2028.42100000, 5.75470000, 90.00000000, 180.00000000, 285.00000000, ref l_U1104 );
    }
    else if (l_U697 == 14)
    {
        CREATE_PICKUP_ROTATE( 1069950328, 22, 200, 1211.40200000, -13.12740000, 36.30060000, 180.00000000, 180.00000000, 0.00000000, ref l_U1103 );
        CREATE_PICKUP_ROTATE( -1758615024, 22, 200, 1209.20300000, -13.97260000, 35.36780000, 90.00000000, 180.00000000, 0.00000000, ref l_U1104 );
    };;;;;;;;;;;;;;;
    return;
}

void sub_73029()
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

void sub_73149()
{
    int I;

    I = 0;
    if (DOES_CHAR_EXIST( l_U879[0]._fU0 ))
    {
        if ((IS_CHAR_DEAD( l_U879[0]._fU0 )) || (IS_CHAR_FATALLY_INJURED( l_U879[0]._fU0 )))
        {
            PRINT_NOW( "GW_FAIL_03", 7500, 1 );
            l_U663 = -1;
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
                l_U663 = -1;
                l_U618 = 1;
            }
        }
    }
    for ( I = 0; I <= 6; I++ )
    {
        if (DOES_CHAR_EXIST( l_U871[I] ))
        {
            if ((IS_CHAR_DEAD( l_U871[I] )) || (IS_CHAR_FATALLY_INJURED( l_U871[I] )))
            {
                PRINT_NOW( "GW_FAIL_03", 7500, 1 );
                l_U663 = -1;
                l_U618 = 1;
            }
        }
    }
    return;
}

void sub_73503()
{
    if (((IS_CHAR_INJURED( l_U871[1] )) AND (DOES_CHAR_EXIST( l_U871[1] ))) AND (l_U648[0] == 0))
    {
        if (DOES_BLIP_EXIST( l_U1094[3] ))
        {
            REMOVE_BLIP( l_U1094[3] );
        }
        sub_73595( 1 );
        l_U648[0] = 1;
    }
    if (((IS_CHAR_INJURED( l_U871[3] )) AND (DOES_CHAR_EXIST( l_U871[3] ))) AND (l_U648[1] == 0))
    {
        if (DOES_BLIP_EXIST( l_U1094[4] ))
        {
            REMOVE_BLIP( l_U1094[4] );
        }
        sub_73595( 2 );
        l_U648[1] = 1;
    }
    if (((IS_CHAR_INJURED( l_U871[5] )) AND (DOES_CHAR_EXIST( l_U871[5] ))) AND (l_U648[2] == 0))
    {
        if (DOES_BLIP_EXIST( l_U1094[5] ))
        {
            REMOVE_BLIP( l_U1094[5] );
        }
        sub_73595( 3 );
        l_U648[2] = 1;
    }
    if (((g_U15728[8] == 1) || (g_U12306[1]._fU108 == 1)) AND (l_U648[3] == 0))
    {
        if ((IS_CHAR_INJURED( l_U879[0]._fU0 )) AND (DOES_CHAR_EXIST( l_U879[0]._fU0 )))
        {
            if (DOES_BLIP_EXIST( l_U1094[0] ))
            {
                REMOVE_BLIP( l_U1094[0] );
            }
            sub_73595( 4 );
            l_U648[3] = 1;
        }
    }
    if ((IS_CHAR_INJURED( l_U879[0]._fU0 )) AND (DOES_CHAR_EXIST( l_U879[0]._fU0 )))
    {
        if (DOES_BLIP_EXIST( l_U879[0]._fU100 ))
        {
            REMOVE_BLIP( l_U879[0]._fU100 );
        }
        if (DOES_BLIP_EXIST( l_U1094[0] ))
        {
            REMOVE_BLIP( l_U1094[0] );
        }
        sub_74209( 1 );
    }
    if ((IS_CHAR_INJURED( g_U11081[0] )) AND (DOES_CHAR_EXIST( g_U11081[0] )))
    {
        if (DOES_BLIP_EXIST( l_U1094[1] ))
        {
            REMOVE_BLIP( l_U1094[1] );
        }
    }
    if ((IS_CHAR_INJURED( g_U11081[1] )) AND (DOES_CHAR_EXIST( g_U11081[1] )))
    {
        if (DOES_BLIP_EXIST( l_U1094[2] ))
        {
            REMOVE_BLIP( l_U1094[2] );
        }
    }
    return;
}

void sub_73595(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_1285( uParam0 );
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

void sub_74209(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_18234( uParam0 );
    if (iVar3 == 6)
    {
        return;
    }
    g_U39058[iVar3]._fU4 = 0;
    return;
}

void sub_74415(unknown uParam0)
{
    int iVar3;
    int I;

    if ((l_U223 >= (uParam0^)) || (l_U223 < 0))
    {
        l_U223 = 0;
    }
    sub_74454( uParam0 );
    if (NOT (IS_CHAR_INJURED( (uParam0^)[l_U223]._fU0 )))
    {
        sub_74767( ref (uParam0^)[l_U223], 1 );
        if (DOES_CHAR_EXIST( (uParam0^)[l_U223]._fU8 ))
        {
            if (IS_CHAR_INJURED( (uParam0^)[l_U223]._fU8 ))
            {
                iVar3 = sub_93711( uParam0, (uParam0^)[l_U223]._fU8 );
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
        sub_93160( ref (uParam0^)[I] );
    }
    return;
}

void sub_74454(unknown uParam0)
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
                iVar3[sub_24159( uVar10 )] = 1;
            }
        }
    }
    if (IS_CHAR_ON_ANY_BIKE( sub_5992() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5992(), ref uVar10 );
        iVar3[sub_24159( uVar10 )] = 1;
    }
    for ( I = 0; I < iVar3; I++ )
    {
        uVar11 = sub_24436( I );
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

void sub_74767(int iParam0, boolean bParam1)
{
    unknown uVar4;
    int iVar5;

    if (IS_CHAR_INJURED( iParam0->_fU0 ))
    {
        if (iParam0->_fU92 > 0)
        {
            sub_73595( iParam0->_fU92 );
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
        if ((sub_74879( iParam0 )) == 2)
        {
            return;
        }
        sub_75764( iParam0 );
        if (iParam0->_fU36 != 0)
        {
            sub_77518( iParam0 );
        }
        if (sub_18619( iParam0, 1 ))
        {
            sub_81850( iParam0 + 0, 0 );
        }
        else
        {
            sub_81850( iParam0 + 0, 1 );
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
        iVar5 = sub_82141( iParam0 );
        if (iVar5 == 1)
        {
            if (sub_18619( iParam0, 32 ))
            {
                sub_3996( iParam0, 3 );
            }
            else if (sub_18619( iParam0, 64 ))
            {
                if (sub_18619( iParam0, 1 ))
                {
                    sub_3996( iParam0, 5 );
                }
                else
                {
                    sub_3996( iParam0, 4 );
                }
            }
        }
        else if (iVar5 == 2)
        {
            ;
        }
        else if ((sub_83192( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_83449( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_84617( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_84731( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_84852( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_85152( iParam0 )) != 0)
        {
            ;
        };;;;;;;;
        break;
        case 3:
        if ((sub_85508( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_83192( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_83449( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_84617( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_84731( iParam0 )) != 0)
        {
            ;
        };;;;;
        break;
        case 1:
        if ((g_U10956 != 0) || (g_U10958 != 0))
        {
            if ((sub_75457( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_85767( iParam0 )) != 0)
            {
                ;
            }
        }
        else if ((sub_85924( iParam0 )) != 0)
        {
            ;
        }
        break;
        case 4:
        if ((sub_75457( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_83192( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_83449( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_84617( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_84731( iParam0 )) != 0)
        {
            ;
        };;;;;
        break;
        case 5:
        if ((sub_82238( iParam0 )) > 30.00000000)
        {
            sub_93075( iParam0 );
        }
        else if ((sub_85767( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_75295( iParam0, 1, 0 )) != 0)
        {
            ;
        };;;
        break;
        default: break;
    }
    if (NOT bParam1)
    {
        sub_93160( iParam0 );
    }
    return;
}

int sub_74879(int iParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    if ((NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))) || (IS_CHAR_SITTING_IN_ANY_CAR( sub_5992() )))
    {
        return 0;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref iVar3 );
    GET_CAR_CHAR_IS_USING( sub_5992(), ref iVar4 );
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
        if (NOT (((sub_16549( iParam0 + 0 )) == 3) AND ((sub_75022( iVar3 )) == sub_75051())))
        {
            if ((((sub_16549( iParam0 + 0 )) != 1) || ((sub_75097( iParam0->_fU0 )) == (sub_11372( 0 )))) || ((sub_75139( sub_5992() )) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_5992() )))))
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
        if ((sub_16549( iParam0 + 0 )) == 3)
        {
            sub_23946( iParam0->_fU0, "", sub_5992(), 26 );
        }
        else
        {
            sub_23946( sub_5992(), "", iParam0->_fU0, 37 );
        }
        return sub_75295( iParam0, 1, 1 );
    }
    return 0;
}

void sub_75022(unknown uParam0)
{
    unknown Result;

    GET_CAR_MODEL( uParam0, ref Result );
    return Result;
}

int sub_75051()
{
    return 301427732;
}

void sub_75097(unknown uParam0)
{
    unknown Result;

    GET_CHAR_MODEL( uParam0, ref Result );
    return Result;
}

boolean sub_75139(unknown uParam0)
{
    return (IS_CHAR_IN_ANY_CAR( uParam0 )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )));
}

int sub_75295(int iParam0, unknown uParam1, boolean bParam2)
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
    else if ((sub_75139( iParam0->_fU0 )) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( iParam0->_fU0 ))))
    {
        return 2;
    }
    else if ((uParam1) || (sub_18619( iParam0, 1 )))
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
                return sub_75457( iParam0 );
            }
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 31, ref iVar7 );
            if (iVar7 == 7)
            {
                if (bParam2)
                {
                    uVar8 = {sub_42818( sub_5992(), 1 )};
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

int sub_75457(int iParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = sub_5691( iParam0 );
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

void sub_75764(int iParam0)
{
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (NOT (sub_75795( (iParam0^) )))
        {
            if (((sub_75830( (iParam0^) )) AND (NOT l_U162)) AND (NOT l_U163))
            {
                if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT sub_75882()))
                {
                    if ((IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 )) AND (IS_CHAR_ON_ANY_BIKE( sub_5992() )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_5992(), iParam0->_fU0, l_U152, l_U152, l_U152, 0 ))
                        {
                            if (sub_75981())
                            {
                                if (iParam0->_fU0 == l_U161)
                                {
                                    if (NOT (ref iParam0->_fU44->_fU8))
                                    {
                                        sub_22824( (iParam0 + 44) + 12, ref l_U155, 7, 1 );
                                    }
                                    else
                                    {
                                        sub_22824( (iParam0 + 44) + 28, ref l_U155, 7, 1 );
                                    }
                                    sub_76107( iParam0 );
                                    if (NOT (IS_CHAR_INJURED( sub_5992() )))
                                    {
                                        TASK_LOOK_AT_CHAR( iParam0->_fU0, sub_5992(), -2, 0 );
                                        TASK_LOOK_AT_CHAR( sub_5992(), iParam0->_fU0, -2, 128 );
                                    }
                                    l_U138 = 0;
                                }
                                else
                                {
                                    GET_CHAR_COORDINATES( sub_5992(), ref l_U167._fU0, ref l_U167._fU4, ref l_U167._fU8 );
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
                            else if (NOT sub_76535())
                            {
                                sub_76563();
                            }
                            else if (sub_76620())
                            {
                                sub_76584();
                            }
                            GET_CHAR_COORDINATES( sub_5992(), ref l_U167._fU0, ref l_U167._fU4, ref l_U167._fU8 );
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
                        else if (NOT sub_76884())
                        {
                            sub_76935( (iParam0^) );
                        }
                    }
                    else if (NOT sub_76884())
                    {
                        sub_76935( (iParam0^) );
                    }
                }
                else if (NOT sub_76884())
                {
                    sub_76935( (iParam0^) );
                }
            }
            else if (NOT sub_76884())
            {
                sub_76935( (iParam0^) );
            }
        }
        else if (NOT sub_76884())
        {
            if ((((((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_5992(), iParam0->_fU0, l_U153, l_U153, l_U153, 0 ))) || (NOT (IS_CHAR_ON_ANY_BIKE( sub_5992() )))) || (NOT (IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 )))) || (NOT (IS_CHAR_SITTING_IN_ANY_CAR( iParam0->_fU0 )))) || (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_5992() )))) || (NOT (sub_22422( l_U155 ))))
            {
                sub_77236( iParam0 );
            }
        }
    }
    else if (sub_75795( (iParam0^) ))
    {
        sub_77250( ref l_U155, 0 );
        sub_77236( iParam0 );
    }
    return;
}

void sub_75795(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25)
{
    return uParam0._fU44._fU4;
}

void sub_75830(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25)
{
    return uParam0._fU44._fU0;
}

void sub_75882()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

int sub_75981()
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

void sub_76107(int iParam0)
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

void sub_76535()
{
    return l_U137;
}

void sub_76563()
{
    l_U137 = 1;
    l_U138 = 0;
    sub_76584();
    return;
}

void sub_76584()
{
    l_U139 = 0;
    return;
}

void sub_76620()
{
    return l_U139;
}

void sub_76884()
{
    int Result;

    Result = 0;
    if (sub_22422( l_U145 ))
    {
        Result = 1;
    }
    return Result;
}

void sub_76935(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25)
{
    if (uParam0._fU0 == l_U161)
    {
        l_U161 = nil;
        l_U165 = 0.00000000;
        sub_76976();
    }
    return;
}

void sub_76976()
{
    if (l_U136 == 1)
    {
        l_U140 = 0.00000000;
        l_U139 = 1;
        l_U138 = 0;
    }
    return;
}

void sub_77236(int iParam0)
{
    sub_77250( ref l_U155, 1 );
    ref iParam0->_fU44->_fU4 = 0;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        TASK_CLEAR_LOOK_AT( iParam0->_fU0 );
    }
    if (NOT (IS_CHAR_DEAD( sub_5992() )))
    {
        TASK_CLEAR_LOOK_AT( sub_5992() );
    }
    l_U162 = 0;
    return;
}

void sub_77250(int iParam0, unknown uParam1)
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

void sub_77518(int iParam0)
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
    if ((sub_75795( (iParam0^) )) AND (sub_75882()))
    {
        if ((NOT (IS_CHAR_INJURED( iParam0->_fU0 ))) AND (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
        {
            if (((IS_CHAR_SITTING_IN_CAR( iParam0->_fU0, iParam0->_fU4 )) AND (IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 ))) AND (IS_CHAR_ON_ANY_BIKE( sub_5992() )))
            {
                GET_CHAR_COORDINATES( sub_5992(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                GET_OFFSET_FROM_CAR_GIVEN_WORLD_COORDS( iParam0->_fU4, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                if (IS_SCRIPTED_SPEECH_PLAYING( iParam0->_fU0 ))
                {
                    if ((l_U175 != iParam0->_fU0) || (l_U176 != sub_5992()))
                    {
                        sub_23946( iParam0->_fU0, sub_77792( uVar8._fU0 < 0.00000000, sub_24159( iParam0->_fU4 ) ), sub_5992(), 39 );
                        PRINTSTRING( "PERFORM_BIKER_GESTURE(biker.ped, GET_RANDOM_SPEECH_ANIM(TRUE), PLAYER_CHAR_ID())\n" );
                    }
                    return;
                }
                else if (IS_SCRIPTED_SPEECH_PLAYING( sub_5992() ))
                {
                    l_U175 = sub_5992();
                    l_U176 = iParam0->_fU0;
                }
            }
        }
    }
    if (((sub_75882()) || (sub_75795( (iParam0^) ))) || ((iVar4 - l_U173) < 33))
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
            if (sub_78445( uVar12 ))
            {
                fVar21 = sub_78488( iParam0 );
                if (((NOT (sub_75795( (iParam0^) ))) AND (((IS_CHAR_ON_SCREEN( iParam0->_fU0 )) AND (fVar21 < 19)) || (fVar21 < 15))) AND (iParam0->_fU0 != l_U175))
                {
                    GET_CAR_PITCH( uVar12, ref uVar22 );
                    if ((l_U14) AND ((iParam0->_fU36 != 1) || ((sub_24780( 0, 10 )) == 0)))
                    {
                        l_U14 = 0;
                        iVar15 = 17;
                        iVar11 = sub_5992();
                    }
                    else if ((((sub_78641( iParam0 )) AND (iParam0->_fU36 == 2)) AND ((sub_16549( iParam0 + 0 )) == 1)) AND (NOT (IS_BIT_SET( l_U178, 6 ))))
                    {
                        iVar15 = 38;
                        uVar13 = sub_78755( bVar16 );
                        iVar11 = sub_5992();
                    }
                    else if (((IS_CAR_IN_AIR_PROPER( uVar12 )) AND ((ABSF( uVar22 )) < 20.00000000)) AND (sub_78843( 8 )))
                    {
                        uVar13 = sub_50950( bVar16 );
                        iVar15 = 8;
                    }
                    else if ((HAS_CAR_BEEN_DAMAGED_BY_CHAR( uVar12, sub_5992() )) AND (sub_78843( 12 )))
                    {
                        uVar13 = sub_78755( bVar16 );
                        iVar11 = sub_5992();
                        iVar15 = 12;
                        bVar17 = true;
                    }
                    else if (((HAS_CAR_BEEN_DAMAGED_BY_CHAR( uVar12, 0 )) || (IS_PED_RAGDOLL( iParam0->_fU0 ))) AND (sub_78843( 13 )))
                    {
                        uVar13 = sub_78755( bVar16 );
                        iVar11 = nil;
                        iVar15 = 13;
                        bVar17 = true;
                    }
                    else if (((((sub_16549( iParam0 + 0 )) == 1) AND (NOT (IS_PLAYER_PRESSING_HORN( sub_5923() )))) AND (IS_BIT_SET( l_U178, 7 ))) AND (sub_78843( 20 )))
                    {
                        if (bVar16)
                        {
                            bVar18 = true;
                            uVar13 = sub_50950( bVar16 );
                        }
                        iVar15 = 20;
                        iVar11 = sub_5992();
                        CLEAR_BIT( ref l_U178, 7 );
                    }
                    else if ((((IS_WANTED_LEVEL_GREATER( sub_5923(), 0 )) AND (NOT (IS_BIT_SET( l_U178, 0 )))) AND (sub_78843( 24 ))) AND ((sub_16549( iParam0 + 0 )) == 1))
                    {
                        iVar15 = 24;
                        iVar11 = sub_5992();
                    }
                    else if ((((NOT (IS_WANTED_LEVEL_GREATER( sub_5923(), 0 ))) AND (IS_BIT_SET( l_U178, 0 ))) AND (sub_78843( 30 ))) AND ((sub_16549( iParam0 + 0 )) == 1))
                    {
                        iVar15 = 30;
                    }
                    else
                    {
                        uVar5 = {sub_42818( sub_5992(), 1 )};
                        uVar23 = nil;
                        if (iVar15 == 39)
                        {
                            if (IS_BIT_SET( l_U178, 3 ))
                            {
                                if (NOT (IS_CHAR_ON_ANY_BIKE( sub_5992() )))
                                {
                                    if (IS_PED_RAGDOLL( sub_5992() ))
                                    {
                                        if (sub_78843( 20 ))
                                        {
                                            iVar15 = 20;
                                            iVar11 = sub_5992();
                                            if ((sub_24780( 0, 2 )) == 0)
                                            {
                                                uVar13 = sub_50950( bVar16 );
                                            }
                                            else
                                            {
                                                uVar13 = sub_78755( bVar16 );
                                            }
                                            CLEAR_BIT( ref l_U178, 3 );
                                        }
                                    }
                                    else if (IS_CHAR_ON_FOOT( sub_5992() ))
                                    {
                                        CLEAR_BIT( ref l_U178, 3 );
                                        CLEAR_BIT( ref l_U178, 4 );
                                    }
                                }
                            }
                            else if (IS_CHAR_ON_ANY_BIKE( sub_5992() ))
                            {
                                if (((sub_78843( 33 )) AND (NOT (IS_BIT_SET( l_U178, 4 )))) AND ((sub_16549( iParam0 + 0 )) == 1))
                                {
                                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5992(), ref uVar23 );
                                    if (DOES_VEHICLE_EXIST( uVar23 ))
                                    {
                                        iVar24 = sub_24159( uVar23 );
                                        if ((NOT (IS_CAR_A_MISSION_CAR( uVar23 ))) AND ((iVar24 == 1) || (iVar24 == 0)))
                                        {
                                            iVar15 = 33;
                                            SET_BIT( ref l_U178, 4 );
                                        }
                                    }
                                }
                                SET_BIT( ref l_U178, 3 );
                            }
                            else if (IS_CHAR_SITTING_IN_ANY_CAR( sub_5992() ))
                            {
                                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5992(), ref uVar23 );
                                if (DOES_VEHICLE_EXIST( uVar23 ))
                                {
                                    if (((sub_78843( 31 )) AND (NOT (IS_BIT_SET( l_U178, 4 )))) AND ((sub_16549( iParam0 + 0 )) == 1))
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
                            else if ((IS_CHAR_ON_FOOT( sub_5992() )) AND (NOT (IS_PED_RAGDOLL( sub_5992() ))))
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
                                else if ((sub_78843( 0 )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_5923(), 0 ))))
                                {
                                    if (IS_CHAR_ON_SCREEN( iVar11 ))
                                    {
                                        uVar13 = nil;
                                        iVar15 = 0;
                                        bVar18 = (sub_24780( 0, 10 )) == 0;
                                    }
                                }
                                else if (((sub_78843( 36 )) AND (IS_WANTED_LEVEL_GREATER( sub_5923(), 0 ))) AND (NOT (IS_BIT_SET( l_U178, 1 ))))
                                {
                                    if (IS_CHAR_ON_SCREEN( iVar11 ))
                                    {
                                        uVar13 = nil;
                                        iVar15 = 36;
                                    }
                                }
                                else if ((IS_WANTED_LEVEL_GREATER( sub_5923(), 2 )) AND (sub_78843( 23 )))
                                {
                                    uVar13 = nil;
                                    iVar15 = 23;
                                };;;;
                            }
                        }
                        if ((sub_78843( 2 )) AND (iVar15 == 39))
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
                                    bVar18 = (sub_24780( 0, 100 )) == 0;
                                }
                                else
                                {
                                    iVar11 = nil;
                                }
                            }
                        }
                        if (iVar15 == 39)
                        {
                            if ((IS_WANTED_LEVEL_GREATER( sub_5923(), 0 )) AND (NOT (IS_BIT_SET( l_U178, 2 ))))
                            {
                                if (IS_COP_VEHICLE_IN_AREA_3D_NO_SAVE( uVar5._fU0 - 25.00000000, uVar5._fU4 - 25.00000000, uVar5._fU8 - 25.00000000, uVar5._fU0 + 25.00000000, uVar5._fU4 + 25.00000000, uVar5._fU8 + 25.00000000 ))
                                {
                                    iVar15 = 35;
                                }
                            }
                        }
                        if (iVar15 == 39)
                        {
                            uVar23 = sub_80657( uVar5, 25.00000000, 4 );
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
                                    uVar25 = sub_16549( ref iVar11 );
                                    switch (uVar25)
                                    {
                                        case 2:
                                        if ((sub_78843( 28 )) AND ((sub_16549( iParam0 + 0 )) == 1))
                                        {
                                            iVar15 = 28;
                                        }
                                        break;
                                        case 1:
                                        if ((sub_16549( iParam0 + 0 )) == 2)
                                        {
                                            if ((sub_78843( 3 )) AND (sub_78843( 4 )))
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
                                        else if ((sub_16549( iParam0 + 0 )) == 1)
                                        {
                                            if (sub_78843( 30 ))
                                            {
                                                uVar13 = sub_23806( bVar16 );
                                                iVar15 = 30;
                                            }
                                        }
                                        break;
                                        default:
                                        if (sub_78843( 1 ))
                                        {
                                            iVar15 = 1;
                                        }
                                        break;
                                    }
                                }
                            }
                        }
                        GET_CHAR_SPEED( sub_5992(), ref fVar26 );
                        if (iVar15 == 39)
                        {
                            if (((sub_16549( iParam0 + 0 )) == 1) AND (fVar26 < 5))
                            {
                                if ((sub_78843( 23 )) AND (IS_WANTED_LEVEL_GREATER( sub_5923(), 0 )))
                                {
                                    iVar15 = 23;
                                }
                                else if (sub_78843( 21 ))
                                {
                                    iVar15 = 21;
                                }
                            }
                        }
                        if (iVar15 == 39)
                        {
                            if ((NOT (IS_BIT_SET( l_U178, 5 ))) AND (fVar26 > 30))
                            {
                                if ((sub_78843( 30 )) AND ((sub_16549( iParam0 + 0 )) == 1))
                                {
                                    iVar15 = 30;
                                }
                                else if (sub_78843( 20 ))
                                {
                                    iVar15 = 20;
                                }
                            }
                        }
                    };;;;;;;;
                    if (bVar18)
                    {
                        SOUND_CAR_HORN( uVar12, sub_24780( 1500, 2500 ) );
                    }
                    if (bVar17)
                    {
                        CLEAR_CAR_LAST_DAMAGE_ENTITY( uVar12 );
                    }
                    if ((iVar15 != 39) || (NOT (IS_STRING_NULL( uVar13 ))))
                    {
                        if (sub_23946( iParam0->_fU0, uVar13, iVar11, iVar15 ))
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
    if ((IS_PLAYER_PRESSING_HORN( sub_5923() )) AND (NOT (IS_BIT_SET( l_U178, 7 ))))
    {
        SET_BIT( ref l_U178, 7 );
    }
    if (((iVar4 - l_U173) > 28000) AND (l_U175 != nil))
    {
        if ((sub_16549( iParam0 + 0 )) == 1)
        {
            sub_23946( iParam0->_fU0, "", sub_5992(), 30 );
        }
        else
        {
            sub_23946( iParam0->_fU0, "", sub_5992(), 20 );
        }
        l_U175 = iParam0->_fU0;
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_5923(), 0 )))
        {
            CLEAR_BIT( ref l_U178, 0 );
            CLEAR_BIT( ref l_U178, 2 );
            CLEAR_BIT( ref l_U178, 1 );
        }
        CLEAR_BIT( ref l_U178, 7 );
    }
    return;
}

void sub_77792(boolean bParam0, int iParam1)
{
    string Result;

    Result = nil;
    if ((iParam1 == 1) || (iParam1 == 0))
    {
        if (bParam0)
        {
            switch (sub_24780( 0, 3 ))
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
            switch (sub_24780( 0, 3 ))
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

void sub_78445(unknown uParam0)
{
    unknown uVar3;

    GET_CAR_MODEL( uParam0, ref uVar3 );
    return IS_THIS_MODEL_A_BIKE( uVar3 );
}

void sub_78488(int iParam0)
{
    return sub_43452( iParam0->_fU0, sub_5992(), 1 );
}

void sub_78641(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( iParam0->_fU4, 0, 11, 0, ref uVar3, ref uVar4, ref uVar5 );
    return LOCATE_CHAR_IN_CAR_3D( sub_5992(), uVar3, uVar4, uVar5, 10, 10, 10, 0 );
}

void sub_78755(boolean bParam0)
{
    string Result;

    Result = nil;
    if (bParam0)
    {
        Result = "gest_damn";
    }
    return Result;
}

boolean sub_78843(int iParam0)
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

void sub_80657(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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

void sub_81850(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if ((sub_16549( uParam0 )) == 1)
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

int sub_82141(int iParam0)
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
    else if ((sub_5691( iParam0 )) != iParam0->_fU4)
    {
        if (sub_78445( iParam0->_fU4 ))
        {
            SET_CAR_TRACTION( iParam0->_fU4, 1.00000000 );
        }
        return 0;
    }
    else if ((sub_82238( iParam0 )) < l_U183)
    {
        return 1;
    };;;
    if (sub_78445( iParam0->_fU4 ))
    {
        SET_CAR_TRACTION( iParam0->_fU4, 1.70000000 );
    }
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar3 );
    if ((iVar3 == 7) || ((iParam0->_fU96 != 4) AND (iParam0->_fU96 != 14)))
    {
        if (sub_18619( iParam0, 8 ))
        {
            iParam0->_fU96 = 14;
        }
        else
        {
            iParam0->_fU96 = 4;
        }
        if (sub_18619( iParam0, 16 ))
        {
            iVar5 = 4;
        }
        else
        {
            iVar5 = 2;
        }
        if (sub_18619( iParam0, 128 ))
        {
            TASK_CAR_MISSION_COORS_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, iParam0->_fU96, iParam0->_fU28, iVar5, l_U182, l_U181 );
        }
        else
        {
            TASK_CAR_MISSION_COORS_TARGET( iParam0->_fU0, iParam0->_fU4, ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, iParam0->_fU96, iParam0->_fU28, iVar5, l_U182, l_U181 );
        }
    }
    else if (sub_18619( iParam0, 64 ))
    {
        fVar4 = (sub_82238( iParam0 )) / 3.00000000;
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
    if (sub_82766( iParam0->_fU4 ))
    {
        uVar6 = {sub_82916( iParam0->_fU4, 1 )};
        if (GET_RANDOM_CAR_NODE( uVar6, 12.00000000, 1, 0, 0, ref uVar6, ref uVar9 ))
        {
            SET_CAR_COORDINATES( iParam0->_fU4, uVar6._fU0, uVar6._fU4, uVar6._fU8 );
            SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
        }
    }
    return 2;
}

void sub_82238(int iParam0)
{
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        switch (iParam0->_fU36)
        {
            case 1:
            if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
            {
                return sub_43452( iParam0->_fU0, iParam0->_fU8, 1 );
            }
            break;
            default:
        }
    }
    return VDIST( sub_42818( iParam0->_fU0, 1 ), iParam0->_fU16 );
}

int sub_82766(unknown uParam0)
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

void sub_82916(unknown uParam0, boolean bParam1)
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

int sub_83192(int iParam0)
{
    unknown uVar3;
    int iVar4;

    if (NOT (sub_18619( iParam0, 2 )))
    {
        return 0;
    }
    uVar3 = sub_5691( iParam0 );
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
                if (((sub_16549( ref iVar4 )) == (sub_16549( iParam0 + 0 ))) || ((iVar4 == sub_5992()) AND ((sub_16549( iParam0 + 0 )) == 1)))
                {
                    sub_6033( iParam0, iVar4 );
                    return 2;
                }
            }
        }
    }
    return 0;
}

int sub_83449(int iParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
    {
        if (sub_83487( iParam0->_fU8, iParam0->_fU0, 0 ))
        {
            return 2;
        }
    }
    if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
    {
        if (sub_75139( iParam0->_fU0 ))
        {
            return 2;
        }
        if ((sub_5691( iParam0 )) == iParam0->_fU4)
        {
            if (sub_78445( iParam0->_fU4 ))
            {
                SET_BLIP_THROTTLE_RANDOMLY( iParam0->_fU4, 1 );
            }
            return 1;
        }
        if (NOT (sub_78445( iParam0->_fU4 )))
        {
            iParam0->_fU4 = nil;
            return 0;
        }
        iVar3 = nil;
        GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
        if ((iVar3 == sub_5992()) || ((iVar3 == iParam0->_fU8) AND (NOT (IS_CHAR_INJURED( iVar3 )))))
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
            if ((sub_16549( iParam0 + 0 )) == (sub_16549( ref iVar3 )))
            {
                return 0;
            }
        }
        if ((((IS_CHAR_IN_CAR( sub_5992(), iParam0->_fU4 )) || (IS_CHAR_ON_SCREEN( iParam0->_fU0 ))) || (IS_CAR_ON_SCREEN( iParam0->_fU4 ))) || ((sub_43452( iParam0->_fU0, sub_5992(), 1 )) < 90.00000000))
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
        sub_84171( iParam0 );
        if (bVar4)
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( iParam0->_fU0 );
            SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
            WARP_CHAR_INTO_CAR( iParam0->_fU0, iParam0->_fU4 );
            if (sub_78445( iParam0->_fU4 ))
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

void sub_83487(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown[2] uVar5;

    array(ref uVar5, 2);
    uVar5[0] = uParam0;
    uVar5[1] = uParam1;
    return sub_83517( ref uVar5, uParam2 );
}

int sub_83517(unknown uParam0, unknown uParam1)
{
    int I;
    unknown[2] uVar5;

    array(ref uVar5, 2);
    if (NOT (sub_83542( (uParam0^)[0], ref uVar5[0], uParam1 )))
    {
        return 0;
    }
    for ( I = 1; I <= ((uParam0^) - 1); I++ )
    {
        if (sub_83542( (uParam0^)[I], ref uVar5[1], uParam1 ))
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

int sub_83542(unknown uParam0, unknown uParam1, boolean bParam2)
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

int sub_84171(int iParam0)
{
    if (sub_84185( iParam0->_fU0 ))
    {
        ;
    }
    return 1;
}

int sub_84185(unknown uParam0)
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
                if (((iVar4 < 1) || (iVar5 < 2)) AND (iVar3 != sub_84271()))
                {
                    REMOVE_GROUP( iVar3 );
                }
                else
                {
                    REMOVE_CHAR_FROM_GROUP( uParam0 );
                }
                return 1;
            }
            else if ((iVar5 < 1) AND (iVar3 != sub_84271()))
            {
                REMOVE_GROUP( iVar3 );
            }
        }
    }
    return 0;
}

void sub_84271()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_84617(int iParam0)
{
    unknown uVar3;

    if ((NOT (sub_18619( iParam0, 2 ))) AND (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    uVar3 = sub_80657( sub_42818( iParam0->_fU0, 1 ), 30.00000000, 190 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        iParam0->_fU4 = uVar3;
        return 1;
    }
    return 0;
}

int sub_84731(int iParam0)
{
    unknown uVar3;

    return 0;
    if ((NOT (sub_18619( iParam0, 2 ))) AND (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    uVar3 = GET_CLOSEST_CAR( sub_42818( iParam0->_fU0, 1 ), 30.00000000, 0, 190 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        iParam0->_fU4 = uVar3;
        return 1;
    }
    return 0;
}

int sub_84852(int iParam0)
{
    float fVar3;
    int iVar4;

    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        return 0;
    }
    fVar3 = sub_82238( iParam0 );
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

int sub_85152(int iParam0)
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
    if ((sub_82238( iParam0 )) < 12.00000000)
    {
        return 1;
    }
    else if ((((sub_82238( iParam0 )) > 90.00000000) AND (NOT (IS_CHAR_ON_SCREEN( iParam0->_fU0 )))) AND ((sub_43452( iParam0->_fU0, sub_5992(), 1 )) > 90.00000000))
    {
        if (GET_SAFE_POSITION_FOR_CHAR( ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, 0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 ))
        {
            if (((CAM_IS_SPHERE_VISIBLE( uVar3, uVar4._fU0, uVar4._fU4, uVar4._fU8, 2.00000000 )) || (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar4._fU0, uVar4._fU4, uVar4._fU8, 2.00000000, 2.00000000, 2.00000000 ))) || ((VDIST( sub_42818( sub_5992(), 1 ), uVar4 )) < 30.00000000))
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

int sub_85508(int iParam0)
{
    int iVar3;

    if (NOT (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    else if ((sub_5691( iParam0 )) != iParam0->_fU4)
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

int sub_85767(int iParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
    {
        if (NOT (IS_PED_IN_COMBAT( iParam0->_fU0 )))
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 34, ref iVar3 );
            if ((iVar3 == 7) AND (NOT (IS_CHAR_FACING_CHAR( iParam0->_fU0, sub_5992(), 45.00000000 ))))
            {
                TASK_LOOK_AT_CHAR( iParam0->_fU0, sub_5992(), -1, 0 );
                TASK_TURN_CHAR_TO_FACE_CHAR( iParam0->_fU0, sub_5992() );
            }
        }
        return 1;
    }
    return 0;
}

int sub_85924(int iParam0)
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
        if (sub_6129( iParam0->_fU0, iVar4 ))
        {
            bVar5 = true;
            GET_DRIVER_OF_CAR( iVar4, ref uVar3 );
            bVar6 = false;
            if ((NOT (IS_CHAR_IN_CAR( sub_5992(), iVar4 ))) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_5992() ))))
            {
                if (IS_CHAR_INJURED( uVar3 ))
                {
                    bVar6 = true;
                }
            }
            if (IS_CAR_MODEL( iVar4, -960289747 ))
            {
                if (sub_83487( sub_5992(), iParam0->_fU0, 0 ))
                {
                    return 2;
                }
            }
            else if ((sub_16549( iParam0 + 0 )) == 1)
            {
                GET_CAR_CHAR_IS_USING( sub_5992(), ref uVar7 );
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
                return sub_75295( iParam0, 1, 0 );
            }
        }
    }
    if ((sub_18619( iParam0, 1 )) AND ((sub_82238( iParam0 )) < 30.00000000))
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
    GET_CAR_CHAR_IS_USING( sub_5992(), ref iVar4 );
    fVar8 = 20.00000000;
    if (iParam0->_fU8 == sub_5992())
    {
        if ((IS_CHAR_ON_FOOT( iParam0->_fU0 )) AND (IS_CHAR_ON_FOOT( sub_5992() )))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( sub_5992(), ref iVar9 );
            if (iVar9 != 0)
            {
                fVar8 = 100.00000000;
            }
        }
    }
    if ((NOT (IS_CHAR_IN_WATER( iParam0->_fU8 ))) AND ((((IS_CHAR_SITTING_IN_ANY_CAR( iParam0->_fU8 )) || (IS_CHAR_GETTING_IN_TO_A_CAR( iParam0->_fU8 ))) || (DOES_VEHICLE_EXIST( iVar4 ))) || ((sub_43452( iParam0->_fU0, iParam0->_fU8, 1 )) > fVar8)))
    {
        if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
        {
            if ((sub_6153( iParam0->_fU8, iParam0->_fU4 )) || (iParam0->_fU4 == iVar4))
            {
                if ((sub_86610( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_83192( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_84617( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_87677( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_88088( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_84852( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_85767( iParam0 )) != 0)
                {
                    ;
                };;;;;;;
            }
            else if ((sub_6153( sub_5992(), iParam0->_fU4 )) AND ((sub_16549( iParam0 + 0 )) == 1))
            {
                if ((sub_83192( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_84617( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_87677( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_88088( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_84852( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_85767( iParam0 )) != 0)
                {
                    ;
                };;;;;;
            }
            else if ((sub_88914( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_89063( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_83449( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_83192( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_84617( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_88088( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_86610( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_87677( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_84852( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_85767( iParam0 )) != 0)
            {
                ;
            };;;;;;;;;;;;
        }
        else if ((sub_88914( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_83449( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_83192( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_86610( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_84617( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_84731( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_87677( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_88088( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_84852( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_85767( iParam0 )) != 0)
        {
            ;
        };;;;;;;;;;;
    }
    else if (((sub_83487( sub_5992(), iParam0->_fU0, 1 )) AND (iParam0->_fU8 != sub_5992())) AND ((sub_16549( iParam0 + 0 )) == 1))
    {
        sub_6033( iParam0, sub_5992() );
    }
    if (IS_CHAR_IN_WATER( iParam0->_fU8 ))
    {
        if (IS_CHAR_IN_WATER( iParam0->_fU0 ))
        {
            if ((sub_75457( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_83449( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_83192( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_88088( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_86949( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_84852( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_84617( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_84731( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_87677( iParam0 )) != 0)
            {
                ;
            };;;;;;;;;
        }
        else if ((NOT (sub_18619( iParam0, 1 ))) || (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
        {
            if ((sub_75457( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_83449( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_83192( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_88088( iParam0 )) != 0)
            {
                ;
            };;;;
        }
        else if ((sub_88914( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_86949( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_84852( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_85767( iParam0 )) != 0)
        {
            ;
        };;;;;;
    }
    else if ((sub_18619( iParam0, 1 )) AND (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU8 ))))
    {
        if ((sub_88914( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_86949( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_84852( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_75295( iParam0, 0, 0 )) != 0)
        {
            ;
        }
        else if ((sub_75457( iParam0 )) != 0)
        {
            ;
        };;;;;
    }
    else if ((sub_88914( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_75457( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_83449( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_83192( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_86610( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_84617( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_88088( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_87677( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_86949( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_84852( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_85767( iParam0 )) != 0)
    {
        ;
    };;;;;;;;;;;;;;
    return 2;
}

int sub_86610(int iParam0)
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
            iVar4 = sub_86739( uVar3 );
            if (iVar4 < 0)
            {
                return 0;
            }
        }
    }
    uVar5 = {sub_82916( uVar3, 1 )};
    uVar8 = {sub_42818( iParam0->_fU0, 1 )};
    uVar11 = {sub_42818( sub_5992(), 1 )};
    if (IS_PED_IN_GROUP( iParam0->_fU0 ))
    {
        if ((sub_82238( iParam0 )) > 30.00000000)
        {
            sub_84171( iParam0 );
            return 0;
        }
        else
        {
            return 2;
        }
    }
    else if ((sub_82238( iParam0 )) < 12.00000000)
    {
        iVar14 = sub_86949( iParam0 );
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

int sub_86739(unknown uParam0)
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

int sub_86949(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    unknown uVar6;

    if (IS_CHAR_INJURED( iParam0->_fU8 ))
    {
        if (sub_84185( iParam0->_fU0 ))
        {
            ;
        }
        return 0;
    }
    else if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        if (NOT (sub_83487( iParam0->_fU0, iParam0->_fU8, 1 )))
        {
            return 0;
        }
    }
    else if ((sub_43452( iParam0->_fU0, iParam0->_fU8, 1 )) > 12.00000000)
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

int sub_87677(int iParam0)
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

    if (NOT (sub_18619( iParam0, 2 )))
    {
        return 0;
    }
    iVar3 = 0;
    if (NOT (IS_CAR_DEAD( iParam0->_fU4 )))
    {
        iVar3 = sub_75022( iParam0->_fU4 );
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
    else if ((NOT (IS_CHAR_ON_SCREEN( iParam0->_fU0 ))) AND ((sub_78488( iParam0 )) > 30.00000000))
    {
        GET_CHAR_COORDINATES( iParam0->_fU0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        if (GET_CLOSEST_CAR_NODE_WITH_HEADING( uVar4._fU0, uVar4._fU4, uVar4._fU8, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8, ref uVar10 ))
        {
            uVar11 = sub_18065( uVar4, uVar10, iVar3 );
            WARP_CHAR_INTO_CAR( iParam0->_fU0, uVar11 );
            if (sub_78445( uVar11 ))
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

int sub_88088(int iParam0)
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
                sub_6033( iParam0, iVar3 );
                return 2;
            }
            else
            {
                return 1;
            }
        }
        uVar4 = {sub_42818( sub_5992(), 1 )};
        uVar7 = {sub_42818( iParam0->_fU0, 1 )};
        uVar10 = {sub_82916( iParam0->_fU4, 1 )};
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
            else if ((iVar3 == sub_5992()) || ((sub_16549( ref iVar3 )) == (sub_16549( iParam0 + 0 ))))
            {
                iVar14 = sub_86739( iParam0->_fU4 );
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
                if (sub_78445( iParam0->_fU4 ))
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

int sub_88914(int iParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (IS_CHAR_INJURED( iParam0->_fU0 ))
    {
        return 0;
    }
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 91, ref uVar3 );
    GET_CHAR_HIGHEST_PRIORITY_EVENT( iParam0->_fU0, ref uVar4 );
    if ((((IS_PED_IN_COMBAT( iParam0->_fU0 )) || (IS_CHAR_RESPONDING_TO_EVENT( iParam0->_fU0, 110 ))) || (IS_CHAR_RESPONDING_TO_EVENT( iParam0->_fU0, 115 ))) AND ((sub_82238( iParam0 )) < 30.00000000))
    {
        return 2;
    }
    return 0;
}

int sub_89063(int iParam0)
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
    else if ((sub_5691( iParam0 )) != iParam0->_fU4)
    {
        if (sub_78445( iParam0->_fU4 ))
        {
            SET_CAR_TRACTION( iParam0->_fU4, 1.00000000 );
        }
        return 0;
    }
    else if (NOT (DOES_CHAR_EXIST( iParam0->_fU8 )))
    {
        if (sub_78445( iParam0->_fU4 ))
        {
            SET_CAR_TRACTION( iParam0->_fU4, 1.00000000 );
        }
        return 0;
    };;;
    if (sub_78445( iParam0->_fU4 ))
    {
        SET_CAR_TRACTION( iParam0->_fU4, 2.00000000 );
    }
    if ((CHECK_STUCK_TIMER( iParam0->_fU4, 0, 5000 )) AND (NOT (IS_CAR_ON_SCREEN( iParam0->_fU4 ))))
    {
        SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
    }
    sub_84171( iParam0 );
    iVar8 = 2;
    if (sub_18619( iParam0, 16 ))
    {
        iVar8 = 4;
    }
    bVar9 = false;
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar3 );
    fVar6 = sub_82238( iParam0 );
    uVar10 = nil;
    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU8 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU8, ref uVar10 );
    }
    else if ((iParam0->_fU8 == sub_5992()) AND (IS_CHAR_GETTING_IN_TO_A_CAR( sub_5992() )))
    {
        GET_VEHICLE_PLAYER_WOULD_ENTER( sub_5923(), ref uVar10 );
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
            uVar12 = {sub_42818( sub_5992(), 1 )};
            if (GET_NTH_CLOSEST_CAR_NODE( uVar12._fU0, uVar12._fU4, uVar12._fU8, 5, ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 ))
            {
                return sub_89581( iParam0, uVar12 );
            }
            else
            {
                return sub_75457( iParam0 );
            }
        }
        GET_CHAR_SPEED( iParam0->_fU8, ref fVar5 );
        GET_CHAR_SPEED( iParam0->_fU0, ref fVar4 );
        fVar7 = 50.00000000;
        if ((fVar4 < 2.50000000) AND (fVar6 < 9.00000000))
        {
            return sub_75457( iParam0 );
        }
        else if (fVar6 < 15.00000000)
        {
            if (fVar6 < 1.50000000)
            {
                fVar7 = 0.00000000;
            }
            else if (fVar5 < 0.50000000)
            {
                return sub_75457( iParam0 );
            }
            else if (fVar5 < 4.00000000)
            {
                fVar7 = fVar5;
            }
            else
            {
                GET_MODEL_DIMENSIONS( uVar11, ref uVar15, ref uVar18 );
                if (iParam0->_fU8 != sub_5992())
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
                else if (sub_89993())
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
        else if (((sub_82766( iParam0->_fU4 )) || (sub_18619( iParam0, 4 ))) AND ((sub_78488( iParam0 )) >= l_U133))
        {
            bVar9 = sub_90263( iParam0, l_U133, l_U134, fVar5 + 4.00000000 );
            if (bVar9)
            {
                if (sub_18619( iParam0, 128 ))
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
            if (sub_18619( iParam0, 128 ))
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
            return sub_75457( iParam0 );
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
            if (sub_18619( iParam0, 128 ))
            {
                TASK_CAR_MISSION_PED_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, iParam0->_fU28, iVar8, 12, -1 );
            }
            else
            {
                TASK_CAR_MISSION_PED_TARGET( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, iParam0->_fU28, iVar8, 12, -1 );
            }
        }
        fVar7 = fVar6;
        sub_91707( ref fVar7, 5.00000000, 50.00000000 );
        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, fVar7 );;
    }
    return 2;
}

void sub_89581(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown Result;

    uVar6 = {iParam0->_fU16};
    iParam0->_fU16 = {uParam1};
    uVar9 = iParam0->_fU88;
    sub_7039( iParam0, 64 );
    Result = sub_82141( iParam0 );
    iParam0->_fU16 = {uVar6};
    iParam0->_fU88 = uVar9;
    return Result;
}

boolean sub_89993()
{
    return ((IS_CONTROL_PRESSED( 0, 41 )) || (IS_CONTROL_PRESSED( 0, 44 ))) || (IS_CONTROL_PRESSED( 0, 45 ));
}

int sub_90263(int iParam0, unknown uParam1, float fParam2, unknown uParam3)
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
                    if (((NOT (CAM_IS_SPHERE_VISIBLE( uVar19, uVar15._fU0, uVar15._fU4, uVar15._fU8, 6.00000000 ))) AND ((VDIST( uVar15, sub_42818( sub_5992(), 1 ) )) > fParam2)) AND ((VDIST2( uVar15, vVar6 )) > 9.00000000))
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

int sub_91707(unknown uParam0, float fParam1, float fParam2)
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

void sub_93075(unknown uParam0)
{
    sub_3996( uParam0, 2 );
    return;
}

void sub_93160(int iParam0)
{
    if (PLAYER_IS_INTERACTING_WITH_GARAGE())
    {
        if (NOT (sub_18619( iParam0, 256 )))
        {
            if (DOES_CHAR_EXIST( iParam0->_fU0 ))
            {
                if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
                {
                    if (IS_CHAR_VISIBLE( iParam0->_fU0 ))
                    {
                        if (NOT (sub_83487( sub_5992(), iParam0->_fU0, 1 )))
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
                if (NOT (IS_CHAR_IN_CAR( sub_5992(), iParam0->_fU4 )))
                {
                    SET_CAR_VISIBLE( iParam0->_fU4, 0 );
                    FREEZE_CAR_POSITION( iParam0->_fU4, 1 );
                    SET_CAR_COLLISION( iParam0->_fU4, 0 );
                }
            }
            sub_7039( iParam0, 256 );
        }
    }
    else if (sub_18619( iParam0, 256 ))
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
                sub_18606( iParam0, 256 );
            }
        }
    }
    return;
}

int sub_93711(unknown uParam0, int iParam1)
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

void sub_94006(unknown uParam0)
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
                                            sub_6033( ref (uParam0^)[J], (uParam0^)[iVar4]._fU0 );
                                            iVar41[J] = 0;
                                        }
                                        else if ((uParam0^)[J]._fU8 == (uParam0^)[iVar4]._fU0)
                                        {
                                            sub_6033( ref (uParam0^)[J], (uParam0^)[I]._fU0 );
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
            if ((((NOT ((uParam0^)[I]._fU8 == nil)) AND (iVar41[I])) AND (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))) AND (NOT ((uParam0^)[I]._fU8 == sub_5992())))
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
                                                sub_6033( ref (uParam0^)[iVar4], (uParam0^)[I]._fU0 );
                                                iVar41[iVar4] = 0;
                                            }
                                        }
                                        uVar53 = (uParam0^)[I]._fU40;
                                        uVar54 = (uParam0^)[iVar55]._fU40;
                                        sub_6033( ref (uParam0^)[I], (uParam0^)[iVar55]._fU8 );
                                        sub_6033( ref (uParam0^)[iVar55], (uParam0^)[I]._fU0 );
                                        (uParam0^)[I]._fU40 = uVar54;
                                        (uParam0^)[iVar55]._fU40 = uVar53;
                                        for ( iVar4 = 0; iVar4 < (uParam0^); iVar4++ )
                                        {
                                            if ((((uParam0^)[iVar4]._fU8 == (uParam0^)[I]._fU0) AND (NOT (iVar4 == iVar55))) AND (iVar41[iVar4]))
                                            {
                                                sub_6033( ref (uParam0^)[iVar4], (uParam0^)[iVar55]._fU0 );
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

void sub_96104()
{
    unknown uVar2;

    if ((NOT (IS_CHAR_INJURED( l_U871[1] ))) AND (NOT (IS_CAR_DEAD( l_U1068[0] ))))
    {
        GET_SCRIPT_TASK_STATUS( l_U871[1], 11, ref l_U799 );
        if ((NOT (IS_CHAR_IN_CAR( l_U871[1], l_U1068[0] ))) AND (l_U799 == 7))
        {
            TASK_ENTER_CAR_AS_PASSENGER( l_U871[1], l_U1068[0], -2, 0 );
        }
        if ((NOT (IS_CHAR_IN_ANY_CAR( l_U871[1] ))) AND (IS_CAR_PASSENGER_SEAT_FREE( l_U1068[0], 0 )))
        {
            GET_GAME_VIEWPORT_ID( ref uVar2 );
            GET_CAR_COORDINATES( l_U1068[0], ref l_U713._fU0, ref l_U713._fU4, ref l_U713._fU8 );
            if (CAM_IS_SPHERE_VISIBLE( uVar2, l_U713._fU0, l_U713._fU4, l_U713._fU8, 5.00000000 ))
            {
                GET_CAR_COORDINATES( l_U1068[0], ref l_U713._fU0, ref l_U713._fU4, ref l_U713._fU8 );
                if (CAM_IS_SPHERE_VISIBLE( uVar2, l_U713._fU0, l_U713._fU4, l_U713._fU8, 5.00000000 ))
                {
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U871[1], l_U1068[0], 0 );
                }
            }
        }
    }
    if ((NOT (IS_CHAR_INJURED( l_U871[3] ))) AND (NOT (IS_CAR_DEAD( g_U11087[0] ))))
    {
        GET_SCRIPT_TASK_STATUS( l_U871[3], 11, ref l_U799 );
        if ((NOT (IS_CHAR_IN_CAR( l_U871[3], g_U11087[0] ))) AND (l_U799 == 7))
        {
            TASK_ENTER_CAR_AS_PASSENGER( l_U871[3], g_U11087[0], -2, 0 );
        }
        if ((NOT (IS_CHAR_IN_ANY_CAR( l_U871[3] ))) AND (IS_CAR_PASSENGER_SEAT_FREE( g_U11087[0], 0 )))
        {
            GET_GAME_VIEWPORT_ID( ref uVar2 );
            GET_CAR_COORDINATES( g_U11087[0], ref l_U713._fU0, ref l_U713._fU4, ref l_U713._fU8 );
            if (CAM_IS_SPHERE_VISIBLE( uVar2, l_U713._fU0, l_U713._fU4, l_U713._fU8, 5.00000000 ))
            {
                GET_CAR_COORDINATES( g_U11087[0], ref l_U713._fU0, ref l_U713._fU4, ref l_U713._fU8 );
                if (CAM_IS_SPHERE_VISIBLE( uVar2, l_U713._fU0, l_U713._fU4, l_U713._fU8, 5.00000000 ))
                {
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U871[3], g_U11087[0], 0 );
                }
            }
        }
    }
    if ((NOT (IS_CHAR_INJURED( l_U871[5] ))) AND (NOT (IS_CAR_DEAD( g_U11087[1] ))))
    {
        GET_SCRIPT_TASK_STATUS( l_U871[5], 11, ref l_U799 );
        if ((NOT (IS_CHAR_IN_CAR( l_U871[5], g_U11087[1] ))) AND (l_U799 == 7))
        {
            TASK_ENTER_CAR_AS_PASSENGER( l_U871[5], g_U11087[1], -2, 0 );
        }
        if ((NOT (IS_CHAR_IN_ANY_CAR( l_U871[5] ))) AND (IS_CAR_PASSENGER_SEAT_FREE( g_U11087[1], 0 )))
        {
            GET_GAME_VIEWPORT_ID( ref uVar2 );
            GET_CAR_COORDINATES( g_U11087[1], ref l_U713._fU0, ref l_U713._fU4, ref l_U713._fU8 );
            if (CAM_IS_SPHERE_VISIBLE( uVar2, l_U713._fU0, l_U713._fU4, l_U713._fU8, 5.00000000 ))
            {
                GET_CAR_COORDINATES( g_U11087[1], ref l_U713._fU0, ref l_U713._fU4, ref l_U713._fU8 );
                if (CAM_IS_SPHERE_VISIBLE( uVar2, l_U713._fU0, l_U713._fU4, l_U713._fU8, 5.00000000 ))
                {
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U871[5], g_U11087[1], 0 );
                }
            }
        }
    }
    return;
}

void sub_97210()
{
    int I;

    if (LOCATE_CHAR_ANY_MEANS_3D( l_U592, l_U734[l_U697]._fU0, l_U734[l_U697]._fU4, l_U734[l_U697]._fU8, 100.00000000, 100.00000000, 100.00000000, 0 ))
    {
        if (NOT (DOES_BLIP_EXIST( l_U1073[0] )))
        {
            SET_ROUTE( l_U1073[0], 0 );
        }
    }
    if ((((NOT (sub_22422( l_U793 ))) AND (sub_50585())) AND (l_U661 == 0)) AND (NOT (IS_CHAR_INJURED( sub_5992() ))))
    {
        sub_22824( "E1FCJ3_LGO", ref l_U793, 7, 1 );
        if (NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 )))
        {
            sub_23946( l_U592, sub_23806( 1 ), g_U11028[0]._fU0, 39 );
        }
        l_U661 = 1;
    }
    I = 0;
    for ( I = 0; I <= 19; I++ )
    {
        if (DOES_CHAR_EXIST( l_U850[I] ))
        {
            if (((l_U655 == 0) AND (NOT (IS_CHAR_DEAD( l_U850[I] )))) AND (NOT (sub_22422( l_U793 ))))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U592, l_U850[I], 100.00000000, 100.00000000, 100.00000000, 0 ))
                {
                    PRINT_NOW( "GW_COMMAND_03", 7500, 1 );
                    l_U655 = 1;
                }
            }
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U850[I], l_U592, 0 ))
            {
                l_U663 = 3;
            }
            if (NOT (IS_CHAR_DEAD( l_U850[I] )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U592, l_U850[I], 15.00000000, 15.00000000, 10.00000000, 0 ))
                {
                    l_U663 = 3;
                }
                if (IS_CHAR_ARMED( l_U592, 7 ))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U592, l_U850[I], 20.00000000, 20.00000000, 10.00000000, 0 ))
                    {
                        l_U663 = 3;
                    }
                }
                GET_CHAR_COORDINATES( l_U850[I], ref l_U713._fU0, ref l_U713._fU4, ref l_U713._fU8 );
                if ((IS_SNIPER_BULLET_IN_AREA( l_U713._fU0 - 6, l_U713._fU4 - 6, l_U713._fU8 - 6, l_U713._fU0 + 6, l_U713._fU4 + 6, l_U713._fU8 + 6 )) || (IS_BULLET_IN_AREA( l_U713._fU0, l_U713._fU4, l_U713._fU8, 12.00000000, 1 )))
                {
                    l_U663 = 3;
                }
            }
        }
    }
    for ( I = 0; I <= 4; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1062[I] ))
        {
            if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U1062[I], l_U592 ))
            {
                l_U663 = 3;
            }
        }
        if (NOT (IS_CAR_DEAD( l_U1062[I] )))
        {
            if (IS_CHAR_IN_CAR( l_U592, l_U1062[I] ))
            {
                l_U663 = 3;
            }
        }
    }
    if ((((NOT (sub_22422( l_U793 ))) AND (l_U660 == 0)) AND (g_U39123 == 0)) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED()))
    {
        PRINT_HELP( "Leader_4" );
        l_U660 = 1;
    }
    sub_73149();
    sub_73503();
    sub_74415( ref l_U879 );
    sub_94006( ref l_U879 );
    sub_42385();
    sub_96104();
    return;
}

void sub_98190()
{
    int I;

    if (l_U622 == 0)
    {
        I = 0;
        sub_7039( ref l_U879[0], 1 );
        sub_7039( ref g_U11028[0], 1 );
        sub_7039( ref g_U11028[1], 1 );
        sub_98253();
        if (l_U655 == 0)
        {
            PRINT_NOW( "GW_COMMAND_03", 7500, 1 );
            l_U655 = 1;
        }
        if (DOES_BLIP_EXIST( l_U1073[0] ))
        {
            SET_ROUTE( l_U1073[0], 0 );
        }
        for ( I = 0; I <= 6; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U871[I] )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U871[I], 0 );
                CLEAR_CHAR_TASKS( l_U871[I] );
                SET_CHAR_RELATIONSHIP( l_U871[I], 5, 23 );
                SET_CHAR_KEEP_TASK( l_U871[I], 1 );
                if (NOT (IS_CHAR_INJURED( l_U850[I] )))
                {
                    TASK_COMBAT( l_U871[I], l_U850[I] );
                }
            }
        }
        for ( I = 0; I <= 19; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U850[I] )))
            {
                CLEAR_CHAR_TASKS( l_U850[I] );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U850[I], 0 );
                SET_CHAR_RELATIONSHIP( l_U850[I], 5, 0 );
                SET_CHAR_KEEP_TASK( l_U850[I], 1 );
                TASK_COMBAT( l_U850[I], l_U592 );
            }
        }
        sub_2091();
        SET_CAR_DENSITY_MULTIPLIER( 0.40000000 );
        SET_PED_DENSITY_MULTIPLIER( 0.40000000 );
        l_U622 = 1;
    }
    if (((((l_U654 == 0) AND (NOT (sub_22422( l_U793 )))) AND (NOT IS_MESSAGE_BEING_DISPLAYED())) AND (sub_50585())) AND (NOT (IS_CHAR_INJURED( sub_5992() ))))
    {
        sub_22824( "E1FCJ3_ATG", ref l_U793, 7, 1 );
        l_U654 = 1;
    }
    sub_98966();
    sub_73503();
    sub_102052();
    sub_105006();
    sub_105377();
    return;
}

void sub_98253()
{
    int I;

    if (NOT (IS_CHAR_INJURED( l_U879[0]._fU0 )))
    {
        SET_CHAR_PROOFS( l_U879[0]._fU0, 0, 0, 0, 0, 0 );
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
        if (NOT (IS_CHAR_INJURED( l_U871[(I * 2) + 1] )))
        {
            SET_CHAR_PROOFS( l_U871[(I * 2) + 1], 0, 0, 0, 0, 0 );
        }
    }
    return;
}

void sub_98966()
{
    int iVar2;
    unknown uVar3;

    GET_GAME_TIMER( ref l_U707 );
    if (((l_U707 - l_U708) > l_U709) AND (sub_99003()))
    {
        if (NOT (IS_CHAR_INJURED( l_U592 )))
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 7, ref iVar2 );
            if (iVar2 == 0)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U592 )))
                {
                    SAY_AMBIENT_SPEECH( l_U592, "LOST_TAUNT_ANGELS_OF_DEATH", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U708 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U709 );
                }
            }
            else if (iVar2 == 1)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U592 )))
                {
                    SAY_AMBIENT_SPEECH( l_U592, "GENERIC_CELEBRATION", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U708 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U709 );
                }
            }
            else if (iVar2 == 2)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U592 )))
                {
                    SAY_AMBIENT_SPEECH( l_U592, "SHOOT", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U708 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U709 );
                }
            }
            else if (iVar2 == 3)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U592 )))
                {
                    SAY_AMBIENT_SPEECH( l_U592, "FIGHT", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U708 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U709 );
                }
            }
            else if (iVar2 == 4)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U592 )))
                {
                    SAY_AMBIENT_SPEECH( l_U592, "GENERIC_CURSE", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U708 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U709 );
                }
            }
            else if (iVar2 == 5)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U592 )))
                {
                    SAY_AMBIENT_SPEECH( l_U592, "GENERIC_INSULT", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U708 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U709 );
                }
            }
            else if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U592 )))
            {
                SAY_AMBIENT_SPEECH( l_U592, "LOST_WHOOP", 1, 1, 2 );
                GET_GAME_TIMER( ref l_U708 );
                GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U709 );
            };;;;;;;
        }
    }
    GET_GAME_TIMER( ref l_U704 );
    if (((l_U704 - l_U705) > l_U706) AND (sub_99003()))
    {
        l_U871[0] = l_U879[0]._fU0;
        l_U871[2] = g_U11081[0];
        l_U871[4] = g_U11081[0];
        GENERATE_RANDOM_INT_IN_RANGE( 0, 6, ref uVar3 );
        if (NOT (IS_CHAR_INJURED( l_U871[uVar3] )))
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref iVar2 );
            if (iVar2 == 0)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U871[uVar3] )))
                {
                    SAY_AMBIENT_SPEECH( l_U871[uVar3], "BIKER_PASSENGER_SHOOT_GENERIC", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U705 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U706 );
                }
            }
            else if (iVar2 == 1)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U871[uVar3] )))
                {
                    SAY_AMBIENT_SPEECH( l_U871[uVar3], "COME_UNDER_ATTACK", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U705 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U706 );
                }
            }
            else if (iVar2 == 2)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U871[uVar3] )))
                {
                    SAY_AMBIENT_SPEECH( l_U871[uVar3], "LOST_TAUNT_ANGELS_OF_DEATH", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U705 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U706 );
                }
            }
            else if (iVar2 == 3)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U871[uVar3] )))
                {
                    SAY_AMBIENT_SPEECH( l_U871[uVar3], "LOST_WHOOP", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U705 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U706 );
                }
            }
            else if (iVar2 == 4)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U871[uVar3] )))
                {
                    SAY_AMBIENT_SPEECH( l_U871[uVar3], "GENERIC_CURSE", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U705 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U706 );
                }
            }
            else if (iVar2 == 5)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U871[uVar3] )))
                {
                    SAY_AMBIENT_SPEECH( l_U871[uVar3], "GENERIC_INSULT", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U705 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U706 );
                }
            }
            else if (iVar2 == 6)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U871[uVar3] )))
                {
                    SAY_AMBIENT_SPEECH( l_U871[uVar3], "SHOOT", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U705 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U706 );
                }
            }
            else if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U871[uVar3] )))
            {
                SAY_AMBIENT_SPEECH( l_U871[uVar3], "TARGET", 1, 1, 2 );
                GET_GAME_TIMER( ref l_U705 );
                GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U706 );
            };;;;;;;;
        }
    }
    GET_GAME_TIMER( ref l_U701 );
    if (((l_U701 - l_U702) > l_U703) AND (sub_99003()))
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, l_U665, ref uVar3 );
        if (NOT (IS_CHAR_INJURED( l_U850[uVar3] )))
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 6, ref iVar2 );
            if (l_U667 == 0)
            {
                if (iVar2 == 0)
                {
                    if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U850[uVar3] )))
                    {
                        SAY_AMBIENT_SPEECH( l_U850[uVar3], "SHOOT", 1, 1, 2 );
                        GET_GAME_TIMER( ref l_U702 );
                        GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U703 );
                    }
                }
                else if (iVar2 == 1)
                {
                    if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U850[uVar3] )))
                    {
                        SAY_AMBIENT_SPEECH( l_U850[uVar3], "GENERIC_INSULT", 1, 1, 2 );
                        GET_GAME_TIMER( ref l_U702 );
                        GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U703 );
                    }
                }
                else if (iVar2 == 2)
                {
                    if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U850[uVar3] )))
                    {
                        SAY_AMBIENT_SPEECH( l_U850[uVar3], "GENERIC_CURSE", 1, 1, 2 );
                        GET_GAME_TIMER( ref l_U702 );
                        GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U703 );
                    }
                }
                else if (iVar2 == 3)
                {
                    if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U850[uVar3] )))
                    {
                        SAY_AMBIENT_SPEECH( l_U850[uVar3], "BIKER_PASSENGER_SHOOT_GENERIC", 1, 1, 2 );
                        GET_GAME_TIMER( ref l_U702 );
                        GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U703 );
                    }
                }
                else if (iVar2 == 4)
                {
                    if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U850[uVar3] )))
                    {
                        SAY_AMBIENT_SPEECH( l_U850[uVar3], "GENERIC_CELEBRATION", 1, 1, 2 );
                        GET_GAME_TIMER( ref l_U702 );
                        GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U703 );
                    }
                }
                else if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U850[uVar3] )))
                {
                    SAY_AMBIENT_SPEECH( l_U850[uVar3], "ANGELS_OF_DEATH_TAUNT_LOST", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U702 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U703 );
                };;;;;;
            }
            else if (iVar2 == 0)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U850[uVar3] )))
                {
                    SAY_AMBIENT_SPEECH( l_U850[uVar3], "SHOOT", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U702 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U703 );
                }
            }
            else if (iVar2 == 1)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U850[uVar3] )))
                {
                    SAY_AMBIENT_SPEECH( l_U850[uVar3], "GENERIC_INSULT", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U702 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U703 );
                }
            }
            else if (iVar2 == 2)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U850[uVar3] )))
                {
                    SAY_AMBIENT_SPEECH( l_U850[uVar3], "GENERIC_CURSE", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U702 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U703 );
                }
            }
            else if (iVar2 == 3)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U850[uVar3] )))
                {
                    SAY_AMBIENT_SPEECH( l_U850[uVar3], "SHIT", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U702 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U703 );
                }
            }
            else if (iVar2 == 4)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U850[uVar3] )))
                {
                    SAY_AMBIENT_SPEECH( l_U850[uVar3], "TARGET", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U702 );
                    GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U703 );
                }
            }
            else if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U850[uVar3] )))
            {
                SAY_AMBIENT_SPEECH( l_U850[uVar3], "FIGHT", 1, 1, 2 );
                GET_GAME_TIMER( ref l_U702 );
                GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U703 );
            };;;;;;;
        }
    }
    return;
}

int sub_99003()
{
    int I;

    for ( I = 0; I <= 19; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U850[I] )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U850[I], l_U592, 35, 35, 35, 0 ))
            {
                return 1;
            }
        }
    }
    for ( I = 0; I <= 11; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U824[I] )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U824[I], l_U592, 35, 35, 35, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_102052()
{
    int iVar2;
    float fVar3;
    int I;
    int iVar5;

    iVar2 = 0;
    fVar3 = 0.00000000;
    I = 0;
    iVar5 = 101;
    if (l_U800 == 0)
    {
        if (g_U39219 < 10)
        {
            l_U801[1] = 1;
            l_U801[2] = 1;
        }
        else if (g_U39219 < 20)
        {
            l_U801[2] = 1;
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
            if (l_U801[I] == 0)
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
                        l_U801[I] = 1;
                    }
                }
                else if (fVar3 > (50 / I))
                {
                    l_U801[I] = 1;
                }
                GENERATE_RANDOM_INT_IN_RANGE( 10000 * (I + 1), 20000 * (I + 1), ref l_U805[I] );
            }
        }
        SETTIMERB( 0 );
        l_U800 = 1;
    }
    for ( I = 0; I <= 2; I++ )
    {
        if ((TIMERB() > l_U805[I]) AND (l_U801[I] == 0))
        {
            PRINTSTRING( "\n\n    ----> Try Create Backup: " );
            PRINTINT( I );
            PRINTNL();
            PRINTNL();
            l_U810 = I;
            if (sub_102508( ref l_U814, ref l_U811, ref l_U809 ))
            {
                iVar2 = 1;
            }
            else if (l_U809 > 25)
            {
                if (l_U812 > 0.00000000)
                {
                    l_U814 = {l_U817};
                    l_U811 = l_U813;
                    iVar2 = 1;
                }
            }
            if (iVar2 == 1)
            {
                PRINTSTRING( "\n\n    ----> Create Backup: " );
                PRINTINT( I );
                PRINTNL();
                PRINTNL();
                sub_103291();
            }
            l_U801[I] = 1;
            l_U809 = 25 + (I * 3);
        }
    }
    return;
}

int sub_102508(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;

    for ( I = 0; I < 10; I++ )
    {
        if ((uParam2^) >= 25)
        {
            if (sub_102546( uParam0, uParam1, (uParam2^) ))
            {
                return 1;
            }
        }
        else if (sub_102546( uParam0, uParam1, -1 ))
        {
            return 1;
        }
        (uParam2^)++;
    }
    return 0;
}

int sub_102546(unknown uParam0, unknown uParam1, int iParam2)
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

    if (IS_PLAYER_PLAYING( sub_5923() ))
    {
        GET_CHAR_COORDINATES( sub_5992(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        if (IS_CHAR_IN_WATER( sub_5992() ))
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
        if (fVar14 > l_U812)
        {
            l_U817 = {uVar8};
            l_U813 = uVar11;
            l_U812 = fVar14;
        }
    }
    return 0;
}

void sub_103291()
{
    int iVar2;
    int iVar3;
    int J;
    int I;
    int iVar6;
    char[64] cVar7;

    iVar2 = l_U810;
    GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref iVar3 );
    if (iVar3 < 51)
    {
        CREATE_CAR( l_U1128[l_U671], l_U814._fU0, l_U814._fU4, l_U814._fU8, ref l_U820[l_U810], 1 );
        if (l_U1128[l_U671] != 904750859)
        {
            CHANGE_CAR_COLOUR( l_U820[l_U810], l_U673[l_U670], l_U678[l_U670] );
            SET_EXTRA_CAR_COLOURS( l_U820[l_U810], l_U683[l_U670], l_U688[l_U670] );
        }
        if (l_U670 < 2)
        {
            TURN_OFF_VEHICLE_EXTRA( l_U820[l_U810], 5, l_U625[l_U670] );
            TURN_OFF_VEHICLE_EXTRA( l_U820[l_U810], 6, l_U628[l_U670] );
            TURN_OFF_VEHICLE_EXTRA( l_U820[l_U810], 7, l_U631[l_U670] );
            TURN_OFF_VEHICLE_EXTRA( l_U820[l_U810], 8, l_U634[l_U670] );
        }
    }
    else
    {
        CREATE_CAR( l_U1128[l_U670], l_U814._fU0, l_U814._fU4, l_U814._fU8, ref l_U820[l_U810], 1 );
        if (l_U1128[l_U670] != 904750859)
        {
            CHANGE_CAR_COLOUR( l_U820[l_U810], l_U673[l_U671], l_U678[l_U671] );
            SET_EXTRA_CAR_COLOURS( l_U820[l_U810], l_U683[l_U671], l_U688[l_U671] );
        }
        if (l_U671 < 2)
        {
            TURN_OFF_VEHICLE_EXTRA( l_U820[l_U810], 5, l_U625[l_U671] );
            TURN_OFF_VEHICLE_EXTRA( l_U820[l_U810], 6, l_U628[l_U671] );
            TURN_OFF_VEHICLE_EXTRA( l_U820[l_U810], 7, l_U631[l_U671] );
            TURN_OFF_VEHICLE_EXTRA( l_U820[l_U810], 8, l_U634[l_U671] );
        }
    }
    SET_CAR_HEADING( l_U820[l_U810], l_U811 );
    SET_CAR_ON_GROUND_PROPERLY( l_U820[l_U810] );
    for ( J = 0; J <= 3; J++ )
    {
        if (iVar2 < 3)
        {
            if (NOT (IS_CAR_DEAD( l_U820[l_U810] )))
            {
                GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref iVar3 );
                if (iVar3 < 51)
                {
                    CREATE_CHAR_INSIDE_CAR( l_U820[l_U810], 7, l_U1120[l_U668], ref l_U824[iVar2] );
                }
                else
                {
                    CREATE_CHAR_INSIDE_CAR( l_U820[l_U810], 7, l_U1120[l_U669], ref l_U824[iVar2] );
                }
            }
        }
        else
        {
            while (l_U624 == 0)
            {
                if (NOT (IS_CAR_DEAD( l_U820[l_U810] )))
                {
                    I = 0;
                    iVar6 = 0;
                    GET_MAXIMUM_NUMBER_OF_PASSENGERS( l_U820[l_U810], ref iVar6 );
                    iVar6--;
                    for ( I = 0; I <= iVar6; I++ )
                    {
                        if ((IS_CAR_PASSENGER_SEAT_FREE( l_U820[l_U810], I )) AND (l_U624 == 0))
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref iVar3 );
                            if (iVar3 < 51)
                            {
                                CREATE_CHAR_AS_PASSENGER( l_U820[l_U810], 7, l_U1120[l_U668], I, ref l_U824[iVar2] );
                            }
                            else
                            {
                                CREATE_CHAR_AS_PASSENGER( l_U820[l_U810], 7, l_U1120[l_U669], I, ref l_U824[iVar2] );
                            }
                            l_U624 = 1;
                        }
                    }
                }
                l_U672++;
                if (l_U672 > 10)
                {
                    l_U624 = 1;
                }
                WAIT( 0 );
                sub_42385();
            }
            l_U672 = 0;
            l_U624 = 0;
        }
        if (NOT (IS_CHAR_INJURED( l_U824[iVar2] )))
        {
            SET_CHAR_RELATIONSHIP_GROUP( l_U824[iVar2], 23 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U824[iVar2] );
            SET_CHAR_DECISION_MAKER( l_U824[iVar2], l_U1107 );
            SET_COMBAT_DECISION_MAKER( l_U824[iVar2], l_U1109 );
            SET_CHAR_AS_ENEMY( l_U824[iVar2], 1 );
            SET_CHAR_RELATIONSHIP( l_U824[iVar2], 5, 0 );
            SET_INFORM_RESPECTED_FRIENDS( l_U824[iVar2], 150, 999 );
            sub_19241();
            GIVE_DELAYED_WEAPON_TO_CHAR( l_U824[iVar2], l_U1117, 25000, 0 );
            sub_69039();
            SET_CHAR_ACCURACY( l_U824[iVar2], l_U693 );
            sub_69278();
            SET_CHAR_SHOOT_RATE( l_U824[iVar2], l_U694 );
            sub_69501();
            SET_CHAR_FIRE_DAMAGE_MULTIPLIER( l_U824[iVar2], l_U788 );
            sub_69769();
            SET_CHAR_MAX_HEALTH( l_U824[iVar2], l_U695 );
            SET_CHAR_HEALTH( l_U824[iVar2], l_U695 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U824[iVar2], 1 );
            if (l_U667 == 0)
            {
                SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE( l_U824[iVar2], 3 );
            }
            TASK_COMBAT( l_U824[iVar2], l_U592 );
            if (NOT (DOES_BLIP_EXIST( l_U837[iVar2] )))
            {
                ADD_BLIP_FOR_CHAR( l_U824[iVar2], ref l_U837[iVar2] );
                SET_BLIP_AS_FRIENDLY( l_U837[iVar2], 0 );
            }
            StrCopy( ref cVar7, "Backup Ped ", 64 );
            StrCopy( ref cVar7, "Backup Ped ", 64 );
            ConcatString(ref cVar7, iVar2, 64);
            SET_CHAR_NAME_DEBUG( l_U824[iVar2], ref cVar7 );
        }
        iVar2 += 3;
    }
    return;
}

void sub_105006()
{
    int iVar2;
    int iVar3;
    int I;

    iVar2 = 0;
    if (l_U643 == 0)
    {
        I = 0;
        for ( I = 0; I <= 19; I++ )
        {
            if (((NOT (IS_CHAR_INJURED( l_U850[I] ))) AND (NOT (IS_CHAR_DEAD( l_U850[I] )))) AND (DOES_CHAR_EXIST( l_U850[I] )))
            {
                iVar2++;
            }
        }
        for ( I = 0; I <= 11; I++ )
        {
            if (((NOT (IS_CHAR_INJURED( l_U824[I] ))) AND (NOT (IS_CHAR_DEAD( l_U824[I] )))) AND (DOES_CHAR_EXIST( l_U824[I] )))
            {
                iVar2++;
            }
        }
        if (iVar2 < 4)
        {
            for ( I = 0; I <= 19; I++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U850[I] )))
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref iVar3 );
                    if (iVar3 <= 33)
                    {
                        PRINTSTRING( "\n\n    ----> ENEMY FLEE <----    \n\n" );
                        CLEAR_CHAR_TASKS( l_U850[I] );
                        SET_COMBAT_DECISION_MAKER( l_U850[I], l_U1111 );
                    }
                }
            }
            l_U643 = 1;
        }
    }
    return;
}

void sub_105377()
{
    int I;

    l_U623 = 1;
    I = 0;
    for ( I = 0; I <= 11; I++ )
    {
        if (((IS_CHAR_INJURED( l_U824[I] )) || (IS_CHAR_DEAD( l_U824[I] ))) || (NOT (DOES_CHAR_EXIST( l_U824[I] ))))
        {
            if (DOES_BLIP_EXIST( l_U837[I] ))
            {
                REMOVE_BLIP( l_U837[I] );
            }
        }
        else
        {
            l_U623 = 0;
        }
    }
    for ( I = 0; I <= 19; I++ )
    {
        if (((IS_CHAR_INJURED( l_U850[I] )) || (IS_CHAR_DEAD( l_U850[I] ))) || (NOT (DOES_CHAR_EXIST( l_U850[I] ))))
        {
            if (DOES_BLIP_EXIST( l_U1073[I] ))
            {
                REMOVE_BLIP( l_U1073[I] );
            }
        }
        else
        {
            l_U623 = 0;
        }
    }
    if ((l_U623 == 1) AND (l_U619 == 0))
    {
        l_U663 = -1;
        l_U619 = 1;
    }
    return;
}

void sub_105734()
{
    int iVar2;

    sub_105743();
    g_U39219++;
    INCREMENT_INT_STAT( 177, 1 );
    CLEAR_WANTED_LEVEL( sub_5923() );
    sub_105873( 1 );
    iVar2 = 1000 + (g_U39219 * 250);
    if (iVar2 > 15000)
    {
        iVar2 = 15000;
    }
    sub_106046( iVar2 );
    if (g_U39219 == g_U39121)
    {
        sub_106098( 1 );
    }
    sub_1251( 1 );
    sub_1251( 2 );
    sub_1251( 3 );
    if ((g_U15728[8] == 1) || (g_U12306[1]._fU108 == 1))
    {
        sub_1251( 4 );
    }
    sub_106805();
    if ((g_U15728[8] == 0) AND (g_U12306[1]._fU108 == 0))
    {
        sub_108732();
    }
    g_U39101 = 1;
    sub_108767( 0.50000000 );
    l_U617 = 0;
    g_U39124 = 1;
    sub_110887();
    return;
}

void sub_105743()
{
    if ((sub_50585()) AND (NOT (IS_CHAR_INJURED( sub_5992() ))))
    {
        sub_22824( "E1FCJ3_KG", ref l_U793, 7, 1 );
        sub_23946( l_U592, sub_50950( 1 ), l_U592, 39 );
    }
    return;
}

void sub_105873(unknown uParam0)
{
    if (g_U10684)
    {
        g_U10684 = 0;
        return;
    }
    SET_BIT( ref g_U10681._fU0, 1 );
    sub_105924( ref g_U10681._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10681._fU0, 3 );
    g_U10681._fU4 = 0;
    g_U10681._fU8 = 0;
    return;
}

void sub_105924(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_106046(unknown uParam0)
{
    ADD_SCORE( sub_5923(), uParam0 );
    return;
}

void sub_106098(unknown uParam0)
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
            sub_106167( 7, iVar3 );
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

void sub_106167(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_106337( 0 );
    return;
}

void sub_106337(boolean bParam0)
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
        sub_106582();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_106582()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

void sub_106805()
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
        sub_106871();
        sub_106956();
        sub_107274();
    }
    bVar3 = false;
    for ( I = 0; I < 6; I++ )
    {
        if (g_U39058[I]._fU4)
        {
            g_U39058[I]._fU4 = 0;
            g_U39058[I]._fU12++;
            g_U39058[I]._fU20 = -2;
            if (sub_108512( g_U39058[I]._fU16 ))
            {
                g_U39104 = 1;
            }
            if (sub_108602( g_U39058[I]._fU16 ))
            {
                g_U39105 = 1;
            }
            bVar3 = true;
        }
    }
    return;
}

void sub_106871()
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

void sub_106956()
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

void sub_107274()
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
            sub_107439( iVar11 );
            sub_107861( iVar11 );
            bVar9 = true;
        }
        if (NOT bVar9)
        {
            iVar12++;
        }
    }
    return;
}

void sub_107439(unknown uParam0)
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
    sub_107523( iVar3, uVar4, uVar5 );
    return;
}

void sub_107523(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_107861(unknown uParam0)
{
    unknown uVar3;

    g_U38937[uParam0]._fU0 = 1;
    g_U38937[uParam0]._fU4 = 0;
    g_U38937[uParam0]._fU12 = 1;
    g_U38937[uParam0]._fU16 = sub_107912();
    uVar3 = g_U38937[uParam0]._fU24;
    g_U38937[uParam0]._fU24 = -1;
    sub_108101( uVar3 );
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

void sub_107912()
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

void sub_108101(int iParam0)
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

int sub_108512(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    uVar3 = {sub_15701( uParam0 )};
    uVar7 = GET_STRING_FROM_TEXT_FILE( ref uVar3 );
    if (COMPARE_STRING( uVar7, "Terry" ))
    {
        return 1;
    }
    return 0;
}

int sub_108602(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    uVar3 = {sub_15701( uParam0 )};
    uVar7 = GET_STRING_FROM_TEXT_FILE( ref uVar3 );
    if (COMPARE_STRING( uVar7, "Clay" ))
    {
        return 1;
    }
    return 0;
}

void sub_108732()
{
    sub_106805();
    return;
}

void sub_108767(unknown uParam0)
{
    int I;

    for ( I = 0; I < 2; I++ )
    {
        sub_108793( I, uParam0, 0 );
    }
    g_U11101 = 1;
    return;
}

void sub_108793(int iParam0, unknown uParam1, unknown uParam2)
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
        sub_109563( iParam0 );
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

void sub_109563(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_INJURED( g_U11081[uParam0] )))
    {
        SET_CHAR_MAX_HEALTH( g_U11081[uParam0], FLOOR( g_U11144[uParam0] ) );
        GET_CHAR_HEALTH( g_U11081[uParam0], ref iVar3 );
        iVar3 += FLOOR( g_U11165[uParam0] );
        SET_CHAR_HEALTH( g_U11081[uParam0], iVar3 );
        GIVE_WEAPON_TO_CHAR( g_U11081[uParam0], sub_109702( g_U11147[uParam0], uParam0 ), 30000, 0 );
        GIVE_WEAPON_TO_CHAR( g_U11081[uParam0], sub_110356( g_U11147[uParam0], uParam0 ), 30000, 0 );
        SET_CURRENT_CHAR_WEAPON( g_U11081[uParam0], sub_110356( g_U11147[uParam0], uParam0 ), 0 );
        SET_CHAR_ACCURACY( g_U11081[uParam0], FLOOR( g_U11150[uParam0] ) );
        SET_CHAR_SHOOT_RATE( g_U11081[uParam0], FLOOR( g_U11153[uParam0] ) );
        SET_CHAR_FIRE_DAMAGE_MULTIPLIER( g_U11081[uParam0], g_U11156[uParam0] );
    }
    return;
}

int sub_109702(float fParam0, unknown uParam1)
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

int sub_110356(float fParam0, unknown uParam1)
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

void sub_110887()
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

void sub_110992()
{
    if ((g_U10991 > 1) AND (NOT (IS_CHAR_INJURED( sub_5992() ))))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_5923(), 150 );
        SAY_AMBIENT_SPEECH( sub_5992(), "MISSION_FAIL_RAGE", 1, 1, 0 );
    }
    sub_1251( 1 );
    sub_1251( 2 );
    sub_1251( 3 );
    if ((g_U15728[8] == 1) || (g_U12306[1]._fU108 == 1))
    {
        sub_1251( 4 );
    }
    sub_1903();
    sub_2069();
    l_U617 = 0;
    g_U39124 = 0;
    sub_1193( l_U602, l_U616 );
    return;
}
