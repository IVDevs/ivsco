void main()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    int iVar15;
    unknown uVar16;

    l_U4 = 0;
    iVar15 = 0;
    if (NOT IS_INTERIOR_SCENE())
    {
        TERMINATE_THIS_SCRIPT();
    }
    if (DOES_OBJECT_EXIST( l_U5 ))
    {
        GET_OBJECT_MODEL( l_U5, ref uVar4 );
        switch (uVar4)
        {
            case -805425417:
            GET_OBJECT_COORDINATES( l_U5, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
            vVar8 = {1.50000000, 1.50000000, 3.00000000};
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U5, 0.00000000, -1.50000000, 0.00000000, ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
            if (LOCATE_OBJECT_3D( l_U5, 856.00000000, -514.00000000, 15.50000000, 1.00000000, 1.00000000, 1.00000000, 0 ))
            {
                iVar2 = 1;
            }
            else
            {
                iVar2 = 0;
            }
            break;
            default:
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U5, 0.00000000, -0.60000000, 0.00000000, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
            vVar8 = {1.20000000, 1.20000000, 3.00000000};
            iVar2 = 0;
        }
    }
    else
    {
        TERMINATE_THIS_SCRIPT();
    }
    GET_ROOM_KEY_FROM_OBJECT( l_U5, ref uVar16 );
    sub_341( "\n The room key for this object is, ", uVar16 );
    while (true)
    {
        WAIT( 0 );
        if (IS_PLAYER_PLAYING( sub_372() ))
        {
            if (DOES_OBJECT_EXIST( l_U5 ))
            {
                if (NOT (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U5 )))
                {
                    sub_487( "Computer not in brain activation range" );
                    sub_504();
                }
            }
            else
            {
                sub_504();
            }
            switch (iVar15)
            {
                case 0:
                if ((HAS_OBJECT_BEEN_UPROOTED( l_U5 )) || (HAS_OBJECT_BEEN_DAMAGED( l_U5 )))
                {
                    sub_487( "Computer has been uprooted, or damaged" );
                    sub_504();
                }
                if ((g_U944) || ((g_U945) AND (NOT l_U4)))
                {
                    break;
                }
                ALLOW_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND( 1 );
                if (GET_CLOSEST_CHAR( uVar5._fU0, uVar5._fU4, uVar5._fU8, 1.20000000, 1, 1, ref uVar14 ))
                {
                    sub_1082();
                    break;
                }
                if (NOT (LOCATE_CHAR_ON_FOOT_3D( sub_1149(), uVar5._fU0, uVar5._fU4, uVar5._fU8, vVar8.x, vVar8.y, vVar8.z, 0 )))
                {
                    sub_1082();
                    break;
                }
                g_U945 = 1;
                l_U4 = 1;
                if (NOT (sub_1253( 2, 0 )))
                {
                    sub_543( 2, "USE_COMPUTER" );
                    sub_487( "Computer cant use the context button" );
                    break;
                }
                else if ((sub_1629( 2, "USE_COMPUTER", 0 )) AND (NOT IS_REPLAY_SAVING()))
                {
                    if (SECUROM_SPOT_CHECK1())
                    {
                        SET_PLAYER_CONTROL( sub_372(), 0 );
                        SET_MINIGAME_IN_PROGRESS( 1 );
                        DISPLAY_NON_MINIGAME_HELP_MESSAGES( 1 );
                        DO_SCREEN_FADE_OUT( 500 );
                        REQUEST_SCRIPT( "computerMain" );
                        while (NOT (HAS_SCRIPT_LOADED( "computerMain" )))
                        {
                            WAIT( 0 );
                            REQUEST_SCRIPT( "computerMain" );
                        }
                        while (IS_SCREEN_FADING())
                        {
                            WAIT( 0 );
                        }
                        CLEAR_HELP();
                        g_U9329 = START_NEW_SCRIPT_WITH_ARGS( "computerMain", ref l_U5, 1, 1024 );
                        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "computerMain" );
                        g_U944 = 1;
                        iVar15 = 1;
                    }
                }
                break;
                case 1:
                if (IS_THREAD_ACTIVE( g_U9329 ))
                {
                    break;
                }
                DISPLAY_NON_MINIGAME_HELP_MESSAGES( 0 );
                SET_MINIGAME_IN_PROGRESS( 0 );
                if (IS_PLAYER_PLAYING( sub_372() ))
                {
                    TASK_STAND_STILL( sub_1149(), 1 );
                    SET_PLAYER_CONTROL( sub_372(), 1 );
                }
                g_U944 = 0;
                sub_764();
                SETTIMERA( 0 );
                iVar15 = 2;
                case 2:
                if (NOT (IS_BUTTON_PRESSED( 0, 4 )))
                {
                    if (TIMERA() >= 2000)
                    {
                        iVar15 = 0;
                    }
                }
                break;
            }
        }
        else
        {
            sub_504();
        }
    }
    return;
}

void sub_341(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_372()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_487(unknown uParam0)
{
    return;
}

void sub_504()
{
    if ((g_U945) AND (l_U4))
    {
        sub_543( 2, "USE_COMPUTER" );
        g_U945 = 0;
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_543(int iParam0, string sParam1)
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
                    sub_764();
                    l_U1 = 0;
                }
            }
            if (l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_372(), 1 );
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

void sub_764()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_1082()
{
    if ((g_U945) AND (l_U4))
    {
        sub_543( 2, "USE_COMPUTER" );
        g_U945 = 0;
    }
    l_U4 = 0;
    return;
}

void sub_1149()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1253(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_372() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_372() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_372() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9202)))
                {
                    if (NOT sub_1349())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_1149() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_1434())
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

int sub_1349()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_1434()
{
    return sub_1445( 0, 0 );
}

int sub_1445(boolean bParam0, unknown uParam1)
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

int sub_1629(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_1253( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_372(), 0 );
                l_U2 = 1;
            }
            g_U9172 = uParam0;
            l_U3 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_1904();
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

void sub_1904()
{
    return sub_1445( 1, 1 );
}
