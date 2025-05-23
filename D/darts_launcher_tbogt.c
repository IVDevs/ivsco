void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U6 = 0;
    l_U7 = 1;
    l_U8 = 3;
    l_U10 = 55;
    l_U11 = 50;
    l_U12 = 0;
    l_U18 = 1;
    l_U27 = nil;
    l_U30 = 1;
    l_U33 = 0;
    l_U35 = 0;
    l_U36 = 0;
    l_U37 = 1844702918;
    l_U38 = "PLAY_BAR_GUY";
    l_U15 = l_U44;
    l_U13._fU0 = 2;
    GET_OBJECT_HEADING( l_U15, ref l_U36 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_155();
    }
    CREATE_WIDGET_GROUP( "Darts LAuncher" );
    ADD_WIDGET_TOGGLE( "contextButtonPressed", ref l_U31 );
    ADD_WIDGET_TOGGLE( "is_mission_in_progress", ref l_U18 );
    ADD_WIDGET_TOGGLE( "bMenuScreen", ref l_U33 );
    ADD_WIDGET_TOGGLE( "canPlayDarts", ref l_U40 );
    END_WIDGET_GROUP();
    sub_1045();
    sub_1244();
    sub_1907();
    while (l_U18)
    {
        WAIT( 0 );
        if (l_U31)
        {
            if (NOT (IS_CONTROL_PRESSED( 2, 23 )))
            {
                PRINTSTRING( "contextButtonPressed set to FALSE \n" );
                l_U31 = 0;
            }
        }
        if (NOT (l_U12 == 1))
        {
            if (g_U12379)
            {
                if (NOT (sub_2108( 4 )))
                {
                    sub_155();
                }
            }
        }
        if (IS_PLAYER_PLAYING( sub_513() ))
        {
            if (DOES_OBJECT_EXIST( l_U15 ))
            {
                GET_OBJECT_COORDINATES( l_U15, ref l_U23._fU0, ref l_U23._fU4, ref l_U23._fU8 );
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2418(), l_U23._fU0, l_U23._fU4, l_U23._fU8, 50.00000000, 50.00000000, 20.00000000, 0 )))
                {
                    sub_155();
                }
            }
            else
            {
                sub_155();
            }
        }
        if (l_U12 == 0)
        {
            if (DOES_OBJECT_EXIST( l_U15 ))
            {
                sub_600( 1 );
                sub_2549();
                sub_2888();
                if (NOT (DOES_OBJECT_EXIST( l_U15 )))
                {
                    sub_155();
                }
                if (NOT (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U15 )))
                {
                    sub_155();
                }
                if (NOT l_U33)
                {
                    if ((sub_3051( 2, 0 )) AND (sub_3329()))
                    {
                        if ((NOT (IS_CHAR_INJURED( l_U41 ))) || (NOT (IS_CHAR_INJURED( l_U42 ))))
                        {
                            l_U22 = 0;
                            if (NOT (IS_CHAR_INJURED( l_U41 )))
                            {
                                l_U22++;
                            }
                            if (NOT (IS_CHAR_INJURED( l_U42 )))
                            {
                                l_U22++;
                            }
                            if (l_U22 == 1)
                            {
                                if ((NOT (IS_CHAR_INJURED( l_U41 ))) AND (IS_CHAR_INJURED( l_U42 )))
                                {
                                    l_U38 = "DRT_01O";
                                    g_U9267 = l_U41;
                                }
                                if ((IS_CHAR_INJURED( l_U41 )) AND (NOT (IS_CHAR_INJURED( l_U42 ))))
                                {
                                    l_U38 = "DRT_01P";
                                    g_U9267 = l_U42;
                                }
                            }
                            else
                            {
                                l_U38 = "PLAY_BAR_GUY";
                            }
                        }
                        else
                        {
                            g_U9267 = l_U16;
                            l_U38 = "PLAY_BAR_GUY";
                        }
                        if (NOT (IS_STRING_NULL( l_U39 )))
                        {
                            if (NOT (COMPARE_STRING( l_U38, l_U39 )))
                            {
                                sub_243( 2, l_U39 );
                                l_U39 = l_U38;
                            }
                        }
                        else
                        {
                            l_U39 = l_U38;
                        }
                        if (NOT l_U31)
                        {
                            if (sub_4792( 2, l_U38, 0 ))
                            {
                                l_U31 = 1;
                                PRINTSTRING( "contextButtonPressed - set to true in darts trigger \n" );
                                l_U43 = 1;
                                if (g_U12379)
                                {
                                    if (NOT (sub_2108( 4 )))
                                    {
                                        if (NOT (IS_CHAR_INJURED( l_U41 )))
                                        {
                                            SAY_AMBIENT_SPEECH( l_U41, "GENERIC_NO_THANKS", 1, 1, 0 );
                                        }
                                        else if (NOT (IS_CHAR_INJURED( l_U42 )))
                                        {
                                            SAY_AMBIENT_SPEECH( l_U42, "GENERIC_NO_THANKS", 1, 1, 0 );
                                        }
                                        PRINTSTRING( "Darts not playable 10 \n" );
                                        l_U43 = 0;
                                    }
                                }
                                if (l_U43)
                                {
                                    if (l_U22 > 1)
                                    {
                                        SET_PLAYER_CONTROL( sub_513(), 0 );
                                        l_U33 = 1;
                                    }
                                    else if (NOT sub_5690())
                                    {
                                        sub_243( 2, l_U39 );
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        sub_243( 2, l_U39 );
                    }
                }
                else if (NOT sub_3329())
                {
                    PRINTSTRING( "Darts - NOT canPlayDarts \n" );
                    l_U33 = 0;
                }
                g_U9267 = nil;
                l_U43 = 0;
                if (((NOT (IS_CHAR_INJURED( l_U41 ))) AND (NOT (IS_CHAR_INJURED( l_U42 )))) AND (l_U33))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "DRT_01L" )))
                    {
                        PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "DRT_01L", "NULL" );
                    }
                    if ((NOT l_U43) AND (((IS_BUTTON_PRESSED( 0, 16 )) AND (IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 115 )) AND (NOT IS_USING_CONTROLLER()))))
                    {
                        g_U9267 = l_U41;
                        l_U43 = 1;
                    }
                    if ((NOT l_U43) AND (((IS_BUTTON_PRESSED( 0, 17 )) AND (IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 116 )) AND (NOT IS_USING_CONTROLLER()))))
                    {
                        g_U9267 = l_U42;
                        l_U43 = 1;
                    }
                }
                if ((NOT (IS_CHAR_INJURED( l_U41 ))) AND (IS_CHAR_INJURED( l_U42 )))
                {
                    PRINTSTRING( "Darts - only Armando alive \n" );
                    l_U33 = 0;
                    l_U43 = 0;
                }
                if ((IS_CHAR_INJURED( l_U41 )) AND (NOT (IS_CHAR_INJURED( l_U42 ))))
                {
                    PRINTSTRING( "Darts - only Henrique alive \n" );
                    l_U33 = 0;
                    l_U43 = 0;
                }
                if ((IS_CHAR_INJURED( l_U41 )) AND (IS_CHAR_INJURED( l_U42 )))
                {
                    PRINTSTRING( "Darts - no one alive \n" );
                    l_U33 = 0;
                    l_U43 = 0;
                }
                if (l_U43)
                {
                    if (NOT sub_5690())
                    {
                        l_U43 = 0;
                    }
                }
                if (NOT l_U43)
                {
                    if ((NOT l_U31) || (NOT l_U33))
                    {
                        if ((IS_CONTROL_PRESSED( 2, 23 )) || (NOT l_U33))
                        {
                            CLEAR_HELP();
                            l_U33 = 0;
                            l_U31 = 1;
                            PRINTSTRING( "contextButtonPressed set to TRUE 2 \n" );
                            sub_243( 2, l_U39 );
                            SET_PLAYER_CONTROL( sub_513(), 1 );
                        }
                    }
                }
            }
            else
            {
                sub_155();
            }
        }
        else if (l_U12 == 1)
        {
            l_U22 = GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "darts" );
            if (l_U22 == 0)
            {
                SETTIMERA( 0 );
                l_U33 = 0;
                l_U31 = 1;
                l_U30 = 1;
                sub_243( 2, l_U39 );
                l_U12 = 0;
            }
        }
    }
    sub_155();
    return;
}

void sub_155()
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U37 );
    if (DOES_CHAR_EXIST( l_U16 ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U16 );
    }
    if (NOT (l_U27 == nil))
    {
        RELEASE_TEXTURE( l_U27 );
    }
    MARK_STREAMED_TXD_AS_NO_LONGER_NEEDED( "darts" );
    sub_243( 2, l_U39 );
    sub_600( 0 );
    CLEAR_HELP();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_243(int iParam0, string sParam1)
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
            if ((g_U10534 == iParam0) AND (l_U5))
            {
                StrCopy( ref g_U10536, "", 16 );
                g_U10534 = 0;
                g_U10535 = 0;
                g_U10540 = nil;
                l_U5 = 0;
                if (l_U3)
                {
                    sub_464();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_513(), 1 );
                l_U4 = 0;
            }
            if (l_U2)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U2 = 0;
            }
        }
    }
    return;
}

void sub_464()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_513()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_600(boolean bParam0)
{
    if (DOES_OBJECT_EXIST( l_U15 ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U15, 0.00000000, -1.50000000, -1.72000000, ref l_U23._fU0, ref l_U23._fU4, ref l_U23._fU8 );
        if (bParam0)
        {
            if (NOT l_U21)
            {
                CLEAR_AREA( l_U23._fU0, l_U23._fU4, l_U23._fU8, 1.00000000, 1 );
                SWITCH_PED_PATHS_OFF( l_U23._fU0 - 0.60000000, l_U23._fU4 - 0.60000000, l_U23._fU8 - 0.60000000, l_U23._fU0 + 0.60000000, l_U23._fU4 + 0.60000000, l_U23._fU8 + 0.60000000 );
                l_U21 = 1;
            }
        }
        else
        {
            SWITCH_PED_PATHS_ON( l_U23._fU0 - 0.60000000, l_U23._fU4 - 0.60000000, l_U23._fU8 - 0.60000000, l_U23._fU0 + 0.60000000, l_U23._fU4 + 0.60000000, l_U23._fU8 + 0.60000000 );
        }
    }
    return;
}

void sub_1045()
{
    REQUEST_STREAMED_TXD( "darts", 0 );
    while (NOT (HAS_STREAMED_TXD_LOADED( "darts" )))
    {
        WAIT( 0 );
    }
    l_U27 = GET_TEXTURE_FROM_STREAMED_TXD( "darts", "CJ_BLACKBOARD" );
    SET_TEXT_RENDER_ID( l_U28 );
    sub_1172( "darts", "CJ_BLACKBOARD" );
    DRAW_SPRITE( l_U27, 0.25000000, 0.50000000, 0.50000000, 1.00000000, 0.00000000, 255, 255, 255, 255 );
    return;
}

void sub_1172(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_1244()
{
    GET_GROUP_SIZE( sub_1253(), ref l_U22, ref l_U22 );
    if (l_U22 == 1)
    {
        GET_GROUP_MEMBER( sub_1253(), 0, ref l_U17 );
        if (NOT (IS_CHAR_INJURED( l_U17 )))
        {
            if (sub_1349( l_U17 ))
            {
                l_U35 = 1;
            }
        }
    }
    return;
}

void sub_1253()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1349(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (((IS_CHAR_MODEL( uParam0, sub_1376( 7 ) )) || (IS_CHAR_MODEL( uParam0, sub_1376( 1 ) ))) || (IS_CHAR_MODEL( uParam0, sub_1376( 3 ) )))
        {
            return 1;
        }
    }
    return 0;
}

int sub_1376(unknown uParam0)
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
    sub_1791( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_1791(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1907()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3000, ref iVar2 );
    if (iVar2 < 1000)
    {
        l_U37 = 280474699;
    }
    else if (iVar2 < 2000)
    {
        l_U37 = -19263344;
    }
    else
    {
        l_U37 = 1844702918;
    }
    return;
}

int sub_2108(int iParam0)
{
    unknown uVar3;

    if (NOT g_U12379)
    {
        return 1;
    }
    if (g_U28807._fU0[0] == 34)
    {
        return 0;
    }
    if (g_U28807._fU128)
    {
        return 0;
    }
    if (sub_2175( iParam0 ))
    {
        return 0;
    }
    uVar3 = iParam0;
    if (iParam0 == g_U28807._fU24)
    {
        if (g_U28807._fU48)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    if (g_U28807._fU28 == iParam0)
    {
        return 1;
    }
    if (NOT (g_U28807._fU28 == 16))
    {
        if (g_U28807._fU48)
        {
            return 0;
        }
    }
    if (g_U28807._fU56 <= 0)
    {
        return 0;
    }
    if (g_U28807._fU60[uVar3] > 0)
    {
        return 1;
    }
    return 0;
}

int sub_2175(unknown uParam0)
{
    return 0;
}

void sub_2418()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2549()
{
    unknown uVar2;
    unknown uVar3;

    if (NOT l_U20)
    {
        if (NOT l_U35)
        {
            GET_GROUP_SIZE( sub_1253(), ref l_U22, ref l_U22 );
            if (l_U22 == 0)
            {
                REQUEST_MODEL( l_U37 );
                while (NOT (HAS_MODEL_LOADED( l_U37 )))
                {
                    WAIT( 0 );
                }
                if (DOES_OBJECT_EXIST( l_U15 ))
                {
                    CREATE_CHAR( 4, l_U37, 1.00000000, 1.00000000, 1.00000000, ref l_U16, 1 );
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U16 );
                    GET_OBJECT_HEADING( l_U15, ref uVar2 );
                    SET_CHAR_HEADING( l_U16, uVar2 + 140.00000000 );
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U15, 0.60000000, -0.70000000, -1.73000000, ref l_U23._fU0, ref l_U23._fU4, ref l_U23._fU8 );
                    SET_CHAR_COORDINATES( l_U16, l_U23._fU0, l_U23._fU4, l_U23._fU8 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U16, 1 );
                    if (DOES_OBJECT_EXIST( l_U15 ))
                    {
                        GET_OBJECT_COORDINATES( l_U15, ref l_U23._fU0, ref l_U23._fU4, ref l_U23._fU8 );
                        GET_ROOM_KEY_FROM_OBJECT( l_U15, ref uVar3 );
                        SET_ROOM_FOR_CHAR_BY_KEY( l_U16, uVar3 );
                    }
                    else
                    {
                        l_U18 = 0;
                    }
                    l_U20 = 1;
                }
            }
        }
    }
    return;
}

void sub_2888()
{
    int iVar2;

    if ((l_U20) AND (NOT l_U32))
    {
        if (NOT (IS_CHAR_INJURED( l_U16 )))
        {
            GET_CHAR_HEALTH( l_U16, ref iVar2 );
            if (iVar2 < 150)
            {
                TASK_SMART_FLEE_CHAR_PREFERRING_PAVEMENTS( l_U16, sub_2418(), 200.00000000, -2 );
                SET_CHAR_KEEP_TASK( l_U16, 1 );
                l_U32 = 1;
            }
        }
    }
    return;
}

int sub_3051(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_513() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_513() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_513() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9200)))
                {
                    if (NOT sub_3147())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_2418() )) == nil)
                        {
                            if (g_U10534 <= iParam0)
                            {
                                if (g_U10535 == 0)
                                {
                                    if (sub_3232())
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

int sub_3147()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_3232()
{
    return sub_3243( 0, 0 );
}

int sub_3243(boolean bParam0, unknown uParam1)
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

int sub_3329()
{
    int iVar2;

    if (sub_3338())
    {
        l_U41 = sub_3587( 3 );
        l_U42 = sub_3587( 7 );
        if (DOES_CHAR_EXIST( l_U41 ))
        {
            if (NOT (sub_3794( sub_2418(), l_U41 )))
            {
                l_U41 = nil;
                return 0;
            }
        }
        if (DOES_CHAR_EXIST( l_U42 ))
        {
            if (NOT (sub_3794( sub_2418(), l_U42 )))
            {
                l_U42 = nil;
                return 0;
            }
        }
    }
    if (((IS_CHAR_INJURED( l_U16 )) AND (IS_CHAR_INJURED( l_U41 ))) AND (IS_CHAR_INJURED( l_U42 )))
    {
        return 0;
    }
    if ((IS_CHAR_INJURED( l_U41 )) AND (IS_CHAR_INJURED( l_U42 )))
    {
        if (NOT (IS_CHAR_INJURED( l_U16 )))
        {
            if (l_U32)
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    if (IS_PLAYER_PLAYING( sub_513() ))
    {
        if ((IS_WANTED_LEVEL_GREATER( sub_513(), 0 )) || (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_513() ))))
        {
            return 0;
        }
    }
    if (NOT sub_4131())
    {
        return 0;
    }
    if (TIMERA() < 1000)
    {
        return 0;
    }
    if (NOT sub_3338())
    {
        return 0;
    }
    if (sub_2108( 4 ))
    {
        if (sub_4235( ref iVar2, 0 ))
        {
            if ((iVar2 == 7) || (iVar2 == 3))
            {
                if ((NOT (DOES_CHAR_EXIST( l_U41 ))) AND (NOT (DOES_CHAR_EXIST( l_U42 ))))
                {
                    return 0;
                }
            }
        }
    }
    else if (NOT g_U12379)
    {
        if (sub_4235( ref iVar2, 0 ))
        {
            if ((NOT (iVar2 == 7)) AND (NOT (iVar2 == 3)))
            {
                return 0;
            }
        }
    }
    else
    {
        return 0;
    }
    return 1;
}

int sub_3338()
{
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U15, 0.00000000, -1.50000000, -1.72000000, ref l_U23._fU0, ref l_U23._fU4, ref l_U23._fU8 );
    if (((IS_CHAR_IN_AREA_3D( sub_2418(), l_U23._fU0 - 1, l_U23._fU4 - 4.00000000, l_U23._fU8 - 1, l_U23._fU0 + 1, l_U23._fU4 + 1.60000000, l_U23._fU8 + 1, 0 )) AND ((l_U36 > 359) || (l_U36 < 1))) || ((IS_CHAR_IN_AREA_3D( sub_2418(), l_U23._fU0 - 1, l_U23._fU4 + 4.00000000, l_U23._fU8 - 1, l_U23._fU0 + 1, l_U23._fU4 - 1.60000000, l_U23._fU8 + 1, 0 )) AND ((l_U36 > 179) AND (l_U36 < 181))))
    {
        return 1;
    }
    return 0;
}

void sub_3587(unknown uParam0)
{
    unknown Result;
    unknown uVar4;
    int iVar5;
    int I;

    Result = nil;
    if (IS_PLAYER_PLAYING( sub_513() ))
    {
        if (DOES_GROUP_EXIST( sub_1253() ))
        {
            GET_GROUP_SIZE( sub_1253(), ref uVar4, ref iVar5 );
            if (iVar5 > 0)
            {
                for ( I = 0; I < iVar5; I++ )
                {
                    GET_GROUP_MEMBER( sub_1253(), I, ref Result );
                    if (NOT (IS_CHAR_INJURED( Result )))
                    {
                        if (IS_CHAR_MODEL( Result, sub_1376( uParam0 ) ))
                        {
                            return Result;
                        }
                    }
                }
            }
        }
    }
    Result = nil;
    return Result;
}

int sub_3794(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if ((NOT (IS_CHAR_INJURED( uParam0 ))) AND (NOT (IS_CHAR_INJURED( uParam1 ))))
    {
        if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam1 ))))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar4 );
            GET_KEY_FOR_CHAR_IN_ROOM( uParam1, ref iVar5 );
            if (iVar4 == iVar5)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_4131()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U22959)
    {
        return 0;
    }
    return 1;
}

int sub_4235(unknown uParam0, int iParam1)
{
    if (iParam1 >= 2)
    {
        return 0;
    }
    (uParam0^) = g_U28807._fU0[iParam1];
    if (g_U28807._fU0[iParam1] == 34)
    {
        return 0;
    }
    return 1;
}

int sub_4792(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_3051( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_513(), 0 );
                l_U4 = 1;
            }
            g_U10534 = uParam0;
            l_U5 = 1;
            StrCopy( ref g_U10536, sParam1, 16 );
            g_U10540 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_5067();
                l_U3 = 1;
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
                            l_U2 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U2)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U2 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_5067()
{
    return sub_3243( 1, 1 );
}

int sub_5690()
{
    unknown uVar2;

    if (g_U12379)
    {
        if (NOT (sub_5710( 4 )))
        {
            return 0;
        }
    }
    if (NOT (g_U9267 == l_U16))
    {
        sub_6447( ref l_U13, sub_6116( g_U9267 ) );
        l_U19 = 1;
    }
    if (NOT l_U19)
    {
        GET_PLAYER_GROUP( sub_513(), ref uVar2 );
        if (NOT (IS_GROUP_MEMBER( l_U16, uVar2 )))
        {
            SET_GROUP_MEMBER( sub_1253(), l_U16 );
            PRINTSTRING( "DARTS LAUNCHER - barGuy added to players group \n" );
        }
    }
    if (IS_PLAYER_PLAYING( sub_513() ))
    {
        SET_PLAYER_CONTROL( sub_513(), 0 );
    }
    sub_6743();
    l_U12 = 1;
    return 1;
}

int sub_5710(int iParam0)
{
    unknown uVar3;

    if (g_U28807._fU0[0] == 34)
    {
        return 0;
    }
    if (g_U28807._fU128)
    {
        return 0;
    }
    if (sub_2175( iParam0 ))
    {
        return 0;
    }
    uVar3 = iParam0;
    if (iParam0 == g_U28807._fU24)
    {
        if (g_U28807._fU48)
        {
            return 0;
        }
        else
        {
            g_U28807._fU28 = 16;
            if (g_U28807._fU60[uVar3] > 0)
            {
                g_U28807._fU60[uVar3]--;
            }
            g_U28807._fU124 = 0;
            return 1;
        }
    }
    if (g_U28807._fU28 == iParam0)
    {
        return 1;
    }
    if (NOT (g_U28807._fU28 == 16))
    {
        if (g_U28807._fU48)
        {
            return 0;
        }
        else
        {
            g_U28807._fU28 = 16;
        }
    }
    if (g_U28807._fU56 <= 0)
    {
        g_U28807._fU32 = iParam0;
        return 0;
    }
    if (g_U28807._fU60[uVar3] > 0)
    {
        g_U28807._fU28 = iParam0;
        g_U28807._fU60[uVar3]--;
        if (iParam0 == 12)
        {
            g_U28807._fU124 = 1;
        }
        return 1;
    }
    g_U28807._fU32 = iParam0;
    return 0;
}

int sub_6116(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_MODEL( uParam0, sub_1376( 0 ) ))
        {
            return 0;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1376( 1 ) ))
        {
            return 1;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1376( 2 ) ))
        {
            return 2;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1376( 3 ) ))
        {
            return 3;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1376( 4 ) ))
        {
            return 4;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1376( 5 ) ))
        {
            return 5;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1376( 6 ) ))
        {
            return 6;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1376( 30 ) ))
        {
            return 30;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1376( 31 ) ))
        {
            return 31;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1376( 7 ) ))
        {
            return 7;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1376( 32 ) ))
        {
            return 32;
        }
        if (IS_CHAR_MODEL( uParam0, sub_1376( 33 ) ))
        {
            return 33;
        }
    }
    return 34;
}

void sub_6447(int iParam0, unknown uParam1)
{
    PRINTSTRING( "SetDartsGameOpponent() - Called \n" );
    switch (uParam1)
    {
        case 3:
        iParam0->_fU0 = 0;
        break;
        case 7:
        iParam0->_fU0 = 1;
        break;
    }
    PRINTSTRING( "SetDartsGameOpponent() - Ended \n" );
    return;
}

void sub_6743()
{
    CLEAR_HELP();
    sub_6759();
    REQUEST_SCRIPT( "darts" );
    while (NOT (HAS_SCRIPT_LOADED( "darts" )))
    {
        REQUEST_SCRIPT( "darts" );
        PRINTSTRING( "darts launcher - waiting for darts to load \n" );
        WAIT( 0 );
    }
    l_U13._fU4 = l_U15;
    START_NEW_SCRIPT_WITH_ARGS( "darts", ref l_U13, 2, 1024 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "darts" );
    return;
}

void sub_6759()
{
    return;
}
