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
    l_U555 = {0.00000000, 1.13800000, -1.00000000};
    l_U558 = {0.00000000, 0.00000000, 0.00000000};
    l_U561 = 0;
    l_U565 = 0;
    l_U573 = 1;
    l_U644 = 0;
    l_U645 = 0;
    l_U646 = 0;
    l_U647 = 0;
    l_U648 = 0;
    sub_175( "FRANCI2", 0 );
    sub_175( "FM2AUD", 6 );
    sub_333();
    SET_MISSION_FLAG( 1 );
    if (g_U9893._fU24)
    {
        ENABLE_SCENE_STREAMING( 0 );
        START_CUTSCENE_NOW( "FM_2" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "FM_2" );
        ENABLE_SCENE_STREAMING( 1 );
    }
    sub_5680();
    sub_7765();
    l_U490 = 0;
    l_U573 = 1;
    while (l_U573)
    {
        switch (l_U490)
        {
            case 0:
            sub_8753();
            break;
            default:
        }
        WAIT( 0 );
        if (l_U571 == 1)
        {
            CLEAR_HELP();
            CLEAR_WANTED_LEVEL( l_U663 );
            sub_10556();
        }
        else if (l_U572 == 1)
        {
            CLEAR_HELP();
            sub_22209();
        }
    }
    sub_2476();
    return;
}

void sub_175(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_211())
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

int sub_211()
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

void sub_333()
{
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_354();
        l_U572 = 1;
        l_U490 = -1;
        sub_2476();
    }
    return;
}

void sub_354()
{
    sub_363();
    return;
}

void sub_363()
{
    int iVar2;

    iVar2 = 11;
    sub_377( iVar2 );
    sub_1553( iVar2 );
    return;
}

void sub_377(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_421();
        sub_582();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_690();
            sub_729();
        }
    }
    sub_805();
    sub_906();
    uVar5 = sub_1019( uParam0 );
    sub_1460( uVar5, 0 );
    return;
}

void sub_421()
{
    sub_435( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_535();
    }
    return;
}

void sub_435(int iParam0)
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

void sub_535()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_582()
{
    sub_591();
    return;
}

void sub_591()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_690()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_729()
{
    sub_738();
    return;
}

void sub_738()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_805()
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

void sub_906()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_928();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_928()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1019(unknown uParam0)
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
    sub_1418( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1418(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1460(int iParam0, boolean bParam1)
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

void sub_1553(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1562();
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
        sub_2337();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1562()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_1600( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_1600( 1, g_U569[I] )) != 0)
            {
                sub_1886( I );
            }
        }
    }
    if (NOT sub_2052())
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

int sub_1600(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1886(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_1971( g_U569 - 1 );
    return;
}

void sub_1971(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2052()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1600( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2337()
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

void sub_2476()
{
    PRINTSTRING( "*\n*\n*\n*\n* ----> CLEANUP <---- *\n*\n*\n*\n*" );
    sub_2538( 34, 0 );
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 1 );
    ENABLE_SCENE_STREAMING( 1 );
    sub_4432();
    sub_4455();
    sub_4479( 0 );
    sub_4503();
    sub_4583();
    sub_4663();
    sub_4740( 11 );
    sub_4432();
    l_U565 = 0;
    l_U561 = 0;
    l_U582 = 0;
    l_U644 = 0;
    l_U580 = 0;
    l_U645 = 0;
    l_U646 = 0;
    l_U647 = 0;
    if (DOES_BLIP_EXIST( l_U649 ))
    {
        REMOVE_BLIP( l_U649 );
    }
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2538(unknown uParam0, unknown uParam1)
{
    g_U10133._fU280[uParam0] = uParam1;
    sub_2562();
    return;
}

void sub_2562()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 0;
    for ( I = 0; I < 15; I++ )
    {
        iVar3 = sub_2590( 13 );
        if ((sub_2635( 13, iVar3 )) AND (g_U9932[g_U9999[I]._fU0]._fU0))
        {
            sub_2736( ref g_U9999[I]._fU20, g_U9999[I]._fU4, 4, 60 );
        }
        else
        {
            sub_2920( ref g_U9999[I]._fU20 );
        }
    }
    for ( I = 0; I < 7; I++ )
    {
        iVar3 = sub_2590( 11 );
        if ((sub_2635( 11, iVar3 )) AND (g_U9932[g_U10090[I]._fU0]._fU0))
        {
            sub_2736( ref g_U10090[I]._fU20, g_U10090[I]._fU4, 4, 62 );
        }
        else
        {
            sub_2920( ref g_U10090[I]._fU20 );
        }
    }
    for ( I = 0; I < 59; I++ )
    {
        iVar3 = sub_3114( I );
        if ((sub_2635( g_U10324[I]._fU12, iVar3 )) AND (g_U9932[g_U10324[I]._fU28]._fU0))
        {
            sub_2736( ref g_U10324[I]._fU32, g_U10324[I]._fU0, g_U10324[I]._fU24, g_U10324[I]._fU20 );
            sub_3422( I );
        }
        else
        {
            sub_2920( ref g_U10324[I]._fU32 );
            g_U10133._fU520[I] = 0;
        }
    }
    sub_3651();
    return;
}

int sub_2590(unknown uParam0)
{
    if (g_U10133._fU84[uParam0])
    {
        return 1;
    }
    return 0;
}

int sub_2635(unknown uParam0, boolean bParam1)
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

void sub_2736(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4, unknown uParam5)
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
        CHANGE_BLIP_PRIORITY( (uParam0^), l_U4 );
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

void sub_2920(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP( (uParam0^) );
    (uParam0^) = nil;
    return;
}

int sub_3114(unknown uParam0)
{
    unknown uVar3;

    if (g_U10133._fU280[uParam0])
    {
        return 1;
    }
    if (sub_3156( g_U10324[uParam0]._fU16 ))
    {
        return 1;
    }
    if (sub_2590( g_U10324[uParam0]._fU12 ))
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

int sub_3156(unknown uParam0)
{
    if (g_U10133._fU168[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_3422(unknown uParam0)
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

void sub_3651()
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
    bVar3 = sub_2590( 13 );
    for ( I = 0; I < 15; I++ )
    {
        sub_3696( g_U9999[I]._fU20, bVar3 );
    }
    bVar3 = sub_2590( 11 );
    for ( I = 0; I < 7; I++ )
    {
        sub_3696( g_U10090[I]._fU20, bVar3 );
    }
    iVar4 = 0;
    for ( I = 0; I < 59; I++ )
    {
        if ((sub_3114( I )) AND (g_U9932[g_U10324[I]._fU28]._fU0))
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
        bVar3 = sub_3114( I );
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
        sub_3696( g_U10324[I]._fU32, bVar3 );
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
        sub_3696( g_U9943[I]._fU32, bVar3 );
    }
    fVar10 = 99999.90000000;
    fVar11 = 0.00000000;
    iVar12 = -1;
    if (NOT bVar6)
    {
        if (NOT (IS_CHAR_DEAD( sub_4105() )))
        {
            GET_CHAR_COORDINATES( sub_4105(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
            for ( I = 0; I < 5; I++ )
            {
                if (g_U9943[I]._fU0)
                {
                    fVar11 = sub_4223( uVar7, g_U9943[I]._fU8 );
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
                sub_3696( g_U9943[I]._fU32, bVar3 );
            }
        }
    }
    return;
}

void sub_3696(unknown uParam0, boolean bParam1)
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

void sub_4105()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4223(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

void sub_4432()
{
    g_U965 = -1;
    return;
}

void sub_4455()
{
    g_U946 = -1;
    return;
}

void sub_4479(unknown uParam0)
{
    g_U966 = uParam0;
    return;
}

void sub_4503()
{
    int I;

    if (l_U655 != 0)
    {
        for ( I = 0; I <= (l_U655 - 1); I++ )
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U653[I] );
        }
    }
    l_U655 = 0;
    return;
}

void sub_4583()
{
    int I;

    if (l_U658 != 0)
    {
        for ( I = 0; I <= (l_U658 - 1); I++ )
        {
            REMOVE_ANIMS( l_U656[I] );
        }
    }
    l_U658 = 0;
    return;
}

void sub_4663()
{
    int I;

    for ( I = 0; I <= 0; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U660[I] ))
        {
            MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U660[I] );
        }
    }
    return;
}

void sub_4740(unknown uParam0)
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_4751( uParam0 ) );
    return;
}

int sub_4751(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        if (g_U64464[uParam0] == 2)
        {
            return 558221221;
        }
        return -1992728631;
        case 1: return 896408642;
        case 3:
        if (g_U64464[uParam0] == 1)
        {
            return -1275031987;
        }
        return 1487004273;
        case 4: return 57218969;
        case 5: return 1445589009;
        case 6: return 155063868;
        case 7: return -617264103;
        case 8: return -1729980128;
        case 9: return 1794146792;
        case 11: return 1710545037;
        case 12: return -1775659292;
        case 13: return 1690783035;
        case 14: return 954215094;
        case 15: return 809067472;
        case 16: return 1169442297;
        case 17: return 1872110126;
        case 18: return 1500493064;
        case 19: return -1826458934;
        case 22: return -366421228;
        case 20: return -379234846;
        case 24: return 237511807;
        case 25: return 237497537;
        case 26: return -1040287406;
        case 27: return -357652594;
        case 52: return 2129490787;
        case 53: return 386513184;
        case 2: return -1080659212;
        case 10: return -773750838;
        case 28: return -1788328884;
        case 29: return 1056837725;
        case 30: return -292713088;
        case 31:
        case 32: return -292713088;
    }
    sub_1418( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_5680()
{
    unknown uVar2;

    sub_5703( 36, 0, 16383, 16383, ref l_U491 );
    sub_6382( ref l_U491, 0 );
    if (sub_6415( ref l_U491, 0 ))
    {
        l_U648 = 1;
    }
    sub_5703( 0, 8, 16383, 16383, ref l_U502 );
    sub_6382( ref l_U502, 1 );
    l_U662 = sub_4105();
    l_U663 = sub_7475();
    sub_7524( ref g_U10324[34]._fU32 );
    while (NOT sub_7549())
    {
        WAIT( 0 );
    }
    while (NOT sub_7653())
    {
        WAIT( 0 );
    }
    return;
}

void sub_5703(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_5727( uParam0, 0, iParam4 + 0 );
    sub_5727( uParam1, 1, iParam4 + 0 );
    sub_5727( uParam2, 2, iParam4 + 0 );
    sub_5727( uParam3, 3, iParam4 + 0 );
    sub_5727( 0, 4, iParam4 + 0 );
    sub_5727( 1, 5, iParam4 + 0 );
    sub_5727( 65535, 6, iParam4 + 0 );
    sub_5727( 0, 12, iParam4 + 0 );
    sub_5727( 0, 11, iParam4 + 0 );
    sub_5727( 0, 14, iParam4 + 0 );
    sub_5727( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_5727( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_5727( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_5727(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_6382(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU36 = uParam1;
    return;
}

int sub_6415(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_6455())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_7142( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_6941( iVar5 );
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

int sub_6455()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_6489( 5, g_U968[I] )) == 7)
        {
            sub_6941( I );
            return 1;
        }
    }
    return 0;
}

int sub_6489(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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

void sub_6941(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_7014( 39 );
    return;
}

void sub_7014(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_7142(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_7203( uParam0, g_U968[Result] ))
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

int sub_7203(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[0] == uParam10._fU0[0]) AND (uParam0._fU0[1] == uParam10._fU0[1]))
    {
        return 1;
    }
    return 0;
}

void sub_7475()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_7524(unknown uParam0)
{
    g_U2221 = (uParam0^);
    return;
}

int sub_7549()
{
    int I;

    if (l_U655 != 0)
    {
        for ( I = 0; I <= (l_U655 - 1); I++ )
        {
            if (NOT (HAS_MODEL_LOADED( l_U653[I] )))
            {
                return 0;
            }
        }
    }
    return 1;
}

int sub_7653()
{
    int I;

    if (l_U658 != 0)
    {
        for ( I = 0; I <= (l_U658 - 1); I++ )
        {
            if (NOT (HAVE_ANIMS_LOADED( l_U656[I] )))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_7765()
{
    sub_7774();
    LOAD_SCENE( -406.63070000, 279.57920000, 12.10630000 );
    sub_7834();
    CLEAR_AREA( -406.63070000, 279.57920000, 12.10630000, 2.00000000, 1 );
    if (NOT (IS_CHAR_DEAD( l_U662 )))
    {
        SET_CHAR_COORDINATES( l_U662, -406.63070000, 279.57920000, 12.10630000 );
        SET_CHAR_HEADING( l_U662, 185.83730000 );
    }
    SET_GAME_CAM_HEADING( 0.00000000 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    DO_SCREEN_FADE_IN( 750 );
    if (NOT (IS_CHAR_DEAD( l_U662 )))
    {
        SET_PLAYER_CONTROL( sub_7475(), 1 );
    }
    return;
}

void sub_7774()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_7834()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    iVar5 = 0;
    iVar6 = 0;
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref iVar3 );
    if (((DOES_VEHICLE_EXIST( iVar3 )) AND (NOT (IS_CAR_DEAD( iVar3 )))) AND (iVar3 != nil))
    {
        if (NOT (IS_CAR_A_MISSION_CAR( iVar3 )))
        {
            SET_CAR_AS_MISSION_CAR( iVar3 );
            iVar6 = 1;
        }
        GET_CAR_MODEL( iVar3, ref iVar2 );
        if ((((((((((((iVar2 == -713569950) || (iVar2 == 1353720154)) || (iVar2 == 850991848)) || (iVar2 == -2137348917)) || (iVar2 == -1961627517)) || (iVar2 == 569305213)) || (iVar2 == 904750859)) || (iVar2 == 2053223216)) || (iVar2 == -1099960214)) || (iVar2 == 1677715180)) || (iVar2 == 1938952078)) || (iVar2 == 1917016601))
        {
            PRINTSTRING( "\n ---> PLAYER IN LARGE CAR <--- \n\n" );
            iVar5 = 1;
        }
        if ((LOCATE_CAR_3D( iVar3, -406.63070000, 279.57920000, 12.10630000, 3.00000000, 3.00000000, 3.00000000, 0 )) || ((LOCATE_CAR_3D( iVar3, -406.63070000, 279.57920000, 12.10630000, 15.00000000, 15.00000000, 15.00000000, 0 )) AND (iVar5 == 1)))
        {
            PRINTSTRING( "\n ---> MOVE CAR <--- \n\n" );
            if ((iVar4 != iVar3) AND (iVar4 != nil))
            {
                if (DOES_VEHICLE_EXIST( iVar4 ))
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref iVar4 );
                }
            }
            GET_CAR_MODEL( iVar3, ref iVar2 );
            if (iVar5 == 1)
            {
                PRINTSTRING( "\n ---> MOVE LARGE CAR <--- \n\n" );
                CLEAR_AREA( -406.89320000, 272.66900000, 11.95120000, 4.00000000, 1 );
                SET_CAR_HEADING( iVar3, 89.75230000 );
                SET_CAR_COORDINATES( iVar3, -406.89320000, 272.66900000, 11.95120000 );
                if (NOT (IS_THIS_MODEL_A_BOAT( iVar2 )))
                {
                    SET_CAR_ON_GROUND_PROPERLY( iVar3 );
                }
            }
            else
            {
                CLEAR_AREA( -407.33700000, 274.75050000, 11.88230000, 3.00000000, 1 );
                SET_CAR_HEADING( iVar3, 89.86640000 );
                SET_CAR_COORDINATES( iVar3, -407.33700000, 274.75050000, 11.88230000 );
                if (NOT (IS_THIS_MODEL_A_BOAT( iVar2 )))
                {
                    SET_CAR_ON_GROUND_PROPERLY( iVar3 );
                }
            }
            if (iVar6 == 1)
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref iVar3 );
                iVar6 = 0;
            }
        }
        iVar4 = iVar3;
        iVar5 = 0;
    }
    return;
}

void sub_8753()
{
    int iVar2;

    if (l_U580 == 0)
    {
        sub_2538( 34, 1 );
        sub_8784( 1 );
        sub_8809( 1 );
        PRINT_NOW( "FM_COMMAND_01", 7500, 1 );
        l_U580 = 1;
    }
    if ((l_U644 == 0) AND (NOT (IS_CHAR_DEAD( l_U662 ))))
    {
        iVar2 = 5;
        GET_KEY_FOR_CHAR_IN_ROOM( l_U662, ref iVar2 );
        if (iVar2 == -869201005)
        {
            l_U644 = 1;
        }
    }
    if (l_U582 == 0)
    {
        l_U565 = sub_8939();
        if ((sub_8985( "www.eyefind.info" )) AND (l_U561 != 1))
        {
            l_U561 = 1;
            PRINT_HELP_FOREVER( "FM_NETCAFE_03" );
            l_U645 = 0;
        }
        if ((sub_8985( "www.goldberglignerandshyster.com" )) AND (l_U561 != 2))
        {
            l_U561 = 2;
            PRINT_HELP_FOREVER( "FM_NETCAFE_04" );
            l_U645 = 0;
        }
        if (l_U645 == 0)
        {
            if ((sub_8985( "www.goldberglignerandshyster.com/careers.html" )) AND (l_U561 != 3))
            {
                l_U561 = 3;
                PRINT_HELP_FOREVER( "FM_NETCAFE_05" );
                l_U645 = 0;
            }
        }
        if ((sub_8985( "www.goldberglignerandshyster.com/resume.html" )) AND (l_U561 != 4))
        {
            l_U561 = 4;
            PRINT_HELP_FOREVER( "FM_NETCAFE_07" );
        }
        if ((sub_9364() == 1) AND (l_U561 != 5))
        {
            l_U561 = 5;
            CLEAR_HELP();
            ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
        }
        if ((sub_9364() == 0) AND (l_U561 != 7))
        {
            l_U561 = 7;
            CLEAR_HELP();
            l_U644 = 0;
        }
        if ((l_U565 > 0) AND (l_U561 != 6))
        {
            l_U561 = 6;
            l_U582 = 1;
            CLEAR_HELP();
            PRINTINT( l_U565 );
            PRINTNL();
            l_U645 = 0;
        }
    }
    if ((l_U582 == 1) AND (l_U646 == 0))
    {
        WAIT( 2000 );
        while (sub_9364() != 0)
        {
            WAIT( 0 );
        }
        PRINT_NOW( "FM_NETCAFE_02", 7500, 1 );
        sub_2538( 34, 0 );
        PRINTINT( l_U565 );
        PRINTNL();
        REMOVE_BLIP( l_U649 );
        CLEAR_HELP();
        l_U587 = 0;
        l_U588 = 0;
        sub_9671( 35 );
        l_U646 = 1;
    }
    if ((l_U646 == 1) AND (l_U647 == 0))
    {
        if (NOT (IS_CHAR_DEAD( l_U662 )))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( l_U662, ref iVar2 );
        }
        if (iVar2 == 0)
        {
            sub_9894( 11, "FM2_CALL1", "FM2AUD", 0 );
            l_U647 = 1;
            l_U571 = 1;
            l_U607 = 1;
            l_U490 = -1;
        }
    }
    return;
}

void sub_8784(unknown uParam0)
{
    g_U965 = uParam0;
    return;
}

void sub_8809(unknown uParam0)
{
    g_U946 = uParam0;
    return;
}

void sub_8939()
{
    return g_U966;
}

void sub_8985(unknown uParam0)
{
    return COMPARE_STRING( uParam0, ref g_U857._fU232._fU0 );
}

void sub_9364()
{
    return g_U857._fU0;
}

void sub_9671(unknown uParam0)
{
    char[16] cVar3;

    if (NOT g_U15946[uParam0]._fU132._fU0)
    {
        if (g_U91._fU0 == 1012)
        {
            g_U91._fU92 = 1;
        }
        g_U15946[uParam0]._fU132._fU0 = 1;
        StrCopy( ref cVar3, "CONT_", 16 );
        ConcatString(ref cVar3, ref g_U15946[uParam0]._fU132._fU8, 16);
        SET_PHONE_HUD_ITEM( 2, ref cVar3, -1 );
        g_U91._fU520 = 0;
    }
    return;
}

void sub_9894(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_9938( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_9938(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_10556()
{
    TRIGGER_MISSION_COMPLETE_AUDIO( 34 );
    UNLOCK_LAZLOW_STATION();
    l_U573 = 0;
    sub_10588();
    return;
}

void sub_10588()
{
    sub_10597();
    return;
}

void sub_10597()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_10615();
    sub_10674( iVar2, iVar3, iVar4 );
    return;
}

void sub_10615()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_10674(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 11;
    sub_10707( iVar5, uParam0, uParam1, uParam2, "Contact_12" );
    return;
}

void sub_10707(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_10803( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_10803( ref cVar9 );
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
            sub_10803( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_10803( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_10803( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_10803( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_11380( iParam0, iVar7 );;;
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
                sub_11777( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_11777( 0, 4 );
            }
        }
    }
    if (NOT (sub_11866( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_7475(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_7475() );
    }
    sub_1562();
    bVar27 = true;
    uVar28 = sub_11380( iParam0, iVar7 );
    uVar29 = sub_1019( iParam0 );
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
                sub_21242( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_21672();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_21757( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_21814( iParam0 );
                sub_21853( 0 );
                sub_1460( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_21961();
        }
    }
    if (bParam2)
    {
        sub_21672();
        sub_22049();
        sub_21853( 0 );
    }
    if (bParam3)
    {
        sub_21672();
        sub_22089();
        sub_21853( 0 );
        sub_1460( uVar29, 0 );
    }
    sub_906();
    return;
}

void sub_10803(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_11380(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_1418( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_11777(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_11866(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_12074( uParam1 );
        break;
        case 1:
        bVar8 = sub_14152( uParam1 );
        break;
        case 2:
        bVar8 = sub_14378( uParam1 );
        break;
        case 3:
        bVar8 = sub_14528( uParam1 );
        break;
        case 4:
        bVar8 = sub_14806( uParam1 );
        break;
        case 5:
        bVar8 = sub_15109( uParam1 );
        break;
        case 6:
        bVar8 = sub_15308( uParam1 );
        break;
        case 7:
        bVar8 = sub_15534( uParam1 );
        break;
        case 8:
        bVar8 = sub_15769( uParam1 );
        break;
        case 9:
        bVar8 = sub_16144( uParam1 );
        break;
        case 10:
        bVar8 = sub_16391( uParam1 );
        break;
        case 11:
        bVar8 = sub_16530( uParam1 );
        break;
        case 12:
        bVar8 = sub_16829( uParam1 );
        break;
        case 13:
        bVar8 = sub_17057( uParam1 );
        break;
        case 14:
        bVar8 = sub_17344( uParam1 );
        break;
        case 15:
        bVar8 = sub_17626( uParam1 );
        break;
        case 16:
        bVar8 = sub_17908( uParam1 );
        break;
        case 17:
        bVar8 = sub_18109( uParam1 );
        break;
        case 18:
        bVar8 = sub_18182( uParam1 );
        break;
        case 19:
        bVar8 = sub_18396( uParam1 );
        break;
        case 20:
        bVar8 = sub_18649( uParam1 );
        break;
        case 21:
        bVar8 = sub_18896( uParam1 );
        break;
        case 22:
        bVar8 = sub_19097( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_13757( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_11380( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_19420( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_12074(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12353( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_12353( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_12353( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_12353( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_12353( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_12353( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_12353( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_12353( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_12353( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_12353( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_12353( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_12353( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_12353( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_12353( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_12353( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_12353( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_12353( iVar3, 0, 3, 1, 0, 0 );
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
        sub_12353( iVar3, 0, sub_13635(), sub_13901(), 0, 0 );
        break;
        default:
        sub_14060( "Friend 1", 1 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14060( "Friend 1", 0 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_12353(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_12364( uParam1 );
    sub_12538( uParam0, 0, uParam2 );
    sub_12538( uParam0, 1, uParam3 );
    sub_12538( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_10615();
    return;
}

void sub_12364(unknown uParam0)
{
    ADD_SCORE( sub_7475(), uParam0 );
    sub_12389( uParam0 );
    return;
}

void sub_12389(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1418( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_12538(unknown uParam0, int iParam1, int iParam2)
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
        sub_12695( uParam0 );
    }
    return;
}

void sub_12695(unknown uParam0)
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

int sub_13635()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_13757( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_13757(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_13901()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_13757( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_14060(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_14152(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12353( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12353( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_12353( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_12353( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_14060( "Contact 2", 1 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14060( "Contact 2", 0 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14378(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_12353( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_14060( "Girl 3", 1 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14060( "Girl 3", 0 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14528(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12353( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_12353( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_12353( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_12353( iVar3, 0, sub_13635(), sub_13901(), 0, 0 );
        break;
        default:
        sub_14060( "Friend 4", 1 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14060( "Friend 4", 0 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14806(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12353( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12353( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_12353( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_12353( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_12353( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_12353( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_12353( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_14060( "Contact 5", 1 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14060( "Contact 5", 0 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15109(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12353( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12353( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_12353( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_14060( "Contact 7", 1 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14060( "Contact 7", 0 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15308(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12353( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12353( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_12353( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_12353( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_14060( "Contact 7b", 1 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14060( "Contact 7b", 0 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15534(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12353( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_12353( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_12353( iVar3, 0, sub_13635(), sub_13901(), 0, 0 );
        break;
        default:
        sub_14060( "Friend 8", 1 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14060( "Friend 8", 0 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15769(unknown uParam0)
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
        sub_12353( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_12353( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_12353( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_12353( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_12353( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_12353( iVar3, 0, sub_13635(), sub_13901(), 0, 0 );
        break;
        default:
        sub_14060( "Friend 9", 1 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14060( "Friend 9", 0 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16144(unknown uParam0)
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
        sub_12353( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12353( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_12353( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_12353( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_14060( "Contact 10", 1 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_14060( "Contact 10", 0 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16391(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12353( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_14060( "Girl 11", 1 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14060( "Girl 11", 0 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16530(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12353( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_12353( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_12353( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_12353( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_12353( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_12353( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_14060( "Contact 12", 1 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14060( "Contact 12", 0 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16829(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12353( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12353( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_12353( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_12353( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_14060( "Contact 13", 1 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14060( "Contact 13", 0 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17057(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12353( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_12353( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_12353( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_12353( iVar3, 0, sub_13635(), sub_13901(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_14060( "Friend 15", 1 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14060( "Friend 15", 0 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17344(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12353( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12353( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_12353( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_12353( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_12353( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_12353( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_14060( "Contact 16", 1 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14060( "Contact 16", 0 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17626(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12353( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12353( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_12353( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_12353( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_12353( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_14060( "Contact 18", 1 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14060( "Contact 18", 0 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17908(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12353( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12353( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_12353( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_14060( "Contact 19", 1 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14060( "Contact 19", 0 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_18109(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_14060( "Girl 20", 0 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_18182(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12353( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12353( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_12353( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_14060( "Contact 21", 1 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14060( "Contact 21", 0 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_18396(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12353( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_12353( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_12353( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_12353( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12353( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_14060( "Contact 22", 1 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14060( "Contact 22", 0 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_18649(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_12353( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_12353( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_12353( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_12353( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_14060( "Contact 24", 1 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14060( "Contact 24", 0 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_18896(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_12353( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_12353( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_12353( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_14060( "Contact 25", 1 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_14060( "Contact 25", 0 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_19097(unknown uParam0)
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
        sub_12353( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_14060( "Girl 26", 1 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_14060( "Girl 26", 0 );
        sub_12353( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_19420(int iParam0, int iParam1)
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
    if (sub_19468( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_20199( iParam1 );
    }
    return;
}

int sub_19468(int iParam0, int iParam1)
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
            sub_19608( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_19608(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_19790( 0 );
    return;
}

void sub_19790(boolean bParam0)
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
        sub_20045();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_20045()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_20199(int iParam0)
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
        sub_20532( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_20532( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_20532( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_20532( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_20532( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_20532( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_20532( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_20532( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_20532( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_20532( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_20532( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_20532( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_20532( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_20532( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_20532( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_20532( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_20532( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_20532( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_20532( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_20532(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_21242(unknown uParam0, unknown uParam1)
{
    sub_21261( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_21261(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_21672()
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

int sub_21757(int iParam0, int iParam1)
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

void sub_21814(unknown uParam0)
{
    sub_805();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_21853(unknown uParam0)
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

void sub_21961()
{
    sub_21970();
    return;
}

void sub_21970()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_22049()
{
    sub_21970();
    return;
}

void sub_22089()
{
    sub_21970();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_22209()
{
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_7475(), 150 );
        SAY_AMBIENT_SPEECH( l_U662, "MISSION_FAIL_RAGE", 1, 1, 0 );
    }
    if (l_U648 == 1)
    {
        sub_22296( ref l_U491 );
    }
    l_U573 = 0;
    sub_22403();
    return;
}

void sub_22296(int iParam0)
{
    int I;

    if (iParam0->_fU40 >= 0)
    {
        for ( I = iParam0->_fU40; I >= 0; I += -1 )
        {
            if (sub_7203( iParam0->_fU0, g_U968[I] ))
            {
                sub_6941( I );
                iParam0->_fU40 = -1;
            }
        }
    }
    return;
}

void sub_22403()
{
    sub_22412();
    return;
}

void sub_22412()
{
    int iVar2;

    iVar2 = 11;
    sub_22426( iVar2 );
    sub_1553( iVar2 );
    return;
}

void sub_22426(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_7475(), 150 );
    CLEAR_HELP();
    sub_377( uParam0 );
    return;
}
