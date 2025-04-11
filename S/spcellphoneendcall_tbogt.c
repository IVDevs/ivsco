void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 1;
    l_U4 = 3;
    g_U816 = 0;
    SETTIMERA( 0 );
    if (l_U7._fU4)
    {
        l_U6 = 0;
    }
    else
    {
        l_U6 = l_U7._fU0;
    }
    sub_116( "\n CELLPHONE_END_CALL - pause is ", l_U6 );
    while ((g_U817) AND ((TIMERA() < (500000 + l_U6)) || (l_U7._fU4)))
    {
        WAIT( 0 );
        if (g_U816)
        {
            l_U6 += 20000;
            g_U816 = 0;
        }
        if (TIMERA() >= l_U6)
        {
            if (g_U43561)
            {
                l_U6 = TIMERA() + 10000;
                PRINTSTRING( "KGM.......stats are still on display, so delay the end of mission phone call\n" );
            }
            else if (l_U7._fU8)
            {
                if (sub_363( l_U7._fU12, ref l_U7._fU32, ref l_U7._fU16, 10000 ))
                {
                    sub_466( "\n CELLPHONE_END_CALL - calling player " );
                    while (NOT (sub_3599( 0 )))
                    {
                        WAIT( 0 );
                    }
                    sub_3885( l_U7._fU12, 0 );
                    sub_466( "\n CELLPHONE_END_CALL - calling player finished " );
                    sub_4023();
                    sub_4134();
                }
            }
            else
            {
                sub_466( "\n CELLPHONE_END_CALL - calling contact " );
                if (sub_4231( l_U7._fU12, ref l_U7._fU32, ref l_U7._fU16 ))
                {
                    while (NOT (sub_3599( 0 )))
                    {
                        WAIT( 0 );
                    }
                    sub_3885( l_U7._fU12, 0 );
                    sub_466( "\n CELLPHONE_END_CALL - calling contact finished " );
                    sub_4023();
                    sub_4134();
                }
            }
        }
    }
    sub_466( "\n CELLPHONE_END_CALL - timed out " );
    sub_4134();
    return;
}

void sub_116(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_363(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown[2] uVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref uVar6, 2);
    return sub_396( uParam0, uParam1, uParam2, 0, ref uVar6, ref uVar6, "", uParam3, 1, 0, 1, 0, 0, 0 );
}

int sub_396(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U95._fU540)
    {
        return 0;
    }
    sub_466( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8865 >= 6)
        {
            sub_466( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_574() )))
    {
        sub_466( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_653() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_653() ))))
    {
        sub_466( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8867)
    {
        case 4:
        case 1:
        case 2:
        sub_466( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_985()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U95._fU60 = uParam0;
        g_U95._fU48 = 1;
        g_U16014[g_U95._fU60]._fU212._fU24 = 0;
        break;
        case 1:
        if (g_U95._fU368)
        {
            if ((g_U95._fU372) || (NOT bParam8))
            {
                sub_466( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
                return 0;
            }
        }
        if (g_U95._fU60 != -1)
        {
            if ((g_U16014[g_U95._fU60]._fU212._fU24 != 5) AND (g_U16014[g_U95._fU60]._fU212._fU24 != 4))
            {
                g_U16014[g_U95._fU60]._fU212._fU24 = 0;
            }
        }
        g_U95._fU368 = 1;
        g_U95._fU372 = bParam8;
        uParam0 = g_U95._fU60;
        break;
        case 2:
        if ((NOT sub_985()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U95._fU60 = uParam0;
        g_U95._fU52 = 1;
        g_U95._fU56 = 1;
        g_U95._fU372 = 1;
        g_U95._fU368 = 1;
        g_U16014[g_U95._fU60]._fU212._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    sub_2357( uParam0, ref g_U95._fU176 );
    sub_3017( ref g_U95._fU160 );
    g_U95._fU380 = uParam10;
    g_U95._fU376 = bParam11;
    g_U95._fU420 = uParam12;
    g_U95._fU424 = -1;
    g_U95._fU364 = uParam3;
    StrCopy( ref g_U95._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U8972 - 1); I++ )
    {
        StrCopy( ref g_U8972[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U8972[I] = {(uParam1^)[I]};
        sub_3257( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
    }
    for ( I = 0; I <= (g_U95._fU260 - 1); I++ )
    {
        if (I < (uParam4^))
        {
            g_U95._fU260[I] = {(uParam4^)[I]};
        }
        else
        {
            StrCopy( ref g_U95._fU260[I], "", 16 );
        }
    }
    for ( I = 0; I <= (g_U95._fU312 - 1); I++ )
    {
        if (I < (uParam5^))
        {
            g_U95._fU312[I] = {(uParam5^)[I]};
        }
        else
        {
            StrCopy( ref g_U95._fU312[I], "", 16 );
        }
    }
    StrCopy( ref g_U95._fU208, uParam6, 16 );
    g_U95._fU80 = uParam7;
    g_U95._fU384 = 0;
    g_U95._fU532 = uParam13;
    g_U8867 = 4;
    return 1;
}

void sub_466(unknown uParam0)
{
    return;
}

void sub_574()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_653()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_985()
{
    if ((g_U95._fU48) || (g_U95._fU52))
    {
        return 0;
    }
    if (g_U95._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_1042())
    {
        return 0;
    }
    if (g_U560 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_1042()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_574() )))
    {
        sub_466( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_466( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U95._fU376)
    {
        sub_466( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U95._fU100) || (g_U95._fU104))
    {
        sub_466( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_574() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_653() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_653(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_466( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_653() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_466( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_466( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_574() )))
    {
        sub_466( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_2357(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        StrCopy( (uParam1^), "TONY", 32 );
        break;
        case 1:
        StrCopy( (uParam1^), "MORI", 32 );
        break;
        case 2:
        StrCopy( (uParam1^), "YUSUF", 32 );
        break;
        case 3:
        StrCopy( (uParam1^), "ARMANDO", 32 );
        break;
        case 4:
        StrCopy( (uParam1^), "ADRIANA", 32 );
        break;
        case 5:
        StrCopy( (uParam1^), "BULGARIN", 32 );
        break;
        case 6:
        StrCopy( (uParam1^), "ROCCO", 32 );
        break;
        case 7:
        StrCopy( (uParam1^), "HENRIQUE", 32 );
        break;
        case 9:
        StrCopy( (uParam1^), "reserve1", 32 );
        break;
        case 29:
        StrCopy( (uParam1^), "ASSISTANT", 32 );
        break;
        case 28:
        StrCopy( (uParam1^), "DESSIE", 32 );
        break;
        case 16:
        StrCopy( (uParam1^), "JOJO", 32 );
        break;
        case 17:
        StrCopy( (uParam1^), "TAYLOR", 32 );
        break;
        case 18:
        StrCopy( (uParam1^), "VIKKY", 32 );
        break;
        case 19:
        StrCopy( (uParam1^), "ANA", 32 );
        break;
        case 20:
        StrCopy( (uParam1^), "DANA", 32 );
        break;
        case 21:
        StrCopy( (uParam1^), "CINDY", 32 );
        break;
        case 22:
        StrCopy( (uParam1^), "TANIA", 32 );
        break;
        case 23:
        StrCopy( (uParam1^), "LILY", 32 );
        break;
        case 24:
        StrCopy( (uParam1^), "TAMI", 32 );
        break;
        case 25:
        StrCopy( (uParam1^), "DOMINO", 32 );
        break;
        case 26:
        StrCopy( (uParam1^), "HEIDI", 32 );
        break;
        case 27:
        StrCopy( (uParam1^), "SIMONE", 32 );
        break;
        case 12:
        StrCopy( (uParam1^), "LAZLOW", 32 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        break;
    }
    return;
}

void sub_3017(unknown uParam0)
{
    StrCopy( (uParam0^), "LUIS", 16 );
    return;
}

void sub_3257(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_3599(boolean bParam0)
{
    unknown uVar3;

    if (g_U95._fU60 != -1)
    {
        switch (g_U16014[g_U95._fU60]._fU212._fU24)
        {
            case 0:
            case 3:
            case 4:
            case 5:
            return 0;
            break;
            default:
            if (g_U95._fU0 != 1000)
            {
                return 0;
            }
            break;
        }
    }
    if (bParam0)
    {
        GET_SCRIPT_TASK_STATUS( sub_653(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_466( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

void sub_3885(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 37))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U22883[iParam0] = iVar4;
    if (bParam1)
    {
        g_U22883[iParam0] += 30000;
    }
    return;
}

void sub_4023()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_4045();
    if (iVar3 > g_U42731._fU4)
    {
        g_U42731._fU4 = iVar3;
        g_U42731._fU8 = iVar2;
    }
    return;
}

int sub_4045()
{
    if (g_U15811[0])
    {
        return 27000;
    }
    return 15000;
}

void sub_4134()
{
    g_U817 = 0;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_4231(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown[2] uVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    array(ref uVar5, 2);
    return sub_396( uParam0, uParam1, uParam2, 0, ref uVar5, ref uVar5, "", 0, 1, 2, 1, 0, 0, 0 );
}
