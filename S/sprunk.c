void main()
{
    l_U0 = 0;
    l_U1 = 0;
    l_U105 = 0.40000000;
    l_U106 = 0;
    l_U110 = 0;
    l_U112 = 0;
    l_U113 = 0;
    l_U125 = -1;
    l_U132 = "buy_drink";
    l_U133 = "AMB@sprunk_plyr";
    l_U137 = -1218270655;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_119();
    }
    sub_615( l_U142 );
    while (true)
    {
        WAIT( 0 );
        if (IS_PLAYER_PLAYING( sub_480() ))
        {
            if (DOES_OBJECT_EXIST( l_U142 ))
            {
                if (IS_OBJECT_UPRIGHT( l_U142, 5 ))
                {
                    if (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U142 ))
                    {
                        switch (l_U112)
                        {
                            case 0:
                            if (HAVE_ANIMS_LOADED( l_U133 ))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_3D( sub_1002(), l_U120._fU0, l_U120._fU4, l_U120._fU8, 1.50000000, 1.50000000, 1.50000000, 0 ))
                                {
                                    if (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_480() ))
                                    {
                                        if (IS_CHAR_ON_FOOT( sub_1002() ))
                                        {
                                            GET_INTERIOR_FROM_CHAR( sub_1002(), ref l_U139 );
                                            GET_KEY_FOR_CHAR_IN_ROOM( sub_1002(), ref l_U127 );
                                            GET_ROOM_KEY_FROM_OBJECT( l_U142, ref l_U126 );
                                            GET_GAME_VIEWPORT_ID( ref l_U141 );
                                            if ((l_U126 != 0) AND (l_U126 != -1))
                                            {
                                                GET_KEY_FOR_VIEWPORT_IN_ROOM( l_U141, ref l_U128 );
                                            }
                                            else
                                            {
                                                l_U128 = l_U126;
                                            }
                                            if ((l_U127 != 0) AND (l_U127 != -1))
                                            {
                                                GET_INTERIOR_AT_COORDS( l_U117._fU0, l_U117._fU4, l_U117._fU8, ref l_U140 );
                                            }
                                            else
                                            {
                                                l_U126 = l_U127;
                                                l_U140 = l_U139;
                                            }
                                            if (l_U127 == l_U126)
                                            {
                                                if (l_U139 == l_U140)
                                                {
                                                    sub_806();
                                                    if (l_U128 == l_U126)
                                                    {
                                                        if (sub_1368( 2, 0 ))
                                                        {
                                                            if (sub_1658( 2, l_U135, 0 ))
                                                            {
                                                                if (IS_SCORE_GREATER( sub_480(), 1 ))
                                                                {
                                                                    if (HAS_MODEL_LOADED( l_U137 ))
                                                                    {
                                                                        CREATE_OBJECT( l_U137, l_U120._fU0, l_U120._fU4 + 0.60000000, l_U120._fU8, ref l_U138, 1 );
                                                                    }
                                                                    REMOVE_PED_HELMET( sub_1002(), 1 );
                                                                    if (l_U127 != 0)
                                                                    {
                                                                        if (l_U127 != -1)
                                                                        {
                                                                            ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U138, l_U127 );
                                                                        }
                                                                    }
                                                                    if (DOES_OBJECT_EXIST( l_U138 ))
                                                                    {
                                                                        SET_OBJECT_VISIBLE( l_U138, 0 );
                                                                    }
                                                                    l_U112 = 1;
                                                                }
                                                                else
                                                                {
                                                                    sub_2471( "FAIL_TRAN", 3000, 0 );
                                                                }
                                                            }
                                                        }
                                                        else
                                                        {
                                                            sub_200( 2, "sprunk_act" );
                                                            sub_200( 2, "classprunk_act" );
                                                        }
                                                    }
                                                    else
                                                    {
                                                        sub_200( 2, "sprunk_act" );
                                                        sub_200( 2, "classprunk_act" );
                                                    }
                                                }
                                                else
                                                {
                                                    sub_200( 2, "sprunk_act" );
                                                    sub_200( 2, "classprunk_act" );
                                                }
                                            }
                                            else
                                            {
                                                sub_200( 2, "sprunk_act" );
                                                sub_200( 2, "classprunk_act" );
                                            }
                                        }
                                        else
                                        {
                                            sub_200( 2, "sprunk_act" );
                                            sub_200( 2, "classprunk_act" );
                                        }
                                    }
                                    else
                                    {
                                        sub_200( 2, "sprunk_act" );
                                        sub_200( 2, "classprunk_act" );
                                    }
                                }
                                else
                                {
                                    sub_200( 2, "sprunk_act" );
                                    sub_200( 2, "classprunk_act" );
                                }
                            }
                            else
                            {
                                sub_200( 2, "sprunk_act" );
                                sub_200( 2, "classprunk_act" );
                            }
                            break;
                            case 1:
                            sub_2914( l_U142 );
                            break;
                            case 3:
                            sub_5027();
                            GET_GAME_TIMER( ref l_U129 );
                            l_U112 = 2;
                            break;
                            case 2:
                            GET_GAME_TIMER( ref l_U130 );
                            l_U131 = l_U130 - l_U129;
                            if (l_U131 > 1000)
                            {
                                l_U112 = 0;
                            }
                            break;
                            case 4: break;
                        }
                    }
                    else if (l_U112 == 1)
                    {
                        if (IS_PLAYER_PLAYING( sub_480() ))
                        {
                            CLEAR_CHAR_TASKS( sub_1002() );
                            sub_3033( 1 );
                        }
                    }
                    sub_119();;
                }
                else if (l_U112 == 1)
                {
                    if (IS_PLAYER_PLAYING( sub_480() ))
                    {
                        CLEAR_CHAR_TASKS( sub_1002() );
                        sub_3033( 1 );
                    }
                }
                sub_119();;
            }
            else if (l_U112 == 1)
            {
                if (IS_PLAYER_PLAYING( sub_480() ))
                {
                    CLEAR_CHAR_TASKS( sub_1002() );
                    sub_3033( 1 );
                }
            }
            sub_119();;
        }
        else if (l_U112 == 1)
        {
            if (IS_PLAYER_PLAYING( sub_480() ))
            {
                CLEAR_CHAR_TASKS( sub_1002() );
                sub_3033( 1 );
            }
        }
        sub_119();;
    }
    return;
}

void sub_119()
{
    if (DOES_OBJECT_EXIST( l_U138 ))
    {
        if (IS_OBJECT_ATTACHED( l_U138 ))
        {
            DETACH_OBJECT( l_U138, 1 );
        }
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U138 );
    }
    sub_200( 2, "sprunk_act" );
    sub_200( 2, "classprunk_act" );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_200(int iParam0, string sParam1)
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
            if ((g_U9172 == iParam0) AND (l_U104))
            {
                StrCopy( ref g_U9174, "", 16 );
                g_U9172 = 0;
                g_U9173 = 0;
                g_U9178 = nil;
                l_U104 = 0;
                if (l_U102)
                {
                    sub_427();
                    l_U102 = 0;
                }
            }
            if (l_U103)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_480(), 1 );
                l_U103 = 0;
            }
            if (l_U101)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U101 = 0;
            }
        }
    }
    return;
}

void sub_427()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_480()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_615(unknown uParam0)
{
    REQUEST_ANIMS( l_U133 );
    REQUEST_MODEL( l_U137 );
    while (NOT (HAS_MODEL_LOADED( l_U137 )))
    {
        WAIT( 0 );
    }
    sub_679();
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OBJECT_HEALTH( uParam0, ref l_U115 );
        GET_OBJECT_COORDINATES( uParam0, ref l_U117._fU0, ref l_U117._fU4, ref l_U117._fU8 );
        GET_OBJECT_HEADING( uParam0, ref l_U123 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, -1.18000000, 0.00000000, ref l_U120._fU0, ref l_U120._fU4, ref l_U120._fU8 );
    }
    sub_806();
    return;
}

void sub_679()
{
    return;
}

void sub_806()
{
    l_U135 = "sprunk_act";
    return;
}

void sub_1002()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1368(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_480() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_480() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_480() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9202)))
                {
                    if (NOT sub_1464())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_1002() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_1549())
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

int sub_1464()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_1549()
{
    return sub_1560( 0, 0 );
}

int sub_1560(boolean bParam0, unknown uParam1)
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

int sub_1658(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_1368( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U103)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_480(), 0 );
                l_U103 = 1;
            }
            g_U9172 = uParam0;
            l_U104 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_1939();
                l_U102 = 1;
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
                            l_U101 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U101)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U101 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_1939()
{
    return sub_1560( 1, 1 );
}

int sub_2471(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT IS_MESSAGE_BEING_DISPLAYED())
    {
        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( uParam2 );
        PRINT_NOW( uParam0, uParam1, 1 );
        return 1;
    }
    return 0;
}

void sub_2914(unknown uParam0)
{
    switch (l_U113)
    {
        case 0:
        if (IS_PLAYER_PLAYING( sub_480() ))
        {
            sub_3033( 0 );
        }
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, -1.18000000, 0.00000000, ref l_U120._fU0, ref l_U120._fU4, ref l_U120._fU8 );
        TASK_CHAR_SLIDE_TO_COORD_HDG_RATE( sub_1002(), l_U120._fU0, l_U120._fU4, l_U120._fU8, l_U123, 1.00000000, 270.00000000 );
        l_U113 = 1;
        break;
        case 1:
        if (sub_3192())
        {
            l_U113 = 9;
        }
        GET_SCRIPT_TASK_STATUS( sub_1002(), 68, ref l_U134 );
        if (l_U134 == 7)
        {
            l_U113 = 2;
        }
        break;
        case 2:
        sub_3411();
        l_U134 = 0;
        l_U113 = 3;
        break;
        case 3:
        l_U113 = 4;
        break;
        case 4:
        TASK_PLAY_ANIM( sub_1002(), l_U132, l_U133, 8.00000000, 0, 0, 0, 1, -2 );
        l_U134 = 0;
        l_U113 = 5;
        break;
        case 5:
        if (IS_CHAR_PLAYING_ANIM( sub_1002(), l_U133, l_U132 ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_1002(), l_U133, l_U132, ref l_U114 );
        }
        else if (DOES_OBJECT_EXIST( l_U138 ))
        {
            if (IS_OBJECT_ATTACHED( l_U138 ))
            {
                DETACH_OBJECT( l_U138, 1 );
            }
            DELETE_OBJECT( ref l_U138 );
        }
        l_U113 = 9;;
        if (l_U114 > 0.64700000)
        {
            if (DOES_OBJECT_EXIST( l_U138 ))
            {
                if (NOT (IS_OBJECT_ATTACHED( l_U138 )))
                {
                    ATTACH_OBJECT_TO_PED( l_U138, sub_1002(), 1232, 0.20000000, 0, -0.02000000, 0.04000000, -0.20000000, 2.28000000, 0 );
                }
                SET_OBJECT_VISIBLE( l_U138, 1 );
                l_U113 = 6;
            }
        }
        break;
        case 6:
        if (IS_CHAR_PLAYING_ANIM( sub_1002(), l_U133, l_U132 ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_1002(), l_U133, l_U132, ref l_U114 );
        }
        if ((l_U114 > 0.98000000) || (NOT (IS_CHAR_PLAYING_ANIM( sub_1002(), l_U133, l_U132 ))))
        {
            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( sub_1002(), "PARTIAL_DRINK", l_U133, 1.00000000, 0, 0, 0, 0, -2 );
            sub_3033( 1 );
            ADD_SCORE( sub_480(), -1 );
            INCREMENT_INT_STAT_NO_MESSAGE( 374, 1 );
            sub_4024( 0, 1 );
            SET_CHAR_HEALTH( sub_1002(), sub_4434() );
            sub_4520();
            l_U113 = 7;
        }
        break;
        case 7:
        if (IS_CHAR_PLAYING_ANIM( sub_1002(), l_U133, "PARTIAL_DRINK" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_1002(), l_U133, "PARTIAL_DRINK", ref l_U114 );
        }
        else if (DOES_OBJECT_EXIST( l_U138 ))
        {
            if (IS_OBJECT_ATTACHED( l_U138 ))
            {
                DETACH_OBJECT( l_U138, 1 );
            }
            DELETE_OBJECT( ref l_U138 );
        }
        l_U113 = 9;;
        if (l_U114 > 0.87000000)
        {
            if (DOES_OBJECT_EXIST( l_U138 ))
            {
                if (IS_OBJECT_ATTACHED( l_U138 ))
                {
                    DETACH_OBJECT( l_U138, 1 );
                }
                MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U138 );
                l_U138 = nil;
                GET_GAME_TIMER( ref l_U129 );
                if (NOT (IS_CONTROL_PRESSED( 2, 2 )))
                {
                    CLEAR_CHAR_TASKS( sub_1002() );
                }
                l_U113 = 8;
            }
        }
        break;
        case 8:
        l_U113 = 9;
        break;
        case 9:
        if (DOES_OBJECT_EXIST( l_U138 ))
        {
            if (IS_OBJECT_ATTACHED( l_U138 ))
            {
                DETACH_OBJECT( l_U138, 1 );
            }
            DELETE_OBJECT( ref l_U138 );
        }
        if (IS_PLAYER_PLAYING( sub_480() ))
        {
            sub_3033( 1 );
        }
        sub_200( 2, "sprunk_act" );
        sub_200( 2, "classprunk_act" );
        l_U113 = 0;
        GET_GAME_TIMER( ref l_U129 );
        l_U112 = 3;
        break;
    }
    return;
}

void sub_3033(int iParam0)
{
    if (iParam0 == 0)
    {
        SET_PLAYER_CONTROL( sub_480(), 0 );
    }
    else
    {
        SET_PLAYER_CONTROL( sub_480(), 1 );
    }
    return;
}

int sub_3192()
{
    if (((((IS_BUTTON_PRESSED( 0, 17 )) || (IS_BUTTON_PRESSED( 0, 14 ))) || (IS_BUTTON_PRESSED( 0, 15 ))) || (IS_BUTTON_PRESSED( 0, 16 ))) || (sub_3240()))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1002() );
        SET_PLAYER_CONTROL( sub_480(), 1 );
        return 1;
    }
    return 0;
}

int sub_3240()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar2, ref iVar3, ref uVar4, ref uVar5 );
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

void sub_3411()
{
    if (NOT (IS_CHAR_DEAD( sub_1002() )))
    {
        GET_CURRENT_CHAR_WEAPON( sub_1002(), ref l_U110 );
        if (l_U110 == 46)
        {
            REMOVE_WEAPON_FROM_CHAR( sub_1002(), 46 );
            SET_CURRENT_CHAR_WEAPON( sub_1002(), 0, 1 );
        }
        if (l_U110 != 0)
        {
            SET_CURRENT_CHAR_WEAPON( sub_1002(), 0, 1 );
        }
    }
    return;
}

void sub_4024(unknown uParam0, unknown uParam1)
{
    sub_4045( uParam0, uParam1, 0.00000000, "" );
    return;
}

void sub_4045(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_4434()
{
    int Result;

    if (NOT (IS_CHAR_DEAD( sub_1002() )))
    {
        GET_CHAR_HEALTH( sub_1002(), ref Result );
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

void sub_4520()
{
    if (NOT (IS_CHAR_DEAD( sub_1002() )))
    {
        RESET_VISIBLE_PED_DAMAGE( sub_1002() );
    }
    return;
}

void sub_5027()
{
    if (NOT (IS_CHAR_DEAD( sub_1002() )))
    {
        if (l_U110 != 0)
        {
            if (l_U110 != 46)
            {
                SET_CURRENT_CHAR_WEAPON( sub_1002(), l_U110, 0 );
            }
            else
            {
                REMOVE_WEAPON_FROM_CHAR( sub_1002(), 46 );
            }
        }
    }
    return;
}
