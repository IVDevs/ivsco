void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U6 = 0;
    l_U7 = 0;
    l_U8 = 0;
    l_U16 = 0;
    l_U32 = {65270, 65435, 335};
    l_U35 = 180.00000000;
    l_U36 = {-271.52640000, -88.08870000, 336.44540000};
    l_U39 = 270.00000000;
    l_U40 = {-271.86000000, -112.76730000, 336.44540000};
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_137();
    }
    sub_595( l_U43 );
    while (true)
    {
        WAIT( 0 );
        if (IS_PLAYER_PLAYING( sub_431() ))
        {
            switch (l_U6)
            {
                case 0:
                DRAW_COLOURED_CYLINDER( l_U36._fU0, l_U36._fU4, l_U36._fU8 - 2, 0.80000000, 0.20000000, 0, 132, 202, 255 );
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_769(), l_U36._fU0, l_U36._fU4, l_U36._fU8, 0.80000000, 0.80000000, 2.00000000, 0 ))
                {
                    if (IS_CHAR_ON_FOOT( sub_769() ))
                    {
                        if (sub_878( 2, 0 ))
                        {
                            if (sub_1166( 2, l_U31, 0 ))
                            {
                                sub_161( 2, "empire_down" );
                                l_U6 = 3;
                            }
                        }
                        else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_769(), l_U40._fU0, l_U40._fU4, l_U40._fU8, 0.80000000, 0.80000000, 2.00000000, 0 )))
                        {
                            sub_161( 2, "empire_down" );
                        }
                    }
                    else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_769(), l_U40._fU0, l_U40._fU4, l_U40._fU8, 0.80000000, 0.80000000, 2.00000000, 0 )))
                    {
                        sub_161( 2, "empire_down" );
                    }
                }
                else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_769(), l_U40._fU0, l_U40._fU4, l_U40._fU8, 0.80000000, 0.80000000, 2.00000000, 0 )))
                {
                    sub_161( 2, "empire_down" );
                }
                DRAW_COLOURED_CYLINDER( l_U40._fU0, l_U40._fU4, l_U40._fU8 - 2, 0.80000000, 0.20000000, 0, 132, 202, 255 );
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_769(), l_U40._fU0, l_U40._fU4, l_U40._fU8, 0.80000000, 0.80000000, 2.00000000, 0 ))
                {
                    if (IS_CHAR_ON_FOOT( sub_769() ))
                    {
                        if (sub_878( 2, 0 ))
                        {
                            if (sub_1166( 2, l_U31, 0 ))
                            {
                                sub_161( 2, "empire_down" );
                                l_U6 = 3;
                            }
                        }
                        else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_769(), l_U36._fU0, l_U36._fU4, l_U36._fU8, 0.80000000, 0.80000000, 2.00000000, 0 )))
                        {
                            sub_161( 2, "empire_down" );
                        }
                    }
                    else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_769(), l_U36._fU0, l_U36._fU4, l_U36._fU8, 0.80000000, 0.80000000, 2.00000000, 0 )))
                    {
                        sub_161( 2, "empire_down" );
                    }
                }
                else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_769(), l_U36._fU0, l_U36._fU4, l_U36._fU8, 0.80000000, 0.80000000, 2.00000000, 0 )))
                {
                    sub_161( 2, "empire_down" );
                }
                break;
                case 3:
                sub_2457();
                break;
            }
        }
        else
        {
            sub_137();
        }
    }
    return;
}

void sub_137()
{
    sub_161( 2, "empire_down" );
    if (l_U8 == 1)
    {
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 2000 );
        }
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_161(int iParam0, string sParam1)
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
        if (COMPARE_STRING( sParam1, ref g_U10470 ))
        {
            if ((g_U10468 == iParam0) AND (l_U5))
            {
                StrCopy( ref g_U10470, "", 16 );
                g_U10468 = 0;
                g_U10469 = 0;
                g_U10474 = nil;
                l_U5 = 0;
                if (l_U3)
                {
                    sub_382();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_431(), 1 );
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

void sub_382()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_431()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_595(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22)
{
    l_U26._fU0 = -222.05310000;
    l_U26._fU4 = -106.14880000;
    l_U26._fU8 = 13.54540000;
    l_U31 = "empire_down";
    return;
}

void sub_769()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_878(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_431() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_431() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_431() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U10499)))
                {
                    if (NOT sub_974())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_769() )) == nil)
                        {
                            if (g_U10468 <= iParam0)
                            {
                                if (g_U10469 == 0)
                                {
                                    if (sub_1059())
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

int sub_974()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_1059()
{
    return sub_1070( 0, 0 );
}

int sub_1070(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U94._fU104 = 1;
    }
    if ((uParam1) AND (g_U558 != 9))
    {
        g_U94._fU100 = 1;
    }
    return 1;
}

int sub_1166(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_878( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_431(), 0 );
                l_U4 = 1;
            }
            g_U10468 = uParam0;
            l_U5 = 1;
            StrCopy( ref g_U10470, sParam1, 16 );
            g_U10474 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_1441();
                l_U3 = 1;
                g_U10469 = 6;
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
                g_U10469 = 0;
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

void sub_1441()
{
    return sub_1070( 1, 1 );
}

void sub_2457()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    switch (l_U8)
    {
        case 0:
        if (NOT IS_THIS_A_MINIGAME_SCRIPT())
        {
            SET_MINIGAME_IN_PROGRESS( 1 );
        }
        DO_SCREEN_FADE_OUT( 2000 );
        l_U8 = 1;
        break;
        case 1:
        if (IS_SCREEN_FADED_OUT())
        {
            SET_CHAR_COORDINATES( sub_769(), l_U26._fU0, l_U26._fU4, l_U26._fU8 );
            SET_CHAR_HEADING( sub_769(), l_U39 );
            if (g_U11090)
            {
                if (NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( g_U11028[0]._fU0 );
                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_769(), -0.50000000, -1.00000000, -1.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                    SET_CHAR_COORDINATES( g_U11028[0]._fU0, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                    SET_CHAR_HEADING( g_U11028[0]._fU0, l_U39 );
                }
                if (NOT (IS_CHAR_INJURED( g_U11028[1]._fU0 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( g_U11028[1]._fU0 );
                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_769(), 0.50000000, -1.00000000, -1.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                    SET_CHAR_COORDINATES( g_U11028[1]._fU0, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                    SET_CHAR_HEADING( g_U11028[1]._fU0, l_U39 );
                }
            }
            sub_161( 2, "empire_down" );
            LOAD_SCENE( l_U26._fU0, l_U26._fU4, l_U26._fU8 );
            SET_CAM_BEHIND_PED( sub_769() );
            GET_GAME_TIMER( ref l_U13 );
            l_U8 = 2;
        }
        break;
        case 2:
        DO_SCREEN_FADE_IN( 2000 );
        l_U8 = 3;
        break;
        case 3:
        if (IS_SCREEN_FADED_IN())
        {
            SET_PLAYER_CONTROL( sub_431(), 1 );
            if (IS_THIS_A_MINIGAME_SCRIPT())
            {
                SET_MINIGAME_IN_PROGRESS( 0 );
            }
            sub_161( 2, "empire_down" );
            l_U6 = 0;
            l_U8 = 0;
        }
        break;
    }
    return;
}
