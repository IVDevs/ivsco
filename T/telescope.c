void main()
{
    l_U4 = 0.40000000;
    l_U5 = 0;
    l_U6 = 0;
    l_U8 = 0;
    l_U12 = 0;
    l_U14 = 0;
    l_U15 = 0;
    l_U26 = 0;
    l_U35 = "AMB@TELESCOPE_PLAYER";
    l_U36 = "LOOK_INTRO";
    l_U55 = 0.50000000;
    l_U63 = 0;
    l_U67 = 180;
    l_U70 = 0.00000000;
    l_U71 = {0.00000000, 0.00000000, 0.00000000};
    l_U82 = "BINOCULARS_MECHANISM";
    l_U83 = "BINOCULARS_SQUEAK";
    l_U84 = "BINOCULARS_ZOOM";
    l_U85 = "BINOCULARS_CLUNK";
    l_U86 = 0;
    l_U87 = 0;
    l_U88 = 0;
    l_U89 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_283();
    }
    sub_1299( l_U102 );
    while (true)
    {
        WAIT( 0 );
        if (IS_PLAYER_PLAYING( sub_737() ))
        {
            if (DOES_OBJECT_EXIST( l_U102 ))
            {
                if (IS_OBJECT_UPRIGHT( l_U102, 15 ))
                {
                    if (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U102 ))
                    {
                        switch (l_U14)
                        {
                            case 0:
                            ALLOW_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND( 1 );
                            if (GET_CLOSEST_CHAR( l_U31._fU0, l_U31._fU4, l_U31._fU8, 1.50000000, 1, 1, ref l_U60 ))
                            {
                                sub_283();
                            }
                            if (HAVE_ANIMS_LOADED( l_U35 ))
                            {
                                if (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_737() ))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_1132(), l_U31._fU0, l_U31._fU4, l_U31._fU8, 0.60000000, 0.60000000, 1.50000000, 0 ))
                                    {
                                        STORE_WANTED_LEVEL( sub_737(), ref l_U54 );
                                        if (IS_CHAR_ON_FOOT( sub_1132() ))
                                        {
                                            if (l_U54 == 0)
                                            {
                                                sub_1460();
                                                if (sub_1852( 2, 0 ))
                                                {
                                                    if (sub_2142( 2, l_U37, 0 ))
                                                    {
                                                        if (IS_SCORE_GREATER( sub_737(), 1 ))
                                                        {
                                                            if (IS_PLAYER_PLAYING( sub_737() ))
                                                            {
                                                                sub_2787( 0 );
                                                            }
                                                            REMOVE_PED_HELMET( sub_1132(), 1 );
                                                            INCREMENT_INT_STAT_NO_MESSAGE( 105, 1 );
                                                            sub_2873( l_U102 );
                                                            l_U14 = 1;
                                                        }
                                                        else
                                                        {
                                                            sub_3590( "FAIL_TRAN", 3000, 0 );
                                                        }
                                                    }
                                                }
                                                else
                                                {
                                                    sub_467( 2, "Tele_act" );
                                                    sub_467( 2, "Tele_instruc" );
                                                    sub_467( 2, "Tele_otheway" );
                                                    sub_467( 2, "ClasTele_act" );
                                                    sub_467( 2, "Clas_instruc" );
                                                    sub_467( 2, "Clas_otheway" );
                                                }
                                            }
                                            else
                                            {
                                                sub_467( 2, "Tele_act" );
                                                sub_467( 2, "Tele_instruc" );
                                                sub_467( 2, "Tele_otheway" );
                                                sub_467( 2, "ClasTele_act" );
                                                sub_467( 2, "Clas_instruc" );
                                                sub_467( 2, "Clas_otheway" );
                                            }
                                        }
                                        else
                                        {
                                            sub_467( 2, "Tele_act" );
                                            sub_467( 2, "Tele_instruc" );
                                            sub_467( 2, "Tele_otheway" );
                                            sub_467( 2, "ClasTele_act" );
                                            sub_467( 2, "Clas_instruc" );
                                            sub_467( 2, "Clas_otheway" );
                                        }
                                    }
                                    else
                                    {
                                        sub_467( 2, "Tele_act" );
                                        sub_467( 2, "Tele_instruc" );
                                        sub_467( 2, "Tele_otheway" );
                                        sub_467( 2, "ClasTele_act" );
                                        sub_467( 2, "Clas_instruc" );
                                        sub_467( 2, "Clas_otheway" );
                                    }
                                }
                                else
                                {
                                    sub_467( 2, "Tele_act" );
                                    sub_467( 2, "Tele_instruc" );
                                    sub_467( 2, "Tele_otheway" );
                                    sub_467( 2, "ClasTele_act" );
                                    sub_467( 2, "Clas_instruc" );
                                    sub_467( 2, "Clas_otheway" );
                                }
                            }
                            else
                            {
                                sub_467( 2, "Tele_act" );
                                sub_467( 2, "Tele_instruc" );
                                sub_467( 2, "Tele_otheway" );
                                sub_467( 2, "ClasTele_act" );
                                sub_467( 2, "Clas_instruc" );
                                sub_467( 2, "Clas_otheway" );
                            }
                            break;
                            case 1:
                            sub_4419( l_U102 );
                            break;
                            case 2:
                            sub_5650();
                            g_U9078 = 1;
                            if (l_U63 == 1)
                            {
                                PRINT_HELP_FOREVER( "Tele_otheway" );
                            }
                            else
                            {
                                PRINT_HELP_FOREVER( "Tele_instruc" );
                            }
                            GET_GAME_TIMER( ref l_U21 );
                            l_U22 = l_U21 - l_U20;
                            sub_5512();
                            if (l_U22 > 500)
                            {
                                if ((l_U22 > 100000) || (sub_8254()))
                                {
                                    l_U14 = 3;
                                }
                            }
                            break;
                            case 3:
                            sub_5512();
                            if (NOT sub_8254())
                            {
                                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                                sub_1253( ref l_U98 );
                                l_U14 = 4;
                            }
                            break;
                            case 4:
                            if (NOT sub_8254())
                            {
                                sub_8359();
                                GET_GAME_TIMER( ref l_U24 );
                                l_U25 = l_U24 - l_U23;
                                INCREMENT_INT_STAT_NO_MESSAGE( 310, 1 );
                                sub_303( "Tele_instruc" );
                                sub_303( "Tele_otheway" );
                                sub_303( "Clas_instruc" );
                                sub_303( "Clas_otheway" );
                                sub_467( 2, "Tele_act" );
                                sub_467( 2, "Tele_instruc" );
                                sub_467( 2, "Tele_otheway" );
                                sub_467( 2, "ClasTele_act" );
                                sub_467( 2, "Clas_instruc" );
                                sub_467( 2, "Clas_otheway" );
                                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1132() );
                                if (IS_THIS_A_MINIGAME_SCRIPT())
                                {
                                    SET_MINIGAME_IN_PROGRESS( 0 );
                                }
                                if (DOES_CAM_EXIST( l_U99 ))
                                {
                                    DESTROY_CAM( l_U99 );
                                }
                                if (DOES_CAM_EXIST( l_U100 ))
                                {
                                    DESTROY_CAM( l_U100 );
                                }
                                if (DOES_CAM_EXIST( l_U101 ))
                                {
                                    DESTROY_CAM( l_U101 );
                                }
                                g_U9078 = 0;
                                sub_2787( 1 );
                                GET_GAME_TIMER( ref l_U20 );
                                sub_8824();
                                l_U14 = 5;
                            }
                            break;
                            case 5:
                            GET_GAME_TIMER( ref l_U21 );
                            l_U22 = l_U21 - l_U20;
                            if (l_U22 > 1000)
                            {
                                l_U14 = 0;
                            }
                            break;
                            case 6: break;
                            case 7: break;
                            case 8: break;
                        }
                    }
                    else if ((l_U14 == 2) || (l_U14 == 1))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1132() );
                        sub_2787( 1 );
                        if (IS_THIS_A_MINIGAME_SCRIPT())
                        {
                            SET_MINIGAME_IN_PROGRESS( 0 );
                        }
                        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                        sub_8824();
                    }
                    sub_283();;
                }
                else if ((l_U14 == 2) || (l_U14 == 1))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1132() );
                    sub_2787( 1 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    sub_8824();
                    if (IS_THIS_A_MINIGAME_SCRIPT())
                    {
                        SET_MINIGAME_IN_PROGRESS( 0 );
                    }
                }
                sub_283();;
            }
            else
            {
                sub_283();
            }
        }
        else
        {
            sub_283();
        }
    }
    return;
}

void sub_283()
{
    sub_303( "Tele_act" );
    sub_303( "Tele_instruc" );
    sub_303( "Tele_otheway" );
    sub_303( "ClasTele_act" );
    sub_303( "Clas_instruc" );
    sub_303( "Clas_otheway" );
    sub_467( 2, "Tele_act" );
    sub_467( 2, "Tele_instruc" );
    sub_467( 2, "Tele_otheway" );
    sub_467( 2, "ClasTele_act" );
    sub_467( 2, "Clas_instruc" );
    sub_467( 2, "Clas_otheway" );
    g_U9078 = 0;
    if (DOES_CAM_EXIST( l_U99 ))
    {
        DESTROY_CAM( l_U99 );
    }
    if (DOES_CAM_EXIST( l_U100 ))
    {
        DESTROY_CAM( l_U100 );
    }
    if (DOES_CAM_EXIST( l_U101 ))
    {
        DESTROY_CAM( l_U101 );
    }
    if ((l_U15 == 4) || (l_U14 == 2))
    {
        sub_1038( 0 );
        sub_1253( ref l_U98 );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_303(unknown uParam0)
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

void sub_467(int iParam0, string sParam1)
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
                    sub_688();
                    l_U1 = 0;
                }
            }
            if (l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_737(), 1 );
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

void sub_688()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_737()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1038(boolean bParam0)
{
    SET_USE_HIGHDOF( bParam0 );
    SET_WIDESCREEN_BORDERS( bParam0 );
    if (IS_PLAYER_PLAYING( sub_737() ))
    {
        SET_PLAYER_CONTROL( sub_737(), NOT bParam0 );
    }
    ACTIVATE_SCRIPTED_CAMS( bParam0, bParam0 );
    SET_EVERYONE_IGNORE_PLAYER( sub_737(), bParam0 );
    ALLOW_EMERGENCY_SERVICES( NOT bParam0 );
    if (NOT (IS_CHAR_DEAD( sub_1132() )))
    {
        CLEAR_CHAR_TASKS( sub_1132() );
    }
    if (bParam0)
    {
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1132(), 1 );
    }
    else
    {
        sub_688();
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1132(), 0 );
    }
    return;
}

void sub_1132()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1253(unknown uParam0)
{
    END_CAM_COMMANDS( uParam0 );
    return;
}

void sub_1299(unknown uParam0)
{
    REQUEST_ANIMS( l_U35 );
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OBJECT_COORDINATES( uParam0, ref l_U27._fU0, ref l_U27._fU4, ref l_U27._fU8 );
        GET_OBJECT_HEADING( uParam0, ref l_U30 );
        l_U30 -= 180;
        if (l_U30 < 0)
        {
            l_U30 += 360;
        }
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 0.60000000, 0.00000000, ref l_U31._fU0, ref l_U31._fU4, ref l_U31._fU8 );
        l_U34 = l_U30;
        sub_1443();
        sub_1460();
    }
    return;
}

void sub_1443()
{
    return;
}

void sub_1460()
{
    l_U37 = "Tele_act";
    return;
}

int sub_1852(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_737() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_737() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_737() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9202)))
                {
                    if (NOT sub_1948())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_1132() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_2033())
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

int sub_1948()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_2033()
{
    return sub_2044( 0, 0 );
}

int sub_2044(boolean bParam0, unknown uParam1)
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

int sub_2142(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_1852( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_737(), 0 );
                l_U2 = 1;
            }
            g_U9172 = uParam0;
            l_U3 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_2417();
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

void sub_2417()
{
    return sub_2044( 1, 1 );
}

void sub_2787(int iParam0)
{
    if (iParam0 == 0)
    {
        SET_PLAYER_CONTROL( sub_737(), 0 );
    }
    else
    {
        SET_PLAYER_CONTROL( sub_737(), 1 );
    }
    return;
}

void sub_2873(unknown uParam0)
{
    GET_OBJECT_HEADING( uParam0, ref l_U30 );
    l_U30 -= 180;
    if (l_U30 < 0)
    {
        l_U30 += 360;
    }
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 0.60000000, 0.00000000, ref l_U31._fU0, ref l_U31._fU4, ref l_U31._fU8 );
    l_U34 = l_U30;
    l_U71 = {l_U31._fU0, l_U31._fU4, l_U31._fU8};
    if (NOT (DOES_CAM_EXIST( l_U100 )))
    {
        CREATE_CAM( 14, ref l_U100 );
        if (DOES_CAM_EXIST( l_U100 ))
        {
            ATTACH_CAM_TO_OBJECT( l_U100, uParam0 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U100, 1 );
            SET_CAM_ATTACH_OFFSET( l_U100, 0.00000000, -1.50000000, 1.62000000 );
            SET_CAM_ROT( l_U100, 0.00000000, 0.00000000, l_U30 );
            GET_CAM_ROT( l_U100, ref l_U57._fU0, ref l_U57._fU4, ref l_U57._fU8 );
            DESTROY_CAM( l_U100 );
        }
    }
    else
    {
        DESTROY_CAM( l_U100 );
        CREATE_CAM( 14, ref l_U100 );
        if (DOES_CAM_EXIST( l_U100 ))
        {
            ATTACH_CAM_TO_OBJECT( l_U100, uParam0 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U100, 1 );
            SET_CAM_ATTACH_OFFSET( l_U100, 0.00000000, -1.50000000, 1.62000000 );
            SET_CAM_ROT( l_U100, 0.00000000, 0.00000000, l_U30 );
            GET_CAM_ROT( l_U100, ref l_U57._fU0, ref l_U57._fU4, ref l_U57._fU8 );
            DESTROY_CAM( l_U100 );
        }
    }
    l_U30 = sub_3335( l_U57._fU8 );
    l_U68 = l_U30 + 56;
    l_U69 = l_U30 - 56;
    l_U70 = l_U30;
    l_U43 = FLOOR( l_U68 );
    l_U44 = FLOOR( l_U69 );
    l_U45 = 50;
    l_U46 = 65486;
    l_U47 = 1.00000000;
    l_U48 = 2.50000000;
    l_U49 = 0.75000000;
    l_U52 = 70;
    l_U53 = 20;
    l_U50 = l_U48 / l_U52;
    l_U51 = l_U47 / l_U52;
    return;
}

float sub_3335(float fParam0)
{
    if ((fParam0 >= 65356) AND (fParam0 < 0))
    {
        return fParam0 + 720;
        break;
    }
    return fParam0 + 360;
}

int sub_3590(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT IS_MESSAGE_BEING_DISPLAYED())
    {
        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( uParam2 );
        PRINT_NOW( uParam0, uParam1, 1 );
        return 1;
    }
    return 0;
}

void sub_4419(unknown uParam0)
{
    switch (l_U15)
    {
        case 0:
        REGISTER_SCRIPT_WITH_AUDIO( 0 );
        GET_GAME_TIMER( ref l_U23 );
        if (NOT IS_THIS_A_MINIGAME_SCRIPT())
        {
            SET_MINIGAME_IN_PROGRESS( 1 );
        }
        while (NOT (REQUEST_AMBIENT_AUDIO_BANK( "SCRIPT_AMBIENT/BINOCULARS" )))
        {
            WAIT( 0 );
        }
        sub_4570();
        sub_4658();
        SET_CURRENT_CHAR_WEAPON( sub_1132(), 0, 1 );
        TASK_CHAR_SLIDE_TO_COORD( sub_1132(), l_U31._fU0, l_U31._fU4, l_U31._fU8, l_U30, 1.00000000 );
        l_U74 = GET_SOUND_ID();
        l_U75 = GET_SOUND_ID();
        l_U77 = GET_SOUND_ID();
        l_U76 = GET_SOUND_ID();
        PLAY_SOUND_FROM_POSITION( l_U75, l_U83, l_U71 );
        PLAY_SOUND_FROM_POSITION( l_U74, l_U82, l_U71 );
        PLAY_SOUND_FROM_POSITION( l_U76, l_U84, l_U71 );
        l_U15 = 1;
        break;
        case 1:
        if (sub_4948())
        {
            l_U15 = 0;
            l_U14 = 4;
            break;
        }
        else
        {
            GET_SCRIPT_TASK_STATUS( sub_1132(), 68, ref l_U38 );
            if (l_U38 == 7)
            {
                l_U15 = 2;
            }
        }
        break;
        case 2:
        TASK_PLAY_ANIM( sub_1132(), l_U36, l_U35, 8.00000000, 0, 0, 0, 0, -2 );
        l_U38 = 0;
        GET_GAME_TIMER( ref l_U20 );
        l_U15 = 3;
        break;
        case 3:
        GET_SCRIPT_TASK_STATUS( sub_1132(), 80, ref l_U38 );
        if (l_U38 == 7)
        {
            l_U15 = 4;
        }
        break;
        case 4:
        sub_5277( ref l_U98 );
        CREATE_CAM( 14, ref l_U99 );
        CREATE_CAM( 14, ref l_U100 );
        if (DOES_CAM_EXIST( l_U99 ))
        {
            ATTACH_CAM_TO_OBJECT( l_U99, uParam0 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U99, 1 );
            SET_CAM_ATTACH_OFFSET( l_U99, 0.00000000, -0.50000000, 1.62000000 );
            SET_CAM_ROT( l_U99, 0.00000000, 0.00000000, l_U30 );
            SET_CAM_ACTIVE( l_U99, 1 );
            SET_CAM_PROPAGATE( l_U99, 1 );
            GET_CAM_FOV( l_U99, ref l_U42 );
            GET_CAM_ROT( l_U99, ref l_U39, ref l_U40, ref l_U41 );
        }
        ADD_SCORE( sub_737(), -1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        sub_5512();
        GET_GAME_TIMER( ref l_U20 );
        l_U15 = 0;
        l_U14 = 2;
        break;
    }
    return;
}

void sub_4570()
{
    SET_SPRITES_DRAW_BEFORE_FADE( 1 );
    l_U65 = LOAD_TXD( "binoculars" );
    l_U66 = GET_TEXTURE( l_U65, "binoculars" );
    DISPLAY_RADAR( 0 );
    return;
}

void sub_4658()
{
    if (NOT (IS_CHAR_DEAD( sub_1132() )))
    {
        GET_CURRENT_CHAR_WEAPON( sub_1132(), ref l_U12 );
        if (l_U12 == 46)
        {
            REMOVE_WEAPON_FROM_CHAR( sub_1132(), 46 );
            SET_CURRENT_CHAR_WEAPON( sub_1132(), 0, 1 );
        }
        if (l_U12 != 0)
        {
            SET_CURRENT_CHAR_WEAPON( sub_1132(), 0, 1 );
        }
    }
    return;
}

int sub_4948()
{
    if (((((IS_BUTTON_PRESSED( 0, 17 )) || (IS_BUTTON_PRESSED( 0, 14 ))) || (IS_BUTTON_PRESSED( 0, 15 ))) || (IS_BUTTON_PRESSED( 0, 16 ))) || (sub_4996()))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1132() );
        SET_PLAYER_CONTROL( sub_737(), 1 );
        return 1;
    }
    return 0;
}

int sub_4996()
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

void sub_5277(unknown uParam0)
{
    BEGIN_CAM_COMMANDS( uParam0 );
    return;
}

void sub_5512()
{
    float fVar2;

    if (l_U66 != nil)
    {
        fVar2 = 1.00000000;
        if (NOT GET_IS_WIDESCREEN())
        {
            fVar2 = 1.33000000;
        }
        DRAW_SPRITE( l_U66, 0.50000000, 0.50000000, fVar2, 1.00000000, 0.00000000, 255, 255, 255, 255 );
    }
    return;
}

void sub_5650()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    float fVar7;

    uVar2 = l_U48;
    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref l_U16, ref l_U17, ref l_U18, ref l_U19 );
    if ((l_U16 == 0) AND (l_U17 == 0))
    {
        GET_KEYBOARD_MOVE_INPUT( ref l_U16, ref l_U17 );
    }
    if ((l_U18 == 0) AND (l_U19 == 0))
    {
        GET_MOUSE_INPUT( ref l_U18, ref l_U19 );
        if ((l_U18 != 0) || (l_U19 != 0))
        {
            fVar7 = 0.00000000 + ((4.00000000 - 0.00000000) * GET_MOUSE_SENSITIVITY());
            l_U48 += fVar7;
        }
    }
    uVar3 = l_U16;
    uVar4 = l_U17;
    uVar5 = l_U18;
    uVar6 = l_U19;
    if ((((NOT (# -NULL-0xc27bfa())) AND ((GET_PROFILE_SETTING( 4 )) == 1)) || ((# -NULL-0xc27bfa()) AND (IS_SNIPER_INVERTED()))) AND (IS_USING_CONTROLLER()))
    {
        l_U63 = 0;
        l_U16 = uVar3;
        l_U17 = uVar4;
        l_U18 = uVar5;
        l_U19 = uVar6;
    }
    else
    {
        l_U63 = 1;
        l_U16 = uVar5;
        l_U17 = uVar6;
        l_U18 = uVar3;
        l_U19 = uVar4;
    }
    if (IS_LOOK_INVERTED())
    {
        l_U26 = 0;
    }
    else
    {
        l_U26 = 1;
    }
    SET_CAM_MOTION_BLUR( l_U99, 0.10000000 );
    l_U78 = 0.00000000;
    l_U79 = 0.00000000;
    l_U80 = 0.00000000;
    if ((l_U17 > 100) AND (l_U17 <= 128))
    {
        if (l_U26)
        {
            if (DOES_CAM_EXIST( l_U99 ))
            {
                GET_CAM_ROT( l_U99, ref l_U39, ref l_U40, ref l_U41 );
                if (l_U39 > l_U46)
                {
                    l_U79 = 1.00000000;
                    SET_CAM_ROT( l_U99, l_U39 - l_U48, l_U40, l_U41 );
                    l_U86 = 1;
                }
                else if (l_U86 == 1)
                {
                    PLAY_SOUND_FROM_POSITION( l_U77, l_U85, l_U71 );
                    l_U86 = 0;
                }
            }
        }
        else if (DOES_CAM_EXIST( l_U99 ))
        {
            GET_CAM_ROT( l_U99, ref l_U39, ref l_U40, ref l_U41 );
            if (l_U39 < l_U45)
            {
                l_U79 = 1.00000000;
                SET_CAM_ROT( l_U99, l_U39 + l_U48, l_U40, l_U41 );
                l_U86 = 1;
            }
            else if (l_U86 == 1)
            {
                PLAY_SOUND_FROM_POSITION( l_U77, l_U85, l_U71 );
                l_U86 = 0;
            }
        }
    }
    if ((l_U17 < 65436) AND (l_U17 >= 65408))
    {
        if (l_U26)
        {
            if (DOES_CAM_EXIST( l_U99 ))
            {
                GET_CAM_ROT( l_U99, ref l_U39, ref l_U40, ref l_U41 );
                if (l_U39 < l_U45)
                {
                    l_U79 = 1.00000000;
                    SET_CAM_ROT( l_U99, l_U39 + l_U48, l_U40, l_U41 );
                    l_U87 = 1;
                }
                else if (l_U87 == 1)
                {
                    PLAY_SOUND_FROM_POSITION( l_U77, l_U85, l_U71 );
                    l_U87 = 0;
                }
            }
        }
        else if (DOES_CAM_EXIST( l_U99 ))
        {
            GET_CAM_ROT( l_U99, ref l_U39, ref l_U40, ref l_U41 );
            if (l_U39 > l_U46)
            {
                l_U79 = 1.00000000;
                SET_CAM_ROT( l_U99, l_U39 - l_U48, l_U40, l_U41 );
                l_U87 = 1;
            }
            else if (l_U87 == 1)
            {
                PLAY_SOUND_FROM_POSITION( l_U77, l_U85, l_U71 );
                l_U87 = 0;
            }
        }
    }
    if ((l_U17 > 10) AND (l_U17 <= 100))
    {
        if (l_U26)
        {
            if (DOES_CAM_EXIST( l_U99 ))
            {
                GET_CAM_ROT( l_U99, ref l_U39, ref l_U40, ref l_U41 );
                if (l_U39 > l_U46)
                {
                    l_U79 = 0.50000000;
                    SET_CAM_ROT( l_U99, l_U39 - l_U47, l_U40, l_U41 );
                }
            }
        }
        else if (DOES_CAM_EXIST( l_U99 ))
        {
            GET_CAM_ROT( l_U99, ref l_U39, ref l_U40, ref l_U41 );
            if (l_U39 < l_U45)
            {
                l_U79 = 0.50000000;
                SET_CAM_ROT( l_U99, l_U39 + l_U47, l_U40, l_U41 );
            }
        }
    }
    if ((l_U17 < -10) AND (l_U17 >= 65436))
    {
        if (l_U26)
        {
            if (DOES_CAM_EXIST( l_U99 ))
            {
                GET_CAM_ROT( l_U99, ref l_U39, ref l_U40, ref l_U41 );
                if (l_U39 < l_U45)
                {
                    l_U79 = 0.50000000;
                    SET_CAM_ROT( l_U99, l_U39 + l_U47, l_U40, l_U41 );
                }
            }
        }
        else if (DOES_CAM_EXIST( l_U99 ))
        {
            GET_CAM_ROT( l_U99, ref l_U39, ref l_U40, ref l_U41 );
            if (l_U39 > l_U46)
            {
                l_U79 = 0.50000000;
                SET_CAM_ROT( l_U99, l_U39 - l_U47, l_U40, l_U41 );
            }
        }
    }
    if ((l_U16 > 100) AND (l_U16 <= 128))
    {
        if (DOES_CAM_EXIST( l_U99 ))
        {
            GET_CAM_ROT( l_U99, ref l_U39, ref l_U40, ref l_U41 );
            if (l_U70 > l_U44)
            {
                l_U78 = 1.00000000;
                SET_CAM_ROT( l_U99, l_U39, l_U40, l_U41 - l_U48 );
                l_U70 -= l_U48;
                l_U88 = 1;
            }
            else if (l_U88 == 1)
            {
                PLAY_SOUND_FROM_POSITION( l_U77, l_U85, l_U71 );
                l_U88 = 0;
            }
        }
    }
    if ((l_U16 < 65436) AND (l_U16 >= 65408))
    {
        if (DOES_CAM_EXIST( l_U99 ))
        {
            GET_CAM_ROT( l_U99, ref l_U39, ref l_U40, ref l_U41 );
            if (l_U70 < l_U43)
            {
                l_U78 = 1.00000000;
                SET_CAM_ROT( l_U99, l_U39, l_U40, l_U41 + l_U48 );
                l_U70 += l_U48;
                l_U89 = 1;
            }
            else if (l_U89 == 1)
            {
                PLAY_SOUND_FROM_POSITION( l_U77, l_U85, l_U71 );
                l_U89 = 0;
            }
        }
    }
    if ((l_U16 > 10) AND (l_U16 <= 100))
    {
        if (DOES_CAM_EXIST( l_U99 ))
        {
            GET_CAM_ROT( l_U99, ref l_U39, ref l_U40, ref l_U41 );
            if (l_U70 > l_U44)
            {
                l_U78 = 0.50000000;
                SET_CAM_ROT( l_U99, l_U39, l_U40, l_U41 - l_U47 );
                l_U70 -= l_U47;
            }
        }
    }
    if ((l_U16 < -10) AND (l_U16 >= 65436))
    {
        if (DOES_CAM_EXIST( l_U99 ))
        {
            GET_CAM_ROT( l_U99, ref l_U39, ref l_U40, ref l_U41 );
            if (l_U70 < l_U43)
            {
                l_U78 = 0.50000000;
                SET_CAM_ROT( l_U99, l_U39, l_U40, l_U41 + l_U47 );
                l_U70 += l_U47;
            }
        }
    }
    l_U80 = l_U78 + l_U79;
    SET_VARIABLE_ON_SOUND( l_U75, "SqueakSpeed", l_U80 );
    l_U81 = 0.00000000;
    if ((l_U19 > 10) AND (l_U19 <= 128))
    {
        if (DOES_CAM_EXIST( l_U99 ))
        {
            GET_CAM_FOV( l_U99, ref l_U42 );
            if (l_U42 < l_U52)
            {
                SET_CAM_FOV( l_U99, l_U42 + l_U49 );
                l_U81 = 0.50000000;
            }
        }
    }
    if ((l_U19 < -10) AND (l_U19 >= 65408))
    {
        if (DOES_CAM_EXIST( l_U99 ))
        {
            GET_CAM_FOV( l_U99, ref l_U42 );
            if (l_U42 > l_U53)
            {
                SET_CAM_FOV( l_U99, l_U42 - l_U49 );
                l_U81 = 1.00000000;
            }
        }
    }
    SET_VARIABLE_ON_SOUND( l_U76, "ZoomSpeed", l_U81 );
    if ((l_U42 > 0) AND (l_U42 <= l_U52))
    {
        l_U48 = l_U42 * l_U50;
        l_U47 = l_U42 * l_U51;
    }
    l_U48 = uVar2;
    return;
}

int sub_8254()
{
    if (IS_CONTROL_PRESSED( 2, 23 ))
    {
        return 1;
    }
    return 0;
}

void sub_8359()
{
    if (NOT (IS_CHAR_DEAD( sub_1132() )))
    {
        if (l_U12 != 0)
        {
            if (l_U12 != 46)
            {
                SET_CURRENT_CHAR_WEAPON( sub_1132(), l_U12, 0 );
            }
            else
            {
                REMOVE_WEAPON_FROM_CHAR( sub_1132(), 46 );
            }
        }
    }
    return;
}

void sub_8824()
{
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    RELEASE_TEXTURE( l_U66 );
    REMOVE_TXD( l_U65 );
    STOP_SOUND( l_U75 );
    RELEASE_SOUND_ID( l_U75 );
    STOP_SOUND( l_U74 );
    RELEASE_SOUND_ID( l_U74 );
    STOP_SOUND( l_U77 );
    RELEASE_SOUND_ID( l_U77 );
    STOP_SOUND( l_U76 );
    RELEASE_SOUND_ID( l_U76 );
    REQUEST_AMBIENT_AUDIO_BANK( "SCRIPT_AMBIENT/BINOCULARS" );
    AMBIENT_AUDIO_BANK_NO_LONGER_NEEDED();
    UNREGISTER_SCRIPT_WITH_AUDIO();
    DISPLAY_RADAR( 1 );
    return;
}
