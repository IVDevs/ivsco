void main()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U24 = 0;
    if (g_U950)
    {
        l_U6 = 6;
    }
    else
    {
        l_U6 = 3;
    }
    l_U43 = 0;
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    l_U25 = GET_CURRENT_LANGUAGE();
    StrCopy( ref l_U4, "EMAILE1", 8 );
    LOAD_ADDITIONAL_TEXT( ref l_U4, 1 );
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    StrCopy( ref l_U2, "E1", 8 );
    StrCopy( ref l_U4, "EML1", 8 );
    l_U9 = -1;
    if (g_U864._fU40 == -1)
    {
        l_U13 = sub_148();
    }
    else
    {
        l_U13 = sub_240();
    }
    if (l_U13 != 0)
    {
        l_U12 = l_U13 - 1;
    }
    else
    {
        l_U12 = 0;
    }
    g_U864._fU8 = 0;
    g_U864._fU12 = 0;
    sub_367( 0 );
    sub_8671( ref l_U54._fU0, 1, 0 );
    while (NOT g_U864._fU16)
    {
        WAIT( 0 );
        if (sub_8994( ref l_U25 ))
        {
            l_U9 = -1;
            l_U24 = 0;
            g_U864._fU8 = 0;
            g_U864._fU12 = 0;
            sub_367( 0 );
            sub_8671( ref l_U54._fU0, 1, 1 );
            sub_9090();
        }
        iVar2 = g_U858._fU12;
        StrCopy( ref uVar8, 4, l_U2, 2);
        ConcatString(ref uVar8, "R", 16);
        switch (l_U24)
        {
            case 1: if (NOT l_U16)
            {
                sub_367( 1 );
                break;
            }
            case 2:
            if ((g_U864._fU312) AND (g_U864._fU8))
            {
                iVar2 = 40;
            }
            break;
        }
        switch (iVar2)
        {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            g_U864._fU8 = 0;
            l_U9 = l_U12 - iVar2;
            if (g_U864._fU40 == -1)
            {
                sub_9406( ref g_U975[l_U9] );
                l_U15 = sub_453( 0, g_U975[l_U9] );
            }
            else
            {
                sub_9406( ref g_U1376[l_U9] );
                l_U15 = sub_453( 0, g_U1376[l_U9] );
            }
            StrCopy( ref uVar4, 4, l_U4, 2);
            ConcatString(ref uVar4, l_U15, 16);
            LOAD_ADDITIONAL_TEXT( ref uVar4, 3 );
            l_U24 = 0;
            l_U10 = 1;
            if (g_U864._fU40 == -1)
            {
                if ((sub_453( 3, g_U975[l_U9] )) != 16383)
                {
                    l_U10 = 3;
                }
                else if ((sub_453( 2, g_U975[l_U9] )) != 16383)
                {
                    l_U10 = 2;
                }
                l_U11 = 0;
                if ((sub_453( 6, g_U975[l_U9] )) != 65535)
                {
                    sub_10136( sub_453( 6, g_U975[l_U9] ) );
                    l_U11 = 1;
                }
            }
            else if ((sub_453( 3, g_U1376[l_U9] )) != 16383)
            {
                l_U10 = 3;
            }
            else if ((sub_453( 2, g_U1376[l_U9] )) != 16383)
            {
                l_U10 = 2;
            }
            l_U11 = 0;
            if ((sub_453( 6, g_U1376[l_U9] )) != 65535)
            {
                sub_10136( sub_453( 6, g_U1376[l_U9] ) );
                l_U11 = 1;
            }
            if (g_U864._fU40 == -1)
            {
                uVar3 = sub_453( 1, g_U975[l_U9] );
                sub_2354( ref l_U18, ref l_U2, "R", l_U15, uVar3 );
                if (NOT g_U975[l_U9]._fU20)
                {
                    sub_2022( ref uVar4, ref uVar8, l_U15, uVar3, 0 );
                    if (DOES_TEXT_LABEL_EXIST( ref uVar4 ))
                    {
                        g_U975[l_U9]._fU24 = 1;
                    }
                    else
                    {
                        g_U975[l_U9]._fU24 = 0;
                    }
                    g_U975[l_U9]._fU28 = 0;
                    g_U975[l_U9]._fU32 = 0;
                    g_U975[l_U9]._fU20 = 1;
                }
                if (g_U975[l_U9]._fU36)
                {
                    if ((NOT g_U975[l_U9]._fU24) || (g_U975[l_U9]._fU28))
                    {
                        g_U975[l_U9]._fU36 = 0;
                    }
                    else
                    {
                        switch (sub_453( 4, g_U975[l_U9] ))
                        {
                            case 2:
                            case 4:
                            case 5:
                            g_U975[l_U9]._fU36 = 0;
                            break;
                        }
                    }
                }
            }
            sub_367( 1 );
            break;
            case 10: l_U12 += 2;
            case 11:
            l_U12--;
            sub_367( 1 );
            break;
            case 21:
            if (g_U864._fU40 == -1)
            {
                sub_10760( l_U9 );
                l_U9 = -1;
                l_U13 = sub_148();
                l_U12 = l_U13 - 1;
                sub_367( 1 );
            }
            break;
            case 30:
            case 31:
            g_U864._fU8 = 1;
            g_U864._fU12 = 1;
            g_U858._fU20 = 1;
            INCREMENT_INT_STAT_NO_MESSAGE( 305, 1 );
            if (iVar2 == 30)
            {
                sub_10988( ref g_U975[l_U9], 1 );
            }
            else
            {
                sub_10988( ref g_U975[l_U9], 0 );
            }
            if (iVar2 == 30)
            {
                ConcatString(ref l_U18, "_0", 16);
                l_U17 = 1;
            }
            else
            {
                ConcatString(ref l_U18, "_1", 16);
                l_U17 = 0;
            }
            l_U22 = 0;
            l_U23 = GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( ref l_U18 );
            l_U16 = 0;
            g_U975[l_U9]._fU36 = 0;
            l_U24 = 1;
            break;
            case 40:
            g_U864._fU8 = 0;
            l_U24 = 0;
            sub_367( 1 );
            break;
            case 41:
            g_U864._fU8 = 1;
            l_U24 = 2;
            sub_367( 1 );
            break;
        }
    }
    g_U858._fU20 = 0;
    g_U864._fU8 = 0;
    g_U864._fU12 = 0;
    sub_9090();
    UNREGISTER_SCRIPT_WITH_AUDIO();
    return;
}

void sub_148()
{
    int I;
    int Result;

    Result = 0;
    for ( I = 0; I <= 39; I++ )
    {
        if (g_U975[I]._fU0[0] != -1)
        {
            Result++;
        }
        else
        {
            I = 40;
        }
    }
    return Result;
}

void sub_240()
{
    int I;
    int Result;

    Result = 0;
    for ( I = 0; I <= 2; I++ )
    {
        if (g_U1376[I]._fU0[0] != -1)
        {
            Result++;
        }
        else
        {
            I = 3;
        }
    }
    return Result;
}

void sub_367(boolean bParam0)
{
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    sub_383();
    if (l_U9 != -1)
    {
        if (g_U864._fU40 == -1)
        {
            sub_1657( g_U975[l_U9] );
        }
        else
        {
            sub_1657( g_U1376[l_U9] );
        }
    }
    else if (g_U864._fU40 == -1)
    {
        sub_1657( g_U975[0] );
    }
    else
    {
        sub_1657( g_U1376[0] );
    }
    sub_4933();
    sub_5461();
    sub_6240();
    if (bParam0)
    {
        sub_8571( g_U858._fU8, 0 );
        g_U858._fU8 = -1;
        RELOAD_WEB_PAGE( g_U864._fU4 );
    }
    return;
}

void sub_383()
{
    char[16] cVar2;

    if (g_U864._fU40 == -1)
    {
        l_U13 = sub_148();
        l_U14 = sub_416();
    }
    else
    {
        l_U13 = sub_240();
        l_U14 = sub_946();
    }
    l_U26[10] = CREATE_HTML_SCRIPT_OBJECT( "emailBottomInfo" );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U26[10], "<td width="128" ><span class="title_text">" );
    if (g_U975[39]._fU0[0] != -1)
    {
        StrCopy( ref cVar2, "INBOX", 16 );
        ConcatString(ref cVar2, ref l_U2, 16);
        ConcatString(ref cVar2, "_FULL", 16);
        sub_1168( ref l_U26[10], ref cVar2, -1 );
    }
    else
    {
        string(ref cVar2, l_U13, 16);
        ADD_TO_HTML_SCRIPT_OBJECT( l_U26[10], ref cVar2 );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U26[10], "&nbsp;" );
        StrCopy( ref cVar2, "INBOX", 16 );
        ConcatString(ref cVar2, ref l_U2, 16);
        ConcatString(ref cVar2, "_EMAILS", 16);
        sub_1168( ref l_U26[10], ref cVar2, -1 );
    }
    ADD_TO_HTML_SCRIPT_OBJECT( l_U26[10], "</span></td>" );
    string(ref cVar2, l_U14, 16);
    ADD_TO_HTML_SCRIPT_OBJECT( l_U26[10], "<td width="128" ><span class="title_text">" );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U26[10], ref cVar2 );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U26[10], "&nbsp;" );
    StrCopy( ref cVar2, "INBOX", 16 );
    ConcatString(ref cVar2, ref l_U2, 16);
    ConcatString(ref cVar2, "_UNREAD", 16);
    sub_1168( ref l_U26[10], ref cVar2, -1 );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U26[10], "</span></td>" );
    return;
}

void sub_416()
{
    int I;
    int Result;

    Result = 0;
    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_453( 4, g_U975[I] )) == 0)
        {
            Result++;
        }
    }
    return Result;
}

int sub_453(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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

void sub_946()
{
    int I;
    int Result;

    Result = 0;
    for ( I = 0; I <= 2; I++ )
    {
        if ((sub_453( 4, g_U1376[I] )) == 0)
        {
            Result++;
        }
    }
    return Result;
}

void sub_1168(unknown uParam0, unknown uParam1, int iParam2)
{
    char[16] cVar5;

    string(ref cVar5, iParam2, 16);
    if (iParam2 != -1)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<a href="" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar5 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "">" );
    }
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<text name="" );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam1 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" />" );
    if (iParam2 != -1)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "</a>" );
    }
    return;
}

void sub_1657(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    char[16] cVar12;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    int iVar32;
    int iVar33;

    l_U26[7] = CREATE_HTML_SCRIPT_OBJECT( "emailMainWindow" );
    l_U26[8] = CREATE_HTML_SCRIPT_OBJECT( "emailMainWindow2" );
    l_U26[9] = CREATE_HTML_SCRIPT_OBJECT( "emailMainWindow3" );
    switch (l_U24)
    {
        case 0:
        case 2:
        if (l_U9 != -1)
        {
            switch (l_U24)
            {
                case 0:
                StrCopy( ref uVar16, 4, l_U2, 2);
                StrCopy( ref uVar20, 4, l_U2, 2);
                switch (sub_453( 5, uParam0 ))
                {
                    case 4:
                    ConcatString(ref uVar16, "INTPP", 16);
                    ConcatString(ref uVar20, "OUTPP", 16);
                    break;
                    case 5:
                    ConcatString(ref uVar16, "INTPF", 16);
                    ConcatString(ref uVar20, "OUTPF", 16);
                    break;
                    default:
                    ConcatString(ref uVar16, "INTN", 16);
                    ConcatString(ref uVar20, "OUTN", 16);
                }
                iVar32 = sub_453( 12, g_U975[l_U9] );
                iVar33 = sub_453( 14, g_U975[l_U9] );
                sub_2022( ref cVar12, ref uVar16, l_U15, sub_453( 8, uParam0 ), -1 );
                sub_2121( ref l_U26[7], ref cVar12 );
                ADD_TO_HTML_SCRIPT_OBJECT( l_U26[7], "<br/><br/>" );
                if (iVar32 == 1)
                {
                    string(ref cVar12, sub_453( 11, g_U975[l_U9] ), 16);
                    ADD_TO_HTML_SCRIPT_OBJECT( l_U26[7], ref cVar12 );
                    ADD_TO_HTML_SCRIPT_OBJECT( l_U26[7], ":00 " );
                    ADD_TO_HTML_SCRIPT_OBJECT( l_U26[7], "&nbsp;" );
                }
                else if (iVar33 == 1)
                {
                    sub_2354( ref cVar12, ref l_U2, "EMAIL_DAY", sub_453( 13, g_U975[l_U9] ), -1 );
                    sub_1168( ref l_U26[7], ref cVar12, -1 );
                    ADD_TO_HTML_SCRIPT_OBJECT( l_U26[7], "." );
                    ADD_TO_HTML_SCRIPT_OBJECT( l_U26[7], "&nbsp;" );
                }
                sub_2354( ref cVar12, ref l_U2, "M", l_U15, sub_453( 1, uParam0 ) );
                sub_2121( ref l_U26[7], ref cVar12 );
                if (iVar32 == 2)
                {
                    ADD_TO_HTML_SCRIPT_OBJECT( l_U26[7], "&nbsp;" );
                    string(ref cVar12, sub_453( 11, g_U975[l_U9] ), 16);
                    ADD_TO_HTML_SCRIPT_OBJECT( l_U26[7], ref cVar12 );
                    ADD_TO_HTML_SCRIPT_OBJECT( l_U26[7], ":00" );
                }
                else if (iVar33 == 2)
                {
                    sub_2022( ref cVar12, "EMAIL_DAY", sub_453( 13, g_U975[l_U9] ), -1, -1 );
                    sub_1168( ref l_U26[7], ref cVar12, -1 );
                    ADD_TO_HTML_SCRIPT_OBJECT( l_U26[7], "." );
                }
                if (l_U10 > 1)
                {
                    ADD_TO_HTML_SCRIPT_OBJECT( l_U26[8], "&nbsp;" );
                    sub_2354( ref cVar12, ref l_U2, "M", l_U15, sub_453( 2, uParam0 ) );
                    sub_2121( ref l_U26[8], ref cVar12 );
                    if (iVar32 == 3)
                    {
                        ADD_TO_HTML_SCRIPT_OBJECT( l_U26[8], "&nbsp;" );
                        string(ref cVar12, sub_453( 11, g_U975[l_U9] ), 16);
                        ADD_TO_HTML_SCRIPT_OBJECT( l_U26[8], ref cVar12 );
                        ADD_TO_HTML_SCRIPT_OBJECT( l_U26[8], ":00" );
                    }
                    else if (iVar33 == 3)
                    {
                        sub_2022( ref cVar12, "EMAIL_DAY", sub_453( 13, g_U975[l_U9] ), -1, -1 );
                        sub_1168( ref l_U26[8], ref cVar12, -1 );
                        ADD_TO_HTML_SCRIPT_OBJECT( l_U26[8], "." );
                    }
                    if (l_U10 > 2)
                    {
                        ADD_TO_HTML_SCRIPT_OBJECT( l_U26[9], "&nbsp;" );
                        sub_2354( ref cVar12, ref l_U2, "M", l_U15, sub_453( 3, g_U975[l_U9] ) );
                        sub_2121( ref l_U26[9], ref cVar12 );
                        if (iVar32 == 4)
                        {
                            ADD_TO_HTML_SCRIPT_OBJECT( l_U26[9], "&nbsp;" );
                            string(ref cVar12, sub_453( 11, g_U975[l_U9] ), 16);
                            ADD_TO_HTML_SCRIPT_OBJECT( l_U26[9], ref cVar12 );
                            ADD_TO_HTML_SCRIPT_OBJECT( l_U26[9], ":00" );
                        }
                        else if (iVar33 == 4)
                        {
                            sub_2022( ref cVar12, "EMAIL_DAY", sub_453( 13, g_U975[l_U9] ), -1, -1 );
                            sub_1168( ref l_U26[9], ref cVar12, -1 );
                            ADD_TO_HTML_SCRIPT_OBJECT( l_U26[9], "." );
                        }
                    }
                }
                ADD_TO_HTML_SCRIPT_OBJECT( l_U26[9], "<br/><br/>" );
                sub_2022( ref cVar12, ref uVar20, l_U15, sub_453( 9, g_U975[l_U9] ), -1 );
                sub_2121( ref l_U26[9], ref cVar12 );
                ADD_TO_HTML_SCRIPT_OBJECT( l_U26[9], "<br /><br />" );
                sub_2354( ref cVar12, ref l_U2, "_SIGNOFF", l_U15, -1 );
                sub_1168( ref l_U26[9], ref cVar12, -1 );
                break;
                case 2:
                ADD_TO_HTML_SCRIPT_OBJECT( l_U26[7], "<table width="444" height="200" border="0" cellpadding="0" cellspacing="0">" );
                ADD_TO_HTML_SCRIPT_OBJECT( l_U26[7], "<td width="444" height="200" align="center" valign="middle">" );
                sub_3511( ref l_U26[7], ref l_U45, ref l_U50, 320, 200, -1 );
                ADD_TO_HTML_SCRIPT_OBJECT( l_U26[7], "</td></table>" );
                break;
            }
        }
        else
        {
            ADD_TO_HTML_SCRIPT_OBJECT( l_U26[7], "<table width="444" height="200" border="0" cellpadding="0" cellspacing="0">" );
            ADD_TO_HTML_SCRIPT_OBJECT( l_U26[7], "<td width="444" height="200" align="center" valign="middle">" );
            ADD_TO_HTML_SCRIPT_OBJECT( l_U26[7], "<img src="imgs/pageFirstLoad.jpg" width="444" height="200" />" );
            ADD_TO_HTML_SCRIPT_OBJECT( l_U26[7], "</td></table>" );
        }
        break;
        case 1:
        ADD_TO_HTML_SCRIPT_OBJECT( l_U26[7], "<table width="444" height="200" border="0" cellpadding="0" cellspacing="0">" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U26[7], "<td width="444" height="200" width="444" align="left" valign="middle">" );
        l_U22++;
        if (((l_U22 > l_U23) || (g_U864._fU312)) || (g_U864._fU320))
        {
            l_U22 = l_U23;
            l_U16 = 1;
        }
        else
        {
            PLAY_SOUND_FRONTEND( -1, "PC_EMAIL_REPLY_KEY_PRESS" );
        }
        if (NOT IS_JAPANESE_VERSION())
        {
            ADD_TO_HTML_SCRIPT_OBJECT( l_U26[7], GET_FIRST_N_CHARACTERS_OF_STRING( ref l_U18, l_U22 ) );
        }
        else
        {
            ADD_FIRST_N_CHARACTERS_OF_STRING_TO_HTML_SCRIPT_OBJECT( l_U26[7], ref l_U18, l_U22 );
        }
        if (l_U16)
        {
            ADD_TO_HTML_SCRIPT_OBJECT( l_U26[7], "<br /><br />" );
            if (l_U17)
            {
                sub_4494( ref l_U26[7], "posIcon.jpg", -1, 16, 16 );
            }
            else
            {
                sub_4494( ref l_U26[7], "negIcon.jpg", -1, 16, 16 );
            }
            sub_1168( ref l_U26[7], "EMAILMSG_SENT", -1 );
            g_U864._fU8 = 0;
            g_U864._fU12 = 0;
            g_U858._fU20 = 0;
        }
        ADD_TO_HTML_SCRIPT_OBJECT( l_U26[7], "</td></table>" );
        break;
    }
    return;
}

void sub_2022(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
{
    StrCopy( (uParam0^), uParam1, 16 );
    if (iParam2 != -1)
    {
        ConcatString((uParam0^), "_", 16);
        ConcatString((uParam0^), iParam2, 16);
        if (iParam3 != -1)
        {
            ConcatString((uParam0^), "_", 16);
            ConcatString((uParam0^), iParam3, 16);
            if (iParam4 != -1)
            {
                ConcatString((uParam0^), "_", 16);
                ConcatString((uParam0^), iParam4, 16);
            }
        }
    }
    return;
}

void sub_2121(unknown uParam0, unknown uParam1)
{
    if (NOT IS_JAPANESE_VERSION())
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), GET_STRING_FROM_TEXT_FILE( uParam1 ) );
    }
    else
    {
        ADD_STRING_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam1 );
    }
    return;
}

void sub_2354(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4)
{
    StrCopy( (uParam0^), uParam1, 16 );
    ConcatString((uParam0^), uParam2, 16);
    if (iParam3 != -1)
    {
        ConcatString((uParam0^), "_", 16);
        ConcatString((uParam0^), iParam3, 16);
        if (iParam4 != -1)
        {
            ConcatString((uParam0^), "_", 16);
            ConcatString((uParam0^), iParam4, 16);
        }
    }
    return;
}

void sub_3511(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4, int iParam5)
{
    char[16] cVar8;

    string(ref cVar8, iParam5, 16);
    if (iParam5 != -1)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<a href="" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar8 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "">" );
    }
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<img txd="" );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam1 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" src="" );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam2 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" width="" );
    string(ref cVar8, iParam3, 16);
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar8 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" height="" );
    string(ref cVar8, iParam4, 16);
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar8 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" />" );
    if (iParam5 != -1)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "</a>" );
    }
    return;
}

void sub_4494(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
{
    char[16] cVar7;

    string(ref cVar7, iParam2, 16);
    if (iParam2 != -1)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<a href="" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar7 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "">" );
    }
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<img src="imgs/" );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam1 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" width="" );
    string(ref cVar7, iParam3, 16);
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar7 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" height="" );
    string(ref cVar7, iParam4, 16);
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar7 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" />" );
    if (iParam2 != -1)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "</a>" );
    }
    return;
}

void sub_4933()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    l_U26[11] = CREATE_HTML_SCRIPT_OBJECT( "navTopTitle" );
    l_U26[12] = CREATE_HTML_SCRIPT_OBJECT( "navTopImage" );
    l_U26[13] = CREATE_HTML_SCRIPT_OBJECT( "navBottomTitle" );
    l_U26[14] = CREATE_HTML_SCRIPT_OBJECT( "navBottomImage1" );
    l_U26[15] = CREATE_HTML_SCRIPT_OBJECT( "navBottomImage2" );
    if (l_U9 != -1)
    {
        if ((l_U11) AND (l_U24 != 1))
        {
            sub_1168( ref l_U26[11], "EMAIL_VIEW", -1 );
            if (l_U24 == 0)
            {
                sub_3511( ref l_U26[12], ref l_U45, ref l_U50, 70, 40, 41 );
            }
            else
            {
                sub_4494( ref l_U26[12], "but_email.jpg", 40, 70, 40 );
            }
        }
        if (l_U24 != 1)
        {
            if (g_U864._fU40 == -1)
            {
                if ((g_U975[l_U9]._fU36) AND (NOT g_U975[l_U9]._fU28))
                {
                    sub_1168( ref l_U26[13], "EMAIL_REPLY", -1 );
                    sub_4494( ref l_U26[14], "but_reply_pos.jpg", 30, 70, 40 );
                    sub_4494( ref l_U26[15], "but_reply_neg.jpg", 31, 70, 40 );
                }
                else if (g_U975[l_U9]._fU16)
                {
                    sub_1168( ref l_U26[13], "EMAIL_DELETE", -1 );
                    sub_4494( ref l_U26[14], "but_delete.jpg", 21, 70, 40 );
                }
            }
        }
    }
    return;
}

void sub_5461()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    l_U26[6] = CREATE_HTML_SCRIPT_OBJECT( "emailTopInfo" );
    if (l_U9 != -1)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( l_U26[6], "<table width="391" border="0" cellspacing="0" cellpadding="0">" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U26[6], "<tr>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U26[6], "<th width="79" align="left" valign="middle"><span class="title_text">FROM</span></th>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U26[6], "<th width="312" align="left" valign="middle"><span class="info_text">" );
        sub_2354( ref uVar2, ref l_U2, "_ADDRESS", l_U15, -1 );
        sub_1168( ref l_U26[6], ref uVar2, -1 );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U26[6], "</span></th>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U26[6], "</tr>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U26[6], "<tr>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U26[6], "<th align="left" valign="middle"><span class="title_text">SUBJECT</span></th>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U26[6], "<th align="left" valign="middle"><span class="info_text">" );
        if (g_U864._fU40 == -1)
        {
            sub_2354( ref uVar2, ref l_U2, "S", l_U15, sub_453( 1, g_U975[l_U9] ) );
        }
        else
        {
            sub_2354( ref uVar2, ref l_U2, "S", l_U15, sub_453( 1, g_U1376[l_U9] ) );
        }
        sub_1168( ref l_U26[6], ref uVar2, -1 );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U26[6], "</span></th>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U26[6], "</tr>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U26[6], "</table>" );
    }
    return;
}

void sub_6240()
{
    int I;

    l_U26[0] = CREATE_HTML_SCRIPT_OBJECT( "emailInbox0" );
    l_U26[1] = CREATE_HTML_SCRIPT_OBJECT( "emailInbox1" );
    l_U26[2] = CREATE_HTML_SCRIPT_OBJECT( "emailInbox2" );
    l_U26[3] = CREATE_HTML_SCRIPT_OBJECT( "emailInbox3" );
    l_U26[4] = CREATE_HTML_SCRIPT_OBJECT( "emailInbox4" );
    l_U26[5] = CREATE_HTML_SCRIPT_OBJECT( "emailInbox5" );
    for ( I = 0; I <= (l_U6 - 1); I++ )
    {
        if (((l_U12 - I) >= 0) AND (l_U13 != 0))
        {
            if (g_U864._fU40 == -1)
            {
                sub_6478( g_U975[l_U12 - I], I );
            }
            else
            {
                sub_6478( g_U1376[l_U12 - I], I );
            }
        }
    }
    return;
}

void sub_6478(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, int iParam10)
{
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;

    uVar13 = sub_453( 0, uParam0 );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U26[iParam10], "<table width="640" height="25" border="0" bgcolor="#FFFFFF" cellpadding="0" cellspacing="0">" );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U26[iParam10], "<tr>" );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U26[iParam10], "<th width="48" height="25" bgcolor="#6699CC"></th>" );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U26[iParam10], "<th width="10" align="center"></th>" );
    switch (sub_453( 4, uParam0 ))
    {
        case 0:
        ADD_TO_HTML_SCRIPT_OBJECT( l_U26[iParam10], "<th width="20" align="center"><img src="imgs/unreadIcon.jpg" width="16" height="16" /></th>" );
        break;
        case 1:
        case 3:
        ADD_TO_HTML_SCRIPT_OBJECT( l_U26[iParam10], "<th width="20" align="center"></th>" );
        break;
        case 2:
        case 4:
        ADD_TO_HTML_SCRIPT_OBJECT( l_U26[iParam10], "<th width="20" align="center"><img src="imgs/posIcon.jpg" width="16" height="16" /></th>" );
        break;
        case 5:
        if (uParam0._fU32)
        {
            ADD_TO_HTML_SCRIPT_OBJECT( l_U26[iParam10], "<th width="20" align="center"><img src="imgs/posIcon.jpg" width="16" height="16" /></th>" );
        }
        else
        {
            ADD_TO_HTML_SCRIPT_OBJECT( l_U26[iParam10], "<th width="20" align="center"><img src="imgs/negIcon.jpg" width="16" height="16" /></th>" );
        }
        break;
    }
    ADD_TO_HTML_SCRIPT_OBJECT( l_U26[iParam10], "<th width="32" align="center" valign="middle">" );
    if ((sub_453( 6, uParam0 )) != 65535)
    {
        sub_4494( ref l_U26[iParam10], "attachedIcon.jpg", -1, 12, 20 );
    }
    ADD_TO_HTML_SCRIPT_OBJECT( l_U26[iParam10], "</th>" );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U26[iParam10], "<th width="160" align="left" valign="middle">" );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U26[iParam10], "<span class="read_text">" );
    sub_2354( ref uVar14, ref l_U2, "_NAME", uVar13, -1 );
    if (l_U9 == (l_U12 - iParam10))
    {
        sub_1168( ref l_U26[iParam10], ref uVar14, -1 );
    }
    else
    {
        sub_1168( ref l_U26[iParam10], ref uVar14, iParam10 );
    }
    ADD_TO_HTML_SCRIPT_OBJECT( l_U26[iParam10], "</span></th>" );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U26[iParam10], "<th width="292" align="left" valign="middle">" );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U26[iParam10], "<span class="read_text">" );
    sub_2354( ref uVar14, ref l_U2, "S", uVar13, sub_453( 1, uParam0 ) );
    sub_1168( ref l_U26[iParam10], ref uVar14, -1 );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U26[iParam10], "</span></th>" );
    if (iParam10 == 0)
    {
        if ((l_U13 < (l_U6 + 1)) || (l_U12 == (l_U7._fU0 + (l_U13 - 1))))
        {
            ADD_TO_HTML_SCRIPT_OBJECT( l_U26[iParam10], "<th width="30" bgcolor="#999999"></th>" );
        }
        else
        {
            ADD_TO_HTML_SCRIPT_OBJECT( l_U26[iParam10], "<th width="30" align="center" valign="middle" bgcolor="#999999">" );
            sub_4494( ref l_U26[iParam10], "but_up.jpg", 10, 16, 16 );
            ADD_TO_HTML_SCRIPT_OBJECT( l_U26[iParam10], "</th>" );
        }
    }
    else if (iParam10 == (l_U6 - 1))
    {
        if ((l_U13 < (l_U6 + 1)) || ((l_U12 - (l_U6 - 1)) == l_U7._fU0))
        {
            ADD_TO_HTML_SCRIPT_OBJECT( l_U26[iParam10], "<th width="30" bgcolor="#999999"></th>" );
        }
        else
        {
            ADD_TO_HTML_SCRIPT_OBJECT( l_U26[iParam10], "<th width="30" align="center" valign="middle" bgcolor="#999999">" );
            sub_4494( ref l_U26[iParam10], "but_down.jpg", 11, 16, 16 );
            ADD_TO_HTML_SCRIPT_OBJECT( l_U26[iParam10], "</th>" );
        }
    }
    else
    {
        ADD_TO_HTML_SCRIPT_OBJECT( l_U26[iParam10], "<th width="30" bgcolor="#999999" ></th>" );
    }
    ADD_TO_HTML_SCRIPT_OBJECT( l_U26[iParam10], "<th width="48" bgcolor="#6699CC"></th>" );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U26[iParam10], "</tr>" );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U26[iParam10], "</table>" );
    return;
}

void sub_8571(int iParam0, unknown uParam1)
{
    if ((iParam0 != -1) AND (iParam0 < (GET_NUMBER_OF_WEB_PAGE_LINKS( g_U864._fU4 ))))
    {
        SET_WEB_PAGE_LINK_ACTIVE( g_U864._fU4, iParam0, uParam1 );
    }
    return;
}

void sub_8671(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_8682( uParam1 );
    if (bParam2)
    {
        RELOAD_WEB_PAGE( g_U864._fU4 );
    }
    else
    {
        LOAD_WEB_PAGE( g_U864._fU4, uParam0 );
        StrCopy( ref g_U864._fU168, uParam0, 64 );
        g_U864._fU164 = 1;
    }
    sub_8820();
    return;
}

void sub_8682(boolean bParam0)
{
    if (bParam0)
    {
        g_U864._fU20 = g_U949;
    }
    else
    {
        g_U864._fU20 = 0.00000000;
    }
    SET_WEB_PAGE_SCROLL( g_U864._fU4, g_U864._fU20 );
    return;
}

void sub_8820()
{
    float fVar2;

    fVar2 = GET_WEB_PAGE_HEIGHT( g_U864._fU4 );
    if (fVar2 > (g_U948 - (g_U946 * g_U948)))
    {
        g_U864._fU28 = 1;
        g_U864._fU32 = (1.00000000 - g_U946) / fVar2;
        g_U864._fU36 = (1.00000000 - g_U946) * ((g_U948 - (g_U946 * g_U948)) / fVar2);
    }
    else
    {
        g_U864._fU28 = 0;
    }
    return;
}

int sub_8994(unknown uParam0)
{
    if ((uParam0^) != GET_CURRENT_LANGUAGE())
    {
        (uParam0^) = GET_CURRENT_LANGUAGE();
        return 1;
    }
    return 0;
}

void sub_9090()
{
    if (l_U43)
    {
        RELEASE_TEXTURE( l_U49 );
        REMOVE_TXD( l_U44 );
        l_U43 = 0;
    }
    return;
}

void sub_9406(unknown uParam0)
{
    switch (sub_453( 4, (uParam0^) ))
    {
        case 0:
        case 1:
        sub_9460( 3, 4, uParam0 );
        break;
        case 2:
        sub_9460( 4, 4, uParam0 );
        break;
    }
    return;
}

void sub_9460(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_10136(int iParam0)
{
    StrCopy( ref l_U45, "webPhotos_", 16 );
    if (l_U43)
    {
        sub_9090();
    }
    ConcatString(ref l_U45, iParam0 / 5, 16);
    l_U44 = LOAD_TXD( ref l_U45 );
    StrCopy( ref l_U50, "photo_", 16 );
    ConcatString(ref l_U50, iParam0, 16);
    l_U49 = GET_TEXTURE( l_U44, ref l_U50 );
    l_U43 = 1;
    return;
}

void sub_10760(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U975[I - 1] = {g_U975[I]};
        }
    }
    sub_10833( 39 );
    return;
}

void sub_10833(unknown uParam0)
{
    g_U975[uParam0]._fU0[0] = -1;
    g_U975[uParam0]._fU0[1] = -1;
    g_U975[uParam0]._fU0[2] = -1;
    return;
}

void sub_10988(int iParam0, unknown uParam1)
{
    switch (sub_453( 4, (iParam0^) ))
    {
        case 3:
        case 4:
        sub_9460( 5, 4, iParam0 );
        iParam0->_fU28 = 1;
        iParam0->_fU32 = uParam1;
        break;
    }
    return;
}
