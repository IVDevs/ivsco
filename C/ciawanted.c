void main()
{
    l_U0 = 0;
    l_U1 = 1;
    l_U2 = 3;
    l_U21 = 0;
    l_U22 = 0;
    l_U23 = 0;
    l_U24 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    sub_44();
    l_U22 = 0;
    l_U23 = 0;
    while (sub_352())
    {
        WAIT( 0 );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_44()
{
    int iVar2;

    StrCopy( ref l_U8[0], "MF2_CCIA7", 16 );
    StrCopy( ref l_U8[1], "MF2_CCIA8", 16 );
    StrCopy( ref l_U8[2], "MF2_CCIA9", 16 );
    iVar2 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 6, ref iVar2 );
    switch (iVar2)
    {
        case 0:
        l_U4[0] = 0;
        l_U4[1] = 1;
        l_U4[2] = 2;
        break;
        case 1:
        l_U4[0] = 0;
        l_U4[1] = 2;
        l_U4[2] = 1;
        break;
        case 2:
        l_U4[0] = 1;
        l_U4[1] = 0;
        l_U4[2] = 2;
        break;
        case 3:
        l_U4[0] = 1;
        l_U4[1] = 2;
        l_U4[2] = 0;
        break;
        case 4:
        l_U4[0] = 2;
        l_U4[1] = 0;
        l_U4[2] = 1;
        break;
        case 5:
        l_U4[0] = 2;
        l_U4[1] = 1;
        l_U4[2] = 0;
        break;
    }
    return;
}

int sub_352()
{
    if (NOT g_U10981[12]._fU8)
    {
        if (NOT g_U0)
        {
            l_U22 = 2;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_392() )))
    {
        return 1;
    }
    switch (l_U22)
    {
        case 0:
        sub_474();
        break;
        case 1:
        sub_605();
        break;
        case 2: return 0;
    }
    sub_6096( "ciaWANTED: Unknown stage" );
    return 1;
}

void sub_392()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_474()
{
    if (l_U23 == 0)
    {
        l_U23++;
    }
    if (l_U23 == 1)
    {
        if (IS_WANTED_LEVEL_GREATER( sub_392(), 4 ))
        {
            l_U23++;
        }
    }
    if (l_U23 == 2)
    {
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_392(), 0 )))
        {
            l_U23 = 99;
        }
    }
    if (l_U23 == 99)
    {
        l_U22 = 1;
        l_U23 = 0;
    }
    return;
}

void sub_605()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (l_U23 == 0)
    {
        l_U24 = iVar2 + 40000;
        l_U23++;
    }
    if (l_U23 == 1)
    {
        if (g_U10978)
        {
            l_U23 = 0;
            l_U22 = 1;
            return;
        }
        l_U23 = 3;
    }
    if (l_U23 == 2)
    {
        l_U24 = iVar2 + 10000;
        l_U23++;
    }
    if (l_U23 == 3)
    {
        if (l_U24 < iVar2)
        {
            if (NOT sub_737())
            {
                l_U23 = 2;
                l_U22 = 1;
                return;
            }
            if (NOT sub_1633())
            {
                l_U23 = 2;
                l_U22 = 1;
                return;
            }
            l_U23++;
            return;
        }
    }
    if (l_U23 == 4)
    {
        if (NOT sub_5630())
        {
            l_U23++;
        }
    }
    if (l_U23 == 5)
    {
        switch (sub_5750())
        {
            case 1:
            l_U23 = 2;
            l_U22 = 1;
            return;
        }
        l_U23 = 99;
    }
    if (l_U23 == 99)
    {
        l_U21++;
        sub_5863();
        sub_5942( 12, 0 );
        if (l_U21 >= 3)
        {
            l_U22 = 2;
        }
        else
        {
            l_U22 = 0;
        }
        l_U23 = 0;
    }
    return;
}

int sub_737()
{
    if ((g_U10978) || (g_U9893._fU12))
    {
        return 0;
    }
    if (IS_WANTED_LEVEL_GREATER( sub_392(), 0 ))
    {
        return 0;
    }
    if (((((IS_THREAD_ACTIVE( g_U812 )) || (sub_802())) || (sub_853())) || (sub_1053( 10000 ))) || (sub_1429()))
    {
        return 0;
    }
    if ((NOT (sub_1477( 12, 30000 ))) || (sub_1542( 12 )))
    {
        return 0;
    }
    return 1;
}

int sub_802()
{
    if ((g_U91._fU0 == 1007) || (g_U91._fU0 == 1008))
    {
        return 1;
    }
    return 0;
}

int sub_853()
{
    int I;

    I = 0;
    for ( I = 0; I < 28; I++ )
    {
        if (g_U15436[I]._fU8)
        {
            return 1;
        }
    }
    for ( I = 0; I < 23; I++ )
    {
        if (g_U22274[I]._fU68)
        {
            return 1;
        }
        if (g_U22274[I]._fU500._fU16)
        {
            return 1;
        }
    }
    for ( I = 0; I < 13; I++ )
    {
        if (g_U15807[I]._fU0)
        {
            if (g_U15807[I]._fU12)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_1053(int iParam0)
{
    int iVar3;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (sub_1073())
    {
        return 1;
    }
    if (sub_1108())
    {
        return 1;
    }
    if (NOT (iParam0 == 0))
    {
        if (NOT (sub_1179( iParam0 )))
        {
            iParam0 = 0;
        }
    }
    if (NOT (iParam0 == 0))
    {
        if (sub_1328( iParam0 ))
        {
            return 1;
        }
        return 0;
    }
    if (g_U63988._fU4 > iVar3)
    {
        return 1;
    }
    return 0;
}

void sub_1073()
{
    return g_U91._fU540;
}

int sub_1108()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (g_U63988._fU0 > iVar2)
    {
        return 1;
    }
    return 0;
}

int sub_1179(int iParam0)
{
    int iVar3;

    iVar3 = sub_1188();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    iVar3 = sub_1243();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    return 0;
}

int sub_1188()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1243()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1328(int iParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    iVar4 = iVar3 - g_U63988._fU8;
    if (iVar4 < iParam0)
    {
        return 1;
    }
    return 0;
}

int sub_1429()
{
    if (g_U555 == 2)
    {
        return 1;
    }
    return 0;
}

boolean sub_1477(int iParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (iParam0 < 57))
    {
        return 1;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    iVar5 = g_U26671[iParam0] + iParam1;
    return iVar5 < iVar4;
}

int sub_1542(int iParam0)
{
    if (iParam0 == 57)
    {
        return 0;
    }
    if (NOT (g_U64542._fU0 == iParam0))
    {
        return 0;
    }
    return 1;
}

void sub_1633()
{
    char[16] cVar2;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    StrCopy( ref cVar2, "MF2AUD", 16 );
    uVar6 = {l_U8[l_U4[l_U21]]};
    return sub_1678( 12, ref uVar6, ref cVar2, 10000, 0 );
}

void sub_1678(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[12] cVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown[2] uVar16;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;

    array(ref cVar7, 2);
    StrCopy( ref cVar7[0], uParam1, 16 );
    StrCopy( ref cVar7[1], "END", 16 );
    array(ref uVar16, 2);
    return sub_1738( uParam0, ref cVar7, uParam2, 0, ref uVar16, ref uVar16, "", uParam3, 1, 0, 1, 0, 0, uParam4 );
}

int sub_1738(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_1808( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_1808( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_392() )))
    {
        sub_1808( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_1969() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1969() ))))
    {
        sub_1808( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_1808( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_2301()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU48 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
        case 1:
        if (g_U91._fU368)
        {
            if ((g_U91._fU372) || (NOT bParam8))
            {
                sub_1808( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
                return 0;
            }
        }
        if (g_U91._fU60 != -1)
        {
            if ((g_U15946[g_U91._fU60]._fU132._fU24 != 5) AND (g_U15946[g_U91._fU60]._fU132._fU24 != 4))
            {
                g_U15946[g_U91._fU60]._fU132._fU24 = 0;
            }
        }
        g_U91._fU368 = 1;
        g_U91._fU372 = bParam8;
        uParam0 = g_U91._fU60;
        break;
        case 2:
        if ((NOT sub_2301()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU52 = 1;
        g_U91._fU56 = 1;
        g_U91._fU372 = 1;
        g_U91._fU368 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    sub_3673( uParam0, ref g_U91._fU176 );
    sub_5054( ref g_U91._fU160 );
    g_U91._fU380 = uParam10;
    g_U91._fU376 = bParam11;
    g_U91._fU420 = uParam12;
    g_U91._fU424 = -1;
    g_U91._fU364 = uParam3;
    StrCopy( ref g_U91._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U8499[I] = {(uParam1^)[I]};
        sub_5294( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
    }
    for ( I = 0; I <= (g_U91._fU260 - 1); I++ )
    {
        if (I < (uParam4^))
        {
            g_U91._fU260[I] = {(uParam4^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU260[I], "", 16 );
        }
    }
    for ( I = 0; I <= (g_U91._fU312 - 1); I++ )
    {
        if (I < (uParam5^))
        {
            g_U91._fU312[I] = {(uParam5^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU312[I], "", 16 );
        }
    }
    StrCopy( ref g_U91._fU208, uParam6, 16 );
    g_U91._fU80 = uParam7;
    g_U91._fU384 = 0;
    g_U91._fU532 = uParam13;
    g_U8394 = 4;
    return 1;
}

void sub_1808(unknown uParam0)
{
    return;
}

void sub_1969()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_2301()
{
    if ((g_U91._fU48) || (g_U91._fU52))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_2358())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_2358()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_392() )))
    {
        sub_1808( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_1808( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_1808( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU100) || (g_U91._fU104))
    {
        sub_1808( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_392() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_1969() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_1969(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_1808( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_1969() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_1808( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_1808( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_392() )))
    {
        sub_1808( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_3673(int iParam0, unknown uParam1)
{
    switch (iParam0)
    {
        case 0:
        StrCopy( (uParam1^), "ROMAN", 32 );
        break;
        case 1:
        StrCopy( (uParam1^), "VLAD", 32 );
        break;
        case 2:
        StrCopy( (uParam1^), "MICHELLE", 32 );
        break;
        case 3:
        StrCopy( (uParam1^), "JACOB", 32 );
        break;
        case 4:
        StrCopy( (uParam1^), "FAUSTIN", 32 );
        break;
        case 5:
        StrCopy( (uParam1^), "MANNY", 32 );
        break;
        case 6:
        StrCopy( (uParam1^), "ELIZABETA", 32 );
        break;
        case 7:
        StrCopy( (uParam1^), "DWAYNE", 32 );
        break;
        case 8:
        StrCopy( (uParam1^), "BRUCIE", 32 );
        break;
        case 9:
        StrCopy( (uParam1^), "PLAYBOY", 32 );
        break;
        case 10:
        StrCopy( (uParam1^), "KATE_MCREARY", 32 );
        break;
        case 11:
        StrCopy( (uParam1^), "FRANCIS_MCREARY", 32 );
        break;
        case 12:
        StrCopy( (uParam1^), "CIA_CHARACTER", 32 );
        break;
        case 13:
        StrCopy( (uParam1^), "PACKIE_MCREARY", 32 );
        break;
        case 14:
        StrCopy( (uParam1^), "RAY_BOCCINO", 32 );
        break;
        case 15:
        StrCopy( (uParam1^), "GERRY_MCREARY", 32 );
        break;
        case 16:
        StrCopy( (uParam1^), "DERRICK_MCREARY", 32 );
        break;
        case 18:
        StrCopy( (uParam1^), "BERNIE", 32 );
        break;
        case 19:
        StrCopy( (uParam1^), "BELL", 32 );
        break;
        case 22:
        StrCopy( (uParam1^), "JIMMY_PEGORINO", 32 );
        break;
        case 20:
        StrCopy( (uParam1^), "GRAVELLI", 32 );
        break;
        case 25:
        StrCopy( (uParam1^), "DIMITRI", 32 );
        break;
        case 26:
        StrCopy( (uParam1^), "MALLORIE", 32 );
        break;
        case 27:
        case 42:
        StrCopy( (uParam1^), "GRACIE", 32 );
        break;
        case 28:
        StrCopy( (uParam1^), "ALEX", 32 );
        break;
        case 29:
        StrCopy( (uParam1^), "KIKI", 32 );
        break;
        case 30:
        StrCopy( (uParam1^), "CARMEN", 32 );
        break;
        case 35:
        StrCopy( (uParam1^), "RECEPTIONIST_F", 32 );
        break;
        case 36:
        StrCopy( (uParam1^), "BLACKMAILER_M", 32 );
        break;
        case 37:
        StrCopy( (uParam1^), "TOM", 32 );
        break;
        case 38:
        StrCopy( (uParam1^), "REAL_BADMAN", 32 );
        break;
        case 39:
        StrCopy( (uParam1^), "BRIAN", 32 );
        break;
        case 40:
        StrCopy( (uParam1^), "PI_CHERISE", 32 );
        break;
        case 41:
        StrCopy( (uParam1^), "PI_ED_LOW", 32 );
        break;
        case 43:
        StrCopy( (uParam1^), "HOSSAN", 32 );
        break;
        case 44:
        StrCopy( (uParam1^), "PI_ILYENA", 32 );
        break;
        case 45:
        StrCopy( (uParam1^), "IVAN", 32 );
        break;
        case 46:
        StrCopy( (uParam1^), "PI_JEFF", 32 );
        break;
        case 47:
        StrCopy( (uParam1^), "PI_MARLENE", 32 );
        break;
        case 48:
        StrCopy( (uParam1^), "CLARENCE", 32 );
        break;
        case 49:
        StrCopy( (uParam1^), "PI_MEL", 32 );
        break;
        case 50:
        StrCopy( (uParam1^), "PATHOS", 32 );
        break;
        case 51:
        StrCopy( (uParam1^), "SARA", 32 );
        break;
        case 52:
        StrCopy( (uParam1^), "GORDON", 32 );
        break;
        case 53:
        StrCopy( (uParam1^), "DARKO_BREVIC", 32 );
        break;
        case 21:
        StrCopy( (uParam1^), "LAZLOW", 32 );
        break;
        case 17:
        StrCopy( (uParam1^), "FIXER", 32 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        if (iParam0 != 56)
        {
            ;
        }
        break;
    }
    return;
}

void sub_5054(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

void sub_5294(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_5630()
{
    if (g_U91._fU60 != -1)
    {
        if ((g_U15946[g_U91._fU60]._fU132._fU24 == 0) || (g_U15946[g_U91._fU60]._fU132._fU24 == 3))
        {
            return 1;
        }
    }
    return 0;
}

int sub_5750()
{
    if (g_U91._fU60 != -1)
    {
        return g_U15946[g_U91._fU60]._fU132._fU24;
    }
    return 6;
}

void sub_5863()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1188();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

void sub_5942(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 57))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U26671[iParam0] = iVar4;
    if (bParam1)
    {
        g_U26671[iParam0] += 30000;
    }
    return;
}

void sub_6096(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}
