void main()
{
    l_U4 = 0;
    l_U5 = 1;
    l_U6 = 3;
    l_U8 = 0;
    l_U25 = -1;
    l_U29 = 0;
    l_U30 = 1;
    l_U31 = 1;
    l_U39 = 150.00000000;
    l_U129 = 0;
    l_U130 = 150.00000000;
    l_U180 = 0;
    l_U483 = 0;
    l_U484 = 0;
    l_U485 = 0;
    l_U486 = 0;
    l_U487 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    l_U481 = 0;
    l_U483 = 0;
    l_U486 = 0;
    l_U484 = 0;
    l_U485 = 0;
    l_U488 = {1235.80000000, -504.53000000, 13.04430000};
    l_U491 = {g_U9387[4]._fU0};
    l_U487 = 1;
    while (NOT g_U15654[0])
    {
        WAIT( 0 );
    }
    sub_212();
    g_U15654[3] = 1;
    while (true)
    {
        WAIT( 0 );
        sub_274();
        sub_5823();
        sub_24394();
        if (g_U15654[4])
        {
            if (NOT g_U15654[1])
            {
                sub_12770();
            }
        }
    }
    sub_12770();
    return;
}

void sub_212()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    l_U482 = iVar2 + 1000;
    return;
}

void sub_274()
{
    int iVar2;
    unknown uVar3;

    if ((l_U484) || (l_U485))
    {
        return;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_302() )))
    {
        sub_346();
        return;
    }
    if (g_U15654[4])
    {
        l_U486 = 1;
        if (g_U15654[1])
        {
            l_U485 = 1;
        }
        return;
    }
    if (NOT l_U486)
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_461(), l_U491._fU0, l_U491._fU4, l_U491._fU8, 175.00000000, 175.00000000, 175.00000000, 0 )))
        {
            return;
        }
    }
    l_U486 = 1;
    if (((((g_U10978) || (IS_THREAD_ACTIVE( g_U812 ))) || (IS_WANTED_LEVEL_GREATER( sub_302(), 0 ))) || (sub_593())) || (sub_644()))
    {
        sub_346();
        return;
    }
    if (l_U483)
    {
        if (((sub_865( 0 )) || (NOT (sub_1244( 0, 30000 )))) || (sub_1310( 0 )))
        {
            sub_346();
            return;
        }
    }
    if (g_U9893._fU12)
    {
        sub_346();
        return;
    }
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (l_U482 > iVar2)
    {
        return;
    }
    if (l_U483)
    {
        uVar3 = sub_1436();
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_461(), l_U488._fU0, l_U488._fU4, l_U488._fU8, uVar3, uVar3, uVar3, 0 ))
        {
            sub_346();
            return;
        }
    }
    if (sub_1594( l_U481, "R4_CALL1", "R4AUD", 10000, 0 ))
    {
        g_U26757 = iVar2 + 2000;
    }
    else
    {
        sub_346();
        return;
    }
    g_U15654[1] = 1;
    g_U15654[2] = 1;
    l_U483 = 1;
    while (sub_5517())
    {
        WAIT( 0 );
        GET_GAME_TIMER( ref iVar2 );
        g_U26757 = iVar2 + 2000;
    }
    GET_GAME_TIMER( ref iVar2 );
    switch (sub_5658())
    {
        case 1:
        case 2:
        l_U482 = iVar2 + 30000;
        return;
    }
    if (sub_5756())
    {
        l_U482 = iVar2 + 12000;
        return;
    }
    g_U64905 = 1;
    l_U484 = 1;
    return;
}

void sub_302()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_346()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + 7000;
    if (l_U482 < iVar3)
    {
        l_U482 = iVar2 + 12000;
    }
    return;
}

void sub_461()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_593()
{
    if ((g_U91._fU0 == 1007) || (g_U91._fU0 == 1008))
    {
        return 1;
    }
    return 0;
}

int sub_644()
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

int sub_865(int iParam0)
{
    int iVar3;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (sub_885())
    {
        return 1;
    }
    if (sub_920())
    {
        return 1;
    }
    if (NOT (iParam0 == 0))
    {
        if (NOT (sub_991( iParam0 )))
        {
            iParam0 = 0;
        }
    }
    if (NOT (iParam0 == 0))
    {
        if (sub_1140( iParam0 ))
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

void sub_885()
{
    return g_U91._fU540;
}

int sub_920()
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

int sub_991(int iParam0)
{
    int iVar3;

    iVar3 = sub_1000();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    iVar3 = sub_1055();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    return 0;
}

int sub_1000()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1055()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1140(int iParam0)
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

boolean sub_1244(int iParam0, int iParam1)
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

int sub_1310(int iParam0)
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

void sub_1436()
{
    float Result;

    if (IS_CHAR_DEAD( sub_461() ))
    {
        return 300.00000000;
    }
    Result = 150.00000000;
    if (IS_CHAR_IN_ANY_CAR( sub_461() ))
    {
        Result = 300.00000000;
    }
    return Result;
}

void sub_1594(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_1654( uParam0, ref cVar7, uParam2, 0, ref uVar16, ref uVar16, "", uParam3, 1, 0, 1, 0, 0, uParam4 );
}

int sub_1654(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_1724( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_1724( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_302() )))
    {
        sub_1724( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_461() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_461() ))))
    {
        sub_1724( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_1724( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_2181()) AND (NOT bParam11))
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
                sub_1724( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT sub_2181()) AND (NOT bParam11))
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
    sub_3553( uParam0, ref g_U91._fU176 );
    sub_4934( ref g_U91._fU160 );
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
        sub_5174( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

void sub_1724(unknown uParam0)
{
    return;
}

int sub_2181()
{
    if ((g_U91._fU48) || (g_U91._fU52))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_2238())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_2238()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_302() )))
    {
        sub_1724( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_1724( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_1724( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU100) || (g_U91._fU104))
    {
        sub_1724( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_302() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_461() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_461(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_1724( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_461() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_1724( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_1724( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_302() )))
    {
        sub_1724( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_3553(int iParam0, unknown uParam1)
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

void sub_4934(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

void sub_5174(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_5517()
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

int sub_5658()
{
    if (g_U91._fU60 != -1)
    {
        return g_U15946[g_U91._fU60]._fU132._fU24;
    }
    return 6;
}

void sub_5756()
{
    return g_U91._fU504;
}

void sub_5823()
{
    if (NOT l_U485)
    {
        return;
    }
    g_U15654[6] = 1;
    sub_5857( 0, 0 );
    sub_12770();
    return;
}

void sub_5857(unknown uParam0, unknown uParam1)
{
    sub_5870( uParam0, uParam1 );
    return;
}

void sub_5870(boolean bParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = 0;
    iVar5 = 0;
    sub_5889( iVar4, uParam1 );
    if (bParam0)
    {
        sub_11301( iVar5 );
    }
    return;
}

void sub_5889(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    int iVar5;

    if (NOT g_U22274[uParam0]._fU500._fU0)
    {
        return;
    }
    if (g_U22274[uParam0]._fU500._fU4)
    {
        return;
    }
    uVar4 = sub_5951( uParam0 );
    if (g_U13391[uVar4]._fU80._fU0 == 1)
    {
        sub_6369( uVar4 );
    }
    if (g_U13391[uVar4]._fU0._fU0 == 1)
    {
        sub_10761( uVar4 );
    }
    if (g_U13391[uVar4]._fU160._fU0)
    {
        if (g_U13391[uVar4]._fU160._fU8)
        {
            g_U15946[uParam0]._fU8[0]._fU0[3] = 0;
        }
        g_U13391[uVar4]._fU160._fU108._fU0 = 0;
    }
    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    g_U22274[uParam0]._fU500._fU4 = 1;
    g_U22274[uParam0]._fU500._fU168 = iVar5 + g_U22274[uParam0]._fU500._fU164;
    g_U22274[uParam0]._fU500._fU184 = uParam1;
    sub_11267( "CONTACT HOSPITALISED\n" );
    return;
}

int sub_5951(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 1: return 1;
        case 2: return 2;
        case 3: return 3;
        case 4: return 4;
        case 5: return 5;
        case 6: return 6;
        case 7: return 7;
        case 8: return 8;
        case 9: return 9;
        case 10: return 10;
        case 11: return 11;
        case 12: return 12;
        case 13: return 13;
        case 14: return 14;
        case 15: return 15;
        case 16: return 16;
        case 17: return 17;
        case 18: return 18;
        case 19: return 19;
        case 22: return 20;
        case 20: return 21;
        case 21: return 22;
    }
    sub_6306( "Flow_public: Return_Strand_From_Contact(): Unknown Contact" );
    return 28;
}

void sub_6306(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_6369(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U13391[uParam0]._fU80._fU0;
    iVar4 = 1;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U13391[uParam0]._fU80._fU0 = 0;
        sub_6490( uParam0 );
        sub_8922( uParam0, 0 );
        break;
        case 2:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_9210( uParam0, iVar4 );
        break;
        case 3:
        g_U13391[uParam0]._fU80._fU0 = 6;
        sub_9210( uParam0, iVar4 );
        break;
        case 6:
        sub_9210( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_9659( uParam0, iVar4 );
        g_U4 = 0;
        break;
        default:
        sub_6306( "Main_Missions: Cancel_Strand_Friend_Mission(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_6490(unknown uParam0)
{
    if ((NOT (g_U13391[uParam0]._fU80._fU0 == 0)) AND (NOT (g_U13391[uParam0]._fU80._fU0 == 1)))
    {
        sub_6547( uParam0 );
        sub_6693( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU80._fU0 == 1)
    {
        sub_6547( uParam0 );
        sub_6883( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU80._fU0 == 0)
    {
        sub_6693( uParam0 );
    }
    if ((NOT (g_U13391[uParam0]._fU0._fU0 == 0)) AND (NOT (g_U13391[uParam0]._fU0._fU0 == 1)))
    {
        sub_6547( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU0._fU0 == 1)
    {
        sub_8164( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU0._fU0 == 0)
    {
        sub_6547( uParam0 );
    }
    return;
}

void sub_6547(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U13391[uParam0]._fU0._fU64 )))
    {
        return;
    }
    REMOVE_BLIP( g_U13391[uParam0]._fU0._fU64 );
    g_U13391[uParam0]._fU0._fU64 = nil;
    uVar3 = g_U13391[uParam0]._fU0._fU68;
    g_U13391[uParam0]._fU0._fU68 = 50;
    g_U9387[uVar3]._fU24 = 0;
    return;
}

void sub_6693(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U13391[uParam0]._fU80._fU64 )))
    {
        return;
    }
    REMOVE_BLIP( g_U13391[uParam0]._fU80._fU64 );
    g_U13391[uParam0]._fU80._fU64 = nil;
    uVar3 = g_U13391[uParam0]._fU80._fU68;
    g_U13391[uParam0]._fU80._fU68 = 50;
    g_U9387[uVar3]._fU24 = 0;
    return;
}

void sub_6883(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_6693( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U9386;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U13391[uParam0]._fU80._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U13391[uParam0]._fU80._fU4;
        iVar8 = sub_7066( uParam0, iVar7 );
        iVar9 = g_U26758[iVar8]._fU16;
        vVar3 = {g_U9387[iVar9]._fU0};
        uVar6 = g_U9387[iVar9]._fU12;
        bVar10 = true;
        g_U13391[uParam0]._fU80._fU68 = iVar9;
        g_U9387[iVar9]._fU24 = 1;
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_6306( "Main_Missions: Add_Friend_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U13391[uParam0]._fU80._fU64 );
        CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU80._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U13391[uParam0]._fU80._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU80._fU64, l_U5 );
        if ((NOT g_U32896._fU4) || (NOT g_U13391[uParam0]._fU80._fU72))
        {
            CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU80._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U13391[uParam0]._fU80._fU76 = iVar12 + 10000;
        FLASH_BLIP( g_U13391[uParam0]._fU80._fU64, 1 );
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU80._fU64, l_U6 );
        sub_7719( g_U13391[uParam0]._fU80._fU64, iVar9 );
        return;
    }
    return;
}

int sub_7066(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_6306( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U32640[iParam0]._fU0;
    iVar5 = g_U32640[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U26758[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

void sub_7719(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    switch (uVar4)
    {
        case 1:
        sub_7811( ref uParam0, 827.41800000, -288.99640000, 14.75330000, 179.76500000 );
        break;
        case 17:
        sub_7811( ref uParam0, -150.38910000, -795.66570000, 4.20110000, 271.69380000 );
        break;
        case 18:
        sub_7811( ref uParam0, -160.31520000, -796.40800000, 5.20610000, 270.00000000 );
        break;
        case 24:
        sub_7811( ref uParam0, -126.75380000, -263.66190000, 11.56380000, 0.00000000 );
        break;
        case 29:
        sub_7811( ref uParam0, -905.43880000, 908.73140000, 12.59760000, 0.74970000 );
        break;
        case 32:
        sub_7811( ref uParam0, 341.41760000, -454.50700000, 3.60780000, 0.74970000 );
        break;
    }
    return;
}

void sub_7811(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

void sub_8164(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_6547( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U9386;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U13391[uParam0]._fU0._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U13391[uParam0]._fU0._fU4;
        iVar8 = sub_7066( uParam0, iVar7 );
        iVar9 = g_U26758[iVar8]._fU16;
        vVar3 = {g_U9387[iVar9]._fU0};
        uVar6 = g_U9387[iVar9]._fU12;
        bVar10 = true;
        g_U13391[uParam0]._fU0._fU68 = iVar9;
        g_U9387[iVar9]._fU24 = 1;
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_6306( "Main_Missions: Add_Primary_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U13391[uParam0]._fU0._fU64 );
        CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU0._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U13391[uParam0]._fU0._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU0._fU64, l_U5 );
        if ((NOT g_U32896._fU4) || (NOT g_U13391[uParam0]._fU0._fU72))
        {
            CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU0._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U13391[uParam0]._fU0._fU76 = iVar12 + 10000;
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU0._fU64, l_U6 );
        if (l_U31)
        {
            FLASH_BLIP( g_U13391[uParam0]._fU0._fU64, 1 );
            l_U31 = 0;
        }
        else
        {
            FLASH_BLIP_ALT( g_U13391[uParam0]._fU0._fU64, 1 );
            l_U31 = 1;
        }
        sub_7719( g_U13391[uParam0]._fU0._fU64, iVar9 );
        return;
    }
    return;
}

void sub_8922(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U13391[uParam0]._fU80._fU64 ))
        {
            REMOVE_BLIP( g_U13391[uParam0]._fU80._fU64 );
        }
    }
    g_U13391[uParam0]._fU80._fU0 = 0;
    g_U13391[uParam0]._fU80._fU4 = -1;
    StrCopy( ref g_U13391[uParam0]._fU80._fU24, "", 32 );
    g_U13391[uParam0]._fU80._fU56 = 10;
    g_U13391[uParam0]._fU80._fU60 = nil;
    g_U13391[uParam0]._fU80._fU64 = nil;
    g_U13391[uParam0]._fU80._fU68 = 50;
    g_U13391[uParam0]._fU80._fU72 = 1;
    g_U13391[uParam0]._fU80._fU76 = 0;
    return;
}

void sub_9210(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        if (NOT (HAS_SCRIPT_LOADED( ref g_U13391[uParam0]._fU80._fU24 )))
        {
            return;
        }
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U13391[uParam0]._fU80._fU24 );
        sub_8922( uParam0, 0 );
    }
    else if (NOT (HAS_SCRIPT_LOADED( ref g_U13391[uParam0]._fU0._fU24 )))
    {
        return;
    }
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U13391[uParam0]._fU0._fU24 );
    sub_9348( uParam0, 0 );;
    sub_6490( uParam0 );
    return;
}

void sub_9348(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U13391[uParam0]._fU0._fU64 ))
        {
            REMOVE_BLIP( g_U13391[uParam0]._fU0._fU64 );
        }
    }
    g_U13391[uParam0]._fU0._fU0 = 0;
    g_U13391[uParam0]._fU0._fU4 = -1;
    StrCopy( ref g_U13391[uParam0]._fU0._fU24, "", 32 );
    g_U13391[uParam0]._fU0._fU56 = 10;
    g_U13391[uParam0]._fU0._fU60 = nil;
    g_U13391[uParam0]._fU0._fU64 = nil;
    g_U13391[uParam0]._fU0._fU68 = 50;
    g_U13391[uParam0]._fU0._fU72 = 1;
    g_U13391[uParam0]._fU0._fU76 = 0;
    return;
}

void sub_9659(int iParam0, boolean bParam1)
{
    boolean bVar4;
    int iVar5;

    bVar4 = true;
    if (bParam1)
    {
        if (g_U13391[iParam0]._fU80._fU60 != nil)
        {
            DESTROY_THREAD( g_U13391[iParam0]._fU80._fU60 );
        }
        sub_8922( iParam0, 0 );
        bVar4 = false;
    }
    else if (g_U13391[iParam0]._fU0._fU60 != nil)
    {
        DESTROY_THREAD( g_U13391[iParam0]._fU0._fU60 );
    }
    iVar5 = g_U13391[iParam0]._fU0._fU56;
    if ((iVar5 == 5) || (iVar5 == 6))
    {
        bVar4 = false;
    }
    if (bVar4)
    {
        g_U10981[iParam0]._fU28 = 1;
    }
    sub_9348( iParam0, 0 );
    if (bVar4)
    {
        sub_9868();
    }
    g_U10981[iParam0]._fU12 = 0;;
    if (iParam0 == 23)
    {
        sub_9924();
        return;
    }
    sub_6490( iParam0 );
    if (bVar4)
    {
        g_U10978 = 0;
    }
    if (bVar4)
    {
        sub_10559( iParam0 );
    }
    if (g_U2)
    {
        if (g_U3)
        {
            WAIT( 1500 );
            g_U4 = 1;
        }
    }
    return;
}

void sub_9868()
{
    unknown uVar2;

    uVar2 = g_U9925;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

void sub_9924()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;

    bVar2 = false;
    if (IS_PLAYER_PLAYING( sub_302() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_461() ))
        {
            if (NOT (g_U15936._fU24 == -1))
            {
                uVar3 = g_U32697[g_U15936._fU24]._fU36;
                if (IS_CHAR_IN_MODEL( sub_461(), uVar3 ))
                {
                    bVar2 = true;
                }
            }
        }
    }
    uVar4 = g_U15936._fU24;
    sub_10036();
    if (bVar2)
    {
        g_U15936._fU8 = 1;
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_461(), ref g_U15936._fU32 );
        g_U15936._fU24 = uVar4;
    }
    l_U30 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_302(), 0 );
    sub_10189();
    if (IS_PLAYER_PLAYING( sub_302() ))
    {
        SET_PLAYER_CONTROL( sub_302(), 1 );
    }
    return;
}

void sub_10036()
{
    g_U15936._fU0 = 0;
    g_U15936._fU4 = 0;
    g_U15936._fU8 = 0;
    g_U15936._fU12 = 0;
    g_U15936._fU16 = 0;
    g_U15936._fU20 = 0;
    g_U15936._fU24 = -1;
    g_U15936._fU32 = nil;
    g_U15936._fU28 = 0;
    return;
}

void sub_10189()
{
    unknown uVar2;
    float fVar3;
    boolean bVar4;

    uVar2 = nil;
    fVar3 = 0.00000000;
    bVar4 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_302() )))
    {
        return;
    }
    if (IS_CHAR_DEAD( sub_461() ))
    {
        l_U30 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_302(), 1 );
        return;
    }
    if (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_461() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_461(), ref uVar2 );
        if ((NOT (IS_CHAR_IN_MODEL( sub_461(), 837858166 ))) AND (NOT (IS_CHAR_IN_MODEL( sub_461(), -488123221 ))))
        {
            GET_CAR_SPEED( uVar2, ref fVar3 );
            if (fVar3 < 0.40000000)
            {
                if (g_U15936._fU20)
                {
                    bVar4 = true;
                }
                else
                {
                    bVar4 = false;
                }
            }
            else
            {
                bVar4 = true;
            }
        }
        else
        {
            bVar4 = true;
        }
    }
    else
    {
        bVar4 = true;
    }
    if (bVar4)
    {
        if (l_U30)
        {
            return;
        }
        l_U30 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_302(), 1 );
    }
    else if (NOT l_U30)
    {
        return;
    }
    l_U30 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_302(), 0 );;
    return;
}

void sub_10559(int iParam0)
{
    if (NOT (g_U26746 == iParam0))
    {
        return;
    }
    g_U26745 = 1;
    return;
}

void sub_10761(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U13391[uParam0]._fU0._fU0;
    iVar4 = 0;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U13391[uParam0]._fU0._fU0 = 0;
        sub_6490( uParam0 );
        sub_9348( uParam0, 0 );
        break;
        case 2:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_9210( uParam0, iVar4 );
        break;
        case 3:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_9210( uParam0, iVar4 );
        break;
        case 6:
        sub_9210( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_9659( uParam0, iVar4 );
        g_U4 = 0;
        break;
        default:
        sub_6306( "Main_Missions: Cancel_Strand(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_11267(unknown uParam0)
{
    return;
}

void sub_11301(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        sub_11510( uParam0, 0, -10, -10, 0, 0 );
        break;
        default: sub_12607( "Flow_Killed_By_Player_Stats_Update: Need to add stat details for strand" );
    }
    return;
}

void sub_11510(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_11521( uParam1 );
    sub_11695( uParam0, 0, uParam2 );
    sub_11695( uParam0, 1, uParam3 );
    sub_11695( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_12467();
    return;
}

void sub_11521(unknown uParam0)
{
    ADD_SCORE( sub_302(), uParam0 );
    sub_11546( uParam0 );
    return;
}

void sub_11546(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_6306( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_11695(unknown uParam0, int iParam1, int iParam2)
{
    g_U10981[uParam0]._fU40[iParam1] += iParam2;
    if (g_U10981[uParam0]._fU40[iParam1] < 0)
    {
        g_U10981[uParam0]._fU40[iParam1] = 0;
    }
    if (g_U10981[uParam0]._fU40[iParam1] > 100)
    {
        g_U10981[uParam0]._fU40[iParam1] = 100;
    }
    if (iParam1 == 1)
    {
        sub_11852( uParam0 );
    }
    return;
}

void sub_11852(unknown uParam0)
{
    if (g_U0)
    {
        return;
    }
    if (IS_BIT_SET( ProtectedGet(g_U64791), 11 ))
    {
        return;
    }
    if (g_U10981[uParam0]._fU40[1] < 90)
    {
        return;
    }
    switch (uParam0)
    {
        case 0:
        SET_BIT( 1, 6 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 3:
        SET_BIT( 1, 7 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 7:
        SET_BIT( 1, 8 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 8:
        SET_BIT( 1, 9 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 13:
        SET_BIT( 1, 10 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
    }
    if (((((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 1 ))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 2 )))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 3 )))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 4 )))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 5 ))))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 7 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 9 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 10 )))
    {
        return;
    }
    if (g_U10981[0]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 6 )))
        {
            return;
        }
    }
    if (g_U10981[7]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 8 )))
        {
            return;
        }
    }
    SET_BIT( 1, 11 );
    AWARD_ACHIEVEMENT( 35 );
    return;
    break;
    2;
    1;
    ref g_U64791;
    1;
    ref g_U64791;
    break;
}

void sub_12467()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_12607(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

void sub_12770()
{
    sub_12779();
    sub_24336();
    return;
}

void sub_12779()
{
    sub_12788();
    return;
}

void sub_12788()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_12467();
    sub_12817( iVar2, iVar3, iVar4 );
    return;
}

void sub_12817(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    sub_12848( iVar5, uParam0, uParam1, uParam2, "Friend_1" );
    return;
}

void sub_12848(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    char[64] cVar9;
    int iVar25;
    int iVar26;
    boolean bVar27;
    unknown uVar28;
    unknown uVar29;
    int iVar30;
    boolean bVar31;

    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U13391[iParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_12607( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_12607( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U13391[iParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_12607( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_12607( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_12607( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_12607( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_7066( iParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U10981[iParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U13391[iParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        g_U10981[iParam0]._fU144._fU8++;
        if ((NOT g_U10981[iParam0]._fU144._fU12) AND (g_U10981[iParam0]._fU144._fU8 >= g_U10981[iParam0]._fU144._fU4))
        {
            iVar26 = 0;
            GET_GAME_TIMER( ref iVar26 );
            g_U10981[iParam0]._fU144._fU16 = iVar26 + 60000;
        }
        if (g_U10981[iParam0]._fU144._fU8 == 1)
        {
            if (iParam0 == 3)
            {
                sub_13626( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_13626( 0, 4 );
            }
        }
    }
    if (NOT (sub_13715( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_302(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_302() );
    }
    sub_21982();
    bVar27 = true;
    uVar28 = sub_7066( iParam0, iVar7 );
    uVar29 = sub_22624( iParam0 );
    if (bParam1)
    {
        iVar30 = g_U13391[iParam0]._fU0._fU56;
        if ((iVar30 == 5) || (iVar30 == 6))
        {
            bVar27 = false;
        }
        if (NOT g_U0)
        {
            bVar31 = true;
            if (IS_BIT_SET( g_U26758[uVar28]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U9921 );
                sub_23155( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_23585();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_23670( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_23727( iParam0 );
                sub_23862( 0 );
                sub_23943( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_24048();
        }
    }
    if (bParam2)
    {
        sub_23585();
        sub_24136();
        sub_23862( 0 );
    }
    if (bParam3)
    {
        sub_23585();
        sub_24176();
        sub_23862( 0 );
        sub_23943( uVar29, 0 );
    }
    sub_24227();
    return;
}

void sub_13626(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_13715(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_13923( uParam1 );
        break;
        case 1:
        bVar8 = sub_15036( uParam1 );
        break;
        case 2:
        bVar8 = sub_15262( uParam1 );
        break;
        case 3:
        bVar8 = sub_15412( uParam1 );
        break;
        case 4:
        bVar8 = sub_15690( uParam1 );
        break;
        case 5:
        bVar8 = sub_15993( uParam1 );
        break;
        case 6:
        bVar8 = sub_16192( uParam1 );
        break;
        case 7:
        bVar8 = sub_16418( uParam1 );
        break;
        case 8:
        bVar8 = sub_16653( uParam1 );
        break;
        case 9:
        bVar8 = sub_17028( uParam1 );
        break;
        case 10:
        bVar8 = sub_17275( uParam1 );
        break;
        case 11:
        bVar8 = sub_17414( uParam1 );
        break;
        case 12:
        bVar8 = sub_17713( uParam1 );
        break;
        case 13:
        bVar8 = sub_17941( uParam1 );
        break;
        case 14:
        bVar8 = sub_18228( uParam1 );
        break;
        case 15:
        bVar8 = sub_18510( uParam1 );
        break;
        case 16:
        bVar8 = sub_18792( uParam1 );
        break;
        case 17:
        bVar8 = sub_18993( uParam1 );
        break;
        case 18:
        bVar8 = sub_19066( uParam1 );
        break;
        case 19:
        bVar8 = sub_19280( uParam1 );
        break;
        case 20:
        bVar8 = sub_19533( uParam1 );
        break;
        case 21:
        bVar8 = sub_19780( uParam1 );
        break;
        case 22:
        bVar8 = sub_19981( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_14641( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_7066( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_20304( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_13923(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11510( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_11510( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_11510( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_11510( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_11510( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_11510( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_11510( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_11510( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_11510( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_11510( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_11510( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_11510( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_11510( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_11510( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_11510( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_11510( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_11510( iVar3, 0, 3, 1, 0, 0 );
        break;
        case 3:
        case 30:
        case 14:
        case 37:
        case 18:
        case 19:
        case 17:
        case 21: break;
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        sub_11510( iVar3, 0, sub_14519(), sub_14785(), 0, 0 );
        break;
        default:
        sub_14944( "Friend 1", 1 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14944( "Friend 1", 0 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14519()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_14641( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_14641(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_14785()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_14641( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_14944(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_15036(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11510( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11510( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11510( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_11510( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_14944( "Contact 2", 1 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14944( "Contact 2", 0 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15262(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_11510( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_14944( "Girl 3", 1 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14944( "Girl 3", 0 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15412(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11510( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_11510( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_11510( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_11510( iVar3, 0, sub_14519(), sub_14785(), 0, 0 );
        break;
        default:
        sub_14944( "Friend 4", 1 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14944( "Friend 4", 0 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15690(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11510( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11510( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11510( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_11510( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_11510( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_11510( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_11510( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_14944( "Contact 5", 1 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14944( "Contact 5", 0 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15993(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11510( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11510( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11510( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_14944( "Contact 7", 1 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14944( "Contact 7", 0 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16192(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11510( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11510( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11510( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_11510( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_14944( "Contact 7b", 1 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14944( "Contact 7b", 0 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16418(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11510( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_11510( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_11510( iVar3, 0, sub_14519(), sub_14785(), 0, 0 );
        break;
        default:
        sub_14944( "Friend 8", 1 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14944( "Friend 8", 0 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16653(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;

    iVar3 = 8;
    bVar4 = false;
    iVar5 = 500;
    switch (uParam0)
    {
        case 0:
        sub_11510( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_11510( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_11510( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_11510( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_11510( iVar3, iVar5, 3, 1, 0, 0 );
        INCREMENT_INT_STAT_NO_MESSAGE( 109, iVar5 );
        break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        sub_11510( iVar3, 0, sub_14519(), sub_14785(), 0, 0 );
        break;
        default:
        sub_14944( "Friend 9", 1 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14944( "Friend 9", 0 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17028(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 9;
    iVar4 = 7;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_11510( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11510( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_11510( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_11510( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_14944( "Contact 10", 1 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_14944( "Contact 10", 0 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17275(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11510( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_14944( "Girl 11", 1 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14944( "Girl 11", 0 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17414(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11510( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_11510( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_11510( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_11510( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_11510( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_11510( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_14944( "Contact 12", 1 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14944( "Contact 12", 0 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17713(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11510( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11510( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11510( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_11510( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_14944( "Contact 13", 1 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14944( "Contact 13", 0 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17941(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11510( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_11510( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_11510( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_11510( iVar3, 0, sub_14519(), sub_14785(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_14944( "Friend 15", 1 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14944( "Friend 15", 0 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_18228(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11510( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11510( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11510( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_11510( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_11510( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_11510( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_14944( "Contact 16", 1 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14944( "Contact 16", 0 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_18510(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11510( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11510( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_11510( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_11510( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_11510( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_14944( "Contact 18", 1 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14944( "Contact 18", 0 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_18792(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11510( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11510( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11510( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_14944( "Contact 19", 1 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14944( "Contact 19", 0 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_18993(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_14944( "Girl 20", 0 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_19066(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11510( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11510( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11510( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_14944( "Contact 21", 1 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14944( "Contact 21", 0 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_19280(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11510( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11510( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_11510( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_11510( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11510( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_14944( "Contact 22", 1 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14944( "Contact 22", 0 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_19533(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_11510( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11510( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_11510( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_11510( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_14944( "Contact 24", 1 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14944( "Contact 24", 0 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_19780(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11510( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11510( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11510( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_14944( "Contact 25", 1 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14944( "Contact 25", 0 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_19981(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 22;
    iVar4 = 8;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_11510( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_14944( "Girl 26", 1 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_14944( "Girl 26", 0 );
        sub_11510( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_20304(int iParam0, int iParam1)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (iParam1 == -1)
    {
        return;
    }
    if (sub_20352( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_21083( iParam1 );
    }
    return;
}

int sub_20352(int iParam0, int iParam1)
{
    int iVar4;
    boolean bVar5;
    int iVar6;

    if (g_U0)
    {
        return 0;
    }
    if (iParam0 == -1)
    {
        return 0;
    }
    if (iParam1 == -1)
    {
        return 0;
    }
    iVar4 = g_U13391[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U26758[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U26758[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_20492( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_20492(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_20674( 0 );
    return;
}

void sub_20674(boolean bParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    boolean bVar7;
    int I;

    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    fVar6 = 0.00000000;
    bVar7 = true;
    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        if (g_U32871[I]._fU4 == g_U32871[I]._fU0)
        {
            fVar4 = g_U32871[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U32871[I]._fU0 );
            fVar6 = TO_FLOAT( g_U32871[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U32871[I]._fU8;
        }
        fVar3 += fVar4;
    }
    if (fVar3 > 100.00000000)
    {
        fVar3 = 99.99000000;
    }
    if (bVar7)
    {
        fVar3 = 100.00000000;
    }
    SET_FLOAT_STAT( 0, fVar3 );
    if (bVar7)
    {
        sub_20929();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_20929()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_21083(int iParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (g_U13334[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U13334[iParam0]._fU4 == g_U13334[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U13334[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U13334[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_21416( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_21416( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_21416( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_21416( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_21416( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_21416( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_21416( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_21416( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_21416( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_21416( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_21416( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_21416( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_21416( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_21416( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_21416( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_21416( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_21416( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_21416( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_21416( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_21416(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_21982()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_22020( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_22020( 1, g_U569[I] )) != 0)
            {
                sub_22306( I );
            }
        }
    }
    if (NOT sub_22472())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    if (g_U91._fU0 == 1014)
    {
        g_U91._fU92 = 1;
    }
    return;
}

int sub_22020(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    switch (uParam0)
    {
        case 0:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 14, 23 );
        break;
        case 1:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 0, 13 );
        break;
        case 2:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 14, 27 );
        break;
        case 3:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 0, 13 );
        break;
        case 4:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 27 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return uParam1._fU0[2];
        break;
    }
    return -1;
}

void sub_22306(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_22391( g_U569 - 1 );
    return;
}

void sub_22391(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_22472()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_22020( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_22624(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 1: return 1;
        case 2: return 2;
        case 3: return 3;
        case 4: return 4;
        case 5: return 5;
        case 6: return 6;
        case 7: return 7;
        case 8: return 8;
        case 9: return 9;
        case 10: return 10;
        case 11: return 11;
        case 12: return 12;
        case 13: return 13;
        case 14: return 14;
        case 15: return 15;
        case 16: return 16;
        case 17: return 17;
        case 18: return 18;
        case 19: return 19;
        case 20: return 22;
        case 21: return 20;
        case 22: return 21;
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_6306( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_23155(unknown uParam0, unknown uParam1)
{
    sub_23174( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_23174(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_23585()
{
    g_U9914._fU0 = 1;
    g_U9914._fU4 = 0;
    g_U9914._fU8 = 0;
    g_U9914._fU12 = 0;
    g_U9914._fU16 = 0;
    g_U9914._fU20 = 0;
    g_U9914._fU24 = 7;
    return;
}

int sub_23670(int iParam0, int iParam1)
{
    if (iParam0 == 0)
    {
        if (iParam1 == 20)
        {
            return 1;
        }
    }
    return 0;
}

void sub_23727(unknown uParam0)
{
    sub_23736();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_23736()
{
    int I;

    I = 0;
    for ( I = 0; I < 28; I++ )
    {
        if (g_U10981[I]._fU144._fU36)
        {
            g_U10981[I]._fU28 = 1;
        }
        g_U10981[I]._fU144._fU36 = 0;
    }
    return;
}

void sub_23862(unknown uParam0)
{
    if (g_U9385)
    {
        g_U9385 = 0;
        return;
    }
    g_U9380._fU0 = 1;
    g_U9380._fU4 = uParam0;
    g_U9380._fU8 = 0;
    g_U9380._fU12 = 0;
    g_U9380._fU16 = 0;
    return;
}

void sub_23943(int iParam0, boolean bParam1)
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

void sub_24048()
{
    sub_24057();
    return;
}

void sub_24057()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_24136()
{
    sub_24057();
    return;
}

void sub_24176()
{
    sub_24057();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_24227()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1000();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

void sub_24336()
{
    if (l_U487)
    {
        g_U64904 = 1;
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_24394()
{
    unknown uVar2;

    if (NOT l_U484)
    {
        return;
    }
    if (IS_CHAR_DEAD( sub_461() ))
    {
        return;
    }
    if (g_U15654[4])
    {
        if (g_U15654[1])
        {
            l_U485 = 1;
            return;
        }
        sub_12770();
        return;
    }
    if (g_U10978)
    {
        return;
    }
    uVar2 = sub_1436();
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_461(), l_U488._fU0, l_U488._fU4, l_U488._fU8, uVar2, uVar2, uVar2, 0 ))
    {
        l_U487 = 0;
        sub_12770();
    }
    return;
}
