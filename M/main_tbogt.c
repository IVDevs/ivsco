void main()
{
    int iVar2;
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U6 = 0;
    l_U7 = 1;
    l_U8 = 3;
    l_U10 = 0;
    l_U11 = -1;
    l_U12 = 0;
    l_U13 = 0;
    l_U18 = 1;
    l_U19 = 0;
    l_U197 = 0;
    l_U204 = 0;
    l_U205 = 0;
    l_U206 = 0;
    l_U207 = 0;
    l_U208 = 0;
    l_U209 = 0;
    l_U210 = 0;
    l_U211 = 0;
    l_U212 = 1;
    l_U278 = 6;
    l_U316 = nil;
    l_U329 = nil;
    l_U347 = 1;
    l_U382 = nil;
    l_U402 = 1;
    l_U478 = 6;
    l_U487 = "BOGT_BoxDrop";
    l_U488 = "BOGT_Box_TickDrop";
    l_U553 = 0.63600000;
    l_U554 = 0.37600000;
    l_U603 = 0.05200000;
    l_U604 = 0.35300000;
    l_U605 = 0.30000000;
    l_U606 = 0.37200000;
    l_U607 = 0.37300000;
    l_U608 = 0.38700000;
    l_U609 = 0.44400000;
    l_U610 = 0.03750000;
    l_U611 = 0.36900000;
    l_U612 = 0.62350000;
    l_U613 = 0.60800000;
    l_U614 = {0.24300000, 0.46700000, 0.00000000};
    l_U617 = {0.23100000, 0.43500000, 0.00000000};
    l_U620 = {0.23100000, 0.43500000, 0.00000000};
    l_U623 = {0.31920000, 0.65250000, 0.00000000};
    l_U626 = {0.31920000, 0.65250000, 0.00000000};
    l_U629 = {0.24300000, 0.46700000, 0.00000000};
    l_U632 = {0.50000000, 1.10000000, 0.00000000};
    l_U635 = {0.31920000, 0.65250000, 0.00000000};
    l_U638 = {0.18225000, 0.35025000, 0.00000000};
    l_U641 = 0.30000000;
    l_U642 = 0.37000000;
    l_U643 = 0.56200000;
    l_U644 = 0.40100000;
    l_U645 = 0.30000000;
    l_U646 = 0.37000000;
    l_U647 = 0.69700000;
    l_U648 = 0.40100000;
    l_U649 = 0.30000000;
    l_U650 = 0.37000000;
    l_U651 = 0.66500000;
    l_U652 = 0.40100000;
    l_U653 = 0.32500000;
    l_U654 = 0.62500000;
    l_U655 = 0.00800000;
    l_U656 = 0.49700000;
    l_U657 = 0.52500000;
    l_U658 = 0.49700000;
    l_U659 = 0.51800000;
    l_U660 = 1;
    l_U661 = 0;
    l_U662 = {0.50000000, 0.50000000, 0};
    l_U665 = 0.20000000;
    l_U666 = 0.20000000;
    l_U710 = 0;
    l_U711 = 0;
    l_U723 = 0;
    l_U727 = 0;
    l_U746 = 0;
    l_U758 = 0;
    l_U759 = 0;
    l_U760 = 0;
    l_U761 = 0;
    l_U762 = 0;
    l_U763 = 0;
    l_U764 = 0;
    l_U765 = 0;
    l_U766 = 0;
    l_U938 = 0;
    l_U939 = 0;
    l_U940 = 0;
    l_U941 = 0;
    l_U942 = 1;
    PRINTSTRING( "--------------------------------------------\n" );
    PRINTSTRING( "CHOOSING PLAY MODE: " );
    PRINTSTRING( "RELEASE MODE" );
    PRINTNL();
    PRINTSTRING( "--------------------------------------------\n" );
    THIS_SCRIPT_SHOULD_BE_SAVED();
    THIS_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
    SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT( 1 );
    sub_1080( 1 );
    sub_24587();
    sub_25819();
    sub_26574();
    sub_27933();
    sub_31476();
    sub_32377();
    sub_33153();
    g_U2674 = 0;
    g_U2680 = 1;
    g_U25 = 0;
    g_U42891 = 1;
    g_U9200 = 0;
    g_U9199 = 0;
    SET_NO_RESPRAYS( 0 );
    g_U10568 = 1;
    ProtectedSet(g_U10980, 6);
    SET_MAX_WANTED_LEVEL( ProtectedGet(g_U10980) );
    iVar2 = 0;
    sub_19601();
    sub_36003();
    iVar3 = -1;
    sub_37874( iVar3 );
    WAIT( 10 );
    if (IS_CHAR_DEAD( sub_16171() ))
    {
        WAIT( 0 );
        PRINTSTRING( "main: setup delayed because inexplicably the player is dead\n" );
    }
    SET_CHAR_COMPONENT_VARIATION( sub_16171(), 8, 1, 0 );
    WAIT( 0 );
    SET_DRAW_PLAYER_COMPONENT( 8, 0 );
    if (NOT (IS_CHAR_DEAD( sub_16171() )))
    {
        sub_38232();
    }
    GET_GAME_TIMER( ref l_U938 );
    GET_GAME_TIMER( ref l_U939 );
    bVar4 = false;
    bVar4 = true;
    if (NOT bVar4)
    {
        sub_39591();
    }
    REQUEST_SCRIPT( "initial" );
    while (NOT (HAS_SCRIPT_LOADED( "initial" )))
    {
        WAIT( 0 );
    }
    uVar5 = START_NEW_SCRIPT( "initial", 1024 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "initial" );
    WAIT( 0 );
    sub_39768( 1 );
    while (IS_THREAD_ACTIVE( uVar5 ))
    {
        WAIT( 0 );
    }
    if (bVar4)
    {
        sub_40507();
    }
    while (NOT sub_40556())
    {
        WAIT( 0 );
    }
    FORCE_LOADING_SCREEN( 0 );
    UNLOCK_LAZLOW_STATION();
    g_U0 = 0;
    while (true)
    {
        WAIT( 0 );
        GET_GAME_TIMER( ref l_U197 );
        sub_40826();
        sub_60650();
        sub_167920();
        sub_181407();
        sub_181738();
        sub_182022();
        sub_182415();
        sub_183814();
        sub_185112();
        sub_185212();
        sub_187178();
        sub_187458();
        sub_187517();
        if (l_U197 > l_U939)
        {
            l_U939 = l_U197 + 5000;
            sub_187961();
        }
        if (l_U207 == 0)
        {
            sub_188202();
            sub_188257();
            sub_188401();
            sub_191220();
            sub_191362();
            sub_191543();
        }
        sub_191720();
        sub_215800();
        if (g_U11)
        {
            g_U11 = 0;
            sub_223052();
        }
        if (g_U14)
        {
            g_U14 = 0;
            sub_223320();
        }
        sub_223442();
        if (g_U15811[26])
        {
            if (NOT g_U12379)
            {
                DONT_SUPPRESS_CAR_MODEL( -1696146015 );
                DONT_SUPPRESS_CAR_MODEL( -591610296 );
            }
        }
        else
        {
            SUPPRESS_CAR_MODEL( -1696146015 );
            SUPPRESS_CAR_MODEL( -591610296 );
        }
        if (g_U15811[27])
        {
            if (NOT g_U12379)
            {
                DONT_SUPPRESS_CAR_MODEL( 1123216662 );
            }
        }
        else
        {
            SUPPRESS_CAR_MODEL( 1123216662 );
        }
        sub_223871();
    }
    return;
}

void sub_1080(unknown uParam0)
{
    PRINTSTRING( "********************************** FLOW RESET **********************************\n" );
    sub_1182( uParam0 );
    sub_7773( uParam0 );
    sub_8391();
    sub_8524();
    sub_8541();
    sub_8605();
    sub_8634();
    sub_8659();
    sub_8684();
    sub_15941();
    sub_16162();
    sub_16227();
    sub_16297();
    sub_16732();
    sub_16821( uParam0 );
    sub_16905();
    sub_17003();
    sub_17024();
    sub_19111();
    sub_19170();
    sub_19225();
    sub_19280();
    sub_19526();
    sub_19547();
    sub_19572();
    sub_19601();
    sub_24324();
    g_U43131 = 0;
    return;
}

void sub_1182(unknown uParam0)
{
    sub_1193( uParam0 );
    return;
}

void sub_1193(unknown uParam0)
{
    sub_1202();
    sub_2572( uParam0 );
    sub_3540();
    sub_3621();
    sub_3676();
    sub_3733();
    sub_3792();
    sub_3849();
    sub_3956();
    sub_4177();
    sub_4269();
    sub_6110();
    sub_6221();
    sub_6288();
    sub_6321();
    sub_6536();
    sub_6988();
    sub_7075();
    sub_7256();
    sub_7317();
    sub_7376();
    sub_7435();
    sub_7494();
    sub_7561();
    sub_7597();
    sub_7644();
    g_U30381 = -1;
    g_U12381 = 0;
    g_U22955 = 0;
    g_U12380 = 0;
    g_U12379 = 0;
    StrCopy( ref g_U10966, "", 16 );
    g_U10979 = 1;
    g_U10983 = 1;
    return;
}

void sub_1202()
{
    int I;

    I = 0;
    for ( I = 0; I < 11; I++ )
    {
        sub_1228( I );
    }
    return;
}

void sub_1228(unknown uParam0)
{
    g_U12382[uParam0]._fU0 = 0;
    g_U12382[uParam0]._fU4 = 0;
    g_U12382[uParam0]._fU8 = 0;
    g_U12382[uParam0]._fU12 = 0;
    g_U12382[uParam0]._fU16 = -1;
    g_U12382[uParam0]._fU20 = -1;
    g_U12382[uParam0]._fU24 = -1;
    g_U12382[uParam0]._fU28 = 0;
    g_U12382[uParam0]._fU32 = 0;
    g_U12382[uParam0]._fU36 = 0;
    g_U12382[uParam0]._fU40 = 0;
    g_U12382[uParam0]._fU144 = 0;
    StrCopy( ref g_U12382[uParam0]._fU80, "MF14AUD", 16 );
    StrCopy( ref g_U12382[uParam0]._fU96, "PLACEHOLDER", 16 );
    g_U12382[uParam0]._fU112 = 0;
    g_U12382[uParam0]._fU116 = 0;
    g_U12382[uParam0]._fU120 = 0;
    g_U12382[uParam0]._fU124 = 0;
    sub_1547( ref g_U12382[uParam0]._fU128 );
    sub_1598( uParam0 );
    sub_1744( uParam0 );
    sub_1895( uParam0 );
    return;
}

void sub_1547(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_1598(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;

    iVar3 = 3;
    I = 0;
    for ( I = 0; I < iVar3; I++ )
    {
        g_U12382[uParam0]._fU44[I] = 50;
        g_U12382[uParam0]._fU60[I] = -1;
    }
    iVar5 = 5;
    for ( I = 0; I < iVar5; I++ )
    {
        ProtectedSet(g_U22949[I], 50);
    }
    g_U12382[uParam0]._fU76 = 1;
    return;
}

void sub_1744(unknown uParam0)
{
    g_U12382[uParam0]._fU872._fU0 = 0;
    g_U12382[uParam0]._fU872._fU4 = 0;
    sub_1547( ref g_U12382[uParam0]._fU872._fU8 );
    g_U12382[uParam0]._fU872._fU24 = 0;
    g_U12382[uParam0]._fU872._fU28 = {0.00000000, 0.00000000, 0.00000000};
    g_U12382[uParam0]._fU872._fU40 = 0.00000000;
    return;
}

void sub_1895(unknown uParam0)
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        sub_1923( uParam0, I );
    }
    return;
}

void sub_1923(unknown uParam0, unknown uParam1)
{
    g_U12382[uParam0]._fU148[uParam1]._fU0 = 0;
    g_U12382[uParam0]._fU148[uParam1]._fU4 = 0;
    g_U12382[uParam0]._fU148[uParam1]._fU8 = 0;
    g_U12382[uParam0]._fU148[uParam1]._fU12 = 0;
    g_U12382[uParam0]._fU148[uParam1]._fU16 = 0;
    g_U12382[uParam0]._fU148[uParam1]._fU20 = 0;
    g_U12382[uParam0]._fU148[uParam1]._fU36 = 0;
    g_U12382[uParam0]._fU148[uParam1]._fU32 = 0;
    g_U12382[uParam0]._fU148[uParam1]._fU40 = 0;
    g_U12382[uParam0]._fU148[uParam1]._fU44 = 0;
    g_U12382[uParam0]._fU148[uParam1]._fU48 = 0;
    StrCopy( ref g_U12382[uParam0]._fU148[uParam1]._fU52, "", 32 );
    g_U12382[uParam0]._fU148[uParam1]._fU128 = 0;
    g_U12382[uParam0]._fU148[uParam1]._fU132 = -1;
    g_U12382[uParam0]._fU148[uParam1]._fU136 = -1;
    g_U12382[uParam0]._fU148[uParam1]._fU140 = -1;
    sub_2343( uParam0, uParam1 );
    return;
}

void sub_2343(unknown uParam0, unknown uParam1)
{
    g_U12382[uParam0]._fU148[uParam1]._fU24 = 0;
    g_U12382[uParam0]._fU148[uParam1]._fU28 = 0;
    g_U12382[uParam0]._fU148[uParam1]._fU84 = 0;
    g_U12382[uParam0]._fU148[uParam1]._fU88 = 0;
    g_U12382[uParam0]._fU148[uParam1]._fU92 = nil;
    StrCopy( ref g_U12382[uParam0]._fU148[uParam1]._fU96, "", 32 );
    return;
}

void sub_2572(unknown uParam0)
{
    int I;

    I = 0;
    for ( I = 0; I < 11; I++ )
    {
        sub_2600( I, uParam0 );
        sub_2842( I, uParam0 );
        sub_3104( I );
        sub_3492( I );
    }
    return;
}

void sub_2600(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U14925[uParam0]._fU0._fU64 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref g_U14925[uParam0]._fU0._fU64 );
        }
    }
    g_U14925[uParam0]._fU0._fU0 = 0;
    g_U14925[uParam0]._fU0._fU4 = -1;
    StrCopy( ref g_U14925[uParam0]._fU0._fU24, "", 32 );
    g_U14925[uParam0]._fU0._fU56 = 10;
    g_U14925[uParam0]._fU0._fU60 = nil;
    g_U14925[uParam0]._fU0._fU64 = nil;
    g_U14925[uParam0]._fU0._fU68 = 15;
    g_U14925[uParam0]._fU0._fU72 = 1;
    g_U14925[uParam0]._fU0._fU76 = 0;
    return;
}

void sub_2842(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U14925[uParam0]._fU80._fU64 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref g_U14925[uParam0]._fU80._fU64 );
        }
    }
    g_U14925[uParam0]._fU80._fU0 = 0;
    g_U14925[uParam0]._fU80._fU4 = -1;
    StrCopy( ref g_U14925[uParam0]._fU80._fU24, "", 32 );
    g_U14925[uParam0]._fU80._fU56 = 10;
    g_U14925[uParam0]._fU80._fU60 = nil;
    g_U14925[uParam0]._fU80._fU64 = nil;
    g_U14925[uParam0]._fU80._fU68 = 15;
    g_U14925[uParam0]._fU80._fU72 = 1;
    g_U14925[uParam0]._fU80._fU76 = 0;
    return;
}

void sub_3104(unknown uParam0)
{
    g_U14925[uParam0]._fU160._fU0 = 0;
    g_U14925[uParam0]._fU160._fU4 = 0;
    g_U14925[uParam0]._fU160._fU8 = 0;
    StrCopy( ref g_U14925[uParam0]._fU160._fU12, "", 32 );
    StrCopy( ref g_U14925[uParam0]._fU160._fU44, "", 32 );
    g_U14925[uParam0]._fU160._fU76 = -1;
    g_U14925[uParam0]._fU160._fU80 = 0;
    g_U14925[uParam0]._fU160._fU84 = 0;
    g_U14925[uParam0]._fU160._fU88 = 0;
    g_U14925[uParam0]._fU160._fU92 = 0;
    g_U14925[uParam0]._fU160._fU96 = 0;
    g_U14925[uParam0]._fU160._fU100 = 0;
    g_U14925[uParam0]._fU160._fU104 = nil;
    g_U14925[uParam0]._fU160._fU108._fU0 = 0;
    g_U14925[uParam0]._fU160._fU108._fU4 = 10;
    g_U14925[uParam0]._fU160._fU108._fU12 = 0;
    g_U14925[uParam0]._fU160._fU108._fU16 = 0;
    g_U14925[uParam0]._fU160._fU108._fU20 = 0;
    return;
}

void sub_3492(unknown uParam0)
{
    g_U14902[uParam0]._fU4 = 0;
    return;
}

void sub_3540()
{
    int I;

    I = 0;
    for ( I = 0; I < g_U28561; I++ )
    {
        g_U22960[I]._fU100 = 0;
        CLEAR_BIT( ref g_U22960[I]._fU108, 3 );
    }
    return;
}

void sub_3621()
{
    int I;

    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        g_U28780[I]._fU4 = 0;
    }
    return;
}

void sub_3676()
{
    int iVar2;
    int I;

    iVar2 = 14;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        g_U15796[I] = 0;
    }
    return;
}

void sub_3733()
{
    int iVar2;
    int I;

    iVar2 = 73;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        g_U15811[I] = 0;
    }
    return;
}

void sub_3792()
{
    int iVar2;
    int I;

    iVar2 = 2;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        g_U15885[I] = 0;
    }
    return;
}

void sub_3849()
{
    int iVar2;
    int I;

    iVar2 = 14;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        g_U15904[I]._fU0 = 0;
        g_U15904[I]._fU4 = 0;
        g_U15904[I]._fU8 = 0;
        g_U15904[I]._fU12 = 0;
        g_U15904[I]._fU16 = 0;
    }
    return;
}

void sub_3956()
{
    int I;

    g_U42731._fU0 = 0;
    g_U42731._fU4 = 0;
    g_U42731._fU8 = 0;
    I = 0;
    for ( I = 0; I < 10; I++ )
    {
        g_U42731._fU12[I]._fU0 = 0;
        g_U42731._fU12[I]._fU4 = 0;
        g_U42731._fU12[I]._fU8 = 0;
        g_U42731._fU12[I]._fU12 = 37;
        g_U42731._fU12[I]._fU16 = 0;
        g_U42731._fU12[I]._fU20 = -1;
        g_U42731._fU12[I]._fU24 = 0;
        g_U42731._fU12[I]._fU28 = 5;
        g_U42731._fU12[I]._fU32 = -1;
    }
    return;
}

void sub_4177()
{
    g_U16004._fU0 = 0;
    g_U16004._fU4 = 0;
    g_U16004._fU8 = 0;
    g_U16004._fU12 = 0;
    g_U16004._fU16 = 0;
    g_U16004._fU20 = 0;
    g_U16004._fU24 = -1;
    g_U16004._fU32 = nil;
    g_U16004._fU28 = 0;
    return;
}

void sub_4269()
{
    int iVar2;
    int I;
    int iVar4;

    iVar2 = 8;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        iVar4 = I;
        sub_4303( iVar4 );
    }
    g_U22731 = 0;
    return;
}

void sub_4303(unknown uParam0)
{
    int iVar3;
    int I;

    g_U20825[uParam0]._fU0 = 0;
    g_U20825[uParam0]._fU4 = 0;
    g_U20825[uParam0]._fU8 = 0;
    g_U20825[uParam0]._fU12 = 0;
    g_U20825[uParam0]._fU16 = 0;
    g_U20825[uParam0]._fU20 = 0;
    g_U20825[uParam0]._fU24 = 0;
    g_U20825[uParam0]._fU28 = 0;
    g_U20825[uParam0]._fU64 = 0;
    g_U20825[uParam0]._fU68 = 0;
    g_U20825[uParam0]._fU72 = 0;
    g_U20825[uParam0]._fU76 = 0;
    g_U20825[uParam0]._fU80 = 0;
    g_U20825[uParam0]._fU84 = 0;
    g_U20825[uParam0]._fU88 = 0;
    g_U20825[uParam0]._fU92 = 0;
    g_U20825[uParam0]._fU96 = 0;
    g_U20825[uParam0]._fU100 = -1;
    g_U20825[uParam0]._fU112 = -1;
    g_U20825[uParam0]._fU116 = -1;
    g_U20825[uParam0]._fU120 = -1;
    g_U20825[uParam0]._fU104 = 0;
    g_U20825[uParam0]._fU108 = 0;
    g_U20825[uParam0]._fU124 = -1;
    g_U20825[uParam0]._fU128 = -1;
    g_U20825[uParam0]._fU132 = -1;
    g_U20825[uParam0]._fU136 = 0;
    g_U20825[uParam0]._fU140 = 0;
    g_U20825[uParam0]._fU144 = 24;
    g_U20825[uParam0]._fU148 = 24;
    g_U20825[uParam0]._fU152 = 0;
    g_U20825[uParam0]._fU156 = 0;
    g_U20825[uParam0]._fU160 = 0;
    g_U20825[uParam0]._fU164 = 0;
    g_U20825[uParam0]._fU168 = 0;
    g_U20825[uParam0]._fU172 = 0;
    g_U20825[uParam0]._fU176 = 0;
    g_U20825[uParam0]._fU180 = 8;
    g_U20825[uParam0]._fU184 = 5;
    sub_1547( ref g_U20825[uParam0]._fU32 );
    sub_1547( ref g_U20825[uParam0]._fU48 );
    iVar3 = 24;
    I = 0;
    for ( I = 0; I < iVar3; I++ )
    {
        g_U20825[uParam0]._fU208[I]._fU0 = -1;
    }
    sub_5012( uParam0 );
    sub_5634( uParam0 );
    g_U20825[uParam0]._fU188._fU0._fU0 = -1;
    g_U20825[uParam0]._fU188._fU0._fU4 = -1;
    g_U20825[uParam0]._fU188._fU8._fU0 = -1;
    g_U20825[uParam0]._fU188._fU8._fU4 = -1;
    g_U20825[uParam0]._fU188._fU16 = 0;
    for ( I = 0; I < 2; I++ )
    {
        g_U20825[uParam0]._fU900._fU0[I] = 0;
        g_U20825[uParam0]._fU900._fU12[I] = 0;
    }
    g_U20825[uParam0]._fU900._fU24 = 0;
    g_U20825[uParam0]._fU900._fU28 = 0;
    g_U20825[uParam0]._fU900._fU32 = 0;
    g_U20825[uParam0]._fU900._fU36 = 0;
    g_U20825[uParam0]._fU900._fU40 = -1;
    g_U20825[uParam0]._fU900._fU44 = -1;
    return;
}

void sub_5012(unknown uParam0)
{
    g_U20825[uParam0]._fU712._fU0 = 0;
    g_U20825[uParam0]._fU712._fU28 = 8;
    g_U20825[uParam0]._fU712._fU32 = 6;
    StrCopy( ref g_U20825[uParam0]._fU712._fU36, "", 16 );
    StrCopy( ref g_U20825[uParam0]._fU712._fU68, "", 16 );
    StrCopy( ref g_U20825[uParam0]._fU712._fU36, "", 16 );
    StrCopy( ref g_U20825[uParam0]._fU712._fU84, "", 16 );
    StrCopy( ref g_U20825[uParam0]._fU712._fU100, "", 16 );
    StrCopy( ref g_U20825[uParam0]._fU712._fU116, "", 16 );
    g_U20825[uParam0]._fU712._fU132 = 0;
    g_U20825[uParam0]._fU712._fU136 = -1;
    g_U20825[uParam0]._fU712._fU140 = -1;
    g_U20825[uParam0]._fU712._fU144 = -1;
    g_U20825[uParam0]._fU712._fU148 = -1;
    g_U20825[uParam0]._fU712._fU152 = -1;
    g_U20825[uParam0]._fU712._fU156 = -1;
    g_U20825[uParam0]._fU712._fU160 = 0;
    g_U20825[uParam0]._fU712._fU164 = 0;
    sub_5397( uParam0 );
    return;
}

void sub_5397(unknown uParam0)
{
    g_U20825[uParam0]._fU712._fU4 = 0;
    g_U20825[uParam0]._fU712._fU8 = 0;
    g_U20825[uParam0]._fU712._fU12 = 0;
    g_U20825[uParam0]._fU712._fU16 = 0;
    g_U20825[uParam0]._fU712._fU20 = 0;
    g_U20825[uParam0]._fU712._fU24 = 0;
    g_U20825[uParam0]._fU712._fU168 = 0;
    g_U20825[uParam0]._fU712._fU172 = 0;
    g_U20825[uParam0]._fU712._fU176 = 1;
    g_U20825[uParam0]._fU712._fU180 = nil;
    g_U20825[uParam0]._fU712._fU184 = nil;
    return;
}

void sub_5634(unknown uParam0)
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        g_U20825[uParam0]._fU308[I]._fU0 = 0;
        StrCopy( ref g_U20825[uParam0]._fU308[I]._fU4, "", 32 );
        g_U20825[uParam0]._fU308[I]._fU36 = 0;
        g_U20825[uParam0]._fU308[I]._fU40 = 0;
        g_U20825[uParam0]._fU308[I]._fU44 = 0;
    }
    return;
}

void sub_6110()
{
    int I;

    for ( I = 0; I < 1; I++ )
    {
        g_U10984[I]._fU0 = 0;
        if (DOES_BLIP_EXIST( g_U10984[I]._fU32 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref g_U10984[I]._fU32 );
            g_U10984[I]._fU32 = nil;
        }
    }
    return;
}

void sub_6221()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 37;
    for ( I = 0; I < iVar3; I++ )
    {
        g_U16014[I]._fU244._fU4 = 1;
    }
    return;
}

void sub_6288()
{
    g_U28805._fU0 = 1;
    g_U28805._fU4 = 1;
    return;
}

void sub_6321()
{
    int I;

    I = 0;
    for ( I = 0; I < 2; I++ )
    {
        g_U28807._fU0[I] = 34;
        g_U28807._fU12[I] = nil;
    }
    g_U28807._fU24 = 16;
    g_U28807._fU28 = 16;
    g_U28807._fU32 = 16;
    g_U28807._fU36 = 8;
    g_U28807._fU40 = 8;
    g_U28807._fU44 = 34;
    g_U28807._fU48 = 0;
    g_U28807._fU52 = 0;
    g_U28807._fU56 = 0;
    g_U28807._fU124 = 0;
    g_U28807._fU128 = 0;
    for ( I = 0; I < 15; I++ )
    {
        g_U28807._fU60[I] = 0;
    }
    return;
}

void sub_6536()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        g_U30257[I]._fU0 = 1;
        g_U30257[I]._fU4 = 0;
        g_U30257[I]._fU28 = 0;
        g_U30257[I]._fU32 = 1;
        sub_1547( ref g_U30257[I]._fU8 );
        g_U30257[I]._fU24 = 0;
        sub_6639( I );
    }
    sub_6871();
    sub_6943();
    return;
}

void sub_6639(unknown uParam0)
{
    g_U30257[uParam0]._fU36 = 0;
    g_U30257[uParam0]._fU40 = {0.00000000, 0.00000000, 0.00000000};
    g_U30257[uParam0]._fU52 = 1;
    StrCopy( ref g_U30257[uParam0]._fU60, "", 16 );
    sub_6724( uParam0 );
    return;
}

void sub_6724(unknown uParam0)
{
    sub_6735( uParam0 );
    sub_6813( uParam0 );
    return;
}

void sub_6735(unknown uParam0)
{
    if (DOES_BLIP_EXIST( g_U30257[uParam0]._fU56 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref g_U30257[uParam0]._fU56 );
    }
    g_U30257[uParam0]._fU56 = nil;
    return;
}

void sub_6813(unknown uParam0)
{
    g_U30257[uParam0]._fU76 = 0;
    return;
}

void sub_6871()
{
    if (g_U0)
    {
        g_U30318._fU0 = 0;
    }
    else
    {
        g_U30318._fU0 = 1;
    }
    g_U30318._fU4 = 0;
    g_U30318._fU8 = 34;
    g_U30318._fU12 = 0;
    return;
}

void sub_6943()
{
    g_U30318._fU16._fU0 = 3;
    g_U30318._fU16._fU4 = 0;
    return;
}

void sub_6988()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        g_U28734[I]._fU0 = 37;
        StrCopy( ref g_U28734[I]._fU20, "", 16 );
        StrCopy( ref g_U28734[I]._fU4, "", 16 );
    }
    return;
}

void sub_7075()
{
    int iVar2;
    int J;
    int I;

    iVar2 = 2;
    J = 0;
    I = 0;
    for ( J = 0; J < 1; J++ )
    {
        for ( I = 0; I < 24; I++ )
        {
            g_U30326._fU0[J]._fU0[I] = 0;
        }
        g_U30326._fU0[J]._fU100 = 0;
        g_U30326._fU0[J]._fU104 = iVar2;
    }
    for ( I = 0; I < 24; I++ )
    {
        g_U30326._fU112[I] = 0;
    }
    g_U30326._fU212 = 0;
    g_U30326._fU216 = iVar2;
    return;
}

void sub_7256()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 37;
    for ( I = 0; I < iVar3; I++ )
    {
        g_U42825[I] = 0;
    }
    return;
}

void sub_7317()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 37;
    for ( I = 0; I < iVar3; I++ )
    {
        g_U22807[I] = 0;
    }
    return;
}

void sub_7376()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 37;
    for ( I = 0; I < iVar3; I++ )
    {
        g_U22845[I] = 0;
    }
    return;
}

void sub_7435()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 37;
    for ( I = 0; I < iVar3; I++ )
    {
        g_U22883[I] = 0;
    }
    return;
}

void sub_7494()
{
    int I;

    I = 0;
    for ( I = 0; I < 11; I++ )
    {
        g_U15976[I]._fU0 = 5;
        g_U15976[I]._fU4 = 0;
    }
    return;
}

void sub_7561()
{
    StrCopy( ref g_U15999._fU0, "", 16 );
    g_U15999._fU16 = 0;
    return;
}

void sub_7597()
{
    g_U10751._fU0 = 0;
    g_U10751._fU4 = 0;
    g_U10751._fU8 = 0;
    g_U10754 = 0;
    return;
}

void sub_7644()
{
    g_U42871._fU0 = 37;
    g_U42871._fU4 = nil;
    g_U42871._fU8 = 11;
    g_U42871._fU12 = 0;
    return;
}

void sub_7773(boolean bParam0)
{
    int I;

    if (bParam0)
    {
        g_U560 = 9;
    }
    if (NOT sub_7795())
    {
        sub_7889( g_U95._fU60 );
        while (NOT sub_7795())
        {
            WAIT( 0 );
        }
    }
    g_U95._fU40 = 0;
    I = 0;
    for ( I = 0; I < 37; I++ )
    {
        g_U16014[I]._fU212._fU0 = 0;
        g_U16014[I]._fU8[0]._fU0[5] = 0;
    }
    for ( I = 0; I < (g_U575 - 1); I++ )
    {
        sub_8194( I );
    }
    for ( I = 0; I <= 6; I++ )
    {
        g_U469[I]._fU0 = 0;
        g_U469[I]._fU4 = 0;
    }
    g_U22947 = 1;
    g_U22948 = 11;
    sub_8326();
    g_U20 = 0;
    return;
}

void sub_7795()
{
    return sub_7806( 1, 1 );
}

int sub_7806(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U95._fU104 = 1;
    }
    if ((uParam1) AND (g_U560 != 9))
    {
        g_U95._fU100 = 1;
    }
    return 1;
}

void sub_7889(int iParam0)
{
    if (g_U95._fU60 == iParam0)
    {
        switch (g_U16014[g_U95._fU60]._fU212._fU24)
        {
            case 6:
            case 7:
            case 8: break;
            default:
            g_U16014[g_U95._fU60]._fU212._fU24 = 6;
            if (IS_MOBILE_PHONE_CALL_ONGOING())
            {
                ABORT_SCRIPTED_CONVERSATION( 0 );
            }
            if ((g_U95._fU0 != 1000) AND (g_U95._fU0 != 1001))
            {
                g_U95._fU0 = 1010;
            }
            break;
        }
    }
    return;
}

void sub_8194(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

void sub_8326()
{
    int I;

    I = 0;
    for ( I = 0; I < 2; I++ )
    {
        g_U12376[I] = 0;
    }
    return;
}

void sub_8391()
{
    int iVar2;
    int iVar3;

    iVar2 = sub_8400();
    iVar3 = iVar2 * -1;
    sub_8485( iVar3 );
    return;
}

void sub_8400()
{
    unknown Result;

    if (IS_PLAYER_PLAYING( sub_8409() ))
    {
        STORE_SCORE( sub_8409(), ref Result );
    }
    return Result;
}

void sub_8409()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_8485(unknown uParam0)
{
    ADD_SCORE( sub_8409(), uParam0 );
    return;
}

void sub_8524()
{
    return;
}

void sub_8541()
{
    ProtectedSet(g_U10980, 6);
    SET_MAX_WANTED_LEVEL( ProtectedGet(g_U10980) );
    if (IS_PLAYER_PLAYING( sub_8409() ))
    {
        CLEAR_WANTED_LEVEL( sub_8409() );
    }
    return;
}

void sub_8605()
{
    g_U2674 = 1;
    g_U2680 = 0;
    return;
}

void sub_8634()
{
    g_U42891 = 0;
    return;
}

void sub_8659()
{
    SET_NO_RESPRAYS( 1 );
    return;
}

void sub_8684()
{
    sub_8693();
    return;
}

void sub_8693()
{
    int I;

    sub_8702();
    sub_8811( 0, "PD_CADDY", "PD_MAXWELL", "PDB_ADDR_0", 569.57800000, 1501.85500000, 14.70980000, "PDB_ADDR_0", 569.57800000, 1501.85500000, 14.70980000, 2000, 24, 12 );
    sub_10170( 0, 1 );
    sub_8811( 1, "PD_CAUGHLIN", "PD_MAXWELL", "PDB_ADDR_0", 569.57800000, 1501.85500000, 14.70980000, "PDB_ADDR_0", 569.57800000, 1501.85500000, 14.70980000, 1400, 24, 12 );
    sub_8811( 2, "PD_PECINOVSKY", "PD_PRESTON", "PDB_ADDR_1", 1244.72900000, 1721.92300000, 16.64360000, "PDB_ADDR_1", 1244.72900000, 1721.92300000, 16.64360000, 800, 25, 10 );
    sub_8811( 3, "PD_RIVETTE", "PD_ANTONIO", "PDB_ADDR_2", 1309.43000000, -36.46970000, 27.24210000, "PDB_ADDR_2", 1309.43000000, -36.46970000, 27.24210000, 1300, 3, 14 );
    sub_8811( 4, "PD_TISDEL", "PD_FERNANDO", "PDB_ADDR_3", 1062.73200000, -549.96990000, 12.74630000, "PDB_ADDR_3", 1062.73200000, -549.96990000, 12.74630000, 1100, 51, 10 );
    sub_8811( 5, "PD_REKER", "PD_BERT", "PDB_ADDR_4", 1046.02200000, 501.62800000, 19.35550000, "PDB_ADDR_4", 1046.02200000, 501.62800000, 19.35550000, 400, 19, 6 );
    sub_8811( 6, "PD_GUZOWSKI", "PD_SCOTT", "PDB_ADDR_5", 926.51080000, 789.80470000, 13.48640000, "PDB_ADDR_5", 926.51080000, 789.80470000, 13.48640000, 1400, 32, 5 );
    sub_8811( 7, "PD_PAPARO", "PD_FREDDY", "PDB_ADDR_6", 1268.08200000, 1016.14800000, 12.39090000, "PDB_ADDR_6", 1268.08200000, 1016.14800000, 12.39090000, 300, 30, 3 );
    sub_8811( 8, "PD_STAVNES", "PD_RODRIGO", "PDB_ADDR_7", 1145.60500000, 842.30940000, 36.10790000, "PDB_ADDR_7", 1145.60500000, 842.30940000, 36.10790000, 1300, 44, 9 );
    sub_8811( 9, "PD_PICKREL", "PD_TYLER", "PDB_ADDR_8", 1455.84500000, 591.74300000, 28.21270000, "PDB_ADDR_8", 1455.84500000, 591.74300000, 28.21270000, 1100, 29, 18 );
    sub_8811( 10, "PD_GORALSKI", "PD_ALONSO", "PDB_ADDR_9", 2257.59400000, 172.61450000, 4.80810000, "PDB_ADDR_9", 2257.59400000, 172.61450000, 4.80810000, 600, 20, 2 );
    for ( I = 1; I <= 10; I++ )
    {
        sub_11164( I, 0 );
        sub_11289( I );
    }
    sub_8811( 11, "PD_KIKUCHI", "PD_SHON", "PDB_ADDR_10", -404.37920000, 1240.06200000, 21.98130000, "PDB_ADDR_10", -404.37920000, 1240.06200000, 21.98130000, 1400, 35, 12 );
    sub_8811( 12, "PD_FRIDDELL", "PD_LINO", "PDB_ADDR_11", -31.27570000, 772.40750000, 14.71810000, "PDB_ADDR_11", -31.27570000, 772.40750000, 14.71810000, 900, 39, 3 );
    sub_8811( 13, "PD_COVEY", "PD_DARREN", "PDB_ADDR_12", -578.02840000, 472.76290000, 12.78790000, "PDB_ADDR_12", -578.02840000, 472.76290000, 12.78790000, 500, 12, 15 );
    sub_8811( 14, "PD_BRODELL", "PD_LEO", "PDB_ADDR_13", -116.43880000, 1408.18000000, 20.41450000, "PDB_ADDR_13", -116.43880000, 1408.18000000, 20.41450000, 400, 17, 13 );
    sub_8811( 15, "PD_KAND", "PD_JIMMY", "PDB_ADDR_14", -121.25090000, 1511.42600000, 22.77980000, "PDB_ADDR_14", -121.25090000, 1511.42600000, 22.77980000, 1400, 23, 12 );
    sub_8811( 16, "PD_MAHONVIC", "PD_CHRISTOV", "PDB_ADDR_15", 356.55930000, -360.33170000, 10.36860000, "PDB_ADDR_15", 356.55930000, -360.33170000, 10.36860000, 300, 52, 19 );
    sub_8811( 17, "PD_NASHLY", "PD_SIMON", "PDB_ADDR_16", 374.80770000, -511.96440000, 9.87990000, "PDB_ADDR_16", 374.80770000, -511.96440000, 9.87990000, 1300, 48, 6 );
    sub_8811( 18, "PD_LAMORA", "PD_BARRY", "PDB_ADDR_17", 454.02260000, -23.81160000, 7.68750000, "PDB_ADDR_17", 454.02260000, -23.81160000, 7.68750000, 1100, 45, 9 );
    sub_8811( 19, "PD_HAIMO", "PD_JUAN", "PDB_ADDR_18", -291.16780000, 455.58250000, 14.34060000, "PDB_ADDR_18", -291.16780000, 455.58250000, 14.34060000, 600, 18, 11 );
    sub_8811( 20, "PD_FRANCOVIC", "PD_TOMMY", "PDB_ADDR_19", -399.09700000, -446.82610000, 3.87240000, "PDB_ADDR_19", -399.09700000, -446.82610000, 3.87240000, 1300, 14, 12 );
    for ( I = 11; I <= 20; I++ )
    {
        sub_11164( I, 0 );
        sub_11289( I );
    }
    sub_8811( 21, "PD_BOLDENOW", "PD_MARTY", "PDB_ADDR_20", -1357.36400000, 490.15100000, 13.61980000, "PDB_ADDR_20", -1357.36400000, 490.15100000, 13.61980000, 1400, 46, 12 );
    sub_8811( 22, "PD_BURDETT", "PD_KEENAN", "PDB_ADDR_21", -1042.38900000, 1415.25700000, 23.29390000, "PDB_ADDR_21", -1042.38900000, 1415.25700000, 23.29390000, 200, 31, 12 );
    sub_8811( 23, "PD_BACERRA", "PD_PHIL", "PDB_ADDR_22", -1059.33100000, 729.19140000, 3.81050000, "PDB_ADDR_22", -1059.33100000, 729.19140000, 3.81050000, 900, 100, 12 );
    sub_8811( 24, "PD_HATMAKER", "PD_DANNY", "PDB_ADDR_23", -1190.66600000, 565.23260000, 3.37280000, "PDB_ADDR_23", -1190.66600000, 565.23260000, 3.37280000, 500, 47, 12 );
    sub_8811( 25, "PD_ESKUCHEN", "PD_MERVIN", "PDB_ADDR_24", -1729.88600000, 462.99350000, 26.02680000, "PDB_ADDR_24", -1729.88600000, 462.99350000, 26.02680000, 400, 5, 12 );
    sub_8811( 26, "PD_KATSUDA", "PD_NOEL", "PDB_ADDR_25", -2182.11600000, -21.33610000, 5.68420000, "PDB_ADDR_25", -2182.11600000, -21.33610000, 5.68420000, 1400, 101, 12 );
    sub_8811( 27, "PD_HARRISON", "PD_FREDERICK", "PDB_ADDR_26", -1755.06400000, -236.55620000, 2.50140000, "PDB_ADDR_26", -1755.06400000, -236.55620000, 2.50140000, 300, 102, 12 );
    sub_8811( 28, "PD_MCENIRY", "PD_RODNEY", "PDB_ADDR_27", -1623.88200000, 726.51410000, 28.21120000, "PDB_ADDR_27", -1623.88200000, 726.51410000, 28.21120000, 1300, 49, 12 );
    sub_8811( 29, "PD_LUSHBAUGH", "PD_GLENN", "PDB_ADDR_28", -1447.36000000, 1105.43600000, 22.03850000, "PDB_ADDR_28", -1447.36000000, 1105.43600000, 22.03850000, 1100, 50, 12 );
    sub_8811( 30, "PD_SZERBIN", "PD_SERGI", "PDB_ADDR_29", -1116.76500000, 1186.25600000, 16.28170000, "PDB_ADDR_29", -1116.76500000, 1186.25600000, 16.28170000, 600, 16, 12 );
    for ( I = 21; I <= 30; I++ )
    {
        sub_11164( I, 0 );
        sub_11289( I );
    }
    sub_8811( 31, "PD_DIMAYEV", "PD_ADAM", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_CCS", 1148.05800000, 559.10720000, 29.25150000, 1600, 9, 15 );
    sub_8811( 32, "PD_RIVAS", "PD_LYLE", "PD_BK_HM_9", 881.32100000, -20.76920000, 28.42190000, "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, 400, 41, 4 );
    for ( I = 31; I <= 32; I++ )
    {
        sub_10170( I, 1 );
        sub_11164( I, 1 );
    }
    sub_8811( 33, "PD_SLIGO", "PD_BUCKY", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", -1006.49700000, 1607.58800000, 23.60940000, 900, 40, 12 );
    sub_10170( 33, 1 );
    sub_11164( 33, 1 );
    sub_8811( 34, "PD_FAUSTIN", "PD_MIKHAIL", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 2000, 2000, 12 );
    sub_8811( 35, "PD_RASCALOV", "PD_DIMITRI", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 2100, 2001, 12 );
    sub_8811( 36, "PD_HUGHES", "PD_JACOB", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 2200, 2002, 12 );
    sub_8811( 37, "PD_DAVIES", "PD_TEAFORE", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 2300, 2003, 12 );
    sub_8811( 38, "PD_ESCUELLA", "PD_MANNY", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 2400, 2004, 12 );
    sub_8811( 39, "PD_TORRES", "PD_ELIZABETA", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 2500, 2005, 12 );
    sub_8811( 40, "PD_KIBBUTZ", "PD_BRUCIE", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 2600, 2006, 12 );
    sub_8811( 41, "PD_BOCCINO", "PD_RAY", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 1300, 2007, 12 );
    sub_8811( 42, "PD_PEGORINO", "PD_JIMMY", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 1300, 2008, 12 );
    sub_8811( 43, "PD_BELL", "PD_PHIL", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 1300, 2009, 12 );
    sub_8811( 44, "PD_GLEBOV", "PD_VLAD", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 2700, 2010, 12 );
    sub_8811( 45, "PD_STEWART", "PD_TREY", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 2800, 2011, 12 );
    sub_8811( 46, "PD_FORGE", "PD_DWAYNE", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 2900, 2012, 12 );
    sub_8811( 47, "PD_MCREARY", "PD_PACKIE", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 200, 2013, 12 );
    sub_8811( 48, "PD_MCREARY", "PD_GERRY", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 1300, 2014, 12 );
    sub_8811( 49, "PD_LOW", "PD_ED", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 3000, 2015, 12 );
    sub_8811( 50, "PD_LITTLE", "PD_CLARENCE", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 2800, 2016, 12 );
    sub_8811( 51, "PD_ALLEN", "PD_MARNIE", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 3100, 2017, 12 );
    sub_8811( 52, "PD_Bytchkov", "PD_IVAN", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 3200, 2018, 12 );
    sub_8811( 53, "PD_ANCELOTTI", "PD_GRACIE", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 1100, 2019, 12 );
    sub_8811( 54, "PD_RIVAS", "PD_TOM", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 3300, 2020, 12 );
    for ( I = 34; I <= 54; I++ )
    {
        sub_11164( I, 1 );
    }
    sub_15752( "PD_DWAYNE", "PD_FORGE", 1 );
    return;
}

void sub_8702()
{
    g_U2831 = 0;
    return;
}

void sub_8811(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13)
{
    if (g_U2831 < 100)
    {
        StrCopy( ref g_U2832[uParam0]._fU0, uParam1, 16 );
        StrCopy( ref g_U2832[uParam0]._fU16, uParam2, 16 );
        StrCopy( ref g_U2832[uParam0]._fU32._fU0, uParam3, 16 );
        g_U2832[uParam0]._fU32._fU16 = {uParam4};
        StrCopy( ref g_U2832[uParam0]._fU60[0]._fU0, uParam7, 16 );
        g_U2832[uParam0]._fU60[0]._fU16 = {uParam8};
        g_U2832[uParam0]._fU148 = {sub_8958( uParam11 )};
        g_U2832[uParam0]._fU184 = uParam12;
        if (((uParam4._fU0 + uParam4._fU4) + uParam4._fU8) > 0.00000000)
        {
            g_U2832[uParam0]._fU220 = GET_MAP_AREA_FROM_COORDS( g_U2832[uParam0]._fU32._fU16 );
        }
        else
        {
            g_U2832[uParam0]._fU220 = GET_MAP_AREA_FROM_COORDS( g_U2832[uParam0]._fU60[0]._fU16 );
        }
        if (g_U2832[uParam0]._fU184 < 2000)
        {
            g_U2832[uParam0]._fU196 = uParam11;
        }
        else
        {
            g_U2832[uParam0]._fU196 = 2000;
        }
        g_U2832[uParam0]._fU224 = uParam13;
        g_U2831++;
    }
    else
    {
        SCRIPT_ASSERT( "MAX_SIZE_OF_DATABASE reached- increase it" );
    }
    return;
}

void sub_8958(unknown uParam0)
{
    char[32] Result;

    switch (uParam0)
    {
        case 0:
        StrCopy( ref Result, "PD_CRM_ARMRO", 32 );
        break;
        case 200:
        StrCopy( ref Result, "PD_CRM_ARMRO", 32 );
        break;
        case 300:
        StrCopy( ref Result, "PD_CRM_GTA", 32 );
        break;
        case 400:
        StrCopy( ref Result, "PD_CRM_DRG", 32 );
        break;
        case 500:
        StrCopy( ref Result, "PD_CRM_AD", 32 );
        break;
        case 600:
        StrCopy( ref Result, "PD_CRM_PROS", 32 );
        break;
        case 700:
        StrCopy( ref Result, "PD_CRM_BA", 32 );
        break;
        case 800:
        StrCopy( ref Result, "PD_CRM_CCF", 32 );
        break;
        case 900:
        StrCopy( ref Result, "PD_CRM_HR", 32 );
        break;
        case 1000:
        StrCopy( ref Result, "PD_CRM_RBT", 32 );
        break;
        case 1100:
        StrCopy( ref Result, "PD_CRM_DWI", 32 );
        break;
        case 1200:
        StrCopy( ref Result, "PD_CRM_DTR", 32 );
        break;
        case 1300:
        StrCopy( ref Result, "PD_CRM_RACK", 32 );
        break;
        case 1400:
        StrCopy( ref Result, "PD_CRM_GRV", 32 );
        break;
        case 1500:
        StrCopy( ref Result, "PD_CRM_GDB", 32 );
        break;
        case 1600:
        StrCopy( ref Result, "PD_CRM_TER", 32 );
        break;
        case 2000:
        StrCopy( ref Result, "PD_CRM_EXT", 32 );
        break;
        case 2100:
        StrCopy( ref Result, "PD_CRM_ML", 32 );
        break;
        case 2200:
        StrCopy( ref Result, "PD_CRM_IFD", 32 );
        break;
        case 2300:
        StrCopy( ref Result, "PD_CRM_AM", 32 );
        break;
        case 2400:
        StrCopy( ref Result, "PD_CRM_DPO", 32 );
        break;
        case 2500:
        StrCopy( ref Result, "PD_CRM_DPO", 32 );
        break;
        case 2600:
        StrCopy( ref Result, "PD_CRM_STDI", 32 );
        break;
        case 2700:
        StrCopy( ref Result, "PD_CRM_RSG", 32 );
        break;
        case 2800:
        StrCopy( ref Result, "PD_CRM_PTD", 32 );
        break;
        case 2900:
        StrCopy( ref Result, "PD_CRM_COKE", 32 );
        break;
        case 3000:
        StrCopy( ref Result, "PD_CRM_IEX", 32 );
        break;
        case 3100:
        StrCopy( ref Result, "PD_CRM_PROST", 32 );
        break;
        case 3200:
        StrCopy( ref Result, "PD_CRM_GRA", 32 );
        break;
        case 3300:
        StrCopy( ref Result, "PD_CRM_SOL", 32 );
        break;
    }
    return Result;
}

void sub_10170(int iParam0, unknown uParam1)
{
    if (iParam0 < 100)
    {
        g_U2832[iParam0]._fU208 = uParam1;
    }
    return;
}

void sub_11164(int iParam0, unknown uParam1)
{
    if (iParam0 < 100)
    {
        g_U2832[iParam0]._fU216 = uParam1;
    }
    else
    {
        SCRIPT_ASSERT( "Prevented illegal index into dbase:index > MAX_SIZE_OF_DATABASE" );
    }
    return;
}

void sub_11289(unknown uParam0)
{
    g_U2832[uParam0]._fU228 = 1;
    return;
}

void sub_15752(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = sub_15765( uParam0, uParam1 );
    if (iVar5 != -1)
    {
        g_U2832[iVar5]._fU188 = uParam2;
    }
    return;
}

int sub_15765(unknown uParam0, unknown uParam1)
{
    int Result;

    if ((DOES_TEXT_LABEL_EXIST( uParam0 )) AND (DOES_TEXT_LABEL_EXIST( uParam1 )))
    {
        for ( Result = 0; Result <= 99; Result++ )
        {
            if (COMPARE_STRING( ref g_U2832[Result]._fU16, uParam0 ))
            {
                if (COMPARE_STRING( ref g_U2832[Result]._fU0, uParam1 ))
                {
                    return Result;
                }
            }
        }
    }
    return -1;
}

void sub_15941()
{
    sub_15950();
    return;
}

void sub_15950()
{
    int I;

    for ( I = 0; I <= (g_U1509 - 1); I++ )
    {
        g_U1509[I] = 0;
    }
    sub_16002( 1015, 2 );
    sub_16002( 1023, 2 );
    sub_16002( 2034, 2 );
    sub_16002( 4, 1 );
    sub_16002( 9, 3 );
    sub_16002( 1021, 2 );
    sub_16002( 1024, 2 );
    sub_16002( 1025, 3 );
    sub_16002( 2029, 1 );
    sub_16002( 3038, 2 );
    sub_16002( 4049, 1 );
    return;
}

void sub_16002(int iParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = iParam0 mod 1000;
    SET_BITS_IN_RANGE( ref g_U1509[iVar4 / 16], (iVar4 mod 16) * 2, ((iVar4 mod 16) * 2) + 1, uParam1 );
    return;
}

void sub_16162()
{
    REMOVE_ALL_CHAR_WEAPONS( sub_16171() );
    return;
}

void sub_16171()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_16227()
{
    int I;
    int iVar3;

    I = 0;
    for ( I = 0; I < 4; I++ )
    {
        g_U10973[I]._fU0 = 1;
    }
    iVar3 = 3;
    SET_INT_STAT( 363, iVar3 );
    return;
}

void sub_16297()
{
    int I;

    I = 0;
    for ( I = 0; I < 15; I++ )
    {
        sub_16331( ref g_U11209[I]._fU20 );
    }
    for ( I = 0; I < 7; I++ )
    {
        sub_16331( ref g_U11300[I]._fU20 );
    }
    for ( I = 0; I < 72; I++ )
    {
        sub_16331( ref g_U11582[I]._fU32 );
        g_U11343._fU660[I] = 0;
    }
    for ( I = 0; I < 72; I++ )
    {
        sub_16331( ref g_U12231[I]._fU4 );
    }
    sub_16526();
    return;
}

void sub_16331(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP_AND_CLEAR_INDEX( uParam0 );
    (uParam0^) = nil;
    return;
}

void sub_16526()
{
    int I;

    I = 0;
    for ( I = 0; I < 27; I++ )
    {
        g_U11343._fU0[I] = 0;
        g_U11343._fU112[I] = 0;
    }
    for ( I = 0; I < 35; I++ )
    {
        g_U11343._fU224[I] = 0;
    }
    for ( I = 0; I < 72; I++ )
    {
        g_U11343._fU368[I] = 0;
        g_U11343._fU660[I] = 0;
    }
    for ( I = 0; I < 72; I++ )
    {
        g_U12231[I]._fU0 = 0;
    }
    return;
}

void sub_16732()
{
    g_U10938._fU0 = 0;
    g_U10938._fU4 = -1;
    g_U10938._fU8 = -1;
    g_U10938._fU12 = 0;
    g_U10938._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_1547( ref g_U10938._fU32 );
    return;
}

void sub_16821(boolean bParam0)
{
    int I;

    if (bParam0)
    {
        return;
    }
    I = 0;
    for ( I = 0; I < 1; I++ )
    {
        ENABLE_SAVE_HOUSE( g_U10984[I]._fU4, 0 );
        g_U10984[I]._fU0 = 0;
    }
    return;
}

void sub_16905()
{
    sub_16914();
    g_U10953._fU24 = 0;
    return;
}

void sub_16914()
{
    g_U10953._fU0 = 0;
    g_U10953._fU4 = 0;
    g_U10953._fU8 = 0;
    g_U10953._fU12 = 0;
    g_U10953._fU16 = 0;
    g_U10953._fU20 = 0;
    g_U10953._fU28 = 5;
    return;
}

void sub_17003()
{
    g_U25 = 0;
    return;
}

void sub_17024()
{
    sub_17033();
    sub_17050();
    sub_17361();
    sub_17692();
    sub_18015();
    sub_18328();
    sub_18647();
    sub_18808();
    return;
}

void sub_17033()
{
    return;
}

void sub_17050()
{
    int iVar2;
    int I;

    iVar2 = 1;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        g_U43026[I]._fU8 = -1;
    }
    g_U28780[1]._fU0 = 0;
    sub_17117( 0, 0, 1 );
    g_U28780[1]._fU4 = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        if (g_U43026[I]._fU8 < 0)
        {
            SCRIPT_ASSERT( "Flow_Reset_Game_Completion_Procedurals: Not all procedural missions have details set up" );
        }
    }
    return;
}

void sub_17117(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U43026[uParam0]._fU0 = 0;
    g_U43026[uParam0]._fU4 = uParam1;
    g_U43026[uParam0]._fU8 = iParam2;
    g_U28780[1]._fU0 += iParam2;
    return;
}

void sub_17361()
{
    int iVar2;
    int I;

    iVar2 = 9;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        g_U43030[I]._fU8 = -1;
    }
    g_U28780[2]._fU0 = 0;
    sub_17427( 0, 1 );
    sub_17427( 1, 1 );
    sub_17427( 2, 1 );
    sub_17427( 3, 1 );
    sub_17427( 4, 1 );
    sub_17427( 5, 1 );
    sub_17427( 6, 1 );
    sub_17427( 8, 0 );
    sub_17427( 7, 0 );
    g_U28780[2]._fU4 = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        if (g_U43030[I]._fU8 < 0)
        {
            SCRIPT_ASSERT( "Flow_Reset_Game_Completion_Games: Not all games have details set up" );
        }
    }
    return;
}

void sub_17427(unknown uParam0, int iParam1)
{
    g_U43030[uParam0]._fU0 = 0;
    g_U43030[uParam0]._fU8 = iParam1;
    g_U28780[2]._fU0 += iParam1;
    return;
}

void sub_17692()
{
    int iVar2;
    int I;

    iVar2 = 1;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        g_U43058[I]._fU8 = -1;
    }
    g_U28780[3]._fU0 = 0;
    sub_17759( 0, 3, 1 );
    g_U28780[3]._fU4 = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        if (g_U43058[I]._fU8 < 0)
        {
            SCRIPT_ASSERT( "Flow_Reset_Game_Completion_Friends: Not all friends have details set up" );
        }
    }
    return;
}

void sub_17759(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U43058[uParam0]._fU0 = 0;
    g_U43058[uParam0]._fU4 = uParam1;
    g_U43058[uParam0]._fU8 = iParam2;
    g_U43062[uParam0]._fU0 = 0;
    g_U43062[uParam0]._fU4 = 0;
    g_U28780[3]._fU0 += iParam2;
    return;
}

void sub_18015()
{
    int iVar2;
    int I;

    iVar2 = 2;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        g_U43065[I]._fU8 = -1;
    }
    g_U28780[4]._fU0 = 0;
    sub_18082( 0, 3, 0 );
    sub_18082( 1, 7, 0 );
    g_U28780[4]._fU4 = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        if (g_U43065[I]._fU8 < 0)
        {
            SCRIPT_ASSERT( "Flow_Reset_Game_Completion_Specials: Not all special missions have details set up" );
        }
    }
    return;
}

void sub_18082(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U43065[uParam0]._fU0 = 0;
    g_U43065[uParam0]._fU4 = uParam1;
    g_U43065[uParam0]._fU8 = iParam2;
    g_U28780[4]._fU0 += iParam2;
    return;
}

void sub_18328()
{
    int iVar2;
    int I;

    iVar2 = 3;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        g_U43072[I]._fU8 = -1;
    }
    g_U28780[5]._fU0 = 0;
    sub_18395( 0, 13, 1 );
    sub_18395( 1, 14, 1 );
    sub_18395( 2, 15, 1 );
    g_U28780[5]._fU4 = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        if (g_U43072[I]._fU8 < 0)
        {
            SCRIPT_ASSERT( "Flow_Reset_Game_Completion_RandomChars: Not all randomchars have details set up" );
        }
    }
    return;
}

void sub_18395(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U43072[uParam0]._fU0 = 0;
    g_U43072[uParam0]._fU4 = uParam1;
    g_U43072[uParam0]._fU8 = iParam2;
    g_U28780[5]._fU0 += iParam2;
    return;
}

void sub_18647()
{
    int iVar2;
    int I;

    iVar2 = 2;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        g_U43082[I]._fU8 = -1;
    }
    g_U28780[6]._fU0 = 0;
    sub_18713( 0, 0 );
    sub_18713( 1, 0 );
    g_U28780[6]._fU4 = 0;
    return;
}

void sub_18713(unknown uParam0, int iParam1)
{
    g_U43082[uParam0]._fU0 = 0;
    g_U43082[uParam0]._fU8 = iParam1;
    g_U28780[6]._fU0 += iParam1;
    return;
}

void sub_18808()
{
    int iVar2;
    int I;

    iVar2 = 4;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        g_U43089[I]._fU8 = -1;
    }
    g_U28780[7]._fU0 = 0;
    sub_18874( 0, 1 );
    sub_18874( 1, 1 );
    sub_18874( 2, 1 );
    sub_18874( 3, 1 );
    g_U28780[7]._fU4 = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        if (g_U43089[I]._fU8 < 0)
        {
            SCRIPT_ASSERT( "Flow_Reset_Game_Completion_Misc: Not all miscs have details set up" );
        }
    }
    return;
}

void sub_18874(unknown uParam0, int iParam1)
{
    g_U43089[uParam0]._fU0 = 0;
    g_U43089[uParam0]._fU8 = iParam1;
    g_U28780[7]._fU0 += iParam1;
    return;
}

void sub_19111()
{
    int I;

    I = 0;
    for ( I = 0; I < 24; I++ )
    {
        g_U22921[I] = 0;
    }
    g_U22946 = 0;
    return;
}

void sub_19170()
{
    int I;

    I = 0;
    for ( I = 0; I < 7; I++ )
    {
        g_U10856[I]._fU0 = 0;
    }
    return;
}

void sub_19225()
{
    int I;

    I = 0;
    for ( I = 0; I < 4; I++ )
    {
        g_U10827[I]._fU0 = 0;
    }
    return;
}

void sub_19280()
{
    SET_PLAYER_CAN_BE_HASSLED_BY_GANGS( sub_8409(), 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 4, 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 5, 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 6, 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 7, 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 8, 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 9, 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 10, 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 11, 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 12, 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 13, 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 14, 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 15, 0 );
    return;
}

void sub_19526()
{
    g_U21 = 0;
    return;
}

void sub_19547()
{
    ENABLE_MAX_AMMO_CAP( 1 );
    return;
}

void sub_19572()
{
    g_U9200 = 0;
    g_U9199 = 0;
    return;
}

void sub_19601()
{
    int iVar2;

    PRINTSTRING( "********************* Update_Bridge_Control_Nodes: " );
    iVar2 = GET_INT_STAT( 363 );
    PRINTINT( iVar2 );
    PRINTNL();
    if (iVar2 < 2)
    {
        SWITCH_ROADS_OFF( 324.39880000, 1772.79600000, 15.90710000, 326.39880000, 1774.79600000, 17.90710000 );
        SWITCH_ROADS_OFF( 324.72270000, 1790.90300000, 15.89930000, 326.72270000, 1792.90300000, 17.89930000 );
        SWITCH_ROADS_OFF( -250.76720000, 1574.41900000, 18.46400000, -248.76720000, 1576.41900000, 20.46400000 );
        SWITCH_ROADS_OFF( -250.60630000, 1586.18200000, 18.47000000, -248.60630000, 1588.18200000, 20.47000000 );
        SWITCH_ROADS_OFF( 406.47790000, 1019.08100000, 24.99640000, 408.47790000, 1021.08100000, 26.99640000 );
        SWITCH_ROADS_OFF( 405.89090000, 1002.07600000, 24.99710000, 407.89090000, 1004.07600000, 26.99710000 );
        SWITCH_ROADS_OFF( 343.93100000, 1001.88300000, 24.99330000, 345.93100000, 1003.88300000, 26.99330000 );
        SWITCH_ROADS_OFF( 343.67410000, 1018.34300000, 24.99580000, 345.67410000, 1020.34300000, 26.99580000 );
        SWITCH_ROADS_OFF( 186.73660000, 1004.18200000, 12.76060000, 188.73660000, 1006.18200000, 14.76060000 );
        SWITCH_ROADS_OFF( 186.28080000, 1016.20300000, 12.76320000, 188.28080000, 1018.20300000, 14.76320000 );
        SWITCH_ROADS_OFF( 57.14420000, 1022.74300000, 12.75190000, 59.14420000, 1024.74300000, 14.75190000 );
        SWITCH_ROADS_OFF( 62.03510000, 998.48990000, 12.66320000, 64.03510000, 1000.49000000, 14.66320000 );
        SWITCH_ROADS_OFF( 534.53210000, 926.03400000, 18.82550000, 536.53210000, 928.03400000, 20.82550000 );
        SWITCH_ROADS_OFF( 566.84700000, 1052.62400000, 19.21830000, 568.84700000, 1054.62400000, 21.21830000 );
        SWITCH_ROADS_OFF( 563.93890000, 863.30440000, 18.94320000, 565.93890000, 865.30440000, 20.94320000 );
        SWITCH_ROADS_OFF( 536.49740000, 1063.32600000, 18.97530000, 538.49740000, 1065.32600000, 20.97530000 );
        SWITCH_ROADS_OFF( 359.15310000, 1001.01100000, 23.99710000, 363.15310000, 1005.01100000, 27.99710000 );
        SWITCH_ROADS_OFF( 359.10020000, 1017.73100000, 23.99310000, 363.10020000, 1021.73100000, 27.99310000 );
        SWITCH_ROADS_OFF( 922.86870000, 258.44850000, 41.74100000, 924.86870000, 260.44850000, 43.74100000 );
        SWITCH_ROADS_OFF( 933.13320000, 270.85210000, 42.65100000, 935.13320000, 272.85210000, 44.65100000 );
        SWITCH_ROADS_OFF( 58.32130000, 266.27880000, 13.16560000, 60.32130000, 268.27880000, 15.16560000 );
        SWITCH_ROADS_OFF( 58.14260000, 254.36340000, 13.15000000, 60.14260000, 256.36340000, 15.15000000 );
        SWITCH_ROADS_OFF( 918.49530000, 257.87200000, 41.46560000, 920.49530000, 259.87200000, 43.46560000 );
        SWITCH_ROADS_OFF( 1079.19200000, 295.22450000, 29.02650000, 1081.19200000, 297.22450000, 31.02650000 );
        SWITCH_ROADS_OFF( 1040.89700000, 211.86710000, 29.44070000, 1042.89700000, 213.86710000, 31.44070000 );
        SWITCH_ROADS_OFF( 1255.38000000, 276.22140000, 29.03830000, 1257.38000000, 278.22140000, 31.03830000 );
        SWITCH_ROADS_OFF( 1032.00000000, 256.56930000, 45.93090000, 1034.00000000, 258.56930000, 47.93090000 );
        SWITCH_ROADS_OFF( 939.21610000, 271.22920000, 43.16500000, 941.21610000, 273.22920000, 45.16500000 );
        SWITCH_ROADS_OFF( 1101.00000000, 244.00000000, 38.00000000, 1143.00000000, 264.00000000, 50.00000000 );
        SWITCH_ROADS_OFF( 1242.25000000, 283.72160000, 28.73480000, 1246.25000000, 287.72160000, 32.73480000 );
        SWITCH_ROADS_OFF( 1250.77600000, 286.31230000, 28.04450000, 1254.77600000, 290.31230000, 32.04400000 );
        SWITCH_ROADS_OFF( 948.19460000, 263.85660000, 29.14780000, 1243.50900000, 266.23130000, 46.85710000 );
        SWITCH_ROADS_OFF( 939.65500000, 252.25020000, 38.13980000, 1128.34700000, 261.73250000, 45.93600000 );
        SWITCH_ROADS_OFF( 1126.34700000, 259.73250000, 38.13980000, 1130.34700000, 264.73250000, 42.13980000 );
        SWITCH_ROADS_OFF( 1109.42600000, 236.33150000, 39.31710000, 1113.42600000, 240.33150000, 43.31710000 );
        SWITCH_ROADS_OFF( 1098.07900000, 235.76870000, 39.98480000, 1102.07900000, 239.76870000, 43.98480000 );
        SWITCH_ROADS_OFF( 893.42520000, -416.43870000, 35.29700000, 895.42520000, -414.43870000, 37.29700000 );
        SWITCH_ROADS_OFF( 904.72490000, -401.80910000, 35.51120000, 906.72490000, -399.80910000, 37.51120000 );
        SWITCH_ROADS_OFF( 151.26190000, -415.10430000, 12.79700000, 153.26190000, -413.10430000, 14.79700000 );
        SWITCH_ROADS_OFF( 151.23080000, -403.27040000, 12.80040000, 153.23080000, -401.27040000, 14.80040000 );
        SWITCH_ROADS_OFF( 893.43230000, -401.51340000, 35.29680000, 895.43230000, -399.51340000, 37.29680000 );
        SWITCH_ROADS_OFF( 893.53330000, -416.27660000, 35.29410000, 895.53330000, -414.27660000, 37.29410000 );
        SWITCH_ROADS_OFF( 169.19120000, -417.11330000, 12.80190000, 171.19120000, -415.11330000, 14.80190000 );
        SWITCH_ROADS_OFF( 163.61860000, -401.33510000, 12.78670000, 165.61860000, -399.33510000, 14.78670000 );
        SWITCH_ROADS_OFF( 1006.63300000, -371.51090000, 18.03860000, 1008.63300000, -369.51090000, 21.03860000 );
        SWITCH_ROADS_OFF( 1001.91700000, -372.50750000, 18.68050000, 1003.91700000, -370.50750000, 21.68050000 );
        SWITCH_ROADS_OFF( 1148.89400000, -311.50860000, 36.61330000, 1150.89400000, -309.50860000, 39.61330000 );
        SWITCH_ROADS_OFF( 1136.60200000, -318.01870000, 36.82210000, 1138.60200000, -316.01870000, 39.82210000 );
        SWITCH_ROADS_OFF( 864.84380000, -420.03660000, 34.97540000, 872.84380000, -412.03660000, 38.97540000 );
        SWITCH_ROADS_OFF( 1140.64300000, -332.68590000, 35.81390000, 1148.64300000, -324.68590000, 39.81390000 );
        SWITCH_ROADS_OFF( 1038.26800000, -424.72670000, 16.21770000, 1040.26800000, -422.72670000, 18.21770000 );
        SWITCH_ROADS_OFF( 904.73880000, -420.02700000, 35.35090000, 906.73880000, -418.02700000, 37.35090000 );
        SWITCH_ROADS_OFF( 939.65500000, 252.25020000, 38.13980000, 1128.34700000, 261.73250000, 45.93600000 );
    }
    if (iVar2 >= 2)
    {
        SWITCH_ROADS_BACK_TO_ORIGINAL( 324.39880000, 1772.79600000, 15.90710000, 326.39880000, 1774.79600000, 17.90710000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 324.72270000, 1790.90300000, 15.89930000, 326.72270000, 1792.90300000, 17.89930000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -250.76720000, 1574.41900000, 18.46400000, -248.76720000, 1576.41900000, 20.46400000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -250.60630000, 1586.18200000, 18.47000000, -248.60630000, 1588.18200000, 20.47000000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 406.47790000, 1019.08100000, 24.99640000, 408.47790000, 1021.08100000, 26.99640000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 405.89090000, 1002.07600000, 24.99710000, 407.89090000, 1004.07600000, 26.99710000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 343.93100000, 1001.88300000, 24.99330000, 345.93100000, 1003.88300000, 26.99330000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 343.67410000, 1018.34300000, 24.99580000, 345.67410000, 1020.34300000, 26.99580000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 186.73660000, 1004.18200000, 12.76060000, 188.73660000, 1006.18200000, 14.76060000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 186.28080000, 1016.20300000, 12.76320000, 188.28080000, 1018.20300000, 14.76320000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 57.14420000, 1022.74300000, 12.75190000, 59.14420000, 1024.74300000, 14.75190000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 62.03510000, 998.48990000, 12.66320000, 64.03510000, 1000.49000000, 14.66320000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 534.53210000, 926.03400000, 18.82550000, 536.53210000, 928.03400000, 20.82550000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 566.84700000, 1052.62400000, 19.21830000, 568.84700000, 1054.62400000, 21.21830000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 563.93890000, 863.30440000, 18.94320000, 565.93890000, 865.30440000, 20.94320000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 536.49740000, 1063.32600000, 18.97530000, 538.49740000, 1065.32600000, 20.97530000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 359.15310000, 1001.01100000, 23.99710000, 363.15310000, 1005.01100000, 27.99710000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 359.10020000, 1017.73100000, 23.99310000, 363.10020000, 1021.73100000, 27.99310000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 922.86870000, 258.44850000, 41.74100000, 924.86870000, 260.44850000, 43.74100000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 933.13320000, 270.85210000, 42.65100000, 935.13320000, 272.85210000, 44.65100000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 58.32130000, 266.27880000, 13.16560000, 60.32130000, 268.27880000, 15.16560000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 58.14260000, 254.36340000, 13.15000000, 60.14260000, 256.36340000, 15.15000000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 918.49530000, 257.87200000, 41.46560000, 920.49530000, 259.87200000, 43.46560000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1079.19200000, 295.22450000, 29.02650000, 1081.19200000, 297.22450000, 31.02650000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1040.89700000, 211.86710000, 29.44070000, 1042.89700000, 213.86710000, 31.44070000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1255.38000000, 276.22140000, 29.03830000, 1257.38000000, 278.22140000, 31.03830000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1032.00000000, 256.56930000, 45.93090000, 1034.00000000, 258.56930000, 47.93090000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 939.21610000, 271.22920000, 43.16500000, 941.21610000, 273.22920000, 45.16500000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1101.00000000, 244.00000000, 38.00000000, 1143.00000000, 264.00000000, 50.00000000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1242.25000000, 283.72160000, 28.73480000, 1246.25000000, 287.72160000, 32.73480000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1250.77600000, 286.31230000, 28.04450000, 1254.77600000, 290.31230000, 32.04400000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 948.19460000, 263.85660000, 29.14780000, 1243.50900000, 266.23130000, 46.85710000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 939.65500000, 252.25020000, 38.13980000, 1128.34700000, 261.73250000, 45.93600000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1126.34700000, 259.73250000, 38.13980000, 1130.34700000, 264.73250000, 42.13980000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1109.42600000, 236.33150000, 39.31710000, 1113.42600000, 240.33150000, 43.31710000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1098.07900000, 235.76870000, 39.98480000, 1102.07900000, 239.76870000, 43.98480000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 893.42520000, -416.43870000, 35.29700000, 895.42520000, -414.43870000, 37.29700000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 904.72490000, -401.80910000, 35.51120000, 906.72490000, -399.80910000, 37.51120000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 151.26190000, -415.10430000, 12.79700000, 153.26190000, -413.10430000, 14.79700000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 151.23080000, -403.27040000, 12.80040000, 153.23080000, -401.27040000, 14.80040000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 893.43230000, -401.51340000, 35.29680000, 895.43230000, -399.51340000, 37.29680000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 893.53330000, -416.27660000, 35.29410000, 895.53330000, -414.27660000, 37.29410000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 169.19120000, -417.11330000, 12.80190000, 171.19120000, -415.11330000, 14.80190000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 163.61860000, -401.33510000, 12.78670000, 165.61860000, -399.33510000, 14.78670000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1006.63300000, -371.51090000, 18.03860000, 1008.63300000, -369.51090000, 21.03860000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1001.91700000, -372.50750000, 18.68050000, 1003.91700000, -370.50750000, 21.68050000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1148.89400000, -311.50860000, 36.61330000, 1150.89400000, -309.50860000, 39.61330000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1136.60200000, -318.01870000, 36.82210000, 1138.60200000, -316.01870000, 39.82210000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 864.84380000, -420.03660000, 34.97540000, 872.84380000, -412.03660000, 38.97540000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1140.64300000, -332.68590000, 35.81390000, 1148.64300000, -324.68590000, 39.81390000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1038.26800000, -424.72670000, 16.21770000, 1040.26800000, -422.72670000, 18.21770000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 904.73880000, -420.02700000, 35.35090000, 906.73880000, -418.02700000, 37.35090000 );
    }
    if (iVar2 < 3)
    {
        SWITCH_ROADS_OFF( -890.12730000, 1156.24800000, 16.00280000, -888.12730000, 1158.24800000, 18.00280000 );
        SWITCH_ROADS_OFF( -889.60250000, 1167.95800000, 16.00680000, -887.60250000, 1169.95800000, 18.00680000 );
        SWITCH_ROADS_OFF( -665.27510000, 1171.31700000, 17.47660000, -663.27510000, 1173.31700000, 19.47660000 );
        SWITCH_ROADS_OFF( -664.71560000, 1159.96800000, 17.57480000, -662.71560000, 1161.96800000, 19.57480000 );
        SWITCH_ROADS_OFF( -394.85170000, 331.01640000, 12.07200000, -392.85170000, 333.01640000, 14.07200000 );
        SWITCH_ROADS_OFF( -957.74520000, 778.29000000, 2.33160000, -955.74520000, 780.29000000, 4.33160000 );
        SWITCH_ROADS_OFF( -945.69610000, 774.68300000, 1.55730000, -943.69610000, 776.68300000, 3.55730000 );
        SWITCH_ROADS_OFF( -946.17150000, 780.39040000, 1.60940000, -944.17150000, 782.39040000, 3.60940000 );
    }
    if (iVar2 >= 3)
    {
        SWITCH_ROADS_BACK_TO_ORIGINAL( -890.12730000, 1156.24800000, 16.00280000, -888.12730000, 1158.24800000, 18.00280000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -889.60250000, 1167.95800000, 16.00680000, -887.60250000, 1169.95800000, 18.00680000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -665.27510000, 1171.31700000, 17.47660000, -663.27510000, 1173.31700000, 19.47660000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -664.71560000, 1159.96800000, 17.57480000, -662.71560000, 1161.96800000, 19.57480000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -394.85170000, 331.01640000, 12.07200000, -392.85170000, 333.01640000, 14.07200000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -957.74520000, 778.29000000, 2.33160000, -955.74520000, 780.29000000, 4.33160000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -945.69610000, 774.68300000, 1.55730000, -943.69610000, 776.68300000, 3.55730000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -946.17150000, 780.39040000, 1.60940000, -944.17150000, 782.39040000, 3.60940000 );
    }
    return;
}

void sub_24324()
{
    int I;

    for ( I = 0; I < 3; I++ )
    {
        g_U42863[I] = 0;
    }
    g_U42863[0] = 3;
    g_U42863[1] = 2;
    g_U42863[2] = 3;
    for ( I = 0; I < 3; I++ )
    {
        if (g_U42863[I] == 0)
        {
            SCRIPT_ASSERT( "Initialise_Help_Message_Conflicts: A help message hasn't been given a priority\n" );
        }
    }
    g_U42867 = 0;
    g_U42868 = 4;
    g_U42869 = 0;
    g_U42870 = 4;
    return;
}

void sub_24587()
{
    sub_24596();
    sub_25374();
    sub_25564();
    return;
}

void sub_24596()
{
    sub_24628( 1, -74.28220000, -226.11370000, 13.63970000, 1, 1, 97 );
    sub_24628( 2, -461.13330000, 146.27290000, 8.75090000, 1, 1, 97 );
    sub_24628( 3, -448.76100000, 357.57180000, 9.98530000, 1, 1, 97 );
    sub_24628( 4, 778.01490000, 123.60520000, 4.94060000, 1, 1, 96 );
    sub_24628( 5, 860.23820000, -124.14220000, 4.90950000, 1, 1, 96 );
    sub_24628( 6, -34.72960000, 792.78590000, 13.71320000, 1, 1, 100 );
    sub_24628( 7, 69.20710000, -843.96120000, 3.99750000, 1, 1, 100 );
    sub_24628( 8, -403.77850000, 1505.28500000, 17.86060000, 1, 1, 102 );
    sub_24628( 9, -379.28610000, 1542.57800000, 18.80770000, 1, 1, 102 );
    sub_24628( 10, -379.28610000, 1542.57800000, 18.80770000, 1, 1, 102 );
    sub_24628( 11, 1576.48000000, 568.34420000, 27.88460000, 1, 1, 95 );
    sub_24628( 12, -238.19900000, 721.48300000, 2.43690000, 1, 1, 99 );
    sub_24628( 13, -379.28610000, 1542.57800000, 18.80770000, 1, 1, 98 );
    return;
}

void sub_24628(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    if (iParam0 > 14)
    {
        sub_24711( "Main_Missions: Store_Contact_Point(): Illegal Contact Point ID" );
    }
    if (((NOT (g_U10756[iParam0]._fU4._fU0 == 0.00000000)) || (NOT (g_U10756[iParam0]._fU4._fU4 == 0.00000000))) || (NOT (g_U10756[iParam0]._fU4._fU8 == 0.00000000)))
    {
        sub_24711( "Main_Missions: Store_Contact_Point(): Contact Point ID already setup" );
    }
    g_U10756[iParam0]._fU4._fU0 = uParam1;
    g_U10756[iParam0]._fU4._fU4 = uParam2;
    g_U10756[iParam0]._fU4._fU8 = uParam3;
    g_U10756[iParam0]._fU16 = uParam6;
    sub_24951( ref g_U10756[iParam0]._fU0, 1, uParam4 );
    sub_24951( ref g_U10756[iParam0]._fU0, 2, uParam5 );
    CLEAR_BIT( ref g_U10756[iParam0]._fU0, 3 );
    return;
}

void sub_24711(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_24951(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_25374()
{
    int I;

    I = 0;
    for ( I = 0; I < 14; I++ )
    {
        if (((g_U10756[I]._fU4._fU0 == 0.00000000) AND (g_U10756[I]._fU4._fU4 == 0.00000000)) AND (g_U10756[I]._fU4._fU8 == 0.00000000))
        {
            sub_24711( "Main_Missions: Check_Contact_Points(): Not all Contact Point IDs are set up" );
        }
    }
    return;
}

void sub_25564()
{
    int I;

    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        g_U22722[I] = 6;
    }
    sub_25611( 0, 1 );
    sub_25611( 1, 4 );
    sub_25611( 2, 6 );
    sub_25611( 3, 8 );
    sub_25611( 4, 10 );
    sub_25611( 5, 11 );
    sub_25611( 6, 12 );
    sub_25611( 7, 13 );
    for ( I = 0; I < 8; I++ )
    {
        if (g_U22722[I] == 6)
        {
            sub_24711( "Store_Default_Contact_Blips: default sprite blip not stored" );
        }
    }
    return;
}

void sub_25611(unknown uParam0, unknown uParam1)
{
    g_U22722[uParam0] = g_U10756[uParam1]._fU16;
    return;
}

void sub_25819()
{
    sub_25828();
    sub_25925();
    sub_26376();
    return;
}

void sub_25828()
{
    int I;

    I = 0;
    for ( I = 0; I < 4; I++ )
    {
        g_U10827[I]._fU4 = {0.00000000, 0.00000000, 0.00000000};
        g_U10827[I]._fU16 = {0.00000000, 0.00000000, 0.00000000};
    }
    return;
}

void sub_25925()
{
    sub_25967( 0, -378.18750000, 1534.41200000, 21.20750000, -383.80150000, 1551.49200000, 21.61420000 );
    sub_25967( 1, -504.53520000, 1424.16300000, 16.86450000, -493.29850000, 1438.59900000, 16.15660000 );
    sub_25967( 2, -309.86140000, 928.94980000, 15.78840000, -312.11360000, 900.52810000, 11.83620000 );
    sub_25967( 3, -116.83360000, 1424.53900000, 21.78890000, -117.48860000, 1455.55400000, 17.46750000 );
    return;
}

void sub_25967(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    if (iParam0 > 4)
    {
        sub_24711( "Main_Missions: Store_Dropoff_Point(): Illegal Dropoff Point ID" );
    }
    if (((NOT (g_U10827[iParam0]._fU4._fU0 == 0.00000000)) || (NOT (g_U10827[iParam0]._fU4._fU4 == 0.00000000))) || (NOT (g_U10827[iParam0]._fU4._fU8 == 0.00000000)))
    {
        sub_24711( "Main_Missions: Store_Dropoff_Point(): Dropoff Point ID already setup" );
    }
    g_U10827[iParam0]._fU4 = {uParam1, uParam2, uParam3};
    g_U10827[iParam0]._fU16 = {uParam4, uParam5, uParam6};
    g_U10827[iParam0]._fU0 = 1;
    return;
}

void sub_26376()
{
    int I;

    I = 0;
    for ( I = 0; I < 4; I++ )
    {
        if (((g_U10827[I]._fU4._fU0 == 0.00000000) AND (g_U10827[I]._fU4._fU4 == 0.00000000)) AND (g_U10827[I]._fU4._fU8 == 0.00000000))
        {
            sub_24711( "Main_Missions: Check_Dropoff_Points(): Not all Dropoff Point IDs are set up" );
        }
    }
    return;
}

void sub_26574()
{
    sub_26583();
    sub_26738();
    sub_27723();
    return;
}

void sub_26583()
{
    int I;

    I = 0;
    for ( I = 0; I < 7; I++ )
    {
        g_U10856[I]._fU4 = {0.00000000, 0.00000000, 0.00000000};
        g_U10856[I]._fU16 = 0.00000000;
        g_U10856[I]._fU20 = 0;
        g_U10856[I]._fU24 = 0;
        g_U10856[I]._fU28 = {0.00000000, 0.00000000, 0.00000000};
        g_U10856[I]._fU40 = 0.00000000;
    }
    return;
}

void sub_26738()
{
    sub_26796( 0, -383.96190000, 1550.82900000, 19.10890000, 268.06540000, 1, -789894171, -382.66030000, 1558.65400000, 19.07130000, 251.89400000 );
    sub_26796( 1, -203.86300000, 1456.65600000, 18.26880000, 272.79550000, 1, -789894171, -197.53200000, 1436.85300000, 19.24900000, 357.23640000 );
    sub_26796( 2, -341.82660000, 1144.84800000, 13.78180000, 32.84000000, 1, -789894171, -353.02990000, 1132.43700000, 13.66560000, 1.63520000 );
    sub_26796( 3, -157.84900000, -418.46550000, 13.81350000, 24.06040000, 1, -789894171, -151.09110000, -412.92410000, 13.70990000, 91.21700000 );
    sub_26796( 4, -1320.39800000, 1051.80600000, 18.56340000, 183.91490000, 1, -789894171, -1338.22700000, 1036.90100000, 18.46600000, 270.94810000 );
    sub_26796( 5, 1194.37700000, 1682.06400000, 15.71910000, 209.25100000, 1, -789894171, 1188.67300000, 1658.65100000, 15.60160000, 313.77220000 );
    sub_26796( 6, 1431.73200000, 127.67010000, 25.17270000, 113.57800000, 1, -789894171, 1417.54900000, 128.19380000, 25.05170000, 179.56890000 );
    return;
}

void sub_26796(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5, int iParam6, float fParam7, float fParam8, float fParam9, unknown uParam10)
{
    if (iParam0 > 7)
    {
        sub_24711( "Main_Missions: Store_Friend_Pickup_Point(): Illegal Friend Pickup Point ID" );
    }
    if (((NOT (g_U10856[iParam0]._fU4._fU0 == 0.00000000)) || (NOT (g_U10856[iParam0]._fU4._fU4 == 0.00000000))) || (NOT (g_U10856[iParam0]._fU4._fU8 == 0.00000000)))
    {
        sub_24711( "Main_Missions: Store_Friend_Pickup_Point(): Friend Pickup Point ID already setup" );
    }
    g_U10856[iParam0]._fU4 = {uParam1, uParam2, uParam3};
    g_U10856[iParam0]._fU16 = uParam4;
    g_U10856[iParam0]._fU0 = 1;
    g_U10856[iParam0]._fU20 = bParam5;
    if (NOT bParam5)
    {
        return;
    }
    if (((fParam7 == 0.00000000) AND (fParam8 == 0.00000000)) AND (fParam9 == 0.00000000))
    {
        SCRIPT_ASSERT( "Store_Friend_Pickup_Point(): Player vehicle required but coordinates not given" );
        return;
    }
    if (iParam6 == 0)
    {
        SCRIPT_ASSERT( "Store_Friend_Pickup_Point(): Player vehicle required but model not given" );
        return;
    }
    g_U10856[iParam0]._fU24 = iParam6;
    g_U10856[iParam0]._fU28 = {fParam7, fParam8, fParam9};
    g_U10856[iParam0]._fU40 = uParam10;
    return;
}

void sub_27723()
{
    int I;

    I = 0;
    for ( I = 0; I < 7; I++ )
    {
        if (((g_U10856[I]._fU4._fU0 == 0.00000000) AND (g_U10856[I]._fU4._fU4 == 0.00000000)) AND (g_U10856[I]._fU4._fU8 == 0.00000000))
        {
            sub_24711( "Main_Missions: Check_Friend_Pickup_Points(): Not all Friend Pickup Point IDs are set up" );
        }
    }
    return;
}

void sub_27933()
{
    sub_27942();
    sub_28208();
    sub_28275();
    sub_30617();
    sub_30964();
    return;
}

void sub_27942()
{
    int I;

    I = 0;
    for ( I = 0; I < 200; I++ )
    {
        g_U22960[I]._fU0 = -1;
        g_U22960[I]._fU4 = -1;
        g_U22960[I]._fU12 = 10;
        g_U22960[I]._fU16 = 17;
        StrCopy( ref g_U22960[I]._fU20, "", 16 );
        StrCopy( ref g_U22960[I]._fU36, "", 32 );
        sub_28060( ref g_U22960[I]._fU68 );
        sub_28060( ref g_U22960[I]._fU76 );
        StrCopy( ref g_U22960[I]._fU84, "", 16 );
        g_U22960[I]._fU108 = 0;
    }
    g_U28561 = 0;
    g_U28780[0]._fU0 = 0;
    for ( I = 0; I < 11; I++ )
    {
        g_U14902[I]._fU0 = 0;
    }
    return;
}

void sub_28060(int iParam0)
{
    iParam0->_fU0 = -1;
    iParam0->_fU4 = -1;
    return;
}

void sub_28208()
{
    int I;

    I = 0;
    for ( I = 0; I < 11; I++ )
    {
        g_U28562[I]._fU0 = -1;
        g_U28562[I]._fU4 = -1;
    }
    return;
}

void sub_28275()
{
    sub_28321( 0, 0, 2, 16, "E2INTRO", 121, 0, 0, "opening_credits" );
    sub_28321( 0, 1, 1, 15, "E2M_1", 121, 1, 1, "tony1" );
    sub_28321( 0, 2, 1, 15, "E2M_2", 122, 1, 1, "tony2" );
    sub_28321( 0, 3, 1, 15, "E2M_3", 123, 1, 1, "tony3" );
    sub_28321( 0, 4, 1, 15, "E2M_4", 124, 0, 1, "tony4a" );
    sub_28321( 0, 5, 1, 15, "E2M_7", 127, 1, 1, "tony5" );
    sub_28321( 0, 6, 1, 15, "E2M_6", 126, 1, 1, "tony4b" );
    sub_28321( 0, 7, 1, 15, "E2M_5", 125, 1, 1, "tony6" );
    sub_28321( 0, 8, 1, 15, "E2M_8", 128, 1, 1, "tony7" );
    sub_28321( 0, 9, 0, 3, "E2M_9", 129, 1, 1, "tony8" );
    sub_28321( 0, 10, 0, 1, "E2M_10", 130, 1, 1, "tony9" );
    sub_28321( 0, 11, 0, 2, "E2M_11", 131, 1, 1, "tony10" );
    sub_28321( 0, 12, 0, 1, "E2M_12", 132, 1, 1, "tony11" );
    sub_28321( 0, 13, 1, 15, "E2CREDIT", 0, 0, 1, "E2EndCredits" );
    sub_28321( 0, 14, 6, 15, "LAUNCH", 0, 0, 0, "tonyLauncher" );
    sub_28321( 0, 15, 6, 15, "PRE_BLOGB", 0, 0, 0, "tonyPreBlogB" );
    sub_28321( 0, 16, 6, 15, "CLUBCALLS", 0, 0, 0, "ClubManPhonecalls" );
    sub_28321( 0, 17, 6, 15, "TXTHELP", 0, 0, 0, "txtmsgHelp" );
    sub_28321( 1, 0, 0, 4, "E2M_13", 133, 1, 1, "brother1" );
    sub_28321( 1, 1, 0, 4, "E2M_14", 134, 1, 1, "brother2" );
    sub_28321( 1, 2, 0, 4, "E2M_15", 135, 1, 1, "brother3" );
    sub_28321( 2, 0, 0, 6, "E2M_17", 137, 1, 1, "yusuf1" );
    sub_28321( 2, 1, 0, 6, "E2M_18", 138, 1, 1, "yusuf2" );
    sub_28321( 2, 2, 0, 6, "E2M_19", 139, 1, 1, "yusuf3" );
    sub_28321( 2, 3, 0, 7, "E2M_20", 140, 1, 1, "yusuf4" );
    sub_28321( 3, 1, 0, 8, "E2M_21", 141, 1, 1, "friends1" );
    sub_28321( 3, 0, 0, 9, "E2M_22", 142, 1, 1, "friends2" );
    sub_28321( 3, 2, 4, 15, "E2DFFRIEND", 0, 0, 1, "dominicanFriend" );
    sub_28321( 3, 4, 1, 15, "E2DFFTEST", 0, 0, 0, "Pause" );
    sub_28321( 4, 0, 0, 10, "E2M_23", 143, 1, 1, "mum1" );
    sub_28321( 5, 0, 0, 11, "E2M_24", 144, 1, 1, "bulgarin1" );
    sub_28321( 5, 1, 0, 11, "E2M_25", 145, 1, 1, "bulgarin2" );
    sub_28321( 5, 2, 0, 11, "E2M_26", 146, 1, 1, "bulgarin3" );
    sub_28321( 6, 0, 0, 12, "E2M_27", 147, 1, 1, "rocco1" );
    sub_28321( 7, 0, 4, 15, "E2HNFRIEND", 0, 0, 1, "dominicanFriend" );
    sub_28321( 7, 2, 1, 15, "E2HNFTEST", 0, 0, 0, "Pause" );
    sub_28321( 10, 0, 1, 15, "PARACHUTE", 0, 0, 0, "parachute" );
    sub_28321( 10, 1, 1, 15, "BLOWING", 0, 0, 0, "blowing" );
    sub_28321( 10, 2, 1, 15, "GOLF", 0, 0, 0, "golf" );
    sub_28321( 10, 3, 1, 15, "RACES", 0, 0, 0, "raceSP" );
    sub_28321( 10, 4, 1, 15, "FIGHTCL", 0, 0, 0, "FightClubRing" );
    sub_28321( 10, 5, 1, 15, "DW_CONTROL", 0, 0, 0, "DrugWarsControl" );
    sub_28321( 10, 6, 1, 15, "DW_CONV", 0, 0, 0, "DrugWarsConvoy" );
    sub_28321( 10, 7, 1, 15, "DW_DEAL", 0, 0, 0, "DrugWarsDeal" );
    sub_28321( 10, 8, 1, 15, "DW_PKUP", 0, 0, 0, "DrugWarsPickup" );
    sub_28321( 10, 9, 1, 15, "DW_SHIP", 0, 0, 0, "DrugWarsShipment" );
    sub_28321( 10, 10, 1, 15, "BOATDRAG", 0, 0, 0, "BoatNMTest" );
    sub_28321( 10, 11, 1, 15, "SPGUNCAR", 0, 0, 0, "ability_gun_car" );
    return;
}

void sub_28321(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    unknown uVar11;

    uVar11 = sub_28332( uParam0 );
    sub_28545( uVar11, uParam0, uParam1, uParam2, uParam3, uParam4, uParam8, uParam5, uParam6, uParam7 );
    sub_28961();
    return;
}

void sub_28332(int iParam0)
{
    if (g_U28561 >= 200)
    {
        sub_24711( "Main_Missions: Begin_Trigger(): Need to increase MAX_MISSION_TRIGGERS" );
    }
    if ((iParam0 < 0) || (iParam0 >= 11))
    {
        sub_24711( "Main_Missions: Begin_Trigger(): StrandID out of range" );
    }
    return g_U28561;
}

void sub_28545(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, boolean bParam9)
{
    g_U22960[uParam0]._fU0 = uParam1;
    g_U22960[uParam0]._fU4 = uParam2;
    g_U22960[uParam0]._fU12 = iParam3;
    g_U22960[uParam0]._fU16 = uParam4;
    StrCopy( ref g_U22960[uParam0]._fU20, uParam5, 16 );
    StrCopy( ref g_U22960[uParam0]._fU36, uParam6, 32 );
    if (((((((iParam3 == 1) || (iParam3 == 2)) || (iParam3 == 3)) || (iParam3 == 4)) || (iParam3 == 5)) || (iParam3 == 6)) || (iParam3 == 7))
    {
        g_U22960[uParam0]._fU16 = 15;
    }
    if (iParam3 == 2)
    {
        g_U22960[uParam0]._fU16 = 16;
    }
    if (bParam9)
    {
        SET_BIT( ref g_U22960[uParam0]._fU108, 2 );
    }
    g_U22960[uParam0]._fU8 = uParam7;
    g_U22960[uParam0]._fU100 = 0;
    sub_28770( uParam0, uParam1, uParam8 );
    return;
}

void sub_28770(int iParam0, int iParam1, int iParam2)
{
    int iVar5;
    boolean bVar6;

    if (iParam2 == 0)
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
    iVar5 = iParam2;
    bVar6 = true;
    if (iParam2 > 60)
    {
        iVar5 = iParam2 - 60;
        bVar6 = false;
    }
    else if (iParam2 > 50)
    {
        iVar5 = iParam2 - 50;
        bVar6 = true;
    }
    g_U22960[iParam0]._fU104 = iVar5;
    if (NOT bVar6)
    {
        return;
    }
    g_U28780[0]._fU0 += iVar5;
    g_U14902[iParam1]._fU0 += iVar5;
    return;
}

void sub_28961()
{
    g_U28561++;
    return;
}

void sub_30617()
{
    int iVar2;
    int iVar3;
    int I;

    iVar2 = -1;
    iVar3 = 0;
    I = 0;
    for ( I = 0; I < g_U28561; I++ )
    {
        if (NOT (g_U22960[I]._fU0 == iVar2))
        {
            if (NOT (iVar2 == -1))
            {
                g_U28562[iVar2]._fU4 = iVar3;
            }
            iVar2 = g_U22960[I]._fU0;
            if ((iVar2 < 0) || (iVar2 >= 11))
            {
                sub_24711( "Main_Missions: Generate_Triggers_Index(): Illegal Strand ID" );
            }
            if (NOT (g_U28562[iVar2]._fU0 == -1))
            {
                sub_24711( "Main_Missions: Generate_Triggers_Index(): More missions being recorded in an already recorded strand" );
            }
            g_U28562[iVar2]._fU0 = I;
        }
        iVar3 = I;
    }
    g_U28562[iVar2]._fU4 = iVar3;
    return;
}

void sub_30964()
{
    int iVar2;
    int iVar3;
    int J;
    int[48] iVar5;
    int I;
    int iVar55;

    iVar2 = 0;
    iVar3 = 0;
    J = 0;
    array(ref iVar5, 48);
    I = 0;
    iVar55 = 0;
    for ( iVar55 = 0; iVar55 < 11; iVar55++ )
    {
        iVar2 = g_U28562[iVar55]._fU0;
        if (NOT (iVar2 == -1))
        {
            iVar3 = g_U28562[iVar55]._fU4;
            if (((iVar3 - iVar2) + 1) >= 48)
            {
                sub_24711( "Main_Missions: Need to increase MAX_MISSIONS_IN_STRAND" );
            }
            I = 0;
            for ( I = 0; I < 48; I++ )
            {
                iVar5[I] = 0;
            }
            for ( J = iVar2; J <= iVar3; J++ )
            {
                if (iVar5[g_U22960[J]._fU4])
                {
                    while (true)
                    {
                        PRINTSTRING( "STRAND: " );
                        PRINTINT( g_U22960[J]._fU0 );
                        PRINTSTRING( "    MISSION: " );
                        PRINTINT( g_U22960[J]._fU4 );
                        PRINTNL();
                        PRINTSTRING( "Main_Missions: Duplicate Strand And Mission\n" );
                        PRINTSTRING( "*** SCRIPT HALTED ***\n" );
                        WAIT( 1000 );
                    }
                }
                iVar5[g_U22960[J]._fU4] = 1;
            }
        }
    }
    return;
}

void sub_31476()
{
    sub_31485();
    sub_31694( 0, 2046537925, "policeTest", "R3H_COP", "R3_COP", 0, 1, 1 );
    sub_31694( 1, 148777611, "policeTest", "R3H_COP", "R3_COP", 0, 1, 1 );
    sub_31694( 2, -350085182, "policeTest", "R3H_COP", "R3_COP", 0, 1, 1 );
    sub_31694( 3, -1627000575, "policeTest", "R3H_COP", "R3_COP", 0, 1, 1 );
    sub_31694( 4, -1900572838, "policeTest", "R3H_COP", "R3_COP", 0, 1, 1 );
    sub_31694( 5, 1127131465, "policeTest", "R3H_COP", "R3_COP", 0, 1, 1 );
    return;
}

void sub_31485()
{
    int I;

    I = 0;
    for ( I = 0; I < 7; I++ )
    {
        CLEAR_TEXT_LABEL( ref g_U28585[I]._fU4 );
        CLEAR_TEXT_LABEL( ref g_U28585[I]._fU20 );
        g_U28585[I]._fU0 = -1;
        g_U28585[I]._fU36 = 0;
        StrCopy( ref g_U28585[I]._fU40, "", 32 );
        g_U28585[I]._fU72 = 0;
        g_U28585[I]._fU76 = 0;
        g_U28585[I]._fU80 = 0;
    }
    g_U28733 = 0;
    return;
}

void sub_31694(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    unknown uVar10;

    uVar10 = sub_31705( uParam0 );
    StrCopy( ref g_U28585[uVar10]._fU4, uParam3, 16 );
    StrCopy( ref g_U28585[uVar10]._fU20, uParam4, 16 );
    g_U28585[uVar10]._fU0 = uParam0;
    g_U28585[uVar10]._fU36 = uParam1;
    StrCopy( ref g_U28585[uVar10]._fU40, uParam2, 32 );
    g_U28585[uVar10]._fU72 = uParam5;
    g_U28585[uVar10]._fU76 = uParam6;
    g_U28585[uVar10]._fU80 = uParam7;
    sub_32102();
    return;
}

void sub_31705(int iParam0)
{
    int I;

    if (g_U28733 >= 7)
    {
        sub_24711( "Main_Missions: Begin_R3_Trigger(): Need to increase MAX_R3_MISSION_TRIGGERS" );
    }
    I = 0;
    for ( I = 0; I < g_U28733; I++ )
    {
        if (iParam0 == g_U28585[I]._fU0)
        {
            PRINTSTRING( "R3 MissionID: " );
            PRINTINT( iParam0 );
            PRINTNL();
            sub_24711( "Main_Missions: Begin_R3_Trigger(): Duplicate R3 Mission" );
        }
    }
    return g_U28733;
}

void sub_32102()
{
    g_U28733++;
    return;
}

void sub_32377()
{
    sub_32386();
    sub_32521();
    sub_32961();
    return;
}

void sub_32386()
{
    int I;

    I = 0;
    for ( I = 0; I < 1; I++ )
    {
        g_U10984[I]._fU8 = {0.00000000, 0.00000000, 0.00000000};
        g_U10984[I]._fU20 = {0.00000000, 0.00000000, 0.00000000};
        g_U10984[I]._fU32 = nil;
        g_U10984[I]._fU36 = g_U10755;
    }
    sub_6110();
    return;
}

void sub_32521()
{
    sub_32589( 0, -444.70930000, 1389.69200000, 14.47120000, -434.54260000, 1394.35100000, 15.45720000, 153.65090000, "E2_luisapartment", 2, 29 );
    return;
}

void sub_32589(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    unknown uVar13;

    if (iParam0 > 1)
    {
        sub_24711( "Main_Missions: Store_Save_House(): Illegal Save House ID" );
    }
    if (((NOT (g_U10984[iParam0]._fU8._fU0 == 0.00000000)) || (NOT (g_U10984[iParam0]._fU8._fU4 == 0.00000000))) || (NOT (g_U10984[iParam0]._fU8._fU8 == 0.00000000)))
    {
        sub_24711( "Main_Missions: Store_Save_House(): Save House ID already setup" );
    }
    g_U10984[iParam0]._fU8 = {uParam1};
    g_U10984[iParam0]._fU20 = {uParam4};
    g_U10984[iParam0]._fU36 = uParam10;
    g_U10984[iParam0]._fU40 = uParam9;
    uVar13 = uParam9;
    g_U10984[iParam0]._fU4 = REGISTER_SAVE_HOUSE( uParam4._fU0, uParam4._fU4, uParam4._fU8, uParam7, uParam8, uVar13 );
    ENABLE_SAVE_HOUSE( g_U10984[iParam0]._fU4, 1 );
    g_U10984[iParam0]._fU0 = 1;
    return;
}

void sub_32961()
{
    int I;

    I = 0;
    for ( I = 0; I < 1; I++ )
    {
        if (((g_U10984[I]._fU8._fU0 == 0.00000000) AND (g_U10984[I]._fU8._fU4 == 0.00000000)) AND (g_U10984[I]._fU8._fU8 == 0.00000000))
        {
            sub_24711( "Main_Missions: Check_Save_Houses(): Not all Save House IDs are set up" );
        }
    }
    return;
}

void sub_33153()
{
    sub_33162();
    sub_33345();
    sub_35737();
    return;
}

void sub_33162()
{
    int I;

    I = 0;
    for ( I = 0; I < 72; I++ )
    {
        g_U11582[I]._fU0 = {0.00000000, 0.00000000, 0.00000000};
        g_U11582[I]._fU12 = 28;
        g_U11582[I]._fU16 = 36;
        g_U11582[I]._fU20 = g_U10755;
        g_U11582[I]._fU24 = 2;
        g_U11582[I]._fU28 = 5;
        g_U11582[I]._fU32 = nil;
        g_U12231[I]._fU0 = 0;
        g_U12231[I]._fU4 = nil;
    }
    sub_16526();
    return;
}

void sub_33345()
{
    sub_33375( 0, 1185.15400000, 381.42550000, 23.50160000, 12, 16, 22, 2, 0 );
    sub_33375( 1, 1657.06400000, 229.84580000, 23.96140000, 12, 21, 21, 2, 0 );
    sub_33375( 2, 870.45820000, -482.69210000, 13.66510000, 12, 18, 57, 2, 0 );
    sub_33375( 3, 925.40010000, -490.20910000, 14.33960000, 8, 10, 47, 2, 0 );
    sub_33375( 4, 977.02670000, -168.98600000, 23.02960000, 17, 25, 24, 2, 0 );
    sub_33375( 5, 900.15060000, -443.31660000, 14.80430000, 5, 4, 50, 2, 0 );
    sub_33375( 6, 1054.38200000, 86.56970000, 32.39870000, 26, 34, 59, 1, 0 );
    sub_33375( 7, 1199.07800000, -662.52670000, 15.84490000, 1, 0, 113, 2, 0 );
    sub_33375( 8, 1198.96600000, -680.09220000, 15.43980000, 3, 1, 49, 2, 0 );
    sub_33375( 9, 1478.30500000, 54.44050000, 23.93220000, 20, 27, 46, 2, 0 );
    sub_33375( 10, 1152.67800000, 733.92750000, 34.39900000, 7, 7, 52, 2, 0 );
    sub_33375( 11, 816.47990000, 321.36990000, 6.88000000, 21, 28, 65, 0, 0 );
    sub_33375( 12, 957.92380000, -294.83490000, 18.58870000, 22, 30, 71, 2, 0 );
    sub_33375( 13, 1058.17900000, -287.15700000, 20.33040000, 23, 31, 75, 2, 0 );
    sub_33375( 14, 1513.46000000, 115.69420000, 22.25510000, 4, 2, 91, 2, 0 );
    sub_33375( 15, 1837.42600000, 360.37300000, 21.55200000, 4, 2, 91, 2, 0 );
    sub_33375( 16, 945.51960000, 104.60200000, 33.03960000, 11, 15, 61, 3, 0 );
    sub_33375( 17, 2366.86700000, 179.41770000, 4.80770000, 11, 15, 61, 3, 0 );
    sub_33375( 18, 441.29720000, 1526.51600000, 15.20670000, 12, 21, 21, 2, 1 );
    sub_33375( 19, 1097.06800000, 1600.93700000, 15.59930000, 12, 21, 21, 2, 1 );
    sub_33375( 20, 612.83000000, 752.26000000, 2.63000000, 21, 28, 65, 0, 1 );
    sub_33375( 21, 1130.43400000, 1723.71900000, 9.48690000, 11, 15, 61, 3, 1 );
    sub_33375( 22, 1202.20700000, 1709.83700000, 15.65890000, 24, 32, 66, 2, 1 );
    sub_33375( 23, 732.76150000, 1381.56700000, 13.24680000, 13, 22, 79, 2, 1 );
    sub_33375( 24, -143.60320000, 59.53730000, 13.65910000, 12, 16, 22, 2, 2 );
    sub_33375( 25, -623.24830000, 158.93560000, 3.66270000, 12, 21, 21, 2, 2 );
    sub_33375( 26, -426.22890000, 1178.63300000, 12.10950000, 12, 21, 21, 2, 2 );
    sub_33375( 27, -403.36530000, 250.41420000, 12.35630000, 12, 18, 57, 2, 2 );
    sub_33375( 28, 118.51820000, 650.31560000, 13.59380000, 12, 18, 57, 2, 2 );
    sub_33375( 29, 34.71580000, 982.71640000, 13.54950000, 12, 20, 57, 2, 2 );
    sub_33375( 30, -70.89720000, -74.17510000, 13.76340000, 12, 18, 57, 2, 2 );
    sub_33375( 31, -65.44750000, 15.32600000, 13.79840000, 12, 18, 57, 2, 2 );
    sub_33375( 32, 118.71500000, 575.37290000, 13.61880000, 8, 9, 47, 2, 2 );
    sub_33375( 33, -521.59580000, 1414.46800000, 14.35740000, 8, 11, 47, 2, 2 );
    sub_33375( 34, 7.72670000, -114.67710000, 13.77290000, 8, 12, 47, 2, 2 );
    sub_33375( 35, -398.68600000, 391.71510000, 12.96170000, 18, 26, 51, 2, 2 );
    sub_33375( 36, -464.58860000, 153.47220000, 8.83810000, 18, 26, 51, 2, 2 );
    sub_33375( 37, -444.11940000, 356.88260000, 10.08540000, 18, 26, 51, 2, 2 );
    sub_33375( 38, 366.79550000, -731.30100000, 3.69170000, 15, 24, 56, 2, 2 );
    sub_33375( 39, -341.48280000, 1392.46200000, 11.93880000, 17, 25, 24, 2, 2 );
    sub_33375( 40, 13.96100000, -657.06470000, 13.76190000, 5, 6, 50, 2, 2 );
    sub_33375( 41, 22.14700000, 811.58510000, 13.71190000, 5, 6, 50, 2, 2 );
    sub_33375( 42, -280.66780000, 1352.73500000, 24.62000000, 5, 5, 50, 2, 2 );
    sub_33375( 43, 65.94250000, -342.24410000, 13.76250000, 26, 34, 59, 1, 2 );
    sub_33375( 44, -589.63080000, 78.19980000, 4.21710000, 1, 0, 113, 2, 2 );
    sub_33375( 45, -571.26780000, 77.83100000, 3.81210000, 3, 1, 49, 2, 2 );
    sub_33375( 46, -443.23690000, 458.09870000, 8.83620000, 7, 7, 52, 2, 2 );
    sub_33375( 47, -394.19710000, 1482.38100000, 9.69050000, 10, 14, 120, 0, 2 );
    sub_33375( 48, -472.87070000, 148.02790000, 8.85880000, 6, 3, 121, 0, 2 );
    sub_33375( 49, -570.74790000, -13.37720000, 3.81240000, 14, 23, 109, 2, 2 );
    sub_33375( 50, -348.70010000, 181.23150000, 13.76220000, 22, 29, 70, 2, 2 );
    sub_33375( 51, -307.26430000, 1549.11400000, 19.26490000, 23, 31, 75, 2, 2 );
    sub_33375( 52, -513.84290000, 376.23450000, 5.66430000, 23, 31, 75, 2, 2 );
    sub_33375( 53, -499.76900000, 486.28510000, 5.57620000, 4, 2, 91, 2, 2 );
    sub_33375( 54, -272.29180000, 1530.10400000, 19.26340000, 11, 15, 61, 3, 2 );
    sub_33375( 55, -378.19860000, 221.62780000, 13.68570000, 11, 15, 61, 3, 2 );
    sub_33375( 56, 289.40550000, -358.02360000, 3.80870000, 11, 15, 61, 3, 2 );
    sub_33375( 57, -1006.06500000, 1604.26700000, 22.84400000, 12, 21, 21, 2, 3 );
    sub_33375( 58, -1250.33100000, 1071.12700000, 18.60790000, 12, 19, 57, 2, 3 );
    sub_33375( 59, -1158.11200000, 1389.37800000, 23.19280000, 12, 18, 57, 2, 3 );
    sub_33375( 60, -1373.73500000, 510.32710000, 11.47960000, 8, 12, 47, 2, 3 );
    sub_33375( 62, -1034.89000000, 667.39000000, 4.73990000, 21, 28, 65, 0, 3 );
    sub_33375( 61, -990.19730000, 918.54820000, 12.67370000, 8, 13, 47, 2, 3 );
    sub_33375( 63, -1337.63000000, 307.87090000, 12.32560000, 26, 34, 59, 1, 3 );
    sub_33375( 64, -1147.96900000, 1176.36600000, 15.83930000, 23, 31, 75, 2, 3 );
    sub_33375( 65, -1300.05800000, 274.11460000, 9.79920000, 23, 31, 75, 2, 3 );
    sub_33375( 66, -1303.23800000, 1741.21400000, 26.82040000, 4, 2, 91, 2, 3 );
    sub_33375( 67, -1376.09100000, 38.03660000, 6.14100000, 4, 2, 91, 2, 3 );
    sub_33375( 68, -1572.53300000, 553.76720000, 24.44300000, 11, 15, 61, 3, 3 );
    sub_33375( 69, -2132.83400000, 165.60890000, 11.04480000, 11, 15, 61, 3, 3 );
    sub_33375( 70, -1582.84200000, 26.49770000, 9.04700000, 24, 33, 66, 2, 3 );
    sub_33375( 71, -1584.45600000, 465.82890000, 24.31230000, 17, 25, 24, 2, 3 );
    return;
}

void sub_33375(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    if (((NOT (g_U11582[uParam0]._fU0._fU0 == 0.00000000)) || (NOT (g_U11582[uParam0]._fU0._fU4 == 0.00000000))) || (NOT (g_U11582[uParam0]._fU0._fU8 == 0.00000000)))
    {
        sub_24711( "main_missions: Add_Map_Blip: Map Blip already setup" );
    }
    g_U11582[uParam0]._fU0 = {uParam1, uParam2, uParam3};
    g_U11582[uParam0]._fU12 = uParam4;
    g_U11582[uParam0]._fU16 = uParam5;
    g_U11582[uParam0]._fU20 = uParam6;
    g_U11582[uParam0]._fU24 = uParam7;
    g_U11582[uParam0]._fU28 = uParam8;
    g_U11582[uParam0]._fU32 = nil;
    return;
}

void sub_35737()
{
    int I;

    I = 0;
    for ( I = 0; I < 72; I++ )
    {
        if (((g_U11582[I]._fU0._fU0 == 0.00000000) AND (g_U11582[I]._fU0._fU4 == 0.00000000)) AND (g_U11582[I]._fU0._fU8 == 0.00000000))
        {
            sub_24711( "Main_Missions: Check_Map_Blips(): Not all Map Blip IDs are set up" );
        }
    }
    return;
}

void sub_36003()
{
    sub_16526();
    sub_36017();
    return;
}

void sub_36017()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 0;
    for ( I = 0; I < 15; I++ )
    {
        iVar3 = sub_36045( 19 );
        if ((sub_36090( 19, iVar3 )) AND (g_U10973[g_U11209[I]._fU0]._fU0))
        {
            sub_36191( ref g_U11209[I]._fU20, g_U11209[I]._fU4, 4, 60 );
        }
        else
        {
            sub_16331( ref g_U11209[I]._fU20 );
        }
    }
    for ( I = 0; I < 7; I++ )
    {
        iVar3 = sub_36045( 16 );
        if ((sub_36090( 16, iVar3 )) AND (g_U10973[g_U11300[I]._fU0]._fU0))
        {
            sub_36191( ref g_U11300[I]._fU20, g_U11300[I]._fU4, 4, 62 );
        }
        else
        {
            sub_16331( ref g_U11300[I]._fU20 );
        }
    }
    for ( I = 0; I < 72; I++ )
    {
        iVar3 = sub_36543( I );
        if ((sub_36090( g_U11582[I]._fU12, iVar3 )) AND (g_U10973[g_U11582[I]._fU28]._fU0))
        {
            sub_36191( ref g_U11582[I]._fU32, g_U11582[I]._fU0, g_U11582[I]._fU24, g_U11582[I]._fU20 );
            sub_36851( I );
        }
        else
        {
            sub_16331( ref g_U11582[I]._fU32 );
            g_U11343._fU660[I] = 0;
        }
    }
    sub_37140();
    return;
}

int sub_36045(unknown uParam0)
{
    if (g_U11343._fU112[uParam0])
    {
        return 1;
    }
    return 0;
}

int sub_36090(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        return 1;
    }
    if (g_U11343._fU0[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_36191(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4, unknown uParam5)
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
            if (iParam4 == 0)
            {
                CHANGE_BLIP_DISPLAY( (uParam0^), 2 );
            }
        }
        CHANGE_BLIP_SPRITE( (uParam0^), uParam5 );
        CHANGE_BLIP_PRIORITY( (uParam0^), l_U6 );
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

int sub_36543(unknown uParam0)
{
    unknown uVar3;

    if (g_U11343._fU368[uParam0])
    {
        return 1;
    }
    if (sub_36585( g_U11582[uParam0]._fU16 ))
    {
        return 1;
    }
    if (sub_36045( g_U11582[uParam0]._fU12 ))
    {
        return 1;
    }
    if (NOT g_U12379)
    {
        uVar3 = g_U11582[uParam0]._fU12;
        if (g_U11343._fU0[uVar3])
        {
            if (g_U11582[uParam0]._fU24 == 1)
            {
                if (g_U10978 == g_U11582[uParam0]._fU28)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_36585(unknown uParam0)
{
    if (g_U11343._fU224[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_36851(unknown uParam0)
{
    if (DOES_BLIP_EXIST( g_U11582[uParam0]._fU32 ))
    {
        switch (uParam0)
        {
            case 5:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U11582[uParam0]._fU32, "BINCO" );
            break;
            case 42:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U11582[uParam0]._fU32, "ZIP" );
            break;
            case 41:
            case 40:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U11582[uParam0]._fU32, "PERSEUS" );
            break;
            case 11:
            case 20:
            case 62:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U11582[uParam0]._fU32, "RACEBLIP" );
            break;
        }
    }
    return;
}

void sub_37140()
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
    bVar3 = sub_36045( 19 );
    for ( I = 0; I < 15; I++ )
    {
        sub_37185( g_U11209[I]._fU20, bVar3 );
    }
    bVar3 = sub_36045( 16 );
    for ( I = 0; I < 7; I++ )
    {
        sub_37185( g_U11300[I]._fU20, bVar3 );
    }
    iVar4 = 0;
    for ( I = 0; I < 72; I++ )
    {
        if ((sub_36543( I )) AND (g_U10973[g_U11582[I]._fU28]._fU0))
        {
            iVar4++;
        }
    }
    bVar5 = false;
    if (iVar4 <= 3)
    {
        bVar5 = true;
    }
    for ( I = 0; I < 72; I++ )
    {
        bVar3 = sub_36543( I );
        if (bVar3)
        {
            if (NOT bVar5)
            {
                if (NOT (g_U10978 == g_U11582[I]._fU28))
                {
                    bVar3 = false;
                }
            }
        }
        sub_37185( g_U11582[I]._fU32, bVar3 );
    }
    bVar6 = false;
    for ( I = 0; I < 1; I++ )
    {
        bVar3 = false;
        if (g_U10984[I]._fU0)
        {
            if (g_U10978 == g_U10984[I]._fU40)
            {
                bVar3 = true;
                bVar6 = true;
            }
        }
        sub_37185( g_U10984[I]._fU32, bVar3 );
    }
    fVar10 = 99999.90000000;
    fVar11 = 0.00000000;
    iVar12 = -1;
    if (NOT bVar6)
    {
        if (NOT (IS_CHAR_DEAD( sub_16171() )))
        {
            GET_CHAR_COORDINATES( sub_16171(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
            for ( I = 0; I < 1; I++ )
            {
                if (g_U10984[I]._fU0)
                {
                    fVar11 = sub_37676( uVar7, g_U10984[I]._fU8 );
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
            for ( I = 0; I < 1; I++ )
            {
                bVar3 = false;
                if (iVar12 == I)
                {
                    bVar3 = true;
                }
                sub_37185( g_U10984[I]._fU32, bVar3 );
            }
        }
    }
    return;
}

void sub_37185(unknown uParam0, boolean bParam1)
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

void sub_37676(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

void sub_37874(int iParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (iParam0 == -1)
    {
        g_U10965 = 121;
        sub_37900();
        return;
    }
    if (g_U22960[iParam0]._fU8 == 0)
    {
        return;
    }
    sub_37959( iParam0 );
    uVar3 = g_U10965;
    uVar4 = g_U22960[iParam0]._fU100;
    SET_RICH_PRESENCE_TEMPLATESP1( uVar3, 1, uVar4 );
    return;
}

void sub_37900()
{
    unknown uVar2;

    uVar2 = g_U10965;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

void sub_37959(unknown uParam0)
{
    g_U10965 = g_U22960[uParam0]._fU8;
    if (g_U10965 >= 50000)
    {
        g_U10965 = sub_38005( g_U10965 );
    }
    return;
}

void sub_38005(unknown Result)
{
    return Result;
}

void sub_38232()
{
    sub_38247( ref g_U8782._fU0 );
    sub_38596( ref g_U8782._fU4 );
    sub_38840( ref g_U8782._fU8 );
    sub_39063( ref g_U8782._fU12 );
    sub_39271( ref g_U8782._fU16 );
    g_U8782._fU20 = -1;
    g_U8782._fU24 = -1;
    g_U8803[g_U8782._fU0] = 1;
    g_U8812[g_U8782._fU4] = 1;
    g_U8816[g_U8782._fU8] = 1;
    if (g_U8782._fU12 >= 0)
    {
        g_U8819[g_U8782._fU12] = 1;
    }
    if (g_U8782._fU16 >= 0)
    {
        g_U8821[g_U8782._fU16] = 1;
    }
    return;
}

void sub_38247(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_16171(), 1 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_16171(), 1 );
    bVar8 = false;
    for ( I = 0; I < 8; I++ )
    {
        if (NOT bVar8)
        {
            sub_38315( I, ref iVar6, ref iVar7 );
            if ((iVar6 == iVar3) AND (iVar7 == iVar4))
            {
                (uParam0^) = I;
                bVar8 = true;
            }
        }
    }
    if (NOT bVar8)
    {
        (uParam0^) = 8;
    }
    return;
}

void sub_38315(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        (uParam2^) = 0;
        break;
        case 1:
        (uParam1^) = 1;
        (uParam2^) = 0;
        break;
        case 2:
        (uParam1^) = 2;
        (uParam2^) = 0;
        break;
        case 3:
        (uParam1^) = 2;
        (uParam2^) = 1;
        break;
        case 4:
        (uParam1^) = 3;
        (uParam2^) = 0;
        break;
        case 5:
        (uParam1^) = 3;
        (uParam2^) = 1;
        break;
        case 6:
        (uParam1^) = 4;
        (uParam2^) = 0;
        break;
        case 7:
        (uParam1^) = 4;
        (uParam2^) = 1;
        break;
        default:
          case 8:
        (uParam1^) = 2147483647;
        (uParam2^) = 2147483647;
    }
    return;
}

void sub_38596(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_16171(), 2 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_16171(), 2 );
    bVar8 = false;
    for ( I = 0; I < 3; I++ )
    {
        if (NOT bVar8)
        {
            sub_38664( I, ref iVar6, ref iVar7 );
            if ((iVar6 == iVar3) AND (iVar7 == iVar4))
            {
                (uParam0^) = I;
                bVar8 = true;
            }
        }
    }
    if (NOT bVar8)
    {
        (uParam0^) = 3;
    }
    return;
}

void sub_38664(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        (uParam2^) = 0;
        break;
        case 1:
        (uParam1^) = 1;
        (uParam2^) = 0;
        break;
        case 2:
        (uParam1^) = 1;
        (uParam2^) = 1;
        break;
        default:
          case 3:
        (uParam1^) = 2147483647;
        (uParam2^) = 2147483647;
    }
    return;
}

void sub_38840(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_16171(), 5 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_16171(), 5 );
    bVar8 = false;
    for ( I = 0; I < 2; I++ )
    {
        if (NOT bVar8)
        {
            sub_38908( I, ref iVar6, ref iVar7 );
            if ((iVar6 == iVar3) AND (iVar7 == iVar4))
            {
                (uParam0^) = I;
                bVar8 = true;
            }
        }
    }
    if (NOT bVar8)
    {
        (uParam0^) = 2;
    }
    return;
}

void sub_38908(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        (uParam2^) = 0;
        break;
        case 1:
        (uParam1^) = 1;
        (uParam2^) = 0;
        break;
        default:
          case 2:
        (uParam1^) = 2147483647;
        (uParam2^) = 2147483647;
    }
    return;
}

void sub_39063(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;
    unknown uVar7;
    unknown uVar8;

    GET_CHAR_PROP_INDEX( sub_16171(), 0, ref iVar3 );
    (uParam0^) = 1;
    bVar6 = false;
    for ( I = 0; I <= 1; I++ )
    {
        if (NOT bVar6)
        {
            sub_39116( I, ref iVar5 );
            if (iVar3 == iVar5)
            {
                (uParam0^) = I;
                bVar6 = true;
            }
        }
    }
    if ((uParam0^) == 0)
    {
        uVar7 = GET_CHAR_DRAWABLE_VARIATION( sub_16171(), 8 );
        uVar8 = GET_CHAR_TEXTURE_VARIATION( sub_16171(), 8 );
    }
    if (NOT bVar6)
    {
        (uParam0^) = 1;
    }
    return;
}

void sub_39116(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = -1;
        break;
        default:
          case 1: (uParam1^) = 2147483647;
    }
    return;
}

void sub_39271(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;

    GET_CHAR_PROP_INDEX( sub_16171(), 1, ref iVar3 );
    bVar6 = false;
    for ( I = 0; I <= 1; I++ )
    {
        if (NOT bVar6)
        {
            sub_39320( I, ref iVar5 );
            if (iVar3 == iVar5)
            {
                (uParam0^) = I;
                bVar6 = true;
            }
        }
    }
    if (NOT bVar6)
    {
        (uParam0^) = 1;
    }
    return;
}

void sub_39320(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = -1;
        break;
        default:
          case 1: (uParam1^) = 2147483647;
    }
    return;
}

void sub_39591()
{
    if (l_U206)
    {
        return;
    }
    DO_SCREEN_FADE_IN( 1000 );
    if (IS_PLAYER_PLAYING( sub_8409() ))
    {
        SET_PLAYER_CONTROL( sub_8409(), 1 );
    }
    l_U206 = 1;
    return;
}

void sub_39768(boolean bParam0)
{
    int I;

    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -1141632236, -28737275 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 2052240693, 1699083005 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -1313618655, -1366882930 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -740515878, -1143889885 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 256624776, -1143889885 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -529900459, -855358840 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 163992799, -855358840 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -1031741483, -530945740 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -285371601, -530945740 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 13155365, 1993446944 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 288897752, 1993446944 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -843141289, 459792206 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -670316162, 459792206 );
    I = 0;
    for ( I = 0; I < g_U43011; I++ )
    {
        if (bParam0)
        {
            if (DOES_OBJECT_EXIST( g_U43011[I] ))
            {
                DELETE_OBJECT( ref g_U43011[I] );
            }
        }
        g_U43011[I] = nil;
    }
    for ( I = 0; I < g_U43018; I++ )
    {
        if (bParam0)
        {
            if (DOES_OBJECT_EXIST( g_U43018[I] ))
            {
                DELETE_OBJECT( ref g_U43018[I] );
            }
        }
        g_U43018[I] = nil;
    }
    return;
}

void sub_40507()
{
    sub_1080( 0 );
    g_U0 = 0;
    g_U12382[0]._fU0 = 1;
    SET_TIME_OF_DAY( 18, 0 );
    return;
}

void sub_40556()
{
    int Result;

    Result = 1;
    if (g_U10555 == -1)
    {
        PRINTSTRING( "---> WAITING FOR: Maximum Stunt Jumps value to be set up\n" );
        Result = 0;
    }
    g_U10554 = 0;
    if (g_U43102 == -1)
    {
        PRINTSTRING( "---> WAITING FOR: Maximum Seagull Packages value to be set up\n" );
        Result = 0;
    }
    g_U43103 = 0;
    return Result;
}

void sub_40826()
{
    int iVar2;
    int iVar3;

    if (ALLOW_ONE_TIME_ONLY_COMMANDS_TO_RUN())
    {
        sub_40847();
        sub_41102();
        sub_37900();
        g_U819 = 0;
        g_U10970 = 0;
        g_U10971 = -1;
        g_U10972 = 0;
        g_U30324 = 0;
        g_U30325 = 11;
        g_U951 = 0;
        g_U952 = 0;
        g_U43597 = 0;
        g_U43628 = 0;
        sub_19601();
        g_U10534 = 0;
        g_U10535 = 0;
        g_U10540 = nil;
        sub_45205();
        sub_45223( 1 );
        sub_45385();
        sub_46107();
        sub_7597();
        sub_46223();
        sub_58446();
        iVar2 = 1;
        sub_58550( iVar2 );
        g_U10568 = 1;
        sub_16914();
        g_U10953._fU24 = 1;
        g_U9272 = 0;
        g_U9273 = 0;
        g_U9275 = 0;
        g_U9276 = 0;
        g_U25 = 0;
        FORCE_LOADING_SCREEN( 0 );
        SUPPRESS_FADE_IN_AFTER_DEATH_ARREST( 0 );
        iVar3 = 0;
        sub_39768( iVar3 );
        g_U2792 = 1;
        SET_CHAR_COMPONENT_VARIATION( sub_16171(), 3, 0, 0 );
        g_U43561 = 0;
        g_U30153 = 0;
        g_U574 = 0;
        g_U30197 = -1;
        g_U30182 = nil;
        g_U30183 = nil;
        g_U30184 = nil;
        g_U30185 = nil;
        sub_59030();
        sub_59851();
        sub_60073();
        l_U941 = 0;
        g_U12381 = 0;
        sub_60135();
        sub_7644();
        sub_60445();
        StrCopy( ref g_U10966, "", 16 );
        g_U43642 = 0;
        g_U10935 = 0;
        SET_PLAYER_CAN_BE_HASSLED_BY_GANGS( sub_8409(), 1 );
        g_U9200 = 0;
        g_U9199 = 0;
        SET_HIDE_WEAPON_ICON( 0 );
        FORCE_NOISE_OFF( 0 );
        SET_GPS_REMAINS_WHEN_TARGET_REACHED_FLAG( 0 );
        SET_LOCAL_PLAYER_VOICE( "LUIS" );
        SET_LOCAL_PLAYER_PAIN_VOICE( "LUIS_EXTRAS" );
        SET_PLAYER_PAIN_ROOT_BANK_NAME( "LUIS" );
        l_U940 = 1;
    }
    if (l_U940)
    {
        SET_DRAW_PLAYER_COMPONENT( 8, 0 );
        l_U940 = 0;
    }
    return;
}

void sub_40847()
{
    int I;

    for ( I = 1; I <= 39; I++ )
    {
        sub_40872( I );
    }
    sub_40872( 66 );
    sub_40872( 67 );
    sub_40872( 352 );
    sub_40872( 353 );
    for ( I = 354; I <= 358; I++ )
    {
        sub_40872( I );
    }
    for ( I = 662; I <= 667; I++ )
    {
        sub_40872( I );
    }
    for ( I = 55; I <= 64; I++ )
    {
        sub_40872( I );
    }
    for ( I = 331; I <= 350; I++ )
    {
        sub_40872( I );
    }
    return;
}

void sub_40872(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 1)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 0 );
    }
    return;
}

void sub_41102()
{
    sub_41113( 3, 3 );
    sub_41113( 7, 7 );
    return;
}

void sub_41113(unknown uParam0, unknown uParam1)
{
    boolean bVar4;
    boolean bVar5;

    if (NOT g_U20825[uParam1]._fU16)
    {
        if (g_U20825[uParam1]._fU8)
        {
            g_U16014[uParam1]._fU8[0]._fU0[16] = 1;
        }
        return;
    }
    sub_41186( uParam0 );
    bVar4 = l_U197 > g_U20825[uParam1]._fU88;
    if (bVar4)
    {
        g_U20825[uParam1]._fU88 = l_U197 + 60000;
    }
    sub_44854( uParam1 );
    bVar5 = l_U197 > g_U20825[uParam1]._fU84;
    if (bVar5)
    {
        g_U20825[uParam1]._fU84 = l_U197 + 60000;
    }
    g_U16014[uParam1]._fU8[0]._fU0[2] = 0;
    return;
}

void sub_41186(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U14925[uParam0]._fU80._fU0;
    iVar4 = 1;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U14925[uParam0]._fU80._fU0 = 0;
        sub_41307( uParam0 );
        sub_2842( uParam0, 0 );
        break;
        case 2:
        g_U14925[uParam0]._fU0._fU0 = 6;
        sub_43580( uParam0, iVar4 );
        break;
        case 3:
        g_U14925[uParam0]._fU80._fU0 = 6;
        sub_43580( uParam0, iVar4 );
        break;
        case 6:
        sub_43580( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_43793( uParam0, iVar4 );
        g_U5 = 0;
        break;
        default:
        sub_24711( "Main_Missions: Cancel_Strand_Friend_Mission(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_41307(unknown uParam0)
{
    if ((NOT (g_U14925[uParam0]._fU80._fU0 == 0)) AND (NOT (g_U14925[uParam0]._fU80._fU0 == 1)))
    {
        sub_41364( uParam0 );
        sub_41513( uParam0 );
        return;
    }
    if (g_U14925[uParam0]._fU80._fU0 == 1)
    {
        sub_41364( uParam0 );
        sub_41706( uParam0 );
        return;
    }
    if (g_U14925[uParam0]._fU80._fU0 == 0)
    {
        sub_41513( uParam0 );
    }
    if ((NOT (g_U14925[uParam0]._fU0._fU0 == 0)) AND (NOT (g_U14925[uParam0]._fU0._fU0 == 1)))
    {
        sub_41364( uParam0 );
        return;
    }
    if (g_U14925[uParam0]._fU0._fU0 == 1)
    {
        sub_42788( uParam0 );
        return;
    }
    if (g_U14925[uParam0]._fU0._fU0 == 0)
    {
        sub_41364( uParam0 );
    }
    return;
}

void sub_41364(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U14925[uParam0]._fU0._fU64 )))
    {
        return;
    }
    REMOVE_BLIP_AND_CLEAR_INDEX( ref g_U14925[uParam0]._fU0._fU64 );
    g_U14925[uParam0]._fU0._fU64 = nil;
    uVar3 = g_U14925[uParam0]._fU0._fU68;
    g_U14925[uParam0]._fU0._fU68 = 15;
    CLEAR_BIT( ref g_U10756[uVar3]._fU0, 3 );
    return;
}

void sub_41513(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U14925[uParam0]._fU80._fU64 )))
    {
        return;
    }
    REMOVE_BLIP_AND_CLEAR_INDEX( ref g_U14925[uParam0]._fU80._fU64 );
    g_U14925[uParam0]._fU80._fU64 = nil;
    uVar3 = g_U14925[uParam0]._fU80._fU68;
    g_U14925[uParam0]._fU80._fU68 = 15;
    CLEAR_BIT( ref g_U10756[uVar3]._fU0, 3 );
    return;
}

void sub_41706(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_41513( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U10755;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U14925[uParam0]._fU80._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U14925[uParam0]._fU80._fU4;
        iVar8 = sub_41889( uParam0, iVar7 );
        iVar9 = g_U22960[iVar8]._fU16;
        vVar3 = {g_U10756[iVar9]._fU4};
        uVar6 = g_U10756[iVar9]._fU16;
        bVar10 = true;
        g_U14925[uParam0]._fU80._fU68 = iVar9;
        SET_BIT( ref g_U10756[iVar9]._fU0, 3 );
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_24711( "Main_Missions: Add_Friend_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U14925[uParam0]._fU80._fU64 );
        CHANGE_BLIP_DISPLAY( g_U14925[uParam0]._fU80._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U14925[uParam0]._fU80._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U14925[uParam0]._fU80._fU64, l_U7 );
        if ((NOT g_U28805._fU4) || (NOT g_U14925[uParam0]._fU80._fU72))
        {
            CHANGE_BLIP_DISPLAY( g_U14925[uParam0]._fU80._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U14925[uParam0]._fU80._fU76 = iVar12 + 10000;
        FLASH_BLIP( g_U14925[uParam0]._fU80._fU64, 1 );
        CHANGE_BLIP_PRIORITY( g_U14925[uParam0]._fU80._fU64, l_U8 );
        sub_42546( g_U14925[uParam0]._fU80._fU64, iVar9 );
        return;
    }
    return;
}

int sub_41889(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 11))
    {
        sub_24711( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U28562[iParam0]._fU0;
    iVar5 = g_U28562[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U22960[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

void sub_42546(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    switch (uVar4)
    {
        case 3:
        sub_42598( ref uParam0, -448.57680000, 364.07570000, 9.22830000, 354.79170000 );
        break;
        default:
    }
    return;
}

void sub_42598(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2668 = (uParam0^);
        g_U2683 = {uParam1};
        g_U2681 = uParam4;
    }
    return;
}

void sub_42788(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_41364( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U10755;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U14925[uParam0]._fU0._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U14925[uParam0]._fU0._fU4;
        iVar8 = sub_41889( uParam0, iVar7 );
        iVar9 = g_U22960[iVar8]._fU16;
        vVar3 = {g_U10756[iVar9]._fU4};
        uVar6 = g_U10756[iVar9]._fU16;
        bVar10 = true;
        g_U14925[uParam0]._fU0._fU68 = iVar9;
        SET_BIT( ref g_U10756[iVar9]._fU0, 3 );
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_24711( "Main_Missions: Add_Primary_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U14925[uParam0]._fU0._fU64 );
        CHANGE_BLIP_DISPLAY( g_U14925[uParam0]._fU0._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U14925[uParam0]._fU0._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U14925[uParam0]._fU0._fU64, l_U7 );
        if ((NOT g_U28805._fU4) || (NOT g_U14925[uParam0]._fU0._fU72))
        {
            CHANGE_BLIP_DISPLAY( g_U14925[uParam0]._fU0._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U14925[uParam0]._fU0._fU76 = iVar12 + 10000;
        CHANGE_BLIP_PRIORITY( g_U14925[uParam0]._fU0._fU64, l_U8 );
        if (g_U22)
        {
            FLASH_BLIP( g_U14925[uParam0]._fU0._fU64, 1 );
            g_U22 = 0;
        }
        else
        {
            FLASH_BLIP_ALT( g_U14925[uParam0]._fU0._fU64, 1 );
            g_U22 = 1;
        }
        sub_42546( g_U14925[uParam0]._fU0._fU64, iVar9 );
        return;
    }
    return;
}

void sub_43580(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        if (NOT (HAS_SCRIPT_LOADED( ref g_U14925[uParam0]._fU80._fU24 )))
        {
            return;
        }
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U14925[uParam0]._fU80._fU24 );
        sub_2842( uParam0, 0 );
    }
    else if (NOT (HAS_SCRIPT_LOADED( ref g_U14925[uParam0]._fU0._fU24 )))
    {
        return;
    }
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U14925[uParam0]._fU0._fU24 );
    sub_2600( uParam0, 0 );;
    sub_41307( uParam0 );
    return;
}

void sub_43793(int iParam0, boolean bParam1)
{
    boolean bVar4;
    int iVar5;

    bVar4 = true;
    if (bParam1)
    {
        if (g_U14925[iParam0]._fU80._fU60 != nil)
        {
            DESTROY_THREAD( g_U14925[iParam0]._fU80._fU60 );
        }
        sub_2842( iParam0, 0 );
        bVar4 = false;
    }
    else if (g_U14925[iParam0]._fU0._fU60 != nil)
    {
        DESTROY_THREAD( g_U14925[iParam0]._fU0._fU60 );
    }
    iVar5 = g_U14925[iParam0]._fU0._fU56;
    if ((iVar5 == 5) || (iVar5 == 6))
    {
        bVar4 = false;
    }
    if (bVar4)
    {
        g_U12382[iParam0]._fU28 = 1;
        if (iParam0 == 3)
        {
            g_U12382[7]._fU28 = 1;
        }
    }
    sub_2600( iParam0, 0 );
    if (bVar4)
    {
        sub_37900();
    }
    g_U12382[iParam0]._fU12 = 0;;
    if (iParam0 == 9)
    {
        sub_44052();
        return;
    }
    sub_41307( iParam0 );
    if (bVar4)
    {
        g_U12379 = 0;
    }
    if (bVar4)
    {
        sub_44618( iParam0 );
    }
    if (g_U3)
    {
        if (g_U4)
        {
            WAIT( 1500 );
            g_U5 = 1;
        }
    }
    return;
}

void sub_44052()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;

    bVar2 = false;
    if (IS_PLAYER_PLAYING( sub_8409() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_16171() ))
        {
            if (NOT (g_U16004._fU24 == -1))
            {
                uVar3 = g_U28585[g_U16004._fU24]._fU36;
                if (IS_CHAR_IN_MODEL( sub_16171(), uVar3 ))
                {
                    bVar2 = true;
                }
            }
        }
    }
    uVar4 = g_U16004._fU24;
    sub_4177();
    if (bVar2)
    {
        g_U16004._fU8 = 1;
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_16171(), ref g_U16004._fU32 );
        g_U16004._fU24 = uVar4;
    }
    l_U18 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_8409(), 0 );
    sub_44230();
    if (IS_PLAYER_PLAYING( sub_8409() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_16171() )))
        {
            SET_PLAYER_CONTROL( sub_8409(), 1 );
        }
    }
    return;
}

void sub_44230()
{
    unknown uVar2;
    float fVar3;
    boolean bVar4;

    uVar2 = nil;
    fVar3 = 0.00000000;
    bVar4 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_8409() )))
    {
        return;
    }
    if (IS_CHAR_DEAD( sub_16171() ))
    {
        l_U18 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_8409(), 1 );
        return;
    }
    if (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_16171() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_16171(), ref uVar2 );
        if ((NOT (IS_CHAR_IN_MODEL( sub_16171(), 837858166 ))) AND (NOT (IS_CHAR_IN_MODEL( sub_16171(), -488123221 ))))
        {
            GET_CAR_SPEED( uVar2, ref fVar3 );
            if (fVar3 < 0.40000000)
            {
                if (g_U16004._fU20)
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
        if (l_U18)
        {
            return;
        }
        l_U18 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_8409(), 1 );
    }
    else if (NOT l_U18)
    {
        return;
    }
    l_U18 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_8409(), 0 );;
    return;
}

void sub_44618(int iParam0)
{
    if (NOT (g_U22948 == iParam0))
    {
        return;
    }
    g_U22947 = 1;
    return;
}

void sub_44854(unknown uParam0)
{
    g_U20825[uParam0]._fU16 = 0;
    g_U20825[uParam0]._fU20 = 0;
    g_U20825[uParam0]._fU24 = 0;
    g_U20825[uParam0]._fU28 = 0;
    g_U20825[uParam0]._fU12 = 0;
    g_U20825[uParam0]._fU180 = 8;
    g_U20825[uParam0]._fU184 = 5;
    sub_1547( ref g_U20825[uParam0]._fU32 );
    sub_1547( ref g_U20825[uParam0]._fU48 );
    return;
}

void sub_45205()
{
    return;
}

void sub_45223(boolean bParam0)
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
        if ((NOT (g_U10534 == 0)) || (NOT (g_U10535 == 0)))
        {
            StrCopy( ref g_U10536, "", 16 );
            g_U10534 = 0;
            g_U10535 = 0;
            g_U10540 = nil;
            sub_45310();
            if (IS_PLAYER_PLAYING( sub_8409() ))
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_8409(), 1 );
            }
        }
    }
    return;
}

void sub_45310()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_45385()
{
    sub_45394();
    sub_1547( ref g_U10938._fU32 );
    g_U10938._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_45569();
    return;
}

void sub_45394()
{
    CLEAR_BIT( ref g_U10938._fU0, 2 );
    CLEAR_BIT( ref g_U10938._fU0, 3 );
    CLEAR_BIT( ref g_U10938._fU0, 4 );
    CLEAR_BIT( ref g_U10938._fU0, 5 );
    CLEAR_BIT( ref g_U10938._fU0, 6 );
    CLEAR_BIT( ref g_U10938._fU0, 8 );
    CLEAR_BIT( ref g_U10938._fU0, 9 );
    CLEAR_BIT( ref g_U10938._fU0, 10 );
    g_U10938._fU12 = 0;
    return;
}

void sub_45569()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_45607( 1, g_U575[I] )) == 0)
        {
            sub_45858( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_45979())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U95._fU404 = 1000;
    }
    g_U95._fU404 = 1000;
    return;
}

int sub_45607(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_45858(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_8194( g_U575 - 1 );
    return;
}

int sub_45979()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_45607( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_46107()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_46129();
    if (iVar3 > g_U42731._fU4)
    {
        g_U42731._fU4 = iVar3;
        g_U42731._fU8 = iVar2;
    }
    return;
}

int sub_46129()
{
    if (g_U15811[0])
    {
        return 27000;
    }
    return 15000;
}

void sub_46223()
{
    SET_STAT_FRONTEND_DISPLAY_TYPE( 188, 2 );
    SET_STAT_FRONTEND_VISIBLE_AFTER_INCREMENTED( 188 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 191, 2 );
    SET_STAT_FRONTEND_VISIBLE_AFTER_INCREMENTED( 191 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 192, 2 );
    SET_STAT_FRONTEND_VISIBLE_AFTER_INCREMENTED( 192 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 195, 2 );
    SET_STAT_FRONTEND_VISIBLE_AFTER_INCREMENTED( 195 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 196, 2 );
    SET_STAT_FRONTEND_VISIBLE_AFTER_INCREMENTED( 196 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 197, 2 );
    SET_STAT_FRONTEND_VISIBLE_AFTER_INCREMENTED( 197 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 198, 2 );
    SET_STAT_FRONTEND_VISIBLE_AFTER_INCREMENTED( 198 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 199, 2 );
    SET_STAT_FRONTEND_VISIBLE_AFTER_INCREMENTED( 199 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 200, 2 );
    SET_STAT_FRONTEND_VISIBLE_AFTER_INCREMENTED( 200 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 201, 2 );
    SET_STAT_FRONTEND_VISIBLE_AFTER_INCREMENTED( 201 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 395, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 395, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 403, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 403, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 404, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 404, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 405, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 405, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 406, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 406, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 407, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 407, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 408, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 408, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 409, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 409, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 410, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 410, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 412, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 412, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 413, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 413, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 414, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 414, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 243, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 243, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 244, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 244, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 245, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 245, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 246, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 246, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 212, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 212, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 247, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 247, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 203, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 203, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 204, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 204, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 205, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 205, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 206, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 206, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 207, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 207, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 208, 8 );
    SET_STAT_FRONTEND_VISIBILITY( 208, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 235, 3 );
    SET_STAT_FRONTEND_VISIBILITY( 235, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 680, 11 );
    SET_STAT_FRONTEND_VISIBLE_AFTER_INCREMENTED( 680 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 229, 3 );
    SET_STAT_FRONTEND_VISIBILITY( 229, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 209, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 209, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 236, 3 );
    SET_STAT_FRONTEND_VISIBILITY( 236, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 210, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 210, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 211, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 211, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 187, 2 );
    SET_STAT_FRONTEND_VISIBILITY( 187, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 136, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 136, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 137, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 137, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 679, 11 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 679 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 189, 2 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 189 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 190, 2 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 190 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 193, 2 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 193 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 194, 2 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 194 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 202, 2 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 202 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 213, 2 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 213 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 214, 2 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 214 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 215, 2 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 215 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 216, 2 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 216 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 217, 2 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 217 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 218, 2 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 218 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 219, 2 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 219 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 220, 2 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 220 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 221, 2 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 221 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 222, 2 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 222 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 223, 2 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 223 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 224, 2 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 224 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 225, 2 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 225 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 226, 2 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 226 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 227, 2 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 227 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 230, 2 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 230 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 231, 2 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 231 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 232, 2 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 232 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 233, 2 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 233 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 234, 2 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 234 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 237, 2 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 237 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 0 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 1 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 2 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 3 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 4 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 5 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 6 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 7 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 8 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 9 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 10 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 11 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 12 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 13 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 14 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 15 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 16 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 17 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 18 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 19 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 20 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 21 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 22 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 23 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 24 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 25 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 26 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 27 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 28 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 29 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 270 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 269 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 397 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 399 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 411 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 273 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 91 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 107 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 92 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 109 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 30 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 31 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 32 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 33 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 34 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 35 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 36 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 37 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 38 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 39 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 50 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 668 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 258 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 280 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 281 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 327 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 326 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 325 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 332 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 333 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 334 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 56 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 335 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 336 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 57 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 337 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 338 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 58 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 339 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 340 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 59 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 341 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 342 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 60 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 343 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 344 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 61 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 345 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 346 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 62 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 347 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 348 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 63 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 349 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 350 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 64 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 352 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 66 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 353 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 67 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 354 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 355 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 356 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 357 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 358 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 663 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 664 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 665 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 666 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 667 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 363 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 359 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 360 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 284 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 469 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 285 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 361 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 364 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 365 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 366 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 315 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 367 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 373 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 372 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 371 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 370 );
    if (g_U43463[0] == 0)
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 473, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 473 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 189, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 189 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 474, 9 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 474 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 475, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 475 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 476, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 476 );
        SET_INT_STAT( 473, -1 );
        SET_INT_STAT( 189, -1 );
        SET_INT_STAT( 474, -1 );
        SET_INT_STAT( 475, -1 );
        SET_INT_STAT( 476, -1 );
    }
    else
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 473, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 473 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 189, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 189 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 474, 9 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 474 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 475, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 475 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 476, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 476 );
    }
    if (g_U43463[1] == 0)
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 477, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 477 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 190, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 190 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 478, 9 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 478 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 479, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 479 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 480, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 480 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 481, 14 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 481 );
        SET_INT_STAT( 477, -1 );
        SET_INT_STAT( 190, -1 );
        SET_INT_STAT( 478, -1 );
        SET_INT_STAT( 479, -1 );
        SET_INT_STAT( 480, -1 );
        SET_INT_STAT( 481, -1 );
    }
    else
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 477, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 477 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 190, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 190 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 478, 9 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 478 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 479, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 479 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 480, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 480 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 481, 14 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 481 );
    }
    if (g_U43463[2] == 0)
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 482, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 482 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 193, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 193 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 483, 9 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 483 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 484, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 484 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 485, 0 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 485 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 486, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 486 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 487, 14 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 487 );
        SET_INT_STAT( 482, -1 );
        SET_INT_STAT( 193, -1 );
        SET_INT_STAT( 483, -1 );
        SET_INT_STAT( 484, -1 );
        SET_INT_STAT( 485, -1 );
        SET_INT_STAT( 486, -1 );
        SET_INT_STAT( 487, -1 );
    }
    else
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 482, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 482 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 193, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 193 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 483, 9 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 483 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 484, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 484 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 485, 0 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 485 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 486, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 486 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 487, 14 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 487 );
    }
    if (g_U43463[3] == 0)
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 488, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 488 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 194, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 194 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 489, 9 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 489 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 490, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 490 );
        SET_INT_STAT( 488, -1 );
        SET_INT_STAT( 194, -1 );
        SET_INT_STAT( 489, -1 );
        SET_INT_STAT( 490, -1 );
    }
    else
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 488, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 488 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 194, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 194 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 489, 9 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 489 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 490, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 490 );
    }
    if (g_U43463[5] == 0)
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 491, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 491 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 222, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 222 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 492, 9 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 492 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 493, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 493 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 494, 14 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 494 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 495, 14 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 495 );
        SET_INT_STAT( 491, -1 );
        SET_INT_STAT( 222, -1 );
        SET_INT_STAT( 492, -1 );
        SET_INT_STAT( 493, -1 );
        SET_INT_STAT( 494, -1 );
        SET_INT_STAT( 495, -1 );
    }
    else
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 491, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 491 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 222, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 222 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 492, 9 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 492 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 493, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 493 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 494, 14 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 494 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 495, 14 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 495 );
    }
    if (g_U43463[4] == 0)
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 496, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 496 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 221, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 221 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 497, 9 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 497 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 498, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 498 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 499, 9 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 499 );
        SET_INT_STAT( 496, -1 );
        SET_INT_STAT( 221, -1 );
        SET_INT_STAT( 497, -1 );
        SET_INT_STAT( 498, -1 );
        SET_INT_STAT( 499, -1 );
    }
    else
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 496, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 496 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 221, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 221 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 497, 9 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 497 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 498, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 498 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 499, 9 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 499 );
    }
    if (g_U43463[6] == 0)
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 500, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 500 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 220, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 220 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 501, 9 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 501 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 502, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 502 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 503, 14 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 503 );
        SET_INT_STAT( 500, -1 );
        SET_INT_STAT( 220, -1 );
        SET_INT_STAT( 501, -1 );
        SET_INT_STAT( 502, -1 );
        SET_INT_STAT( 503, -1 );
    }
    else
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 500, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 500 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 220, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 220 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 501, 9 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 501 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 502, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 502 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 503, 14 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 503 );
    }
    if (g_U43463[7] == 0)
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 504, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 504 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 237, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 237 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 505, 9 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 505 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 506, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 506 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 507, 14 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 507 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 508, 9 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 508 );
        SET_INT_STAT( 504, -1 );
        SET_INT_STAT( 237, -1 );
        SET_INT_STAT( 505, -1 );
        SET_INT_STAT( 506, -1 );
        SET_INT_STAT( 507, -1 );
        SET_INT_STAT( 508, -1 );
    }
    else
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 504, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 504 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 237, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 237 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 505, 9 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 505 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 506, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 506 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 507, 14 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 507 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 508, 9 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 508 );
    }
    if (g_U43463[8] == 0)
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 509, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 509 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 223, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 223 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 510, 9 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 510 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 511, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 511 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 512, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 512 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 513, 0 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 513 );
        SET_INT_STAT( 509, -1 );
        SET_INT_STAT( 223, -1 );
        SET_INT_STAT( 510, -1 );
        SET_INT_STAT( 511, -1 );
        SET_INT_STAT( 512, -1 );
        SET_INT_STAT( 513, -1 );
    }
    else
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 509, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 509 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 223, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 223 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 510, 9 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 510 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 511, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 511 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 512, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 512 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 513, 0 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 513 );
    }
    if (g_U43463[10] == 0)
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 514, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 514 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 232, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 232 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 515, 9 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 515 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 516, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 516 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 517, 9 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 517 );
        SET_INT_STAT( 514, -1 );
        SET_INT_STAT( 232, -1 );
        SET_INT_STAT( 515, -1 );
        SET_INT_STAT( 516, -1 );
        SET_INT_STAT( 517, -1 );
    }
    else
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 514, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 514 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 232, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 232 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 515, 9 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 515 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 516, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 516 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 517, 9 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 517 );
    }
    if (g_U43463[11] == 0)
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 518, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 518 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 234, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 234 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 519, 9 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 519 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 520, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 520 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 521, 0 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 521 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 522, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 522 );
        SET_INT_STAT( 518, -1 );
        SET_INT_STAT( 234, -1 );
        SET_INT_STAT( 519, -1 );
        SET_INT_STAT( 520, -1 );
        SET_INT_STAT( 521, -1 );
        SET_INT_STAT( 522, -1 );
    }
    else
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 518, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 518 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 234, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 234 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 519, 9 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 519 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 520, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 520 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 521, 0 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 521 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 522, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 522 );
    }
    if (g_U43463[12] == 0)
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 523, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 523 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 216, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 216 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 524, 9 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 524 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 525, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 525 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 526, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 526 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 527, 0 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 527 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 528, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 528 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 529, 14 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 529 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 530, 12 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 530 );
        SET_INT_STAT( 523, -1 );
        SET_INT_STAT( 216, -1 );
        SET_INT_STAT( 524, -1 );
        SET_INT_STAT( 525, -1 );
        SET_INT_STAT( 526, -1 );
        SET_INT_STAT( 527, -1 );
        SET_INT_STAT( 528, -1 );
        SET_INT_STAT( 529, -1 );
        SET_INT_STAT( 530, -1 );
    }
    else
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 523, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 523 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 216, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 216 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 524, 9 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 524 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 525, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 525 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 526, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 526 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 527, 0 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 527 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 528, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 528 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 529, 14 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 529 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 530, 12 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 530 );
    }
    if (g_U43463[13] == 0)
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 531, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 531 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 217, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 217 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 532, 9 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 532 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 533, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 533 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 534, 14 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 534 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 535, 14 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 535 );
        SET_INT_STAT( 531, -1 );
        SET_INT_STAT( 217, -1 );
        SET_INT_STAT( 532, -1 );
        SET_INT_STAT( 533, -1 );
        SET_INT_STAT( 534, -1 );
        SET_INT_STAT( 535, -1 );
    }
    else
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 531, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 531 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 217, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 217 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 532, 9 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 532 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 533, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 533 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 534, 14 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 534 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 535, 14 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 535 );
    }
    if (g_U43463[14] == 0)
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 536, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 536 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 225, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 225 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 537, 9 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 537 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 538, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 538 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 539, 12 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 539 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 540, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 540 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 541, 14 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 541 );
        SET_INT_STAT( 536, -1 );
        SET_INT_STAT( 225, -1 );
        SET_INT_STAT( 537, -1 );
        SET_INT_STAT( 538, -1 );
        SET_INT_STAT( 539, -1 );
        SET_INT_STAT( 540, -1 );
        SET_INT_STAT( 541, -1 );
    }
    else
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 536, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 536 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 225, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 225 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 537, 9 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 537 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 538, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 538 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 539, 12 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 539 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 540, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 540 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 541, 14 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 541 );
    }
    if (g_U43463[15] == 0)
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 542, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 542 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 213, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 213 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 543, 9 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 543 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 544, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 544 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 545, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 545 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 546, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 546 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 547, 0 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 547 );
        SET_INT_STAT( 542, -1 );
        SET_INT_STAT( 213, -1 );
        SET_INT_STAT( 543, -1 );
        SET_INT_STAT( 544, -1 );
        SET_INT_STAT( 545, -1 );
        SET_INT_STAT( 546, -1 );
        SET_INT_STAT( 547, -1 );
    }
    else
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 542, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 542 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 213, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 213 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 543, 9 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 543 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 544, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 544 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 545, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 545 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 546, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 546 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 547, 0 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 547 );
    }
    if (g_U43463[16] == 0)
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 548, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 548 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 214, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 214 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 549, 9 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 549 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 550, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 550 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 551, 0 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 551 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 552, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 552 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 553, 0 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 553 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 554, 14 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 554 );
        SET_INT_STAT( 548, -1 );
        SET_INT_STAT( 214, -1 );
        SET_INT_STAT( 549, -1 );
        SET_INT_STAT( 550, -1 );
        SET_INT_STAT( 551, -1 );
        SET_INT_STAT( 552, -1 );
        SET_INT_STAT( 553, -1 );
        SET_INT_STAT( 554, -1 );
    }
    else
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 548, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 548 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 214, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 214 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 549, 9 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 549 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 550, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 550 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 551, 0 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 551 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 552, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 552 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 553, 0 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 553 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 554, 14 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 554 );
    }
    if (g_U43463[17] == 0)
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 555, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 555 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 215, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 215 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 556, 9 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 556 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 557, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 557 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 558, 0 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 558 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 559, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 559 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 560, 14 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 560 );
        SET_INT_STAT( 555, -1 );
        SET_INT_STAT( 215, -1 );
        SET_INT_STAT( 556, -1 );
        SET_INT_STAT( 557, -1 );
        SET_INT_STAT( 558, -1 );
        SET_INT_STAT( 559, -1 );
        SET_INT_STAT( 560, -1 );
    }
    else
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 555, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 555 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 215, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 215 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 556, 9 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 556 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 557, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 557 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 558, 0 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 558 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 559, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 559 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 560, 14 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 560 );
    }
    if (g_U43463[18] == 0)
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 561, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 561 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 231, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 231 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 562, 9 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 562 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 563, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 563 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 564, 14 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 564 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 565, 0 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 565 );
        SET_INT_STAT( 561, -1 );
        SET_INT_STAT( 231, -1 );
        SET_INT_STAT( 562, -1 );
        SET_INT_STAT( 563, -1 );
        SET_INT_STAT( 564, -1 );
        SET_INT_STAT( 565, -1 );
    }
    else
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 561, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 561 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 231, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 231 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 562, 9 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 562 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 563, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 563 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 564, 14 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 564 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 565, 0 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 565 );
    }
    if (g_U43463[19] == 0)
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 566, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 566 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 218, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 218 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 567, 9 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 567 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 568, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 568 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 569, 0 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 569 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 570, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 570 );
        SET_INT_STAT( 566, -1 );
        SET_INT_STAT( 218, -1 );
        SET_INT_STAT( 567, -1 );
        SET_INT_STAT( 568, -1 );
        SET_INT_STAT( 569, -1 );
        SET_INT_STAT( 570, -1 );
    }
    else
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 566, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 566 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 218, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 218 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 567, 9 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 567 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 568, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 568 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 569, 0 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 569 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 570, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 570 );
    }
    if (g_U43463[20] == 0)
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 571, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 571 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 219, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 219 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 572, 9 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 572 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 573, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 573 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 574, 0 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 574 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 575, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 575 );
        SET_INT_STAT( 571, -1 );
        SET_INT_STAT( 219, -1 );
        SET_INT_STAT( 572, -1 );
        SET_INT_STAT( 573, -1 );
        SET_INT_STAT( 574, -1 );
        SET_INT_STAT( 575, -1 );
    }
    else
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 571, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 571 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 219, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 219 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 572, 9 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 572 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 573, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 573 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 574, 0 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 574 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 575, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 575 );
    }
    if (g_U43463[21] == 0)
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 576, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 576 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 202, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 202 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 577, 9 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 577 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 578, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 578 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 579, 14 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 579 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 580, 14 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 580 );
        SET_INT_STAT( 576, -1 );
        SET_INT_STAT( 202, -1 );
        SET_INT_STAT( 577, -1 );
        SET_INT_STAT( 578, -1 );
        SET_INT_STAT( 579, -1 );
        SET_INT_STAT( 580, -1 );
    }
    else
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 576, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 576 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 202, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 202 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 577, 9 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 577 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 578, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 578 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 579, 14 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 579 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 580, 14 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 580 );
    }
    if (g_U43463[22] == 0)
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 581, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 581 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 226, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 226 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 582, 9 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 582 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 583, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 583 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 584, 0 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 584 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 585, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 585 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 586, 0 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 586 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 587, 14 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 587 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 588, 14 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 588 );
        SET_INT_STAT( 581, -1 );
        SET_INT_STAT( 226, -1 );
        SET_INT_STAT( 582, -1 );
        SET_INT_STAT( 583, -1 );
        SET_INT_STAT( 584, -1 );
        SET_INT_STAT( 585, -1 );
        SET_INT_STAT( 586, -1 );
        SET_INT_STAT( 587, -1 );
        SET_INT_STAT( 588, -1 );
    }
    else
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 581, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 581 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 226, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 226 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 582, 9 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 582 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 583, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 583 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 584, 0 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 584 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 585, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 585 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 586, 0 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 586 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 587, 14 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 587 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 588, 14 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 588 );
    }
    if (g_U43463[23] == 0)
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 589, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 589 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 227, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 227 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 590, 9 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 590 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 591, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 591 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 592, 0 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 592 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 593, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 593 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 594, 14 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 594 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 595, 14 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 595 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 596, 14 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 596 );
        SET_INT_STAT( 589, -1 );
        SET_INT_STAT( 227, -1 );
        SET_INT_STAT( 590, -1 );
        SET_INT_STAT( 591, -1 );
        SET_INT_STAT( 592, -1 );
        SET_INT_STAT( 593, -1 );
        SET_INT_STAT( 594, -1 );
        SET_INT_STAT( 595, -1 );
        SET_INT_STAT( 596, -1 );
    }
    else
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 589, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 589 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 227, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 227 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 590, 9 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 590 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 591, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 591 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 592, 0 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 592 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 593, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 593 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 594, 14 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 594 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 595, 14 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 595 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 596, 14 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 596 );
    }
    if (g_U43463[24] == 0)
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 597, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 597 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 230, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 230 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 598, 9 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 598 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 599, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 599 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 600, 0 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 600 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 601, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 601 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 602, 14 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 602 );
        SET_INT_STAT( 597, -1 );
        SET_INT_STAT( 230, -1 );
        SET_INT_STAT( 598, -1 );
        SET_INT_STAT( 599, -1 );
        SET_INT_STAT( 600, -1 );
        SET_INT_STAT( 601, -1 );
        SET_INT_STAT( 602, -1 );
    }
    else
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 597, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 597 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 230, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 230 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 598, 9 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 598 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 599, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 599 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 600, 0 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 600 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 601, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 601 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 602, 14 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 602 );
    }
    if (g_U43463[25] == 0)
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 603, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 603 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 233, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 233 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 604, 9 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 604 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 605, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 605 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 606, 0 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 606 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 607, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 607 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 608, 0 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 608 );
        SET_INT_STAT( 603, -1 );
        SET_INT_STAT( 233, -1 );
        SET_INT_STAT( 604, -1 );
        SET_INT_STAT( 605, -1 );
        SET_INT_STAT( 606, -1 );
        SET_INT_STAT( 607, -1 );
        SET_INT_STAT( 608, -1 );
    }
    else
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 603, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 603 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 233, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 233 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 604, 9 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 604 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 605, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 605 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 606, 0 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 606 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 607, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 607 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 608, 0 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 608 );
    }
    if (g_U43463[9] == 0)
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 609, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 609 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 224, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 224 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 610, 9 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 610 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 611, 2 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 611 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 612, 14 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 612 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 613, 14 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 613 );
        SET_INT_STAT( 609, -1 );
        SET_INT_STAT( 224, -1 );
        SET_INT_STAT( 610, -1 );
        SET_INT_STAT( 611, -1 );
        SET_INT_STAT( 612, -1 );
        SET_INT_STAT( 613, -1 );
    }
    else
    {
        SET_STAT_FRONTEND_DISPLAY_TYPE( 609, 13 );
        SET_STAT_FRONTEND_NEVER_VISIBLE( 609 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 224, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 224 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 610, 9 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 610 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 611, 2 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 611 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 612, 14 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 612 );
        SET_STAT_FRONTEND_DISPLAY_TYPE( 613, 14 );
        SET_STAT_FRONTEND_ALWAYS_VISIBLE( 613 );
    }
    PRINTNL();
    PRINTSTRING( "***********************************" );
    PRINTNL();
    PRINTSTRING( "Setting the front end stats visible" );
    PRINTNL();
    PRINTSTRING( "***********************************" );
    PRINTNL();
    return;
}

void sub_58446()
{
    int I;

    for ( I = 0; I < 15; I++ )
    {
        if (g_U9310[I]._fU60)
        {
            SWITCH_CAR_GENERATOR( g_U9551[I], 0 );
        }
        else
        {
            SWITCH_CAR_GENERATOR( g_U9551[I], 101 );
        }
    }
    return;
}

void sub_58550(boolean bParam0)
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
        if (g_U28780[I]._fU4 == g_U28780[I]._fU0)
        {
            fVar4 = g_U28780[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U28780[I]._fU0 );
            fVar6 = TO_FLOAT( g_U28780[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U28780[I]._fU8;
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
    SET_FLOAT_STAT( 187, fVar3 );
    if (bVar7)
    {
        sub_58795();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_58795()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15811[5] = 1;
    return;
}

void sub_59030()
{
    int I;

    for ( I = 0; I < g_U29971; I++ )
    {
        g_U29971[I]._fU0 = 0;
        g_U29971[I]._fU4 = 0;
        g_U29971[I]._fU8 = 0;
        g_U29971[I]._fU12 = nil;
        g_U29971[I]._fU16 = {0.00000000, 0.00000000, 0.00000000};
        g_U29971[I]._fU28 = 0.00000000;
        g_U29971[I]._fU32 = 0;
        g_U29971[I]._fU36 = 0;
        g_U29971[I]._fU40 = 0;
    }
    for ( I = 0; I < 11; I++ )
    {
        g_U30132[I] = 0;
        g_U30236[I] = nil;
    }
    for ( I = 0; I < 3; I++ )
    {
        g_U30093[I] = 0;
        g_U30097[I] = 0;
        g_U30110[I] = 0;
        g_U30114[I] = 0;
        g_U30120[I] = 0;
        g_U30124[I] = 0;
        g_U30128[I] = 0;
        g_U30145[I] = 0;
        g_U30149[I] = 0;
        g_U30154[I] = 0;
        g_U30158[I] = 0;
        g_U30162[I] = 0;
        g_U30192[I] = 0;
        g_U30226[I] = nil;
        g_U30230[I] = nil;
    }
    g_U30101 = 0;
    g_U30102 = 0;
    g_U30103 = 0;
    g_U30104 = 0;
    g_U30105 = 0;
    g_U30106 = 0;
    g_U30107 = 0;
    g_U30108 = 0;
    g_U30109 = 0;
    g_U30118 = 0;
    g_U30119 = 0;
    g_U30144 = 0;
    g_U30153 = 0;
    g_U30166 = 0;
    g_U30167 = 0;
    g_U30176 = 0;
    g_U30177 = 0;
    g_U30178 = 0;
    g_U30179 = 0;
    g_U30180 = 0;
    g_U30186 = 0.00000000;
    g_U30187 = 0.00000000;
    g_U30188 = 0;
    g_U30189 = 0;
    g_U30190 = 0;
    g_U30191 = 0;
    g_U30196 = 0;
    g_U30197 = -1;
    g_U30198 = -1;
    g_U30199 = -1;
    g_U30200 = -1;
    g_U30201 = -1;
    g_U30202 = -1;
    g_U30203 = -1;
    g_U30205 = nil;
    g_U30206 = nil;
    g_U30207 = nil;
    g_U30208 = nil;
    g_U30209 = nil;
    g_U30210 = nil;
    g_U30211 = nil;
    g_U30212 = nil;
    g_U30213 = nil;
    g_U30214 = 0;
    g_U30215 = 0;
    g_U30216 = 0;
    g_U30217 = 0;
    g_U30218 = 0;
    g_U30219 = 0;
    g_U30220 = 0;
    g_U30221 = 0;
    g_U30222 = 0;
    g_U30223 = 0;
    g_U30224 = 0;
    g_U30225 = 0;
    g_U30234 = nil;
    g_U30235 = nil;
    g_U30248 = nil;
    g_U30249 = nil;
    g_U30250 = nil;
    g_U30251 = {0.00000000, 0.00000000, 0.00000000};
    g_U30254 = {0.00000000, 0.00000000, 0.00000000};
    return;
}

void sub_59851()
{
    int I;

    if (NOT g_U22955)
    {
        return;
    }
    g_U22955 = 0;
    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        if (g_U20825[I]._fU712._fU0)
        {
            if (g_U20825[I]._fU712._fU4)
            {
                if (((g_U20825[I]._fU712._fU16) || (g_U20825[I]._fU712._fU20)) || (g_U20825[I]._fU712._fU24))
                {
                    g_U20825[I]._fU712._fU24 = 1;
                    g_U20825[I]._fU712._fU184 = nil;
                    g_U20825[I]._fU712._fU8 = 1;
                }
            }
        }
    }
    return;
}

void sub_60073()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        sub_6724( I );
    }
    return;
}

void sub_60135()
{
    g_U11058 = 0;
    g_U11059 = 0;
    g_U11060 = 0;
    g_U11061 = 0;
    g_U11062 = 0;
    g_U11063 = 0;
    g_U11064 = 0;
    g_U11065 = 0;
    g_U11066 = 0;
    g_U11067 = 0;
    g_U11068 = 0;
    g_U11069 = 0;
    g_U11070 = 0;
    g_U11074 = 0;
    g_U11075 = 0;
    g_U11077 = 0;
    g_U11078 = 0;
    g_U11079 = 0;
    g_U11080 = 0;
    g_U11081 = 0;
    g_U11082 = 0;
    g_U11083 = 0;
    g_U11084 = 0;
    g_U11085[0] = 0;
    g_U11088[0] = 0;
    g_U11091[0] = 0;
    g_U11094[0] = 0;
    g_U11097[0] = 0;
    g_U11085[1] = 0;
    g_U11088[1] = 0;
    g_U11091[1] = 0;
    g_U11094[1] = 0;
    g_U11097[1] = 0;
    g_U11192 = 0;
    g_U11191 = 0;
    g_U11193 = 0;
    g_U11198 = 0;
    g_U11199 = 0;
    g_U11200 = -1;
    g_U11201 = 0;
    g_U11203 = 0;
    g_U11204 = 0;
    g_U11100 = 0;
    return;
}

void sub_60445()
{
    if (IS_CHAR_DEAD( sub_16171() ))
    {
        return;
    }
    g_U43131 = 1;
    return;
}

void sub_60650()
{
    if (g_U22956)
    {
        l_U207 = 0;
        return;
    }
    if (NOT (g_U22958 == g_U22957))
    {
        g_U22958 = g_U22957;
        g_U28805._fU4 = g_U22957;
    }
    if (NOT g_U22957)
    {
        return;
    }
    sub_60731();
    if (l_U207 >= 11)
    {
        l_U207 = 0;
        return;
    }
    switch (l_U207)
    {
        case 0:
        sub_61374();
        break;
        case 1:
        sub_158480();
        break;
        case 2:
        sub_159310();
        break;
        case 3:
        sub_160819();
        break;
        case 4:
        sub_164030();
        break;
        case 5:
        sub_164698();
        break;
        case 6:
        sub_165560();
        break;
        case 7:
        sub_166381();
        break;
        case 8:
        sub_167405();
        break;
        case 9:
        case 10: break;
        default: PRINTSTRING( "Main: Maintain_Strands: Unknown strand ID\n" );
    }
    l_U207++;
    return;
}

void sub_60731()
{
    sub_60741( 0 );
    sub_60741( 1 );
    sub_60741( 3 );
    return;
}

void sub_60741(unknown uParam0)
{
    if (NOT g_U12382[uParam0]._fU8)
    {
        return;
    }
    sub_60775( uParam0, 0 );
    return;
}

void sub_60775(int iParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    boolean bVar6;
    unknown uVar7;
    char[16] cVar8;

    switch (iParam0)
    {
        case 3:
        case 7: break;
        default: return;
    }
    iVar4 = g_U12382[iParam0]._fU44[1];
    if (iVar4 == g_U12382[iParam0]._fU60[1])
    {
        return;
    }
    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    if (NOT (iVar5 > g_U30324))
    {
        if (NOT (iParam0 == g_U30325))
        {
            return;
        }
    }
    bVar6 = iVar4 > g_U12382[iParam0]._fU60[1];
    g_U12382[iParam0]._fU60[1] = iVar4;
    if (NOT g_U0)
    {
        uVar7 = TO_FLOAT( iVar4 );
        switch (iParam0)
        {
            case 3:
            sub_60999( 198 );
            SET_FLOAT_STAT( 198, uVar7 );
            break;
            case 7:
            sub_60999( 195 );
            SET_FLOAT_STAT( 195, uVar7 );
            break;
            default: return;
        }
    }
    switch (iParam0)
    {
        case 3:
        StrCopy( ref cVar8, "CONT_E2DF", 16 );
        break;
        case 7:
        StrCopy( ref cVar8, "CONT_E2HN", 16 );
        break;
        default: return;
    }
    if (NOT bParam1)
    {
        if (bVar6)
        {
            SET_PHONE_HUD_ITEM( 8, ref cVar8, -1 );
        }
        else
        {
            SET_PHONE_HUD_ITEM( 9, ref cVar8, -1 );
        }
        g_U30324 = iVar5 + 3000;
        g_U30325 = iParam0;
    }
    return;
}

void sub_60999(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_61374()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 0;
    if (g_U12382[iVar2]._fU0)
    {
        sub_61407();
        g_U12382[iVar2]._fU0 = 0;
        sub_60775( iVar2, 1 );
        return;
    }
    if (NOT g_U12382[iVar2]._fU8)
    {
        return;
    }
    sub_60775( iVar2, 0 );
    sub_73884( iVar2 );
    if (sub_74105( iVar3 ))
    {
        sub_74146( iVar3 );
        return;
    }
    if (sub_85406( iVar2 ))
    {
        return;
    }
    sub_86534( iVar3, iVar2 );
    if (sub_99502( iVar3, iVar2 ))
    {
        return;
    }
    if (sub_99975( iVar3, iVar2 ))
    {
        return;
    }
    sub_121626( iVar3, iVar2, ref g_U30382 );
    return;
}

void sub_61407()
{
    sub_61418( 0, 0 );
    sub_62027();
    sub_73730();
    sub_73750();
    sub_73770();
    PRINTSTRING( "Gay Tony Activated\n" );
    return;
}

void sub_61418(unknown uParam0, unknown uParam1)
{
    g_U12382[uParam0]._fU8 = 1;
    sub_1598( uParam0 );
    sub_61450( uParam0 );
    sub_61755( uParam0 );
    sub_61846( uParam1 );
    sub_4303( uParam1 );
    g_U12382[uParam0]._fU16 = 0;
    g_U12382[uParam0]._fU144 = 0;
    return;
}

void sub_61450(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U14925[uParam0]._fU0._fU0;
    iVar4 = 0;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U14925[uParam0]._fU0._fU0 = 0;
        sub_41307( uParam0 );
        sub_2600( uParam0, 0 );
        break;
        case 2:
        g_U14925[uParam0]._fU0._fU0 = 6;
        sub_43580( uParam0, iVar4 );
        break;
        case 3:
        g_U14925[uParam0]._fU0._fU0 = 6;
        sub_43580( uParam0, iVar4 );
        break;
        case 6:
        sub_43580( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_43793( uParam0, iVar4 );
        g_U5 = 0;
        break;
        default:
        sub_24711( "Main_Missions: Cancel_Strand(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_61755(unknown uParam0)
{
    g_U15729[uParam0]._fU0 = 0;
    g_U15729[uParam0]._fU4 = 0;
    g_U15729[uParam0]._fU8 = 0;
    g_U15729[uParam0]._fU12 = 0;
    g_U15729[uParam0]._fU16 = 0;
    g_U15729[uParam0]._fU20 = 0;
    return;
}

void sub_61846(unknown uParam0)
{
    int iVar3;
    int I;

    iVar3 = 2;
    g_U16014[uParam0]._fU4 = 0;
    I = 0;
    for ( I = 0; I < iVar3; I++ )
    {
        sub_61892( uParam0, I );
    }
    return;
}

void sub_61892(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int I;

    iVar4 = 24;
    I = 0;
    for ( I = 0; I < iVar4; I++ )
    {
        g_U16014[uParam0]._fU8[uParam1]._fU0[I] = 0;
    }
    return;
}

void sub_62027()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    iVar2 = 0;
    iVar3 = 336;
    iVar4 = 1;
    iVar5 = 1;
    PRINTSTRING( "START: E2 Gay Tony Mission Flow\n" );
    sub_62099( ref g_U30382, ref iVar2, iVar3 );
    sub_62442( ref g_U30382, ref iVar2, iVar3, 0 );
    sub_62442( ref g_U30382, ref iVar2, iVar3, 1 );
    sub_62442( ref g_U30382, ref iVar2, iVar3, 2 );
    sub_62442( ref g_U30382, ref iVar2, iVar3, 3 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 1 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 0 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 8 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 43 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 45 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 46 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 47 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 48 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 49 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 50 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 51 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 52 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 53 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 54 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 56 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 61 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 6 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 66 );
    sub_62942( ref g_U30382, ref iVar2, iVar3, 0 );
    sub_63043( ref g_U30382, ref iVar2, iVar3 );
    sub_63155( ref g_U30382, ref iVar2, iVar3, "E2MF2AU", "E2MF1_TANS" );
    sub_63297( ref g_U30382, ref iVar2, iVar3, 0 );
    sub_63404( ref g_U30382, ref iVar2, iVar3, 0, 0 );
    sub_63404( ref g_U30382, ref iVar2, iVar3, 0, 1 );
    sub_63404( ref g_U30382, ref iVar2, iVar3, 0, 2 );
    sub_63404( ref g_U30382, ref iVar2, iVar3, 1, 0 );
    sub_63565( ref g_U30382, ref iVar2, iVar3, 1 );
    sub_63693( ref g_U30382, ref iVar2, iVar3, 0 );
    sub_63783( ref g_U30382, ref iVar2, iVar3 );
    sub_63871( ref g_U30382, ref iVar2, iVar3, 23 );
    sub_63976( ref g_U30382, ref iVar2, iVar3 );
    sub_63693( ref g_U30382, ref iVar2, iVar3, 1 );
    sub_64076( ref g_U30382, ref iVar2, iVar3, 4 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 7 );
    sub_64186( ref g_U30382, ref iVar2, iVar3 );
    sub_64273( ref g_U30382, ref iVar2, iVar3 );
    sub_63871( ref g_U30382, ref iVar2, iVar3, 26 );
    sub_63871( ref g_U30382, ref iVar2, iVar3, 17 );
    sub_64382( ref g_U30382, ref iVar2, iVar3, 0 );
    sub_64382( ref g_U30382, ref iVar2, iVar3, 1 );
    sub_64499( ref g_U30382, ref iVar2, iVar3, 4, 20 );
    sub_64609( ref g_U30382, ref iVar2, iVar3, 17 );
    sub_64713( ref g_U30382, ref iVar2, iVar3, 0, 0, iVar4, 10000 );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 10 );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 11 );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 12 );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 13 );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 21 );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 23 );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 22 );
    sub_65067( ref g_U30382, ref iVar2, iVar3, "SETUP_TAKEOUT" );
    sub_65067( ref g_U30382, ref iVar2, iVar3, "SETUP_SWING" );
    sub_65220( ref g_U30382, ref iVar2, iVar3, "PREPARE_PAIR_1" );
    sub_65335( ref g_U30382, ref iVar2, iVar3, "SETUP_SWING" );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 21 );
    sub_65453( ref g_U30382, ref iVar2, iVar3, 0, 3 );
    sub_64609( ref g_U30382, ref iVar2, iVar3, 14 );
    sub_65625( ref g_U30382, ref iVar2, iVar3, 21 );
    sub_65774( ref g_U30382, ref iVar2, iVar3, 21 );
    sub_65871( ref g_U30382, ref iVar2, iVar3 );
    sub_65335( ref g_U30382, ref iVar2, iVar3, "SETUP_TAKEOUT" );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 22 );
    sub_65453( ref g_U30382, ref iVar2, iVar3, 0, 2 );
    sub_64609( ref g_U30382, ref iVar2, iVar3, 14 );
    sub_65625( ref g_U30382, ref iVar2, iVar3, 22 );
    sub_65774( ref g_U30382, ref iVar2, iVar3, 22 );
    sub_65871( ref g_U30382, ref iVar2, iVar3 );
    sub_65335( ref g_U30382, ref iVar2, iVar3, "PREPARE_PAIR_1" );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 10 );
    sub_65220( ref g_U30382, ref iVar2, iVar3, "WAIT_PAIR_1" );
    sub_65335( ref g_U30382, ref iVar2, iVar3, "DEBUG_SWING" );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 10 );
    sub_66178( ref g_U30382, ref iVar2, iVar3, "SETUP_SWING" );
    sub_66178( ref g_U30382, ref iVar2, iVar3, "SETUP_TAKEOUT" );
    sub_66309( ref g_U30382, ref iVar2, iVar3, 12 );
    sub_66415( ref g_U30382, ref iVar2, iVar3, 1 );
    sub_65453( ref g_U30382, ref iVar2, iVar3, 1, 1 );
    sub_65220( ref g_U30382, ref iVar2, iVar3, "WAIT_PAIR_1" );
    sub_65335( ref g_U30382, ref iVar2, iVar3, "DEBUG_TAKEOUT" );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 10 );
    sub_66178( ref g_U30382, ref iVar2, iVar3, "SETUP_TAKEOUT" );
    sub_66309( ref g_U30382, ref iVar2, iVar3, 1 );
    sub_66415( ref g_U30382, ref iVar2, iVar3, 2 );
    sub_65453( ref g_U30382, ref iVar2, iVar3, 1, 2 );
    sub_65220( ref g_U30382, ref iVar2, iVar3, "WAIT_PAIR_1" );
    sub_65335( ref g_U30382, ref iVar2, iVar3, "WAIT_PAIR_1" );
    sub_66729( ref g_U30382, ref iVar2, iVar3, 10 );
    sub_66875( ref g_U30382, ref iVar2, iVar3, 10 );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 14 );
    sub_66993( ref g_U30382, ref iVar2, iVar3, 11, "DO_TAKEOUT" );
    sub_67153( ref g_U30382, ref iVar2, iVar3, 3 );
    sub_67283( ref g_U30382, ref iVar2, iVar3, 3, "PREPARE_PAIR_1", "DEBUG_SWING" );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 15 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 14 );
    sub_63871( ref g_U30382, ref iVar2, iVar3, 14 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 30 );
    sub_63404( ref g_U30382, ref iVar2, iVar3, 7, 0 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 36 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 12 );
    sub_64076( ref g_U30382, ref iVar2, iVar3, 1 );
    sub_66729( ref g_U30382, ref iVar2, iVar3, 13 );
    sub_67564( ref g_U30382, ref iVar2, iVar3, 13, "PREPARE_PAIR_1" );
    sub_67729( ref g_U30382, ref iVar2, iVar3, "END_PAIR1" );
    sub_65335( ref g_U30382, ref iVar2, iVar3, "DO_TAKEOUT" );
    sub_67153( ref g_U30382, ref iVar2, iVar3, 2 );
    sub_67283( ref g_U30382, ref iVar2, iVar3, 2, "PREPARE_PAIR_1", "DEBUG_TAKEOUT" );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 16 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 14 );
    sub_67949( ref g_U30382, ref iVar2, iVar3, 0 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 13 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 36 );
    sub_64076( ref g_U30382, ref iVar2, iVar3, 2 );
    sub_68088( ref g_U30382, ref iVar2, iVar3, 120000 );
    sub_66729( ref g_U30382, ref iVar2, iVar3, 12 );
    sub_67564( ref g_U30382, ref iVar2, iVar3, 12, "PREPARE_PAIR_1" );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 10 );
    sub_65335( ref g_U30382, ref iVar2, iVar3, "END_PAIR1" );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 10 );
    sub_68306( ref g_U30382, ref iVar2, iVar3, 13 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 55 );
    sub_68455( ref g_U30382, ref iVar2, iVar3, "E2MF1_CLUB", "E2MF2AU", 40000, 20000 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 31 );
    sub_63871( ref g_U30382, ref iVar2, iVar3, 6 );
    sub_68680( ref g_U30382, ref iVar2, iVar3, "CLUBMAN_HELP" );
    sub_68775( ref g_U30382, ref iVar2, iVar3, 28 );
    sub_68901( ref g_U30382, ref iVar2, iVar3, 28, "E2MF2AU", "E2MF1_DANS" );
    sub_64609( ref g_U30382, ref iVar2, iVar3, 16 );
    sub_68088( ref g_U30382, ref iVar2, iVar3, 10000 );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 10 );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 11 );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 12 );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 13 );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 21 );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 23 );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 22 );
    sub_65067( ref g_U30382, ref iVar2, iVar3, "SETUP_BLOG_A" );
    sub_65067( ref g_U30382, ref iVar2, iVar3, "SETUP_BANG" );
    sub_65220( ref g_U30382, ref iVar2, iVar3, "PREPARE_PAIR_2" );
    sub_65335( ref g_U30382, ref iVar2, iVar3, "SETUP_BANG" );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 21 );
    sub_65453( ref g_U30382, ref iVar2, iVar3, 0, 5 );
    sub_64609( ref g_U30382, ref iVar2, iVar3, 14 );
    sub_65625( ref g_U30382, ref iVar2, iVar3, 21 );
    sub_65774( ref g_U30382, ref iVar2, iVar3, 21 );
    sub_65871( ref g_U30382, ref iVar2, iVar3 );
    sub_65335( ref g_U30382, ref iVar2, iVar3, "SETUP_BLOG_A" );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 23 );
    sub_65453( ref g_U30382, ref iVar2, iVar3, 0, 4 );
    sub_64609( ref g_U30382, ref iVar2, iVar3, 14 );
    sub_65625( ref g_U30382, ref iVar2, iVar3, 23 );
    sub_65774( ref g_U30382, ref iVar2, iVar3, 23 );
    sub_65871( ref g_U30382, ref iVar2, iVar3 );
    sub_65335( ref g_U30382, ref iVar2, iVar3, "PREPARE_PAIR_2" );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 10 );
    sub_65220( ref g_U30382, ref iVar2, iVar3, "WAIT_PAIR_2" );
    sub_65335( ref g_U30382, ref iVar2, iVar3, "DEBUG_BANG" );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 10 );
    sub_66178( ref g_U30382, ref iVar2, iVar3, "SETUP_BANG" );
    sub_66178( ref g_U30382, ref iVar2, iVar3, "SETUP_BLOG_A" );
    sub_66309( ref g_U30382, ref iVar2, iVar3, 12 );
    sub_66415( ref g_U30382, ref iVar2, iVar3, 1 );
    sub_65453( ref g_U30382, ref iVar2, iVar3, 1, 1 );
    sub_65220( ref g_U30382, ref iVar2, iVar3, "WAIT_PAIR_2" );
    sub_65335( ref g_U30382, ref iVar2, iVar3, "DEBUG_BLOG_A" );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 10 );
    sub_66178( ref g_U30382, ref iVar2, iVar3, "SETUP_BLOG_A" );
    sub_66309( ref g_U30382, ref iVar2, iVar3, 1 );
    sub_66415( ref g_U30382, ref iVar2, iVar3, 3 );
    sub_65453( ref g_U30382, ref iVar2, iVar3, 1, 3 );
    sub_65220( ref g_U30382, ref iVar2, iVar3, "WAIT_PAIR_2" );
    sub_65335( ref g_U30382, ref iVar2, iVar3, "WAIT_PAIR_2" );
    sub_66729( ref g_U30382, ref iVar2, iVar3, 10 );
    sub_66875( ref g_U30382, ref iVar2, iVar3, 10 );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 14 );
    sub_66993( ref g_U30382, ref iVar2, iVar3, 11, "DO_BLOG_A" );
    sub_67153( ref g_U30382, ref iVar2, iVar3, 5 );
    sub_67283( ref g_U30382, ref iVar2, iVar3, 5, "PREPARE_PAIR_2", "DEBUG_BANG" );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 17 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 33 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 14 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 60 );
    sub_68306( ref g_U30382, ref iVar2, iVar3, 15 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 12 );
    sub_66729( ref g_U30382, ref iVar2, iVar3, 13 );
    sub_67564( ref g_U30382, ref iVar2, iVar3, 13, "PREPARE_PAIR_2" );
    sub_67729( ref g_U30382, ref iVar2, iVar3, "END_PAIR2" );
    sub_65335( ref g_U30382, ref iVar2, iVar3, "DO_BLOG_A" );
    sub_67153( ref g_U30382, ref iVar2, iVar3, 4 );
    sub_67283( ref g_U30382, ref iVar2, iVar3, 4, "PREPARE_PAIR_2", "DEBUG_BLOG_A" );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 18 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 14 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 13 );
    sub_66729( ref g_U30382, ref iVar2, iVar3, 12 );
    sub_67564( ref g_U30382, ref iVar2, iVar3, 12, "PREPARE_PAIR_2" );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 10 );
    sub_65335( ref g_U30382, ref iVar2, iVar3, "END_PAIR2" );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 10 );
    sub_63565( ref g_U30382, ref iVar2, iVar3, 2 );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 10 );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 11 );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 12 );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 13 );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 21 );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 23 );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 22 );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 19 );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 20 );
    sub_65067( ref g_U30382, ref iVar2, iVar3, "SETUP_BABY" );
    sub_65067( ref g_U30382, ref iVar2, iVar3, "SETUP_FROSTING" );
    sub_65220( ref g_U30382, ref iVar2, iVar3, "PREPARE_PAIR_3" );
    sub_65335( ref g_U30382, ref iVar2, iVar3, "SETUP_FROSTING" );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 21 );
    sub_65453( ref g_U30382, ref iVar2, iVar3, 0, 8 );
    sub_64609( ref g_U30382, ref iVar2, iVar3, 14 );
    sub_65625( ref g_U30382, ref iVar2, iVar3, 21 );
    sub_65774( ref g_U30382, ref iVar2, iVar3, 21 );
    sub_65871( ref g_U30382, ref iVar2, iVar3 );
    sub_65335( ref g_U30382, ref iVar2, iVar3, "SETUP_BABY" );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 22 );
    sub_65453( ref g_U30382, ref iVar2, iVar3, 0, 7 );
    sub_64609( ref g_U30382, ref iVar2, iVar3, 14 );
    sub_65625( ref g_U30382, ref iVar2, iVar3, 22 );
    sub_65774( ref g_U30382, ref iVar2, iVar3, 22 );
    sub_65871( ref g_U30382, ref iVar2, iVar3 );
    sub_65335( ref g_U30382, ref iVar2, iVar3, "SETUP_BLOG_B" );
    sub_64609( ref g_U30382, ref iVar2, iVar3, 15 );
    sub_65871( ref g_U30382, ref iVar2, iVar3 );
    sub_65335( ref g_U30382, ref iVar2, iVar3, "PREPARE_PAIR_3" );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 10 );
    sub_65220( ref g_U30382, ref iVar2, iVar3, "WAIT_PAIR_3" );
    sub_65335( ref g_U30382, ref iVar2, iVar3, "DEBUG_FROSTING" );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 10 );
    sub_66178( ref g_U30382, ref iVar2, iVar3, "SETUP_FROSTING" );
    sub_66178( ref g_U30382, ref iVar2, iVar3, "SETUP_BABY" );
    sub_66309( ref g_U30382, ref iVar2, iVar3, 12 );
    sub_66415( ref g_U30382, ref iVar2, iVar3, 1 );
    sub_65453( ref g_U30382, ref iVar2, iVar3, 1, 1 );
    sub_65220( ref g_U30382, ref iVar2, iVar3, "WAIT_PAIR_3" );
    sub_65335( ref g_U30382, ref iVar2, iVar3, "DEBUG_BABY" );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 10 );
    sub_66178( ref g_U30382, ref iVar2, iVar3, "SETUP_BABY" );
    sub_66309( ref g_U30382, ref iVar2, iVar3, 1 );
    sub_66415( ref g_U30382, ref iVar2, iVar3, 2 );
    sub_65453( ref g_U30382, ref iVar2, iVar3, 1, 2 );
    sub_65220( ref g_U30382, ref iVar2, iVar3, "WAIT_PAIR_3" );
    sub_65335( ref g_U30382, ref iVar2, iVar3, "DEBUG_BLOG_B" );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 10 );
    sub_66178( ref g_U30382, ref iVar2, iVar3, "SETUP_BLOG_B" );
    sub_66178( ref g_U30382, ref iVar2, iVar3, "SETUP_BABY" );
    sub_66309( ref g_U30382, ref iVar2, iVar3, 12 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 37 );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 10 );
    sub_65220( ref g_U30382, ref iVar2, iVar3, "WAIT_PAIR_3" );
    sub_65335( ref g_U30382, ref iVar2, iVar3, "WAIT_PAIR_3" );
    sub_66729( ref g_U30382, ref iVar2, iVar3, 10 );
    sub_66875( ref g_U30382, ref iVar2, iVar3, 10 );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 14 );
    sub_66993( ref g_U30382, ref iVar2, iVar3, 11, "DO_BABY" );
    sub_71418( ref g_U30382, ref iVar2, iVar3, 19, "DO_BLOG_B" );
    sub_67153( ref g_U30382, ref iVar2, iVar3, 8 );
    sub_67283( ref g_U30382, ref iVar2, iVar3, 8, "PREPARE_PAIR_3", "DEBUG_FROSTING" );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 14 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 19 );
    sub_71674( ref g_U30382, ref iVar2, iVar3, 3, 180000, 300000 );
    sub_65067( ref g_U30382, ref iVar2, iVar3, "SETUP_BLOG_B" );
    sub_67729( ref g_U30382, ref iVar2, iVar3, "PREPARE_PAIR_3" );
    sub_65335( ref g_U30382, ref iVar2, iVar3, "DO_BLOG_B" );
    sub_67153( ref g_U30382, ref iVar2, iVar3, 6 );
    sub_67283( ref g_U30382, ref iVar2, iVar3, 6, "PREPARE_PAIR_3", "DEBUG_BLOG_B" );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 14 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 12 );
    sub_66729( ref g_U30382, ref iVar2, iVar3, 13 );
    sub_67564( ref g_U30382, ref iVar2, iVar3, 13, "PREPARE_PAIR_3" );
    sub_67729( ref g_U30382, ref iVar2, iVar3, "END_PAIR3" );
    sub_65335( ref g_U30382, ref iVar2, iVar3, "DO_BABY" );
    sub_67153( ref g_U30382, ref iVar2, iVar3, 7 );
    sub_67283( ref g_U30382, ref iVar2, iVar3, 7, "PREPARE_PAIR_3", "DEBUG_BABY" );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 14 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 20 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 57 );
    sub_63404( ref g_U30382, ref iVar2, iVar3, 10, 0 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 14 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 13 );
    sub_66729( ref g_U30382, ref iVar2, iVar3, 12 );
    sub_67564( ref g_U30382, ref iVar2, iVar3, 12, "PREPARE_PAIR_3" );
    sub_65335( ref g_U30382, ref iVar2, iVar3, "END_PAIR3" );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 10 );
    sub_64076( ref g_U30382, ref iVar2, iVar3, 5 );
    sub_64382( ref g_U30382, ref iVar2, iVar3, 3 );
    sub_63693( ref g_U30382, ref iVar2, iVar3, 9 );
    sub_72311( ref g_U30382, ref iVar2, iVar3, 3 );
    sub_72416( ref g_U30382, ref iVar2, iVar3, 0 );
    sub_63693( ref g_U30382, ref iVar2, iVar3, 10 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 9 );
    sub_72590( ref g_U30382, ref iVar2, iVar3, 6, "E2MF1_RCAL", "E2MF2AU", 25000, 20000 );
    sub_64076( ref g_U30382, ref iVar2, iVar3, 6 );
    sub_64382( ref g_U30382, ref iVar2, iVar3, 2 );
    sub_63565( ref g_U30382, ref iVar2, iVar3, 3 );
    sub_64382( ref g_U30382, ref iVar2, iVar3, 4 );
    sub_72416( ref g_U30382, ref iVar2, iVar3, 0 );
    sub_63693( ref g_U30382, ref iVar2, iVar3, 11 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 35 );
    sub_63404( ref g_U30382, ref iVar2, iVar3, 6, 0 );
    sub_68455( ref g_U30382, ref iVar2, iVar3, "E2T11_CLUB", "E2MF2AU", 25000, 20000 );
    sub_72939( ref g_U30382, ref iVar2, iVar3, 11 );
    sub_64382( ref g_U30382, ref iVar2, iVar3, 5 );
    sub_63693( ref g_U30382, ref iVar2, iVar3, 12 );
    sub_72311( ref g_U30382, ref iVar2, iVar3, 9 );
    sub_72311( ref g_U30382, ref iVar2, iVar3, 10 );
    sub_73095( ref g_U30382, ref iVar2, iVar3, 2, 3 );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 66 );
    sub_64859( ref g_U30382, ref iVar2, iVar3, 35 );
    sub_63693( ref g_U30382, ref iVar2, iVar3, 13 );
    sub_63404( ref g_U30382, ref iVar2, iVar3, 1, 2 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 58 );
    sub_64713( ref g_U30382, ref iVar2, iVar3, 2, 2, iVar5, 60000 );
    sub_68088( ref g_U30382, ref iVar2, iVar3, 10000 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 4 );
    sub_68680( ref g_U30382, ref iVar2, iVar3, "REPEAT_HELP" );
    sub_68088( ref g_U30382, ref iVar2, iVar3, 20000 );
    sub_62581( ref g_U30382, ref iVar2, iVar3, 67 );
    sub_71674( ref g_U30382, ref iVar2, iVar3, 6, 300000, 300000 );
    sub_73412( ref g_U30382, ref iVar2, iVar3, 4, 0 );
    sub_73522( ref g_U30382, ref iVar2, iVar3 );
    sub_73611( ref g_U30382, ref iVar2, iVar3 );
    PRINTSTRING( "END: E2 Gay Tony Mission Flow\n" );
    return;
}

void sub_62099(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 0;
    sub_62357( uParam1 );
    sub_62409( "SET: GAME INITIAL SETUP\n" );
    return;
}

void sub_62113(int iParam0, int iParam1)
{
    if (iParam0 >= iParam1)
    {
        sub_62201( "Flow_Set_Seq_Begin(): Need to increase number of allowed sequences" );
    }
    return;
}

void sub_62201(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

void sub_62357(unknown uParam0)
{
    (uParam0^)++;
    return;
}

void sub_62409(unknown uParam0)
{
    return;
}

void sub_62442(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 78;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_62357( uParam1 );
    sub_62409( "SET: ACTIVATE_MAP_AREA\n" );
    return;
}

void sub_62581(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 132;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_62357( uParam1 );
    sub_62409( "SET: SET_MISSION_FLOW_FLAG TO TRUE\n" );
    return;
}

void sub_62942(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 81;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_62357( uParam1 );
    sub_62409( "SET: ACTIVATE_SAVE_HOUSE\n" );
    return;
}

void sub_63043(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 18;
    sub_62357( uParam1 );
    sub_62409( "SET: CREATE_CAMERA_CELLPHONE\n" );
    return;
}

void sub_63155(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 23;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam3, 16 );
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU56, uParam4, 16 );
    sub_62357( uParam1 );
    sub_62409( "SET: SET_ANSWER_PHONE: " );
    sub_62409( uParam4 );
    sub_63264();
    return;
}

void sub_63264()
{
    return;
}

void sub_63297(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 22;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam3;
    sub_62357( uParam1 );
    sub_62409( "SET: ADD_SILENTLY_TO_PHONEBOOK\n" );
    return;
}

void sub_63404(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 60;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam4;
    sub_62357( uParam1 );
    sub_62409( "SET: ACTIVATE_AMBIENT_EMAIL\n" );
    return;
}

void sub_63565(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 117;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_62357( uParam1 );
    sub_62409( "SET: SET_MISSIONS_LEVEL TO " );
    sub_63655( uParam3 );
    sub_63264();
    return;
}

void sub_63655(unknown uParam0)
{
    return;
}

void sub_63693(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 1;
    (uParam0^)[(uParam1^)]._fU4._fU0 = uParam3;
    sub_62357( uParam1 );
    sub_62409( "SET: DO MISSION\n" );
    return;
}

void sub_63783(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 90;
    sub_62357( uParam1 );
    sub_62409( "SET: ACTIVATE_SPRAYSHOPS\n" );
    return;
}

void sub_63871(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 80;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_62357( uParam1 );
    sub_62409( "SET: ACTIVATE_MAP_BLIP_GROUP\n" );
    return;
}

void sub_63976(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 87;
    sub_62357( uParam1 );
    sub_62409( "SET: ACTIVATE_HAIL_TAXI\n" );
    return;
}

void sub_64076(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 120;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_62357( uParam1 );
    sub_62409( "SET: ACTIVATE_STRAND\n" );
    return;
}

void sub_64186(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 89;
    sub_62357( uParam1 );
    sub_62409( "SET: ALLOW_NETWORK_SAVES\n" );
    return;
}

void sub_64273(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 88;
    sub_62357( uParam1 );
    sub_62409( "SET: UNLOCK_GUNSHOP\n" );
    return;
}

void sub_64382(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 124;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_62357( uParam1 );
    sub_62409( "SET: SYNCHRONISATION_WALL\n" );
    return;
}

void sub_64499(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 128;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam4;
    sub_62357( uParam1 );
    sub_62409( "SET: DISTANCE_WALL\n" );
    return;
}

void sub_64609(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 16;
    (uParam0^)[(uParam1^)]._fU4._fU0 = uParam3;
    sub_62357( uParam1 );
    sub_62409( "SET: STANDALONE SCRIPT\n" );
    return;
}

void sub_64713(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 54;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam4;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam5;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam6;
    (uParam0^)[(uParam1^)]._fU4._fU28 = uParam3;
    sub_62357( uParam1 );
    sub_62409( "SET: TXTMSG_PLAYER_AMBIENT\n" );
    return;
}

void sub_64859(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 134;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_62357( uParam1 );
    sub_62409( "SET: CLEAR_MISSION_FLOW_FLAG TO FALSE\n" );
    return;
}

void sub_65067(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 147;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam3, 16 );
    sub_62357( uParam1 );
    sub_62409( "SET: GOSUB (DEBUG) " );
    sub_62409( uParam3 );
    sub_63264();
    return;
}

void sub_65220(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 144;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam3, 16 );
    sub_62357( uParam1 );
    sub_62409( "SET: GOTO " );
    sub_62409( uParam3 );
    sub_63264();
    return;
}

void sub_65335(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 143;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam3, 16 );
    sub_62357( uParam1 );
    sub_62409( "SET: LABEL: " );
    sub_62409( uParam3 );
    sub_63264();
    return;
}

void sub_65453(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 142;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam4;
    sub_62357( uParam1 );
    sub_62409( "SET: FLOW_SEQ_STORE_MISSION_FLOW_INT " );
    sub_63655( uParam3 );
    sub_62409( " TO " );
    sub_63655( uParam4 );
    sub_63264();
    return;
}

void sub_65625(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 135;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_62357( uParam1 );
    sub_62409( "SET: CLEAR_MISSION_FLOW_FLAG TO FALSE IF THIS COMMAND BYPASSED IN DEBUG\n" );
    return;
}

void sub_65774(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 141;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_62357( uParam1 );
    sub_62409( "SET: FLAG_WALL_FALSE\n" );
    return;
}

void sub_65871(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 148;
    sub_62357( uParam1 );
    sub_62409( "SET: GOSUB_RETURN\n" );
    return;
}

void sub_66178(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 146;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam3, 16 );
    sub_62357( uParam1 );
    sub_62409( "SET: GOSUB " );
    sub_62409( uParam3 );
    sub_63264();
    return;
}

void sub_66309(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 159;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_62357( uParam1 );
    sub_62409( "SET: SET TIME OF DAY (DEBUG)\n" );
    return;
}

void sub_66415(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 160;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_62357( uParam1 );
    sub_62409( "SET: SET CONTACT POINT WARP (DEBUG)\n" );
    return;
}

void sub_66729(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 133;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_62357( uParam1 );
    sub_62409( "SET: SET_MISSION_FLOW_FLAG TO TRUE IF THIS COMMAND BYPASSED IN DEBUG\n" );
    return;
}

void sub_66875(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 140;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_62357( uParam1 );
    sub_62409( "SET: FLAG_WALL\n" );
    return;
}

void sub_66993(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 137;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam4, 16 );
    sub_62357( uParam1 );
    sub_62409( "SET: FLAG_CHECK_FAILGOTO_DEBUG (GOTO " );
    sub_62409( uParam4 );
    sub_62409( " ON FAIL)" );
    sub_63264();
    return;
}

void sub_67153(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 11;
    (uParam0^)[(uParam1^)]._fU4._fU0 = uParam3;
    sub_62357( uParam1 );
    sub_62409( "SET: SETUP_MISSION_ONLY\n" );
    return;
}

void sub_67283(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 4;
    (uParam0^)[(uParam1^)]._fU4._fU0 = uParam3;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam4, 16 );
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU56, uParam5, 16 );
    sub_62357( uParam1 );
    sub_62409( "SET: DO MISSION FAILGOTO DEBUGGOTO\n" );
    return;
}

void sub_67564(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 136;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam4, 16 );
    sub_62357( uParam1 );
    sub_62409( "SET: FLAG_CHECK_FAILGOTO (GOTO " );
    sub_62409( uParam4 );
    sub_62409( " ON FAIL)" );
    sub_63264();
    return;
}

void sub_67729(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 145;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam3, 16 );
    sub_62357( uParam1 );
    sub_62409( "SET: GOTO (DEBUG) " );
    sub_62409( uParam3 );
    sub_63264();
    return;
}

void sub_67949(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 58;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_62357( uParam1 );
    sub_62409( "SET: KILL_TXTMSG\n" );
    return;
}

void sub_68088(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 127;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_62357( uParam1 );
    sub_62409( "SET: REALTIME MSECS DELAY (" );
    sub_63655( uParam3 );
    sub_62409( ")" );
    sub_63264();
    return;
}

void sub_68306(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 129;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam3;
    sub_62357( uParam1 );
    sub_62409( "SET: ACTIVATE_RI_CHARACTER\n" );
    return;
}

void sub_68455(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 31;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam3, 16 );
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU56, uParam4, 16 );
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam5;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam6;
    sub_62357( uParam1 );
    sub_62409( "SET: PHONE_PLAYER_REPEAT_QUICK: [" );
    sub_62409( uParam4 );
    sub_62409( "] " );
    sub_62409( uParam3 );
    sub_63264();
    return;
}

void sub_68680(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 150;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam3, 16 );
    sub_62357( uParam1 );
    sub_62409( "SET: HELP_TEXT\n" );
    return;
}

void sub_68775(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 20;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam3;
    sub_62357( uParam1 );
    sub_62409( "SET: ADD_OTHER_TO_PHONEBOOK\n" );
    return;
}

void sub_68901(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 24;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam3;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam4, 16 );
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU56, uParam5, 16 );
    sub_62357( uParam1 );
    sub_62409( "SET: SET_OTHER_ANSWER_PHONE: " );
    sub_62409( uParam5 );
    sub_63264();
    return;
}

void sub_71418(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 139;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam4, 16 );
    sub_62357( uParam1 );
    sub_62409( "SET: FLAG_CHECK_PASSGOTO_DEBUG (GOTO " );
    sub_62409( uParam4 );
    sub_62409( " ON PASS)" );
    sub_63264();
    return;
}

void sub_71674(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 49;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam4;
    (uParam0^)[(uParam1^)]._fU4._fU28 = uParam5;
    sub_62357( uParam1 );
    sub_62409( "SET: AMBIENT_PHONECALL\n" );
    return;
}

void sub_72311(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 50;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_62357( uParam1 );
    sub_62409( "SET: KILL_AMBIENT_PHONECALL\n" );
    return;
}

void sub_72416(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 71;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam3;
    sub_62357( uParam1 );
    sub_62409( "SET: CONTACT_ON_NEXT_MISSION: " );
    sub_63655( uParam3 );
    sub_63264();
    return;
}

void sub_72590(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 39;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam3;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam4, 16 );
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU56, uParam5, 16 );
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam6;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam7;
    sub_62357( uParam1 );
    sub_62409( "SET: ONEOFF_PHONE_PLAYER_REPEAT [" );
    sub_62409( uParam5 );
    sub_62409( "] " );
    sub_62409( uParam4 );
    sub_63264();
    return;
}

void sub_72939(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 123;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_62357( uParam1 );
    sub_62409( "SET: SEND_SYNCHRONISATION\n" );
    return;
}

void sub_73095(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 52;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam4;
    sub_62357( uParam1 );
    sub_62409( "SET: KILL_CHAT_PHONECALL\n" );
    return;
}

void sub_73412(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 51;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam4;
    sub_62357( uParam1 );
    sub_62409( "SET: CHAT_PHONECALL\n" );
    return;
}

void sub_73522(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 155;
    sub_62357( uParam1 );
    sub_62409( "SET: TERMINATE THIS STRAND\n" );
    return;
}

void sub_73611(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 161;
    sub_62357( uParam1 );
    sub_62409( "SET: END STRAND\n" );
    return;
}

void sub_73730()
{
    int iVar2;

    iVar2 = 0;
    return;
}

void sub_73750()
{
    int iVar2;

    iVar2 = 0;
    return;
}

void sub_73770()
{
    int iVar2;

    iVar2 = 0;
    return;
}

void sub_73884(unknown uParam0)
{
    int iVar3;
    unknown uVar4;

    if (g_U0)
    {
        return;
    }
    switch (uParam0)
    {
        case 3:
        case 7: break;
        default: return;
    }
    iVar3 = g_U12382[uParam0]._fU44[0];
    if (iVar3 == g_U12382[uParam0]._fU60[0])
    {
        return;
    }
    g_U12382[uParam0]._fU60[0] = iVar3;
    uVar4 = TO_FLOAT( iVar3 );
    switch (uParam0)
    {
        case 3:
        sub_60999( 199 );
        SET_FLOAT_STAT( 199, uVar4 );
        break;
        case 7:
        sub_60999( 196 );
        SET_FLOAT_STAT( 196, uVar4 );
        break;
        default: return;
    }
    return;
}

void sub_74105(unknown uParam0)
{
    return g_U20825[uParam0]._fU712._fU4;
}

void sub_74146(unknown uParam0)
{
    string sVar3;
    int iVar4;
    unknown uVar5;
    boolean bVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    float fVar14;

    sVar3 = "HospitalPickUp";
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    uVar5 = sub_74187( uParam0 );
    if (sub_74392( uVar5 ))
    {
        return;
    }
    if ((g_U12379) || (IS_THREAD_ACTIVE( g_U818 )))
    {
        if ((NOT g_U20825[uParam0]._fU712._fU16) AND (NOT g_U20825[uParam0]._fU712._fU20))
        {
            g_U20825[uParam0]._fU712._fU168 = iVar4 + (sub_78861( uParam0 ));
            return;
        }
    }
    if (g_U20825[uParam0]._fU712._fU24)
    {
        if (IS_THREAD_ACTIVE( g_U20825[uParam0]._fU712._fU180 ))
        {
            return;
        }
        if (g_U20825[uParam0]._fU712._fU180 != nil)
        {
            DESTROY_THREAD( g_U20825[uParam0]._fU712._fU180 );
            g_U20825[uParam0]._fU712._fU180 = nil;
        }
        bVar6 = g_U20825[uParam0]._fU712._fU8;
        uVar7 = g_U20825[uParam0]._fU712._fU184;
        sub_5397( uParam0 );
        if (bVar6)
        {
            sub_79168( uParam0 );
            g_U20825[uParam0]._fU712._fU184 = uVar7;
            return;
        }
        g_U12382[uVar5]._fU28 = 1;
        sub_79326( uParam0 );
        return;
    }
    if (g_U20825[uParam0]._fU712._fU20)
    {
        if (NOT (HAS_SCRIPT_LOADED( sVar3 )))
        {
            REQUEST_SCRIPT( sVar3 );
            return;
        }
        g_U20825[uParam0]._fU712._fU180 = START_NEW_SCRIPT_WITH_ARGS( sVar3, ref uParam0, 1, 1820 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( sVar3 );
        g_U20825[uParam0]._fU712._fU24 = 1;
        return;
    }
    if (g_U20825[uParam0]._fU712._fU16)
    {
        if (sub_79602())
        {
            sub_79705( uParam0 );
            return;
        }
        sub_79705( uParam0 );
        g_U20825[uParam0]._fU712._fU16 = 0;
        g_U20825[uParam0]._fU712._fU176 = 1;
        sub_46107();
        switch (sub_79775())
        {
            case 1:
            case 2:
            if (NOT (sub_79885( uParam0 )))
            {
                return;
            }
            g_U20825[uParam0]._fU712._fU168 = iVar4 + (sub_78861( uParam0 ));
            return;
            case 8:
            case 5:
            g_U20825[uParam0]._fU712._fU176 = 0;
            break;
            case 4: break;
        }
        REQUEST_SCRIPT( sVar3 );
        g_U20825[uParam0]._fU712._fU20 = 1;
        sub_83150( uParam0 );
        if (g_U20825[uParam0]._fU712._fU176)
        {
            sub_45385();
        }
        return;
    }
    if (g_U20825[uParam0]._fU712._fU12)
    {
        sub_5397( uParam0 );
        sub_79326( uParam0 );
        return;
    }
    if (g_U20825[uParam0]._fU712._fU168 < iVar4)
    {
        if ((((sub_83677()) || (sub_83873())) || (sub_83924())) || (sub_83959()))
        {
            g_U20825[uParam0]._fU712._fU168 = iVar4 + (sub_78861( uParam0 ));
            return;
        }
        if (sub_84280( 0 ))
        {
            g_U20825[uParam0]._fU712._fU168 = iVar4 + 10000;
            return;
        }
        if (NOT (g_U20825[uParam0]._fU712._fU184 == nil))
        {
            if (DOES_CHAR_EXIST( g_U20825[uParam0]._fU712._fU184 ))
            {
                if (NOT (IS_CHAR_DEAD( sub_16171() )))
                {
                    N_1363505769( g_U20825[uParam0]._fU712._fU184, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                    GET_CHAR_COORDINATES( sub_16171(), ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
                    fVar14 = 0.00000000;
                    GET_DISTANCE_BETWEEN_COORDS_3D( uVar8._fU0, uVar8._fU4, uVar8._fU8, uVar11._fU0, uVar11._fU4, uVar11._fU8, ref fVar14 );
                    if (fVar14 < 150.00000000)
                    {
                        g_U20825[uParam0]._fU712._fU168 = iVar4 + (sub_78861( uParam0 ));
                        return;
                    }
                }
            }
        }
        if (NOT g_U22955)
        {
            if (sub_84812( uParam0, uVar5 ))
            {
                g_U20825[uParam0]._fU712._fU16 = 1;
                return;
            }
        }
        g_U20825[uParam0]._fU712._fU168 = iVar4 + (sub_78861( uParam0 ));
        return;
    }
    return;
}

int sub_74187(unknown uParam0)
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
        case 9: return 8;
    }
    sub_24711( "Flow_public: Return_Strand_From_Contact(): Unknown Contact" );
    return 11;
}

int sub_74392(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_74403( uParam0 );
    if (sub_74661( uVar3, 1, 0 ))
    {
        sub_75012( ref g_U12382[uParam0]._fU96, ref g_U12382[uParam0]._fU80, 0 );
        sub_78307( ref g_U12382[uParam0]._fU96, ref g_U12382[uParam0]._fU80 );
        sub_78685( uVar3 );
        sub_46107();
        return 1;
    }
    return 0;
}

int sub_74403(unknown uParam0)
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
        case 8: return 9;
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_24711( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 37;
}

int sub_74661(int iParam0, boolean bParam1, unknown uParam2)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        sub_74744( "\n IS_PLAYER_CALLING_CONTACT - Scripted Conversation ongoing" );
        return 0;
    }
    switch (g_U8867)
    {
        case 4:
        case 1:
        case 2:
        sub_74744( "\n IS_PLAYER_CALLING_CONTACT - speech control is streaming" );
        return 0;
        break;
    }
    if ((g_U95._fU0 == 1005) AND (g_U95._fU60 == iParam0))
    {
        if (bParam1)
        {
            if ((g_U95._fU508 >= 4) AND ((NOT g_U95._fU372) || (uParam2)))
            {
                return 1;
            }
        }
        else if (NOT g_U95._fU368)
        {
            return 1;
        }
    }
    return 0;
}

void sub_74744(unknown uParam0)
{
    return;
}

int sub_75012(unknown uParam0, unknown uParam1, boolean bParam2)
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
    uVar23 = g_U95._fU60;
    if (NOT (COMPARE_STRING( uParam0, "PLACEHOLDER" )))
    {
        if (bParam2)
        {
            return sub_75120( uVar23, ref cVar5, uParam1, 0, ref uVar14, ref uVar14, "", 0, bParam2, 1, 1, 0, 0, 0 );
        }
        if ((NOT g_U95._fU368) == 1)
        {
            StrCopy( ref g_U95._fU224[0], uParam1, 16 );
            StrCopy( ref g_U95._fU224[1], uParam0, 16 );
            sub_77007( uVar23, ref g_U95._fU176 );
            g_U95._fU368 = 1;
            return 1;
        }
    }
    return 0;
}

int sub_75120(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U95._fU540)
    {
        return 0;
    }
    sub_74744( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8865 >= 6)
        {
            sub_74744( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_8409() )))
    {
        sub_74744( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_16171() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_16171() ))))
    {
        sub_74744( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8867)
    {
        case 4:
        case 1:
        case 2:
        sub_74744( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_75635()) AND (NOT bParam11))
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
                sub_74744( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT sub_75635()) AND (NOT bParam11))
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
    sub_77007( uParam0, ref g_U95._fU176 );
    sub_77667( ref g_U95._fU160 );
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
        sub_77907( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

int sub_75635()
{
    if ((g_U95._fU48) || (g_U95._fU52))
    {
        return 0;
    }
    if (g_U95._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_75692())
    {
        return 0;
    }
    if (g_U560 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_75692()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_8409() )))
    {
        sub_74744( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_74744( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U95._fU376)
    {
        sub_74744( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U95._fU100) || (g_U95._fU104))
    {
        sub_74744( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_8409() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_16171() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_16171(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_74744( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_16171() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_74744( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_74744( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_8409() )))
    {
        sub_74744( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_77007(unknown uParam0, unknown uParam1)
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

void sub_77667(unknown uParam0)
{
    StrCopy( (uParam0^), "LUIS", 16 );
    return;
}

void sub_77907(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_78307(unknown uParam0, unknown uParam1)
{
    if (NOT (COMPARE_STRING( uParam1, "MF14AUD" )))
    {
        return;
    }
    if ((((COMPARE_STRING( uParam0, "MF6_BMSG" )) || (COMPARE_STRING( uParam0, "MF6_BNR" ))) || (COMPARE_STRING( uParam0, "MF6_BOFF" ))) || (COMPARE_STRING( uParam0, "MF6_BUN" )))
    {
        sub_78439( "BADGER" );
        return;
    }
    if ((((COMPARE_STRING( uParam0, "MF6_TMSG" )) || (COMPARE_STRING( uParam0, "MF6_TNR" ))) || (COMPARE_STRING( uParam0, "MF6_TOFF" ))) || (COMPARE_STRING( uParam0, "MF6_TUN" )))
    {
        sub_78439( "TINKLE" );
        return;
    }
    if ((((COMPARE_STRING( uParam0, "MF6_WMSG" )) || (COMPARE_STRING( uParam0, "MF6_WNR" ))) || (COMPARE_STRING( uParam0, "MF6_WOFF" ))) || (COMPARE_STRING( uParam0, "MF6_WUN" )))
    {
        sub_78439( "WHIZ" );
        return;
    }
    return;
}

void sub_78439(unknown uParam0)
{
    StrCopy( ref g_U95._fU176, uParam0, 32 );
    return;
}

void sub_78685(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    iVar4 = 24;
    while (iVar3 < iVar4)
    {
        g_U16014[uParam0]._fU8[1]._fU0[iVar3] = 0;
        iVar3++;
    }
    g_U16014[uParam0]._fU4 = 0;
    return;
}

void sub_78861(unknown uParam0)
{
    int iVar3;
    int Result;

    iVar3 = 60000;
    if (g_U20825[uParam0]._fU712._fU164 < 60000)
    {
        iVar3 = 25000;
    }
    Result = g_U20825[uParam0]._fU712._fU164 / 10;
    if (Result < iVar3)
    {
        Result = iVar3;
    }
    return Result;
}

void sub_79168(unknown uParam0)
{
    int iVar3;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    g_U20825[uParam0]._fU712._fU4 = 1;
    g_U20825[uParam0]._fU712._fU168 = iVar3 + g_U20825[uParam0]._fU712._fU164;
    sub_62409( "CONTACT REHOSPITALISED\n" );
    return;
}

void sub_79326(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_74187( uParam0 );
    if (g_U14925[uVar3]._fU160._fU4)
    {
        return;
    }
    if (g_U14925[uVar3]._fU160._fU0)
    {
        if (g_U14925[uVar3]._fU160._fU8)
        {
            g_U16014[uParam0]._fU8[0]._fU0[5] = 1;
        }
        g_U14925[uVar3]._fU160._fU108._fU0 = 1;
    }
    return;
}

int sub_79602()
{
    if (g_U95._fU60 != -1)
    {
        if ((g_U16014[g_U95._fU60]._fU212._fU24 == 0) || (g_U16014[g_U95._fU60]._fU212._fU24 == 3))
        {
            return 1;
        }
    }
    return 0;
}

void sub_79705(unknown uParam0)
{
    return;
}

int sub_79775()
{
    if (g_U95._fU60 != -1)
    {
        return g_U16014[g_U95._fU60]._fU212._fU24;
    }
    return 6;
}

int sub_79885(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    g_U20825[uParam0]._fU712._fU172++;
    if (g_U20825[uParam0]._fU712._fU172 < 3)
    {
        return 1;
    }
    sub_5397( uParam0 );
    uVar3 = sub_74187( uParam0 );
    sub_79982( uVar3 );
    uVar4 = g_U20825[uParam0]._fU104;
    uVar5 = g_U20825[uParam0]._fU712._fU160;
    sub_80334( uVar4 );
    sub_80440( uVar4, uParam0, uVar5, 0 );
    return 0;
}

void sub_79982(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 3:
        case 7:
        iVar3 = -5;
        break;
        default:
        sub_24711( "Flow_Hospital_No_Pickup_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_80116( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_80116( uParam0, 0, iVar4 );
    return;
}

void sub_80116(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U12382[uParam0]._fU44[uParam1] += iParam2;
    if (g_U12382[uParam0]._fU44[uParam1] < 0)
    {
        g_U12382[uParam0]._fU44[uParam1] = 0;
    }
    if (g_U12382[uParam0]._fU44[uParam1] > 100)
    {
        g_U12382[uParam0]._fU44[uParam1] = 100;
    }
    return;
}

void sub_80334(unknown uParam0)
{
    g_U42731._fU12[uParam0]._fU0 = 0;
    g_U42731._fU12[uParam0]._fU4 = 0;
    g_U42731._fU12[uParam0]._fU12 = 37;
    g_U42731._fU12[uParam0]._fU16 = 0;
    g_U42731._fU12[uParam0]._fU20 = 0;
    return;
}

void sub_80440(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    iVar6 = 5;
    sub_80465( uParam0, uParam1, uParam2, uParam3, iVar6, 64537 );
    return;
}

void sub_80465(int iParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;
    int iVar9;

    iVar8 = 10;
    if (iParam0 >= iVar8)
    {
        SCRIPT_ASSERT( "Text_Player: Unknown Txt ID. Tell Keith. Needs added to g_eAmbientTxtmsgs." );
        sub_80577( uParam1, uParam2 );
        return;
    }
    if (g_U42731._fU12[iParam0]._fU0)
    {
        SCRIPT_ASSERT( "Text_Player: Txt has already been setup." );
    }
    iVar9 = 0;
    GET_GAME_TIMER( ref iVar9 );
    g_U42731._fU12[iParam0]._fU0 = 1;
    g_U42731._fU12[iParam0]._fU4 = 0;
    g_U42731._fU12[iParam0]._fU8 = 0;
    g_U42731._fU12[iParam0]._fU12 = uParam1;
    g_U42731._fU12[iParam0]._fU16 = uParam2;
    g_U42731._fU12[iParam0]._fU20 = iVar9 + iParam3;
    g_U42731._fU12[iParam0]._fU28 = uParam4;
    g_U42731._fU12[iParam0]._fU32 = uParam5;
    sub_82859( iParam0, iParam3 );
    return;
}

void sub_80577(unknown uParam0, unknown uParam1)
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
    uVar11 = sub_80600( uParam0 );
    sub_80979( uVar11, uParam1, 16383, 16383, ref uVar4 );
    sub_81323( ref uVar4, 1 );
    sub_81351( ref uVar4, 0 );
    sub_81379( ref uVar4, 2 );
    sub_81410( ref uVar4, 0 );
    return;
}

int sub_80600(unknown uParam0)
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
        case 16: return 16;
        case 17: return 17;
        case 18: return 18;
        case 19: return 19;
        case 20: return 20;
        case 21: return 21;
        case 22: return 22;
        case 23: return 23;
        case 24: return 24;
        case 25: return 25;
        case 26: return 26;
        case 27: return 27;
    }
    sub_24711( "Flow_public: Return_Text_Message_From_Contact(): Contact Text Message ID not set up yet" );
    return 99;
}

void sub_80979(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_81001( uParam0, 0, iParam4 + 0 );
    sub_81001( uParam1, 1, iParam4 + 0 );
    sub_81001( uParam2, 2, iParam4 + 0 );
    sub_81001( uParam3, 3, iParam4 + 0 );
    sub_81001( 0, 4, iParam4 + 0 );
    sub_81001( 1, 5, iParam4 + 0 );
    sub_81001( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_81001(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_81323(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_81351(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_81379(int iParam0, unknown uParam1)
{
    sub_81001( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_81410(int iParam0, boolean bParam1)
{
    int I;
    int iVar5;
    char[16] cVar6;
    int iVar10;

    iVar5 = 0;
    StrCopy( ref cVar6, "T1_NAME_", 16 );
    if (g_U95._fU540)
    {
        return 0;
    }
    if ((g_U575[g_U575 - 1]._fU0[0]) != -1)
    {
        if (NOT sub_81480())
        {
            sub_45858( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar10 = sub_81607( iParam0->_fU0 );
    if (iVar10 != -1)
    {
        sub_45858( iVar10 );
    }
    if (bParam1)
    {
        if (NOT (g_U560 == 9))
        {
            PRINTSTRING( "KGM MP CELLPHONE: Attempt to force cellphone on screen with txtmsg but other cellphone script is already active\n" );
            return 0;
        }
        if (NOT (g_U95._fU0 == 1000))
        {
            PRINTSTRING( "KGM MP CELLPHONE: Attempt to force cellphone on screen with txtmsg but cellphone screen is not OFF\n" );
            return 0;
        }
        if (NOT (g_U95._fU404 == 1000))
        {
            PRINTSTRING( "KGM MP CELLPHONE: Attempt to force cellphone on screen with txtmsg but cellphone quickscreen is not OFF\n" );
            return 0;
        }
    }
    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if (g_U575[I]._fU0[0] == -1)
        {
            g_U575[I] = {iParam0->_fU0};
            iParam0->_fU24 = I;
            I = g_U575;
            iVar5++;
            if (iVar5 > 1)
            {
                SET_PHONE_HUD_ITEM( 1, "UNREAD_MESSAGES", iVar5 );
            }
            else
            {
                ConcatString(ref cVar6, sub_45607( 0, iParam0->_fU0 ), 16);
                SET_PHONE_HUD_ITEM( 1, ref cVar6, iVar5 );
            }
            g_U95._fU520 = 1;
            PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
            if (g_U560 == 9)
            {
                g_U95._fU404 = 1017;
            }
            else if (g_U95._fU0 == 1016)
            {
                g_U95._fU92 = 1;
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 300, 1 );
            g_U15811[2] = 1;
        }
        else if ((sub_45607( 4, g_U575[I] )) == 0)
        {
            iVar5++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    g_U95._fU408 = 0;
    if (bParam1)
    {
        g_U95._fU408 = 1;
    }
    return 1;
}

int sub_81480()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if (((sub_45607( 1, g_U575[I] )) != 0) AND (g_U575[I]._fU20))
        {
            sub_45858( I );
            return 1;
        }
    }
    return 0;
}

int sub_81607(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U575 - 1); Result++ )
    {
        if (g_U575[Result]._fU0[0] != -1)
        {
            if (sub_81672( uParam0, g_U575[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = g_U575;
        }
    }
    return -1;
}

int sub_81672(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_45607( 0, uParam0 );
        if (iVar14 == (sub_45607( 0, uParam6 )))
        {
            iVar15 = sub_45607( 3, uParam0 );
            if (iVar15 == (sub_45607( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_82859(unknown uParam0, int iParam1)
{
    g_U42731._fU12[uParam0]._fU24 = 0;
    if (iParam1 == 0)
    {
        return;
    }
    if (sub_82898( iParam1 ))
    {
        g_U42731._fU12[uParam0]._fU24 = iParam1;
        return;
    }
    return;
}

int sub_82898(int iParam0)
{
    int iVar3;

    iVar3 = sub_46129();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    iVar3 = sub_82928();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    return 0;
}

int sub_82928()
{
    if (g_U15811[0])
    {
        return 27000;
    }
    return 15000;
}

void sub_83150(unknown uParam0)
{
    g_U20825[uParam0]._fU712._fU28 = sub_83159();
    g_U20825[uParam0]._fU712._fU32 = sub_83448( uParam0 );
    return;
}

void sub_83159()
{
    int iVar2;
    int iVar3;
    float fVar4;
    float fVar5;
    int Result;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    float fVar13;
    int I;
    int iVar15;

    iVar2 = GET_INT_STAT( 363 );
    iVar3 = 0;
    if (g_U10978 <= iVar2)
    {
        iVar3 = g_U10978;
    }
    fVar4 = 99999.90000000;
    fVar5 = 70.00000000;
    Result = -1;
    fVar13 = 0.00000000;
    if (NOT (IS_CHAR_DEAD( sub_16171() )))
    {
        GET_CHAR_COORDINATES( sub_16171(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
        I = 0;
        for ( I = 0; I < 7; I++ )
        {
            if (g_U11300[I]._fU0 == iVar3)
            {
                uVar10 = {g_U11300[I]._fU4};
                GET_DISTANCE_BETWEEN_COORDS_3D( uVar10._fU0, uVar10._fU4, uVar10._fU8, uVar7._fU0, uVar7._fU4, uVar7._fU8, ref fVar13 );
                if ((fVar13 < fVar4) AND (fVar13 > fVar5))
                {
                    fVar4 = fVar13;
                    Result = I;
                }
            }
        }
        if (NOT (Result == -1))
        {
            return Result;
        }
    }
    iVar15 = 0;
    return iVar15;
}

int sub_83448(unknown uParam0)
{
    switch (uParam0)
    {
        case 3: return 0;
    }
    SCRIPT_ASSERT( "Find_Appropriate_Dropoff: Unknown Friend ID for Dropoff" );
    return 6;
}

int sub_83677()
{
    int I;

    I = 0;
    for ( I = 0; I < 11; I++ )
    {
        if (g_U15729[I]._fU8)
        {
            return 1;
        }
    }
    for ( I = 0; I < 8; I++ )
    {
        if (g_U20825[I]._fU68)
        {
            return 1;
        }
        if (g_U20825[I]._fU712._fU16)
        {
            return 1;
        }
    }
    for ( I = 0; I < 14; I++ )
    {
        if (g_U15904[I]._fU0)
        {
            if (g_U15904[I]._fU12)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_83873()
{
    if ((g_U95._fU0 == 1007) || (g_U95._fU0 == 1008))
    {
        return 1;
    }
    return 0;
}

int sub_83924()
{
    if (g_U560 == 2)
    {
        return 1;
    }
    return 0;
}

int sub_83959()
{
    int I;
    unknown uVar3;

    I = 0;
    for ( I = 0; I < 11; I++ )
    {
        if (sub_83985( I ))
        {
            uVar3 = sub_74403( I );
            if (g_U20825[uVar3]._fU0)
            {
                if (NOT (g_U14925[I]._fU80._fU0 == 0))
                {
                    PRINTSTRING( ".....Check_If_Friend_Activity_Setup: " );
                    PRINTINT( I );
                    PRINTSTRING( " strand setup\n" );
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_83985(unknown uParam0)
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
        case 7: return 1;
    }
    return 0;
}

int sub_84280(int iParam0)
{
    int iVar3;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (sub_84300())
    {
        return 1;
    }
    if (sub_84335())
    {
        return 1;
    }
    if (NOT (iParam0 == 0))
    {
        if (NOT (sub_82898( iParam0 )))
        {
            iParam0 = 0;
        }
    }
    if (NOT (iParam0 == 0))
    {
        if (sub_84432( iParam0 ))
        {
            return 1;
        }
        return 0;
    }
    if (g_U42731._fU4 > iVar3)
    {
        return 1;
    }
    return 0;
}

void sub_84300()
{
    return g_U95._fU540;
}

int sub_84335()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (g_U42731._fU0 > iVar2)
    {
        return 1;
    }
    return 0;
}

int sub_84432(int iParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    iVar4 = iVar3 - g_U42731._fU8;
    if (iVar4 < iParam0)
    {
        return 1;
    }
    return 0;
}

int sub_84812(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = sub_84825( uParam0, uParam1 );
    sub_85252( uParam0, "PHOLDER_E2", "FCRDCAU", 10000, 0 );
    return 1;
}

int sub_84825(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;

    iVar4 = g_U12382[uParam1]._fU44[1];
    iVar5 = 0;
    iVar6 = 0;
    switch (uParam0)
    {
        case 3:
        iVar6 = 3 - 0;
        iVar5 = g_U12382[uParam1]._fU148[iVar6]._fU128;
        break;
        case 7:
        iVar6 = 4 - 0;
        iVar5 = g_U12382[uParam1]._fU148[iVar6]._fU128;
        break;
        default:
        SCRIPT_ASSERT( "Get_Like_State: Unknown Friend ID for High LIKE value" );
        iVar5 = 80;
    }
    iVar7 = g_U20825[uParam0]._fU160;
    iVar8 = 10;
    iVar9 = iVar5 - iVar7;
    iVar10 = 0;
    if (iVar9 < 20)
    {
        if (iVar5 < iVar7)
        {
            iVar10 = (iVar5 + iVar7) / 2;
            iVar5 = iVar10;
            iVar7 = iVar10;
            iVar9 = 0;
        }
        iVar5 += iVar8;
        iVar7 -= iVar8;
        if (iVar5 > 100)
        {
            iVar5 = 100;
        }
        if (iVar7 < 0)
        {
            iVar7 = 0;
        }
        iVar9 = iVar5 - iVar7;
    }
    iVar11 = iVar9 / 5;
    iVar12 = iVar5 - iVar11;
    if (iVar4 >= iVar12)
    {
        return 0;
    }
    iVar12 = iVar7 + iVar11;
    if (iVar4 >= iVar12)
    {
        return 1;
    }
    return 2;
}

void sub_85252(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_75120( uParam0, ref cVar7, uParam2, 0, ref uVar16, ref uVar16, "", uParam3, 1, 0, 1, 0, 0, uParam4 );
}

int sub_85406(unknown uParam0)
{
    sub_85417( uParam0 );
    sub_86202( uParam0 );
    if (g_U12382[uParam0]._fU872._fU0)
    {
        sub_74392( uParam0 );
        return 1;
    }
    if (g_U12382[uParam0]._fU112)
    {
        sub_74392( uParam0 );
        return 1;
    }
    return 0;
}

void sub_85417(unknown uParam0)
{
    if (NOT g_U12382[uParam0]._fU872._fU4)
    {
        return;
    }
    sub_85454( uParam0 );
    if (NOT (sub_85689( g_U12382[uParam0]._fU872._fU8 )))
    {
        return;
    }
    g_U12382[uParam0]._fU872._fU4 = 0;
    sub_1547( ref g_U12382[uParam0]._fU872._fU8 );
    sub_85984( uParam0 );
    return;
}

void sub_85454(unknown uParam0)
{
    unknown uVar3;

    if (g_U12382[uParam0]._fU872._fU0)
    {
        return;
    }
    if (g_U14925[uParam0]._fU80._fU0 == 1)
    {
        sub_41186( uParam0 );
    }
    if (g_U14925[uParam0]._fU0._fU0 == 1)
    {
        sub_61450( uParam0 );
    }
    uVar3 = sub_74403( uParam0 );
    if (g_U14925[uParam0]._fU160._fU0)
    {
        if (g_U14925[uParam0]._fU160._fU8)
        {
            g_U16014[uVar3]._fU8[0]._fU0[5] = 0;
        }
        g_U14925[uParam0]._fU160._fU108._fU0 = 0;
    }
    g_U12382[uParam0]._fU872._fU0 = 1;
    return;
}

int sub_85689(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_85858( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_85858(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

void sub_85984(unknown uParam0)
{
    unknown uVar3;

    if (NOT g_U12382[uParam0]._fU872._fU0)
    {
        return;
    }
    if (g_U12382[uParam0]._fU872._fU4)
    {
        return;
    }
    if (g_U12382[uParam0]._fU872._fU24)
    {
        return;
    }
    if (g_U14925[uParam0]._fU160._fU0)
    {
        uVar3 = sub_74403( uParam0 );
        if (g_U14925[uParam0]._fU160._fU8)
        {
            g_U16014[uVar3]._fU8[0]._fU0[5] = 1;
        }
        g_U14925[uParam0]._fU160._fU108._fU0 = 1;
    }
    g_U12382[uParam0]._fU872._fU0 = 0;
    return;
}

void sub_86202(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (NOT g_U12382[uParam0]._fU872._fU24)
    {
        return;
    }
    sub_85454( uParam0 );
    if (NOT (IS_PLAYER_PLAYING( sub_8409() )))
    {
        return;
    }
    uVar3 = g_U12382[uParam0]._fU872._fU28._fU0;
    uVar4 = g_U12382[uParam0]._fU872._fU28._fU4;
    uVar5 = g_U12382[uParam0]._fU872._fU40;
    if (LOCATE_CHAR_ANY_MEANS_2D( sub_16171(), uVar3, uVar4, uVar5, uVar5, 0 ))
    {
        return;
    }
    g_U12382[uParam0]._fU872._fU24 = 0;
    g_U12382[uParam0]._fU872._fU28 = {0.00000000, 0.00000000, 0.00000000};
    g_U12382[uParam0]._fU872._fU40 = 0.00000000;
    sub_85984( uParam0 );
    return;
}

void sub_86534(unknown uParam0, unknown uParam1)
{
    int I;
    int iVar5;
    int iVar6;
    boolean bVar7;
    int iVar8;
    unknown uVar9;

    if (NOT (sub_86545( uParam1 )))
    {
        return;
    }
    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        if (g_U12382[uParam1]._fU148[I]._fU24)
        {
            if (sub_86648( uParam1, I ))
            {
                return;
            }
            if (g_U12382[uParam1]._fU148[I]._fU28)
            {
                g_U12382[uParam1]._fU148[I]._fU84 = 0;
                g_U12382[uParam1]._fU148[I]._fU28 = 0;
                return;
            }
        }
    }
    for ( I = 0; I < 5; I++ )
    {
        if (g_U12382[uParam1]._fU148[I]._fU84)
        {
            if (g_U12382[uParam1]._fU148[I]._fU88)
            {
                if (IS_THREAD_ACTIVE( g_U12382[uParam1]._fU148[I]._fU92 ))
                {
                    sub_87061( uParam0, uParam1 );
                    return;
                }
                if (g_U12382[uParam1]._fU148[I]._fU92 != nil)
                {
                    DESTROY_THREAD( g_U12382[uParam1]._fU148[I]._fU92 );
                }
                sub_87648( uParam0, I );
                if ((I + 0) == 0)
                {
                    ;
                }
                sub_2343( uParam1, I );
                return;
            }
            REQUEST_SCRIPT( ref g_U12382[uParam1]._fU148[I]._fU96 );
            if (NOT (HAS_SCRIPT_LOADED( ref g_U12382[uParam1]._fU148[I]._fU96 )))
            {
                REQUEST_SCRIPT( ref g_U12382[uParam1]._fU148[I]._fU96 );
                return;
            }
            g_U12382[uParam1]._fU148[I]._fU92 = START_NEW_SCRIPT( ref g_U12382[uParam1]._fU148[I]._fU96, 1828 );
            MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U12382[uParam1]._fU148[I]._fU96 );
            g_U12382[uParam1]._fU148[I]._fU88 = 1;
            g_U12382[uParam1]._fU28 = 1;
            return;
        }
    }
    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    iVar6 = 0;
    for ( I = 0; I < 5; I++ )
    {
        if (g_U12382[uParam1]._fU148[I]._fU40)
        {
            if (sub_79602())
            {
                return;
            }
            sub_46107();
            switch (sub_79775())
            {
                case 1:
                case 2:
                g_U12382[uParam1]._fU148[I]._fU40 = 0;
                g_U12382[uParam1]._fU148[I]._fU12 = 0;
                g_U12382[uParam1]._fU148[I]._fU16 = iVar5 + 90000;
                return;
            }
            if (sub_88927())
            {
                g_U12382[uParam1]._fU148[I]._fU40 = 0;
                g_U12382[uParam1]._fU148[I]._fU12 = 0;
                g_U12382[uParam1]._fU148[I]._fU16 = iVar5 + 90000;
                return;
            }
            g_U12382[uParam1]._fU148[I]._fU40 = 0;
            g_U12382[uParam1]._fU148[I]._fU44 = 1;
            g_U12382[uParam1]._fU28 = 1;
            sub_89111( uParam0, 0 );
            sub_89199( 0, uParam0, I );
            g_U12382[uParam1]._fU148[I]._fU48 = 1;
            return;
        }
    }
    for ( I = 0; I < 5; I++ )
    {
        if (g_U12382[uParam1]._fU148[I]._fU48)
        {
            if (NOT g_U12379)
            {
                if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                {
                    if (NOT sub_91689())
                    {
                        g_U12382[uParam1]._fU148[I]._fU48 = 0;
                    }
                }
            }
        }
    }
    bVar7 = false;
    for ( I = 0; I < 5; I++ )
    {
        bVar7 = false;
        if (NOT g_U12382[uParam1]._fU148[I]._fU0)
        {
            bVar7 = true;
        }
        if (NOT bVar7)
        {
            if (g_U12382[uParam1]._fU148[I]._fU32)
            {
                sub_91860( uParam0, uParam1, I );
                bVar7 = true;
            }
        }
        if (NOT bVar7)
        {
            if (sub_92338( uParam1, I ))
            {
                sub_91860( uParam0, uParam1, I );
                bVar7 = true;
            }
        }
        if (NOT bVar7)
        {
            if (g_U14925[uParam1]._fU160._fU96)
            {
                if (sub_92504( uParam1, I ))
                {
                    sub_91860( uParam0, uParam1, I );
                    bVar7 = true;
                }
            }
        }
        if (NOT bVar7)
        {
            if (sub_92624( uParam0 ))
            {
                sub_91860( uParam0, uParam1, I );
                bVar7 = true;
            }
        }
        if (NOT bVar7)
        {
            if (g_U16014[uParam0]._fU4)
            {
                if (sub_92731( uParam0, uParam1, I ))
                {
                    return;
                }
            }
        }
        iVar8 = 0;
        if (NOT bVar7)
        {
            iVar8 = g_U12382[uParam1]._fU44[1];
            if (g_U12382[uParam1]._fU148[I]._fU20)
            {
                if (iVar8 < g_U12382[uParam1]._fU148[I]._fU128)
                {
                    g_U12382[uParam1]._fU148[I]._fU20 = 0;
                    sub_97486( uParam0, I );
                }
            }
            else if ((iVar8 >= g_U12382[uParam1]._fU148[I]._fU128) AND (sub_97697( uParam1, I )))
            {
                if (NOT g_U12382[uParam1]._fU148[I]._fU12)
                {
                    if (g_U12382[uParam1]._fU148[I]._fU16 > 0)
                    {
                        if (iVar5 > g_U12382[uParam1]._fU148[I]._fU16)
                        {
                            g_U12382[uParam1]._fU148[I]._fU12 = 1;
                        }
                    }
                }
                if (g_U12382[uParam1]._fU148[I]._fU12)
                {
                    if (NOT g_U12382[uParam1]._fU148[I]._fU44)
                    {
                        if (NOT (sub_97896( uParam1 )))
                        {
                            g_U12382[uParam1]._fU148[I]._fU12 = 0;
                            g_U12382[uParam1]._fU148[I]._fU16 = iVar5 + 90000;
                            bVar7 = true;
                        }
                        if (NOT bVar7)
                        {
                            if (NOT (sub_98239( uParam0, I )))
                            {
                                g_U12382[uParam1]._fU148[I]._fU12 = 0;
                                g_U12382[uParam1]._fU148[I]._fU16 = iVar5 + 90000;
                                bVar7 = true;
                            }
                        }
                        if (NOT bVar7)
                        {
                            g_U12382[uParam1]._fU148[I]._fU40 = 1;
                            sub_99042( uParam1, I );
                            bVar7 = true;
                        }
                    }
                    if (NOT bVar7)
                    {
                        iVar6 = g_U20825[uParam0]._fU104;
                        uVar9 = g_U12382[uParam1]._fU148[I]._fU140;
                        sub_80334( iVar6 );
                        sub_80465( iVar6, uParam0, uVar9, 0, 1, I );
                        bVar7 = true;
                    }
                }
            }
            else if (NOT g_U12382[uParam1]._fU148[I]._fU12)
            {
                if (g_U12382[uParam1]._fU148[I]._fU16 > 0)
                {
                    g_U12382[uParam1]._fU148[I]._fU16 = iVar5 + 90000;
                }
            };;;
        }
    }
    return;
}

int sub_86545(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        case 7: return 1;
    }
    return 0;
}

int sub_86648(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    if (sub_79602())
    {
        PRINTSTRING( ".........SPECIAL ABILITY PHONECALL STILL RINGING\n" );
        return 1;
    }
    bVar4 = false;
    switch (sub_79775())
    {
        case 2:
        bVar4 = true;
        break;
        case 6:
        bVar4 = false;
        break;
        default: return 1;
    }
    g_U12382[uParam0]._fU148[uParam1]._fU24 = 0;
    if (NOT bVar4)
    {
        g_U12382[uParam0]._fU148[uParam1]._fU84 = 1;
    }
    return 0;
}

int sub_87061(unknown uParam0, unknown uParam1)
{
    if (g_U16014[uParam0]._fU4)
    {
        if (sub_87090( uParam0 ))
        {
            sub_87456( uParam1 );
            return 1;
        }
    }
    return 0;
}

int sub_87090(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;

    iVar3 = 24;
    I = 0;
    for ( I = 0; I < iVar3; I++ )
    {
        if (g_U16014[uParam0]._fU8[1]._fU0[I])
        {
            iVar5 = I;
            switch (iVar5)
            {
                case 0: return 1;
                case 3:
                case 4: return 1;
                case 1: return 0;
                case 2: return 0;
                case 6:
                case 7:
                case 8:
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
                case 23:
                case 9: return 0;
                case 5: return 0;
            }
        }
    }
    sub_62201( "Is_Cellphone_Special_Selected: Unknown activity" );
    return 0;
}

void sub_87456(unknown uParam0)
{
    unknown uVar3;

    sub_75012( ref g_U12382[uParam0]._fU96, ref g_U12382[uParam0]._fU80, 0 );
    sub_78307( ref g_U12382[uParam0]._fU96, ref g_U12382[uParam0]._fU80 );
    uVar3 = sub_74403( uParam0 );
    sub_78685( uVar3 );
    sub_46107();
    return;
}

void sub_87648(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;
    unknown uVar6;
    int iVar7;

    if (NOT g_U20825[uParam0]._fU308[uParam1]._fU0)
    {
        return;
    }
    if (NOT g_U20825[uParam0]._fU308[uParam1]._fU40)
    {
        return;
    }
    iVar4 = g_U20825[uParam0]._fU308[uParam1]._fU48._fU0._fU0;
    iVar5 = g_U20825[uParam0]._fU308[uParam1]._fU48._fU8._fU0;
    uVar6 = g_U20825[uParam0]._fU308[uParam1]._fU48._fU8._fU4;
    while (iVar4 > 0)
    {
        iVar4--;
        iVar5 += 24;
    }
    iVar7 = 0;
    sub_87863( ref g_U20825[uParam0]._fU308[uParam1]._fU64, iVar5, uVar6, iVar7 );
    return;
}

void sub_87863(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_87916( iParam0, uParam1, uParam2 );
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
        sub_88048( iParam0 + 0 );
    }
    return;
}

void sub_87916(int iParam0, int iParam1, int iParam2)
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
        sub_88048( iParam0 + 0 );
    }
    return;
}

void sub_88048(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_88079( iParam0->_fU4 )))
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

int sub_88079(unknown uParam0)
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

void sub_88927()
{
    return g_U95._fU504;
}

void sub_89111(int iParam0, boolean bParam1)
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

void sub_89199(int iParam0, int iParam1, int iParam2)
{
    int iVar5;
    int iVar6;
    boolean bVar7;

    if (iParam0 == 5)
    {
        return;
    }
    iVar5 = 11;
    if (iParam1 < 8)
    {
        iVar5 = sub_74187( iParam1 );
    }
    iVar6 = 0;
    bVar7 = false;
    switch (iParam0)
    {
        case 0:
        if (iParam2 == 64537)
        {
            SCRIPT_ASSERT( "Trigger_Additional_Code: CODE_ACTIVATE_SPECIAL_ABILITY requires array pos of Special Ability" );
            return;
        }
        g_U12382[iVar5]._fU148[iParam2]._fU20 = 1;
        sub_89440( iParam1, iParam2 );
        sub_89611( iParam1, iParam2 );
        sub_90150( iParam1 );
        sub_90182( iVar5, iParam2 );
        break;
        case 1:
        if (iParam2 == 64537)
        {
            SCRIPT_ASSERT( "Trigger_Additional_Code: CODE_REACTIVATE_SPECIAL_ABILITY requires array pos of Special Ability" );
            return;
        }
        g_U12382[iVar5]._fU148[iParam2]._fU20 = 1;
        sub_89440( iParam1, iParam2 );
        sub_89611( iParam1, iParam2 );
        iVar6 = g_U12382[iVar5]._fU148[iParam2]._fU140;
        iVar6++;
        if (iVar6 >= g_U12382[iVar5]._fU148[iParam2]._fU136)
        {
            iVar6 = g_U12382[iVar5]._fU148[iParam2]._fU132;
        }
        g_U12382[iVar5]._fU148[iParam2]._fU140 = iVar6;
        break;
        case 2:
        bVar7 = false;
        if (NOT g_U20825[iParam1]._fU92)
        {
            g_U20825[iParam1]._fU92 = 1;
            bVar7 = true;
        }
        else if (NOT g_U20825[iParam1]._fU96)
        {
            g_U20825[iParam1]._fU96 = 1;
            bVar7 = true;
        }
        if (bVar7)
        {
            sub_91022( iVar5 );
        }
        break;
        case 3:
        sub_91191( iVar5 );
        sub_91349( iVar5 );
        break;
        case 4:
        sub_79982( iVar5 );
        break;
        default: SCRIPT_ASSERT( "Trigger_Additional_Code: Unknown Code ID" );
    }
    return;
}

void sub_89440(unknown uParam0, int iParam1)
{
    int iVar4;

    if (iParam1 >= 5)
    {
        SCRIPT_ASSERT( "Add_Special_Ability_To_Phone: special ability array element out o fbounds" );
        return;
    }
    if (g_U20825[uParam0]._fU308[iParam1]._fU0)
    {
        iVar4 = 0 + iParam1;
        g_U16014[uParam0]._fU8[0]._fU0[iVar4] = 1;
    }
    return;
}

void sub_89611(unknown uParam0, int iParam1)
{
    if (iParam1 >= 5)
    {
        SCRIPT_ASSERT( "Immediately_Expire_Special_Ability_Time_Restrictions: special ability array element out o fbounds" );
        return;
    }
    if (g_U20825[uParam0]._fU308[iParam1]._fU0)
    {
        if (g_U20825[uParam0]._fU308[iParam1]._fU40)
        {
            sub_89815( ref g_U20825[uParam0]._fU308[iParam1]._fU64 );
            sub_89911( ref g_U20825[uParam0]._fU308[iParam1]._fU64, 0, 1 );
        }
    }
    return;
}

void sub_89815(int iParam0)
{
    sub_89828( iParam0 + 0 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    return;
}

void sub_89828(int iParam0)
{
    GET_CURRENT_DATE( iParam0 + 0, iParam0 + 4 );
    return;
}

void sub_89911(int iParam0, int iParam1, int iParam2)
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
        sub_90041( iParam0 + 0 );
    }
    return;
}

void sub_90041(int iParam0)
{
    iParam0->_fU0--;
    if (iParam0->_fU0 < 1)
    {
        iParam0->_fU4--;
        if (iParam0->_fU4 < 1)
        {
            iParam0->_fU4 = 12;
        }
        iParam0->_fU0 = sub_88079( iParam0->_fU4 );
    }
    return;
}

void sub_90150(unknown uParam0)
{
    if (g_U0)
    {
        return;
    }
    return;
}

void sub_90182(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    if (g_U0)
    {
        return;
    }
    iVar4 = 2;
    iVar5 = 0 + iParam1;
    iVar6 = iVar5;
    switch (uParam0)
    {
        case 3:
        if (iVar6 == 3)
        {
            iVar4 = 0;
        }
        else
        {
            return;
        }
        break;
        case 7:
        if (iVar6 == 4)
        {
            iVar4 = 1;
        }
        else
        {
            return;
        }
        break;
        default: return;
    }
    if (iVar4 == 2)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Special_Complete: unknown special ability ID\n" );
        return;
    }
    iVar7 = 0;
    if (NOT g_U43065[iVar4]._fU0)
    {
        iVar7 = g_U43065[iVar4]._fU8;
        if (iVar7 > 0)
        {
            sub_90427( 4, iVar7 );
            g_U43065[iVar4]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_90427(unknown uParam0, int iParam1)
{
    g_U28780[uParam0]._fU4 += iParam1;
    if (g_U28780[uParam0]._fU4 > g_U28780[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U28780[uParam0]._fU4 = g_U28780[uParam0]._fU0;
    }
    sub_58550( 0 );
    return;
}

void sub_91022(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 3:
        case 7:
        iVar3 = -10;
        break;
        default:
        sub_24711( "Flow_Friend_No_Contact_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_80116( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_80116( uParam0, 0, iVar4 );
    return;
}

void sub_91191(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 3:
        case 7:
        iVar3 = 0;
        break;
        default:
        sub_24711( "Flow_Friend_Late_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_80116( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_80116( uParam0, 0, iVar4 );
    return;
}

void sub_91349(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 3:
        case 7:
        iVar3 = -5;
        break;
        default:
        sub_24711( "Flow_Friend_No_Show_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_80116( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_80116( uParam0, 0, iVar4 );
    return;
}

int sub_91689()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_91860(unknown uParam0, unknown uParam1, int iParam2)
{
    int iVar5;

    if (g_U16014[uParam0]._fU4)
    {
        if (sub_87090( uParam0 ))
        {
            iVar5 = sub_91901( uParam0 );
            if (iVar5 == iParam2)
            {
                sub_87456( uParam1 );
                return 1;
            }
        }
    }
    return 0;
}

int sub_91901(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;

    iVar3 = 24;
    I = 0;
    for ( I = 0; I < iVar3; I++ )
    {
        if (g_U16014[uParam0]._fU8[1]._fU0[I])
        {
            iVar5 = I;
            switch (iVar5)
            {
                case 0: return I - 0;
                case 3:
                case 4: return I - 0;
                case 1: return -1;
                case 2: return -1;
                case 6:
                case 7:
                case 8:
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
                case 23:
                case 9: return -1;
                case 5: return -1;
            }
        }
    }
    sub_62201( "Get_Cellphone_Special_Ability_Array_Position_Selected: Unknown activity" );
    return -1;
}

int sub_92338(unknown uParam0, int iParam1)
{
    int I;

    for ( I = 0; I < 5; I++ )
    {
        if (NOT (I == iParam1))
        {
            if ((g_U12382[uParam0]._fU148[iParam1]._fU0) AND (g_U12382[uParam0]._fU148[iParam1]._fU84))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_92504(unknown uParam0, int iParam1)
{
    int iVar4;

    iVar4 = iParam1 + 0;
    switch (uParam0)
    {
        case 3:
        if ((iVar4 == 0) || (iVar4 == 3))
        {
            return 1;
        }
        break;
        case 7:
        if (iVar4 == 4)
        {
            return 1;
        }
        break;
    }
    return 0;
}

int sub_92624(int iParam0)
{
    if (iParam0 == 37)
    {
        return 0;
    }
    if (NOT (g_U42871._fU0 == iParam0))
    {
        return 0;
    }
    return 1;
}

void sub_92731(unknown uParam0, unknown uParam1, int iParam2)
{
    int iVar5;

    if (NOT (sub_87090( uParam0 )))
    {
        return 0;
    }
    iVar5 = iParam2 + 0;
    return sub_92769( uParam0, uParam1, iVar5 );
}

int sub_92769(unknown uParam0, unknown uParam1, int iParam2)
{
    int iVar5;
    int iVar6;
    char[64] cVar7;
    boolean bVar23;
    boolean bVar24;
    boolean bVar25;

    if (NOT g_U16014[uParam0]._fU8[1]._fU0[iParam2])
    {
        return 0;
    }
    iVar5 = g_U20825[uParam0]._fU208[iParam2]._fU0;
    if (iVar5 == -1)
    {
        sub_62201( "Flow_Check_Special_Action_Selected: Trigger Info for Special Action not set up\n" );
        return 0;
    }
    iVar6 = iParam2 - 0;
    if (g_U12382[uParam1]._fU148[iVar6]._fU36)
    {
        sub_87456( uParam1 );
        g_U16014[uParam0]._fU4 = 0;
        g_U16014[uParam0]._fU8[1]._fU0[iParam2] = 0;
        sub_93013();
        return 0;
    }
    StrCopy( ref cVar7, "", 64 );
    bVar23 = sub_93079( uParam0, iParam2, ref cVar7 );
    if (NOT bVar23)
    {
        sub_87456( uParam1 );
        g_U16014[uParam0]._fU4 = 0;
        g_U16014[uParam0]._fU8[1]._fU0[iParam2] = 0;
        sub_93013();
        return 0;
    }
    bVar24 = false;
    if (g_U12379)
    {
        if (NOT g_U20825[uParam0]._fU308[iVar6]._fU36)
        {
            sub_87456( uParam1 );
            g_U16014[uParam0]._fU4 = 0;
            g_U16014[uParam0]._fU8[1]._fU0[iParam2] = 0;
            sub_93013();
            return 0;
        }
    }
    if (g_U20825[uParam0]._fU16)
    {
        sub_87456( uParam1 );
        g_U16014[uParam0]._fU4 = 0;
        g_U16014[uParam0]._fU8[1]._fU0[iParam2] = 0;
        sub_93013();
        return 0;
    }
    if (sub_93787( uParam1, iParam2 ))
    {
        sub_87456( uParam1 );
        g_U16014[uParam0]._fU4 = 0;
        g_U16014[uParam0]._fU8[1]._fU0[iParam2] = 0;
        sub_93013();
        return 0;
    }
    bVar25 = true;
    if (NOT bVar24)
    {
        if (g_U20825[uParam0]._fU308[iVar6]._fU40)
        {
            if (g_U20825[uParam0]._fU308[iVar6]._fU44)
            {
                if (g_U12379)
                {
                    bVar25 = false;
                }
            }
            if (bVar25)
            {
                if (NOT (sub_85689( g_U20825[uParam0]._fU308[iVar6]._fU64 )))
                {
                    sub_93993( uParam0, iVar6 );
                    bVar24 = true;
                }
            }
        }
    }
    g_U12382[uParam1]._fU148[iVar6]._fU28 = bVar24;
    if (NOT bVar24)
    {
        sub_95919( uParam0, ref cVar7, iVar6 );
    }
    g_U12382[uParam1]._fU148[iVar6]._fU24 = 1;
    g_U16014[uParam0]._fU4 = 0;
    g_U16014[uParam0]._fU8[1]._fU0[iParam2] = 0;
    sub_97262( uParam0, uParam1, iParam2 );
    sub_93013();
    return 1;
}

void sub_93013()
{
    g_U817 = 0;
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    return;
}

void sub_93079(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int Result;
    int iVar6;
    int iVar7;

    Result = 0;
    iVar6 = 1;
    iVar7 = uParam1;
    switch (uParam0)
    {
        case 3:
        if (iVar7 == 3)
        {
            if (g_U11192)
            {
                iVar6 = 0;
            }
        }
        if (iVar7 == 3)
        {
            if (((NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_gun_car" )) > 0)) AND (NOT sub_83959())) AND (iVar6))
            {
                Result = 1;
            }
        }
        else
        {
            SCRIPT_ASSERT( "Check_For_Area_Specific_Special_Ability_CallID: Unused Armando ability ID" );
        }
        break;
        case 7:
        if (iVar7 == 4)
        {
            if (g_U11198)
            {
                iVar6 = 0;
            }
        }
        if (iVar7 == 4)
        {
            if (((NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_vehicle" )) > 0)) AND (NOT sub_83959())) AND (iVar6))
            {
                Result = 1;
            }
        }
        else
        {
            SCRIPT_ASSERT( "Check_For_Area_Specific_Special_Ability_CallID: Unused Henrique ability ID" );
        }
        break;
        default: SCRIPT_ASSERT( "Check_For_Area_Specific_Special_Ability_CallID: unknown contact ID\n" );
    }
    return Result;
}

int sub_93787(unknown uParam0, unknown uParam1)
{
    return 0;
}

void sub_93993(unknown uParam0, int iParam1)
{
    int iVar4;

    iVar4 = iParam1 + 0;
    switch (uParam0)
    {
        case 3:
        if (iVar4 == 3)
        {
            sub_94078( uParam0, "E2FAAU", "E2FA_CLRS", "E2FA_CLRSN" );
            PRINTSTRING( "\n\n\nARMANDO.........FA_Player_Calls_Special_Ability_No\n" );
        }
        else
        {
            SCRIPT_ASSERT( "FA_Player_Calls_Special_Ability_No: Unknown Armando Special Ability ID" );
        }
        return;
        case 7:
        if (iVar4 == 4)
        {
            switch (g_U11196)
            {
                case 1051281622:
                sub_94078( uParam0, "E2FHAU", "E2FH_RQTER", "E2FH_RQN" );
                PRINTSTRING( "\n\n\nPHONED HENRIQUE FOR VEHICLE: SERRANO - NO\n\n" );
                break;
                case -1896659641:
                sub_94078( uParam0, "E2FHAU", "E2FH_RQTUR", "E2FH_RQN" );
                PRINTSTRING( "\n\n\nPHONED HENRIQUE FOR VEHICLE: TURISMO - NO\n\n" );
                break;
                case -304802106:
                sub_94078( uParam0, "E2FHAU", "E2FH_RQBUF", "E2FH_RQN" );
                PRINTSTRING( "\n\n\nPHONED HENRIQUE FOR VEHICLE: BUFFALO - NO\n\n" );
                break;
                case -591610296:
                sub_94078( uParam0, "E2FHAU", "E2FH_RQF", "E2FH_RQN" );
                PRINTSTRING( "\n\n\nPHONED HENRIQUE FOR VEHICLE: F620 - NO\n\n" );
                break;
                case -1696146015:
                sub_94078( uParam0, "E2FHAU", "E2FH_RQBUL", "E2FH_RQN" );
                PRINTSTRING( "\n\n\nPHONED HENRIQUE FOR VEHICLE: BULLET - NO\n\n" );
                break;
                case 562680400:
                sub_94078( uParam0, "E2FHAU", "E2FH_RQSWT", "E2FH_RQN" );
                PRINTSTRING( "\n\n\nPHONED HENRIQUE FOR VEHICLE: APC - NO\n\n" );
                break;
                case 675415136:
                sub_94078( uParam0, "E2FHAU", "E2FH_RQPU", "E2FH_RQN" );
                PRINTSTRING( "\n\n\nPHONED HENRIQUE FOR VEHICLE: FXT - NO\n\n" );
                break;
                default: SCRIPT_ASSERT( "FA_Player_Calls_Special_Ability_No: Unknown vehicle for vehicle Dropoff" );
            }
        }
        else
        {
            SCRIPT_ASSERT( "FA_Player_Calls_Special_Ability_No: Unknown Henrique Special Ability ID" );
        }
        return;
    }
    sub_75012( "PHOLDER_E2", "E1MFAU", 1 );
    return;
}

void sub_94078(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    uVar6 = sub_94089( uParam0 );
    sub_94223( ref l_U118[uVar6]._fU0, uParam2, uParam3 );
    sub_94575( ref l_U118[uVar6]._fU0, uParam1, 1 );
    sub_46107();
    sub_89111( uParam0, 1 );
    return;
}

int sub_94089(unknown uParam0)
{
    switch (uParam0)
    {
        case 3: return 0;
        case 7: return 1;
    }
    sub_24711( "Get_Phonecall_Friend_From_Contact: Unrecognised Friend ID" );
    return 2;
}

void sub_94223(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_94274( uParam0, uParam1, uParam2, "END", "END", "END", "END", "END", "END" );
    return;
}

void sub_94274(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    char[16] cVar11;
    int I;

    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        switch (I)
        {
            case 0:
            StrCopy( ref cVar11, uParam1, 16 );
            break;
            case 1:
            StrCopy( ref cVar11, uParam2, 16 );
            break;
            case 2:
            StrCopy( ref cVar11, uParam3, 16 );
            break;
            case 3:
            StrCopy( ref cVar11, uParam4, 16 );
            break;
            case 4:
            StrCopy( ref cVar11, uParam5, 16 );
            break;
            case 5:
            StrCopy( ref cVar11, uParam6, 16 );
            break;
            case 6:
            StrCopy( ref cVar11, uParam7, 16 );
            break;
            case 7:
            StrCopy( ref cVar11, uParam8, 16 );
            break;
            case 8:
            StrCopy( ref cVar11, "END", 16 );
            break;
        }
        (uParam0^)[I] = {cVar11};
        if (COMPARE_STRING( ref (uParam0^)[I], "END" ))
        {
            I = (uParam0^);
        }
    }
    return;
}

int sub_94575(unknown uParam0, unknown uParam1, boolean bParam2)
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
    uVar14 = g_U95._fU60;
    if (bParam2)
    {
        return sub_75120( uVar14, uParam0, uParam1, 0, ref uVar5, ref uVar5, "", 0, bParam2, 1, 1, 0, 0, 0 );
    }
    if (NOT g_U95._fU368)
    {
        StrCopy( ref g_U95._fU224[0], uParam1, 16 );
        g_U95._fU224[1] = {(uParam0^)[0]};
        sub_77007( uVar14, ref g_U95._fU176 );
        g_U95._fU368 = 1;
        return 1;
    }
    return 0;
}

void sub_95919(unknown uParam0, unknown uParam1, int iParam2)
{
    int iVar5;

    PRINTSTRING( "Accepted by phonecall: " );
    PRINTSTRING( uParam1 );
    PRINTNL();
    iVar5 = iParam2 + 0;
    switch (uParam0)
    {
        case 3:
        if (iVar5 == 3)
        {
            sub_94078( uParam0, "E2FAAU", "E2FA_CLRS", "E2FA_CLRSY" );
            PRINTSTRING( "\n\n\nARMANDO.........FA_Player_Calls_Special_Ability_Yes\n" );
        }
        else
        {
            SCRIPT_ASSERT( "FA_Player_Calls_Special_Ability_Yes: Unknown Armando Special Ability ID" );
        }
        return;
        case 7:
        if (iVar5 == 4)
        {
            switch (g_U11196)
            {
                case 1051281622:
                sub_94078( uParam0, "E2FHAU", "E2FH_RQTER", "E2FH_RQY" );
                PRINTSTRING( "\n\n\nPHONED HENRIQUE FOR VEHICLE: SERRANO - YES\n\n" );
                break;
                case -1896659641:
                sub_94078( uParam0, "E2FHAU", "E2FH_RQTUR", "E2FH_RQY" );
                PRINTSTRING( "\n\n\nPHONED HENRIQUE FOR VEHICLE: TURISMO - YES\n\n" );
                break;
                case -304802106:
                sub_94078( uParam0, "E2FHAU", "E2FH_RQBUF", "E2FH_RQY" );
                PRINTSTRING( "\n\n\nPHONED HENRIQUE FOR VEHICLE: BUFFALO - YES\n\n" );
                break;
                case -591610296:
                sub_94078( uParam0, "E2FHAU", "E2FH_RQF", "E2FH_RQY" );
                PRINTSTRING( "\n\n\nPHONED HENRIQUE FOR VEHICLE: F620 - YES\n\n" );
                break;
                case -1696146015:
                sub_94078( uParam0, "E2FHAU", "E2FH_RQBUL", "E2FH_RQY" );
                PRINTSTRING( "\n\n\nPHONED HENRIQUE FOR VEHICLE: BULLET - YES\n\n" );
                break;
                case 562680400:
                sub_94078( uParam0, "E2FHAU", "E2FH_RQSWT", "E2FH_RQY" );
                PRINTSTRING( "\n\n\nPHONED HENRIQUE FOR VEHICLE: APC - YES\n\n" );
                break;
                case 675415136:
                sub_94078( uParam0, "E2FHAU", "E2FH_RQPU", "E2FH_RQY" );
                PRINTSTRING( "\n\n\nPHONED HENRIQUE FOR VEHICLE: FXT - YES\n\n" );
                break;
                default: SCRIPT_ASSERT( "FA_Player_Calls_Special_Ability_No: Unknown vehicle for vehicle Dropoff" );
            }
        }
        else
        {
            SCRIPT_ASSERT( "FA_Player_Calls_Special_Ability_No: Unknown Henrique Special Ability ID" );
        }
        return;
    }
    sub_75012( "PHOLDER_E2", "E1MFAU", 1 );
    return;
}

void sub_97262(unknown uParam0, unknown uParam1, int iParam2)
{
    int iVar5;

    iVar5 = iParam2 - 0;
    g_U12382[uParam1]._fU148[iVar5]._fU96 = {g_U20825[uParam0]._fU308[iVar5]._fU4};
    return;
}

void sub_97486(unknown uParam0, int iParam1)
{
    int iVar4;

    if (iParam1 >= 5)
    {
        SCRIPT_ASSERT( "Remove_Special_Ability_From_Phone: Special Ability array position out of bounds" );
        return;
    }
    if (g_U20825[uParam0]._fU308[iParam1]._fU0)
    {
        iVar4 = 0 + iParam1;
        g_U16014[uParam0]._fU8[0]._fU0[iVar4] = 0;
    }
    return;
}

int sub_97697(unknown uParam0, unknown uParam1)
{
    return 1;
}

int sub_97896(unknown uParam0)
{
    unknown uVar3;

    if (g_U12379)
    {
        return 0;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_8409() )))
    {
        return 0;
    }
    if (NOT (g_U14925[uParam0]._fU80._fU0 == 0))
    {
        return 0;
    }
    if ((((((IS_THREAD_ACTIVE( g_U818 )) || (IS_WANTED_LEVEL_GREATER( sub_8409(), 0 ))) || (sub_83873())) || (sub_83677())) || (sub_84280( 0 ))) || (sub_83924()))
    {
        return 0;
    }
    uVar3 = sub_74403( uParam0 );
    if ((NOT (sub_98044( uVar3, 30000 ))) || (sub_92624( uVar3 )))
    {
        return 0;
    }
    if (sub_98127( uVar3 ))
    {
        return 0;
    }
    return 1;
}

boolean sub_98044(int iParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (iParam0 < 37))
    {
        return 1;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    iVar5 = g_U22883[iParam0] + iParam1;
    return iVar5 < iVar4;
}

int sub_98127(unknown uParam0)
{
    return 0;
}

int sub_98239(unknown uParam0, int iParam1)
{
    int iVar4;

    iVar4 = iParam1 + 0;
    switch (uParam0)
    {
        case 3:
        if (iVar4 == 3)
        {
            PRINTSTRING( "\n\n\nARMANDO.........FA_Friend_Phones_Special_Ability_Unlocked_First_Time\n" );
            return sub_98407( uParam0, "E2FAAU", "E2FA_CLSPC", "E2FA_CLSPT" );
        }
        else
        {
            SCRIPT_ASSERT( "FA_Friend_Phones_Special_Ability_Unlocked_First_Time: Unknown Armando Special Ability ID" );
        }
        break;
        case 7:
        if (iVar4 == 4)
        {
            PRINTSTRING( "\n\n\ENRIQUE.........FA_Friend_Phones_Special_Ability_Unlocked_First_Time\n" );
            return sub_98407( uParam0, "E2FHAU", "E2FH_CLSP", "E2FH_CLSPT" );
        }
        else
        {
            SCRIPT_ASSERT( "FA_Friend_Phones_Special_Ability_Unlocked_First_Time: Unknown Henrique Special Ability ID" );
        }
        break;
    }
    sub_85252( uParam0, "PHOLDER_E2", "E1MFAU", 10000, 0 );
    return 1;
}

int sub_98407(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    uVar6 = sub_94089( uParam0 );
    sub_94223( ref l_U118[uVar6]._fU0, uParam2, uParam3 );
    if (sub_98465( uParam0, ref l_U118[uVar6]._fU0, uParam1, 10000 ))
    {
        sub_46107();
        sub_89111( uParam0, 1 );
        return 1;
    }
    return 0;
}

void sub_98465(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown[2] uVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref uVar6, 2);
    return sub_75120( uParam0, uParam1, uParam2, 0, ref uVar6, ref uVar6, "", uParam3, 1, 0, 1, 0, 0, 0 );
}

void sub_99042(unknown uParam0, int iParam1)
{
    int iVar4;

    iVar4 = iParam1 + 0;
    switch (uParam0)
    {
        case 3:
        if (iVar4 == 3)
        {
            StrCopy( ref g_U12382[uParam0]._fU148[iParam1]._fU52, "A_SP_GUNVAN", 32 );
        }
        break;
        case 7:
        if (iVar4 == 4)
        {
            StrCopy( ref g_U12382[uParam0]._fU148[iParam1]._fU52, "H_SP_VEHICLES", 32 );
        }
        break;
        default:
        PRINTSTRING( "STRAND: " );
        PRINTINT( uParam0 );
        PRINTNL();
        SCRIPT_ASSERT( "Fill_Special_Ability_Intro_Help_Text: Unexpected strand ID" );
    }
    return;
}

int sub_99502(unknown uParam0, unknown uParam1)
{
    if (NOT g_U14925[uParam1]._fU160._fU96)
    {
        return 0;
    }
    sub_99544( uParam0, uParam1 );
    return 1;
}

int sub_99544(unknown uParam0, unknown uParam1)
{
    if (g_U16014[uParam0]._fU4)
    {
        if (sub_99573( uParam0 ))
        {
            sub_87456( uParam1 );
            return 1;
        }
    }
    return 0;
}

int sub_99573(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;

    iVar3 = 24;
    I = 0;
    for ( I = 0; I < iVar3; I++ )
    {
        if (g_U16014[uParam0]._fU8[1]._fU0[I])
        {
            iVar5 = I;
            switch (iVar5)
            {
                case 6:
                case 7:
                case 8:
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
                case 23:
                case 9: return 1;
                case 5: return 0;
                case 0:
                case 1:
                case 2:
                case 3:
                case 4: return 0;
            }
        }
    }
    sub_62201( "Is_Cellphone_Friend_Activity_Selected: Unknown activity" );
    return 0;
}

void sub_99975(unknown uParam0, unknown uParam1)
{
    if (NOT g_U20825[uParam0]._fU0)
    {
        g_U12382[uParam1]._fU28 = 0;
        sub_100021( uParam0, uParam1 );
        return 0;
    }
    if (g_U12382[uParam1]._fU28)
    {
        sub_100557( uParam0 );
        g_U12382[uParam1]._fU28 = 0;
    }
    if (g_U20825[uParam0]._fU176)
    {
        if (sub_101490( uParam0 ))
        {
            g_U20825[uParam0]._fU176 = 0;
        }
    }
    if (g_U20825[uParam0]._fU68)
    {
        return sub_101736( uParam0, uParam1 );
    }
    if (g_U20825[uParam0]._fU16)
    {
        return sub_103486( uParam0, uParam1 );
    }
    if (g_U16014[uParam0]._fU4)
    {
        return sub_106700( uParam0, uParam1 );
    }
    if (sub_105372( uParam0 ))
    {
        sub_100630( uParam0 );
        sub_100922( uParam0 );
        sub_105795( uParam0 );
        if (NOT g_U15811[40])
        {
            sub_115980( 4, 1 );
            g_U15811[40] = 1;
        }
    }
    return sub_116055( uParam0, uParam1 );
}

void sub_100021(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (NOT g_U16014[uParam0]._fU4)
    {
        return;
    }
    if (NOT (sub_99573( uParam0 )))
    {
        return;
    }
    sub_75012( ref g_U12382[uParam1]._fU96, ref g_U12382[uParam1]._fU80, 0 );
    sub_78307( ref g_U12382[uParam1]._fU96, ref g_U12382[uParam1]._fU80 );
    sub_46107();
    iVar4 = 0;
    iVar5 = 24;
    while (iVar4 < iVar5)
    {
        if (sub_100159( iVar4 ))
        {
            if (g_U16014[uParam0]._fU8[1]._fU0[iVar4])
            {
                g_U16014[uParam0]._fU8[1]._fU0[iVar4] = 0;
            }
        }
        iVar4++;
    }
    g_U16014[uParam0]._fU4 = 0;
    return;
}

int sub_100159(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    switch (uVar3)
    {
        case 6:
        case 7:
        case 8:
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
        case 23:
        case 9: return 1;
        case 5: return 0;
        case 0:
        case 1:
        case 2:
        case 3:
        case 4: return 0;
    }
    sub_62201( "Is_This_A_Friend_Activity: Unknown activity" );
    return 0;
}

void sub_100557(unknown uParam0)
{
    unknown uVar3;

    g_U20825[3]._fU92 = 0;
    g_U20825[3]._fU96 = 0;
    sub_100597( 3 );
    uVar3 = g_U20825[3]._fU108;
    sub_101247( uVar3 );
    g_U20825[7]._fU92 = 0;
    g_U20825[7]._fU96 = 0;
    sub_100597( 7 );
    uVar3 = g_U20825[7]._fU108;
    sub_101247( uVar3 );
    return;
}

void sub_100597(unknown uParam0)
{
    if (NOT g_U20825[uParam0]._fU0)
    {
        return;
    }
    sub_100630( uParam0 );
    sub_100922( uParam0 );
    return;
}

void sub_100630(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;

    iVar3 = 1;
    iVar4 = 1;
    sub_100647( ref iVar3, ref iVar4 );
    g_U20825[uParam0]._fU80 = (g_U20825[uParam0]._fU72 * iVar3) / iVar4;
    if (g_U15811[4])
    {
        g_U20825[uParam0]._fU80 *= 2;
    }
    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    g_U20825[uParam0]._fU88 = iVar5 + g_U20825[uParam0]._fU80;
    return;
}

void sub_100647(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = 1;
    iVar5 = 1;
    switch (g_U22731)
    {
        case 1:
        iVar4 = 1;
        iVar5 = 1;
        break;
        case 2:
        iVar4 = 3;
        iVar5 = 2;
        break;
        case 3:
        iVar4 = 2;
        iVar5 = 1;
        break;
        case 4:
        iVar4 = 5;
        iVar5 = 2;
        break;
        case 5:
        iVar4 = 3;
        iVar5 = 1;
        break;
    }
    (uParam0^) = iVar4;
    (uParam1^) = iVar5;
    return;
}

void sub_100922(int iParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (g_U0)
    {
        g_U20825[iParam0]._fU8 = 1;
        g_U20825[iParam0]._fU168 = 0;
    }
    else if (iParam0 == 7)
    {
        g_U20825[iParam0]._fU8 = 1;
        g_U20825[iParam0]._fU168 = 0;
    }
    else if (NOT g_U20825[iParam0]._fU8)
    {
        g_U20825[iParam0]._fU84 = (iVar3 + 30000) + (sub_101056( iParam0 ));
        return;
    };;;
    iVar4 = 1;
    iVar5 = 1;
    sub_100647( ref iVar4, ref iVar5 );
    iVar6 = (g_U20825[iParam0]._fU76 * iVar4) / iVar5;
    if (g_U15811[4])
    {
        iVar6 *= 2;
    }
    if (iVar6 < 10800000)
    {
        iVar6 = 10800000;
    }
    g_U20825[iParam0]._fU84 = iVar3 + iVar6;
    return;
}

int sub_101056(unknown uParam0)
{
    switch (uParam0)
    {
        case 3: return 120000;
    }
    return 0;
}

void sub_101247(int iParam0)
{
    int iVar3;

    iVar3 = 10;
    if (iParam0 >= iVar3)
    {
        SCRIPT_ASSERT( "Kill_Txtmsg: Unknown Txt ID. Tell Keith. Needs added to g_eAmbientTxtmsgs." );
        return;
    }
    sub_80334( iParam0 );
    g_U42731._fU12[iParam0]._fU4 = 1;
    return;
}

int sub_101490(unknown uParam0)
{
    unknown uVar3;

    if (sub_91689())
    {
        return 0;
    }
    uVar3 = sub_74187( uParam0 );
    sub_101524( uVar3 );
    return 1;
}

void sub_101524(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 3:
        case 7:
        iVar3 = -1;
        break;
        default:
        sub_24711( "Flow_Friend_Asleep_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_80116( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_80116( uParam0, 0, iVar4 );
    return;
}

int sub_101736(unknown uParam0, unknown uParam1)
{
    int iVar4;

    if (sub_79602())
    {
        return 1;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U16014[uParam0]._fU8[0]._fU0[19] = 0;
    switch (sub_79775())
    {
        case 1:
        case 2:
        sub_101846( uParam0 );
        g_U20825[uParam0]._fU68 = 0;
        g_U20825[uParam0]._fU100 = -1;
        if (NOT g_U20825[uParam0]._fU8)
        {
            sub_102066( uParam0 );
        }
        g_U12381 = 0;
        sub_102236( uParam1 );
        return 0;
        case 8:
        if (NOT g_U20825[uParam0]._fU8)
        {
            g_U20825[uParam0]._fU8 = 1;
            g_U20825[uParam0]._fU168 = 0;
            sub_102451( uParam0, 0 );
            g_U15811[32] = 1;
        }
        sub_100922( uParam0 );
        g_U20825[uParam0]._fU68 = 0;
        g_U20825[uParam0]._fU100 = -1;
        g_U12381 = 0;
        sub_102526( uParam1 );
        sub_102687( uParam0 );
        return 0;
        case 5:
        case 4: return 1;
    }
    g_U12381 = 0;
    sub_102855( uParam1, g_U20825[uParam0]._fU100 );
    g_U20825[uParam0]._fU68 = 0;
    g_U20825[uParam0]._fU16 = 1;
    g_U12382[uParam1]._fU28 = 1;
    g_U20825[uParam0]._fU20 = 0;
    g_U20825[uParam0]._fU12 = 0;
    sub_103223( uParam0 );
    g_U20825[uParam0]._fU100 = -1;
    g_U20825[uParam0]._fU84 = 0;
    g_U15729[uParam0]._fU16 = 1;
    g_U16014[uParam0]._fU8[0]._fU0[2] = 1;
    g_U20825[uParam0]._fU8 = 1;
    if (g_U20825[uParam0]._fU168 > 0)
    {
        sub_102451( uParam0, 1 );
    }
    g_U20825[uParam0]._fU168 = 0;
    sub_102687( uParam0 );
    return 1;
}

void sub_101846(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    iVar4 = g_U20825[uParam0]._fU80;
    iVar4 = iVar4 / 12;
    if (iVar4 < 60000)
    {
        iVar4 = 60000;
    }
    if (NOT g_U20825[uParam0]._fU8)
    {
        iVar4 = 60000 + (sub_101935( uParam0 ));
    }
    iVar4 += iVar3;
    g_U20825[uParam0]._fU84 = iVar4;
    return;
}

int sub_101935(unknown uParam0)
{
    switch (uParam0)
    {
        case 3: return 270000;
    }
    return 0;
}

void sub_102066(unknown uParam0)
{
    int iVar3;
    int I;

    if (g_U20825[uParam0]._fU8)
    {
        return;
    }
    I = 0;
    for ( I = 0; I < 24; I++ )
    {
        if (sub_100159( I ))
        {
            if (IS_BIT_SET( g_U20825[uParam0]._fU168, I ))
            {
                iVar3 = I;
                if (iVar3 == 19)
                {
                    g_U20825[uParam0]._fU140 = 0;
                }
                else
                {
                    g_U16014[uParam0]._fU8[0]._fU0[iVar3] = 0;
                }
            }
        }
    }
    return;
}

void sub_102236(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 3:
        case 7:
        iVar3 = -3;
        break;
        default:
        sub_24711( "Flow_Player_Said_No_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_80116( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_80116( uParam0, 0, iVar4 );
    return;
}

void sub_102451(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_102526(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 3:
        case 7:
        iVar3 = -3;
        break;
        default:
        sub_24711( "Flow_Player_Said_No_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_80116( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_80116( uParam0, 0, iVar4 );
    return;
}

void sub_102687(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    iVar4 = iVar3 + 3600000;
    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        if ((g_U20825[I]._fU0) AND (NOT g_U20825[I]._fU16))
        {
            if (g_U20825[I]._fU84 < iVar4)
            {
                g_U20825[I]._fU84 = iVar4;
            }
        }
    }
    return;
}

void sub_102855(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (NOT (g_U14925[uParam0]._fU80._fU0 == 0))
    {
        sub_24711( "Main_Missions: Setup_Friend_Mission(): Attempting to setup a friend mission after strand already setup" );
        return;
    }
    sub_2842( uParam0, 0 );
    uVar4 = sub_41889( uParam0, uParam1 );
    g_U14925[uParam0]._fU80._fU0 = 1;
    g_U14925[uParam0]._fU80._fU4 = uParam1;
    g_U14925[uParam0]._fU80._fU56 = g_U22960[uVar4]._fU12;
    g_U14925[uParam0]._fU80._fU24 = {g_U22960[uVar4]._fU36};
    g_U12382[uParam0]._fU24 = -1;
    sub_41307( uParam0 );
    return;
}

void sub_103223(unknown uParam0)
{
    int iVar3;

    iVar3 = 0;
    sub_87863( ref g_U20825[uParam0]._fU32, 2, 0, iVar3 );
    g_U20825[uParam0]._fU48 = {g_U20825[uParam0]._fU32};
    sub_87916( ref g_U20825[uParam0]._fU48, 1, 0 );
    return;
}

int sub_103486(unknown uParam0, unknown uParam1)
{
    if (g_U14925[uParam1]._fU80._fU0 == 0)
    {
        sub_44854( uParam0 );
        sub_100557( uParam0 );
        return 0;
    }
    if (sub_103541( uParam0, uParam1 ))
    {
        if (g_U20825[uParam0]._fU12)
        {
            sub_105209( uParam1 );
        }
        sub_41186( uParam1 );
        if (sub_105372( uParam0 ))
        {
            sub_100597( uParam0 );
            sub_105795( uParam0 );
        }
        else
        {
            sub_100922( uParam0 );
        }
        sub_44854( uParam0 );
        return 0;
    }
    if ((g_U14925[uParam1]._fU80._fU0 == 1) || (NOT g_U20825[uParam0]._fU20))
    {
        if (sub_85689( g_U20825[uParam0]._fU48 ))
        {
            if (NOT g_U20825[uParam0]._fU24)
            {
                sub_106070( uParam0 );
                sub_41186( uParam1 );
                if (sub_105372( uParam0 ))
                {
                    sub_100597( uParam0 );
                    sub_105795( uParam0 );
                }
                else
                {
                    sub_106386( uParam0 );
                }
                sub_44854( uParam0 );
                g_U16014[uParam0]._fU8[0]._fU0[2] = 0;
                return 0;
            }
        }
        if (NOT g_U20825[uParam0]._fU28)
        {
            if (sub_85689( g_U20825[uParam0]._fU32 ))
            {
                sub_106517( uParam0 );
            }
        }
    }
    if (g_U20825[uParam0]._fU20)
    {
        sub_74392( uParam1 );
    }
    else
    {
        sub_99544( uParam0, uParam1 );
    }
    if (g_U20825[uParam0]._fU20)
    {
        if (sub_106626())
        {
            sub_106649();
        }
    }
    return 1;
}

int sub_103541(unknown uParam0, unknown uParam1)
{
    int I;

    if (NOT g_U16014[uParam0]._fU4)
    {
        return 0;
    }
    if (NOT g_U16014[uParam0]._fU8[1]._fU0[2])
    {
        return 0;
    }
    if ((g_U20825[uParam0]._fU20) || (g_U20825[uParam0]._fU24))
    {
        sub_87456( uParam1 );
        return 0;
    }
    I = 0;
    if (g_U12379)
    {
        for ( I = 0; I < 11; I++ )
        {
            if (g_U12382[I]._fU8)
            {
                if ((NOT (g_U14925[I]._fU0._fU0 == 0)) AND (NOT (g_U14925[I]._fU0._fU0 == 1)))
                {
                    if (IS_BIT_SET( g_U12382[I]._fU120, uParam0 ))
                    {
                        sub_87456( uParam1 );
                        return 0;
                    }
                }
            }
        }
    }
    sub_103787( uParam0, uParam1 );
    sub_93013();
    g_U16014[uParam0]._fU4 = 0;
    g_U16014[uParam0]._fU8[1]._fU0[2] = 0;
    g_U16014[uParam0]._fU8[0]._fU0[2] = 0;
    return 1;
}

void sub_103787(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = g_U20825[uParam0]._fU144;
    switch (uVar4)
    {
        case 6:
        sub_103938( uParam0, uParam1 );
        break;
        case 8:
        sub_104005( uParam0, uParam1 );
        break;
        case 9:
        sub_104031( uParam0, uParam1 );
        break;
        case 11:
        sub_104057( uParam0, uParam1 );
        break;
        case 12:
        sub_104124( uParam0, uParam1 );
        break;
        case 13:
        sub_104191( uParam0, uParam1 );
        break;
        case 14:
        sub_104258( uParam0, uParam1 );
        break;
        case 16:
        sub_104325( uParam0, uParam1 );
        break;
        case 17:
        sub_104731( uParam0, uParam1 );
        break;
        case 19:
        sub_104757( uParam0, uParam1 );
        break;
        case 20:
        sub_104783( uParam0, uParam1 );
        break;
        case 21:
        sub_104850( uParam0, uParam1 );
        break;
        case 22:
        sub_104917( uParam0, uParam1 );
        break;
        case 23:
        sub_104984( uParam0, uParam1 );
        break;
        default: sub_24711( "FA_Player_Phones_Cancel_Activity: Unknown Activity" );
    }
    return;
}

void sub_103938(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = sub_84825( uParam0, uParam1 );
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_104005(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_104031(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_104057(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = sub_84825( uParam0, uParam1 );
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_104124(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = sub_84825( uParam0, uParam1 );
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_104191(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = sub_84825( uParam0, uParam1 );
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_104258(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = sub_84825( uParam0, uParam1 );
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_104325(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_84825( uParam0, uParam1 );
    switch (uParam0)
    {
        case 3:
        if (iVar4 == 0)
        {
            sub_94078( uParam0, "E2FAAU", "E2FA_UCALL", "E2FA_VCALL" );
        }
        else if (iVar4 == 1)
        {
            sub_94078( uParam0, "E2FAAU", "E2FA_UCALL", "E2FA_WCALL" );
        }
        else
        {
            sub_94078( uParam0, "E2FAAU", "E2FA_UCALL", "E2FA_XCALL" );
        }
        return;
        case 7:
        if (iVar4 == 0)
        {
            sub_94078( uParam0, "E2FHAU", "E2FH_UCALL", "E2FH_VCALL" );
        }
        else if (iVar4 == 1)
        {
            sub_94078( uParam0, "E2FHAU", "E2FH_UCALL", "E2FH_WCALL" );
        }
        else
        {
            sub_94078( uParam0, "E2FHAU", "E2FH_UCALL", "E2FH_XCALL" );
        }
        return;
    }
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_104731(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_104757(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_104783(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = sub_84825( uParam0, uParam1 );
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_104850(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = sub_84825( uParam0, uParam1 );
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_104917(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = sub_84825( uParam0, uParam1 );
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_104984(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = sub_84825( uParam0, uParam1 );
    sub_75012( "PHOLDER_E2", "E1MFAU", 1 );
    return;
}

void sub_105209(unknown uParam0)
{
    int iVar3;

    iVar3 = 0;
    switch (uParam0)
    {
        case 3:
        case 7:
        iVar3 = -1;
        break;
        default:
        sub_24711( "Flow_Player_Cancelled_Activity_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_80116( uParam0, 1, iVar3 );
    return;
}

void sub_105372(unknown uParam0)
{
    int iVar3;
    unknown uVar4;
    int iVar5;
    int I;
    boolean Result;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    uVar4 = sub_74187( uParam0 );
    iVar5 = 0;
    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        if (g_U12382[uVar4]._fU148[I]._fU36)
        {
            iVar5 = 1;
        }
    }
    if ((g_U20825[uParam0]._fU4) || (iVar5))
    {
        sub_100630( uParam0 );
        return 0;
    }
    Result = iVar3 > g_U20825[uParam0]._fU88;
    if (sub_105517( uParam0 ))
    {
        sub_100630( uParam0 );
        return 0;
    }
    if (Result)
    {
        if ((NOT (g_U14925[uVar4]._fU0._fU0 == 0)) AND (NOT (g_U14925[uVar4]._fU0._fU0 == 1)))
        {
            g_U20825[uParam0]._fU88 = iVar3 + 60000;
            Result = false;
        }
    }
    if (Result)
    {
        if (g_U14925[uVar4]._fU160._fU96)
        {
            g_U20825[uParam0]._fU88 = iVar3 + 60000;
            Result = false;
        }
    }
    if (Result)
    {
        if ((g_U12382[uVar4]._fU44[1] < g_U20825[uParam0]._fU160) || (g_U20825[uParam0]._fU164))
        {
            g_U20825[uParam0]._fU88 = iVar3 + 60000;
            Result = false;
        }
    }
    return Result;
}

int sub_105517(unknown uParam0)
{
    return 0;
}

void sub_105795(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = g_U20825[uParam0]._fU108;
    uVar4 = sub_105823( uParam0 );
    sub_80334( uVar3 );
    sub_80465( uVar3, uParam0, uVar4, 5000, 2, 64537 );
    return;
}

void sub_105823(unknown uParam0)
{
    unknown Result;
    int iVar4;

    Result = g_U20825[uParam0]._fU132;
    iVar4 = Result;
    iVar4++;
    if (iVar4 >= g_U20825[uParam0]._fU128)
    {
        iVar4 = g_U20825[uParam0]._fU124;
    }
    g_U20825[uParam0]._fU132 = iVar4;
    return Result;
}

void sub_106070(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    sub_1547( ref g_U20825[uParam0]._fU48 );
    uVar3 = g_U20825[uParam0]._fU104;
    uVar4 = sub_106117( uParam0 );
    sub_80334( uVar3 );
    sub_80465( uVar3, uParam0, uVar4, 5000, 3, 64537 );
    iVar5 = 300000;
    if (g_U0)
    {
        iVar5 = 30000;
    }
    iVar6 = 60000;
    if (g_U0)
    {
        iVar6 = 20000;
    }
    iVar7 = 0;
    GET_GAME_TIMER( ref iVar7 );
    g_U20825[uParam0]._fU152 = iVar7 + iVar5;
    g_U20825[uParam0]._fU156 = iVar7 + iVar6;
    return;
}

void sub_106117(unknown uParam0)
{
    unknown Result;
    int iVar4;

    Result = g_U20825[uParam0]._fU120;
    iVar4 = Result;
    iVar4++;
    if (iVar4 >= g_U20825[uParam0]._fU116)
    {
        iVar4 = g_U20825[uParam0]._fU112;
    }
    g_U20825[uParam0]._fU120 = iVar4;
    return Result;
}

void sub_106386(unknown uParam0)
{
    g_U20825[uParam0]._fU84 = g_U20825[uParam0]._fU88 + 10000;
    return;
}

void sub_106517(unknown uParam0)
{
    sub_1547( ref g_U20825[uParam0]._fU32 );
    g_U20825[uParam0]._fU28 = 1;
    return;
}

int sub_106626()
{
    return 0;
}

void sub_106649()
{
    return;
}

int sub_106700(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (sub_99573( uParam0 )))
    {
        return 0;
    }
    iVar4 = 0;
    iVar5 = 24;
    while (iVar4 < iVar5)
    {
        if (sub_106748( uParam0, uParam1, iVar4 ))
        {
            return 1;
        }
        iVar4++;
    }
    PRINTSTRING( "Flow_Maintain_Friend_Player_Chose_Activity: Failed to find a friend-selected activity\n" );
    return 0;
}

int sub_106748(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    boolean bVar6;

    if (NOT g_U16014[uParam0]._fU8[1]._fU0[uParam2])
    {
        return 0;
    }
    if (g_U20825[uParam0]._fU208[uParam2]._fU0 == -1)
    {
        sub_62201( "Flow_Check_Friend_Activity_Selected: Trigger Info for Friend Activity not set up\n" );
        return 0;
    }
    if (g_U20825[uParam0]._fU64 == 0)
    {
        if (NOT (g_U14925[uParam1]._fU80._fU0 == 0))
        {
            g_U16014[uParam0]._fU8[1]._fU0[uParam2] = 0;
            g_U16014[uParam0]._fU4 = 0;
            return 1;
        }
        if (sub_107004( uParam0, uParam1, uParam2 ))
        {
            return 1;
        }
        if (sub_107196( uParam0, uParam1, uParam2 ))
        {
            return 1;
        }
        if (sub_107391( 3, 3, uParam2, uParam0, uParam1 ))
        {
            return 1;
        }
        if (sub_107391( 7, 7, uParam2, uParam0, uParam1 ))
        {
            return 1;
        }
        if (sub_107683( 3, uParam1, uParam2, uParam0 ))
        {
            return 1;
        }
        if (sub_107683( 7, uParam1, uParam2, uParam0 ))
        {
            return 1;
        }
        if (sub_107888( uParam0, uParam1, uParam2 ))
        {
            return 1;
        }
        if (sub_108198( uParam0, uParam1, uParam2 ))
        {
            return 1;
        }
        if (NOT g_U20825[uParam0]._fU164)
        {
            if (sub_108421( uParam0, uParam1, uParam2 ))
            {
                return 1;
            }
            if (sub_108613( uParam0, uParam1, uParam2 ))
            {
                return 1;
            }
            if (sub_110665( uParam0, uParam1, uParam2 ))
            {
                return 1;
            }
        }
        sub_41186( uParam1 );
        g_U20825[uParam0]._fU64 = 1;
        g_U12381 = 1;
        uVar5 = uParam2;
        g_U20825[uParam0]._fU144 = uVar5;
        if (g_U20825[uParam0]._fU164)
        {
            sub_112689( uParam0, uParam2 );
            g_U20825[uParam0]._fU164 = 0;
            if (g_U12382[uParam1]._fU44[1] < g_U20825[uParam0]._fU160)
            {
                g_U12382[uParam1]._fU44[1] = g_U20825[uParam0]._fU160;
            }
        }
        else
        {
            sub_113762( uParam0, uParam2 );
        }
        sub_93013();
        return 1;
    }
    bVar6 = false;
    switch (sub_79775())
    {
        case 6:
        bVar6 = false;
        break;
        case 2:
        bVar6 = true;
        break;
        default: return 1;
    }
    g_U12381 = 0;
    g_U16014[uParam0]._fU8[1]._fU0[uParam2] = 0;
    g_U16014[uParam0]._fU4 = 0;
    g_U20825[uParam0]._fU64 = 0;
    g_U20825[uParam0]._fU20 = 0;
    g_U15729[uParam1]._fU16 = 1;
    if (bVar6)
    {
        return 1;
    }
    sub_115533( uParam1, g_U20825[uParam0]._fU208[uParam2]._fU0 );
    g_U20825[uParam0]._fU16 = 1;
    g_U20825[uParam0]._fU12 = 1;
    g_U12382[uParam1]._fU28 = 1;
    sub_103223( uParam0 );
    g_U16014[uParam0]._fU8[0]._fU0[2] = 1;
    sub_115632( uParam1 );
    return 1;
}

int sub_107004(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_PLAYER_PLAYING( sub_8409() )))
    {
        return 0;
    }
    if (g_U20825[uParam0]._fU4)
    {
        sub_75012( ref g_U12382[uParam1]._fU96, ref g_U12382[uParam1]._fU80, 0 );
        sub_78307( ref g_U12382[uParam1]._fU96, ref g_U12382[uParam1]._fU80 );
        sub_46107();
        g_U16014[uParam0]._fU8[1]._fU0[uParam2] = 0;
        g_U16014[uParam0]._fU4 = 0;
        sub_93013();
        return 1;
    }
    return 0;
}

int sub_107196(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_PLAYER_PLAYING( sub_8409() )))
    {
        return 0;
    }
    if (NOT g_U20825[uParam0]._fU8)
    {
        sub_75012( ref g_U12382[uParam1]._fU96, ref g_U12382[uParam1]._fU80, 0 );
        sub_78307( ref g_U12382[uParam1]._fU96, ref g_U12382[uParam1]._fU80 );
        sub_46107();
        g_U16014[uParam0]._fU8[1]._fU0[uParam2] = 0;
        g_U16014[uParam0]._fU4 = 0;
        sub_93013();
        return 1;
    }
    return 0;
}

int sub_107391(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4)
{
    int iVar7;
    int iVar8;
    int I;

    iVar7 = uParam0;
    iVar8 = uParam1;
    if ((NOT (iParam3 == 37)) AND (NOT (iParam4 == 11)))
    {
        iVar7 = iParam3;
        iVar8 = iParam4;
    }
    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        if (sub_92504( uParam1, I ))
        {
            if (g_U12382[uParam1]._fU148[I]._fU84)
            {
                sub_75012( ref g_U12382[iVar8]._fU96, ref g_U12382[iVar8]._fU80, 0 );
                sub_78307( ref g_U12382[iVar8]._fU96, ref g_U12382[iVar8]._fU80 );
                sub_46107();
                g_U16014[iVar7]._fU8[1]._fU0[uParam2] = 0;
                g_U16014[iVar7]._fU4 = 0;
                sub_93013();
                return 1;
            }
        }
    }
    return 0;
}

int sub_107683(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3)
{
    int iVar6;

    iVar6 = uParam0;
    if (NOT (iParam3 == 37))
    {
        iVar6 = iParam3;
    }
    if (sub_92624( uParam0 ))
    {
        sub_75012( ref g_U12382[uParam1]._fU96, ref g_U12382[uParam1]._fU80, 0 );
        sub_78307( ref g_U12382[uParam1]._fU96, ref g_U12382[uParam1]._fU80 );
        sub_46107();
        g_U16014[iVar6]._fU8[1]._fU0[uParam2] = 0;
        g_U16014[iVar6]._fU4 = 0;
        sub_93013();
        return 1;
    }
    return 0;
}

int sub_107888(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int iVar6;
    boolean bVar7;

    iVar5 = 600000;
    if (g_U0)
    {
        iVar5 = 30000;
    }
    iVar6 = 0;
    GET_GAME_TIMER( ref iVar6 );
    bVar7 = false;
    if (g_U20825[uParam0]._fU164)
    {
        if (g_U20825[uParam0]._fU156 < iVar6)
        {
            return 0;
        }
        sub_75012( ref g_U12382[uParam1]._fU96, ref g_U12382[uParam1]._fU80, 0 );
        sub_78307( ref g_U12382[uParam1]._fU96, ref g_U12382[uParam1]._fU80 );
        sub_46107();
        bVar7 = true;
    }
    if (NOT bVar7)
    {
        if (g_U12382[uParam1]._fU44[1] < g_U20825[uParam0]._fU160)
        {
            g_U20825[uParam0]._fU164 = 1;
            return 0;
        }
    }
    if (bVar7)
    {
        g_U16014[uParam0]._fU8[1]._fU0[uParam2] = 0;
        g_U16014[uParam0]._fU4 = 0;
        sub_93013();
        return 1;
    }
    return 0;
}

int sub_108198(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    boolean bVar6;

    if (NOT (IS_PLAYER_PLAYING( sub_8409() )))
    {
        return 0;
    }
    uVar5 = uParam2;
    bVar6 = false;
    if (sub_83959())
    {
        bVar6 = true;
    }
    if (NOT bVar6)
    {
        return 0;
    }
    sub_75012( ref g_U12382[uParam1]._fU96, ref g_U12382[uParam1]._fU80, 0 );
    sub_78307( ref g_U12382[uParam1]._fU96, ref g_U12382[uParam1]._fU80 );
    sub_46107();
    g_U16014[uParam0]._fU8[1]._fU0[uParam2] = 0;
    g_U16014[uParam0]._fU4 = 0;
    sub_93013();
    return 1;
}

int sub_108421(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_PLAYER_PLAYING( sub_8409() )))
    {
        return 0;
    }
    if (IS_WANTED_LEVEL_GREATER( sub_8409(), 0 ))
    {
        sub_75012( ref g_U12382[uParam1]._fU96, ref g_U12382[uParam1]._fU80, 0 );
        sub_78307( ref g_U12382[uParam1]._fU96, ref g_U12382[uParam1]._fU80 );
        sub_46107();
        g_U16014[uParam0]._fU8[1]._fU0[uParam2] = 0;
        g_U16014[uParam0]._fU4 = 0;
        sub_93013();
        return 1;
    }
    return 0;
}

int sub_108613(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (sub_108624( uParam0 ))
    {
        if (g_U20825[uParam0]._fU188._fU16)
        {
            sub_75012( ref g_U12382[uParam1]._fU96, ref g_U12382[uParam1]._fU80, 0 );
            sub_78307( ref g_U12382[uParam1]._fU96, ref g_U12382[uParam1]._fU80 );
            sub_46107();
        }
        else
        {
            sub_109434( uParam0, uParam2 );
            g_U20825[uParam0]._fU176 = 1;
            g_U20825[uParam0]._fU188._fU16 = 1;
        }
        g_U16014[uParam0]._fU8[1]._fU0[uParam2] = 0;
        g_U16014[uParam0]._fU4 = 0;
        sub_93013();
        return 1;
    }
    g_U20825[uParam0]._fU188._fU16 = 0;
    return 0;
}

int sub_108624(unknown uParam0)
{
    if (g_U20825[uParam0]._fU188._fU0._fU0 == -1)
    {
        return 0;
    }
    if (NOT (sub_108699( g_U20825[uParam0]._fU188._fU0, g_U20825[uParam0]._fU188._fU8 )))
    {
        return 0;
    }
    return 1;
}

int sub_108699(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    boolean bVar8;

    if ((uParam0._fU0 < 0) || (uParam0._fU0 >= 24))
    {
        sub_24711( "KM_Is_Now_Time_Between_Start_End_Times: Start Hours Error" );
        return 0;
    }
    if ((uParam0._fU4 < 0) || (uParam0._fU4 >= 60))
    {
        sub_24711( "KM_Is_Now_Time_Between_Start_End_Times: Start Minutes Error" );
        return 0;
    }
    if ((uParam2._fU0 < 0) || (uParam2._fU0 >= 24))
    {
        sub_24711( "KM_Is_Now_Time_Between_Start_End_Times: End Hours Error" );
        return 0;
    }
    if ((uParam2._fU4 < 0) || (uParam2._fU4 >= 60))
    {
        sub_24711( "KM_Is_Now_Time_Between_Start_End_Times: End Minutes Error" );
        return 0;
    }
    GET_TIME_OF_DAY( ref uVar6._fU0, ref uVar6._fU4 );
    bVar8 = sub_109079( uParam2, uParam0 );
    if (NOT bVar8)
    {
        if (sub_109079( uVar6, uParam0 ))
        {
            return 0;
        }
        if (sub_109079( uParam2, uVar6 ))
        {
            return 0;
        }
        return 1;
    }
    if (sub_109203( uParam0, uVar6 ))
    {
        return 1;
    }
    if (sub_109079( uParam0, uVar6 ))
    {
        return 1;
    }
    if (sub_109079( uVar6, uParam2 ))
    {
        return 1;
    }
    return 0;
}

boolean sub_109079(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (uParam0._fU0 > uParam2._fU0)
    {
        return 0;
    }
    if (uParam0._fU0 < uParam2._fU0)
    {
        return 1;
    }
    return uParam0._fU4 < uParam2._fU4;
}

boolean sub_109203(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT (uParam0._fU0 == uParam2._fU0))
    {
        return 0;
    }
    return uParam0._fU4 == uParam2._fU4;
}

void sub_109434(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    switch (uVar4)
    {
        case 6:
        sub_109562( uParam0 );
        break;
        case 8:
        sub_109616( uParam0 );
        break;
        case 9:
        sub_109640( uParam0 );
        break;
        case 11:
        sub_109664( uParam0 );
        break;
        case 12:
        sub_109718( uParam0 );
        break;
        case 13:
        sub_109772( uParam0 );
        break;
        case 14:
        sub_109826( uParam0 );
        break;
        case 16:
        sub_109880( uParam0 );
        break;
        case 17:
        sub_110235( uParam0 );
        break;
        case 20:
        sub_110259( uParam0 );
        break;
        case 21:
        sub_110313( uParam0 );
        break;
        case 22:
        sub_110367( uParam0 );
        break;
        case 23:
        sub_110421( uParam0 );
        break;
        default: sub_24711( "FA_Player_Phones_Do_Activity_Sleeping: Unknown Activity" );
    }
    return;
}

void sub_109562(unknown uParam0)
{
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_109616(unknown uParam0)
{
    return;
}

void sub_109640(unknown uParam0)
{
    return;
}

void sub_109664(unknown uParam0)
{
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_109718(unknown uParam0)
{
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_109772(unknown uParam0)
{
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_109826(unknown uParam0)
{
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_109880(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        sub_109977( uParam0, "E2FAAU", "E2FA_ACALL", "E2FA_BCALL", "E2FA_JCALL", "E2FA_KCALL" );
        return;
        case 7:
        sub_109977( uParam0, "E2FHAU", "E2FH_ACALL", "E2FH_BCALL", "E2FH_JCALL", "E2FH_KCALL" );
        return;
    }
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_109977(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;

    uVar8 = sub_94089( uParam0 );
    sub_110017( ref l_U118[uVar8]._fU0, uParam2, uParam3, uParam4, uParam5 );
    sub_94575( ref l_U118[uVar8]._fU0, uParam1, 1 );
    sub_46107();
    sub_89111( uParam0, 1 );
    return;
}

void sub_110017(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_94274( uParam0, uParam1, uParam2, uParam3, uParam4, "END", "END", "END", "END" );
    return;
}

void sub_110235(unknown uParam0)
{
    return;
}

void sub_110259(unknown uParam0)
{
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_110313(unknown uParam0)
{
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_110367(unknown uParam0)
{
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_110421(unknown uParam0)
{
    sub_75012( "PHOLDER_E2", "E1MFAU", 1 );
    return;
}

int sub_110665(unknown uParam0, unknown uParam1, int iParam2)
{
    int iVar5;
    int iVar6;
    boolean bVar7;
    int iVar8;
    boolean bVar9;
    int iVar10;

    if (g_U0)
    {
        return 0;
    }
    iVar5 = 120000;
    if (g_U0)
    {
        iVar5 = 20000;
    }
    iVar6 = 0;
    GET_GAME_TIMER( ref iVar6 );
    bVar7 = false;
    if (g_U20825[uParam0]._fU156 > iVar6)
    {
        sub_75012( ref g_U12382[uParam1]._fU96, ref g_U12382[uParam1]._fU80, 0 );
        sub_78307( ref g_U12382[uParam1]._fU96, ref g_U12382[uParam1]._fU80 );
        sub_46107();
        bVar7 = true;
    }
    if (NOT bVar7)
    {
        iVar8 = 0;
        GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar8 );
        bVar9 = iVar8 < 50;
        iVar10 = g_U20825[uParam0]._fU148;
        if (((iVar10 == iParam2) AND (bVar9)) AND (NOT g_U20825[uParam0]._fU92))
        {
            sub_110908( uParam0, iParam2 );
            g_U20825[uParam0]._fU156 = iVar6 + iVar5;
            bVar7 = true;
        }
    }
    if (NOT bVar7)
    {
        if (g_U20825[uParam0]._fU152 > iVar6)
        {
            sub_112130( uParam0, iParam2 );
            g_U20825[uParam0]._fU156 = iVar6 + iVar5;
            bVar7 = true;
        }
    }
    if (bVar7)
    {
        g_U16014[uParam0]._fU8[1]._fU0[iParam2] = 0;
        g_U16014[uParam0]._fU4 = 0;
        sub_93013();
        return 1;
    }
    return 0;
}

void sub_110908(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    switch (uVar4)
    {
        case 6:
        sub_111036( uParam0 );
        break;
        case 8:
        sub_111109( uParam0 );
        break;
        case 9:
        sub_111133( uParam0 );
        break;
        case 11:
        sub_111157( uParam0 );
        break;
        case 12:
        sub_111230( uParam0 );
        break;
        case 13:
        sub_111303( uParam0 );
        break;
        case 14:
        sub_111376( uParam0 );
        break;
        case 16:
        sub_111449( uParam0 );
        break;
        case 17:
        sub_111689( uParam0 );
        break;
        case 20:
        sub_111713( uParam0 );
        break;
        case 21:
        sub_111786( uParam0 );
        break;
        case 22:
        sub_111859( uParam0 );
        break;
        case 23:
        sub_111932( uParam0 );
        break;
        default: sub_24711( "FA_Player_Phones_Do_Activity_No_Same: Unknown Activity" );
    }
    return;
}

void sub_111036(unknown uParam0)
{
    sub_111047( uParam0 );
    return;
}

void sub_111047(unknown uParam0)
{
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_111109(unknown uParam0)
{
    return;
}

void sub_111133(unknown uParam0)
{
    return;
}

void sub_111157(unknown uParam0)
{
    sub_111168( uParam0 );
    return;
}

void sub_111168(unknown uParam0)
{
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_111230(unknown uParam0)
{
    sub_111241( uParam0 );
    return;
}

void sub_111241(unknown uParam0)
{
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_111303(unknown uParam0)
{
    sub_111314( uParam0 );
    return;
}

void sub_111314(unknown uParam0)
{
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_111376(unknown uParam0)
{
    sub_111387( uParam0 );
    return;
}

void sub_111387(unknown uParam0)
{
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_111449(unknown uParam0)
{
    sub_111460( uParam0 );
    return;
}

void sub_111460(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        sub_109977( uParam0, "E2FAAU", "E2FA_ACALL", "E2FA_BCALL", "E2FA_GCALL", "E2FA_HCALL" );
        return;
        case 7:
        sub_109977( uParam0, "E2FHAU", "E2FH_ACALL", "E2FH_BCALL", "E2FH_GCALL", "E2FH_HCALL" );
        return;
    }
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_111689(unknown uParam0)
{
    return;
}

void sub_111713(unknown uParam0)
{
    sub_111724( uParam0 );
    return;
}

void sub_111724(unknown uParam0)
{
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_111786(unknown uParam0)
{
    sub_111797( uParam0 );
    return;
}

void sub_111797(unknown uParam0)
{
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_111859(unknown uParam0)
{
    sub_111870( uParam0 );
    return;
}

void sub_111870(unknown uParam0)
{
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_111932(unknown uParam0)
{
    sub_111943( uParam0 );
    return;
}

void sub_111943(unknown uParam0)
{
    sub_75012( "PHOLDER_E2", "E1MFAU", 1 );
    return;
}

void sub_112130(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    switch (uVar4)
    {
        case 6:
        sub_111047( uParam0 );
        break;
        case 8:
        sub_112270( uParam0 );
        break;
        case 9:
        sub_112294( uParam0 );
        break;
        case 11:
        sub_111168( uParam0 );
        break;
        case 12:
        sub_111241( uParam0 );
        break;
        case 13:
        sub_111314( uParam0 );
        break;
        case 14:
        sub_111387( uParam0 );
        break;
        case 16:
        sub_111460( uParam0 );
        break;
        case 17:
        sub_112378( uParam0 );
        break;
        case 20:
        sub_111724( uParam0 );
        break;
        case 21:
        sub_111797( uParam0 );
        break;
        case 22:
        sub_111870( uParam0 );
        break;
        case 23:
        sub_111943( uParam0 );
        break;
        default: sub_24711( "FA_Player_Phones_Do_Activity_No_General: Unknown Activity" );
    }
    return;
}

void sub_112270(unknown uParam0)
{
    return;
}

void sub_112294(unknown uParam0)
{
    return;
}

void sub_112378(unknown uParam0)
{
    return;
}

void sub_112689(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    switch (uVar4)
    {
        case 6:
        sub_112817( uParam0 );
        break;
        case 8:
        sub_112871( uParam0 );
        break;
        case 9:
        sub_112895( uParam0 );
        break;
        case 11:
        sub_112919( uParam0 );
        break;
        case 12:
        sub_112973( uParam0 );
        break;
        case 13:
        sub_113027( uParam0 );
        break;
        case 14:
        sub_113081( uParam0 );
        break;
        case 16:
        sub_113135( uParam0 );
        break;
        case 17:
        sub_113356( uParam0 );
        break;
        case 20:
        sub_113380( uParam0 );
        break;
        case 21:
        sub_113434( uParam0 );
        break;
        case 22:
        sub_113488( uParam0 );
        break;
        case 23:
        sub_113542( uParam0 );
        break;
        default: sub_24711( "FA_Player_Phones_Do_Activity_Low_Like: Unknown Activity" );
    }
    return;
}

void sub_112817(unknown uParam0)
{
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_112871(unknown uParam0)
{
    return;
}

void sub_112895(unknown uParam0)
{
    return;
}

void sub_112919(unknown uParam0)
{
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_112973(unknown uParam0)
{
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_113027(unknown uParam0)
{
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_113081(unknown uParam0)
{
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_113135(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        sub_109977( uParam0, "E2FAAU", "E2FA_ACALL", "E2FA_BCALL", "E2FA_ICALL", "E2FA_DCALL" );
        return;
        case 7:
        sub_109977( uParam0, "E2FHAU", "E2FH_ACALL", "E2FH_BCALL", "E2FH_ICALL", "E2FH_DCALL" );
        return;
    }
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_113356(unknown uParam0)
{
    return;
}

void sub_113380(unknown uParam0)
{
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_113434(unknown uParam0)
{
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_113488(unknown uParam0)
{
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_113542(unknown uParam0)
{
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_113762(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    switch (uVar4)
    {
        case 6:
        sub_113890( uParam0 );
        break;
        case 8:
        sub_113943( uParam0 );
        break;
        case 9:
        sub_113967( uParam0 );
        break;
        case 11:
        sub_113991( uParam0 );
        break;
        case 12:
        sub_114078( uParam0 );
        break;
        case 13:
        sub_114165( uParam0 );
        break;
        case 14:
        sub_114252( uParam0 );
        break;
        case 16:
        sub_114340( uParam0 );
        break;
        case 17:
        sub_114915( uParam0 );
        break;
        case 20:
        sub_114939( uParam0 );
        break;
        case 21:
        sub_115027( uParam0 );
        break;
        case 22:
        sub_115115( uParam0 );
        break;
        case 23:
        sub_115203( uParam0 );
        break;
        default: sub_24711( "FA_Player_Phones_Do_Activity_Yes: Unknown Activity" );
    }
    return;
}

void sub_113890(unknown uParam0)
{
    sub_75012( "PHOLDER_E2", "E1MFAU", 1 );
    return;
}

void sub_113943(unknown uParam0)
{
    return;
}

void sub_113967(unknown uParam0)
{
    return;
}

void sub_113991(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = g_U20825[uParam0]._fU92;
    uVar4 = g_U20825[uParam0]._fU96;
    sub_75012( "PHOLDER_E2", "E1MFAU", 1 );
    return;
}

void sub_114078(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = g_U20825[uParam0]._fU92;
    uVar4 = g_U20825[uParam0]._fU96;
    sub_75012( "PHOLDER_E2", "E1MFAU", 1 );
    return;
}

void sub_114165(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = g_U20825[uParam0]._fU92;
    uVar4 = g_U20825[uParam0]._fU96;
    sub_75012( "PHOLDER_E2", "E1MFAU", 1 );
    return;
}

void sub_114252(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = g_U20825[uParam0]._fU92;
    uVar4 = g_U20825[uParam0]._fU96;
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_114340(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;

    bVar3 = g_U20825[uParam0]._fU92;
    bVar4 = g_U20825[uParam0]._fU96;
    switch (uParam0)
    {
        case 3:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_109977( uParam0, "E2FAAU", "E2FA_ACALL", "E2FA_BCALL", "E2FA_FCALL", "E2FA_DCALL" );
            }
            else
            {
                sub_109977( uParam0, "E2FAAU", "E2FA_ACALL", "E2FA_BCALL", "E2FA_ECALL", "E2FA_DCALL" );
            }
        }
        else
        {
            sub_109977( uParam0, "E2FAAU", "E2FA_ACALL", "E2FA_BCALL", "E2FA_CCALL", "E2FA_DCALL" );
        }
        return;
        case 7:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_109977( uParam0, "E2FHAU", "E2FH_ACALL", "E2FH_BCALL", "E2FH_FCALL", "E2FH_DCALL" );
            }
            else
            {
                sub_109977( uParam0, "E2FHAU", "E2FH_ACALL", "E2FH_BCALL", "E2FH_ECALL", "E2FH_DCALL" );
            }
        }
        else
        {
            sub_109977( uParam0, "E2FHAU", "E2FH_ACALL", "E2FH_BCALL", "E2FH_CCALL", "E2FH_DCALL" );
        }
        return;
    }
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_114915(unknown uParam0)
{
    return;
}

void sub_114939(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = g_U20825[uParam0]._fU92;
    uVar4 = g_U20825[uParam0]._fU96;
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_115027(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = g_U20825[uParam0]._fU92;
    uVar4 = g_U20825[uParam0]._fU96;
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_115115(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = g_U20825[uParam0]._fU92;
    uVar4 = g_U20825[uParam0]._fU96;
    sub_75012( "PHOLDER_E2", "FCRDCAU", 1 );
    return;
}

void sub_115203(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = g_U20825[uParam0]._fU92;
    uVar4 = g_U20825[uParam0]._fU96;
    sub_75012( "PHOLDER_E2", "E1MFAU", 1 );
    return;
}

void sub_115533(unknown uParam0, unknown uParam1)
{
    sub_102855( uParam0, uParam1 );
    return;
}

void sub_115632(unknown uParam0)
{
    int iVar3;

    iVar3 = 0;
    switch (uParam0)
    {
        case 3:
        case 7:
        iVar3 = 1;
        break;
        default:
        sub_24711( "Flow_Player_Phoned_To_Start_Activity_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_80116( uParam0, 1, iVar3 );
    return;
}

void sub_115980(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15976[uParam0]._fU0 = uParam1;
    g_U15976[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_116055(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int I;
    boolean bVar6;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    if (g_U20825[uParam0]._fU84 < iVar4)
    {
        if (NOT (IS_PLAYER_PLAYING( sub_8409() )))
        {
            sub_116118( uParam0 );
            return 0;
        }
        if (sub_116174( uParam0 ))
        {
            sub_116118( uParam0 );
            return 0;
        }
        if (g_U20825[uParam0]._fU4)
        {
            sub_116118( uParam0 );
            return 0;
        }
        if (((((((((NOT (g_U14925[uParam1]._fU80._fU0 == 0)) || (sub_108624( uParam0 ))) || (g_U12379)) || (IS_THREAD_ACTIVE( g_U818 ))) || (IS_WANTED_LEVEL_GREATER( sub_8409(), 0 ))) || (sub_83873())) || (sub_83677())) || (sub_84280( 0 ))) || (sub_83924()))
        {
            sub_116118( uParam0 );
            return 0;
        }
        if (NOT (sub_98044( uParam0, 30000 )))
        {
            sub_116118( uParam0 );
            return 0;
        }
        if ((sub_92624( 3 )) || (sub_92624( 7 )))
        {
            sub_116118( uParam0 );
            return 0;
        }
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            if (sub_92504( 3, I ))
            {
                if (g_U12382[3]._fU148[I]._fU84)
                {
                    sub_116118( uParam0 );
                    return 0;
                }
            }
            if (sub_92504( 7, I ))
            {
                if (g_U12382[7]._fU148[I]._fU84)
                {
                    sub_116118( uParam0 );
                    return 0;
                }
            }
        }
        bVar6 = g_U12382[uParam1]._fU44[1] < g_U20825[uParam0]._fU160;
        if ((bVar6) AND (NOT g_U20825[uParam0]._fU8))
        {
            g_U12382[uParam1]._fU44[1] = g_U20825[uParam0]._fU160;
            g_U12382[uParam1]._fU60[1] = g_U20825[uParam0]._fU160;
            bVar6 = false;
        }
        if (bVar6)
        {
            sub_116118( uParam0 );
            return 0;
        }
        sub_41186( uParam1 );
        if (sub_116715( uParam0 ))
        {
            return 1;
        }
        g_U16014[uParam0]._fU8[0]._fU0[19] = 0;
        sub_116118( uParam0 );
        return 0;
    }
    return 0;
}

void sub_116118(unknown uParam0)
{
    int iVar3;

    sub_101846( uParam0 );
    g_U16014[uParam0]._fU4 = 0;
    iVar3 = 1;
    sub_61892( uParam0, iVar3 );
    return;
}

int sub_116174(unknown uParam0)
{
    if (sub_83959())
    {
        return 1;
    }
    if (NOT g_U15811[36])
    {
        return 1;
    }
    return 0;
}

int sub_116715(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    string sVar8;
    int iVar9;
    boolean bVar10;
    int iVar11;

    if (NOT g_U20825[uParam0]._fU8)
    {
        sub_116745( uParam0 );
    }
    if (g_U20825[uParam0]._fU140)
    {
        if (sub_116908( uParam0 ))
        {
            g_U16014[uParam0]._fU8[0]._fU0[19] = 1;
        }
    }
    iVar3 = g_U20825[uParam0]._fU148;
    iVar4 = 24;
    if (NOT (iVar3 == 24))
    {
        if ((g_U16014[uParam0]._fU8[0]._fU0[iVar3]) AND (NOT g_U20825[uParam0]._fU92))
        {
            g_U16014[uParam0]._fU8[0]._fU0[iVar3] = 0;
            iVar4 = iVar3;
        }
    }
    I = 0;
    iVar6 = 0;
    iVar7 = 24;
    for ( I = 0; I < iVar7; I++ )
    {
        if (sub_100159( I ))
        {
            if (g_U16014[uParam0]._fU8[0]._fU0[I])
            {
                iVar6++;
            }
        }
    }
    if (iVar6 == 0)
    {
        if (NOT (iVar4 == 24))
        {
            g_U16014[uParam0]._fU8[0]._fU0[iVar4] = 1;
        }
        return 0;
    }
    I = sub_117235( uParam0 );
    if (NOT (iVar4 == 24))
    {
        g_U16014[uParam0]._fU8[0]._fU0[iVar4] = 1;
    }
    if (I == 24)
    {
        return 0;
    }
    g_U20825[uParam0]._fU100 = g_U20825[uParam0]._fU208[I]._fU0;
    sVar8 = "";
    iVar9 = I;
    bVar10 = false;
    switch (iVar9)
    {
        case 19:
        sVar8 = sub_117965( uParam0 );
        if (NOT (COMPARE_STRING( sVar8, "ERROR" )))
        {
            bVar10 = sub_118140( uParam0, sVar8 );
        }
        break;
        default: bVar10 = sub_118191( uParam0, I );
    }
    if (bVar10)
    {
        g_U20825[uParam0]._fU68 = 1;
        g_U12381 = 1;
        iVar11 = I;
        g_U20825[uParam0]._fU144 = iVar11;
        return 1;
    }
    g_U20825[uParam0]._fU100 = -1;
    return 0;
}

void sub_116745(unknown uParam0)
{
    int iVar3;
    int I;

    I = 0;
    for ( I = 0; I < 24; I++ )
    {
        if (sub_100159( I ))
        {
            if (IS_BIT_SET( g_U20825[uParam0]._fU168, I ))
            {
                iVar3 = I;
                if (iVar3 == 19)
                {
                    g_U20825[uParam0]._fU140 = 1;
                }
                else
                {
                    g_U16014[uParam0]._fU8[0]._fU0[iVar3] = 1;
                }
            }
        }
    }
    return;
}

int sub_116908(unknown uParam0)
{
    sub_24711( "Setup_Lift_Details: Illegal Contact ID for Lift" );
    return 0;
}

void sub_117235(unknown uParam0)
{
    int Result;
    int iVar4;
    boolean bVar5;

    return 16;
    Result = 0;
    iVar4 = 24;
    if (sub_117257( uParam0, ref iVar4 ))
    {
        Result = iVar4;
        return Result;
    }
    bVar5 = g_U22921[0] == 0;
    sub_117451();
    if (bVar5)
    {
        sub_117791();
    }
    if (sub_117257( uParam0, ref iVar4 ))
    {
        Result = iVar4;
        return Result;
    }
    Result = 24;
    return Result;
}

int sub_117257(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;
    int I;

    iVar4 = 24;
    iVar5 = 0;
    I = 0;
    for ( I = 0; I < 24; I++ )
    {
        iVar4 = g_U22921[I];
        iVar5 = iVar4;
        if (NOT (iVar4 == 24))
        {
            if (sub_100159( iVar5 ))
            {
                if (g_U16014[uParam0]._fU8[0]._fU0[iVar5])
                {
                    if (NOT (sub_117355( uParam0, iVar4 )))
                    {
                        g_U22921[I] = 24;
                        (uParam1^) = iVar4;
                        g_U22946 = iVar4;
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_117355(unknown uParam0, unknown uParam1)
{
    return 0;
}

void sub_117451()
{
    int[24] iVar2;
    int iVar27;
    int I;
    int iVar29;
    int iVar30;
    int iVar31;
    int J;

    return;
    array(ref iVar2, 24);
    iVar27 = 0;
    I = 0;
    for ( I = 0; I < 24; I++ )
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 99999, ref iVar27 );
        iVar2[I] = iVar27;
    }
    iVar29 = 24;
    iVar30 = 99999;
    iVar31 = 0;
    J = 0;
    for ( J = 0; J < 24; J++ )
    {
        iVar30 = 99999;
        iVar31 = 0;
        for ( I = 0; I < 24; I++ )
        {
            if (iVar2[I] < 99999)
            {
                if (iVar2[I] < iVar30)
                {
                    iVar30 = iVar2[I];
                    iVar31 = I;
                }
            }
        }
        if (NOT (sub_100159( iVar31 )))
        {
            g_U22921[J] = 24;
        }
        else
        {
            iVar29 = iVar31;
            if (iVar29 == g_U22946)
            {
                g_U22921[J] = 24;
                g_U22946 = 0;
            }
            else
            {
                g_U22921[J] = iVar29;
            }
        }
        iVar2[iVar31] = 100000;
    }
    return;
}

void sub_117791()
{
    return;
    return;
}

string sub_117965(unknown uParam0)
{
    sub_24711( "Choose_Lift_Pickup_Phonecall: Illegal Contact ID for Lift" );
    SCRIPT_ASSERT( "Choose_Lift_Pickup_Phonecall: Unknown error" );
    return "ERROR";
}

void sub_118140(unknown uParam0, unknown uParam1)
{
    return sub_118153( uParam0, uParam1 );
}

int sub_118153(unknown uParam0, unknown uParam1)
{
    return 0;
}

int sub_118191(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    switch (uVar4)
    {
        case 6: return sub_118327( uParam0 );
        case 8: return sub_118704( uParam0 );
        case 9: return sub_118727( uParam0 );
        case 11: return sub_118750( uParam0 );
        case 12: return sub_118913( uParam0 );
        case 13: return sub_119075( uParam0 );
        case 14: return sub_119237( uParam0 );
        case 16: return sub_119399( uParam0 );
        case 17: return sub_120646( uParam0 );
        case 20: return sub_120669( uParam0 );
        case 21: return sub_120832( uParam0 );
        case 22: return sub_120995( uParam0 );
        case 23: return sub_121158( uParam0 );
        case 19:
        sub_24711( "FA_Friend_Phones_Do_Activity: LIFT should not be handled by this routine" );
        break;
        default: sub_24711( "FA_Friend_Phones_Do_Activity: Unknown Activity" );
    }
    return 0;
}

void sub_118327(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    uVar3 = g_U20825[uParam0]._fU8;
    uVar4 = g_U20825[uParam0]._fU92;
    uVar5 = g_U20825[uParam0]._fU96;
    return sub_118472( uParam0, "FCRDCAU", "PHOLDER_E2", "PHOLDER_E2", "PHOLDER_E2", "PHOLDER_E2", "PHOLDER_E2", "HF_AIRH" );
}

int sub_118472(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    unknown uVar10;

    uVar10 = sub_94089( uParam0 );
    sub_94223( ref l_U118[uVar10]._fU0, uParam2, "END" );
    sub_94223( ref l_U118[uVar10]._fU84, uParam3, uParam4 );
    sub_94223( ref l_U118[uVar10]._fU120, uParam5, uParam6 );
    if (sub_118617( uParam0, ref l_U118[uVar10]._fU0, ref l_U118[uVar10]._fU84, ref l_U118[uVar10]._fU120, uParam7, uParam1, 10000 ))
    {
        sub_46107();
        sub_89111( uParam0, 1 );
        return 1;
    }
    return 0;
}

void sub_118617(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    return sub_75120( uParam0, uParam1, uParam5, 1, uParam2, uParam3, uParam4, uParam6, 1, 0, 1, 0, 0, 0 );
}

int sub_118704(unknown uParam0)
{
    return 0;
}

int sub_118727(unknown uParam0)
{
    return 0;
}

void sub_118750(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    uVar3 = g_U20825[uParam0]._fU8;
    uVar4 = g_U20825[uParam0]._fU92;
    uVar5 = g_U20825[uParam0]._fU96;
    return sub_118472( uParam0, "FCRDCAU", "PHOLDER_E2", "PHOLDER_E2", "PHOLDER_E2", "PHOLDER_E2", "PHOLDER_E2", "HF_DART" );
}

void sub_118913(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    uVar3 = g_U20825[uParam0]._fU8;
    uVar4 = g_U20825[uParam0]._fU92;
    uVar5 = g_U20825[uParam0]._fU96;
    return sub_118472( uParam0, "FCRDCAU", "PHOLDER_E2", "PHOLDER_E2", "PHOLDER_E2", "PHOLDER_E2", "PHOLDER_E2", "HF_BAR" );
}

void sub_119075(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    uVar3 = g_U20825[uParam0]._fU8;
    uVar4 = g_U20825[uParam0]._fU92;
    uVar5 = g_U20825[uParam0]._fU96;
    return sub_118472( uParam0, "FCRDCAU", "PHOLDER_E2", "PHOLDER_E2", "PHOLDER_E2", "PHOLDER_E2", "PHOLDER_E2", "HF_EAT" );
}

void sub_119237(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    uVar3 = g_U20825[uParam0]._fU8;
    uVar4 = g_U20825[uParam0]._fU92;
    uVar5 = g_U20825[uParam0]._fU96;
    return sub_118472( uParam0, "FCRDCAU", "PHOLDER_E2", "PHOLDER_E2", "PHOLDER_E2", "PHOLDER_E2", "PHOLDER_E2", "HF_WAR" );
}

void sub_119399(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;

    bVar3 = g_U20825[uParam0]._fU8;
    bVar4 = g_U20825[uParam0]._fU92;
    bVar5 = g_U20825[uParam0]._fU96;
    switch (uParam0)
    {
        case 3:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_118472( uParam0, "E2FAAU", "E2FA_TCALL", "E2FA_OCALL", "E2FA_PCALL", "E2FA_QCALL", "E2FA_RCALL", "HF_HANG" );
                }
                else
                {
                    return sub_118472( uParam0, "E2FAAU", "E2FA_SCALL", "E2FA_OCALL", "E2FA_PCALL", "E2FA_QCALL", "E2FA_RCALL", "HF_HANG" );
                }
            }
            else
            {
                return sub_119800( uParam0, "E2FAAU", "E2FA_MCALL", "E2FA_NCALL", "E2FA_OCALL", "E2FA_PCALL", "E2FA_QCALL", "E2FA_RCALL", "HF_HANG" );
            }
        }
        else
        {
            return sub_119800( uParam0, "E2FAAU", "E2FA_MCALL", "E2FA_NCALL", "E2FA_OCALL", "E2FA_PCALL", "E2FA_QCALL", "E2FA_RCALL", "HF_HANG" );
        }
        break;
        case 7:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_118472( uParam0, "E2FHAU", "E2FH_TCALL", "E2FH_OCALL", "E2FH_PCALL", "E2FH_QCALL", "E2FH_RCALL", "HF_HANG" );
                }
                else
                {
                    return sub_118472( uParam0, "E2FHAU", "E2FH_SCALL", "E2FH_OCALL", "E2FH_PCALL", "E2FH_QCALL", "E2FH_RCALL", "HF_HANG" );
                }
            }
            else
            {
                return sub_119800( uParam0, "E2FHAU", "E2FH_MCALL", "E2FH_NCALL", "E2FH_OCALL", "E2FH_PCALL", "E2FH_QCALL", "E2FH_RCALL", "HF_HANG" );
            }
        }
        else
        {
            return sub_119800( uParam0, "E2FHAU", "E2FH_MCALL", "E2FH_NCALL", "E2FH_OCALL", "E2FH_PCALL", "E2FH_QCALL", "E2FH_RCALL", "HF_HANG" );
        }
        break;
    }
    return sub_118472( uParam0, "FCRDCAU", "PHOLDER_E2", "PHOLDER_E2", "PHOLDER_E2", "PHOLDER_E2", "PHOLDER_E2", "HF_HANG" );
}

int sub_119800(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    unknown uVar11;

    uVar11 = sub_94089( uParam0 );
    sub_94223( ref l_U118[uVar11]._fU0, uParam2, uParam3 );
    sub_94223( ref l_U118[uVar11]._fU84, uParam4, uParam5 );
    sub_94223( ref l_U118[uVar11]._fU120, uParam6, uParam7 );
    if (sub_118617( uParam0, ref l_U118[uVar11]._fU0, ref l_U118[uVar11]._fU84, ref l_U118[uVar11]._fU120, uParam8, uParam1, 10000 ))
    {
        sub_46107();
        sub_89111( uParam0, 1 );
        return 1;
    }
    return 0;
}

int sub_120646(unknown uParam0)
{
    return 0;
}

void sub_120669(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    uVar3 = g_U20825[uParam0]._fU8;
    uVar4 = g_U20825[uParam0]._fU92;
    uVar5 = g_U20825[uParam0]._fU96;
    return sub_118472( uParam0, "FCRDCAU", "PHOLDER_E2", "PHOLDER_E2", "PHOLDER_E2", "PHOLDER_E2", "PHOLDER_E2", "HF_POOL" );
}

void sub_120832(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    uVar3 = g_U20825[uParam0]._fU8;
    uVar4 = g_U20825[uParam0]._fU92;
    uVar5 = g_U20825[uParam0]._fU96;
    return sub_118472( uParam0, "FCRDCAU", "PHOLDER_E2", "PHOLDER_E2", "PHOLDER_E2", "PHOLDER_E2", "PHOLDER_E2", "HF_RACE" );
}

void sub_120995(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    uVar3 = g_U20825[uParam0]._fU8;
    uVar4 = g_U20825[uParam0]._fU92;
    uVar5 = g_U20825[uParam0]._fU96;
    return sub_118472( uParam0, "FCRDCAU", "PHOLDER_E2", "PHOLDER_E2", "PHOLDER_E2", "PHOLDER_E2", "PHOLDER_E2", "HF_SHOW" );
}

void sub_121158(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    uVar3 = g_U20825[uParam0]._fU8;
    uVar4 = g_U20825[uParam0]._fU92;
    uVar5 = g_U20825[uParam0]._fU96;
    return sub_118472( uParam0, "E1MFAU", "PHOLDER_E2", "PHOLDER_E2", "PHOLDER_E2", "PHOLDER_E2", "PHOLDER_E2", "HF_STRP" );
}

void sub_121626(unknown uParam0, unknown uParam1, unknown uParam2)
{
    boolean bVar5;
    boolean bVar6;
    int iVar7;
    unknown uVar8;
    int iVar9;
    int iVar10;
    boolean bVar11;

    bVar5 = true;
    bVar6 = false;
    iVar7 = 0;
    iVar9 = 6;
    iVar10 = 74;
    bVar11 = true;
    while (bVar5)
    {
        bVar5 = false;
        bVar6 = false;
        iVar7 = g_U12382[uParam1]._fU16;
        uVar8 = (uParam2^)[iVar7]._fU0;
        switch (uVar8)
        {
            case 0:
            sub_123025( "GAME INITIAL SETUP" );
            sub_123042();
            bVar6 = true;
            break;
            case 1:
            case 5:
            case 6:
            sub_123025( "DO MISSION [KILL STRAND [OR]]" );
            if (sub_124001( uParam1, (uParam2^)[iVar7]._fU4._fU0 ))
            {
                bVar6 = true;
            }
            break;
            case 2:
            sub_123025( "DO MISSION FAILGOTO" );
            bVar11 = true;
            if (sub_124720( uParam1, (uParam2^)[iVar7]._fU4._fU0, ref bVar11 ))
            {
                if (bVar11)
                {
                    bVar6 = true;
                }
                else
                {
                    sub_124934( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
                }
            }
            break;
            case 3:
            if (g_U12382[uParam1]._fU36)
            {
                sub_123025( "DO MISSION FAILGOTO PHONE - JUMP TO PHONECALL" );
                sub_124934( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
                bVar5 = true;
            }
            else
            {
                bVar11 = true;
                if (sub_124720( uParam1, (uParam2^)[iVar7]._fU4._fU0, ref bVar11 ))
                {
                    if (bVar11)
                    {
                        bVar6 = true;
                    }
                    else
                    {
                        sub_124934( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
                    }
                }
            }
            break;
            case 4:
            if (g_U12382[uParam1]._fU40)
            {
                sub_123025( "DO MISSION FAILGOTO DEBUGGOTO - FOLLOW THE DEBUG GOTO" );
                g_U12382[uParam1]._fU40 = 0;
                sub_124934( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU56 );
                bVar5 = true;
            }
            else
            {
                bVar11 = true;
                if (sub_124720( uParam1, (uParam2^)[iVar7]._fU4._fU0, ref bVar11 ))
                {
                    if (bVar11)
                    {
                        bVar6 = true;
                    }
                    else
                    {
                        sub_124934( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
                    }
                }
            }
            break;
            case 7:
            sub_123025( "START PROC MISSION" );
            if (sub_125786( uParam0, uParam1, (uParam2^)[iVar7]._fU4._fU0, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, 1 ))
            {
                bVar6 = true;
            }
            break;
            case 8:
            sub_123025( "START PROC MISSION NOJOB" );
            if (sub_125786( uParam0, uParam1, (uParam2^)[iVar7]._fU4._fU0, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, 0 ))
            {
                bVar6 = true;
            }
            break;
            case 9:
            sub_123025( "QUIT PROC MISSION" );
            if (sub_126549( uParam0, uParam1, (uParam2^)[iVar7]._fU4._fU0 ))
            {
                bVar6 = true;
            }
            break;
            case 10:
            sub_123025( "DO MISSION RECURRING" );
            if (sub_124001( uParam1, (uParam2^)[iVar7]._fU4._fU0 ))
            {
                ;
            }
            break;
            case 11:
            sub_123025( "SETUP_MISSION_ONLY" );
            if (sub_127123( uParam1, (uParam2^)[iVar7]._fU4._fU0 ))
            {
                bVar6 = true;
            }
            break;
            case 12:
            sub_123025( "HELP SCRIPT" );
            if (sub_124001( uParam1, (uParam2^)[iVar7]._fU4._fU0 ))
            {
                bVar6 = true;
                bVar5 = true;
            }
            break;
            case 13:
            sub_123025( "OFF MISSION SCRIPT" );
            if (sub_124001( uParam1, (uParam2^)[iVar7]._fU4._fU0 ))
            {
                bVar6 = true;
            }
            break;
            case 14:
            sub_123025( "SETUP_OFF_MISSION_ONLY" );
            if (sub_127123( uParam1, (uParam2^)[iVar7]._fU4._fU0 ))
            {
                bVar6 = true;
            }
            break;
            case 15:
            sub_123025( "OFF MISSION SCRIPT FAILGOTO" );
            bVar11 = true;
            if (sub_124720( uParam1, (uParam2^)[iVar7]._fU4._fU0, ref bVar11 ))
            {
                if (bVar11)
                {
                    bVar6 = true;
                }
                else
                {
                    sub_124934( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
                }
            }
            break;
            case 16:
            sub_123025( "STANDALONE SCRIPT" );
            if (sub_127531( uParam1, (uParam2^)[iVar7]._fU4._fU0 ))
            {
                bVar6 = true;
                bVar5 = true;
            }
            break;
            case 17:
            sub_123025( "CREATE_CELLPHONE" );
            sub_127777();
            bVar6 = true;
            bVar5 = true;
            break;
            case 18:
            sub_123025( "CREATE_CAMERA_CELLPHONE" );
            sub_127851();
            bVar6 = true;
            bVar5 = true;
            break;
            case 19:
            sub_123025( "ADD_TO_PHONEBOOK" );
            sub_127953( uParam0 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 20:
            sub_123025( "ADD_OTHER_TO_PHONEBOOK" );
            sub_127953( (uParam2^)[iVar7]._fU4._fU4 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 21:
            sub_123025( "REMOVE_FROM_PHONEBOOK" );
            sub_128222( (uParam2^)[iVar7]._fU4._fU4 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 22:
            sub_123025( "ADD_SILENTLY_TO_PHONEBOOK" );
            sub_128312( (uParam2^)[iVar7]._fU4._fU4 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 23:
            sub_123025( "SET_ANSWER_PHONE" );
            sub_128408( uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 24:
            sub_123025( "SET_OTHER_ANSWER_PHONE" );
            sub_128537( (uParam2^)[iVar7]._fU4._fU4, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 25:
            sub_123025( "PLAYER_TO_PHONE_FOR_JOB" );
            if (sub_128887( uParam0, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56 ))
            {
                bVar6 = true;
            }
            break;
            case 26:
            sub_123025( "FORCE_PLAYER_PHONECALL" );
            if (sub_129461( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            break;
            case 27:
            sub_123025( "PHONE_PLAYER" );
            if (sub_130345( uParam0, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, iVar9, 300000, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U12382[uParam1]._fU36 = 0;
            break;
            case 28:
            sub_123025( "PHONE_PLAYER_QUICK" );
            if (sub_130345( uParam0, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, iVar9, 300000, iVar10, 0, 1 ))
            {
                bVar6 = true;
            }
            g_U12382[uParam1]._fU36 = 0;
            break;
            case 29:
            sub_123025( "PHONE_PLAYER_FLAGCHECK" );
            if (sub_130345( uParam0, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, iVar9, 300000, (uParam2^)[iVar7]._fU4._fU24, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U12382[uParam1]._fU36 = 0;
            break;
            case 30:
            sub_123025( "PHONE_PLAYER_REPEAT" );
            if (sub_130345( uParam0, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, iVar9, (uParam2^)[iVar7]._fU4._fU24, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U12382[uParam1]._fU36 = 0;
            break;
            case 31:
            sub_123025( "PHONE_PLAYER_REPEAT_QUICK" );
            if (sub_130345( uParam0, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, iVar9, (uParam2^)[iVar7]._fU4._fU24, iVar10, 0, 1 ))
            {
                bVar6 = true;
            }
            g_U12382[uParam1]._fU36 = 0;
            break;
            case 32:
            sub_123025( "PHONE_PLAYER_VECTOR" );
            if (sub_130345( uParam0, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, 300000, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U12382[uParam1]._fU36 = 0;
            break;
            case 33:
            sub_123025( "PHONE_PLAYER_VECTOR_QUICK" );
            if (sub_130345( uParam0, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, 300000, iVar10, 0, 1 ))
            {
                bVar6 = true;
            }
            g_U12382[uParam1]._fU36 = 0;
            break;
            case 34:
            sub_123025( "PHONE_PLAYER_VECTOR_REPEAT" );
            if (sub_130345( uParam0, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U12382[uParam1]._fU36 = 0;
            break;
            case 35:
            sub_123025( "PHONE_PLAYER_VECTOR_REPEAT_QUICK" );
            if (sub_130345( uParam0, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, iVar10, 0, 1 ))
            {
                bVar6 = true;
            }
            g_U12382[uParam1]._fU36 = 0;
            break;
            case 36:
            sub_123025( "PHONE_PLAYER_TIME_REPEAT" );
            if (sub_130390( uParam0, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, iVar9, (uParam2^)[iVar7]._fU4._fU32, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U12382[uParam1]._fU36 = 0;
            break;
            case 37:
            sub_123025( "ONEOFF PHONE_PLAYER" );
            if (sub_130345( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, iVar9, 300000, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U12382[uParam1]._fU36 = 0;
            break;
            case 38:
            sub_123025( "ONEOFF PHONE_PLAYER_QUICK" );
            if (sub_130345( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, iVar9, 300000, iVar10, 0, 1 ))
            {
                bVar6 = true;
            }
            g_U12382[uParam1]._fU36 = 0;
            break;
            case 39:
            sub_123025( "ONEOFF PHONE_PLAYER_REPEAT" );
            if (sub_130345( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, iVar9, (uParam2^)[iVar7]._fU4._fU24, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U12382[uParam1]._fU36 = 0;
            break;
            case 40:
            sub_123025( "ONEOFF PHONE_PLAYER_REPEAT_FLAGCHECK" );
            if (sub_130345( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, iVar9, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U12382[uParam1]._fU36 = 0;
            break;
            case 41:
            sub_123025( "ONEOFF PHONE_PLAYER_REPEAT_QUICK" );
            if (sub_130345( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, iVar9, (uParam2^)[iVar7]._fU4._fU24, iVar10, 0, 1 ))
            {
                bVar6 = true;
            }
            g_U12382[uParam1]._fU36 = 0;
            break;
            case 42:
            sub_123025( "ONEOFF PHONE_PLAYER VECTOR" );
            if (sub_130345( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, 300000, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U12382[uParam1]._fU36 = 0;
            break;
            case 43:
            sub_123025( "ONEOFF PHONE_PLAYER VECTOR REPEAT" );
            if (sub_130345( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U12382[uParam1]._fU36 = 0;
            break;
            case 44:
            sub_123025( "ONEOFF PHONE_PLAYER VECTOR REPEAT QUICK" );
            if (sub_130345( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, iVar10, 0, 1 ))
            {
                bVar6 = true;
            }
            g_U12382[uParam1]._fU36 = 0;
            break;
            case 45:
            sub_123025( "ONEOFF PHONE_PLAYER TIME" );
            if (sub_130390( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, iVar9, 300000, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U12382[uParam1]._fU36 = 0;
            break;
            case 46:
            sub_123025( "ONEOFF PHONE_PLAYER TIME VECTOR" );
            if (sub_130390( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, (uParam2^)[iVar7]._fU4._fU32, 300000, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U12382[uParam1]._fU36 = 0;
            break;
            case 47:
            sub_123025( "ONEOFF PHONE_PLAYER TIME VECTOR REPEAT" );
            if (sub_130390( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, (uParam2^)[iVar7]._fU4._fU32, (uParam2^)[iVar7]._fU4._fU36, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U12382[uParam1]._fU36 = 0;
            break;
            case 48:
            sub_123025( "ONEOFF PHONE_PLAYER TIME VECTOR REPEAT QUICK" );
            if (sub_130390( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, (uParam2^)[iVar7]._fU4._fU32, (uParam2^)[iVar7]._fU4._fU36, iVar10, 0, 1 ))
            {
                bVar6 = true;
            }
            g_U12382[uParam1]._fU36 = 0;
            break;
            case 49:
            sub_123025( "AMBIENT PHONECALL" );
            sub_136662( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 50:
            sub_123025( "KILL AMBIENT PHONECALL" );
            if (sub_136807( (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            break;
            case 51:
            sub_123025( "CHAT PHONECALL" );
            sub_136947( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 52:
            sub_123025( "KILL CHAT PHONECALL" );
            sub_137037( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 53:
            sub_123025( "END OF MISSION PHONECALL WALL" );
            if (NOT sub_137174())
            {
                bVar6 = true;
                bVar5 = true;
            }
            break;
            case 54:
            sub_123025( "TXTMSG PLAYER AMBIENT" );
            sub_80440( (uParam2^)[iVar7]._fU4._fU28, (uParam2^)[iVar7]._fU4._fU4, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 55:
            sub_123025( "TXTMSG PLAYER AMBIENT CODE" );
            sub_80465( (uParam2^)[iVar7]._fU4._fU28, (uParam2^)[iVar7]._fU4._fU4, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU32, 64537 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 56:
            sub_123025( "TXTMSG PLAYER AMBIENT WAIT" );
            if (sub_137497( (uParam2^)[iVar7]._fU4._fU28, (uParam2^)[iVar7]._fU4._fU4, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 ))
            {
                bVar6 = true;
            }
            break;
            case 57:
            sub_123025( "TXTMSG PLAYER AMBIENT WAIT CODE" );
            if (sub_137519( (uParam2^)[iVar7]._fU4._fU28, (uParam2^)[iVar7]._fU4._fU4, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU32 ))
            {
                bVar6 = true;
            }
            break;
            case 58:
            sub_123025( "KILL TXTMSG" );
            sub_101247( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 59:
            sub_123025( "PROC_REMINDER_TXTS" );
            sub_138003( uParam1, (uParam2^)[iVar7]._fU4._fU28, (uParam2^)[iVar7]._fU4._fU4, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 60:
            sub_123025( "ACTIVATE AMBIENT EMAIL" );
            sub_138262( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 61:
            sub_123025( "IGNORE_FRIEND_INTRO_CALL" );
            g_U20825[uParam0]._fU8 = 1;
            bVar6 = true;
            bVar5 = true;
            break;
            case 62:
            sub_123025( "FORCE_FRIEND_NEXT_CALL_TIME" );
            sub_138835( uParam0, (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 63:
            sub_123025( "ADD_FRIEND_ACTIVITY" );
            sub_138946( uParam0, (uParam2^)[iVar7]._fU4._fU8 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 64:
            sub_123025( "REMOVE_FRIEND_ACTIVITY" );
            sub_139088( uParam0, (uParam2^)[iVar7]._fU4._fU8 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 65:
            sub_123025( "ALLOW_FRIEND_ACTIVITIES" );
            sub_139266( uParam0, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, (uParam2^)[iVar7]._fU4._fU32 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 66:
            sub_123025( "DISALLOW_FRIEND_ACTIVITIES" );
            sub_139609( uParam0 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 67:
            sub_123025( "ADD_SPECIAL_ACTION" );
            sub_139724( uParam0, (uParam2^)[iVar7]._fU4._fU8 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 68:
            sub_123025( "ALLOW_SPECIAL_ACTIONS" );
            sub_139868( uParam1, (uParam2^)[iVar7]._fU4._fU8, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, (uParam2^)[iVar7]._fU4._fU32 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 69:
            sub_123025( "REALLOW_SPECIAL_ACTIONS" );
            sub_140334( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU8 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 70:
            sub_123025( "DISALLOW_SPECIAL_ACTIONS" );
            sub_140437( uParam1, (uParam2^)[iVar7]._fU4._fU8 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 71:
            sub_123025( "CONTACT_ON_NEXT_MISSION" );
            sub_140563( uParam1, (uParam2^)[iVar7]._fU4._fU4 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 74:
            sub_123025( "PAUSE_STRAND_EXTRAS" );
            if (sub_140667( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 ))
            {
                bVar6 = true;
                bVar5 = true;
            }
            break;
            case 75:
            sub_123025( "UNPAUSE_STRAND_EXTRAS" );
            sub_141556( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 72:
            sub_123025( "PAUSE_STRAND" );
            if (sub_142057( (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
                bVar5 = true;
            }
            break;
            case 73:
            sub_123025( "UNPAUSE_STRAND" );
            sub_142207( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 76:
            sub_123025( "ALLOW_HOSPITAL_PICKUP" );
            sub_142300( uParam0, (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 77:
            sub_123025( "ACTIVATE_BODY_SEARCHING" );
            sub_142398();
            bVar6 = true;
            bVar5 = true;
            break;
            case 78:
            sub_123025( "ACTIVATE_MAP_AREA" );
            sub_142462( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 79:
            sub_123025( "MAP_AREA_WALL" );
            if (sub_142778( (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            break;
            case 80:
            sub_123025( "ACTIVATE_MAP_BLIP_GROUP" );
            sub_142861( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 81:
            sub_123025( "ACTIVATE_SAVE_HOUSE" );
            sub_142967( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 82:
            sub_123025( "DEACTIVATE_SAVE_HOUSE" );
            sub_143572( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 83:
            sub_123025( "ACTIVATE_PICKUP_POINT" );
            sub_143945( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 84:
            sub_123025( "DEACTIVATE_PICKUP_POINT" );
            sub_144027( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 85:
            sub_123025( "ACTIVATE_DROPOFF_POINT" );
            sub_144108( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 86:
            sub_123025( "DEACTIVATE_DROPOFF_POINT" );
            sub_144191( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 87:
            sub_123025( "ACTIVATE_HAIL_TAXI" );
            sub_144257();
            bVar6 = true;
            bVar5 = true;
            break;
            case 88:
            sub_123025( "UNLOCK_GUNSHOP" );
            sub_144319();
            bVar6 = true;
            bVar5 = true;
            break;
            case 89:
            sub_123025( "ALLOW_NETWORK_SAVES" );
            sub_144382();
            bVar6 = true;
            bVar5 = true;
            break;
            case 90:
            sub_123025( "ACTIVATE_SPRAYSHOPS" );
            sub_144441();
            bVar6 = true;
            bVar5 = true;
            break;
            case 91:
            sub_123025( "ACTIVATE_CARGEN" );
            sub_144511( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 92:
            sub_123025( "DECEASED_ON_POLICE_COMPUTER" );
            sub_144650( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 93:
            sub_123025( "MISSING_ON_POLICE_COMPUTER" );
            sub_145681( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 94:
            sub_123025( "ARRESTED_ON_POLICE_COMPUTER" );
            sub_146722( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 95:
            sub_123025( "ALIVE_ON_POLICE_COMPUTER" );
            sub_147711( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 96:
            sub_123025( "DECEASED_ON_LCPD_WEB" );
            sub_148858( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 97:
            sub_123025( "MISSING_ON_LCPD_WEB" );
            sub_148936( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 98:
            sub_123025( "ARRESTED_ON_LCPD_WEB" );
            sub_149015( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 99:
            sub_123025( "ALIVE_ON_LCPD_WEB" );
            sub_149091( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 100:
            sub_123025( "ADD_DATE_TO_WEBSITE" );
            sub_149169( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 101:
            sub_123025( "UNLOCK_NEWS_BLOCK" );
            sub_149277( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 102:
            sub_123025( "UNLOCK_RADIO_STORY" );
            sub_149926( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 103:
            sub_123025( "ACTIVATE_GANG_HASSLE" );
            sub_149991();
            bVar6 = true;
            bVar5 = true;
            break;
            case 104:
            sub_123025( "DEACTIVATE_GANG_HASSLE" );
            sub_150062();
            bVar6 = true;
            bVar5 = true;
            break;
            case 105:
            sub_123025( "GANG_RELATIONSHIP_LIKE" );
            sub_150155( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 106:
            sub_123025( "GANG_RELATIONSHIP_NEUTRAL" );
            sub_150266( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 107:
            sub_123025( "GANG_RELATIONSHIP_DISLIKE" );
            sub_150377( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 108:
            sub_123025( "GANG_RELATIONSHIP_HATE" );
            sub_150485( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 109:
            sub_123025( "SET_STAT_VALUE" );
            sub_150587( uParam1, (uParam2^)[iVar7]._fU4._fU12, (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 112:
            sub_123025( "STAT_BOOST" );
            sub_150708( (uParam2^)[iVar7]._fU4._fU4, (uParam2^)[iVar7]._fU4._fU12, (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 110:
            sub_123025( "LIKE_MESSAGES_ON" );
            sub_150783( uParam1, 1 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 111:
            sub_123025( "LIKE_MESSAGES_OFF" );
            sub_150783( uParam1, 0 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 113:
            sub_123025( "STAT_WALL" );
            if (sub_150913( uParam1, (uParam2^)[iVar7]._fU4._fU12, (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            break;
            case 114:
            sub_123025( "STAT_WALL_AND" );
            if ((sub_150913( uParam1, (uParam2^)[iVar7]._fU4._fU12, (uParam2^)[iVar7]._fU4._fU20 )) AND (sub_150913( uParam1, (uParam2^)[iVar7]._fU4._fU16, (uParam2^)[iVar7]._fU4._fU24 )))
            {
                bVar6 = true;
            }
            break;
            case 115:
            sub_123025( "STAT_WALL_OR" );
            if ((sub_150913( uParam1, (uParam2^)[iVar7]._fU4._fU12, (uParam2^)[iVar7]._fU4._fU20 )) || (sub_150913( uParam1, (uParam2^)[iVar7]._fU4._fU16, (uParam2^)[iVar7]._fU4._fU24 )))
            {
                bVar6 = true;
            }
            break;
            case 116:
            sub_123025( "STAT_CHECK (FAIL GOTO)" );
            if (sub_150913( uParam1, (uParam2^)[iVar7]._fU4._fU12, (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            else
            {
                sub_124934( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
            }
            break;
            case 117:
            sub_123025( "SET_MISSIONS_LEVEL" );
            sub_151471( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 118:
            sub_123025( "MISSIONS_LEVEL_WALL" );
            if (sub_151560( (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            break;
            case 119:
            sub_123025( "MISSIONS_LEVEL_CHECK (FAIL GOTO)" );
            if (sub_151560( (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            else
            {
                sub_124934( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
            }
            break;
            case 120:
            sub_123025( "ACTIVATE_STRAND" );
            g_U12382[(uParam2^)[iVar7]._fU4._fU20]._fU0 = 1;
            bVar6 = true;
            break;
            case 121:
            sub_123025( "STRAND_ACTIVATED_CHECK (PASS GOTO)" );
            if (sub_151810( (uParam2^)[iVar7]._fU4._fU20 ))
            {
                sub_124934( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
            }
            else
            {
                bVar6 = true;
            }
            break;
            case 122:
            sub_123025( "STRAND_DEACTIVATION_WALL" );
            if (sub_151935( (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            break;
            case 123:
            sub_123025( "SEND_SYNCHRONISATION" );
            sub_152051( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            break;
            case 124:
            sub_123025( "SYNCHRONISATION_WALL" );
            if (sub_152236( (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            break;
            case 125:
            sub_123025( "GAMETIME MINS DELAY" );
            if (sub_152376( uParam1, (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            break;
            case 126:
            sub_123025( "GAMETIME WALL" );
            if (sub_152648( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 ))
            {
                bVar6 = true;
            }
            break;
            case 127:
            sub_123025( "REALTIME_MSECS_DELAY" );
            if (sub_152766( uParam1, (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            break;
            case 128:
            sub_123025( "DISTANCE WALL" );
            if (sub_131531( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 ))
            {
                bVar6 = true;
            }
            break;
            case 129:
            sub_123025( "SYNCHRONISATION_WALL" );
            sub_152997( (uParam2^)[iVar7]._fU4._fU4 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 130:
            sub_123025( "GIVE_WEAPON" );
            if (sub_153899( (uParam2^)[iVar7]._fU4._fU72, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 ))
            {
                bVar6 = true;
            }
            break;
            case 131:
            sub_123025( "CHANGE CLOTHES" );
            sub_154081( (uParam2^)[iVar7]._fU4._fU4, (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 132:
            sub_123025( "SET_MISSION_FLOW_FLAG" );
            sub_154232( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 133:
            sub_123025( "SET_MISSION_FLOW_FLAG_DEBUG" );
            bVar6 = true;
            bVar5 = true;
            break;
            case 134:
            sub_123025( "CLEAR_MISSION_FLOW_FLAG" );
            sub_154362( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 135:
            sub_123025( "CLEAR_MISSION_FLOW_FLAG_DEBUG" );
            bVar6 = true;
            bVar5 = true;
            break;
            case 140:
            sub_123025( "FLAG_WALL" );
            if (sub_154480( (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            break;
            case 141:
            sub_123025( "FLAG_WALL_FALSE" );
            if (NOT (sub_154480( (uParam2^)[iVar7]._fU4._fU20 )))
            {
                bVar6 = true;
            }
            break;
            case 136:
            case 137:
            sub_123025( "FLAG_CHECK_FAILGOTO (and _DEBUG version)" );
            if (sub_154480( (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            else
            {
                sub_124934( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
            }
            break;
            case 138:
            case 139:
            sub_123025( "FLAG_CHECK_PASSGOTO (and _DEBUG version)" );
            if (sub_154480( (uParam2^)[iVar7]._fU4._fU20 ))
            {
                sub_124934( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
            }
            else
            {
                bVar6 = true;
            }
            break;
            case 142:
            sub_123025( "STORE_MISSION_FLOW_INT" );
            sub_154834( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 143:
            sub_123025( "LABEL" );
            bVar6 = true;
            bVar5 = true;
            break;
            case 144:
            case 145:
            sub_123025( "GOTO (and DEBUG version)" );
            sub_124934( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
            bVar5 = true;
            break;
            case 146:
            case 147:
            sub_123025( "GOSUB (and DEBUG version)" );
            sub_155011( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
            bVar5 = true;
            break;
            case 148:
            sub_123025( "GOSUB RETURN" );
            sub_155172( uParam1 );
            bVar6 = true;
            break;
            case 149:
            sub_123025( "IS_PS3_FAILGOTO" );
            if (sub_155346())
            {
                bVar6 = true;
                bVar5 = true;
            }
            else
            {
                sub_124934( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
            }
            break;
            case 150:
            sub_123025( "HELP_TEXT" );
            if (sub_155461( (uParam2^)[iVar7]._fU4._fU40 ))
            {
                bVar6 = true;
                bVar5 = true;
            }
            break;
            case 151:
            sub_123025( "HELP_TEXT_TIMED" );
            if (sub_155474( (uParam2^)[iVar7]._fU4._fU40, (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
                bVar5 = true;
            }
            break;
            case 152:
            sub_123025( "PRINT_NOW" );
            PRINT_NOW( ref (uParam2^)[iVar7]._fU4._fU40, (uParam2^)[iVar7]._fU4._fU20, 1 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 153:
            sub_123025( "KILL STRAND" );
            sub_155834( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 154:
            sub_123025( "KEEP STRAND ACTIVE" );
            break;
            case 155:
            sub_123025( "TERMINATE THIS STRAND" );
            sub_155834( uParam1 );
            break;
            case 156:
            if (g_U12382[uParam1]._fU32)
            {
                if (IS_PLAYER_PLAYING( sub_8409() ))
                {
                    CLEAR_WANTED_LEVEL( sub_8409() );
                }
                sub_123025( "START SHOWCASE FAILGOTO" );
                bVar6 = true;
                bVar5 = true;
            }
            else
            {
                sub_124934( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
            }
            break;
            case 157:
            if (g_U12382[uParam1]._fU32)
            {
                sub_123025( "END SHOWCASE" );
            }
            else
            {
                bVar6 = true;
                bVar5 = true;
            }
            break;
            case 158:
            sub_123025( "DEBUG_PAUSE_ENDLESS_LOOP" );
            bVar6 = true;
            bVar5 = true;
            break;
            case 159:
            sub_123025( "SET TIME OF DAY DEBUG" );
            SET_TIME_OF_DAY( (uParam2^)[iVar7]._fU4._fU20, 0 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 160:
            sub_123025( "SET CONTACT POINT WARP DEBUG" );
            sub_156910( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 161:
            sub_123025( "END STRAND" );
            sub_62201( "END_STRAND: SHOULD NEVER REACH HERE - ADD 'TERMINATE THIS STRAND' COMMAND" );
            break;
            default: sub_62201( "Flow_Maintain_Mission_Flow(): Unknown mission FLOW_SEQ... ID" );
        }
        if (bVar6)
        {
            sub_123025( "************************ NEXT SEQUENCE *************************\n" );
            g_U12382[uParam1]._fU16++;
        }
    }
    if (((sub_74661( uParam0, 1, 0 )) AND (NOT (sub_130722( uParam0 )))) AND (NOT g_U15729[uParam1]._fU20))
    {
        if (sub_157380( uParam1, uParam0 ))
        {
            return;
        }
    }
    if (NOT g_U16014[uParam0]._fU4)
    {
        sub_74392( uParam1 );
    }
    return;
}

void sub_123025(unknown uParam0)
{
    return;
}

void sub_123042()
{
    int iVar2;
    int iVar3;
    int iVar4;

    sub_123051();
    sub_123117();
    iVar2 = 1;
    sub_58550( iVar2 );
    CLEAR_WANTED_LEVEL( sub_8409() );
    SET_TIME_OF_DAY( 18, 0 );
    ADD_SCORE( sub_8409(), 500 );
    g_U16013 = -1;
    g_U10556 = 0;
    g_U10557 = 0;
    g_U10558 = 0;
    g_U10559 = 0;
    g_U10560 = 0;
    g_U10561 = 0;
    g_U30324 = 0;
    g_U30325 = 11;
    sub_123523();
    if (IS_PLAYER_PLAYING( sub_8409() ))
    {
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( sub_16171(), 1 )) == 0)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( sub_16171(), 1 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( sub_16171(), 1, 0, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( sub_16171(), 2 )) == 0)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( sub_16171(), 2 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( sub_16171(), 2, 0, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( sub_16171(), 5 )) == 0)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( sub_16171(), 5 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( sub_16171(), 5, 0, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( sub_16171(), 4 )) == 0)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( sub_16171(), 4 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( sub_16171(), 4, 0, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( sub_16171(), 3 )) == 0)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( sub_16171(), 3 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( sub_16171(), 3, 0, 0 );
        }
        iVar3 = -1;
        GET_CHAR_PROP_INDEX( sub_16171(), 0, ref iVar3 );
        if (NOT (iVar3 == -1))
        {
            CLEAR_CHAR_PROP( sub_16171(), 0 );
        }
        iVar4 = -1;
        GET_CHAR_PROP_INDEX( sub_16171(), 0, ref iVar4 );
        if (NOT (iVar4 == -1))
        {
            CLEAR_CHAR_PROP( sub_16171(), 1 );
        }
    }
    sub_38232();
    return;
}

void sub_123051()
{
    int iVar2;

    IS_CHAR_DEAD( sub_16171() );
    iVar2 = 0;
    STORE_SCORE( sub_8409(), ref iVar2 );
    iVar2 *= -1;
    ADD_SCORE( sub_8409(), iVar2 );
    return;
}

void sub_123117()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        g_U15888[I]._fU0 = 10000.00000000 + 100.00000000;
    }
    g_U15888[0] = {0.00000000, 0.00000000, 0.00000000};
    g_U15888[1] = {g_U10756[9]._fU4};
    g_U15888[2] = {g_U10756[11]._fU4};
    g_U15888[3] = {g_U10756[6]._fU4};
    g_U15888[4] = {-435.47810000, 1396.04400000, 15.45690000};
    for ( I = 0; I < 5; I++ )
    {
        if (g_U15888[I]._fU0 > 10000.00000000)
        {
            sub_24711( "Flow_Reset: Setup_Mission_Flow_Vectors: Not all vectors have been given a value" );
        }
    }
    return;
}

void sub_123523()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = 1800000;
    g_U10750 = iVar2 + iVar3;
    return;
}

int sub_124001(unknown uParam0, int iParam1)
{
    if (g_U12382[uParam0]._fU24 == iParam1)
    {
        g_U12382[uParam0]._fU24 = -1;
        sub_124047( uParam0 );
        if (g_U10953._fU0)
        {
            g_U10953._fU8 = 0;
        }
        sub_62409( "mission has been passed\n" );
        return 1;
    }
    if (g_U14925[uParam0]._fU0._fU0 == 0)
    {
        sub_124275( uParam0, iParam1 );
        return 0;
    }
    if (g_U14925[uParam0]._fU0._fU4 == iParam1)
    {
        return 0;
    }
    return 0;
}

void sub_124047(int iParam0)
{
    if (NOT (g_U22948 == iParam0))
    {
        PRINTSTRING( "------------> KEITH: Skip_Phonecall_Mission_Pass() but wrong strand. Perhaps an error?" );
        return;
    }
    g_U12382[iParam0]._fU144 = 0;
    return;
}

void sub_124275(unknown uParam0, unknown uParam1)
{
    sub_124288( uParam0, uParam1 );
    return;
}

void sub_124288(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (NOT (g_U14925[uParam0]._fU0._fU0 == 0))
    {
        sub_24711( "Main_Missions: Setup_Mission(): Attempting to setup a mission after strand already setup" );
        return;
    }
    sub_2600( uParam0, 0 );
    uVar4 = sub_41889( uParam0, uParam1 );
    g_U14925[uParam0]._fU0._fU0 = 1;
    g_U14925[uParam0]._fU0._fU4 = uParam1;
    g_U14925[uParam0]._fU0._fU56 = g_U22960[uVar4]._fU12;
    StrCopy( ref g_U14925[uParam0]._fU0._fU8, 4, sub_124501( uVar4 ), 8);
    g_U14925[uParam0]._fU0._fU24 = {g_U22960[uVar4]._fU36};
    g_U12382[uParam0]._fU24 = -1;
    sub_41307( uParam0 );
    return;
}

void sub_124501(unknown uParam0)
{
    unknown Result;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    StrCopy( ref Result, 8, g_U22960[uParam0]._fU20, 4);
    return Result;
}

int sub_124720(unknown uParam0, int iParam1, unknown uParam2)
{
    if (g_U12382[uParam0]._fU24 == iParam1)
    {
        g_U12382[uParam0]._fU24 = -1;
        sub_124047( uParam0 );
        (uParam2^) = 1;
        if (g_U10953._fU0)
        {
            g_U10953._fU8 = 0;
        }
        sub_62409( "mission has been passed\n" );
        return 1;
    }
    if (g_U14925[uParam0]._fU0._fU0 == 0)
    {
        (uParam2^) = 0;
        return 1;
    }
    if (g_U14925[uParam0]._fU0._fU4 == iParam1)
    {
        return 0;
    }
    return 0;
}

void sub_124934(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int iVar6;

    iVar5 = 0;
    iVar6 = 161;
    sub_62409( "Flow Goto or Gosub Label: " );
    sub_62409( uParam2 );
    sub_63264();
    while (true)
    {
        iVar6 = (uParam1^)[iVar5]._fU0;
        if (iVar6 == 161)
        {
            PRINTSTRING( "STRAND: " );
            PRINTINT( uParam0 );
            PRINTSTRING( "   LABEL: " );
            PRINTSTRING( uParam2 );
            PRINTNL();
            sub_62201( "Flow_Goto_Label: Failed to find label\n" );
            return;
        }
        if (iVar6 == 143)
        {
            sub_62409( "Found a label: " );
            sub_62409( ref (uParam1^)[iVar5]._fU4._fU40 );
            sub_63264();
            if (COMPARE_STRING( ref (uParam1^)[iVar5]._fU4._fU40, uParam2 ))
            {
                sub_62409( "Found correct label so continue mission flow here\n" );
                g_U12382[uParam0]._fU16 = iVar5;
                return;
            }
            sub_62409( "Wrong label, keep trying\n" );
        }
        iVar5++;
    }
    return;
}

int sub_125786(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4, unknown uParam5)
{
    if (NOT g_U14925[uParam1]._fU160._fU0)
    {
        sub_125830( uParam0, uParam1, uParam2, uParam4, iParam3, uParam5 );
        return 0;
    }
    if (NOT g_U14925[uParam1]._fU160._fU80)
    {
        return 0;
    }
    if (g_U14925[uParam1]._fU160._fU84 >= iParam3)
    {
        g_U14925[uParam1]._fU160._fU92 = 1;
        return 1;
    }
    return 0;
}

void sub_125830(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
    int iVar9;

    uVar8 = sub_41889( uParam1, uParam2 );
    if (g_U14925[uParam1]._fU160._fU0)
    {
        sub_24711( "Main_Missions: Prepare_And_Setup_Proc_Mission(): Proc Mission already required on this strand." );
    }
    g_U14925[uParam1]._fU160._fU0 = 1;
    g_U14925[uParam1]._fU160._fU8 = uParam5;
    g_U14925[uParam1]._fU160._fU12 = {g_U22960[uVar8]._fU36};
    StrCopy( ref g_U14925[uParam1]._fU160._fU44, 8, g_U22960[uVar8]._fU20, 4);
    g_U14925[uParam1]._fU160._fU76 = uParam2;
    g_U14925[uParam1]._fU160._fU80 = 0;
    g_U14925[uParam1]._fU160._fU92 = 0;
    g_U14925[uParam1]._fU160._fU84 = 0;
    g_U14925[uParam1]._fU160._fU88 = uParam4;
    g_U16014[uParam0]._fU244._fU4 = 1;
    g_U14925[uParam1]._fU160._fU108._fU0 = 1;
    if ((uParam5) AND (NOT g_U14925[uParam1]._fU160._fU4))
    {
        g_U16014[uParam0]._fU8[0]._fU0[5] = 1;
    }
    iVar9 = 0;
    GET_GAME_TIMER( ref iVar9 );
    g_U14925[uParam1]._fU160._fU100 = iVar9 + iParam3;
    return;
}

int sub_126549(unknown uParam0, unknown uParam1, int iParam2)
{
    if (NOT g_U14925[uParam1]._fU160._fU0)
    {
        return 1;
    }
    if (NOT g_U14925[uParam1]._fU160._fU80)
    {
        return 0;
    }
    if (NOT (g_U14925[uParam1]._fU160._fU76 == iParam2))
    {
        sub_126707( "Flow_Quit_Mission_Proc: Attempt to quit different Proc Mission" );
        return 1;
    }
    if (g_U14925[uParam1]._fU160._fU96)
    {
        return 0;
    }
    if (NOT (IS_THREAD_ACTIVE( g_U14925[uParam1]._fU160._fU104 )))
    {
        return 1;
    }
    DESTROY_THREAD( g_U14925[uParam1]._fU160._fU104 );
    g_U14925[uParam1]._fU160._fU108._fU0 = 0;
    if (g_U14925[uParam1]._fU160._fU8)
    {
        g_U16014[uParam0]._fU8[0]._fU0[5] = 0;
    }
    return 1;
}

void sub_126707(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_127123(unknown uParam0, int iParam1)
{
    if (g_U14925[uParam0]._fU0._fU0 == 0)
    {
        sub_124275( uParam0, iParam1 );
        return 1;
    }
    if (g_U14925[uParam0]._fU0._fU4 == iParam1)
    {
        return 1;
    }
    return 0;
}

int sub_127531(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    int iVar5;

    uVar4 = sub_41889( uParam0, uParam1 );
    REQUEST_SCRIPT( ref g_U22960[uVar4]._fU36 );
    if (NOT (HAS_SCRIPT_LOADED( ref g_U22960[uVar4]._fU36 )))
    {
        REQUEST_SCRIPT( ref g_U22960[uVar4]._fU36 );
        return 0;
    }
    iVar5 = 1024;
    if (sub_127627( uParam0, uParam1 ))
    {
        iVar5 = 512;
    }
    if (sub_127659( uParam0, uParam1 ))
    {
        iVar5 = 128;
    }
    START_NEW_SCRIPT( ref g_U22960[uVar4]._fU36, iVar5 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U22960[uVar4]._fU36 );
    return 1;
}

int sub_127627(unknown uParam0, unknown uParam1)
{
    return 0;
}

int sub_127659(unknown uParam0, unknown uParam1)
{
    return 0;
}

void sub_127777()
{
    sub_45310();
    g_U95._fU40 = 1;
    return;
}

void sub_127851()
{
    g_U95._fU40 = 2;
    if (IS_BIT_SET( g_U95._fU412, 25 ))
    {
        SET_BIT( ref g_U95._fU412, 26 );
    }
    return;
}

void sub_127953(unknown uParam0)
{
    sub_127965( uParam0, 1 );
    return;
}

void sub_127965(unknown uParam0, boolean bParam1)
{
    char[16] cVar4;

    if (NOT g_U16014[uParam0]._fU212._fU0)
    {
        if (g_U95._fU0 == 1012)
        {
            g_U95._fU92 = 1;
        }
        g_U16014[uParam0]._fU212._fU0 = 1;
        if (bParam1)
        {
            StrCopy( ref cVar4, "CONT_", 16 );
            ConcatString(ref cVar4, ref g_U16014[uParam0]._fU212._fU8, 16);
            SET_PHONE_HUD_ITEM( 2, ref cVar4, -1 );
        }
        g_U95._fU520 = 0;
    }
    return;
}

void sub_128222(unknown uParam0)
{
    g_U16014[uParam0]._fU212._fU0 = 0;
    return;
}

void sub_128312(unknown uParam0)
{
    g_U16014[uParam0]._fU212._fU0 = 1;
    return;
}

void sub_128408(unknown uParam0, unknown uParam1, unknown uParam2)
{
    StrCopy( ref g_U12382[uParam0]._fU80, uParam1, 16 );
    StrCopy( ref g_U12382[uParam0]._fU96, uParam2, 16 );
    return;
}

void sub_128537(int iParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int I;

    iVar5 = -1;
    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        if (g_U28734[I]._fU0 == iParam0)
        {
            StrCopy( ref g_U28734[I]._fU4, uParam1, 16 );
            StrCopy( ref g_U28734[I]._fU20, uParam2, 16 );
            return;
        }
        if (g_U28734[I]._fU0 == 37)
        {
            if (iVar5 == -1)
            {
                iVar5 = I;
            }
        }
    }
    if (iVar5 == -1)
    {
        sub_62201( "Flow_Perform_Set_Other_Answer_Phone: need to increase MAX_NON_STRAND_ANSWER_PHONE_MESSAGES" );
        return;
    }
    g_U28734[iVar5]._fU0 = iParam0;
    StrCopy( ref g_U28734[iVar5]._fU4, uParam1, 16 );
    StrCopy( ref g_U28734[iVar5]._fU20, uParam2, 16 );
    return;
}

int sub_128887(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    SCRIPT_ASSERT( "Flow_Await_Mission_Phone_Call: Function unused so not maintained - Tell Keith" );
    if (g_U15729[uParam1]._fU0 == 0)
    {
        g_U15729[uParam1]._fU0 = 1;
        g_U15729[uParam1]._fU8 = 0;
        g_U16014[uParam0]._fU8[0]._fU0[5] = 1;
        sub_62409( "SET UP CONTROL VARIABLES - SO JOB ADDED\n" );
        return 0;
    }
    if (g_U15729[uParam1]._fU8 == 0)
    {
        if (g_U16014[uParam0]._fU4)
        {
            if (sub_129137( uParam0 ))
            {
                g_U15729[uParam1]._fU8 = 1;
                sub_62409( "Answer Cellphone\n" );
                sub_75012( uParam2, uParam3, 1 );
                sub_46107();
                sub_93013();
                return 0;
            }
        }
        return 0;
    }
    if (NOT (sub_79775() == 6))
    {
        return 0;
    }
    sub_62409( "Call ended\n" );
    sub_61755( uParam1 );
    g_U16014[uParam0]._fU8[0]._fU0[5] = 0;
    g_U16014[uParam0]._fU8[1]._fU0[5] = 0;
    g_U16014[uParam0]._fU4 = 0;
    g_U12382[uParam1]._fU28 = 1;
    return 1;
}

void sub_129137(unknown uParam0)
{
    return g_U16014[uParam0]._fU8[1]._fU0[5];
}

int sub_129461(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    int iVar7;

    iVar7 = 0;
    GET_GAME_TIMER( ref iVar7 );
    if (g_U15729[iParam1]._fU4 == 0)
    {
        sub_62409( "Initialise Control Values\n" );
        g_U15729[iParam1]._fU4 = 1;
        g_U15729[iParam1]._fU8 = 0;
        g_U15729[iParam1]._fU12 = iVar7 + iParam4;
        return 0;
    }
    if (NOT g_U15729[iParam1]._fU8)
    {
        if (g_U15729[iParam1]._fU16)
        {
            g_U15729[iParam1]._fU16 = 0;
            g_U15729[iParam1]._fU12 = iVar7 + 30000;
            g_U15729[iParam1]._fU4 = 1;
            return 0;
        }
        if (NOT (IS_PLAYER_PLAYING( sub_8409() )))
        {
            sub_129680( iParam1, 300000 );
            return 0;
        }
        if ((((((g_U12379) || (IS_THREAD_ACTIVE( g_U818 ))) || (IS_WANTED_LEVEL_GREATER( sub_8409(), 0 ))) || (sub_83873())) || (sub_83677())) || (sub_84280( 0 )))
        {
            sub_129680( iParam1, 300000 );
            return 0;
        }
        if ((NOT (sub_98044( uParam0, 30000 ))) || (sub_92624( uParam0 )))
        {
            sub_129680( iParam1, 300000 );
            return 0;
        }
        if (IS_BIT_SET( g_U10938._fU0, 4 ))
        {
            if (NOT (iParam1 == g_U10938._fU4))
            {
                sub_129680( iParam1, 300000 );
                g_U15729[iParam1]._fU4 = 1;
                return 0;
            }
            sub_61755( iParam1 );
            return 1;
        }
        if (iVar7 > g_U15729[iParam1]._fU12)
        {
            sub_62409( "Making Call\n" );
            if (sub_130022( uParam0, uParam2, uParam3 ))
            {
                sub_62409( "Call Setup Success\n" );
                g_U15729[iParam1]._fU8 = 1;
                sub_46107();
            }
            else
            {
                sub_62409( "Call Setup Failure - try again later\n" );
                sub_129680( iParam1, 300000 );
            }
        }
        return 0;
    }
    if (sub_79602())
    {
        return 0;
    }
    sub_61755( iParam1 );
    g_U12382[iParam1]._fU28 = 1;
    sub_89111( uParam0, 0 );
    return 1;
}

void sub_129680(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    iVar5 = 18000;
    iVar6 = 30000;
    if (iParam1 <= 60000)
    {
        iVar5 = 8000;
        iVar6 = 12000;
    }
    iVar7 = g_U15729[uParam0]._fU12 - iVar4;
    if (iVar7 > iVar5)
    {
        return;
    }
    g_U15729[uParam0]._fU12 = iVar4 + iVar6;
    return;
}

void sub_130022(unknown uParam0, unknown uParam1, unknown uParam2)
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

    array(ref cVar5, 2);
    StrCopy( ref cVar5[0], uParam1, 16 );
    StrCopy( ref cVar5[1], "END", 16 );
    array(ref uVar14, 2);
    return sub_75120( uParam0, ref cVar5, uParam2, 0, ref uVar14, ref uVar14, "", 0, 1, 2, 1, 0, 0, 0 );
}

void sub_130345(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int iVar12;
    int iVar13;

    iVar12 = -1;
    iVar13 = -1;
    return sub_130390( uParam0, uParam1, uParam2, uParam3, uParam4, iVar12, iVar13, uParam5, uParam6, uParam7, uParam8, uParam9 );
}

int sub_130390(int iParam0, int iParam1, unknown uParam2, unknown uParam3, int iParam4, int iParam5, unknown uParam6, unknown uParam7, int iParam8, unknown uParam9, boolean bParam10, boolean bParam11)
{
    int iVar14;
    boolean bVar15;
    boolean bVar16;
    boolean bVar17;
    int iVar18;
    int iVar19;
    int iVar20;
    boolean bVar21;

    iVar14 = 0;
    GET_GAME_TIMER( ref iVar14 );
    if (g_U15729[iParam1]._fU4 == 0)
    {
        sub_62409( "Initialise Control Values\n" );
        g_U15729[iParam1]._fU4 = 1;
        g_U15729[iParam1]._fU8 = 0;
        bVar15 = false;
        if (g_U15729[iParam1]._fU12 == -1)
        {
            bVar15 = true;
        }
        bVar16 = false;
        if (g_U15729[iParam1]._fU12 == -2)
        {
            bVar16 = true;
        }
        g_U15729[iParam1]._fU12 = iVar14;
        if (NOT g_U12382[iParam1]._fU36)
        {
            if (bVar15)
            {
                g_U15729[iParam1]._fU12 += iParam8;
            }
            else if (bVar16)
            {
                g_U15729[iParam1]._fU12 += 30000;
            }
            else
            {
                g_U15729[iParam1]._fU12 += iParam4;
            }
        }
        return 0;
    }
    if (NOT g_U15729[iParam1]._fU8)
    {
        bVar17 = false;
        if (bParam11)
        {
            if ((sub_74661( iParam0, 1, 0 )) AND (NOT (sub_130722( iParam0 ))))
            {
                bVar17 = true;
            }
        }
        if (g_U15729[iParam1]._fU16)
        {
            g_U15729[iParam1]._fU16 = 0;
            g_U15729[iParam1]._fU12 = iVar14 + 30000;
            g_U15729[iParam1]._fU4 = 1;
            return 0;
        }
        if (NOT (IS_PLAYER_PLAYING( sub_8409() )))
        {
            sub_129680( iParam1, iParam8 );
            return 0;
        }
        iVar18 = 0;
        if (iParam0 < 8)
        {
            if (g_U20825[iParam0]._fU16)
            {
                iVar18 = 1;
            }
        }
        if ((((((((g_U12379) || (IS_THREAD_ACTIVE( g_U818 ))) || (IS_WANTED_LEVEL_GREATER( sub_8409(), 0 ))) || (sub_83677())) || (iVar18)) || (g_U29760)) || (sub_83924())) || (g_U10742))
        {
            sub_129680( iParam1, iParam8 );
            return 0;
        }
        if (NOT bVar17)
        {
            if ((sub_84280( iParam4 )) || (sub_83873()))
            {
                sub_129680( iParam1, iParam8 );
                return 0;
            }
        }
        if (IS_BIT_SET( g_U10938._fU0, 4 ))
        {
            if (NOT (iParam1 == g_U10938._fU4))
            {
                sub_129680( iParam1, iParam8 );
                return 0;
            }
            sub_61755( iParam1 );
            if (NOT (iParam5 == -1))
            {
                if (NOT (sub_131136( iParam5, uParam6 )))
                {
                    SET_TIME_OF_DAY( iParam5, 0 );
                }
            }
            return 1;
        }
        if ((iVar14 > g_U15729[iParam1]._fU12) || (bVar17))
        {
            iVar19 = 1;
            if (bVar17)
            {
                if (sub_131313( uParam2, uParam3 ))
                {
                    iVar19 = 0;
                }
            }
            if ((NOT (iParam5 == -1)) AND (iVar19))
            {
                if (NOT (sub_131136( iParam5, uParam6 )))
                {
                    sub_129680( iParam1, iParam8 );
                    return 0;
                }
            }
            if (sub_131385( uParam7 ))
            {
                sub_129680( iParam1, iParam8 );
                return 0;
            }
            if (sub_131756( iParam1 ))
            {
                sub_129680( iParam1, iParam8 );
                return 0;
            }
            if ((g_U10953._fU0) || (IS_AUTO_SAVE_IN_PROGRESS()))
            {
                sub_132042( iParam1 );
                return 0;
            }
            if (sub_132135())
            {
                sub_129680( iParam1, iParam8 );
                return 0;
            }
            if (sub_132311())
            {
                sub_129680( iParam1, iParam8 );
                return 0;
            }
            iVar20 = uParam9;
            if (NOT (iVar20 == 74))
            {
                if (NOT g_U15811[iVar20])
                {
                    if (bParam10)
                    {
                        sub_129680( iParam1, iParam8 );
                        return 0;
                    }
                    sub_61755( iParam1 );
                    return 1;
                }
            }
            if (NOT bVar17)
            {
                if (iParam8 > 15000)
                {
                    if (NOT (sub_98044( iParam0, 30000 )))
                    {
                        sub_129680( iParam1, iParam8 );
                        return 0;
                    }
                }
            }
            if (sub_92624( iParam0 ))
            {
                sub_129680( iParam1, iParam8 );
                return 0;
            }
            if (sub_132814( iParam1 ))
            {
                sub_129680( iParam1, iParam8 );
                return 0;
            }
            sub_62409( "Making Call\n" );
            bVar21 = false;
            if (bVar17)
            {
                bVar21 = sub_132943( uParam2, uParam3 );
            }
            else
            {
                bVar21 = sub_85252( iParam0, uParam2, uParam3, 10000, 0 );
            }
            if (bVar21)
            {
                sub_62409( "Call Setup Success\n" );
                g_U15729[iParam1]._fU8 = 1;
                g_U22959 = iVar14 + 2000;
                if (iParam8 <= 60000)
                {
                    CLEAR_ADDITIONAL_TEXT( 0, 1 );
                    CLEAR_ADDITIONAL_TEXT( 6, 1 );
                }
                if (bVar17)
                {
                    g_U15729[iParam1]._fU20 = 1;
                }
            }
            else
            {
                sub_62409( "Call Setup Failure - try again later\n" );
                sub_129680( iParam1, iParam8 );
            }
        }
        return 0;
    }
    if (sub_79602())
    {
        g_U22959 = iVar14 + 2000;
        if (g_U12379)
        {
            sub_133288();
        }
        return 0;
    }
    sub_46107();
    switch (sub_79775())
    {
        case 1:
        case 2:
        sub_61755( iParam1 );
        g_U15729[iParam1]._fU12 = -1;
        return 0;
    }
    if ((sub_88927()) || (IS_CHAR_DEAD( sub_16171() )))
    {
        sub_61755( iParam1 );
        g_U15729[iParam1]._fU12 = -2;
        return 0;
    }
    if ((g_U12379) || (IS_BIT_SET( g_U10938._fU0, 4 )))
    {
        sub_61755( iParam1 );
        g_U15729[iParam1]._fU12 = -2;
        return 0;
    }
    sub_61755( iParam1 );
    sub_89111( iParam0, 0 );
    g_U12382[iParam1]._fU28 = 1;
    g_U22959 = iVar14 + 2000;
    return 1;
}

void sub_130722(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;

    iVar3 = uParam0;
    iVar4 = iVar3 / 32;
    iVar5 = iVar3 mod 32;
    if (iVar4 > 2)
    {
        return 0;
    }
    if (iVar5 > 32)
    {
        return 0;
    }
    return IS_BIT_SET( g_U12376[iVar4], iVar5 );
}

int sub_131136(int iParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = 0;
    iVar5 = 0;
    GET_TIME_OF_DAY( ref iVar4, ref iVar5 );
    if (iParam1 == iParam0)
    {
        return 1;
    }
    if (iParam1 > iParam0)
    {
        if (iVar4 < iParam0)
        {
            return 0;
        }
        if (iVar4 >= iParam1)
        {
            return 0;
        }
        return 1;
    }
    if (iVar4 >= iParam0)
    {
        return 1;
    }
    if (iVar4 < iParam1)
    {
        return 1;
    }
    return 0;
}

int sub_131313(unknown uParam0, unknown uParam1)
{
    return 0;
}

int sub_131385(int iParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;
    boolean bVar6;

    iVar3 = 6;
    if (iParam0 == iVar3)
    {
        return 0;
    }
    if (IS_CHAR_DEAD( sub_16171() ))
    {
        return 1;
    }
    bVar4 = IS_CHAR_IN_ANY_CAR( sub_16171() );
    iVar5 = 0;
    if (bVar4)
    {
        iVar5 = sub_131458( iParam0 );
    }
    else
    {
        iVar5 = sub_131496( iParam0 );
    }
    bVar6 = sub_131531( iParam0, iVar5 );
    if (bVar6)
    {
        return 0;
    }
    return 1;
}

void sub_131458(unknown uParam0)
{
    return CEIL( 300.00000000 );
}

void sub_131496(unknown uParam0)
{
    return CEIL( 150.00000000 );
}

boolean sub_131531(unknown uParam0, int iParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    int Result;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    float fVar11;
    int iVar12;

    if (IS_CHAR_DEAD( sub_16171() ))
    {
        return 0;
    }
    GET_CHAR_COORDINATES( sub_16171(), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
    Result = 0;
    if (sub_131591( uVar4, uParam0, ref Result ))
    {
        return Result;
    }
    uVar8 = {g_U15888[uParam0]};
    fVar11 = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uVar4._fU0, uVar4._fU4, uVar4._fU8, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref fVar11 );
    iVar12 = CEIL( fVar11 );
    return iVar12 > iParam1;
}

int sub_131591(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    uVar10 = uParam3;
    (uParam4^) = 1;
    return 0;
}

int sub_131756(unknown uParam0)
{
    int iVar3;
    int J;
    int iVar5;
    int I;

    if (g_U12382[uParam0]._fU120 == 0)
    {
        return 0;
    }
    iVar3 = 0;
    J = 0;
    for ( J = 0; J < 8; J++ )
    {
        if (IS_BIT_SET( g_U12382[uParam0]._fU120, J ))
        {
            iVar5 = J;
            iVar3 = sub_74187( iVar5 );
            I = 0;
            for ( I = 0; I < 5; I++ )
            {
                if (sub_92504( iVar3, I ))
                {
                    if (g_U12382[iVar3]._fU148[I]._fU84)
                    {
                        return 1;
                    }
                }
            }
            if (NOT (g_U14925[iVar3]._fU80._fU0 == 0))
            {
                return 1;
            }
            if (g_U12382[uParam0]._fU120 == J)
            {
                return 0;
            }
        }
    }
    return 0;
}

void sub_132042(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    iVar4 = g_U15729[uParam0]._fU12 - iVar3;
    if (iVar4 > 18000)
    {
        return;
    }
    iVar5 = 18000;
    g_U15729[uParam0]._fU12 += 5000;
    return;
}

int sub_132135()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Arnaud1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Arnaud2" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Daisy1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Margot1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "margot2" )) > 0)
    {
        return 1;
    }
    return 0;
}

int sub_132311()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;

    bVar2 = IS_CHAR_DEAD( sub_16171() );
    if (NOT bVar2)
    {
        GET_CHAR_COORDINATES( sub_16171(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    }
    fVar9 = 0.00000000;
    if (NOT bVar2)
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambCabaret" )) > 0)
        {
            uVar6 = {g_U11582[12]._fU0};
            GET_DISTANCE_BETWEEN_COORDS_3D( uVar3._fU0, uVar3._fU4, uVar3._fU8, uVar6._fU0, uVar6._fU4, uVar6._fU8, ref fVar9 );
            if (fVar9 < 200.00000000)
            {
                PRINTSTRING( "Check_For_Other_Specific_Restrictions: ambCabaret script exists\n" );
                return 1;
            }
        }
    }
    if (g_U43561)
    {
        PRINTSTRING( "Check_For_Other_Specific_Restrictions: E2 stats are still on-screen\n" );
        return 1;
    }
    return 0;
}

int sub_132814(int iParam0)
{
    if (iParam0 == 11)
    {
        return 0;
    }
    if (g_U42871._fU4 == nil)
    {
        return 0;
    }
    if (NOT (iParam0 == g_U42871._fU8))
    {
        return 0;
    }
    return 1;
}

void sub_132943(unknown uParam0, unknown uParam1)
{
    if (COMPARE_STRING( uParam1, "E2MF2AU" ))
    {
        if (COMPARE_STRING( uParam0, "E2MF1_RCAL2" ))
        {
            return sub_75012( "E2MF1_RCAL3", "E2MF2AU", 1 );
        }
    }
    return sub_75012( uParam0, uParam1, 1 );
}

void sub_133288()
{
    if ((g_U560 == 1) || (g_U8867 == 4))
    {
        if (g_U95._fU60 != -1)
        {
            g_U16014[g_U95._fU60]._fU212._fU24 = 6;
        }
        if (IS_MOBILE_PHONE_CALL_ONGOING())
        {
            ABORT_SCRIPTED_CONVERSATION( 0 );
        }
        g_U95._fU376 = 0;
        g_U95._fU100 = 1;
    }
    return;
}

void sub_136662(unknown uParam0, int iParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    g_U15904[uParam0]._fU0 = 1;
    g_U15904[uParam0]._fU4 = iVar5 + iParam1;
    g_U15904[uParam0]._fU8 = uParam2;
    g_U15904[uParam0]._fU12 = 0;
    g_U15904[uParam0]._fU16 = 0;
    return;
}

int sub_136807(unknown uParam0)
{
    if (NOT g_U15904[uParam0]._fU0)
    {
        return 1;
    }
    if (g_U15904[uParam0]._fU12)
    {
        return 0;
    }
    g_U15904[uParam0]._fU0 = 0;
    g_U15904[uParam0]._fU16 = 1;
    return 1;
}

void sub_136947(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    sub_115980( uParam0, uVar4 );
    return;
}

void sub_137037(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    sub_137054( uParam0, uVar4 );
    return;
}

void sub_137054(unknown uParam0, int iParam1)
{
    if (NOT (g_U15976[uParam0]._fU0 == iParam1))
    {
        return;
    }
    g_U15976[uParam0]._fU0 = 5;
    g_U15976[uParam0]._fU4 = 0;
    return;
}

void sub_137174()
{
    return IS_THREAD_ACTIVE( g_U818 );
}

void sub_137497(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    iVar6 = 5;
    return sub_137519( uParam0, uParam1, uParam2, uParam3, iVar6 );
}

int sub_137519(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    int iVar7;

    iVar7 = 10;
    if (iParam0 >= iVar7)
    {
        SCRIPT_ASSERT( "Text_Player_Wait: Unknown Txt ID. Tell Keith. Needs added to g_eAmbientTxtmsgs." );
        sub_80577( uParam1, uParam2 );
        return 1;
    }
    if (sub_137645( iParam0 ))
    {
        return 1;
    }
    if (NOT g_U42731._fU12[iParam0]._fU0)
    {
        sub_80465( iParam0, uParam1, uParam2, uParam3, uParam4, 64537 );
        g_U42731._fU12[iParam0]._fU8 = 1;
    }
    return 0;
}

void sub_137645(unknown uParam0)
{
    return g_U42731._fU12[uParam0]._fU4;
}

void sub_138003(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    int iVar7;

    g_U14925[uParam0]._fU160._fU108._fU4 = uParam1;
    g_U14925[uParam0]._fU160._fU108._fU8 = uParam2;
    g_U14925[uParam0]._fU160._fU108._fU12 = uParam3;
    g_U14925[uParam0]._fU160._fU108._fU16 = uParam4;
    if (g_U14925[uParam0]._fU160._fU108._fU20 > 0)
    {
        return;
    }
    iVar7 = 0;
    GET_GAME_TIMER( ref iVar7 );
    g_U14925[uParam0]._fU160._fU108._fU20 = iVar7 + g_U14925[uParam0]._fU160._fU108._fU16;
    return;
}

void sub_138262(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam0;
    switch (uVar4)
    {
        case 0:
        sub_138375( 0, uParam1 );
        break;
        case 1:
        sub_138375( 1, uParam1 );
        break;
        case 2:
        sub_138375( 2, uParam1 );
        break;
        case 3:
        sub_138375( 3, uParam1 );
        break;
        case 4:
        sub_138375( 4, uParam1 );
        break;
        case 5:
        sub_138375( 5, uParam1 );
        break;
        case 6:
        sub_138375( 6, uParam1 );
        break;
        case 7:
        sub_138375( 7, uParam1 );
        break;
        case 8:
        sub_138375( 8, uParam1 );
        break;
        case 9:
        sub_138375( 9, uParam1 );
        break;
        case 10:
        sub_138375( 10, uParam1 );
        break;
        default: SCRIPT_ASSERT( "Flow_Perform_Activate_Ambient_Email: Unknown Ambient Email Sender" );
    }
    return;
}

void sub_138375(unknown uParam0, int iParam1)
{
    if (iParam1 < g_U1555[uParam0]._fU316)
    {
        if (g_U1555[uParam0]._fU184[iParam1] == 0)
        {
            sub_87863( ref g_U1555[uParam0]._fU204[iParam1], g_U1555[uParam0]._fU400, 0, 0 );
            g_U1555[uParam0]._fU184[iParam1] = 1;
        }
    }
    return;
}

void sub_138835(unknown uParam0, int iParam1)
{
    int iVar4;

    if (iParam1 < 0)
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U20825[uParam0]._fU84 = iVar4 + iParam1;
    return;
}

void sub_138946(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (g_U20825[uParam0]._fU8)
    {
        g_U16014[uParam0]._fU8[0]._fU0[uParam1] = 1;
        return;
    }
    uVar4 = uParam1;
    SET_BIT( ref g_U20825[uParam0]._fU168, uVar4 );
    return;
}

void sub_139088(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (g_U20825[uParam0]._fU8)
    {
        g_U16014[uParam0]._fU8[0]._fU0[uParam1] = 0;
        return;
    }
    uVar4 = uParam1;
    CLEAR_BIT( ref g_U20825[uParam0]._fU168, uVar4 );
    return;
}

void sub_139266(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
    int iVar7;

    if (g_U20825[uParam0]._fU0)
    {
        return;
    }
    g_U22731++;
    g_U20825[uParam0]._fU0 = 1;
    g_U20825[uParam0]._fU72 = (iParam1 * 60) * 1000;
    g_U20825[uParam0]._fU76 = (iParam2 * 60) * 1000;
    g_U20825[uParam0]._fU112 = iParam3;
    g_U20825[uParam0]._fU116 = iParam3 + iParam4;
    if (g_U20825[uParam0]._fU120 == -1)
    {
        iVar7 = 0;
        GENERATE_RANDOM_INT_IN_RANGE( g_U20825[uParam0]._fU112, g_U20825[uParam0]._fU116, ref iVar7 );
        g_U20825[uParam0]._fU120 = iVar7;
    }
    sub_139491( uParam0 );
    return;
}

void sub_139491(unknown uParam0)
{
    g_U20825[uParam0]._fU92 = 0;
    g_U20825[uParam0]._fU96 = 0;
    sub_44854( uParam0 );
    sub_100597( uParam0 );
    return;
}

void sub_139609(unknown uParam0)
{
    if (NOT g_U20825[uParam0]._fU0)
    {
        return;
    }
    g_U20825[uParam0]._fU0 = 0;
    g_U22731--;
    return;
}

void sub_139724(unknown uParam0, int iParam1)
{
    int iVar4;

    iVar4 = iParam1 - 0;
    g_U20825[uParam0]._fU308[iVar4]._fU0 = 1;
    return;
}

void sub_139868(unknown uParam0, int iParam1, unknown uParam2, int iParam3, int iParam4, unknown uParam5)
{
    int iVar8;
    int iVar9;
    unknown uVar10;

    iVar8 = iParam1 - 0;
    sub_1923( uParam0, iVar8 );
    g_U12382[uParam0]._fU148[iVar8]._fU0 = 1;
    g_U12382[uParam0]._fU148[iVar8]._fU20 = 0;
    g_U12382[uParam0]._fU148[iVar8]._fU128 = uParam2;
    g_U12382[uParam0]._fU148[iVar8]._fU132 = iParam3;
    g_U12382[uParam0]._fU148[iVar8]._fU136 = iParam3 + iParam4;
    g_U12382[uParam0]._fU148[iVar8]._fU4 = uParam5;
    if (g_U12382[uParam0]._fU148[iVar8]._fU140 == -1)
    {
        iVar9 = 0;
        GENERATE_RANDOM_INT_IN_RANGE( g_U12382[uParam0]._fU148[iVar8]._fU132, g_U12382[uParam0]._fU148[iVar8]._fU136, ref iVar9 );
        g_U12382[uParam0]._fU148[iVar8]._fU140 = iVar9;
    }
    if (g_U12382[uParam0]._fU148[iVar8]._fU4 == 0)
    {
        g_U12382[uParam0]._fU148[iVar8]._fU20 = 1;
        uVar10 = sub_74403( uParam0 );
        sub_89199( 0, uVar10, iVar8 );
    }
    return;
}

void sub_140334(unknown uParam0, int iParam1)
{
    int iVar4;

    iVar4 = iParam1 - 0;
    g_U12382[uParam0]._fU148[iVar4]._fU0 = 1;
    return;
}

void sub_140437(unknown uParam0, int iParam1)
{
    int iVar4;

    iVar4 = iParam1 - 0;
    g_U12382[uParam0]._fU148[iVar4]._fU0 = 0;
    g_U12382[uParam0]._fU148[iVar4]._fU20 = 0;
    return;
}

void sub_140563(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    SET_BIT( ref g_U12382[uParam0]._fU120, uVar4 );
    return;
}

void sub_140667(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    int Result;
    int I;

    Result = 1;
    if (IS_BIT_SET( uParam1, 1 ))
    {
        if (NOT (sub_140696( uParam0 )))
        {
            Result = 0;
        }
    }
    if (IS_BIT_SET( uParam1, 3 ))
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            if (NOT (sub_140904( uParam0, I )))
            {
                Result = 0;
            }
        }
    }
    if (IS_BIT_SET( uParam1, 2 ))
    {
        if (NOT (sub_141067( uParam0 )))
        {
            Result = 0;
        }
        if (NOT (sub_141170( uParam0 )))
        {
            Result = 0;
        }
    }
    uVar4 = sub_74403( uParam0 );
    if (IS_BIT_SET( uParam1, 4 ))
    {
        if (NOT (sub_141382( uVar4 )))
        {
            Result = 0;
        }
    }
    if (IS_BIT_SET( uParam1, 5 ))
    {
        if (NOT (sub_141436( uVar4 )))
        {
            Result = 0;
        }
    }
    g_U12382[uParam0]._fU116 = uParam1;
    return Result;
}

int sub_140696(unknown uParam0)
{
    unknown uVar3;

    if (g_U14925[uParam0]._fU160._fU96)
    {
        return 0;
    }
    if (g_U14925[uParam0]._fU160._fU4)
    {
        return 1;
    }
    uVar3 = sub_74403( uParam0 );
    if (g_U14925[uParam0]._fU160._fU8)
    {
        g_U16014[uVar3]._fU8[0]._fU0[5] = 0;
    }
    g_U14925[uParam0]._fU160._fU108._fU0 = 0;
    g_U14925[uParam0]._fU160._fU4 = 1;
    return 1;
}

int sub_140904(unknown uParam0, unknown uParam1)
{
    if (g_U12382[uParam0]._fU148[uParam1]._fU32)
    {
        return 1;
    }
    if (sub_92504( uParam0, uParam1 ))
    {
        if (g_U12382[uParam0]._fU148[uParam1]._fU84)
        {
            return 0;
        }
    }
    g_U12382[uParam0]._fU148[uParam1]._fU32 = 1;
    return 1;
}

int sub_141067(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_74403( uParam0 );
    if (g_U20825[uVar3]._fU4)
    {
        return 1;
    }
    if (NOT (g_U14925[uParam0]._fU80._fU0 == 0))
    {
        return 0;
    }
    g_U20825[uVar3]._fU4 = 1;
    return 1;
}

int sub_141170(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_74403( uParam0 );
    if (NOT g_U20825[uVar3]._fU712._fU0)
    {
        return 1;
    }
    if (NOT g_U20825[uVar3]._fU712._fU4)
    {
        return 1;
    }
    if (g_U20825[uVar3]._fU712._fU24)
    {
        return 0;
    }
    if (g_U20825[uVar3]._fU712._fU16)
    {
        return 0;
    }
    if (g_U20825[uVar3]._fU712._fU20)
    {
        return 0;
    }
    g_U20825[uVar3]._fU712._fU12 = 1;
    return 0;
}

int sub_141382(unknown uParam0)
{
    g_U22807[uParam0] = 1;
    return 1;
}

int sub_141436(unknown uParam0)
{
    g_U22845[uParam0] = 1;
    return 1;
}

void sub_141556(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    int I;

    uVar4 = g_U12382[uParam0]._fU116;
    if (IS_BIT_SET( uVar4, 1 ))
    {
        sub_141599( uParam0 );
    }
    if (IS_BIT_SET( uVar4, 3 ))
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            sub_141769( uParam0, I );
        }
    }
    if (IS_BIT_SET( uVar4, 2 ))
    {
        sub_141840( uParam0 );
    }
    uVar3 = sub_74403( uParam0 );
    if (IS_BIT_SET( uVar4, 4 ))
    {
        sub_141906( uVar3 );
    }
    if (IS_BIT_SET( uVar4, 5 ))
    {
        sub_141950( uVar3 );
    }
    g_U12382[uParam0]._fU116 = 0;
    g_U12382[uParam0]._fU28 = 1;
    return;
}

void sub_141599(unknown uParam0)
{
    unknown uVar3;

    g_U14925[uParam0]._fU160._fU4 = 0;
    g_U14925[uParam0]._fU160._fU108._fU0 = 1;
    if (NOT g_U14925[uParam0]._fU160._fU0)
    {
        return;
    }
    uVar3 = sub_74403( uParam0 );
    if (g_U14925[uParam0]._fU160._fU8)
    {
        g_U16014[uVar3]._fU8[0]._fU0[5] = 1;
    }
    return;
}

void sub_141769(unknown uParam0, unknown uParam1)
{
    g_U12382[uParam0]._fU148[uParam1]._fU32 = 0;
    return;
}

void sub_141840(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_74403( uParam0 );
    g_U20825[uVar3]._fU4 = 0;
    return;
}

void sub_141906(unknown uParam0)
{
    g_U22807[uParam0] = 0;
    return;
}

void sub_141950(unknown uParam0)
{
    g_U22845[uParam0] = 0;
    return;
}

int sub_142057(unknown uParam0)
{
    int iVar3;

    iVar3 = 0;
    SET_BIT( ref iVar3, 1 );
    SET_BIT( ref iVar3, 2 );
    SET_BIT( ref iVar3, 3 );
    SET_BIT( ref iVar3, 4 );
    SET_BIT( ref iVar3, 5 );
    if (NOT (sub_140667( uParam0, iVar3 )))
    {
        return 0;
    }
    g_U12382[uParam0]._fU112 = 1;
    return 1;
}

void sub_142207(unknown uParam0)
{
    sub_141556( uParam0 );
    g_U12382[uParam0]._fU112 = 0;
    return;
}

void sub_142300(unknown uParam0, unknown uParam1)
{
    g_U20825[uParam0]._fU712._fU0 = 1;
    g_U20825[uParam0]._fU712._fU164 = uParam1;
    return;
}

void sub_142398()
{
    return;
}

void sub_142462(unknown uParam0)
{
    g_U10973[uParam0]._fU0 = 1;
    SET_INT_STAT( 363, uParam0 );
    sub_142497( uParam0 );
    sub_36017();
    sub_19601();
    sub_142535();
    return;
}

void sub_142497(unknown uParam0)
{
    if (g_U0)
    {
        return;
    }
    return;
}

void sub_142535()
{
    unknown uVar2;
    unknown uVar3;

    uVar2 = GET_INT_STAT( 363 );
    uVar3 = uVar2;
    switch (uVar3)
    {
        case 0:
        case 1:
        if (NOT g_U15811[1])
        {
            ProtectedSet(g_U10980, 2);
        }
        else
        {
            ProtectedSet(g_U10980, 4);
        }
        break;
        case 2:
        ProtectedSet(g_U10980, 5);
        break;
        case 3:
        ProtectedSet(g_U10980, 6);
        break;
        default: SCRIPT_ASSERT( "Update_Max_Wanted_Level_For_Game: Unknown Map Area" );
    }
    return;
}

void sub_142778(unknown uParam0)
{
    return g_U10973[uParam0]._fU0;
}

void sub_142861(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_142876( uVar3 );
    return;
}

void sub_142876(unknown uParam0)
{
    g_U11343._fU0[uParam0] = 1;
    sub_36017();
    return;
}

void sub_142967(unknown uParam0)
{
    g_U10984[uParam0]._fU0 = 1;
    if (NOT (DOES_BLIP_EXIST( g_U10984[uParam0]._fU32 )))
    {
        ADD_BLIP_FOR_CONTACT( g_U10984[uParam0]._fU8._fU0, g_U10984[uParam0]._fU8._fU4, g_U10984[uParam0]._fU8._fU8, ref g_U10984[uParam0]._fU32 );
        CHANGE_BLIP_DISPLAY( g_U10984[uParam0]._fU32, 2 );
        CHANGE_BLIP_SPRITE( g_U10984[uParam0]._fU32, g_U10984[uParam0]._fU36 );
        CHANGE_BLIP_PRIORITY( g_U10984[uParam0]._fU32, 0 );
        ENABLE_SAVE_HOUSE( g_U10984[uParam0]._fU4, 1 );
        if (NOT g_U28805._fU4)
        {
            CHANGE_BLIP_DISPLAY( g_U10984[uParam0]._fU32, 0 );
        }
        sub_143202( uParam0 );
        sub_63264();
        sub_62409( "**********************************\n" );
        sub_62409( "*                                *\n" );
        sub_62409( "*       ADD SAVE HOUSE BLIP      *\n" );
        sub_62409( "*                                *\n" );
        sub_62409( "**********************************\n" );
        sub_63264();
    }
    sub_36017();
    return;
}

void sub_143202(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    switch (uVar3)
    {
        case 0:
        sub_42598( ref g_U10984[uParam0]._fU32, -448.99650000, 1355.47300000, 16.36760000, 358.14070000 );
        break;
        default:
    }
    return;
}

void sub_143572(unknown uParam0)
{
    g_U10984[uParam0]._fU0 = 0;
    ENABLE_SAVE_HOUSE( g_U10984[uParam0]._fU4, 0 );
    if (DOES_BLIP_EXIST( g_U10984[uParam0]._fU32 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref g_U10984[uParam0]._fU32 );
        sub_63264();
        sub_62409( "**********************************\n" );
        sub_62409( "*                                *\n" );
        sub_62409( "*     REMOVE SAVE HOUSE BLIP     *\n" );
        sub_62409( "*                                *\n" );
        sub_62409( "**********************************\n" );
        sub_63264();
    }
    sub_36017();
    return;
}

void sub_143945(unknown uParam0)
{
    g_U10856[uParam0]._fU0 = 1;
    return;
}

void sub_144027(unknown uParam0)
{
    g_U10856[uParam0]._fU0 = 0;
    return;
}

void sub_144108(unknown uParam0)
{
    g_U10827[uParam0]._fU0 = 1;
    return;
}

void sub_144191(unknown uParam0)
{
    g_U10827[uParam0]._fU0 = 0;
    return;
}

void sub_144257()
{
    g_U2674 = 0;
    g_U2680 = 1;
    return;
}

void sub_144319()
{
    g_U42891 = 1;
    return;
}

void sub_144382()
{
    g_U21 = 1;
    return;
}

void sub_144441()
{
    SET_NO_RESPRAYS( 0 );
    return;
}

void sub_144511(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_144526( uVar3 );
    return;
}

void sub_144526(int iParam0)
{
    if (iParam0 < 15)
    {
        SWITCH_CAR_GENERATOR( g_U9551[iParam0], 101 );
        g_U9310[iParam0]._fU60 = 0;
    }
    return;
}

void sub_144650(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_144665( uVar3 );
    return;
}

void sub_144665(unknown uParam0)
{
    char[16] cVar3;
    char[16] cVar7;

    switch (uParam0)
    {
        case 0:
        StrCopy( ref cVar3, "PD_MIKHAIL", 16 );
        StrCopy( ref cVar7, "PD_FAUSTIN", 16 );
        break;
        case 1:
        StrCopy( ref cVar3, "PD_DMITIRI", 16 );
        StrCopy( ref cVar7, "PD_RASCALOV", 16 );
        break;
        case 2:
        StrCopy( ref cVar3, "PD_JACOB", 16 );
        StrCopy( ref cVar7, "PD_HUGHES", 16 );
        break;
        case 3:
        StrCopy( ref cVar3, "PD_TEAFORE", 16 );
        StrCopy( ref cVar7, "PD_DAVIES", 16 );
        break;
        case 4:
        StrCopy( ref cVar3, "PD_MANNY", 16 );
        StrCopy( ref cVar7, "PD_ESCUELLA", 16 );
        break;
        case 5:
        StrCopy( ref cVar3, "PD_ELIZABETA", 16 );
        StrCopy( ref cVar7, "PD_TORRES", 16 );
        break;
        case 6:
        StrCopy( ref cVar3, "PD_BRUCIE", 16 );
        StrCopy( ref cVar7, "PD_CHALMERS", 16 );
        break;
        case 7:
        StrCopy( ref cVar3, "PD_RAY", 16 );
        StrCopy( ref cVar7, "PD_BOCCINO", 16 );
        break;
        case 8:
        StrCopy( ref cVar3, "PD_PHIL", 16 );
        StrCopy( ref cVar7, "PD_BELL", 16 );
        break;
        case 9:
        StrCopy( ref cVar3, "PD_VLAD", 16 );
        StrCopy( ref cVar7, "PD_GLEBOV", 16 );
        break;
        case 10:
        StrCopy( ref cVar3, "PD_TREY", 16 );
        StrCopy( ref cVar7, "PD_STEWART", 16 );
        break;
        case 11:
        StrCopy( ref cVar3, "PD_DWAYNE", 16 );
        StrCopy( ref cVar7, "PD_FORGE", 16 );
        break;
        case 12:
        StrCopy( ref cVar3, "PD_PACKIE", 16 );
        StrCopy( ref cVar7, "PD_MCREARY", 16 );
        break;
        case 13:
        StrCopy( ref cVar3, "PD_GERRY", 16 );
        StrCopy( ref cVar7, "PD_MCREARY", 16 );
        break;
        case 14:
        StrCopy( ref cVar3, "PD_ED", 16 );
        StrCopy( ref cVar7, "PD_LOW", 16 );
        break;
        case 15:
        StrCopy( ref cVar3, "PD_CLARENCE", 16 );
        StrCopy( ref cVar7, "PD_LITTLE", 16 );
        break;
        case 16:
        StrCopy( ref cVar3, "PD_MARNIE", 16 );
        StrCopy( ref cVar7, "PD_ALLEN", 16 );
        break;
        case 17:
        StrCopy( ref cVar3, "PD_IVAN", 16 );
        StrCopy( ref cVar7, "PD_Bytchkov", 16 );
        break;
        case 18:
        StrCopy( ref cVar3, "PD_GRACIE", 16 );
        StrCopy( ref cVar7, "PD_ANCELLOTI", 16 );
        break;
        case 19:
        StrCopy( ref cVar3, "PD_TOM", 16 );
        StrCopy( ref cVar7, "PD_RIVAS", 16 );
        break;
    }
    sub_145540( ref cVar3, ref cVar7 );
    return;
}

void sub_145540(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_15765( uParam0, uParam1 );
    if (iVar4 != -1)
    {
        g_U2832[iVar4]._fU180 = 1;
        g_U2832[iVar4]._fU212 = 1;
    }
    return;
}

void sub_145681(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_145697( uVar3, 1 );
    return;
}

void sub_145697(unknown uParam0, unknown uParam1)
{
    char[16] cVar4;
    char[16] cVar8;

    switch (uParam0)
    {
        case 0:
        StrCopy( ref cVar4, "PD_MIKHAIL", 16 );
        StrCopy( ref cVar8, "PD_FAUSTIN", 16 );
        break;
        case 1:
        StrCopy( ref cVar4, "PD_DMITIRI", 16 );
        StrCopy( ref cVar8, "PD_RASCALOV", 16 );
        break;
        case 2:
        StrCopy( ref cVar4, "PD_JACOB", 16 );
        StrCopy( ref cVar8, "PD_HUGHES", 16 );
        break;
        case 3:
        StrCopy( ref cVar4, "PD_TEAFORE", 16 );
        StrCopy( ref cVar8, "PD_DAVIES", 16 );
        break;
        case 4:
        StrCopy( ref cVar4, "PD_MANNY", 16 );
        StrCopy( ref cVar8, "PD_ESCUELLA", 16 );
        break;
        case 5:
        StrCopy( ref cVar4, "PD_ELIZABETA", 16 );
        StrCopy( ref cVar8, "PD_TORRES", 16 );
        break;
        case 6:
        StrCopy( ref cVar4, "PD_BRUCIE", 16 );
        StrCopy( ref cVar8, "PD_CHALMERS", 16 );
        break;
        case 7:
        StrCopy( ref cVar4, "PD_RAY", 16 );
        StrCopy( ref cVar8, "PD_BOCCINO", 16 );
        break;
        case 8:
        StrCopy( ref cVar4, "PD_PHIL", 16 );
        StrCopy( ref cVar8, "PD_BELL", 16 );
        break;
        case 9:
        StrCopy( ref cVar4, "PD_VLAD", 16 );
        StrCopy( ref cVar8, "PD_GLEBOV", 16 );
        break;
        case 10:
        StrCopy( ref cVar4, "PD_TREY", 16 );
        StrCopy( ref cVar8, "PD_STEWART", 16 );
        break;
        case 11:
        StrCopy( ref cVar4, "PD_DWAYNE", 16 );
        StrCopy( ref cVar8, "PD_FORGE", 16 );
        break;
        case 12:
        StrCopy( ref cVar4, "PD_PACKIE", 16 );
        StrCopy( ref cVar8, "PD_MCREARY", 16 );
        break;
        case 13:
        StrCopy( ref cVar4, "PD_GERRY", 16 );
        StrCopy( ref cVar8, "PD_MCREARY", 16 );
        break;
        case 14:
        StrCopy( ref cVar4, "PD_ED", 16 );
        StrCopy( ref cVar8, "PD_LOW", 16 );
        break;
        case 15:
        StrCopy( ref cVar4, "PD_CLARENCE", 16 );
        StrCopy( ref cVar8, "PD_LITTLE", 16 );
        break;
        case 16:
        StrCopy( ref cVar4, "PD_MARNIE", 16 );
        StrCopy( ref cVar8, "PD_ALLEN", 16 );
        break;
        case 17:
        StrCopy( ref cVar4, "PD_IVAN", 16 );
        StrCopy( ref cVar8, "PD_Bytchkov", 16 );
        break;
        case 18:
        StrCopy( ref cVar4, "PD_GRACIE", 16 );
        StrCopy( ref cVar8, "PD_ANCELLOTI", 16 );
        break;
        case 19:
        StrCopy( ref cVar4, "PD_TOM", 16 );
        StrCopy( ref cVar8, "PD_RIVAS", 16 );
        break;
    }
    sub_146595( ref cVar4, ref cVar8, uParam1 );
    return;
}

void sub_146595(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = sub_15765( uParam0, uParam1 );
    if (iVar5 != -1)
    {
        g_U2832[iVar5]._fU192 = uParam2;
    }
    return;
}

void sub_146722(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_146738( uVar3, 1 );
    return;
}

void sub_146738(unknown uParam0, unknown uParam1)
{
    char[16] cVar4;
    char[16] cVar8;

    switch (uParam0)
    {
        case 0:
        StrCopy( ref cVar4, "PD_MIKHAIL", 16 );
        StrCopy( ref cVar8, "PD_FAUSTIN", 16 );
        break;
        case 1:
        StrCopy( ref cVar4, "PD_DMITIRI", 16 );
        StrCopy( ref cVar8, "PD_RASCALOV", 16 );
        break;
        case 2:
        StrCopy( ref cVar4, "PD_JACOB", 16 );
        StrCopy( ref cVar8, "PD_HUGHES", 16 );
        break;
        case 3:
        StrCopy( ref cVar4, "PD_TEAFORE", 16 );
        StrCopy( ref cVar8, "PD_DAVIES", 16 );
        break;
        case 4:
        StrCopy( ref cVar4, "PD_MANNY", 16 );
        StrCopy( ref cVar8, "PD_ESCUELLA", 16 );
        break;
        case 5:
        StrCopy( ref cVar4, "PD_ELIZABETA", 16 );
        StrCopy( ref cVar8, "PD_TORRES", 16 );
        break;
        case 6:
        StrCopy( ref cVar4, "PD_BRUCIE", 16 );
        StrCopy( ref cVar8, "PD_CHALMERS", 16 );
        break;
        case 7:
        StrCopy( ref cVar4, "PD_RAY", 16 );
        StrCopy( ref cVar8, "PD_BOCCINO", 16 );
        break;
        case 8:
        StrCopy( ref cVar4, "PD_PHIL", 16 );
        StrCopy( ref cVar8, "PD_BELL", 16 );
        break;
        case 9:
        StrCopy( ref cVar4, "PD_VLAD", 16 );
        StrCopy( ref cVar8, "PD_GLEBOV", 16 );
        break;
        case 10:
        StrCopy( ref cVar4, "PD_TREY", 16 );
        StrCopy( ref cVar8, "PD_STEWART", 16 );
        break;
        case 11:
        StrCopy( ref cVar4, "PD_DWAYNE", 16 );
        StrCopy( ref cVar8, "PD_FORGE", 16 );
        break;
        case 12:
        StrCopy( ref cVar4, "PD_PACKIE", 16 );
        StrCopy( ref cVar8, "PD_MCREARY", 16 );
        break;
        case 13:
        StrCopy( ref cVar4, "PD_GERRY", 16 );
        StrCopy( ref cVar8, "PD_MCREARY", 16 );
        break;
        case 14:
        StrCopy( ref cVar4, "PD_ED", 16 );
        StrCopy( ref cVar8, "PD_LOW", 16 );
        break;
        case 15:
        StrCopy( ref cVar4, "PD_CLARENCE", 16 );
        StrCopy( ref cVar8, "PD_LITTLE", 16 );
        break;
        case 16:
        StrCopy( ref cVar4, "PD_MARNIE", 16 );
        StrCopy( ref cVar8, "PD_ALLEN", 16 );
        break;
        case 17:
        StrCopy( ref cVar4, "PD_IVAN", 16 );
        StrCopy( ref cVar8, "PD_Bytchkov", 16 );
        break;
        case 18:
        StrCopy( ref cVar4, "PD_GRACIE", 16 );
        StrCopy( ref cVar8, "PD_ANCELLOTI", 16 );
        break;
        case 19:
        StrCopy( ref cVar4, "PD_TOM", 16 );
        StrCopy( ref cVar8, "PD_RIVAS", 16 );
        break;
    }
    sub_15752( ref cVar4, ref cVar8, uParam1 );
    return;
}

void sub_147711(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_147727( uVar3, 1 );
    sub_146738( uVar3, 0 );
    sub_145697( uVar3, 0 );
    return;
}

void sub_147727(unknown uParam0, boolean bParam1)
{
    char[16] cVar4;
    char[16] cVar8;

    switch (uParam0)
    {
        case 0:
        StrCopy( ref cVar4, "PD_MIKHAIL", 16 );
        StrCopy( ref cVar8, "PD_FAUSTIN", 16 );
        break;
        case 1:
        StrCopy( ref cVar4, "PD_DMITIRI", 16 );
        StrCopy( ref cVar8, "PD_RASCALOV", 16 );
        break;
        case 2:
        StrCopy( ref cVar4, "PD_JACOB", 16 );
        StrCopy( ref cVar8, "PD_HUGHES", 16 );
        break;
        case 3:
        StrCopy( ref cVar4, "PD_TEAFORE", 16 );
        StrCopy( ref cVar8, "PD_DAVIES", 16 );
        break;
        case 4:
        StrCopy( ref cVar4, "PD_MANNY", 16 );
        StrCopy( ref cVar8, "PD_ESCUELLA", 16 );
        break;
        case 5:
        StrCopy( ref cVar4, "PD_ELIZABETA", 16 );
        StrCopy( ref cVar8, "PD_TORRES", 16 );
        break;
        case 6:
        StrCopy( ref cVar4, "PD_BRUCIE", 16 );
        StrCopy( ref cVar8, "PD_CHALMERS", 16 );
        break;
        case 7:
        StrCopy( ref cVar4, "PD_RAY", 16 );
        StrCopy( ref cVar8, "PD_BOCCINO", 16 );
        break;
        case 8:
        StrCopy( ref cVar4, "PD_PHIL", 16 );
        StrCopy( ref cVar8, "PD_BELL", 16 );
        break;
        case 9:
        StrCopy( ref cVar4, "PD_VLAD", 16 );
        StrCopy( ref cVar8, "PD_GLEBOV", 16 );
        break;
        case 10:
        StrCopy( ref cVar4, "PD_TREY", 16 );
        StrCopy( ref cVar8, "PD_STEWART", 16 );
        break;
        case 11:
        StrCopy( ref cVar4, "PD_DWAYNE", 16 );
        StrCopy( ref cVar8, "PD_FORGE", 16 );
        break;
        case 12:
        StrCopy( ref cVar4, "PD_PACKIE", 16 );
        StrCopy( ref cVar8, "PD_MCREARY", 16 );
        break;
        case 13:
        StrCopy( ref cVar4, "PD_GERRY", 16 );
        StrCopy( ref cVar8, "PD_MCREARY", 16 );
        break;
        case 14:
        StrCopy( ref cVar4, "PD_ED", 16 );
        StrCopy( ref cVar8, "PD_LOW", 16 );
        break;
        case 15:
        StrCopy( ref cVar4, "PD_CLARENCE", 16 );
        StrCopy( ref cVar8, "PD_LITTLE", 16 );
        break;
        case 16:
        StrCopy( ref cVar4, "PD_MARNIE", 16 );
        StrCopy( ref cVar8, "PD_ALLEN", 16 );
        break;
        case 17:
        StrCopy( ref cVar4, "PD_IVAN", 16 );
        StrCopy( ref cVar8, "PD_Bytchkov", 16 );
        break;
        case 18:
        StrCopy( ref cVar4, "PD_GRACIE", 16 );
        StrCopy( ref cVar8, "PD_ANCELLOTI", 16 );
        break;
        case 19:
        StrCopy( ref cVar4, "PD_TOM", 16 );
        StrCopy( ref cVar8, "PD_RIVAS", 16 );
        break;
    }
    if (bParam1)
    {
        sub_148631( ref cVar4, ref cVar8, 0 );
    }
    else
    {
        sub_148631( ref cVar4, ref cVar8, 1 );
    }
    return;
}

void sub_148631(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;

    if ((DOES_TEXT_LABEL_EXIST( uParam0 )) AND (DOES_TEXT_LABEL_EXIST( uParam1 )))
    {
        for ( I = 0; I <= 99; I++ )
        {
            if ((COMPARE_STRING( ref g_U2832[I]._fU16, uParam0 )) AND (COMPARE_STRING( ref g_U2832[I]._fU0, uParam1 )))
            {
                g_U2832[I]._fU208 = uParam2;
            }
        }
    }
    return;
}

void sub_148858(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_16002( uVar3, 3 );
    return;
}

void sub_148936(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_16002( uVar3, 1 );
    return;
}

void sub_149015(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_16002( uVar3, 2 );
    return;
}

void sub_149091(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_16002( uVar3, 0 );
    return;
}

void sub_149169(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_149185( uVar3, 1 );
    return;
}

void sub_149185(int iParam0, unknown uParam1)
{
    if (iParam0 <= 2)
    {
        g_U1433[iParam0] = uParam1;
    }
    return;
}

void sub_149277(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_149292( uVar3 );
    return;
}

void sub_149292(int iParam0)
{
    if (iParam0 >= g_U1459)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_149379( iParam0 ))
    {
        sub_149845( iParam0 );
    }
    return;
}

int sub_149379(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1459[uParam0], 20 )) || (IS_BIT_SET( g_U1459[uParam0], 21 )))
    {
        return 0;
    }
    sub_87863( ref uVar3, 1, 0, 0 );
    sub_149452( uVar3, ref g_U1459[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1459[uParam0], 22, 31, g_U1459[0] );
    g_U1459[0]++;
    SET_BIT( ref g_U1459[uParam0], 20 );
    sub_74744( "\n ----------------------------------------------------------------" );
    sub_149738( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_74744( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_149452(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_149738(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_149845(unknown uParam0)
{
    return;
}

void sub_149926(unknown uParam0)
{
    UNLOCK_MISSION_NEWS_STORY( uParam0 );
    return;
}

void sub_149991()
{
    SET_PLAYER_CAN_BE_HASSLED_BY_GANGS( sub_8409(), 1 );
    return;
}

void sub_150062()
{
    SET_PLAYER_CAN_BE_HASSLED_BY_GANGS( sub_8409(), 0 );
    return;
}

void sub_150155(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;

    uVar4 = uParam0;
    uVar5 = uParam1;
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 1, uVar4, uVar5 );
    return;
}

void sub_150266(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;

    uVar4 = uParam0;
    uVar5 = uParam1;
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, uVar4, uVar5 );
    return;
}

void sub_150377(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;

    uVar4 = uParam0;
    uVar5 = uParam1;
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 3, uVar4, uVar5 );
    return;
}

void sub_150485(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;

    uVar4 = uParam0;
    uVar5 = uParam1;
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 5, uVar4, uVar5 );
    return;
}

void sub_150587(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U12382[uParam0]._fU44[uParam1] = uParam2;
    g_U12382[uParam0]._fU60[uParam1] = uParam2;
    return;
}

void sub_150708(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    uVar5 = sub_74187( uParam0 );
    sub_80116( uVar5, uParam1, uParam2 );
    return;
}

void sub_150783(unknown uParam0, unknown uParam1)
{
    g_U12382[uParam0]._fU76 = uParam1;
    return;
}

int sub_150913(unknown uParam0, int iParam1, int iParam2)
{
    if (iParam1 > 3)
    {
        if (ProtectedGet(g_U22949[iParam1]) >= iParam2)
        {
            return 1;
        }
    }
    else if (g_U12382[uParam0]._fU44[iParam1] >= iParam2)
    {
        return 1;
    }
    if (IS_KEYBOARD_KEY_PRESSED( 25 ))
    {
        sub_62409( "*************** DEBUG: STAT SET TO REQUIRED TARGET ******************\n" );
        if (iParam1 > 3)
        {
            ProtectedSet(g_U22949[iParam1], iParam2);
        }
        else
        {
            g_U12382[uParam0]._fU44[iParam1] = iParam2;
        }
        return 1;
    }
    return 0;
}

void sub_151471(int iParam0)
{
    if (g_U30381 >= iParam0)
    {
        return;
    }
    g_U30381 = iParam0;
    return;
}

int sub_151560(int iParam0)
{
    if (g_U30381 >= iParam0)
    {
        return 1;
    }
    return 0;
}

int sub_151810(unknown uParam0)
{
    if (NOT (g_U12382[uParam0]._fU16 == -1))
    {
        return 1;
    }
    return 0;
}

int sub_151935(unknown uParam0)
{
    if (g_U12382[uParam0]._fU16 == -1)
    {
        return 0;
    }
    if (g_U12382[uParam0]._fU8)
    {
        return 0;
    }
    return 1;
}

void sub_152051(unknown uParam0)
{
    if (g_U15796[uParam0])
    {
        sub_62201( "Flow_Set_Sync: Synchronisation flag already set" );
        return;
    }
    sub_62409( "Sending Synchronisation signal\n" );
    g_U15796[uParam0] = 1;
    return;
}

int sub_152236(unknown uParam0)
{
    if (NOT g_U15796[uParam0])
    {
        return 0;
    }
    sub_62409( "Received Synchronisation signal\n" );
    g_U15796[uParam0] = 0;
    return 1;
}

int sub_152376(unknown uParam0, unknown uParam1)
{
    if (NOT (sub_152399( ref g_U12382[uParam0]._fU128 )))
    {
        if (g_U0)
        {
            sub_87863( ref g_U12382[uParam0]._fU128, 0, 2, 0 );
        }
        else
        {
            sub_87863( ref g_U12382[uParam0]._fU128, 0, uParam1, 0 );
        }
        return 0;
    }
    if (NOT (sub_85689( g_U12382[uParam0]._fU128 )))
    {
        return 0;
    }
    sub_1547( ref g_U12382[uParam0]._fU128 );
    return 1;
}

int sub_152399(int iParam0)
{
    if (((((ref iParam0->_fU0->_fU4) == -1) AND ((ref iParam0->_fU0->_fU0) == -1)) AND ((ref iParam0->_fU8->_fU0) == -1)) AND ((ref iParam0->_fU8->_fU4) == -1))
    {
        return 0;
    }
    return 1;
}

void sub_152648(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (g_U12379)
    {
        return 0;
    }
    uVar4._fU0 = uParam0;
    uVar4._fU4 = 0;
    uVar6._fU0 = uParam1;
    uVar6._fU4 = 0;
    return sub_108699( uVar4, uVar6 );
}

int sub_152766(unknown uParam0, int iParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    if (g_U12382[uParam0]._fU124 == 0)
    {
        g_U12382[uParam0]._fU124 = iVar4 + iParam1;
        return 0;
    }
    if (iVar4 < g_U12382[uParam0]._fU124)
    {
        return 0;
    }
    g_U12382[uParam0]._fU124 = 0;
    return 1;
}

void sub_152997(unknown uParam0)
{
    sub_153008( uParam0 );
    return;
}

void sub_153008(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_153019( uParam0 );
    if (NOT g_U30257[uVar3]._fU0)
    {
        return;
    }
    g_U30257[uVar3]._fU4 = 1;
    g_U30257[uVar3]._fU28 = 1;
    sub_89815( ref g_U30257[uVar3]._fU8 );
    g_U30257[uVar3]._fU24 = 1;
    sub_153237( uParam0, uVar3 );
    return;
}

int sub_153019(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_153030( uParam0 )))
    {
        sub_24711( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 13;
}

int sub_153030(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = uParam0;
    if (NOT (iVar3 >= 13))
    {
        return 0;
    }
    iVar4 = 16;
    if (NOT (iVar3 < iVar4))
    {
        return 0;
    }
    return 1;
}

void sub_153237(unknown uParam0, unknown uParam1)
{
    sub_6639( uParam1 );
    switch (uParam0)
    {
        case 13:
        if (g_U30257[uParam1]._fU28 == 1)
        {
            g_U30257[uParam1]._fU36 = 1;
            g_U30257[uParam1]._fU40 = {-65.59000000, -74.01000000, 13.76000000};
            g_U30257[uParam1]._fU52 = 1;
            StrCopy( ref g_U30257[uParam1]._fU60, "Arnaud1", 16 );
        }
        else if (g_U30257[uParam1]._fU28 == 2)
        {
            g_U30257[uParam1]._fU36 = 1;
            g_U30257[uParam1]._fU40 = {595.69100000, 1645.17300000, 29.30500000};
            g_U30257[uParam1]._fU52 = 1;
            StrCopy( ref g_U30257[uParam1]._fU60, "Arnaud2", 16 );
        }
        break;
        case 14:
        if (g_U30257[uParam1]._fU28 == 1)
        {
            g_U30257[uParam1]._fU36 = 1;
            g_U30257[uParam1]._fU40 = {-483.47000000, 157.61000000, 6.62300000};
            g_U30257[uParam1]._fU52 = 0;
            StrCopy( ref g_U30257[uParam1]._fU60, "Daisy1", 16 );
        }
        break;
        case 15:
        if (g_U30257[uParam1]._fU28 == 1)
        {
            g_U30257[uParam1]._fU36 = 1;
            g_U30257[uParam1]._fU40 = {-442.27420000, 365.23310000, 9.25290000};
            g_U30257[uParam1]._fU52 = 0;
            StrCopy( ref g_U30257[uParam1]._fU60, "Margot1", 16 );
        }
        else if (g_U30257[uParam1]._fU28 == 2)
        {
            g_U30257[uParam1]._fU36 = 1;
            g_U30257[uParam1]._fU40 = {456.33360000, -506.40220000, 16.68020000};
            g_U30257[uParam1]._fU52 = 0;
            StrCopy( ref g_U30257[uParam1]._fU60, "Margot2", 16 );
        }
        break;
    }
    return;
}

int sub_153899(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (IS_PLAYER_PLAYING( sub_8409() ))
    {
        return 1;
    }
    if (HAS_CHAR_GOT_WEAPON( sub_16171(), uParam1 ))
    {
        return 1;
    }
    REQUEST_MODEL( uParam0 );
    if (NOT (HAS_MODEL_LOADED( uParam0 )))
    {
        REQUEST_MODEL( uParam0 );
        return 0;
    }
    GIVE_WEAPON_TO_CHAR( sub_16171(), uParam1, uParam2, 0 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( uParam0 );
    return 1;
}

void sub_154081(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = 3;
    if (iParam1 >= iVar4)
    {
        sub_24711( "Flow_Change_Clothes: Clothes set out of range" );
    }
    iVar5 = iParam1;
    g_U42825[uParam0] = iVar5;
    return;
}

void sub_154232(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    g_U15811[uVar3] = 1;
    return;
}

void sub_154362(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    g_U15811[uVar3] = 0;
    return;
}

void sub_154480(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    return g_U15811[uVar3];
}

void sub_154834(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam0;
    g_U15885[uVar4] = uParam1;
    return;
}

void sub_155011(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (g_U12382[uParam0]._fU20 == -1))
    {
        sub_62201( "Flow_Gosub_Label: Nested GOSUBs are not allowed." );
    }
    g_U12382[uParam0]._fU20 = g_U12382[uParam0]._fU16;
    sub_124934( uParam0, uParam1, uParam2 );
    return;
}

void sub_155172(unknown uParam0)
{
    if (g_U12382[uParam0]._fU20 == -1)
    {
        sub_62201( "Flow_Return_From_Gosub: There is no Sequence to return to." );
    }
    g_U12382[uParam0]._fU16 = g_U12382[uParam0]._fU20;
    g_U12382[uParam0]._fU20 = -1;
    return;
}

int sub_155346()
{
    if ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))
    {
        return 0;
    }
    return 1;
}

void sub_155461(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_155474( uParam0, -1 );
}

int sub_155474(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    int iVar7;

    if (g_U12379)
    {
        return 0;
    }
    if (IS_HELP_MESSAGE_BEING_DISPLAYED())
    {
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U818 ))
    {
        return 0;
    }
    if (sub_91689())
    {
        return 0;
    }
    if (((g_U10953._fU0) || (g_U10953._fU4)) || (IS_AUTO_SAVE_IN_PROGRESS()))
    {
        return 0;
    }
    if (iParam4 == -1)
    {
        PRINT_HELP( ref uParam0 );
        return 1;
    }
    iVar7 = 0;
    GET_GAME_TIMER( ref iVar7 );
    PRINT_HELP_FOREVER( ref uParam0 );
    g_U15999._fU0 = {uParam0};
    g_U15999._fU16 = iVar7 + iParam4;
    return 1;
}

void sub_155834(unknown uParam0)
{
    unknown uVar3;

    g_U12382[uParam0]._fU4 = 1;
    uVar3 = sub_74403( uParam0 );
    sub_139609( uVar3 );
    sub_62409( "****** STRAND DEACTIVATING *******\n" );
    sub_155918( uParam0 );
    g_U16014[uVar3]._fU212._fU0 = 0;
    return;
}

void sub_155918(unknown uParam0)
{
    boolean bVar3;
    unknown uVar4;
    int I;

    if (NOT g_U12382[uParam0]._fU8)
    {
        return;
    }
    if (NOT g_U12382[uParam0]._fU4)
    {
        return;
    }
    bVar3 = false;
    uVar4 = sub_74403( uParam0 );
    if ((g_U14925[uParam0]._fU80._fU0 == 0) || (g_U14925[uParam0]._fU80._fU0 == 1))
    {
        sub_41186( uParam0 );
        g_U20825[uVar4]._fU0 = 0;
    }
    else
    {
        bVar3 = true;
    }
    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        g_U12382[uParam0]._fU148[I]._fU0 = 0;
    }
    if (g_U14925[uParam0]._fU160._fU0)
    {
        if (g_U14925[uParam0]._fU160._fU80)
        {
            if (NOT g_U14925[uParam0]._fU160._fU96)
            {
                sub_156179( uParam0 );
            }
            else
            {
                bVar3 = true;
            }
        }
        else
        {
            bVar3 = true;
        }
    }
    if ((g_U14925[uParam0]._fU0._fU0 == 0) || (g_U14925[uParam0]._fU0._fU0 == 1))
    {
        sub_61450( uParam0 );
    }
    else
    {
        bVar3 = true;
    }
    if (bVar3)
    {
        return;
    }
    g_U12382[uParam0]._fU8 = 0;
    return;
}

void sub_156179(unknown uParam0)
{
    unknown uVar3;

    if (NOT g_U14925[uParam0]._fU160._fU0)
    {
        return;
    }
    if (NOT g_U14925[uParam0]._fU160._fU80)
    {
        g_U14925[uParam0]._fU160._fU0 = 0;
        return;
    }
    uVar3 = sub_74403( uParam0 );
    DESTROY_THREAD( g_U14925[uParam0]._fU160._fU104 );
    g_U14925[uParam0]._fU160._fU108._fU0 = 0;
    sub_3104( uParam0 );
    if (g_U14925[uParam0]._fU160._fU8)
    {
        g_U16014[uVar3]._fU8[0]._fU0[5] = 0;
    }
    return;
}

void sub_156910(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    uVar3 = uParam0;
    uVar4 = {g_U10756[uVar3]._fU4};
    sub_156955( uVar4._fU0, uVar4._fU4, uVar4._fU8, 0.00000000 );
    return;
}

void sub_156955(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (IS_CHAR_DEAD( sub_16171() ))
    {
        return;
    }
    SET_CHAR_COORDINATES( sub_16171(), uParam0, uParam1, uParam2 );
    SET_CHAR_HEADING( sub_16171(), uParam3 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    return;
}

int sub_157380(unknown uParam0, int iParam1)
{
    int iVar4;
    int I;

    if (g_U15976[uParam0]._fU0 == 5)
    {
        return 0;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    if (g_U15976[uParam0]._fU4 < iVar4)
    {
        g_U15976[uParam0]._fU0 = 5;
        g_U15976[uParam0]._fU4 = 0;
        return 0;
    }
    if (g_U12379)
    {
        return 0;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_8409() )))
    {
        return 0;
    }
    if (iParam1 < 8)
    {
        if (g_U20825[iParam1]._fU16)
        {
            return 0;
        }
    }
    if (g_U29760)
    {
        return 0;
    }
    if (((((IS_THREAD_ACTIVE( g_U818 )) || (IS_WANTED_LEVEL_GREATER( sub_8409(), 0 ))) || (NOT IS_SCREEN_FADED_IN())) || (sub_83677())) || (sub_83924()))
    {
        return 0;
    }
    if (IS_BIT_SET( g_U10938._fU0, 4 ))
    {
        return 0;
    }
    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        if (sub_92504( uParam0, I ))
        {
            if (g_U12382[uParam0]._fU148[I]._fU84)
            {
                return 0;
            }
        }
    }
    if (sub_157706( uParam0 ))
    {
        return 0;
    }
    if (NOT g_U16014[iParam1]._fU212._fU0)
    {
        return 0;
    }
    if (g_U22807[iParam1])
    {
        return 0;
    }
    if (sub_92624( iParam1 ))
    {
        return 0;
    }
    if (NOT (sub_158075( uParam0 )))
    {
        return 0;
    }
    g_U15976[uParam0]._fU0 = 5;
    g_U15976[uParam0]._fU4 = 0;
    sub_46107();
    sub_89111( iParam1, 1 );
    g_U12382[uParam0]._fU28 = 1;
    return 1;
}

int sub_157706(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    boolean bVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int iVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    float fVar15;

    if (IS_CHAR_DEAD( sub_16171() ))
    {
        return 1;
    }
    iVar3 = -1;
    iVar4 = 0;
    iVar5 = 0;
    bVar6 = false;
    if (g_U14925[uParam0]._fU0._fU0 == 1)
    {
        iVar3 = g_U14925[uParam0]._fU0._fU4;
        iVar4 = sub_41889( uParam0, iVar3 );
        iVar5 = g_U22960[iVar4]._fU16;
        uVar7 = {g_U10756[iVar5]._fU4};
        bVar6 = true;
    }
    if (NOT bVar6)
    {
        uVar10 = sub_74403( uParam0 );
        iVar11 = g_U20825[uVar10]._fU180;
        if (NOT (iVar11 == 8))
        {
            uVar7 = {g_U10856[iVar11]._fU4};
            bVar6 = true;
        }
    }
    if (NOT bVar6)
    {
        return 0;
    }
    GET_CHAR_COORDINATES( sub_16171(), ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 );
    fVar15 = 0.00000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uVar12._fU0, uVar12._fU4, uVar12._fU8, uVar7._fU0, uVar7._fU4, uVar7._fU8, ref fVar15 );
    if (fVar15 < 200.00000000)
    {
        return 1;
    }
    return 0;
}

int sub_158075(unknown uParam0)
{
    unknown uVar3;

    uVar3 = g_U15976[uParam0]._fU0;
    switch (uVar3)
    {
        case 0: return sub_75012( "E2MF1_CHAT1", "E2MF1AU", 1 );
        case 1: return sub_75012( "E2MF1_CHAT2", "E2MF1AU", 1 );
        case 2: return sub_75012( "E2MF1_RAY6", "E2MF1AU", 1 );
        case 3: return sub_75012( "E2MF1_SHTDO", "E2MF1AU", 1 );
    }
    SCRIPT_ASSERT( "Make_Chat_Phonecall: Chat Phonecall ID doesn't have details set up" );
    return 0;
}

void sub_158480()
{
    int iVar2;
    int iVar3;

    iVar2 = 1;
    iVar3 = 1;
    if (g_U12382[iVar2]._fU0)
    {
        sub_158513();
        g_U12382[iVar2]._fU0 = 0;
        sub_60775( iVar2, 1 );
        return;
    }
    if (NOT g_U12382[iVar2]._fU8)
    {
        return;
    }
    sub_60775( iVar2, 0 );
    sub_73884( iVar2 );
    if (sub_74105( iVar3 ))
    {
        sub_74146( iVar3 );
        return;
    }
    if (sub_85406( iVar2 ))
    {
        return;
    }
    sub_86534( iVar3, iVar2 );
    if (sub_99502( iVar3, iVar2 ))
    {
        return;
    }
    if (sub_99975( iVar3, iVar2 ))
    {
        return;
    }
    sub_121626( iVar3, iVar2, ref g_U37103 );
    return;
}

void sub_158513()
{
    sub_61418( 1, 1 );
    sub_158529();
    sub_159047();
    sub_159067();
    sub_159087();
    PRINTSTRING( "Mori Activated\n" );
    return;
}

void sub_158529()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 32;
    PRINTSTRING( "START: E2 Mori Mission Flow\n" );
    sub_63565( ref g_U37103, ref iVar2, iVar3, 1 );
    sub_63155( ref g_U37103, ref iVar2, iVar3, "E2MF1AU", "E2MF1_MANS1" );
    sub_158646( ref g_U37103, ref iVar2, iVar3 );
    sub_72416( ref g_U37103, ref iVar2, iVar3, 1 );
    sub_63693( ref g_U37103, ref iVar2, iVar3, 0 );
    sub_64382( ref g_U37103, ref iVar2, iVar3, 6 );
    sub_72416( ref g_U37103, ref iVar2, iVar3, 1 );
    sub_63693( ref g_U37103, ref iVar2, iVar3, 1 );
    sub_68088( ref g_U37103, ref iVar2, iVar3, 15000 );
    sub_62581( ref g_U37103, ref iVar2, iVar3, 29 );
    sub_63871( ref g_U37103, ref iVar2, iVar3, 21 );
    sub_68088( ref g_U37103, ref iVar2, iVar3, 20000 );
    sub_72416( ref g_U37103, ref iVar2, iVar3, 1 );
    sub_63693( ref g_U37103, ref iVar2, iVar3, 2 );
    sub_62581( ref g_U37103, ref iVar2, iVar3, 26 );
    sub_72939( ref g_U37103, ref iVar2, iVar3, 2 );
    sub_63155( ref g_U37103, ref iVar2, iVar3, "E2MF1AU", "E2MF1_MANS2" );
    sub_66875( ref g_U37103, ref iVar2, iVar3, 41 );
    sub_73522( ref g_U37103, ref iVar2, iVar3 );
    sub_73611( ref g_U37103, ref iVar2, iVar3 );
    PRINTSTRING( "END: E2 Mori Mission Flow\n" );
    return;
}

void sub_158646(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 19;
    sub_62357( uParam1 );
    sub_62409( "SET: ADD_TO_PHONEBOOK\n" );
    return;
}

void sub_159047()
{
    int iVar2;

    iVar2 = 1;
    return;
}

void sub_159067()
{
    int iVar2;

    iVar2 = 1;
    return;
}

void sub_159087()
{
    int iVar2;

    iVar2 = 1;
    return;
}

void sub_159310()
{
    int iVar2;
    int iVar3;

    iVar2 = 2;
    iVar3 = 2;
    if (g_U12382[iVar2]._fU0)
    {
        sub_159343();
        g_U12382[iVar2]._fU0 = 0;
        sub_60775( iVar2, 1 );
        return;
    }
    if (NOT g_U12382[iVar2]._fU8)
    {
        return;
    }
    sub_60775( iVar2, 0 );
    sub_73884( iVar2 );
    if (sub_74105( iVar3 ))
    {
        sub_74146( iVar3 );
        return;
    }
    if (sub_85406( iVar2 ))
    {
        return;
    }
    sub_86534( iVar3, iVar2 );
    if (sub_99502( iVar3, iVar2 ))
    {
        return;
    }
    if (sub_99975( iVar3, iVar2 ))
    {
        return;
    }
    sub_121626( iVar3, iVar2, ref g_U37744 );
    return;
}

void sub_159343()
{
    sub_61418( 2, 2 );
    sub_159359();
    sub_160555();
    sub_160575();
    sub_160595();
    PRINTSTRING( "Yusuf Activated\n" );
    return;
}

void sub_159359()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 0;
    iVar3 = 41;
    iVar4 = 16;
    PRINTSTRING( "START: E2 Yusuf Amir Mission Flow\n" );
    sub_63565( ref g_U37744, ref iVar2, iVar3, 1 );
    sub_63155( ref g_U37744, ref iVar2, iVar3, "E2MF1AU", "E2MF1_ANSPH" );
    sub_159514( ref g_U37744, ref iVar2, iVar3, "E2MF1_YWOR", "E2MF1AU", 25000, 20000 );
    sub_158646( ref g_U37744, ref iVar2, iVar3 );
    sub_63693( ref g_U37744, ref iVar2, iVar3, 0 );
    sub_72939( ref g_U37744, ref iVar2, iVar3, 3 );
    sub_71674( ref g_U37744, ref iVar2, iVar3, 5, 180000, 300000 );
    sub_64499( ref g_U37744, ref iVar2, iVar3, 3, 50 );
    sub_64382( ref g_U37744, ref iVar2, iVar3, 8 );
    sub_72416( ref g_U37744, ref iVar2, iVar3, 2 );
    sub_63693( ref g_U37744, ref iVar2, iVar3, 1 );
    sub_62581( ref g_U37744, ref iVar2, iVar3, 37 );
    sub_62581( ref g_U37744, ref iVar2, iVar3, 24 );
    sub_62581( ref g_U37744, ref iVar2, iVar3, 65 );
    sub_62581( ref g_U37744, ref iVar2, iVar3, 64 );
    sub_63404( ref g_U37744, ref iVar2, iVar3, 9, 0 );
    sub_72939( ref g_U37744, ref iVar2, iVar3, 6 );
    sub_64713( ref g_U37744, ref iVar2, iVar3, 1, 3, iVar4, 10000 );
    sub_64499( ref g_U37744, ref iVar2, iVar3, 3, 50 );
    sub_72416( ref g_U37744, ref iVar2, iVar3, 2 );
    sub_63693( ref g_U37744, ref iVar2, iVar3, 2 );
    sub_62581( ref g_U37744, ref iVar2, iVar3, 59 );
    sub_64382( ref g_U37744, ref iVar2, iVar3, 9 );
    sub_63565( ref g_U37744, ref iVar2, iVar3, 2 );
    sub_68455( ref g_U37744, ref iVar2, iVar3, "E2MF1_TRY4", "E2MF1AU", 25000, 20000 );
    sub_72416( ref g_U37744, ref iVar2, iVar3, 2 );
    sub_63693( ref g_U37744, ref iVar2, iVar3, 3 );
    sub_72311( ref g_U37744, ref iVar2, iVar3, 5 );
    sub_72939( ref g_U37744, ref iVar2, iVar3, 13 );
    sub_62581( ref g_U37744, ref iVar2, iVar3, 27 );
    sub_62581( ref g_U37744, ref iVar2, iVar3, 42 );
    sub_160202( ref g_U37744, ref iVar2, iVar3, "E2MF1_PHAN", "E2MF1AU", 300000 );
    sub_62581( ref g_U37744, ref iVar2, iVar3, 69 );
    sub_66875( ref g_U37744, ref iVar2, iVar3, 4 );
    sub_68088( ref g_U37744, ref iVar2, iVar3, 120000 );
    sub_160412( ref g_U37744, ref iVar2, iVar3 );
    sub_73611( ref g_U37744, ref iVar2, iVar3 );
    PRINTSTRING( "END: E2 Yusuf Amir Mission Flow\n" );
    return;
}

void sub_159514(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 30;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam3, 16 );
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU56, uParam4, 16 );
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam5;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam6;
    sub_62357( uParam1 );
    sub_62409( "SET: PHONE_PLAYER_REPEAT: [" );
    sub_62409( uParam4 );
    sub_62409( "] " );
    sub_62409( uParam3 );
    sub_63264();
    return;
}

void sub_160202(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 27;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam3, 16 );
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU56, uParam4, 16 );
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam5;
    sub_62357( uParam1 );
    sub_62409( "SET: PHONE_PLAYER: [" );
    sub_62409( uParam4 );
    sub_62409( "] " );
    sub_62409( uParam3 );
    sub_63264();
    return;
}

void sub_160412(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 154;
    sub_62357( uParam1 );
    sub_62409( "SET: KEEP_STRAND_ACTIVE\n" );
    return;
}

void sub_160555()
{
    int iVar2;

    iVar2 = 2;
    return;
}

void sub_160575()
{
    int iVar2;

    iVar2 = 2;
    return;
}

void sub_160595()
{
    int iVar2;

    iVar2 = 2;
    return;
}

void sub_160819()
{
    int iVar2;
    int iVar3;

    iVar2 = 3;
    iVar3 = 3;
    if (g_U12382[iVar2]._fU0)
    {
        sub_160852();
        g_U12382[iVar2]._fU0 = 0;
        sub_60775( iVar2, 1 );
        return;
    }
    if (NOT g_U12382[iVar2]._fU8)
    {
        return;
    }
    sub_60775( iVar2, 0 );
    sub_73884( iVar2 );
    if (sub_74105( iVar3 ))
    {
        sub_74146( iVar3 );
        return;
    }
    if (sub_85406( iVar2 ))
    {
        return;
    }
    sub_86534( iVar3, iVar2 );
    if (sub_99502( iVar3, iVar2 ))
    {
        return;
    }
    if (sub_99975( iVar3, iVar2 ))
    {
        return;
    }
    sub_121626( iVar3, iVar2, ref g_U38565 );
    if (NOT g_U20825[iVar3]._fU8)
    {
        if (g_U15811[32])
        {
            g_U20825[iVar3]._fU8 = 1;
            sub_116745( iVar3 );
        }
    }
    return;
}

void sub_160852()
{
    sub_61418( 3, 3 );
    sub_160868();
    sub_162578();
    sub_163317();
    sub_163746();
    PRINTSTRING( "Dominicans Activated\n" );
    return;
}

void sub_160868()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 0;
    iVar3 = 73;
    iVar4 = 3;
    PRINTSTRING( "START: E2 Dominican Friends Mission Flow\n" );
    sub_63565( ref g_U38565, ref iVar2, iVar3, 1 );
    sub_63155( ref g_U38565, ref iVar2, iVar3, "E2FAAU", "E2FA_LCALL" );
    sub_63297( ref g_U38565, ref iVar2, iVar3, 3 );
    sub_161016( ref g_U38565, ref iVar2, iVar3, iVar4 );
    sub_161124( ref g_U38565, ref iVar2, iVar3, iVar4, 10, 15, 1, 0 );
    sub_72939( ref g_U38565, ref iVar2, iVar3, 0 );
    sub_161302( ref g_U38565, ref iVar2, iVar3 );
    sub_161389( ref g_U38565, ref iVar2, iVar3, 1 );
    sub_161389( ref g_U38565, ref iVar2, iVar3, 2 );
    sub_161389( ref g_U38565, ref iVar2, iVar3, 3 );
    sub_161389( ref g_U38565, ref iVar2, iVar3, 4 );
    sub_161389( ref g_U38565, ref iVar2, iVar3, 5 );
    sub_161389( ref g_U38565, ref iVar2, iVar3, 6 );
    sub_161570( ref g_U38565, ref iVar2, iVar3, 1 );
    sub_161570( ref g_U38565, ref iVar2, iVar3, 2 );
    sub_161570( ref g_U38565, ref iVar2, iVar3, 3 );
    sub_161707( ref g_U38565, ref iVar2, iVar3, 16 );
    sub_161818( ref g_U38565, ref iVar2, iVar3, 240, 80, 11, 4 );
    sub_64382( ref g_U38565, ref iVar2, iVar3, 7 );
    sub_72416( ref g_U38565, ref iVar2, iVar3, 3 );
    sub_72416( ref g_U38565, ref iVar2, iVar3, 7 );
    sub_63693( ref g_U38565, ref iVar2, iVar3, 1 );
    sub_62581( ref g_U38565, ref iVar2, iVar3, 28 );
    sub_62581( ref g_U38565, ref iVar2, iVar3, 63 );
    sub_62581( ref g_U38565, ref iVar2, iVar3, 34 );
    sub_72939( ref g_U38565, ref iVar2, iVar3, 8 );
    sub_68088( ref g_U38565, ref iVar2, iVar3, 30000 );
    sub_64499( ref g_U38565, ref iVar2, iVar3, 1, 50 );
    sub_72416( ref g_U38565, ref iVar2, iVar3, 3 );
    sub_72416( ref g_U38565, ref iVar2, iVar3, 7 );
    sub_63693( ref g_U38565, ref iVar2, iVar3, 0 );
    sub_62581( ref g_U38565, ref iVar2, iVar3, 32 );
    sub_72939( ref g_U38565, ref iVar2, iVar3, 10 );
    sub_72939( ref g_U38565, ref iVar2, iVar3, 12 );
    sub_63404( ref g_U38565, ref iVar2, iVar3, 8, 0 );
    sub_68306( ref g_U38565, ref iVar2, iVar3, 14 );
    sub_161389( ref g_U38565, ref iVar2, iVar3, 0 );
    sub_161570( ref g_U38565, ref iVar2, iVar3, 0 );
    sub_162296( ref g_U38565, ref iVar2, iVar3, 39, "POSTSANTO" );
    sub_71674( ref g_U38565, ref iVar2, iVar3, 7, 180000, 300000 );
    sub_65335( ref g_U38565, ref iVar2, iVar3, "POSTSANTO" );
    sub_160412( ref g_U38565, ref iVar2, iVar3 );
    sub_73611( ref g_U38565, ref iVar2, iVar3 );
    PRINTSTRING( "END: E2 Dominican Friends Mission Flow\n" );
    return;
}

void sub_161016(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 67;
    (uParam0^)[(uParam1^)]._fU4._fU8 = uParam3;
    sub_62357( uParam1 );
    sub_62409( "SET: ADD_SPECIAL_ACTION\n" );
    return;
}

void sub_161124(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 68;
    (uParam0^)[(uParam1^)]._fU4._fU8 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam4;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam5;
    (uParam0^)[(uParam1^)]._fU4._fU28 = uParam6;
    (uParam0^)[(uParam1^)]._fU4._fU32 = uParam7;
    sub_62357( uParam1 );
    sub_62409( "SET: ALLOW_SPECIAL_ACTIONS\n" );
    return;
}

void sub_161302(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 110;
    sub_62357( uParam1 );
    sub_62409( "SET: LIKE_MESSAGES_ON\n" );
    return;
}

void sub_161389(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 83;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_62357( uParam1 );
    sub_62409( "SET: ACTIVATE_PICKUP_POINT\n" );
    return;
}

void sub_161570(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 85;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_62357( uParam1 );
    sub_62409( "SET: ACTIVATE_DROPOFF_POINT\n" );
    return;
}

void sub_161707(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 63;
    (uParam0^)[(uParam1^)]._fU4._fU8 = uParam3;
    sub_62357( uParam1 );
    sub_62409( "SET: ADD_FRIEND_ACTIVITY\n" );
    return;
}

void sub_161818(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 65;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam4;
    (uParam0^)[(uParam1^)]._fU4._fU28 = uParam5;
    (uParam0^)[(uParam1^)]._fU4._fU32 = uParam6;
    sub_62357( uParam1 );
    sub_62409( "SET: ALLOW_FRIEND_ACTIVITIES\n" );
    return;
}

void sub_162296(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 138;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam4, 16 );
    sub_62357( uParam1 );
    sub_62409( "SET: FLAG_CHECK_PASSGOTO (GOTO " );
    sub_62409( uParam4 );
    sub_62409( " ON PASS)" );
    sub_63264();
    return;
}

void sub_162578()
{
    int iVar2;

    iVar2 = 3;
    sub_162594( iVar2, 16, 2 );
    sub_162630( iVar2, 6 );
    sub_162630( iVar2, 11 );
    sub_162630( iVar2, 12 );
    sub_162630( iVar2, 13 );
    sub_162630( iVar2, 15 );
    sub_162630( iVar2, 20 );
    sub_162630( iVar2, 23 );
    sub_162931( iVar2, 6, 8, 7, 4, 3, 10 );
    sub_163142( iVar2, 12, 0, 6, 1 );
    return;
}

void sub_162594(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U20825[uParam0]._fU208[uParam1]._fU0 = uParam2;
    sub_162630( uParam0, uParam1 );
    return;
}

void sub_162630(unknown uParam0, unknown uParam1)
{
    int iVar4;
    unknown uVar5;

    iVar4 = 1;
    switch (uParam0)
    {
        case 3:
        case 7:
        iVar4 = 0;
        break;
        default: return;
    }
    switch (uParam1)
    {
        case 6:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 17:
        case 20:
        case 21:
        case 22:
        case 23: break;
        case 16:
        case 19: return;
    }
    return;
    uVar5 = uParam1;
    SET_BIT( ref g_U43062[iVar4]._fU0, uVar5 );
    return;
}

void sub_162931(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4, unknown uParam5, unknown uParam6)
{
    int iVar9;

    g_U20825[uParam0]._fU104 = uParam1;
    g_U20825[uParam0]._fU108 = uParam2;
    g_U20825[uParam0]._fU136 = uParam5;
    g_U20825[uParam0]._fU160 = uParam6;
    g_U20825[uParam0]._fU124 = iParam3;
    g_U20825[uParam0]._fU128 = iParam3 + iParam4;
    if (g_U20825[uParam0]._fU132 == -1)
    {
        iVar9 = 0;
        GENERATE_RANDOM_INT_IN_RANGE( g_U20825[uParam0]._fU124, g_U20825[uParam0]._fU128, ref iVar9 );
        g_U20825[uParam0]._fU132 = iVar9;
    }
    return;
}

void sub_163142(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    int I;

    I = 0;
    for ( I = 0; I < 2; I++ )
    {
        g_U20825[uParam0]._fU900._fU0[I] = 0;
        g_U20825[uParam0]._fU900._fU12[I] = 0;
    }
    g_U20825[uParam0]._fU900._fU24 = uParam1;
    g_U20825[uParam0]._fU900._fU28 = uParam2;
    g_U20825[uParam0]._fU900._fU32 = uParam3;
    g_U20825[uParam0]._fU900._fU36 = uParam4;
    return;
}

void sub_163317()
{
    int iVar2;
    int iVar3;

    iVar2 = 3;
    iVar3 = 3;
    sub_163355( iVar2, iVar3, 3, "ability_gun_car" );
    sub_163439( iVar2, iVar3 );
    sub_163494( iVar2, iVar3, 0, 4, 0, 1 );
    return;
}

void sub_163355(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    sub_162594( uParam0, iParam1, uParam2 );
    iVar6 = iParam1 - 0;
    StrCopy( ref g_U20825[uParam0]._fU308[iVar6]._fU4, uParam3, 32 );
    g_U20825[uParam0]._fU308[iVar6]._fU0 = 0;
    return;
}

void sub_163439(unknown uParam0, int iParam1)
{
    int iVar4;

    iVar4 = iParam1 - 0;
    g_U20825[uParam0]._fU308[iVar4]._fU36 = 1;
    return;
}

void sub_163494(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, unknown uParam5)
{
    int iVar8;

    if (((iParam2 == 0) AND (iParam3 == 0)) AND (iParam4 == 0))
    {
        return;
    }
    iVar8 = iParam1 - 0;
    g_U20825[uParam0]._fU308[iVar8]._fU40 = 1;
    g_U20825[uParam0]._fU308[iVar8]._fU44 = uParam5;
    g_U20825[uParam0]._fU308[iVar8]._fU48._fU0._fU4 = 0;
    g_U20825[uParam0]._fU308[iVar8]._fU48._fU0._fU0 = iParam2;
    g_U20825[uParam0]._fU308[iVar8]._fU48._fU8._fU0 = iParam3;
    g_U20825[uParam0]._fU308[iVar8]._fU48._fU8._fU4 = iParam4;
    sub_1547( ref g_U20825[uParam0]._fU308[iVar8]._fU64 );
    return;
}

void sub_163746()
{
    int iVar2;

    iVar2 = 3;
    return;
}

void sub_164030()
{
    int iVar2;
    int iVar3;

    iVar2 = 4;
    iVar3 = 4;
    if (g_U12382[iVar2]._fU0)
    {
        sub_164063();
        g_U12382[iVar2]._fU0 = 0;
        sub_60775( iVar2, 1 );
        return;
    }
    if (NOT g_U12382[iVar2]._fU8)
    {
        return;
    }
    sub_60775( iVar2, 0 );
    sub_73884( iVar2 );
    if (sub_74105( iVar3 ))
    {
        sub_74146( iVar3 );
        return;
    }
    if (sub_85406( iVar2 ))
    {
        return;
    }
    sub_86534( iVar3, iVar2 );
    if (sub_99502( iVar3, iVar2 ))
    {
        return;
    }
    if (sub_99975( iVar3, iVar2 ))
    {
        return;
    }
    sub_121626( iVar3, iVar2, ref g_U40026 );
    return;
}

void sub_164063()
{
    sub_61418( 4, 4 );
    sub_164079();
    sub_164436();
    sub_164456();
    sub_164476();
    PRINTSTRING( "Mum Activated\n" );
    return;
}

void sub_164079()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 18;
    PRINTSTRING( "START: E2 Luis Mum Mission Flow\n" );
    sub_63565( ref g_U40026, ref iVar2, iVar3, 1 );
    sub_63155( ref g_U40026, ref iVar2, iVar3, "E2MF1AU", "E2MF1_MANS" );
    sub_63297( ref g_U40026, ref iVar2, iVar3, 4 );
    sub_64076( ref g_U40026, ref iVar2, iVar3, 7 );
    sub_64076( ref g_U40026, ref iVar2, iVar3, 3 );
    sub_64499( ref g_U40026, ref iVar2, iVar3, 4, 20 );
    sub_68088( ref g_U40026, ref iVar2, iVar3, 120000 );
    sub_63693( ref g_U40026, ref iVar2, iVar3, 0 );
    sub_62581( ref g_U40026, ref iVar2, iVar3, 25 );
    sub_63871( ref g_U40026, ref iVar2, iVar3, 10 );
    sub_63404( ref g_U40026, ref iVar2, iVar3, 2, 0 );
    sub_63404( ref g_U40026, ref iVar2, iVar3, 1, 1 );
    sub_72939( ref g_U40026, ref iVar2, iVar3, 7 );
    sub_160412( ref g_U40026, ref iVar2, iVar3 );
    sub_73611( ref g_U40026, ref iVar2, iVar3 );
    PRINTSTRING( "END: E2 Luis Mum Mission Flow\n" );
    return;
}

void sub_164436()
{
    int iVar2;

    iVar2 = 4;
    return;
}

void sub_164456()
{
    int iVar2;

    iVar2 = 4;
    return;
}

void sub_164476()
{
    int iVar2;

    iVar2 = 4;
    return;
}

void sub_164698()
{
    int iVar2;
    int iVar3;

    iVar2 = 5;
    iVar3 = 5;
    if (g_U12382[iVar2]._fU0)
    {
        sub_164731();
        g_U12382[iVar2]._fU0 = 0;
        sub_60775( iVar2, 1 );
        return;
    }
    if (NOT g_U12382[iVar2]._fU8)
    {
        return;
    }
    sub_60775( iVar2, 0 );
    sub_73884( iVar2 );
    if (sub_74105( iVar3 ))
    {
        sub_74146( iVar3 );
        return;
    }
    if (sub_85406( iVar2 ))
    {
        return;
    }
    sub_86534( iVar3, iVar2 );
    if (sub_99502( iVar3, iVar2 ))
    {
        return;
    }
    if (sub_99975( iVar3, iVar2 ))
    {
        return;
    }
    sub_121626( iVar3, iVar2, ref g_U40387 );
    return;
}

void sub_164731()
{
    sub_61418( 5, 5 );
    sub_164747();
    sub_165293();
    sub_165313();
    sub_165333();
    PRINTSTRING( "Bulgarin Activated\n" );
    return;
}

void sub_164747()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 33;
    PRINTSTRING( "START: E2 Bulgarin Mission Flow\n" );
    sub_63565( ref g_U40387, ref iVar2, iVar3, 2 );
    sub_64382( ref g_U40387, ref iVar2, iVar3, 10 );
    sub_68455( ref g_U40387, ref iVar2, iVar3, "E2MF1_RAY1", "E2MF1AU", 10000, 20000 );
    sub_63155( ref g_U40387, ref iVar2, iVar3, "E2MF1AU", "E2MF1_RAY4" );
    sub_158646( ref g_U40387, ref iVar2, iVar3 );
    sub_72416( ref g_U40387, ref iVar2, iVar3, 5 );
    sub_63693( ref g_U40387, ref iVar2, iVar3, 0 );
    sub_73412( ref g_U40387, ref iVar2, iVar3, 5, 2 );
    sub_71674( ref g_U40387, ref iVar2, iVar3, 4, 180000, 300000 );
    sub_62581( ref g_U40387, ref iVar2, iVar3, 62 );
    sub_64499( ref g_U40387, ref iVar2, iVar3, 2, 50 );
    sub_63693( ref g_U40387, ref iVar2, iVar3, 1 );
    sub_72939( ref g_U40387, ref iVar2, iVar3, 9 );
    sub_63404( ref g_U40387, ref iVar2, iVar3, 5, 0 );
    sub_64499( ref g_U40387, ref iVar2, iVar3, 2, 50 );
    sub_63693( ref g_U40387, ref iVar2, iVar3, 2 );
    sub_73095( ref g_U40387, ref iVar2, iVar3, 5, 2 );
    sub_72311( ref g_U40387, ref iVar2, iVar3, 4 );
    sub_72939( ref g_U40387, ref iVar2, iVar3, 4 );
    sub_71674( ref g_U40387, ref iVar2, iVar3, 9, 180000, 300000 );
    sub_73412( ref g_U40387, ref iVar2, iVar3, 2, 3 );
    sub_66875( ref g_U40387, ref iVar2, iVar3, 4 );
    sub_73522( ref g_U40387, ref iVar2, iVar3 );
    sub_73611( ref g_U40387, ref iVar2, iVar3 );
    PRINTSTRING( "END: E2 Bulgarin Mission Flow\n" );
    return;
}

void sub_165293()
{
    int iVar2;

    iVar2 = 5;
    return;
}

void sub_165313()
{
    int iVar2;

    iVar2 = 5;
    return;
}

void sub_165333()
{
    int iVar2;

    iVar2 = 5;
    return;
}

void sub_165560()
{
    int iVar2;
    int iVar3;

    iVar2 = 6;
    iVar3 = 6;
    if (g_U12382[iVar2]._fU0)
    {
        sub_165593();
        g_U12382[iVar2]._fU0 = 0;
        sub_60775( iVar2, 1 );
        return;
    }
    if (NOT g_U12382[iVar2]._fU8)
    {
        return;
    }
    sub_60775( iVar2, 0 );
    sub_73884( iVar2 );
    if (sub_74105( iVar3 ))
    {
        sub_74146( iVar3 );
        return;
    }
    if (sub_85406( iVar2 ))
    {
        return;
    }
    sub_86534( iVar3, iVar2 );
    if (sub_99502( iVar3, iVar2 ))
    {
        return;
    }
    if (sub_99975( iVar3, iVar2 ))
    {
        return;
    }
    sub_121626( iVar3, iVar2, ref g_U41048 );
    return;
}

void sub_165593()
{
    sub_61418( 6, 6 );
    sub_165609();
    sub_166117();
    sub_166137();
    sub_166157();
    PRINTSTRING( "Rocco Activated\n" );
    return;
}

void sub_165609()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 16;
    PRINTSTRING( "START: E2 Rocco Mission Flow\n" );
    sub_63155( ref g_U41048, ref iVar2, iVar3, "E2MF2AU", "E2MF1_RANS" );
    sub_158646( ref g_U41048, ref iVar2, iVar3 );
    sub_64382( ref g_U41048, ref iVar2, iVar3, 12 );
    sub_64382( ref g_U41048, ref iVar2, iVar3, 13 );
    sub_64382( ref g_U41048, ref iVar2, iVar3, 11 );
    sub_63565( ref g_U41048, ref iVar2, iVar3, 3 );
    sub_68455( ref g_U41048, ref iVar2, iVar3, "E2MF1_RCAL2", "E2MF2AU", 25000, 20000 );
    sub_72416( ref g_U41048, ref iVar2, iVar3, 0 );
    sub_63693( ref g_U41048, ref iVar2, iVar3, 0 );
    sub_72939( ref g_U41048, ref iVar2, iVar3, 5 );
    sub_66875( ref g_U41048, ref iVar2, iVar3, 4 );
    sub_63155( ref g_U41048, ref iVar2, iVar3, "E2MF2AU", "E2MF1_RANS2" );
    sub_165928( ref g_U41048, ref iVar2, iVar3, 5760 );
    sub_73522( ref g_U41048, ref iVar2, iVar3 );
    sub_73611( ref g_U41048, ref iVar2, iVar3 );
    PRINTSTRING( "END: E2 Rocco Mission Flow\n" );
    return;
}

void sub_165928(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 125;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_62357( uParam1 );
    sub_62409( "SET: GAMETIME MINS DELAY (" );
    sub_63655( uParam3 );
    sub_62409( ")" );
    sub_63264();
    return;
}

void sub_166117()
{
    int iVar2;

    iVar2 = 6;
    return;
}

void sub_166137()
{
    int iVar2;

    iVar2 = 6;
    return;
}

void sub_166157()
{
    int iVar2;

    iVar2 = 6;
    return;
}

void sub_166381()
{
    int iVar2;
    int iVar3;

    iVar2 = 7;
    iVar3 = 7;
    if (g_U12382[iVar2]._fU0)
    {
        sub_166414();
        g_U12382[iVar2]._fU0 = 0;
        sub_60775( iVar2, 1 );
        return;
    }
    if (NOT g_U12382[iVar2]._fU8)
    {
        return;
    }
    sub_60775( iVar2, 0 );
    sub_73884( iVar2 );
    if (sub_74105( iVar3 ))
    {
        sub_74146( iVar3 );
        return;
    }
    if (sub_85406( iVar2 ))
    {
        return;
    }
    sub_86534( iVar3, iVar2 );
    if (sub_99502( iVar3, iVar2 ))
    {
        return;
    }
    if (sub_99975( iVar3, iVar2 ))
    {
        return;
    }
    sub_121626( iVar3, iVar2, ref g_U41369 );
    return;
}

void sub_166414()
{
    sub_61418( 7, 7 );
    sub_166430();
    sub_167052();
    sub_167105();
    sub_167178();
    PRINTSTRING( "Henrique Activated\n" );
    return;
}

void sub_166430()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 0;
    iVar3 = 64;
    iVar4 = 4;
    PRINTSTRING( "START: E2 Henrique Mission Flow\n" );
    sub_63565( ref g_U41369, ref iVar2, iVar3, 1 );
    sub_63155( ref g_U41369, ref iVar2, iVar3, "E2FHAU", "E2FH_LCALL" );
    sub_63297( ref g_U41369, ref iVar2, iVar3, 7 );
    sub_161016( ref g_U41369, ref iVar2, iVar3, iVar4 );
    sub_161124( ref g_U41369, ref iVar2, iVar3, iVar4, 10, 10, 1, 0 );
    sub_72939( ref g_U41369, ref iVar2, iVar3, 1 );
    sub_161302( ref g_U41369, ref iVar2, iVar3 );
    sub_161389( ref g_U41369, ref iVar2, iVar3, 1 );
    sub_161389( ref g_U41369, ref iVar2, iVar3, 2 );
    sub_161389( ref g_U41369, ref iVar2, iVar3, 3 );
    sub_161389( ref g_U41369, ref iVar2, iVar3, 4 );
    sub_161389( ref g_U41369, ref iVar2, iVar3, 5 );
    sub_161389( ref g_U41369, ref iVar2, iVar3, 6 );
    sub_161570( ref g_U41369, ref iVar2, iVar3, 1 );
    sub_161570( ref g_U41369, ref iVar2, iVar3, 2 );
    sub_161570( ref g_U41369, ref iVar2, iVar3, 3 );
    sub_66875( ref g_U41369, ref iVar2, iVar3, 32 );
    sub_166784( ref g_U41369, ref iVar2, iVar3 );
    sub_161707( ref g_U41369, ref iVar2, iVar3, 16 );
    sub_161818( ref g_U41369, ref iVar2, iVar3, 300, 100, 1, 4 );
    sub_66875( ref g_U41369, ref iVar2, iVar3, 26 );
    sub_64713( ref g_U41369, ref iVar2, iVar3, 4, 7, 11, 10000 );
    sub_66875( ref g_U41369, ref iVar2, iVar3, 4 );
    sub_64713( ref g_U41369, ref iVar2, iVar3, 5, 7, 12, 10000 );
    sub_160412( ref g_U41369, ref iVar2, iVar3 );
    sub_73611( ref g_U41369, ref iVar2, iVar3 );
    PRINTSTRING( "END: E2 Henrique Mission Flow\n" );
    return;
}

void sub_166784(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_62113( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 61;
    sub_62357( uParam1 );
    sub_62409( "SET: IGNORE_FRIEND_INTRO_CALL\n" );
    return;
}

void sub_167052()
{
    int iVar2;

    iVar2 = 7;
    sub_162594( iVar2, 16, 0 );
    sub_162931( iVar2, 7, 9, 5, 4, 9, 10 );
    sub_163142( iVar2, 12, 0, 6, 1 );
    return;
}

void sub_167105()
{
    int iVar2;
    int iVar3;

    iVar2 = 7;
    iVar3 = 4;
    sub_163355( iVar2, iVar3, 1, "ability_vehicle" );
    sub_163439( iVar2, iVar3 );
    sub_163494( iVar2, iVar3, 0, 4, 0, 0 );
    return;
}

void sub_167178()
{
    int iVar2;

    iVar2 = 7;
    return;
}

void sub_167405()
{
    int iVar2;
    int iVar3;

    iVar2 = 8;
    iVar3 = 9;
    if (g_U12382[iVar2]._fU0)
    {
        sub_167438();
        g_U12382[iVar2]._fU0 = 0;
        sub_60775( iVar2, 1 );
        return;
    }
    if (NOT g_U12382[iVar2]._fU8)
    {
        return;
    }
    sub_60775( iVar2, 0 );
    sub_73884( iVar2 );
    if (sub_74105( iVar3 ))
    {
        sub_74146( iVar3 );
        return;
    }
    if (sub_85406( iVar2 ))
    {
        return;
    }
    sub_86534( iVar3, iVar2 );
    if (sub_99502( iVar3, iVar2 ))
    {
        return;
    }
    if (sub_99975( iVar3, iVar2 ))
    {
        return;
    }
    sub_121626( iVar3, iVar2, ref g_U42650 );
    return;
}

void sub_167438()
{
    sub_61418( 8, 9 );
    sub_167454();
    sub_167575();
    sub_167595();
    sub_167615();
    PRINTSTRING( "Reserve_1 Activated\n" );
    return;
}

void sub_167454()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 4;
    PRINTSTRING( "START: E2 Reserve 1 Mission Flow\n" );
    sub_73611( ref g_U42650, ref iVar2, iVar3 );
    PRINTSTRING( "END: E2 Reserve 1 Mission Flow\n" );
    return;
}

void sub_167575()
{
    int iVar2;

    iVar2 = 9;
    return;
}

void sub_167595()
{
    int iVar2;

    iVar2 = 9;
    return;
}

void sub_167615()
{
    int iVar2;

    iVar2 = 9;
    return;
}

void sub_167920()
{
    int iVar2;
    int I;
    unknown uVar4;
    unknown uVar5;
    int iVar6;

    sub_167929();
    iVar6 = 1;
    for ( I = 0; I < 11; I++ )
    {
        sub_155918( I );
        sub_168471( I );
        sub_170309( I );
        iVar2 = g_U14925[I]._fU80._fU0;
        iVar6 = 1;
        if (iVar2 == 0)
        {
            iVar2 = g_U14925[I]._fU0._fU0;
            iVar6 = 0;
        }
        switch (iVar2)
        {
            case 0:
            sub_170813( I );
            break;
            case 1:
            sub_172725( I, iVar6 );
            break;
            case 2:
            uVar4 = sub_41889( I, g_U14925[I]._fU0._fU4 );
            uVar5 = g_U22960[uVar4]._fU16;
            sub_177574( I, uVar5, iVar6 );
            if (l_U10 == 2)
            {
                g_U14925[I]._fU0._fU0 = 3;
                l_U10 = 0;
                CLEAR_HELP();
                SET_CHAR_COMPONENT_VARIATION( sub_16171(), 3, 0, 0 );
            }
            break;
            case 3:
            sub_179291( I, iVar6 );
            break;
            case 4:
            sub_181154( I, iVar6 );
            break;
            case 5:
            sub_43793( I, iVar6 );
            break;
            case 6:
            sub_43580( I, iVar6 );
            break;
            default:
            sub_24711( "Main_Missions: Maintain_Missions(): Unknown Mission Status ID" );
            return;
        }
    }
    return;
}

void sub_167929()
{
    if (g_U28805._fU4 == g_U28805._fU0)
    {
        return;
    }
    g_U28805._fU0 = g_U28805._fU4;
    if (NOT g_U28805._fU0)
    {
        sub_167988();
        return;
    }
    sub_168215();
    return;
}

void sub_167988()
{
    int I;

    I = 0;
    for ( I = 0; I < 11; I++ )
    {
        if (DOES_BLIP_EXIST( g_U14925[I]._fU0._fU64 ))
        {
            CHANGE_BLIP_DISPLAY( g_U14925[I]._fU0._fU64, 0 );
        }
        if (DOES_BLIP_EXIST( g_U14925[I]._fU80._fU64 ))
        {
            CHANGE_BLIP_DISPLAY( g_U14925[I]._fU80._fU64, 0 );
        }
    }
    for ( I = 0; I < 1; I++ )
    {
        if (DOES_BLIP_EXIST( g_U10984[I]._fU32 ))
        {
            CHANGE_BLIP_DISPLAY( g_U10984[I]._fU32, 0 );
        }
    }
    return;
}

void sub_168215()
{
    int I;

    I = 0;
    for ( I = 0; I < 11; I++ )
    {
        if (DOES_BLIP_EXIST( g_U14925[I]._fU0._fU64 ))
        {
            CHANGE_BLIP_DISPLAY( g_U14925[I]._fU0._fU64, 2 );
        }
        if (DOES_BLIP_EXIST( g_U14925[I]._fU80._fU64 ))
        {
            CHANGE_BLIP_DISPLAY( g_U14925[I]._fU80._fU64, 2 );
        }
    }
    for ( I = 0; I < 1; I++ )
    {
        if (DOES_BLIP_EXIST( g_U10984[I]._fU32 ))
        {
            CHANGE_BLIP_DISPLAY( g_U10984[I]._fU32, 2 );
        }
    }
    return;
}

void sub_168471(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;

    if (NOT g_U14925[uParam0]._fU160._fU0)
    {
        return;
    }
    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (NOT g_U14925[uParam0]._fU160._fU80)
    {
        REQUEST_SCRIPT( ref g_U14925[uParam0]._fU160._fU12 );
        if (NOT (HAS_SCRIPT_LOADED( ref g_U14925[uParam0]._fU160._fU12 )))
        {
            REQUEST_SCRIPT( ref g_U14925[uParam0]._fU160._fU12 );
            return;
        }
        g_U14925[uParam0]._fU160._fU80 = 1;
        g_U14925[uParam0]._fU160._fU104 = START_NEW_SCRIPT( ref g_U14925[uParam0]._fU160._fU12, 1536 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U14925[uParam0]._fU160._fU12 );
        if (g_U16013 < 0)
        {
            g_U16013 = iVar3 + 10800000;
        }
        return;
    }
    if (NOT (IS_THREAD_ACTIVE( g_U14925[uParam0]._fU160._fU104 )))
    {
        if (NOT g_U14925[uParam0]._fU160._fU92)
        {
            if (NOT (g_U14925[uParam0]._fU160._fU88 == -1))
            {
                g_U14925[uParam0]._fU160._fU84 = g_U14925[uParam0]._fU160._fU88;
                return;
            }
        }
        g_U12382[uParam0]._fU24 = -1;
        sub_3104( uParam0 );
        g_U14925[uParam0]._fU160._fU108._fU20 = -1;
        return;
    }
    if (g_U14925[uParam0]._fU160._fU108._fU20 == 0)
    {
        if (NOT (g_U14925[uParam0]._fU160._fU108._fU16 == 0))
        {
            g_U14925[uParam0]._fU160._fU108._fU20 = iVar3 + g_U14925[uParam0]._fU160._fU108._fU16;
        }
        return;
    }
    if (g_U15811[4])
    {
        return;
    }
    if (g_U14925[uParam0]._fU160._fU96)
    {
        sub_169057( 180000 );
        g_U14925[uParam0]._fU160._fU108._fU20 = iVar3 + g_U14925[uParam0]._fU160._fU108._fU16;
        return;
    }
    if (g_U12379)
    {
        sub_169057( 180000 );
        return;
    }
    iVar4 = 0;
    iVar5 = 0;
    if (g_U16013 < iVar3)
    {
        iVar5 = sub_169202();
        if (iVar5 <= 1)
        {
            iVar4 = sub_169291();
            if (iVar4 == -1)
            {
                sub_169057( 180000 );
            }
            else
            {
                sub_169504( iVar4 );
                g_U16013 = iVar3 + 10800000;
                g_U14925[iVar4]._fU160._fU108._fU20 = iVar3 + g_U14925[iVar4]._fU160._fU108._fU16;
                sub_169919( iVar4 );
            }
        }
        else
        {
            sub_169057( 3600000 );
        }
        return;
    }
    if (g_U14925[uParam0]._fU160._fU108._fU20 < iVar3)
    {
        if (g_U14925[uParam0]._fU160._fU108._fU0)
        {
            sub_169504( uParam0 );
            g_U14925[uParam0]._fU160._fU108._fU20 = iVar3 + g_U14925[uParam0]._fU160._fU108._fU16;
            sub_169919( uParam0 );
            sub_169057( 300000 );
        }
        else
        {
            g_U14925[uParam0]._fU160._fU108._fU20 = iVar3 + 300000;
        }
        return;
    }
    return;
}

void sub_169057(int iParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    iVar4 = iVar3 + iParam0;
    if (iVar4 > g_U16013)
    {
        g_U16013 = iVar4;
    }
    return;
}

void sub_169202()
{
    int Result;
    int I;

    Result = 0;
    I = 0;
    for ( I = 0; I < 14; I++ )
    {
        if (IS_BIT_SET( g_U10756[I]._fU0, 3 ))
        {
            Result++;
        }
    }
    return Result;
}

void sub_169291()
{
    int I;
    int iVar3;
    int Result;
    int iVar5;
    int iVar6;

    I = 0;
    iVar3 = 2147483647;
    Result = -1;
    iVar5 = 0;
    iVar6 = 0;
    GET_GAME_TIMER( ref iVar6 );
    for ( I = 0; I < 11; I++ )
    {
        if (g_U14925[I]._fU160._fU0)
        {
            if (g_U14925[I]._fU160._fU80)
            {
                if (g_U14925[I]._fU160._fU108._fU0)
                {
                    iVar5 = g_U14925[I]._fU160._fU108._fU20 - iVar6;
                    if (iVar5 < iVar3)
                    {
                        iVar3 = iVar5;
                        Result = I;
                    }
                }
            }
        }
    }
    return Result;
}

void sub_169504(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    int iVar6;

    if (NOT g_U14925[uParam0]._fU160._fU0)
    {
        return;
    }
    if (NOT g_U14925[uParam0]._fU160._fU80)
    {
        return;
    }
    if (g_U14925[uParam0]._fU160._fU108._fU16 == 0)
    {
        SCRIPT_ASSERT( "Send_Proc_Reminder: defaultTime for Proc Reminder is 0. Need to set up Proc reminder details using mission flow command" );
        return;
    }
    if (NOT g_U14925[uParam0]._fU160._fU108._fU0)
    {
        return;
    }
    uVar3 = g_U14925[uParam0]._fU160._fU108._fU4;
    uVar4 = g_U14925[uParam0]._fU160._fU108._fU8;
    uVar5 = g_U14925[uParam0]._fU160._fU108._fU12;
    iVar6 = 5000;
    sub_80334( uVar3 );
    sub_80440( uVar3, uVar4, uVar5, iVar6 );
    return;
}

void sub_169919(int iParam0)
{
    int I;
    int iVar4;
    int iVar5;

    I = 0;
    iVar4 = 0;
    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    for ( I = 0; I < 11; I++ )
    {
        if (NOT (I == iParam0))
        {
            if (g_U14925[I]._fU160._fU0)
            {
                if (g_U14925[I]._fU160._fU80)
                {
                    iVar4 = g_U14925[I]._fU160._fU108._fU20 - iVar5;
                    if (iVar4 < 300000)
                    {
                        g_U14925[I]._fU160._fU108._fU20 += 300000;
                    }
                }
            }
        }
    }
    return;
}

void sub_170309(unknown uParam0)
{
    int iVar3;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (DOES_BLIP_EXIST( g_U14925[uParam0]._fU80._fU64 ))
    {
        if (NOT (g_U14925[uParam0]._fU80._fU76 == 0))
        {
            if (g_U14925[uParam0]._fU80._fU76 < iVar3)
            {
                FLASH_BLIP( g_U14925[uParam0]._fU80._fU64, 0 );
                CHANGE_BLIP_PRIORITY( g_U14925[uParam0]._fU80._fU64, l_U7 );
                g_U14925[uParam0]._fU80._fU76 = 0;
            }
        }
    }
    else
    {
        g_U14925[uParam0]._fU80._fU76 = 0;
    }
    if (DOES_BLIP_EXIST( g_U14925[uParam0]._fU0._fU64 ))
    {
        if (NOT (g_U14925[uParam0]._fU0._fU76 == 0))
        {
            if (g_U14925[uParam0]._fU0._fU76 < iVar3)
            {
                FLASH_BLIP( g_U14925[uParam0]._fU0._fU64, 0 );
                CHANGE_BLIP_PRIORITY( g_U14925[uParam0]._fU0._fU64, l_U7 );
                g_U14925[uParam0]._fU0._fU76 = 0;
            }
        }
    }
    else
    {
        g_U14925[uParam0]._fU0._fU76 = 0;
    }
    return;
}

void sub_170813(int iParam0)
{
    if (iParam0 != 9)
    {
        return;
    }
    sub_44230();
    if (g_U14925[iParam0]._fU0._fU0 != 0)
    {
        return;
    }
    sub_170864();
    return;
}

void sub_170864()
{
    int iVar2;
    boolean bVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (g_U16004._fU16)
    {
        if (sub_170896())
        {
            if (NOT (IS_PLAYER_PLAYING( sub_8409() )))
            {
                g_U16004._fU16 = 0;
                return;
            }
            if (NOT (IS_PLAYER_CONTROL_ON( sub_8409() )))
            {
                g_U16004._fU16 = 0;
                return;
            }
            if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_16171() )))
            {
                g_U16004._fU16 = 0;
                g_U16004._fU8 = 0;
                return;
            }
            if (((IS_SCREEN_FADED_OUT()) || (IS_SCREEN_FADING_OUT())) || (IS_SCREEN_FADING_IN()))
            {
                g_U16004._fU16 = 0;
                return;
            }
            if (NOT (IS_CHAR_DEAD( sub_16171() )))
            {
                if (IS_CHAR_SHOOTING( sub_16171() ))
                {
                    g_U16004._fU16 = 0;
                }
            }
            if (iVar2 > g_U16004._fU28)
            {
                g_U16004._fU20 = 1;
            }
            return;
        }
        bVar3 = g_U16004._fU20;
        g_U16004._fU16 = 0;
        g_U16004._fU20 = 0;
        g_U16004._fU28 = 0;
        if (bVar3)
        {
            return;
        }
        if (IS_BUTTON_PRESSED( 0, 15 ))
        {
            return;
        }
        if (NOT (IS_CHAR_DEAD( sub_16171() )))
        {
            if (IS_CHAR_SHOOTING( sub_16171() ))
            {
                return;
            }
        }
        if (g_U16004._fU4)
        {
            sub_171277();
            g_U16004._fU4 = 0;
        }
        if (sub_171364())
        {
            REQUEST_SCRIPT( ref g_U14925[9]._fU0._fU24 );
            g_U14925[9]._fU0._fU0 = 3;
            g_U8778 = 0;
        }
        return;
    }
    if (NOT sub_170896())
    {
        g_U16004._fU20 = 0;
        g_U16004._fU28 = 0;
    }
    if (NOT g_U16004._fU8)
    {
        g_U16004._fU24 = -1;
    }
    g_U16004._fU0 = 0;
    if (NOT (IS_PLAYER_PLAYING( sub_8409() )))
    {
        g_U16004._fU0 = 1;
    }
    else if (NOT (IS_PLAYER_CONTROL_ON( sub_8409() )))
    {
        g_U16004._fU0 = 1;
    }
    if (((IS_SCREEN_FADED_OUT()) || (IS_SCREEN_FADING_OUT())) || (IS_SCREEN_FADING_IN()))
    {
        g_U16004._fU0 = 1;
    }
    if (NOT g_U16004._fU0)
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_16171() )))
        {
            g_U16004._fU0 = 1;
            g_U16004._fU8 = 0;
        }
    }
    if (NOT g_U16004._fU0)
    {
        if (g_U16004._fU4)
        {
            if (NOT (sub_171490( g_U16004._fU24 )))
            {
                g_U16004._fU0 = 1;
            }
        }
    }
    if (g_U16004._fU0)
    {
        if (g_U16004._fU4)
        {
            sub_171277();
            g_U16004._fU4 = 0;
        }
        return;
    }
    if (NOT g_U16004._fU8)
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_16171() ))
        {
            g_U16004._fU12 = 0;
            sub_172319();
            if (g_U16004._fU12)
            {
                g_U16004._fU8 = 1;
                g_U16004._fU4 = 1;
            }
            else
            {
                return;
            }
        }
        else
        {
            return;
        }
    }
    if (NOT (IS_CHAR_DEAD( sub_16171() )))
    {
        if (NOT (IS_CHAR_SHOOTING( sub_16171() )))
        {
            if (((NOT IS_SCREEN_FADED_OUT()) AND (NOT IS_SCREEN_FADING_OUT())) AND (NOT IS_SCREEN_FADING_IN()))
            {
                if (sub_172596())
                {
                    if (NOT (IS_BUTTON_PRESSED( 0, 15 )))
                    {
                        g_U16004._fU16 = 1;
                        g_U16004._fU28 = iVar2 + 200;
                    }
                }
            }
        }
    }
    return;
}

int sub_170896()
{
    if (((IS_USING_CONTROLLER()) AND (IS_BUTTON_PRESSED( 0, 4 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 23 ))))
    {
        return 1;
    }
    return 0;
}

void sub_171277()
{
    int I;

    I = 0;
    for ( I = 0; I < g_U28733; I++ )
    {
        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref g_U28585[I]._fU4 ))
        {
            CLEAR_HELP();
            return;
        }
    }
    return;
}

int sub_171364()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 0;
    if (NOT (IS_PLAYER_PLAYING( sub_8409() )))
    {
        return 0;
    }
    for ( I = 0; I < g_U28733; I++ )
    {
        iVar3 = g_U28585[I]._fU36;
        if (IS_CHAR_IN_MODEL( sub_16171(), iVar3 ))
        {
            if (sub_171453( I ))
            {
                g_U14925[9]._fU0._fU24 = {g_U28585[I]._fU40};
                return 1;
            }
            return 0;
        }
    }
    return 0;
}

int sub_171453(unknown uParam0)
{
    if (NOT (IS_VEH_DRIVEABLE( g_U16004._fU32 )))
    {
        return 0;
    }
    if (NOT (sub_171490( uParam0 )))
    {
        return 0;
    }
    if (sub_171830())
    {
        sub_7795();
    }
    else
    {
        return 0;
    }
    return 1;
}

int sub_171490(unknown uParam0)
{
    float fVar3;
    float fVar4;

    if (NOT g_U10568)
    {
        return 0;
    }
    if (g_U28585[uParam0]._fU72)
    {
        if (g_U12379)
        {
            PRINT_NOW( "R3_NMIS", 5000, 1 );
            return 0;
        }
        CLEAR_THIS_PRINT( "R3_NMIS" );
    }
    if (NOT (IS_VEH_DRIVEABLE( g_U16004._fU32 )))
    {
        return 0;
    }
    if (NOT ((GET_ENGINE_HEALTH( g_U16004._fU32 )) > 0.00000000))
    {
        return 0;
    }
    if (g_U28585[uParam0]._fU80)
    {
        GET_CAR_UPRIGHT_VALUE( g_U16004._fU32, ref fVar3 );
        if ((fVar3 < 0.95000000) || (fVar3 > 1.01100000))
        {
            return 0;
        }
    }
    if (NOT (IS_VEHICLE_ON_ALL_WHEELS( g_U16004._fU32 )))
    {
        return 0;
    }
    if (g_U28585[uParam0]._fU76)
    {
        GET_CAR_SPEED( g_U16004._fU32, ref fVar4 );
        if (fVar4 > 0.40000000)
        {
            return 0;
        }
    }
    if (g_U10935 == 1)
    {
        return 0;
    }
    if (g_U29760)
    {
        return 0;
    }
    return 1;
}

void sub_171830()
{
    return sub_7806( 0, 0 );
}

void sub_172319()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 0;
    for ( I = 0; I < g_U28733; I++ )
    {
        iVar3 = g_U28585[I]._fU36;
        if (IS_CHAR_IN_MODEL( sub_16171(), iVar3 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_16171(), ref g_U16004._fU32 );
            if (sub_171490( I ))
            {
                if (NOT g_U16004._fU8)
                {
                    PRINT_HELP( ref g_U28585[I]._fU4 );
                }
                g_U16004._fU12 = 1;
                g_U16004._fU24 = I;
            }
            return;
        }
    }
    return;
}

int sub_172596()
{
    if (((IS_USING_CONTROLLER()) AND (IS_BUTTON_JUST_PRESSED( 0, 4 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 23 ))))
    {
        return 1;
    }
    return 0;
}

void sub_172725(int iParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    boolean bVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;
    boolean bVar10;

    sub_172738( iParam0, bParam1 );
    if (NOT (IS_PLAYER_PLAYING( sub_8409() )))
    {
        return;
    }
    if (g_U12379)
    {
        return;
    }
    if (bParam1)
    {
        iVar4 = g_U14925[iParam0]._fU80._fU56;
    }
    else
    {
        iVar4 = g_U14925[iParam0]._fU0._fU56;
    }
    if (iVar4 == 0)
    {
        iVar5 = -1;
        bVar6 = true;
        if (bParam1)
        {
            iVar5 = g_U14925[iParam0]._fU80._fU4;
            bVar6 = g_U14925[iParam0]._fU80._fU72;
        }
        else
        {
            iVar5 = g_U14925[iParam0]._fU0._fU4;
            bVar6 = g_U14925[iParam0]._fU0._fU72;
        }
        if (bVar6)
        {
            uVar7 = sub_41889( iParam0, iVar5 );
            uVar8 = g_U22960[uVar7]._fU16;
            fVar9 = g_U10756[uVar8]._fU4._fU8 + 2.00000000;
            LOCATE_CHAR_ON_FOOT_3D( sub_16171(), g_U10756[uVar8]._fU4._fU0, g_U10756[uVar8]._fU4._fU4, fVar9, 1.60000000, 1.60000000, 2.00000000, 1 );
        }
    }
    if (g_U12381)
    {
        return;
    }
    if ((sub_83873()) || (sub_83924()))
    {
        return;
    }
    if (NOT g_U22957)
    {
        return;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_8409() )))
    {
        return;
    }
    if ((g_U10953._fU0) || (IS_AUTO_SAVE_IN_PROGRESS()))
    {
        return;
    }
    bVar10 = false;
    switch (iVar4)
    {
        case 0:
        bVar10 = sub_173238( iParam0, bParam1 );
        break;
        case 1:
        case 2:
        case 4: if (NOT bParam1)
        {
            g_U12382[iParam0]._fU28 = 1;
            if ((iParam0 == 3) || (iParam0 == 7))
            {
                g_U12382[3]._fU28 = 1;
                g_U12382[7]._fU28 = 1;
            }
        }
        case 3:
        case 7:
        case 5:
        case 6:
        if (iVar4 == 2)
        {
            bVar10 = sub_175795( iParam0, bParam1, iVar4, 1 );
        }
        else
        {
            bVar10 = sub_175795( iParam0, bParam1, iVar4, 0 );
        }
        break;
        case 8:
        bVar10 = sub_173238( iParam0, bParam1 );
        break;
        default: sub_24711( "Main_Missions: Check_For_Mission_Start(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        switch (iVar4)
        {
            case 0:
            case 1:
            case 2:
            case 4:
            case 3:
            case 7:
            if (IS_BIT_SET( g_U10938._fU0, 4 ))
            {
                sub_176865();
            }
            sub_45385();
            break;
        }
        switch (iVar4)
        {
            case 0:
            case 1:
            case 2:
            if (NOT bParam1)
            {
                g_U10938._fU4 = iParam0;
                g_U10938._fU8 = g_U14925[iParam0]._fU0._fU4;
                g_U10938._fU16 = {g_U14925[iParam0]._fU0._fU8};
                sub_89815( ref g_U10938._fU32 );
            }
            break;
        }
        switch (iVar4)
        {
            case 0:
            case 1:
            case 2:
            if (NOT bParam1)
            {
                sub_93013();
            }
            break;
        }
        switch (iVar4)
        {
            case 0:
            case 1:
            case 2:
            if (NOT bParam1)
            {
                sub_177122( iParam0 );
            }
            break;
        }
    }
    return;
}

void sub_172738(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_173238(int iParam0, boolean bParam1)
{
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    boolean bVar7;
    int iVar8;
    boolean bVar9;

    if (NOT sub_173247())
    {
        return 0;
    }
    iVar4 = -1;
    if (bParam1)
    {
        iVar4 = g_U14925[iParam0]._fU80._fU4;
    }
    else
    {
        iVar4 = g_U14925[iParam0]._fU0._fU4;
    }
    uVar5 = sub_41889( iParam0, iVar4 );
    uVar6 = g_U22960[uVar5]._fU16;
    bVar7 = false;
    if (IS_BIT_SET( g_U10756[uVar6]._fU0, 1 ))
    {
        if ((LOCATE_CHAR_ON_FOOT_3D( sub_16171(), g_U10756[uVar6]._fU4._fU0, g_U10756[uVar6]._fU4._fU4, g_U10756[uVar6]._fU4._fU8, 1.60000000, 1.60000000, 2.00000000, 0 )) || (sub_173476( iParam0, uVar6 )))
        {
            bVar7 = true;
        }
    }
    iVar8 = 0;
    if (NOT bVar7)
    {
        if (IS_BIT_SET( g_U10756[uVar6]._fU0, 2 ))
        {
            if ((LOCATE_CHAR_IN_CAR_3D( sub_16171(), g_U10756[uVar6]._fU4._fU0, g_U10756[uVar6]._fU4._fU4, g_U10756[uVar6]._fU4._fU8, 2.50000000, 2.50000000, 2.00000000, 0 )) || (sub_173476( iParam0, uVar6 )))
            {
                bVar7 = true;
            }
        }
    }
    if (NOT bVar7)
    {
        return 0;
    }
    bVar9 = false;
    if (IS_BIT_SET( g_U10938._fU0, 4 ))
    {
        if (g_U10938._fU4 == iParam0)
        {
            if (NOT (IS_BIT_SET( g_U10938._fU0, 6 )))
            {
                return 0;
            }
            bVar9 = true;
        }
    }
    if (NOT bVar9)
    {
        if (NOT (IS_PLAYER_PLAYING( sub_8409() )))
        {
            return 0;
        }
    }
    if ((NOT bParam1) AND (NOT bVar9))
    {
        if (NOT (sub_173986( 1, 1 )))
        {
            return 0;
        }
    }
    if (NOT bVar9)
    {
        SET_BIT( ref g_U10938._fU0, 7 );
    }
    else
    {
        CLEAR_BIT( ref g_U10938._fU0, 7 );
    }
    if (IS_BIT_SET( g_U22960[uVar5]._fU108, 1 ))
    {
        if (NOT (sub_108699( g_U22960[uVar5]._fU68, g_U22960[uVar5]._fU76 )))
        {
            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref g_U22960[uVar5]._fU84 )))
            {
                PRINT_HELP( ref g_U22960[uVar5]._fU84 );
            }
            return 0;
        }
        else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref g_U22960[uVar5]._fU84 ))
        {
            CLEAR_HELP();
        }
    }
    if (NOT bVar9)
    {
        if (NOT (sub_174483( iParam0 )))
        {
            return 0;
        }
    }
    if (bParam1)
    {
        REQUEST_SCRIPT( ref g_U14925[iParam0]._fU80._fU24 );
        g_U14925[iParam0]._fU80._fU0 = 3;
    }
    else
    {
        REQUEST_SCRIPT( ref g_U14925[iParam0]._fU0._fU24 );
        if (NOT bVar9)
        {
            sub_175468();
            g_U14925[iParam0]._fU0._fU0 = 2;
        }
        else
        {
            g_U14925[iParam0]._fU0._fU0 = 3;
            sub_175526();
        }
        CLEAR_WANTED_LEVEL( sub_8409() );
    }
    sub_41307( iParam0 );
    if (bParam1)
    {
        g_U12382[iParam0]._fU28 = 1;
        if ((iParam0 == 3) || (iParam0 == 7))
        {
            g_U12382[3]._fU28 = 1;
            g_U12382[7]._fU28 = 1;
        }
    }
    return 1;
}

int sub_173247()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U22959)
    {
        return 0;
    }
    return 1;
}

int sub_173476(int iParam0, unknown uParam1)
{
    float fVar4;

    if (NOT (IS_BIT_SET( g_U10938._fU0, 4 )))
    {
        return 0;
    }
    if (NOT (g_U10938._fU4 == iParam0))
    {
        return 0;
    }
    if (NOT (IS_BIT_SET( g_U10938._fU0, 6 )))
    {
        return 0;
    }
    if (((g_U10938._fU48._fU0 == 0.00000000) AND (g_U10938._fU48._fU4 == 0.00000000)) AND (g_U10938._fU48._fU8 == 0.00000000))
    {
        return 0;
    }
    fVar4 = 999999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( g_U10938._fU48._fU0, g_U10938._fU48._fU4, g_U10938._fU48._fU8, g_U10756[uParam1]._fU4._fU0, g_U10756[uParam1]._fU4._fU4, g_U10756[uParam1]._fU4._fU8, ref fVar4 );
    if (fVar4 > 1.00000000)
    {
        return 0;
    }
    return 1;
}

int sub_173986(boolean bParam0, boolean bParam1)
{
    unknown uVar4;
    int iVar5;
    float fVar6;

    if (IS_MINIGAME_IN_PROGRESS())
    {
        return 0;
    }
    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_16171() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_16171(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_CAR_UPRIGHT_VALUE( uVar4, ref fVar6 );
                if ((fVar6 < 0.95000000) || (fVar6 > 1.01100000))
                {
                    return 0;
                }
            }
        }
    }
    if (bParam0)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_16171() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_16171(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_16171()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_16171() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_16171() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_8409() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_8409() )))
    {
        return 0;
    }
    return 1;
}

int sub_174483(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;

    iVar3 = 0;
    I = 0;
    iVar5 = 10;
    for ( I = 0; I < 11; I++ )
    {
        iVar3 = g_U14925[I]._fU0._fU0;
        if ((((iVar3 == 2) || (iVar3 == 3)) || (iVar3 == 4)) || (iVar3 == 5))
        {
            iVar5 = g_U14925[I]._fU0._fU56;
            if (((iVar5 == 2) || (iVar5 == 0)) || (iVar5 == 1))
            {
                PRINTSTRING( "------> EXTRA SECURITY CHECK: Not on mission but another strand's Story Mission is activating\n" );
                PRINTSTRING( "            (this strand: " );
                PRINTINT( uParam0 );
                PRINTSTRING( "    strand already activating: " );
                PRINTINT( I );
                PRINTSTRING( ")\n" );
                PRINTSTRING( "             (other strand statusID: " );
                switch (iVar3)
                {
                    case 2:
                    PRINTSTRING( "MISSION_ARRIVAL_CUTSCENE)\n" );
                    break;
                    case 3:
                    PRINTSTRING( "MISSION_STARTING)\n" );
                    break;
                    case 4:
                    PRINTSTRING( "MISSION_ACTIVE)\n" );
                    break;
                    case 5:
                    PRINTSTRING( "MISSION_END)\n" );
                    break;
                }
                PRINTSTRING( "             (other strand startType: " );
                switch (iVar5)
                {
                    case 2:
                    PRINTSTRING( "START_NOW_FADE)\n" );
                    break;
                    case 0:
                    PRINTSTRING( "START_POINT)\n" );
                    break;
                    case 1:
                    PRINTSTRING( "START_NOW)\n" );
                    break;
                }
                PRINTSTRING( "             (mission ID: " );
                PRINTINT( g_U14925[I]._fU0._fU4 );
                PRINTSTRING( " - " );
                PRINTSTRING( ref g_U14925[I]._fU0._fU24 );
                PRINTSTRING( ")\n" );
                PRINTSTRING( "             (" );
                PRINTSTRING( ref g_U14925[I]._fU0._fU8 );
                PRINTSTRING( ")\n" );
                return 0;
            }
        }
    }
    return 1;
}

void sub_175468()
{
    l_U10 = 0;
    return;
}

void sub_175526()
{
    int iVar2;

    if (IS_CHAR_DEAD( sub_16171() ))
    {
        return;
    }
    iVar2 = 0;
    GET_CHAR_HEALTH( sub_16171(), ref iVar2 );
    if (iVar2 >= 150)
    {
        return;
    }
    SET_CHAR_HEALTH( sub_16171(), 150 );
    RESET_VISIBLE_PED_DAMAGE( sub_16171() );
    return;
}

int sub_175795(int iParam0, boolean bParam1, unknown uParam2, boolean bParam3)
{
    boolean bVar6;

    if (bParam1)
    {
        if (NOT (g_U14925[iParam0]._fU80._fU0 == 1))
        {
            sub_24711( "Main_Missions: Immediately_Start_Mission(): Attempting to Immediately Start friend mission but status is not Check For Start" );
            return 0;
        }
    }
    else if (NOT (g_U14925[iParam0]._fU0._fU0 == 1))
    {
        sub_24711( "Main_Missions: Immediately_Start_Mission(): Attempting to Immediately Start primary mission but status is not Check For Start" );
        return 0;
    }
    if (g_U12379)
    {
        sub_24711( "MAIN_MISSIONS: IMMEDIATE_START_MISSION but player already on a mission" );
        return 0;
    }
    if ((NOT bParam1) AND (bParam3))
    {
        if (NOT (sub_173986( 1, 1 )))
        {
            return 0;
        }
    }
    bVar6 = false;
    if (((IS_BIT_SET( g_U10938._fU0, 4 )) AND (g_U10938._fU4 == iParam0)) AND (IS_BIT_SET( g_U10938._fU0, 6 )))
    {
        bVar6 = true;
    }
    if (NOT bVar6)
    {
        if (NOT (sub_174483( iParam0 )))
        {
            return 0;
        }
    }
    if (bVar6)
    {
        CLEAR_BIT( ref g_U10938._fU0, 7 );
        SET_PLAYER_CONTROL( sub_8409(), 1 );
        sub_175526();
        if (IS_BIT_SET( g_U10938._fU0, 10 ))
        {
            DO_SCREEN_FADE_IN( 500 );
        }
    }
    else
    {
        SET_BIT( ref g_U10938._fU0, 7 );
    }
    if (bParam1)
    {
        REQUEST_SCRIPT( ref g_U14925[iParam0]._fU80._fU24 );
        g_U14925[iParam0]._fU80._fU0 = 3;
    }
    else
    {
        REQUEST_SCRIPT( ref g_U14925[iParam0]._fU0._fU24 );
        switch (uParam2)
        {
            case 1:
            case 2:
            if (sub_176524( iParam0 ))
            {
                if (IS_BIT_SET( g_U10938._fU0, 7 ))
                {
                    PRINT_BIG( ref g_U14925[iParam0]._fU0._fU8, 6000, 2 );
                }
            }
            break;
        }
        if (bParam3)
        {
            g_U14925[iParam0]._fU0._fU0 = 2;
        }
        else
        {
            g_U14925[iParam0]._fU0._fU0 = 3;
        }
    }
    sub_41307( iParam0 );
    return 1;
}

int sub_176524(unknown uParam0)
{
    return 1;
}

void sub_176865()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    g_U22959 = iVar2 + 2000;
    return;
}

void sub_177122(unknown uParam0)
{
    int iVar3;
    int J;
    int iVar5;
    int I;

    if (g_U12382[uParam0]._fU120 == 0)
    {
        return;
    }
    iVar3 = 0;
    J = 0;
    for ( J = 0; J < 8; J++ )
    {
        if (IS_BIT_SET( g_U12382[uParam0]._fU120, J ))
        {
            iVar5 = J;
            iVar3 = sub_74187( iVar5 );
            I = 0;
            for ( I = 0; I < 5; I++ )
            {
                if (sub_92504( iVar3, I ))
                {
                    if (g_U12382[iVar3]._fU148[I]._fU84)
                    {
                        sub_177279( iVar5, I );
                    }
                }
                g_U12382[iVar3]._fU148[I]._fU36 = 1;
            }
            if (g_U12382[uParam0]._fU120 == J)
            {
                return;
            }
        }
    }
    return;
}

void sub_177279(unknown uParam0, int iParam1)
{
    int iVar4;

    iVar4 = iParam1 + 0;
    switch (uParam0)
    {
        case 3:
        if (iVar4 == 3)
        {
            if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_gun_car" )) > 0)
            {
                g_U11191 = 1;
            }
        }
        break;
        case 7:
        if (iVar4 == 4)
        {
            if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_vehicle" )) > 0)
            {
                g_U11199 = 1;
            }
        }
        break;
    }
    return;
}

void sub_177574(unknown uParam0, int iParam1, boolean bParam2)
{
    boolean bVar5;

    if (bParam2)
    {
        return;
    }
    l_U11 = uParam0;
    if (NOT (l_U10 == 0))
    {
        sub_177609();
        return;
    }
    CLEAR_HELP();
    if (iParam1 == 16)
    {
        sub_178069();
        return;
    }
    bVar5 = sub_178344( uParam0, iParam1 );
    if (bVar5)
    {
        return;
    }
    l_U10 = 2;
    return;
}

void sub_177609()
{
    int iVar2;
    int iVar3;
    float fVar4;
    int iVar5;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = 0;
    fVar4 = 0.00000000;
    iVar5 = 0;
    switch (l_U10)
    {
        case 1:
        l_U13 = 0;
        if (IS_SCREEN_FADED_OUT())
        {
            l_U13 = 1;
        }
        if (NOT l_U13)
        {
            if (iVar2 > l_U12)
            {
                if ((NOT IS_SCREEN_FADED_OUT()) AND (NOT IS_SCREEN_FADING_OUT()))
                {
                    DO_SCREEN_FADE_OUT( 200 );
                    l_U12 = iVar2 + 500;
                }
            }
        }
        if (l_U13)
        {
            if (IS_PLAYER_PLAYING( sub_8409() ))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_16171() ))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_16171() );
                }
                else
                {
                    SET_PLAYER_CONTROL( sub_8409(), 0 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_16171() );
                }
            }
            SET_WIDESCREEN_BORDERS( 0 );
            l_U10 = 2;
            sub_45310();
            if (NOT (IS_CHAR_DEAD( sub_16171() )))
            {
                if (IS_CHAR_ON_FIRE( sub_16171() ))
                {
                    EXTINGUISH_CHAR_FIRE( sub_16171() );
                }
                SET_CHAR_PROOFS( sub_16171(), 0, 0, 0, 0, 0 );
            }
            sub_177906();
        }
        break;
        default:
    }
    return;
}

void sub_177906()
{
    g_U42871._fU0 = 37;
    g_U42871._fU8 = 11;
    g_U42871._fU12 = 0;
    if (g_U42871._fU4 == nil)
    {
        return;
    }
    if (NOT (DOES_CHAR_EXIST( g_U42871._fU4 )))
    {
        g_U42871._fU4 = nil;
        return;
    }
    DELETE_CHAR( ref g_U42871._fU4 );
    g_U42871._fU4 = nil;
    return;
}

void sub_178069()
{
    int iVar2;

    if (NOT (IS_PLAYER_PLAYING( sub_8409() )))
    {
        l_U10 = 2;
        return;
    }
    if ((NOT IS_SCREEN_FADING_OUT()) AND (NOT IS_SCREEN_FADED_OUT()))
    {
        DO_SCREEN_FADE_OUT( 500 );
    }
    sub_178135();
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    l_U12 = (iVar2 + 500) + 500;
    l_U10 = 1;
    sub_7795();
    if (NOT (IS_CHAR_DEAD( sub_16171() )))
    {
        SET_CHAR_PROOFS( sub_16171(), 1, 1, 1, 1, 1 );
    }
    return;
}

void sub_178135()
{
    if (NOT (sub_176524( l_U11 )))
    {
        return;
    }
    if (IS_BIT_SET( g_U10938._fU0, 7 ))
    {
        PRINT_BIG( ref g_U14925[l_U11]._fU0._fU8, 30000, 2 );
        PRINTSTRING( "\n\n\n\nARRIVAL_CUTSCENES_HIGH_LEVEL\n\n\n" );
    }
    return;
}

int sub_178344(unknown uParam0, unknown uParam1)
{
    g_U10563 = 0;
    switch (uParam0)
    {
        case 0: return sub_178434( uParam1 );
        case 1: return sub_178705( uParam1 );
        case 2: return sub_178769( uParam1 );
        case 3:
        case 7: return sub_178833( uParam1 );
        case 4: return sub_178905( uParam1 );
        case 5: return sub_178961( uParam1 );
        case 6: return sub_179017( uParam1 );
    }
    sub_179071();
    return 1;
    return 0;
}

int sub_178434(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        case 2:
        case 3:
        sub_178478( uParam0 );
        return 1;
    }
    sub_178657();
    return 0;
}

void sub_178478(unknown uParam0)
{
    if (IS_PLAYER_PLAYING( sub_8409() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_16171() ))
        {
            SET_PLAYER_CONTROL( sub_8409(), 0 );
        }
    }
    switch (uParam0)
    {
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
        sub_178069();
        break;
        default: sub_178657();
    }
    return;
}

void sub_178657()
{
    return;
}

int sub_178705(unknown uParam0)
{
    switch (uParam0)
    {
        case 4:
        case 5:
        sub_178478( uParam0 );
        return 1;
    }
    sub_178657();
    return 0;
}

int sub_178769(unknown uParam0)
{
    switch (uParam0)
    {
        case 6:
        case 7:
        sub_178478( uParam0 );
        return 1;
    }
    sub_178657();
    return 0;
}

int sub_178833(unknown uParam0)
{
    switch (uParam0)
    {
        case 8:
        case 9:
        case 13:
        sub_178478( uParam0 );
        return 1;
    }
    sub_178657();
    return 0;
}

int sub_178905(unknown uParam0)
{
    switch (uParam0)
    {
        case 10:
        sub_178478( uParam0 );
        return 1;
    }
    sub_178657();
    return 0;
}

int sub_178961(unknown uParam0)
{
    switch (uParam0)
    {
        case 11:
        sub_178478( uParam0 );
        return 1;
    }
    sub_178657();
    return 0;
}

int sub_179017(unknown uParam0)
{
    switch (uParam0)
    {
        case 12:
        sub_178478( uParam0 );
        return 1;
    }
    sub_178657();
    return 0;
}

void sub_179071()
{
    int iVar2;

    if (NOT (IS_PLAYER_PLAYING( sub_8409() )))
    {
        l_U10 = 2;
        g_U10563 = 0;
        return;
    }
    SET_PLAYER_CONTROL( sub_8409(), 0 );
    CLEAR_CHAR_TASKS( sub_16171() );
    DO_SCREEN_FADE_OUT( 500 );
    sub_178135();
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    l_U12 = (iVar2 + 500) + 500;
    l_U10 = 1;
    sub_7795();
    return;
}

void sub_179291(int iParam0, boolean bParam1)
{
    int iVar4;
    boolean bVar5;
    int iVar6;
    boolean bVar7;
    unknown uVar8;

    iVar4 = 10;
    if (bParam1)
    {
        iVar4 = g_U14925[iParam0]._fU80._fU56;
    }
    else
    {
        iVar4 = g_U14925[iParam0]._fU0._fU56;
    }
    bVar5 = false;
    if (((((NOT (iVar4 == 3)) AND (NOT (iVar4 == 4))) AND (NOT (iVar4 == 6))) AND (NOT (iVar4 == 5))) AND (NOT (iParam0 == 9)))
    {
        bVar5 = true;
    }
    iVar6 = 8192;
    bVar7 = true;
    if (bParam1)
    {
        if (NOT (HAS_SCRIPT_LOADED( ref g_U14925[iParam0]._fU80._fU24 )))
        {
            REQUEST_SCRIPT( ref g_U14925[iParam0]._fU80._fU24 );
            return;
        }
        iVar6 = 1820;
        if (iVar4 == 8)
        {
            g_U14925[iParam0]._fU80._fU60 = START_NEW_SCRIPT_WITH_ARGS( ref g_U14925[iParam0]._fU80._fU24, ref iParam0, 1, iVar6 );
        }
        else
        {
            g_U14925[iParam0]._fU80._fU60 = START_NEW_SCRIPT( ref g_U14925[iParam0]._fU80._fU24, iVar6 );
        }
        g_U14925[iParam0]._fU80._fU0 = 4;
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U14925[iParam0]._fU80._fU24 );
    }
    else if (NOT (HAS_SCRIPT_LOADED( ref g_U14925[iParam0]._fU0._fU24 )))
    {
        REQUEST_SCRIPT( ref g_U14925[iParam0]._fU0._fU24 );
        return;
    }
    if (((iVar4 == 6) || (iVar4 == 7)) || (iVar4 == 5))
    {
        iVar6 = 1024;
        bVar7 = false;
    }
    if (iParam0 == 9)
    {
        iVar6 = 1024;
        bVar7 = false;
    }
    if (sub_179733( iParam0, g_U14925[iParam0]._fU0._fU4, ref iVar6 ))
    {
        bVar7 = false;
    }
    if (sub_127627( iParam0, g_U14925[iParam0]._fU0._fU4 ))
    {
        iVar6 = 512;
        bVar7 = false;
    }
    if (sub_127659( iParam0, g_U14925[iParam0]._fU0._fU4 ))
    {
        iVar6 = 128;
        bVar7 = false;
    }
    if (sub_179846( iParam0, g_U14925[iParam0]._fU0._fU4 ))
    {
        iVar6 = 1828;
        bVar7 = false;
    }
    if (bVar7)
    {
        if (bVar5)
        {
            if (g_U12379)
            {
                g_U14925[iParam0]._fU0._fU0 = 6;
                PRINTNL();
                PRINTSTRING( "++++++++++++++++++++++++++++++++++++++\n" );
                PRINTSTRING( "Tried to launch another mission while on-mission. Brute Force Cancellation. (strand: " );
                PRINTINT( iParam0 );
                PRINTSTRING( ")\n" );
                PRINTSTRING( "++++++++++++++++++++++++++++++++++++++\n" );
                PRINTNL();
                return;
            }
        }
    }
    if (iVar4 == 8)
    {
        g_U14925[iParam0]._fU0._fU60 = START_NEW_SCRIPT_WITH_ARGS( ref g_U14925[iParam0]._fU0._fU24, ref iParam0, 1, iVar6 );
        PRINT_BIG( "pholder", 5000, 2 );
    }
    else
    {
        g_U14925[iParam0]._fU0._fU60 = START_NEW_SCRIPT( ref g_U14925[iParam0]._fU0._fU24, iVar6 );
        if (sub_83985( iParam0 ))
        {
            if ((NOT (iVar4 == 5)) AND (NOT (iVar4 == 6)))
            {
                g_U10961 = {g_U14925[iParam0]._fU0._fU8};
                uVar8 = sub_41889( iParam0, g_U14925[iParam0]._fU0._fU4 );
                g_U10971 = uVar8;
                g_U10972 = sub_180366();
                sub_180492( uVar8 );
                g_U10970 = g_U22960[uVar8]._fU100;
                sub_37874( uVar8 );
                sub_180621( iParam0 );
                if (IS_PLAYER_PLAYING( sub_8409() ))
                {
                    STOP_PED_SPEAKING( sub_16171(), 1 );
                }
                if (iVar4 == 0)
                {
                    CLEAR_ADDITIONAL_TEXT( 0, 1 );
                    CLEAR_ADDITIONAL_TEXT( 6, 1 );
                }
            }
            g_U12382[iParam0]._fU12 = 0;
        }
    }
    g_U14925[iParam0]._fU0._fU0 = 4;
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U14925[iParam0]._fU0._fU24 );;
    if (bVar5)
    {
        g_U12379 = 1;
        CANCEL_OVERRIDE_RESTART();
        sub_45223( 1 );
        CLEAR_BRIEF();
        sub_181003( iVar4 );
    }
    if (((NOT (iVar4 == 3)) AND (NOT (iVar4 == 4))) AND (NOT (iParam0 == 9)))
    {
        sub_181059( iParam0 );
    }
    return;
}

int sub_179733(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return 0;
}

int sub_179846(int iParam0, int iParam1)
{
    if ((iParam0 == 10) AND (iParam1 == 11))
    {
        return 1;
    }
    return 0;
}

int sub_180366()
{
    if (g_U10971 == -1)
    {
        return 0;
    }
    if ((g_U22960[g_U10971]._fU0 == 0) AND (g_U22960[g_U10971]._fU4 == 0))
    {
        return 1;
    }
    if ((g_U22960[g_U10971]._fU0 == 0) AND (g_U22960[g_U10971]._fU4 == 13))
    {
        return 1;
    }
    return 0;
}

void sub_180492(int iParam0)
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
    if (g_U10972)
    {
        return;
    }
    iVar3 = g_U22960[iParam0]._fU100;
    iVar3++;
    g_U22960[iParam0]._fU100 = iVar3;
    INCREMENT_INT_STAT_NO_MESSAGE( 255, 1 );
    return;
}

void sub_180621(unknown uParam0)
{
    if (COMPARE_STRING( ref g_U14925[uParam0]._fU0._fU24, "Pause" ))
    {
        return;
    }
    sub_180683( g_U14925[uParam0]._fU0._fU8 );
    return;
}

void sub_180683(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (g_U0)
    {
        return;
    }
    if (NOT (COMPARE_STRING( ref g_U10966, "" )))
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Started: g_labelPlayerStatMissionName is already set up (see console log)" );
    }
    g_U10966 = {uParam0};
    PLAYSTATS_MISSION_STARTED( ref g_U10966 );
    return;
}

void sub_181003(int iParam0)
{
    if (iParam0 == 0)
    {
        g_U2792 = 1;
    }
    return;
}

void sub_181059(unknown uParam0)
{
    g_U22948 = uParam0;
    if (g_U0)
    {
        g_U22947 = 1;
        return;
    }
    if (g_U12382[uParam0]._fU144 == 1)
    {
        g_U22947 = 0;
        return;
    }
    g_U22947 = 1;
    return;
}

void sub_181154(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        if (IS_THREAD_ACTIVE( g_U14925[uParam0]._fU80._fU60 ))
        {
            return;
        }
        g_U14925[uParam0]._fU80._fU0 = 5;
    }
    else if (IS_THREAD_ACTIVE( g_U14925[uParam0]._fU0._fU60 ))
    {
        return;
    }
    g_U14925[uParam0]._fU0._fU0 = 5;;
    return;
}

void sub_181407()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (NOT g_U15811[1])
    {
        if (iVar2 > g_U10750)
        {
            g_U15811[1] = 1;
            sub_142535();
        }
    }
    if (g_U10981)
    {
        if (IS_PLAYER_PLAYING( sub_8409() ))
        {
            if (iVar2 > g_U10982)
            {
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_8409(), 0 )))
                {
                    g_U10981 = 0;
                }
            }
            return;
        }
        g_U10981 = 0;
    }
    if (NOT g_U10983)
    {
        return;
    }
    iVar3 = 0;
    if ((GET_TIME_SINCE_LAST_ARREST() < 3000) AND (NOT (GET_TIME_SINCE_LAST_ARREST() == -1)))
    {
        iVar3 = 1;
    }
    iVar4 = 0;
    if ((GET_TIME_SINCE_LAST_DEATH() < 3000) AND (NOT (GET_TIME_SINCE_LAST_DEATH() == -1)))
    {
        iVar4 = 1;
    }
    if ((iVar3) || (iVar4))
    {
        sub_142535();
    }
    iVar5 = 0;
    GET_MAX_WANTED_LEVEL( ref iVar5 );
    if (NOT (iVar5 == ProtectedGet(g_U10980)))
    {
        SET_MAX_WANTED_LEVEL( ProtectedGet(g_U10980) );
    }
    if (IS_PLAYER_PLAYING( sub_8409() ))
    {
        if (IS_WANTED_LEVEL_GREATER( sub_8409(), ProtectedGet(g_U10980) ))
        {
            ALTER_WANTED_LEVEL( sub_8409(), ProtectedGet(g_U10980) );
        }
    }
    return;
}

void sub_181738()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    if (NOT (IS_PLAYER_PLAYING( sub_8409() )))
    {
        return;
    }
    GET_CHAR_COORDINATES( sub_16171(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    iVar5 = GET_MAP_AREA_FROM_COORDS( uVar2 );
    iVar6 = 0;
    if (l_U197 > l_U938)
    {
        l_U938 = l_U197 + 1000;
        iVar6 = GET_INT_STAT( 363 );
        if (((iVar5 > iVar6) AND (NOT (iVar5 >= 4))) AND (g_U10979))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_8409(), 5 )))
            {
                SET_MAX_WANTED_LEVEL( 6 );
                ALTER_WANTED_LEVEL( sub_8409(), 6 );
                APPLY_WANTED_LEVEL_CHANGE_NOW( sub_8409() );
                g_U10981 = 1;
                iVar7 = 0;
                GET_GAME_TIMER( ref iVar7 );
                g_U10982 = iVar7 + 30000;
            }
        }
    }
    if (iVar5 == g_U10978)
    {
        return;
    }
    g_U10978 = iVar5;
    sub_37140();
    if (NOT g_U12379)
    {
        if ((NOT (g_U10978 == 5)) AND (NOT (g_U10978 == 4)))
        {
            sub_37900();
        }
    }
    return;
}

void sub_182022()
{
    int iVar2;

    if (NOT (IS_BIT_SET( g_U10751._fU0, 1 )))
    {
        return;
    }
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (IS_CHAR_DEAD( sub_16171() ))
    {
        sub_7597();
        return;
    }
    if (IS_CHAR_SHOOTING( sub_16171() ))
    {
        if (NOT (IS_BIT_SET( g_U10751._fU0, 2 )))
        {
            if ((g_U10751._fU4 == 0) || (g_U10751._fU4 > iVar2))
            {
                SET_BIT( ref g_U10751._fU0, 3 );
            }
            else
            {
                sub_7597();
                return;
            }
        }
    }
    if (g_U10751._fU4 == 0)
    {
        if (g_U12379)
        {
            return;
        }
        if (IS_BIT_SET( g_U10751._fU0, 2 ))
        {
            g_U10751._fU4 = iVar2;
            g_U10751._fU8 = iVar2 + 12000;
            SET_BIT( ref g_U10751._fU0, 3 );
        }
        else
        {
            g_U10751._fU4 = iVar2 + 2000;
            g_U10751._fU8 = iVar2 + 5000;
        }
        START_FIRING_AMNESTY();
        return;
    }
    if (iVar2 > g_U10751._fU8)
    {
        sub_7597();
        return;
    }
    if (IS_WANTED_LEVEL_GREATER( sub_8409(), 0 ))
    {
        if (IS_WANTED_LEVEL_GREATER( sub_8409(), 1 ))
        {
            sub_7597();
            return;
        }
        if (IS_BIT_SET( g_U10751._fU0, 3 ))
        {
            CLEAR_WANTED_LEVEL( sub_8409() );
            return;
        }
    }
    return;
}

void sub_182415()
{
    int iVar2;
    int iVar3;
    int I;
    int iVar5;
    int iVar6;

    sub_182424();
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = 2147483647;
    I = 0;
    for ( I = 0; I < 10; I++ )
    {
        if (g_U42731._fU12[I]._fU0)
        {
            iVar6 = g_U42731._fU12[I]._fU12;
            if ((NOT g_U16014[iVar6]._fU212._fU0) AND (NOT (iVar6 == 11)))
            {
                sub_101247( I );
            }
            else
            {
                iVar5 = g_U42731._fU12[I]._fU20 - iVar2;
                if (iVar5 < iVar3)
                {
                    iVar3 = iVar5;
                }
            }
        }
    }
    if (iVar3 > 0)
    {
        return;
    }
    for ( I = 0; I < 10; I++ )
    {
        if (g_U42731._fU12[I]._fU0)
        {
            iVar5 = g_U42731._fU12[I]._fU20 - iVar2;
            if (iVar5 == iVar3)
            {
                if (sub_182954( g_U42731._fU12[I]._fU24 ))
                {
                    if ((sub_98044( g_U42731._fU12[I]._fU12, 30000 )) AND (NOT (sub_92624( g_U42731._fU12[I]._fU12 ))))
                    {
                        if ((NOT (sub_183220( I ))) AND (NOT (sub_183290( I ))))
                        {
                            sub_80577( g_U42731._fU12[I]._fU12, g_U42731._fU12[I]._fU16 );
                            g_U42731._fU12[I]._fU4 = 1;
                            g_U42731._fU12[I]._fU0 = 0;
                            sub_46107();
                            sub_89111( g_U42731._fU12[I]._fU12, 0 );
                            sub_89199( g_U42731._fU12[I]._fU28, g_U42731._fU12[I]._fU12, g_U42731._fU12[I]._fU32 );
                        }
                    }
                }
            }
            if ((iVar5 <= 0) AND (NOT g_U42731._fU12[I]._fU4))
            {
                g_U42731._fU12[I]._fU20 = (iVar2 + 15000) + iVar5;
            }
        }
    }
    return;
}

void sub_182424()
{
    if (g_U12379)
    {
        sub_182443();
    }
    if (IS_THREAD_ACTIVE( g_U818 ))
    {
        sub_182537();
    }
    if (sub_84300())
    {
        sub_46107();
    }
    if (sub_91689())
    {
        sub_182626();
    }
    return;
}

void sub_182443()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_82928();
    if (iVar3 > g_U42731._fU4)
    {
        g_U42731._fU4 = iVar3;
        g_U42731._fU8 = iVar2;
    }
    return;
}

void sub_182537()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + 5000;
    if (iVar3 > g_U42731._fU0)
    {
        g_U42731._fU0 = iVar3;
    }
    return;
}

void sub_182626()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + 10000;
    if (iVar3 > g_U42731._fU4)
    {
        g_U42731._fU4 = iVar3;
        g_U42731._fU8 = iVar2;
    }
    return;
}

int sub_182954(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_PLAYER_PLAYING( sub_8409() )))
    {
        return 0;
    }
    if (g_U12379)
    {
        return 0;
    }
    if ((IS_BIT_SET( g_U10938._fU0, 2 )) AND (NOT (IS_BIT_SET( g_U10938._fU0, 3 ))))
    {
        return 0;
    }
    if (g_U95._fU104)
    {
        return 0;
    }
    if (sub_91689())
    {
        return 0;
    }
    if (sub_83677())
    {
        return 0;
    }
    if (sub_183086())
    {
        return 0;
    }
    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (sub_84280( uParam0 ))
    {
        return 0;
    }
    return 1;
}

int sub_183086()
{
    if (g_U9595)
    {
        return 1;
    }
    return 0;
}

void sub_183220(unknown uParam0)
{
    unknown uVar3;

    if (g_U42731._fU12[uParam0]._fU8)
    {
        return 0;
    }
    uVar3 = g_U42731._fU12[uParam0]._fU12;
    return g_U22845[uVar3];
}

void sub_183290(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    boolean bVar5;
    unknown Result;

    if (sub_183301( uParam0 ))
    {
        return 0;
    }
    iVar3 = g_U42731._fU12[uParam0]._fU12;
    bVar4 = iVar3 < 8;
    if (bVar4)
    {
        if (g_U20825[iVar3]._fU712._fU4)
        {
            return 1;
        }
        if (sub_108624( iVar3 ))
        {
            return 1;
        }
        if (g_U20825[iVar3]._fU16)
        {
            return 1;
        }
        if (g_U29760)
        {
            return 1;
        }
    }
    bVar5 = false;
    Result = sub_183446( uParam0, ref bVar5 );
    if (bVar5)
    {
        sub_101247( uParam0 );
    }
    return Result;
}

int sub_183301(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    return 0;
}

int sub_183446(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    (uParam1^) = 0;
    uVar4 = uParam0;
    if (g_U43561)
    {
        PRINTSTRING( "Check_For_Specific_Txtmsg_Restrictions: E2 stats are still on-screen\n" );
        return 1;
    }
    return 0;
}

void sub_183814()
{
    int iVar2;
    boolean bVar3;
    int iVar4;

    iVar2 = 72;
    bVar3 = true;
    while (bVar3)
    {
        if (l_U19 >= iVar2)
        {
            l_U19 = 0;
        }
        switch (g_U11582[l_U19]._fU12)
        {
            case 0:
            case 1:
            case 4:
            case 7:
            case 12:
            case 17:
            case 20:
            case 23:
            case 24:
            bVar3 = false;
            break;
            case 8:
            if (NOT (sub_183963( l_U19 )))
            {
                bVar3 = false;
            }
            break;
        }
        if (NOT bVar3)
        {
            if (g_U12231[l_U19]._fU0)
            {
                if (DOES_BLIP_EXIST( g_U12231[l_U19]._fU4 ))
                {
                    if ((DOES_BLIP_EXIST( g_U11582[l_U19]._fU32 )) || (sub_184072( l_U19 )))
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref g_U12231[l_U19]._fU4 );
                        g_U12231[l_U19]._fU4 = nil;
                    }
                }
                else if (((NOT (DOES_BLIP_EXIST( g_U11582[l_U19]._fU32 ))) AND (NOT (sub_184072( l_U19 )))) AND (NOT (sub_184172( l_U19 ))))
                {
                    if (NOT g_U12379)
                    {
                        sub_36191( ref g_U12231[l_U19]._fU4, g_U11582[l_U19]._fU0, g_U11582[l_U19]._fU24, g_U11582[l_U19]._fU20 );
                        SET_BLIP_AS_SHORT_RANGE( g_U12231[l_U19]._fU4, 1 );
                        sub_36851( l_U19 );
                    }
                }
            }
            else if (NOT (IS_CHAR_DEAD( sub_16171() )))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_16171(), g_U11582[l_U19]._fU0._fU0, g_U11582[l_U19]._fU0._fU4, g_U11582[l_U19]._fU0._fU8, 15.00000000, 15.00000000, 7.00000000, 0 ))
                {
                    GET_INTERIOR_FROM_CHAR( sub_16171(), ref iVar4 );
                    if ((NOT (iVar4 == nil)) || (sub_184580( l_U19 )))
                    {
                        if (sub_184980( l_U19 ))
                        {
                            g_U12231[l_U19]._fU0 = 1;
                        }
                    }
                }
            }
        }
        l_U19++;
    }
    return;
}

int sub_183963(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    return 0;
}

int sub_184072(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    return 0;
}

int sub_184172(int iParam0)
{
    boolean bVar3;
    boolean bVar4;
    unknown uVar5;

    bVar3 = false;
    bVar4 = false;
    switch (g_U11582[iParam0]._fU12)
    {
        case 12:
        bVar3 = true;
        break;
        case 8:
        bVar4 = true;
        break;
        default: return 0;
    }
    if (bVar3)
    {
        uVar5 = g_U11582[iParam0]._fU16;
        switch (uVar5)
        {
            case 21:
            case 16: return 0;
        }
        if ((iParam0 == 2) || (iParam0 == 29))
        {
            return 0;
        }
        return 1;
    }
    if (bVar4)
    {
        if (((iParam0 == 35) || (iParam0 == 36)) || (iParam0 == 37))
        {
            return 0;
        }
        return 1;
    }
    return 0;
}

int sub_184580(unknown uParam0)
{
    unknown uVar3;
    boolean bVar4;
    int iVar5;
    boolean bVar6;
    boolean bVar7;
    boolean bVar8;
    int iVar9;
    float fVar10;

    uVar3 = uParam0;
    bVar4 = false;
    iVar5 = 0;
    bVar6 = false;
    bVar7 = false;
    bVar8 = false;
    iVar9 = g_U11582[uParam0]._fU12;
    if ((iVar9 == 23) || (iVar9 == 4))
    {
        bVar4 = true;
        bVar6 = true;
        bVar8 = false;
    }
    switch (uVar3)
    {
        case 50:
        case 3:
        case 60:
        case 61:
        bVar4 = true;
        iVar5 = 1;
        bVar8 = true;
        break;
    }
    if (NOT bVar4)
    {
        return 0;
    }
    if (((iVar5) || (bVar6)) || (bVar7))
    {
        fVar10 = 2.50000000;
        if (bVar6)
        {
            fVar10 = 5.00000000;
        }
        if (bVar7)
        {
            fVar10 = 15.00000000;
        }
        if (LOCATE_CHAR_ON_FOOT_3D( sub_16171(), g_U11582[uParam0]._fU0._fU0, g_U11582[uParam0]._fU0._fU4, g_U11582[uParam0]._fU0._fU8, fVar10, fVar10, 5.00000000, 0 ))
        {
            return 1;
        }
        if (bVar8)
        {
            return 0;
        }
        fVar10 = 4.00000000;
        if (bVar6)
        {
            fVar10 = 10.00000000;
        }
        if (bVar7)
        {
            fVar10 = 20.00000000;
        }
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_16171(), g_U11582[uParam0]._fU0._fU0, g_U11582[uParam0]._fU0._fU4, g_U11582[uParam0]._fU0._fU8, fVar10, fVar10, 5.00000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_184980(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = uParam0;
    iVar4 = g_U11582[uParam0]._fU12;
    if (iVar4 == 23)
    {
        if (IS_PAY_N_SPRAY_ACTIVE())
        {
            return 1;
        }
        return 0;
    }
    if (iVar4 == 26)
    {
        if (g_U42891)
        {
            return 1;
        }
        return 0;
    }
    return 1;
}

void sub_185112()
{
    int iVar2;

    if (g_U15999._fU16 == 0)
    {
        return;
    }
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U15999._fU16)
    {
        return;
    }
    g_U15999._fU16 = 0;
    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref g_U15999._fU0 )))
    {
        return;
    }
    CLEAR_HELP();
    return;
}

void sub_185212()
{
    boolean bVar2;
    int iVar3;
    int iVar4;

    bVar2 = false;
    iVar3 = GET_TIME_SINCE_LAST_DEATH();
    if (NOT (iVar3 == -1))
    {
        if (iVar3 < 7000)
        {
            bVar2 = true;
        }
    }
    iVar4 = GET_TIME_SINCE_LAST_ARREST();
    if (NOT bVar2)
    {
        if (NOT (iVar4 == -1))
        {
            if (iVar4 < 7000)
            {
                bVar2 = true;
            }
        }
    }
    if (NOT bVar2)
    {
        l_U942 = 1;
        return;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_8409() )))
    {
        return;
    }
    if (IS_CHAR_DEAD( sub_16171() ))
    {
        return;
    }
    if (g_U12379)
    {
        return;
    }
    if (NOT l_U942)
    {
        return;
    }
    sub_46107();
    sub_93013();
    SET_CHAR_PROOFS( sub_16171(), 0, 0, 0, 0, 0 );
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_8409(), 1 );
    BLOCK_PED_WEAPON_SWITCHING( sub_16171(), 0 );
    SET_CHAR_VISIBLE( sub_16171(), 1 );
    SET_PLAYER_DISABLE_JUMP( sub_8409(), 0 );
    DISABLE_PLAYER_SPRINT( sub_8409(), 0 );
    SET_PLAYER_FORCED_AIM( sub_8409(), 0 );
    SET_CHAR_MOVEMENT_ANIMS_BLOCKED( sub_16171(), 0 );
    SET_CHAR_MAX_MOVE_BLEND_RATIO( sub_16171(), 3.00000000 );
    SET_ANIM_GROUP_FOR_CHAR( sub_16171(), "MOVE_PLAYER" );
    SET_PLAYER_CAN_BE_HASSLED_BY_GANGS( sub_8409(), 1 );
    DONT_DISPATCH_COPS_FOR_PLAYER( sub_8409(), 0 );
    sub_185570();
    g_U43588 = 0;
    g_U43589 = 0;
    g_U43590 = 0;
    g_U43591 = 0;
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    g_U43628 = 0;
    if (g_U10484)
    {
        sub_185657();
        g_U10484 = 0;
    }
    SET_DRAW_PLAYER_COMPONENT( 8, 0 );
    if (NOT ((GET_CHAR_DRAWABLE_VARIATION( sub_16171(), 3 )) == 0))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_16171(), 3, 0, 0 );
    }
    TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME( "DrinkingRect" );
    l_U942 = 0;
    return;
}

void sub_185570()
{
    g_U9197 = 0;
    g_U9198 = 0;
    return;
}

void sub_185657()
{
    sub_185671( g_U10496 );
    return;
}

void sub_185671(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    sub_185683( uParam0, ref uVar3 );
    if (uVar3._fU0 < 8)
    {
        sub_186381( uVar3._fU0 );
    }
    if (uVar3._fU4 < 3)
    {
        sub_186485( uVar3._fU4 );
    }
    if (uVar3._fU8 < 2)
    {
        sub_186589( uVar3._fU8 );
    }
    if (uVar3._fU12 < 1)
    {
        sub_186693( uVar3._fU12 );
    }
    if (uVar3._fU16 < 1)
    {
        sub_186850( uVar3._fU16 );
    }
    switch (uVar3._fU20)
    {
        case 0:
        SET_CHAR_COMPONENT_VARIATION( sub_16171(), 4, 0, 0 );
        break;
        case 1:
        SET_CHAR_COMPONENT_VARIATION( sub_16171(), 4, 0, 0 );
        break;
    }
    switch (uVar3._fU24)
    {
        case 0:
        SET_CHAR_COMPONENT_VARIATION( sub_16171(), 3, 0, 0 );
        break;
        case 1:
        SET_CHAR_COMPONENT_VARIATION( sub_16171(), 3, 0, 0 );
        break;
    }
    return;
}

void sub_185683(unknown uParam0, int iParam1)
{
    switch (uParam0)
    {
        case 1:
        iParam1->_fU0 = g_U8789._fU0;
        iParam1->_fU4 = g_U8789._fU4;
        iParam1->_fU8 = g_U8789._fU8;
        iParam1->_fU12 = g_U8789._fU12;
        iParam1->_fU16 = g_U8789._fU16;
        iParam1->_fU20 = g_U8789._fU20;
        iParam1->_fU24 = g_U8789._fU24;
        break;
        case 0:
        sub_38247( iParam1 + 0 );
        sub_38596( iParam1 + 4 );
        sub_38840( iParam1 + 8 );
        sub_39063( iParam1 + 12 );
        sub_39271( iParam1 + 16 );
        iParam1->_fU20 = -1;
        iParam1->_fU24 = -1;
        break;
        case 2:
        iParam1->_fU0 = 0;
        iParam1->_fU4 = 0;
        iParam1->_fU8 = 0;
        iParam1->_fU12 = 0;
        iParam1->_fU16 = 0;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 3:
        iParam1->_fU0 = 1;
        iParam1->_fU4 = 0;
        iParam1->_fU8 = 0;
        iParam1->_fU12 = 0;
        iParam1->_fU16 = 0;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 4:
        iParam1->_fU0 = 2;
        iParam1->_fU4 = 1;
        iParam1->_fU8 = 1;
        iParam1->_fU12 = 0;
        iParam1->_fU16 = 0;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 5:
        iParam1->_fU0 = 3;
        iParam1->_fU4 = 2;
        iParam1->_fU8 = 1;
        iParam1->_fU12 = 0;
        iParam1->_fU16 = 0;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 6:
        iParam1->_fU0 = 4;
        iParam1->_fU4 = 0;
        iParam1->_fU8 = 0;
        iParam1->_fU12 = 0;
        iParam1->_fU16 = 0;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 7:
        iParam1->_fU0 = 5;
        iParam1->_fU4 = 0;
        iParam1->_fU8 = 0;
        iParam1->_fU12 = 0;
        iParam1->_fU16 = 0;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 8:
        iParam1->_fU0 = 6;
        iParam1->_fU4 = 0;
        iParam1->_fU8 = 0;
        iParam1->_fU12 = 0;
        iParam1->_fU16 = 0;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 9:
        iParam1->_fU0 = 7;
        iParam1->_fU4 = 0;
        iParam1->_fU8 = 0;
        iParam1->_fU12 = 0;
        iParam1->_fU16 = 0;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        default:
          case 10:
        iParam1->_fU0 = 8;
        iParam1->_fU4 = 3;
        iParam1->_fU8 = 2;
        iParam1->_fU12 = 1;
        iParam1->_fU16 = 1;
        iParam1->_fU20 = -1;
        iParam1->_fU24 = -1;
    }
    return;
}

void sub_186381(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_38315( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_16171(), 1 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_16171(), 1 );
    if ((iVar5 != iVar3) || (iVar6 != iVar4))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_16171(), 1, iVar3, iVar4 );
    }
    return;
}

void sub_186485(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_38664( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_16171(), 2 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_16171(), 2 );
    if ((iVar5 != iVar3) || (iVar6 != iVar4))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_16171(), 2, iVar3, iVar4 );
    }
    return;
}

void sub_186589(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_38908( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_16171(), 5 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_16171(), 5 );
    if ((iVar5 != iVar3) || (iVar6 != iVar4))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_16171(), 5, iVar3, iVar4 );
    }
    return;
}

void sub_186693(unknown uParam0)
{
    int iVar3;
    int iVar4;

    sub_39116( uParam0, ref iVar3 );
    GET_CHAR_PROP_INDEX( sub_16171(), 0, ref iVar4 );
    if (((GET_CHAR_DRAWABLE_VARIATION( sub_16171(), 8 )) != 0) || ((GET_CHAR_TEXTURE_VARIATION( sub_16171(), 8 )) != 0))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_16171(), 8, 0, 0 );
    }
    if (iVar4 != iVar3)
    {
        if (iVar3 < 0)
        {
            CLEAR_CHAR_PROP( sub_16171(), 0 );
        }
        else
        {
            SET_CHAR_PROP_INDEX( sub_16171(), 0, iVar3 );
        }
    }
    return;
}

void sub_186850(unknown uParam0)
{
    int iVar3;
    int iVar4;

    sub_39320( uParam0, ref iVar3 );
    GET_CHAR_PROP_INDEX( sub_16171(), 1, ref iVar4 );
    if (iVar4 != iVar3)
    {
        if (iVar3 < 0)
        {
            CLEAR_CHAR_PROP( sub_16171(), 1 );
        }
        else
        {
            SET_CHAR_PROP_INDEX( sub_16171(), 1, iVar3 );
        }
    }
    return;
}

void sub_187178()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    float fVar8;

    if (g_U42871._fU4 == nil)
    {
        return;
    }
    if (g_U12379)
    {
        if (g_U42871._fU12)
        {
            return;
        }
        sub_7644();
        return;
    }
    g_U42871._fU12 = 0;
    if (NOT (DOES_CHAR_EXIST( g_U42871._fU4 )))
    {
        sub_7644();
        return;
    }
    if (IS_CHAR_DEAD( sub_16171() ))
    {
        return;
    }
    GET_CHAR_COORDINATES( sub_16171(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    if (IS_CHAR_INJURED( g_U42871._fU4 ))
    {
        N_1363505769( g_U42871._fU4, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
    }
    else
    {
        GET_CHAR_COORDINATES( g_U42871._fU4, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
    }
    fVar8 = sub_37676( uVar2, uVar5 );
    if (fVar8 <= 75.00000000)
    {
        return;
    }
    DELETE_CHAR( ref g_U42871._fU4 );
    sub_7644();
    return;
}

void sub_187458()
{
    if (g_U12379 == g_U11343._fU952)
    {
        return;
    }
    g_U11343._fU952 = g_U12379;
    sub_36017();
    return;
}

void sub_187517()
{
    boolean bVar2;
    int I;

    bVar2 = false;
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        bVar2 = false;
        if ((g_U30257[I]._fU36) AND (g_U30257[I]._fU24))
        {
            bVar2 = true;
            if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( ref g_U30257[I]._fU60 )) > 0)
            {
                if (g_U30257[I]._fU76)
                {
                    bVar2 = false;
                }
            }
            else
            {
                sub_6813( I );
            }
        }
        if (bVar2)
        {
            if (NOT (DOES_BLIP_EXIST( g_U30257[I]._fU56 )))
            {
                sub_187674( I );
            }
        }
        else if (DOES_BLIP_EXIST( g_U30257[I]._fU56 ))
        {
            sub_6735( I );
        }
    }
    return;
}

void sub_187674(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    uVar3 = {g_U30257[uParam0]._fU40};
    ADD_BLIP_FOR_CONTACT( uVar3._fU0, uVar3._fU4, uVar3._fU8, ref g_U30257[uParam0]._fU56 );
    if (g_U30257[uParam0]._fU52)
    {
        CHANGE_BLIP_SPRITE( g_U30257[uParam0]._fU56, 63 );
    }
    else
    {
        CHANGE_BLIP_SPRITE( g_U30257[uParam0]._fU56, 64 );
    }
    CHANGE_BLIP_SCALE( g_U30257[uParam0]._fU56, 1.00000000 );
    CHANGE_BLIP_DISPLAY( g_U30257[uParam0]._fU56, 2 );
    CHANGE_BLIP_PRIORITY( g_U30257[uParam0]._fU56, 0 );
    return;
}

void sub_187961()
{
    int iVar2;
    int iVar3;

    if (g_U0)
    {
        return;
    }
    iVar2 = GET_INT_STAT( 270 );
    if (NOT g_U10554)
    {
        if (iVar2 >= g_U10555)
        {
            g_U10554 = 1;
        }
    }
    iVar3 = GET_INT_STAT( 211 );
    if (NOT g_U43103)
    {
        if (iVar3 >= g_U43102)
        {
            sub_188064( 0 );
            g_U43103 = 1;
            g_U15811[68] = 1;
        }
    }
    return;
}

void sub_188064(unknown uParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    iVar3 = 0;
    if (NOT g_U43089[uParam0]._fU0)
    {
        iVar3 = g_U43089[uParam0]._fU8;
        if (iVar3 > 0)
        {
            sub_90427( 7, iVar3 );
            g_U43089[uParam0]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_188202()
{
    if (NOT (g_U10540 == nil))
    {
        if (NOT (IS_THREAD_ACTIVE( g_U10540 )))
        {
            sub_45223( 0 );
        }
    }
    return;
}

void sub_188257()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        if (NOT (g_U28734[I]._fU0 == 37))
        {
            if (sub_74661( g_U28734[I]._fU0, 1, 0 ))
            {
                sub_75012( ref g_U28734[I]._fU20, ref g_U28734[I]._fU4, 0 );
                sub_78307( ref g_U28734[I]._fU20, ref g_U28734[I]._fU4 );
                sub_46107();
            }
        }
    }
    return;
}

void sub_188401()
{
    int I;

    I = 0;
    for ( I = 0; I < 14; I++ )
    {
        sub_188427( I );
    }
    return;
}

void sub_188427(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    iVar4 = 0;
    if (NOT g_U15904[uParam0]._fU0)
    {
        return;
    }
    if (g_U15904[uParam0]._fU12)
    {
        if (sub_79602())
        {
            return;
        }
        switch (sub_79775())
        {
            case 1:
            case 2:
            g_U15904[uParam0]._fU12 = 0;
            sub_188541( uParam0 );
            g_U15904[uParam0]._fU4 = g_U15904[uParam0]._fU8 + iVar3;
            return;
        }
        g_U15904[uParam0]._fU12 = 0;
        g_U15904[uParam0]._fU0 = 0;
        g_U15904[uParam0]._fU16 = 1;
        sub_188541( uParam0 );
        sub_46107();
        sub_89111( g_U15975._fU0, 0 );
        sub_188760( uParam0 );
        return;
    }
    if (g_U12379)
    {
        iVar4 = g_U15904[uParam0]._fU4 - iVar3;
        if (iVar4 < 20000)
        {
            g_U15904[uParam0]._fU4 = 30000 + iVar3;
        }
        return;
    }
    if (g_U15904[uParam0]._fU4 > iVar3)
    {
        return;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_8409() )))
    {
        g_U15904[uParam0]._fU4 = 30000 + iVar3;
        return;
    }
    if ((((((IS_THREAD_ACTIVE( g_U818 )) || (IS_WANTED_LEVEL_GREATER( sub_8409(), 0 ))) || (sub_83873())) || (sub_83677())) || (sub_84280( 0 ))) || (sub_83924()))
    {
        g_U15904[uParam0]._fU4 = 30000 + iVar3;
        return;
    }
    if (sub_189041( uParam0 ))
    {
        g_U15904[uParam0]._fU4 = 30000 + iVar3;
        return;
    }
    if (sub_189141())
    {
        g_U15904[uParam0]._fU4 = 30000 + iVar3;
        return;
    }
    if (sub_189303( uParam0, ref g_U15975._fU0 ))
    {
        g_U15904[uParam0]._fU12 = 1;
        sub_46107();
        return;
    }
    g_U15904[uParam0]._fU4 = 30000 + iVar3;
    return;
}

void sub_188541(int iParam0)
{
    int iVar3;
    int iVar4;
    int I;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    iVar4 = 0;
    I = 0;
    for ( I = 0; I < 14; I++ )
    {
        if (g_U15904[I]._fU0)
        {
            if (NOT (I == iParam0))
            {
                iVar4 = g_U15904[I]._fU4 - iVar3;
                if (iVar4 < 7000)
                {
                    g_U15904[I]._fU4 = iVar3 + 30000;
                }
            }
        }
    }
    return;
}

void sub_188760(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    switch (uVar3)
    {
        case 9:
        sub_136662( 10, 180000, 300000 );
        break;
        case 6:
        g_U15811[41] = 1;
        break;
    }
    return;
}

int sub_189041(int iParam0)
{
    int I;

    I = 0;
    for ( I = 0; I < 14; I++ )
    {
        if (NOT (I == iParam0))
        {
            if (g_U15904[I]._fU12)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_189141()
{
    if (g_U43561)
    {
        PRINTSTRING( "Check_For_Game_Specific_Ambient_Phonecall_Restrictions: E2 stats are still on-screen\n" );
        return 1;
    }
    return 0;
}

void sub_189303(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    int Result;

    uVar4 = uParam0;
    Result = 0;
    switch (uVar4)
    {
        case 0:
        (uParam1^) = 0;
        if (((((NOT g_U22807[(uParam1^)]) AND (NOT (sub_157706( 0 )))) AND (NOT (sub_189466( (uParam1^) )))) AND (NOT (sub_189536( uParam0, (uParam1^) )))) AND (sub_98044( (uParam1^), 30000 )))
        {
            Result = sub_85252( (uParam1^), "E2MF1_BLOG", "E2MF2AU", 10000, 0 );
        }
        break;
        case 1:
        (uParam1^) = 0;
        if (((((NOT g_U22807[(uParam1^)]) AND (NOT (sub_157706( 0 )))) AND (NOT (sub_189466( (uParam1^) )))) AND (NOT (sub_189536( uParam0, (uParam1^) )))) AND (sub_98044( (uParam1^), 30000 )))
        {
            Result = sub_85252( (uParam1^), "PHOLDER_E2", "E2MF1AU", 10000, 0 );
        }
        break;
        case 2:
        (uParam1^) = 0;
        if (((((NOT g_U22807[(uParam1^)]) AND (NOT (sub_157706( 0 )))) AND (NOT (sub_189466( (uParam1^) )))) AND (NOT (sub_189536( uParam0, (uParam1^) )))) AND (sub_98044( (uParam1^), 30000 )))
        {
            Result = sub_85252( (uParam1^), "E2MF2_CALL4", "E2MF2AU", 10000, 0 );
        }
        break;
        case 3:
        (uParam1^) = 0;
        if (((((NOT g_U22807[(uParam1^)]) AND (NOT (sub_157706( 0 )))) AND (NOT (sub_189466( (uParam1^) )))) AND (NOT (sub_189536( uParam0, (uParam1^) )))) AND (sub_98044( (uParam1^), 30000 )))
        {
            Result = sub_85252( (uParam1^), "E2MF1_EDED", "E2MF2AU", 10000, 0 );
        }
        break;
        case 4:
        (uParam1^) = 0;
        if (((((NOT g_U22807[(uParam1^)]) AND (NOT (sub_157706( 0 )))) AND (NOT (sub_189466( (uParam1^) )))) AND (NOT (sub_189536( uParam0, (uParam1^) )))) AND (sub_98044( (uParam1^), 30000 )))
        {
            Result = sub_85252( (uParam1^), "E2MF1_SUSP", "E2MF2AU", 10000, 0 );
        }
        break;
        case 5:
        (uParam1^) = 0;
        if (((((NOT g_U22807[(uParam1^)]) AND (NOT (sub_157706( 0 )))) AND (NOT (sub_189466( (uParam1^) )))) AND (NOT (sub_189536( uParam0, (uParam1^) )))) AND (sub_98044( (uParam1^), 30000 )))
        {
            Result = sub_85252( (uParam1^), "E2MF1_BLWUP", "E2MF2AU", 10000, 0 );
        }
        break;
        case 6:
        (uParam1^) = 1;
        if (((((NOT g_U22807[(uParam1^)]) AND (NOT (sub_157706( 1 )))) AND (NOT (sub_189466( (uParam1^) )))) AND (NOT (sub_189536( uParam0, (uParam1^) )))) AND (sub_98044( (uParam1^), 30000 )))
        {
            Result = sub_85252( (uParam1^), "E2MF1_MCALL", "E2MF1AU", 10000, 0 );
        }
        break;
        case 7:
        (uParam1^) = 4;
        if (((((NOT g_U22807[(uParam1^)]) AND (NOT (sub_157706( 4 )))) AND (NOT (sub_189466( (uParam1^) )))) AND (NOT (sub_189536( uParam0, (uParam1^) )))) AND (sub_98044( (uParam1^), 30000 )))
        {
            Result = sub_85252( (uParam1^), "E2MF1_MCAL2", "E2MF1AU", 10000, 0 );
        }
        break;
        case 8:
        (uParam1^) = 2;
        if (((((NOT g_U22807[(uParam1^)]) AND (NOT (sub_157706( 2 )))) AND (NOT (sub_189466( (uParam1^) )))) AND (NOT (sub_189536( uParam0, (uParam1^) )))) AND (sub_98044( (uParam1^), 30000 )))
        {
            Result = sub_85252( (uParam1^), "E2MF1_LPHAN", "E2MF1AU", 10000, 0 );
        }
        break;
        case 9:
        (uParam1^) = 5;
        if (((((NOT g_U22807[(uParam1^)]) AND (NOT (sub_157706( 5 )))) AND (NOT (sub_189466( (uParam1^) )))) AND (NOT (sub_189536( uParam0, (uParam1^) )))) AND (sub_98044( (uParam1^), 30000 )))
        {
            Result = sub_85252( (uParam1^), "E2MF1_RAY3", "E2MF1AU", 10000, 0 );
        }
        break;
        case 10:
        (uParam1^) = 5;
        if (((((NOT g_U22807[(uParam1^)]) AND (NOT (sub_157706( 5 )))) AND (NOT (sub_189466( (uParam1^) )))) AND (NOT (sub_189536( uParam0, (uParam1^) )))) AND (sub_98044( (uParam1^), 30000 )))
        {
            Result = sub_85252( (uParam1^), "E2MF1_RAY7", "E2MF1AU", 10000, 0 );
        }
        break;
        case 11:
        (uParam1^) = 28;
        if (NOT sub_190728())
        {
            Result = sub_85252( (uParam1^), "E2MF1_CM1", "E2MF2AU", 10000, 0 );
        }
        break;
        case 12:
        (uParam1^) = 28;
        if (NOT sub_190728())
        {
            Result = sub_85252( (uParam1^), "E2MF1_CM2", "E2MF2AU", 10000, 0 );
        }
        break;
        case 13:
        (uParam1^) = 28;
        if (NOT sub_190728())
        {
            Result = sub_85252( (uParam1^), "E2MF1_CM3", "E2MF2AU", 10000, 0 );
        }
        break;
        default: sub_24711( "Flow_Make_Ambient_Phonecall: Unknown ambient phone call ID" );
    }
    return Result;
}

int sub_189466(int iParam0)
{
    if (iParam0 < 8)
    {
        if (g_U20825[iParam0]._fU16)
        {
            return 1;
        }
    }
    if (g_U29760)
    {
        return 1;
    }
    return 0;
}

int sub_189536(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = false;
    if (NOT g_U16014[uParam1]._fU212._fU0)
    {
        bVar4 = true;
    }
    if (bVar4)
    {
        g_U15904[uParam0]._fU0 = 0;
        g_U15904[uParam0]._fU16 = 1;
        return 1;
    }
    return 0;
}

int sub_190728()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    float fVar5;

    if (NOT (IS_PLAYER_PLAYING( sub_8409() )))
    {
        return 1;
    }
    GET_CHAR_COORDINATES( sub_16171(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    fVar5 = 0.00000000;
    fVar5 = sub_37676( g_U11582[35]._fU0, uVar2 );
    if (fVar5 < 500.00000000)
    {
        return 1;
    }
    fVar5 = sub_37676( g_U11582[36]._fU0, uVar2 );
    if (fVar5 < 500.00000000)
    {
        return 1;
    }
    fVar5 = sub_37676( g_U11582[37]._fU0, uVar2 );
    if (fVar5 < 500.00000000)
    {
        return 1;
    }
    return 0;
}

void sub_191220()
{
    int I;

    if (NOT g_U30318._fU0)
    {
        return;
    }
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (g_U30257[I]._fU0)
        {
            if (g_U30257[I]._fU4)
            {
                if (NOT g_U30257[I]._fU24)
                {
                    if (sub_85689( g_U30257[I]._fU8 ))
                    {
                        g_U30257[I]._fU24 = 1;
                    }
                }
            }
        }
    }
    return;
}

void sub_191362()
{
    int iVar2;
    int I;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    I = 0;
    for ( I = 0; I < 72; I++ )
    {
        if (DOES_BLIP_EXIST( g_U11582[I]._fU32 ))
        {
            if (NOT (g_U11343._fU660[I] == 0))
            {
                if (g_U11343._fU660[I] < iVar2)
                {
                    FLASH_BLIP( g_U11582[I]._fU32, 0 );
                    g_U11343._fU660[I] = 0;
                    CHANGE_BLIP_PRIORITY( g_U11582[I]._fU32, l_U6 );
                }
            }
        }
    }
    return;
}

void sub_191543()
{
    int J;
    int I;

    if (sub_91689())
    {
        l_U941 = l_U197 + 60000;
        return;
    }
    if (l_U941 == 0)
    {
        return;
    }
    if (l_U197 < l_U941)
    {
        return;
    }
    J = 0;
    for ( J = 0; J < 37; J++ )
    {
        g_U16014[J]._fU4 = 0;
        I = 0;
        for ( I = 0; I < 24; I++ )
        {
            g_U16014[J]._fU8[1]._fU0[I] = 0;
        }
    }
    l_U941 = 0;
    return;
}

void sub_191720()
{
    if (CAN_START_MISSION_PASSED_TUNE())
    {
        if (NOT (g_U25 == 0))
        {
            if (g_U43588)
            {
                PRINTSTRING( "Autosave: Calling Mission Results to Display\n" );
                sub_191819();
            }
            else if (g_U43589)
            {
                PRINTSTRING( "Autosave: Calling Base jump Results to Display\n" );
                sub_192129();
            }
            else if (g_U43591)
            {
                PRINTSTRING( "Autosave: Calling Drug Wars Results to Display\n" );
                sub_192860();
            }
            else if (g_U43592)
            {
                PRINTSTRING( "Autosave: Calling Triathlon Results to Display\n" );
                sub_193588();
            };;;;
            TRIGGER_MISSION_COMPLETE_AUDIO( g_U25 );
            sub_176865();
        }
        g_U25 = 0;
    }
    if (IS_AUTO_SAVE_IN_PROGRESS())
    {
        sub_176865();
        return;
    }
    if (g_U10953._fU4)
    {
        g_U10953._fU4 = 0;
        sub_89199( g_U10953._fU28, 37, 64537 );
        g_U10953._fU28 = 5;
        if (g_U10953._fU16)
        {
            g_U10953._fU16 = 0;
            if (IS_PLAYER_PLAYING( sub_8409() ))
            {
                SET_PLAYER_CONTROL( sub_8409(), 1 );
            }
        }
        return;
    }
    if (NOT g_U10953._fU0)
    {
        return;
    }
    if (g_U12379)
    {
        if (g_U10953._fU12)
        {
            sub_16914();
            return;
        }
        return;
    }
    g_U10953._fU12 = 1;
    if (GET_MISSION_FLAG())
    {
        return;
    }
    if (sub_91689())
    {
        return;
    }
    if (NOT IS_SCREEN_FADED_IN())
    {
        if (NOT g_U10953._fU20)
        {
            return;
        }
        else if (IS_SCREEN_FADING_OUT())
        {
            return;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_8409() )))
    {
        return;
    }
    if (g_U10953._fU8)
    {
        return;
    }
    if (IS_FRONTEND_FADING())
    {
        return;
    }
    g_U10953._fU0 = 0;
    g_U10953._fU8 = 0;
    g_U10953._fU20 = 0;
    if (g_U43628 == 1)
    {
        if (sub_194591() == 0)
        {
            sub_194674();
            sub_194897();
            sub_194990();
            sub_207675();
        }
    }
    g_U43628 = 0;
    DO_AUTO_SAVE();
    g_U10953._fU4 = 1;
    if (NOT IS_AUTO_SAVE_IN_PROGRESS())
    {
        PRINTSTRING( "===================AUTOSAVE SWITCHED OFF\n" );
        if (NOT g_U10953._fU24)
        {
            PRINTSTRING( "===================FIRST AUTOSAVE\n" );
            PRINT_HELP( "SAVEOFF" );
        }
    }
    g_U10953._fU24 = 1;
    sub_176865();
    return;
}

void sub_191819()
{
    if (HAS_SCRIPT_LOADED( "MissionStatTracker" ))
    {
        START_NEW_SCRIPT( "MissionStatTracker", 1820 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "MissionStatTracker" );
        g_U43491 = 1;
    }
    else
    {
        PRINTNL();
        PRINTSTRING( "MissionStatTracker isn't loaded but trying to call - Tell Brenda if you're missing result screen" );
    }
    return;
}

void sub_192129()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "BasejumpScreen" )) == 0)
    {
        if (HAS_SCRIPT_LOADED( "BasejumpScreen" ))
        {
            START_NEW_SCRIPT( "BasejumpScreen", 1024 );
            MARK_SCRIPT_AS_NO_LONGER_NEEDED( "BasejumpScreen" );
            g_U43492 = 1;
        }
        else
        {
            PRINTNL();
            PRINTNL();
            PRINTSTRING( "*******************************************************" );
            PRINTSTRING( "MissionStatTracker isn't loaded but trying to call - Tell Brenda if you're missing result screen" );
            PRINTNL();
            PRINTSTRING( "*******************************************************" );
            PRINTNL();
        }
    }
    else
    {
        PRINTNL();
        PRINTNL();
        PRINTSTRING( "*******************************************************" );
        PRINTSTRING( "Already a BasejumpScreen running - Tell Brenda if you're missing result screen" );
        PRINTNL();
        PRINTSTRING( "*******************************************************" );
        PRINTNL();
    }
    return;
}

void sub_192860()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "DrugWarScreen" )) == 0)
    {
        if (HAS_SCRIPT_LOADED( "DrugWarScreen" ))
        {
            START_NEW_SCRIPT( "DrugWarScreen", 1024 );
            MARK_SCRIPT_AS_NO_LONGER_NEEDED( "DrugWarScreen" );
            g_U43494 = 1;
        }
        else
        {
            PRINTNL();
            PRINTNL();
            PRINTSTRING( "*******************************************************" );
            PRINTNL();
            PRINTSTRING( "DrugWarScreen isn't loaded but trying to call - Tell Brenda if you're missing result screen" );
            PRINTNL();
            PRINTSTRING( "*******************************************************" );
            PRINTNL();
        }
    }
    else
    {
        PRINTNL();
        PRINTNL();
        PRINTSTRING( "*******************************************************" );
        PRINTSTRING( "Already a DrugWarScreen running - Tell Brenda if you're missing result screen" );
        PRINTNL();
        PRINTSTRING( "*******************************************************" );
        PRINTNL();
    }
    return;
}

void sub_193588()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "RacesScreen" )) == 0)
    {
        if (HAS_SCRIPT_LOADED( "RacesScreen" ))
        {
            START_NEW_SCRIPT( "RacesScreen", 1024 );
            MARK_SCRIPT_AS_NO_LONGER_NEEDED( "RacesScreen" );
            g_U43495 = 1;
        }
        else
        {
            PRINTNL();
            PRINTNL();
            PRINTSTRING( "*******************************************************" );
            PRINTSTRING( "MissionStatTracker isn't loaded but trying to call - Tell Brenda if you're missing result screen" );
            PRINTNL();
            PRINTSTRING( "*******************************************************" );
            PRINTNL();
        }
    }
    else
    {
        PRINTNL();
        PRINTNL();
        PRINTSTRING( "*******************************************************" );
        PRINTSTRING( "Already a RacesScreen running - Tell Brenda if you're missing result screen" );
        PRINTNL();
        PRINTSTRING( "*******************************************************" );
        PRINTNL();
    }
    return;
}

int sub_194591()
{
    if (((((g_U43593 == 1) || (g_U43594 == 1)) || (g_U43595 == 1)) || (g_U43596 == 1)) || (g_U43597 == 1))
    {
        return 1;
    }
    return 0;
}

void sub_194674()
{
    g_U43550 = sub_194690( g_U43503 );
    g_U43551 = sub_194753( g_U43503 );
    g_U43552 = sub_194810( g_U43503 );
    g_U43553 = sub_194859( g_U43503 );
    return;
}

void sub_194690(int iParam0)
{
    int iVar3;
    int iVar4;
    int Result;

    iVar3 = iParam0 / 1000;
    iVar4 = iVar3 / 60;
    Result = iVar4 / 60;
    Result = Result mod 24;
    return Result;
}

void sub_194753(int iParam0)
{
    int iVar3;
    int Result;

    iVar3 = iParam0 / 1000;
    Result = iVar3 / 60;
    Result = Result mod 60;
    return Result;
}

void sub_194810(int iParam0)
{
    int Result;

    Result = iParam0 / 1000;
    Result = Result mod 60;
    return Result;
}

int sub_194859(int iParam0)
{
    return iParam0 mod 1000;
}

void sub_194897()
{
    g_U43554 = sub_194690( g_U43506 );
    g_U43555 = sub_194753( g_U43506 );
    g_U43556 = sub_194810( g_U43506 );
    g_U43557 = sub_194859( g_U43506 );
    return;
}

void sub_194990()
{
    g_U43560 = 50;
    if (g_U43137 == 0)
    {
        if ((g_U43563 == 1) || (sub_195032()))
        {
            g_U43560 += 16;
        }
        if ((g_U43568 == 1) || (sub_195894()))
        {
            g_U43560 += 16;
        }
        if ((g_U43564 == 1) || (sub_196653()))
        {
            g_U43560 += 16;
        }
        if ((((g_U43563 == 1) || (sub_195032())) AND ((g_U43568 == 1) || (sub_195894()))) AND ((g_U43564 == 1) || (sub_196653())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 1)
    {
        if ((g_U43563 == 1) || (sub_195032()))
        {
            g_U43560 += 12;
        }
        if ((g_U43568 == 1) || (sub_195894()))
        {
            g_U43560 += 12;
        }
        if ((g_U43567 == 1) || (sub_197370()))
        {
            g_U43560 += 12;
        }
        if ((g_U43571 == 1) || (sub_197986()))
        {
            g_U43560 += 12;
        }
        if (((((g_U43563 == 1) || (sub_195032())) AND ((g_U43568 == 1) || (sub_195894()))) AND ((g_U43567 == 1) || (sub_197370()))) AND ((g_U43571 == 1) || (sub_197986())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 2)
    {
        if ((g_U43563 == 1) || (sub_195032()))
        {
            g_U43560 += 10;
        }
        if ((g_U43568 == 1) || (sub_195894()))
        {
            g_U43560 += 10;
        }
        if ((g_U43566 == 1) || (sub_198806()))
        {
            g_U43560 += 10;
        }
        if ((g_U43567 == 1) || (sub_197370()))
        {
            g_U43560 += 10;
        }
        if ((g_U43571 == 1) || (sub_197986()))
        {
            g_U43560 += 10;
        }
    }
    else if (g_U43137 == 3)
    {
        if ((g_U43563 == 1) || (sub_195032()))
        {
            g_U43560 += 25;
        }
        if ((g_U43564 == 1) || (sub_196653()))
        {
            g_U43560 += 25;
        }
    }
    else if (g_U43137 == 4)
    {
        if ((g_U43563 == 1) || (sub_195032()))
        {
            g_U43560 += 16;
        }
        if ((g_U43568 == 1) || (sub_195894()))
        {
            g_U43560 += 16;
        }
        if ((g_U43570 == 1) || (sub_199650()))
        {
            g_U43560 += 16;
        }
        if ((((g_U43563 == 1) || (sub_195032())) AND ((g_U43568 == 1) || (sub_195894()))) AND ((g_U43570 == 1) || (sub_199650())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 5)
    {
        if ((g_U43563 == 1) || (sub_195032()))
        {
            g_U43560 += 12;
        }
        if ((g_U43568 == 1) || (sub_195894()))
        {
            g_U43560 += 12;
        }
        if ((g_U43571 == 1) || (sub_197986()))
        {
            g_U43560 += 12;
        }
        if ((g_U43572 == 1) || (sub_200353()))
        {
            g_U43560 += 12;
        }
        if (((((g_U43563 == 1) || (sub_195032())) AND ((g_U43568 == 1) || (sub_195894()))) AND ((g_U43571 == 1) || (sub_197986()))) AND ((g_U43572 == 1) || (sub_200353())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 6)
    {
        if ((g_U43563 == 1) || (sub_195032()))
        {
            g_U43560 += 16;
        }
        if ((g_U43568 == 1) || (sub_195894()))
        {
            g_U43560 += 16;
        }
        if ((g_U43571 == 1) || (sub_197986()))
        {
            g_U43560 += 16;
        }
        if ((((g_U43563 == 1) || (sub_195032())) AND ((g_U43568 == 1) || (sub_195894()))) AND ((g_U43571 == 1) || (sub_197986())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 7)
    {
        if ((g_U43563 == 1) || (sub_195032()))
        {
            g_U43560 += 12;
        }
        if ((g_U43568 == 1) || (sub_195894()))
        {
            g_U43560 += 12;
        }
        if ((g_U43571 == 1) || (sub_197986()))
        {
            g_U43560 += 12;
        }
        if ((g_U43570 == 1) || (sub_199650()))
        {
            g_U43560 += 12;
        }
        if (((((g_U43563 == 1) || (sub_195032())) AND ((g_U43568 == 1) || (sub_195894()))) AND ((g_U43571 == 1) || (sub_197986()))) AND ((g_U43570 == 1) || (sub_199650())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 8)
    {
        if ((g_U43563 == 1) || (sub_195032()))
        {
            g_U43560 += 16;
        }
        if ((g_U43568 == 1) || (sub_195894()))
        {
            g_U43560 += 16;
        }
        if ((g_U43564 == 1) || (sub_196653()))
        {
            g_U43560 += 16;
        }
        if ((((g_U43563 == 1) || (sub_195032())) AND ((g_U43568 == 1) || (sub_195894()))) AND ((g_U43564 == 1) || (sub_196653())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 9)
    {
        if ((g_U43563 == 1) || (sub_195032()))
        {
            g_U43560 += 12;
        }
        if ((g_U43564 == 1) || (sub_196653()))
        {
            g_U43560 += 12;
        }
        if ((g_U43571 == 1) || (sub_197986()))
        {
            g_U43560 += 12;
        }
        if ((g_U43572 == 1) || (sub_200353()))
        {
            g_U43560 += 12;
        }
        if (((((g_U43563 == 1) || (sub_195032())) AND ((g_U43564 == 1) || (sub_196653()))) AND ((g_U43571 == 1) || (sub_197986()))) AND ((g_U43572 == 1) || (sub_200353())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 10)
    {
        if ((g_U43563 == 1) || (sub_195032()))
        {
            g_U43560 += 25;
        }
        if ((g_U43570 == 1) || (sub_199650()))
        {
            g_U43560 += 25;
        }
    }
    else if (g_U43137 == 11)
    {
        if ((g_U43563 == 1) || (sub_195032()))
        {
            g_U43560 += 12;
        }
        if ((g_U43568 == 1) || (sub_195894()))
        {
            g_U43560 += 12;
        }
        if ((g_U43567 == 1) || (sub_197370()))
        {
            g_U43560 += 12;
        }
        if ((g_U43566 == 1) || (sub_198806()))
        {
            g_U43560 += 12;
        }
        if (((((g_U43563 == 1) || (sub_195032())) AND ((g_U43568 == 1) || (sub_195894()))) AND ((g_U43566 == 1) || (sub_198806()))) AND ((g_U43567 == 1) || (sub_197370())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 12)
    {
        if ((g_U43563 == 1) || (sub_195032()))
        {
            g_U43560 += 7;
        }
        if ((g_U43568 == 1) || (sub_195894()))
        {
            g_U43560 += 7;
        }
        if ((g_U43564 == 1) || (sub_196653()))
        {
            g_U43560 += 7;
        }
        if ((g_U43566 == 1) || (sub_198806()))
        {
            g_U43560 += 7;
        }
        if ((g_U43567 == 1) || (sub_197370()))
        {
            g_U43560 += 7;
        }
        if ((g_U43571 == 1) || (sub_197986()))
        {
            g_U43560 += 7;
        }
        if ((g_U43565 == 1) || (sub_202392()))
        {
            g_U43560 += 7;
        }
        if ((((((((g_U43563 == 1) || (sub_195032())) AND ((g_U43568 == 1) || (sub_195894()))) AND ((g_U43564 == 1) || (sub_196653()))) AND ((g_U43566 == 1) || (sub_198806()))) AND ((g_U43567 == 1) || (sub_197370()))) AND ((g_U43571 == 1) || (sub_197986()))) AND ((g_U43565 == 1) || (sub_202392())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 13)
    {
        if ((g_U43563 == 1) || (sub_195032()))
        {
            g_U43560 += 12;
        }
        if ((g_U43568 == 1) || (sub_195894()))
        {
            g_U43560 += 12;
        }
        if ((g_U43571 == 1) || (sub_197986()))
        {
            g_U43560 += 12;
        }
        if ((g_U43572 == 1) || (sub_200353()))
        {
            g_U43560 += 12;
        }
        if (((((g_U43563 == 1) || (sub_195032())) AND ((g_U43568 == 1) || (sub_195894()))) AND ((g_U43571 == 1) || (sub_197986()))) AND ((g_U43572 == 1) || (sub_200353())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 14)
    {
        if ((g_U43563 == 1) || (sub_195032()))
        {
            g_U43560 += 12;
        }
        if ((g_U43564 == 1) || (sub_196653()))
        {
            g_U43560 += 12;
        }
        if ((g_U43565 == 1) || (sub_202392()))
        {
            g_U43560 += 12;
        }
        if ((g_U43571 == 1) || (sub_197986()))
        {
            g_U43560 += 12;
        }
        if (((((g_U43563 == 1) || (sub_195032())) AND ((g_U43564 == 1) || (sub_196653()))) AND ((g_U43565 == 1) || (sub_202392()))) AND ((g_U43571 == 1) || (sub_197986())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 15)
    {
        if ((g_U43563 == 1) || (sub_195032()))
        {
            g_U43560 += 16;
        }
        if ((g_U43568 == 1) || (sub_195894()))
        {
            g_U43560 += 16;
        }
        if ((g_U43569 == 1) || (sub_203618()))
        {
            g_U43560 += 16;
        }
        if ((((g_U43563 == 1) || (sub_195032())) AND ((g_U43568 == 1) || (sub_195894()))) AND ((g_U43569 == 1) || (sub_203618())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 16)
    {
        if ((g_U43563 == 1) || (sub_195032()))
        {
            g_U43560 += 8;
        }
        if ((g_U43568 == 1) || (sub_195894()))
        {
            g_U43560 += 8;
        }
        if ((g_U43566 == 1) || (sub_198806()))
        {
            g_U43560 += 8;
        }
        if ((g_U43567 == 1) || (sub_197370()))
        {
            g_U43560 += 8;
        }
        if ((g_U43569 == 1) || (sub_203618()))
        {
            g_U43560 += 8;
        }
        if ((g_U43573 == 1) || (sub_204430()))
        {
            g_U43560 += 8;
        }
        if (((((((g_U43563 == 1) || (sub_195032())) AND ((g_U43568 == 1) || (sub_195894()))) AND ((g_U43566 == 1) || (sub_198806()))) AND ((g_U43567 == 1) || (sub_197370()))) AND ((g_U43569 == 1) || (sub_203618()))) AND ((g_U43573 == 1) || (sub_204430())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 17)
    {
        if ((g_U43563 == 1) || (sub_195032()))
        {
            g_U43560 += 10;
        }
        if ((g_U43568 == 1) || (sub_195894()))
        {
            g_U43560 += 10;
        }
        if ((g_U43564 == 1) || (sub_196653()))
        {
            g_U43560 += 10;
        }
        if ((g_U43569 == 1) || (sub_203618()))
        {
            g_U43560 += 10;
        }
        if ((g_U43571 == 1) || (sub_197986()))
        {
            g_U43560 += 10;
        }
        if ((((((g_U43563 == 1) || (sub_195032())) AND ((g_U43568 == 1) || (sub_195894()))) AND ((g_U43564 == 1) || (sub_196653()))) AND ((g_U43571 == 1) || (sub_197986()))) AND ((g_U43569 == 1) || (sub_203618())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 18)
    {
        if ((g_U43563 == 1) || (sub_195032()))
        {
            g_U43560 += 12;
        }
        if ((g_U43568 == 1) || (sub_195894()))
        {
            g_U43560 += 12;
        }
        if ((g_U43571 == 1) || (sub_197986()))
        {
            g_U43560 += 12;
        }
        if ((g_U43569 == 1) || (sub_203618()))
        {
            g_U43560 += 12;
        }
        if (((((g_U43563 == 1) || (sub_195032())) AND ((g_U43568 == 1) || (sub_195894()))) AND ((g_U43571 == 1) || (sub_197986()))) AND ((g_U43569 == 1) || (sub_203618())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 19)
    {
        if ((g_U43563 == 1) || (sub_195032()))
        {
            g_U43560 += 12;
        }
        if ((g_U43568 == 1) || (sub_195894()))
        {
            g_U43560 += 12;
        }
        if ((g_U43566 == 1) || (sub_198806()))
        {
            g_U43560 += 12;
        }
        if ((g_U43567 == 1) || (sub_197370()))
        {
            g_U43560 += 12;
        }
        if (((((g_U43563 == 1) || (sub_195032())) AND ((g_U43568 == 1) || (sub_195894()))) AND ((g_U43566 == 1) || (sub_198806()))) AND ((g_U43567 == 1) || (sub_197370())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 20)
    {
        if ((g_U43563 == 1) || (sub_195032()))
        {
            g_U43560 += 12;
        }
        if ((g_U43568 == 1) || (sub_195894()))
        {
            g_U43560 += 12;
        }
        if ((g_U43566 == 1) || (sub_198806()))
        {
            g_U43560 += 12;
        }
        if ((g_U43567 == 1) || (sub_197370()))
        {
            g_U43560 += 12;
        }
        if (((((g_U43563 == 1) || (sub_195032())) AND ((g_U43568 == 1) || (sub_195894()))) AND ((g_U43567 == 1) || (sub_197370()))) AND ((g_U43566 == 1) || (sub_198806())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 21)
    {
        if ((g_U43563 == 1) || (sub_195032()))
        {
            g_U43560 += 12;
        }
        if ((g_U43568 == 1) || (sub_195894()))
        {
            g_U43560 += 12;
        }
        if ((g_U43571 == 1) || (sub_197986()))
        {
            g_U43560 += 12;
        }
        if ((g_U43572 == 1) || (sub_200353()))
        {
            g_U43560 += 12;
        }
        if ((g_U43563 == 1) || (sub_195032()))
        {
            if ((g_U43568 == 1) || (sub_195894()))
            {
                if ((g_U43571 == 1) || (sub_197986()))
                {
                    if ((g_U43572 == 1) || (sub_200353()))
                    {
                        g_U43560 = 100;
                    }
                }
            }
        }
    }
    else if (g_U43137 == 22)
    {
        if ((g_U43563 == 1) || (sub_195032()))
        {
            g_U43560 += 7;
        }
        if ((g_U43568 == 1) || (sub_195894()))
        {
            g_U43560 += 7;
        }
        if ((g_U43566 == 1) || (sub_198806()))
        {
            g_U43560 += 7;
        }
        if ((g_U43567 == 1) || (sub_197370()))
        {
            g_U43560 += 7;
        }
        if ((g_U43569 == 1) || (sub_203618()))
        {
            g_U43560 += 7;
        }
        if ((g_U43571 == 1) || (sub_197986()))
        {
            g_U43560 += 7;
        }
        if ((g_U43572 == 1) || (sub_200353()))
        {
            g_U43560 += 7;
        }
        if ((((((((g_U43563 == 1) || (sub_195032())) AND ((g_U43568 == 1) || (sub_195894()))) AND ((g_U43566 == 1) || (sub_198806()))) AND ((g_U43567 == 1) || (sub_197370()))) AND ((g_U43569 == 1) || (sub_203618()))) AND ((g_U43571 == 1) || (sub_197986()))) AND ((g_U43572 == 1) || (sub_200353())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 23)
    {
        if ((g_U43563 == 1) || (sub_195032()))
        {
            g_U43560 += 8;
        }
        if ((g_U43568 == 1) || (sub_195894()))
        {
            g_U43560 += 8;
        }
        if ((g_U43567 == 1) || (sub_197370()))
        {
            g_U43560 += 8;
        }
        if ((g_U43571 == 1) || (sub_197986()))
        {
            g_U43560 += 8;
        }
        if ((g_U43572 == 1) || (sub_200353()))
        {
            g_U43560 += 8;
        }
        if ((g_U43573 == 1) || (sub_204430()))
        {
            g_U43560 += 8;
        }
        if (((((((g_U43563 == 1) || (sub_195032())) AND ((g_U43568 == 1) || (sub_195894()))) AND ((g_U43567 == 1) || (sub_197370()))) AND ((g_U43571 == 1) || (sub_197986()))) AND ((g_U43572 == 1) || (sub_200353()))) AND ((g_U43573 == 1) || (sub_204430())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 24)
    {
        if ((g_U43563 == 1) || (sub_195032()))
        {
            g_U43560 += 10;
        }
        if ((g_U43568 == 1) || (sub_195894()))
        {
            g_U43560 += 10;
        }
        if ((g_U43566 == 1) || (sub_198806()))
        {
            g_U43560 += 10;
        }
        if ((g_U43567 == 1) || (sub_197370()))
        {
            g_U43560 += 10;
        }
        if ((g_U43571 == 1) || (sub_197986()))
        {
            g_U43560 += 10;
        }
    }
    else if (g_U43137 == 25)
    {
        if ((g_U43563 == 1) || (sub_195032()))
        {
            g_U43560 += 10;
        }
        if ((g_U43568 == 1) || (sub_195894()))
        {
            g_U43560 += 10;
        }
        if ((g_U43566 == 1) || (sub_198806()))
        {
            g_U43560 += 10;
        }
        if ((g_U43567 == 1) || (sub_197370()))
        {
            g_U43560 += 10;
        }
        if ((g_U43569 == 1) || (sub_203618()))
        {
            g_U43560 += 10;
        }
    };;;;;;;;;;;;;;;;;;;;;;;;;;
    if (sub_194591() == 0)
    {
        g_U43463[g_U43137] = g_U43560;
        PRINTNL();
        PRINTSTRING( "*********************************************" );
        PRINTNL();
        PRINTSTRING( "g_MissionFlairTotal[" );
        PRINTINT( g_U43137 );
        PRINTSTRING( "] = " );
        PRINTINT( g_U43560 );
        PRINTNL();
        PRINTSTRING( "*********************************************" );
        PRINTNL();
    }
    return;
}

int sub_195032()
{
    if (g_U43624 == 0)
    {
        if (sub_195055() <= (sub_195782( g_U43137 )))
        {
            return 1;
        }
    }
    return 0;
}

int sub_195055()
{
    if (g_U43137 == 0)
    {
        return GET_INT_STAT( 474 );
    }
    if (g_U43137 == 1)
    {
        return GET_INT_STAT( 478 );
    }
    if (g_U43137 == 2)
    {
        return GET_INT_STAT( 483 );
    }
    if (g_U43137 == 3)
    {
        return GET_INT_STAT( 489 );
    }
    if (g_U43137 == 21)
    {
        return GET_INT_STAT( 577 );
    }
    if (g_U43137 == 15)
    {
        return GET_INT_STAT( 543 );
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 549 );
    }
    if (g_U43137 == 17)
    {
        return GET_INT_STAT( 556 );
    }
    if (g_U43137 == 12)
    {
        return GET_INT_STAT( 524 );
    }
    if (g_U43137 == 13)
    {
        return GET_INT_STAT( 532 );
    }
    if (g_U43137 == 19)
    {
        return GET_INT_STAT( 567 );
    }
    if (g_U43137 == 20)
    {
        return GET_INT_STAT( 572 );
    }
    if (g_U43137 == 5)
    {
        return GET_INT_STAT( 492 );
    }
    if (g_U43137 == 4)
    {
        return GET_INT_STAT( 497 );
    }
    if (g_U43137 == 6)
    {
        return GET_INT_STAT( 501 );
    }
    if (g_U43137 == 7)
    {
        return GET_INT_STAT( 505 );
    }
    if (g_U43137 == 8)
    {
        return GET_INT_STAT( 510 );
    }
    if (g_U43137 == 9)
    {
        return GET_INT_STAT( 610 );
    }
    if (g_U43137 == 14)
    {
        return GET_INT_STAT( 537 );
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 582 );
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 590 );
    }
    if (g_U43137 == 24)
    {
        return GET_INT_STAT( 598 );
    }
    if (g_U43137 == 18)
    {
        return GET_INT_STAT( 562 );
    }
    if (g_U43137 == 10)
    {
        return GET_INT_STAT( 515 );
    }
    if (g_U43137 == 25)
    {
        return GET_INT_STAT( 604 );
    }
    if (g_U43137 == 11)
    {
        return GET_INT_STAT( 519 );
    }
    return 0;
}

void sub_195782(unknown uParam0)
{
    int iVar3;
    int Result;
    unknown uVar5;

    iVar3 = g_U43138[uParam0]._fU0 * 60000;
    Result = (g_U43138[uParam0]._fU4 * 1000) + iVar3;
    return Result;
}

int sub_195894()
{
    if (g_U43624 == 0)
    {
        if (sub_195917() <= g_U43138[g_U43137]._fU8)
        {
            return 1;
        }
    }
    return 0;
}

int sub_195917()
{
    if (g_U43137 == 0)
    {
        return GET_INT_STAT( 475 );
    }
    if (g_U43137 == 1)
    {
        return GET_INT_STAT( 479 );
    }
    if (g_U43137 == 2)
    {
        return GET_INT_STAT( 484 );
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        return GET_INT_STAT( 578 );
    }
    if (g_U43137 == 15)
    {
        return GET_INT_STAT( 544 );
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 550 );
    }
    if (g_U43137 == 17)
    {
        return GET_INT_STAT( 557 );
    }
    if (g_U43137 == 12)
    {
        return GET_INT_STAT( 525 );
    }
    if (g_U43137 == 13)
    {
        return GET_INT_STAT( 533 );
    }
    if (g_U43137 == 19)
    {
        return GET_INT_STAT( 568 );
    }
    if (g_U43137 == 20)
    {
        return GET_INT_STAT( 573 );
    }
    if (g_U43137 == 5)
    {
        return GET_INT_STAT( 493 );
    }
    if (g_U43137 == 4)
    {
        return GET_INT_STAT( 498 );
    }
    if (g_U43137 == 6)
    {
        return GET_INT_STAT( 502 );
    }
    if (g_U43137 == 7)
    {
        return GET_INT_STAT( 506 );
    }
    if (g_U43137 == 8)
    {
        return GET_INT_STAT( 511 );
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 583 );
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 591 );
    }
    if (g_U43137 == 24)
    {
        return GET_INT_STAT( 599 );
    }
    if (g_U43137 == 18)
    {
        return GET_INT_STAT( 563 );
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        return GET_INT_STAT( 605 );
    }
    if (g_U43137 == 11)
    {
        return GET_INT_STAT( 520 );
    }
    return 0;
}

int sub_196653()
{
    if (g_U43624 == 0)
    {
        if (sub_196676() <= g_U43138[g_U43137]._fU12)
        {
            return 1;
        }
    }
    return 0;
}

int sub_196676()
{
    if (g_U43137 == 0)
    {
        return GET_INT_STAT( 476 );
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        ;
    }
    if (g_U43137 == 3)
    {
        return GET_INT_STAT( 490 );
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        ;
    }
    if (g_U43137 == 17)
    {
        return GET_INT_STAT( 559 );
    }
    if (g_U43137 == 12)
    {
        return GET_INT_STAT( 526 );
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        return GET_INT_STAT( 513 );
    }
    if (g_U43137 == 9)
    {
        return GET_INT_STAT( 611 );
    }
    if (g_U43137 == 14)
    {
        return GET_INT_STAT( 540 );
    }
    if (g_U43137 == 22)
    {
        ;
    }
    if (g_U43137 == 23)
    {
        ;
    }
    if (g_U43137 == 24)
    {
        ;
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        ;
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

int sub_197370()
{
    if (g_U43624 == 0)
    {
        if (sub_197393() >= g_U43138[g_U43137]._fU20)
        {
            return 1;
        }
    }
    return 0;
}

int sub_197393()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        return GET_INT_STAT( 480 );
    }
    if (g_U43137 == 2)
    {
        return GET_INT_STAT( 486 );
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 552 );
    }
    if (g_U43137 == 17)
    {
        ;
    }
    if (g_U43137 == 12)
    {
        return GET_INT_STAT( 528 );
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        return GET_INT_STAT( 570 );
    }
    if (g_U43137 == 20)
    {
        return GET_INT_STAT( 575 );
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 585 );
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 593 );
    }
    if (g_U43137 == 24)
    {
        return GET_INT_STAT( 601 );
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        return GET_INT_STAT( 607 );
    }
    if (g_U43137 == 11)
    {
        return GET_INT_STAT( 522 );
    }
    return 0;
}

int sub_197986()
{
    if (g_U43624 == 0)
    {
        if (sub_198009() == 1)
        {
            return 1;
        }
    }
    return 0;
}

int sub_198009()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        return GET_INT_STAT( 481 );
    }
    if (g_U43137 == 2)
    {
        return GET_INT_STAT( 487 );
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        return GET_INT_STAT( 579 );
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        ;
    }
    if (g_U43137 == 17)
    {
        return GET_INT_STAT( 560 );
    }
    if (g_U43137 == 12)
    {
        return GET_INT_STAT( 529 );
    }
    if (g_U43137 == 13)
    {
        return GET_INT_STAT( 534 );
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        return GET_INT_STAT( 495 );
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        return GET_INT_STAT( 503 );
    }
    if (g_U43137 == 7)
    {
        return GET_INT_STAT( 507 );
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        return GET_INT_STAT( 613 );
    }
    if (g_U43137 == 14)
    {
        return GET_INT_STAT( 541 );
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 587 );
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 594 );
    }
    if (g_U43137 == 24)
    {
        return GET_INT_STAT( 602 );
    }
    if (g_U43137 == 18)
    {
        return GET_INT_STAT( 564 );
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        ;
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

int sub_198806()
{
    if (g_U43624 == 0)
    {
        if (sub_198829() >= g_U43138[g_U43137]._fU16)
        {
            return 1;
        }
    }
    return 0;
}

int sub_198829()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        return GET_INT_STAT( 485 );
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 551 );
    }
    if (g_U43137 == 17)
    {
        ;
    }
    if (g_U43137 == 12)
    {
        return GET_INT_STAT( 527 );
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        return GET_INT_STAT( 569 );
    }
    if (g_U43137 == 20)
    {
        return GET_INT_STAT( 574 );
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 584 );
    }
    if (g_U43137 == 23)
    {
        ;
    }
    if (g_U43137 == 24)
    {
        return GET_INT_STAT( 600 );
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        return GET_INT_STAT( 606 );
    }
    if (g_U43137 == 11)
    {
        return GET_INT_STAT( 521 );
    }
    return 0;
}

int sub_199650()
{
    if (g_U43624 == 0)
    {
        if (sub_199673() <= g_U43138[g_U43137]._fU44)
        {
            return 1;
        }
    }
    return 0;
}

int sub_199673()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        ;
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        ;
    }
    if (g_U43137 == 17)
    {
        ;
    }
    if (g_U43137 == 12)
    {
        ;
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        return GET_INT_STAT( 499 );
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        return GET_INT_STAT( 508 );
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        ;
    }
    if (g_U43137 == 23)
    {
        ;
    }
    if (g_U43137 == 24)
    {
        ;
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        return GET_INT_STAT( 517 );
    }
    if (g_U43137 == 25)
    {
        ;
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

int sub_200353()
{
    if (g_U43624 == 0)
    {
        if (sub_200376() == 1)
        {
            return 1;
        }
    }
    return 0;
}

int sub_200376()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        ;
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        return GET_INT_STAT( 580 );
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        ;
    }
    if (g_U43137 == 17)
    {
        ;
    }
    if (g_U43137 == 12)
    {
        ;
    }
    if (g_U43137 == 13)
    {
        return GET_INT_STAT( 535 );
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        return GET_INT_STAT( 494 );
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        return GET_INT_STAT( 612 );
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 588 );
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 595 );
    }
    if (g_U43137 == 24)
    {
        ;
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        ;
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

int sub_202392()
{
    if (g_U43624 == 0)
    {
        if (sub_202415() >= g_U43138[g_U43137]._fU24)
        {
            return 1;
        }
    }
    return 0;
}

int sub_202415()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        ;
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        ;
    }
    if (g_U43137 == 17)
    {
        ;
    }
    if (g_U43137 == 12)
    {
        return sub_202560( GET_INT_STAT( 530 ) );
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        return sub_202560( GET_INT_STAT( 539 ) );
    }
    if (g_U43137 == 22)
    {
        ;
    }
    if (g_U43137 == 23)
    {
        ;
    }
    if (g_U43137 == 24)
    {
        ;
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        ;
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

int sub_202560(int iParam0)
{
    return iParam0 / 1670;
}

int sub_203618()
{
    if (g_U43624 == 0)
    {
        if (sub_203641() >= g_U43138[g_U43137]._fU28)
        {
            return 1;
        }
    }
    return 0;
}

int sub_203641()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        ;
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        return GET_INT_STAT( 547 );
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 553 );
    }
    if (g_U43137 == 17)
    {
        return GET_INT_STAT( 558 );
    }
    if (g_U43137 == 12)
    {
        ;
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 586 );
    }
    if (g_U43137 == 23)
    {
        ;
    }
    if (g_U43137 == 24)
    {
        ;
    }
    if (g_U43137 == 18)
    {
        return GET_INT_STAT( 565 );
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        return GET_INT_STAT( 608 );
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

int sub_204430()
{
    if (g_U43624 == 0)
    {
        if (sub_204453() == 1)
        {
            return 1;
        }
    }
    return 0;
}

int sub_204453()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        ;
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 554 );
    }
    if (g_U43137 == 17)
    {
        ;
    }
    if (g_U43137 == 12)
    {
        ;
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        ;
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 596 );
    }
    if (g_U43137 == 24)
    {
        ;
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        ;
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

void sub_207675()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MissionResultsTimer" )) > 0)
    {
        TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME( "MissionResultsTimer" );
    }
    if (g_U43463[0] > 0)
    {
        SET_INT_STAT( 189, g_U43463[0] );
        SET_INT_STAT( 473, g_U43463[0] );
    }
    if (g_U43463[1] > 0)
    {
        SET_INT_STAT( 190, g_U43463[1] );
        SET_INT_STAT( 477, g_U43463[1] );
    }
    if (g_U43463[2] > 0)
    {
        SET_INT_STAT( 193, g_U43463[2] );
        SET_INT_STAT( 482, g_U43463[2] );
    }
    if (g_U43463[3] > 0)
    {
        SET_INT_STAT( 194, g_U43463[3] );
        SET_INT_STAT( 488, g_U43463[3] );
    }
    if (g_U43463[21] > 0)
    {
        SET_INT_STAT( 202, g_U43463[21] );
        SET_INT_STAT( 576, g_U43463[21] );
    }
    if (g_U43463[15] > 0)
    {
        SET_INT_STAT( 213, g_U43463[15] );
        SET_INT_STAT( 542, g_U43463[15] );
    }
    if (g_U43463[16] > 0)
    {
        SET_INT_STAT( 214, g_U43463[16] );
        SET_INT_STAT( 548, g_U43463[16] );
    }
    if (g_U43463[17] > 0)
    {
        SET_INT_STAT( 215, g_U43463[17] );
        SET_INT_STAT( 555, g_U43463[17] );
    }
    if (g_U43463[12] > 0)
    {
        SET_INT_STAT( 216, g_U43463[12] );
        SET_INT_STAT( 523, g_U43463[12] );
    }
    if (g_U43463[13] > 0)
    {
        SET_INT_STAT( 217, g_U43463[13] );
        SET_INT_STAT( 531, g_U43463[13] );
    }
    if (g_U43463[19] > 0)
    {
        SET_INT_STAT( 218, g_U43463[19] );
        SET_INT_STAT( 566, g_U43463[19] );
    }
    if (g_U43463[20] > 0)
    {
        SET_INT_STAT( 219, g_U43463[20] );
        SET_INT_STAT( 571, g_U43463[20] );
    }
    if (g_U43463[5] > 0)
    {
        SET_INT_STAT( 222, g_U43463[5] );
        SET_INT_STAT( 491, g_U43463[5] );
    }
    if (g_U43463[4] > 0)
    {
        SET_INT_STAT( 221, g_U43463[4] );
        SET_INT_STAT( 496, g_U43463[4] );
    }
    if (g_U43463[6] > 0)
    {
        SET_INT_STAT( 220, g_U43463[6] );
        SET_INT_STAT( 500, g_U43463[6] );
    }
    if (g_U43463[8] > 0)
    {
        SET_INT_STAT( 223, g_U43463[8] );
        SET_INT_STAT( 509, g_U43463[8] );
    }
    if (g_U43463[9] > 0)
    {
        SET_INT_STAT( 224, g_U43463[9] );
        SET_INT_STAT( 609, g_U43463[9] );
    }
    if (g_U43463[14] > 0)
    {
        SET_INT_STAT( 225, g_U43463[14] );
        SET_INT_STAT( 536, g_U43463[14] );
    }
    if (g_U43463[22] > 0)
    {
        SET_INT_STAT( 226, g_U43463[22] );
        SET_INT_STAT( 581, g_U43463[22] );
    }
    if (g_U43463[23] > 0)
    {
        SET_INT_STAT( 227, g_U43463[23] );
        SET_INT_STAT( 589, g_U43463[23] );
    }
    if (g_U43463[24] > 0)
    {
        SET_INT_STAT( 230, g_U43463[24] );
        SET_INT_STAT( 597, g_U43463[24] );
    }
    if (g_U43463[18] > 0)
    {
        SET_INT_STAT( 231, g_U43463[18] );
        SET_INT_STAT( 561, g_U43463[18] );
    }
    if (g_U43463[10] > 0)
    {
        SET_INT_STAT( 232, g_U43463[10] );
        SET_INT_STAT( 514, g_U43463[10] );
    }
    if (g_U43463[25] > 0)
    {
        SET_INT_STAT( 233, g_U43463[25] );
        SET_INT_STAT( 603, g_U43463[25] );
    }
    if (g_U43463[11] > 0)
    {
        SET_INT_STAT( 234, g_U43463[11] );
        SET_INT_STAT( 518, g_U43463[11] );
    }
    if (g_U43463[7] > 0)
    {
        SET_INT_STAT( 237, g_U43463[7] );
        SET_INT_STAT( 504, g_U43463[7] );
    }
    sub_209238( g_U43137 );
    sub_209732( g_U43137, g_U43503 );
    sub_210866( g_U43137, g_U43522 );
    sub_211499( g_U43137, FLOOR( g_U43559 ) );
    sub_211848( g_U43137, g_U43515 );
    sub_212290( g_U43137, g_U43516 );
    sub_212680( g_U43137 );
    sub_213643( g_U43137, g_U43519 );
    sub_213980( g_U43137, g_U43558 );
    sub_214363( g_U43137 );
    sub_214965( g_U43137 );
    sub_215325( g_U43137 );
    return;
}

void sub_209238(int iParam0)
{
    if (iParam0 == 0)
    {
        sub_209259( 189 );
    }
    if (iParam0 == 1)
    {
        sub_209259( 190 );
    }
    if (iParam0 == 2)
    {
        sub_209259( 193 );
    }
    if (iParam0 == 3)
    {
        sub_209259( 194 );
    }
    if (iParam0 == 21)
    {
        sub_209259( 202 );
    }
    if (iParam0 == 15)
    {
        sub_209259( 213 );
    }
    if (iParam0 == 16)
    {
        sub_209259( 214 );
    }
    if (iParam0 == 17)
    {
        sub_209259( 215 );
    }
    if (iParam0 == 12)
    {
        sub_209259( 216 );
    }
    if (iParam0 == 13)
    {
        sub_209259( 217 );
    }
    if (iParam0 == 19)
    {
        sub_209259( 218 );
    }
    if (iParam0 == 20)
    {
        sub_209259( 219 );
    }
    if (iParam0 == 5)
    {
        sub_209259( 222 );
    }
    if (iParam0 == 4)
    {
        sub_209259( 221 );
    }
    if (iParam0 == 6)
    {
        sub_209259( 220 );
    }
    if (iParam0 == 7)
    {
        sub_209259( 237 );
    }
    if (iParam0 == 8)
    {
        sub_209259( 223 );
    }
    if (iParam0 == 9)
    {
        sub_209259( 224 );
    }
    if (iParam0 == 14)
    {
        sub_209259( 225 );
    }
    if (iParam0 == 22)
    {
        sub_209259( 226 );
    }
    if (iParam0 == 23)
    {
        sub_209259( 227 );
    }
    if (iParam0 == 24)
    {
        sub_209259( 230 );
    }
    if (iParam0 == 18)
    {
        sub_209259( 231 );
    }
    if (iParam0 == 10)
    {
        sub_209259( 232 );
    }
    if (iParam0 == 25)
    {
        sub_209259( 233 );
    }
    if (iParam0 == 11)
    {
        sub_209259( 234 );
    }
    return;
}

void sub_209259(unknown uParam0)
{
    SET_STAT_FRONTEND_ALWAYS_VISIBLE( uParam0 );
    return;
}

void sub_209732(int iParam0, unknown uParam1)
{
    if (iParam0 == 0)
    {
        sub_209757( 474, uParam1, iParam0 );
    }
    if (iParam0 == 1)
    {
        sub_209757( 478, uParam1, iParam0 );
    }
    if (iParam0 == 2)
    {
        sub_209757( 483, uParam1, iParam0 );
    }
    if (iParam0 == 3)
    {
        sub_209757( 489, uParam1, iParam0 );
    }
    if (iParam0 == 21)
    {
        sub_209757( 577, uParam1, iParam0 );
    }
    if (iParam0 == 15)
    {
        sub_209757( 543, uParam1, iParam0 );
    }
    if (iParam0 == 16)
    {
        sub_209757( 549, uParam1, iParam0 );
    }
    if (iParam0 == 17)
    {
        sub_209757( 556, uParam1, iParam0 );
    }
    if (iParam0 == 12)
    {
        sub_209757( 524, uParam1, iParam0 );
    }
    if (iParam0 == 13)
    {
        sub_209757( 532, uParam1, iParam0 );
    }
    if (iParam0 == 19)
    {
        sub_209757( 567, uParam1, iParam0 );
    }
    if (iParam0 == 20)
    {
        sub_209757( 572, uParam1, iParam0 );
    }
    if (iParam0 == 5)
    {
        sub_209757( 492, uParam1, iParam0 );
    }
    if (iParam0 == 4)
    {
        sub_209757( 497, uParam1, iParam0 );
    }
    if (iParam0 == 6)
    {
        sub_209757( 501, uParam1, iParam0 );
    }
    if (iParam0 == 7)
    {
        sub_209757( 505, uParam1, iParam0 );
    }
    if (iParam0 == 8)
    {
        sub_209757( 510, uParam1, iParam0 );
    }
    if (iParam0 == 9)
    {
        sub_209757( 610, uParam1, iParam0 );
    }
    if (iParam0 == 14)
    {
        sub_209757( 537, uParam1, iParam0 );
    }
    if (iParam0 == 22)
    {
        sub_209757( 582, uParam1, iParam0 );
    }
    if (iParam0 == 23)
    {
        sub_209757( 590, uParam1, iParam0 );
    }
    if (iParam0 == 24)
    {
        sub_209757( 598, uParam1, iParam0 );
    }
    if (iParam0 == 18)
    {
        sub_209757( 562, uParam1, iParam0 );
    }
    if (iParam0 == 10)
    {
        sub_209757( 515, uParam1, iParam0 );
    }
    if (iParam0 == 25)
    {
        sub_209757( 604, uParam1, iParam0 );
    }
    if (iParam0 == 11)
    {
        sub_209757( 519, uParam1, iParam0 );
    }
    return;
}

void sub_209757(unknown uParam0, int iParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = GET_INT_STAT( uParam0 );
    if (g_U43624)
    {
        SET_INT_STAT( uParam0, iParam1 );
        PRINTNL();
        PRINTSTRING( "*****************" );
        PRINTNL();
        PRINTSTRING( "SET_INT_STAT(WhichStat, NewValue) Value = " );
        PRINTINT( iParam1 );
        PRINTNL();
        PRINTSTRING( "*****************" );
        PRINTNL();
    }
    else if (iParam1 < iVar5)
    {
        PRINTNL();
        PRINTSTRING( "*****************" );
        PRINTNL();
        PRINTSTRING( "SET_INT_STAT(WhichStat, NewValue) Value = " );
        PRINTINT( iParam1 );
        PRINTNL();
        PRINTSTRING( "*****************" );
        PRINTNL();
        SET_INT_STAT( uParam0, iParam1 );
    }
    else
    {
        PRINTNL();
        PRINTSTRING( "*****************" );
        PRINTNL();
        PRINTSTRING( "SET_INT_STAT(WhichStat, CurrentRecordStatValue) CurrentRecordStatValue = " );
        PRINTINT( iVar5 );
        PRINTNL();
        PRINTSTRING( "*****************" );
        PRINTNL();
        SET_INT_STAT( uParam0, iVar5 );
    }
    SET_STAT_FRONTEND_ALWAYS_VISIBLE( uParam0 );
    return;
}

void sub_210866(int iParam0, unknown uParam1)
{
    if (iParam0 == 0)
    {
        sub_210891( 475, uParam1, iParam0 );
    }
    if (iParam0 == 1)
    {
        sub_210891( 479, uParam1, iParam0 );
    }
    if (iParam0 == 2)
    {
        sub_210891( 484, uParam1, iParam0 );
    }
    if (iParam0 == 3)
    {
        ;
    }
    if (iParam0 == 21)
    {
        sub_210891( 578, uParam1, iParam0 );
    }
    if (iParam0 == 15)
    {
        sub_210891( 544, uParam1, iParam0 );
    }
    if (iParam0 == 16)
    {
        sub_210891( 550, uParam1, iParam0 );
    }
    if (iParam0 == 17)
    {
        sub_210891( 557, uParam1, iParam0 );
    }
    if (iParam0 == 12)
    {
        sub_210891( 525, uParam1, iParam0 );
    }
    if (iParam0 == 13)
    {
        sub_210891( 533, uParam1, iParam0 );
    }
    if (iParam0 == 19)
    {
        sub_210891( 568, uParam1, iParam0 );
    }
    if (iParam0 == 20)
    {
        sub_210891( 573, uParam1, iParam0 );
    }
    if (iParam0 == 5)
    {
        sub_210891( 493, uParam1, iParam0 );
    }
    if (iParam0 == 4)
    {
        sub_210891( 498, uParam1, iParam0 );
    }
    if (iParam0 == 6)
    {
        sub_210891( 502, uParam1, iParam0 );
    }
    if (iParam0 == 7)
    {
        sub_210891( 506, uParam1, iParam0 );
    }
    if (iParam0 == 8)
    {
        sub_210891( 511, uParam1, iParam0 );
    }
    if (iParam0 == 9)
    {
        ;
    }
    if (iParam0 == 14)
    {
        ;
    }
    if (iParam0 == 22)
    {
        sub_210891( 583, uParam1, iParam0 );
    }
    if (iParam0 == 23)
    {
        sub_210891( 591, uParam1, iParam0 );
    }
    if (iParam0 == 24)
    {
        sub_210891( 599, uParam1, iParam0 );
    }
    if (iParam0 == 18)
    {
        sub_210891( 563, uParam1, iParam0 );
    }
    if (iParam0 == 10)
    {
        ;
    }
    if (iParam0 == 25)
    {
        sub_210891( 605, uParam1, iParam0 );
    }
    if (iParam0 == 11)
    {
        sub_210891( 520, uParam1, iParam0 );
    }
    return;
}

void sub_210891(unknown uParam0, int iParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = GET_INT_STAT( uParam0 );
    if (g_U43624)
    {
        SET_INT_STAT( uParam0, iParam1 );
    }
    else if (iParam1 < iVar5)
    {
        SET_INT_STAT( uParam0, iParam1 );
    }
    else
    {
        SET_INT_STAT( uParam0, iVar5 );
    }
    SET_STAT_FRONTEND_ALWAYS_VISIBLE( uParam0 );
    return;
}

void sub_211499(int iParam0, unknown uParam1)
{
    if (iParam0 == 0)
    {
        sub_210891( 476, uParam1, iParam0 );
    }
    if (iParam0 == 1)
    {
        ;
    }
    if (iParam0 == 2)
    {
        ;
    }
    if (iParam0 == 3)
    {
        sub_210891( 490, uParam1, iParam0 );
    }
    if (iParam0 == 21)
    {
        ;
    }
    if (iParam0 == 15)
    {
        ;
    }
    if (iParam0 == 16)
    {
        ;
    }
    if (iParam0 == 17)
    {
        sub_210891( 559, uParam1, iParam0 );
    }
    if (iParam0 == 12)
    {
        sub_210891( 526, uParam1, iParam0 );
    }
    if (iParam0 == 13)
    {
        ;
    }
    if (iParam0 == 19)
    {
        ;
    }
    if (iParam0 == 20)
    {
        ;
    }
    if (iParam0 == 5)
    {
        ;
    }
    if (iParam0 == 4)
    {
        ;
    }
    if (iParam0 == 6)
    {
        ;
    }
    if (iParam0 == 7)
    {
        ;
    }
    if (iParam0 == 8)
    {
        sub_210891( 513, uParam1, iParam0 );
    }
    if (iParam0 == 9)
    {
        sub_210891( 611, uParam1, iParam0 );
    }
    if (iParam0 == 14)
    {
        sub_210891( 540, uParam1, iParam0 );
    }
    if (iParam0 == 22)
    {
        ;
    }
    if (iParam0 == 23)
    {
        ;
    }
    if (iParam0 == 24)
    {
        ;
    }
    if (iParam0 == 18)
    {
        ;
    }
    if (iParam0 == 10)
    {
        ;
    }
    if (iParam0 == 25)
    {
        ;
    }
    if (iParam0 == 11)
    {
        ;
    }
    return;
}

void sub_211848(int iParam0, unknown uParam1)
{
    if (iParam0 == 0)
    {
        ;
    }
    if (iParam0 == 1)
    {
        ;
    }
    if (iParam0 == 2)
    {
        sub_211891( 485, uParam1, iParam0 );
    }
    if (iParam0 == 3)
    {
        ;
    }
    if (iParam0 == 21)
    {
        ;
    }
    if (iParam0 == 15)
    {
        ;
    }
    if (iParam0 == 16)
    {
        sub_211891( 551, uParam1, iParam0 );
    }
    if (iParam0 == 17)
    {
        ;
    }
    if (iParam0 == 12)
    {
        sub_211891( 527, uParam1, iParam0 );
    }
    if (iParam0 == 13)
    {
        ;
    }
    if (iParam0 == 19)
    {
        sub_211891( 569, uParam1, iParam0 );
    }
    if (iParam0 == 20)
    {
        sub_211891( 574, uParam1, iParam0 );
    }
    if (iParam0 == 5)
    {
        ;
    }
    if (iParam0 == 4)
    {
        ;
    }
    if (iParam0 == 6)
    {
        ;
    }
    if (iParam0 == 7)
    {
        ;
    }
    if (iParam0 == 8)
    {
        ;
    }
    if (iParam0 == 9)
    {
        ;
    }
    if (iParam0 == 14)
    {
        ;
    }
    if (iParam0 == 22)
    {
        sub_211891( 584, uParam1, iParam0 );
    }
    if (iParam0 == 23)
    {
        ;
    }
    if (iParam0 == 24)
    {
        sub_211891( 600, uParam1, iParam0 );
    }
    if (iParam0 == 18)
    {
        ;
    }
    if (iParam0 == 10)
    {
        ;
    }
    if (iParam0 == 25)
    {
        sub_211891( 606, uParam1, iParam0 );
    }
    if (iParam0 == 11)
    {
        sub_211891( 521, uParam1, iParam0 );
    }
    return;
}

void sub_211891(unknown uParam0, int iParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = GET_INT_STAT( uParam0 );
    if (iParam1 > iVar5)
    {
        SET_INT_STAT( uParam0, iParam1 );
    }
    else
    {
        SET_INT_STAT( uParam0, iVar5 );
    }
    SET_STAT_FRONTEND_ALWAYS_VISIBLE( uParam0 );
    return;
}

void sub_212290(int iParam0, unknown uParam1)
{
    if (iParam0 == 0)
    {
        ;
    }
    if (iParam0 == 1)
    {
        sub_211891( 480, uParam1, iParam0 );
    }
    if (iParam0 == 2)
    {
        sub_211891( 486, uParam1, iParam0 );
    }
    if (iParam0 == 3)
    {
        ;
    }
    if (iParam0 == 21)
    {
        ;
    }
    if (iParam0 == 15)
    {
        ;
    }
    if (iParam0 == 16)
    {
        sub_211891( 552, uParam1, iParam0 );
    }
    if (iParam0 == 17)
    {
        ;
    }
    if (iParam0 == 12)
    {
        sub_211891( 528, uParam1, iParam0 );
    }
    if (iParam0 == 13)
    {
        ;
    }
    if (iParam0 == 19)
    {
        sub_211891( 570, uParam1, iParam0 );
    }
    if (iParam0 == 20)
    {
        sub_211891( 575, uParam1, iParam0 );
    }
    if (iParam0 == 5)
    {
        ;
    }
    if (iParam0 == 4)
    {
        ;
    }
    if (iParam0 == 6)
    {
        ;
    }
    if (iParam0 == 7)
    {
        ;
    }
    if (iParam0 == 8)
    {
        ;
    }
    if (iParam0 == 9)
    {
        ;
    }
    if (iParam0 == 14)
    {
        ;
    }
    if (iParam0 == 22)
    {
        sub_211891( 585, uParam1, iParam0 );
    }
    if (iParam0 == 23)
    {
        sub_211891( 593, uParam1, iParam0 );
    }
    if (iParam0 == 24)
    {
        sub_211891( 601, uParam1, iParam0 );
    }
    if (iParam0 == 18)
    {
        ;
    }
    if (iParam0 == 10)
    {
        ;
    }
    if (iParam0 == 25)
    {
        sub_211891( 607, uParam1, iParam0 );
    }
    if (iParam0 == 11)
    {
        sub_211891( 522, uParam1, iParam0 );
    }
    return;
}

void sub_212680(int iParam0)
{
    if (iParam0 == 0)
    {
        ;
    }
    if (iParam0 == 1)
    {
        ;
    }
    if (iParam0 == 2)
    {
        ;
    }
    if (iParam0 == 3)
    {
        ;
    }
    if (iParam0 == 21)
    {
        ;
    }
    if (iParam0 == 15)
    {
        ;
    }
    if (iParam0 == 16)
    {
        ;
    }
    if (iParam0 == 17)
    {
        ;
    }
    if (iParam0 == 12)
    {
        ;
    }
    if (iParam0 == 13)
    {
        ;
    }
    if (iParam0 == 19)
    {
        ;
    }
    if (iParam0 == 20)
    {
        ;
    }
    if (iParam0 == 5)
    {
        ;
    }
    if (iParam0 == 4)
    {
        sub_212820( 499, iParam0 );
    }
    if (iParam0 == 6)
    {
        ;
    }
    if (iParam0 == 7)
    {
        sub_212820( 508, iParam0 );
    }
    if (iParam0 == 8)
    {
        ;
    }
    if (iParam0 == 9)
    {
        ;
    }
    if (iParam0 == 14)
    {
        ;
    }
    if (iParam0 == 22)
    {
        ;
    }
    if (iParam0 == 23)
    {
        ;
    }
    if (iParam0 == 24)
    {
        ;
    }
    if (iParam0 == 18)
    {
        ;
    }
    if (iParam0 == 10)
    {
        sub_212820( 517, iParam0 );
    }
    if (iParam0 == 25)
    {
        ;
    }
    if (iParam0 == 11)
    {
        ;
    }
    return;
}

void sub_212820(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = GET_INT_STAT( uParam0 );
    if (g_U43624)
    {
        PRINTNL();
        PRINTSTRING( "*****************" );
        PRINTNL();
        PRINTSTRING( "SET_INT_STAT(WhichStat, g_Stats_diff_secondary_timer) g_Stats_diff_secondary_timer = " );
        PRINTINT( g_U43506 );
        PRINTNL();
        PRINTSTRING( "*****************" );
        PRINTNL();
        SET_INT_STAT( uParam0, g_U43506 );
    }
    else if (g_U43506 < iVar4)
    {
        PRINTNL();
        PRINTSTRING( "*****************" );
        PRINTNL();
        PRINTSTRING( "SET_INT_STAT(WhichStat, g_Stats_diff_secondary_timer) g_Stats_diff_secondary_timer = " );
        PRINTINT( g_U43506 );
        PRINTNL();
        PRINTSTRING( "*****************" );
        PRINTNL();
        SET_INT_STAT( uParam0, g_U43506 );
    }
    else
    {
        PRINTNL();
        PRINTSTRING( "*****************" );
        PRINTNL();
        PRINTSTRING( "SET_INT_STAT(WhichStat, CurrentRecordStatValue) CurrentRecordStatValue = " );
        PRINTINT( iVar4 );
        PRINTNL();
        PRINTSTRING( "*****************" );
        PRINTNL();
        SET_INT_STAT( uParam0, iVar4 );
    }
    SET_STAT_FRONTEND_ALWAYS_VISIBLE( uParam0 );
    return;
}

void sub_213643(int iParam0, unknown uParam1)
{
    if (iParam0 == 0)
    {
        ;
    }
    if (iParam0 == 1)
    {
        ;
    }
    if (iParam0 == 2)
    {
        ;
    }
    if (iParam0 == 3)
    {
        ;
    }
    if (iParam0 == 21)
    {
        ;
    }
    if (iParam0 == 15)
    {
        sub_211891( 547, uParam1, iParam0 );
    }
    if (iParam0 == 16)
    {
        sub_211891( 553, uParam1, iParam0 );
    }
    if (iParam0 == 17)
    {
        sub_211891( 558, uParam1, iParam0 );
    }
    if (iParam0 == 12)
    {
        ;
    }
    if (iParam0 == 13)
    {
        ;
    }
    if (iParam0 == 19)
    {
        ;
    }
    if (iParam0 == 20)
    {
        ;
    }
    if (iParam0 == 5)
    {
        ;
    }
    if (iParam0 == 4)
    {
        ;
    }
    if (iParam0 == 6)
    {
        ;
    }
    if (iParam0 == 7)
    {
        ;
    }
    if (iParam0 == 8)
    {
        ;
    }
    if (iParam0 == 9)
    {
        ;
    }
    if (iParam0 == 14)
    {
        ;
    }
    if (iParam0 == 22)
    {
        sub_211891( 586, uParam1, iParam0 );
    }
    if (iParam0 == 23)
    {
        ;
    }
    if (iParam0 == 24)
    {
        ;
    }
    if (iParam0 == 18)
    {
        sub_211891( 565, uParam1, iParam0 );
    }
    if (iParam0 == 10)
    {
        ;
    }
    if (iParam0 == 25)
    {
        sub_211891( 608, uParam1, iParam0 );
    }
    if (iParam0 == 11)
    {
        ;
    }
    return;
}

void sub_213980(int iParam0, unknown uParam1)
{
    uParam1 = sub_213991( uParam1 );
    if (iParam0 == 0)
    {
        ;
    }
    if (iParam0 == 1)
    {
        ;
    }
    if (iParam0 == 2)
    {
        ;
    }
    if (iParam0 == 3)
    {
        ;
    }
    if (iParam0 == 21)
    {
        ;
    }
    if (iParam0 == 15)
    {
        ;
    }
    if (iParam0 == 16)
    {
        ;
    }
    if (iParam0 == 17)
    {
        ;
    }
    if (iParam0 == 12)
    {
        sub_214109( 530, uParam1, iParam0 );
    }
    if (iParam0 == 13)
    {
        ;
    }
    if (iParam0 == 19)
    {
        ;
    }
    if (iParam0 == 20)
    {
        ;
    }
    if (iParam0 == 5)
    {
        ;
    }
    if (iParam0 == 4)
    {
        ;
    }
    if (iParam0 == 6)
    {
        ;
    }
    if (iParam0 == 7)
    {
        ;
    }
    if (iParam0 == 8)
    {
        ;
    }
    if (iParam0 == 9)
    {
        ;
    }
    if (iParam0 == 14)
    {
        sub_214109( 539, uParam1, iParam0 );
    }
    if (iParam0 == 22)
    {
        ;
    }
    if (iParam0 == 23)
    {
        ;
    }
    if (iParam0 == 24)
    {
        ;
    }
    if (iParam0 == 18)
    {
        ;
    }
    if (iParam0 == 10)
    {
        ;
    }
    if (iParam0 == 25)
    {
        ;
    }
    if (iParam0 == 11)
    {
        ;
    }
    return;
}

void sub_213991(float Result)
{
    Result *= 1670;
    return Result;
}

void sub_214109(unknown uParam0, float fParam1, unknown uParam2)
{
    float fVar5;

    fVar5 = GET_FLOAT_STAT( uParam0 );
    if (fParam1 > fVar5)
    {
        SET_FLOAT_STAT( uParam0, fParam1 );
    }
    else
    {
        SET_FLOAT_STAT( uParam0, fVar5 );
    }
    SET_STAT_FRONTEND_ALWAYS_VISIBLE( uParam0 );
    return;
}

void sub_214363(int iParam0)
{
    if (iParam0 == 0)
    {
        ;
    }
    if (iParam0 == 1)
    {
        sub_214402( 481, g_U43571, iParam0 );
    }
    if (iParam0 == 2)
    {
        sub_214402( 487, g_U43571, iParam0 );
    }
    if (iParam0 == 3)
    {
        ;
    }
    if (iParam0 == 21)
    {
        sub_214402( 579, g_U43571, iParam0 );
    }
    if (iParam0 == 15)
    {
        ;
    }
    if (iParam0 == 16)
    {
        ;
    }
    if (iParam0 == 17)
    {
        sub_214402( 560, g_U43571, iParam0 );
    }
    if (iParam0 == 12)
    {
        sub_214402( 529, g_U43571, iParam0 );
    }
    if (iParam0 == 13)
    {
        sub_214402( 534, g_U43571, iParam0 );
    }
    if (iParam0 == 19)
    {
        ;
    }
    if (iParam0 == 20)
    {
        ;
    }
    if (iParam0 == 5)
    {
        sub_214402( 495, g_U43571, iParam0 );
    }
    if (iParam0 == 4)
    {
        ;
    }
    if (iParam0 == 6)
    {
        sub_214402( 503, g_U43571, iParam0 );
    }
    if (iParam0 == 7)
    {
        sub_214402( 507, g_U43571, iParam0 );
    }
    if (iParam0 == 8)
    {
        ;
    }
    if (iParam0 == 9)
    {
        sub_214402( 613, g_U43571, iParam0 );
    }
    if (iParam0 == 14)
    {
        sub_214402( 541, g_U43571, iParam0 );
    }
    if (iParam0 == 22)
    {
        sub_214402( 587, g_U43571, iParam0 );
    }
    if (iParam0 == 23)
    {
        sub_214402( 594, g_U43571, iParam0 );
    }
    if (iParam0 == 24)
    {
        sub_214402( 602, g_U43571, iParam0 );
    }
    if (iParam0 == 18)
    {
        sub_214402( 564, g_U43571, iParam0 );
    }
    if (iParam0 == 10)
    {
        ;
    }
    if (iParam0 == 25)
    {
        ;
    }
    if (iParam0 == 11)
    {
        ;
    }
    return;
}

void sub_214402(unknown uParam0, int iParam1, unknown uParam2)
{
    int iVar5;
    int iVar6;

    iVar5 = GET_INT_STAT( uParam0 );
    if (iParam1 == 0)
    {
        iVar6 = 0;
    }
    else
    {
        iVar6 = 1;
    }
    if (iVar6 > iVar5)
    {
        SET_INT_STAT( uParam0, iVar6 );
    }
    else
    {
        SET_INT_STAT( uParam0, iVar5 );
    }
    SET_STAT_FRONTEND_ALWAYS_VISIBLE( uParam0 );
    return;
}

void sub_214965(int iParam0)
{
    if (iParam0 == 0)
    {
        ;
    }
    if (iParam0 == 1)
    {
        ;
    }
    if (iParam0 == 2)
    {
        ;
    }
    if (iParam0 == 3)
    {
        ;
    }
    if (iParam0 == 21)
    {
        sub_214402( 580, g_U43572, iParam0 );
    }
    if (iParam0 == 15)
    {
        ;
    }
    if (iParam0 == 16)
    {
        ;
    }
    if (iParam0 == 17)
    {
        ;
    }
    if (iParam0 == 12)
    {
        ;
    }
    if (iParam0 == 13)
    {
        sub_214402( 535, g_U43572, iParam0 );
    }
    if (iParam0 == 19)
    {
        ;
    }
    if (iParam0 == 20)
    {
        ;
    }
    if (iParam0 == 5)
    {
        sub_214402( 494, g_U43572, iParam0 );
    }
    if (iParam0 == 4)
    {
        ;
    }
    if (iParam0 == 6)
    {
        ;
    }
    if (iParam0 == 7)
    {
        ;
    }
    if (iParam0 == 8)
    {
        ;
    }
    if (iParam0 == 9)
    {
        sub_214402( 612, g_U43572, iParam0 );
    }
    if (iParam0 == 14)
    {
        ;
    }
    if (iParam0 == 22)
    {
        sub_214402( 588, g_U43572, iParam0 );
    }
    if (iParam0 == 23)
    {
        sub_214402( 595, g_U43572, iParam0 );
    }
    if (iParam0 == 24)
    {
        ;
    }
    if (iParam0 == 18)
    {
        ;
    }
    if (iParam0 == 10)
    {
        ;
    }
    if (iParam0 == 25)
    {
        ;
    }
    if (iParam0 == 11)
    {
        ;
    }
    return;
}

void sub_215325(int iParam0)
{
    if (iParam0 == 0)
    {
        ;
    }
    if (iParam0 == 1)
    {
        ;
    }
    if (iParam0 == 2)
    {
        ;
    }
    if (iParam0 == 3)
    {
        ;
    }
    if (iParam0 == 21)
    {
        ;
    }
    if (iParam0 == 15)
    {
        ;
    }
    if (iParam0 == 16)
    {
        sub_214402( 554, g_U43573, iParam0 );
    }
    if (iParam0 == 17)
    {
        ;
    }
    if (iParam0 == 12)
    {
        ;
    }
    if (iParam0 == 13)
    {
        ;
    }
    if (iParam0 == 19)
    {
        ;
    }
    if (iParam0 == 20)
    {
        ;
    }
    if (iParam0 == 5)
    {
        ;
    }
    if (iParam0 == 4)
    {
        ;
    }
    if (iParam0 == 6)
    {
        ;
    }
    if (iParam0 == 7)
    {
        ;
    }
    if (iParam0 == 8)
    {
        ;
    }
    if (iParam0 == 9)
    {
        ;
    }
    if (iParam0 == 14)
    {
        ;
    }
    if (iParam0 == 22)
    {
        ;
    }
    if (iParam0 == 23)
    {
        sub_214402( 596, g_U43573, iParam0 );
    }
    if (iParam0 == 24)
    {
        ;
    }
    if (iParam0 == 18)
    {
        ;
    }
    if (iParam0 == 10)
    {
        ;
    }
    if (iParam0 == 25)
    {
        ;
    }
    if (iParam0 == 11)
    {
        ;
    }
    return;
}

void sub_215800()
{
    int iVar2;
    string sVar3;
    boolean bVar4;
    boolean bVar5;
    boolean bVar6;
    boolean bVar7;
    boolean bVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    int iVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    float fVar21;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    sVar3 = "replayHelp";
    if (IS_BIT_SET( g_U10938._fU0, 6 ))
    {
        if (IS_BIT_SET( g_U10938._fU0, 9 ))
        {
            SET_GAME_CAM_HEADING( 0.00000000 );
            CLEAR_BIT( ref g_U10938._fU0, 9 );
        }
        g_U12382[g_U10938._fU4]._fU124 = 0;
        return;
    }
    if (NOT (IS_BIT_SET( g_U10938._fU0, 2 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( g_U10938._fU0, 4 )))
    {
        if (IS_BIT_SET( g_U10938._fU0, 3 ))
        {
            return;
        }
        bVar4 = false;
        if (g_U10938._fU12 == 0)
        {
            bVar4 = true;
        }
        if (NOT bVar4)
        {
            if (iVar2 > g_U10938._fU12)
            {
                bVar4 = true;
            }
        }
        bVar5 = false;
        if ((GET_TIME_SINCE_LAST_ARREST() < 10000) AND (NOT (GET_TIME_SINCE_LAST_ARREST() == -1)))
        {
            bVar5 = true;
        }
        bVar6 = false;
        if ((GET_TIME_SINCE_LAST_DEATH() < 10000) AND (NOT (GET_TIME_SINCE_LAST_DEATH() == -1)))
        {
            bVar6 = true;
        }
        bVar7 = false;
        if (NOT (IS_PLAYER_PLAYING( sub_8409() )))
        {
            if ((NOT bVar5) AND (NOT bVar6))
            {
                bVar7 = true;
            }
        }
        bVar8 = false;
        if (NOT IS_SCREEN_FADED_IN())
        {
            bVar8 = true;
        }
        if ((((((NOT g_U12379) AND (NOT bVar7)) AND (NOT bVar8)) AND (NOT sub_91689())) AND (NOT sub_183086())) AND (bVar4))
        {
            if (g_U10938._fU12 == 0)
            {
                g_U10938._fU12 = iVar2 + 500;
                return;
            }
            if (NOT (IS_BIT_SET( g_U10938._fU0, 1 )))
            {
                if (NOT (HAS_SCRIPT_LOADED( sVar3 )))
                {
                    REQUEST_SCRIPT( sVar3 );
                }
                else
                {
                    START_NEW_SCRIPT( sVar3, 1024 );
                    MARK_SCRIPT_AS_NO_LONGER_NEEDED( sVar3 );
                    SET_BIT( ref g_U10938._fU0, 1 );
                }
            }
            if (IS_BIT_SET( g_U10938._fU0, 1 ))
            {
                uVar9 = sub_216335();
                uVar10 = sub_80600( uVar9 );
                sub_216420( uVar10 );
                SET_BIT( ref g_U10938._fU0, 3 );
                sub_216814();
            }
        }
        return;
    }
    if (NOT sub_173247())
    {
        return;
    }
    if (NOT (IS_BIT_SET( g_U10938._fU0, 5 )))
    {
        if (NOT IS_SCREEN_FADED_IN())
        {
            return;
        }
        if (g_U12379)
        {
            sub_24711( "main.sc - Replay requested when 'on mission' - this shouldn't happen" );
            CLEAR_BIT( ref g_U10938._fU0, 4 );
            return;
        }
        SET_PLAYER_CONTROL( sub_8409(), 0 );
        DO_SCREEN_FADE_OUT( 500 );
        SET_BIT( ref g_U10938._fU0, 10 );
        SET_BIT( ref g_U10938._fU0, 5 );
    }
    if (IS_BIT_SET( g_U10938._fU0, 5 ))
    {
        if (NOT IS_SCREEN_FADED_OUT())
        {
            return;
        }
    }
    if (IS_WANTED_LEVEL_GREATER( sub_8409(), 3 ))
    {
        RESET_ACHIEVEMENTS_AWARD();
    }
    CLEAR_WANTED_LEVEL( sub_8409() );
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_16171() );
    sub_217171();
    uVar11 = sub_41889( g_U10938._fU4, g_U10938._fU8 );
    uVar12 = g_U22960[uVar11]._fU12;
    uVar13 = uVar12;
    iVar14 = 0;
    fVar21 = 0.00000000;
    sub_217243();
    switch (uVar13)
    {
        case 0:
        if (NOT sub_217960())
        {
            return;
        }
        iVar14 = g_U22960[uVar11]._fU16;
        uVar15 = {g_U10756[iVar14]._fU4};
        g_U10938._fU48 = {uVar15};
        if (NOT (IS_CHAR_DEAD( sub_16171() )))
        {
            GET_CHAR_COORDINATES( sub_16171(), ref uVar18._fU0, ref uVar18._fU4, ref uVar18._fU8 );
            uVar18._fU8 += 2.00000000;
            GET_GROUND_Z_FOR_3D_COORD( uVar18._fU0, uVar18._fU4, uVar18._fU8, ref fVar21 );
            SET_CHAR_COORDINATES( sub_16171(), uVar18._fU0, uVar18._fU4, fVar21 );
        }
        SET_BIT( ref g_U10938._fU0, 6 );
        break;
        case 1:
        if (NOT sub_220472())
        {
            return;
        }
        sub_220626();
        SET_BIT( ref g_U10938._fU0, 6 );
        break;
        default:
        DO_SCREEN_FADE_IN( 500 );
        SET_PLAYER_CONTROL( sub_8409(), 1 );
        sub_24711( "main.sc - Replay requested on script that doesn't start at a start_point" );
        return;
    }
    if (IS_BIT_SET( g_U10938._fU0, 6 ))
    {
        sub_221797();
        CLEAR_ADDITIONAL_TEXT( 0, 1 );
        CLEAR_ADDITIONAL_TEXT( 6, 1 );
        CLEAR_HELP();
        CLEAR_PRINTS();
        SET_BIT( ref g_U10938._fU0, 9 );
        sub_177906();
        sub_221900();
        sub_222956();
    }
    return;
}

void sub_216335()
{
    int Result;

    Result = sub_216344();
    if (NOT (Result == 37))
    {
        return Result;
    }
    return sub_74403( g_U10938._fU4 );
}

int sub_216344()
{
    return 37;
}

void sub_216420(unknown uParam0)
{
    int I;
    int iVar4;
    unknown uVar5;
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

    array(ref uVar9._fU0._fU0, 3);
    ref uVar9._fU0;
    ref uVar9;
    sub_80979( uParam0, 0, 0, 0, ref uVar9 );
    iVar4 = sub_81607( uVar9._fU0 );
    if (iVar4 != -1)
    {
        SCRIPT_ASSERT( "REPLAY MESSAGE ALREADY EXISTS" );
        sub_45858( iVar4 );
    }
    if ((g_U575[g_U575 - 1]._fU0[0]) != -1)
    {
        if (NOT sub_81480())
        {
            sub_45858( 0 );
        }
    }
    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if (g_U575[I]._fU0[0] == -1)
        {
            g_U575[I] = {uVar9._fU0};
            I = g_U575;
            uVar5 = {g_U10961};
            ConcatString(ref uVar5, "a", 16);
            SET_PHONE_HUD_ITEM( 5, ref uVar5, -1 );
            g_U95._fU520 = 1;
            PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
            if (g_U95._fU0 == 1000)
            {
                g_U95._fU404 = 1017;
            }
            else if (g_U95._fU0 == 1016)
            {
                g_U95._fU92 = 1;
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 300, 1 );
            g_U816 = 1;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return;
}

void sub_216814()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + 25000;
    if (iVar3 > g_U42731._fU0)
    {
        g_U42731._fU0 = iVar3;
    }
    return;
}

void sub_217171()
{
    return;
}

void sub_217243()
{
    sub_217252();
    if (NOT (sub_152399( ref g_U10938._fU32 )))
    {
        sub_24711( "Replay_Set_Day_And_Time: Date and Time of replay hasn't been set" );
        return;
    }
    sub_217371( ref g_U10938._fU32 );
    return;
}

void sub_217252()
{
    return;
}

void sub_217371(int iParam0)
{
    if (NOT (sub_152399( iParam0 )))
    {
        return;
    }
    if (NOT (sub_85689( (iParam0^) )))
    {
        return;
    }
    while (NOT (sub_217418( iParam0 + 0 )))
    {
        SET_TIME_ONE_DAY_BACK();
    }
    if ((NOT (sub_217518( iParam0->_fU8 ))) AND (NOT (sub_217596( iParam0->_fU8 ))))
    {
        SET_TIME_ONE_DAY_BACK();
    }
    if (NOT (sub_217596( iParam0->_fU8 )))
    {
        FORWARD_TO_TIME_OF_DAY( ref iParam0->_fU8->_fU0, ref iParam0->_fU8->_fU4 );
    }
    if (NOT (sub_217691( iParam0 )))
    {
        sub_24711( "KM_Rewind_GameDateTime_To_DateTime: Game DateTime should now match required DateTime - it doesn't" );
    }
    return;
}

void sub_217418(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    sub_89828( ref uVar3 );
    return sub_217436( uParam0, ref uVar3 );
}

int sub_217436(int iParam0, int iParam1)
{
    if ((iParam0->_fU4 == iParam1->_fU4) AND (iParam0->_fU0 == iParam1->_fU0))
    {
        return 1;
    }
    return 0;
}

int sub_217518(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;

    GET_TIME_OF_DAY( ref uVar4._fU0, ref uVar4._fU4 );
    if (sub_109079( uParam0, uVar4 ))
    {
        return 0;
    }
    if (sub_109203( uParam0, uVar4 ))
    {
        return 0;
    }
    return 1;
}

void sub_217596(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;

    GET_TIME_OF_DAY( ref uVar4._fU0, ref uVar4._fU4 );
    return sub_109203( uVar4, uParam0 );
}

void sub_217691(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    sub_89815( ref uVar3 );
    return sub_217709( uParam0, ref uVar3 );
}

int sub_217709(int iParam0, int iParam1)
{
    if (((((ref iParam0->_fU0->_fU4) == (ref iParam1->_fU0->_fU4)) AND ((ref iParam0->_fU0->_fU0) == (ref iParam1->_fU0->_fU0))) AND ((ref iParam0->_fU8->_fU0) == (ref iParam1->_fU8->_fU0))) AND ((ref iParam0->_fU8->_fU4) == (ref iParam1->_fU8->_fU4)))
    {
        return 1;
    }
    return 0;
}

int sub_217960()
{
    if (g_U10938._fU8 == g_U14925[g_U10938._fU4]._fU0._fU4)
    {
        return 1;
    }
    sub_218006();
    return 0;
}

void sub_218006()
{
    switch (g_U10938._fU4)
    {
        case 0:
        sub_218105( ref g_U30382 );
        break;
        case 1:
        sub_218105( ref g_U37103 );
        break;
        case 2:
        sub_218105( ref g_U37744 );
        break;
        case 3:
        sub_218105( ref g_U38565 );
        break;
        case 4:
        sub_218105( ref g_U40026 );
        break;
        case 5:
        sub_218105( ref g_U40387 );
        break;
        case 6:
        sub_218105( ref g_U41048 );
        break;
        case 7:
        SCRIPT_ASSERT( "Advance_Sequence_To_The_Replay_Mission_Gather_Sequence_Variables: HENRIQUE shouldn't be offering replays" );
        sub_218105( ref g_U41369 );
        break;
        case 8:
        SCRIPT_ASSERT( "Advance_Sequence_To_The_Replay_Mission_Gather_Sequence_Variables: RESERVE 1 shouldn't be offering replays" );
        sub_218105( ref g_U42650 );
        break;
        default: sub_24711( "Advance_Sequence_To_The_Replay_Mission_Gather_Sequence_Variables(): Illegal strand" );
    }
    return;
}

void sub_218105(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    int iVar5;
    unknown uVar6;

    bVar3 = true;
    bVar4 = false;
    iVar5 = g_U12382[g_U10938._fU4]._fU16;
    while (bVar3)
    {
        uVar6 = (uParam0^)[iVar5]._fU0;
        switch (uVar6)
        {
            case 11:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 10:
            if ((uParam0^)[iVar5]._fU4._fU0 == g_U10938._fU8)
            {
                bVar3 = false;
                bVar4 = true;
            }
            break;
            case 0:
            case 7:
            case 8:
            case 9:
            case 12:
            case 15:
            case 14:
            case 13:
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
            case 23:
            case 24:
            case 25:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 35:
            case 36:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
            case 43:
            case 44:
            case 45:
            case 46:
            case 47:
            case 48:
            case 49:
            case 50:
            case 51:
            case 52:
            case 53:
            case 54:
            case 55:
            case 56:
            case 57:
            case 58:
            case 59:
            case 60:
            case 61:
            case 62:
            case 63:
            case 64:
            case 65:
            case 66:
            case 67:
            case 68:
            case 69:
            case 70:
            case 71:
            case 76:
            case 77:
            case 78:
            case 79:
            case 80:
            case 81:
            case 82:
            case 83:
            case 84:
            case 85:
            case 86:
            case 87:
            case 88:
            case 89:
            case 90:
            case 91:
            case 92:
            case 93:
            case 94:
            case 95:
            case 96:
            case 97:
            case 98:
            case 99:
            case 100:
            case 101:
            case 102:
            case 103:
            case 104:
            case 105:
            case 106:
            case 107:
            case 108:
            case 109:
            case 110:
            case 111:
            case 112:
            case 113:
            case 114:
            case 115:
            case 116:
            case 117:
            case 118:
            case 119:
            case 120:
            case 121:
            case 122:
            case 123:
            case 124:
            case 125:
            case 126:
            case 127:
            case 128:
            case 129:
            case 130:
            case 26:
            case 132:
            case 133:
            case 134:
            case 135:
            case 136:
            case 137:
            case 138:
            case 139:
            case 140:
            case 141:
            case 142:
            case 131:
            case 72:
            case 73:
            case 74:
            case 75:
            case 144:
            case 145:
            case 143:
            case 146:
            case 147:
            case 148:
            case 149:
            case 150:
            case 151:
            case 152:
            case 153:
            case 156:
            case 158:
            case 159:
            case 160: break;
            case 154:
            case 155:
            case 157:
            case 161:
            sub_24711( "replay.sch: Advance_Sequence_To_The_Replay_Mission() - hit an end of strand command" );
            bVar3 = false;
            break;
            default:
            sub_24711( "replay.sch: Advance_Sequence_To_The_Replay_Mission() - unrecognised command" );
            bVar3 = false;
        }
        if (bVar3)
        {
            iVar5++;
        }
    }
    if (bVar4)
    {
        g_U12382[g_U10938._fU4]._fU16 = iVar5;
        return;
    }
    sub_24711( "replay.sch: Advance_Sequence_To_The_Replay_Mission() - found an error" );
    return;
}

int sub_220472()
{
    if (g_U14925[g_U10938._fU4]._fU0._fU0 == 0)
    {
        sub_218006();
        return 1;
    }
    if (NOT (g_U14925[g_U10938._fU4]._fU0._fU0 == 1))
    {
        SET_BIT( ref g_U10938._fU0, 8 );
        sub_218006();
    }
    if (g_U14925[g_U10938._fU4]._fU0._fU0 == 1)
    {
        sub_61450( g_U10938._fU4 );
        sub_218006();
    }
    return 0;
}

void sub_220626()
{
    vector vVar2;
    float fVar5;
    boolean bVar6;
    boolean bVar7;

    vVar2 = {0.00000000, 0.00000000, 0.00000000};
    fVar5 = 0.00000000;
    bVar6 = false;
    bVar7 = false;
    PRINTSTRING( "********************************** STRAND: " );
    PRINTINT( g_U10938._fU4 );
    PRINTNL();
    switch (g_U10938._fU4)
    {
        case 0:
        if (g_U10938._fU8 == 3)
        {
            CLEAR_BIT( ref g_U10938._fU0, 10 );
            bVar7 = true;
        }
        else if (g_U10938._fU8 == 2)
        {
            CLEAR_BIT( ref g_U10938._fU0, 10 );
            bVar7 = true;
        }
        else if (g_U10938._fU8 == 5)
        {
            CLEAR_BIT( ref g_U10938._fU0, 10 );
            bVar7 = true;
        }
        else if (g_U10938._fU8 == 4)
        {
            CLEAR_BIT( ref g_U10938._fU0, 10 );
            bVar7 = true;
        }
        else if (g_U10938._fU8 == 6)
        {
            CLEAR_BIT( ref g_U10938._fU0, 10 );
            bVar7 = true;
        }
        else if (g_U10938._fU8 == 8)
        {
            CLEAR_BIT( ref g_U10938._fU0, 10 );
            bVar7 = true;
        }
        else if (g_U10938._fU8 == 7)
        {
            CLEAR_BIT( ref g_U10938._fU0, 10 );
            bVar7 = true;
        };;;;;;;
        break;
        default: sub_24711( "Unknown Strand for Replay Warp" );
    }
    if (bVar6)
    {
        sub_221073( vVar2.x, vVar2.y, vVar2.z, fVar5 );
        CLEAR_AREA_OF_CHARS( vVar2.x, vVar2.y, vVar2.z, 100.00000000 );
        return;
    }
    if (bVar7)
    {
        return;
    }
    sub_24711( "Unknown mission for strand for Replay Warp" );
    return;
}

void sub_221073(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (IS_PLAYER_PLAYING( sub_8409() ))
    {
        if (NOT (sub_221105( uParam0, uParam1, uParam2 )))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_16171() ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( sub_16171(), uParam0, uParam1, uParam2 );
            }
            else
            {
                SET_CHAR_COORDINATES( sub_16171(), uParam0, uParam1, uParam2 );
            }
        }
        SET_CHAR_HEADING( sub_16171(), uParam3 );
        SET_GAME_CAM_HEADING( 0.00000000 );
    }
    return;
}

int sub_221105(unknown uParam0, unknown uParam1, unknown uParam2)
{
    LOAD_SCENE( uParam0, uParam1, uParam2 );
    if (sub_221163( uParam0, uParam1, uParam2, g_U10984[0]._fU20, "E2_luisapartment" ))
    {
        return 1;
    }
    if (sub_221163( uParam0, uParam1, uParam2, -473.42440000, 147.04410000, 8.85840000, "E2_MaisonRoomfront" ))
    {
        return 1;
    }
    return 0;
}

int sub_221163(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    unknown uVar9;
    unknown uVar10;

    if (NOT (sub_221178( uParam0, uParam3 )))
    {
        return 0;
    }
    uVar9 = GET_HASH_KEY( uParam6 );
    GET_INTERIOR_AT_COORDS( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref uVar10 );
    LOAD_SCENE_FOR_ROOM_BY_KEY( uVar10, uVar9 );
    if (IS_CHAR_IN_ANY_CAR( sub_16171() ))
    {
        WARP_CHAR_FROM_CAR_TO_COORD( sub_16171(), uParam0._fU0, uParam0._fU4, uParam0._fU8 );
    }
    else
    {
        SET_CHAR_COORDINATES( sub_16171(), uParam0._fU0, uParam0._fU4, uParam0._fU8 );
    }
    SET_ROOM_FOR_CHAR_BY_KEY( sub_16171(), uVar9 );
    return 1;
}

int sub_221178(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((uParam0._fU0 == uParam3._fU0) AND (uParam0._fU4 == uParam3._fU4)) AND (uParam0._fU8 == uParam3._fU8))
    {
        return 1;
    }
    return 0;
}

void sub_221797()
{
    if (g_U0)
    {
        return;
    }
    if (g_U10972)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 256, 1 );
    return;
}

void sub_221900()
{
    sub_221909();
    sub_222889();
    return;
}

void sub_221909()
{
    int I;
    int iVar3;
    int J;

    I = 0;
    iVar3 = 0;
    for ( I = 0; I < 5; I++ )
    {
        iVar3 = g_U9105[I]._fU0;
        if (NOT (iVar3 == -1))
        {
            sub_221963( 1, iVar3, 1 );
        }
    }
    J = 0;
    for ( J = 0; J < 5; J++ )
    {
        if (g_U9074[J]._fU0 == 0)
        {
            sub_222653( J );
        }
    }
    return;
}

void sub_221963(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_221980( uParam0, uParam1, uParam2, 0, 0 );
    return;
}

void sub_221980(int iParam0, int iParam1, int iParam2, unknown uParam3, unknown uParam4)
{
    int iVar7;

    if (iParam0 == -1)
    {
        SCRIPT_ASSERT( "Post_Notice: Unique Drunk Ped ID for poster is unknown" );
        return;
    }
    if (iParam1 == -1)
    {
        SCRIPT_ASSERT( "Post_Notice: Unique Drunk Ped ID for reader is unknown" );
        return;
    }
    if (iParam2 == 5)
    {
        SCRIPT_ASSERT( "Post_Notice: Notice ID is unknown" );
        return;
    }
    if (sub_222202( iParam0, iParam1, iParam2 ))
    {
        return;
    }
    iVar7 = sub_222351();
    if (iVar7 == -1)
    {
        SCRIPT_ASSERT( "All drunk notice slots are full - Tell Keith to increase MAX_NUMBER_OF_DRUNK_NOTICES" );
        return;
    }
    g_U9116[iVar7]._fU0 = iParam0;
    g_U9116[iVar7]._fU4 = iParam1;
    g_U9116[iVar7]._fU8 = iParam2;
    g_U9116[iVar7]._fU12 = uParam3;
    g_U9116[iVar7]._fU16 = uParam4;
    return;
}

int sub_222202(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if ((sub_222217( uParam0, uParam1, uParam2 )) == -1)
    {
        return 0;
    }
    return 1;
}

int sub_222217(int iParam0, int iParam1, int iParam2)
{
    int Result;

    Result = 0;
    for ( Result = 0; Result < 16; Result++ )
    {
        if (iParam2 == g_U9116[Result]._fU8)
        {
            if (iParam0 == g_U9116[Result]._fU0)
            {
                if (iParam1 == g_U9116[Result]._fU4)
                {
                    return Result;
                }
            }
        }
    }
    return -1;
}

int sub_222351()
{
    int Result;

    Result = 0;
    for ( Result = 0; Result < 16; Result++ )
    {
        if (g_U9116[Result]._fU8 == 5)
        {
            return Result;
        }
    }
    return -1;
}

void sub_222653(int iParam0)
{
    if ((iParam0 < 0) || (iParam0 >= 5))
    {
        SCRIPT_ASSERT( "Clear_One_Drunk_Request: array index out of bounds" );
        return;
    }
    if (NOT (g_U9074[iParam0]._fU4 == nil))
    {
        if (g_U9074[iParam0]._fU4 == sub_16171())
        {
            g_U9199 = 0;
        }
    }
    g_U9074[iParam0]._fU0 = 16;
    g_U9074[iParam0]._fU4 = nil;
    g_U9074[iParam0]._fU8 = 0;
    g_U9074[iParam0]._fU12 = 0;
    g_U9074[iParam0]._fU16 = nil;
    g_U9074[iParam0]._fU20 = nil;
    return;
}

void sub_222889()
{
    unknown uVar2;

    if (NOT g_U9197)
    {
        return;
    }
    GET_ROOT_CAM( ref uVar2 );
    SET_DRUNK_CAM( uVar2, 0.00000000, 0 );
    sub_185570();
    return;
}

void sub_222956()
{
    g_U2792 = 1;
    if ((g_U10938._fU4 == 2) AND (g_U10938._fU8 == 0))
    {
        sub_39768( 1 );
        TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME( "Yusuf1Cleanup" );
    }
    return;
}

int sub_223052()
{
    int iVar2;

    PRINTSTRING( "Just entered Start_A_Network_Game_From_Single_Player\n" );
    FAKE_DEATHARREST();
    WAIT( 0 );
    WAIT( 0 );
    if (g_U21)
    {
        if (NOT NETWORK_STORE_SINGLE_PLAYER_GAME())
        {
            return 0;
        }
    }
    iVar2 = GET_CURRENT_EPISODE();
    if (iVar2 != g_U16)
    {
        switch (g_U16)
        {
            case 0:
            if (g_U95._fU396 != 0)
            {
                g_U95._fU396 = 0;
            }
            break;
            case 1:
            if (g_U95._fU396 != 13)
            {
                g_U95._fU396 = 13;
            }
            break;
        }
    }
    SHUTDOWN_AND_LAUNCH_NETWORK_GAME( g_U16 );
    WAIT( 0 );
    return 1;
}

int sub_223320()
{
    PRINTSTRING( "Just entered Start_A_Replay_From_Single_Player\n" );
    FAKE_DEATHARREST();
    WAIT( 0 );
    WAIT( 0 );
    ACTIVATE_REPLAY_MENU();
    if (g_U21)
    {
        NETWORK_STORE_SINGLE_PLAYER_GAME();
    }
    return 0;
}

void sub_223442()
{
    unknown uVar2;

    uVar2 = nil;
    if (g_U43131)
    {
        if (NOT (sub_223489( ref uVar2, -1723.75000000, 360.78310000, 24.44400000, 333.79300000 )))
        {
            return;
        }
        g_U43131 = 0;
        MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar2 );
        return;
    }
    return;
}

int sub_223489(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    uVar7 = sub_223498();
    REQUEST_MODEL( uVar7 );
    if (NOT (HAS_MODEL_LOADED( uVar7 )))
    {
        REQUEST_MODEL( uVar7 );
        return 0;
    }
    CLEAR_AREA( uParam1._fU0, uParam1._fU4, uParam1._fU8, 5.00000000, 0 );
    CREATE_CAR( uVar7, uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0, 1 );
    SET_CAR_HEADING( (uParam0^), uParam4 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    SET_HAS_BEEN_OWNED_BY_PLAYER( (uParam0^), 1 );
    SET_CAN_BURST_CAR_TYRES( (uParam0^), 0 );
    CHANGE_CAR_COLOUR( (uParam0^), 0, 0 );
    SET_EXTRA_CAR_COLOURS( (uParam0^), 4, 35 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uVar7 );
    }
    return 1;
}

int sub_223498()
{
    return 1063483177;
}

void sub_223871()
{
    if (g_U30153)
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ClubManBlips" )) == 0)
        {
            REQUEST_SCRIPT( "ClubManBlips" );
            if (NOT (HAS_SCRIPT_LOADED( "ClubManBlips" )))
            {
                return;
            }
            START_NEW_SCRIPT( "ClubManBlips", 128 );
            MARK_SCRIPT_AS_NO_LONGER_NEEDED( "ClubManBlips" );
        }
        return;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ClubManBlips" )) == 0)
    {
        return;
    }
    TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME( "ClubManBlips" );
    return;
}
