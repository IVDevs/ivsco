void main()
{
    int iVar2;
    char[16] cVar3;

    l_U170 = 0;
    l_U171 = 1;
    l_U172 = 3;
    l_U174 = 0;
    l_U191 = -1;
    l_U195 = 0;
    l_U196 = 1;
    l_U197 = 1;
    l_U205 = 150.00000000;
    l_U295 = 0;
    l_U296 = 150.00000000;
    l_U346 = 0;
    l_U549 = 1;
    l_U550 = 0;
    l_U583 = 1;
    l_U584 = 1;
    l_U585 = 0;
    l_U586 = 0;
    l_U588 = 0;
    l_U589 = 0;
    l_U618 = -1;
    l_U620 = 0;
    l_U621 = -1;
    l_U622 = -1;
    l_U623 = -1;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    sub_174();
    sub_407();
    while (l_U583)
    {
        WAIT( 0 );
        if (ALLOW_ONE_TIME_ONLY_COMMANDS_TO_RUN())
        {
            ;
        }
        switch (l_U549)
        {
            case 0:
            if (NOT l_U585)
            {
                l_U549 = 1;
            }
            else
            {
                sub_2544( "  * ROMAN_PHONECALL: " );
                GET_GAME_TIMER( ref l_U614 );
                GENERATE_RANDOM_INT_IN_RANGE( 60000, 75000, ref iVar2 );
                sub_2595( l_U614 );
                sub_2544( " + " );
                sub_2595( iVar2 );
                l_U614 += iVar2;
                sub_2544( " = " );
                sub_2595( l_U614 );
                sub_2664();
                l_U549 = 2;
            }
            break;
            case 1:
            if (sub_2709())
            {
                l_U549 = 3;
                l_U585 = 1;
            }
            break;
            case 2:
            GET_GAME_TIMER( ref l_U613 );
            sub_2544( "  * WAIT_FOR_ROMAN10p_EMAIL: " );
            sub_3076( l_U614 - l_U613 );
            sub_2544( " (" );
            sub_2595( l_U614 );
            sub_2544( " - " );
            sub_2595( l_U613 );
            sub_2544( ")\n" );
            if (((l_U613 >= l_U614) AND (g_U15654[54])) || (NOT g_U15654[11]))
            {
                l_U549 = 3;
            }
            break;
            case 3:
            l_U615 = l_U552[l_U587]._fU0;
            l_U616 = l_U552[l_U587]._fU4;
            sub_4587( 1, sub_3435(), sub_3646(), sub_3858( 0 ), ref l_U590 );
            sub_5291( ref l_U590, l_U601[l_U552[l_U587]._fU0], 65535 );
            sub_5334( ref l_U590, 1 );
            sub_5367( ref l_U590, 0 );
            l_U589 = 0;
            if (sub_5404( ref l_U590, 0 ))
            {
                l_U549 = 4;
            }
            break;
            case 4:
            if ((GET_MISSION_FLAG()) || ((IS_AUTO_SAVE_IN_PROGRESS()) || (g_U9914._fU0)))
            {
                if (l_U588)
                {
                    sub_2317( 12, 0 );
                    l_U588 = 0;
                }
                sub_6489( ref l_U590, 0, 0 );
                sub_6608();
            }
            else if ((g_U15654[54]) || (NOT g_U15654[11]))
            {
                sub_6489( ref l_U590, 0, 1 );
            }
            else
            {
                sub_6489( ref l_U590, 0, 0 );
            }
            l_U612 = sub_6622( ref l_U590, 0 );
            switch (l_U612)
            {
                case 6:
                l_U549 = 3;
                break;
                case 0: break;
                case 3:
                if (NOT l_U586)
                {
                    if (NOT GET_MISSION_FLAG())
                    {
                        if (sub_7131( "mail.eyefind.info" ))
                        {
                            if (sub_7172())
                            {
                                PRINT_HELP( "REPLY_HELP_C" );
                            }
                            else
                            {
                                PRINT_HELP( "REPLY_HELP_B" );
                            }
                            l_U586 = 1;
                        }
                    }
                }
                break;
                case 5:
                l_U617 = 0;
                l_U618 = -1;
                if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "REPLY_HELP_C" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "REPLY_HELP_B" )))
                {
                    CLEAR_HELP();
                }
                if (sub_7447( ref l_U590 ))
                {
                    if (sub_6799() == 0)
                    {
                        if (((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "REPLY_HELP_C" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "REPLY_HELP_B" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CANT_REPLY" )))
                        {
                            CLEAR_HELP();
                        }
                        l_U586 = 0;
                        sub_2317( 12, 0 );
                        l_U588 = 0;
                        l_U549 = 5;
                    }
                }
                else
                {
                    GET_GAME_TIMER( ref l_U614 );
                    GENERATE_RANDOM_INT_IN_RANGE( sub_7623( 5.00000000 ), sub_7623( 10.00000000 ), ref iVar2 );
                    l_U614 += iVar2;
                    PRINTSTRING( "  * current_roman10p_stage	= PLAYER_REPLIED_NEGEITVELY\n" );
                    l_U549 = 7;
                }
                break;
            }
            break;
            case 5:
            switch (l_U550)
            {
                case 0:
                if (NOT IS_AUTO_SAVE_IN_PROGRESS())
                {
                    if (NOT g_U9914._fU0)
                    {
                        REQUEST_SCRIPT( "roman10m" );
                        while (NOT (HAS_SCRIPT_LOADED( "roman10m" )))
                        {
                            WAIT( 0 );
                        }
                        g_U64546 = l_U552[l_U587]._fU0;
                        g_U64547 = l_U552[l_U587]._fU4;
                        START_NEW_SCRIPT_WITH_ARGS( "roman10m", ref l_U552[l_U587], 3, 8192 );
                        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "roman10m" );
                        l_U550 = 1;
                    }
                }
                PRINTSTRING( "roman10p.BEGIN_SUBPART.LOAD_SCRIPT - " );
                PRINTSTRING( "IS_AUTO_SAVE_IN_PROGRESS():" );
                sub_8073( IS_AUTO_SAVE_IN_PROGRESS() );
                PRINTSTRING( ", g_autosave.do:" );
                sub_8073( g_U9914._fU0 );
                PRINTNL();
                break;
                case 1:
                if (GET_MISSION_FLAG())
                {
                    sub_8193();
                    l_U550 = 0;
                    l_U549 = 6;
                }
                break;
            }
            break;
            case 6:
            if (NOT GET_MISSION_FLAG())
            {
                switch (g_U64548[l_U587])
                {
                    case 2:
                    if (l_U587 >= 9)
                    {
                        l_U618 = -1;
                        l_U549 = 8;
                    }
                    else
                    {
                        l_U587++;
                        l_U551 = 0;
                        l_U584 = 1;
                        l_U549 = 0;
                    }
                    break;
                    case 3:
                    case 4:
                    l_U551 = 1;
                    l_U584 = 0;
                    l_U549 = 0;
                    break;
                    case 5:
                    l_U551 = 2;
                    l_U584 = 0;
                    l_U549 = 0;
                    break;
                    default:
                    StrCopy( ref cVar3, "roman10_success[", 16 );
                    ConcatString(ref cVar3, l_U587, 16);
                    ConcatString(ref cVar3, "] = ", 16);
                    ConcatString(ref cVar3, g_U64548[l_U587], 16);
                    sub_2544( "roman10_success[" );
                    sub_2595( l_U587 );
                    sub_2544( "] = " );
                    sub_2595( g_U64548[l_U587] );
                    sub_2664();
                    SCRIPT_ASSERT( ref cVar3 );
                    l_U549 = 0;
                }
                sub_11485( ref l_U590, 0, 1 );
            }
            break;
            case 7:
            GET_GAME_TIMER( ref l_U613 );
            sub_2544( "  ** PLAYER_REPLIED_NEGEITVELY: " );
            sub_3076( l_U614 - l_U613 );
            sub_2544( " (" );
            sub_2595( l_U614 );
            sub_2544( " - " );
            sub_2595( l_U613 );
            sub_2544( ")\n" );
            if (l_U613 >= l_U614)
            {
                if (GET_MISSION_FLAG())
                {
                    GET_GAME_TIMER( ref l_U614 );
                    GENERATE_RANDOM_INT_IN_RANGE( sub_7623( 1.00000000 ), sub_7623( 2.50000000 ), ref iVar2 );
                    l_U614 += iVar2;
                }
                else
                {
                    sub_4587( 1, sub_3435(), sub_3646(), sub_3858( 1 ), ref l_U590 );
                    sub_5291( ref l_U590, l_U601[l_U552[l_U587]._fU0], 65535 );
                    sub_6489( ref l_U590, 0, 0 );
                    sub_11485( ref l_U590, 0, 1 );
                    if (sub_5404( ref l_U590, 0 ))
                    {
                        l_U549 = 4;
                    }
                }
            }
            break;
            case 8:
            sub_11919();
            break;
            case 9:
            sub_16007();
            break;
        }
    }
    sub_16040();
    return;
}

void sub_174()
{
    int I;

    l_U587 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 9, ref g_U64577 );
    l_U601[0] = 0;
    l_U601[4] = 1;
    l_U601[2] = 3;
    l_U601[3] = 4;
    l_U601[1] = 2;
    l_U601[5] = 5;
    l_U601[6] = 6;
    l_U601[7] = 7;
    l_U601[8] = 8;
    l_U601[9] = 9;
    for ( I = 0; I < l_U552; I++ )
    {
        l_U552[I]._fU0 = 10;
        l_U552[I]._fU4 = 10;
        l_U552[I]._fU8 = I;
    }
    for ( I = 0; I < g_U64548; I++ )
    {
        g_U64548[I] = 0;
    }
    return;
}

void sub_407()
{
    PRINT( "NETCAFE", 7500, 1 );
    sub_438( 12 );
    sub_2317( 12, 1 );
    l_U588 = 1;
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    return;
}

void sub_438(unknown uParam0)
{
    g_U10133._fU0[uParam0] = 1;
    sub_459();
    return;
}

void sub_459()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 0;
    for ( I = 0; I < 15; I++ )
    {
        iVar3 = sub_487( 13 );
        if ((sub_532( 13, iVar3 )) AND (g_U9932[g_U9999[I]._fU0]._fU0))
        {
            sub_633( ref g_U9999[I]._fU20, g_U9999[I]._fU4, 4, 60 );
        }
        else
        {
            sub_819( ref g_U9999[I]._fU20 );
        }
    }
    for ( I = 0; I < 7; I++ )
    {
        iVar3 = sub_487( 11 );
        if ((sub_532( 11, iVar3 )) AND (g_U9932[g_U10090[I]._fU0]._fU0))
        {
            sub_633( ref g_U10090[I]._fU20, g_U10090[I]._fU4, 4, 62 );
        }
        else
        {
            sub_819( ref g_U10090[I]._fU20 );
        }
    }
    for ( I = 0; I < 59; I++ )
    {
        iVar3 = sub_1013( I );
        if ((sub_532( g_U10324[I]._fU12, iVar3 )) AND (g_U9932[g_U10324[I]._fU28]._fU0))
        {
            sub_633( ref g_U10324[I]._fU32, g_U10324[I]._fU0, g_U10324[I]._fU24, g_U10324[I]._fU20 );
            sub_1321( I );
        }
        else
        {
            sub_819( ref g_U10324[I]._fU32 );
            g_U10133._fU520[I] = 0;
        }
    }
    sub_1550();
    return;
}

int sub_487(unknown uParam0)
{
    if (g_U10133._fU84[uParam0])
    {
        return 1;
    }
    return 0;
}

int sub_532(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        return 1;
    }
    if (g_U10133._fU0[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_633(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4, unknown uParam5)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        if ((((iParam4 == 2) || (iParam4 == 3)) || (iParam4 == 4)) || (iParam4 == 1))
        {
            ADD_BLIP_FOR_COORD( uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0 );
        }
        else
        {
            ADD_BLIP_FOR_CONTACT( uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0 );
        }
        CHANGE_BLIP_SPRITE( (uParam0^), uParam5 );
        CHANGE_BLIP_PRIORITY( (uParam0^), l_U170 );
        if (iParam4 == 3)
        {
            CHANGE_BLIP_DISPLAY( (uParam0^), 3 );
        }
        if (iParam4 == 4)
        {
            CHANGE_BLIP_DISPLAY( (uParam0^), 5 );
        }
    }
    return;
}

void sub_819(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP( (uParam0^) );
    (uParam0^) = nil;
    return;
}

int sub_1013(unknown uParam0)
{
    unknown uVar3;

    if (g_U10133._fU280[uParam0])
    {
        return 1;
    }
    if (sub_1055( g_U10324[uParam0]._fU16 ))
    {
        return 1;
    }
    if (sub_487( g_U10324[uParam0]._fU12 ))
    {
        return 1;
    }
    if (NOT g_U10978)
    {
        uVar3 = g_U10324[uParam0]._fU12;
        if (g_U10133._fU0[uVar3])
        {
            if (g_U10324[uParam0]._fU24 == 1)
            {
                if (g_U9937 == g_U10324[uParam0]._fU28)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_1055(unknown uParam0)
{
    if (g_U10133._fU168[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_1321(unknown uParam0)
{
    if (DOES_BLIP_EXIST( g_U10324[uParam0]._fU32 ))
    {
        switch (uParam0)
        {
            case 6:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10324[uParam0]._fU32, "BINCO" );
            break;
            case 37:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10324[uParam0]._fU32, "ZIP" );
            break;
            case 36:
            case 35:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10324[uParam0]._fU32, "PERSEUS" );
            break;
        }
    }
    return;
}

void sub_1550()
{
    int I;
    boolean bVar3;
    int iVar4;
    boolean bVar5;
    boolean bVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    float fVar10;
    float fVar11;
    int iVar12;

    I = 0;
    bVar3 = sub_487( 13 );
    for ( I = 0; I < 15; I++ )
    {
        sub_1595( g_U9999[I]._fU20, bVar3 );
    }
    bVar3 = sub_487( 11 );
    for ( I = 0; I < 7; I++ )
    {
        sub_1595( g_U10090[I]._fU20, bVar3 );
    }
    iVar4 = 0;
    for ( I = 0; I < 59; I++ )
    {
        if ((sub_1013( I )) AND (g_U9932[g_U10324[I]._fU28]._fU0))
        {
            iVar4++;
        }
    }
    bVar5 = false;
    if (iVar4 <= 3)
    {
        bVar5 = true;
    }
    for ( I = 0; I < 59; I++ )
    {
        bVar3 = sub_1013( I );
        if (bVar3)
        {
            if (NOT bVar5)
            {
                if (NOT (g_U9937 == g_U10324[I]._fU28))
                {
                    bVar3 = false;
                }
            }
        }
        sub_1595( g_U10324[I]._fU32, bVar3 );
    }
    bVar6 = false;
    for ( I = 0; I < 5; I++ )
    {
        bVar3 = false;
        if (g_U9943[I]._fU0)
        {
            if (g_U9937 == g_U9943[I]._fU40)
            {
                bVar3 = true;
                bVar6 = true;
            }
        }
        sub_1595( g_U9943[I]._fU32, bVar3 );
    }
    fVar10 = 99999.90000000;
    fVar11 = 0.00000000;
    iVar12 = -1;
    if (NOT bVar6)
    {
        if (NOT (IS_CHAR_DEAD( sub_2004() )))
        {
            GET_CHAR_COORDINATES( sub_2004(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
            for ( I = 0; I < 5; I++ )
            {
                if (g_U9943[I]._fU0)
                {
                    fVar11 = sub_2122( uVar7, g_U9943[I]._fU8 );
                    if (fVar11 < fVar10)
                    {
                        fVar10 = fVar11;
                        iVar12 = I;
                    }
                }
            }
        }
        if (NOT (iVar12 == -1))
        {
            for ( I = 0; I < 5; I++ )
            {
                bVar3 = false;
                if (iVar12 == I)
                {
                    bVar3 = true;
                }
                sub_1595( g_U9943[I]._fU32, bVar3 );
            }
        }
    }
    return;
}

void sub_1595(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        SET_BLIP_AS_SHORT_RANGE( uParam0, 0 );
    }
    else
    {
        SET_BLIP_AS_SHORT_RANGE( uParam0, 1 );
    }
    return;
}

void sub_2004()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2122(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

void sub_2317(unknown uParam0, unknown uParam1)
{
    g_U10133._fU84[uParam0] = uParam1;
    sub_459();
    return;
}

void sub_2544(unknown uParam0)
{
    return;
}

void sub_2595(unknown uParam0)
{
    return;
}

void sub_2664()
{
    if (g_U9231)
    {
        PRINTNL();
    }
    return;
}

int sub_2709()
{
    boolean bVar2;
    boolean bVar3;
    int I;
    int iVar5;

    bVar2 = false;
    bVar3 = false;
    for ( I = 0; I < l_U552; I++ )
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, l_U552 - 1, ref iVar5 );
        while (NOT bVar3)
        {
            WAIT( 0 );
            if ((l_U552[iVar5]._fU0 == 10) AND (NOT (I == 10)))
            {
                l_U552[iVar5]._fU0 = I;
                bVar3 = true;
            }
            else
            {
                iVar5 += 7;
                iVar5 = iVar5 mod l_U552;
            }
        }
        bVar3 = false;
    }
    for ( I = 0; I < l_U552; I++ )
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, l_U552 - 1, ref iVar5 );
        while (NOT bVar2)
        {
            WAIT( 0 );
            if ((l_U552[iVar5]._fU4 == 10) AND (NOT (I == 10)))
            {
                l_U552[iVar5]._fU4 = I;
                bVar2 = true;
            }
            else
            {
                iVar5 += 7;
                iVar5 = iVar5 mod l_U552;
            }
        }
        bVar2 = false;
    }
    l_U585 = 1;
    return 1;
}

void sub_3076(unknown uParam0)
{
    if (g_U9231)
    {
        sub_3097( uParam0 );
    }
    return;
}

void sub_3097(int iParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;

    iVar3 = (iParam0 / 1000) / 60;
    iVar4 = (iParam0 - ((iVar3 * 60) * 1000)) / 1000;
    iVar5 = iParam0 - ((iVar4 + (iVar3 * 60)) * 1000);
    if (iVar3 > 0)
    {
        PRINTINT( iVar3 );
        PRINTSTRING( ":" );
        if (iVar4 < 10)
        {
            PRINTSTRING( "0" );
        }
    }
    PRINTINT( iVar4 );
    PRINTSTRING( "." );
    PRINTINT( iVar5 );
    if (iVar5 < 10)
    {
        PRINTSTRING( "00" );
    }
    else if (iVar5 < 100)
    {
        PRINTSTRING( "0" );
    }
    return;
}

int sub_3435()
{
    switch (l_U552[l_U587]._fU0)
    {
        case 0:
        return 0;
        break;
        case 1:
        return 1;
        break;
        case 2:
        return 2;
        break;
        case 3:
        return 3;
        break;
        case 4:
        return 4;
        break;
        case 5:
        return 5;
        break;
        case 6:
        return 6;
        break;
        case 7:
        return 7;
        break;
        case 8:
        return 8;
        break;
        case 9:
        return 9;
        break;
    }
    return 46;
}

int sub_3646()
{
    switch (l_U552[l_U587]._fU4)
    {
        case 0:
        return 10;
        break;
        case 1:
        return 11;
        break;
        case 2:
        return 12;
        break;
        case 3:
        return 13;
        break;
        case 4:
        return 14;
        break;
        case 5:
        return 15;
        break;
        case 6:
        return 16;
        break;
        case 7:
        return 17;
        break;
        case 8:
        return 18;
        break;
        case 9:
        return 19;
        break;
    }
    return 46;
}

int sub_3858(boolean bParam0)
{
    if (NOT l_U620)
    {
        l_U620 = 1;
        return 45;
    }
    else if (NOT bParam0)
    {
        if (l_U584)
        {
            if (l_U621 < 0)
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 10, ref l_U621 );
            }
            else
            {
                l_U621++;
                l_U621 = l_U621 mod 10;
            }
            switch (l_U621)
            {
                case 0:
                return 20;
                break;
                case 1:
                return 21;
                break;
                case 2:
                return 22;
                break;
                case 3:
                return 23;
                break;
                case 4:
                return 24;
                break;
                case 5:
                return 25;
                break;
                case 6:
                return 26;
                break;
                case 7:
                return 27;
                break;
                case 8:
                return 28;
                break;
                case 9:
                return 29;
                break;
            }
        }
        else if (l_U622 < 0)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 10, ref l_U622 );
        }
        else
        {
            l_U622++;
            l_U622 = l_U622 mod 10;
        }
        switch (l_U622)
        {
            case 0:
            return 30;
            break;
            case 1:
            return 31;
            break;
            case 2:
            return 32;
            break;
            case 3:
            return 33;
            break;
            case 4:
            return 34;
            break;
            case 5:
            return 35;
            break;
            case 6:
            return 36;
            break;
            case 7:
            return 37;
            break;
            case 8:
            return 38;
            break;
            case 9:
            return 39;
            break;
        }
    }
    else if (l_U623 < 0)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref l_U623 );
    }
    else
    {
        l_U623++;
        l_U623 = l_U623 mod 5;
    }
    switch (l_U623)
    {
        case 0:
        return 40;
        break;
        case 1:
        return 41;
        break;
        case 2:
        return 42;
        break;
        case 3:
        return 43;
        break;
        case 4:
        return 44;
        break;
    };;;
    return 46;
}

void sub_4587(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_4611( uParam0, 0, iParam4 + 0 );
    sub_4611( uParam1, 1, iParam4 + 0 );
    sub_4611( uParam2, 2, iParam4 + 0 );
    sub_4611( uParam3, 3, iParam4 + 0 );
    sub_4611( 0, 4, iParam4 + 0 );
    sub_4611( 1, 5, iParam4 + 0 );
    sub_4611( 65535, 6, iParam4 + 0 );
    sub_4611( 0, 12, iParam4 + 0 );
    sub_4611( 0, 11, iParam4 + 0 );
    sub_4611( 0, 14, iParam4 + 0 );
    sub_4611( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_4611( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_4611( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_4611(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 14, 23, uParam0 );
        break;
        case 1:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 0, 13, uParam0 );
        break;
        case 2:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 14, 27, uParam0 );
        break;
        case 3:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 0, 13, uParam0 );
        break;
        case 4:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 22, 25, uParam0 );
        break;
        case 5:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 28, 31, uParam0 );
        break;
        case 6:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 0, 15, uParam0 );
        break;
        case 8:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 16, 18, uParam0 );
        break;
        case 9:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 19, 21, uParam0 );
        break;
        case 11:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 27, 31, uParam0 );
        break;
        case 12:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 29, 31, uParam0 );
        break;
        case 13:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 24, 26, uParam0 );
        break;
        case 14:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 26, 28, uParam0 );
        break;
    }
    return;
}

void sub_5291(int iParam0, unknown uParam1, int iParam2)
{
    if (iParam2 == 0)
    {
        ;
    }
    sub_4611( uParam1, 6, iParam0 + 0 );
    return;
}

void sub_5334(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU36 = uParam1;
    return;
}

void sub_5367(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

int sub_5404(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_5444())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_6131( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_5930( iVar5 );
    }
    for ( I = 0; I <= 39; I++ )
    {
        if (g_U968[I]._fU0[0] == -1)
        {
            g_U968[I] = {iParam0->_fU0};
            iParam0->_fU40 = I;
            I = 40;
            INCREMENT_INT_STAT_NO_MESSAGE( 368, 1 );
        }
    }
    g_U967 = 1;
    return 1;
}

int sub_5444()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_5478( 5, g_U968[I] )) == 7)
        {
            sub_5930( I );
            return 1;
        }
    }
    return 0;
}

int sub_5478(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 22, 25 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 0, 15 );
        break;
        case 8:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 16, 18 );
        break;
        case 9:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 19, 21 );
        break;
        case 11:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 27, 31 );
        break;
        case 12:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 29, 31 );
        break;
        case 13:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 26 );
        break;
        case 14:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 26, 28 );
        break;
    }
    return -1;
}

void sub_5930(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_6003( 39 );
    return;
}

void sub_6003(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_6131(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_6192( uParam0, g_U968[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = 40;
        }
    }
    return -1;
}

int sub_6192(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[0] == uParam10._fU0[0]) AND (uParam0._fU0[1] == uParam10._fU0[1]))
    {
        return 1;
    }
    return 0;
}

void sub_6489(int iParam0, int iParam1, unknown uParam2)
{
    int I;

    if (iParam1 == 0)
    {
        ;
    }
    if (iParam0->_fU40 >= 0)
    {
        for ( I = iParam0->_fU40; I >= 0; I += -1 )
        {
            if (sub_6192( iParam0->_fU0, g_U968[I] ))
            {
                g_U968[I]._fU36 = uParam2;
                iParam0->_fU40 = I;
            }
        }
    }
    return;
}

void sub_6608()
{
    switch (sub_6622( ref l_U590, 0 ))
    {
        case 0:
        l_U589 = 0;
        break;
        case 3:
        if (NOT l_U589)
        {
            if (sub_6799() == 3)
            {
                if (GET_MISSION_FLAG())
                {
                    PRINT_HELP( "CANT_REPLY" );
                }
                else if ((IS_AUTO_SAVE_IN_PROGRESS()) || (g_U9914._fU0))
                {
                    PRINT_HELP( "CANT_REPLY_S" );
                }
                else
                {
                    PRINT_HELP( "CANT_REPLY_X" );
                }
                l_U589 = 1;
            }
        }
        break;
    }
    return;
}

int sub_6622(int iParam0, int iParam1)
{
    int I;

    if (iParam1 == 0)
    {
        ;
    }
    if (iParam0->_fU40 >= 0)
    {
        for ( I = iParam0->_fU40; I >= 0; I += -1 )
        {
            if (sub_6192( iParam0->_fU0, g_U968[I] ))
            {
                iParam0->_fU40 = I;
                return sub_5478( 4, g_U968[I] );
            }
        }
        iParam0->_fU40 = -2;
    }
    return 6;
}

void sub_6799()
{
    return g_U857._fU0;
}

void sub_7131(unknown uParam0)
{
    return COMPARE_STRING( uParam0, ref g_U857._fU232._fU0 );
}

int sub_7172()
{
    switch (l_U552[l_U587]._fU0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        return 1;
        break;
        case 7:
        case 8:
        case 9:
        return 0;
        break;
    }
    return 0;
}

void sub_7447(int iParam0)
{
    return g_U968[iParam0->_fU40]._fU32;
}

void sub_7623(unknown uParam0)
{
    return ROUND( (uParam0 * 60.00000000) * 1000.00000000 );
}

void sub_8073(boolean bParam0)
{
    if (bParam0)
    {
        PRINTSTRING( "TRUE" );
    }
    else
    {
        PRINTSTRING( "FALSE" );
    }
    return;
}

void sub_8193()
{
    sub_8202();
    return;
}

void sub_8202()
{
    int iVar2;

    iVar2 = 22;
    sub_8216( iVar2 );
    return;
}

void sub_8216(unknown uParam0)
{
    unknown uVar3;

    if (NOT g_U13391[uParam0]._fU160._fU80)
    {
        PRINTSTRING( "Flow_Start_Proc_Subpart error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_8368( "Flow_Start_Proc_Subpart: Proc Mission not loaded" );
    }
    sub_8503();
    g_U13391[uParam0]._fU160._fU96 = 1;
    g_U10978 = 1;
    g_U10981[uParam0]._fU28 = 1;
    sub_9301( uParam0 );
    uVar3 = sub_10774( uParam0, g_U13391[uParam0]._fU160._fU76 );
    sub_10962( uVar3 );
    sub_11083();
    return;
}

void sub_8368(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

void sub_8503()
{
    sub_8512();
    sub_8615( ref g_U9893._fU68 );
    sub_8664();
    return;
}

void sub_8512()
{
    g_U9893._fU4 = 0;
    g_U9893._fU8 = 0;
    g_U9893._fU12 = 0;
    g_U9893._fU16 = 0;
    g_U9893._fU20 = 0;
    g_U9893._fU28 = 0;
    g_U9893._fU32 = 0;
    g_U9893._fU36 = 0;
    g_U9893._fU48 = 0;
    return;
}

void sub_8615(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_8664()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_8702( 1, g_U569[I] )) == 0)
        {
            sub_8953( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_9131())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_8702(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_8953(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_9038( g_U569 - 1 );
    return;
}

void sub_9038(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_9131()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_8702( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_9301(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    StrCopy( ref uVar3, 4, g_U13391[uParam0]._fU160._fU44, 8);
    uVar7 = {sub_9337( ref uVar3, uParam0 )};
    sub_10602( uVar7 );
    return;
}

void sub_9337(unknown uParam0, unknown uParam1)
{
    char[16] Result;

    StrCopy( ref Result, uParam0, 16 );
    switch (uParam1)
    {
        case 3:
        switch (g_U64770)
        {
            case 0:
            ConcatString(ref Result, "_A", 16);
            break;
            case 1:
            ConcatString(ref Result, "_B", 16);
            break;
            case 2:
            ConcatString(ref Result, "_C", 16);
            break;
            case 3:
            ConcatString(ref Result, "_D", 16);
            break;
            case 4:
            ConcatString(ref Result, "_E", 16);
            break;
            case 5:
            ConcatString(ref Result, "_F", 16);
            break;
            case 6:
            ConcatString(ref Result, "_G", 16);
            break;
            case 7:
            ConcatString(ref Result, "_H", 16);
            break;
            case 8:
            ConcatString(ref Result, "_I", 16);
            break;
            case 9:
            ConcatString(ref Result, "_J", 16);
            break;
            default:
            PRINTSTRING( "----------------> GLOBAL_DRUG_DEAL value = " );
            PRINTINT( g_U64770 );
            PRINTNL();
            SCRIPT_ASSERT( "This is ignorable, report it to Keith. STATS Drug_Dealing subpart identifier error" );
        }
        break;
        case 19:
        switch (g_U64982)
        {
            case 1:
            ConcatString(ref Result, "_A", 16);
            break;
            case 2:
            ConcatString(ref Result, "_B", 16);
            break;
            case 3:
            ConcatString(ref Result, "_C", 16);
            break;
            case 4:
            ConcatString(ref Result, "_D", 16);
            break;
            case 5:
            ConcatString(ref Result, "_E", 16);
            break;
            case 6:
            ConcatString(ref Result, "_F", 16);
            break;
            case 7:
            ConcatString(ref Result, "_G", 16);
            break;
            case 8:
            ConcatString(ref Result, "_H", 16);
            break;
            case 9:
            ConcatString(ref Result, "_I", 16);
            break;
            default:
            PRINTSTRING( "----------------> g_iBell2MissionNumber value = " );
            PRINTINT( g_U64982 );
            PRINTNL();
            SCRIPT_ASSERT( "This is ignorable, report it to Keith. STATS High-End Assassin subpart identifier error" );
        }
        break;
        case 22:
        switch (g_U64547)
        {
            case 0:
            ConcatString(ref Result, "_A", 16);
            break;
            case 1:
            ConcatString(ref Result, "_B", 16);
            break;
            case 2:
            ConcatString(ref Result, "_C", 16);
            break;
            case 3:
            ConcatString(ref Result, "_D", 16);
            break;
            case 4:
            ConcatString(ref Result, "_E", 16);
            break;
            case 5:
            ConcatString(ref Result, "_F", 16);
            break;
            case 6:
            ConcatString(ref Result, "_G", 16);
            break;
            case 7:
            ConcatString(ref Result, "_H", 16);
            break;
            case 8:
            ConcatString(ref Result, "_I", 16);
            break;
            case 9:
            ConcatString(ref Result, "_J", 16);
            break;
            default:
            PRINTSTRING( "----------------> current_roman10p_scenarios value (as an INT) = " );
            PRINTINT( g_U64547 );
            PRINTNL();
            SCRIPT_ASSERT( "This is ignorable, report it to Keith. STATS High-End Assassin subpart identifier error" );
        }
        break;
    }
    return Result;
}

void sub_10602(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT (COMPARE_STRING( ref g_U9926, "" )))
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Started: g_labelPlayerStatMissionName is already set up" );
        return;
    }
    g_U9926 = {uParam0};
    PLAYSTATS_MISSION_STARTED( ref g_U9926 );
    return;
}

int sub_10774(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_10848( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_10848(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_10962(unknown uParam0)
{
    g_U9925 = g_U26758[uParam0]._fU8;
    if (g_U9925 >= 50000)
    {
        g_U9925 = sub_11008( g_U9925 );
    }
    return;
}

void sub_11008(int Result)
{
    if (Result == 50094)
    {
        if (g_U15654[12])
        {
            return 95;
        }
        else
        {
            return 94;
        }
    }
    return Result;
}

void sub_11083()
{
    unknown uVar2;

    uVar2 = g_U9925;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

void sub_11485(int iParam0, int iParam1, unknown uParam2)
{
    int I;

    if (iParam1 == 0)
    {
        ;
    }
    if (iParam0->_fU40 >= 0)
    {
        for ( I = iParam0->_fU40; I >= 0; I += -1 )
        {
            if (sub_6192( iParam0->_fU0, g_U968[I] ))
            {
                g_U968[I]._fU16 = uParam2;
                iParam0->_fU40 = I;
            }
        }
    }
    return;
}

void sub_11919()
{
    if (l_U618 < 0)
    {
        CLEAR_WANTED_LEVEL( sub_11940() );
        PRINTSTRING( "  * AWARD_ACHIEVEMENT(ENUM_TO_INT(IMPORTDONE))\n" );
        AWARD_ACHIEVEMENT( 17 );
        sub_12044();
        sub_12147( 58, 8, 49, sub_7623( 1.00000000 ) );
        sub_14431();
        GET_GAME_TIMER( ref l_U618 );
    }
    else if (sub_15951( 58 ))
    {
        l_U583 = 0;
    }
    return;
}

void sub_11940()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_12044()
{
    sub_12055( 6, 3 );
    sub_12055( 1020, 3 );
    return;
}

void sub_12055(int iParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = iParam0 mod 1000;
    SET_BITS_IN_RANGE( ref g_U1502[iVar4 / 16], (iVar4 mod 16) * 2, ((iVar4 mod 16) * 2) + 1, uParam1 );
    return;
}

void sub_12147(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    iVar6 = 7;
    sub_12169( uParam0, uParam1, uParam2, uParam3, iVar6 );
    return;
}

void sub_12169(int iParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;

    iVar7 = 59;
    if (iParam0 >= iVar7)
    {
        SCRIPT_ASSERT( "Text_Player: Unknown Txt ID. Tell Keith. Needs added to g_eAmbientTxtmsgs." );
        sub_12281( uParam1, uParam2 );
        return;
    }
    if (g_U63988._fU12[iParam0]._fU0)
    {
        SCRIPT_ASSERT( "Text_Player: Txt has already been setup." );
    }
    iVar8 = 0;
    GET_GAME_TIMER( ref iVar8 );
    g_U63988._fU12[iParam0]._fU0 = 1;
    g_U63988._fU12[iParam0]._fU4 = 0;
    g_U63988._fU12[iParam0]._fU8 = 0;
    g_U63988._fU12[iParam0]._fU12 = uParam1;
    g_U63988._fU12[iParam0]._fU16 = uParam2;
    g_U63988._fU12[iParam0]._fU20 = iVar8 + iParam3;
    g_U63988._fU12[iParam0]._fU28 = uParam4;
    sub_14215( iParam0, iParam3 );
    return;
}

void sub_12281(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    array(ref uVar4._fU0._fU0, 3);
    ref uVar4._fU0;
    ref uVar4;
    uVar11 = sub_12304( uParam0 );
    sub_12795( uVar11, uParam1, 16383, 16383, ref uVar4 );
    sub_13139( ref uVar4, 1 );
    sub_13167( ref uVar4, 0 );
    sub_13195( ref uVar4, 2 );
    sub_13225( ref uVar4 );
    return;
}

int sub_12304(unknown uParam0)
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
        case 22: return 22;
        case 20: return 20;
        case 28: return 28;
        case 29: return 29;
        case 30: return 30;
        case 31: return 31;
        case 32: return 32;
        case 34: return 81;
        case 25: return 25;
    }
    sub_10848( "Flow_public: Return_Text_Message_From_Contact(): Contact Text Message ID not set up yet" );
    return 99;
}

void sub_12795(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_12817( uParam0, 0, iParam4 + 0 );
    sub_12817( uParam1, 1, iParam4 + 0 );
    sub_12817( uParam2, 2, iParam4 + 0 );
    sub_12817( uParam3, 3, iParam4 + 0 );
    sub_12817( 0, 4, iParam4 + 0 );
    sub_12817( 1, 5, iParam4 + 0 );
    sub_12817( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_12817(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 14, 23, uParam0 );
        break;
        case 1:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 0, 13, uParam0 );
        break;
        case 2:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 14, 27, uParam0 );
        break;
        case 3:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 0, 13, uParam0 );
        break;
        case 4:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 24, 27, uParam0 );
        break;
        case 5:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 28, 31, uParam0 );
        break;
        case 6:
        iParam2->_fU0[2] = uParam0;
        break;
    }
    return;
}

void sub_13139(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_13167(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_13195(int iParam0, unknown uParam1)
{
    sub_12817( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_13225(int iParam0)
{
    int I;
    int iVar4;
    char[16] cVar5;
    int iVar9;

    iVar4 = 0;
    StrCopy( ref cVar5, "TM_NAME_", 16 );
    if (g_U91._fU540)
    {
        return 0;
    }
    if ((g_U569[g_U569 - 1]._fU0[0]) != -1)
    {
        if (NOT sub_13295())
        {
            sub_8953( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_13422( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_8953( iVar9 );
    }
    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (g_U569[I]._fU0[0] == -1)
        {
            g_U569[I] = {iParam0->_fU0};
            iParam0->_fU24 = I;
            I = g_U569;
            iVar4++;
            if (iVar4 > 1)
            {
                SET_PHONE_HUD_ITEM( 1, "UNREAD_MESSAGES", iVar4 );
            }
            else
            {
                ConcatString(ref cVar5, sub_8702( 0, iParam0->_fU0 ), 16);
                SET_PHONE_HUD_ITEM( 1, ref cVar5, iVar4 );
            }
            g_U91._fU520 = 1;
            PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
            if (g_U555 == 9)
            {
                g_U91._fU404 = 1015;
            }
            else if (g_U91._fU0 == 1014)
            {
                g_U91._fU92 = 1;
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 300, 1 );
            g_U15654[17] = 1;
        }
        else if ((sub_8702( 4, g_U569[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_13295()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_8702( 1, g_U569[I] )) != 0) AND (g_U569[I]._fU20))
        {
            sub_8953( I );
            return 1;
        }
    }
    return 0;
}

int sub_13422(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U569 - 1); Result++ )
    {
        if (g_U569[Result]._fU0[0] != -1)
        {
            if (sub_13487( uParam0, g_U569[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = g_U569;
        }
    }
    return -1;
}

int sub_13487(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_8702( 0, uParam0 );
        if (iVar14 == (sub_8702( 0, uParam6 )))
        {
            iVar15 = sub_8702( 3, uParam0 );
            if (iVar15 == (sub_8702( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_14215(unknown uParam0, int iParam1)
{
    g_U63988._fU12[uParam0]._fU24 = 0;
    if (iParam1 == 0)
    {
        return;
    }
    if (sub_14254( iParam1 ))
    {
        g_U63988._fU12[uParam0]._fU24 = iParam1;
        return;
    }
    return;
}

int sub_14254(int iParam0)
{
    int iVar3;

    iVar3 = sub_14263();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    iVar3 = sub_14318();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    return 0;
}

int sub_14263()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_14318()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

void sub_14431()
{
    sub_14440();
    return;
}

void sub_14440()
{
    int iVar2;
    int iVar3;

    iVar2 = 22;
    iVar3 = 21;
    sub_14479( iVar2, iVar3, "Girl_26 - Exports" );
    return;
}

void sub_14479(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    sub_14494( uParam0, uParam1, uParam2 );
    uVar5 = g_U13391[uParam0]._fU160._fU76;
    g_U10981[uParam0]._fU24 = uVar5;
    if (g_U13391[uParam0]._fU160._fU8)
    {
        g_U15946[uParam1]._fU8[0]._fU0[3] = 0;
    }
    g_U13391[uParam0]._fU160._fU108._fU0 = 0;
    return;
}

void sub_14494(unknown uParam0, unknown uParam1, unknown uParam2)
{
    char[64] cVar5;
    int iVar21;
    int iVar22;
    int iVar23;

    StrCopy( ref cVar5, "", 64 );
    if (NOT g_U13391[uParam0]._fU160._fU80)
    {
        PRINTSTRING( "Flow_Proc_Complete error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        StrCopy( ref cVar5, uParam2, 64 );
        ConcatString(ref cVar5, " Proc_Complete: proc not setup", 64);
        sub_14638( ref cVar5 );
        return;
    }
    if (g_U13391[uParam0]._fU160._fU76 == -1)
    {
        PRINTSTRING( "Flow_Proc_Complete error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        StrCopy( ref cVar5, uParam2, 64 );
        ConcatString(ref cVar5, " Proc_Complete: proc ID not setup", 64);
        sub_14638( ref cVar5 );
        return;
    }
    sub_14923( uParam0 );
    iVar21 = -1;
    iVar22 = -1;
    iVar23 = -1;
    if (sub_15658( uParam0, ref iVar21, ref iVar22, ref iVar23 ))
    {
        sub_12147( iVar21, uParam1, iVar22, iVar23 );
    }
    return;
}

void sub_14638(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

void sub_14923(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (g_U0)
    {
        return;
    }
    iVar3 = 5;
    switch (uParam0)
    {
        case 0: return;
        case 3:
        iVar3 = 0;
        break;
        case 22:
        iVar3 = 1;
        break;
        case 19:
        iVar3 = 2;
        break;
        case 8:
        iVar3 = 3;
        break;
        case -1:
        iVar3 = 4;
        break;
        default: return;
    }
    iVar4 = 0;
    if (NOT g_U64792[iVar3]._fU0)
    {
        iVar4 = ProtectedGet(g_U64792[iVar3]._fU8);
        if (iVar4 > 0)
        {
            sub_15098( 1, iVar4 );
            g_U64792[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_15098(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_15280( 0 );
    return;
}

void sub_15280(boolean bParam0)
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
        sub_15535();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_15535()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

int sub_15658(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 39;
        (uParam2^) = 55;
        (uParam3^) = 360000;
        return 1;
        case 3:
        (uParam1^) = 40;
        (uParam2^) = 15;
        (uParam3^) = 360000;
        return 1;
        case 8:
        (uParam1^) = 41;
        (uParam2^) = 21;
        (uParam3^) = 360000;
        return 1;
    }
    return 0;
}

void sub_15951(unknown uParam0)
{
    return g_U63988._fU12[uParam0]._fU4;
}

void sub_16007()
{
    l_U583 = 0;
    return;
}

void sub_16040()
{
    if (IS_PLAYER_PLAYING( sub_11940() ))
    {
        SET_CHAR_PROOFS( sub_2004(), 0, 0, 0, 0, 0 );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}
