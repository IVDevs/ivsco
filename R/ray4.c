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
    l_U481 = {0.00000000, 0.00000000, 0.00000000};
    l_U484 = 2.50000000;
    l_U485 = 0;
    l_U486 = 0;
    l_U487 = 0;
    l_U488 = 0;
    l_U499 = {0.00000000, 1.13800000, -1.00000000};
    l_U502 = {0.00000000, 0.00000000, 0.00000000};
    l_U505 = {0.00000000, 0.00000000, 0.00000000};
    l_U518 = 0;
    l_U519 = 0;
    l_U520 = 0;
    l_U529 = 0;
    l_U547 = 0;
    l_U548 = 0;
    l_U549 = 0;
    l_U550 = 0;
    l_U551 = 0;
    l_U552 = 0;
    l_U553 = 0;
    l_U554 = 0;
    l_U555 = 0;
    l_U556 = 0;
    l_U557 = 0;
    l_U558 = 0;
    l_U559 = 0;
    l_U560 = 0;
    l_U561 = 0;
    l_U562 = 0;
    l_U563 = 0;
    l_U564 = 0;
    l_U565 = 0;
    l_U566 = 1;
    l_U574 = 0;
    l_U575 = 0;
    l_U576 = 0;
    l_U577 = 0;
    l_U591 = 0;
    l_U592 = 0;
    l_U593 = 0;
    l_U594 = 0;
    l_U595 = 0;
    l_U596 = 0;
    l_U597 = 0;
    l_U598 = 1;
    l_U599 = {-106.76030000, 762.18690000, 14.29030000};
    l_U734 = -911507684;
    l_U735 = -479595866;
    l_U736 = -1639359785;
    l_U737 = -1639359785;
    l_U738 = 897868981;
    l_U739 = 897868981;
    l_U740 = 510389335;
    l_U741 = -302362397;
    l_U742 = 510389335;
    l_U743 = -183203150;
    l_U782 = 0;
    l_U783 = 0;
    l_U784 = 0;
    l_U785 = 0;
    l_U805 = 1376298265;
    l_U806 = 1376298265;
    l_U807 = 1376298265;
    l_U808 = 1376298265;
    l_U809 = 584879743;
    l_U810 = 2046537925;
    sub_622( "RAY4", 0 );
    sub_622( "RB4AUD", 6 );
    sub_780();
    SET_MISSION_FLAG( 1 );
    if (g_U9893._fU24)
    {
        SET_CUTSCENE_EXTRA_ROOM_POS( -108.10000000, -265.90000000, 13.40000000 );
        ENABLE_SCENE_STREAMING( 0 );
        START_CUTSCENE_NOW( "RB_4" );
        sub_4389();
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "RB_4" );
        ENABLE_SCENE_STREAMING( 1 );
    }
    sub_4816();
    l_U489 = 0;
    l_U518 = 1;
    while (l_U518)
    {
        switch (l_U489)
        {
            case 0:
            sub_5834();
            break;
            case 1:
            sub_6040();
            break;
            case 2:
            sub_11373();
            break;
            case 3:
            sub_12244();
            break;
            case 4:
            sub_23441();
            break;
            case 5:
            sub_28716();
            break;
            case 6:
            sub_30613();
            break;
            case 7:
            sub_38339();
            break;
            case -1: break;
        }
        WAIT( 0 );
        if (l_U520 == 1)
        {
            CLEAR_HELP();
            CLEAR_WANTED_LEVEL( l_U825 );
            sub_38439();
        }
        else if (l_U519 == 1)
        {
            CLEAR_HELP();
            sub_50156();
        }
    }
    sub_2923();
    return;
}

void sub_622(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_658())
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

int sub_658()
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

void sub_780()
{
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_801();
        l_U519 = 1;
        l_U489 = -1;
        sub_2923();
    }
    return;
}

void sub_801()
{
    sub_810();
    return;
}

void sub_810()
{
    int iVar2;

    iVar2 = 14;
    sub_824( iVar2 );
    sub_2000( iVar2 );
    return;
}

void sub_824(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_868();
        sub_1029();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1137();
            sub_1176();
        }
    }
    sub_1252();
    sub_1353();
    uVar5 = sub_1466( uParam0 );
    sub_1907( uVar5, 0 );
    return;
}

void sub_868()
{
    sub_882( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_982();
    }
    return;
}

void sub_882(int iParam0)
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

void sub_982()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1029()
{
    sub_1038();
    return;
}

void sub_1038()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1137()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1176()
{
    sub_1185();
    return;
}

void sub_1185()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1252()
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

void sub_1353()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1375();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1375()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1466(unknown uParam0)
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
    sub_1865( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1865(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1907(int iParam0, boolean bParam1)
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

void sub_2000(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2009();
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
        sub_2784();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_2009()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_2047( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_2047( 1, g_U569[I] )) != 0)
            {
                sub_2333( I );
            }
        }
    }
    if (NOT sub_2499())
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

int sub_2047(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2333(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2418( g_U569 - 1 );
    return;
}

void sub_2418(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2499()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_2047( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2784()
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

void sub_2923()
{
    int I;

    sub_2932();
    sub_3012();
    sub_3092();
    DESTROY_ALL_CAMS();
    ENABLE_SCENE_STREAMING( 1 );
    g_U9890 = 0;
    SET_WANTED_MULTIPLIER( 1.00000000 );
    FLUSH_SCENARIO_BLOCKING_AREAS();
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 419786306, 65439, 878, 15, 0, 0.00000000 );
    FLUSH_SCENARIO_BLOCKING_AREAS();
    SWITCH_PED_PATHS_ON( -136.57000000, 750.12000000, 12.87000000, -76.24000000, 773.11000000, 13.68000000 );
    sub_3295( 14 );
    if (DOES_PICKUP_EXIST( l_U509 ))
    {
        REMOVE_PICKUP( l_U509 );
    }
    if (DOES_PICKUP_EXIST( l_U510 ))
    {
        REMOVE_PICKUP( l_U510 );
    }
    if (DOES_PICKUP_EXIST( l_U511 ))
    {
        REMOVE_PICKUP( l_U511 );
    }
    if (DOES_PICKUP_EXIST( l_U517 ))
    {
        REMOVE_PICKUP( l_U517 );
    }
    for ( I = 0; I <= 3; I++ )
    {
        if (DOES_PICKUP_EXIST( l_U512[I] ))
        {
            REMOVE_PICKUP( l_U512[I] );
        }
    }
    sub_4174();
    if (DOES_BLIP_EXIST( l_U602 ))
    {
        REMOVE_BLIP( l_U602 );
    }
    if (DOES_BLIP_EXIST( l_U603 ))
    {
        REMOVE_BLIP( l_U603 );
    }
    if (DOES_BLIP_EXIST( l_U604 ))
    {
        REMOVE_BLIP( l_U604 );
    }
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2932()
{
    int I;

    if (l_U644 != 0)
    {
        for ( I = 0; I <= (l_U644 - 1); I++ )
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U623[I] );
        }
    }
    l_U644 = 0;
    return;
}

void sub_3012()
{
    int I;

    if (l_U656 != 0)
    {
        for ( I = 0; I <= (l_U656 - 1); I++ )
        {
            REMOVE_ANIMS( l_U645[I] );
        }
    }
    l_U656 = 0;
    return;
}

void sub_3092()
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U811[I] ))
        {
            MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U811[I] );
        }
    }
    return;
}

void sub_3295(unknown uParam0)
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_3306( uParam0 ) );
    return;
}

int sub_3306(unknown uParam0)
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
    sub_1865( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_4174()
{
    g_U965 = -1;
    return;
}

void sub_4389()
{
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U760 );
    if (((DOES_VEHICLE_EXIST( l_U760 )) AND (NOT (IS_CAR_DEAD( l_U760 )))) AND (l_U760 != nil))
    {
        if (NOT (IS_CAR_A_MISSION_CAR( l_U760 )))
        {
            SET_CAR_AS_MISSION_CAR( l_U760 );
            l_U598 = 1;
        }
        if (LOCATE_CAR_3D( l_U760, -123.56000000, -256.57000000, 11.69000000, 15.00000000, 15.00000000, 15.00000000, 0 ))
        {
            if ((l_U613 != l_U760) AND (l_U613 != nil))
            {
                if (DOES_VEHICLE_EXIST( l_U613 ))
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U613 );
                }
            }
            CLEAR_AREA( -126.66210000, -266.25630000, 11.55910000, 3.00000000, 1 );
            SET_CAR_HEADING( l_U760, 0.00000000 );
            SET_CAR_COORDINATES( l_U760, -126.66210000, -266.25630000, 11.55910000 );
            if (NOT (IS_THIS_MODEL_A_BOAT( l_U614 )))
            {
                SET_CAR_ON_GROUND_PROPERLY( l_U760 );
            }
            if (l_U598 == 1)
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U760 );
                l_U598 = 0;
            }
        }
        l_U613 = l_U760;
    }
    return;
}

void sub_4816()
{
    sub_4834( "RB4AUD" );
    sub_4997( 0, sub_4948(), "Niko", 0 );
    l_U824 = sub_4948();
    l_U825 = sub_5156();
    ADD_SCENARIO_BLOCKING_AREA( -124.00000000, 752.40000000, 12.00000000, -90.25000000, 763.77000000, 16.00000000 );
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -98.84000000, 854.75000000, 26.10000000, 0, 0, 0, ref l_U509 );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U509, "museum2_hall" );
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -99.18500000, 767.20000000, 15.49000000, 0, 0, 90, ref l_U510 );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U510, "museum2_loading" );
    CREATE_PICKUP_ROTATE( -1758615024, 22, 200, -102.61000000, 844.64000000, 18.75300000, 270.52000000, 0, 77.04000000, ref l_U511 );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U511, "museum2_hall" );
    while (NOT sub_5449())
    {
        WAIT( 0 );
    }
    sub_5564( "missray4" );
    while (NOT sub_5616())
    {
        WAIT( 0 );
    }
    return;
}

void sub_4834(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_4853();
    return;
}

void sub_4853()
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

void sub_4948()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4997(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_5081( "\n PED NUMBER ", uParam0 );
    sub_5121( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_5081(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5121(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5156()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_5449()
{
    int I;

    if (l_U644 != 0)
    {
        for ( I = 0; I <= (l_U644 - 1); I++ )
        {
            if (NOT (HAS_MODEL_LOADED( l_U623[I] )))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_5564(unknown uParam0)
{
    REQUEST_ANIMS( uParam0 );
    l_U645[l_U656] = uParam0;
    l_U656++;
    return;
}

int sub_5616()
{
    int I;

    if (l_U656 != 0)
    {
        for ( I = 0; I <= (l_U656 - 1); I++ )
        {
            if (NOT (HAVE_ANIMS_LOADED( l_U645[I] )))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_5834()
{
    if (NOT (IS_CHAR_DEAD( l_U824 )))
    {
        SET_CHAR_COORDINATES( l_U824, -123.63790000, -256.57810000, 11.68540000 );
        SET_CHAR_HEADING( l_U824, 90.00000000 );
        SET_GAME_CAM_HEADING( 0.00000000 );
    }
    LOAD_SCENE( -123.63790000, -256.57810000, 11.68540000 );
    sub_5943();
    WAIT( 500 );
    DO_SCREEN_FADE_IN( 500 );
    SET_PLAYER_CONTROL_ADVANCED( sub_5156(), 1, 1, 1 );
    l_U489++;
    return;
}

void sub_5943()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_6040()
{
    unknown uVar2;
    unknown uVar3;

    if (l_U551 == 0)
    {
        PRINT_NOW( "RB4_COMMAND_06", 7500, 1 );
        if (NOT (DOES_BLIP_EXIST( l_U602 )))
        {
            ADD_BLIP_FOR_COORD( l_U599._fU0, l_U599._fU4, l_U599._fU8, ref l_U602 );
            CHANGE_BLIP_COLOUR( l_U602, 3 );
            SET_ROUTE( l_U602, 1 );
        }
        l_U551 = 1;
    }
    if (l_U547 == 0)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U824, -86.40540000, 821.55280000, 18.62500000, 150.00000000, 150.00000000, 150.00000000, 0 ))
        {
            sub_6232();
            sub_6430();
            sub_7145();
            sub_8170();
            sub_8250();
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 419786306, 65439, 878, 15, 1, 0.00000000 );
            ADD_SCENARIO_BLOCKING_AREA( -136.57000000, 750.12000000, 12.87000000, -76.24000000, 773.11000000, 13.68000000 );
            SWITCH_PED_PATHS_OFF( -136.57000000, 750.12000000, 12.00000000, -76.24000000, 773.11000000, 16.00000000 );
            l_U547 = 1;
        }
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( l_U824, -86.40540000, 821.55280000, 18.62500000, 50.00000000, 50.00000000, 50.00000000, 0 ))
    {
        if (IS_CHAR_IN_ANY_CAR( l_U824 ))
        {
            PRINTSTRING( "\n --> STORE PLAYER CAR \n\n" );
            STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U824, ref l_U760 );
        }
    }
    if ((IS_WANTED_LEVEL_GREATER( l_U825, 0 )) AND (l_U566 == 1))
    {
        if (DOES_BLIP_EXIST( l_U605 ))
        {
            REMOVE_BLIP( l_U605 );
        }
        if (DOES_BLIP_EXIST( l_U602 ))
        {
            REMOVE_BLIP( l_U602 );
        }
        PRINT_NOW( "RB4_COMMAND_07", 7500, 1 );
        l_U566 = 0;
    }
    if ((NOT (IS_WANTED_LEVEL_GREATER( l_U825, 0 ))) AND (l_U566 == 0))
    {
        if (DOES_CHAR_EXIST( l_U658 ))
        {
            if (NOT (DOES_BLIP_EXIST( l_U605 )))
            {
                ADD_BLIP_FOR_CHAR( l_U658, ref l_U605 );
                SET_BLIP_AS_FRIENDLY( l_U605, 1 );
            }
            if (NOT (DOES_BLIP_EXIST( l_U602 )))
            {
                ADD_BLIP_FOR_COORD( l_U599._fU0, l_U599._fU4, l_U599._fU8, ref l_U602 );
                CHANGE_BLIP_COLOUR( l_U602, 3 );
                SET_ROUTE( l_U602, 1 );
                CHANGE_BLIP_SCALE( l_U602, 0.00000000 );
            }
        }
        else if (NOT (DOES_BLIP_EXIST( l_U602 )))
        {
            ADD_BLIP_FOR_COORD( l_U599._fU0, l_U599._fU4, l_U599._fU8, ref l_U602 );
            CHANGE_BLIP_COLOUR( l_U602, 3 );
            SET_ROUTE( l_U602, 1 );
        }
        PRINT_NOW( "RB4_COMMAND_06", 7500, 1 );
        l_U566 = 1;
    }
    if ((NOT (IS_CHAR_DEAD( l_U658 ))) AND (l_U566 == 1))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( l_U824 )))
        {
            if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U824, l_U658, 7.00000000, 4.20000000, 2.00000000, 0 )) AND (sub_9455( 1, 1 )))
            {
                if (DOES_BLIP_EXIST( l_U602 ))
                {
                    REMOVE_BLIP( l_U602 );
                }
                if (DOES_BLIP_EXIST( l_U605 ))
                {
                    REMOVE_BLIP( l_U605 );
                }
                g_U9890 = 1;
                l_U489++;
            }
        }
        else if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U824, l_U658, 10.00000000, 5.00000000, 10.00000000, 0 )) AND (sub_9455( 1, 1 )))
        {
            if (DOES_BLIP_EXIST( l_U602 ))
            {
                REMOVE_BLIP( l_U602 );
            }
            if (DOES_BLIP_EXIST( l_U605 ))
            {
                REMOVE_BLIP( l_U605 );
            }
            g_U9890 = 1;
            l_U489++;
        }
    }
    sub_9949();
    sub_10458();
    return;
}

void sub_6232()
{
    sub_6246( l_U805 );
    sub_6246( l_U806 );
    sub_6246( l_U807 );
    sub_6246( l_U808 );
    sub_6246( l_U809 );
    while (NOT sub_5449())
    {
        WAIT( 0 );
    }
    SUPPRESS_CAR_MODEL( l_U805 );
    SUPPRESS_CAR_MODEL( l_U806 );
    SUPPRESS_CAR_MODEL( l_U807 );
    SUPPRESS_CAR_MODEL( l_U808 );
    SUPPRESS_CAR_MODEL( l_U809 );
    return;
}

void sub_6246(unknown uParam0)
{
    REQUEST_MODEL( uParam0 );
    l_U623[l_U644] = uParam0;
    l_U644++;
    return;
}

void sub_6430()
{
    CREATE_CAR( l_U808, -81.38960000, 843.25590000, 14.20580000 - 1.00000000, ref l_U744[0], 1 );
    SET_CAR_HEADING( l_U744[0], 297.78990000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U744[0] );
    CHANGE_CAR_COLOUR( l_U744[0], 15, 0 );
    SET_EXTRA_CAR_COLOURS( l_U744[0], 0, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U744[0], 5, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U744[0], 6, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U744[0], 7, 0 );
    SET_CAR_ON_GROUND_PROPERLY( l_U744[0] );
    CREATE_CAR( l_U808, -85.08990000, 884.00220000, 13.67920000, ref l_U744[1], 1 );
    SET_CAR_HEADING( l_U744[1], 62.70760000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U744[1] );
    CHANGE_CAR_COLOUR( l_U744[1], 15, 0 );
    SET_EXTRA_CAR_COLOURS( l_U744[1], 0, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U744[1], 5, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U744[1], 6, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U744[1], 7, 0 );
    SET_CAR_ON_GROUND_PROPERLY( l_U744[1] );
    CREATE_CAR( l_U808, -90.91450000, 888.04730000, 14.05110000, ref l_U744[2], 1 );
    SET_CAR_HEADING( l_U744[2], 43.78220000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U744[2] );
    CHANGE_CAR_COLOUR( l_U744[2], 15, 0 );
    SET_EXTRA_CAR_COLOURS( l_U744[2], 0, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U744[2], 5, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U744[2], 6, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U744[2], 7, 0 );
    SET_CAR_ON_GROUND_PROPERLY( l_U744[2] );
    CREATE_CAR( l_U808, -94.48410000, 894.15280000, 14.27020000, ref l_U744[3], 1 );
    SET_CAR_HEADING( l_U744[3], 15.21320000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U744[3] );
    CHANGE_CAR_COLOUR( l_U744[3], 15, 0 );
    SET_EXTRA_CAR_COLOURS( l_U744[3], 0, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U744[3], 5, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U744[3], 6, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U744[3], 7, 0 );
    SET_CAR_ON_GROUND_PROPERLY( l_U744[3] );
    return;
}

void sub_7145()
{
    CREATE_CAR( l_U806, -110.88070000, 755.10860000, 13.60010000, ref l_U749[0], 1 );
    SET_CAR_HEADING( l_U749[0], 114.54670000 + 180 );
    SET_CAR_ON_GROUND_PROPERLY( l_U749[0] );
    CHANGE_CAR_COLOUR( l_U749[0], 0, 0 );
    SET_EXTRA_CAR_COLOURS( l_U749[0], 0, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U749[0], 5, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U749[0], 6, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U749[0], 7, 0 );
    SET_CAR_ON_GROUND_PROPERLY( l_U749[0] );
    SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U749[0], 1 );
    CREATE_CAR( l_U805, -104.27780000, 755.96310000, 14.32950000 - 1.00000000, ref l_U749[1], 1 );
    SET_CAR_HEADING( l_U749[1], 91.67760000 + 180 );
    SET_CAR_ON_GROUND_PROPERLY( l_U749[1] );
    CHANGE_CAR_COLOUR( l_U749[1], 0, 0 );
    SET_EXTRA_CAR_COLOURS( l_U749[1], 0, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U749[1], 5, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U749[1], 6, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U749[1], 7, 0 );
    SET_CAR_ON_GROUND_PROPERLY( l_U749[1] );
    SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U749[1], 1 );
    CREATE_CAR( l_U806, -98.14050000, 755.48470000, 14.34680000 - 1.00000000, ref l_U749[2], 1 );
    SET_CAR_HEADING( l_U749[2], 77.05760000 + 180 );
    SET_CAR_ON_GROUND_PROPERLY( l_U749[2] );
    CHANGE_CAR_COLOUR( l_U749[2], 0, 0 );
    SET_EXTRA_CAR_COLOURS( l_U749[2], 0, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U749[2], 5, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U749[2], 6, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U749[2], 7, 0 );
    SET_CAR_ON_GROUND_PROPERLY( l_U749[2] );
    SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U749[2], 1 );
    CREATE_CAR( l_U805, -61.28390000, 803.44560000, 13.52400000, ref l_U749[3], 1 );
    SET_CAR_HEADING( l_U749[3], 179.16410000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U749[3] );
    CHANGE_CAR_COLOUR( l_U749[3], 0, 0 );
    SET_EXTRA_CAR_COLOURS( l_U749[3], 0, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U749[3], 5, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U749[3], 6, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U749[3], 7, 0 );
    SET_CAR_ON_GROUND_PROPERLY( l_U749[3] );
    SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U749[3], 1 );
    CREATE_CAR( l_U807, -27.12660000, 772.74490000, 13.71190000, ref l_U749[4], 1 );
    SET_CAR_HEADING( l_U749[4], 89.58290000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U749[4] );
    CHANGE_CAR_COLOUR( l_U749[4], 0, 0 );
    SET_EXTRA_CAR_COLOURS( l_U749[4], 0, 0 );
    FORCE_CAR_LIGHTS( l_U749[4], 2 );
    SET_CAR_LIGHT_MULTIPLIER( l_U749[4], 2.20000000 );
    TURN_OFF_VEHICLE_EXTRA( l_U749[4], 5, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U749[4], 6, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U749[4], 7, 0 );
    SET_CAR_ON_GROUND_PROPERLY( l_U749[4] );
    SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U749[4], 1 );
    return;
}

void sub_8170()
{
    CREATE_CAR( l_U809, -98.67910000, 884.70970000, 14.18830000, ref l_U759, 1 );
    SET_CAR_HEADING( l_U759, 91.18260000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U759 );
    return;
}

void sub_8250()
{
    # -sub_C1FFC0-0xc214c8( 2, ref l_U817 );
    LOAD_COMBAT_DECISION_MAKER( 9, ref l_U822 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U822, 2 );
    sub_6246( l_U734 );
    while (NOT (HAS_MODEL_LOADED( l_U734 )))
    {
        WAIT( 0 );
    }
    CREATE_CHAR( 26, l_U734, -106.76030000, 762.18690000, 14.29030000, ref l_U658, 1 );
    SET_CHAR_HEADING( l_U658, 181.69410000 );
    SET_CHAR_DECISION_MAKER( l_U658, l_U817 );
    SET_COMBAT_DECISION_MAKER( l_U658, l_U822 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U658, 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U658, 1 );
    SET_CHAR_NEVER_TARGETTED( l_U658, 1 );
    SET_PED_DONT_DO_EVASIVE_DIVES( l_U658, 1 );
    sub_8480( l_U658, 0 );
    SET_CHAR_ACCURACY( l_U658, 82 );
    if (l_U566 == 1)
    {
        if (NOT (DOES_BLIP_EXIST( l_U605 )))
        {
            ADD_BLIP_FOR_CHAR( l_U658, ref l_U605 );
            SET_BLIP_AS_FRIENDLY( l_U605, 1 );
        }
        if (DOES_BLIP_EXIST( l_U602 ))
        {
            CHANGE_BLIP_SCALE( l_U602, 0.00000000 );
        }
    }
    TASK_LOOK_AT_CHAR( l_U658, l_U824, -2, 0 );
    return;
}

void sub_8480(unknown uParam0, int iParam1)
{
    if (iParam1 == 1)
    {
        GIVE_DELAYED_WEAPON_TO_CHAR( uParam0, 15, 9999, 1 );
    }
    else if (iParam1 == 2)
    {
        GIVE_DELAYED_WEAPON_TO_CHAR( uParam0, 11, 9999, 1 );
    }
    else if (iParam1 == 3)
    {
        GIVE_DELAYED_WEAPON_TO_CHAR( uParam0, 13, 9999, 1 );
    }
    else
    {
        GIVE_DELAYED_WEAPON_TO_CHAR( uParam0, 9, 9999, 1 );
    };;;
    return;
}

int sub_9455(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_4948() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4948(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_4948() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4948(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_4948()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_4948() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_4948() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_5156() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_5156() )))
    {
        return 0;
    }
    return 1;
}

void sub_9949()
{
    int I;

    if (l_U567[0] == 0)
    {
        if (NOT (IS_CAR_DEAD( l_U749[0] )))
        {
            GET_CAR_HEALTH( l_U749[0], ref l_U494 );
            if ((((l_U494 < 750) AND (NOT (IS_CHAR_IN_CAR( l_U824, l_U749[0] )))) AND (NOT (IS_CHAR_TOUCHING_VEHICLE( l_U824, l_U749[0] )))) AND (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U824, l_U749[0], 7.50000000, 7.50000000, 7.50000000, 0 ))))
            {
                EXPLODE_CAR( l_U749[0], 1, 0 );
                l_U567[0] = 1;
            }
            if (IS_CHAR_IN_CAR( l_U824, l_U749[0] ))
            {
                SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U749[0], 0 );
                l_U567[0] = 1;
            }
        }
    }
    for ( I = 1; I <= 4; I++ )
    {
        if (l_U567[0] == 0)
        {
            if (NOT (IS_CAR_DEAD( l_U749[I] )))
            {
                GET_CAR_HEALTH( l_U749[I], ref l_U494 );
                if ((((l_U494 < (300 - ((I) XOR (4)))) AND (NOT (IS_CHAR_IN_CAR( l_U824, l_U749[I] )))) AND (NOT (IS_CHAR_TOUCHING_VEHICLE( l_U824, l_U749[I] )))) AND (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U824, l_U749[I], 8.00000000, 8.00000000, 8.00000000, 0 ))))
                {
                    EXPLODE_CAR( l_U749[I], 1, 0 );
                    l_U567[I] = 1;
                }
                if (IS_CHAR_IN_CAR( l_U824, l_U749[I] ))
                {
                    SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U749[I], 0 );
                    l_U567[I] = 1;
                }
            }
        }
    }
    return;
}

void sub_10458()
{
    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U658, l_U824, 0 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U658 )))
        {
            SET_CHAR_RELATIONSHIP( l_U658, 5, 0 );
            SET_CHAR_KEEP_TASK( l_U658, 1 );
        }
        if (NOT IS_SCREEN_FADING_OUT())
        {
            PRINT_NOW( "RB4_FAIL_05", 7000, 1 );
        }
        sub_10596( 14, "RB4_CALL2", "RB4AUD", 0 );
        l_U489 = -1;
        l_U519 = 1;
    }
    else if ((DOES_CHAR_EXIST( l_U658 )) AND (IS_CHAR_INJURED( l_U658 )))
    {
        if (NOT (IS_CHAR_INJURED( l_U658 )))
        {
            SET_CHAR_RELATIONSHIP( l_U658, 5, 0 );
            SET_CHAR_KEEP_TASK( l_U658, 1 );
        }
        if (NOT IS_SCREEN_FADING_OUT())
        {
            PRINT_NOW( "RB4_FAIL_06", 7000, 1 );
        }
        sub_10596( 14, "RB4_CALL2", "RB4AUD", 0 );
        l_U489 = -1;
        l_U519 = 1;
    }
    return;
}

void sub_10596(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_10640( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_10640(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_11373()
{
    DO_SCREEN_FADE_OUT( 750 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        sub_10458();
        if (l_U519 == 1)
        {
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            WAIT( 1000 );
            DO_SCREEN_FADE_IN( 750 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
            PRINT_NOW( "RB4_FAIL_05", 7000, 1 );
            return;
        }
        WAIT( 0 );
    }
    if (IS_CHAR_IN_ANY_CAR( l_U824 ))
    {
        PRINTSTRING( "\n\n STORE PLAYER CAR \n\n\n" );
        STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U824, ref l_U760 );
        if (NOT (IS_CAR_A_MISSION_CAR( l_U760 )))
        {
            SET_CAR_AS_MISSION_CAR( l_U760 );
            l_U598 = 1;
        }
        WAIT( 0 );
        WARP_CHAR_FROM_CAR_TO_COORD( l_U824, -120.57320000, 791.50000000, 24.93190000 );
    }
    SWITCH_PED_PATHS_ON( -136.57000000, 750.12000000, 12.00000000, -76.24000000, 773.11000000, 16.00000000 );
    SET_PLAYER_CONTROL_ADVANCED( l_U825, 0, 1, 1 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U824 );
    if (NOT (IS_CAR_DEAD( l_U760 )))
    {
        if (LOCATE_CAR_3D( l_U760, -106.76030000, 762.18690000, 14.29030000, 25.00000000, 25.00000000, 10.00000000, 0 ))
        {
            PRINTSTRING( "\n\n -----> CAR WITHIN 25m <----- \n\n\n" );
            if (NOT (IS_CAR_A_MISSION_CAR( l_U760 )))
            {
                SET_CAR_AS_MISSION_CAR( l_U760 );
                l_U598 = 1;
            }
            if (LOCATE_CAR_3D( l_U760, -106.76030000, 762.18690000, 14.29030000, 8.00000000, 8.00000000, 8.00000000, 0 ))
            {
                PRINTSTRING( "\n\n -----> CAR WITHIN 8m - MOVE IT <----- \n\n\n" );
                SET_CAR_HEADING( l_U760, 270.97660000 );
                SET_CAR_COORDINATES( l_U760, -95.79840000, 760.51210000, 13.96420000 );
            }
            if (NOT (IS_THIS_MODEL_A_BOAT( l_U614 )))
            {
                SET_CAR_ON_GROUND_PROPERLY( l_U760 );
            }
        }
    }
    DELETE_CHAR( ref l_U658 );
    CLEAR_AREA( -106.36830000, 762.87490000, 14.50000000, 5.00000000, 1 );
    sub_622( "RB4AUD", 6 );
    ENABLE_SCENE_STREAMING( 0 );
    START_CUTSCENE_NOW( "RB_4b" );
    while (NOT HAS_CUTSCENE_LOADED())
    {
        WAIT( 0 );
    }
    while (NOT HAS_CUTSCENE_FINISHED())
    {
        WAIT( 0 );
    }
    CLEAR_NAMED_CUTSCENE( "RB_4b" );
    ENABLE_SCENE_STREAMING( 1 );
    l_U489++;
    return;
}

void sub_12244()
{
    int I;

    if (l_U552 == 0)
    {
        sub_12265();
        ADD_SCENARIO_BLOCKING_AREA( -143.00000000, 760.00000000, 12.00000000, -76.50000000, 886.50000000, 30.00000000 );
        SET_WANTED_MULTIPLIER( 0.00000000 );
        SET_PED_DENSITY_MULTIPLIER( 0.50000000 );
        SET_PLAYER_MOOD_PISSED_OFF( l_U825, 600 );
        REGISTER_SCRIPT_WITH_AUDIO( 0 );
        while (NOT (REQUEST_MISSION_AUDIO_BANK( "SCRIPT_MISSION\RB4_MUSEUM_PIECE" )))
        {
            PRINTSTRING( "\n\n   ----> Load Audio <---- \n\n\n" );
            WAIT( 0 );
        }
        sub_12469();
        sub_12776();
        sub_13393();
        if (DOES_VEHICLE_EXIST( l_U759 ))
        {
            DELETE_CAR( ref l_U759 );
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U809 );
        LOAD_SCENE( -94.57000000, 790.50650000, 24.89680000 );
        FREEZE_CHAR_POSITION( l_U824, 1 );
        SET_CHAR_COORDINATES( l_U824, -94.57000000, 790.50650000, 24.89680000 );
        SET_CHAR_HEADING( l_U824, 21.37540000 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U824, "Museum2_Hall" );
        SET_GAME_CAM_HEADING( 0.00000000 );
        WAIT( 2000 );
        FREEZE_CHAR_POSITION( l_U824, 0 );
        if (HAS_CHAR_GOT_WEAPON( l_U824, 15 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U824, 15, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U824, 14 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U824, 14, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U824, 13 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U824, 13, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U824, 12 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U824, 12, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U824, 11 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U824, 11, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U824, 10 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U824, 10, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U824, 9 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U824, 9, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U824, 7 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U824, 7, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U824, 4 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U824, 4, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U824, 5 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U824, 5, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U824, 18 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U824, 18, 1 );
        }
        else
        {
            TASK_SWAP_WEAPON( l_U824, 1 );
        };;;;;;;;;;;
        OPEN_SEQUENCE_TASK( ref l_U622 );
        TASK_PUT_CHAR_DIRECTLY_INTO_COVER( 0, -94.57000000, 790.50650000, 24.89680000, 60000 );
        CLOSE_SEQUENCE_TASK( l_U622 );
        TASK_PERFORM_SEQUENCE( l_U824, l_U622 );
        CLEAR_SEQUENCE_TASK( l_U622 );
        SETTIMERA( 0 );
        sub_14488();
        sub_14667();
        sub_14866();
        sub_15357();
        sub_16496();
        sub_17533();
        WAIT( 1000 );
        l_U495 = GET_SOUND_ID();
        PLAY_SOUND_FROM_POSITION( l_U495, "RB4_MUSEUM_PIECE_ALARM", 65429, 821, 20 );
        DO_SCREEN_FADE_IN( 500 );
        SET_PLAYER_CONTROL_ADVANCED( l_U825, 1, 1, 1 );
        SET_PED_IS_BLIND_RAGING( l_U824, 1 );
        PRINT_NOW( "RB4_COMMAND_02", 7500, 1 );
        if (NOT (DOES_BLIP_EXIST( l_U603 )))
        {
            ADD_BLIP_FOR_COORD( -106.36830000, 762.87490000, 14.50000000, ref l_U603 );
        }
        STOP_PED_SPEAKING( sub_4948(), 0 );
        for ( I = 0; I <= 2; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U661[I] )))
            {
                if (I == 1)
                {
                    if (NOT (IS_CHAR_DEAD( l_U658 )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U658 );
                        TASK_COMBAT( l_U661[I], l_U658 );
                    }
                }
                else if (I == 2)
                {
                    PRINTSTRING( "\n\n ----> MAFIA SHOOT AT VASES <---- \n\n\n" );
                    OPEN_SEQUENCE_TASK( ref l_U622 );
                    TASK_SHOOT_AT_COORD( 0, -95.19000000, 791.21000000, 26.18000000, 2000, 3 );
                    TASK_AIM_GUN_AT_COORD( 0, -94.88000000, 791.34000000, 26.17000000, 1000 );
                    TASK_SHOOT_AT_COORD( 0, -94.88000000, 791.34000000, 26.17000000, 2000, 3 );
                    TASK_AIM_GUN_AT_COORD( 0, -94.38000000, 791.21000000, 26.43000000, 2000 );
                    TASK_SHOOT_AT_COORD( 0, -94.38000000, 791.21000000, 26.43000000, 2000, 3 );
                    CLOSE_SEQUENCE_TASK( l_U622 );
                    TASK_PERFORM_SEQUENCE( l_U661[I], l_U622 );
                    CLEAR_SEQUENCE_TASK( l_U622 );
                }
                else
                {
                    TASK_COMBAT( l_U661[I], l_U824 );
                }
            }
        }
        for ( I = 0; I <= 7; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U670[I] )))
            {
                TASK_COMBAT( l_U670[I], l_U824 );
            }
        }
        for ( I = 0; I <= 5; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U679[I] )))
            {
                if (NOT (IS_CHAR_DEAD( l_U658 )))
                {
                    TASK_COMBAT( l_U679[I], l_U658 );
                }
            }
        }
        for ( I = 0; I <= 6; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U686[I] )))
            {
                TASK_COMBAT( l_U686[I], l_U824 );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U658 )))
        {
            OPEN_SEQUENCE_TASK( ref l_U622 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -121.99450000, 850.29050000, 25.93190000, 3, 30000, 3.00000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -93.55260000, 852.55820000, 25.93190000, 3, 30000, 3.00000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -101.96960000, 873.34230000, 25.93180000, 3, 30000, 3.00000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -106.23440000, 851.27010000, 18.62460000, 3, 30000, 3.00000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -91.32770000, 873.48250000, 14.68300000, 3, 30000, 3.00000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -97.25390000, 876.78470000, 13.68340000, 3, 30000, 1.00000000 );
            CLOSE_SEQUENCE_TASK( l_U622 );
            TASK_PERFORM_SEQUENCE( l_U658, l_U622 );
            CLEAR_SEQUENCE_TASK( l_U622 );
        }
        if (NOT (IS_CHAR_INJURED( l_U660 )))
        {
            OPEN_SEQUENCE_TASK( ref l_U622 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -125.16410000, 772.74190000, 24.93200000, 3, 10000, 1.00000000 );
            TASK_TURN_CHAR_TO_FACE_COORD( 0, -116.66640000, 790.75580000, 25.93190000 );
            TASK_PLAY_ANIM( 0, "cower_idle", "missray4", 4.00000000, 1, 0, 0, 0, -1 );
            CLOSE_SEQUENCE_TASK( l_U622 );
            TASK_PERFORM_SEQUENCE( l_U660, l_U622 );
            CLEAR_SEQUENCE_TASK( l_U622 );
        }
        l_U552 = 1;
        SETTIMERA( 0 );
    }
    if ((l_U525[0] == 0) AND (TIMERA() > 500))
    {
        FIRE_SINGLE_BULLET( -100.00000000, 792.00000000, 26.50000000, -95.19000000, 791.21000000, 26.18000000, 10 );
        FIRE_SINGLE_BULLET( -100.00000000, 792.00000000, 26.50000000, -95.19000000, 791.21000000, 26.18000000, 10 );
        l_U525[0] = 1;
    }
    if ((l_U525[1] == 0) AND (TIMERA() > 1500))
    {
        FIRE_SINGLE_BULLET( -95.50000000, 795.00000000, 26.50000000, -94.88000000, 791.34000000, 26.17000000, 10 );
        FIRE_SINGLE_BULLET( -95.50000000, 795.00000000, 26.50000000, -94.88000000, 791.34000000, 26.17000000, 10 );
        l_U525[1] = 1;
    }
    if ((l_U525[2] == 0) AND (TIMERA() > 3000))
    {
        FIRE_SINGLE_BULLET( -100.00000000, 792.00000000, 26.50000000, -94.38000000, 791.21000000, 26.43000000, 10 );
        FIRE_SINGLE_BULLET( -100.00000000, 792.00000000, 26.50000000, -94.38000000, 791.21000000, 26.43000000, 10 );
        l_U525[2] = 1;
    }
    sub_20082();
    sub_20323();
    sub_21590();
    sub_22285();
    sub_22596();
    if (l_U561 == 0)
    {
        if ((TIMERA() > 4000) || (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U824, -123.63790000, -256.57810000, 11.68540000, 4.00000000, 4.00000000, 4.00000000, 0 ))))
        {
            CREATE_CHAR( 8, l_U739, -94.27800000, 804.77880000, 24.89720000, ref l_U670[0], 1 );
            SET_CHAR_HEADING( l_U670[0], 187.15760000 );
            sub_14964( l_U670[0], 2, 1, 1, "Museum2_Hall" );
            sub_8480( l_U670[0], 0 );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U670[0], -94.27800000, 804.77880000, 24.89720000, 3.00000000 );
            SET_CHAR_ACCURACY( l_U670[0], 20 );
            TASK_COMBAT( l_U670[0], l_U824 );
            l_U561 = 1;
        }
    }
    if ((NOT (IS_CHAR_INJURED( l_U679[4] ))) AND (l_U521[0] == 0))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U824, l_U679[4], 70.00000000, 70.00000000, 70.00000000, 0 ))
        {
            SET_COMBAT_DECISION_MAKER( l_U679[4], l_U823 );
            SET_CHAR_ACCURACY( l_U679[4], 45 );
            l_U521[0] = 1;
        }
    }
    if ((NOT (IS_CHAR_INJURED( l_U679[2] ))) AND (l_U521[1] == 0))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U824, l_U679[2], 25.00000000, 25.00000000, 25.00000000, 0 ))
        {
            SET_COMBAT_DECISION_MAKER( l_U679[2], l_U823 );
            SET_CHAR_ACCURACY( l_U679[2], 45 );
            l_U521[1] = 1;
        }
    }
    if ((NOT (IS_CHAR_INJURED( l_U686[1] ))) AND (l_U521[2] == 0))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U824, l_U686[1], 35.00000000, 35.00000000, 35.00000000, 0 ))
        {
            SET_COMBAT_DECISION_MAKER( l_U686[1], l_U823 );
            SET_CHAR_ACCURACY( l_U686[1], 45 );
            l_U521[2] = 1;
        }
    }
    GET_CHAR_COORDINATES( l_U824, ref l_U505._fU0, ref l_U505._fU4, ref l_U505._fU8 );
    if ((LOCATE_CHAR_ANY_MEANS_3D( l_U824, -100.87830000, 873.18660000, 25.93190000, 3.00000000, 3.00000000, 3.00000000, 0 )) || (l_U505._fU8 < 23.00000000))
    {
        l_U489++;
    }
    return;
}

void sub_12265()
{
    return;
}

void sub_12469()
{
    # -sub_C1FFC0-0xc214c8( 3, ref l_U816 );
    # -sub_C1FFC0-0xc214c8( 1, ref l_U815 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U814 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U820 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U820, 0 );
    LOAD_COMBAT_DECISION_MAKER( 10, ref l_U821 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U821, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_CAUTION( l_U821, 2 );
    LOAD_COMBAT_DECISION_MAKER( 11, ref l_U823 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U823, 0 );
    LOAD_COMBAT_DECISION_MAKER( 0, ref l_U819 );
    sub_6246( l_U734 );
    sub_6246( l_U735 );
    sub_6246( l_U736 );
    sub_6246( l_U737 );
    sub_6246( l_U738 );
    sub_6246( l_U739 );
    sub_6246( l_U740 );
    sub_6246( l_U741 );
    while (NOT sub_5449())
    {
        WAIT( 0 );
        PRINTSTRING( "\n -----> Waiting for models to load...\n\n" );
    }
    return;
}

void sub_12776()
{
    CREATE_CHAR( 7, l_U738, -123.31870000, 789.32980000, 24.93180000 + 3.00000000, ref l_U665[0], 1 );
    SET_CHAR_HEADING( l_U665[0], 60.00000000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U665[0], "Museum2_Hall" );
    SET_CHAR_COMPONENT_VARIATION( l_U665[0], 0, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U665[0], 6, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U665[0], 2, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U665[0], 1, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U665[0], 3, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U665[0], 8, 0, 0 );
    if (NOT (IS_CHAR_DEAD( l_U665[0] )))
    {
        SET_CHAR_HEALTH( l_U665[0], 5 );
    }
    CREATE_CHAR( 7, l_U738, -122.66670000, 792.08100000, 24.93180000 + 3.00000000, ref l_U665[1], 1 );
    SET_CHAR_HEADING( l_U665[1], 120.00000000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U665[1], "Museum2_Hall" );
    SET_CHAR_COMPONENT_VARIATION( l_U665[1], 0, 1, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U665[1], 6, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U665[1], 2, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U665[1], 1, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U665[1], 3, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U665[1], 8, 0, 0 );
    if (NOT (IS_CHAR_DEAD( l_U665[1] )))
    {
        SET_CHAR_HEALTH( l_U665[1], 5 );
    }
    CREATE_CHAR( 7, l_U736, -118.90050000, 790.19260000, 24.93180000, ref l_U661[1], 1 );
    SET_CHAR_HEADING( l_U661[1], 15.00000000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U661[1], "Museum2_Hall" );
    if (NOT (IS_CHAR_DEAD( l_U661[1] )))
    {
        SET_CHAR_HEALTH( l_U661[1], 5 );
    }
    return;
}

void sub_13393()
{
    CREATE_PICKUP_ROTATE( -575490643, 22, 8, -123.27000000, 790.11000000, 24.95000000, 26.70000000, 0, 36.60000000, ref l_U512[0] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U512[0], "museum2_hall" );
    CREATE_PICKUP_ROTATE( -196312163, 22, 17, -121.57000000, 791.58000000, 24.94800000, 89, 0, 339.84000000, ref l_U512[1] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U512[1], "museum2_hall" );
    CREATE_PICKUP_ROTATE( 1846597315, 22, 8, -121.92000000, 823.17000000, 24.95000000, 87, 0, 0, ref l_U512[2] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U512[2], "museum2_hall" );
    CREATE_PICKUP_ROTATE( 897930585, 22, 30, -120.28000000, 852.90000000, 24.97500000, 90, 1.46000000, 133.20000000, ref l_U512[3] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U512[3], "museum2_hall" );
    CREATE_PICKUP_ROTATE( 993473937, 22, 5, -98.72000000, 870.23000000, 24.95500000, 94.62000000, 40.28000000, 0, ref l_U517 );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U517, "museum2_jugs" );
    return;
}

void sub_14488()
{
    CREATE_CHAR( 26, l_U734, -120.57320000, 792.11740000, 24.93190000, ref l_U658, 1 );
    SET_CHAR_HEADING( l_U658, 356.41670000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U658, "Museum2_Hall" );
    SET_CHAR_DECISION_MAKER( l_U658, l_U817 );
    SET_COMBAT_DECISION_MAKER( l_U658, l_U822 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U658, 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U658, 1 );
    SET_CHAR_NEVER_TARGETTED( l_U658, 1 );
    sub_8480( l_U658, 0 );
    return;
}

void sub_14667()
{
    CREATE_CHAR( 26, l_U735, -119.91050000, 789.66770000, 24.93190000, ref l_U660, 1 );
    SET_CHAR_HEADING( l_U660, 185.65380000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U660, "Museum2_Hall" );
    SET_CHAR_DECISION_MAKER( l_U660, l_U817 );
    SET_COMBAT_DECISION_MAKER( l_U660, l_U820 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U660, 1 );
    SET_CHAR_NEVER_TARGETTED( l_U660, 1 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U660, 1 );
    sub_8480( l_U660, 0 );
    sub_4997( 2, l_U660, "ISAAC", 0 );
    return;
}

void sub_14866()
{
    CREATE_CHAR( 7, l_U741, -107.50590000, 794.66160000, 25.93190000 - 1.00000000, ref l_U661[2], 1 );
    SET_CHAR_HEADING( l_U661[2], 0.60400000 );
    sub_14964( l_U661[2], 2, 1, 1, "Museum2_Hall" );
    sub_8480( l_U661[2], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U661[2], -107.50590000, 794.66160000, 25.93190000 - 1.00000000, 1.00000000 );
    SET_CHAR_ACCURACY( l_U661[2], 25 );
    return;
}

void sub_14964(unknown uParam0, int iParam1, int iParam2, int iParam3, unknown uParam4)
{
    SET_CHAR_DECISION_MAKER( uParam0, l_U817 );
    if (iParam2 == 1)
    {
        SET_ROOM_FOR_CHAR_BY_NAME( uParam0, uParam4 );
    }
    if (iParam1 == 1)
    {
        SET_COMBAT_DECISION_MAKER( uParam0, l_U821 );
        SET_CHAR_WILL_USE_COVER( uParam0, 0 );
    }
    else if (iParam1 == 2)
    {
        SET_COMBAT_DECISION_MAKER( uParam0, l_U820 );
    }
    else if (iParam1 == 3)
    {
        SET_COMBAT_DECISION_MAKER( uParam0, l_U823 );
    }
    else
    {
        SET_COMBAT_DECISION_MAKER( uParam0, l_U822 );
    };;;
    if (iParam3 == 3)
    {
        SET_CHAR_RELATIONSHIP_GROUP( uParam0, 25 );
        SET_CHAR_RELATIONSHIP( uParam0, 5, 24 );
        SET_CHAR_RELATIONSHIP( uParam0, 5, 23 );
    }
    else if (iParam3 == 2)
    {
        SET_CHAR_RELATIONSHIP_GROUP( uParam0, 24 );
        SET_CHAR_RELATIONSHIP( uParam0, 5, 25 );
        SET_CHAR_RELATIONSHIP( uParam0, 5, 23 );
    }
    else
    {
        SET_CHAR_RELATIONSHIP_GROUP( uParam0, 23 );
        SET_CHAR_RELATIONSHIP( uParam0, 5, 25 );
        SET_CHAR_RELATIONSHIP( uParam0, 5, 24 );
    }
    SET_CHAR_IS_TARGET_PRIORITY( uParam0, 1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( uParam0 );
    SET_CHAR_RELATIONSHIP( uParam0, 5, 0 );
    return;
}

void sub_15357()
{
    CREATE_CHAR( 8, l_U739, -104.49670000, 802.67230000, 17.62520000, ref l_U670[0], 1 );
    SET_CHAR_HEADING( l_U670[0], 102.86320000 );
    sub_14964( l_U670[0], 2, 1, 1, "Museum2_Hall" );
    sub_8480( l_U670[0], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U670[0], -104.49670000, 802.67230000, 17.62520000, 5.00000000 );
    SET_CHAR_ACCURACY( l_U670[0], 55 );
    CREATE_CHAR( 8, l_U740, -97.24800000, 814.66780000, 25.93200000 - 1.00000000, ref l_U670[1], 1 );
    SET_CHAR_HEADING( l_U670[1], 203.53680000 );
    sub_14964( l_U670[1], 2, 1, 1, "Museum2_Hall" );
    sub_8480( l_U670[1], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U670[1], -97.24800000, 814.66780000, 25.93200000 - 1.00000000, 10.00000000 );
    SET_CHAR_ACCURACY( l_U670[1], 60 );
    CREATE_CHAR( 8, l_U739, -96.18280000, 833.16840000, 25.93200000, ref l_U670[3], 1 );
    SET_CHAR_HEADING( l_U670[3], 182.98940000 );
    sub_14964( l_U670[3], 2, 1, 1, "Museum2_Hall" );
    sub_8480( l_U670[3], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U670[3], -96.18280000, 833.16840000, 25.93200000 - 1.00000000, 10.00000000 );
    SET_CHAR_ACCURACY( l_U670[3], 55 );
    CREATE_CHAR( 8, l_U739, -106.12650000, 848.48570000, 24.93190000, ref l_U670[4], 1 );
    SET_CHAR_HEADING( l_U670[4], 180.51090000 );
    sub_14964( l_U670[4], 2, 1, 1, "Museum2_Hall" );
    sub_8480( l_U670[4], 1 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U670[4], -106.12650000, 848.48570000, 24.93190000, 1.00000000 );
    SET_CHAR_ACCURACY( l_U670[4], 60 );
    CREATE_CHAR( 8, l_U739, -92.37910000, 817.59140000, 25.93200000 - 1.00000000, ref l_U670[5], 1 );
    SET_CHAR_HEADING( l_U670[5], 177.31980000 );
    sub_14964( l_U670[5], 2, 1, 1, "Museum2_Hall" );
    sub_8480( l_U670[5], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U670[5], -92.37910000, 817.59140000, 25.93200000 - 1.00000000, 10.00000000 );
    SET_CHAR_ACCURACY( l_U670[5], 55 );
    CREATE_CHAR( 8, l_U739, -108.25870000, 822.74710000, 17.62520000, ref l_U670[6], 1 );
    SET_CHAR_HEADING( l_U670[6], 7.71330000 );
    sub_14964( l_U670[6], 2, 1, 1, "Museum2_Hall" );
    sub_8480( l_U670[6], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U670[6], -108.25870000, 822.74710000, 17.62520000, 5.00000000 );
    SET_CHAR_ACCURACY( l_U670[6], 60 );
    CREATE_CHAR( 8, l_U739, -105.95170000, 819.39260000, 17.62520000, ref l_U670[7], 1 );
    SET_CHAR_HEADING( l_U670[7], 205.88150000 );
    sub_14964( l_U670[7], 2, 1, 1, "Museum2_Hall" );
    sub_8480( l_U670[7], 2 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U670[7], -105.95170000, 819.39260000, 17.62520000, 2.50000000 );
    SET_CHAR_ACCURACY( l_U670[7], 55 );
    return;
}

void sub_16496()
{
    CREATE_CHAR( 8, l_U742, -118.35500000, 812.70700000, 25.93190000 - 1.00000000, ref l_U679[0], 1 );
    SET_CHAR_HEADING( l_U679[0], 182.82860000 );
    sub_14964( l_U679[0], 2, 1, 1, "Museum2_Hall" );
    sub_8480( l_U679[0], 3 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U679[0], -118.35500000, 812.70700000, 25.93190000 - 1.00000000, 3.00000000 );
    SET_CHAR_ACCURACY( l_U679[0], 60 );
    CREATE_CHAR( 8, l_U739, -124.23890000 + 1.50000000, 821.09200000, 25.93190000, ref l_U679[1], 1 );
    SET_CHAR_HEADING( l_U679[1], 160 );
    sub_14964( l_U679[1], 2, 1, 1, "Museum2_Hall" );
    sub_8480( l_U679[1], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U679[1], -124.23890000, 821.09200000, 25.93190000 - 1.00000000, 2.00000000 );
    if (NOT (IS_CHAR_DEAD( l_U679[1] )))
    {
        SET_CHAR_HEALTH( l_U679[1], 5 );
    }
    SET_CHAR_ACCURACY( l_U679[1], 55 );
    CREATE_CHAR( 8, l_U739, -118.84380000, 832.90430000, 25.93190000 - 1.00000000, ref l_U679[2], 1 );
    SET_CHAR_HEADING( l_U679[2], 176.12690000 );
    sub_14964( l_U679[2], 2, 1, 1, "Museum2_Hall" );
    sub_8480( l_U679[2], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U679[2], -118.84380000, 832.90430000, 25.93190000 - 1.00000000, 3.00000000 );
    SET_CHAR_ACCURACY( l_U679[2], 60 );
    CREATE_CHAR( 8, l_U740, -122.67100000 + 2.50000000, 853.08620000, 25.93190000 - 1.00000000, ref l_U679[3], 1 );
    SET_CHAR_HEADING( l_U679[3], 260 );
    sub_14964( l_U679[3], 2, 1, 1, "Museum2_Hall" );
    sub_8480( l_U679[3], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U679[3], -122.67100000, 853.08620000, 25.93190000 - 1.00000000, 1.00000000 );
    if (NOT (IS_CHAR_DEAD( l_U679[3] )))
    {
        SET_CHAR_HEALTH( l_U679[3], 5 );
    }
    CREATE_CHAR( 8, l_U741, -111.07630000, 847.99190000, 25.93190000 - 1.00000000, ref l_U679[4], 1 );
    SET_CHAR_HEADING( l_U679[4], 186.96400000 );
    sub_14964( l_U679[4], 1, 1, 1, "Museum2_Hall" );
    sub_8480( l_U679[4], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U679[4], -111.07630000, 847.99190000, 25.93190000 - 1.00000000, 1.00000000 );
    SET_CHAR_ACCURACY( l_U679[4], 55 );
    CREATE_CHAR( 8, l_U742, -122.47550000, 809.90390000, 24.93230000, ref l_U679[5], 1 );
    SET_CHAR_HEADING( l_U679[5], 242.72450000 );
    sub_14964( l_U679[5], 1, 1, 1, "Museum2_Hall" );
    sub_8480( l_U679[5], 0 );
    SET_CHAR_ACCURACY( l_U679[5], 55 );
    return;
}

void sub_17533()
{
    CREATE_CHAR( 8, l_U742, -91.88680000, 871.38590000, 24.93230000, ref l_U686[0], 1 );
    SET_CHAR_HEADING( l_U686[0], 186.02380000 );
    sub_14964( l_U686[0], 2, 1, 1, "Museum2_jugs" );
    sub_8480( l_U686[0], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U686[0], -91.88680000, 871.38590000, 24.93230000, 3.00000000 );
    SET_CHAR_ACCURACY( l_U686[0], 60 );
    CREATE_CHAR( 8, l_U741, -99.39180000, 871.76530000, 25.93190000 - 1.00000000, ref l_U686[1], 1 );
    SET_CHAR_HEADING( l_U686[1], 148.20330000 );
    sub_14964( l_U686[1], 2, 1, 1, "Museum2_jugs" );
    sub_8480( l_U686[1], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U686[1], -99.39180000, 871.76530000, 25.93190000 - 1.00000000, 5.00000000 );
    SET_CHAR_ACCURACY( l_U686[1], 55 );
    CREATE_CHAR( 8, l_U739, -108.95820000, 855.18360000, 18.62470000 - 1.00000000, ref l_U686[3], 1 );
    SET_CHAR_HEADING( l_U686[3], 1.15850000 );
    sub_14964( l_U686[3], 2, 1, 1, "Museum2_Hall" );
    sub_8480( l_U686[3], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U686[3], -108.95820000, 855.18360000, 18.62470000 - 1.00000000, 1.00000000 );
    SET_CHAR_ACCURACY( l_U686[3], 55 );
    CREATE_CHAR( 8, l_U742, -106.36180000, 848.26980000, 18.62470000 - 1.00000000, ref l_U686[4], 1 );
    SET_CHAR_HEADING( l_U686[4], 6.54540000 );
    sub_14964( l_U686[4], 2, 1, 1, "Museum2_Hall" );
    sub_8480( l_U686[4], 3 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U686[4], -106.36180000, 848.26980000, 18.62470000 - 1.00000000, 5.00000000 );
    SET_CHAR_ACCURACY( l_U686[4], 55 );
    CREATE_CHAR( 8, l_U741, -90.70990000, 868.37530000, 24.93230000, ref l_U686[5], 1 );
    SET_CHAR_HEADING( l_U686[5], 151.85900000 );
    sub_14964( l_U686[5], 2, 1, 1, "Museum2_jugs" );
    sub_8480( l_U686[5], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U686[5], -90.70990000, 868.37530000, 24.93230000, 5.00000000 );
    SET_CHAR_ACCURACY( l_U686[5], 60 );
    CREATE_CHAR( 8, l_U742, -98.77150000, 863.65940000, 24.93230000, ref l_U686[6], 1 );
    SET_CHAR_HEADING( l_U686[6], 148.20330000 );
    sub_14964( l_U686[6], 1, 1, 1, "Museum2_jugs" );
    sub_8480( l_U686[6], 3 );
    SET_CHAR_ACCURACY( l_U686[6], 55 );
    return;
}

void sub_20082()
{
    if ((NOT (IS_CHAR_INJURED( l_U661[2] ))) AND (l_U591 == 0))
    {
        GET_CHAR_HEALTH( l_U661[2], ref l_U490 );
        if (l_U490 < 120)
        {
            SWITCH_PED_TO_RAGDOLL_WITH_FALL( l_U661[2], 0, 4000, 5, 0, 1, 0, 20.00000000, 0, 0, 0, 0, 0, 0 );
            l_U591 = 1;
        }
    }
    if ((NOT (IS_CHAR_INJURED( l_U686[2] ))) AND (l_U594 == 0))
    {
        GET_CHAR_HEALTH( l_U686[2], ref l_U490 );
        if (l_U490 < 200)
        {
            SWITCH_PED_TO_RAGDOLL_WITH_FALL( l_U686[2], 0, 4000, 2, 0, -1, 0, 10.00000000, 0, 0, 0, 0, 0, 0 );
            l_U594 = 1;
        }
    }
    return;
}

void sub_20323()
{
    if (NOT (IS_CHAR_INJURED( l_U660 )))
    {
        if (((TIMERB() > l_U492) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U824, l_U660, 8.00000000, 8.00000000, 2.00000000, 0 ))) AND (NOT (sub_20403( l_U826 ))))
        {
            sub_20602( "RB4_COWER", ref l_U826, 6, 1 );
            GENERATE_RANDOM_INT_IN_RANGE( 8000, 16000, ref l_U492 );
            SETTIMERB( 0 );
        }
    }
    return;
}

int sub_20403(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_20515( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_20515( "\n speech is not playing" );
    }
    return 0;
}

void sub_20515(unknown uParam0)
{
    return;
}

void sub_20602(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_20625( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_20625(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;
    char[12] cVar11;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;

    StrCopy( ref cVar7, uParam1, 16 );
    array(ref cVar11, 2);
    StrCopy( ref cVar11[0], uParam0, 16 );
    StrCopy( ref cVar11[1], "END", 16 );
    return sub_20679( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_20679(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_20701( iParam1 )))
    {
        return 0;
    }
    l_U181._fU384 = 0;
    iParam1->_fU16 = 0;
    iParam1->_fU20 = uParam5;
    if (bParam3)
    {
        if (iParam1->_fU12)
        {
            iVar12 = iParam1->_fU8;
            iParam1->_fU12 = 0;
        }
    }
    else
    {
        iParam1->_fU12 = 0;
        if (bParam4)
        {
            iVar12 = uParam6;
            iParam1->_fU8 = uParam6;
            iParam1->_fU12 = 0;
        }
        else
        {
            iParam1->_fU8 = 0;
            iParam1->_fU12 = 0;
        }
    }
    iParam1->_fU16 = bParam4;
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8499[I] = {(uParam0^)[I]};
    }
    g_U8493 = {(iParam1^)};
    sub_21381( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_20701(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_20515( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U556[1] ))
    {
        switch (g_U91._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_20515( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 > iParam0->_fU0)
        {
            sub_20515( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8392 = iParam0->_fU0;
    g_U8393++;
    if (g_U8393 > 100000)
    {
        g_U8393 = 1;
    }
    iParam0->_fU4 = g_U8393;
    return 1;
}

void sub_21381(int iParam0, int iParam1)
{
    int I;

    iParam0->_fU0 = {iParam1->_fU0};
    for ( I = 0; I <= 8; I++ )
    {
        iParam0->_fU16[I] = {iParam1->_fU16[I]};
        iParam0->_fU344[I] = iParam1->_fU344[I];
    }
    iParam0->_fU384 = iParam1->_fU384;
    iParam0->_fU388 = iParam1->_fU388;
    return;
}

void sub_21590()
{
    if ((l_U577 == 1) AND (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U824, 65429, 821, 20, 25.00000000, 75.00000000, 35.00000000, 0 ))))
    {
        STOP_SOUND( l_U495 );
        RELEASE_SOUND_ID( l_U495 );
        l_U577 = 0;
    }
    else if ((l_U577 == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U824, 65429, 821, 20, 25.00000000, 75.00000000, 35.00000000, 0 )))
    {
        l_U495 = GET_SOUND_ID();
        PLAY_SOUND_FROM_POSITION( l_U495, "RB4_MUSEUM_PIECE_ALARM", 65429, 821, 20 );
        l_U577 = 1;
    }
    if (l_U577 == 1)
    {
        if (NOT (HAS_SOUND_FINISHED( l_U495 )))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( l_U824, ref l_U493 );
            if ((LOCATE_CHAR_ANY_MEANS_3D( l_U824, -101.34560000, 857.80050000, 16.31420000, 1.50000000, 1.50000000, 2.00000000, 0 )) AND (l_U576 == 0))
            {
                SET_VARIABLE_ON_SOUND( l_U495, "Control", 0.30000000 );
                l_U576 = 1;
            }
            else if ((LOCATE_CHAR_ANY_MEANS_3D( l_U824, -101.51580000, 854.89260000, 17.62630000, 1.50000000, 1.50000000, 2.00000000, 0 )) AND (l_U576 == 1))
            {
                SET_VARIABLE_ON_SOUND( l_U495, "Control", 1.00000000 );
                l_U576 = 1;
            }
            else if ((l_U493 == 2004012895) AND (l_U576 == 0))
            {
                SET_VARIABLE_ON_SOUND( l_U495, "Control", 1.00000000 );
            }
            else if (l_U493 == -1975100134)
            {
                SET_VARIABLE_ON_SOUND( l_U495, "Control", 0.50000000 );
            }
            else if (l_U493 == -1611808994)
            {
                SET_VARIABLE_ON_SOUND( l_U495, "Control", 0.30000000 );
            }
            else if (l_U493 == 193674066)
            {
                SET_VARIABLE_ON_SOUND( l_U495, "Control", 0.20000000 );
            }
            else if (l_U493 == 0)
            {
                SET_VARIABLE_ON_SOUND( l_U495, "Control", 0.10000000 );
            };;;;;;;
        }
    }
    return;
}

void sub_22285()
{
    if (((IS_CHAR_DEAD( l_U658 )) || (IS_CHAR_FATALLY_INJURED( l_U658 ))) AND (l_U559 == 0))
    {
        PRINT_NOW( "RB4_FAIL_02", 7000, 1 );
        sub_10596( 14, "RB4_CALL2", "RB4AUD", 0 );
        l_U489 = -1;
        l_U519 = 1;
    }
    if ((NOT (IS_CHAR_DEAD( l_U658 ))) AND (l_U559 == 0))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U658, -97.25390000, 876.78470000, 13.68340000, 2.00000000, 2.00000000, 2.00000000, 0 ))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U658 );
            REMOVE_CHAR_ELEGANTLY( ref l_U658 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U658 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U734 );
            if (DOES_CHAR_EXIST( l_U658 ))
            {
                if (NOT (IS_CHAR_ON_SCREEN( l_U658 )))
                {
                    DELETE_CHAR( ref l_U658 );
                }
            }
            if (NOT (DOES_CHAR_EXIST( l_U658 )))
            {
                l_U559 = 1;
            }
        }
    }
    return;
}

void sub_22596()
{
    if ((IS_CHAR_DEAD( l_U660 )) || (IS_CHAR_FATALLY_INJURED( l_U660 )))
    {
        PRINT_NOW( "RB4_FAIL_04", 7000, 1 );
        sub_10596( 14, "RB4_CALL3", "RB4AUD", 0 );
        l_U489 = -1;
        l_U519 = 1;
    }
    return;
}

void sub_23441()
{
    int I;

    if (l_U553 == 0)
    {
        sub_23462();
        for ( I = 0; I <= 13; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U694[I] )))
            {
                TASK_COMBAT( l_U694[I], l_U824 );
            }
        }
        I = 0;
        for ( I = 0; I <= 6; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U670[I] )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U670[I] );
                SET_COMBAT_DECISION_MAKER( l_U670[I], l_U821 );
                TASK_COMBAT( l_U670[I], l_U824 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U670[I] );
            }
        }
        for ( I = 0; I <= 4; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U679[I] )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U679[I] );
                SET_COMBAT_DECISION_MAKER( l_U679[I], l_U821 );
                TASK_COMBAT( l_U679[I], l_U824 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U679[I] );
            }
        }
        for ( I = 0; I <= 1; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U661[I] )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U661[I] );
                TASK_COMBAT( l_U661[I], l_U824 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U661[I] );
            }
        }
        WAIT( 2000 );
        if (NOT (IS_CHAR_INJURED( l_U686[2] )))
        {
            SET_CHAR_RELATIONSHIP( l_U686[2], 2, 25 );
            SET_CHAR_RELATIONSHIP( l_U686[2], 2, 24 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U686[2], 1 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U686[2] );
            SET_COMBAT_DECISION_MAKER( l_U686[2], l_U821 );
            OPEN_SEQUENCE_TASK( ref l_U622 );
            TASK_GO_TO_COORD_WHILE_SHOOTING( 0, -107.62660000, 872.43440000, 24.93180000, 3, 1.50000000, 0.00000000, l_U824, 0 );
            TASK_COMBAT( 0, l_U824 );
            CLOSE_SEQUENCE_TASK( l_U622 );
            TASK_PERFORM_SEQUENCE( l_U686[2], l_U622 );
            CLEAR_SEQUENCE_TASK( l_U622 );
        }
        if (NOT (IS_CHAR_INJURED( l_U686[3] )))
        {
            SET_CHAR_RELATIONSHIP( l_U686[3], 2, 25 );
            SET_CHAR_RELATIONSHIP( l_U686[3], 2, 24 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U686[3], 1 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U686[3] );
            SET_COMBAT_DECISION_MAKER( l_U686[3], l_U821 );
            OPEN_SEQUENCE_TASK( ref l_U622 );
            TASK_GO_TO_COORD_WHILE_SHOOTING( 0, -107.62660000, 872.43440000, 24.93180000, 4, 3.00000000, 0.00000000, l_U824, 0 );
            TASK_COMBAT( 0, l_U824 );
            CLOSE_SEQUENCE_TASK( l_U622 );
            TASK_PERFORM_SEQUENCE( l_U686[3], l_U622 );
            CLEAR_SEQUENCE_TASK( l_U622 );
        }
        l_U553 = 1;
    }
    if (l_U562 == 0)
    {
        GET_CHAR_COORDINATES( l_U824, ref l_U496._fU0, ref l_U496._fU4, ref l_U496._fU8 );
        if (((l_U496._fU4 < 832.00000000) AND (l_U496._fU8 < 20.00000000)) AND (l_U563 == 0))
        {
            if (NOT (IS_CHAR_INJURED( l_U694[7] )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U694[7] );
                SET_CHAR_ACCURACY( l_U694[7], 25 );
                TASK_SHOOT_AT_COORD( l_U694[7], -108.38000000, 805.37000000, 22.20000000, 5000, 3 );
                FIRE_SINGLE_BULLET( -112.00000000, 805.00000000, 24.00000000, -108.38000000, 805.37000000, 22.20000000, 25 );
                FIRE_SINGLE_BULLET( -112.00000000, 805.00000000, 24.00000000, -108.38000000, 805.37000000, 22.20000000, 25 );
                FIRE_SINGLE_BULLET( -112.00000000, 805.00000000, 24.00000000, -108.38000000, 805.00000000, 22.50000000, 25 );
                FIRE_SINGLE_BULLET( -112.00000000, 805.00000000, 24.00000000, -108.38000000, 805.00000000, 22.50000000, 25 );
                FIRE_SINGLE_BULLET( -116.90000000, 803.80000000, 27.00000000, -107.78000000, 813.27000000, 27.10000000, 50 );
                FIRE_SINGLE_BULLET( -116.90000000, 803.80000000, 27.00000000, -109.86000000, 816.73000000, 22.99000000, 50 );
                FIRE_SINGLE_BULLET( -116.90000000, 803.80000000, 27.00000000, -109.69000000, 816.23000000, 22.91000000, 50 );
                FIRE_SINGLE_BULLET( -116.90000000, 803.80000000, 27.00000000, -108.96000000, 817.69000000, 25.56000000, 50 );
                FIRE_SINGLE_BULLET( -112.90000000, 805.80000000, 25.00000000, -107.78000000, 813.27000000, 27.10000000, 50 );
                FIRE_SINGLE_BULLET( -112.90000000, 805.80000000, 25.00000000, -109.86000000, 816.73000000, 22.99000000, 50 );
                FIRE_SINGLE_BULLET( -112.90000000, 805.80000000, 25.00000000, -109.69000000, 816.23000000, 22.91000000, 50 );
                FIRE_SINGLE_BULLET( -112.90000000, 805.80000000, 25.00000000, -108.96000000, 817.69000000, 25.56000000, 50 );
                FIRE_SINGLE_BULLET( -119.90000000, 807.80000000, 29.00000000, -107.78000000, 813.27000000, 27.10000000, 50 );
                FIRE_SINGLE_BULLET( -119.90000000, 807.80000000, 29.00000000, -109.86000000, 816.73000000, 22.99000000, 50 );
                FIRE_SINGLE_BULLET( -119.90000000, 807.80000000, 29.00000000, -109.69000000, 816.23000000, 22.91000000, 50 );
                FIRE_SINGLE_BULLET( -119.90000000, 807.80000000, 29.00000000, -108.96000000, 817.69000000, 25.56000000, 50 );
            }
            WAIT( 2000 );
            if (NOT (IS_CHAR_INJURED( l_U694[8] )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U694[8] );
                SET_CHAR_ACCURACY( l_U694[8], 25 );
                TASK_SHOOT_AT_COORD( l_U694[8], -105.07000000, 821.31000000, 25.71000000, 4000, 3 );
                FIRE_SINGLE_BULLET( -105.00000000, 812.00000000, 24.00000000, -107.32000000, 807.17000000, 22.19000000, 25 );
                FIRE_SINGLE_BULLET( -105.00000000, 812.00000000, 24.00000000, -107.32000000, 807.17000000, 22.19000000, 25 );
                FIRE_SINGLE_BULLET( -105.00000000, 812.00000000, 24.00000000, -108.00000000, 805.02000000, 22.13000000, 25 );
                FIRE_SINGLE_BULLET( -105.00000000, 812.00000000, 24.00000000, -108.00000000, 805.02000000, 22.13000000, 25 );
                FIRE_SINGLE_BULLET( -97.30000000, 816.90000000, 27.00000000, -104.82000000, 820.68000000, 24.84000000, 50 );
                FIRE_SINGLE_BULLET( -97.30000000, 816.90000000, 27.00000000, -105.07000000, 821.31000000, 25.71000000, 50 );
                FIRE_SINGLE_BULLET( -97.30000000, 816.90000000, 27.00000000, -104.73000000, 822.81000000, 25.22000000, 50 );
                FIRE_SINGLE_BULLET( -97.30000000, 816.90000000, 27.00000000, -104.82000000, 820.68000000, 24.84000000, 50 );
                FIRE_SINGLE_BULLET( -97.30000000, 816.90000000, 27.00000000, -105.07000000, 821.31000000, 25.71000000, 50 );
                FIRE_SINGLE_BULLET( -97.30000000, 816.90000000, 27.00000000, -104.73000000, 822.81000000, 25.22000000, 50 );
            }
            PRINTSTRING( "\n*\n*\n*\n*\n*\n    -----> SHOOT AT WHALE <-----    \n*\n*\n*\n*\n*\n*\n" );
            l_U563 = 1;
        }
        if (((l_U496._fU4 < 820.00000000) AND (l_U496._fU8 < 20.00000000)) AND (l_U564 == 0))
        {
            FIRE_SINGLE_BULLET( -104.00000000, 808.00000000, 22.00000000, -107.83000000, 808.13000000, 22.15000000, 50 );
            FIRE_SINGLE_BULLET( -112.00000000, 808.50000000, 23.00000000, -107.83000000, 808.13000000, 22.15000000, 50 );
            PRINTSTRING( "\n*\n*\n*\n*\n*\n    -----> SHOOT AT T-REX <-----    \n*\n*\n*\n*\n*\n*\n" );
            l_U564 = 1;
        }
        if ((l_U563 == 1) AND (l_U564 == 1))
        {
            l_U562 = 1;
        }
    }
    sub_27885();
    sub_20323();
    sub_21590();
    sub_22285();
    sub_22596();
    if (l_U560 == 0)
    {
        GET_CHAR_COORDINATES( l_U824, ref l_U505._fU0, ref l_U505._fU4, ref l_U505._fU8 );
        if (l_U505._fU8 < 20.50000000)
        {
            if (NOT (IS_CHAR_INJURED( l_U686[4] )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U686[4] );
                SET_COMBAT_DECISION_MAKER( l_U686[4], l_U821 );
                TASK_COMBAT( l_U686[4], l_U824 );
            }
            l_U560 = 1;
        }
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( l_U824, -104.24230000, 789.38020000, 18.62470000, 3.50000000, 2.50000000, 2.50000000, 0 ))
    {
        l_U489++;
    }
    return;
}

void sub_23462()
{
    CREATE_CHAR( 8, l_U739, -117.75640000, 836.35850000, 18.62470000 - 1.00000000, ref l_U694[1], 1 );
    SET_CHAR_HEADING( l_U694[1], 212.55420000 );
    sub_14964( l_U694[1], 2, 1, 1, "Museum2_Hall" );
    sub_8480( l_U694[1], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U694[1], -107.44010000, 832.12950000, 19.37590000 - 1.00000000, 3.00000000 );
    SET_CHAR_ACCURACY( l_U694[1], 55 );
    CREATE_CHAR( 8, l_U740, -98.09710000, 864.16210000, 14.68300000 - 1.00000000, ref l_U694[2], 1 );
    SET_CHAR_HEADING( l_U694[2], 97.86680000 );
    sub_14964( l_U694[2], 1, 1, 1, "Museum2_display2" );
    sub_8480( l_U694[2], 3 );
    SET_CHAR_ACCURACY( l_U694[2], 55 );
    CREATE_CHAR( 8, l_U740, -118.28950000, 811.83940000, 18.62470000 - 1.00000000, ref l_U694[3], 1 );
    SET_CHAR_HEADING( l_U694[3], 342.87040000 );
    sub_14964( l_U694[3], 2, 1, 1, "Museum2_Hall" );
    sub_8480( l_U694[3], 2 );
    SET_CHAR_ACCURACY( l_U694[3], 42 );
    CREATE_CHAR( 8, l_U739, -117.89930000, 803.44400000, 18.62470000 - 1.00000000, ref l_U694[4], 1 );
    SET_CHAR_HEADING( l_U694[4], 338.75650000 );
    sub_14964( l_U694[4], 3, 1, 1, "Museum2_Hall" );
    sub_8480( l_U694[4], 0 );
    SET_CHAR_ACCURACY( l_U694[4], 55 );
    CREATE_CHAR( 8, l_U739, -96.97180000, 805.74460000, 18.62470000 - 1.00000000, ref l_U694[5], 1 );
    SET_CHAR_HEADING( l_U694[5], 32.75700000 );
    sub_14964( l_U694[5], 1, 1, 1, "Museum2_display1" );
    sub_8480( l_U694[5], 2 );
    SET_CHAR_ACCURACY( l_U694[5], 22 );
    CREATE_CHAR( 8, l_U740, -95.20330000, 803.85790000, 17.59010000, ref l_U694[6], 1 );
    SET_CHAR_HEADING( l_U694[6], 95.01990000 );
    sub_14964( l_U694[6], 2, 1, 1, "Museum2_display1" );
    sub_8480( l_U694[6], 3 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U694[6], -97.18130000, 817.48680000, 18.62470000 - 1.00000000, 5.00000000 );
    SET_CHAR_ACCURACY( l_U694[6], 55 );
    CREATE_CHAR( 8, l_U742, -116.90510000, 803.62280000, 25.93190000 - 1.00000000, ref l_U694[7], 1 );
    SET_CHAR_HEADING( l_U694[7], 293.80500000 );
    sub_14964( l_U694[7], 2, 1, 1, "Museum2_Hall" );
    sub_8480( l_U694[7], 1 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U694[7], -116.90510000, 803.62280000, 25.93190000 - 1.00000000, 1.50000000 );
    SET_CHAR_ACCURACY( l_U694[7], 40 );
    CREATE_CHAR( 8, l_U739, -98.15690000, 819.73160000, 25.93190000 - 1.00000000, ref l_U694[8], 1 );
    SET_CHAR_HEADING( l_U694[8], 47.67160000 );
    sub_14964( l_U694[8], 2, 1, 1, "Museum2_Hall" );
    sub_8480( l_U694[8], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U694[8], -98.15690000, 819.73160000, 25.93190000 - 1.00000000, 1.50000000 );
    SET_CHAR_ACCURACY( l_U694[8], 40 );
    CREATE_CHAR( 8, l_U741, -104.71110000, 790.31470000, 18.62470000 - 1.00000000, ref l_U694[9], 1 );
    SET_CHAR_HEADING( l_U694[9], 65.98830000 );
    sub_14964( l_U694[9], 2, 1, 1, "Museum2_exit" );
    sub_8480( l_U694[9], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U694[9], -101.45820000, 785.28750000, 17.62520000, 0.50000000 );
    SET_CHAR_ACCURACY( l_U694[9], 55 );
    CREATE_CHAR( 8, l_U742, -103.43800000, 789.68850000, 17.62520000, ref l_U694[10], 1 );
    SET_CHAR_HEADING( l_U694[10], 93.00000000 );
    sub_14964( l_U694[10], 2, 1, 1, "Museum2_exit" );
    sub_8480( l_U694[10], 3 );
    SET_CHAR_ACCURACY( l_U694[10], 10 );
    SET_CHAR_SHOOT_RATE( l_U694[10], 80 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U694[10], -107.92820000, 797.67080000, 17.62490000, 3.00000000 );
    CREATE_CHAR( 8, l_U739, -113.60450000, 852.87190000, 24.93220000, ref l_U694[11], 1 );
    SET_CHAR_HEADING( l_U694[11], 341.09970000 );
    sub_14964( l_U694[11], 2, 1, 1, "Museum2_Hall" );
    sub_8480( l_U694[11], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U694[11], -105.62480000, 855.46190000, 24.93200000, 1.00000000 );
    SET_CHAR_ACCURACY( l_U694[11], 55 );
    CREATE_CHAR( 8, l_U740, -97.20150000, 806.26650000, 17.62490000, ref l_U694[12], 1 );
    SET_CHAR_HEADING( l_U694[12], 17.51170000 );
    sub_14964( l_U694[12], 1, 1, 1, "Museum2_display1" );
    sub_8480( l_U694[12], 3 );
    SET_CHAR_ACCURACY( l_U694[12], 42 );
    CREATE_CHAR( 8, l_U739, -118.02840000, 829.90050000, 17.62490000, ref l_U694[13], 1 );
    SET_CHAR_HEADING( l_U694[13], 337.44450000 );
    sub_14964( l_U694[13], 1, 1, 1, "Museum2_Hall" );
    sub_8480( l_U694[13], 0 );
    SET_CHAR_ACCURACY( l_U694[13], 42 );
    return;
}

void sub_27885()
{
    if ((NOT (IS_CHAR_INJURED( l_U686[3] ))) AND (l_U595 == 0))
    {
        GET_CHAR_HEALTH( l_U686[3], ref l_U490 );
        if (l_U490 < 200)
        {
            sub_27997( l_U686[3], 0.00000000, -2.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0, 1 );
            l_U595 = 1;
        }
    }
    if ((NOT (IS_CHAR_INJURED( l_U694[7] ))) AND (l_U596 == 0))
    {
        GET_CHAR_HEALTH( l_U694[7], ref l_U490 );
        if (l_U490 < 200)
        {
            SWITCH_PED_TO_RAGDOLL_WITH_FALL( l_U694[7], 0, 4000, 5, 1, 0, 0, 15.00000000, 0, 0, 0, 0, 0, 0 );
            l_U596 = 1;
        }
    }
    return;
}

void sub_27997(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7, int iParam8)
{
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    int iVar15;

    fVar11 = 12.00000000;
    fVar12 = 0.50000000;
    fVar13 = 2.00000000;
    fVar14 = 0.25000000;
    iVar15 = 1;
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        SWITCH_PED_TO_RAGDOLL( uParam0, 0, 4000, 1, 1, 1, 0 );
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        CREATE_NM_MESSAGE( 1, 79 );
        SEND_NM_MESSAGE( uParam0 );
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        CREATE_NM_MESSAGE( 1, 114 );
        SET_NM_MESSAGE_VEC3( 116, uParam1._fU0, uParam1._fU4, uParam1._fU8 );
        SET_NM_MESSAGE_FLOAT( 117, fVar14 );
        SET_NM_MESSAGE_BOOL( 118, iVar15 );
        SEND_NM_MESSAGE( uParam0 );
    }
    if (iParam7 == 1)
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            CREATE_NM_MESSAGE( 1, 289 );
            SET_NM_MESSAGE_FLOAT( 291, fVar11 );
            SET_NM_MESSAGE_FLOAT( 292, fVar12 );
            SET_NM_MESSAGE_FLOAT( 293, fVar13 );
            SEND_NM_MESSAGE( uParam0 );
        }
    }
    WAIT( 500 );
    if (iParam8 == 1)
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            CREATE_NM_MESSAGE( 1, 270 );
            SET_NM_MESSAGE_FLOAT( 274, 1.00000000 );
            SEND_NM_MESSAGE( uParam0 );
        }
    }
    return;
}

void sub_28716()
{
    int I;

    if (l_U554 == 0)
    {
        sub_28737();
        for ( I = 0; I <= 2; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U709[I] )))
            {
                TASK_COMBAT( l_U709[I], l_U824 );
            }
        }
        I = 0;
        for ( I = 0; I <= 13; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U694[I] )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U694[I] );
                SET_COMBAT_DECISION_MAKER( l_U694[I], l_U821 );
                TASK_COMBAT( l_U694[I], l_U824 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U694[I] );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U694[9] )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U694[9] );
            SET_CHAR_DECISION_MAKER( l_U694[9], l_U817 );
            SET_COMBAT_DECISION_MAKER( l_U694[9], l_U821 );
            TASK_GO_TO_COORD_WHILE_SHOOTING( l_U694[9], -113.60450000, 852.87190000, 24.93220000, 3, 1.00000000, 1.00000000, l_U824, 0 );
        }
        l_U554 = 1;
    }
    sub_27885();
    sub_20323();
    sub_21590();
    sub_22285();
    sub_22596();
    if ((LOCATE_CHAR_ANY_MEANS_3D( l_U824, -111.89320000, 767.98640000, 15.99850000, 2.00000000, 2.00000000, 2.00000000, 0 )) AND (l_U548 == 0))
    {
        sub_29642();
        l_U548 = 1;
    }
    GET_KEY_FOR_CHAR_IN_ROOM( l_U824, ref l_U493 );
    if ((LOCATE_CHAR_ANY_MEANS_3D( l_U824, -106.36830000 - 0.20000000, 762.87490000, 14.50000000, 1.60000000 + 1.00000000, 1.60000000, 1.60000000, 0 )) || (l_U493 == 0))
    {
        if (DOES_BLIP_EXIST( l_U603 ))
        {
            REMOVE_BLIP( l_U603 );
        }
        g_U9890 = 0;
        l_U489++;
    }
    sub_9949();
    return;
}

void sub_28737()
{
    CREATE_CHAR( 8, l_U742, -116.30830000, 777.86150000, 18.62470000 - 1.00000000, ref l_U709[0], 1 );
    SET_CHAR_HEADING( l_U709[0], 296.00340000 );
    sub_14964( l_U709[0], 2, 1, 1, "Museum2_store" );
    sub_8480( l_U709[0], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U709[0], -116.30830000, 777.86150000, 18.62470000 - 1.00000000, 2.00000000 );
    SET_CHAR_ACCURACY( l_U709[0], 10 );
    CREATE_CHAR( 8, l_U741, -114.18590000, 771.72380000, 18.62470000 - 1.00000000, ref l_U709[1], 1 );
    SET_CHAR_HEADING( l_U709[1], 311.28390000 );
    sub_14964( l_U709[1], 2, 1, 1, "Museum2_store" );
    sub_8480( l_U709[1], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U709[1], -114.18590000, 771.72380000, 18.62470000 - 1.00000000, 2.00000000 );
    SET_CHAR_ACCURACY( l_U709[1], 10 );
    CREATE_CHAR( 8, l_U741, -104.04320000, 781.41370000, 17.59010000, ref l_U709[2], 1 );
    SET_CHAR_HEADING( l_U709[2], 356.84640000 );
    sub_14964( l_U709[2], 2, 1, 1, "Museum2_store" );
    sub_8480( l_U709[2], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U709[2], -104.04320000, 781.41370000, 17.59010000, 2.00000000 );
    SET_CHAR_ACCURACY( l_U709[2], 10 );
    return;
}

void sub_29642()
{
    CREATE_CHAR( 8, l_U740, -110.24730000, 754.81470000 - 1.00000000, 14.60320000 - 1.00000000, ref l_U713[0], 1 );
    SET_CHAR_HEADING( l_U713[0], 333.08690000 );
    sub_14964( l_U713[0], 2, 0, 1, "" );
    sub_8480( l_U713[0], 3 );
    SET_CHAR_ACCURACY( l_U713[0], 10 );
    CREATE_CHAR( 8, l_U741, -105.26250000, 754.42300000, 14.64930000 - 1.00000000, ref l_U713[1], 1 );
    SET_CHAR_HEADING( l_U713[1], 39.89410000 );
    sub_14964( l_U713[1], 2, 0, 1, "" );
    sub_8480( l_U713[1], 0 );
    SET_CHAR_ACCURACY( l_U713[1], 10 );
    CREATE_CHAR( 8, l_U742, -81.04480000, 788.35860000 + 1.00000000, 14.21350000 - 1.00000000, ref l_U717[3], 1 );
    if (NOT (IS_CAR_DEAD( l_U749[3] )))
    {
        WARP_CHAR_INTO_CAR( l_U717[3], l_U749[3] );
    }
    sub_14964( l_U717[3], 1, 0, 1, "" );
    sub_8480( l_U717[3], 3 );
    SET_CHAR_ACCURACY( l_U717[3], 40 );
    CREATE_CHAR( 8, l_U740, -111.25830000, 755.93170000 + 2, 14.25010000 - 1.00000000, ref l_U723[3], 1 );
    if (NOT (IS_CAR_DEAD( l_U749[3] )))
    {
        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U723[3], l_U749[3], 0 );
    }
    sub_14964( l_U723[3], 1, 0, 1, "" );
    sub_8480( l_U723[3], 3 );
    SET_CHAR_ACCURACY( l_U717[3], 10 );
    CREATE_CHAR( 8, l_U741, -81.43040000, 784.32690000 + 1.00000000, 14.21130000 - 1.00000000, ref l_U717[4], 1 );
    if (NOT (IS_CAR_DEAD( l_U749[4] )))
    {
        WARP_CHAR_INTO_CAR( l_U717[4], l_U749[4] );
    }
    sub_14964( l_U717[4], 1, 0, 1, "" );
    sub_8480( l_U717[4], 0 );
    SET_CHAR_ACCURACY( l_U717[4], 40 );
    CREATE_CHAR( 8, l_U739, -111.25830000, 755.93170000 + 2, 14.25010000 - 1.00000000, ref l_U723[4], 1 );
    if (NOT (IS_CAR_DEAD( l_U749[4] )))
    {
        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U723[4], l_U749[4], 0 );
    }
    sub_14964( l_U723[4], 1, 0, 1, "" );
    sub_8480( l_U723[4], 3 );
    SET_CHAR_ACCURACY( l_U723[4], 10 );
    return;
}

void sub_30613()
{
    int I;

    if (l_U555 == 0)
    {
        SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
        for ( I = 0; I <= 2; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U713[I] )))
            {
                TASK_COMBAT( l_U713[I], l_U824 );
            }
        }
        I = 0;
        for ( I = 0; I <= 2; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U709[I] )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U709[I] );
                SET_COMBAT_DECISION_MAKER( l_U709[I], l_U821 );
                TASK_COMBAT( l_U709[I], l_U824 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U709[I] );
            }
        }
        PRINT_NOW( "RB4_COMMAND_08", 7500, 1 );
        if (DOES_CHAR_EXIST( l_U660 ))
        {
            DELETE_CHAR( ref l_U660 );
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U737 );
        if (DOES_VEHICLE_EXIST( l_U744[1] ))
        {
            DELETE_CAR( ref l_U744[1] );
        }
        if (DOES_VEHICLE_EXIST( l_U744[3] ))
        {
            DELETE_CAR( ref l_U744[3] );
        }
        SET_WANTED_MULTIPLIER( 0.25000000 );
        if ((l_U598 == 1) AND (NOT (IS_CAR_DEAD( l_U760 ))))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U760 );
            l_U598 = 0;
        }
        SET_PED_IS_BLIND_RAGING( l_U824, 0 );
        SETTIMERB( 0 );
        l_U555 = 1;
    }
    if (TIMERB() > 120000)
    {
        if ((LOCATE_CHAR_ANY_MEANS_3D( l_U824, -106.76030000, 762.18690000, 14.29030000, 75, 75, 100, 0 )) AND (NOT (IS_WANTED_LEVEL_GREATER( l_U825, 2 ))))
        {
            ALTER_WANTED_LEVEL( l_U825, 3 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( l_U825 );
        }
        else if ((LOCATE_CHAR_ANY_MEANS_3D( l_U824, -106.76030000, 762.18690000, 14.29030000, 150, 150, 100, 0 )) AND (NOT (IS_WANTED_LEVEL_GREATER( l_U825, 1 ))))
        {
            ALTER_WANTED_LEVEL( l_U825, 2 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( l_U825 );
        }
    }
    else if (TIMERB() > 60000)
    {
        if ((LOCATE_CHAR_ANY_MEANS_3D( l_U824, -106.76030000, 762.18690000, 14.29030000, 75, 75, 100, 0 )) AND (NOT (IS_WANTED_LEVEL_GREATER( l_U825, 1 ))))
        {
            ALTER_WANTED_LEVEL( l_U825, 2 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( l_U825 );
        }
        else if ((LOCATE_CHAR_ANY_MEANS_3D( l_U824, -106.76030000, 762.18690000, 14.29030000, 150, 150, 100, 0 )) AND (NOT (IS_WANTED_LEVEL_GREATER( l_U825, 0 ))))
        {
            ALTER_WANTED_LEVEL( l_U825, 1 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( l_U825 );
        }
    }
    if (((IS_WANTED_LEVEL_GREATER( l_U825, 0 )) AND (l_U566 == 1)) AND (l_U785 == 1))
    {
        if (DOES_BLIP_EXIST( l_U604 ))
        {
            REMOVE_BLIP( l_U604 );
        }
        PRINT_NOW( "RB4_COMMAND_07", 7500, 1 );
        l_U566 = 0;
    }
    if (((NOT (IS_WANTED_LEVEL_GREATER( l_U825, 0 ))) AND (l_U566 == 0)) AND (l_U785 == 1))
    {
        l_U566 = 1;
    }
    if (l_U549 == 0)
    {
        if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U824, -106.36860000, 763.03520000, 15.29020000, 22.00000000, 22.00000000, 22.00000000, 0 ))) || (IS_CHAR_IN_ANY_CAR( l_U824 )))
        {
            sub_31659();
            if (NOT (IS_CAR_DEAD( l_U744[2] )))
            {
                EXPLODE_CAR( l_U744[2], 1, 0 );
            }
            sub_33941();
            if (NOT (IS_CHAR_INJURED( l_U723[3] )))
            {
                SET_CHAR_RELATIONSHIP( l_U723[3], 5, 0 );
                if (IS_CHAR_IN_ANY_CAR( l_U723[3] ))
                {
                    TASK_DRIVE_BY( l_U723[3], l_U824, 0, 0.00000000, 0.00000000, 0.00000000, 150.00000000, 8, 1, 80 );
                }
            }
            l_U549 = 1;
        }
    }
    if (l_U557 == 0)
    {
        GET_KEY_FOR_CHAR_IN_ROOM( l_U824, ref l_U493 );
        if (l_U493 == 0)
        {
            if ((((NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U824, -106.36860000, 763.03520000, 15.29020000, 50.00000000, 50.00000000, 50.00000000, 0 ))) || ((IS_CHAR_IN_ANY_CAR( l_U824 )) AND (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U824, -106.36860000, 763.03520000, 15.29020000, 40.00000000, 40.00000000, 40.00000000, 0 ))))) || (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U749[3], l_U824 ))) || (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U749[4], l_U824 )))
            {
                sub_34483();
                sub_35002();
                l_U557 = 1;
            }
        }
    }
    if (l_U550 == 0)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U824, -127.07460000 + 0.50000000, -256.37660000, 11.56990000, 700.00000000, 700.00000000, 200.00000000, 0 ))
        {
            sub_35421();
            l_U550 = 1;
        }
    }
    sub_9949();
    sub_21590();
    l_U786 = 0;
    for ( l_U786 = 0; l_U786 < 5; l_U786++ )
    {
        if ((IS_CHAR_INJURED( l_U723[l_U786] )) AND (l_U578[l_U786] == 0))
        {
            if ((NOT (IS_CHAR_INJURED( l_U717[l_U786] ))) AND (NOT (IS_CAR_DEAD( l_U749[l_U786] ))))
            {
                if (IS_CHAR_IN_CAR( l_U717[l_U786], l_U749[l_U786] ))
                {
                    TASK_CAR_DRIVE_WANDER( l_U717[l_U786], l_U749[l_U786], 15.00000000, 2 );
                }
                else
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U717[l_U786], 0 );
                    TASK_COMBAT( l_U717[l_U786], l_U824 );
                }
                l_U578[l_U786] = 1;
            }
        }
        if ((IS_CHAR_INJURED( l_U717[l_U786] )) AND (l_U584[l_U786] == 0))
        {
            if ((NOT (IS_CHAR_INJURED( l_U723[l_U786] ))) AND (NOT (IS_CAR_DEAD( l_U749[l_U786] ))))
            {
                if (IS_CHAR_IN_CAR( l_U723[l_U786], l_U749[l_U786] ))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U723[l_U786], 0 );
                    OPEN_SEQUENCE_TASK( ref l_U622 );
                    TASK_LEAVE_ANY_CAR( 0 );
                    TASK_COMBAT( 0, l_U824 );
                    CLOSE_SEQUENCE_TASK( l_U622 );
                    TASK_PERFORM_SEQUENCE( l_U723[l_U786], l_U622 );
                    CLEAR_SEQUENCE_TASK( l_U622 );
                }
                else
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U723[l_U786], 0 );
                    TASK_COMBAT( l_U723[l_U786], l_U824 );
                }
                l_U584[l_U786] = 1;
            }
        }
    }
    if (l_U785 == 0)
    {
        l_U786 = 0;
        for ( l_U786 = 0; l_U786 < 5; l_U786++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U717[l_U786] )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4948(), l_U717[l_U786], 150.00000000, 150.00000000, 150.00000000, 0 )))
                {
                    l_U761[l_U786] = 1;
                    if (DOES_BLIP_EXIST( l_U787[l_U786] ))
                    {
                        REMOVE_BLIP( l_U787[l_U786] );
                    }
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U717[l_U786] );
                }
                else
                {
                    l_U761[l_U786] = 0;
                    if (NOT (DOES_BLIP_EXIST( l_U787[l_U786] )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U717[l_U786], ref l_U787[l_U786] );
                        SET_BLIP_AS_FRIENDLY( l_U787[l_U786], 0 );
                    }
                }
            }
            else
            {
                l_U761[l_U786] = 1;
                if (DOES_BLIP_EXIST( l_U787[l_U786] ))
                {
                    REMOVE_BLIP( l_U787[l_U786] );
                }
            }
        }
        l_U786 = 0;
        for ( l_U786 = 0; l_U786 < 5; l_U786++ )
        {
            if (l_U761[l_U786] == 1)
            {
                l_U782 = 1;
            }
            else
            {
                l_U782 = 0;
                l_U786 = 55;
            }
        }
        l_U786 = 0;
        for ( l_U786 = 0; l_U786 < 6; l_U786++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U723[l_U786] )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4948(), l_U723[l_U786], 150.00000000, 150.00000000, 150.00000000, 0 )))
                {
                    l_U767[l_U786] = 1;
                    if (DOES_BLIP_EXIST( l_U793[l_U786] ))
                    {
                        REMOVE_BLIP( l_U793[l_U786] );
                    }
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U723[l_U786] );
                }
                else
                {
                    l_U767[l_U786] = 0;
                    if (NOT (DOES_BLIP_EXIST( l_U793[l_U786] )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U723[l_U786], ref l_U793[l_U786] );
                        SET_BLIP_AS_FRIENDLY( l_U793[l_U786], 0 );
                    }
                }
            }
            else
            {
                l_U767[l_U786] = 1;
                if (DOES_BLIP_EXIST( l_U793[l_U786] ))
                {
                    REMOVE_BLIP( l_U793[l_U786] );
                }
            }
        }
        l_U786 = 0;
        for ( l_U786 = 0; l_U786 < 6; l_U786++ )
        {
            if (l_U767[l_U786] == 1)
            {
                l_U783 = 1;
            }
            else
            {
                l_U783 = 0;
                l_U786 = 56;
            }
        }
        l_U786 = 0;
        for ( l_U786 = 0; l_U786 < 3; l_U786++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U713[l_U786] )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4948(), l_U713[l_U786], 150.00000000, 150.00000000, 150.00000000, 0 )))
                {
                    l_U774[l_U786] = 1;
                    if (DOES_BLIP_EXIST( l_U800[l_U786] ))
                    {
                        REMOVE_BLIP( l_U800[l_U786] );
                    }
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U713[l_U786] );
                }
                else
                {
                    l_U774[l_U786] = 0;
                    if (NOT (DOES_BLIP_EXIST( l_U800[l_U786] )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U713[l_U786], ref l_U800[l_U786] );
                        SET_BLIP_AS_FRIENDLY( l_U800[l_U786], 0 );
                    }
                }
            }
            else
            {
                l_U774[l_U786] = 1;
                if (DOES_BLIP_EXIST( l_U800[l_U786] ))
                {
                    REMOVE_BLIP( l_U800[l_U786] );
                }
            }
        }
        l_U786 = 0;
        for ( l_U786 = 0; l_U786 < 3; l_U786++ )
        {
            if (l_U774[l_U786] == 1)
            {
                l_U784 = 1;
            }
            else
            {
                l_U784 = 0;
                l_U786 = 53;
            }
        }
        if (((l_U782 == 1) AND (l_U783 == 1)) AND (l_U784 == 1))
        {
            l_U785 = 1;
        }
        else
        {
            l_U785 = 0;
        }
        if ((l_U785 == 1) AND (IS_WANTED_LEVEL_GREATER( l_U825, 0 )))
        {
            PRINT_NOW( "RB4_COMMAND_07", 7500, 1 );
            l_U566 = 0;
        }
    }
    if (((LOCATE_CHAR_ANY_MEANS_3D( l_U824, -106.76030000, 762.18690000, 14.29030000, 150, 150, 100, 0 )) AND (l_U785 == 1)) AND (l_U566 == 1))
    {
        if (l_U575 == 0)
        {
            PRINT_NOW( "RB4_COMMAND_09", 7500, 1 );
            l_U575 = 1;
        }
    }
    else
    {
        l_U575 = 0;
    }
    if (((l_U785 == 1) AND (l_U566 == 1)) AND (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U824, -106.76030000, 762.18690000, 14.29030000, 150, 150, 100, 0 ))))
    {
        l_U489++;
    }
    return;
}

void sub_31659()
{
    CREATE_CHAR( 8, l_U742, -115.57000000, 774.20000000, 17.63000000, ref l_U723[5], 1 );
    SET_CHAR_HEADING( l_U723[5], 102.51030000 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U723[5], 1 );
    sub_14964( l_U723[5], 1, 1, 1, "Museum2_store" );
    sub_8480( l_U723[5], 3 );
    SET_NEXT_DESIRED_MOVE_STATE( 4 );
    SET_CHAR_ACCURACY( l_U723[5], 25 );
    if (NOT (IS_CHAR_INJURED( l_U723[5] )))
    {
        TASK_COMBAT( l_U723[5], l_U824 );
    }
    if ((NOT (IS_CAR_DEAD( l_U749[0] ))) AND (l_U556 == 0))
    {
        if ((NOT (IS_CHAR_IN_CAR( l_U824, l_U749[0] ))) AND (LOCATE_CAR_3D( l_U749[0], -106.36860000, 763.03520000, 15.29020000, 20.00000000, 20.00000000, 20.00000000, 0 )))
        {
            SET_CAR_ENGINE_ON( l_U749[0], 1, 1 );
            CREATE_CHAR( 8, l_U742, -114.79000000, 775.67000000, 17.63000000, ref l_U717[0], 1 );
            SET_CHAR_HEADING( l_U717[0], 102.51030000 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U717[0], 1 );
            sub_14964( l_U717[0], 1, 1, 1, "Museum2_store" );
            sub_8480( l_U717[0], 0 );
            SET_CHAR_ACCURACY( l_U717[0], 25 );
            CREATE_CHAR( 8, l_U740, -115.92000000, 776.01000000, 17.63000000, ref l_U723[0], 1 );
            SET_CHAR_HEADING( l_U723[0], 98.44220000 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U723[0], 1 );
            sub_14964( l_U723[0], 1, 1, 1, "Museum2_store" );
            sub_8480( l_U723[0], 0 );
            SET_CHAR_ACCURACY( l_U723[0], 20 );
            if (NOT (IS_CHAR_INJURED( l_U717[0] )))
            {
                OPEN_SEQUENCE_TASK( ref l_U622 );
                TASK_ENTER_CAR_AS_DRIVER( 0, l_U749[0], -2 );
                TASK_CAR_MISSION_PED_TARGET( 0, l_U749[0], l_U824, 3, 60.00000000, 3, 0, 3 );
                CLOSE_SEQUENCE_TASK( l_U622 );
                TASK_PERFORM_SEQUENCE( l_U717[0], l_U622 );
                CLEAR_SEQUENCE_TASK( l_U622 );
            }
            if (NOT (IS_CHAR_INJURED( l_U723[0] )))
            {
                if (IS_CHAR_IN_ANY_CAR( l_U723[0] ))
                {
                    OPEN_SEQUENCE_TASK( ref l_U622 );
                    TASK_ENTER_CAR_AS_PASSENGER( 0, l_U749[0], -2, 0 );
                    TASK_DRIVE_BY( 0, l_U824, 0, 0.00000000, 0.00000000, 0.00000000, 150.00000000, 8, 1, 50 );
                    CLOSE_SEQUENCE_TASK( l_U622 );
                    TASK_PERFORM_SEQUENCE( l_U723[0], l_U622 );
                    CLEAR_SEQUENCE_TASK( l_U622 );
                }
            }
            l_U556 = 1;
            l_U778[0] = 1;
        }
    }
    if ((NOT (IS_CAR_DEAD( l_U749[1] ))) AND (l_U556 == 0))
    {
        if ((NOT (IS_CHAR_IN_CAR( l_U824, l_U749[1] ))) AND (LOCATE_CAR_3D( l_U749[1], -106.36860000, 763.03520000, 15.29020000, 20.00000000, 20.00000000, 20.00000000, 0 )))
        {
            SET_CAR_ENGINE_ON( l_U749[1], 1, 1 );
            CREATE_CHAR( 8, l_U741, -114.79000000, 775.67000000, 17.63000000, ref l_U717[1], 1 );
            SET_CHAR_HEADING( l_U717[1], 102.51030000 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U717[1], 1 );
            sub_14964( l_U717[1], 1, 1, 1, "Museum2_store" );
            sub_8480( l_U717[1], 0 );
            SET_CHAR_ACCURACY( l_U717[1], 25 );
            CREATE_CHAR( 8, l_U742, -115.92000000, 776.01000000, 17.63000000, ref l_U723[1], 1 );
            SET_CHAR_HEADING( l_U723[1], 113.91770000 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U723[1], 1 );
            sub_14964( l_U723[1], 1, 1, 1, "Museum2_store" );
            sub_8480( l_U723[1], 0 );
            SET_CHAR_ACCURACY( l_U723[1], 20 );
            if (NOT (IS_CHAR_INJURED( l_U717[1] )))
            {
                OPEN_SEQUENCE_TASK( ref l_U622 );
                TASK_ENTER_CAR_AS_DRIVER( 0, l_U749[1], -2 );
                TASK_CAR_MISSION_PED_TARGET( 0, l_U749[1], l_U824, 3, 60.00000000, 3, 0, 3 );
                CLOSE_SEQUENCE_TASK( l_U622 );
                TASK_PERFORM_SEQUENCE( l_U717[1], l_U622 );
                CLEAR_SEQUENCE_TASK( l_U622 );
            }
            if (NOT (IS_CHAR_INJURED( l_U723[1] )))
            {
                if (IS_CHAR_IN_ANY_CAR( l_U723[1] ))
                {
                    OPEN_SEQUENCE_TASK( ref l_U622 );
                    TASK_ENTER_CAR_AS_PASSENGER( 0, l_U749[1], -2, 0 );
                    TASK_DRIVE_BY( 0, l_U824, 0, 0.00000000, 0.00000000, 0.00000000, 150.00000000, 8, 1, 50 );
                    CLOSE_SEQUENCE_TASK( l_U622 );
                    TASK_PERFORM_SEQUENCE( l_U723[1], l_U622 );
                    CLEAR_SEQUENCE_TASK( l_U622 );
                }
            }
            l_U556 = 1;
            l_U778[1] = 1;
        }
    }
    if ((NOT (IS_CAR_DEAD( l_U749[2] ))) AND (l_U556 == 0))
    {
        if ((NOT (IS_CHAR_IN_CAR( l_U824, l_U749[2] ))) AND (LOCATE_CAR_3D( l_U749[2], -106.36860000, 763.03520000, 15.29020000, 20.00000000, 20.00000000, 20.00000000, 0 )))
        {
            SET_CAR_ENGINE_ON( l_U749[2], 1, 1 );
            CREATE_CHAR( 8, l_U740, -114.79000000, 775.67000000, 17.63000000, ref l_U717[2], 1 );
            SET_CHAR_HEADING( l_U717[2], 102.51030000 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U717[2], 1 );
            sub_14964( l_U717[2], 1, 1, 1, "Museum2_store" );
            sub_8480( l_U717[2], 0 );
            SET_CHAR_ACCURACY( l_U717[2], 25 );
            CREATE_CHAR( 8, l_U741, -115.92000000, 776.01000000, 17.63000000, ref l_U723[2], 1 );
            SET_CHAR_HEADING( l_U723[2], 258.16020000 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U723[2], 1 );
            sub_14964( l_U723[2], 1, 1, 1, "Museum2_store" );
            sub_8480( l_U723[2], 0 );
            SET_CHAR_ACCURACY( l_U723[2], 20 );
            if (NOT (IS_CHAR_INJURED( l_U717[2] )))
            {
                OPEN_SEQUENCE_TASK( ref l_U622 );
                TASK_ENTER_CAR_AS_DRIVER( 0, l_U749[2], -2 );
                TASK_CAR_MISSION_PED_TARGET( 0, l_U749[2], l_U824, 3, 60.00000000, 2, 0, 3 );
                CLOSE_SEQUENCE_TASK( l_U622 );
                TASK_PERFORM_SEQUENCE( l_U717[2], l_U622 );
                CLEAR_SEQUENCE_TASK( l_U622 );
            }
            if (NOT (IS_CHAR_INJURED( l_U723[2] )))
            {
                if (IS_CHAR_IN_ANY_CAR( l_U723[2] ))
                {
                    OPEN_SEQUENCE_TASK( ref l_U622 );
                    TASK_ENTER_CAR_AS_PASSENGER( 0, l_U749[2], -2, 0 );
                    TASK_DRIVE_BY( 0, l_U824, 0, 0.00000000, 0.00000000, 0.00000000, 150.00000000, 8, 1, 50 );
                    CLOSE_SEQUENCE_TASK( l_U622 );
                    TASK_PERFORM_SEQUENCE( l_U723[2], l_U622 );
                    CLEAR_SEQUENCE_TASK( l_U622 );
                }
            }
            l_U556 = 1;
            l_U778[2] = 1;
        }
    }
    return;
}

void sub_33941()
{
    CREATE_CHAR( 7, l_U738, -98.67910000, 884.70970000, 14.18830000 + 5.00000000, ref l_U665[2], 1 );
    SET_CHAR_HEADING( l_U665[2], 323.11660000 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U665[2] );
    if (NOT (IS_CHAR_DEAD( l_U665[2] )))
    {
        SET_CHAR_HEALTH( l_U665[2], 5 );
    }
    CREATE_CHAR( 7, l_U741, -85.08990000, 884.00220000, 13.67920000, ref l_U665[3], 1 );
    SET_CHAR_HEADING( l_U665[3], 70.91310000 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U665[3] );
    if (NOT (IS_CHAR_DEAD( l_U665[3] )))
    {
        SET_CHAR_HEALTH( l_U665[3], 5 );
    }
    return;
}

void sub_34483()
{
    if (NOT (IS_CAR_DEAD( l_U749[3] )))
    {
        if (NOT (IS_CHAR_IN_CAR( l_U824, l_U749[3] )))
        {
            SET_CAR_ENGINE_ON( l_U749[3], 1, 1 );
            if (NOT (IS_CHAR_INJURED( l_U717[3] )))
            {
                SET_CHAR_RELATIONSHIP( l_U717[3], 5, 0 );
                TASK_CAR_MISSION_PED_TARGET( l_U717[3], l_U749[3], l_U824, 7, 60.00000000, 2, 0, 3 );
            }
            if (NOT (IS_CHAR_INJURED( l_U723[3] )))
            {
                SET_CHAR_RELATIONSHIP( l_U723[3], 5, 0 );
                if (IS_CHAR_IN_ANY_CAR( l_U723[3] ))
                {
                    TASK_DRIVE_BY( l_U723[3], l_U824, 0, 0.00000000, 0.00000000, 0.00000000, 150.00000000, 8, 1, 80 );
                }
            }
        }
    }
    if (NOT (IS_CAR_DEAD( l_U749[4] )))
    {
        if (NOT (IS_CHAR_IN_CAR( l_U824, l_U749[4] )))
        {
            SET_CAR_ENGINE_ON( l_U749[4], 1, 1 );
            FORCE_CAR_LIGHTS( l_U749[4], 2 );
            if (NOT (IS_CHAR_INJURED( l_U717[4] )))
            {
                SET_CHAR_RELATIONSHIP( l_U717[4], 5, 0 );
                TASK_CAR_MISSION_PED_TARGET( l_U717[4], l_U749[4], l_U824, 3, 60.00000000, 2, 0, 3 );
            }
            if (NOT (IS_CHAR_INJURED( l_U723[4] )))
            {
                SET_CHAR_RELATIONSHIP( l_U723[4], 5, 0 );
                if (IS_CHAR_IN_ANY_CAR( l_U723[3] ))
                {
                    TASK_DRIVE_BY( l_U723[4], l_U824, 0, 0.00000000, 0.00000000, 0.00000000, 150.00000000, 8, 1, 45 );
                }
            }
        }
    }
    return;
}

void sub_35002()
{
    GET_CURRENT_POLICE_CAR_MODEL( ref l_U810 );
    GET_CURRENT_COP_MODEL( ref l_U743 );
    CLEAR_AREA( -93.82730000, 546.55510000, 13.64240000, 5.00000000, 1 );
    CREATE_CAR( l_U810, -93.82730000, 546.55510000, 13.64240000, ref l_U755[0], 1 );
    SET_CAR_HEADING( l_U755[0], 0.14560000 );
    CREATE_CHAR( 6, l_U743, -93.82730000, 546.55510000 + 2, 13.64240000, ref l_U730[0], 1 );
    if ((NOT (IS_CAR_DEAD( l_U755[0] ))) AND (NOT (IS_CHAR_INJURED( l_U730[0] ))))
    {
        SET_CAR_ENGINE_ON( l_U755[0], 1, 1 );
        FORCE_CAR_LIGHTS( l_U755[0], 2 );
        SWITCH_CAR_SIREN( l_U755[0], 1 );
        WARP_CHAR_INTO_CAR( l_U730[0], l_U755[0] );
        sub_8480( l_U730[0], 2 );
        TASK_CAR_DRIVE_TO_COORD( l_U730[0], l_U755[0], -79.38710000, 824.10740000, 17.31270000, 30.00000000, 0, l_U810, 2, 5.00000000, 10 );
    }
    return;
}

void sub_35421()
{
    GET_CURRENT_POLICE_CAR_MODEL( ref l_U810 );
    GET_CURRENT_COP_MODEL( ref l_U743 );
    if ((HAS_MODEL_LOADED( l_U810 )) AND (HAS_MODEL_LOADED( l_U743 )))
    {
        CLEAR_AREA( -73.59090000, -236.63340000, 14.27770000 - 1.00000000, 5.00000000, 1 );
        CREATE_CAR( l_U810, -73.59090000, -236.63340000, 14.27770000 - 1.00000000, ref l_U755[1], 1 );
        SET_CAR_HEADING( l_U755[1], 270.88110000 );
        CREATE_CHAR( 6, l_U743, -73.59090000, -236.63340000 + 1.00000000, 14.27770000 - 1.00000000, ref l_U730[1], 1 );
        if ((NOT (IS_CAR_DEAD( l_U755[1] ))) AND (NOT (IS_CHAR_INJURED( l_U730[1] ))))
        {
            SET_CAR_ENGINE_ON( l_U755[1], 1, 1 );
            FORCE_CAR_LIGHTS( l_U755[1], 2 );
            SWITCH_CAR_SIREN( l_U755[1], 1 );
            WARP_CHAR_INTO_CAR( l_U730[1], l_U755[1] );
            sub_8480( l_U730[1], 2 );
            TASK_CAR_DRIVE_TO_COORD( l_U730[1], l_U755[1], -79.38710000, 824.10740000, 17.31270000, 20.00000000, 0, l_U810, 2, 5.00000000, 10 );
        }
    }
    if ((HAS_MODEL_LOADED( l_U810 )) AND (HAS_MODEL_LOADED( l_U743 )))
    {
        CLEAR_AREA( -26.23140000, -230.52290000, 14.35350000 - 1.00000000, 5.00000000, 1 );
        CREATE_CAR( l_U810, -26.23140000, -230.52290000, 14.35350000 - 1.00000000, ref l_U755[2], 1 );
        SET_CAR_HEADING( l_U755[2], 90.62750000 );
        CREATE_CHAR( 6, l_U743, -26.23140000, -230.52290000 + 1.00000000, 14.35350000 - 1.00000000, ref l_U730[2], 1 );
        if ((NOT (IS_CAR_DEAD( l_U755[2] ))) AND (NOT (IS_CHAR_INJURED( l_U730[2] ))))
        {
            SET_CAR_ENGINE_ON( l_U755[2], 1, 1 );
            FORCE_CAR_LIGHTS( l_U755[2], 2 );
            SWITCH_CAR_SIREN( l_U755[2], 1 );
            WARP_CHAR_INTO_CAR( l_U730[2], l_U755[2] );
            sub_8480( l_U730[2], 2 );
            TASK_CAR_DRIVE_TO_COORD( l_U730[2], l_U755[2], -79.38710000, 824.10740000, 17.31270000, 20.00000000, 0, l_U810, 2, 5.00000000, 10 );
        }
    }
    return;
}

void sub_38339()
{
    sub_10596( 14, "RB4_CALL1", "RB4AUD", 0 );
    l_U520 = 1;
    return;
}

void sub_38439()
{
    TRIGGER_MISSION_COMPLETE_AUDIO( 65 );
    l_U518 = 0;
    sub_38464();
    sub_50057( 1022, 3 );
    AWARD_ACHIEVEMENT( 26 );
    return;
}

void sub_38464()
{
    sub_38473();
    return;
}

void sub_38473()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_38491();
    sub_38550( iVar2, iVar3, iVar4 );
    return;
}

void sub_38491()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_38550(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 14;
    sub_38583( iVar5, uParam0, uParam1, uParam2, "Contact_16" );
    return;
}

void sub_38583(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_38679( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_38679( ref cVar9 );
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
            sub_38679( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_38679( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_38679( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_38679( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_39256( iParam0, iVar7 );;;
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
                sub_39653( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_39653( 0, 4 );
            }
        }
    }
    if (NOT (sub_39742( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_5156(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_5156() );
    }
    sub_2009();
    bVar27 = true;
    uVar28 = sub_39256( iParam0, iVar7 );
    uVar29 = sub_1466( iParam0 );
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
                sub_49118( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_49548();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_49633( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_49690( iParam0 );
                sub_49729( 0 );
                sub_1907( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_49837();
        }
    }
    if (bParam2)
    {
        sub_49548();
        sub_49925();
        sub_49729( 0 );
    }
    if (bParam3)
    {
        sub_49548();
        sub_49965();
        sub_49729( 0 );
        sub_1907( uVar29, 0 );
    }
    sub_1353();
    return;
}

void sub_38679(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_39256(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_1865( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_39653(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_39742(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_39950( uParam1 );
        break;
        case 1:
        bVar8 = sub_42028( uParam1 );
        break;
        case 2:
        bVar8 = sub_42254( uParam1 );
        break;
        case 3:
        bVar8 = sub_42404( uParam1 );
        break;
        case 4:
        bVar8 = sub_42682( uParam1 );
        break;
        case 5:
        bVar8 = sub_42985( uParam1 );
        break;
        case 6:
        bVar8 = sub_43184( uParam1 );
        break;
        case 7:
        bVar8 = sub_43410( uParam1 );
        break;
        case 8:
        bVar8 = sub_43645( uParam1 );
        break;
        case 9:
        bVar8 = sub_44020( uParam1 );
        break;
        case 10:
        bVar8 = sub_44267( uParam1 );
        break;
        case 11:
        bVar8 = sub_44406( uParam1 );
        break;
        case 12:
        bVar8 = sub_44705( uParam1 );
        break;
        case 13:
        bVar8 = sub_44933( uParam1 );
        break;
        case 14:
        bVar8 = sub_45220( uParam1 );
        break;
        case 15:
        bVar8 = sub_45502( uParam1 );
        break;
        case 16:
        bVar8 = sub_45784( uParam1 );
        break;
        case 17:
        bVar8 = sub_45985( uParam1 );
        break;
        case 18:
        bVar8 = sub_46058( uParam1 );
        break;
        case 19:
        bVar8 = sub_46272( uParam1 );
        break;
        case 20:
        bVar8 = sub_46525( uParam1 );
        break;
        case 21:
        bVar8 = sub_46772( uParam1 );
        break;
        case 22:
        bVar8 = sub_46973( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_41633( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_39256( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_47296( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_39950(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40229( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_40229( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_40229( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_40229( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_40229( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_40229( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_40229( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_40229( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_40229( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_40229( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_40229( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_40229( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_40229( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_40229( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_40229( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_40229( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_40229( iVar3, 0, 3, 1, 0, 0 );
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
        sub_40229( iVar3, 0, sub_41511(), sub_41777(), 0, 0 );
        break;
        default:
        sub_41936( "Friend 1", 1 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41936( "Friend 1", 0 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_40229(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_40240( uParam1 );
    sub_40414( uParam0, 0, uParam2 );
    sub_40414( uParam0, 1, uParam3 );
    sub_40414( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_38491();
    return;
}

void sub_40240(unknown uParam0)
{
    ADD_SCORE( sub_5156(), uParam0 );
    sub_40265( uParam0 );
    return;
}

void sub_40265(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1865( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_40414(unknown uParam0, int iParam1, int iParam2)
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
        sub_40571( uParam0 );
    }
    return;
}

void sub_40571(unknown uParam0)
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

int sub_41511()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_41633( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_41633(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_41777()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_41633( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_41936(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_42028(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40229( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_40229( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_40229( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_40229( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_41936( "Contact 2", 1 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41936( "Contact 2", 0 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_42254(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_40229( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_41936( "Girl 3", 1 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41936( "Girl 3", 0 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_42404(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40229( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_40229( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_40229( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_40229( iVar3, 0, sub_41511(), sub_41777(), 0, 0 );
        break;
        default:
        sub_41936( "Friend 4", 1 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41936( "Friend 4", 0 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_42682(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40229( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_40229( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_40229( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_40229( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_40229( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_40229( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_40229( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_41936( "Contact 5", 1 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41936( "Contact 5", 0 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_42985(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40229( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_40229( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_40229( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_41936( "Contact 7", 1 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41936( "Contact 7", 0 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_43184(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40229( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_40229( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_40229( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_40229( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_41936( "Contact 7b", 1 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41936( "Contact 7b", 0 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_43410(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40229( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_40229( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_40229( iVar3, 0, sub_41511(), sub_41777(), 0, 0 );
        break;
        default:
        sub_41936( "Friend 8", 1 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41936( "Friend 8", 0 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_43645(unknown uParam0)
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
        sub_40229( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_40229( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_40229( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_40229( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_40229( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_40229( iVar3, 0, sub_41511(), sub_41777(), 0, 0 );
        break;
        default:
        sub_41936( "Friend 9", 1 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41936( "Friend 9", 0 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_44020(unknown uParam0)
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
        sub_40229( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_40229( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_40229( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_40229( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_41936( "Contact 10", 1 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_41936( "Contact 10", 0 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_44267(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40229( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_41936( "Girl 11", 1 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41936( "Girl 11", 0 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_44406(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40229( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_40229( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_40229( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_40229( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_40229( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_40229( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_41936( "Contact 12", 1 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41936( "Contact 12", 0 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_44705(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40229( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_40229( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_40229( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_40229( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_41936( "Contact 13", 1 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41936( "Contact 13", 0 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_44933(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40229( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_40229( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_40229( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_40229( iVar3, 0, sub_41511(), sub_41777(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_41936( "Friend 15", 1 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41936( "Friend 15", 0 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_45220(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40229( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_40229( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_40229( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_40229( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_40229( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_40229( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_41936( "Contact 16", 1 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41936( "Contact 16", 0 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_45502(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40229( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_40229( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_40229( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_40229( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_40229( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_41936( "Contact 18", 1 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41936( "Contact 18", 0 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_45784(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40229( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_40229( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_40229( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_41936( "Contact 19", 1 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41936( "Contact 19", 0 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_45985(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_41936( "Girl 20", 0 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_46058(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40229( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_40229( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_40229( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_41936( "Contact 21", 1 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41936( "Contact 21", 0 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_46272(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40229( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_40229( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_40229( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_40229( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_40229( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_41936( "Contact 22", 1 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41936( "Contact 22", 0 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_46525(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_40229( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_40229( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_40229( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_40229( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_41936( "Contact 24", 1 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41936( "Contact 24", 0 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_46772(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40229( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_40229( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_40229( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_41936( "Contact 25", 1 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41936( "Contact 25", 0 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_46973(unknown uParam0)
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
        sub_40229( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_41936( "Girl 26", 1 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_41936( "Girl 26", 0 );
        sub_40229( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_47296(int iParam0, int iParam1)
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
    if (sub_47344( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_48075( iParam1 );
    }
    return;
}

int sub_47344(int iParam0, int iParam1)
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
            sub_47484( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_47484(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_47666( 0 );
    return;
}

void sub_47666(boolean bParam0)
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
        sub_47921();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_47921()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_48075(int iParam0)
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
        sub_48408( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_48408( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_48408( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_48408( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_48408( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_48408( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_48408( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_48408( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_48408( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_48408( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_48408( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_48408( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_48408( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_48408( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_48408( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_48408( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_48408( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_48408( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_48408( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_48408(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_49118(unknown uParam0, unknown uParam1)
{
    sub_49137( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_49137(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_49548()
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

int sub_49633(int iParam0, int iParam1)
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

void sub_49690(unknown uParam0)
{
    sub_1252();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_49729(unknown uParam0)
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

void sub_49837()
{
    sub_49846();
    return;
}

void sub_49846()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_49925()
{
    sub_49846();
    return;
}

void sub_49965()
{
    sub_49846();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_50057(int iParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = iParam0 mod 1000;
    SET_BITS_IN_RANGE( ref g_U1502[iVar4 / 16], (iVar4 mod 16) * 2, ((iVar4 mod 16) * 2) + 1, uParam1 );
    return;
}

void sub_50156()
{
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_5156(), 150 );
        SAY_AMBIENT_SPEECH( l_U824, "MISSION_FAIL_RAGE", 1, 1, 0 );
    }
    l_U518 = 0;
    sub_50233();
    return;
}

void sub_50233()
{
    sub_50242();
    return;
}

void sub_50242()
{
    int iVar2;

    iVar2 = 14;
    sub_50256( iVar2 );
    sub_2000( iVar2 );
    return;
}

void sub_50256(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_5156(), 150 );
    CLEAR_HELP();
    sub_824( uParam0 );
    return;
}
