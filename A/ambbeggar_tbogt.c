void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U104 = 0;
    l_U105 = 0;
    l_U106 = 1;
    l_U107 = 0;
    l_U108 = 0;
    l_U109 = 0;
    l_U110 = 0;
    l_U111 = 0;
    l_U112 = 0;
    l_U117 = -525076767;
    l_U136 = 0;
    l_U141 = "amb@beg_standing";
    StrCopy( ref l_U142, "BEG11", 16 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_145();
    }
    WAIT( 0 );
    l_U113 = l_U149;
    sub_752();
    if (g_U9272)
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambbeggar" )) == 1)
        {
            if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambPimpNpros" )) == 0)
            {
                g_U9272 = 0;
            }
        }
    }
    if (NOT l_U106)
    {
        l_U112 = 1;
    }
    while (l_U106)
    {
        WAIT( 0 );
        if (sub_1072())
        {
            switch (l_U104)
            {
                case 0:
                sub_1476();
                break;
                case 1:
                sub_1596();
                break;
                case 2:
                if (l_U111)
                {
                    sub_6493();
                }
                break;
                default: break;
            }
        }
        else
        {
            l_U106 = 0;
        }
        sub_6624();
    }
    if (l_U107)
    {
        if (DOES_CHAR_EXIST( l_U113 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U113 )))
            {
                SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U113, 1 );
            }
        }
        g_U9272 = 0;
    }
    sub_145();
    return;
}

void sub_145()
{
    if (NOT l_U112)
    {
        if (NOT (IS_CHAR_INJURED( l_U113 )))
        {
            CLEAR_CHAR_TASKS( l_U113 );
            CLEAR_CHAR_SECONDARY_TASK( l_U113 );
        }
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U113 );
    if (DOES_OBJECT_EXIST( l_U140 ))
    {
        if (IS_OBJECT_ATTACHED( l_U140 ))
        {
            DETACH_OBJECT( l_U140, 0 );
            DELETE_OBJECT( ref l_U140 );
        }
    }
    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U140 );
    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U114 );
    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U115 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U117 );
    REMOVE_ANIMS( l_U141 );
    sub_338( 2, ref l_U142 );
    if (l_U111 == 1)
    {
        REMOVE_TEMPORARY_RADAR_BLIPS_FOR_PICKUPS();
        l_U111 = 0;
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_338(int iParam0, string sParam1)
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
                    sub_559();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_608(), 1 );
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

void sub_559()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_608()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_752()
{
    int iVar2;

    if (DOES_CHAR_EXIST( l_U113 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U113 )))
        {
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U113, 1 );
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U113 )))
    {
        if (NOT (IS_CHAR_USING_SCENARIO( l_U113, "Scenario_LayingDruggie" )))
        {
            GET_CHAR_COORDINATES( l_U113, ref l_U118._fU0, ref l_U118._fU4, ref l_U118._fU8 );
            GET_INTERIOR_FROM_CHAR( l_U113, ref iVar2 );
            if (NOT (iVar2 == nil))
            {
                l_U110 = 1;
            }
        }
        else
        {
            l_U106 = 0;
            l_U104 = 2;
        }
    }
    else
    {
        l_U106 = 0;
    }
    return;
}

int sub_1072()
{
    int iVar2;

    if (DOES_CHAR_EXIST( l_U113 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U113 )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( l_U113 )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_1134() )))
                {
                    if ((NOT g_U12379) AND (NOT sub_1194()))
                    {
                        if (IS_PLAYER_CONTROL_ON( sub_608() ))
                        {
                            GET_INTERIOR_FROM_CHAR( sub_1134(), ref iVar2 );
                            if (NOT (iVar2 == nil))
                            {
                                if (NOT l_U110)
                                {
                                    return 0;
                                }
                            }
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void sub_1134()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1194()
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

void sub_1476()
{
    REQUEST_ANIMS( l_U141 );
    REQUEST_MODEL( l_U117 );
    if ((NOT (HAVE_ANIMS_LOADED( l_U141 ))) || (NOT (HAS_MODEL_LOADED( l_U117 ))))
    {
        ;
    }
    else
    {
        l_U104 = 1;
    }
    if (NOT (IS_CHAR_DEAD( l_U113 )))
    {
        SET_CHAR_MONEY( l_U113, 0 );
    }
    return;
}

void sub_1596()
{
    if (NOT (l_U105 == 9))
    {
        sub_1618();
    }
    switch (l_U105)
    {
        case 0:
        if ((IS_SCORE_GREATER( sub_608(), 9 )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_608(), 0 ))))
        {
            l_U105 = 1;
        }
        else
        {
            l_U104 = 2;
        }
        break;
        case 1:
        if (NOT g_U9272)
        {
            if ((LOCATE_CHAR_ON_FOOT_CHAR_3D( l_U113, sub_1134(), 10.00000000, 10.00000000, 2.00000000, 0 )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_608(), 0 ))))
            {
                sub_1900();
            }
        }
        break;
        case 2:
        MODIFY_CHAR_MOVE_STATE( l_U113, 2 );
        if (LOCATE_CHAR_ON_FOOT_CHAR_3D( l_U113, sub_1134(), 15.00000000, 15.00000000, 2.00000000, 0 ))
        {
            GET_SCRIPT_TASK_STATUS( l_U113, 29, ref l_U137 );
            if (l_U137 == 1)
            {
                GET_SEQUENCE_PROGRESS( l_U113, ref l_U138 );
                if (l_U138 > 0)
                {
                    sub_2182();
                }
            }
        }
        else
        {
            l_U105 = 10;
        }
        break;
        case 3:
        MODIFY_CHAR_MOVE_STATE( l_U113, 2 );
        GET_SCRIPT_TASK_STATUS( l_U113, 29, ref l_U137 );
        if (l_U137 == 7)
        {
            sub_2401();
        }
        break;
        case 4:
        if (LOCATE_CHAR_ON_FOOT_CHAR_3D( l_U113, sub_1134(), 5.00000000, 5.00000000, 2.00000000, 0 ))
        {
            sub_2642();
        }
        else
        {
            CLEAR_CHAR_TASKS( l_U113 );
            CLEAR_CHAR_SECONDARY_TASK( l_U113 );
            sub_338( 2, ref l_U142 );
            l_U105 = 10;
        }
        break;
        case 5:
        GET_SCRIPT_TASK_STATUS( sub_1134(), 102, ref l_U137 );
        if (l_U137 == 7)
        {
            sub_4685();
        }
        break;
        case 6:
        sub_5207();
        break;
        case 7:
        sub_5537();
        break;
        case 8:
        GET_SCRIPT_TASK_STATUS( l_U113, 29, ref l_U137 );
        if (l_U137 == 7)
        {
            l_U105 = 10;
        }
        break;
        case 9:
        if (l_U111)
        {
            if (IS_PED_IN_COMBAT( l_U113 ))
            {
                REMOVE_TEMPORARY_RADAR_BLIPS_FOR_PICKUPS();
                l_U111 = 0;
            }
        }
        l_U105 = 10;
        break;
        case 10:
        if (l_U111)
        {
            sub_6493();
        }
        l_U104 = 2;
        break;
    }
    return;
}

void sub_1618()
{
    if ((IS_PED_IN_COMBAT( l_U113 )) || (IS_PED_IN_COMBAT( sub_1134() )))
    {
        sub_338( 2, ref l_U142 );
        l_U105 = 9;
    }
    return;
}

void sub_1900()
{
    SAY_AMBIENT_SPEECH( l_U113, "Generic_Hi", 0, 0, 0 );
    g_U9272 = 1;
    l_U107 = 1;
    SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U113, 0 );
    OPEN_SEQUENCE_TASK( ref l_U116 );
    TASK_GO_TO_CHAR( 0, sub_1134(), -1, 2.00000000 );
    TASK_STAND_STILL( 0, -2 );
    CLOSE_SEQUENCE_TASK( l_U116 );
    TASK_PERFORM_SEQUENCE( l_U113, l_U116 );
    CLEAR_SEQUENCE_TASK( l_U116 );
    l_U105 = 2;
    MODIFY_CHAR_MOVE_STATE( l_U113, 2 );
    return;
}

void sub_2182()
{
    SAY_AMBIENT_SPEECH( l_U113, "Solicit", 0, 0, 0 );
    CLEAR_CHAR_TASKS( l_U113 );
    OPEN_SEQUENCE_TASK( ref l_U116 );
    TASK_GO_TO_CHAR( 0, sub_1134(), -1, 2.00000000 );
    if (HAVE_ANIMS_LOADED( l_U141 ))
    {
        ;
    }
    CLOSE_SEQUENCE_TASK( l_U116 );
    TASK_PERFORM_SEQUENCE( l_U113, l_U116 );
    CLEAR_SEQUENCE_TASK( l_U116 );
    MODIFY_CHAR_MOVE_STATE( l_U113, 2 );
    l_U105 = 3;
    return;
}

void sub_2401()
{
    OPEN_SEQUENCE_TASK( ref l_U116 );
    if (HAVE_ANIMS_LOADED( l_U141 ))
    {
        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "WALK_HASSLE_MONEY", l_U141, 12.00000000, 1, 0, 0, 0, -1 );
    }
    TASK_GO_TO_CHAR( 0, sub_1134(), -1, 2.00000000 );
    TASK_STAND_STILL( 0, -2 );
    SET_SEQUENCE_TO_REPEAT( l_U116, 1 );
    CLOSE_SEQUENCE_TASK( l_U116 );
    TASK_PERFORM_SEQUENCE( l_U113, l_U116 );
    CLEAR_SEQUENCE_TASK( l_U116 );
    GET_GAME_TIMER( ref l_U131 );
    GET_GAME_TIMER( ref l_U133 );
    l_U105 = 4;
    return;
}

void sub_2642()
{
    MODIFY_CHAR_MOVE_STATE( l_U113, 2 );
    if (sub_2666( 2, 0 ))
    {
        if (sub_2955( 2, ref l_U142, 0 ))
        {
            sub_338( 2, ref l_U142 );
            SAY_AMBIENT_SPEECH( l_U113, "THANKS", 0, 0, 0 );
            if (HAVE_ANIMS_LOADED( l_U141 ))
            {
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( sub_1134(), "throw_right", l_U141, 12.00000000, 0, 0, 0, 0, -1 );
            }
            l_U105 = 5;
        }
        else
        {
            GET_GAME_TIMER( ref l_U134 );
            l_U135 = l_U134 - l_U131;
            if (l_U135 >= 15000)
            {
                SAY_AMBIENT_SPEECH( l_U113, "SOLICIT_TURNED_DOWN", 0, 0, 0 );
                CLEAR_CHAR_TASKS( l_U113 );
                CLEAR_CHAR_SECONDARY_TASK( l_U113 );
                sub_338( 2, ref l_U142 );
                CLEAR_CHAR_TASKS( l_U113 );
                OPEN_SEQUENCE_TASK( ref l_U116 );
                if (HAVE_ANIMS_LOADED( l_U141 ))
                {
                    TASK_PLAY_ANIM( 0, "crazy_rant_01", l_U141, 12.00000000, 0, 0, 0, 0, -1 );
                }
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U118._fU0, l_U118._fU4, l_U118._fU8, 2, -2, 1.00000000 );
                CLOSE_SEQUENCE_TASK( l_U116 );
                TASK_PERFORM_SEQUENCE( l_U113, l_U116 );
                CLEAR_SEQUENCE_TASK( l_U116 );
                l_U105 = 8;
            }
            else
            {
                l_U135 = l_U134 - l_U133;
                if (l_U135 >= 5000)
                {
                    GET_GAME_TIMER( ref l_U133 );
                }
                GET_SCRIPT_TASK_STATUS( l_U113, 29, ref l_U137 );
                if (l_U137 == 1)
                {
                    GET_SEQUENCE_PROGRESS( l_U113, ref l_U138 );
                    if (l_U138 > 1)
                    {
                        GET_CHAR_COORDINATES( l_U113, ref l_U121._fU0, ref l_U121._fU4, ref l_U121._fU8 );
                        GET_CHAR_COORDINATES( sub_1134(), ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
                        GET_DISTANCE_BETWEEN_COORDS_3D( l_U121._fU0, l_U121._fU4, l_U121._fU8, l_U124._fU0, l_U124._fU4, l_U124._fU8, ref l_U130 );
                        if (l_U130 > 5.00000000)
                        {
                            OPEN_SEQUENCE_TASK( ref l_U116 );
                            if (HAVE_ANIMS_LOADED( l_U141 ))
                            {
                                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "WALK_HASSLE_MONEY", l_U141, 12.00000000, 1, 0, 0, 0, -1 );
                            }
                            TASK_GO_TO_CHAR( 0, sub_1134(), -1, 2.00000000 );
                            SET_SEQUENCE_TO_REPEAT( l_U116, 1 );
                            CLOSE_SEQUENCE_TASK( l_U116 );
                            TASK_PERFORM_SEQUENCE( l_U113, l_U116 );
                            CLEAR_SEQUENCE_TASK( l_U116 );
                        }
                    }
                }
            }
        }
    }
    else
    {
        sub_338( 2, ref l_U142 );
        GET_GAME_TIMER( ref l_U134 );
        l_U135 = l_U134 - l_U131;
        if (l_U135 >= 15000)
        {
            SAY_AMBIENT_SPEECH( l_U113, "SOLICIT_TURNED_DOWN", 0, 0, 0 );
            CLEAR_CHAR_TASKS( l_U113 );
            CLEAR_CHAR_SECONDARY_TASK( l_U113 );
            CLEAR_CHAR_TASKS( l_U113 );
            OPEN_SEQUENCE_TASK( ref l_U116 );
            if (HAVE_ANIMS_LOADED( l_U141 ))
            {
                TASK_PLAY_ANIM( 0, "crazy_rant_01", l_U141, 12.00000000, 0, 0, 0, 0, -1 );
            }
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U118._fU0, l_U118._fU4, l_U118._fU8, 2, -2, 1.00000000 );
            CLOSE_SEQUENCE_TASK( l_U116 );
            TASK_PERFORM_SEQUENCE( l_U113, l_U116 );
            CLEAR_SEQUENCE_TASK( l_U116 );
            l_U105 = 8;
        }
    }
    return;
}

int sub_2666(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_608() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_608() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_608() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9200)))
                {
                    if (NOT sub_2762())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_1134() )) == nil)
                        {
                            if (g_U10534 <= iParam0)
                            {
                                if (g_U10535 == 0)
                                {
                                    if (sub_2847())
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

int sub_2762()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_2847()
{
    return sub_2858( 0, 0 );
}

int sub_2858(boolean bParam0, unknown uParam1)
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

int sub_2955(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_2666( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_608(), 0 );
                l_U4 = 1;
            }
            g_U10534 = uParam0;
            l_U5 = 1;
            StrCopy( ref g_U10536, sParam1, 16 );
            g_U10540 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_3230();
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

void sub_3230()
{
    return sub_2858( 1, 1 );
}

void sub_4685()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    float fVar5;

    if (NOT (IS_CHAR_PLAYING_ANIM( sub_1134(), l_U141, "throw_right" )))
    {
        if (DOES_OBJECT_EXIST( l_U140 ))
        {
            if (IS_OBJECT_ATTACHED( l_U140 ))
            {
                DETACH_OBJECT( l_U140, 1 );
                GET_OBJECT_COORDINATES( l_U140, ref l_U127._fU0, ref l_U127._fU4, ref l_U127._fU8 );
            }
        }
        l_U127._fU8 += 0.10000000;
        if (IS_SCORE_GREATER( sub_608(), 9 ))
        {
            ADD_SCORE( sub_608(), -10 );
            l_U108 = 1;
        }
        sub_338( 2, ref l_U142 );
        l_U105 = 6;
    }
    else if (NOT l_U109)
    {
        GET_CHAR_COORDINATES( sub_1134(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        CREATE_OBJECT( l_U117, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U140, 1 );
        ATTACH_OBJECT_TO_PED( l_U140, sub_1134(), 1232, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0 );
        l_U109 = 1;
    }
    else
    {
        GET_CHAR_ANIM_CURRENT_TIME( sub_1134(), l_U141, "throw_right", ref fVar5 );
        if (fVar5 >= 0.59000000)
        {
            if (DOES_OBJECT_EXIST( l_U140 ))
            {
                if (IS_OBJECT_ATTACHED( l_U140 ))
                {
                    DETACH_OBJECT( l_U140, 1 );
                    GET_OBJECT_COORDINATES( l_U140, ref l_U127._fU0, ref l_U127._fU4, ref l_U127._fU8 );
                }
            }
            l_U127._fU8 += 0.10000000;
            if (IS_SCORE_GREATER( sub_608(), 9 ))
            {
                ADD_SCORE( sub_608(), -10 );
                l_U108 = 1;
            }
            l_U105 = 6;
        }
    }
    return;
}

void sub_5207()
{
    if (l_U108)
    {
        if (l_U109)
        {
            if (DOES_OBJECT_EXIST( l_U140 ))
            {
                if (IS_OBJECT_STATIC( l_U140 ))
                {
                    GET_OBJECT_COORDINATES( l_U140, ref l_U127._fU0, ref l_U127._fU4, ref l_U127._fU8 );
                    CREATE_MONEY_PICKUP( l_U127._fU0, l_U127._fU4, l_U127._fU8, 10, 1, ref l_U139 );
                    DELETE_OBJECT( ref l_U140 );
                    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U140 );
                    CLEAR_CHAR_TASKS( l_U113 );
                    CLEAR_CHAR_SECONDARY_TASK( l_U113 );
                    OPEN_SEQUENCE_TASK( ref l_U116 );
                    TASK_STAND_STILL( 0, 1000 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U127._fU0, l_U127._fU4, l_U127._fU8, 2, -2, 1.00000000 );
                    CLOSE_SEQUENCE_TASK( l_U116 );
                    TASK_PERFORM_SEQUENCE( l_U113, l_U116 );
                    CLEAR_SEQUENCE_TASK( l_U116 );
                    l_U105 = 7;
                }
            }
            else
            {
                l_U105 = 10;
            }
        }
        else
        {
            l_U105 = 10;
        }
    }
    if (NOT l_U108)
    {
        l_U105 = 10;
    }
    return;
}

void sub_5537()
{
    if (NOT (HAS_PICKUP_BEEN_COLLECTED( l_U139 )))
    {
        if (NOT (IS_CHAR_INJURED( l_U113 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U113, 29, ref l_U137 );
            if (l_U137 == 7)
            {
                SET_CHAR_RELATIONSHIP( l_U113, 1, 0 );
                REMOVE_PICKUP( l_U139 );
                SET_CHAR_MONEY( l_U113, 10 );
                INCREMENT_INT_STAT_NO_MESSAGE( 103, 10 );
                INCREMENT_INT_STAT_NO_MESSAGE( 304, 1 );
                sub_5674( 7, 10 );
                sub_6079();
                l_U105 = 10;
            }
        }
    }
    else
    {
        l_U105 = 10;
    }
    return;
}

void sub_5674(unknown uParam0, unknown uParam1)
{
    sub_5695( uParam0, uParam1, 0.00000000, "" );
    return;
}

void sub_5695(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_6079()
{
    int iVar2;
    int iVar3;
    int iVar4;

    g_U9304++;
    if (g_U9304 >= 3)
    {
        switch (g_U9305)
        {
            case 0:
            g_U9305 = 1;
            break;
            case 1:
            g_U9305 = 2;
            break;
            case 2:
            g_U9305 = 0;
            break;
        }
        CREATE_TEMPORARY_RADAR_BLIPS_FOR_PICKUPS_IN_AREA( l_U146, 200.00000000, g_U9305 );
        l_U111 = 1;
        GET_GAME_TIMER( ref l_U132 );
        g_U9304 -= 3;
    }
    iVar3 = 0;
    iVar4 = 0;
    GET_CURRENT_CHAR_WEAPON( sub_1134(), ref iVar2 );
    if (((iVar2 == 4) || (iVar2 == 5)) || (iVar2 == 18))
    {
        ADD_AMMO_TO_CHAR( sub_1134(), iVar2, 1 );
    }
    else
    {
        GET_MAX_AMMO_IN_CLIP( sub_1134(), iVar2, ref iVar3 );
        if (GET_AMMO_IN_CLIP( sub_1134(), iVar2, ref iVar4 ))
        {
            if (iVar4 < iVar3)
            {
                SET_AMMO_IN_CLIP( sub_1134(), iVar2, iVar3 );
            }
        }
    }
    return;
}

void sub_6493()
{
    GET_GAME_TIMER( ref l_U134 );
    l_U135 = l_U134 - l_U132;
    if (l_U135 >= 10000)
    {
        REMOVE_TEMPORARY_RADAR_BLIPS_FOR_PICKUPS();
        l_U111 = 0;
    }
    return;
}

void sub_6624()
{
    if (IS_KEYBOARD_KEY_PRESSED( 31 ))
    {
        l_U106 = 0;
    }
    return;
}
