void main()
{
    l_U102 = 0.40000000;
    l_U103 = 0;
    l_U104 = 0;
    l_U114 = 0;
    l_U115 = 2086092453;
    l_U119 = -1;
    l_U120 = "NULL";
    l_U124 = {0.00000000, -1.00000000, 0.00000000};
    l_U129 = "BUY_BLEED";
    l_U130 = "BUY_FOWL";
    l_U131 = "BUY_BURG";
    l_U133 = 5;
    l_U134 = "FFD2_HICB";
    l_U135 = "FFD2_BYECB";
    l_U136 = "FFD2_HIBS";
    l_U137 = "FFD2_BYEBS";
    l_U138 = "FFD2_WANT";
    l_U139 = "FFD2_SERVE";
    l_U140 = "FFD_HICB";
    l_U141 = "FFD_BYECB";
    l_U142 = "FFD_HIBS";
    l_U143 = "FFD_BYEBS";
    l_U144 = "FFD_WANT";
    l_U145 = "FFD_SERVE";
    l_U160 = 0;
    l_U161 = 0;
    l_U162 = 0;
    l_U163 = 0;
    l_U164 = 0;
    l_U165 = 0;
    l_U166 = 0;
    l_U167 = 0;
    l_U169 = -1;
    l_U171 = 0;
    l_U105 = {l_U172._fU4[0]};
    l_U108 = l_U172._fU68[0];
    if (g_U10978)
    {
        l_U158 = 1;
    }
    else
    {
        l_U158 = 1;
    }
    sub_467();
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            switch (l_U103)
            {
                case 0:
                if (sub_546())
                {
                    l_U103 = 1;
                }
                break;
                case 1:
                if (sub_3197())
                {
                    if (DOES_OBJECT_EXIST( l_U116 ))
                    {
                        if (IS_OBJECT_ATTACHED( l_U116 ))
                        {
                            DETACH_OBJECT( l_U116, 1 );
                            MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U116 );
                        }
                    }
                    l_U103 = 2;
                }
                else
                {
                    sub_4199();
                }
                break;
                case 2:
                sub_4234();
                if ((NOT (IS_CHAR_INJURED( l_U113 ))) AND (NOT (IS_CHAR_INJURED( sub_2843() ))))
                {
                    if (l_U164)
                    {
                        if (IS_CHAR_ARMED( sub_2843(), 7 ))
                        {
                            l_U164 = 0;
                        }
                        else
                        {
                            GET_SCRIPT_TASK_STATUS( l_U113, 114, ref l_U117 );
                            if (l_U117 == 7)
                            {
                                TASK_START_SCENARIO_IN_PLACE( l_U113, "Scenario_Bouncer", -1082130432 );
                            }
                        }
                    }
                    else if (NOT (IS_CHAR_ARMED( sub_2843(), 7 )))
                    {
                        l_U164 = 1;
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( l_U113, 7, ref l_U117 );
                        if (l_U117 == 7)
                        {
                            TASK_HANDS_UP( l_U113, 100000 );
                        }
                    }
                }
                else if (NOT (IS_CHAR_DEAD( l_U113 )))
                {
                    SET_CHAR_HEALTH( l_U113, 0 );
                }
                break;
            }
        }
        else
        {
            sub_10416();
        }
    }
    return;
}

void sub_467()
{
    return;
}

int sub_546()
{
    int I;
    vector[8] vVar3;
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
    vector[2] vVar28;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    vector[3] vVar35;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    vector[3] vVar45;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;

    array(ref vVar3, 8);
    array(ref vVar28, 2);
    array(ref vVar35, 3);
    array(ref vVar45, 3);
    if (l_U119 == -1)
    {
        vVar3[0] = {1315.78400000, 360.50500000, 21.56040000};
        vVar3[1] = {1637.93700000, 226.00090000, 24.21200000};
        vVar3[2] = {1111.03400000, 1584.54200000, 15.90750000};
        vVar3[3] = {450.05810000, 1503.49100000, 15.31570000};
        vVar3[4] = {-426.81350000, 1194.16400000, 12.04700000};
        vVar3[5] = {-170.76790000, 287.44210000, 13.82010000};
        vVar3[6] = {-617.93780000, 132.64960000, 3.81120000};
        vVar3[7] = {-1006.28800000, 1628.26500000, 23.31400000};
        for ( I = 0; I < 8; I++ )
        {
            l_U112 = VDIST( l_U105, vVar3[I] );
            if (l_U112 < 5.00000000)
            {
                l_U119 = 1;
            }
        }
        vVar28[0] = {1201.51300000, -655.00120000, 15.84490000};
        vVar28[1] = {-597.12600000, 80.66280000, 4.21710000};
        for ( I = 0; I < 2; I++ )
        {
            l_U112 = VDIST( l_U105, vVar28[I] );
            if (l_U112 < 5.00000000)
            {
                l_U119 = 2;
            }
        }
        vVar35[0] = {1185.14500000, 360.41490000, 24.10330000};
        vVar35[1] = {-288.45650000, 1440.16900000, 19.43400000};
        vVar35[2] = {-121.76170000, 70.54410000, 13.80310000};
        for ( I = 0; I < 3; I++ )
        {
            l_U112 = VDIST( l_U105, vVar35[I] );
            if (l_U112 < 5.00000000)
            {
                l_U119 = 0;
            }
        }
        vVar45[0] = {886.06800000, -486.79000000, 16.00000000};
        vVar45[1] = {994.35020000, -692.12090000, 15.54020000};
        vVar45[2] = {1076.99800000, -586.39440000, 12.48680000};
        for ( I = 0; I < 3; I++ )
        {
            l_U112 = VDIST( l_U105, vVar45[I] );
            if (l_U112 < 5.00000000)
            {
                l_U119 = 3;
                if (I > 0)
                {
                    l_U165 = 1;
                }
            }
        }
    }
    else if (sub_1264())
    {
        return 1;
    }
    return 0;
}

int sub_1264()
{
    int iVar2;
    string sVar3;
    string sVar4;
    string sVar5;
    string sVar6;

    sVar3 = "GTAMloRoom05";
    sVar4 = "Bowl_GtaMloRoom";
    sVar5 = "Room_CBKitchn";
    sVar6 = "dinerMloRoom01";
    if (l_U119 == 0)
    {
        l_U120 = sVar5;
        iVar2 = sub_1368( 0, 2 );
        if (iVar2 == 0)
        {
            l_U114 = -1011530423;
        }
        else
        {
            l_U114 = -346378101;
        }
        l_U128 = 1;
        l_U132 = l_U130;
        l_U127 = 5;
        l_U167 = 1;
        sub_1463();
    }
    else if (l_U119 == 1)
    {
        l_U120 = sVar3;
        iVar2 = sub_1368( 0, 2 );
        if (iVar2 == 0)
        {
            l_U114 = 989485;
        }
        else
        {
            l_U114 = 924926104;
        }
        l_U128 = 1;
        l_U132 = l_U129;
        l_U127 = 4;
        l_U167 = 1;
        sub_1463();
    }
    else if (l_U119 == 2)
    {
        l_U120 = sVar4;
        iVar2 = sub_1368( 0, 2 );
        if (iVar2 == 0)
        {
            l_U114 = 989485;
        }
        else
        {
            l_U114 = 924926104;
        }
        l_U128 = 1;
        l_U132 = l_U129;
        l_U127 = 4;
        sub_1463();
    }
    else if (l_U119 == 3)
    {
        l_U120 = sVar6;
        l_U114 = 24233425;
        l_U128 = 1;
        l_U132 = l_U131;
        l_U127 = 6;
        sub_1463();
    };;;;
    if (l_U114 == 0)
    {
        ;
    }
    else
    {
        REQUEST_MODEL( l_U114 );
        REQUEST_MODEL( l_U115 );
        REQUEST_ANIMS( "amb@FFOOD_SERVER" );
        if (((HAS_MODEL_LOADED( l_U114 )) AND (HAS_MODEL_LOADED( l_U115 ))) AND (HAVE_ANIMS_LOADED( "amb@FFOOD_SERVER" )))
        {
            CREATE_CHAR( 4, l_U114, l_U105._fU0, l_U105._fU4, l_U105._fU8, ref l_U113, 1 );
            SET_CHAR_HEADING( l_U113, l_U108 );
            if (NOT l_U165)
            {
                SET_ROOM_FOR_CHAR_BY_NAME( l_U113, l_U120 );
            }
            TASK_START_SCENARIO_IN_PLACE( l_U113, "Scenario_Standing", -1082130432 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U113, 0.00000000, 1.50000000, 0.00000000, ref l_U121._fU0, ref l_U121._fU4, ref l_U121._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U113, l_U124._fU0, l_U124._fU4, l_U124._fU8, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
            sub_2738( l_U151 );
            if (NOT (IS_CHAR_DEAD( sub_2843() )))
            {
                sub_2911( 0, sub_2843(), "Niko", 0 );
            }
            sub_2911( 1, l_U113, l_U150, 0 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U113, 1 );
            SET_CHAR_WILL_COWER_INSTEAD_OF_FLEEING( l_U113, 1 );
            if (l_U114 == 24233425)
            {
                SET_AMBIENT_VOICE_NAME( l_U113, "F_Y_FAST_FOOD_WHITES" );
            }
            return 1;
        }
    }
    return 0;
}

void sub_1368(unknown uParam0, unknown Result)
{
    GENERATE_RANDOM_INT_IN_RANGE( uParam0, Result, ref Result );
    return Result;
}

void sub_1463()
{
    if (l_U114 == 924926104)
    {
        l_U146 = l_U142;
        l_U147 = l_U143;
        l_U148 = l_U144;
        l_U149 = l_U145;
        l_U150 = "F_Y_FASTFOODHISPANIC";
        l_U151 = "FFDAUD";
        l_U159 = "SELL_BURGER_FEMALE";
    }
    else if (l_U114 == -346378101)
    {
        l_U146 = l_U140;
        l_U147 = l_U141;
        l_U148 = l_U144;
        l_U149 = l_U145;
        l_U150 = "F_Y_FASTFOODHISPANIC";
        l_U151 = "FFDAUD";
        l_U159 = "SELL_BURGER_FEMALE";
    }
    else if (l_U114 == 989485)
    {
        l_U146 = l_U136;
        l_U147 = l_U137;
        l_U148 = l_U138;
        l_U149 = l_U139;
        l_U150 = "M_Y_FASTFOODBLACK";
        l_U151 = "FFD2AUD";
        l_U159 = "SELL_BURGER_MALE";
    }
    else if (l_U114 == -1011530423)
    {
        l_U146 = l_U134;
        l_U147 = l_U135;
        l_U148 = l_U138;
        l_U149 = l_U139;
        l_U150 = "M_Y_FASTFOODBLACK";
        l_U151 = "FFD2AUD";
        l_U159 = "SELL_BURGER_MALE";
    }
    else if (l_U114 == 24233425)
    {
        l_U146 = "FFD3_HI";
        l_U147 = "FFD3_BYE";
        l_U148 = "FFD3_TAKE";
        l_U149 = "FFD3_SERVE";
        l_U150 = "F_Y_FASTFOODWHITES";
        l_U151 = "FFD3AUD";
        l_U159 = "SELL_BURGER_FEMALE";
    };;;;;
    return;
}

void sub_2738(unknown uParam0)
{
    StrCopy( ref l_U0._fU0, uParam0, 16 );
    sub_2755();
    return;
}

void sub_2755()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U0._fU16[I]._fU0 = nil;
        StrCopy( ref l_U0._fU16[I]._fU4, "", 32 );
        l_U0._fU344[I] = 0;
    }
    return;
}

void sub_2843()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2911(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U0._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U0._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_2991( "\n PED NUMBER ", uParam0 );
    sub_3031( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_2991(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3031(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_3197()
{
    vector vVar2;
    vector vVar5;

    vVar2 = {-20.00000000, -20.00000000, -20.00000000};
    vVar5 = {20.00000000, 20.00000000, 20.00000000};
    vVar2 = {l_U105 + vVar2};
    vVar5 = {l_U105 + vVar5};
    if (IS_PLAYER_PLAYING( sub_3271() ))
    {
        if (NOT (IS_CHAR_INJURED( l_U113 )))
        {
            if ((sub_3332()) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_3271(), l_U113 )))
            {
                sub_3444( l_U133, l_U132 );
                return 1;
            }
        }
        else
        {
            return 1;
        }
        if (NOT sub_3803())
        {
            if (IS_WANTED_LEVEL_GREATER( sub_3271(), 0 ))
            {
                sub_3444( l_U133, l_U132 );
                return 1;
            }
            if ((IS_CHAR_SHOOTING( sub_2843() )) || (IS_ANY_CHAR_SHOOTING_IN_AREA( vVar2, vVar5, 0 )))
            {
                sub_3444( l_U133, l_U132 );
                return 1;
            }
            if (IS_CHAR_IN_MELEE_COMBAT( sub_2843() ))
            {
                l_U164 = 1;
                if (NOT (IS_CHAR_INJURED( l_U113 )))
                {
                    TASK_START_SCENARIO_IN_PLACE( l_U113, "Scenario_Bouncer", -1082130432 );
                }
                sub_3444( l_U133, l_U132 );
                return 1;
            }
            if (NOT (IS_CHAR_INJURED( l_U113 )))
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U113, sub_2843(), 0 ))
                {
                    sub_3444( l_U133, l_U132 );
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_3271()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_3332()
{
    if (IS_PLAYER_PLAYING( sub_3271() ))
    {
        if (IS_CHAR_ARMED( sub_2843(), 7 ))
        {
            if (IS_PLAYER_TARGETTING_CHAR( sub_3271(), l_U113 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_3444(int iParam0, string sParam1)
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
        if (COMPARE_STRING( sParam1, ref g_U9174 ))
        {
            if ((g_U9172 == iParam0) AND (l_U101))
            {
                StrCopy( ref g_U9174, "", 16 );
                g_U9172 = 0;
                g_U9173 = 0;
                g_U9178 = nil;
                l_U101 = 0;
                if (l_U99)
                {
                    sub_3671();
                    l_U99 = 0;
                }
            }
            if (l_U100)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_3271(), 1 );
                l_U100 = 0;
            }
            if (l_U98)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U98 = 0;
            }
        }
    }
    return;
}

void sub_3671()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

int sub_3803()
{
    int iVar2;

    if (NOT (IS_CHAR_INJURED( sub_2843() )))
    {
        GET_INTERIOR_FROM_CHAR( sub_2843(), ref iVar2 );
    }
    if (iVar2 == nil)
    {
        return 1;
    }
    return 0;
}

void sub_4199()
{
    int iVar2;

    if (IS_PLAYER_PLAYING( sub_3271() ))
    {
        if (sub_4225())
        {
            if (NOT l_U160)
            {
                if (sub_4875( l_U146, ref l_U152, l_U158, 1 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U113 )))
                    {
                        TASK_LOOK_AT_CHAR( l_U113, sub_2843(), -2, 1 );
                    }
                    l_U160 = 1;
                }
            }
            if (IS_SCORE_GREATER( sub_3271(), l_U128 - 1 ))
            {
                if (TIMERA() > 2000)
                {
                    if (sub_5925( 1, 1 ))
                    {
                        if (sub_6221( l_U133, 0 ))
                        {
                            if (sub_6515( l_U133, l_U132, 0 ))
                            {
                                sub_3444( l_U133, l_U132 );
                                if (NOT (IS_CHAR_INJURED( l_U113 )))
                                {
                                    if (NOT (sub_7177( l_U152 )))
                                    {
                                        if (sub_4875( l_U148, ref l_U152, l_U158, 1 ))
                                        {
                                            ;
                                        }
                                    }
                                    SET_PLAYER_CONTROL( sub_3271(), 0 );
                                    REMOVE_PLAYER_HELMET( sub_3271(), 1 );
                                    sub_7396();
                                    OPEN_SEQUENCE_TASK( ref l_U118 );
                                    TASK_CHAR_SLIDE_TO_COORD( 0, l_U121._fU0, l_U121._fU4, l_U121._fU8, sub_7495(), 5.00000000 );
                                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U113 );
                                    CLOSE_SEQUENCE_TASK( l_U118 );
                                    TASK_PERFORM_SEQUENCE( sub_2843(), l_U118 );
                                    CLEAR_SEQUENCE_TASK( l_U118 );
                                    SETTIMERB( 0 );
                                    if (NOT l_U163)
                                    {
                                        sub_6796();
                                        l_U163 = 1;
                                    }
                                    while (NOT sub_7647())
                                    {
                                        WAIT( 0 );
                                    }
                                    if (l_U166)
                                    {
                                        if (l_U163)
                                        {
                                            sub_3671();
                                            l_U163 = 0;
                                        }
                                        l_U166 = 0;
                                    }
                                    else if (sub_9170( l_U128 ))
                                    {
                                        iVar2 = sub_1368( 0, 4 );
                                        if (iVar2 == 0)
                                        {
                                            SET_PLAYER_MOOD_NORMAL( sub_3271() );
                                        }
                                        SET_CHAR_HEALTH( sub_2843(), sub_9275() );
                                        INCREMENT_INT_STAT_NO_MESSAGE( 97, l_U128 );
                                        INCREMENT_INT_STAT_NO_MESSAGE( 306, 1 );
                                        INCREMENT_INT_STAT_NO_MESSAGE( 308, 1 );
                                        sub_9404( l_U127, 1 );
                                        RESET_VISIBLE_PED_DAMAGE( sub_2843() );
                                        TASK_START_SCENARIO_IN_PLACE( l_U113, "Scenario_Standing", -1082130432 );
                                        sub_9858();
                                        if (l_U163)
                                        {
                                            sub_3671();
                                            l_U163 = 0;
                                        }
                                        SETTIMERA( 0 );
                                    }
                                }
                            }
                        }
                        else
                        {
                            sub_3444( l_U133, l_U132 );
                        }
                    }
                }
            }
        }
        else if (NOT (IS_CHAR_DEAD( sub_2843() )))
        {
            if (NOT (LOCATE_CHAR_ON_FOOT_3D( sub_2843(), l_U121._fU0, l_U121._fU4, l_U121._fU8, 3.00000000, 3.00000000, 2.00000000, 0 )))
            {
                if (l_U160)
                {
                    if (NOT (sub_7177( l_U152 )))
                    {
                        if (sub_4875( l_U147, ref l_U152, l_U158, 1 ))
                        {
                            ;
                        }
                    }
                    if (l_U163)
                    {
                        sub_3671();
                        l_U163 = 0;
                    }
                    l_U160 = 0;
                }
            }
        }
        sub_3444( l_U133, l_U132 );;
    }
    return;
}

int sub_4225()
{
    if (sub_4234())
    {
        if (NOT (IS_CHAR_DEAD( sub_2843() )))
        {
            if (LOCATE_CHAR_ON_FOOT_3D( sub_2843(), l_U121._fU0, l_U121._fU4, l_U121._fU8, 0.50000000, 0.50000000, 2.00000000, 0 ))
            {
                GET_CHAR_COORDINATES( sub_2843(), ref l_U109._fU0, ref l_U109._fU4, ref l_U109._fU8 );
                l_U109 = {l_U105 - l_U109};
                GET_HEADING_FROM_VECTOR_2D( l_U109._fU0, l_U109._fU4, ref l_U112 );
                if (sub_4639( l_U112, 60.00000000 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_4234()
{
    if (l_U165)
    {
        return 1;
    }
    else if (sub_3803())
    {
        if (l_U167)
        {
            sub_4282();
        }
    }
    else if (l_U167)
    {
        sub_4381();
    }
    return 1;;;
    return 0;
}

void sub_4282()
{
    if (l_U169 != -1)
    {
        if (NOT (HAS_SOUND_FINISHED( l_U169 )))
        {
            STOP_SOUND( l_U169 );
        }
        RELEASE_SOUND_ID( l_U169 );
        UNREGISTER_SCRIPT_WITH_AUDIO();
        l_U169 = -1;
    }
    return;
}

void sub_4381()
{
    if (l_U169 == -1)
    {
        REGISTER_SCRIPT_WITH_AUDIO( 0 );
        l_U169 = GET_SOUND_ID();
        PLAY_SOUND_FROM_POSITION( l_U169, "SIZZLING_GRILL", l_U124 );
    }
    return;
}

int sub_4639(unknown uParam0, unknown uParam1)
{
    float fVar4;
    float fVar5;
    float fVar6;

    if (NOT (IS_CHAR_DEAD( sub_2843() )))
    {
        GET_CHAR_HEADING( sub_2843(), ref fVar4 );
        fVar6 = uParam0 - uParam1;
        if (fVar6 < 0.00000000)
        {
            fVar6 += 360.00000000;
        }
        fVar5 = uParam0 + uParam1;
        if (fVar5 >= 360.00000000)
        {
            fVar5 -= 360.00000000;
        }
        if (fVar5 > fVar6)
        {
            if ((fVar4 < fVar5) AND (fVar4 > fVar6))
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else if ((fVar4 < fVar5) || (fVar4 > fVar6))
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

void sub_4875(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_4896( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

void sub_4896(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_4950( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_4950(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_4972( iParam1 )))
    {
        return 0;
    }
    l_U0._fU384 = 0;
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
    sub_5660( ref g_U8395, ref l_U0 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_4972(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_5049( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_5049( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_5049( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_5049(unknown uParam0)
{
    return;
}

void sub_5660(int iParam0, int iParam1)
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

int sub_5925(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_2843() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2843(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_2843() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2843(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2843()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2843() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2843() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_3271() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_3271() )))
    {
        return 0;
    }
    return 1;
}

int sub_6221(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_3271() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_3271() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_3271() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9202)))
                {
                    if (NOT sub_6317())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_2843() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_6402())
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

int sub_6317()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_6402()
{
    return sub_6413( 0, 0 );
}

int sub_6413(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U91._fU104 = 1;
    }
    if ((uParam1) AND (g_U555 != 9))
    {
        g_U91._fU100 = 1;
    }
    return 1;
}

int sub_6515(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_6221( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U100)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_3271(), 0 );
                l_U100 = 1;
            }
            g_U9172 = uParam0;
            l_U101 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_6796();
                l_U99 = 1;
                g_U9173 = 6;
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
                g_U9173 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U98 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U98)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U98 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_6796()
{
    return sub_6413( 1, 1 );
}

int sub_7177(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_5049( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_5049( "\n speech is not playing" );
    }
    return 0;
}

void sub_7396()
{
    if (NOT (IS_CHAR_DEAD( sub_2843() )))
    {
        GET_CURRENT_CHAR_WEAPON( sub_2843(), ref l_U170 );
        SET_CURRENT_CHAR_WEAPON( sub_2843(), 0, 1 );
    }
    return;
}

void sub_7495()
{
    float Result;

    Result = l_U108 + 180.00000000;
    if (Result > 360.00000000)
    {
        Result -= 360.00000000;
    }
    return Result;
}

int sub_7647()
{
    float fVar2;
    float fVar3;

    if ((NOT (IS_CHAR_INJURED( sub_2843() ))) AND (NOT (IS_CHAR_INJURED( l_U113 ))))
    {
        switch (l_U104)
        {
            case 0:
            if (l_U162)
            {
                GET_SCRIPT_TASK_STATUS( l_U113, 34, ref l_U117 );
                if (l_U117 == 7)
                {
                    TASK_PLAY_ANIM( sub_2843(), "BUY_BURGER_PLYR", "amb@FFOOD_SERVER", 8.00000000, 0, 0, 0, 0, -2 );
                    TASK_PLAY_ANIM( l_U113, l_U159, "amb@FFOOD_SERVER", 8.00000000, 0, 0, 0, 0, -2 );
                    l_U162 = 0;
                    l_U104 = 1;
                }
            }
            else
            {
                GET_SCRIPT_TASK_STATUS( sub_2843(), 29, ref l_U117 );
                if (l_U117 == 7)
                {
                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U113, sub_2843() );
                    l_U162 = 1;
                }
                else if (IS_PLAYER_PLAYING( sub_3271() ))
                {
                    if ((TIMERB() > 5000) || (IS_PLAYER_CLIMBING( sub_3271() )))
                    {
                        ;
                    }
                }
            }
            break;
            case 1:
            if (IS_CHAR_PLAYING_ANIM( l_U113, "amb@FFOOD_SERVER", l_U159 ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U113, "amb@FFOOD_SERVER", l_U159, ref fVar2 );
            }
            if (IS_CHAR_PLAYING_ANIM( sub_2843(), "amb@FFOOD_SERVER", "BUY_BURGER_PLYR" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_2843(), "amb@FFOOD_SERVER", "BUY_BURGER_PLYR", ref fVar3 );
            }
            GET_SCRIPT_TASK_STATUS( l_U113, 80, ref l_U117 );
            if (l_U117 == 7)
            {
                SET_PLAYER_CONTROL( sub_3271(), 1 );
                l_U161 = 0;
                l_U104 = 2;
            }
            if (l_U161 == 0)
            {
                if (fVar2 > 0.28400000)
                {
                    if (NOT (DOES_OBJECT_EXIST( l_U116 )))
                    {
                        if (NOT (IS_OBJECT_ATTACHED( l_U116 )))
                        {
                            CREATE_OBJECT( l_U115, l_U105._fU0, l_U105._fU4, l_U105._fU8, ref l_U116, 1 );
                            if (NOT l_U165)
                            {
                                ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U116, l_U120 );
                            }
                            ATTACH_OBJECT_TO_PED( l_U116, l_U113, 1219, 0.16500000, 0.20000000, -0.03800000, 2.86000000, 0.08000000, -1.38000000, 0 );
                        }
                    }
                }
                else if (NOT l_U171)
                {
                    if (NOT (sub_7177( l_U152 )))
                    {
                        SAY_AMBIENT_SPEECH( sub_2843(), "ORDER_FOOD", 0, 0, 0 );
                        l_U171 = 1;
                    }
                }
                if (fVar2 > 0.58000000)
                {
                    if (DOES_OBJECT_EXIST( l_U116 ))
                    {
                        if (IS_OBJECT_ATTACHED( l_U116 ))
                        {
                            if (NOT (sub_7177( l_U152 )))
                            {
                                if (sub_4875( l_U149, ref l_U152, l_U158, 1 ))
                                {
                                    ;
                                }
                            }
                            DETACH_OBJECT( l_U116, 1 );
                            l_U161 = 1;
                        }
                    }
                }
            }
            else if (fVar3 > 0.58000000)
            {
                if (DOES_OBJECT_EXIST( l_U116 ))
                {
                    if (NOT (IS_OBJECT_ATTACHED( l_U116 )))
                    {
                        ATTACH_OBJECT_TO_PED( l_U116, sub_2843(), 1232, 0.06000000, 0.12000000, -0.11000000, 1.49000000, -0.31000000, -0.72000000, 0 );
                    }
                    if (l_U171)
                    {
                        if (NOT (sub_7177( l_U152 )))
                        {
                            SAY_AMBIENT_SPEECH( sub_2843(), "THANKS", 0, 0, 0 );
                            l_U171 = 0;
                        }
                    }
                }
            }
            if (fVar3 == 1.00000000)
            {
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( sub_2843(), "EAT_BURGER_PLYR", "amb@FFOOD_SERVER", 8.00000000, 0, 0, 0, 0, -2 );
                SET_PLAYER_CONTROL( sub_3271(), 1 );
                l_U161 = 0;
                l_U104 = 2;
            }
            break;
            case 2:
            if (IS_CHAR_PLAYING_ANIM( sub_2843(), "amb@FFOOD_SERVER", "EAT_BURGER_PLYR" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_2843(), "amb@FFOOD_SERVER", "EAT_BURGER_PLYR", ref fVar3 );
            }
            if ((fVar3 > 0.90000000) || (NOT (IS_CHAR_PLAYING_ANIM( sub_2843(), "amb@FFOOD_SERVER", "EAT_BURGER_PLYR" ))))
            {
                if (DOES_OBJECT_EXIST( l_U116 ))
                {
                    if (IS_OBJECT_ATTACHED( l_U116 ))
                    {
                        DETACH_OBJECT( l_U116, 1 );
                        DELETE_OBJECT( ref l_U116 );
                        l_U104 = 0;
                        return 1;
                    }
                }
            }
            break;
        }
    }
    return 0;
}

int sub_9170(int iParam0)
{
    int iVar3;

    STORE_SCORE( sub_3271(), ref iVar3 );
    if (iVar3 >= iParam0)
    {
        ADD_SCORE( sub_3271(), -iParam0 );
        return 1;
        break;
    }
    return 0;
}

void sub_9275()
{
    int Result;

    if (NOT (IS_CHAR_DEAD( sub_2843() )))
    {
        GET_CHAR_HEALTH( sub_2843(), ref Result );
        if (Result <= 100)
        {
            Result += 100;
        }
        else
        {
            Result = 200;
        }
    }
    return Result;
}

void sub_9404(unknown uParam0, unknown uParam1)
{
    sub_9425( uParam0, uParam1, 0.00000000, "" );
    return;
}

void sub_9425(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_9858()
{
    if (NOT (IS_CHAR_DEAD( sub_2843() )))
    {
        SET_CURRENT_CHAR_WEAPON( sub_2843(), l_U170, 0 );
    }
    return;
}

void sub_10416()
{
    TERMINATE_THIS_SCRIPT();
    return;
}
