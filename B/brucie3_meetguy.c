void main()
{
    boolean bVar2;

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
    l_U481 = 0;
    l_U482 = 0;
    l_U483 = 0;
    l_U484 = 0;
    l_U485 = 0;
    l_U486 = 0;
    l_U515 = {884.37310000, -484.96480000, 15.88270000};
    l_U522 = 0;
    l_U523 = 0;
    l_U524 = 0;
    l_U556 = 0;
    l_U557 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    if (NOT g_U64950)
    {
        l_U554 = 0;
        sub_187();
    }
    else
    {
        l_U554 = 5;
        g_U64950 = 0;
    }
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    l_U555 = 0;
    SETTIMERA( 0 );
    SETTIMERB( 0 );
    bVar2 = true;
    while (bVar2)
    {
        WAIT( 0 );
        bVar2 = sub_896();
    }
    sub_9169();
    sub_14472();
    sub_7892( "BRUCIE3 MEET GUY (help script): should never reach ENDSCRIPT" );
    return;
}

void sub_187()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref iVar2 );
    iVar2 += 8;
    sub_220( ref l_U487, iVar2, 0, 1 );
    return;
}

void sub_220(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_273( iParam0, uParam1, uParam2 );
    if (NOT bParam3)
    {
        return;
    }
    if (NOT ((ref iParam0->_fU8->_fU4) == 0))
    {
        if ((ref iParam0->_fU8->_fU4) <= 15)
        {
            ref iParam0->_fU8->_fU4 = 15;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 30)
        {
            ref iParam0->_fU8->_fU4 = 30;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 45)
        {
            ref iParam0->_fU8->_fU4 = 45;
        }
        else
        {
            ref iParam0->_fU8->_fU4 = 0;
            ref iParam0->_fU8->_fU0++;
        };;;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_405( iParam0 + 0 );
    }
    return;
}

void sub_273(int iParam0, int iParam1, int iParam2)
{
    ref iParam0->_fU8->_fU4 += iParam2;
    ref iParam0->_fU8->_fU0 += iParam1;
    while ((ref iParam0->_fU8->_fU4) >= 60)
    {
        ref iParam0->_fU8->_fU4 -= 60;
        ref iParam0->_fU8->_fU0++;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_405( iParam0 + 0 );
    }
    return;
}

void sub_405(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_436( iParam0->_fU4 )))
    {
        iParam0->_fU0 = 1;
        iParam0->_fU4++;
        if (iParam0->_fU4 > 12)
        {
            iParam0->_fU4 = 1;
        }
    }
    return;
}

int sub_436(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: return 31;
        case 4:
        case 6:
        case 9:
        case 11: return 30;
        case 2: return 28;
    }
    return 30;
}

int sub_896()
{
    if (g_U9893._fU28)
    {
        if (g_U9893._fU40 == 8)
        {
            sub_933();
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_1792() )))
    {
        return 1;
    }
    switch (l_U554)
    {
        case 0:
        sub_1908();
        break;
        case 1:
        sub_2268();
        break;
        case 2:
        sub_9679();
        break;
        case 3:
        sub_10107();
        break;
        case 4:
        sub_11266();
        break;
        case 5:
        sub_13705();
        break;
        case 6:
        return 0;
        break;
    }
    return 1;
}

void sub_933()
{
    if (DOES_BLIP_EXIST( l_U558 ))
    {
        FLASH_BLIP( l_U558, 0 );
        REMOVE_BLIP( l_U558 );
    }
    sub_988( ref l_U525 );
    sub_988( ref l_U536 );
    sub_1292( 7 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_988(int iParam0)
{
    int I;

    if (iParam0->_fU40 >= 0)
    {
        for ( I = iParam0->_fU40; I >= 0; I += -1 )
        {
            if (sub_1045( iParam0->_fU0, g_U968[I] ))
            {
                sub_1112( I );
                iParam0->_fU40 = -1;
            }
        }
    }
    return;
}

int sub_1045(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[0] == uParam10._fU0[0]) AND (uParam0._fU0[1] == uParam10._fU0[1]))
    {
        return 1;
    }
    return 0;
}

void sub_1112(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_1185( 39 );
    return;
}

void sub_1185(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

void sub_1292(unknown uParam0)
{
    int iVar3;
    unknown uVar4;

    sub_1305( uParam0, ref iVar3, ref uVar4 );
    if (iVar3 == 8)
    {
        return;
    }
    sub_1568( iVar3, uVar4, uParam0 );
    return;
}

void sub_1305(int iParam0, unknown uParam1, unknown uParam2)
{
    int J;
    int I;

    for ( J = 0; J <= (7 - 1); J++ )
    {
        for ( I = 0; I <= 3; I++ )
        {
            if ((sub_1344( J, I )) == iParam0)
            {
                (uParam1^) = J;
                (uParam2^) = I;
                return;
            }
        }
    }
    (uParam1^) = 8;
    return;
}

int sub_1344(unknown uParam0, unknown uParam1)
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

void sub_1568(unknown uParam0, unknown uParam1, int iParam2)
{
    if ((sub_1344( uParam0, uParam1 )) == iParam2)
    {
        sub_1599( uParam0, uParam1, 0 );
    }
    return;
}

void sub_1599(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam1)
    {
        case 0:
        SET_BITS_IN_RANGE( ref g_U465[uParam0]._fU0, 0, 15, uParam2 );
        break;
        case 1:
        SET_BITS_IN_RANGE( ref g_U465[uParam0]._fU0, 16, 31, uParam2 );
        break;
        case 2:
        SET_BITS_IN_RANGE( ref g_U465[uParam0]._fU4, 0, 15, uParam2 );
        break;
        case 3:
        SET_BITS_IN_RANGE( ref g_U465[uParam0]._fU4, 16, 31, uParam2 );
        break;
    }
    return;
}

void sub_1792()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1908()
{
    if (sub_1923( l_U487 ))
    {
        sub_2177( ref l_U491 );
        l_U554 = 1;
    }
    return;
}

int sub_1923(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;

    if (uParam0._fU8._fU4 == -1)
    {
        return 1;
    }
    iVar6 = 0;
    iVar7 = 0;
    GET_CURRENT_DATE( ref iVar6, ref iVar7 );
    iVar8 = 0;
    iVar9 = 0;
    GET_TIME_OF_DAY( ref iVar8, ref iVar9 );
    if ((iVar7 == uParam0._fU0._fU4) AND (iVar6 == uParam0._fU0._fU0))
    {
        if (iVar8 < uParam0._fU8._fU0)
        {
            return 0;
        }
        else if (iVar8 > uParam0._fU8._fU0)
        {
            return 1;
        }
        if (iVar9 > uParam0._fU8._fU4)
        {
            return 1;
        }
        return 0;
    }
    if (sub_2092( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_2092(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    int iVar7;

    iVar7 = COMPARE_TWO_DATES( uParam1, uParam0, uParam3, uParam2 );
    if (iVar7 >= 0)
    {
        if (iVar7 <= iParam4)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2177(int iParam0)
{
    sub_2190( iParam0 + 0 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    return;
}

void sub_2190(int iParam0)
{
    GET_CURRENT_DATE( iParam0 + 0, iParam0 + 4 );
    return;
}

void sub_2268()
{
    if ((((sub_1923( l_U491 )) AND (NOT g_U15654[11])) AND (NOT g_U22274[0]._fU4)) AND (sub_2315( 20000 )))
    {
        switch (l_U557)
        {
            case 0:
            sub_3160( 0, 25, 16383, 16383, ref l_U547 );
            break;
            case 1:
            sub_3160( 0, 48, 16383, 16383, ref l_U547 );
            break;
            case 2:
            sub_3160( 0, 49, 16383, 16383, ref l_U547 );
            break;
            case 3:
            sub_3160( 0, 50, 16383, 16383, ref l_U547 );
            break;
        }
        l_U557++;
        if (l_U557 > 3)
        {
            l_U557 = 0;
        }
        sub_3614( ref l_U547, 1 );
        while (NOT (sub_4070( ref l_U547 )))
        {
            WAIT( 0 );
        }
        sub_405( ref l_U491._fU0 );
        sub_4908();
        sub_4987( 0, 0 );
    }
    if (NOT l_U522)
    {
        if (NOT (sub_5081() == 0))
        {
            sub_5113();
        }
    }
    if ((NOT l_U523) AND (l_U522))
    {
        sub_7243();
    }
    if (l_U523)
    {
        if (sub_5081() == 0)
        {
            if (l_U524)
            {
                sub_7518();
                sub_8663();
                if (NOT (sub_1923( l_U503 )))
                {
                    PRINT_HELP( "BR3_REMIND" );
                }
                sub_9169();
                WAIT( 7000 );
                if (NOT g_U10978)
                {
                    sub_9559();
                }
                l_U554 = 2;
            }
            else
            {
                sub_187();
                l_U554 = 0;
                l_U523 = 0;
                l_U522 = 0;
            }
        }
    }
    return;
}

int sub_2315(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_PLAYER_PLAYING( sub_1792() )))
    {
        return 0;
    }
    if (g_U10978)
    {
        return 0;
    }
    if ((g_U9893._fU4) AND (NOT g_U9893._fU8))
    {
        return 0;
    }
    if (g_U91._fU104)
    {
        return 0;
    }
    if (sub_2403())
    {
        return 0;
    }
    if (sub_2446())
    {
        return 0;
    }
    if (sub_2651())
    {
        return 0;
    }
    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (sub_2705( uParam0 ))
    {
        return 0;
    }
    return 1;
}

int sub_2403()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_2446()
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

int sub_2651()
{
    if (g_U9078)
    {
        return 1;
    }
    return 0;
}

int sub_2705(int iParam0)
{
    int iVar3;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (sub_2725())
    {
        return 1;
    }
    if (sub_2760())
    {
        return 1;
    }
    if (NOT (iParam0 == 0))
    {
        if (NOT (sub_2831( iParam0 )))
        {
            iParam0 = 0;
        }
    }
    if (NOT (iParam0 == 0))
    {
        if (sub_2980( iParam0 ))
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

void sub_2725()
{
    return g_U91._fU540;
}

int sub_2760()
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

int sub_2831(int iParam0)
{
    int iVar3;

    iVar3 = sub_2840();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    iVar3 = sub_2895();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    return 0;
}

int sub_2840()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_2895()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_2980(int iParam0)
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

void sub_3160(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_3182( uParam0, 0, iParam4 + 0 );
    sub_3182( uParam1, 1, iParam4 + 0 );
    sub_3182( uParam2, 2, iParam4 + 0 );
    sub_3182( uParam3, 3, iParam4 + 0 );
    sub_3182( 0, 4, iParam4 + 0 );
    sub_3182( 1, 5, iParam4 + 0 );
    sub_3182( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_3182(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_3614(int iParam0, unknown uParam1)
{
    int I;

    if (iParam0->_fU24 >= 0)
    {
        for ( I = iParam0->_fU24; I >= 0; I += -1 )
        {
            if (sub_3667( iParam0->_fU0, g_U569[I] ))
            {
                g_U569[I]._fU20 = uParam1;
                iParam0->_fU24 = I;
            }
        }
    }
    return;
}

int sub_3667(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_3716( 0, uParam0 );
        if (iVar14 == (sub_3716( 0, uParam6 )))
        {
            iVar15 = sub_3716( 3, uParam0 );
            if (iVar15 == (sub_3716( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_3716(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

int sub_4070(int iParam0)
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
        if (NOT sub_4140())
        {
            sub_4204( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_4417( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_4204( iVar9 );
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
                ConcatString(ref cVar5, sub_3716( 0, iParam0->_fU0 ), 16);
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
        else if ((sub_3716( 4, g_U569[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_4140()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_3716( 1, g_U569[I] )) != 0) AND (g_U569[I]._fU20))
        {
            sub_4204( I );
            return 1;
        }
    }
    return 0;
}

void sub_4204(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_4289( g_U569 - 1 );
    return;
}

void sub_4289(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_4417(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U569 - 1); Result++ )
    {
        if (g_U569[Result]._fU0[0] != -1)
        {
            if (sub_3667( uParam0, g_U569[Result] ))
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

void sub_4908()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_2840();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

void sub_4987(int iParam0, boolean bParam1)
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

void sub_5081()
{
    return g_U857._fU0;
}

void sub_5113()
{
    sub_988( ref l_U525 );
    sub_988( ref l_U536 );
    if (NOT l_U486)
    {
        sub_5159( 3, 0, 1, 2, ref l_U525 );
        sub_5159( 3, 0, 1, 3, ref l_U536 );
    }
    else
    {
        sub_5159( 3, 4, 2, 16383, ref l_U525 );
        sub_5159( 3, 4, 3, 16383, ref l_U536 );
    }
    GET_TIME_OF_DAY( ref l_U518, ref l_U519 );
    if (l_U518 < 6)
    {
        l_U520 = 8;
    }
    else if (l_U518 < 10)
    {
        l_U520 = 12;
    }
    else if (l_U518 < 16)
    {
        l_U520 = 18;
    }
    else if (l_U518 < 22)
    {
        l_U520 = 0;
    }
    else
    {
        l_U520 = 8;
    };;;;
    l_U521 = l_U520;
    if (l_U520 == 0)
    {
        l_U525 = {l_U536};
    }
    else if (NOT l_U486)
    {
        sub_6054( ref l_U525, l_U520, 4 );
    }
    else
    {
        sub_6054( ref l_U525, l_U520, 3 );
    }
    while (NOT (sub_6120( ref l_U525, 0 )))
    {
        WAIT( 0 );
    }
    sub_6964( ref l_U525, 0, 1 );
    sub_7089( ref l_U525, 0, 0 );
    l_U486 = 1;
    l_U522 = 1;
    return;
}

void sub_5159(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_5183( uParam0, 0, iParam4 + 0 );
    sub_5183( uParam1, 1, iParam4 + 0 );
    sub_5183( uParam2, 2, iParam4 + 0 );
    sub_5183( uParam3, 3, iParam4 + 0 );
    sub_5183( 0, 4, iParam4 + 0 );
    sub_5183( 1, 5, iParam4 + 0 );
    sub_5183( 65535, 6, iParam4 + 0 );
    sub_5183( 0, 12, iParam4 + 0 );
    sub_5183( 0, 11, iParam4 + 0 );
    sub_5183( 0, 14, iParam4 + 0 );
    sub_5183( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_5183( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_5183( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_5183(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_6054(int iParam0, unknown uParam1, unknown uParam2)
{
    sub_5183( uParam1, 11, iParam0 + 0 );
    sub_5183( uParam2, 12, iParam0 + 0 );
    return;
}

int sub_6120(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_6160())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_6709( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_1112( iVar5 );
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

int sub_6160()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_6194( 5, g_U968[I] )) == 7)
        {
            sub_1112( I );
            return 1;
        }
    }
    return 0;
}

int sub_6194(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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

int sub_6709(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_1045( uParam0, g_U968[Result] ))
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

void sub_6964(int iParam0, int iParam1, unknown uParam2)
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
            if (sub_1045( iParam0->_fU0, g_U968[I] ))
            {
                g_U968[I]._fU36 = uParam2;
                iParam0->_fU40 = I;
            }
        }
    }
    return;
}

void sub_7089(int iParam0, int iParam1, unknown uParam2)
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
            if (sub_1045( iParam0->_fU0, g_U968[I] ))
            {
                g_U968[I]._fU16 = uParam2;
                iParam0->_fU40 = I;
            }
        }
    }
    return;
}

void sub_7243()
{
    if ((sub_7257( ref l_U525, 0 )) == 5)
    {
        CLEAR_HELP();
        SETTIMERB( 0 );
        l_U523 = 1;
        if (sub_7421( ref l_U525 ))
        {
            l_U524 = 1;
        }
        else
        {
            l_U524 = 0;
        }
    }
    return;
}

int sub_7257(int iParam0, int iParam1)
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
            if (sub_1045( iParam0->_fU0, g_U968[I] ))
            {
                iParam0->_fU40 = I;
                return sub_6194( 4, g_U968[I] );
            }
        }
        iParam0->_fU40 = -2;
    }
    return 6;
}

void sub_7421(int iParam0)
{
    return g_U968[iParam0->_fU40]._fU32;
}

void sub_7518()
{
    PRINTNL();
    PRINTSTRING( "GENERATE APPOINTMENT" );
    switch (l_U521)
    {
        case 8:
        sub_7614( 2, 7, 0, 1, 0, 0 );
        break;
        case 12:
        sub_7614( 2, 7, 0, 0, 1, 0 );
        break;
        case 18:
        sub_7614( 2, 7, 0, 0, 0, 1 );
        break;
        case 0:
        sub_7614( 2, 7, 1, 0, 0, 0 );
        break;
        default:
        sub_7614( 2, 7, 1, 1, 1, 1 );
        break;
    }
    return;
}

void sub_7614(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
    unknown uVar9;

    sub_7639( uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, ref uVar8, ref uVar9 );
    sub_1292( uParam1 );
    if (NOT (sub_8333( uVar8, uVar9, uParam1 )))
    {
        sub_7892( "KM_Generate_Appointment: Found appointment but failed to 'make appointment'" );
    }
    return;
}

void sub_7639(unknown uParam0, unknown uParam1, boolean bParam2, boolean bParam3, boolean bParam4, boolean bParam5, unknown uParam6, unknown uParam7)
{
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    int iVar14;

    sub_7652( ref uVar10, ref uVar11 );
    uVar12 = uVar10;
    uVar13 = uVar11;
    iVar14 = 1;
    sub_7780( ref uVar12, ref uVar13, uParam0 );
    while (true)
    {
        iVar14 = 1;
        (uParam6^) = uVar12;
        (uParam7^) = uVar13;
        if ((NOT bParam2) AND ((uParam7^) == 0))
        {
            iVar14 = 0;
        }
        if ((NOT bParam3) AND ((uParam7^) == 1))
        {
            iVar14 = 0;
        }
        if ((NOT bParam4) AND ((uParam7^) == 2))
        {
            iVar14 = 0;
        }
        if ((NOT bParam5) AND ((uParam7^) == 3))
        {
            iVar14 = 0;
        }
        if ((sub_8246( (uParam6^), (uParam7^) )) AND (iVar14))
        {
            return;
        }
        sub_7922( ref uVar12, ref uVar13 );
    }
    return;
}

void sub_7652(unknown uParam0, unknown uParam1)
{
    (uParam0^) = GET_CURRENT_DAY_OF_WEEK();
    (uParam1^) = sub_7671();
    return;
}

int sub_7671()
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

void sub_7780(unknown uParam0, unknown uParam1, int iParam2)
{
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    if (iParam2 > 23)
    {
        sub_7892( "Brucie3_MeetGuy: Find_Next_Free_Timeslot_Minimum_Hours_Away: Min Hours must be less than 24" );
    }
    sub_7922( uParam0, uParam1 );
    iVar5 = sub_7994( (uParam1^) );
    iVar6 = GET_CURRENT_DAY_OF_WEEK();
    iVar7 = GET_HOURS_OF_DAY();
    if (NOT (iVar6 == (uParam0^)))
    {
        iVar5 += 24;
    }
    iVar8 = iVar5 - iVar7;
    if (iVar8 < iParam2)
    {
        sub_7922( uParam0, uParam1 );
    }
    return;
}

void sub_7892(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_7922(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = 4;
    iVar5 = 7;
    (uParam1^)++;
    if ((uParam1^) == iVar4)
    {
        (uParam1^) = 0;
        (uParam0^)++;
        if ((uParam0^) == iVar5)
        {
            (uParam0^) = 0;
        }
    }
    return;
}

int sub_7994(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return 0;
        break;
        case 1:
        return 8;
        break;
        case 2:
        return 12;
        break;
    }
    return 18;
}

int sub_8246(unknown uParam0, unknown uParam1)
{
    if ((sub_1344( uParam0, uParam1 )) == 0)
    {
        return 1;
    }
    return 0;
}

int sub_8333(unknown uParam0, unknown uParam1, unknown uParam2)
{
    char[16] cVar5;
    unknown uVar9;

    StrCopy( ref cVar5, "DOW_SHORT_DAY_", 16 );
    ConcatString(ref cVar5, uParam0, 16);
    uVar9 = sub_7994( uParam1 );
    sub_8410( "\n time for appointment is ,", uVar9 );
    if ((sub_1344( uParam0, uParam1 )) == 0)
    {
        sub_1599( uParam0, uParam1, uParam2 );
        g_U91._fU520 = 0;
        SET_PHONE_HUD_ITEM( 4, ref cVar5, uVar9 );
        return 1;
    }
    return 0;
}

void sub_8410(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_8663()
{
    sub_8677( 7, ref l_U495 );
    l_U499 = {l_U495};
    sub_8826( ref l_U499, 3, 1 );
    l_U503 = {l_U495};
    sub_8826( ref l_U503, 2, 1 );
    l_U507 = {l_U495};
    sub_273( ref l_U507, 3, 0 );
    l_U511 = {l_U507};
    sub_273( ref l_U507, 0, 5 );
    return;
}

void sub_8677(unknown uParam0, int iParam1)
{
    unknown uVar4;
    unknown uVar5;
    int iVar6;
    unknown uVar7;
    int iVar8;
    unknown uVar9;
    unknown uVar10;

    sub_1305( uParam0, ref uVar4, ref uVar5 );
    iVar6 = uVar4;
    uVar7 = sub_7994( uVar5 );
    iVar8 = GET_CURRENT_DAY_OF_WEEK();
    sub_2190( ref uVar9 );
    if (iVar6 < iVar8)
    {
        iVar6 += 7;
    }
    while (iVar8 < iVar6)
    {
        sub_405( ref uVar9 );
        iVar8++;
    }
    iParam1->_fU0 = {uVar9};
    ref iParam1->_fU8->_fU0 = uVar7;
    ref iParam1->_fU8->_fU4 = 0;
    return;
}

void sub_8826(int iParam0, int iParam1, int iParam2)
{
    ref iParam0->_fU8->_fU4 -= iParam2;
    ref iParam0->_fU8->_fU0 -= iParam1;
    while ((ref iParam0->_fU8->_fU4) < 0)
    {
        ref iParam0->_fU8->_fU4 += 60;
        ref iParam0->_fU8->_fU0--;
    }
    while ((ref iParam0->_fU8->_fU0) < 0)
    {
        ref iParam0->_fU8->_fU0 += 24;
        sub_8956( iParam0 + 0 );
    }
    return;
}

void sub_8956(int iParam0)
{
    iParam0->_fU0--;
    if (iParam0->_fU0 < 1)
    {
        iParam0->_fU4--;
        if (iParam0->_fU4 < 1)
        {
            iParam0->_fU4 = 12;
        }
        iParam0->_fU0 = sub_436( iParam0->_fU4 );
    }
    return;
}

void sub_9169()
{
    sub_9178();
    sub_9281( ref g_U9893._fU68 );
    sub_9330();
    return;
}

void sub_9178()
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

void sub_9281(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_9330()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_3716( 1, g_U569[I] )) == 0)
        {
            sub_4204( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_9410())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_9410()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_3716( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_9559()
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

void sub_9679()
{
    if (l_U555 == 0)
    {
        l_U555++;
    }
    if (l_U555 == 1)
    {
        if (sub_1923( l_U499 ))
        {
            if (NOT g_U10978)
            {
                if (sub_9792( sub_9751() ))
                {
                    g_U64951 = 1;
                }
                else
                {
                    g_U64951 = 0;
                }
            }
            else
            {
                l_U555++;
                l_U485 = 1;
            }
            l_U555++;
        }
    }
    if (l_U555 == 2)
    {
        if (NOT (DOES_BLIP_EXIST( l_U558 )))
        {
            ADD_BLIP_FOR_CONTACT( l_U515._fU0, l_U515._fU4, l_U515._fU8, ref l_U558 );
            CHANGE_BLIP_SPRITE( l_U558, 54 );
            CHANGE_BLIP_DISPLAY( l_U558, 2 );
        }
        l_U555++;
        SETTIMERB( 0 );
    }
    if (l_U555 == 3)
    {
        l_U555 = 99;
    }
    if (l_U555 == 99)
    {
        l_U555 = 0;
        l_U554 = 3;
    }
    return;
}

void sub_9751()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_9792(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (IS_CHAR_IN_AREA_2D( uParam0, 855.17000000, -498.13000000, 928, 65130, 0 ))
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
    }
    return 0;
}

void sub_10107()
{
    int iVar2;

    if (l_U555 == 0)
    {
        l_U555++;
    }
    if (NOT g_U10978)
    {
        if (sub_1923( l_U503 ))
        {
            if (l_U485)
            {
                SETTIMERB( 0 );
                l_U485 = 0;
            }
            if (NOT (DOES_BLIP_EXIST( l_U558 )))
            {
                ADD_BLIP_FOR_CONTACT( l_U515._fU0, l_U515._fU4, l_U515._fU8, ref l_U558 );
                CHANGE_BLIP_SPRITE( l_U558, 54 );
                CHANGE_BLIP_DISPLAY( l_U558, 2 );
            }
            if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "organiserHelp" )) == 0)
            {
                if (NOT l_U481)
                {
                    if (NOT sub_10310())
                    {
                        if (DOES_BLIP_EXIST( l_U558 ))
                        {
                            FLASH_BLIP( l_U558, 1 );
                        }
                        PRINT_HELP( "BR3_HELP1" );
                        l_U481 = 1;
                        SETTIMERB( 0 );
                    }
                }
                if (TIMERB() >= 8000)
                {
                    if ((((NOT (sub_10450( sub_9751() ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_9751(), l_U515._fU0, l_U515._fU4, l_U515._fU8, 25.00000000, 25.00000000, 4.00000000, 0 )))) AND (NOT sub_10310())) AND (NOT l_U484))
                    {
                        PRINT_NOW( "BR3_GOD", 7500, 1 );
                        l_U484 = 1;
                        SETTIMERB( 0 );
                    }
                }
                if ((l_U484) AND (NOT l_U482))
                {
                    if (TIMERB() >= 8000)
                    {
                        if (NOT sub_10310())
                        {
                            PRINT_HELP( "BR3_HELP2" );
                            l_U482 = 1;
                            SETTIMERB( 0 );
                        }
                        else
                        {
                            SETTIMERB( 0 );
                        }
                    }
                }
                if ((l_U482) AND (NOT l_U483))
                {
                    if (TIMERB() >= 9000)
                    {
                        l_U483 = 1;
                        if (DOES_BLIP_EXIST( l_U558 ))
                        {
                            FLASH_BLIP( l_U558, 0 );
                        }
                    }
                }
            }
        }
        if (NOT (IS_CHAR_DEAD( sub_9751() )))
        {
            if ((LOCATE_CHAR_ANY_MEANS_3D( sub_9751(), l_U515._fU0, l_U515._fU4, l_U515._fU8, 25.00000000, 25.00000000, 4.00000000, 0 )) || (sub_10450( sub_9751() )))
            {
                if (((NOT sub_2403()) AND (NOT g_U9893._fU12)) AND (sub_10908()))
                {
                    iVar2 = 0;
                    GET_GAME_TIMER( ref iVar2 );
                    g_U26757 = iVar2 + 5000;
                    l_U555 = 99;
                }
                else if (sub_10450( sub_9751() ))
                {
                    if (NOT sub_10310())
                    {
                        sub_11021();
                    }
                }
                g_U64951 = 1;;
            }
        }
    }
    else if (sub_1923( l_U503 ))
    {
        if (NOT l_U485)
        {
            l_U485 = 1;
        }
    }
    if ((g_U10978) AND (sub_1923( l_U495 )))
    {
        l_U555 = 0;
        l_U554 = 5;
        return;
    }
    if (l_U555 == 1)
    {
        if (sub_1923( l_U507 ))
        {
            l_U555 = 0;
            l_U554 = 4;
            return;
        }
    }
    if (l_U555 == 99)
    {
        l_U555 = 0;
        l_U554 = 6;
    }
    return;
}

int sub_10310()
{
    if ((g_U91._fU0 == 1007) || (g_U91._fU0 == 1008))
    {
        return 1;
    }
    return 0;
}

int sub_10450(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (IS_CHAR_IN_AREA_3D( uParam0, 876.80000000, -488.17000000, 0, 891.61000000, -481.85000000, 18.50000000, 0 ))
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
    }
    return 0;
}

int sub_10908()
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

void sub_11021()
{
    return sub_11032( 0, 1 );
}

int sub_11032(boolean bParam0, unknown uParam1)
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

void sub_11266()
{
    if (sub_1923( l_U511 ))
    {
        sub_11292( 1 );
    }
    return;
}

void sub_11292(unknown uParam0)
{
    sub_11301();
    switch (uParam0)
    {
        case 1:
        sub_12748( "BR3AUD" );
        sub_12871( "BR3AUD", 6 );
        PRINT_NOW( "BR3_MISSEDAPP", 7000, 1 );
        sub_13064( 8, "BR3_FAIL4", "BR3AUD", 0 );
        break;
        default:
    }
    g_U64949++;
    g_U64950 = 1;
    sub_933();
    return;
}

void sub_11301()
{
    sub_11310();
    return;
}

void sub_11310()
{
    int iVar2;

    iVar2 = 8;
    sub_11324( iVar2 );
    sub_12357( iVar2 );
    return;
}

void sub_11324(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_1792(), 150 );
    CLEAR_HELP();
    sub_11378( uParam0 );
    return;
}

void sub_11378(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_11422();
        sub_11583();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_11691();
            sub_11730();
        }
    }
    sub_11806();
    sub_4908();
    uVar5 = sub_11914( uParam0 );
    sub_4987( uVar5, 0 );
    return;
}

void sub_11422()
{
    sub_11436( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_11536();
    }
    return;
}

void sub_11436(int iParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    iVar3 = g_U26758[iParam0]._fU100;
    iVar3--;
    g_U26758[iParam0]._fU100 = iVar3;
    DECREMENT_INT_STAT( 255, 1 );
    return;
}

void sub_11536()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_11583()
{
    sub_11592();
    return;
}

void sub_11592()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_11691()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_11730()
{
    sub_11739();
    return;
}

void sub_11739()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_11806()
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

int sub_11914(unknown uParam0)
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
    sub_7892( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_12357(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_12366();
    if (g_U0)
    {
        return;
    }
    if (g_U91._fU40 == 0)
    {
        return;
    }
    if (NOT g_U10978)
    {
        return;
    }
    iVar3 = g_U13391[iParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (bVar4)
    {
        return;
    }
    if (g_U10981[iParam0]._fU12)
    {
        return;
    }
    if (g_U9893._fU40 == -1)
    {
        return;
    }
    if (NOT (g_U9893._fU40 == iParam0))
    {
        return;
    }
    if (NOT g_U813)
    {
        sub_9178();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_12366()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_3716( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_3716( 1, g_U569[I] )) != 0)
            {
                sub_4204( I );
            }
        }
    }
    if (NOT sub_9410())
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

void sub_12748(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_12767();
    return;
}

void sub_12767()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U181._fU16[I]._fU0 = nil;
        StrCopy( ref l_U181._fU16[I]._fU4, "", 32 );
        l_U181._fU344[I] = 0;
    }
    return;
}

void sub_12871(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_12907())
            {
                REQUEST_ADDITIONAL_TEXT( uParam0, uParam1 );
            }
            WAIT( 0 );
        }
        else
        {
            bVar4 = false;
        }
    }
    return;
}

int sub_12907()
{
    int I;

    for ( I = 0; I <= (8 - 1); I++ )
    {
        if (IS_STREAMING_ADDITIONAL_TEXT( I ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_13064(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    char[12] cVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref cVar6, 2);
    StrCopy( ref cVar6[0], uParam1, 16 );
    StrCopy( ref cVar6[1], "END", 16 );
    sub_13108( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_13108(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
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
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    int I;
    int iVar38;

    array(ref uVar8._fU32, 5);
    ref uVar8;
    iVar38 = uVar8._fU32;
    if (NOT (IS_THREAD_ACTIVE( g_U812 )))
    {
        uVar8._fU12 = uParam0;
        if ((uParam1^) > iVar38)
        {
            SCRIPT_ASSERT( "TELL SIMON END CALL ARRAY SIZE NEEDS INCREASING" );
            return;
        }
        for ( I = 0; I <= ((uParam1^) - 1); I++ )
        {
            uVar8._fU32[I] = {(uParam1^)[I]};
        }
        if ((uParam1^) < iVar38)
        {
            StrCopy( ref uVar8._fU32[(uParam1^)], "END", 16 );
        }
        StrCopy( ref uVar8._fU16, uParam2, 16 );
        uVar8._fU0 = uParam3;
        uVar8._fU4 = uParam4;
        uVar8._fU8 = uParam5;
        REQUEST_SCRIPT( "SPcellphoneEndCall" );
        while (NOT (HAS_SCRIPT_LOADED( "SPcellphoneEndCall" )))
        {
            REQUEST_SCRIPT( "SPcellphoneEndCall" );
            WAIT( 0 );
        }
        g_U811 = 1;
        g_U812 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

void sub_13705()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    int iVar14;

    if (l_U555 == 0)
    {
        if (DOES_BLIP_EXIST( l_U558 ))
        {
            FLASH_BLIP( l_U558, 0 );
            REMOVE_BLIP( l_U558 );
            g_U64949++;
        }
        sub_1292( 7 );
        l_U481 = 0;
        l_U482 = 0;
        l_U483 = 0;
        l_U485 = 0;
        l_U484 = 0;
        l_U555++;
    }
    if (l_U555 == 1)
    {
        if (NOT g_U10978)
        {
            if (sub_2315( 0 ))
            {
                iVar2 = 3;
                if (g_U64949 >= 10)
                {
                    iVar2 = 12;
                }
                iVar3 = 1;
                iVar4 = 1;
                iVar5 = 1;
                iVar6 = 1;
                sub_7614( iVar2, 7, iVar3, iVar4, iVar5, iVar6 );
                sub_8663();
                sub_13919();
                l_U555++;
            }
        }
    }
    if (l_U555 == 2)
    {
        array(ref uVar7._fU0._fU0, 3);
        ref uVar7._fU0;
        ref uVar7;
        iVar14 = 37;
        l_U556++;
        sub_3160( iVar14, l_U556, 16383, 16383, ref uVar7 );
        sub_14280( ref uVar7, 1 );
        sub_14308( ref uVar7, 0 );
        sub_14336( ref uVar7, 2 );
        while (NOT (sub_4070( ref uVar7 )))
        {
            WAIT( 0 );
        }
        sub_4908();
        l_U555 = 99;
    }
    if (l_U555 == 99)
    {
        l_U555 = 0;
        l_U554 = 2;
    }
    return;
}

void sub_13919()
{
    int iVar2;
    unknown uVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    iVar2 = GET_CURRENT_DAY_OF_WEEK();
    sub_1305( 7, ref uVar3, ref iVar4 );
    iVar5 = uVar3;
    if (iVar5 < iVar2)
    {
        iVar2 -= 7;
    }
    iVar6 = 0;
    if (NOT (iVar2 == iVar5))
    {
        iVar6++;
        iVar2++;
    }
    l_U556 = 8;
    if (iVar6 == 0)
    {
        switch (iVar4)
        {
            case 1:
            l_U556 = 0;
            break;
            case 2:
            l_U556 = 1;
            break;
            case 3:
            l_U556 = 2;
            break;
        }
    }
    else if (iVar6 == 1)
    {
        switch (iVar4)
        {
            case 0:
            l_U556 = 3;
            break;
            case 1:
            l_U556 = 4;
            break;
            case 2:
            l_U556 = 5;
            break;
            case 3:
            l_U556 = 6;
            break;
        }
    }
    else if ((iVar6 == 2) AND (iVar4 == 0))
    {
        l_U556 = 7;
    };;;
    return;
}

void sub_14280(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_14308(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_14336(int iParam0, unknown uParam1)
{
    sub_3182( uParam1, 5, iParam0 + 0 );
    return;
}

void sub_14472()
{
    sub_14481();
    sub_933();
    return;
}

void sub_14481()
{
    sub_14490();
    return;
}

void sub_14490()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_14508();
    sub_14567( iVar2, iVar3, iVar4 );
    return;
}

void sub_14508()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_14567(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 8;
    sub_14598( iVar5, uParam0, uParam1, uParam2, "Friend_9" );
    return;
}

void sub_14598(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_14694( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_14694( ref cVar9 );
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
            sub_14694( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_14694( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_14694( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_14694( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_15271( iParam0, iVar7 );;;
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
                sub_15668( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_15668( 0, 4 );
            }
        }
    }
    if (NOT (sub_15757( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_1792(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_1792() );
    }
    sub_12366();
    bVar27 = true;
    uVar28 = sub_15271( iParam0, iVar7 );
    uVar29 = sub_11914( iParam0 );
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
                sub_25133( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_9559();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_25580( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_25637( iParam0 );
                sub_25676( 0 );
                sub_4987( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_25784();
        }
    }
    if (bParam2)
    {
        sub_9559();
        sub_25872();
        sub_25676( 0 );
    }
    if (bParam3)
    {
        sub_9559();
        sub_25912();
        sub_25676( 0 );
        sub_4987( uVar29, 0 );
    }
    sub_4908();
    return;
}

void sub_14694(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_15271(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_7892( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_15668(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_15757(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_15965( uParam1 );
        break;
        case 1:
        bVar8 = sub_18043( uParam1 );
        break;
        case 2:
        bVar8 = sub_18269( uParam1 );
        break;
        case 3:
        bVar8 = sub_18419( uParam1 );
        break;
        case 4:
        bVar8 = sub_18697( uParam1 );
        break;
        case 5:
        bVar8 = sub_19000( uParam1 );
        break;
        case 6:
        bVar8 = sub_19199( uParam1 );
        break;
        case 7:
        bVar8 = sub_19425( uParam1 );
        break;
        case 8:
        bVar8 = sub_19660( uParam1 );
        break;
        case 9:
        bVar8 = sub_20035( uParam1 );
        break;
        case 10:
        bVar8 = sub_20282( uParam1 );
        break;
        case 11:
        bVar8 = sub_20421( uParam1 );
        break;
        case 12:
        bVar8 = sub_20720( uParam1 );
        break;
        case 13:
        bVar8 = sub_20948( uParam1 );
        break;
        case 14:
        bVar8 = sub_21235( uParam1 );
        break;
        case 15:
        bVar8 = sub_21517( uParam1 );
        break;
        case 16:
        bVar8 = sub_21799( uParam1 );
        break;
        case 17:
        bVar8 = sub_22000( uParam1 );
        break;
        case 18:
        bVar8 = sub_22073( uParam1 );
        break;
        case 19:
        bVar8 = sub_22287( uParam1 );
        break;
        case 20:
        bVar8 = sub_22540( uParam1 );
        break;
        case 21:
        bVar8 = sub_22787( uParam1 );
        break;
        case 22:
        bVar8 = sub_22988( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_17648( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_15271( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_23311( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_15965(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16244( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_16244( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_16244( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_16244( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_16244( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_16244( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_16244( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_16244( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_16244( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_16244( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_16244( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_16244( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_16244( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_16244( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_16244( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_16244( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_16244( iVar3, 0, 3, 1, 0, 0 );
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
        sub_16244( iVar3, 0, sub_17526(), sub_17792(), 0, 0 );
        break;
        default:
        sub_17951( "Friend 1", 1 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17951( "Friend 1", 0 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_16244(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_16255( uParam1 );
    sub_16429( uParam0, 0, uParam2 );
    sub_16429( uParam0, 1, uParam3 );
    sub_16429( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_14508();
    return;
}

void sub_16255(unknown uParam0)
{
    ADD_SCORE( sub_1792(), uParam0 );
    sub_16280( uParam0 );
    return;
}

void sub_16280(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_7892( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_16429(unknown uParam0, int iParam1, int iParam2)
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
        sub_16586( uParam0 );
    }
    return;
}

void sub_16586(unknown uParam0)
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

int sub_17526()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_17648( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_17648(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_17792()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_17648( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_17951(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_18043(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16244( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_16244( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_16244( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_16244( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_17951( "Contact 2", 1 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17951( "Contact 2", 0 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_18269(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_16244( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_17951( "Girl 3", 1 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17951( "Girl 3", 0 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_18419(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16244( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_16244( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_16244( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_16244( iVar3, 0, sub_17526(), sub_17792(), 0, 0 );
        break;
        default:
        sub_17951( "Friend 4", 1 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17951( "Friend 4", 0 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_18697(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16244( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_16244( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_16244( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_16244( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_16244( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_16244( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_16244( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_17951( "Contact 5", 1 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17951( "Contact 5", 0 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_19000(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16244( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_16244( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_16244( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_17951( "Contact 7", 1 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17951( "Contact 7", 0 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_19199(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16244( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_16244( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_16244( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_16244( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_17951( "Contact 7b", 1 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17951( "Contact 7b", 0 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_19425(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16244( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_16244( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_16244( iVar3, 0, sub_17526(), sub_17792(), 0, 0 );
        break;
        default:
        sub_17951( "Friend 8", 1 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17951( "Friend 8", 0 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_19660(unknown uParam0)
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
        sub_16244( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_16244( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_16244( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_16244( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_16244( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_16244( iVar3, 0, sub_17526(), sub_17792(), 0, 0 );
        break;
        default:
        sub_17951( "Friend 9", 1 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17951( "Friend 9", 0 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_20035(unknown uParam0)
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
        sub_16244( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_16244( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_16244( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_16244( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_17951( "Contact 10", 1 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_17951( "Contact 10", 0 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_20282(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16244( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_17951( "Girl 11", 1 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17951( "Girl 11", 0 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_20421(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16244( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_16244( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_16244( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_16244( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_16244( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_16244( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_17951( "Contact 12", 1 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17951( "Contact 12", 0 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_20720(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16244( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_16244( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_16244( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_16244( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_17951( "Contact 13", 1 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17951( "Contact 13", 0 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_20948(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16244( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_16244( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_16244( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_16244( iVar3, 0, sub_17526(), sub_17792(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_17951( "Friend 15", 1 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17951( "Friend 15", 0 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_21235(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16244( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_16244( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_16244( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_16244( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_16244( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_16244( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_17951( "Contact 16", 1 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17951( "Contact 16", 0 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_21517(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16244( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_16244( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_16244( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_16244( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_16244( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_17951( "Contact 18", 1 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17951( "Contact 18", 0 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_21799(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16244( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_16244( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_16244( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_17951( "Contact 19", 1 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17951( "Contact 19", 0 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_22000(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_17951( "Girl 20", 0 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_22073(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16244( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_16244( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_16244( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_17951( "Contact 21", 1 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17951( "Contact 21", 0 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_22287(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16244( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_16244( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_16244( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_16244( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_16244( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_17951( "Contact 22", 1 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17951( "Contact 22", 0 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_22540(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_16244( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_16244( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_16244( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_16244( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_17951( "Contact 24", 1 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17951( "Contact 24", 0 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_22787(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16244( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_16244( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_16244( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_17951( "Contact 25", 1 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17951( "Contact 25", 0 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_22988(unknown uParam0)
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
        sub_16244( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_17951( "Girl 26", 1 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_17951( "Girl 26", 0 );
        sub_16244( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_23311(int iParam0, int iParam1)
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
    if (sub_23359( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_24090( iParam1 );
    }
    return;
}

int sub_23359(int iParam0, int iParam1)
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
            sub_23499( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_23499(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_23681( 0 );
    return;
}

void sub_23681(boolean bParam0)
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
        sub_23936();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_23936()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_24090(int iParam0)
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
        sub_24423( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_24423( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_24423( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_24423( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_24423( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_24423( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_24423( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_24423( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_24423( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_24423( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_24423( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_24423( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_24423( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_24423( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_24423( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_24423( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_24423( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_24423( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_24423( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_24423(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_25133(unknown uParam0, unknown uParam1)
{
    sub_25152( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_25152(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

int sub_25580(int iParam0, int iParam1)
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

void sub_25637(unknown uParam0)
{
    sub_11806();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_25676(unknown uParam0)
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

void sub_25784()
{
    sub_25793();
    return;
}

void sub_25793()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_25872()
{
    sub_25793();
    return;
}

void sub_25912()
{
    sub_25793();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}
