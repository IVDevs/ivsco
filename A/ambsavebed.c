void main()
{
    l_U4 = 0;
    l_U5 = 1;
    l_U6 = 3;
    l_U8 = 0;
    l_U9 = 0;
    l_U10 = 0;
    l_U11 = 0;
    l_U178 = 1;
    l_U179 = 0;
    l_U180 = 0;
    l_U181 = 0;
    l_U183 = 0;
    l_U184 = 0;
    l_U196 = 0;
    l_U197 = "AMB@SAVEGAME";
    l_U198 = "";
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    l_U186 = {l_U201._fU4[0]};
    WAIT( 0 );
    l_U182 = g_U10978;
    while (l_U178)
    {
        WAIT( 0 );
        if (IS_PLAYER_PLAYING( sub_168() ))
        {
            if (NOT (IS_CHAR_DEAD( sub_211() )))
            {
                if (sub_265())
                {
                    switch (l_U8)
                    {
                        case 0:
                        sub_371();
                        break;
                        case 1:
                        sub_455();
                        break;
                        case 2:
                        sub_542();
                        break;
                        case 3:
                        sub_1738();
                        break;
                        case 4: break;
                    }
                    sub_6442();
                    if (NOT l_U183)
                    {
                        sub_6470();
                        l_U183 = 1;
                    }
                    else if ((NOT (l_U8 == 4)) AND (NOT g_U9893._fU12))
                    {
                        if ((l_U11 == 2) || (l_U11 == 4))
                        {
                            if ((sub_568()) AND (NOT sub_1159()))
                            {
                                if (sub_8281())
                                {
                                    sub_8332();
                                }
                            }
                        }
                    }
                }
                else
                {
                    l_U178 = 0;
                }
            }
        }
    }
    sub_10187();
    return;
}

void sub_168()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_211()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_265()
{
    if (IS_PLAYER_PLAYING( sub_168() ))
    {
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            return 1;
        }
    }
    return 0;
}

void sub_371()
{
    int iVar2;

    GET_INTERIOR_FROM_CHAR( sub_211(), ref iVar2 );
    if (NOT (iVar2 == nil))
    {
        if (l_U178)
        {
            REQUEST_ANIMS( l_U197 );
            REQUEST_MODEL( -809347846 );
        }
        l_U8 = 1;
    }
    return;
}

void sub_455()
{
    if ((NOT (HAVE_ANIMS_LOADED( l_U197 ))) AND (NOT (HAS_MODEL_LOADED( -809347846 ))))
    {
        REQUEST_ANIMS( l_U197 );
        REQUEST_MODEL( -809347846 );
    }
    else
    {
        l_U8 = 2;
    }
    return;
}

void sub_542()
{
    unknown uVar2;

    if (IS_PLAYER_PLAYING( sub_168() ))
    {
        if (sub_568())
        {
            if (LOCATE_CHAR_ON_FOOT_3D( sub_211(), l_U12[l_U11]._fU92._fU0, l_U12[l_U11]._fU92._fU4, l_U12[l_U11]._fU92._fU8, l_U12[l_U11]._fU104._fU0, l_U12[l_U11]._fU104._fU4, l_U12[l_U11]._fU104._fU8, 0 ))
            {
                if ((((NOT g_U10978) AND (IS_SCREEN_FADED_IN())) AND (NOT IS_MEMORY_CARD_IN_USE())) AND (NOT sub_1159()))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_TRI" )))
                    {
                        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_INFO1" )))
                        {
                            ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                            PRINT_HELP_FOREVER( "BED_TRI" );
                        }
                    }
                    else if (IS_CONTROL_PRESSED( 2, 3 ))
                    {
                        if (sub_1292())
                        {
                            SET_PLAYER_CONTROL( sub_168(), 0 );
                            SET_WIDESCREEN_BORDERS( 1 );
                            CLEAR_HELP();
                            l_U8 = 3;
                            l_U9 = 0;
                        }
                    }
                }
                else if (g_U10978)
                {
                    if (IS_PLAYER_CONTROL_ON( sub_168() ))
                    {
                        if (NOT ARE_WIDESCREEN_BORDERS_ACTIVE())
                        {
                            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_NOSAV" )))
                            {
                                ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                                PRINT_HELP_FOREVER( "BED_NOSAV" );
                            }
                        }
                        else if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_TRI" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_INFO1" )))
                        {
                            CLEAR_HELP();
                        }
                    }
                    else if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_TRI" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_INFO1" )))
                    {
                        CLEAR_HELP();
                    }
                }
                else if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_TRI" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_INFO1" )))
                {
                    CLEAR_HELP();
                };;;
            }
            else if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_TRI" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_NOSAV" )))
            {
                CLEAR_HELP();
            }
        }
    }
    return;
}

int sub_568()
{
    switch (l_U11)
    {
        case 1:
        if (NOT g_U9943[1]._fU0)
        {
            return 0;
        }
        break;
        case 0:
        if (sub_652())
        {
            if (l_U184)
            {
                PRINTNL();
                PRINTSTRING( "roman burned down not active" );
                PRINTNL();
            }
            return 0;
        }
        break;
        case 2:
        if (NOT g_U9943[2]._fU0)
        {
            if (l_U184)
            {
                PRINTNL();
                PRINTSTRING( "manhattan not active" );
                PRINTNL();
            }
            return 0;
        }
        break;
        case 3:
        if (NOT g_U9943[3]._fU0)
        {
            if (l_U184)
            {
                PRINTNL();
                PRINTSTRING( "jersey not active" );
                PRINTNL();
            }
            return 0;
        }
        break;
        case 4:
        if (NOT g_U9943[4]._fU0)
        {
            if (l_U184)
            {
                PRINTNL();
                PRINTSTRING( "playboy not active" );
                PRINTNL();
            }
            return 0;
        }
        break;
    }
    return 1;
}

void sub_652()
{
    int Result;

    Result = 1;
    if (g_U15654[33])
    {
        Result = 1;
    }
    else
    {
        Result = 0;
    }
    return Result;
}

int sub_1159()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_1292()
{
    return sub_1303( 1, 1 );
}

int sub_1303(boolean bParam0, unknown uParam1)
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

void sub_1738()
{
    if (NOT (l_U9 > 5))
    {
        DISABLE_PAUSE_MENU( 1 );
    }
    if (NOT (l_U9 == 8))
    {
        sub_1292();
        sub_1783();
    }
    else
    {
        sub_1907();
    }
    switch (l_U9)
    {
        case 0:
        sub_2026();
        break;
        case 1:
        sub_2174();
        break;
        case 2:
        sub_2244();
        break;
        case 3:
        sub_3485();
        break;
        case 4:
        sub_3716();
        break;
        case 5:
        sub_4034();
        break;
        case 6:
        sub_5676();
        break;
        case 7:
        sub_5938();
        break;
        case 8:
        l_U8 = 2;
        sub_1907();
        break;
    }
    return;
}

void sub_1783()
{
    if ((g_U555 == 1) || (g_U8394 == 4))
    {
        if (g_U91._fU60 != -1)
        {
            g_U15946[g_U91._fU60]._fU132._fU24 = 6;
        }
        if (IS_MOBILE_PHONE_CALL_ONGOING())
        {
            ABORT_SCRIPTED_CONVERSATION( 0 );
        }
        g_U91._fU376 = 0;
        g_U91._fU100 = 1;
    }
    return;
}

void sub_1907()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_2026()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_PLAYER_PLAYING( sub_168() ))
    {
        GET_CHAR_COORDINATES( sub_211(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    }
    if (l_U11 == 3)
    {
        l_U10 = 2;
    }
    else if ((VDIST( uVar2, l_U12[l_U11]._fU16 )) < (VDIST( uVar2, l_U12[l_U11]._fU28 )))
    {
        l_U10 = 1;
    }
    else
    {
        l_U10 = 2;
    }
    l_U9 = 1;
    return;
}

void sub_2174()
{
    if (IS_PLAYER_PLAYING( sub_168() ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_211(), 0, 1 );
        REMOVE_PED_HELMET( sub_211(), 1 );
    }
    l_U9 = 2;
    return;
}

void sub_2244()
{
    unknown uVar2;
    unknown uVar3;

    l_U191 = l_U12[l_U11]._fU88;
    if (l_U10 == 2)
    {
        l_U191 -= 90.00000000;
        if (l_U191 < 0.00000000)
        {
            l_U191 += 360.00000000;
        }
    }
    else
    {
        l_U191 += 90.00000000;
        if (l_U191 > 360.00000000)
        {
            l_U191 -= 360.00000000;
        }
    }
    if (IS_PLAYER_PLAYING( sub_168() ))
    {
        GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar2 );
        if (IS_VEH_DRIVEABLE( uVar2 ))
        {
            if ((LOCATE_CAR_3D( uVar2, l_U12[l_U11]._fU16._fU0, l_U12[l_U11]._fU16._fU4, l_U12[l_U11]._fU16._fU8, 5.00000000, 5.00000000, 1.50000000, 0 )) || (LOCATE_CAR_3D( uVar2, l_U12[l_U11]._fU28._fU0, l_U12[l_U11]._fU28._fU4, l_U12[l_U11]._fU28._fU8, 5.00000000, 5.00000000, 1.50000000, 0 )))
            {
                SET_CAR_COORDINATES( uVar2, l_U12[l_U11]._fU116._fU0, l_U12[l_U11]._fU116._fU4, l_U12[l_U11]._fU116._fU8 );
                SET_CAR_HEADING( uVar2, l_U12[l_U11]._fU128 );
                GET_CAR_MODEL( uVar2, ref uVar3 );
                if ((IS_THIS_MODEL_A_BIKE( uVar3 )) || (IS_THIS_MODEL_A_CAR( uVar3 )))
                {
                    SET_CAR_ON_GROUND_PROPERLY( uVar2 );
                }
            }
        }
        if (l_U10 == 2)
        {
            if (NOT (DOES_OBJECT_EXIST( l_U185 )))
            {
                CREATE_OBJECT( -809347846, l_U12[l_U11]._fU28._fU0, l_U12[l_U11]._fU28._fU4, l_U12[l_U11]._fU28._fU8 + 1.00000000, ref l_U185, 1 );
                SET_OBJECT_COLLISION( l_U185, 0 );
                SET_OBJECT_VISIBLE( l_U185, 0 );
                FREEZE_OBJECT_POSITION( l_U185, 1 );
                SET_OBJECT_HEADING( l_U185, l_U191 );
            }
            SET_CHAR_COORDINATES( sub_211(), l_U12[l_U11]._fU28._fU0, l_U12[l_U11]._fU28._fU4, l_U12[l_U11]._fU28._fU8 );
        }
        else if (NOT (DOES_OBJECT_EXIST( l_U185 )))
        {
            CREATE_OBJECT( -809347846, l_U12[l_U11]._fU16._fU0, l_U12[l_U11]._fU16._fU4, l_U12[l_U11]._fU16._fU8 + 1.00000000, ref l_U185, 1 );
            SET_OBJECT_COLLISION( l_U185, 0 );
            SET_OBJECT_VISIBLE( l_U185, 0 );
            FREEZE_OBJECT_POSITION( l_U185, 1 );
            SET_OBJECT_HEADING( l_U185, l_U191 );
        }
        SET_CHAR_COORDINATES( sub_211(), l_U12[l_U11]._fU16._fU0, l_U12[l_U11]._fU16._fU4, l_U12[l_U11]._fU16._fU8 );;
        SET_CHAR_HEADING( sub_211(), l_U191 );
        if (NOT (IS_PED_ATTACHED_TO_OBJECT( sub_211(), l_U185 )))
        {
            ;
        }
    }
    BEGIN_CAM_COMMANDS( ref l_U194 );
    CREATE_CAM( 14, ref l_U192 );
    if (l_U10 == 2)
    {
        SET_CAM_POS( l_U192, l_U12[l_U11]._fU40._fU0, l_U12[l_U11]._fU40._fU4, l_U12[l_U11]._fU40._fU8 );
        SET_CAM_ROT( l_U192, l_U12[l_U11]._fU52._fU0, l_U12[l_U11]._fU52._fU4, l_U12[l_U11]._fU52._fU8 );
    }
    else
    {
        SET_CAM_POS( l_U192, l_U12[l_U11]._fU64._fU0, l_U12[l_U11]._fU64._fU4, l_U12[l_U11]._fU64._fU8 );
        SET_CAM_ROT( l_U192, l_U12[l_U11]._fU76._fU0, l_U12[l_U11]._fU76._fU4, l_U12[l_U11]._fU76._fU8 );
    }
    SET_CAM_NEAR_CLIP( l_U192, 0.10000000 );
    SET_CAM_ACTIVE( l_U192, 1 );
    SET_CAM_PROPAGATE( l_U192, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    l_U9 = 3;
    GET_GAME_TIMER( ref l_U195 );
    return;
}

void sub_3485()
{
    if (IS_PLAYER_PLAYING( sub_168() ))
    {
        FREEZE_CHAR_POSITION( sub_211(), 1 );
        if (HAVE_ANIMS_LOADED( l_U197 ))
        {
            OPEN_SEQUENCE_TASK( ref l_U189 );
            if (l_U10 == 2)
            {
                TASK_PLAY_ANIM_WITH_FLAGS( 0, "LIE_ON_BED_R", l_U197, 4.00000000, 0, 160 );
            }
            else
            {
                TASK_PLAY_ANIM_WITH_FLAGS( 0, "LIE_ON_BED_L", l_U197, 4.00000000, 0, 160 );
            }
            CLOSE_SEQUENCE_TASK( l_U189 );
            TASK_PERFORM_SEQUENCE( sub_211(), l_U189 );
            CLEAR_SEQUENCE_TASK( l_U189 );
            l_U9 = 4;
        }
        else
        {
            REQUEST_ANIMS( l_U197 );
        }
    }
    return;
}

void sub_3716()
{
    if (IS_PLAYER_PLAYING( sub_168() ))
    {
        if (IS_PLAYER_PLAYING( sub_168() ))
        {
            SET_USE_LEG_IK( sub_168(), 0 );
        }
        GET_SCRIPT_TASK_STATUS( sub_211(), 29, ref l_U190 );
        if (l_U190 == 1)
        {
            if (l_U10 == 2)
            {
                if (IS_CHAR_PLAYING_ANIM( sub_211(), l_U197, "LIE_ON_BED_R" ))
                {
                    if (HAS_CHAR_ANIM_FINISHED( sub_211(), l_U197, "LIE_ON_BED_R" ))
                    {
                        DO_SCREEN_FADE_OUT( 700 );
                        l_U9 = 5;
                    }
                }
            }
            else if (IS_CHAR_PLAYING_ANIM( sub_211(), l_U197, "LIE_ON_BED_L" ))
            {
                if (HAS_CHAR_ANIM_FINISHED( sub_211(), l_U197, "LIE_ON_BED_L" ))
                {
                    DO_SCREEN_FADE_OUT( 700 );
                    l_U9 = 5;
                }
            }
        }
        else if ((l_U190 == 7) || (l_U190 == 2))
        {
            l_U9 = 7;
        }
    }
    return;
}

void sub_4034()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_PLAYER_PLAYING( sub_168() ))
    {
        SET_USE_LEG_IK( sub_168(), 0 );
    }
    if (IS_SCREEN_FADED_OUT())
    {
        if (IS_PLAYER_PLAYING( sub_168() ))
        {
            while (IS_MEMORY_CARD_IN_USE())
            {
                if (IS_PLAYER_PLAYING( sub_168() ))
                {
                    SET_USE_LEG_IK( sub_168(), 0 );
                }
                WAIT( 0 );
                if (IS_PLAYER_PLAYING( sub_168() ))
                {
                    SET_USE_LEG_IK( sub_168(), 0 );
                }
            }
            if (IS_PLAYER_PLAYING( sub_168() ))
            {
                if (IS_PLAYER_PLAYING( sub_168() ))
                {
                    SET_USE_LEG_IK( sub_168(), 0 );
                }
                sub_4235( 1 );
                if (IS_PLAYER_PLAYING( sub_168() ))
                {
                    CLEAR_WANTED_LEVEL( sub_168() );
                    CLEAR_AREA_OF_COPS( l_U186._fU0, l_U186._fU4, l_U186._fU8, 100.00000000 );
                    SET_CHAR_HEALTH( sub_211(), 200 );
                    SET_PLAYER_MOOD_NORMAL( sub_168() );
                    RESET_VISIBLE_PED_DAMAGE( sub_211() );
                }
                if (NOT g_U10978)
                {
                    sub_4477();
                    ACTIVATE_SAVE_MENU();
                }
                WAIT( 0 );
                if (IS_PLAYER_PLAYING( sub_168() ))
                {
                    SET_USE_LEG_IK( sub_168(), 0 );
                }
                if (DID_SAVE_COMPLETE_SUCCESSFULLY())
                {
                    INCREMENT_INT_STAT_NO_MESSAGE( 420, 1 );
                    SET_INT_STAT( 271, 0 );
                }
            }
            if (IS_PLAYER_PLAYING( sub_168() ))
            {
                GET_CHAR_COORDINATES( sub_211(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            }
            if (((l_U11 == 2) || (l_U11 == 4)) || (l_U11 == 3))
            {
                l_U200 = "ALARM_CLOCK_MECH_MULTI";
            }
            else
            {
                l_U200 = "ALARM_CLOCK_ELECTRIC_LOOP";
            }
            DO_SCREEN_FADE_IN( 1000 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                if (IS_PLAYER_PLAYING( sub_168() ))
                {
                    SET_USE_LEG_IK( sub_168(), 0 );
                }
                WAIT( 0 );
            }
            if (IS_PLAYER_PLAYING( sub_168() ))
            {
                SET_USE_LEG_IK( sub_168(), 0 );
            }
            l_U181 = 0;
            if (DID_SAVE_COMPLETE_SUCCESSFULLY())
            {
                l_U199 = GET_SOUND_ID();
                PLAY_SOUND_FROM_POSITION( l_U199, l_U200, uVar2 );
                l_U181 = 1;
                if (NOT g_U8705)
                {
                    if (l_U196 < 6)
                    {
                        PRINT_HELP( "BED_INFO1" );
                        g_U8705 = 1;
                    }
                }
            }
            DISABLE_PAUSE_MENU( 0 );
            l_U9 = 6;
        }
    }
    return;
}

void sub_4235(boolean bParam0)
{
    boolean bVar3;

    bVar3 = false;
    if (bParam0)
    {
        bVar3 = true;
    }
    else
    {
        bVar3 = true;
    }
    if (bVar3)
    {
        if ((NOT (g_U9172 == 0)) || (NOT (g_U9173 == 0)))
        {
            StrCopy( ref g_U9174, "", 16 );
            g_U9172 = 0;
            g_U9173 = 0;
            g_U9178 = nil;
            sub_1907();
            if (IS_PLAYER_PLAYING( sub_168() ))
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_168(), 1 );
            }
        }
    }
    return;
}

void sub_4477()
{
    int iVar2;
    unknown uVar3;

    GET_TIME_OF_DAY( ref iVar2, ref uVar3 );
    l_U196 = sub_4496( 1 );
    iVar2 += l_U196;
    if (iVar2 >= 24)
    {
        iVar2 -= 24;
    }
    FORWARD_TO_TIME_OF_DAY( iVar2, uVar3 );
    return;
}

int sub_4496(boolean bParam0)
{
    int I;
    int iVar4;
    unknown uVar5;
    int iVar6;
    boolean bVar7;
    int iVar8;

    iVar4 = sub_4505();
    uVar5 = GET_CURRENT_DAY_OF_WEEK();
    iVar6 = 7 - 1;
    bVar7 = true;
    iVar8 = 0;
    sub_4608( ref iVar4, 1, 0, 3 );
    iVar8 += sub_4717( iVar4 );
    if (iVar4 == 0)
    {
        sub_4608( ref uVar5, 1, 0, 6 );
        iVar6--;
    }
    for ( I = 0; I <= iVar6; I++ )
    {
        while (bVar7)
        {
            if ((bParam0) AND (iVar8 >= 6))
            {
                return 6;
            }
            if ((sub_4885( uVar5, iVar4 )) != 0)
            {
                return iVar8 - 1;
            }
            else
            {
                sub_4608( ref iVar4, 1, 0, 3 );
                iVar8 += sub_5070( iVar4 );
                if (iVar4 == 0)
                {
                    bVar7 = false;
                }
            }
        }
        bVar7 = true;
        sub_4608( ref uVar5, 1, 0, 6 );
    }
    if (bParam0)
    {
        return 6;
    }
    return -1;
}

int sub_4505()
{
    int iVar2;

    iVar2 = GET_HOURS_OF_DAY();
    if (iVar2 < 8)
    {
        return 0;
    }
    else if (iVar2 < 12)
    {
        return 1;
    }
    else if (iVar2 < 18)
    {
        return 2;
    };;;
    return 3;
}

void sub_4608(unknown uParam0, int iParam1, int iParam2, int iParam3)
{
    boolean bVar6;

    bVar6 = true;
    (uParam0^) += iParam1;
    while (bVar6)
    {
        if ((uParam0^) > iParam3)
        {
            (uParam0^) -= (iParam3 - iParam2) + 1;
        }
        else if ((uParam0^) < iParam2)
        {
            (uParam0^) += (iParam3 - iParam2) + 1;
        }
        else
        {
            bVar6 = false;
        }
    }
    return;
}

int sub_4717(unknown uParam0)
{
    int iVar3;

    iVar3 = GET_HOURS_OF_DAY();
    switch (uParam0)
    {
        case 0:
        return 24 - iVar3;
        break;
        case 1:
        return 8 - iVar3;
        break;
        case 2:
        return 12 - iVar3;
        break;
    }
    return 18 - iVar3;
}

int sub_4885(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU0, 0, 15 );
        case 1: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU0, 16, 31 );
        case 2: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU4, 0, 15 );
        case 3: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU4, 16, 31 );
    }
    return -1;
}

int sub_5070(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        return 8;
        break;
        case 2:
        return 4;
        break;
    }
    return 6;
}

void sub_5676()
{
    if (IS_PLAYER_PLAYING( sub_168() ))
    {
        SET_USE_LEG_IK( sub_168(), 0 );
    }
    if (IS_SCREEN_FADED_IN())
    {
        if (IS_PLAYER_PLAYING( sub_168() ))
        {
            if (HAVE_ANIMS_LOADED( l_U197 ))
            {
                OPEN_SEQUENCE_TASK( ref l_U189 );
                if (l_U10 == 2)
                {
                    TASK_PLAY_ANIM_WITH_FLAGS( 0, "GET_OUT_BED_R", l_U197, 1000.00000000, 0, 200 );
                }
                else
                {
                    TASK_PLAY_ANIM_WITH_FLAGS( 0, "GET_OUT_BED_L", l_U197, 1000.00000000, 0, 200 );
                }
                CLOSE_SEQUENCE_TASK( l_U189 );
                TASK_PERFORM_SEQUENCE( sub_211(), l_U189 );
                CLEAR_SEQUENCE_TASK( l_U189 );
                l_U9 = 7;
            }
            else
            {
                REQUEST_ANIMS( l_U197 );
            }
        }
    }
    return;
}

void sub_5938()
{
    boolean bVar2;

    bVar2 = false;
    if (IS_PLAYER_PLAYING( sub_168() ))
    {
        GET_SCRIPT_TASK_STATUS( sub_211(), 29, ref l_U190 );
        if ((l_U190 == 7) || (l_U190 == 2))
        {
            if (l_U181)
            {
                STOP_SOUND( l_U199 );
                RELEASE_SOUND_ID( l_U199 );
                l_U181 = 0;
            }
            if (IS_PLAYER_PLAYING( sub_168() ))
            {
                if (l_U10 == 2)
                {
                    ;
                }
            }
            FREEZE_CHAR_POSITION( sub_211(), 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            DESTROY_CAM( l_U192 );
            END_CAM_COMMANDS( ref l_U194 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            if (IS_PLAYER_PLAYING( sub_168() ))
            {
                SET_CAM_BEHIND_PED( sub_211() );
                SET_PLAYER_CONTROL( sub_168(), 1 );
            }
            SET_WIDESCREEN_BORDERS( 0 );
            sub_1907();
            l_U9 = 8;
        }
        else
        {
            SET_USE_LEG_IK( sub_168(), 0 );
            if (l_U190 == 1)
            {
                if (l_U10 == 2)
                {
                    if (IS_CHAR_PLAYING_ANIM( sub_211(), l_U197, "GET_OUT_BED_R" ))
                    {
                        if (HAS_CHAR_ANIM_FINISHED( sub_211(), l_U197, "GET_OUT_BED_R" ))
                        {
                            bVar2 = true;
                        }
                    }
                }
                else if (IS_CHAR_PLAYING_ANIM( sub_211(), l_U197, "GET_OUT_BED_L" ))
                {
                    if (HAS_CHAR_ANIM_FINISHED( sub_211(), l_U197, "GET_OUT_BED_L" ))
                    {
                        bVar2 = true;
                    }
                }
            }
            if (bVar2)
            {
                ;
            }
        }
    }
    return;
}

void sub_6442()
{
    return;
}

void sub_6470()
{
    int I;
    int iVar3;
    float fVar4;
    float fVar5;
    boolean bVar6;

    iVar3 = 99;
    fVar4 = 1E8;
    bVar6 = false;
    l_U12[0]._fU0 = 1;
    l_U12[0]._fU16 = {890.99980000, -496.28500000, 18.40230000};
    l_U12[0]._fU28 = {891.39500000, -493.25090000, 18.40230000};
    l_U12[0]._fU40 = {893.57780000, -491.87740000, 20.27680000};
    l_U12[0]._fU52 = {-14.35632000, -0.00000000, 146.20300000};
    l_U12[0]._fU64 = {889.81420000, -493.85280000, 19.23510000};
    l_U12[0]._fU76 = {0.12968600, -0.00000000, -143.93800000};
    l_U12[0]._fU4 = {891.22500000, -494.70100000, 18.79760000};
    l_U12[0]._fU88 = 270.00000000;
    l_U12[0]._fU92 = {891.10900000, -494.72760000, 19.37210000};
    l_U12[0]._fU104 = {1.80000000, 1.80000000, 3.00000000};
    l_U12[0]._fU116 = {903.54660000, -508.25090000, 13.88070000};
    l_U12[0]._fU128 = 180.00000000;
    l_U12[1]._fU0 = 1;
    l_U12[1]._fU16 = {599.54200000, 1411.40600000, 16.47130000};
    l_U12[1]._fU28 = {602.62400000, 1411.39600000, 16.47130000};
    l_U12[1]._fU40 = {604.86240000, 1408.87200000, 17.99161000};
    l_U12[1]._fU52 = {-9.25783800, 0.00000000, 55.31758000};
    l_U12[1]._fU64 = {604.86240000, 1408.87200000, 17.99161000};
    l_U12[1]._fU76 = {-9.25783800, 0.00000000, 55.31758000};
    l_U12[1]._fU4 = {601.17930000, 1411.32500000, 16.88680000};
    l_U12[1]._fU88 = 180.00000000;
    l_U12[1]._fU92 = {601.17930000, 1411.67500000, 16.88680000};
    l_U12[1]._fU104 = {1.79800000, 1.46800000, 3.00000000};
    l_U12[1]._fU116 = {590.04010000, 1408.49800000, 9.85030000};
    l_U12[1]._fU128 = 0.00000000;
    l_U12[2]._fU0 = 1;
    l_U12[2]._fU16 = {102.77030000, 843.20200000, 44.04590000};
    l_U12[2]._fU28 = {103.31260000, 846.62600000, 44.04590000};
    l_U12[2]._fU40 = {107.66030000, 845.21270000, 47.72564000};
    l_U12[2]._fU52 = {-32.10978000, 0.00000000, 88.93912000};
    l_U12[2]._fU64 = {107.66030000, 845.21270000, 47.72564000};
    l_U12[2]._fU76 = {-32.10978000, 0.00000000, 88.93912000};
    l_U12[2]._fU4 = {102.59000000, 845.95000000, 48.00000000};
    l_U12[2]._fU88 = 270.00000000;
    l_U12[2]._fU92 = {103.42080000, 844.90140000, 45.05100000};
    l_U12[2]._fU104 = {2.10000000, 1.80000000, 3.00000000};
    l_U12[2]._fU116 = {118.89330000, 858.11280000, 13.61220000};
    l_U12[2]._fU128 = 180.00000000;
    l_U12[3]._fU0 = 0;
    l_U12[3]._fU16 = {-969.55700000, 891.74000000, 18.00100000};
    l_U12[3]._fU28 = {-969.55700000, 891.74000000, 18.00100000};
    l_U12[3]._fU40 = {-968.29220000, 888.43180000, 20.64495000};
    l_U12[3]._fU52 = {-23.84027000, -0.00000000, 47.16120000};
    l_U12[3]._fU64 = {-968.29220000, 888.43180000, 20.64495000};
    l_U12[3]._fU76 = {-23.84027000, -0.00000000, 47.16120000};
    l_U12[3]._fU4 = {-971.00000000, 891.20000000, 18.00000000};
    l_U12[3]._fU88 = 180.00000000;
    l_U12[3]._fU92 = {-970.89780000, 891.92800000, 19.00620000};
    l_U12[3]._fU104 = {1.50000000, 1.34000000, 3.00000000};
    l_U12[3]._fU116 = {-956.63680000, 901.05680000, 12.57360000};
    l_U12[3]._fU128 = 270.00000000;
    l_U12[4]._fU0 = 1;
    l_U12[4]._fU16 = {-430.73100000, 1462.70900000, 37.98590000};
    l_U12[4]._fU28 = {-430.73100000, 1459.39400000, 37.99250000};
    l_U12[4]._fU40 = {-433.10250000, 1460.73600000, 40.23581000};
    l_U12[4]._fU52 = {-29.82173000, 0.00000000, -87.73447000};
    l_U12[4]._fU64 = {-433.10250000, 1460.73600000, 40.23581000};
    l_U12[4]._fU76 = {-29.82173000, 0.00000000, -87.73447000};
    l_U12[4]._fU4 = {-430.40000000, 1460.83000000, 37.80000000};
    l_U12[4]._fU88 = 90.00000000;
    l_U12[4]._fU92 = {-430.56450000, 1461.02600000, 38.97130000};
    l_U12[4]._fU104 = {1.80000000, 1.90000000, 3.00000000};
    l_U12[4]._fU116 = {-409.56390000, 1492.17000000, 17.74340000};
    l_U12[4]._fU128 = 270.00000000;
    for ( I = 0; I < 5; I++ )
    {
        fVar5 = VDIST( l_U186, l_U12[I]._fU4 );
        if (fVar5 < fVar4)
        {
            iVar3 = I;
            fVar4 = fVar5;
            bVar6 = true;
        }
    }
    if (bVar6)
    {
        l_U11 = iVar3;
    }
    return;
}

int sub_8281()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U26757)
    {
        return 0;
    }
    return 1;
}

void sub_8332()
{
    vector[5] vVar2;
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
    vector[5] vVar18;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    float[5] fVar34;
    vector[5] vVar40;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    vector[5] vVar56;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    unknown uVar66;
    unknown uVar67;
    unknown uVar68;
    unknown uVar69;
    unknown uVar70;
    unknown uVar71;
    float[5] fVar72;
    string[5] sVar78;
    string[5] sVar84;
    int[5] iVar90;
    unknown uVar96;

    array(ref vVar2, 5);
    array(ref vVar18, 5);
    array(ref fVar34, 5);
    array(ref vVar40, 5);
    array(ref vVar56, 5);
    array(ref fVar72, 5);
    array(ref sVar78, 5);
    array(ref sVar84, 5);
    array(ref iVar90, 5);
    vVar2[2] = {97.23400000, 840.93100000, 16.28700000};
    vVar40[2] = {96.08600000, 851.79200000, 45.51100000};
    vVar18[2] = {100.08150000, 843.68710000, 14.78720000};
    fVar34[2] = 270.00000000;
    vVar56[2] = {98.37940000, 851.59840000, 44.04610000};
    fVar72[2] = 270.00000000;
    sVar78[2] = "loftrm1";
    iVar90[2] = 0;
    vVar2[4] = {-427.32200000, 1474.40800000, 20.62600000};
    vVar40[4] = {-426.13100000, 1467.48700000, 39.43000000};
    vVar18[4] = {-421.87830000, 1487.54400000, 17.82460000};
    fVar34[4] = 0.00000000;
    vVar56[4] = {-425.86730000, 1463.99900000, 37.93130000};
    fVar72[4] = 180.00000000;
    sVar78[4] = "PlayXroom";
    sVar84[4] = "GtaMloRoom4";
    iVar90[4] = 0;
    if (l_U182 == 0)
    {
        if (NOT l_U180)
        {
            if (g_U10978)
            {
                l_U180 = 1;
            }
        }
    }
    else if (NOT g_U10978)
    {
        l_U182 = 0;
    }
    if (IS_PLAYER_PLAYING( sub_168() ))
    {
        if (LOCATE_CHAR_ON_FOOT_3D( sub_211(), vVar40[l_U11]._fU0, vVar40[l_U11]._fU4, vVar40[l_U11]._fU8, 1.20000000, 1.20000000, 1.60000000, 1 ))
        {
            if (NOT l_U179)
            {
                l_U179 = 1;
            }
            else if (NOT IS_SCREEN_FADING())
            {
                if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHWARPI" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHWARPE" )))
                {
                    CLEAR_HELP();
                }
                l_U179 = 0;
                DO_SCREEN_FADE_OUT( 2000 );
                while (IS_SCREEN_FADING())
                {
                    WAIT( 0 );
                }
                if (IS_PLAYER_PLAYING( sub_168() ))
                {
                    CLEAR_CHAR_TASKS( sub_211() );
                    SET_PLAYER_CONTROL( sub_168(), 0 );
                }
                if (IS_PLAYER_PLAYING( sub_168() ))
                {
                    CLEAR_AREA( vVar18[l_U11]._fU0, vVar18[l_U11]._fU4, vVar18[l_U11]._fU8, 4.00000000, 1 );
                    SET_CHAR_COORDINATES( sub_211(), vVar18[l_U11]._fU0, vVar18[l_U11]._fU4, vVar18[l_U11]._fU8 );
                    if (iVar90[l_U11])
                    {
                        SET_ROOM_FOR_CHAR_BY_NAME( sub_211(), sVar84[l_U11] );
                    }
                    SET_CHAR_HEADING( sub_211(), fVar34[l_U11] );
                    SET_CAM_BEHIND_PED( sub_211() );
                    LOAD_SCENE( vVar18[l_U11]._fU0, vVar18[l_U11]._fU4, vVar18[l_U11]._fU8 );
                }
                if (IS_PLAYER_PLAYING( sub_168() ))
                {
                    SET_PLAYER_CONTROL( sub_168(), 1 );
                }
                DO_SCREEN_FADE_IN( 2000 );
                while (IS_SCREEN_FADING())
                {
                    WAIT( 0 );
                }
            }
        }
        else if (LOCATE_CHAR_ON_FOOT_3D( sub_211(), vVar2[l_U11]._fU0, vVar2[l_U11]._fU4, vVar2[l_U11]._fU8, 1.60000000, 1.60000000, 1.60000000, 1 ))
        {
            if (NOT IS_SCREEN_FADING())
            {
                if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHWARPI" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHWARPE" )))
                {
                    CLEAR_HELP();
                }
                l_U179 = 0;
                DO_SCREEN_FADE_OUT( 2000 );
                while (IS_SCREEN_FADING())
                {
                    WAIT( 0 );
                }
                if (IS_PLAYER_PLAYING( sub_168() ))
                {
                    CLEAR_CHAR_TASKS( sub_211() );
                    SET_PLAYER_CONTROL( sub_168(), 0 );
                }
                if (IS_PLAYER_PLAYING( sub_168() ))
                {
                    CLEAR_AREA( vVar56[l_U11]._fU0, vVar56[l_U11]._fU4, vVar56[l_U11]._fU8, 4.00000000, 1 );
                    if (IS_CHAR_IN_ANY_CAR( sub_211() ))
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( sub_211(), vVar56[l_U11]._fU0, vVar56[l_U11]._fU4, vVar56[l_U11]._fU8 );
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( sub_211(), vVar56[l_U11]._fU0, vVar56[l_U11]._fU4, vVar56[l_U11]._fU8 );
                    }
                    SET_ROOM_FOR_CHAR_BY_NAME( sub_211(), sVar78[l_U11] );
                    SET_CHAR_HEADING( sub_211(), fVar72[l_U11] );
                    SET_CAM_BEHIND_PED( sub_211() );
                    LOAD_SCENE( vVar56[l_U11]._fU0, vVar56[l_U11]._fU4, vVar56[l_U11]._fU8 );
                    GET_GAME_VIEWPORT_ID( ref l_U193 );
                    if (l_U11 == 2)
                    {
                        REQUEST_INTERIOR_MODELS( 10689274, "loftrm1" );
                        SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U193, "loftrm1" );
                    }
                    else if (l_U11 == 4)
                    {
                        REQUEST_INTERIOR_MODELS( 61378951, "PlayXroom" );
                        REQUEST_INTERIOR_MODELS( 61378951, "PlayXroom_bed" );
                        SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U193, "PlayXroom" );
                    }
                }
                uVar96 = GET_SOUND_ID();
                PLAY_SOUND_FROM_POSITION( uVar96, "SAFEHOUSE_LIFT_TONE", vVar40[l_U11] );
                RELEASE_SOUND_ID( uVar96 );
                if (IS_PLAYER_PLAYING( sub_168() ))
                {
                    CLEAR_CHAR_TASKS( sub_211() );
                    SET_PLAYER_CONTROL( sub_168(), 1 );
                }
                DO_SCREEN_FADE_IN( 2000 );
                while (IS_SCREEN_FADING())
                {
                    WAIT( 0 );
                }
            }
        }
        else if (l_U179)
        {
            if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHWARPI" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHWARPE" )))
            {
                CLEAR_HELP();
            }
            l_U179 = 0;
        };;;
    }
    return;
}

void sub_10187()
{
    REMOVE_ANIMS( l_U197 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -809347846 );
    if ((((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_TRI" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_NOSAV" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHWARPI" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHWARPE" )))
    {
        CLEAR_HELP();
    }
    UNREGISTER_SCRIPT_WITH_AUDIO();
    TERMINATE_THIS_SCRIPT();
    return;
}
