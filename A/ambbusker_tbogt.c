void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U105 = 0;
    l_U106 = 0;
    l_U107 = 1;
    l_U108 = 0;
    l_U109 = 0;
    l_U110 = 0;
    l_U111 = 0;
    l_U118 = 0;
    l_U119 = 1;
    l_U164 = 0;
    l_U167 = -525076767;
    l_U168 = "amb@busker";
    StrCopy( ref l_U169, "BUSK1", 16 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_139();
    }
    WAIT( 0 );
    l_U120 = l_U173;
    if (g_U9276)
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambbusker" )) == 1)
        {
            g_U9276 = 0;
        }
    }
    if (DOES_CHAR_EXIST( l_U120 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U120 )))
        {
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U120, 1 );
            SET_CHAR_NAME_DEBUG( l_U120, "START" );
        }
    }
    if (NOT g_U9276)
    {
        if (NOT (IS_CHAR_DEAD( l_U120 )))
        {
            GET_CHAR_COORDINATES( l_U120, ref l_U136._fU0, ref l_U136._fU4, ref l_U136._fU8 );
            GET_GAME_TIMER( ref l_U165 );
            GET_GAME_TIMER( ref l_U162 );
            l_U165 = l_U165 mod 600000;
            g_U9276 = 1;
            l_U108 = 1;
        }
        else
        {
            l_U107 = 0;
        }
    }
    else
    {
        l_U107 = 0;
        if (NOT (IS_CHAR_DEAD( l_U120 )))
        {
            SET_CHAR_NAME_DEBUG( l_U120, "OTHRACTV" );
        }
    }
    if (l_U107)
    {
        if (NOT (IS_CHAR_DEAD( l_U120 )))
        {
            SET_CHAR_NAME_DEBUG( l_U120, "WAITING1" );
        }
    }
    while (l_U107)
    {
        WAIT( 0 );
        if (sub_1085())
        {
            switch (l_U105)
            {
                case 0:
                sub_2298();
                break;
                case 1:
                sub_2707();
                break;
                default: break;
            }
        }
        else
        {
            l_U107 = 0;
        }
        sub_5963();
    }
    sub_139();
    return;
}

void sub_139()
{
    if (NOT (IS_CHAR_DEAD( l_U120 )))
    {
        SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U120, 1 );
        if (l_U118)
        {
            ;
        }
        CLEAR_CHAR_SECONDARY_TASK( l_U120 );
        if (NOT (IS_CHAR_INJURED( l_U120 )))
        {
            TASK_WANDER_STANDARD( l_U120 );
        }
        SET_CHAR_KEEP_TASK( l_U120, 1 );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U120 );
    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U135 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U167 );
    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U127 );
    REMOVE_ANIMS( l_U168 );
    sub_306( 2, ref l_U169 );
    if (l_U108)
    {
        g_U9276 = 0;
    }
    if (l_U118)
    {
        STOP_STREAM();
        l_U118 = 0;
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_306(int iParam0, string sParam1)
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
                    sub_527();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_576(), 1 );
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

void sub_527()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_576()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_1085()
{
    if (DOES_CHAR_EXIST( l_U120 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U120 )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( l_U120 )))
            {
                if (((NOT sub_1147()) AND (GET_STREAM_PLAYTIME() == -1)) AND (NOT sub_1193()))
                {
                    if (NOT sub_1365())
                    {
                        if (NOT g_U12379)
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

int sub_1147()
{
    if (NOT (g_U30197 == -1))
    {
        return 1;
    }
    return 0;
}

void sub_1193()
{
    int Result;

    Result = 0;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubBM_min" )) >= 1)
    {
        Result = 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubBM2" )) >= 1)
    {
        Result = 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubHC2" )) >= 1)
    {
        Result = 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubM92" )) >= 1)
    {
        Result = 1;
    }
    return Result;
}

int sub_1365()
{
    if (NOT (IS_CHAR_INJURED( sub_1374() )))
    {
        if (sub_1433( sub_1374() ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_1374()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1433(unknown uParam0)
{
    if (((sub_1446( uParam0, 1, 0 )) || (sub_1446( uParam0, 2, 0 ))) || (sub_1446( uParam0, 0, 0 )))
    {
        return 1;
    }
    return 0;
}

int sub_1446(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_1474( uParam0, uParam1 ))
        {
            return 1;
        }
        switch (uParam1)
        {
            case 0:
            if (bParam2)
            {
                if ((LOCATE_CHAR_ON_FOOT_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 )) || ((IS_CHAR_ON_ANY_BIKE( uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
                {
                    return 1;
                }
            }
            break;
            case 1:
            if (bParam2)
            {
                if ((LOCATE_CHAR_ON_FOOT_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 )) || ((IS_CHAR_ON_ANY_BIKE( uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
                {
                    return 1;
                }
            }
            break;
            case 2:
            if (bParam2)
            {
                if ((LOCATE_CHAR_ON_FOOT_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 )) || ((IS_CHAR_ON_ANY_BIKE( uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
                {
                    return 1;
                }
            }
            break;
        }
    }
    return 0;
}

int sub_1474(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        switch (uParam1)
        {
            case 0:
            GET_INTERIOR_AT_COORDS( -395.22000000, 400.50000000, 14.40000000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 1:
            GET_INTERIOR_AT_COORDS( -483.90180000, 149.43310000, 7.56070000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 2:
            GET_INTERIOR_AT_COORDS( -431.82560000, 351.76230000, 11.71660000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            if (IS_CHAR_IN_AREA_3D( sub_1374(), -438.84750000, 349.78630000, 9.59170000, -436.09750000, 353.78630000, 14.46670000, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

void sub_2298()
{
    REQUEST_ANIMS( l_U168 );
    REQUEST_MODEL( l_U167 );
    if ((NOT (HAVE_ANIMS_LOADED( l_U168 ))) || (NOT (HAS_MODEL_LOADED( l_U167 ))))
    {
        GET_GAME_TIMER( ref l_U163 );
        if ((l_U163 - l_U162) > 10000)
        {
            l_U105 = 1;
            l_U106 = 7;
            if (NOT (IS_CHAR_INJURED( l_U120 )))
            {
                SET_CHAR_NAME_DEBUG( l_U120, "WANDER" );
                TASK_WANDER_STANDARD( l_U120 );
            }
        }
    }
    else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U120, sub_1374(), 50.00000000, 50.00000000, 50.00000000, 0 ))
    {
        if (PRELOAD_STREAM_WITH_START_OFFSET( "BUSKER_LOOP", l_U165 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U120 )))
            {
                SET_CHAR_NAME_DEBUG( l_U120, "ACTIVE" );
            }
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U120, 0 );
            l_U119 = 0;
            l_U105 = 1;
        }
        else
        {
            GET_GAME_TIMER( ref l_U163 );
            if ((l_U163 - l_U162) > 10000)
            {
                l_U105 = 1;
                l_U106 = 7;
                if (NOT (IS_CHAR_INJURED( l_U120 )))
                {
                    SET_CHAR_NAME_DEBUG( l_U120, "WANDER" );
                    TASK_WANDER_STANDARD( l_U120 );
                }
            }
        }
    }
    return;
}

void sub_2707()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT (l_U106 == 6))
    {
        if (IS_PED_IN_COMBAT( l_U120 ))
        {
            sub_306( 2, ref l_U169 );
            TASK_SMART_FLEE_CHAR_PREFERRING_PAVEMENTS( l_U120, sub_1374(), 300, -1 );
            l_U106 = 6;
        }
    }
    if (l_U118)
    {
        if (NOT sub_2794())
        {
            STOP_STREAM();
            l_U118 = 0;
            GET_GAME_TIMER( ref l_U165 );
            l_U165 = l_U165 mod 600000;
            if (NOT (IS_CHAR_DEAD( l_U120 )))
            {
                SET_CHAR_NAME_DEBUG( l_U120, "STOPPED" );
            }
        }
    }
    else if (sub_2794())
    {
        if (PRELOAD_STREAM_WITH_START_OFFSET( "BUSKER_LOOP", l_U165 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U120 )))
            {
                SET_CHAR_NAME_DEBUG( l_U120, "ACTIVE2" );
            }
            PLAY_STREAM_FROM_PED( l_U120 );
            l_U118 = 1;
        }
        else if (NOT (IS_CHAR_DEAD( l_U120 )))
        {
            SET_CHAR_NAME_DEBUG( l_U120, "WAITING2" );
        }
    }
    else if (NOT (IS_CHAR_DEAD( l_U120 )))
    {
        SET_CHAR_NAME_DEBUG( l_U120, "NOSAX" );
    };;;
    switch (l_U106)
    {
        case 0:
        if (l_U108)
        {
            if (NOT l_U118)
            {
                if (IS_PED_HOLDING_AN_OBJECT( l_U120 ))
                {
                    if (PRELOAD_STREAM_WITH_START_OFFSET( "BUSKER_LOOP", l_U165 ))
                    {
                        PLAY_STREAM_FROM_PED( l_U120 );
                        l_U118 = 1;
                    }
                }
            }
            GET_CHAR_COORDINATES( l_U120, ref l_U139._fU0, ref l_U139._fU4, ref l_U139._fU8 );
            GET_CLOSEST_CAR_NODE( l_U139._fU0, l_U139._fU4, l_U139._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            GET_GAME_TIMER( ref l_U161 );
            l_U106 = 1;
        }
        break;
        case 1:
        if (LOCATE_CHAR_ON_FOOT_CHAR_3D( l_U120, sub_1374(), 5.00000000, 5.00000000, 1.00000000, 0 ))
        {
            if (IS_PED_HOLDING_AN_OBJECT( l_U120 ))
            {
                if (l_U118)
                {
                    sub_3567();
                }
                else
                {
                    sub_306( 2, ref l_U169 );
                }
            }
            else
            {
                sub_306( 2, ref l_U169 );
                l_U106 = 7;
            }
        }
        else
        {
            sub_306( 2, ref l_U169 );
        }
        break;
        case 3:
        GET_SCRIPT_TASK_STATUS( sub_1374(), 102, ref l_U166 );
        if (l_U166 == 7)
        {
            sub_4650();
        }
        break;
        case 4:
        sub_5172();
        break;
        case 7: break;
    }
    if (l_U118)
    {
        ;
    }
    if (NOT l_U119)
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U120, sub_1374(), 50.00000000, 50.00000000, 20.00000000, 0 )))
        {
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U120, 1 );
            l_U119 = 1;
        }
    }
    return;
}

int sub_2794()
{
    if (IS_PED_HOLDING_AN_OBJECT( l_U120 ))
    {
        if (IS_CHAR_USING_ANY_SCENARIO( l_U120 ))
        {
            if (((IS_CHAR_PLAYING_ANIM( l_U120, "amb@busker", "sax_loop_a" )) || (IS_CHAR_PLAYING_ANIM( l_U120, "amb@busker", "sax_loop_b" ))) || (IS_CHAR_PLAYING_ANIM( l_U120, "amb@default", "busker_default" )))
            {
                if (NOT (IS_CHAR_GESTURING( l_U120 )))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_3567()
{
    if (sub_3578( 2, 0 ))
    {
        if (sub_3867( 2, ref l_U169, 0 ))
        {
            if (HAVE_ANIMS_LOADED( l_U168 ))
            {
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( sub_1374(), "throw_right", l_U168, 12.00000000, 0, 0, 0, 0, -1 );
            }
            l_U106 = 3;
        }
    }
    else
    {
        sub_306( 2, ref l_U169 );
    }
    return;
}

int sub_3578(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_576() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_576() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_576() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9200)))
                {
                    if (NOT sub_3674())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_1374() )) == nil)
                        {
                            if (g_U10534 <= iParam0)
                            {
                                if (g_U10535 == 0)
                                {
                                    if (sub_3759())
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

int sub_3674()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_3759()
{
    return sub_3770( 0, 0 );
}

int sub_3770(boolean bParam0, unknown uParam1)
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

int sub_3867(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_3578( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_576(), 0 );
                l_U4 = 1;
            }
            g_U10534 = uParam0;
            l_U5 = 1;
            StrCopy( ref g_U10536, sParam1, 16 );
            g_U10540 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_4142();
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

void sub_4142()
{
    return sub_3770( 1, 1 );
}

void sub_4650()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    float fVar5;

    if (NOT (IS_CHAR_PLAYING_ANIM( sub_1374(), l_U168, "throw_right" )))
    {
        if (DOES_OBJECT_EXIST( l_U135 ))
        {
            if (IS_OBJECT_ATTACHED( l_U135 ))
            {
                DETACH_OBJECT( l_U135, 1 );
                GET_OBJECT_COORDINATES( l_U135, ref l_U158._fU0, ref l_U158._fU4, ref l_U158._fU8 );
            }
        }
        l_U158._fU8 += 0.10000000;
        if (IS_SCORE_GREATER( sub_576(), 9 ))
        {
            ADD_SCORE( sub_576(), -10 );
            l_U111 = 1;
        }
        l_U106 = 4;
        sub_306( 2, ref l_U169 );
    }
    else if (NOT l_U110)
    {
        GET_CHAR_COORDINATES( sub_1374(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        CREATE_OBJECT( l_U167, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U135, 1 );
        ATTACH_OBJECT_TO_PED( l_U135, sub_1374(), 1232, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0 );
        l_U110 = 1;
    }
    else
    {
        GET_CHAR_ANIM_CURRENT_TIME( sub_1374(), l_U168, "throw_right", ref fVar5 );
        if (fVar5 >= 0.59000000)
        {
            if (DOES_OBJECT_EXIST( l_U135 ))
            {
                if (IS_OBJECT_ATTACHED( l_U135 ))
                {
                    DETACH_OBJECT( l_U135, 1 );
                    GET_OBJECT_COORDINATES( l_U135, ref l_U158._fU0, ref l_U158._fU4, ref l_U158._fU8 );
                }
            }
            l_U158._fU8 += 0.10000000;
            if (IS_SCORE_GREATER( sub_576(), 9 ))
            {
                ADD_SCORE( sub_576(), -10 );
                l_U111 = 1;
            }
            l_U106 = 4;
        }
    }
    return;
}

void sub_5172()
{
    if (l_U111)
    {
        if (l_U110)
        {
            if (DOES_OBJECT_EXIST( l_U135 ))
            {
                if (IS_OBJECT_STATIC( l_U135 ))
                {
                    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U135 );
                    sub_5246();
                    sub_5363( 8, 10 );
                    l_U106 = 7;
                    SAY_AMBIENT_SPEECH( l_U120, "THANKS", 1, 0, 0 );
                }
            }
            else
            {
                l_U106 = 7;
            }
        }
        else
        {
            l_U106 = 7;
        }
    }
    if (NOT l_U111)
    {
        l_U106 = 7;
    }
    return;
}

void sub_5246()
{
    g_U9306++;
    if (g_U9306 >= 3)
    {
        sub_5282( 36 );
        sub_5282( 37 );
        g_U9306 -= 3;
    }
    SET_CHAR_HEALTH( sub_1374(), 200 );
    return;
}

void sub_5282(int iParam0)
{
    SET_BIT( ref g_U95._fU412, iParam0 - 11 );
    return;
}

void sub_5363(unknown uParam0, unknown uParam1)
{
    sub_5384( uParam0, uParam1, 0.00000000, "" );
    return;
}

void sub_5384(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_5963()
{
    if (IS_KEYBOARD_KEY_PRESSED( 31 ))
    {
        l_U107 = 0;
    }
    return;
}
