void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 0;
    l_U107 = 0.40000000;
    l_U108 = 0;
    l_U112 = 0;
    l_U114 = 0;
    l_U115 = 0;
    l_U127 = -1;
    l_U134 = "buy_drink";
    l_U135 = "AMB@sprunk_plyr";
    l_U139 = -1218270655;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_135();
    }
    sub_631( l_U144 );
    while (true)
    {
        WAIT( 0 );
        if (IS_PLAYER_PLAYING( sub_496() ))
        {
            if (DOES_OBJECT_EXIST( l_U144 ))
            {
                if (IS_OBJECT_UPRIGHT( l_U144, 5 ))
                {
                    if (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U144 ))
                    {
                        switch (l_U114)
                        {
                            case 0:
                            if (HAVE_ANIMS_LOADED( l_U135 ))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_3D( sub_1018(), l_U122._fU0, l_U122._fU4, l_U122._fU8, 1.50000000, 1.50000000, 1.50000000, 0 ))
                                {
                                    if (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_496() ))
                                    {
                                        if (IS_CHAR_ON_FOOT( sub_1018() ))
                                        {
                                            GET_INTERIOR_FROM_CHAR( sub_1018(), ref l_U141 );
                                            GET_KEY_FOR_CHAR_IN_ROOM( sub_1018(), ref l_U129 );
                                            GET_ROOM_KEY_FROM_OBJECT( l_U144, ref l_U128 );
                                            GET_GAME_VIEWPORT_ID( ref l_U143 );
                                            if ((l_U128 != 0) AND (l_U128 != -1))
                                            {
                                                GET_KEY_FOR_VIEWPORT_IN_ROOM( l_U143, ref l_U130 );
                                            }
                                            else
                                            {
                                                l_U130 = l_U128;
                                            }
                                            if ((l_U129 != 0) AND (l_U129 != -1))
                                            {
                                                GET_INTERIOR_AT_COORDS( l_U119._fU0, l_U119._fU4, l_U119._fU8, ref l_U142 );
                                            }
                                            else
                                            {
                                                l_U128 = l_U129;
                                                l_U142 = l_U141;
                                            }
                                            if (l_U129 == l_U128)
                                            {
                                                if (l_U141 == l_U142)
                                                {
                                                    sub_822();
                                                    if (l_U130 == l_U128)
                                                    {
                                                        if (sub_1384( 2, 0 ))
                                                        {
                                                            if (sub_1674( 2, l_U137, 0 ))
                                                            {
                                                                if (IS_SCORE_GREATER( sub_496(), 0 ))
                                                                {
                                                                    SET_MINIGAME_IN_PROGRESS( 1 );
                                                                    if (HAS_MODEL_LOADED( l_U139 ))
                                                                    {
                                                                        CREATE_OBJECT( l_U139, l_U122._fU0, l_U122._fU4 + 0.60000000, l_U122._fU8, ref l_U140, 1 );
                                                                    }
                                                                    REMOVE_PED_HELMET( sub_1018(), 1 );
                                                                    if (l_U129 != 0)
                                                                    {
                                                                        if (l_U129 != -1)
                                                                        {
                                                                            ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U140, l_U129 );
                                                                        }
                                                                    }
                                                                    if (DOES_OBJECT_EXIST( l_U140 ))
                                                                    {
                                                                        SET_OBJECT_VISIBLE( l_U140, 0 );
                                                                    }
                                                                    l_U114 = 1;
                                                                }
                                                                else
                                                                {
                                                                    sub_2495( "FAIL_TRAN", 3000, 0 );
                                                                }
                                                            }
                                                        }
                                                        else
                                                        {
                                                            sub_216( 2, "sprunk_act" );
                                                            sub_216( 2, "classprunk_act" );
                                                        }
                                                    }
                                                    else
                                                    {
                                                        sub_216( 2, "sprunk_act" );
                                                        sub_216( 2, "classprunk_act" );
                                                    }
                                                }
                                                else
                                                {
                                                    sub_216( 2, "sprunk_act" );
                                                    sub_216( 2, "classprunk_act" );
                                                }
                                            }
                                            else
                                            {
                                                sub_216( 2, "sprunk_act" );
                                                sub_216( 2, "classprunk_act" );
                                            }
                                        }
                                        else
                                        {
                                            sub_216( 2, "sprunk_act" );
                                            sub_216( 2, "classprunk_act" );
                                        }
                                    }
                                    else
                                    {
                                        sub_216( 2, "sprunk_act" );
                                        sub_216( 2, "classprunk_act" );
                                    }
                                }
                                else
                                {
                                    sub_216( 2, "sprunk_act" );
                                    sub_216( 2, "classprunk_act" );
                                }
                            }
                            else
                            {
                                sub_216( 2, "sprunk_act" );
                                sub_216( 2, "classprunk_act" );
                            }
                            break;
                            case 1:
                            sub_2938( l_U144 );
                            break;
                            case 3:
                            sub_5073();
                            GET_GAME_TIMER( ref l_U131 );
                            l_U114 = 2;
                            break;
                            case 2:
                            GET_GAME_TIMER( ref l_U132 );
                            l_U133 = l_U132 - l_U131;
                            if (l_U133 > 1000)
                            {
                                SET_MINIGAME_IN_PROGRESS( 0 );
                                l_U114 = 0;
                            }
                            break;
                            case 4: break;
                        }
                    }
                    else if (l_U114 == 1)
                    {
                        if (IS_PLAYER_PLAYING( sub_496() ))
                        {
                            CLEAR_CHAR_TASKS( sub_1018() );
                            sub_3057( 1 );
                        }
                    }
                    sub_135();;
                }
                else if (l_U114 == 1)
                {
                    if (IS_PLAYER_PLAYING( sub_496() ))
                    {
                        CLEAR_CHAR_TASKS( sub_1018() );
                        sub_3057( 1 );
                    }
                }
                sub_135();;
            }
            else if (l_U114 == 1)
            {
                if (IS_PLAYER_PLAYING( sub_496() ))
                {
                    CLEAR_CHAR_TASKS( sub_1018() );
                    sub_3057( 1 );
                }
            }
            sub_135();;
        }
        else if (l_U114 == 1)
        {
            if (IS_PLAYER_PLAYING( sub_496() ))
            {
                CLEAR_CHAR_TASKS( sub_1018() );
                sub_3057( 1 );
            }
        }
        sub_135();;
    }
    return;
}

void sub_135()
{
    if (DOES_OBJECT_EXIST( l_U140 ))
    {
        if (IS_OBJECT_ATTACHED( l_U140 ))
        {
            DETACH_OBJECT( l_U140, 1 );
        }
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U140 );
    }
    sub_216( 2, "sprunk_act" );
    sub_216( 2, "classprunk_act" );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_216(int iParam0, string sParam1)
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
            if ((g_U10534 == iParam0) AND (l_U106))
            {
                StrCopy( ref g_U10536, "", 16 );
                g_U10534 = 0;
                g_U10535 = 0;
                g_U10540 = nil;
                l_U106 = 0;
                if (l_U104)
                {
                    sub_443();
                    l_U104 = 0;
                }
            }
            if (l_U105)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_496(), 1 );
                l_U105 = 0;
            }
            if (l_U103)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U103 = 0;
            }
        }
    }
    return;
}

void sub_443()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_496()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_631(unknown uParam0)
{
    REQUEST_ANIMS( l_U135 );
    REQUEST_MODEL( l_U139 );
    while (NOT (HAS_MODEL_LOADED( l_U139 )))
    {
        WAIT( 0 );
    }
    sub_695();
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OBJECT_HEALTH( uParam0, ref l_U117 );
        GET_OBJECT_COORDINATES( uParam0, ref l_U119._fU0, ref l_U119._fU4, ref l_U119._fU8 );
        GET_OBJECT_HEADING( uParam0, ref l_U125 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, -1.18000000, 0.00000000, ref l_U122._fU0, ref l_U122._fU4, ref l_U122._fU8 );
    }
    sub_822();
    return;
}

void sub_695()
{
    return;
}

void sub_822()
{
    l_U137 = "sprunk_act";
    return;
}

void sub_1018()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1384(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_496() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_496() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_496() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9200)))
                {
                    if (NOT sub_1480())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_1018() )) == nil)
                        {
                            if (g_U10534 <= iParam0)
                            {
                                if (g_U10535 == 0)
                                {
                                    if (sub_1565())
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

int sub_1480()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_1565()
{
    return sub_1576( 0, 0 );
}

int sub_1576(boolean bParam0, unknown uParam1)
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

int sub_1674(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_1384( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U105)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_496(), 0 );
                l_U105 = 1;
            }
            g_U10534 = uParam0;
            l_U106 = 1;
            StrCopy( ref g_U10536, sParam1, 16 );
            g_U10540 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_1955();
                l_U104 = 1;
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
                            l_U103 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U103)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U103 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_1955()
{
    return sub_1576( 1, 1 );
}

int sub_2495(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT IS_MESSAGE_BEING_DISPLAYED())
    {
        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( uParam2 );
        PRINT_NOW( uParam0, uParam1, 1 );
        return 1;
    }
    return 0;
}

void sub_2938(unknown uParam0)
{
    switch (l_U115)
    {
        case 0:
        if (IS_PLAYER_PLAYING( sub_496() ))
        {
            sub_3057( 0 );
        }
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, -1.18000000, 0.00000000, ref l_U122._fU0, ref l_U122._fU4, ref l_U122._fU8 );
        TASK_CHAR_SLIDE_TO_COORD_HDG_RATE( sub_1018(), l_U122._fU0, l_U122._fU4, l_U122._fU8, l_U125, 1.00000000, 270.00000000 );
        l_U115 = 1;
        break;
        case 1:
        if (sub_3216())
        {
            l_U115 = 9;
        }
        GET_SCRIPT_TASK_STATUS( sub_1018(), 68, ref l_U136 );
        if (l_U136 == 7)
        {
            l_U115 = 2;
        }
        break;
        case 2:
        sub_3457();
        l_U136 = 0;
        l_U115 = 3;
        break;
        case 3:
        l_U115 = 4;
        break;
        case 4:
        TASK_PLAY_ANIM( sub_1018(), l_U134, l_U135, 8.00000000, 0, 0, 0, 1, -2 );
        l_U136 = 0;
        l_U115 = 5;
        break;
        case 5:
        if (IS_CHAR_PLAYING_ANIM( sub_1018(), l_U135, l_U134 ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_1018(), l_U135, l_U134, ref l_U116 );
        }
        else if (DOES_OBJECT_EXIST( l_U140 ))
        {
            if (IS_OBJECT_ATTACHED( l_U140 ))
            {
                DETACH_OBJECT( l_U140, 1 );
            }
            DELETE_OBJECT( ref l_U140 );
        }
        l_U115 = 9;;
        if (l_U116 > 0.64700000)
        {
            if (DOES_OBJECT_EXIST( l_U140 ))
            {
                if (NOT (IS_OBJECT_ATTACHED( l_U140 )))
                {
                    ATTACH_OBJECT_TO_PED( l_U140, sub_1018(), 1232, 0.20000000, 0, -0.02000000, 0.04000000, -0.20000000, 2.28000000, 0 );
                }
                SET_OBJECT_VISIBLE( l_U140, 1 );
                l_U115 = 6;
            }
        }
        break;
        case 6:
        if (IS_CHAR_PLAYING_ANIM( sub_1018(), l_U135, l_U134 ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_1018(), l_U135, l_U134, ref l_U116 );
        }
        if ((l_U116 > 0.98000000) || (NOT (IS_CHAR_PLAYING_ANIM( sub_1018(), l_U135, l_U134 ))))
        {
            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( sub_1018(), "PARTIAL_DRINK", l_U135, 1.00000000, 0, 0, 0, 0, -2 );
            sub_3057( 1 );
            ADD_SCORE( sub_496(), -1 );
            INCREMENT_INT_STAT_NO_MESSAGE( 374, 1 );
            sub_4070( 0, 1 );
            SET_CHAR_HEALTH( sub_1018(), sub_4480() );
            sub_4566();
            l_U115 = 7;
        }
        break;
        case 7:
        if (IS_CHAR_PLAYING_ANIM( sub_1018(), l_U135, "PARTIAL_DRINK" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_1018(), l_U135, "PARTIAL_DRINK", ref l_U116 );
        }
        else if (DOES_OBJECT_EXIST( l_U140 ))
        {
            if (IS_OBJECT_ATTACHED( l_U140 ))
            {
                DETACH_OBJECT( l_U140, 1 );
            }
            DELETE_OBJECT( ref l_U140 );
        }
        l_U115 = 9;;
        if (l_U116 > 0.87000000)
        {
            if (DOES_OBJECT_EXIST( l_U140 ))
            {
                if (IS_OBJECT_ATTACHED( l_U140 ))
                {
                    DETACH_OBJECT( l_U140, 1 );
                }
                MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U140 );
                l_U140 = nil;
                GET_GAME_TIMER( ref l_U131 );
                if (NOT (IS_CONTROL_PRESSED( 2, 2 )))
                {
                    CLEAR_CHAR_TASKS( sub_1018() );
                }
                l_U115 = 8;
            }
        }
        break;
        case 8:
        l_U115 = 9;
        break;
        case 9:
        if (DOES_OBJECT_EXIST( l_U140 ))
        {
            if (IS_OBJECT_ATTACHED( l_U140 ))
            {
                DETACH_OBJECT( l_U140, 1 );
            }
            DELETE_OBJECT( ref l_U140 );
        }
        if (IS_PLAYER_PLAYING( sub_496() ))
        {
            sub_3057( 1 );
        }
        sub_216( 2, "sprunk_act" );
        sub_216( 2, "classprunk_act" );
        l_U115 = 0;
        GET_GAME_TIMER( ref l_U131 );
        l_U114 = 3;
        break;
    }
    return;
}

void sub_3057(int iParam0)
{
    if (iParam0 == 0)
    {
        SET_PLAYER_CONTROL( sub_496(), 0 );
    }
    else
    {
        SET_PLAYER_CONTROL( sub_496(), 1 );
    }
    return;
}

int sub_3216()
{
    if (((((IS_BUTTON_PRESSED( 0, 17 )) || (IS_BUTTON_PRESSED( 0, 14 ))) || (IS_BUTTON_PRESSED( 0, 15 ))) || (IS_BUTTON_PRESSED( 0, 16 ))) || (sub_3264()))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1018() );
        SET_PLAYER_CONTROL( sub_496(), 1 );
        return 1;
    }
    return 0;
}

int sub_3264()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar2, ref iVar3, ref uVar4, ref uVar5 );
    if (NOT IS_USING_CONTROLLER())
    {
        GET_KEYBOARD_MOVE_INPUT( ref iVar2, ref iVar3 );
    }
    if ((iVar2 > 100) || (iVar2 < 65436))
    {
        return 1;
    }
    if ((iVar3 > 100) || (iVar3 < 65436))
    {
        return 1;
    }
    return 0;
}

void sub_3457()
{
    if (NOT (IS_CHAR_DEAD( sub_1018() )))
    {
        GET_CURRENT_CHAR_WEAPON( sub_1018(), ref l_U112 );
        if (l_U112 == 46)
        {
            REMOVE_WEAPON_FROM_CHAR( sub_1018(), 46 );
            SET_CURRENT_CHAR_WEAPON( sub_1018(), 0, 1 );
        }
        if (l_U112 != 0)
        {
            SET_CURRENT_CHAR_WEAPON( sub_1018(), 0, 1 );
        }
    }
    return;
}

void sub_4070(unknown uParam0, unknown uParam1)
{
    sub_4091( uParam0, uParam1, 0.00000000, "" );
    return;
}

void sub_4091(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_4480()
{
    int Result;

    if (NOT (IS_CHAR_DEAD( sub_1018() )))
    {
        GET_CHAR_HEALTH( sub_1018(), ref Result );
        if (Result <= 150)
        {
            Result += 50;
        }
        else
        {
            Result = 200;
        }
    }
    return Result;
}

void sub_4566()
{
    if (NOT (IS_CHAR_DEAD( sub_1018() )))
    {
        RESET_VISIBLE_PED_DAMAGE( sub_1018() );
    }
    return;
}

void sub_5073()
{
    if (NOT (IS_CHAR_DEAD( sub_1018() )))
    {
        if (l_U112 != 0)
        {
            if (l_U112 != 46)
            {
                SET_CURRENT_CHAR_WEAPON( sub_1018(), l_U112, 0 );
            }
            else
            {
                REMOVE_WEAPON_FROM_CHAR( sub_1018(), 46 );
            }
        }
    }
    return;
}
