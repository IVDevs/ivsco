void main()
{
    l_U102 = 0;
    l_U109 = 0;
    l_U148 = 1;
    l_U179 = {-0.47300000, 0.86300000, -1.00000000};
    l_U183 = 0;
    l_U192 = 0;
    l_U207 = 4;
    l_U248 = 897868981;
    l_U250 = 0;
    l_U257 = 0;
    l_U258 = 0;
    l_U259 = 0;
    l_U260 = 0;
    l_U261 = 0;
    l_U262 = 0;
    l_U263 = 1;
    l_U264 = 0;
    l_U266 = 5;
    l_U267 = 42.00000000;
    l_U268 = 30.00000000;
    l_U287 = 0;
    l_U294 = 0;
    l_U295 = 1113677074;
    l_U296 = 1353709999;
    l_U298 = 0;
    l_U299 = 0;
    ProtectedSet(l_U300, 50);
    l_U326 = {0.00000000, 2.00000000, 0.00000000};
    l_U329 = "MISSSTRIPCLUB";
    l_U345 = 0;
    l_U346 = 3.00000000;
    l_U352 = 0;
    l_U353 = 0;
    l_U357 = 0;
    l_U149 = {l_U358._fU4[0]};
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_315();
    }
    sub_2325( "" );
    sub_2480( 0, sub_2431(), "Niko", 0 );
    g_U9158 = 0;
    g_U9157 = 0;
    sub_1407( "Strip Club Script Launched" );
    PRINTNL();
    GET_WEAPONTYPE_MODEL( 7, ref l_U249 );
    if (sub_2690())
    {
        l_U110 = 1;
    }
    else
    {
        sub_2788();
        l_U110 = 0;
    }
    if (g_U10978)
    {
        if (sub_2898())
        {
            l_U263 = 0;
        }
        if (NOT (sub_2961( 6 )))
        {
            l_U263 = 0;
            l_U295 = 1113677074;
            l_U296 = 1113677074;
            l_U329 = "MISSSTRIPCLUBLO";
        }
    }
    else
    {
        FORCE_SPAWN_SCENARIO_PEDS_IN_AREA( l_U149, 25.00000000, 20 );
    }
    REQUEST_MODEL( l_U295 );
    REQUEST_MODEL( l_U296 );
    REQUEST_ANIMS( l_U329 );
    sub_3589();
    if (l_U263)
    {
        sub_6878();
    }
    sub_13063();
    sub_13667();
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            if (l_U263)
            {
                sub_6878();
            }
            if (sub_13730( sub_2431() ))
            {
                ;
            }
            if (sub_7064( sub_2431() ))
            {
                if (NOT sub_13831())
                {
                    if (NOT l_U263)
                    {
                        if (NOT g_U9159)
                        {
                            PRINT_HELP( "STR_WEA" );
                            g_U9159 = 1;
                        }
                    }
                }
                sub_2788();
                switch (l_U102)
                {
                    case 0:
                    if (l_U257 == 1)
                    {
                        if (l_U110 == 0)
                        {
                            sub_13998();
                        }
                        if (l_U263)
                        {
                            sub_14365();
                        }
                        sub_14847();
                        l_U102 = 1;
                    }
                    else
                    {
                        sub_15026();
                    }
                    break;
                    case 1:
                    sub_15521();
                    if (sub_15736())
                    {
                        ;
                    }
                    if (g_U9157)
                    {
                        if (NOT g_U9158)
                        {
                            for ( l_U235 = 0; l_U235 < 4; l_U235++ )
                            {
                                if ((NOT (IS_CHAR_DEAD( l_U152[l_U235] ))) AND (NOT (IS_CHAR_DEAD( sub_2431() ))))
                                {
                                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U152[l_U235], sub_2431(), 0 ))
                                    {
                                        g_U9158 = 1;
                                    }
                                }
                            }
                        }
                    }
                    sub_16644();
                    if ((g_U9158 == 0) AND (g_U9157 == 0))
                    {
                        if (l_U263)
                        {
                            sub_17396();
                            if (NOT l_U183)
                            {
                                if (NOT l_U298)
                                {
                                    if (NOT sub_6963())
                                    {
                                        if (l_U109 != 2)
                                        {
                                            if (NOT sub_8693())
                                            {
                                                sub_1407( "IF NOT isAnyoneGrouped()" );
                                                sub_17585();
                                                if ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SC_AC_CT" ))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SC_AC_CT_G" ))))
                                                {
                                                    for ( l_U188 = 0; l_U188 < l_U207; l_U188++ )
                                                    {
                                                        sub_18323( l_U152[l_U188], ref l_U104[l_U188], l_U188 );
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            else if (l_U192)
                            {
                                GET_GAME_TIMER( ref l_U190 );
                                l_U189 = l_U190 - l_U191;
                                if (l_U189 > 20000)
                                {
                                    if (l_U110 == 0)
                                    {
                                        if (NOT (sub_25290( sub_2431() )))
                                        {
                                            l_U183 = 0;
                                            l_U192 = 0;
                                        }
                                    }
                                    else if (NOT (IS_CHAR_DEAD( l_U152[3] )))
                                    {
                                        if (NOT (IS_CHAR_ON_SCREEN( l_U152[3] )))
                                        {
                                            if (NOT (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_2431(), l_U152[3], 12.00000000, 12.00000000, 12.00000000, 0 )))
                                            {
                                                l_U183 = 0;
                                                l_U192 = 0;
                                            }
                                        }
                                    }
                                }
                            }
                            else
                            {
                                GET_GAME_TIMER( ref l_U191 );
                                l_U192 = 1;
                            }
                        }
                    }
                    else
                    {
                        for ( l_U188 = 0; l_U188 < l_U207; l_U188++ )
                        {
                            if (l_U104[l_U188] == 2)
                            {
                                sub_18323( l_U152[l_U188], ref l_U104[l_U188], l_U188 );
                            }
                        }
                        if (NOT l_U258)
                        {
                            if (l_U110 == 0)
                            {
                                sub_15909();
                            }
                            sub_37180();
                            l_U258 = 1;
                        }
                    }
                    break;
                    case 2: break;
                }
            }
        }
        else
        {
            sub_1407( "Strip Club Script Killed" );
            PRINTNL();
            sub_315();
        }
    }
    return;
}

void sub_315()
{
    for ( l_U235 = 0; l_U235 < 4; l_U235++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U152[l_U235] )))
        {
            if (NOT (IS_CHAR_ON_SCREEN( l_U152[l_U235] )))
            {
                DELETE_CHAR( ref l_U152[l_U235] );
            }
        }
    }
    if (DOES_BLIP_EXIST( l_U297 ))
    {
        REMOVE_BLIP( l_U297 );
    }
    if (NOT (IS_CHAR_DEAD( l_U209 )))
    {
        if (NOT (IS_CHAR_ON_SCREEN( l_U209 )))
        {
            DELETE_CHAR( ref l_U209 );
        }
    }
    sub_513( l_U266, l_U354 );
    GET_PLAYER_GROUP( sub_783(), ref l_U323 );
    GET_GROUP_SIZE( l_U323, ref l_U324, ref l_U287 );
    if (sub_905() > -1)
    {
        if (l_U287 > 0)
        {
            if (l_U109 == 2)
            {
                if (DOES_THIS_MINIGAME_SCRIPT_ALLOW_NON_MINIGAME_HELP_MESSAGES())
                {
                    DISPLAY_NON_MINIGAME_HELP_MESSAGES( 0 );
                }
                if (g_U9158)
                {
                    sub_1188( 1 );
                    sub_1407( "Minigames_Store_Result(MGR_PLAYER_LOST)\n" );
                }
                else if (sub_1429())
                {
                    sub_1188( 0 );
                    sub_1407( "Minigames_Store_Result(MGR_PLAYER_WON)\n" );
                }
                else
                {
                    sub_1188( 3 );
                    sub_1407( "Minigames_Store_Result(MGR_GAME_ABANDONED)\n" );
                }
                sub_1614();
            }
        }
        else if (((l_U109 == 1) || (l_U109 == 4)) || (l_U109 == 2))
        {
            if (NOT (IS_CHAR_DEAD( l_U208 )))
            {
                SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U208, 0 );
                if (DOES_THIS_MINIGAME_SCRIPT_ALLOW_NON_MINIGAME_HELP_MESSAGES())
                {
                    DISPLAY_NON_MINIGAME_HELP_MESSAGES( 0 );
                }
                sub_1188( 7 );
                sub_1614();
            }
        }
    }
    l_U242 = {-1.00000000, -1.00000000, -1.00000000};
    l_U245 = {1.00000000, 1.00000000, 1.00000000};
    l_U242 = {l_U236 + l_U242};
    l_U245 = {l_U236 + l_U245};
    SWITCH_PED_PATHS_ON( l_U242._fU0, l_U242._fU4, l_U242._fU8, l_U245._fU0, l_U245._fU4, l_U245._fU8 );
    l_U242 = {-1.00000000, -1.00000000, -1.00000000};
    l_U245 = {1.00000000, 1.00000000, 1.00000000};
    l_U242 = {l_U239 + l_U242};
    l_U245 = {l_U239 + l_U245};
    SWITCH_PED_PATHS_ON( l_U242._fU0, l_U242._fU4, l_U242._fU8, l_U245._fU0, l_U245._fU4, l_U245._fU8 );
    l_U242 = {-1.00000000, -1.00000000, -1.00000000};
    l_U245 = {1.00000000, 1.00000000, 1.00000000};
    l_U242 = {l_U311 + l_U242};
    l_U245 = {l_U311 + l_U245};
    SWITCH_PED_PATHS_ON( l_U242._fU0, l_U242._fU4, l_U242._fU8, l_U245._fU0, l_U245._fU4, l_U245._fU8 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_513(int iParam0, string sParam1)
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
            if ((g_U9172 == iParam0) AND (l_U3))
            {
                StrCopy( ref g_U9174, "", 16 );
                g_U9172 = 0;
                g_U9173 = 0;
                g_U9178 = nil;
                l_U3 = 0;
                if (l_U1)
                {
                    sub_734();
                    l_U1 = 0;
                }
            }
            if (l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_783(), 1 );
                l_U2 = 0;
            }
            if (l_U0)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U0 = 0;
            }
        }
    }
    return;
}

void sub_734()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_783()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_905()
{
    switch (g_U32898._fU0)
    {
        case 54:
        return -1;
        break;
        case 0:
        return 0;
        break;
        case 13:
        return 1;
        break;
        case 3:
        return 2;
        break;
        case 8:
        return 3;
        break;
        case 7:
        return 4;
        break;
        case 2:
        return 5;
        break;
        case 10:
        return 6;
        break;
        case 28:
        return 7;
        break;
        case 29:
        return 8;
        break;
        case 30:
        return 9;
        break;
    }
    return -1;
}

void sub_1188(unknown uParam0)
{
    if (g_U32898._fU0 == 54)
    {
        return;
    }
    if (NOT (g_U32898._fU8 == 9))
    {
        g_U32898._fU20 = uParam0;
        if (sub_1255( g_U32898._fU0 ))
        {
            g_U32898._fU16 = uParam0;
        }
        return;
    }
    g_U32898._fU16 = uParam0;
    return;
}

int sub_1255(unknown uParam0)
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

void sub_1407(unknown uParam0)
{
    return;
}

int sub_1429()
{
    if (NOT l_U298)
    {
        if (l_U353)
        {
            return 1;
        }
        if (TIMERB() > 120000)
        {
            return 1;
        }
    }
    return 0;
}

void sub_1614()
{
    DISPLAY_RADAR( 1 );
    SET_MINIGAME_IN_PROGRESS( 0 );
    g_U10979 = 0;
    if (g_U32898._fU0 == 54)
    {
        g_U10978 = 0;
        sub_1669();
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

void sub_1669()
{
    g_U32896._fU4 = 1;
    return;
}

void sub_2325(unknown uParam0)
{
    StrCopy( ref l_U4._fU0, uParam0, 16 );
    sub_2342();
    return;
}

void sub_2342()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U4._fU16[I]._fU0 = nil;
        StrCopy( ref l_U4._fU16[I]._fU4, "", 32 );
        l_U4._fU344[I] = 0;
    }
    return;
}

void sub_2431()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2480(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U4._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U4._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_2560( "\n PED NUMBER ", uParam0 );
    sub_2600( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_2560(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_2600(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_2690()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;

    if (NOT (IS_CHAR_DEAD( sub_2431() )))
    {
        GET_CHAR_COORDINATES( sub_2431(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        iVar5 = GET_MAP_AREA_FROM_COORDS( uVar2 );
        if (iVar5 == 3)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2788()
{
    if (l_U110 == 0)
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 1195.00000000, 1707.00000000, 18.00000000, 1.50000000, -1628879836 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1628879836, 1195, 1707, 18, 1, 0.00000000 );
        }
    }
    return;
}

void sub_2898()
{
    int Result;

    Result = 0;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Michelle1" )) >= 1)
    {
        Result = 1;
    }
    return Result;
}

int sub_2961(int iParam0)
{
    unknown uVar3;

    if (g_U32898._fU0 == 54)
    {
        return 0;
    }
    if (sub_1255( g_U32898._fU0 ))
    {
        if (NOT (sub_3022( g_U32898._fU0, iParam0 )))
        {
            return 0;
        }
        g_U32898._fU8 = iParam0;
        g_U32898._fU72 = 0;
        return 1;
    }
    uVar3 = iParam0;
    if (iParam0 == g_U32898._fU4)
    {
        if (g_U32898._fU24)
        {
            return 0;
        }
        else
        {
            g_U32898._fU8 = 9;
            if (g_U32898._fU36[uVar3] > 0)
            {
                g_U32898._fU36[uVar3]--;
            }
            g_U32898._fU72 = 0;
            return 1;
        }
    }
    if (g_U32898._fU8 == iParam0)
    {
        return 1;
    }
    if (NOT (g_U32898._fU8 == 9))
    {
        if (g_U32898._fU24)
        {
            return 0;
        }
        else
        {
            g_U32898._fU8 = 9;
        }
    }
    if (g_U32898._fU32 <= 0)
    {
        g_U32898._fU12 = iParam0;
        return 0;
    }
    if (g_U32898._fU36[uVar3] > 0)
    {
        g_U32898._fU8 = iParam0;
        g_U32898._fU36[uVar3]--;
        if (iParam0 == 5)
        {
            g_U32898._fU72 = 1;
        }
        return 1;
    }
    g_U32898._fU12 = iParam0;
    return 0;
}

int sub_3022(int iParam0, int iParam1)
{
    if (iParam1 == 7)
    {
        if ((iParam0 == 10) || (iParam0 == 28))
        {
            return 0;
        }
    }
    if (iParam1 == 6)
    {
        if (((iParam0 == 2) || (iParam0 == 10)) || (iParam0 == 29))
        {
            return 0;
        }
    }
    return 1;
}

void sub_3589()
{
    switch (l_U110)
    {
        case 0:
        l_U301[0] = {1180.16300000, 1679.14700000, 17.72700000};
        l_U301[1] = {1173.68200000, 1672.63700000, 17.72700000};
        l_U301[2] = {1173.38100000, 1691.63700000, 17.72700000};
        l_U311 = {1185.65100000, 1684.30900000, 16.47830000};
        l_U236 = {1197.58000000, 1702.07000000, 17.72180000};
        l_U239 = {1145.34600000, 1671.12000000, 16.72180000};
        l_U242 = {-1.00000000, -1.00000000, -1.00000000};
        l_U245 = {1.00000000, 1.00000000, 1.00000000};
        l_U227 = {1189.05600000, 1705.30300000, 16.72200000};
        l_U230 = 62.49600000;
        l_U223 = {1189.89400000, 1706.11100000, 16.72200000};
        l_U226 = 228.73000000;
        l_U199 = {1152.07800000, 1669.39400000, 15.72190000};
        l_U202 = {1151.24500000, 1670.57900000, 15.72190000};
        l_U205 = 0.00000000;
        l_U206 = 225.00000000;
        l_U196 = {1154.25000000, 1679.68000000, 16.72000000};
        l_U193 = {1151.08100000, 1671.17100000, 15.72200000};
        l_U104[0] = 0;
        l_U104[1] = 0;
        l_U104[2] = 0;
        l_U157[0] = {1167.19700000, 1676.84600000, 16.72180000};
        l_U170[0] = 356.21450000;
        l_U157[1] = {1180.76600000, 1687.84700000, 16.72180000};
        l_U170[1] = 38.64410000;
        l_U157[2] = {1183.06100000, 1703.52800000, 17.72180000};
        l_U170[2] = 352.55900000;
        l_U157[3] = {1151.08100000, 1671.17100000, 15.72200000};
        l_U170[3] = 61.23440000;
        l_U176 = {1150.81800000, 1673.28200000, 15.72200000};
        l_U182 = 196.28860000;
        l_U113[0] = {1152.10100000, 1670.17000000, 16.67738000};
        l_U113[1] = {1153.17200000, 1670.06500000, 16.95117000};
        l_U129[1] = {-3.80520100, -0.00000000, 90.80816000};
        l_U113[2] = {1152.33600000, 1672.31600000, 16.88453000};
        l_U129[2] = {-6.59464600, 0.00000000, 158.46100000};
        l_U113[3] = {1149.14700000, 1669.57300000, 17.07823000};
        l_U129[3] = {-12.05484000, -0.00000000, -82.70051000};
        l_U113[4] = {1148.47200000, 1670.09200000, 16.76314000};
        l_U129[4] = {-1.33915700, -0.00000000, -81.57669000};
        l_U213[0] = {1168.77300000, 1666.60500000, 17.72180000};
        l_U213[1] = {1171.42500000, 1667.95500000, 17.75380000};
        l_U220[0] = 152.75620000;
        l_U220[1] = 250.23200000;
        l_U270 = {1188.80000000, 1700.70000000, 17.60000000};
        CLEAR_AREA( l_U270._fU0, l_U270._fU4, l_U270._fU8, 1.50000000, 0 );
        l_U273[0] = {1176.32200000, 1698.27500000, 16.81840000};
        CLEAR_AREA( l_U273[0]._fU0, l_U273[0]._fU4, l_U273[0]._fU8, 1.50000000, 0 );
        l_U273[1] = {1181.31700000, 1696.76800000, 16.79990000};
        l_U280[0] = {1178.08500000, 1684.57100000, 16.72180000};
        CLEAR_AREA( l_U280[0]._fU0, l_U280[0]._fU4, l_U280[0]._fU8, 1.50000000, 0 );
        l_U280[1] = {1175.34200000, 1694.96700000, 16.72170000};
        l_U288 = "clammainroom";
        l_U289 = "clampalbkrm";
        l_U290 = "clamfronrm";
        l_U291 = "clammainroom";
        l_U293 = -899568022;
        l_U248 = 676448572;
        l_U330 = "Lap_Triangle_A3_Niko";
        l_U331 = "Lap_Triangle_A3_Woman";
        l_U335 = "Lap_Triangle_B3_Niko";
        l_U336 = "Lap_Triangle_B3_Woman";
        l_U340 = "Triangle_A3-B3_trans";
        l_U332 = {0.00000000, 0.74000000, -1.00000000};
        l_U337 = {0.00000000, 0.74000000, -1.00000000};
        l_U342 = "LAP_DANCE_RICK_JAMES";
        l_U343 = "LAP_DANCE_GOLDFRAPP";
        l_U344 = "LAP_DANCE_MYSTIKAL";
        break;
        case 1:
        l_U236 = {-1576.03600000, 23.07230000, 10.01110000};
        l_U239 = {0.00000000, 0.00000000, 0.00000000};
        l_U242 = {-1.00000000, -1.00000000, -1.00000000};
        l_U245 = {1.00000000, 1.00000000, 1.00000000};
        l_U223 = {-1560.29500000, 8.82050000, 9.01030000};
        l_U226 = 180.18490000;
        l_U227 = {-1564.93400000, 8.36510000, 9.01030000};
        l_U230 = 180.06740000;
        l_U199 = {-1577.16500000, 1.66590000, 10.01440000};
        l_U202 = {-1590.08000000, 20.25870000, 14.26110000};
        l_U205 = -1.00000000;
        l_U206 = 106.16730000;
        l_U196 = {-1581.22100000, 4.60320000, 10.01530000};
        l_U193 = {-1578.59300000, 1.97130000, 9.00980000};
        l_U104[0] = 0;
        l_U104[1] = 0;
        l_U104[2] = 0;
        l_U157[0] = {-1582.78200000, 6.90790000, 9.01030000};
        l_U170[0] = 332.54820000;
        l_U157[1] = {-1580.88700000, 16.83490000, 9.01030000};
        l_U170[1] = 253.12520000;
        l_U157[2] = {-1555.15200000, 14.23790000, 9.01030000};
        l_U170[2] = 30.05350000;
        l_U157[3] = {-1578.59300000, 1.97130000, 9.00980000};
        l_U170[3] = 72.13210000;
        l_U176 = {-1581.28300000, 0.35200000, 9.01040000};
        l_U182 = 272.20340000;
        l_U113[0] = {-1576.65200000, 1.51454000, 9.95776400};
        l_U113[1] = {-1578.41800000, 2.94477700, 10.20165000};
        l_U129[1] = {-12.60450000, -0.00000100, -140.51600000};
        l_U113[2] = {-1576.27000000, 1.04640600, 10.27578000};
        l_U129[2] = {-3.11567400, -0.00000000, 61.38813000};
        l_U113[3] = {-1581.77200000, 1.40416400, 9.51403800};
        l_U129[3] = {-1.02756000, -0.00000000, -92.76884000};
        l_U113[4] = {-1580.33900000, 3.43333000, 10.32023000};
        l_U129[4] = {-2.86955500, 0.00000000, -121.08700000};
        l_U213[0] = {1168.77300000, 1666.60500000, 17.72180000};
        l_U213[1] = {1171.42500000, 1667.95500000, 17.75380000};
        l_U220[0] = 152.75620000;
        l_U220[1] = 250.23200000;
        l_U270 = {-1579.16900000, 7.63900000, 9.01030000};
        CLEAR_AREA( l_U270._fU0, l_U270._fU4, l_U270._fU8, 1.50000000, 0 );
        l_U273[0] = {-1581.79600000, 13.02000000, 9.01030000};
        CLEAR_AREA( l_U273[0]._fU0, l_U273[0]._fU4, l_U273[0]._fU8, 1.50000000, 0 );
        l_U273[1] = {-1581.64800000, 10.04290000, 9.01030000};
        l_U280[0] = {-1578.19900000, 11.47120000, 9.01030000};
        CLEAR_AREA( l_U280[0]._fU0, l_U280[0]._fU4, l_U280[0]._fU8, 1.50000000, 0 );
        l_U280[1] = {-1578.19900000, 11.47120000, 9.01030000};
        l_U288 = "Bada_room1";
        l_U289 = "Bada-Private";
        l_U290 = "Bada_room2";
        l_U291 = "Bada_room1a";
        l_U293 = -899568022;
        l_U248 = 897868981;
        l_U330 = "Lap_Honkerz_A2_Niko";
        l_U331 = "Lap_Honkerz_A2_Woman";
        l_U335 = "Lap_Honkerz_B1_Niko";
        l_U336 = "Lap_Honkerz_B1_Woman";
        l_U340 = "Honkerz_A2-B1_trans";
        l_U332 = {0.00000000, 0.74000000, -1.00000000};
        l_U337 = {0.00000000, 0.74000000, -1.00000000};
        l_U342 = "LAP_DANCE_MYSTIKAL";
        l_U343 = "LAP_DANCE_RICK_JAMES";
        l_U344 = "LAP_DANCE_GOLDFRAPP";
        break;
    }
    l_U242 = {-2.00000000, -2.00000000, -3.00000000};
    l_U245 = {2.00000000, 2.00000000, 3.00000000};
    l_U242 = {l_U236 + l_U242};
    l_U245 = {l_U236 + l_U245};
    SWITCH_PED_PATHS_OFF( l_U242._fU0, l_U242._fU4, l_U242._fU8, l_U245._fU0, l_U245._fU4, l_U245._fU8 );
    l_U242 = {-2.00000000, -2.00000000, -3.00000000};
    l_U245 = {2.00000000, 2.00000000, 3.00000000};
    l_U242 = {l_U239 + l_U242};
    l_U245 = {l_U239 + l_U245};
    SWITCH_PED_PATHS_OFF( l_U242._fU0, l_U242._fU4, l_U242._fU8, l_U245._fU0, l_U245._fU4, l_U245._fU8 );
    l_U242 = {-2.00000000, -2.00000000, -3.00000000};
    l_U245 = {2.00000000, 2.00000000, 3.00000000};
    l_U242 = {l_U311 + l_U242};
    l_U245 = {l_U311 + l_U245};
    SWITCH_PED_PATHS_OFF( l_U242._fU0, l_U242._fU4, l_U242._fU8, l_U245._fU0, l_U245._fU4, l_U245._fU8 );
    return;
}

void sub_6878()
{
    switch (l_U109)
    {
        case 0:
        if (sub_905() > -1)
        {
            if ((g_U9158 == 0) AND (g_U9157 == 0))
            {
                if (NOT sub_6963())
                {
                    if (IS_CHAR_DEAD( l_U208 ))
                    {
                        GET_PLAYER_GROUP( sub_783(), ref l_U323 );
                        GET_GROUP_MEMBER( l_U323, 0, ref l_U208 );
                    }
                    if (sub_7064( l_U208 ))
                    {
                        SETTIMERB( 0 );
                        sub_7240();
                        sub_1407( "--------------------------------------> Strip Club Grabbed Ped\n" );
                        REMOVE_CHAR_FROM_GROUP( l_U208 );
                        ADD_BLIP_FOR_CHAR( l_U208, ref l_U297 );
                        SET_BLIP_AS_FRIENDLY( l_U297, 1 );
                        SAY_AMBIENT_SPEECH( l_U208, "STRIP_DO_OWN_THING", 1, 1, 2 );
                        DISPLAY_NON_MINIGAME_HELP_MESSAGES( 1 );
                        SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U208, 1 );
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP( "STR_ENJ" );
                        }
                        if (IS_CHAR_MALE( l_U208 ))
                        {
                            switch (sub_905())
                            {
                                case 0:
                                sub_7694();
                                sub_7797();
                                break;
                                case 1:
                                sub_8025();
                                sub_7797();
                                break;
                                case 2:
                                sub_7694();
                                sub_7797();
                                break;
                                case 3:
                                sub_8101();
                                sub_7797();
                                break;
                                case 4:
                                sub_8101();
                                sub_7797();
                                break;
                            }
                            l_U109 = 1;
                        }
                        else
                        {
                            sub_7797();
                            l_U109 = 4;
                        }
                    }
                }
            }
            else if (IS_CHAR_DEAD( l_U208 ))
            {
                GET_PLAYER_GROUP( sub_783(), ref l_U323 );
                GET_GROUP_MEMBER( l_U323, 0, ref l_U208 );
            }
            if (sub_7064( l_U208 ))
            {
                SETTIMERB( 0 );
                sub_7240();
                PRINT_NOW( "STR_LEAVE", 7500, 1 );
                l_U109 = 2;
            }
        }
        break;
        case 1:
        sub_8368();
        sub_11064();
        switch (sub_905())
        {
            case 0:
            sub_11265();
            break;
            case 1:
            sub_11841();
            break;
            case 2:
            sub_11265();
            break;
            case 3:
            sub_12027();
            break;
            case 4:
            sub_12027();
            break;
        }
        break;
        case 2:
        if (sub_12287( l_U208 ))
        {
            if ((NOT (sub_7064( l_U208 ))) AND (NOT (sub_7064( sub_2431() ))))
            {
                sub_315();
            }
            if (g_U9158)
            {
                if (NOT (sub_12810( l_U208 )))
                {
                    if (NOT l_U355)
                    {
                        SAY_AMBIENT_SPEECH( l_U208, "GET_OUT_OF_HERE", 1, 1, 2 );
                    }
                    l_U355 = 1;
                }
            }
            else if (NOT l_U355)
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( sub_2431() )))
                {
                    SAY_AMBIENT_SPEECH( l_U208, "STRIP_LEAVE_AGREE", 1, 1, 2 );
                    l_U355 = 1;
                }
            }
        }
        sub_11064();
        break;
        case 4:
        sub_1407( "CASE friendIsGirlfriend\n" );
        sub_8368();
        sub_11064();
        sub_11265();
        break;
    }
    return;
}

int sub_6963()
{
    if (IS_CHAR_ARMED( sub_2431(), 7 ))
    {
        return 1;
    }
    return 0;
}

int sub_7064(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar3 );
        if ((((iVar3 == (GET_HASH_KEY( l_U288 ))) || (iVar3 == (GET_HASH_KEY( l_U289 )))) || (iVar3 == (GET_HASH_KEY( l_U290 )))) || (iVar3 == (GET_HASH_KEY( l_U291 ))))
        {
            if (NOT l_U351)
            {
                BLOCK_CHAR_AMBIENT_ANIMS( uParam0, 1 );
                l_U351 = 1;
            }
            return 1;
        }
        else if (l_U351)
        {
            l_U351 = 0;
        }
    }
    return 0;
}

void sub_7240()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    g_U10979 = 1;
    if (NOT (g_U32898._fU0 == 54))
    {
        g_U32898._fU24 = 1;
        g_U32898._fU28 = 0;
        if (NOT (g_U32898._fU8 == 9))
        {
            sub_7319();
        }
        return;
    }
    g_U10978 = 1;
    sub_7391();
    return;
}

void sub_7319()
{
    if (NOT (g_U32898._fU32 > 0))
    {
        return;
    }
    g_U32898._fU32--;
    return;
}

void sub_7391()
{
    g_U32896._fU4 = 0;
    return;
}

void sub_7694()
{
    CLEAR_AREA( l_U273[0]._fU0, l_U273[0]._fU4, l_U273[0]._fU8, 1.50000000, 0 );
    CLEAR_AREA( l_U273[1]._fU0, l_U273[1]._fU4, l_U273[1]._fU8, 1.50000000, 0 );
    return;
}

void sub_7797()
{
    CLEAR_AREA( l_U273[0]._fU0, l_U273[0]._fU4, l_U273[0]._fU8, 1.50000000, 0 );
    CLEAR_AREA( l_U273[1]._fU0, l_U273[1]._fU4, l_U273[1]._fU8, 1.50000000, 0 );
    CLEAR_AREA( l_U270._fU0, l_U270._fU4, l_U270._fU8, 1.50000000, 0 );
    CLEAR_AREA( l_U280[0]._fU0, l_U280[0]._fU4, l_U280[0]._fU8, 1.50000000, 0 );
    CLEAR_AREA( l_U280[1]._fU0, l_U280[1]._fU4, l_U280[1]._fU8, 1.50000000, 0 );
    return;
}

void sub_8025()
{
    CLEAR_AREA( l_U270._fU0, l_U270._fU4, l_U270._fU8, 1.50000000, 0 );
    return;
}

void sub_8101()
{
    CLEAR_AREA( l_U280[0]._fU0, l_U280[0]._fU4, l_U280[0]._fU8, 1.50000000, 0 );
    CLEAR_AREA( l_U280[1]._fU0, l_U280[1]._fU4, l_U280[1]._fU8, 1.50000000, 0 );
    return;
}

void sub_8368()
{
    sub_1407( "leaveStripClub()\n" );
    if (NOT (IS_CHAR_INJURED( l_U208 )))
    {
        if (IS_CHAR_MALE( l_U208 ))
        {
            l_U354 = "SC_AC_CT";
        }
        else
        {
            l_U354 = "SC_AC_CT_G";
        }
        sub_1407( "IF NOT IS_CHAR_INJURED(pedGrabbed)\n" );
        GET_PLAYER_GROUP( sub_783(), ref l_U323 );
        GET_GROUP_SIZE( l_U323, ref l_U324, ref l_U287 );
        if (l_U287 > 0)
        {
            sub_1407( "IF iGrpSize > 0\n" );
            if ((NOT (sub_7064( sub_2431() ))) AND (NOT (sub_7064( l_U208 ))))
            {
                l_U109 = 2;
            }
        }
        else
        {
            sub_1407( "IF NOT iGrpSize > 0\n" );
            if (sub_8658())
            {
                if (NOT l_U355)
                {
                    TASK_LOOK_AT_CHAR( l_U208, sub_2431(), 3000, 0 );
                    SAY_AMBIENT_SPEECH( l_U208, "GENERIC_HI", 1, 0, 2 );
                    l_U355 = 1;
                }
                sub_1407( "IF isPlayerAbleToAddressPed()\n" );
                if (sub_9745( l_U266, 0 ))
                {
                    if (sub_10039( l_U266, l_U354, 0 ))
                    {
                        CLEAR_CHAR_TASKS( l_U208 );
                        SET_GROUP_MEMBER( l_U323, l_U208 );
                        SAY_AMBIENT_SPEECH( sub_2431(), "STRIP_ASK_TO_LEAVE", 1, 1, 2 );
                        l_U355 = 0;
                        REMOVE_BLIP( l_U297 );
                        l_U109 = 2;
                        sub_513( l_U266, l_U354 );
                    }
                }
                else
                {
                    sub_513( l_U266, l_U354 );
                }
            }
            else if (l_U355)
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2431(), l_U208, 5.00000000, 5.00000000, 5.00000000, 0 )))
                {
                    SAY_AMBIENT_SPEECH( l_U208, "STRIP_ENJOYING_SELF", 1, 1, 2 );
                    l_U355 = 0;
                }
            }
            sub_1407( "IF NOT isPlayerAbleToAddressPed()\n" );
            sub_513( l_U266, l_U354 );
            if (g_U9158)
            {
                if (DOES_BLIP_EXIST( l_U297 ))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U208 );
                    SET_GROUP_MEMBER( l_U323, l_U208 );
                    REMOVE_BLIP( l_U297 );
                    SAY_AMBIENT_SPEECH( l_U208, "GET_OUT_OF_HERE", 1, 1, 2 );
                    PRINT_NOW( "STR_LEAVE", 7500, 1 );
                    l_U109 = 2;
                }
            }
        }
    }
    return;
}

int sub_8658()
{
    vector vVar2;
    vector vVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    uVar8 = {l_U273[0]};
    uVar11 = {l_U280[0]};
    if (NOT sub_8693())
    {
        if (NOT (IS_CHAR_INJURED( l_U208 )))
        {
            if (IS_CHAR_MALE( l_U208 ))
            {
                switch (sub_905())
                {
                    case 0:
                    uVar8 = {l_U273[0]};
                    uVar11 = {l_U280[0]};
                    break;
                    case 1:
                    uVar8 = {l_U270};
                    uVar11 = {l_U280[0]};
                    break;
                    case 2:
                    uVar8 = {l_U273[0]};
                    uVar11 = {l_U280[0]};
                    break;
                    case 3:
                    uVar8 = {l_U280[0]};
                    uVar11 = {l_U280[1]};
                    break;
                    case 4:
                    uVar8 = {l_U280[0]};
                    uVar11 = {l_U280[1]};
                    break;
                }
            }
            else
            {
                uVar8 = {l_U273[0]};
            }
            if (IS_PLAYER_SCRIPT_CONTROL_ON( sub_783() ))
            {
                if (((LOCATE_CHAR_ON_FOOT_3D( sub_2431(), uVar8._fU0, uVar8._fU4, uVar8._fU8, 3.00000000, 3.00000000, 3.00000000, 0 )) || (LOCATE_CHAR_ON_FOOT_3D( sub_2431(), uVar11._fU0, uVar11._fU4, uVar11._fU8, 3.00000000, 3.00000000, 3.00000000, 0 ))) || (sub_9130()))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2431(), l_U208, 3.00000000, 3.00000000, 2.00000000, 0 ))
                    {
                        GET_CHAR_COORDINATES( sub_2431(), ref vVar2.x, ref vVar2.y, ref vVar2.z );
                        GET_CHAR_COORDINATES( l_U208, ref vVar5.x, ref vVar5.y, ref vVar5.z );
                        l_U231 = {vVar5 - vVar2};
                        GET_HEADING_FROM_VECTOR_2D( l_U231._fU0, l_U231._fU4, ref l_U234 );
                        if (sub_9385( l_U234, 75.00000000 ))
                        {
                            return 1;
                        }
                    }
                    else
                    {
                        sub_513( l_U266, l_U354 );
                    }
                }
                else
                {
                    sub_513( l_U266, l_U354 );
                }
            }
        }
    }
    return 0;
}

int sub_8693()
{
    GET_PLAYER_GROUP( sub_783(), ref l_U323 );
    GET_GROUP_SIZE( l_U323, ref l_U324, ref l_U287 );
    if (l_U287 > 0)
    {
        return 1;
    }
    return 0;
}

int sub_9130()
{
    float fVar2;

    if (NOT (IS_CHAR_INJURED( l_U208 )))
    {
        if (NOT (IS_PED_RAGDOLL( l_U208 )))
        {
            GET_CHAR_SPEED( l_U208, ref fVar2 );
            if (fVar2 < 0.05000000)
            {
                if (l_U352 > 50)
                {
                    return 1;
                }
                l_U352++;
            }
            else
            {
                l_U352 = 0;
            }
        }
    }
    return 0;
}

int sub_9385(unknown uParam0, unknown uParam1)
{
    float fVar4;
    float fVar5;
    float fVar6;

    if (NOT (IS_CHAR_DEAD( sub_2431() )))
    {
        GET_CHAR_HEADING( sub_2431(), ref fVar4 );
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

int sub_9745(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_783() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_783() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_783() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9202)))
                {
                    if (NOT sub_9841())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_2431() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_9926())
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

int sub_9841()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_9926()
{
    return sub_9937( 0, 0 );
}

int sub_9937(boolean bParam0, unknown uParam1)
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

int sub_10039(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_9745( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_783(), 0 );
                l_U2 = 1;
            }
            g_U9172 = uParam0;
            l_U3 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_10314();
                l_U1 = 1;
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
                            l_U0 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U0)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U0 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_10314()
{
    return sub_9937( 1, 1 );
}

void sub_11064()
{
    if (IS_CHAR_DEAD( l_U208 ))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U208, sub_2431(), 0 ))
        {
            sub_1188( 5 );
        }
        else
        {
            sub_1188( 4 );
        }
        if (DOES_BLIP_EXIST( l_U297 ))
        {
            REMOVE_BLIP( l_U297 );
        }
        sub_1614();
        l_U109 = 3;
    }
    else if (IS_CHAR_INJURED( l_U208 ))
    {
        SET_CHAR_HEALTH( l_U208, 0 );
    }
    return;
}

void sub_11265()
{
    if (NOT (IS_CHAR_INJURED( l_U208 )))
    {
        if (IS_CHAR_MALE( l_U208 ))
        {
            if (l_U110 == 0)
            {
                if (DOES_SCENARIO_EXIST_IN_AREA( l_U273[0], l_U346, 1 ))
                {
                    GET_SCRIPT_TASK_STATUS( l_U208, 118, ref l_U256 );
                    if (l_U256 == 7)
                    {
                        TASK_USE_NEAREST_SCENARIO_TO_POS( l_U208, l_U273[0], l_U346 );
                    }
                }
                else if (DOES_SCENARIO_EXIST_IN_AREA( l_U273[1], l_U346, 1 ))
                {
                    GET_SCRIPT_TASK_STATUS( l_U208, 118, ref l_U256 );
                    if (l_U256 == 7)
                    {
                        TASK_USE_NEAREST_SCENARIO_TO_POS( l_U208, l_U273[1], l_U346 );
                    }
                }
            }
            else
            {
                GET_SCRIPT_TASK_STATUS( l_U208, 118, ref l_U256 );
                if (l_U256 == 7)
                {
                    if (DOES_SCENARIO_EXIST_IN_AREA( l_U273[0], l_U346, 1 ))
                    {
                        TASK_USE_NEAREST_SCENARIO_TO_POS( l_U208, l_U273[0], l_U346 );
                    }
                    else if (DOES_SCENARIO_EXIST_IN_AREA( l_U280[0], l_U346, 1 ))
                    {
                        TASK_USE_NEAREST_SCENARIO_TO_POS( l_U208, l_U280[0], l_U346 );
                    }
                }
            }
        }
        else if (IS_SITTING_OBJECT_NEAR( l_U273[0], 0 ))
        {
            GET_SCRIPT_TASK_STATUS( l_U208, 112, ref l_U256 );
            if (l_U256 == 7)
            {
                REMOVE_CHAR_FROM_GROUP( l_U208 );
                TASK_SIT_DOWN_ON_NEAREST_OBJECT( l_U208, 0, 2, l_U273[0], 0, 0, -2, 0 );
            }
            else if (IS_CHAR_SITTING_IDLE( l_U208 ))
            {
                if (HAS_OVERRIDEN_SIT_IDLE_ANIM_FINISHED( l_U208 ))
                {
                    CHANGE_CHAR_SIT_IDLE_ANIM( l_U208, "AMB@DEFAULT", "CAFE_F_EMPTY_DEFAULT", 1 );
                }
            }
        }
    }
    return;
}

void sub_11841()
{
    if (NOT (IS_CHAR_INJURED( l_U208 )))
    {
        GET_SCRIPT_TASK_STATUS( l_U208, 118, ref l_U256 );
        if (l_U256 == 7)
        {
            if (DOES_SCENARIO_EXIST_IN_AREA( l_U270, l_U346, 1 ))
            {
                TASK_USE_NEAREST_SCENARIO_TO_POS( l_U208, l_U270, l_U346 );
            }
            else if (DOES_SCENARIO_EXIST_IN_AREA( l_U280[0], l_U346, 1 ))
            {
                TASK_USE_NEAREST_SCENARIO_TO_POS( l_U208, l_U280[0], l_U346 );
            }
        }
    }
    return;
}

void sub_12027()
{
    if (NOT (IS_CHAR_INJURED( l_U208 )))
    {
        GET_SCRIPT_TASK_STATUS( l_U208, 118, ref l_U256 );
        if (l_U256 == 7)
        {
            if (DOES_SCENARIO_EXIST_IN_AREA( l_U280[0], l_U346, 1 ))
            {
                TASK_USE_NEAREST_SCENARIO_TO_POS( l_U208, l_U280[0], l_U346 );
            }
            else if (DOES_SCENARIO_EXIST_IN_AREA( l_U280[1], l_U346, 1 ))
            {
                TASK_USE_NEAREST_SCENARIO_TO_POS( l_U208, l_U280[1], l_U346 );
            }
            else if (DOES_SCENARIO_EXIST_IN_AREA( l_U273[0], l_U346, 1 ))
            {
                TASK_USE_NEAREST_SCENARIO_TO_POS( l_U208, l_U273[0], l_U346 );
            };;;
        }
    }
    return;
}

int sub_12287(unknown uParam0)
{
    GET_PLAYER_GROUP( sub_783(), ref l_U323 );
    if ((NOT (IS_CHAR_DEAD( uParam0 ))) AND (NOT (IS_CHAR_INJURED( uParam0 ))))
    {
        if (IS_GROUP_MEMBER( uParam0, l_U323 ))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2431(), uParam0, 20.00000000, 20.00000000, 20.00000000, 0 ))
            {
                if (DOES_BLIP_EXIST( l_U297 ))
                {
                    REMOVE_BLIP( l_U297 );
                }
                return 1;
            }
            else
            {
                REMOVE_CHAR_FROM_GROUP( uParam0 );
            }
        }
        else if (NOT (DOES_BLIP_EXIST( l_U297 )))
        {
            ADD_BLIP_FOR_CHAR( uParam0, ref l_U297 );
            SET_BLIP_AS_FRIENDLY( l_U297, 1 );
            if (sub_905() == 0)
            {
                PRINT_NOW( "STR_ROM", 7500, 1 );
            }
            else if (sub_905() == 1)
            {
                PRINT_NOW( "STR_PAC", 7500, 1 );
            }
            else if (sub_905() == 2)
            {
                PRINT_NOW( "STR_JAC", 7500, 1 );
            }
            else if (sub_905() == 3)
            {
                PRINT_NOW( "STR_BRU", 7500, 1 );
            }
            else if (sub_905() == 4)
            {
                PRINT_NOW( "STR_DWA", 7500, 1 );
            }
            else
            {
                PRINT_NOW( "STR_ANY", 7500, 1 );
            };;;;;
        }
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2431(), uParam0, 12.00000000, 12.00000000, 12.00000000, 0 ))
        {
            SET_GROUP_MEMBER( l_U323, uParam0 );
        }
    }
    return 0;
}

int sub_12810(unknown uParam0)
{
    int iVar3;

    GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar3 );
    if (iVar3 == (GET_HASH_KEY( l_U288 )))
    {
        return 1;
    }
    return 0;
}

void sub_13063()
{
    l_U242 = {-3.00000000, -3.00000000, -3.00000000};
    l_U245 = {3.00000000, 3.00000000, 3.00000000};
    l_U242 = {l_U199 + l_U242};
    l_U245 = {l_U199 + l_U245};
    l_U242 = {-3.00000000, -3.00000000, -3.00000000};
    l_U245 = {3.00000000, 3.00000000, 3.00000000};
    l_U242 = {l_U213[0] + l_U242};
    l_U245 = {l_U213[0] + l_U245};
    CLEAR_AREA( l_U199._fU0, l_U199._fU4, l_U199._fU8, 3.00000000, 0 );
    l_U242 = {-1.00000000, -1.00000000, -1.00000000};
    l_U245 = {1.00000000, 1.00000000, 1.00000000};
    l_U242 = {l_U270 + l_U242};
    l_U245 = {l_U270 + l_U245};
    CLEAR_AREA( l_U270._fU0, l_U270._fU4, l_U270._fU8, 1.00000000, 0 );
    l_U242 = {-1.00000000, -1.00000000, -1.00000000};
    l_U245 = {1.00000000, 1.00000000, 1.00000000};
    l_U242 = {l_U273[1] + l_U242};
    l_U245 = {l_U273[1] + l_U245};
    CLEAR_AREA( l_U273[1]._fU0, l_U273[1]._fU4, l_U273[1]._fU8, 1.00000000, 0 );
    l_U242 = {-1.00000000, -1.00000000, -1.00000000};
    l_U245 = {1.00000000, 1.00000000, 1.00000000};
    l_U242 = {l_U280[0] + l_U242};
    l_U245 = {l_U280[0] + l_U245};
    CLEAR_AREA( l_U280[0]._fU0, l_U280[0]._fU4, l_U280[0]._fU8, 1.00000000, 0 );
    return;
}

void sub_13667()
{
    return;
}

int sub_13730(unknown uParam0)
{
    int iVar3;

    GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar3 );
    if (iVar3 == (GET_HASH_KEY( l_U290 )))
    {
        if (l_U110 == 0)
        {
            if (NOT l_U260)
            {
                l_U260 = 1;
            }
        }
        return 1;
    }
    return 0;
}

void sub_13831()
{
    int Result;

    Result = 0;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Michelle1" )) >= 1)
    {
        Result = 1;
    }
    return Result;
}

void sub_13998()
{
    for ( l_U235 = 0; l_U235 < 2; l_U235++ )
    {
        CREATE_CHAR( 5, sub_14026(), l_U213[l_U235]._fU0, l_U213[l_U235]._fU4, l_U213[l_U235]._fU8, ref l_U210[l_U235], 1 );
        SET_CHAR_RELATIONSHIP( l_U210[l_U235], 1, 0 );
        SET_CHAR_RELATIONSHIP( l_U210[l_U235], 1, 4 );
        SET_CHAR_HEADING( l_U210[l_U235], l_U220[l_U235] );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U210[l_U235] );
        SET_CHAR_NEVER_TARGETTED( l_U210[l_U235], 1 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U210[l_U235], l_U291 );
    }
    return;
}

void sub_14026()
{
    int Result;
    unknown uVar3;
    int iVar4;

    iVar4 = 2;
    if (g_U10978)
    {
        if (NOT (sub_2961( 6 )))
        {
            iVar4 = 1;
        }
    }
    GENERATE_RANDOM_INT_IN_RANGE( 0, iVar4, ref uVar3 );
    switch (uVar3)
    {
        case 0:
        Result = 1113677074;
        break;
        case 1:
        Result = 1353709999;
        break;
    }
    return Result;
}

void sub_14365()
{
    for ( l_U235 = 0; l_U235 < l_U207; l_U235++ )
    {
        CREATE_CHAR( 5, sub_14026(), l_U157[l_U235]._fU0, l_U157[l_U235]._fU4, l_U157[l_U235]._fU8, ref l_U152[l_U235], 1 );
        SET_CHAR_RELATIONSHIP( l_U152[l_U235], 1, 0 );
        SET_CHAR_RELATIONSHIP( l_U152[l_U235], 1, 4 );
        SET_CHAR_HEADING( l_U152[l_U235], l_U170[l_U235] );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U152[l_U235] );
        SET_CHAR_NEVER_TARGETTED( l_U152[l_U235], 1 );
        BLOCK_CHAR_AMBIENT_ANIMS( l_U152[l_U235], 1 );
        if (IS_CHAR_MODEL( l_U152[l_U235], 1113677074 ))
        {
            sub_2480( 1, l_U152[l_U235], "STRIPPER_1", 0 );
            SET_AMBIENT_VOICE_NAME( l_U152[l_U235], "STRIPPER_1" );
        }
        else
        {
            sub_2480( 2, l_U152[l_U235], "STRIPPER_2", 0 );
            SET_AMBIENT_VOICE_NAME( l_U152[l_U235], "STRIPPER_2" );
        }
        if (l_U235 < 3)
        {
            SET_ROOM_FOR_CHAR_BY_NAME( l_U152[l_U235], l_U288 );
        }
        else
        {
            SET_ROOM_FOR_CHAR_BY_NAME( l_U152[l_U235], l_U289 );
        }
    }
    return;
}

void sub_14847()
{
    unknown uVar2;

    CREATE_CHAR( 4, l_U248, l_U227._fU0, l_U227._fU4, l_U227._fU8, ref l_U209, 1 );
    SET_CHAR_RELATIONSHIP( l_U209, 1, 0 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U209, 4 );
    SET_CHAR_HEADING( l_U209, l_U230 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U209 );
    SET_CHAR_NEVER_TARGETTED( l_U209, 1 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U209, l_U288 );
    SET_PED_PATH_MAY_USE_CLIMBOVERS( l_U209, 0 );
    SET_CHAR_WILL_COWER_INSTEAD_OF_FLEEING( l_U209, 1 );
    return;
}

void sub_15026()
{
    if (l_U110 == 0)
    {
        REQUEST_MODEL( l_U295 );
        REQUEST_MODEL( l_U296 );
        REQUEST_MODEL( l_U248 );
        REQUEST_ANIMS( l_U329 );
        if ((((HAS_MODEL_LOADED( l_U295 )) AND (HAS_MODEL_LOADED( l_U296 ))) AND (HAS_MODEL_LOADED( l_U248 ))) AND (HAVE_ANIMS_LOADED( l_U329 )))
        {
            l_U257 = 1;
        }
        else
        {
            REQUEST_MODEL( l_U295 );
            REQUEST_MODEL( l_U296 );
            REQUEST_MODEL( l_U248 );
            REQUEST_ANIMS( l_U329 );
        }
    }
    else if (l_U110 == 1)
    {
        l_U314[0] = 1063816580;
        l_U314[1] = 807236245;
        REQUEST_MODEL( l_U314[0] );
        REQUEST_MODEL( l_U314[1] );
        REQUEST_MODEL( l_U295 );
        REQUEST_MODEL( l_U296 );
        REQUEST_MODEL( l_U248 );
        REQUEST_ANIMS( l_U329 );
        if ((((((HAS_MODEL_LOADED( l_U295 )) AND (HAS_MODEL_LOADED( l_U296 ))) AND (HAS_MODEL_LOADED( l_U248 ))) AND (HAS_MODEL_LOADED( l_U314[0] ))) AND (HAS_MODEL_LOADED( l_U314[1] ))) AND (HAVE_ANIMS_LOADED( l_U329 )))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U314[0] );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U314[1] );
            l_U257 = 1;
        }
        else
        {
            REQUEST_MODEL( l_U295 );
            REQUEST_MODEL( l_U296 );
            REQUEST_MODEL( l_U248 );
            REQUEST_ANIMS( l_U329 );
        }
    }
    return;
}

void sub_15521()
{
    if (l_U187)
    {
        sub_1407( "bPlayerGrabbed = TRUE\n" );
    }
    else
    {
        sub_1407( "bPlayerGrabbed = FALSE\n" );
    }
    if (l_U183)
    {
        sub_1407( "bPlayerHadDance = TRUE\n" );
    }
    else
    {
        sub_1407( "bPlayerHadDance = FALSE\n" );
    }
    sub_2560( "iTotalDancers = ", l_U207 );
    sub_1407( " *****\n" );
    return;
}

int sub_15736()
{
    l_U242 = {-20.00000000, -20.00000000, -20.00000000};
    l_U245 = {20.00000000, 20.00000000, 20.00000000};
    l_U242 = {l_U149 + l_U242};
    l_U245 = {l_U149 + l_U245};
    if (l_U110 == 0)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2431(), l_U213[0]._fU0, l_U213[0]._fU4, l_U213[0]._fU8, 2.00000000, 2.00000000, 2.00000000, 0 ))
        {
            g_U9158 = 1;
            sub_15909();
            return 1;
        }
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_2431(), l_U301[0]._fU0, l_U301[0]._fU4, l_U301[0]._fU8, 3.00000000, 3.00000000, 3.00000000, 0 ))
    {
        g_U9157 = 1;
        return 1;
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_2431(), l_U301[1]._fU0, l_U301[1]._fU4, l_U301[1]._fU8, 3.00000000, 3.00000000, 3.00000000, 0 ))
    {
        g_U9157 = 1;
        return 1;
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_2431(), l_U301[2]._fU0, l_U301[2]._fU4, l_U301[2]._fU8, 3.00000000, 3.00000000, 0.50000000, 0 ))
    {
        g_U9157 = 1;
        return 1;
    }
    if (g_U9158)
    {
        return 1;
    }
    for ( l_U235 = 0; l_U235 < l_U207; l_U235++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U152[l_U235] )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U152[l_U235], sub_2431(), 0 ))
            {
                g_U9158 = 1;
                return 1;
            }
        }
    }
    if ((IS_CHAR_SHOOTING( sub_2431() )) || (IS_ANY_CHAR_SHOOTING_IN_AREA( l_U242, l_U245, 0 )))
    {
        g_U9158 = 1;
        return 1;
    }
    return 0;
}

void sub_15909()
{
    for ( l_U235 = 0; l_U235 < 2; l_U235++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U210[l_U235] )))
        {
            GET_SCRIPT_TASK_STATUS( l_U210[l_U235], 24, ref l_U256 );
            if (l_U256 == 7)
            {
                SET_CHAR_RELATIONSHIP( l_U210[l_U235], 2, 0 );
                TASK_SMART_FLEE_POINT( l_U210[l_U235], l_U213[l_U235]._fU0, l_U213[l_U235]._fU4, l_U213[l_U235]._fU8, 100.00000000, -1 );
            }
        }
    }
    return;
}

void sub_16644()
{
    if (NOT (IS_CHAR_INJURED( l_U209 )))
    {
        if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U209, sub_2431(), 0 )))
        {
            if (g_U9158)
            {
                GET_SCRIPT_TASK_STATUS( l_U209, 6, ref l_U256 );
                if (l_U256 == 7)
                {
                    TASK_COWER( l_U209 );
                }
            }
            GET_SCRIPT_TASK_STATUS( l_U209, 29, ref l_U256 );
            if (l_U256 == 7)
            {
                sub_16780( l_U209 );
            }
        }
        else if (g_U9158 == 0)
        {
            GET_SCRIPT_TASK_STATUS( l_U209, 6, ref l_U256 );
            if (l_U256 == 7)
            {
                TASK_COWER( l_U209 );
            }
            g_U9158 = 1;
        }
    }
    return;
}

void sub_16780(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_16791( 0, 1 );
    if (iVar3 == 0)
    {
        l_U103 = 0;
        sub_16841( uParam0 );
    }
    else if (iVar3 == 1)
    {
        l_U103 = 2;
        sub_16841( uParam0 );
    }
    else if (iVar3 == 2)
    {
        l_U103 = 2;
        sub_16841( uParam0 );
    }
    else if (iVar3 == 3)
    {
        l_U103 = 0;
        sub_16841( uParam0 );
    };;;;
    return;
}

void sub_16791(unknown uParam0, unknown Result)
{
    GENERATE_RANDOM_INT_IN_RANGE( uParam0, Result, ref Result );
    return Result;
}

void sub_16841(unknown uParam0)
{
    switch (l_U103)
    {
        case 0:
        OPEN_SEQUENCE_TASK( ref l_U265 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U223._fU0, l_U223._fU4, l_U223._fU8, 2, 50000, 0.75000000 );
        TASK_ACHIEVE_HEADING( 0, l_U226 );
        TASK_PLAY_ANIM( 0, "CLEAN_GLASS", l_U329, 4.00000000, 0, 1, 1, 0, 0 );
        CLOSE_SEQUENCE_TASK( l_U265 );
        if (NOT (IS_CHAR_DEAD( uParam0 )))
        {
            TASK_PERFORM_SEQUENCE( uParam0, l_U265 );
            CLEAR_SEQUENCE_TASK( l_U265 );
        }
        break;
        case 2:
        OPEN_SEQUENCE_TASK( ref l_U265 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U227._fU0, l_U227._fU4, l_U227._fU8, 2, 50000, 0.10000000 );
        TASK_ACHIEVE_HEADING( 0, l_U230 );
        TASK_PLAY_ANIM( 0, "WIPE_COUNTER", l_U329, 4.00000000, 0, 1, 1, 0, 0 );
        CLOSE_SEQUENCE_TASK( l_U265 );
        if (NOT (IS_CHAR_DEAD( uParam0 )))
        {
            TASK_PERFORM_SEQUENCE( uParam0, l_U265 );
            CLEAR_SEQUENCE_TASK( l_U265 );
        }
        break;
    }
    return;
}

void sub_17396()
{
    for ( l_U235 = 0; l_U235 < l_U207; l_U235++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U152[l_U235] )))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U152[l_U235], 1 );
        }
    }
    return;
}

void sub_17585()
{
    float fVar2;

    fVar2 = 10.00000000;
    if (NOT (IS_CHAR_INJURED( l_U152[3] )))
    {
        if (NOT l_U187)
        {
            if (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_2431(), l_U152[3], fVar2, fVar2, fVar2, 0 ))
            {
                SET_CHAR_VISIBLE( l_U152[3], 1 );
                SET_CHAR_COLLISION( l_U152[3], 1 );
                FREEZE_CHAR_POSITION( l_U152[3], 0 );
                l_U104[3] = 3;
                l_U207 = 4;
                l_U187 = 1;
                if (l_U183)
                {
                    l_U183 = 0;
                }
            }
            else if (NOT (IS_CHAR_INJURED( l_U175 )))
            {
                DELETE_CHAR( ref l_U175 );
            }
            SET_CHAR_VISIBLE( l_U152[3], 0 );
            SET_CHAR_COLLISION( l_U152[3], 0 );
            FREEZE_CHAR_POSITION( l_U152[3], 1 );
            SET_CHAR_COORDINATES( l_U152[3], l_U157[3]._fU0, l_U157[3]._fU4, l_U157[3]._fU8 );
            SET_CHAR_HEADING( l_U152[3], l_U170[3] );
            l_U104[3] = 3;
            l_U207 = 3;
            l_U187 = 0;;
        }
        else if (l_U207 == 4)
        {
            if (NOT (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_2431(), l_U152[3], fVar2, fVar2, fVar2, 0 )))
            {
                SET_CHAR_VISIBLE( l_U152[3], 0 );
                SET_CHAR_COLLISION( l_U152[3], 0 );
                FREEZE_CHAR_POSITION( l_U152[3], 1 );
                SET_CHAR_COORDINATES( l_U152[3], l_U157[3]._fU0, l_U157[3]._fU4, l_U157[3]._fU8 );
                SET_CHAR_HEADING( l_U152[3], l_U170[3] );
                l_U104[3] = 3;
                l_U207 = 3;
                l_U187 = 0;
            }
        }
        if (l_U259)
        {
            if (NOT (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_2431(), l_U152[3], 5.00000000, 5.00000000, 5.00000000, 0 )))
            {
                if (l_U183)
                {
                    l_U183 = 0;
                }
            }
        }
        if (NOT g_U9158)
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U152[3], sub_2431(), 0 ))
            {
                g_U9158 = 1;
            }
        }
    }
    return;
}

void sub_18323(int iParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    string sVar6;

    sVar6 = "STR_HLP";
    if (NOT (IS_CHAR_INJURED( iParam0 )))
    {
        if (NOT g_U9158)
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( iParam0, sub_2431(), 0 ))
            {
                g_U9158 = 1;
            }
        }
        switch ((uParam1^))
        {
            case 0:
            if (NOT l_U187)
            {
                if (sub_12810( sub_2431() ))
                {
                    if (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_2431(), iParam0, 5.00000000, 5.00000000, 5.00000000, 0 ))
                    {
                        GET_CHAR_COORDINATES( sub_2431(), ref l_U184._fU0, ref l_U184._fU4, ref l_U184._fU8 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( iParam0, l_U184._fU0, l_U184._fU4, l_U184._fU8, 2, -2, 2.00000000 );
                        l_U187 = 1;
                        (uParam1^) = 1;
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( iParam0, 26, ref l_U256 );
                        if (l_U256 == 7)
                        {
                            BLOCK_CHAR_AMBIENT_ANIMS( iParam0, 1 );
                            TASK_WANDER_STANDARD( iParam0 );
                        }
                        else if (NOT (sub_7064( iParam0 )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U265 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U157[uParam2]._fU0, l_U157[uParam2]._fU4, l_U157[uParam2]._fU8, 2, -2, 2.00000000 );
                            TASK_ACHIEVE_HEADING( 0, l_U170[uParam2] );
                            CLOSE_SEQUENCE_TASK( l_U265 );
                            TASK_PERFORM_SEQUENCE( iParam0, l_U265 );
                            CLEAR_SEQUENCE_TASK( l_U265 );
                            l_U183 = 1;
                        }
                    }
                }
            }
            break;
            case 1:
            if (NOT sub_8658())
            {
                GET_SCRIPT_TASK_STATUS( iParam0, 27, ref l_U256 );
                if (l_U256 == 7)
                {
                    if (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_2431(), iParam0, 2.00000000, 2.00000000, 2.00000000, 0 ))
                    {
                        if (NOT sub_8658())
                        {
                            if (sub_9745( l_U266, 0 ))
                            {
                                SET_PLAYER_CONTROL( sub_783(), 0 );
                                SET_CURRENT_CHAR_WEAPON( sub_2431(), 0, 1 );
                                HINT_CAM( 0.00000000, 0.00000000, 0.00000000, iParam0, 0, 0, 999999 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( sub_2431(), iParam0 );
                                OPEN_SEQUENCE_TASK( ref l_U265 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2431() );
                                CLOSE_SEQUENCE_TASK( l_U265 );
                                TASK_PERFORM_SEQUENCE( iParam0, l_U265 );
                                CLEAR_SEQUENCE_TASK( l_U265 );
                                if (IS_CHAR_MODEL( iParam0, 1113677074 ))
                                {
                                    sub_19042( ref l_U317, 1 );
                                    sub_2480( 1, iParam0, "STRIPPER_1", 0 );
                                    sub_19207( "SC1_S1DASK", ref l_U317, 6, 1 );
                                }
                                else
                                {
                                    sub_19042( ref l_U317, 1 );
                                    sub_2480( 2, iParam0, "STRIPPER_2", 0 );
                                    sub_19207( "SC1_S2DASK", ref l_U317, 6, 1 );
                                }
                                l_U255 = 0;
                                (uParam1^) = 2;
                            }
                        }
                    }
                    else
                    {
                        TASK_FOLLOW_NAV_MESH_TO_COORD( iParam0, l_U157[uParam2]._fU0, l_U157[uParam2]._fU4, l_U157[uParam2]._fU8, 2, -2, 2.00000000 );
                        l_U187 = 0;
                        (uParam1^) = 0;
                    }
                }
                else if (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_2431(), iParam0, 2.00000000, 2.00000000, 2.00000000, 0 ))
                {
                    CLEAR_CHAR_TASKS( iParam0 );
                }
            }
            break;
            case 2:
            if (NOT sub_8658())
            {
                if (sub_9745( l_U266, 0 ))
                {
                    if (NOT (sub_20379( l_U317 )))
                    {
                        if (sub_10039( l_U266, sVar6, 0 ))
                        {
                            SET_PLAYER_CONTROL( sub_783(), 1 );
                            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, iParam0, 0, 0, 0 );
                            CLEAR_HELP();
                            CLEAR_CHAR_TASKS( iParam0 );
                            if (IS_CHAR_MODEL( iParam0, 1113677074 ))
                            {
                                sub_19042( ref l_U317, 1 );
                                sub_2480( 1, iParam0, "STRIPPER_1", 0 );
                                sub_19207( "SC1_S1DACC", ref l_U317, 6, 1 );
                            }
                            else
                            {
                                sub_19042( ref l_U317, 1 );
                                sub_2480( 2, iParam0, "STRIPPER_2", 0 );
                                sub_19207( "SC1_S2DACC", ref l_U317, 6, 1 );
                            }
                            OPEN_SEQUENCE_TASK( ref l_U265 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U196._fU0, l_U196._fU4, l_U196._fU8, 2, -2, 2.00000000 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U193._fU0, l_U193._fU4, l_U193._fU8, 2, -2, 2.00000000 );
                            CLOSE_SEQUENCE_TASK( l_U265 );
                            if (NOT (IS_CHAR_DEAD( iParam0 )))
                            {
                                CLEAR_CHAR_TASKS( iParam0 );
                                TASK_PERFORM_SEQUENCE( iParam0, l_U265 );
                            }
                            CLEAR_SEQUENCE_TASK( l_U265 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0, 1 );
                            UNLOCK_RAGDOLL( iParam0, 0 );
                            sub_513( l_U266, sVar6 );
                            g_U9157 = 0;
                            l_U148 = 1;
                            (uParam1^) = 3;
                        }
                        else if (sub_20957())
                        {
                            CLEAR_CHAR_TASKS( iParam0 );
                            SET_PLAYER_CONTROL( sub_783(), 1 );
                            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, iParam0, 0, 0, 0 );
                            l_U235 = 0;
                            for ( l_U235 = 0; l_U235 < 3; l_U235++ )
                            {
                                l_U104[l_U235] = 0;
                                OPEN_SEQUENCE_TASK( ref l_U265 );
                                TASK_WANDER_STANDARD( 0 );
                                CLOSE_SEQUENCE_TASK( l_U265 );
                                if (NOT (IS_CHAR_DEAD( l_U152[l_U235] )))
                                {
                                    CLEAR_CHAR_TASKS( l_U152[l_U235] );
                                    TASK_PERFORM_SEQUENCE( l_U152[l_U235], l_U265 );
                                }
                                CLEAR_SEQUENCE_TASK( l_U265 );
                            }
                            if (IS_CHAR_MODEL( iParam0, 1113677074 ))
                            {
                                sub_19042( ref l_U317, 1 );
                                sub_2480( 1, iParam0, "STRIPPER_1", 0 );
                                sub_19207( "SC1_S1DREJ", ref l_U317, 6, 1 );
                            }
                            else
                            {
                                sub_19042( ref l_U317, 1 );
                                sub_2480( 2, iParam0, "STRIPPER_2", 0 );
                                sub_19207( "SC1_S2DREJ", ref l_U317, 6, 1 );
                            }
                            sub_513( l_U266, sVar6 );
                            l_U187 = 0;
                            l_U183 = 1;
                        }
                        else if (g_U9157)
                        {
                            for ( l_U235 = 0; l_U235 < 3; l_U235++ )
                            {
                                l_U104[l_U235] = 0;
                                OPEN_SEQUENCE_TASK( ref l_U265 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U157[l_U235]._fU0, l_U157[l_U235]._fU4, l_U157[l_U235]._fU8, 2, -2, 2.00000000 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2431() );
                                CLOSE_SEQUENCE_TASK( l_U265 );
                                if (NOT (IS_CHAR_DEAD( l_U152[l_U235] )))
                                {
                                    CLEAR_CHAR_TASKS( l_U152[l_U235] );
                                    TASK_PERFORM_SEQUENCE( l_U152[l_U235], l_U265 );
                                }
                                CLEAR_SEQUENCE_TASK( l_U265 );
                            }
                            SET_PLAYER_CONTROL( sub_783(), 1 );
                            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, iParam0, 0, 0, 0 );
                            CLEAR_HELP();
                            sub_513( l_U266, sVar6 );
                            l_U187 = 0;
                            l_U183 = 1;
                        }
                        else if (g_U9158)
                        {
                            for ( l_U235 = 0; l_U235 < 3; l_U235++ )
                            {
                                l_U104[l_U235] = 0;
                                OPEN_SEQUENCE_TASK( ref l_U265 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U157[l_U235]._fU0, l_U157[l_U235]._fU4, l_U157[l_U235]._fU8, 2, -2, 2.00000000 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2431() );
                                CLOSE_SEQUENCE_TASK( l_U265 );
                                if (NOT (IS_CHAR_DEAD( l_U152[l_U235] )))
                                {
                                    CLEAR_CHAR_TASKS( l_U152[l_U235] );
                                    TASK_PERFORM_SEQUENCE( l_U152[l_U235], l_U265 );
                                }
                                CLEAR_SEQUENCE_TASK( l_U265 );
                            }
                            SET_PLAYER_CONTROL( sub_783(), 1 );
                            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, iParam0, 0, 0, 0 );
                            CLEAR_HELP();
                            sub_513( l_U266, sVar6 );
                            l_U187 = 0;
                            l_U183 = 1;
                        };;;;
                    }
                }
                else
                {
                    for ( l_U235 = 0; l_U235 < 3; l_U235++ )
                    {
                        l_U104[l_U235] = 0;
                        OPEN_SEQUENCE_TASK( ref l_U265 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U157[l_U235]._fU0, l_U157[l_U235]._fU4, l_U157[l_U235]._fU8, 2, -2, 2.00000000 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2431() );
                        CLOSE_SEQUENCE_TASK( l_U265 );
                        if (NOT (IS_CHAR_DEAD( l_U152[l_U235] )))
                        {
                            CLEAR_CHAR_TASKS( l_U152[l_U235] );
                            TASK_PERFORM_SEQUENCE( l_U152[l_U235], l_U265 );
                        }
                        CLEAR_SEQUENCE_TASK( l_U265 );
                    }
                    SET_PLAYER_CONTROL( sub_783(), 1 );
                    HINT_CAM( 0.00000000, 0.00000000, 0.00000000, iParam0, 0, 0, 0 );
                    CLEAR_HELP();
                    CLEAR_CHAR_TASKS( iParam0 );
                    sub_513( l_U266, sVar6 );
                }
            }
            break;
            case 3:
            if (l_U299)
            {
                if (l_U345 == 2)
                {
                    if ((NOT (IS_CHAR_INJURED( sub_2431() ))) AND (NOT (IS_CHAR_INJURED( l_U175 ))))
                    {
                        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2431(), l_U179._fU0, l_U179._fU4, l_U179._fU8, ref l_U231._fU0, ref l_U231._fU4, ref l_U231._fU8 );
                        if (sub_22493( l_U231 ))
                        {
                            while (NOT (sub_22803( ref iParam0, l_U345 )))
                            {
                                WAIT( 0 );
                            }
                            (uParam1^) = 4;
                        }
                    }
                }
                else
                {
                    while (NOT (sub_22803( ref iParam0, l_U345 )))
                    {
                        WAIT( 0 );
                    }
                    (uParam1^) = 4;
                }
            }
            else
            {
                GET_SCRIPT_TASK_STATUS( iParam0, 29, ref l_U256 );
                if (l_U256 == 7)
                {
                    if (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_2431(), iParam0, 2.00000000, 2.00000000, 2.00000000, 0 ))
                    {
                        if (NOT g_U9893._fU12)
                        {
                            g_U9157 = 0;
                            SET_EVERYONE_IGNORE_PLAYER( sub_783(), 1 );
                            if (sub_905() == -1)
                            {
                                if (NOT l_U264)
                                {
                                    sub_7240();
                                    l_U264 = 1;
                                }
                            }
                            DO_SCREEN_FADE_OUT( 250 );
                            while (NOT IS_SCREEN_FADED_OUT())
                            {
                                WAIT( 0 );
                            }
                            SET_PLAYER_CONTROL( sub_783(), 0 );
                            SET_CURRENT_CHAR_WEAPON( sub_2431(), 0, 1 );
                            SET_WIDESCREEN_BORDERS( 1 );
                            CLEAR_AREA( l_U199._fU0, l_U199._fU4, l_U199._fU8, 5.00000000, 0 );
                            SET_CHAR_COORDINATES( sub_2431(), l_U199._fU0, l_U199._fU4, l_U199._fU8 );
                            l_U294 = 0;
                            l_U205 = 0.00000000;
                            SET_CHAR_HEADING( sub_2431(), l_U205 );
                            if (NOT (IS_CHAR_DEAD( iParam0 )))
                            {
                                SET_ROOM_FOR_CHAR_BY_NAME( iParam0, l_U289 );
                            }
                            SET_ROOM_FOR_CHAR_BY_NAME( sub_2431(), l_U289 );
                            TASK_SIT_DOWN_ON_NEAREST_OBJECT( sub_2431(), 2, 0, l_U199, l_U293, 0.00000000, -2, 1 );
                            REQUEST_ANIMS( "MISSSTRIPCLUBHI" );
                            while (NOT (HAVE_ANIMS_LOADED( "MISSSTRIPCLUBHI" )))
                            {
                                PRINTSTRING( "[WMW]Waiting on striipper anims" );
                                WAIT( 0 );
                            }
                            while (NOT (IS_CHAR_SITTING_IDLE( sub_2431() )))
                            {
                                PRINTSTRING( "[WMW]Waiting on player sitting down" );
                                WAIT( 0 );
                            }
                            l_U345 = 0;
                            l_U148 = 1;
                            sub_24435();
                            GET_GAME_VIEWPORT_ID( ref uVar5 );
                            SET_ROOM_FOR_VIEWPORT_BY_NAME( uVar5, l_U289 );
                            sub_24681( iParam0 );
                            REGISTER_SCRIPT_WITH_AUDIO( 1 );
                            STOP_STREAM();
                            while (NOT (sub_22803( ref iParam0, l_U345 )))
                            {
                                WAIT( 0 );
                            }
                            DO_SCREEN_FADE_IN( 400 );
                            while (NOT IS_SCREEN_FADED_IN())
                            {
                                WAIT( 0 );
                            }
                            (uParam1^) = 4;
                        }
                    }
                    else if (TIMERA() > 20000)
                    {
                        SETTIMERA( 0 );
                    }
                    else if (TIMERA() > 15000)
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0, 0 );
                        UNLOCK_RAGDOLL( iParam0, 1 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( iParam0, l_U157[uParam2]._fU0, l_U157[uParam2]._fU4, l_U157[uParam2]._fU8, 2, 15000, 2.00000000 );
                        l_U187 = 0;
                        (uParam1^) = 0;
                    };;;
                }
                else if (sub_25290( sub_2431() ))
                {
                    if (NOT (sub_25290( iParam0 )))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0, 0 );
                        UNLOCK_RAGDOLL( iParam0, 1 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( iParam0, l_U157[uParam2]._fU0, l_U157[uParam2]._fU4, l_U157[uParam2]._fU8, 2, 15000, 2.00000000 );
                        l_U187 = 0;
                        l_U183 = 0;
                        l_U104[3] = 3;
                        (uParam1^) = 0;
                    }
                }
            }
            break;
            case 4:
            if (sub_10314())
            {
                if (NOT l_U146)
                {
                    if (IS_CONTROL_JUST_PRESSED( 2, 0 ))
                    {
                        if (l_U147)
                        {
                            if (l_U148 < 3)
                            {
                                l_U148++;
                            }
                            else
                            {
                                l_U148 = 1;
                            }
                        }
                        else if (l_U148 > 1)
                        {
                            l_U148--;
                        }
                        else
                        {
                            l_U147 = 1;
                            l_U148++;
                        }
                        if (l_U148 > 0)
                        {
                            if ((DOES_CAM_EXIST( l_U111 )) AND (DOES_CAM_EXIST( l_U112 )))
                            {
                                SET_CAM_POS( l_U111, l_U113[l_U148]._fU0, l_U113[l_U148]._fU4, l_U113[l_U148]._fU8 );
                                SET_CAM_ROT( l_U111, l_U129[l_U148]._fU0, l_U129[l_U148]._fU4, l_U129[l_U148]._fU8 );
                                SET_CAM_ACTIVE( l_U111, 1 );
                                SET_CAM_PROPAGATE( l_U111, 1 );
                                SET_CAM_ACTIVE( l_U112, 0 );
                                SET_CAM_PROPAGATE( l_U112, 0 );
                                SET_CAM_NEAR_DOF( l_U111, 2.00000000 );
                                SET_CAM_FAR_DOF( l_U111, 10.00000000 );
                                SET_CAM_FOV( l_U111, 42.00000000 );
                                l_U146 = 1;
                            }
                        }
                        else if ((DOES_CAM_EXIST( l_U111 )) AND (DOES_CAM_EXIST( l_U112 )))
                        {
                            SET_CAM_ACTIVE( l_U111, 0 );
                            SET_CAM_PROPAGATE( l_U111, 0 );
                            SET_CAM_ACTIVE( l_U112, 1 );
                            SET_CAM_PROPAGATE( l_U112, 1 );
                            SET_CAM_NEAR_DOF( l_U112, 2.00000000 );
                            SET_CAM_FAR_DOF( l_U112, 10.00000000 );
                            l_U146 = 1;
                        }
                    }
                    sub_25984( l_U111 );
                }
                else if (NOT (IS_CONTROL_PRESSED( 2, 0 )))
                {
                    l_U146 = 0;
                }
                if (NOT l_U262)
                {
                    GET_SCRIPT_TASK_STATUS( iParam0, 29, ref l_U256 );
                    if ((l_U256 == 7) || (HAS_CHAR_ANIM_FINISHED( iParam0, "MISSSTRIPCLUBHI", l_U356 )))
                    {
                        if (l_U345 < 2)
                        {
                            STOP_STREAM();
                            MUTE_POSITIONED_RADIO( 0 );
                            sub_27620( l_U345 );
                            l_U299 = 0;
                            while (sub_27694( iParam0, uParam1 ))
                            {
                                WAIT( 0 );
                                if (l_U299 == 0)
                                {
                                    if (NOT (IS_CHAR_DEAD( iParam0 )))
                                    {
                                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0, 0 );
                                        UNLOCK_RAGDOLL( iParam0, 1 );
                                        if (IS_CHAR_MODEL( iParam0, 1113677074 ))
                                        {
                                            sub_19042( ref l_U317, 1 );
                                            sub_2480( 1, iParam0, "STRIPPER_1", 0 );
                                            sub_19207( "SC1_S1DOVR", ref l_U317, 6, 1 );
                                        }
                                        else
                                        {
                                            sub_19042( ref l_U317, 1 );
                                            sub_2480( 2, iParam0, "STRIPPER_2", 0 );
                                            sub_19207( "SC1_S2DOVR", ref l_U317, 6, 1 );
                                        }
                                        CLEAR_SEQUENCE_TASK( l_U265 );
                                        OPEN_SEQUENCE_TASK( ref l_U265 );
                                        TASK_PLAY_ANIM( 0, "Idle_A", "MISSSTRIPCLUBHI", 4.00000000, 0, 0, 0, 0, 0 );
                                        TASK_PLAY_ANIM( 0, "Idle_Loop", "MISSSTRIPCLUBHI", 4.00000000, 1, 0, 0, 0, 0 );
                                        CLOSE_SEQUENCE_TASK( l_U265 );
                                        TASK_PERFORM_SEQUENCE( iParam0, l_U265 );
                                        CLEAR_SEQUENCE_TASK( l_U265 );
                                    }
                                    l_U299 = 1;
                                }
                            }
                        }
                        else
                        {
                            l_U262 = 1;
                        }
                    }
                    else if (IS_CHAR_PLAYING_ANIM( iParam0, "MISSSTRIPCLUBHI", l_U356 ))
                    {
                        if (sub_28643( iParam0, l_U356 ))
                        {
                            SHAKE_PAD( 0, 5, 64 );
                        }
                        GET_CHAR_ANIM_CURRENT_TIME( iParam0, "MISSSTRIPCLUBHI", l_U356, ref l_U347 );
                        if (IS_BUTTON_PRESSED( 0, 19 ))
                        {
                            sub_33359( l_U356, l_U347 );
                            sub_1407( " *****\n" );
                        }
                        else
                        {
                            sub_33359( l_U356, l_U347 );
                            sub_1407( "\n" );
                        }
                    }
                    else if (IS_CHAR_PLAYING_ANIM( iParam0, "MISSSTRIPCLUBHI", "Tri_C6_3Way_Woman1" ))
                    {
                        if (sub_28643( iParam0, "Tri_C6_3Way_Woman1" ))
                        {
                            SHAKE_PAD( 0, 5, 64 );
                        }
                        GET_CHAR_ANIM_CURRENT_TIME( iParam0, "MISSSTRIPCLUBHI", "Tri_C6_3Way_Woman1", ref l_U347 );
                        if (IS_BUTTON_PRESSED( 0, 19 ))
                        {
                            sub_33359( "Tri_C6_3Way_Woman1 ", l_U347 );
                            sub_1407( " *****\n" );
                        }
                        else
                        {
                            sub_33359( "Tri_C6_3Way_Woman1 ", l_U347 );
                            sub_1407( "\n" );
                        }
                    };;;
                }
                if ((uParam1^) == 4)
                {
                    if ((sub_27947()) || (l_U262))
                    {
                        if (NOT l_U261)
                        {
                            l_U262 = 1;
                            CLEAR_HELP();
                            if (NOT IS_SCREEN_FADING_OUT())
                            {
                                if (NOT IS_SCREEN_FADED_OUT())
                                {
                                    DO_SCREEN_FADE_OUT( 400 );
                                }
                            }
                            while (NOT IS_SCREEN_FADED_OUT())
                            {
                                WAIT( 0 );
                            }
                            STOP_STREAM();
                            MUTE_POSITIONED_RADIO( 0 );
                            if (DOES_OBJECT_EXIST( l_U325 ))
                            {
                                DELETE_OBJECT( ref l_U325 );
                            }
                            if (NOT (IS_CHAR_DEAD( l_U175 )))
                            {
                                DELETE_CHAR( ref l_U175 );
                            }
                            if ((NOT (IS_CHAR_DEAD( sub_2431() ))) AND (NOT (IS_CHAR_INJURED( iParam0 ))))
                            {
                                CLEAR_HELP();
                                SET_USES_COLLISION_OF_CLOSEST_OBJECT_OF_TYPE( 1150.00000000, 1669.00000000, 16.00000000, 2.00000000, -45131371, 1 );
                                SET_USES_COLLISION_OF_CLOSEST_OBJECT_OF_TYPE( l_U199._fU0, l_U199._fU4, l_U199._fU8, 1.00000000, -45131371, 1 );
                                SET_CAM_POS( l_U111, l_U113[4]._fU0, l_U113[4]._fU4, l_U113[4]._fU8 );
                                SET_CAM_ROT( l_U111, l_U129[4]._fU0, l_U129[4]._fU4, l_U129[4]._fU8 );
                                SET_CAM_ACTIVE( l_U111, 1 );
                                SET_CAM_PROPAGATE( l_U111, 1 );
                                SET_CAM_ACTIVE( l_U112, 0 );
                                SET_CAM_PROPAGATE( l_U112, 0 );
                                SET_CAM_NEAR_DOF( l_U111, 2.00000000 );
                                SET_CAM_FAR_DOF( l_U111, 10.00000000 );
                                SET_CHAR_COLLISION( iParam0, 1 );
                                FREEZE_CHAR_POSITION( iParam0, 0 );
                                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2431(), 0.00000000, 2.00000000, -100.00000000, ref l_U231._fU0, ref l_U231._fU4, ref l_U231._fU8 );
                                SET_CHAR_HEADING( iParam0, l_U206 );
                                SET_CHAR_COORDINATES( iParam0, l_U231._fU0, l_U231._fU4, l_U202._fU8 );
                                OPEN_SEQUENCE_TASK( ref l_U265 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2431() );
                                CLOSE_SEQUENCE_TASK( l_U265 );
                                TASK_PERFORM_SEQUENCE( iParam0, l_U265 );
                                CLEAR_SEQUENCE_TASK( l_U265 );
                                l_U261 = 1;
                                CLEAR_HELP();
                            }
                            if (NOT (IS_CHAR_INJURED( sub_2431() )))
                            {
                                if (IS_CHAR_SITTING_IDLE( sub_2431() ))
                                {
                                    CHANGE_CHAR_SIT_IDLE_ANIM( sub_2431(), "AMB_SIT_COUCH_M", "Sit_Down_Idle_01", 1 );
                                }
                            }
                            WAIT( 250 );
                            DO_SCREEN_FADE_IN( 400 );
                            while (NOT IS_SCREEN_FADED_IN())
                            {
                                WAIT( 0 );
                            }
                        }
                        else if (iParam0 == l_U152[3])
                        {
                            l_U259 = 1;
                        }
                        else
                        {
                            l_U259 = 0;
                        }
                        while (sub_20379( l_U317 ))
                        {
                            WAIT( 0 );
                        }
                        if (sub_34527())
                        {
                            if (NOT (sub_20379( l_U317 )))
                            {
                                if (NOT (IS_CHAR_DEAD( iParam0 )))
                                {
                                    if (IS_CHAR_MODEL( iParam0, 1113677074 ))
                                    {
                                        sub_19042( ref l_U317, 1 );
                                        sub_2480( 1, iParam0, "STRIPPER_1", 0 );
                                        sub_19207( "SC1_S1DOVR", ref l_U317, 6, 1 );
                                    }
                                    else
                                    {
                                        sub_19042( ref l_U317, 1 );
                                        sub_2480( 2, iParam0, "STRIPPER_2", 0 );
                                        sub_19207( "SC1_S2DOVR", ref l_U317, 6, 1 );
                                    }
                                }
                            }
                        }
                        SET_EVERYONE_IGNORE_PLAYER( sub_783(), 0 );
                        l_U187 = 0;
                        (uParam1^) = 0;
                        l_U183 = 1;
                        l_U299 = 0;
                        ProtectedSet(l_U300, 50);
                        if (NOT (IS_CHAR_DEAD( sub_2431() )))
                        {
                            SET_CHAR_HEALTH( sub_2431(), 200 );
                        }
                        while (NOT (sub_34885( iParam0 )))
                        {
                            WAIT( 0 );
                        }
                        sub_734();
                        if (sub_905() == -1)
                        {
                            if (l_U264)
                            {
                                sub_1614();
                                l_U264 = 0;
                            }
                        }
                        REMOVE_ANIMS( "MISSSTRIPCLUBHI" );
                        SET_PLAYER_CONTROL( sub_783(), 1 );
                        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                        SET_CAM_BEHIND_PED( sub_2431() );
                        DESTROY_CAM( l_U111 );
                        DESTROY_CAM( l_U112 );
                        END_CAM_COMMANDS( ref l_U145 );
                        SET_WIDESCREEN_BORDERS( 0 );
                        UNREGISTER_SCRIPT_WITH_AUDIO();
                        sub_35292();
                        if (NOT (IS_CHAR_DEAD( iParam0 )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U265 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U157[uParam2]._fU0, l_U157[uParam2]._fU4, l_U157[uParam2]._fU8, 2, -2, 1.00000000 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2431() );
                            CLOSE_SEQUENCE_TASK( l_U265 );
                            TASK_PERFORM_SEQUENCE( iParam0, l_U265 );
                            CLEAR_SEQUENCE_TASK( l_U265 );
                        }
                        l_U262 = 0;
                        l_U261 = 0;;
                    }
                    else if (NOT l_U261)
                    {
                        sub_36086();
                        if (TIMERA() > 30000)
                        {
                            SETTIMERA( 0 );
                            if (NOT (sub_20379( l_U317 )))
                            {
                                if (IS_CHAR_MODEL( iParam0, 1113677074 ))
                                {
                                    sub_19042( ref l_U317, 1 );
                                    sub_2480( 1, iParam0, "STRIPPER_1", 0 );
                                    sub_19207( "SC1_S1CHAT", ref l_U317, 6, 1 );
                                }
                                else
                                {
                                    sub_19042( ref l_U317, 1 );
                                    sub_2480( 2, iParam0, "STRIPPER_2", 0 );
                                    sub_19207( "SC1_S2CHAT1", ref l_U317, 6, 1 );
                                }
                            }
                        }
                        else if (TIMERA() > 2500)
                        {
                            if (TIMERB() > 30000)
                            {
                                if (NOT (sub_20379( l_U317 )))
                                {
                                    sub_2480( 0, sub_2431(), "NIKO", 0 );
                                    sub_19207( l_U292, ref l_U317, 6, 1 );
                                    SETTIMERB( 0 );
                                }
                            }
                        }
                    }
                }
            }
            break;
            case 5: break;
        }
    }
    return;
}

void sub_19042(int iParam0, unknown uParam1)
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

void sub_19207(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_19228( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

void sub_19228(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_19282( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_19282(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_19304( iParam1 )))
    {
        return 0;
    }
    l_U4._fU384 = 0;
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
    sub_19980( ref g_U8395, ref l_U4 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_19304(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_1407( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_1407( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_1407( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_19980(int iParam0, int iParam1)
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

int sub_20379(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_1407( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_1407( "\n speech is not playing" );
    }
    return 0;
}

int sub_20957()
{
    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref l_U251, ref l_U252, ref l_U253, ref l_U254 );
    if ((l_U251 == 0) AND (l_U252 == 0))
    {
        GET_KEYBOARD_MOVE_INPUT( ref l_U251, ref l_U252 );
    }
    if ((l_U251 != 0) || (l_U252 != 0))
    {
        l_U255++;
    }
    if (l_U255 > 30)
    {
        l_U255 = 0;
        return 1;
    }
    return 0;
}

int sub_22493(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_CHAR_INJURED( l_U175 )))
    {
        GET_SCRIPT_TASK_STATUS( l_U175, 114, ref l_U256 );
        if (l_U256 == 1)
        {
            SET_USES_COLLISION_OF_CLOSEST_OBJECT_OF_TYPE( 1150.00000000, 1669.00000000, 16.00000000, 2.00000000, -45131371, 0 );
            SET_CHAR_VISIBLE( l_U175, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U175, 1 );
            TASK_FLUSH_ROUTE();
            TASK_EXTEND_ROUTE( uParam0._fU0, uParam0._fU4, uParam0._fU8 );
            OPEN_SEQUENCE_TASK( ref l_U265 );
            TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
            TASK_CHAR_SLIDE_TO_COORD( 0, uParam0._fU0, uParam0._fU4, uParam0._fU8, l_U206, 0.50000000 );
            CLOSE_SEQUENCE_TASK( l_U265 );
            TASK_PERFORM_SEQUENCE( l_U175, l_U265 );
            CLEAR_SEQUENCE_TASK( l_U265 );
            sub_19207( l_U292, ref l_U317, 6, 1 );
        }
        else
        {
            GET_SCRIPT_TASK_STATUS( l_U175, 29, ref l_U256 );
            if (l_U256 == 7)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_22803(unknown uParam0, int iParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (iParam1 == 0)
    {
        uVar4 = l_U330;
        l_U356 = l_U331;
        l_U202 = {l_U332};
        l_U341 = l_U342;
        l_U292 = "SC1_GOOD";
    }
    else if (iParam1 == 1)
    {
        uVar4 = l_U335;
        l_U356 = l_U336;
        l_U202 = {l_U337};
        l_U341 = l_U343;
        l_U292 = "SC1_BETTER";
    }
    else if (iParam1 == 2)
    {
        l_U341 = l_U344;
        l_U292 = "SC1_BEST";
    };;;
    if (PRELOAD_STREAM( l_U341 ))
    {
        if (iParam1 == 2)
        {
            if ((NOT (IS_CHAR_INJURED( sub_2431() ))) AND (NOT (IS_CHAR_INJURED( (uParam0^) ))))
            {
                CHANGE_CHAR_SIT_IDLE_ANIM( sub_2431(), "MISSSTRIPCLUBHI", "Tri_C6_3Way_Niko", 1 );
                OPEN_SEQUENCE_TASK( ref l_U265 );
                TASK_PLAY_ANIM( 0, "Tri_C6_3Way_Woman1", "MISSSTRIPCLUBHI", 4.00000000, 0, 0, 0, 0, 0 );
                CLOSE_SEQUENCE_TASK( l_U265 );
                TASK_PERFORM_SEQUENCE( (uParam0^), l_U265 );
                CLEAR_SEQUENCE_TASK( l_U265 );
            }
            if (NOT (IS_CHAR_INJURED( l_U175 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U265 );
                TASK_PLAY_ANIM( 0, "Tri_C6_3Way_Woman2", "MISSSTRIPCLUBHI", 4.00000000, 0, 0, 0, 0, 0 );
                CLOSE_SEQUENCE_TASK( l_U265 );
                TASK_PERFORM_SEQUENCE( l_U175, l_U265 );
                CLEAR_SEQUENCE_TASK( l_U265 );
            }
            PLAY_STREAM_FRONTEND();
            MUTE_POSITIONED_RADIO( 1 );
            return 1;
        }
        else if ((NOT (IS_CHAR_INJURED( sub_2431() ))) AND (NOT (IS_CHAR_INJURED( (uParam0^) ))))
        {
            CHANGE_CHAR_SIT_IDLE_ANIM( sub_2431(), "MISSSTRIPCLUBHI", uVar4, 1 );
            if (NOT (IS_CHAR_DEAD( sub_2431() )))
            {
                if (iParam1 == 0)
                {
                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2431(), l_U337._fU0, l_U337._fU4, l_U337._fU8, ref l_U337._fU0, ref l_U337._fU4, ref l_U337._fU8 );
                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2431(), l_U332._fU0, l_U332._fU4, l_U332._fU8, ref l_U202._fU0, ref l_U202._fU4, ref l_U202._fU8 );
                    GET_CHAR_HEADING( sub_2431(), ref l_U205 );
                    l_U206 = l_U205 + 180.00000000;
                    if (l_U206 > 360.00000000)
                    {
                        l_U206 -= 360.00000000;
                    }
                    SET_CHAR_HEADING( (uParam0^), l_U206 );
                    SET_CHAR_COORDINATES( (uParam0^), l_U202._fU0, l_U202._fU4, l_U202._fU8 );
                    SET_CHAR_COLLISION( (uParam0^), 0 );
                    FREEZE_CHAR_POSITION( (uParam0^), 1 );
                }
            }
            OPEN_SEQUENCE_TASK( ref l_U265 );
            TASK_PLAY_ANIM( 0, l_U356, "MISSSTRIPCLUBHI", 4.00000000, 0, 0, 0, 1, 0 );
            CLOSE_SEQUENCE_TASK( l_U265 );
            TASK_PERFORM_SEQUENCE( (uParam0^), l_U265 );
            CLEAR_SEQUENCE_TASK( l_U265 );
            PLAY_STREAM_FRONTEND();
            MUTE_POSITIONED_RADIO( 1 );
            return 1;
        }
    }
    return 0;
}

void sub_24435()
{
    BEGIN_CAM_COMMANDS( ref l_U145 );
    CREATE_CAM( 14, ref l_U111 );
    CREATE_CAM( 14, ref l_U112 );
    SET_CAM_POS( l_U111, l_U113[1]._fU0, l_U113[1]._fU4, l_U113[1]._fU8 );
    SET_CAM_ROT( l_U111, l_U129[1]._fU0, l_U129[1]._fU4, l_U129[1]._fU8 );
    SET_CAM_ACTIVE( l_U111, 1 );
    SET_CAM_PROPAGATE( l_U111, 1 );
    SET_CAM_NEAR_DOF( l_U111, 2.00000000 );
    SET_CAM_FAR_DOF( l_U111, 10.00000000 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    SET_CAM_FOV( l_U111, 42.00000000 );
    return;
}

void sub_24681(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_MODEL( uParam0, 1113677074 ))
        {
            iVar3 = 1353709999;
        }
        else
        {
            iVar3 = 1113677074;
        }
    }
    CREATE_CHAR( 5, iVar3, l_U176._fU0, l_U176._fU4, l_U176._fU8, ref l_U175, 1 );
    SET_CHAR_RELATIONSHIP( l_U175, 1, 0 );
    SET_CHAR_RELATIONSHIP( l_U175, 1, 4 );
    SET_CHAR_HEADING( l_U175, l_U182 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U175 );
    SET_CHAR_NEVER_TARGETTED( l_U175, 1 );
    TASK_START_SCENARIO_IN_PLACE( l_U175, "Scenario_Standing", -1082130432 );
    SET_CHAR_VISIBLE( l_U175, 0 );
    if (IS_CHAR_MODEL( l_U175, 1113677074 ))
    {
        sub_2480( 1, l_U175, "STRIPPER_1", 0 );
        SET_AMBIENT_VOICE_NAME( l_U175, "STRIPPER_1" );
    }
    else
    {
        sub_2480( 2, l_U175, "STRIPPER_2", 0 );
        SET_AMBIENT_VOICE_NAME( l_U175, "STRIPPER_2" );
    }
    SET_PED_PATH_MAY_USE_CLIMBOVERS( l_U175, 0 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U175, l_U289 );
    return;
}

int sub_25290(unknown uParam0)
{
    int iVar3;

    GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar3 );
    if (iVar3 == (GET_HASH_KEY( l_U289 )))
    {
        return 1;
    }
    return 0;
}

void sub_25984(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    float fVar15;
    int iVar16;
    float fVar17;
    unknown uVar18;

    uVar3 = {l_U129[l_U148]};
    iVar10 = 10;
    iVar11 = -10;
    iVar12 = 10;
    iVar13 = -10;
    iVar14 = 1;
    fVar15 = 1.00000000;
    iVar16 = 1;
    fVar17 = 1.00000000;
    GET_CAM_FOV( uParam0, ref l_U269 );
    if ((IS_BUTTON_PRESSED( 0, 19 )) || (IS_MOUSE_BUTTON_PRESSED( 2 )))
    {
        if (l_U269 > l_U268)
        {
            l_U269 -= 1.00000000;
        }
    }
    else if (l_U269 < l_U267)
    {
        l_U269 += 1.00000000;
    }
    SET_CAM_FOV( uParam0, l_U269 );
    GET_CAM_ROT( uParam0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar6, ref uVar7, ref iVar8, ref iVar9 );
    if ((iVar8 == 0) AND (iVar9 == 0))
    {
        GET_MOUSE_INPUT( ref iVar8, ref iVar9 );
        if ((iVar8 != 0) || (iVar9 != 0))
        {
            l_U357 = 1;
        }
    }
    else
    {
        l_U357 = 0;
    }
    if (((((iVar8 < 50) AND (iVar8 > 65486)) AND (iVar9 < 50)) AND (iVar9 > 65486)) AND (NOT l_U357))
    {
        l_U350 = 0;
        l_U349 = 0;
        l_U234 = VDIST( uVar3, l_U129[l_U148] );
        if (l_U234 > 0.10000000)
        {
            if (uVar3._fU0 > (l_U129[l_U148]._fU0 + fVar17))
            {
                uVar3._fU0 -= fVar17;
            }
            else if (uVar3._fU0 < (l_U129[l_U148]._fU0 - fVar17))
            {
                uVar3._fU0 += fVar17;
            }
            if (uVar3._fU8 > (l_U129[l_U148]._fU8 + fVar15))
            {
                uVar3._fU8 -= fVar15;
            }
            else if (uVar3._fU8 < (l_U129[l_U148]._fU8 - fVar15))
            {
                uVar3._fU8 += fVar15;
            }
            SET_CAM_ROT( uParam0, uVar3._fU0, uVar3._fU4, uVar3._fU8 );
        }
        else
        {
            SET_CAM_ROT( uParam0, l_U129[l_U148]._fU0, l_U129[l_U148]._fU4, l_U129[l_U148]._fU8 );
            uVar3 = {l_U129[l_U148]};
        }
    }
    else if (iVar9 > 50)
    {
        if (IS_LOOK_INVERTED())
        {
            if (uVar3._fU0 < (l_U129[l_U148]._fU0 + 10.00000000))
            {
                l_U349 += iVar16;
                uVar3._fU0 += fVar17;
            }
        }
        else if (uVar3._fU0 > (l_U129[l_U148]._fU0 - 10.00000000))
        {
            l_U349 -= iVar16;
            uVar3._fU0 -= fVar17;
        }
    }
    if (iVar9 > 110)
    {
        if (IS_LOOK_INVERTED())
        {
            if (uVar3._fU0 < (l_U129[l_U148]._fU0 + 10.00000000))
            {
                l_U349 += iVar16;
                uVar3._fU0 += fVar17;
            }
        }
        else if (uVar3._fU0 > (l_U129[l_U148]._fU0 - 10.00000000))
        {
            l_U349 -= iVar16;
            uVar3._fU0 -= fVar17;
        }
    }
    if (iVar9 < 65486)
    {
        if (IS_LOOK_INVERTED())
        {
            if (uVar3._fU0 > (l_U129[l_U148]._fU0 - 10.00000000))
            {
                l_U349 -= iVar16;
                uVar3._fU0 -= fVar17;
            }
        }
        else if (uVar3._fU0 < (l_U129[l_U148]._fU0 + 10.00000000))
        {
            l_U349 += iVar16;
            uVar3._fU0 += fVar17;
        }
    }
    if (iVar9 < 65426)
    {
        if (IS_LOOK_INVERTED())
        {
            if (uVar3._fU0 > (l_U129[l_U148]._fU0 - 10.00000000))
            {
                l_U349 -= iVar16;
                uVar3._fU0 -= fVar17;
            }
        }
        else if (uVar3._fU0 < (l_U129[l_U148]._fU0 + 10.00000000))
        {
            l_U349 += iVar16;
            uVar3._fU0 += fVar17;
        }
    }
    if (iVar8 > 50)
    {
        if (uVar3._fU8 > (l_U129[l_U148]._fU8 - 10.00000000))
        {
            l_U350 -= iVar14;
            uVar3._fU8 -= fVar15;
        }
    }
    if (iVar8 > 110)
    {
        if (uVar3._fU8 > (l_U129[l_U148]._fU8 - 10.00000000))
        {
            l_U350 -= iVar14;
            uVar3._fU8 -= fVar15;
        }
    }
    if (iVar8 < 65486)
    {
        if (uVar3._fU8 < (l_U129[l_U148]._fU8 + 10.00000000))
        {
            l_U350 += iVar14;
            uVar3._fU8 += fVar15;
        }
    }
    if (iVar8 < 65426)
    {
        if (uVar3._fU8 < (l_U129[l_U148]._fU8 + 10.00000000))
        {
            l_U350 += iVar14;
            uVar3._fU8 += fVar15;
        }
    }
    SET_CAM_ROT( uParam0, uVar3._fU0, uVar3._fU4, uVar3._fU8 );;
    return;
}

void sub_27620(int iParam0)
{
    if (iParam0 == 0)
    {
        l_U341 = l_U343;
    }
    else
    {
        l_U341 = l_U344;
    }
    PRELOAD_STREAM( l_U341 );
    return;
}

void sub_27694(unknown uParam0, unknown uParam1)
{
    int Result;
    string sVar5;

    Result = 1;
    sVar5 = "STR_AGN";
    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( sVar5 )))
    {
        PRINT_HELP_FOREVER( sVar5 );
        if (DOES_CAM_EXIST( l_U111 ))
        {
            if (l_U148 != 1)
            {
                l_U148 = 1;
                SET_CAM_POS( l_U111, l_U113[l_U148]._fU0, l_U113[l_U148]._fU4, l_U113[l_U148]._fU8 );
                SET_CAM_ROT( l_U111, l_U129[l_U148]._fU0, l_U129[l_U148]._fU4, l_U129[l_U148]._fU8 );
            }
            SET_CAM_FOV( l_U111, l_U267 );
            if ((NOT (IS_CHAR_INJURED( uParam0 ))) AND (NOT (IS_CHAR_INJURED( sub_2431() ))))
            {
                TASK_LOOK_AT_CHAR( uParam0, sub_2431(), -2, 0 );
            }
        }
    }
    if (sub_27947())
    {
        Result = 0;
        l_U262 = 1;
        CLEAR_HELP();
    }
    else if (sub_28009())
    {
        if ((NOT (IS_CHAR_INJURED( uParam0 ))) AND (NOT (IS_CHAR_INJURED( sub_2431() ))))
        {
            TASK_LOOK_AT_CHAR( uParam0, sub_2431(), 1, 0 );
        }
        Result = 0;
        l_U345++;
        (uParam1^) = 3;
        if (l_U345 == 0)
        {
            ProtectedSet(l_U300, 50);
        }
        else if (l_U345 == 1)
        {
            ProtectedSet(l_U300, 100);
        }
        else if (l_U345 == 2)
        {
            ProtectedSet(l_U300, 250);
        };;;
        CLEAR_HELP();
    }
    return Result;
}

int sub_27947()
{
    if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
    {
        return 1;
    }
    return 0;
}

int sub_28009()
{
    if ((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_28643(unknown uParam0, unknown uParam1)
{
    if (IS_CHAR_PLAYING_ANIM( uParam0, "MISSSTRIPCLUBHI", uParam1 ))
    {
        GET_CHAR_ANIM_CURRENT_TIME( uParam0, "MISSSTRIPCLUBHI", uParam1, ref l_U347 );
    }
    else
    {
        return 0;
    }
    if (COMPARE_STRING( uParam1, "Lap_Triangle_A3_Woman" ))
    {
        if ((l_U347 > 0.52324700) AND (l_U347 < 0.53288800))
        {
            return 1;
        }
        if ((l_U347 > 0.61193900) AND (l_U347 < 0.62095000))
        {
            return 1;
        }
        if ((l_U347 > 0.63925100) AND (l_U347 < 0.65241200))
        {
            return 1;
        }
        if ((l_U347 > 0.68149700) AND (l_U347 < 0.68554900))
        {
            return 1;
        }
        if ((l_U347 > 0.70069900) AND (l_U347 < 0.72343800))
        {
            return 1;
        }
    }
    else if (COMPARE_STRING( uParam1, "Lap_Triangle_B3_Woman" ))
    {
        if ((l_U347 > 0.06655600) AND (l_U347 < 0.07128900))
        {
            return 1;
        }
        if ((l_U347 > 0.07604000) AND (l_U347 < 0.08912300))
        {
            return 1;
        }
        if ((l_U347 > 0.09845400) AND (l_U347 < 0.10628700))
        {
            return 1;
        }
        if ((l_U347 > 0.12243100) AND (l_U347 < 0.12760500))
        {
            return 1;
        }
        if ((l_U347 > 0.13721000) AND (l_U347 < 0.14627400))
        {
            return 1;
        }
        if ((l_U347 > 0.15714800) AND (l_U347 < 0.16362900))
        {
            return 1;
        }
        if ((l_U347 > 0.19519500) AND (l_U347 < 0.22365800))
        {
            return 1;
        }
        if ((l_U347 > 0.23661100) AND (l_U347 < 0.24339200))
        {
            return 1;
        }
        if ((l_U347 > 0.25288200) AND (l_U347 < 0.25979700))
        {
            return 1;
        }
        if ((l_U347 > 0.26377000) AND (l_U347 < 0.26556200))
        {
            return 1;
        }
        if ((l_U347 > 0.27656600) AND (l_U347 < 0.28340600))
        {
            return 1;
        }
        if ((l_U347 > 0.28897900) AND (l_U347 < 0.29459700))
        {
            return 1;
        }
        if ((l_U347 > 0.30806300) AND (l_U347 < 0.31288300))
        {
            return 1;
        }
        if ((l_U347 > 0.32529000) AND (l_U347 < 0.32801200))
        {
            return 1;
        }
        if ((l_U347 > 0.36630900) AND (l_U347 < 0.36980700))
        {
            return 1;
        }
        if ((l_U347 > 0.40667800) AND (l_U347 < 0.42403200))
        {
            return 1;
        }
        if ((l_U347 > 0.44832300) AND (l_U347 < 0.45460400))
        {
            return 1;
        }
        if ((l_U347 > 0.46352000) AND (l_U347 < 0.47036900))
        {
            return 1;
        }
        if ((l_U347 > 0.48455500) AND (l_U347 < 0.49150500))
        {
            return 1;
        }
        if ((l_U347 > 0.53320300) AND (l_U347 < 0.53929700))
        {
            return 1;
        }
        if ((l_U347 > 0.61667000) AND (l_U347 < 0.62434500))
        {
            return 1;
        }
        if ((l_U347 > 0.66192400) AND (l_U347 < 0.67467700))
        {
            return 1;
        }
        if ((l_U347 > 0.68147500) AND (l_U347 < 0.68975400))
        {
            return 1;
        }
        if ((l_U347 > 0.69438200) AND (l_U347 < 0.69863300))
        {
            return 1;
        }
        if ((l_U347 > 0.70192900) AND (l_U347 < 0.70674900))
        {
            return 1;
        }
        if ((l_U347 > 0.71093600) AND (l_U347 < 0.71560100))
        {
            return 1;
        }
        if ((l_U347 > 0.73810300) AND (l_U347 < 0.75603200))
        {
            return 1;
        }
        if ((l_U347 > 0.76443600) AND (l_U347 < 0.77422800))
        {
            return 1;
        }
        if ((l_U347 > 0.78226600) AND (l_U347 < 0.79352700))
        {
            return 1;
        }
        if ((l_U347 > 0.80322000) AND (l_U347 < 0.81403100))
        {
            return 1;
        }
        if ((l_U347 > 0.82743300) AND (l_U347 < 0.83809900))
        {
            return 1;
        }
        if ((l_U347 > 0.92863200) AND (l_U347 < 0.95752300))
        {
            return 1;
        }
        if ((l_U347 > 0.96494500) AND (l_U347 < 0.97697500))
        {
            return 1;
        }
        if ((l_U347 > 0.97697500) AND (l_U347 < 0.98457100))
        {
            return 1;
        }
        if ((l_U347 > 0.98619900) AND (l_U347 < 0.99091200))
        {
            return 1;
        }
    }
    else if (COMPARE_STRING( uParam1, "Lap_Honkerz_A2_Woman" ))
    {
        if ((l_U347 > 0.60844000) AND (l_U347 < 0.61829700))
        {
            return 1;
        }
        if ((l_U347 > 0.65144800) AND (l_U347 < 0.66399200))
        {
            return 1;
        }
        if ((l_U347 > 0.67295200) AND (l_U347 < 0.68908000))
        {
            return 1;
        }
        if ((l_U347 > 0.70610300) AND (l_U347 < 0.71058400))
        {
            return 1;
        }
    }
    else if (COMPARE_STRING( uParam1, "Lap_Honkerz_B1_Woman" ))
    {
        if ((l_U347 > 0.21957400) AND (l_U347 < 0.22319800))
        {
            return 1;
        }
        if ((l_U347 > 0.22899500) AND (l_U347 < 0.23841500))
        {
            return 1;
        }
        if ((l_U347 > 0.24058900) AND (l_U347 < 0.24783600))
        {
            return 1;
        }
        if ((l_U347 > 0.25363300) AND (l_U347 < 0.25870600))
        {
            return 1;
        }
        if ((l_U347 > 0.26450400) AND (l_U347 < 0.27102600))
        {
            return 1;
        }
        if ((l_U347 > 0.27754700) AND (l_U347 < 0.28986800))
        {
            return 1;
        }
        if ((l_U347 > 0.30146200) AND (l_U347 < 0.30870900))
        {
            return 1;
        }
        if ((l_U347 > 0.31740500) AND (l_U347 < 0.32392600))
        {
            return 1;
        }
        if ((l_U347 > 0.32827500) AND (l_U347 < 0.33479700))
        {
            return 1;
        }
        if ((l_U347 > 0.33914500) AND (l_U347 < 0.34276800))
        {
            return 1;
        }
        if ((l_U347 > 0.34494200) AND (l_U347 < 0.34711600))
        {
            return 1;
        }
        if ((l_U347 > 0.34929000) AND (l_U347 < 0.35218900))
        {
            return 1;
        }
        if ((l_U347 > 0.35508800) AND (l_U347 < 0.35798600))
        {
            return 1;
        }
        if ((l_U347 > 0.36016000) AND (l_U347 < 0.36450800))
        {
            return 1;
        }
        if ((l_U347 > 0.36668400) AND (l_U347 < 0.37392900))
        {
            return 1;
        }
        if ((l_U347 > 0.37972700) AND (l_U347 < 0.38479900))
        {
            return 1;
        }
        if ((l_U347 > 0.38987200) AND (l_U347 < 0.39566900))
        {
            return 1;
        }
        if ((l_U347 > 0.40653900) AND (l_U347 < 0.41741000))
        {
            return 1;
        }
        if ((l_U347 > 0.45581700) AND (l_U347 < 0.47393400))
        {
            return 1;
        }
        if ((l_U347 > 0.48190500) AND (l_U347 < 0.49060100))
        {
            return 1;
        }
        if ((l_U347 > 0.49784700) AND (l_U347 < 0.50509600))
        {
            return 1;
        }
        if ((l_U347 > 0.51016700) AND (l_U347 < 0.51668800))
        {
            return 1;
        }
        if ((l_U347 > 0.53480500) AND (l_U347 < 0.55002300))
        {
            return 1;
        }
        if ((l_U347 > 0.55944400) AND (l_U347 < 0.56886500))
        {
            return 1;
        }
        if ((l_U347 > 0.58118500) AND (l_U347 < 0.60437400))
        {
            return 1;
        }
        if ((l_U347 > 0.61886800) AND (l_U347 < 0.62394000))
        {
            return 1;
        }
        if ((l_U347 > 0.66524700) AND (l_U347 < 0.68481300))
        {
            return 1;
        }
        if ((l_U347 > 0.68988600) AND (l_U347 < 0.69713200))
        {
            return 1;
        }
        if ((l_U347 > 0.70655200) AND (l_U347 < 0.71235000))
        {
            return 1;
        }
        if ((l_U347 > 0.72322000) AND (l_U347 < 0.73988900))
        {
            return 1;
        }
        if ((l_U347 > 0.74713400) AND (l_U347 < 0.75075800))
        {
            return 1;
        }
        if ((l_U347 > 0.75365600) AND (l_U347 < 0.75655500))
        {
            return 1;
        }
        if ((l_U347 > 0.75945400) AND (l_U347 < 0.76235200))
        {
            return 1;
        }
        if ((l_U347 > 0.76742500) AND (l_U347 < 0.76959900))
        {
            return 1;
        }
        if ((l_U347 > 0.77249800) AND (l_U347 < 0.77467300))
        {
            return 1;
        }
        if ((l_U347 > 0.77757000) AND (l_U347 < 0.78119400))
        {
            return 1;
        }
        if ((l_U347 > 0.78336900) AND (l_U347 < 0.78699100))
        {
            return 1;
        }
        if ((l_U347 > 0.78916500) AND (l_U347 < 0.79568700))
        {
            return 1;
        }
        if ((l_U347 > 0.81380600) AND (l_U347 < 0.82177600))
        {
            return 1;
        }
        if ((l_U347 > 0.83192100) AND (l_U347 < 0.83844200))
        {
            return 1;
        }
        if ((l_U347 > 0.84496500) AND (l_U347 < 0.85148700))
        {
            return 1;
        }
        if ((l_U347 > 0.87177700) AND (l_U347 < 0.87902600))
        {
            return 1;
        }
    }
    else if (COMPARE_STRING( uParam1, "Tri_C6_3Way_Woman1" ))
    {
        if ((l_U347 > 0.26024000) AND (l_U347 < 0.26649100))
        {
            return 1;
        }
        if ((l_U347 > 0.27373000) AND (l_U347 < 0.28109400))
        {
            return 1;
        }
        if ((l_U347 > 0.28902400) AND (l_U347 < 0.29412100))
        {
            return 1;
        }
        if ((l_U347 > 0.30478300) AND (l_U347 < 0.30988100))
        {
            return 1;
        }
        if ((l_U347 > 0.31497900) AND (l_U347 < 0.32060700))
        {
            return 1;
        }
        if ((l_U347 > 0.33080200) AND (l_U347 < 0.33420000))
        {
            return 1;
        }
        if ((l_U347 > 0.33929800) AND (l_U347 < 0.34099800))
        {
            return 1;
        }
        if ((l_U347 > 0.34769800) AND (l_U347 < 0.34939700))
        {
            return 1;
        }
        if ((l_U347 > 0.39898500) AND (l_U347 < 0.40803100))
        {
            return 1;
        }
        if ((l_U347 > 0.41992600) AND (l_U347 < 0.42389100))
        {
            return 1;
        }
        if ((l_U347 > 0.43012100) AND (l_U347 < 0.43465400))
        {
            return 1;
        }
        if ((l_U347 > 0.44073900) AND (l_U347 < 0.44525700))
        {
            return 1;
        }
        if ((l_U347 > 0.45318700) AND (l_U347 < 0.45715200))
        {
            return 1;
        }
        if ((l_U347 > 0.46508300) AND (l_U347 < 0.46847800))
        {
            return 1;
        }
        if ((l_U347 > 0.47584200) AND (l_U347 < 0.47867400))
        {
            return 1;
        }
        if ((l_U347 > 0.48994600) AND (l_U347 < 0.49221300))
        {
            return 1;
        }
        if ((l_U347 > 0.54430200) AND (l_U347 < 0.55109900))
        {
            return 1;
        }
        if ((l_U347 > 0.55841600) AND (l_U347 < 0.56351500))
        {
            return 1;
        }
        if ((l_U347 > 0.56861100) AND (l_U347 < 0.57314300))
        {
            return 1;
        }
        if ((l_U347 > 0.57824100) AND (l_U347 < 0.58560400))
        {
            return 1;
        }
        if ((l_U347 > 0.59295100) AND (l_U347 < 0.59629100))
        {
            return 1;
        }
        if ((l_U347 > 0.60138800) AND (l_U347 < 0.60592000))
        {
            return 1;
        }
        if ((l_U347 > 0.61102200) AND (l_U347 < 0.61441800))
        {
            return 1;
        }
        if ((l_U347 > 0.62064700) AND (l_U347 < 0.62513200))
        {
            return 1;
        }
        if ((l_U347 > 0.63135600) AND (l_U347 < 0.63531900))
        {
            return 1;
        }
        if ((l_U347 > 0.64155100) AND (l_U347 < 0.64381600))
        {
            return 1;
        }
        if ((l_U347 > 0.64664800) AND (l_U347 < 0.64891300))
        {
            return 1;
        }
        if ((l_U347 > 0.65117900) AND (l_U347 < 0.65346100))
        {
            return 1;
        }
        if ((l_U347 > 0.65621800) AND (l_U347 < 0.65905100))
        {
            return 1;
        }
        if ((l_U347 > 0.66188400) AND (l_U347 < 0.66358200))
        {
            return 1;
        }
        if ((l_U347 > 0.66698000) AND (l_U347 < 0.66864700))
        {
            return 1;
        }
        if ((l_U347 > 0.67201800) AND (l_U347 < 0.67371600))
        {
            return 1;
        }
        if ((l_U347 > 0.69175300) AND (l_U347 < 0.69849600))
        {
            return 1;
        }
        if ((l_U347 > 0.70913800) AND (l_U347 < 0.71310900))
        {
            return 1;
        }
        if ((l_U347 > 0.71932500) AND (l_U347 < 0.72782000))
        {
            return 1;
        }
        if ((l_U347 > 0.73519500) AND (l_U347 < 0.73965300))
        {
            return 1;
        }
        if ((l_U347 > 0.74701500) AND (l_U347 < 0.75438000))
        {
            return 1;
        }
        if ((l_U347 > 0.76609900) AND (l_U347 < 0.77239000))
        {
            return 1;
        }
        if ((l_U347 > 0.77734500) AND (l_U347 < 0.78244300))
        {
            return 1;
        }
        if ((l_U347 > 0.78867300) AND (l_U347 < 0.79263900))
        {
            return 1;
        }
        if ((l_U347 > 0.79835500) AND (l_U347 < 0.80319200))
        {
            return 1;
        }
        if ((l_U347 > 0.81168400) AND (l_U347 < 0.81678000))
        {
            return 1;
        }
        if ((l_U347 > 0.82408800) AND (l_U347 < 0.83031700))
        {
            return 1;
        }
        if ((l_U347 > 0.84045800) AND (l_U347 < 0.84656000))
        {
            return 1;
        }
        if ((l_U347 > 0.88333400) AND (l_U347 < 0.88771200))
        {
            return 1;
        }
        if ((l_U347 > 0.89280800) AND (l_U347 < 0.89618500))
        {
            return 1;
        }
        if ((l_U347 > 0.91364900) AND (l_U347 < 0.92716400))
        {
            return 1;
        }
        if ((l_U347 > 0.93393400) AND (l_U347 < 0.93955400))
        {
            return 1;
        }
        if (l_U347 > 0.98000000)
        {
            if (NOT IS_SCREEN_FADING_OUT())
            {
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    DO_SCREEN_FADE_OUT( 250 );
                }
            }
        }
    };;;;;
    return 0;
}

void sub_33359(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_34527()
{
    int iVar2;

    STORE_SCORE( sub_783(), ref iVar2 );
    if (iVar2 >= ProtectedGet(l_U300))
    {
        ADD_SCORE( sub_783(), -1 * ProtectedGet(l_U300) );
        INCREMENT_INT_STAT_NO_MESSAGE( 96, ProtectedGet(l_U300) );
        l_U353 = 1;
        return 1;
        break;
    }
    l_U298 = 1;
    g_U9158 = 1;
    return 0;
}

int sub_34885(unknown uParam0)
{
    if (l_U294)
    {
        GET_SCRIPT_TASK_STATUS( sub_2431(), 1, ref l_U256 );
        if (l_U256 == 7)
        {
            if ((sub_34939( l_U317 )) == -1)
            {
                if (NOT (IS_CHAR_INJURED( uParam0 )))
                {
                    TASK_LOOK_AT_CHAR( sub_2431(), uParam0, 3000, 0 );
                    TASK_LOOK_AT_CHAR( uParam0, sub_2431(), 6000, 0 );
                }
                sub_19207( l_U292, ref l_U317, 6, 1 );
                CLEAR_HELP();
                return 1;
            }
        }
    }
    else
    {
        TASK_STAND_STILL( sub_2431(), 0 );
        l_U294 = 1;
    }
    return 0;
}

void sub_34939(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_20379( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

void sub_35292()
{
    if (COMPARE_STRING( l_U342, "LAP_DANCE_RICK_JAMES" ))
    {
        l_U342 = "LAP_DANCE_GOLDFRAPP";
    }
    else if (COMPARE_STRING( l_U342, "LAP_DANCE_GOLDFRAPP" ))
    {
        l_U342 = "LAP_DANCE_MYSTIKAL";
    }
    else if (COMPARE_STRING( l_U342, "LAP_DANCE_MYSTIKAL" ))
    {
        l_U342 = "LAP_DANCE_RICK_JAMES";
    };;;
    if (COMPARE_STRING( l_U343, "LAP_DANCE_RICK_JAMES" ))
    {
        l_U343 = "LAP_DANCE_GOLDFRAPP";
    }
    else if (COMPARE_STRING( l_U343, "LAP_DANCE_GOLDFRAPP" ))
    {
        l_U343 = "LAP_DANCE_MYSTIKAL";
    }
    else if (COMPARE_STRING( l_U343, "LAP_DANCE_MYSTIKAL" ))
    {
        l_U343 = "LAP_DANCE_RICK_JAMES";
    };;;
    if (COMPARE_STRING( l_U344, "LAP_DANCE_RICK_JAMES" ))
    {
        l_U344 = "LAP_DANCE_GOLDFRAPP";
    }
    else if (COMPARE_STRING( l_U342, "LAP_DANCE_GOLDFRAPP" ))
    {
        l_U344 = "LAP_DANCE_MYSTIKAL";
    }
    else if (COMPARE_STRING( l_U342, "LAP_DANCE_MYSTIKAL" ))
    {
        l_U344 = "LAP_DANCE_RICK_JAMES";
    };;;
    return;
}

void sub_36086()
{
    unknown uVar2;
    unknown uVar3;
    int iVar4;
    int iVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    string sVar9;

    sVar9 = "STR_HLP2";
    if (l_U148 == 0)
    {
        if (DOES_OBJECT_EXIST( l_U325 ))
        {
            GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar2, ref uVar3, ref iVar4, ref iVar5 );
            if ((iVar4 == 0) AND (iVar5 == 0))
            {
                GET_MOUSE_INPUT( ref iVar4, ref iVar5 );
            }
            uVar6 = TO_FLOAT( iVar4 );
            uVar7 = TO_FLOAT( iVar5 );
            l_U326._fU0 = uVar8 * uVar6;
            l_U326._fU8 = uVar8 * uVar7;
            if (IS_LOOK_INVERTED())
            {
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U325, l_U326._fU0, l_U326._fU4, l_U326._fU8, ref l_U129[0]._fU0, ref l_U129[0]._fU4, ref l_U129[0]._fU8 );
            }
            else
            {
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U325, l_U326._fU0, l_U326._fU4, -l_U326._fU8, ref l_U129[0]._fU0, ref l_U129[0]._fU4, ref l_U129[0]._fU8 );
            }
            SET_CAM_POS( l_U112, l_U113[0]._fU0, l_U113[0]._fU4, l_U113[0]._fU8 );
            POINT_CAM_AT_COORD( l_U112, l_U129[0]._fU0, l_U129[0]._fU4, l_U129[0]._fU8 );
        }
        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "STR_HLP3" )))
        {
            PRINT_HELP_FOREVER( "STR_HLP3" );
        }
    }
    else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( sVar9 )))
    {
        PRINT_HELP_FOREVER( sVar9 );
    }
    return;
}

void sub_37180()
{
    for ( l_U235 = 0; l_U235 < l_U207; l_U235++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U152[l_U235] )))
        {
            GET_SCRIPT_TASK_STATUS( l_U152[l_U235], 25, ref l_U256 );
            if (l_U256 == 7)
            {
                SET_CHAR_RELATIONSHIP( l_U152[l_U235], 2, 0 );
                TASK_SMART_FLEE_CHAR( l_U152[l_U235], sub_2431(), 100.00000000, 30000 );
            }
        }
    }
    return;
}
