void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U6 = 0.40000000;
    l_U7 = 0;
    l_U8 = 0;
    l_U10 = 0;
    l_U32 = "atm_05";
    sub_59();
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_88();
    }
    if (DOES_OBJECT_EXIST( l_U41 ))
    {
        GET_OBJECT_COORDINATES( l_U41, ref l_U11._fU0, ref l_U11._fU4, ref l_U11._fU8 );
        GET_OBJECT_HEADING( l_U41, ref l_U33 );
    }
    while (true)
    {
        WAIT( 0 );
        if (DOES_OBJECT_EXIST( l_U41 ))
        {
            if (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U41 ))
            {
                if (IS_PLAYER_PLAYING( sub_462() ))
                {
                    switch (l_U10)
                    {
                        case 0:
                        if (LOCATE_CHAR_ON_FOOT_3D( sub_815(), l_U11._fU0, l_U11._fU4, l_U11._fU8, 20.00000000, 20.00000000, 6.00000000, 0 ))
                        {
                            l_U32 = "atm_05";
                            GET_OBJECT_MODEL( l_U41, ref l_U40 );
                            if (l_U40 == 943099328)
                            {
                                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U41, -0.60000000, 0, 0, ref l_U14._fU0, ref l_U14._fU4, ref l_U14._fU8 );
                                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U41, 0, 0, 0.68000000, ref l_U34._fU0, ref l_U34._fU4, ref l_U34._fU8 );
                            }
                            else if (l_U40 == 1646518682)
                            {
                                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U41, -0.60000000, 0, 0, ref l_U14._fU0, ref l_U14._fU4, ref l_U14._fU8 );
                                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U41, 0, 0, -0.01000000, ref l_U34._fU0, ref l_U34._fU4, ref l_U34._fU8 );
                            }
                            else if (l_U40 == -1707894766)
                            {
                                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U41, -0.60000000, 0, 0, ref l_U14._fU0, ref l_U14._fU4, ref l_U14._fU8 );
                                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U41, 0, 0, -0.01000000, ref l_U34._fU0, ref l_U34._fU4, ref l_U34._fU8 );
                            };;;
                            l_U10 = 1;
                        }
                        break;
                        case 1:
                        l_U10 = 2;
                        break;
                        case 2:
                        if (g_U9593 == 0)
                        {
                            if (LOCATE_CHAR_ON_FOOT_3D( sub_815(), l_U14._fU0, l_U14._fU4, l_U14._fU8, 0.60000000, 0.60000000, 2, 0 ))
                            {
                                if (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_462() ))
                                {
                                    STORE_WANTED_LEVEL( sub_462(), ref l_U38 );
                                    GET_INTERIOR_FROM_CHAR( sub_815(), ref l_U30 );
                                    GET_KEY_FOR_CHAR_IN_ROOM( sub_815(), ref l_U23 );
                                    GET_ROOM_KEY_FROM_OBJECT( l_U41, ref l_U24 );
                                    GET_GAME_VIEWPORT_ID( ref l_U31 );
                                    if ((l_U24 != 0) AND (l_U24 != -1))
                                    {
                                        GET_KEY_FOR_VIEWPORT_IN_ROOM( l_U31, ref l_U25 );
                                    }
                                    else
                                    {
                                        l_U25 = l_U24;
                                    }
                                    if ((l_U23 != 0) AND (l_U23 != -1))
                                    {
                                        GET_INTERIOR_AT_COORDS( l_U11._fU0, l_U11._fU4, l_U11._fU8, ref l_U29 );
                                    }
                                    else
                                    {
                                        l_U24 = l_U23;
                                        l_U29 = l_U30;
                                    }
                                    if (l_U23 == l_U24)
                                    {
                                        if (l_U30 == l_U29)
                                        {
                                            if (l_U25 == l_U24)
                                            {
                                                if (l_U38 == 0)
                                                {
                                                    if (sub_1513( 2, 0 ))
                                                    {
                                                        if (sub_1803( 2, l_U32, 0 ))
                                                        {
                                                            l_U32 = "atm_05";
                                                            GET_SCRIPT_RENDERTARGET_RENDER_ID( ref l_U17 );
                                                            SET_TEXT_RENDER_ID( l_U17 );
                                                            DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                                                            if (IS_PLAYER_PLAYING( sub_462() ))
                                                            {
                                                                SET_PLAYER_CONTROL( sub_462(), 0 );
                                                            }
                                                            SET_MINIGAME_IN_PROGRESS( 1 );
                                                            g_U9593 = 1;
                                                            l_U10 = 5;
                                                        }
                                                    }
                                                    else
                                                    {
                                                        sub_192( 2, "atm_05" );
                                                        sub_192( 2, "claatm_05" );
                                                        sub_192( 2, "ClaScpt_03" );
                                                        sub_192( 2, "ObjScpt_03" );
                                                    }
                                                }
                                                else
                                                {
                                                    sub_192( 2, "atm_05" );
                                                    sub_192( 2, "claatm_05" );
                                                    sub_192( 2, "ClaScpt_03" );
                                                    sub_192( 2, "ObjScpt_03" );
                                                }
                                            }
                                            else
                                            {
                                                sub_192( 2, "atm_05" );
                                                sub_192( 2, "claatm_05" );
                                                sub_192( 2, "ClaScpt_03" );
                                                sub_192( 2, "ObjScpt_03" );
                                            }
                                        }
                                        else
                                        {
                                            sub_192( 2, "atm_05" );
                                            sub_192( 2, "claatm_05" );
                                            sub_192( 2, "ClaScpt_03" );
                                            sub_192( 2, "ObjScpt_03" );
                                        }
                                    }
                                    else
                                    {
                                        sub_192( 2, "atm_05" );
                                        sub_192( 2, "claatm_05" );
                                        sub_192( 2, "ClaScpt_03" );
                                        sub_192( 2, "ObjScpt_03" );
                                    }
                                }
                                else
                                {
                                    sub_192( 2, "atm_05" );
                                    sub_192( 2, "claatm_05" );
                                    sub_192( 2, "ClaScpt_03" );
                                    sub_192( 2, "ObjScpt_03" );
                                }
                            }
                            else
                            {
                                sub_192( 2, "atm_05" );
                                sub_192( 2, "claatm_05" );
                                sub_192( 2, "ClaScpt_03" );
                                sub_192( 2, "ObjScpt_03" );
                            }
                        }
                        break;
                        case 5:
                        if (NOT sub_3063())
                        {
                            l_U10 = 3;
                        }
                        break;
                        case 3:
                        sub_3114();
                        sub_3241();
                        sub_3114();
                        sub_3314();
                        sub_3114();
                        sub_3901( l_U41 );
                        sub_3114();
                        sub_3314();
                        sub_3114();
                        sub_192( 2, "atm_05" );
                        sub_192( 2, "claatm_05" );
                        sub_192( 2, "ClaScpt_03" );
                        sub_192( 2, "ObjScpt_03" );
                        GET_GAME_TIMER( ref l_U19 );
                        STORE_SCORE( sub_462(), ref l_U18 );
                        sub_4431();
                        DISPLAY_TEXT( 0.50000000, 0.25000000, "atm_01" );
                        sub_4431();
                        DISPLAY_TEXT( 0.50000000, 0.40000000, "atm_02" );
                        sub_4431();
                        DISPLAY_TEXT_WITH_NUMBER( 0.50000000, 0.55000000, "atm_03", l_U18 );
                        sub_112( "atm_05" );
                        sub_4605( "ObjScpt_03", 0 );
                        l_U10 = 4;
                        break;
                        case 4:
                        sub_3114();
                        STORE_SCORE( sub_462(), ref l_U18 );
                        sub_4431();
                        DISPLAY_TEXT( 0.50000000, 0.25000000, "atm_01" );
                        sub_4431();
                        DISPLAY_TEXT( 0.50000000, 0.40000000, "atm_02" );
                        sub_4431();
                        DISPLAY_TEXT_WITH_NUMBER( 0.50000000, 0.55000000, "atm_03", l_U18 );
                        GET_GAME_TIMER( ref l_U20 );
                        l_U21 = l_U20 - l_U19;
                        if ((l_U21 > 7000) || (sub_3063()))
                        {
                            while (sub_3063())
                            {
                                WAIT( 0 );
                            }
                            l_U10 = 6;
                        }
                        break;
                        case 6:
                        DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                        sub_4893();
                        if (NOT (l_U17 == -1))
                        {
                            SET_TEXT_RENDER_ID( l_U17 );
                        }
                        DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                        WAIT( 0 );
                        sub_112( "ObjScpt_03" );
                        sub_192( 2, "atm_05" );
                        sub_192( 2, "claatm_05" );
                        sub_192( 2, "ClaScpt_03" );
                        sub_192( 2, "ObjScpt_03" );
                        SET_PLAYER_CONTROL( sub_462(), 1 );
                        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_815(), 0 );
                        SET_CHAR_VISIBLE( sub_815(), 1 );
                        sub_5133();
                        sub_5234();
                        g_U9593 = 0;
                        if (IS_THIS_A_MINIGAME_SCRIPT())
                        {
                            SET_MINIGAME_IN_PROGRESS( 0 );
                        }
                        DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                        l_U10 = 2;
                        break;
                        case 7:
                        GET_GAME_TIMER( ref l_U20 );
                        l_U21 = l_U20 - l_U19;
                        if (l_U21 > 7000)
                        {
                            l_U10 = 2;
                        }
                        break;
                    }
                }
            }
            else
            {
                sub_88();
            }
        }
        else
        {
            sub_88();
        }
    }
    sub_88();
    return;
}

void sub_59()
{
    return;
}

void sub_88()
{
    g_U9593 = 0;
    sub_112( "atm_05" );
    sub_112( "ObjScpt_03" );
    sub_192( 2, "atm_05" );
    sub_192( 2, "claatm_05" );
    sub_192( 2, "ClaScpt_03" );
    sub_192( 2, "ObjScpt_03" );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_112(unknown uParam0)
{
    if (DOES_TEXT_LABEL_EXIST( uParam0 ))
    {
        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( uParam0 ))
        {
            CLEAR_HELP();
        }
    }
    return;
}

void sub_192(int iParam0, string sParam1)
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
                    sub_413();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_462(), 1 );
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

void sub_413()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_462()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_815()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1513(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_462() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_462() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_462() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9200)))
                {
                    if (NOT sub_1609())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_815() )) == nil)
                        {
                            if (g_U10534 <= iParam0)
                            {
                                if (g_U10535 == 0)
                                {
                                    if (sub_1694())
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

int sub_1609()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_1694()
{
    return sub_1705( 0, 0 );
}

int sub_1705(boolean bParam0, unknown uParam1)
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

int sub_1803(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_1513( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_462(), 0 );
                l_U4 = 1;
            }
            g_U10534 = uParam0;
            l_U5 = 1;
            StrCopy( ref g_U10536, sParam1, 16 );
            g_U10540 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_2078();
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

void sub_2078()
{
    return sub_1705( 1, 1 );
}

int sub_3063()
{
    if (IS_CONTROL_PRESSED( 2, 23 ))
    {
        return 1;
    }
    return 0;
}

void sub_3114()
{
    GET_SCRIPT_RENDERTARGET_RENDER_ID( ref l_U17 );
    SET_TEXT_RENDER_ID( l_U17 );
    if (l_U28 != nil)
    {
        DRAW_SPRITE( l_U28, 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0.00000000, 255, 255, 255, 255 );
        DRAW_RECT( 0.50000000, 0.52000000, 0.50000000, 0.01000000, 0, 0, 0, 255 );
    }
    return;
}

void sub_3241()
{
    l_U27 = LOAD_TXD( "CashMachine" );
    l_U28 = GET_TEXTURE( l_U27, "BOL" );
    DISPLAY_RADAR( 0 );
    return;
}

void sub_3314()
{
    if (NOT (DOES_OBJECT_EXIST( l_U37 )))
    {
        GET_KEY_FOR_CHAR_IN_ROOM( sub_815(), ref l_U23 );
        if (l_U40 == 1646518682)
        {
            if (NOT (HAS_MODEL_LOADED( -863293035 )))
            {
                REQUEST_MODEL( -863293035 );
                while (NOT (HAS_MODEL_LOADED( -863293035 )))
                {
                    WAIT( 0 );
                }
            }
            CREATE_OBJECT( -863293035, l_U34._fU0, l_U34._fU4, l_U34._fU8, ref l_U37, 1 );
            if (l_U23 != 0)
            {
                if (l_U23 != -1)
                {
                    if (DOES_OBJECT_EXIST( l_U37 ))
                    {
                        ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U37, l_U23 );
                    }
                }
            }
        }
        else if (l_U40 == -1707894766)
        {
            if (NOT (HAS_MODEL_LOADED( -863293035 )))
            {
                REQUEST_MODEL( -863293035 );
                while (NOT (HAS_MODEL_LOADED( -863293035 )))
                {
                    WAIT( 0 );
                }
            }
            CREATE_OBJECT( -863293035, l_U34._fU0, l_U34._fU4, l_U34._fU8, ref l_U37, 1 );
            if (l_U23 != 0)
            {
                if (l_U23 != -1)
                {
                    if (DOES_OBJECT_EXIST( l_U37 ))
                    {
                        ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U37, l_U23 );
                    }
                }
            }
        }
        else if (NOT (HAS_MODEL_LOADED( -1694527905 )))
        {
            REQUEST_MODEL( -1694527905 );
            while (NOT (HAS_MODEL_LOADED( -1694527905 )))
            {
                WAIT( 0 );
            }
        }
        CREATE_OBJECT( -1694527905, l_U34._fU0, l_U34._fU4, l_U34._fU8, ref l_U37, 1 );
        if (l_U23 != 0)
        {
            if (l_U23 != -1)
            {
                if (DOES_OBJECT_EXIST( l_U37 ))
                {
                    ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U37, l_U23 );
                }
            }
        };;;
        SET_TIMECYCLE_MODIFIER( "Police" );
        SET_OBJECT_HEADING( l_U37, l_U33 );
    }
    return;
}

void sub_3901(unknown uParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    unknown uVar9;

    GET_OBJECT_MODEL( uParam0, ref l_U40 );
    if (l_U40 == 1646518682)
    {
        fVar3 = -0.26000000;
        fVar4 = 0.10306700;
        fVar5 = 0.50000000;
        fVar6 = 0.50000000;
        fVar7 = 0.10000000;
        fVar8 = 0.00000000;
    }
    else if (l_U40 == -1707894766)
    {
        fVar3 = -0.26000000;
        fVar4 = 0.10306700;
        fVar5 = 0.50000000;
        fVar6 = 0.50000000;
        fVar7 = 0.10000000;
        fVar8 = 0.00000000;
    }
    else
    {
        fVar3 = -0.40000000;
        fVar4 = 0.00000000;
        fVar5 = 1.20000000;
        fVar6 = 0.50000000;
        fVar7 = 0.00000000;
        fVar8 = 0.80000000;
    }
    sub_4099( ref l_U22 );
    CREATE_CAM( 14, ref l_U26 );
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        ATTACH_CAM_TO_OBJECT( l_U26, uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U26, fVar3, fVar4, fVar5 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U26, 1 );
        GET_OBJECT_HEADING( uParam0, ref uVar9 );
        POINT_CAM_AT_OBJECT( l_U26, uParam0 );
        SET_CAM_POINT_OFFSET( l_U26, fVar6, fVar7, fVar8 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U26, 1 );
    }
    SET_CAM_ACTIVE( l_U26, 1 );
    SET_CAM_PROPAGATE( l_U26, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    if (NOT (IS_CHAR_DEAD( sub_815() )))
    {
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_815(), 1 );
        SET_CHAR_VISIBLE( sub_815(), 0 );
    }
    return;
}

void sub_4099(unknown uParam0)
{
    BEGIN_CAM_COMMANDS( uParam0 );
    return;
}

void sub_4431()
{
    SET_TEXT_COLOUR( 0, 0, 0, 255 );
    SET_TEXT_CENTRE( 1 );
    SET_TEXT_SCALE( 1.70000000, 1.70000000 );
    return;
}

void sub_4605(unknown uParam0, unknown uParam1)
{
    if (DOES_TEXT_LABEL_EXIST( uParam0 ))
    {
        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
        {
            ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( uParam1 );
            PRINT_HELP( uParam0 );
        }
    }
    return;
}

void sub_4893()
{
    RELEASE_TEXTURE( l_U28 );
    l_U28 = nil;
    REMOVE_TXD( l_U27 );
    DISPLAY_RADAR( 1 );
    return;
}

void sub_5133()
{
    if (DOES_CAM_EXIST( l_U26 ))
    {
        SET_CAM_ACTIVE( l_U26, 0 );
        SET_CAM_PROPAGATE( l_U26, 0 );
        DESTROY_CAM( l_U26 );
    }
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    sub_5200( ref l_U22 );
    return;
}

void sub_5200(unknown uParam0)
{
    END_CAM_COMMANDS( uParam0 );
    return;
}

void sub_5234()
{
    if (DOES_OBJECT_EXIST( l_U37 ))
    {
        DELETE_OBJECT( ref l_U37 );
    }
    CLEAR_TIMECYCLE_MODIFIER();
    MARK_MODEL_AS_NO_LONGER_NEEDED( -863293035 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1694527905 );
    return;
}
