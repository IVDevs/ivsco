void main()
{
    l_U4 = 0.40000000;
    l_U5 = 0;
    l_U6 = 0;
    l_U8 = 0;
    l_U30 = "atm_05";
    sub_41();
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_70();
    }
    if (DOES_OBJECT_EXIST( l_U39 ))
    {
        GET_OBJECT_COORDINATES( l_U39, ref l_U9._fU0, ref l_U9._fU4, ref l_U9._fU8 );
        GET_OBJECT_HEADING( l_U39, ref l_U31 );
    }
    while (true)
    {
        WAIT( 0 );
        if (DOES_OBJECT_EXIST( l_U39 ))
        {
            if (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U39 ))
            {
                if (IS_PLAYER_PLAYING( sub_444() ))
                {
                    switch (l_U8)
                    {
                        case 0:
                        if (LOCATE_CHAR_ON_FOOT_3D( sub_795(), l_U9._fU0, l_U9._fU4, l_U9._fU8, 20.00000000, 20.00000000, 6.00000000, 0 ))
                        {
                            l_U30 = "atm_05";
                            GET_OBJECT_MODEL( l_U39, ref l_U38 );
                            if (l_U38 == 943099328)
                            {
                                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U39, -0.60000000, 0, 0, ref l_U12._fU0, ref l_U12._fU4, ref l_U12._fU8 );
                                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U39, 0, 0, 0.68000000, ref l_U32._fU0, ref l_U32._fU4, ref l_U32._fU8 );
                            }
                            else if (l_U38 == 1646518682)
                            {
                                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U39, -0.60000000, 0, 0, ref l_U12._fU0, ref l_U12._fU4, ref l_U12._fU8 );
                                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U39, 0, 0, -0.01000000, ref l_U32._fU0, ref l_U32._fU4, ref l_U32._fU8 );
                            }
                            else if (l_U38 == -1707894766)
                            {
                                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U39, -0.60000000, 0, 0, ref l_U12._fU0, ref l_U12._fU4, ref l_U12._fU8 );
                                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U39, 0, 0, -0.01000000, ref l_U32._fU0, ref l_U32._fU4, ref l_U32._fU8 );
                            };;;
                            l_U8 = 1;
                        }
                        break;
                        case 1:
                        l_U8 = 2;
                        break;
                        case 2:
                        if (g_U9076 == 0)
                        {
                            if (LOCATE_CHAR_ON_FOOT_3D( sub_795(), l_U12._fU0, l_U12._fU4, l_U12._fU8, 0.60000000, 0.60000000, 2, 0 ))
                            {
                                if (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_444() ))
                                {
                                    STORE_WANTED_LEVEL( sub_444(), ref l_U36 );
                                    GET_INTERIOR_FROM_CHAR( sub_795(), ref l_U28 );
                                    GET_KEY_FOR_CHAR_IN_ROOM( sub_795(), ref l_U21 );
                                    GET_ROOM_KEY_FROM_OBJECT( l_U39, ref l_U22 );
                                    GET_GAME_VIEWPORT_ID( ref l_U29 );
                                    if ((l_U22 != 0) AND (l_U22 != -1))
                                    {
                                        GET_KEY_FOR_VIEWPORT_IN_ROOM( l_U29, ref l_U23 );
                                    }
                                    else
                                    {
                                        l_U23 = l_U22;
                                    }
                                    if ((l_U21 != 0) AND (l_U21 != -1))
                                    {
                                        GET_INTERIOR_AT_COORDS( l_U9._fU0, l_U9._fU4, l_U9._fU8, ref l_U27 );
                                    }
                                    else
                                    {
                                        l_U22 = l_U21;
                                        l_U27 = l_U28;
                                    }
                                    if (l_U21 == l_U22)
                                    {
                                        if (l_U28 == l_U27)
                                        {
                                            if (l_U23 == l_U22)
                                            {
                                                if (l_U36 == 0)
                                                {
                                                    if (sub_1491( 2, 0 ))
                                                    {
                                                        if (sub_1779( 2, l_U30, 0 ))
                                                        {
                                                            l_U30 = "atm_05";
                                                            GET_SCRIPT_RENDERTARGET_RENDER_ID( ref l_U15 );
                                                            SET_TEXT_RENDER_ID( l_U15 );
                                                            DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                                                            if (IS_PLAYER_PLAYING( sub_444() ))
                                                            {
                                                                SET_PLAYER_CONTROL( sub_444(), 0 );
                                                            }
                                                            g_U9076 = 1;
                                                            l_U8 = 5;
                                                        }
                                                    }
                                                    else
                                                    {
                                                        sub_174( 2, "atm_05" );
                                                        sub_174( 2, "claatm_05" );
                                                        sub_174( 2, "ClaScpt_03" );
                                                        sub_174( 2, "ObjScpt_03" );
                                                    }
                                                }
                                                else
                                                {
                                                    sub_174( 2, "atm_05" );
                                                    sub_174( 2, "claatm_05" );
                                                    sub_174( 2, "ClaScpt_03" );
                                                    sub_174( 2, "ObjScpt_03" );
                                                }
                                            }
                                            else
                                            {
                                                sub_174( 2, "atm_05" );
                                                sub_174( 2, "claatm_05" );
                                                sub_174( 2, "ClaScpt_03" );
                                                sub_174( 2, "ObjScpt_03" );
                                            }
                                        }
                                        else
                                        {
                                            sub_174( 2, "atm_05" );
                                            sub_174( 2, "claatm_05" );
                                            sub_174( 2, "ClaScpt_03" );
                                            sub_174( 2, "ObjScpt_03" );
                                        }
                                    }
                                    else
                                    {
                                        sub_174( 2, "atm_05" );
                                        sub_174( 2, "claatm_05" );
                                        sub_174( 2, "ClaScpt_03" );
                                        sub_174( 2, "ObjScpt_03" );
                                    }
                                }
                                else
                                {
                                    sub_174( 2, "atm_05" );
                                    sub_174( 2, "claatm_05" );
                                    sub_174( 2, "ClaScpt_03" );
                                    sub_174( 2, "ObjScpt_03" );
                                }
                            }
                            else
                            {
                                sub_174( 2, "atm_05" );
                                sub_174( 2, "claatm_05" );
                                sub_174( 2, "ClaScpt_03" );
                                sub_174( 2, "ObjScpt_03" );
                            }
                        }
                        break;
                        case 5:
                        if (NOT sub_3029())
                        {
                            l_U8 = 3;
                        }
                        break;
                        case 3:
                        sub_3080();
                        sub_3207();
                        sub_3080();
                        sub_3280();
                        sub_3080();
                        sub_3865( l_U39 );
                        sub_3080();
                        sub_3280();
                        sub_3080();
                        if (NOT IS_THIS_A_MINIGAME_SCRIPT())
                        {
                            SET_MINIGAME_IN_PROGRESS( 1 );
                        }
                        sub_174( 2, "atm_05" );
                        sub_174( 2, "claatm_05" );
                        sub_174( 2, "ClaScpt_03" );
                        sub_174( 2, "ObjScpt_03" );
                        GET_GAME_TIMER( ref l_U17 );
                        STORE_SCORE( sub_444(), ref l_U16 );
                        sub_4416();
                        DISPLAY_TEXT( 0.50000000, 0.25000000, "atm_01" );
                        sub_4416();
                        DISPLAY_TEXT( 0.50000000, 0.40000000, "atm_02" );
                        sub_4416();
                        DISPLAY_TEXT_WITH_NUMBER( 0.50000000, 0.55000000, "atm_03", l_U16 );
                        sub_94( "atm_05" );
                        sub_4590( "ObjScpt_03", 0 );
                        l_U8 = 4;
                        break;
                        case 4:
                        sub_3080();
                        STORE_SCORE( sub_444(), ref l_U16 );
                        sub_4416();
                        DISPLAY_TEXT( 0.50000000, 0.25000000, "atm_01" );
                        sub_4416();
                        DISPLAY_TEXT( 0.50000000, 0.40000000, "atm_02" );
                        sub_4416();
                        DISPLAY_TEXT_WITH_NUMBER( 0.50000000, 0.55000000, "atm_03", l_U16 );
                        GET_GAME_TIMER( ref l_U18 );
                        l_U19 = l_U18 - l_U17;
                        if ((l_U19 > 7000) || (sub_3029()))
                        {
                            while (sub_3029())
                            {
                                WAIT( 0 );
                            }
                            l_U8 = 6;
                        }
                        break;
                        case 6:
                        DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                        sub_4878();
                        if (NOT (l_U15 == -1))
                        {
                            SET_TEXT_RENDER_ID( l_U15 );
                        }
                        DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                        WAIT( 0 );
                        sub_94( "ObjScpt_03" );
                        sub_174( 2, "atm_05" );
                        sub_174( 2, "claatm_05" );
                        sub_174( 2, "ClaScpt_03" );
                        sub_174( 2, "ObjScpt_03" );
                        SET_PLAYER_CONTROL( sub_444(), 1 );
                        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_795(), 0 );
                        SET_CHAR_VISIBLE( sub_795(), 1 );
                        sub_5118();
                        sub_5219();
                        g_U9076 = 0;
                        if (IS_THIS_A_MINIGAME_SCRIPT())
                        {
                            SET_MINIGAME_IN_PROGRESS( 0 );
                        }
                        DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                        l_U8 = 2;
                        break;
                        case 7:
                        GET_GAME_TIMER( ref l_U18 );
                        l_U19 = l_U18 - l_U17;
                        if (l_U19 > 7000)
                        {
                            l_U8 = 2;
                        }
                        break;
                    }
                }
            }
            else
            {
                sub_70();
            }
        }
        else
        {
            sub_70();
        }
    }
    sub_70();
    return;
}

void sub_41()
{
    return;
}

void sub_70()
{
    g_U9076 = 0;
    sub_94( "atm_05" );
    sub_94( "ObjScpt_03" );
    sub_174( 2, "atm_05" );
    sub_174( 2, "claatm_05" );
    sub_174( 2, "ClaScpt_03" );
    sub_174( 2, "ObjScpt_03" );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_94(unknown uParam0)
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

void sub_174(int iParam0, string sParam1)
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
                    sub_395();
                    l_U1 = 0;
                }
            }
            if (l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_444(), 1 );
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

void sub_395()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_444()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_795()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1491(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_444() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_444() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_444() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9202)))
                {
                    if (NOT sub_1587())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_795() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_1672())
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

int sub_1587()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_1672()
{
    return sub_1683( 0, 0 );
}

int sub_1683(boolean bParam0, unknown uParam1)
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

int sub_1779(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_1491( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_444(), 0 );
                l_U2 = 1;
            }
            g_U9172 = uParam0;
            l_U3 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_2054();
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

void sub_2054()
{
    return sub_1683( 1, 1 );
}

int sub_3029()
{
    if (IS_CONTROL_PRESSED( 2, 23 ))
    {
        return 1;
    }
    return 0;
}

void sub_3080()
{
    GET_SCRIPT_RENDERTARGET_RENDER_ID( ref l_U15 );
    SET_TEXT_RENDER_ID( l_U15 );
    if (l_U26 != nil)
    {
        DRAW_SPRITE( l_U26, 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0.00000000, 255, 255, 255, 255 );
        DRAW_RECT( 0.50000000, 0.52000000, 0.50000000, 0.01000000, 0, 0, 0, 255 );
    }
    return;
}

void sub_3207()
{
    l_U25 = LOAD_TXD( "CashMachine" );
    l_U26 = GET_TEXTURE( l_U25, "BOL" );
    DISPLAY_RADAR( 0 );
    return;
}

void sub_3280()
{
    if (NOT (DOES_OBJECT_EXIST( l_U35 )))
    {
        GET_KEY_FOR_CHAR_IN_ROOM( sub_795(), ref l_U21 );
        if (l_U38 == 1646518682)
        {
            if (NOT (HAS_MODEL_LOADED( -863293035 )))
            {
                REQUEST_MODEL( -863293035 );
                while (NOT (HAS_MODEL_LOADED( -863293035 )))
                {
                    WAIT( 0 );
                }
            }
            CREATE_OBJECT( -863293035, l_U32._fU0, l_U32._fU4, l_U32._fU8, ref l_U35, 1 );
            if (l_U21 != 0)
            {
                if (l_U21 != -1)
                {
                    if (DOES_OBJECT_EXIST( l_U35 ))
                    {
                        ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U35, l_U21 );
                    }
                }
            }
        }
        else if (l_U38 == -1707894766)
        {
            if (NOT (HAS_MODEL_LOADED( -863293035 )))
            {
                REQUEST_MODEL( -863293035 );
                while (NOT (HAS_MODEL_LOADED( -863293035 )))
                {
                    WAIT( 0 );
                }
            }
            CREATE_OBJECT( -863293035, l_U32._fU0, l_U32._fU4, l_U32._fU8, ref l_U35, 1 );
            if (l_U21 != 0)
            {
                if (l_U21 != -1)
                {
                    if (DOES_OBJECT_EXIST( l_U35 ))
                    {
                        ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U35, l_U21 );
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
        CREATE_OBJECT( -1694527905, l_U32._fU0, l_U32._fU4, l_U32._fU8, ref l_U35, 1 );
        if (l_U21 != 0)
        {
            if (l_U21 != -1)
            {
                if (DOES_OBJECT_EXIST( l_U35 ))
                {
                    ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U35, l_U21 );
                }
            }
        };;;
        SET_TIMECYCLE_MODIFIER( "Police" );
        SET_OBJECT_HEADING( l_U35, l_U31 );
    }
    return;
}

void sub_3865(unknown uParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    unknown uVar9;

    GET_OBJECT_MODEL( uParam0, ref l_U38 );
    if (l_U38 == 1646518682)
    {
        fVar3 = -0.26000000;
        fVar4 = 0.10306700;
        fVar5 = 0.50000000;
        fVar6 = 0.50000000;
        fVar7 = 0.10000000;
        fVar8 = 0.00000000;
    }
    else if (l_U38 == -1707894766)
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
    sub_4063( ref l_U20 );
    CREATE_CAM( 14, ref l_U24 );
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        ATTACH_CAM_TO_OBJECT( l_U24, uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U24, fVar3, fVar4, fVar5 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U24, 1 );
        GET_OBJECT_HEADING( uParam0, ref uVar9 );
        POINT_CAM_AT_OBJECT( l_U24, uParam0 );
        SET_CAM_POINT_OFFSET( l_U24, fVar6, fVar7, fVar8 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U24, 1 );
    }
    SET_CAM_ACTIVE( l_U24, 1 );
    SET_CAM_PROPAGATE( l_U24, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    if (NOT (IS_CHAR_DEAD( sub_795() )))
    {
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_795(), 1 );
        SET_CHAR_VISIBLE( sub_795(), 0 );
    }
    return;
}

void sub_4063(unknown uParam0)
{
    BEGIN_CAM_COMMANDS( uParam0 );
    return;
}

void sub_4416()
{
    SET_TEXT_COLOUR( 0, 0, 0, 255 );
    SET_TEXT_CENTRE( 1 );
    SET_TEXT_SCALE( 1.70000000, 1.70000000 );
    return;
}

void sub_4590(unknown uParam0, unknown uParam1)
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

void sub_4878()
{
    RELEASE_TEXTURE( l_U26 );
    l_U26 = nil;
    REMOVE_TXD( l_U25 );
    DISPLAY_RADAR( 1 );
    return;
}

void sub_5118()
{
    if (DOES_CAM_EXIST( l_U24 ))
    {
        SET_CAM_ACTIVE( l_U24, 0 );
        SET_CAM_PROPAGATE( l_U24, 0 );
        DESTROY_CAM( l_U24 );
    }
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    sub_5185( ref l_U20 );
    return;
}

void sub_5185(unknown uParam0)
{
    END_CAM_COMMANDS( uParam0 );
    return;
}

void sub_5219()
{
    if (DOES_OBJECT_EXIST( l_U35 ))
    {
        DELETE_OBJECT( ref l_U35 );
    }
    CLEAR_TIMECYCLE_MODIFIER();
    MARK_MODEL_AS_NO_LONGER_NEEDED( -863293035 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1694527905 );
    return;
}
