void main()
{
    unknown uVar2;

    l_U4 = 0;
    l_U5 = 1;
    l_U6 = 3;
    l_U8 = 0;
    l_U14 = 1;
    l_U26 = 0;
    l_U27 = 1;
    l_U30 = 0;
    l_U31 = 0;
    l_U32 = 1844702918;
    l_U33 = "PLAY_BAR_GUY";
    l_U11 = l_U35;
    l_U9._fU0 = 11;
    GET_OBJECT_HEADING( l_U11, ref l_U31 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_114();
    }
    sub_839();
    sub_1038();
    sub_2062();
    while (l_U14)
    {
        WAIT( 0 );
        if ((NOT (IS_CONTROL_PRESSED( 0, 23 ))) AND (NOT l_U26))
        {
            l_U26 = 1;
        }
        if (NOT (l_U8 == 1))
        {
            if (g_U10978)
            {
                if (NOT (sub_2215( 1 )))
                {
                    sub_114();
                }
            }
        }
        if (IS_PLAYER_PLAYING( sub_460() ))
        {
            if (DOES_OBJECT_EXIST( l_U11 ))
            {
                GET_OBJECT_COORDINATES( l_U11, ref l_U19._fU0, ref l_U19._fU4, ref l_U19._fU8 );
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2859(), l_U19._fU0, l_U19._fU4, l_U19._fU8, 50.00000000, 50.00000000, 20.00000000, 0 )))
                {
                    sub_114();
                }
            }
            else
            {
                sub_114();
            }
        }
        if (l_U8 == 0)
        {
            if (DOES_OBJECT_EXIST( l_U11 ))
            {
                sub_547( 1 );
                sub_2990();
                sub_3327();
                if (NOT (DOES_OBJECT_EXIST( l_U11 )))
                {
                    sub_114();
                }
                if (NOT (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U11 )))
                {
                    sub_114();
                }
                l_U34 = 0;
                if (l_U26)
                {
                    if (IS_PLAYER_PLAYING( sub_460() ))
                    {
                        GET_GROUP_SIZE( sub_1047(), ref l_U18, ref l_U18 );
                        if (l_U18 == 1)
                        {
                            GET_GROUP_MEMBER( sub_1047(), 0, ref l_U13 );
                            if (NOT (IS_CHAR_INJURED( l_U13 )))
                            {
                                if (sub_1143( l_U13 ))
                                {
                                    if (sub_3574())
                                    {
                                        l_U15 = 1;
                                        l_U34 = 1;
                                    }
                                }
                            }
                        }
                    }
                }
                if (NOT l_U34)
                {
                    if (l_U26)
                    {
                        if (IS_PLAYER_PLAYING( sub_460() ))
                        {
                            if (DOES_CHAR_EXIST( l_U12 ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U12 )))
                                {
                                    if (NOT l_U28)
                                    {
                                        if (sub_3574())
                                        {
                                            l_U15 = 0;
                                            l_U34 = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if (IS_PLAYER_PLAYING( sub_460() ))
                {
                    if (((IS_WANTED_LEVEL_GREATER( sub_460(), 0 )) AND (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_460() )))) AND (sub_3964()))
                    {
                        l_U34 = 0;
                    }
                }
                if (NOT sub_4027())
                {
                    l_U34 = 0;
                }
                if (TIMERA() < 1000)
                {
                    l_U34 = 0;
                }
                if ((l_U34) AND (sub_4114( 2, 0 )))
                {
                    sub_5190( ref l_U9, sub_4403( l_U13 ) );
                    if (l_U15)
                    {
                        l_U33 = sub_5416( ref l_U9 );
                    }
                    else
                    {
                        l_U33 = "PLAY_BAR_GUY";
                    }
                    if (sub_5790( 2, l_U33, 0 ))
                    {
                        if (NOT l_U15)
                        {
                            GET_PLAYER_GROUP( sub_460(), ref uVar2 );
                            SET_GROUP_MEMBER( sub_1047(), l_U12 );
                        }
                        sub_6436();
                        l_U8 = 1;
                    }
                }
                else
                {
                    sub_190( 2, l_U33 );
                }
            }
            else
            {
                sub_114();
            }
        }
        else if (l_U8 == 1)
        {
            l_U18 = GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "darts" );
            if (l_U18 == 0)
            {
                SETTIMERA( 0 );
                l_U26 = 0;
                l_U27 = 1;
                sub_190( 2, l_U33 );
                l_U8 = 0;
            }
        }
    }
    sub_114();
    return;
}

void sub_114()
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U32 );
    if (DOES_CHAR_EXIST( l_U12 ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U12 );
    }
    RELEASE_TEXTURE( l_U23 );
    MARK_STREAMED_TXD_AS_NO_LONGER_NEEDED( "darts" );
    sub_190( 2, l_U33 );
    sub_547( 0 );
    CLEAR_HELP();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_190(int iParam0, string sParam1)
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
                    sub_411();
                    l_U1 = 0;
                }
            }
            if (l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_460(), 1 );
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

void sub_411()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_460()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_547(boolean bParam0)
{
    if (DOES_OBJECT_EXIST( l_U11 ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U11, 0.00000000, -1.50000000, -1.72000000, ref l_U19._fU0, ref l_U19._fU4, ref l_U19._fU8 );
        if (bParam0)
        {
            if (NOT l_U17)
            {
                CLEAR_AREA( l_U19._fU0, l_U19._fU4, l_U19._fU8, 1.00000000, 1 );
                SWITCH_PED_PATHS_OFF( l_U19._fU0 - 0.60000000, l_U19._fU4 - 0.60000000, l_U19._fU8 - 0.60000000, l_U19._fU0 + 0.60000000, l_U19._fU4 + 0.60000000, l_U19._fU8 + 0.60000000 );
                l_U17 = 1;
            }
        }
        else
        {
            SWITCH_PED_PATHS_ON( l_U19._fU0 - 0.60000000, l_U19._fU4 - 0.60000000, l_U19._fU8 - 0.60000000, l_U19._fU0 + 0.60000000, l_U19._fU4 + 0.60000000, l_U19._fU8 + 0.60000000 );
        }
    }
    return;
}

void sub_839()
{
    REQUEST_STREAMED_TXD( "darts", 0 );
    while (NOT (HAS_STREAMED_TXD_LOADED( "darts" )))
    {
        WAIT( 0 );
    }
    l_U23 = GET_TEXTURE_FROM_STREAMED_TXD( "darts", "CJ_BLACKBOARD" );
    SET_TEXT_RENDER_ID( l_U24 );
    sub_966( "darts", "CJ_BLACKBOARD" );
    DRAW_SPRITE( l_U23, 0.25000000, 0.50000000, 0.50000000, 1.00000000, 0.00000000, 255, 255, 255, 255 );
    return;
}

void sub_966(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_1038()
{
    GET_GROUP_SIZE( sub_1047(), ref l_U18, ref l_U18 );
    if (l_U18 == 1)
    {
        GET_GROUP_MEMBER( sub_1047(), 0, ref l_U13 );
        if (NOT (IS_CHAR_INJURED( l_U13 )))
        {
            if (sub_1143( l_U13 ))
            {
                l_U30 = 1;
            }
        }
    }
    return;
}

void sub_1047()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1143(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (((((IS_CHAR_MODEL( uParam0, sub_1170( 0 ) )) || (IS_CHAR_MODEL( uParam0, sub_1170( 3 ) ))) || (IS_CHAR_MODEL( uParam0, sub_1170( 13 ) ))) || (IS_CHAR_MODEL( uParam0, sub_1170( 8 ) ))) || (IS_CHAR_MODEL( uParam0, sub_1170( 7 ) )))
        {
            return 1;
        }
        if (((((IS_CHAR_MODEL( uParam0, sub_1170( 2 ) )) || (IS_CHAR_MODEL( uParam0, sub_1170( 10 ) ))) || (IS_CHAR_MODEL( uParam0, sub_1170( 28 ) ))) || (IS_CHAR_MODEL( uParam0, sub_1170( 29 ) ))) || (IS_CHAR_MODEL( uParam0, sub_1170( 30 ) )))
        {
            return 1;
        }
    }
    return 0;
}

int sub_1170(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        if (g_U64464[uParam0] == 2)
        {
            return 558221221;
        }
        return -1992728631;
        case 1: return 896408642;
        case 3:
        if (g_U64464[uParam0] == 1)
        {
            return -1275031987;
        }
        return 1487004273;
        case 4: return 57218969;
        case 5: return 1445589009;
        case 6: return 155063868;
        case 7: return -617264103;
        case 8: return -1729980128;
        case 9: return 1794146792;
        case 11: return 1710545037;
        case 12: return -1775659292;
        case 13: return 1690783035;
        case 14: return 954215094;
        case 15: return 809067472;
        case 16: return 1169442297;
        case 17: return 1872110126;
        case 18: return 1500493064;
        case 19: return -1826458934;
        case 22: return -366421228;
        case 20: return -379234846;
        case 24: return 237511807;
        case 25: return 237497537;
        case 26: return -1040287406;
        case 27: return -357652594;
        case 52: return 2129490787;
        case 53: return 386513184;
        case 2: return -1080659212;
        case 10: return -773750838;
        case 28: return -1788328884;
        case 29: return 1056837725;
        case 30: return -292713088;
        case 31:
        case 32: return -292713088;
    }
    sub_1833( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_1833(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2062()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3000, ref iVar2 );
    if (iVar2 < 1000)
    {
        l_U32 = 280474699;
    }
    else if (iVar2 < 2000)
    {
        l_U32 = -19263344;
    }
    else
    {
        l_U32 = 1844702918;
    }
    return;
}

int sub_2215(int iParam0)
{
    unknown uVar3;

    if (g_U32898._fU0 == 54)
    {
        return 0;
    }
    if (sub_2255( g_U32898._fU0 ))
    {
        if (NOT (sub_2342( g_U32898._fU0, iParam0 )))
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

int sub_2255(unknown uParam0)
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

int sub_2342(int iParam0, int iParam1)
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

void sub_2859()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2990()
{
    unknown uVar2;
    unknown uVar3;

    if (NOT l_U16)
    {
        if (NOT l_U30)
        {
            GET_GROUP_SIZE( sub_1047(), ref l_U18, ref l_U18 );
            if (l_U18 == 0)
            {
                REQUEST_MODEL( l_U32 );
                while (NOT (HAS_MODEL_LOADED( l_U32 )))
                {
                    WAIT( 0 );
                }
                if (DOES_OBJECT_EXIST( l_U11 ))
                {
                    CREATE_CHAR( 4, l_U32, 1.00000000, 1.00000000, 1.00000000, ref l_U12, 1 );
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U12 );
                    GET_OBJECT_HEADING( l_U11, ref uVar2 );
                    SET_CHAR_HEADING( l_U12, uVar2 + 140.00000000 );
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U11, 0.60000000, -0.70000000, -1.73000000, ref l_U19._fU0, ref l_U19._fU4, ref l_U19._fU8 );
                    SET_CHAR_COORDINATES( l_U12, l_U19._fU0, l_U19._fU4, l_U19._fU8 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U12, 1 );
                    if (DOES_OBJECT_EXIST( l_U11 ))
                    {
                        GET_OBJECT_COORDINATES( l_U11, ref l_U19._fU0, ref l_U19._fU4, ref l_U19._fU8 );
                        GET_ROOM_KEY_FROM_OBJECT( l_U11, ref uVar3 );
                        SET_ROOM_FOR_CHAR_BY_KEY( l_U12, uVar3 );
                    }
                    else
                    {
                        l_U14 = 0;
                    }
                    l_U16 = 1;
                }
            }
        }
    }
    return;
}

void sub_3327()
{
    int iVar2;

    if ((l_U16) AND (NOT l_U28))
    {
        if (NOT (IS_CHAR_INJURED( l_U12 )))
        {
            GET_CHAR_HEALTH( l_U12, ref iVar2 );
            if (iVar2 < 150)
            {
                TASK_SMART_FLEE_CHAR_PREFERRING_PAVEMENTS( l_U12, sub_2859(), 200.00000000, -2 );
                SET_CHAR_KEEP_TASK( l_U12, 1 );
                l_U28 = 1;
            }
        }
    }
    return;
}

int sub_3574()
{
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U11, 0.00000000, -1.50000000, -1.72000000, ref l_U19._fU0, ref l_U19._fU4, ref l_U19._fU8 );
    if (((IS_CHAR_IN_AREA_3D( sub_2859(), l_U19._fU0 - 1, l_U19._fU4 - 4.00000000, l_U19._fU8 - 1, l_U19._fU0 + 1, l_U19._fU4 + 1.60000000, l_U19._fU8 + 1, 0 )) AND ((l_U31 > 359) || (l_U31 < 1))) || ((IS_CHAR_IN_AREA_3D( sub_2859(), l_U19._fU0 - 1, l_U19._fU4 + 4.00000000, l_U19._fU8 - 1, l_U19._fU0 + 1, l_U19._fU4 - 1.60000000, l_U19._fU8 + 1, 0 )) AND ((l_U31 > 179) AND (l_U31 < 181))))
    {
        return 1;
    }
    return 0;
}

void sub_3964()
{
    int Result;

    Result = 0;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Michelle1" )) >= 1)
    {
        Result = 1;
    }
    return Result;
}

int sub_4027()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U26757)
    {
        return 0;
    }
    return 1;
}

int sub_4114(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_460() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_460() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_460() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9202)))
                {
                    if (NOT sub_4210())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_2859() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_4295())
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

int sub_4210()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_4295()
{
    return sub_4306( 0, 0 );
}

int sub_4306(boolean bParam0, unknown uParam1)
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

int sub_4403(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_MODEL( uParam0, sub_1170( 0 ) ))
        {
            return 0;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1170( 1 ) ))
        {
            return 1;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1170( 2 ) ))
        {
            return 2;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1170( 3 ) ))
        {
            return 3;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1170( 4 ) ))
        {
            return 4;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1170( 5 ) ))
        {
            return 5;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1170( 6 ) ))
        {
            return 6;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1170( 7 ) ))
        {
            return 7;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1170( 8 ) ))
        {
            return 8;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1170( 9 ) ))
        {
            return 9;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1170( 10 ) ))
        {
            return 10;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1170( 11 ) ))
        {
            return 11;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1170( 12 ) ))
        {
            return 12;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1170( 13 ) ))
        {
            return 13;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1170( 14 ) ))
        {
            return 14;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1170( 15 ) ))
        {
            return 15;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1170( 16 ) ))
        {
            return 16;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1170( 17 ) ))
        {
            return 17;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1170( 18 ) ))
        {
            return 18;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1170( 19 ) ))
        {
            return 19;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1170( 22 ) ))
        {
            return 22;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1170( 20 ) ))
        {
            return 20;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1170( 24 ) ))
        {
            return 24;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1170( 25 ) ))
        {
            return 25;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1170( 26 ) ))
        {
            return 26;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1170( 27 ) ))
        {
            return 27;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1170( 52 ) ))
        {
            return 52;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1170( 53 ) ))
        {
            return 53;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1170( 28 ) ))
        {
            return 28;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1170( 29 ) ))
        {
            return 29;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1170( 30 ) ))
        {
            return 30;
        }
    }
    return 54;
}

void sub_5190(int iParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0:
        iParam0->_fU0 = 0;
        break;
        case 13:
        iParam0->_fU0 = 1;
        break;
        case 3:
        iParam0->_fU0 = 2;
        break;
        case 8:
        iParam0->_fU0 = 3;
        break;
        case 7:
        iParam0->_fU0 = 4;
        break;
        case 2:
        iParam0->_fU0 = 5;
        break;
        case 10:
        iParam0->_fU0 = 6;
        break;
        case 28:
        iParam0->_fU0 = 7;
        break;
        case 29:
        iParam0->_fU0 = 8;
        break;
        case 30:
        iParam0->_fU0 = 9;
        break;
    }
    return;
}

void sub_5416(int iParam0)
{
    string Result;

    switch (iParam0->_fU0)
    {
        case 0:
        Result = "PLAY_ROMAN";
        break;
        case 1:
        Result = "PLAY_PACKIE";
        break;
        case 2:
        Result = "PLAY_JACOB";
        break;
        case 3:
        Result = "PLAY_BRUCIE";
        break;
        case 4:
        Result = "PLAY_DWAYNE";
        break;
        case 5:
        Result = "PLAY_MICHELLE";
        break;
        case 6:
        Result = "PLAY_KATE";
        break;
        case 7:
        Result = "PLAY_ALEX";
        break;
        case 8:
        Result = "PLAY_KIKI";
        break;
        case 9:
        Result = "PLAY_CARMEN";
        break;
        default:
        Result = "PLAY_BAR_GUY";
        break;
    }
    return Result;
}

int sub_5790(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_4114( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_460(), 0 );
                l_U2 = 1;
            }
            g_U9172 = uParam0;
            l_U3 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_6065();
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

void sub_6065()
{
    return sub_4306( 1, 1 );
}

void sub_6436()
{
    CLEAR_HELP();
    sub_6452();
    REQUEST_SCRIPT( "darts" );
    while (NOT (HAS_SCRIPT_LOADED( "darts" )))
    {
        WAIT( 0 );
    }
    l_U9._fU4 = l_U11;
    START_NEW_SCRIPT_WITH_ARGS( "darts", ref l_U9, 2, 1024 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "darts" );
    return;
}

void sub_6452()
{
    if (sub_6461())
    {
        g_U64921 = 1;
    }
    return;
}

int sub_6461()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dwayne_backup" )) >= 1)
    {
        return 1;
    }
    return 0;
}
