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
    l_U481 = 225;
    l_U482 = 0.92800000;
    l_U483 = 0.01400000;
    l_U484 = 0.93000000;
    l_U485 = -0.02500000;
    l_U486 = -0.11600000;
    l_U487 = 0.90100000;
    l_U488 = 0.39500000;
    l_U489 = 0.55000000;
    l_U490 = 0.86700000;
    l_U491 = 0.39500000;
    l_U492 = 0.55000000;
    l_U493 = 0.88400000;
    l_U494 = 0.88500000;
    l_U495 = 0.86900000;
    l_U496 = 0.87100000;
    l_U497 = 0.31510000;
    l_U498 = 0.47800000;
    l_U499 = 0.00200000;
    l_U500 = 0.01000000;
    l_U501 = 0.83250000;
    l_U502 = 0.79800000;
    l_U503 = 0.80000000;
    l_U504 = 1.23000000;
    l_U505 = 0.83900000;
    l_U506 = 0.80400000;
    l_U507 = 0.31500000;
    l_U508 = 0.47800000;
    l_U509 = 0.86800000;
    l_U510 = 0.83300000;
    l_U511 = 0.39500000;
    l_U512 = 0.55000000;
    l_U633 = 8;
    l_U675 = 0;
    l_U676 = 0;
    l_U677 = 0;
    l_U679 = 0;
    l_U680 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    if (sub_441( l_U633 ))
    {
        sub_694( l_U633, 0, 3, -1, -1, -1 );
        sub_694( l_U633, 1, 3, -1, -1, -1 );
        sub_694( l_U633, 2, 3, -1, -1, -1 );
        ProtectedSet(g_U64679, 0);
        ProtectedSet(g_U64680, 0);
        ProtectedSet(g_U64681, 0);
        l_U675 = 0;
        sub_1548( ref l_U634, "BRp5_NCALLS", ref l_U675 );
        sub_1548( ref l_U634, "BRp5_RESP", ref l_U675 );
    }
    else
    {
        l_U680 = 1;
        if (sub_1703( l_U633, 9 ))
        {
            ;
        }
    }
    while (true)
    {
        WAIT( 0 );
        if (NOT l_U677)
        {
            if (NOT g_U10978)
            {
                if (sub_1917())
                {
                    if (NOT g_U64683)
                    {
                        sub_1991();
                        g_U64683 = 1;
                    }
                }
                if (sub_6058( l_U633 ))
                {
                    if (((sub_6859()) || (sub_6910( 8 ))) || (NOT sub_6966()))
                    {
                        sub_7046( ref g_U10981[8]._fU92, ref g_U10981[8]._fU76, 0 );
                    }
                    else if (l_U675 == 0)
                    {
                        sub_1548( ref l_U634, "BRp5_NCALLS", ref l_U675 );
                        l_U680 = 1;
                    }
                    if (IS_PLAYER_PLAYING( sub_7332() ))
                    {
                        if (sub_11175())
                        {
                            if (sub_11267())
                            {
                                if (l_U679 == 0)
                                {
                                    if (l_U680)
                                    {
                                        if (g_U64682)
                                        {
                                            sub_1548( ref l_U634, "BRp5_RACEW", ref l_U675 );
                                        }
                                        else
                                        {
                                            sub_1548( ref l_U634, "BRp5_RACEL", ref l_U675 );
                                        }
                                    }
                                    if (l_U678 == 0)
                                    {
                                        sub_1548( ref l_U634, "BRp5_LOCAT", ref l_U675 );
                                        l_U676 = 4;
                                    }
                                    else if (l_U678 == 1)
                                    {
                                        sub_1548( ref l_U634, "BRp5_LOCAT6", ref l_U675 );
                                        l_U676 = 10;
                                    }
                                    else if (l_U678 == 2)
                                    {
                                        sub_1548( ref l_U634, "BRp5_LOCAT8", ref l_U675 );
                                        l_U676 = 11;
                                    };;;
                                    l_U677 = 1;
                                }
                                else
                                {
                                    sub_1548( ref l_U634, "BRp5_NONE", ref l_U675 );
                                }
                            }
                            else
                            {
                                sub_1548( ref l_U634, "BRp5_NONE", ref l_U675 );
                            }
                            sub_19643( ref l_U634, ref l_U675 );
                            sub_19687();
                            l_U679 = 0;
                            l_U675 = 0;
                        }
                        else if (sub_11495())
                        {
                            if (sub_11267())
                            {
                                if (l_U679 == 0)
                                {
                                    if (l_U680)
                                    {
                                        if (g_U64682)
                                        {
                                            sub_1548( ref l_U634, "BRp5_RACEW", ref l_U675 );
                                        }
                                        else
                                        {
                                            sub_1548( ref l_U634, "BRp5_RACEL", ref l_U675 );
                                        }
                                    }
                                    if (l_U678 == 0)
                                    {
                                        sub_1548( ref l_U634, "BRp5_LOCAT1", ref l_U675 );
                                        l_U676 = 5;
                                    }
                                    else if (l_U678 == 1)
                                    {
                                        sub_1548( ref l_U634, "BRp5_LOCAT3", ref l_U675 );
                                        l_U676 = 7;
                                    }
                                    else if (l_U678 == 2)
                                    {
                                        sub_1548( ref l_U634, "BRp5_LOCAT4", ref l_U675 );
                                        l_U676 = 8;
                                    };;;
                                    l_U677 = 1;
                                }
                                else
                                {
                                    sub_1548( ref l_U634, "BRp5_NONE", ref l_U675 );
                                }
                            }
                            else
                            {
                                sub_1548( ref l_U634, "BRp5_NONE", ref l_U675 );
                            }
                            sub_19643( ref l_U634, ref l_U675 );
                            sub_19687();
                            l_U679 = 0;
                            l_U675 = 0;
                        }
                        else if (sub_11750())
                        {
                            if (sub_11267())
                            {
                                if (l_U679 == 0)
                                {
                                    if (l_U680)
                                    {
                                        if (g_U64682)
                                        {
                                            sub_1548( ref l_U634, "BRp5_RACEW", ref l_U675 );
                                        }
                                        else
                                        {
                                            sub_1548( ref l_U634, "BRp5_RACEL", ref l_U675 );
                                        }
                                    }
                                    if (l_U678 == 0)
                                    {
                                        sub_1548( ref l_U634, "BRp5_LOCAT2", ref l_U675 );
                                        l_U676 = 6;
                                    }
                                    else if (l_U678 == 1)
                                    {
                                        sub_1548( ref l_U634, "BRp5_LOCAT5", ref l_U675 );
                                        l_U676 = 9;
                                    }
                                    else if (l_U678 == 2)
                                    {
                                        sub_1548( ref l_U634, "BRp5_LOCAT7", ref l_U675 );
                                        l_U676 = 12;
                                    };;;
                                    l_U677 = 1;
                                }
                                else
                                {
                                    sub_1548( ref l_U634, "BRp5_NONE", ref l_U675 );
                                }
                            }
                            else
                            {
                                sub_1548( ref l_U634, "BRp5_NONE", ref l_U675 );
                            }
                            sub_19643( ref l_U634, ref l_U675 );
                            sub_19687();
                            l_U679 = 0;
                            l_U675 = 0;
                        };;;
                    }
                }
            }
        }
        else if (NOT g_U10978)
        {
            sub_21054();
        }
        else
        {
            l_U679 = 0;
            l_U675 = 0;
            l_U677 = 0;
        }
        if (l_U677)
        {
            while (NOT (HAS_SCRIPT_LOADED( "brucie5m" )))
            {
                WAIT( 0 );
                REQUEST_SCRIPT( "brucie5m" );
            }
            START_NEW_SCRIPT_WITH_ARGS( "brucie5m", ref l_U676, 1, 8192 );
            MARK_SCRIPT_AS_NO_LONGER_NEEDED( "brucie5m" );
            l_U680 = 1;
            l_U679 = 0;
            l_U675 = 0;
            l_U677 = 0;
        }
    }
    return;
}

int sub_441(unknown uParam0)
{
    if (g_U15946[uParam0]._fU168._fU4)
    {
        sub_474( uParam0 );
        g_U15946[uParam0]._fU168._fU4 = 0;
        return 1;
    }
    return 0;
}

void sub_474(unknown uParam0)
{
    int I;
    int J;

    for ( I = 0; I <= 14; I++ )
    {
        g_U15946[uParam0]._fU168._fU12[I] = 0;
    }
    for ( I = 0; I <= 2; I++ )
    {
        for ( J = 0; J <= 14; J++ )
        {
            g_U15946[uParam0]._fU168._fU76[I]._fU0[J] = -1;
        }
    }
    g_U15946[uParam0]._fU168._fU0 = 1;
    g_U15946[uParam0]._fU168._fU8 = 0;
    return;
}

void sub_694(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
    int I;
    int J;
    unknown uVar10;
    unknown uVar11;

    if (g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[0] == -1)
    {
        for ( I = 0; I <= (iParam2 - 1); I++ )
        {
            g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[I] = I;
        }
        for ( I = iParam2 - 1; I >= 1; I += -1 )
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, I + 1, ref uVar11 );
            uVar10 = g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[I];
            g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[I] = g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[uVar11];
            g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[uVar11] = uVar10;
        }
        if (iParam5 != -1)
        {
            for ( I = 0; I <= (iParam2 - 2); I++ )
            {
                if ((g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[I] == iParam3) || (g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[I] == iParam4))
                {
                    for ( J = I + 1; J <= (I + iParam5); J++ )
                    {
                        if (J < iParam2)
                        {
                            if ((g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[J] == iParam3) || (g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[J] == iParam4))
                            {
                                uVar10 = g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[0];
                                g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[0] = g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[I];
                                g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[I] = uVar10;
                                uVar10 = g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[iParam2 - 1];
                                g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[iParam2 - 1] = g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[J];
                                g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[J] = uVar10;
                                return;
                            }
                        }
                    }
                    return;
                }
            }
        }
    }
    return;
}

void sub_1548(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if ((uParam2^) < (uParam0^))
    {
        StrCopy( ref (uParam0^)[(uParam2^)], uParam1, 16 );
        (uParam2^)++;
    }
    else
    {
        SCRIPT_ASSERT( "ADD_SPEECH_LABEL - increase the size of your array" );
    }
    return;
}

int sub_1703(unknown uParam0, int iParam1)
{
    int I;

    for ( I = 0; I <= (iParam1 - 1); I++ )
    {
        if (g_U15946[uParam0]._fU168._fU12[I] != 1)
        {
            sub_1792( "\n Player has NOT passed mission ", I );
            return 0;
        }
        else
        {
            sub_1792( "\n Player has passed mission ", I );
        }
    }
    return 1;
}

void sub_1792(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_1917()
{
    if (((ProtectedGet(g_U64679) > 2) AND (ProtectedGet(g_U64680) > 2)) AND (ProtectedGet(g_U64681) > 2))
    {
        return 1;
    }
    return 0;
}

void sub_1991()
{
    sub_2000();
    return;
}

void sub_2000()
{
    int iVar2;
    int iVar3;

    iVar2 = 8;
    iVar3 = 8;
    sub_2030( iVar2, iVar3, "Friend_9" );
    return;
}

void sub_2030(unknown uParam0, unknown uParam1, unknown uParam2)
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
        sub_2174( ref cVar5 );
        return;
    }
    if (g_U13391[uParam0]._fU160._fU76 == -1)
    {
        PRINTSTRING( "Flow_Proc_Complete error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        StrCopy( ref cVar5, uParam2, 64 );
        ConcatString(ref cVar5, " Proc_Complete: proc ID not setup", 64);
        sub_2174( ref cVar5 );
        return;
    }
    sub_2459( uParam0 );
    iVar21 = -1;
    iVar22 = -1;
    iVar23 = -1;
    if (sub_3194( uParam0, ref iVar21, ref iVar22, ref iVar23 ))
    {
        sub_3329( iVar21, uParam1, iVar22, iVar23 );
    }
    return;
}

void sub_2174(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

void sub_2459(unknown uParam0)
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
            sub_2634( 1, iVar4 );
            g_U64792[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_2634(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_2816( 0 );
    return;
}

void sub_2816(boolean bParam0)
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
        sub_3071();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_3071()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

int sub_3194(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_3329(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    iVar6 = 7;
    sub_3351( uParam0, uParam1, uParam2, uParam3, iVar6 );
    return;
}

void sub_3351(int iParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;

    iVar7 = 59;
    if (iParam0 >= iVar7)
    {
        SCRIPT_ASSERT( "Text_Player: Unknown Txt ID. Tell Keith. Needs added to g_eAmbientTxtmsgs." );
        sub_3463( uParam1, uParam2 );
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
    sub_5805( iParam0, iParam3 );
    return;
}

void sub_3463(unknown uParam0, unknown uParam1)
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
    uVar11 = sub_3486( uParam0 );
    sub_3998( uVar11, uParam1, 16383, 16383, ref uVar4 );
    sub_4342( ref uVar4, 1 );
    sub_4370( ref uVar4, 0 );
    sub_4398( ref uVar4, 2 );
    sub_4428( ref uVar4 );
    return;
}

int sub_3486(unknown uParam0)
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
    sub_3946( "Flow_public: Return_Text_Message_From_Contact(): Contact Text Message ID not set up yet" );
    return 99;
}

void sub_3946(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_3998(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_4020( uParam0, 0, iParam4 + 0 );
    sub_4020( uParam1, 1, iParam4 + 0 );
    sub_4020( uParam2, 2, iParam4 + 0 );
    sub_4020( uParam3, 3, iParam4 + 0 );
    sub_4020( 0, 4, iParam4 + 0 );
    sub_4020( 1, 5, iParam4 + 0 );
    sub_4020( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_4020(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_4342(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_4370(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_4398(int iParam0, unknown uParam1)
{
    sub_4020( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_4428(int iParam0)
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
        if (NOT sub_4498())
        {
            sub_4799( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_5012( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_4799( iVar9 );
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
                ConcatString(ref cVar5, sub_4536( 0, iParam0->_fU0 ), 16);
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
        else if ((sub_4536( 4, g_U569[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_4498()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_4536( 1, g_U569[I] )) != 0) AND (g_U569[I]._fU20))
        {
            sub_4799( I );
            return 1;
        }
    }
    return 0;
}

int sub_4536(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_4799(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_4884( g_U569 - 1 );
    return;
}

void sub_4884(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_5012(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U569 - 1); Result++ )
    {
        if (g_U569[Result]._fU0[0] != -1)
        {
            if (sub_5077( uParam0, g_U569[Result] ))
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

int sub_5077(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_4536( 0, uParam0 );
        if (iVar14 == (sub_4536( 0, uParam6 )))
        {
            iVar15 = sub_4536( 3, uParam0 );
            if (iVar15 == (sub_4536( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_5805(unknown uParam0, int iParam1)
{
    g_U63988._fU12[uParam0]._fU24 = 0;
    if (iParam1 == 0)
    {
        return;
    }
    if (sub_5844( iParam1 ))
    {
        g_U63988._fU12[uParam0]._fU24 = iParam1;
        return;
    }
    return;
}

int sub_5844(int iParam0)
{
    int iVar3;

    iVar3 = sub_5853();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    iVar3 = sub_5908();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    return 0;
}

int sub_5853()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_5908()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_6058(unknown uParam0)
{
    if (g_U15946[uParam0]._fU4 == 1)
    {
        if (g_U15946[uParam0]._fU8[1]._fU0[3] == 1)
        {
            g_U15946[uParam0]._fU4 = 0;
            g_U15946[uParam0]._fU8[1]._fU0[3] = 0;
            if (sub_6151())
            {
                return 0;
            }
            sub_6790();
            return 1;
        }
    }
    return 0;
}

int sub_6151()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "BADMAN_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "BRIAN_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "BRIAN_2" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "BRIAN_3" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "CHERISE" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "CLARENCE" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "EDDIE1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "EDDIE2" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "GRACIE" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "HOSSAN_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ILYENA" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "IVAN_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "JEFF_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "JEFF_1_MISSION" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "JEFF_3" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MARNIE1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MARNIE2" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MEL" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "PATHOS1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "PATHOS1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "SARA_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "SARA2" )) > 0)
    {
        return 1;
    }
    return 0;
}

void sub_6790()
{
    g_U811 = 0;
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    return;
}

int sub_6859()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "brucie_heli" )) >= 1)
    {
        return 1;
    }
    return 0;
}

int sub_6910(int iParam0)
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

int sub_6966()
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

int sub_7046(unknown uParam0, unknown uParam1, boolean bParam2)
{
    char[12] cVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown[2] uVar14;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;

    array(ref cVar5, 2);
    StrCopy( ref cVar5[0], uParam0, 16 );
    StrCopy( ref cVar5[1], "END", 16 );
    array(ref uVar14, 2);
    uVar23 = g_U91._fU60;
    if (NOT (COMPARE_STRING( uParam0, "PLACEHOLDER" )))
    {
        if (bParam2)
        {
            return sub_7154( uVar23, ref cVar5, uParam1, 0, ref uVar14, ref uVar14, "", 0, bParam2, 1, 1, 0, 0, 0 );
        }
        if ((NOT g_U91._fU368) == 1)
        {
            StrCopy( ref g_U91._fU224[0], uParam1, 16 );
            StrCopy( ref g_U91._fU224[1], uParam0, 16 );
            sub_9115( uVar23, ref g_U91._fU176 );
            g_U91._fU368 = 1;
            return 1;
        }
    }
    return 0;
}

int sub_7154(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_7224( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_7224( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_7332() )))
    {
        sub_7224( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_7411() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_7411() ))))
    {
        sub_7224( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_7224( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_7743()) AND (NOT bParam11))
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
                sub_7224( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT sub_7743()) AND (NOT bParam11))
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
    sub_9115( uParam0, ref g_U91._fU176 );
    sub_10496( ref g_U91._fU160 );
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
        sub_10736( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

void sub_7224(unknown uParam0)
{
    return;
}

void sub_7332()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_7411()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_7743()
{
    if ((g_U91._fU48) || (g_U91._fU52))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_7800())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_7800()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_7332() )))
    {
        sub_7224( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_7224( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_7224( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU100) || (g_U91._fU104))
    {
        sub_7224( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_7332() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_7411() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_7411(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_7224( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_7411() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_7224( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_7224( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_7332() )))
    {
        sub_7224( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_9115(int iParam0, unknown uParam1)
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

void sub_10496(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

void sub_10736(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_11175()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;

    if (NOT (IS_CHAR_DEAD( sub_7411() )))
    {
        GET_CHAR_COORDINATES( sub_7411(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        iVar5 = GET_MAP_AREA_FROM_COORDS( uVar2 );
        if ((iVar5 == 0) || (iVar5 == 1))
        {
            return 1;
        }
    }
    return 0;
}

int sub_11267()
{
    unknown uVar2;
    int iVar3;
    int iVar4;

    if (sub_11175())
    {
        sub_11294( ref l_U678, ref l_U676 );
    }
    else if (sub_11495())
    {
        sub_11590( ref l_U678, ref l_U676 );
    }
    else if (sub_11750())
    {
        sub_11845( ref l_U678, ref l_U676 );
    };;;
    sub_12005( l_U676 );
    if (NOT (IS_CHAR_DEAD( sub_7411() )))
    {
        if (NOT l_U682)
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_7411(), l_U629._fU0, l_U629._fU4, l_U629._fU8, 250.00000000, 250.00000000, 50.00000000, 0 ))
            {
                if (sub_11175())
                {
                    if (ProtectedGet(g_U64679) < 2)
                    {
                        iVar3 = ProtectedGet(g_U64679);
                        iVar4 = iVar3 + 1;
                        uVar2 = g_U15946[l_U633]._fU168._fU76[0]._fU0[iVar3];
                        g_U15946[l_U633]._fU168._fU76[0]._fU0[iVar3] = g_U15946[l_U633]._fU168._fU76[0]._fU0[iVar4];
                        g_U15946[l_U633]._fU168._fU76[0]._fU0[iVar4] = uVar2;
                        sub_11294( ref l_U678, ref l_U676 );
                        return 1;
                    }
                    else
                    {
                        return 0;
                        sub_11294( ref l_U678, ref l_U676 );
                        sub_12005( l_U676 );
                    }
                }
                else if (sub_11495())
                {
                    if (ProtectedGet(g_U64680) < 2)
                    {
                        iVar3 = ProtectedGet(g_U64680);
                        iVar4 = iVar3 + 1;
                        uVar2 = g_U15946[l_U633]._fU168._fU76[1]._fU0[iVar3];
                        g_U15946[l_U633]._fU168._fU76[1]._fU0[iVar3] = g_U15946[l_U633]._fU168._fU76[1]._fU0[iVar4];
                        g_U15946[l_U633]._fU168._fU76[1]._fU0[iVar4] = uVar2;
                        sub_11590( ref l_U678, ref l_U676 );
                        return 1;
                    }
                    else
                    {
                        return 0;
                        sub_11590( ref l_U678, ref l_U676 );
                        sub_12005( l_U676 );
                    }
                }
                else if (sub_11750())
                {
                    if (ProtectedGet(g_U64681) < 2)
                    {
                        iVar3 = ProtectedGet(g_U64681);
                        iVar4 = iVar3 + 1;
                        uVar2 = g_U15946[l_U633]._fU168._fU76[2]._fU0[iVar3];
                        g_U15946[l_U633]._fU168._fU76[2]._fU0[iVar3] = g_U15946[l_U633]._fU168._fU76[2]._fU0[iVar4];
                        g_U15946[l_U633]._fU168._fU76[2]._fU0[iVar4] = uVar2;
                        sub_11845( ref l_U678, ref l_U676 );
                        return 1;
                    }
                    else
                    {
                        return 0;
                        sub_11845( ref l_U678, ref l_U676 );
                        sub_12005( l_U676 );
                    }
                };;;
            }
            else
            {
                return 1;
            }
        }
    }
    l_U679 = 1;
    return 0;
}

void sub_11294(unknown uParam0, unknown uParam1)
{
    if (g_U64683)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 3, uParam0 );
        l_U682 = 0;
    }
    else if (ProtectedGet(g_U64679) < 3)
    {
        (uParam0^) = sub_11364( l_U633, 0, ProtectedGet(g_U64679) );
        l_U682 = 0;
    }
    else
    {
        l_U682 = 1;
    }
    if ((uParam0^) == 0)
    {
        (uParam1^) = 4;
    }
    else if ((uParam0^) == 1)
    {
        (uParam1^) = 10;
    }
    else if ((uParam0^) == 2)
    {
        (uParam1^) = 11;
    };;;
    return;
}

void sub_11364(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[uParam2];
}

int sub_11495()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;

    if (NOT (IS_CHAR_DEAD( sub_7411() )))
    {
        GET_CHAR_COORDINATES( sub_7411(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        iVar5 = GET_MAP_AREA_FROM_COORDS( uVar2 );
        if (iVar5 == 2)
        {
            return 1;
        }
    }
    return 0;
}

void sub_11590(unknown uParam0, unknown uParam1)
{
    if (g_U64683)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 3, uParam0 );
        l_U682 = 0;
    }
    else if (ProtectedGet(g_U64680) < 3)
    {
        (uParam0^) = sub_11364( l_U633, 1, ProtectedGet(g_U64680) );
        l_U682 = 0;
    }
    else
    {
        l_U682 = 1;
    }
    if ((uParam0^) == 0)
    {
        (uParam1^) = 5;
    }
    else if ((uParam0^) == 1)
    {
        (uParam1^) = 7;
    }
    else if ((uParam0^) == 2)
    {
        (uParam1^) = 8;
    };;;
    return;
}

int sub_11750()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;

    if (NOT (IS_CHAR_DEAD( sub_7411() )))
    {
        GET_CHAR_COORDINATES( sub_7411(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        iVar5 = GET_MAP_AREA_FROM_COORDS( uVar2 );
        if (iVar5 == 3)
        {
            return 1;
        }
    }
    return 0;
}

void sub_11845(unknown uParam0, unknown uParam1)
{
    if (g_U64683)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 3, uParam0 );
        l_U682 = 0;
    }
    else if (ProtectedGet(g_U64681) < 3)
    {
        (uParam0^) = sub_11364( l_U633, 2, ProtectedGet(g_U64681) );
        l_U682 = 0;
    }
    else
    {
        l_U682 = 1;
    }
    if ((uParam0^) == 0)
    {
        (uParam1^) = 6;
    }
    else if ((uParam0^) == 1)
    {
        (uParam1^) = 9;
    }
    else if ((uParam0^) == 2)
    {
        (uParam1^) = 12;
    };;;
    return;
}

void sub_12005(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        l_U629 = {819.48600000, 1479.32800000, 13.39460000};
        l_U632 = 0.00000000;
        l_U520[0] = {769.82470000, 1557.60000000, 20.14630000};
        l_U520[1] = {706.01180000, 1661.45900000, 22.66080000};
        l_U520[2] = {804.78360000, 1750.77200000, 32.07240000};
        l_U520[3] = {840.74150000, 1848.28300000, 43.89900000};
        l_U520[4] = {685.09310000, 1971.84200000, 34.03350000};
        l_U520[5] = {502.67810000, 1972.51200000, 22.38580000};
        l_U520[6] = {349.73310000, 1941.03500000, 19.06760000};
        l_U520[7] = {338.00910000, 1755.63000000, 16.09750000};
        l_U520[8] = {384.75030000, 1584.24100000, 15.30070000};
        l_U520[9] = {471.66060000, 1418.31400000, 9.68810000};
        l_U520[10] = {657.66060000, 1359.75300000, 13.28940000};
        l_U520[11] = {807.82450000, 1374.82800000, 13.25580000};
        l_U520[12] = {819.48600000, 1479.32800000, 13.29460000};
        ProtectedSet(l_U518, 13);
        ProtectedSet(l_U519, 3);
        break;
        case 1:
        l_U629 = {446.76570000, 1459.62100000, 9.18706400};
        l_U632 = 29.72610000;
        l_U520[0] = {388.95110000, 1573.75400000, 15.47200000};
        l_U520[1] = {348.33200000, 1666.39500000, 15.16100000};
        l_U520[2] = {383.27840000, 1777.25200000, 19.40960000};
        l_U520[3] = {471.68590000, 1688.83200000, 16.43080000};
        l_U520[4] = {573.46940000, 1636.13900000, 28.47160000};
        l_U520[5] = {630.42720000, 1535.24400000, 19.54680000};
        l_U520[6] = {741.44070000, 1458.65300000, 13.39630000};
        l_U520[7] = {683.74060000, 1359.34300000, 13.42690000};
        l_U520[8] = {509.14200000, 1363.52000000, 11.12040000};
        l_U520[9] = {446.76560000, 1459.62100000, 9.28706000};
        ProtectedSet(l_U518, 10);
        ProtectedSet(l_U519, 2);
        break;
        case 2:
        l_U629 = {-44.69510000, -323.41980000, 13.82180000};
        l_U632 = 0.00000000;
        l_U520[0] = {-106.32710000, -124.08490000, 13.87190000};
        l_U520[1] = {-160.15020000, 81.36440000, 13.81570000};
        l_U520[2] = {-219.65490000, 320.47350000, 13.86680000};
        l_U520[3] = {-260.49720000, 489.86650000, 13.86570000};
        l_U520[4] = {-364.49110000, 634.13510000, 13.77180000};
        l_U520[5] = {-364.90720000, 847.38800000, 13.77090000};
        l_U520[6] = {-365.98020000, 1102.76200000, 13.77400000};
        l_U520[7] = {-511.01690000, 1167.66500000, 14.33440000};
        l_U520[8] = {-652.27900000, 1115.75600000, 14.71100000};
        l_U520[9] = {-658.26490000, 915.36740000, 5.71680000};
        l_U520[10] = {-584.44710000, 725.89300000, 5.71300000};
        l_U520[11] = {-559.80020000, 514.36840000, 5.61780000};
        l_U520[12] = {-547.57910000, 264.83880000, 5.71870000};
        l_U520[13] = {-520.46680000, 94.49330000, 6.80550000};
        l_U520[14] = {-520.99650000, -87.22980000, 6.93560000};
        l_U520[15] = {-493.69560000, -279.50840000, 6.99530000};
        l_U520[16] = {-334.82820000, -412.34960000, 3.96740000};
        l_U520[17] = {-236.00810000, -591.65910000, 3.98790000};
        l_U520[18] = {-237.31590000, -764.15630000, 3.81860000};
        l_U520[19] = {-50.46370000, -754.44310000, 5.20940000};
        l_U520[20] = {-50.83940000, -590.53800000, 13.82180000};
        l_U520[21] = {-50.74010000, -323.54160000, 13.82180000};
        ProtectedSet(l_U518, 22);
        ProtectedSet(l_U519, 3);
        break;
        case 3:
        l_U629 = {1042.79800000, 168.79220000, 31.10000000};
        l_U632 = 327.60940000;
        l_U520[0] = {1037.53400000, 364.98420000, 28.13020000};
        l_U520[1] = {844.30650000, 459.27910000, 12.64360000};
        l_U520[2] = {813.75400000, 224.67010000, 5.19830000};
        l_U520[3] = {802.10360000, -2.24190000, 5.04270000};
        l_U520[4] = {876.38030000, -222.27800000, 5.70380000};
        l_U520[5] = {772.19770000, -390.71460000, 5.45970000};
        l_U520[6] = {848.76920000, -569.55270000, 12.77700000};
        l_U520[7] = {1092.25900000, -561.32110000, 12.50360000};
        l_U520[8] = {1008.29200000, -342.39850000, 18.25250000};
        l_U520[9] = {966.67960000, -98.91030000, 23.14290000};
        l_U520[10] = {1034.82100000, 167.03170000, 31.05430000};
        ProtectedSet(l_U518, 11);
        ProtectedSet(l_U519, 2);
        break;
        case 4:
        l_U632 = 138.14790000;
        l_U629 = {1429.23200000, -25.44190000, 23.15300000};
        l_U520[0] = {1389.03400000, -121.81070000, 20.85890000};
        l_U520[1] = {1303.14400000, -142.11510000, 25.62870000};
        l_U520[2] = {1277.82100000, -276.47050000, 23.29610000};
        l_U520[3] = {1214.99000000, -303.98240000, 20.39000000};
        l_U520[4] = {1191.50900000, -440.22500000, 14.59240000};
        l_U520[5] = {1191.83700000, -536.52950000, 13.00090000};
        l_U520[6] = {1129.33800000, -568.33790000, 12.60900000};
        l_U520[7] = {1091.27500000, -445.96450000, 12.58690000};
        l_U520[8] = {1124.70400000, -337.56700000, 17.08060000};
        l_U520[9] = {1127.57400000, -194.99610000, 22.92120000};
        l_U520[10] = {1125.02900000, -86.12200000, 35.30460000};
        l_U520[11] = {1265.14200000, -54.20490000, 27.40560000};
        l_U520[12] = {1341.20100000, 67.01100000, 31.01500000};
        l_U520[13] = {1421.44000000, 93.50120000, 24.91400000};
        l_U520[14] = {1488.12200000, 62.69700000, 24.01050000};
        l_U520[15] = {1429.23200000, -25.44190000, 23.15300000};
        ProtectedSet(l_U518, 16);
        ProtectedSet(l_U519, 3);
        break;
        case 5:
        l_U632 = 210.00000000;
        l_U629 = {-597.19400000, -265.37170000, 5.92930000};
        l_U520[0] = {-486.64230000, -359.86350000, 4.69960000};
        l_U520[1] = {-394.26320000, -369.44460000, 3.97430000};
        l_U520[2] = {-310.60350000, -451.37570000, 3.99280000};
        l_U520[3] = {-238.80480000, -582.52450000, 3.97530000};
        l_U520[4] = {-228.06940000, -710.72090000, 3.79170000};
        l_U520[5] = {-199.54380000, -852.62080000, -3.82920000};
        l_U520[6] = {-55.62320000, -873.71160000, -7.32860000};
        l_U520[7] = {79.19600000, -813.10290000, -4.53060000};
        l_U520[8] = {206.21700000, -735.23550000, 3.89750000};
        l_U520[9] = {140.10240000, -694.83470000, 4.02050000};
        l_U520[10] = {9.41290000, -769.12960000, 4.11890000};
        l_U520[11] = {-139.14640000, -779.92330000, 4.26130000};
        l_U520[12] = {-211.92690000, -702.38290000, 3.81910000};
        l_U520[13] = {-230.84080000, -554.86110000, 3.99000000};
        l_U520[14] = {-304.27060000, -427.88330000, 3.99480000};
        l_U520[15] = {-402.47510000, -319.44300000, 4.06840000};
        l_U520[16] = {-499.12710000, -213.89300000, 6.96130000};
        l_U520[17] = {-566.97990000, -155.63940000, 5.56200000};
        l_U520[18] = {-597.19400000, -265.37170000, 5.92930000};
        ProtectedSet(l_U518, 19);
        ProtectedSet(l_U519, 3);
        break;
        case 6:
        l_U632 = 270.00000000;
        l_U629 = {-1068.42700000, 1384.52400000, 23.45440000};
        l_U520[0] = {-991.21450000, 1375.25600000, 23.85700000};
        l_U520[1] = {-926.55410000, 1477.84400000, 23.77340000};
        l_U520[2] = {-951.23140000, 1590.21500000, 22.88760000};
        l_U520[3] = {-974.29450000, 1728.56900000, 14.55020000};
        l_U520[4] = {-1077.88500000, 1808.43900000, 7.59710000};
        l_U520[5] = {-1226.26300000, 1806.80500000, 16.34260000};
        l_U520[6] = {-1369.67600000, 1784.97500000, 17.83070000};
        l_U520[7] = {-1394.46500000, 1641.76100000, 15.44180000};
        l_U520[8] = {-1458.15400000, 1508.12900000, 14.04420000};
        l_U520[9] = {-1405.06900000, 1405.64100000, 12.53340000};
        l_U520[10] = {-1312.55600000, 1385.20600000, 18.27630000};
        l_U520[11] = {-1190.47400000, 1384.87900000, 21.23920000};
        l_U520[12] = {-1068.42700000, 1384.52400000, 23.45440000};
        ProtectedSet(l_U518, 13);
        ProtectedSet(l_U519, 5);
        break;
        case 7:
        l_U629 = {-210.39040000, 281.86960000, 13.90780000};
        l_U632 = 190.00000000;
        l_U520[0] = {-172.96790000, 129.70700000, 13.81760000};
        l_U520[1] = {-151.89320000, 50.43810000, 13.83080000};
        l_U520[2] = {-174.20170000, 27.30920000, 13.79950000};
        l_U520[3] = {-203.27370000, -106.51850000, 13.64020000};
        l_U520[4] = {-323.31990000, -151.47990000, 13.62500000};
        l_U520[5] = {-425.34280000, -151.67590000, 10.01110000};
        l_U520[6] = {-455.55040000, -24.11710000, 8.91650000};
        l_U520[7] = {-454.49960000, 125.72830000, 8.88780000};
        l_U520[8] = {-453.23250000, 207.91370000, 8.86630000};
        l_U520[9] = {-402.51520000, 254.89110000, 12.61230000};
        l_U520[10] = {-357.96220000, 380.62010000, 13.81470000};
        l_U520[11] = {-357.93590000, 508.44180000, 13.83030000};
        l_U520[12] = {-313.62120000, 543.80150000, 13.81050000};
        l_U520[13] = {-210.39040000, 281.86960000, 13.90780000};
        ProtectedSet(l_U518, 14);
        ProtectedSet(l_U519, 5);
        break;
        case 8:
        l_U629 = {-351.61520000, 1349.39000000, 15.31000000};
        l_U632 = 0.00000000;
        l_U520[0] = {-351.45790000, 1498.90600000, 17.92020000};
        l_U520[1] = {-257.80260000, 1575.04000000, 19.46800000};
        l_U520[2] = {-109.68530000, 1587.51100000, 28.96480000};
        l_U520[3] = {23.91860000, 1653.77800000, 28.96280000};
        l_U520[4] = {155.60120000, 1725.92600000, 28.96270000};
        l_U520[5] = {293.19310000, 1775.40700000, 20.16720000};
        l_U520[6] = {349.67170000, 1660.14600000, 15.02980000};
        l_U520[7] = {409.13500000, 1522.77900000, 15.60900000};
        l_U520[8] = {484.50310000, 1393.75200000, 11.09240000};
        l_U520[9] = {543.55510000, 1260.34800000, 19.92850000};
        l_U520[10] = {543.29130000, 1110.54000000, 19.90870000};
        l_U520[11] = {447.06020000, 1024.27700000, 25.26520000};
        l_U520[12] = {296.99510000, 1017.78800000, 23.76610000};
        l_U520[13] = {206.11040000, 1017.45000000, 13.84370000};
        l_U520[14] = {159.93230000, 1141.99000000, 13.75530000};
        l_U520[15] = {29.65580000, 1173.12900000, 13.81780000};
        l_U520[16] = {-120.47430000, 1173.11400000, 13.82510000};
        l_U520[17] = {-270.65890000, 1173.07700000, 13.82590000};
        l_U520[18] = {-334.82640000, 1173.33700000, 13.82650000};
        l_U520[19] = {-351.54130000, 1266.42700000, 22.12670000};
        l_U520[20] = {-351.61520000, 1349.39000000, 15.30720000};
        ProtectedSet(l_U518, 21);
        ProtectedSet(l_U519, 3);
        break;
        case 9:
        l_U629 = {-1246.60200000, 828.64320000, 19.12080000};
        l_U632 = 180.00000000;
        l_U520[0] = {-1265.40700000, 680.51210000, 27.14220000};
        l_U520[1] = {-1288.50700000, 534.06770000, 48.61510000};
        l_U520[2] = {-1290.35300000, 384.20530000, 50.18640000};
        l_U520[3] = {-1352.43800000, 260.58880000, 50.18500000};
        l_U520[4] = {-1422.85200000, 109.40050000, 50.50630000};
        l_U520[5] = {-1425.48000000, -3.46050000, 26.20390000};
        l_U520[6] = {-1424.35200000, -71.86280000, 7.98720000};
        l_U520[7] = {-1485.10500000, -95.99470000, 6.19110000};
        l_U520[8] = {-1536.70100000, 23.85410000, 7.32450000};
        l_U520[9] = {-1502.97700000, 65.15740000, 7.63760000};
        l_U520[10] = {-1482.97600000, 209.73760000, 9.77240000};
        l_U520[11] = {-1478.63800000, 359.15240000, 18.32910000};
        l_U520[12] = {-1479.52600000, 509.19730000, 18.60940000};
        l_U520[13] = {-1437.91500000, 649.84100000, 18.61130000};
        l_U520[14] = {-1381.95600000, 757.04790000, 18.69140000};
        l_U520[15] = {-1404.59700000, 836.03550000, 18.61790000};
        l_U520[16] = {-1285.02100000, 862.73130000, 18.62450000};
        l_U520[17] = {-1246.60200000, 828.64320000, 18.61440000};
        ProtectedSet(l_U518, 18);
        ProtectedSet(l_U519, 3);
        break;
        case 10:
        l_U629 = {1830.22000000, 716.95620000, 24.84500000};
        l_U632 = 270.00000000;
        l_U520[0] = {1961.42700000, 718.17170000, 17.32540000};
        l_U520[1] = {2030.49300000, 613.45260000, 14.87670000};
        l_U520[2] = {2031.26900000, 537.63440000, 16.48400000};
        l_U520[3] = {2132.92600000, 508.90300000, 7.53450000};
        l_U520[4] = {2180.68200000, 394.91130000, 4.94140000};
        l_U520[5] = {2192.41800000, 246.50850000, 5.07120000};
        l_U520[6] = {2313.86100000, 229.92780000, 5.04520000};
        l_U520[7] = {2325.21300000, 378.07440000, 5.10970000};
        l_U520[8] = {2317.96200000, 527.51790000, 5.09940000};
        l_U520[9] = {2196.71600000, 603.20470000, 10.67020000};
        l_U520[10] = {2093.30400000, 709.93210000, 11.79190000};
        l_U520[11] = {1999.87400000, 826.58460000, 8.22650000};
        l_U520[12] = {1886.15000000, 921.77330000, 22.68650000};
        l_U520[13] = {1791.97900000, 956.30260000, 23.13930000};
        l_U520[14] = {1769.08700000, 1055.38900000, 12.97190000};
        l_U520[15] = {1749.07800000, 876.61440000, 15.63980000};
        l_U520[16] = {1727.19100000, 749.25330000, 24.54900000};
        l_U520[17] = {1830.22000000, 716.95620000, 24.84500000};
        ProtectedSet(l_U518, 18);
        ProtectedSet(l_U519, 3);
        break;
        case 11:
        l_U629 = {1352.64200000, 883.04790000, 13.41750000};
        l_U632 = 147.25570000;
        l_U520[0] = {1293.16700000, 767.47770000, 31.91150000};
        l_U520[1] = {1230.34800000, 632.05750000, 37.20380000};
        l_U520[2] = {1157.05000000, 502.36450000, 27.85620000};
        l_U520[3] = {1119.75300000, 421.75350000, 28.88540000};
        l_U520[4] = {1239.99900000, 385.09260000, 21.02020000};
        l_U520[5] = {1389.91700000, 385.12330000, 21.62810000};
        l_U520[6] = {1531.58300000, 379.69130000, 27.85640000};
        l_U520[7] = {1573.10000000, 444.82970000, 28.00450000};
        l_U520[8] = {1702.20000000, 491.07430000, 28.10500000};
        l_U520[9] = {1727.04000000, 520.54450000, 28.75360000};
        l_U520[10] = {1731.87100000, 780.70210000, 21.64520000};
        l_U520[11] = {1770.80300000, 923.99580000, 13.40710000};
        l_U520[12] = {1800.37500000, 1048.68600000, 13.04540000};
        l_U520[13] = {1668.17600000, 1017.51200000, 21.36740000};
        l_U520[14] = {1522.32600000, 1004.30000000, 22.44450000};
        l_U520[15] = {1419.30900000, 964.26820000, 13.76640000};
        l_U520[16] = {1352.64200000, 883.04790000, 13.41750000};
        ProtectedSet(l_U518, 17);
        ProtectedSet(l_U519, 3);
        break;
        case 12:
        l_U629 = {-1591.24000000, 168.88660000, 12.49100000};
        l_U632 = 180.00000000;
        l_U520[0] = {-1589.20900000, 79.14170000, 9.93570000};
        l_U520[1] = {-1708.83600000, 12.58150000, 9.03050000};
        l_U520[2] = {-1826.67100000, -51.71260000, 5.74650000};
        l_U520[3] = {-1885.94800000, 14.49860000, 6.44380000};
        l_U520[4] = {-1900.93000000, 131.27420000, 7.84240000};
        l_U520[5] = {-1862.39500000, 175.82930000, 13.27980000};
        l_U520[6] = {-1808.19500000, 292.30730000, 24.50680000};
        l_U520[7] = {-1733.46700000, 421.82910000, 24.46540000};
        l_U520[8] = {-1662.41300000, 553.75990000, 25.25700000};
        l_U520[9] = {-1671.89600000, 701.08120000, 28.88910000};
        l_U520[10] = {-1636.85700000, 765.45170000, 28.87910000};
        l_U520[11] = {-1594.30200000, 773.51790000, 24.81620000};
        l_U520[12] = {-1586.16500000, 645.29880000, 24.47540000};
        l_U520[13] = {-1587.33300000, 495.34910000, 24.44700000};
        l_U520[14] = {-1657.18800000, 363.40030000, 24.45900000};
        l_U520[15] = {-1713.19000000, 267.46570000, 20.61530000};
        l_U520[16] = {-1622.73000000, 227.02870000, 13.78940000};
        l_U520[17] = {-1591.24000000, 168.88660000, 12.49100000};
        ProtectedSet(l_U518, 18);
        ProtectedSet(l_U519, 3);
        break;
        case 13:
        l_U629 = {1290.52100000, 507.35510000, 26.52730000};
        l_U632 = 90.00000000;
        l_U520[0] = {1218.48700000, 507.02050000, 27.61600000};
        l_U520[1] = {1142.95200000, 540.59300000, 27.21190000};
        l_U520[2] = {1010.83200000, 551.96090000, 21.47090000};
        l_U520[3] = {916.69270000, 552.27620000, 21.32210000};
        l_U520[4] = {842.06090000, 731.03940000, 6.94190000};
        l_U520[5] = {855.24420000, 885.10420000, 13.38390000};
        l_U520[6] = {965.12590000, 940.56670000, 20.95770000};
        l_U520[7] = {1116.53100000, 982.19680000, 13.24610000};
        l_U520[8] = {1313.05500000, 979.60550000, 12.71200000};
        l_U520[9] = {1394.82000000, 893.38770000, 12.97560000};
        l_U520[10] = {1406.76100000, 754.81340000, 27.46460000};
        l_U520[11] = {1406.75900000, 579.01250000, 30.48190000};
        l_U520[12] = {1446.34200000, 478.00050000, 28.02680000};
        l_U520[13] = {1560.28700000, 396.87770000, 28.02430000};
        l_U520[14] = {1508.43600000, 387.10320000, 21.47400000};
        l_U520[15] = {1437.57200000, 387.34120000, 16.69910000};
        l_U520[16] = {1284.22300000, 387.24570000, 21.44680000};
        l_U520[17] = {1111.08400000, 381.12230000, 28.80140000};
        l_U520[18] = {1098.21400000, 206.31950000, 30.04130000};
        l_U520[19] = {1098.20500000, 9.73040000, 33.05710000};
        ProtectedSet(l_U518, 20);
        ProtectedSet(l_U519, 1);
        l_U513[0] = -1896659641;
        l_U513[1] = -1896659641;
        l_U513[2] = 1821991593;
        l_U513[3] = 1821991593;
        break;
    }
    return;
}

void sub_19643(unknown uParam0, unknown uParam1)
{
    if ((uParam1^) < (uParam0^))
    {
        StrCopy( ref (uParam0^)[(uParam1^)], "END", 16 );
    }
    return;
}

void sub_19687()
{
    l_U681 = 1;
    if (sub_19716( ref l_U634, "BRP5AU", 1 ))
    {
        while (l_U681)
        {
            WAIT( 0 );
            sub_19889();
            switch (sub_19928())
            {
                case 2:
                l_U677 = 0;
                l_U681 = 0;
                break;
                default:
                if (sub_20022( 0 ))
                {
                    l_U681 = 0;
                }
                break;
            }
        }
    }
    return;
}

int sub_19716(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown[2] uVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref uVar5, 2);
    uVar14 = g_U91._fU60;
    if (bParam2)
    {
        return sub_7154( uVar14, uParam0, uParam1, 0, ref uVar5, ref uVar5, "", 0, bParam2, 1, 1, 0, 0, 0 );
    }
    if (NOT g_U91._fU368)
    {
        StrCopy( ref g_U91._fU224[0], uParam1, 16 );
        g_U91._fU224[1] = {(uParam0^)[0]};
        sub_9115( uVar14, ref g_U91._fU176 );
        g_U91._fU368 = 1;
        return 1;
    }
    return 0;
}

void sub_19889()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    g_U26757 = iVar2 + 2000;
    return;
}

int sub_19928()
{
    if (g_U91._fU60 != -1)
    {
        return g_U15946[g_U91._fU60]._fU132._fU24;
    }
    return 6;
}

int sub_20022(boolean bParam0)
{
    unknown uVar3;

    if (g_U91._fU60 != -1)
    {
        switch (g_U15946[g_U91._fU60]._fU132._fU24)
        {
            case 0:
            case 3:
            case 4:
            case 5:
            return 0;
            break;
            default:
            if (g_U91._fU0 != 1000)
            {
                return 0;
            }
            break;
        }
    }
    if (bParam0)
    {
        GET_SCRIPT_TASK_STATUS( sub_7411(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_7224( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

void sub_21054()
{
    sub_21063();
    return;
}

void sub_21063()
{
    int iVar2;

    iVar2 = 8;
    sub_21077( iVar2 );
    return;
}

void sub_21077(unknown uParam0)
{
    unknown uVar3;

    if (NOT g_U13391[uParam0]._fU160._fU80)
    {
        PRINTSTRING( "Flow_Start_Proc_Subpart error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_21229( "Flow_Start_Proc_Subpart: Proc Mission not loaded" );
    }
    sub_21364();
    g_U13391[uParam0]._fU160._fU96 = 1;
    g_U10978 = 1;
    g_U10981[uParam0]._fU28 = 1;
    sub_21775( uParam0 );
    uVar3 = sub_23248( uParam0, g_U13391[uParam0]._fU160._fU76 );
    sub_23415( uVar3 );
    sub_23536();
    return;
}

void sub_21229(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

void sub_21364()
{
    sub_21373();
    sub_21476( ref g_U9893._fU68 );
    sub_21525();
    return;
}

void sub_21373()
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

void sub_21476(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_21525()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_4536( 1, g_U569[I] )) == 0)
        {
            sub_4799( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_21605())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_21605()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_4536( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_21775(unknown uParam0)
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
    uVar7 = {sub_21811( ref uVar3, uParam0 )};
    sub_23076( uVar7 );
    return;
}

void sub_21811(unknown uParam0, unknown uParam1)
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

void sub_23076(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

int sub_23248(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_3946( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_23415(unknown uParam0)
{
    g_U9925 = g_U26758[uParam0]._fU8;
    if (g_U9925 >= 50000)
    {
        g_U9925 = sub_23461( g_U9925 );
    }
    return;
}

void sub_23461(int Result)
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

void sub_23536()
{
    unknown uVar2;

    uVar2 = g_U9925;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}
