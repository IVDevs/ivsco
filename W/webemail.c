void main()
{
    int iVar2;
    unknown uVar3;
    char[16] cVar4;

    l_U18 = 0;
    if (g_U943)
    {
        l_U0 = 6;
    }
    else
    {
        l_U0 = 3;
    }
    l_U37 = 0;
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    l_U19 = GET_CURRENT_LANGUAGE();
    LOAD_ADDITIONAL_TEXT( "EMAILBK", 1 );
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    l_U3 = -1;
    if (g_U857._fU40 == -1)
    {
        l_U7 = sub_106();
    }
    else
    {
        l_U7 = sub_198();
    }
    if (l_U7 != 0)
    {
        l_U6 = l_U7 - 1;
    }
    else
    {
        l_U6 = 0;
    }
    g_U857._fU8 = 0;
    g_U857._fU12 = 0;
    sub_325( 0 );
    sub_8421( ref l_U48._fU0, 1, 0 );
    while (NOT g_U857._fU16)
    {
        WAIT( 0 );
        if (sub_8744( ref l_U19 ))
        {
            l_U3 = -1;
            l_U18 = 0;
            g_U857._fU8 = 0;
            g_U857._fU12 = 0;
            sub_325( 0 );
            sub_8421( ref l_U48._fU0, 1, 1 );
            sub_8840();
        }
        iVar2 = g_U851._fU12;
        switch (l_U18)
        {
            case 1: if (NOT l_U10)
            {
                sub_325( 1 );
                break;
            }
            case 2:
            if ((g_U857._fU312) AND (g_U857._fU8))
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
            g_U857._fU8 = 0;
            l_U3 = l_U6 - iVar2;
            if (g_U857._fU40 == -1)
            {
                sub_9139( ref g_U968[l_U3] );
                l_U9 = sub_411( 0, g_U968[l_U3] );
            }
            else
            {
                sub_9139( ref g_U1369[l_U3] );
                l_U9 = sub_411( 0, g_U1369[l_U3] );
            }
            StrCopy( ref cVar4, "EBK", 16 );
            ConcatString(ref cVar4, l_U9, 16);
            LOAD_ADDITIONAL_TEXT( ref cVar4, 3 );
            l_U18 = 0;
            l_U4 = 1;
            if (g_U857._fU40 == -1)
            {
                if ((sub_411( 3, g_U968[l_U3] )) != 16383)
                {
                    l_U4 = 3;
                }
                else if ((sub_411( 2, g_U968[l_U3] )) != 16383)
                {
                    l_U4 = 2;
                }
                l_U5 = 0;
                if ((sub_411( 6, g_U968[l_U3] )) != 65535)
                {
                    sub_9870( sub_411( 6, g_U968[l_U3] ) );
                    l_U5 = 1;
                }
            }
            else if ((sub_411( 3, g_U1369[l_U3] )) != 16383)
            {
                l_U4 = 3;
            }
            else if ((sub_411( 2, g_U1369[l_U3] )) != 16383)
            {
                l_U4 = 2;
            }
            l_U5 = 0;
            if ((sub_411( 6, g_U1369[l_U3] )) != 65535)
            {
                sub_9870( sub_411( 6, g_U1369[l_U3] ) );
                l_U5 = 1;
            }
            if (g_U857._fU40 == -1)
            {
                uVar3 = sub_411( 1, g_U968[l_U3] );
                sub_1923( ref l_U12, "ER", l_U9, uVar3, -1 );
                if (NOT g_U968[l_U3]._fU20)
                {
                    sub_1923( ref cVar4, "ER", l_U9, uVar3, 0 );
                    if (DOES_TEXT_LABEL_EXIST( ref cVar4 ))
                    {
                        g_U968[l_U3]._fU24 = 1;
                    }
                    else
                    {
                        g_U968[l_U3]._fU24 = 0;
                    }
                    g_U968[l_U3]._fU28 = 0;
                    g_U968[l_U3]._fU32 = 0;
                    g_U968[l_U3]._fU20 = 1;
                }
                if (g_U968[l_U3]._fU36)
                {
                    if ((NOT g_U968[l_U3]._fU24) || (g_U968[l_U3]._fU28))
                    {
                        g_U968[l_U3]._fU36 = 0;
                    }
                    else
                    {
                        switch (sub_411( 4, g_U968[l_U3] ))
                        {
                            case 2:
                            case 4:
                            case 5:
                            g_U968[l_U3]._fU36 = 0;
                            break;
                        }
                    }
                }
            }
            sub_325( 1 );
            break;
            case 10: l_U6 += 2;
            case 11:
            l_U6--;
            sub_325( 1 );
            break;
            case 21:
            if (g_U857._fU40 == -1)
            {
                sub_10497( l_U3 );
                l_U3 = -1;
                l_U7 = sub_106();
                l_U6 = l_U7 - 1;
                sub_325( 1 );
            }
            break;
            case 30:
            case 31:
            g_U857._fU8 = 1;
            g_U857._fU12 = 1;
            g_U851._fU20 = 1;
            INCREMENT_INT_STAT_NO_MESSAGE( 305, 1 );
            if (iVar2 == 30)
            {
                sub_10725( ref g_U968[l_U3], 1 );
            }
            else
            {
                sub_10725( ref g_U968[l_U3], 0 );
            }
            if (iVar2 == 30)
            {
                ConcatString(ref l_U12, "_0", 16);
                l_U11 = 1;
            }
            else
            {
                ConcatString(ref l_U12, "_1", 16);
                l_U11 = 0;
            }
            l_U16 = 0;
            l_U17 = GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( ref l_U12 );
            l_U10 = 0;
            g_U968[l_U3]._fU36 = 0;
            l_U18 = 1;
            break;
            case 40:
            g_U857._fU8 = 0;
            l_U18 = 0;
            sub_325( 1 );
            break;
            case 41:
            g_U857._fU8 = 1;
            l_U18 = 2;
            sub_325( 1 );
            break;
        }
    }
    g_U851._fU20 = 0;
    g_U857._fU8 = 0;
    g_U857._fU12 = 0;
    sub_8840();
    UNREGISTER_SCRIPT_WITH_AUDIO();
    return;
}

void sub_106()
{
    int I;
    int Result;

    Result = 0;
    for ( I = 0; I <= 39; I++ )
    {
        if (g_U968[I]._fU0[0] != -1)
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

void sub_198()
{
    int I;
    int Result;

    Result = 0;
    for ( I = 0; I <= 2; I++ )
    {
        if (g_U1369[I]._fU0[0] != -1)
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

void sub_325(boolean bParam0)
{
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    sub_341();
    if (l_U3 != -1)
    {
        if (g_U857._fU40 == -1)
        {
            sub_1570( g_U968[l_U3] );
        }
        else
        {
            sub_1570( g_U1369[l_U3] );
        }
    }
    else if (g_U857._fU40 == -1)
    {
        sub_1570( g_U968[0] );
    }
    else
    {
        sub_1570( g_U1369[0] );
    }
    sub_4683();
    sub_5211();
    sub_5990();
    if (bParam0)
    {
        sub_8321( g_U851._fU8, 0 );
        g_U851._fU8 = -1;
        RELOAD_WEB_PAGE( g_U857._fU4 );
    }
    return;
}

void sub_341()
{
    char[16] cVar2;

    if (g_U857._fU40 == -1)
    {
        l_U7 = sub_106();
        l_U8 = sub_374();
    }
    else
    {
        l_U7 = sub_198();
        l_U8 = sub_904();
    }
    l_U20[10] = CREATE_HTML_SCRIPT_OBJECT( "emailBottomInfo" );
    string(ref cVar2, l_U7, 16);
    ADD_TO_HTML_SCRIPT_OBJECT( l_U20[10], "<td width="128" ><span class="title_text">" );
    if (g_U968[39]._fU0[0] != -1)
    {
        sub_1117( ref l_U20[10], "INBOX_FULL", -1 );
    }
    else
    {
        ADD_TO_HTML_SCRIPT_OBJECT( l_U20[10], ref cVar2 );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U20[10], "&nbsp;" );
        sub_1117( ref l_U20[10], "INBOX_EMAILS", -1 );
    }
    ADD_TO_HTML_SCRIPT_OBJECT( l_U20[10], "</span></td>" );
    string(ref cVar2, l_U8, 16);
    ADD_TO_HTML_SCRIPT_OBJECT( l_U20[10], "<td width="128" ><span class="title_text">" );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U20[10], ref cVar2 );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U20[10], "&nbsp;" );
    sub_1117( ref l_U20[10], "INBOX_UNREAD", -1 );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U20[10], "</span></td>" );
    return;
}

void sub_374()
{
    int I;
    int Result;

    Result = 0;
    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_411( 4, g_U968[I] )) == 0)
        {
            Result++;
        }
    }
    return Result;
}

int sub_411(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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

void sub_904()
{
    int I;
    int Result;

    Result = 0;
    for ( I = 0; I <= 2; I++ )
    {
        if ((sub_411( 4, g_U1369[I] )) == 0)
        {
            Result++;
        }
    }
    return Result;
}

void sub_1117(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_1570(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    char[16] cVar12;
    char[16] cVar16;
    char[16] cVar20;
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

    l_U20[7] = CREATE_HTML_SCRIPT_OBJECT( "emailMainWindow" );
    l_U20[8] = CREATE_HTML_SCRIPT_OBJECT( "emailMainWindow2" );
    l_U20[9] = CREATE_HTML_SCRIPT_OBJECT( "emailMainWindow3" );
    switch (l_U18)
    {
        case 0:
        case 2:
        if (l_U3 != -1)
        {
            switch (l_U18)
            {
                case 0:
                switch (sub_411( 5, uParam0 ))
                {
                    case 4:
                    StrCopy( ref cVar16, "EINTPP", 16 );
                    StrCopy( ref cVar20, "EOUTPP", 16 );
                    break;
                    case 5:
                    StrCopy( ref cVar16, "EINTPF", 16 );
                    StrCopy( ref cVar20, "EOUTPF", 16 );
                    break;
                    default:
                    StrCopy( ref cVar16, "EINTN", 16 );
                    StrCopy( ref cVar20, "EOUTN", 16 );
                }
                iVar32 = sub_411( 12, g_U968[l_U3] );
                iVar33 = sub_411( 14, g_U968[l_U3] );
                sub_1923( ref cVar12, ref cVar16, l_U9, sub_411( 8, uParam0 ), -1 );
                sub_2022( ref l_U20[7], ref cVar12 );
                ADD_TO_HTML_SCRIPT_OBJECT( l_U20[7], "<br/><br/>" );
                if (iVar32 == 1)
                {
                    string(ref cVar12, sub_411( 11, g_U968[l_U3] ), 16);
                    ADD_TO_HTML_SCRIPT_OBJECT( l_U20[7], ref cVar12 );
                    ADD_TO_HTML_SCRIPT_OBJECT( l_U20[7], ":00 " );
                    ADD_TO_HTML_SCRIPT_OBJECT( l_U20[7], "&nbsp;" );
                }
                else if (iVar33 == 1)
                {
                    sub_1923( ref cVar12, "EMAIL_DAY", sub_411( 13, g_U968[l_U3] ), -1, -1 );
                    sub_1117( ref l_U20[7], ref cVar12, -1 );
                    ADD_TO_HTML_SCRIPT_OBJECT( l_U20[7], "." );
                    ADD_TO_HTML_SCRIPT_OBJECT( l_U20[7], "&nbsp;" );
                }
                sub_1923( ref cVar12, "EM", l_U9, sub_411( 1, uParam0 ), -1 );
                sub_2022( ref l_U20[7], ref cVar12 );
                if (iVar32 == 2)
                {
                    ADD_TO_HTML_SCRIPT_OBJECT( l_U20[7], "&nbsp;" );
                    string(ref cVar12, sub_411( 11, g_U968[l_U3] ), 16);
                    ADD_TO_HTML_SCRIPT_OBJECT( l_U20[7], ref cVar12 );
                    ADD_TO_HTML_SCRIPT_OBJECT( l_U20[7], ":00" );
                }
                else if (iVar33 == 2)
                {
                    sub_1923( ref cVar12, "EMAIL_DAY", sub_411( 13, g_U968[l_U3] ), -1, -1 );
                    sub_1117( ref l_U20[7], ref cVar12, -1 );
                    ADD_TO_HTML_SCRIPT_OBJECT( l_U20[7], "." );
                }
                if (l_U4 > 1)
                {
                    ADD_TO_HTML_SCRIPT_OBJECT( l_U20[8], "&nbsp;" );
                    sub_1923( ref cVar12, "EM", l_U9, sub_411( 2, uParam0 ), -1 );
                    sub_2022( ref l_U20[8], ref cVar12 );
                    if (iVar32 == 3)
                    {
                        ADD_TO_HTML_SCRIPT_OBJECT( l_U20[8], "&nbsp;" );
                        string(ref cVar12, sub_411( 11, g_U968[l_U3] ), 16);
                        ADD_TO_HTML_SCRIPT_OBJECT( l_U20[8], ref cVar12 );
                        ADD_TO_HTML_SCRIPT_OBJECT( l_U20[8], ":00" );
                    }
                    else if (iVar33 == 3)
                    {
                        sub_1923( ref cVar12, "EMAIL_DAY", sub_411( 13, g_U968[l_U3] ), -1, -1 );
                        sub_1117( ref l_U20[8], ref cVar12, -1 );
                        ADD_TO_HTML_SCRIPT_OBJECT( l_U20[8], "." );
                    }
                    if (l_U4 > 2)
                    {
                        ADD_TO_HTML_SCRIPT_OBJECT( l_U20[9], "&nbsp;" );
                        sub_1923( ref cVar12, "EM", l_U9, sub_411( 3, g_U968[l_U3] ), -1 );
                        sub_2022( ref l_U20[9], ref cVar12 );
                        if (iVar32 == 4)
                        {
                            ADD_TO_HTML_SCRIPT_OBJECT( l_U20[9], "&nbsp;" );
                            string(ref cVar12, sub_411( 11, g_U968[l_U3] ), 16);
                            ADD_TO_HTML_SCRIPT_OBJECT( l_U20[9], ref cVar12 );
                            ADD_TO_HTML_SCRIPT_OBJECT( l_U20[9], ":00" );
                        }
                        else if (iVar33 == 4)
                        {
                            sub_1923( ref cVar12, "EMAIL_DAY", sub_411( 13, g_U968[l_U3] ), -1, -1 );
                            sub_1117( ref l_U20[9], ref cVar12, -1 );
                            ADD_TO_HTML_SCRIPT_OBJECT( l_U20[9], "." );
                        }
                    }
                }
                ADD_TO_HTML_SCRIPT_OBJECT( l_U20[9], "<br/><br/>" );
                sub_1923( ref cVar12, ref cVar20, l_U9, sub_411( 9, g_U968[l_U3] ), -1 );
                sub_2022( ref l_U20[9], ref cVar12 );
                ADD_TO_HTML_SCRIPT_OBJECT( l_U20[9], "<br /><br />" );
                sub_1923( ref cVar12, "E_SIGNOFF", l_U9, -1, -1 );
                sub_1117( ref l_U20[9], ref cVar12, -1 );
                break;
                case 2:
                ADD_TO_HTML_SCRIPT_OBJECT( l_U20[7], "<table width="444" height="200" border="0" cellpadding="0" cellspacing="0">" );
                ADD_TO_HTML_SCRIPT_OBJECT( l_U20[7], "<td width="444" height="200" align="center" valign="middle">" );
                sub_3304( ref l_U20[7], ref l_U39, ref l_U44, 320, 200, -1 );
                ADD_TO_HTML_SCRIPT_OBJECT( l_U20[7], "</td></table>" );
                break;
            }
        }
        else
        {
            ADD_TO_HTML_SCRIPT_OBJECT( l_U20[7], "<table width="444" height="200" border="0" cellpadding="0" cellspacing="0">" );
            ADD_TO_HTML_SCRIPT_OBJECT( l_U20[7], "<td width="444" height="200" align="center" valign="middle">" );
            ADD_TO_HTML_SCRIPT_OBJECT( l_U20[7], "<img src="imgs/pageFirstLoad.jpg" width="444" height="200" />" );
            ADD_TO_HTML_SCRIPT_OBJECT( l_U20[7], "</td></table>" );
        }
        break;
        case 1:
        ADD_TO_HTML_SCRIPT_OBJECT( l_U20[7], "<table width="444" height="200" border="0" cellpadding="0" cellspacing="0">" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U20[7], "<td width="444" height="200" width="444" align="left" valign="middle">" );
        l_U16++;
        if (((l_U16 > l_U17) || (g_U857._fU312)) || (g_U857._fU320))
        {
            l_U16 = l_U17;
            l_U10 = 1;
        }
        else
        {
            PLAY_SOUND_FRONTEND( -1, "PC_EMAIL_REPLY_KEY_PRESS" );
        }
        ADD_FIRST_N_CHARACTERS_OF_STRING_TO_HTML_SCRIPT_OBJECT( l_U20[7], ref l_U12, l_U16 );
        if (l_U10)
        {
            ADD_TO_HTML_SCRIPT_OBJECT( l_U20[7], "<br /><br />" );
            if (l_U11)
            {
                sub_4244( ref l_U20[7], "posIcon.jpg", -1, 16, 16 );
            }
            else
            {
                sub_4244( ref l_U20[7], "negIcon.jpg", -1, 16, 16 );
            }
            sub_1117( ref l_U20[7], "EMAILMSG_SENT", -1 );
            g_U857._fU8 = 0;
            g_U857._fU12 = 0;
            g_U851._fU20 = 0;
        }
        ADD_TO_HTML_SCRIPT_OBJECT( l_U20[7], "</td></table>" );
        break;
    }
    return;
}

void sub_1923(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

void sub_2022(unknown uParam0, unknown uParam1)
{
    ADD_STRING_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam1 );
    return;
}

void sub_3304(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4, int iParam5)
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

void sub_4244(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

void sub_4683()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    l_U20[11] = CREATE_HTML_SCRIPT_OBJECT( "navTopTitle" );
    l_U20[12] = CREATE_HTML_SCRIPT_OBJECT( "navTopImage" );
    l_U20[13] = CREATE_HTML_SCRIPT_OBJECT( "navBottomTitle" );
    l_U20[14] = CREATE_HTML_SCRIPT_OBJECT( "navBottomImage1" );
    l_U20[15] = CREATE_HTML_SCRIPT_OBJECT( "navBottomImage2" );
    if (l_U3 != -1)
    {
        if ((l_U5) AND (l_U18 != 1))
        {
            sub_1117( ref l_U20[11], "EMAIL_VIEW", -1 );
            if (l_U18 == 0)
            {
                sub_3304( ref l_U20[12], ref l_U39, ref l_U44, 70, 40, 41 );
            }
            else
            {
                sub_4244( ref l_U20[12], "but_email.jpg", 40, 70, 40 );
            }
        }
        if (l_U18 != 1)
        {
            if (g_U857._fU40 == -1)
            {
                if ((g_U968[l_U3]._fU36) AND (NOT g_U968[l_U3]._fU28))
                {
                    sub_1117( ref l_U20[13], "EMAIL_REPLY", -1 );
                    sub_4244( ref l_U20[14], "but_reply_pos.jpg", 30, 70, 40 );
                    sub_4244( ref l_U20[15], "but_reply_neg.jpg", 31, 70, 40 );
                }
                else if (g_U968[l_U3]._fU16)
                {
                    sub_1117( ref l_U20[13], "EMAIL_DELETE", -1 );
                    sub_4244( ref l_U20[14], "but_delete.jpg", 21, 70, 40 );
                }
            }
        }
    }
    return;
}

void sub_5211()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    l_U20[6] = CREATE_HTML_SCRIPT_OBJECT( "emailTopInfo" );
    if (l_U3 != -1)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( l_U20[6], "<table width="391" border="0" cellspacing="0" cellpadding="0">" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U20[6], "<tr>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U20[6], "<th width="79" align="left" valign="middle"><span class="title_text">FROM</span></th>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U20[6], "<th width="312" align="left" valign="middle"><span class="info_text">" );
        sub_1923( ref uVar2, "E_ADDRESS", l_U9, -1, -1 );
        sub_1117( ref l_U20[6], ref uVar2, -1 );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U20[6], "</span></th>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U20[6], "</tr>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U20[6], "<tr>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U20[6], "<th align="left" valign="middle"><span class="title_text">SUBJECT</span></th>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U20[6], "<th align="left" valign="middle"><span class="info_text">" );
        if (g_U857._fU40 == -1)
        {
            sub_1923( ref uVar2, "ES", l_U9, sub_411( 1, g_U968[l_U3] ), -1 );
        }
        else
        {
            sub_1923( ref uVar2, "ES", l_U9, sub_411( 1, g_U1369[l_U3] ), -1 );
        }
        sub_1117( ref l_U20[6], ref uVar2, -1 );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U20[6], "</span></th>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U20[6], "</tr>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U20[6], "</table>" );
    }
    return;
}

void sub_5990()
{
    int I;

    l_U20[0] = CREATE_HTML_SCRIPT_OBJECT( "emailInbox0" );
    l_U20[1] = CREATE_HTML_SCRIPT_OBJECT( "emailInbox1" );
    l_U20[2] = CREATE_HTML_SCRIPT_OBJECT( "emailInbox2" );
    l_U20[3] = CREATE_HTML_SCRIPT_OBJECT( "emailInbox3" );
    l_U20[4] = CREATE_HTML_SCRIPT_OBJECT( "emailInbox4" );
    l_U20[5] = CREATE_HTML_SCRIPT_OBJECT( "emailInbox5" );
    for ( I = 0; I <= (l_U0 - 1); I++ )
    {
        if (((l_U6 - I) >= 0) AND (l_U7 != 0))
        {
            if (g_U857._fU40 == -1)
            {
                sub_6228( g_U968[l_U6 - I], I );
            }
            else
            {
                sub_6228( g_U1369[l_U6 - I], I );
            }
        }
    }
    return;
}

void sub_6228(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, int iParam10)
{
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;

    uVar13 = sub_411( 0, uParam0 );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U20[iParam10], "<table width="640" height="25" border="0" bgcolor="#FFFFFF" cellpadding="0" cellspacing="0">" );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U20[iParam10], "<tr>" );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U20[iParam10], "<th width="48" height="25" bgcolor="#6699CC"></th>" );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U20[iParam10], "<th width="10" align="center"></th>" );
    switch (sub_411( 4, uParam0 ))
    {
        case 0:
        ADD_TO_HTML_SCRIPT_OBJECT( l_U20[iParam10], "<th width="20" align="center"><img src="imgs/unreadIcon.jpg" width="16" height="16" /></th>" );
        break;
        case 1:
        case 3:
        ADD_TO_HTML_SCRIPT_OBJECT( l_U20[iParam10], "<th width="20" align="center"></th>" );
        break;
        case 2:
        case 4:
        ADD_TO_HTML_SCRIPT_OBJECT( l_U20[iParam10], "<th width="20" align="center"><img src="imgs/posIcon.jpg" width="16" height="16" /></th>" );
        break;
        case 5:
        if (uParam0._fU32)
        {
            ADD_TO_HTML_SCRIPT_OBJECT( l_U20[iParam10], "<th width="20" align="center"><img src="imgs/posIcon.jpg" width="16" height="16" /></th>" );
        }
        else
        {
            ADD_TO_HTML_SCRIPT_OBJECT( l_U20[iParam10], "<th width="20" align="center"><img src="imgs/negIcon.jpg" width="16" height="16" /></th>" );
        }
        break;
    }
    ADD_TO_HTML_SCRIPT_OBJECT( l_U20[iParam10], "<th width="32" align="center" valign="middle">" );
    if ((sub_411( 6, uParam0 )) != 65535)
    {
        sub_4244( ref l_U20[iParam10], "attachedIcon.jpg", -1, 12, 20 );
    }
    ADD_TO_HTML_SCRIPT_OBJECT( l_U20[iParam10], "</th>" );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U20[iParam10], "<th width="160" align="left" valign="middle">" );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U20[iParam10], "<span class="read_text">" );
    sub_1923( ref uVar14, "E_NAME", uVar13, -1, -1 );
    if (l_U3 == (l_U6 - iParam10))
    {
        sub_1117( ref l_U20[iParam10], ref uVar14, -1 );
    }
    else
    {
        sub_1117( ref l_U20[iParam10], ref uVar14, iParam10 );
    }
    ADD_TO_HTML_SCRIPT_OBJECT( l_U20[iParam10], "</span></th>" );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U20[iParam10], "<th width="292" align="left" valign="middle">" );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U20[iParam10], "<span class="read_text">" );
    sub_1923( ref uVar14, "ES", uVar13, sub_411( 1, uParam0 ), -1 );
    sub_1117( ref l_U20[iParam10], ref uVar14, -1 );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U20[iParam10], "</span></th>" );
    if (iParam10 == 0)
    {
        if ((l_U7 < (l_U0 + 1)) || (l_U6 == (l_U1._fU0 + (l_U7 - 1))))
        {
            ADD_TO_HTML_SCRIPT_OBJECT( l_U20[iParam10], "<th width="30" bgcolor="#999999"></th>" );
        }
        else
        {
            ADD_TO_HTML_SCRIPT_OBJECT( l_U20[iParam10], "<th width="30" align="center" valign="middle" bgcolor="#999999">" );
            sub_4244( ref l_U20[iParam10], "but_up.jpg", 10, 16, 16 );
            ADD_TO_HTML_SCRIPT_OBJECT( l_U20[iParam10], "</th>" );
        }
    }
    else if (iParam10 == (l_U0 - 1))
    {
        if ((l_U7 < (l_U0 + 1)) || ((l_U6 - (l_U0 - 1)) == l_U1._fU0))
        {
            ADD_TO_HTML_SCRIPT_OBJECT( l_U20[iParam10], "<th width="30" bgcolor="#999999"></th>" );
        }
        else
        {
            ADD_TO_HTML_SCRIPT_OBJECT( l_U20[iParam10], "<th width="30" align="center" valign="middle" bgcolor="#999999">" );
            sub_4244( ref l_U20[iParam10], "but_down.jpg", 11, 16, 16 );
            ADD_TO_HTML_SCRIPT_OBJECT( l_U20[iParam10], "</th>" );
        }
    }
    else
    {
        ADD_TO_HTML_SCRIPT_OBJECT( l_U20[iParam10], "<th width="30" bgcolor="#999999" ></th>" );
    }
    ADD_TO_HTML_SCRIPT_OBJECT( l_U20[iParam10], "<th width="48" bgcolor="#6699CC"></th>" );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U20[iParam10], "</tr>" );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U20[iParam10], "</table>" );
    return;
}

void sub_8321(int iParam0, unknown uParam1)
{
    if ((iParam0 != -1) AND (iParam0 < (GET_NUMBER_OF_WEB_PAGE_LINKS( g_U857._fU4 ))))
    {
        SET_WEB_PAGE_LINK_ACTIVE( g_U857._fU4, iParam0, uParam1 );
    }
    return;
}

void sub_8421(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_8432( uParam1 );
    if (bParam2)
    {
        RELOAD_WEB_PAGE( g_U857._fU4 );
    }
    else
    {
        LOAD_WEB_PAGE( g_U857._fU4, uParam0 );
        StrCopy( ref g_U857._fU168, uParam0, 64 );
        g_U857._fU164 = 1;
    }
    sub_8570();
    return;
}

void sub_8432(boolean bParam0)
{
    if (bParam0)
    {
        g_U857._fU20 = g_U942;
    }
    else
    {
        g_U857._fU20 = 0.00000000;
    }
    SET_WEB_PAGE_SCROLL( g_U857._fU4, g_U857._fU20 );
    return;
}

void sub_8570()
{
    float fVar2;

    fVar2 = GET_WEB_PAGE_HEIGHT( g_U857._fU4 );
    if (fVar2 > (g_U941 - (g_U939 * g_U941)))
    {
        g_U857._fU28 = 1;
        g_U857._fU32 = (1.00000000 - g_U939) / fVar2;
        g_U857._fU36 = (1.00000000 - g_U939) * ((g_U941 - (g_U939 * g_U941)) / fVar2);
    }
    else
    {
        g_U857._fU28 = 0;
    }
    return;
}

int sub_8744(unknown uParam0)
{
    if ((uParam0^) != GET_CURRENT_LANGUAGE())
    {
        (uParam0^) = GET_CURRENT_LANGUAGE();
        return 1;
    }
    return 0;
}

void sub_8840()
{
    if (l_U37)
    {
        RELEASE_TEXTURE( l_U43 );
        REMOVE_TXD( l_U38 );
        l_U37 = 0;
    }
    return;
}

void sub_9139(unknown uParam0)
{
    switch (sub_411( 4, (uParam0^) ))
    {
        case 0:
        case 1:
        sub_9193( 3, 4, uParam0 );
        break;
        case 2:
        sub_9193( 4, 4, uParam0 );
        break;
    }
    return;
}

void sub_9193(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_9870(int iParam0)
{
    StrCopy( ref l_U39, "webPhotos_", 16 );
    if (l_U37)
    {
        sub_8840();
    }
    ConcatString(ref l_U39, iParam0 / 5, 16);
    l_U38 = LOAD_TXD( ref l_U39 );
    StrCopy( ref l_U44, "photo_", 16 );
    ConcatString(ref l_U44, iParam0, 16);
    l_U43 = GET_TEXTURE( l_U38, ref l_U44 );
    l_U37 = 1;
    return;
}

void sub_10497(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_10570( 39 );
    return;
}

void sub_10570(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

void sub_10725(int iParam0, unknown uParam1)
{
    switch (sub_411( 4, (iParam0^) ))
    {
        case 3:
        case 4:
        sub_9193( 5, 4, iParam0 );
        iParam0->_fU28 = 1;
        iParam0->_fU32 = uParam1;
        break;
    }
    return;
}
