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
    l_U502 = 0;
    l_U503 = 999999.90000000;
    l_U504 = 0.00000000;
    l_U505 = 0.26000000;
    l_U506 = 0.65000000;
    l_U508 = 5000.00000000;
    l_U509 = 5000.00000000;
    l_U511 = 0.00000000;
    l_U513 = 0;
    l_U524 = "amb@smoking_spliff";
    l_U525 = "create_spliff";
    l_U526 = "partial_smoke";
    l_U527 = "partial_smoke_car";
    l_U528 = {0.13700000, 0.03100000, 0.03500000};
    l_U531 = {2.21400000, -0.12100000, 0.00000000};
    l_U534 = {0.00000000, 0.00000000, 0.13600000};
    l_U537 = {0.00000000, 0.00000000, 0.00000000};
    l_U540 = {-0.48300000, -0.28500000, 0.62000000};
    l_U543 = {-0.48300000, -1.30000000, 0.62000000};
    l_U546 = {0.00000000, 0.00000000, 90.00000000};
    l_U549 = {0.00000000, -0.28500000, 0.50000000};
    l_U552 = {0.00000000, 0.00000000, 0.00000000};
    l_U564 = -1;
    l_U569 = 0;
    l_U570 = 0;
    l_U571 = 0;
    l_U572 = 0;
    l_U573 = 0;
    l_U574 = 0;
    l_U575 = 1;
    l_U576 = 0;
    l_U577 = 0;
    l_U578 = 0;
    l_U579 = 0;
    l_U580 = 0;
    l_U581 = 0;
    l_U582 = 0;
    l_U583 = 0;
    l_U584 = 0;
    l_U585 = 0;
    l_U586 = 0;
    l_U587 = 0;
    l_U588 = 0;
    l_U589 = 0;
    l_U590 = 0;
    l_U591 = {1006.60000000, -544.86000000, 15.29000000};
    l_U594 = {1257.19000000, 753.42000000, 47.82000000};
    l_U597 = {1192.74000000, 818.52000000, 36.70000000};
    l_U600 = {1513.46000000, 115.69000000, 22.25000000};
    l_U603 = {964.81000000, -319.00000000, 20.64000000};
    l_U606 = {1049.94700000, -562.27610000, 25.68000000};
    l_U609 = {965.15340000, -324.35270000, 19.23930000};
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_744();
        sub_2854();
    }
    sub_3797();
    SET_MISSION_FLAG( 1 );
    LOAD_ADDITIONAL_TEXT( "VLAD3", 0 );
    LOAD_ADDITIONAL_TEXT( "V3AUD", 6 );
    sub_3927( "V3AUD" );
    sub_4090( 0, sub_4041(), "NIKO", 0 );
    sub_4265( ref l_U612, "V3_CALL1", "V3_JKILL" );
    sub_4265( ref l_U621, "V3_CALL1", "V3_JLIVE" );
    sub_4265( ref l_U630, "V3_CALL1", "V3_JFINE" );
    LOAD_COMBAT_DECISION_MAKER( 7, ref l_U652 );
    CLEAR_AREA( 935.21720000, -492.60420000, 14.48470000, 4.00000000, 1 );
    while (true)
    {
        WAIT( 0 );
        if (IS_PLAYER_PLAYING( sub_4719() ))
        {
            switch (l_U556)
            {
                case 0:
                sub_4822();
                break;
                case 1:
                sub_5495();
                break;
                case 2:
                sub_9406();
                break;
                case 3:
                if (SECUROM_SPOT_CHECK3())
                {
                    sub_25982();
                }
                break;
                case 4:
                sub_31615();
                break;
                case 5:
                sub_33031();
                break;
            }
            if ((l_U556 < 5) AND (l_U556 > 1))
            {
                sub_48522();
            }
            if (l_U556 < 2)
            {
                if (IS_WANTED_LEVEL_GREATER( sub_4719(), 2 ))
                {
                    if (NOT l_U581)
                    {
                        REMOVE_BLIP( l_U649 );
                        PRINT_NOW( "VL3WANT", 7500, 1 );
                        l_U581 = 1;
                    }
                }
                else if (l_U581)
                {
                    if (l_U582 == 1)
                    {
                        if (NOT (IS_CAR_DEAD( l_U641 )))
                        {
                            PRINT_NOW( "VL3A_5C", 7500, 1 );
                            REMOVE_BLIP( l_U649 );
                            ADD_BLIP_FOR_CAR( l_U641, ref l_U649 );
                            SET_BLIP_AS_FRIENDLY( l_U649, 1 );
                        }
                    }
                    else
                    {
                        PRINT_NOW( "VL3A_5", 7500, 1 );
                        REMOVE_BLIP( l_U649 );
                        ADD_BLIP_FOR_COORD( l_U606._fU0, l_U606._fU4, l_U606._fU8, ref l_U649 );
                    }
                    l_U581 = 0;
                }
            }
            if (DOES_VEHICLE_EXIST( l_U640 ))
            {
                if (l_U556 > 1)
                {
                    if (NOT sub_50073())
                    {
                        sub_50196( 1 );
                    }
                }
            }
        }
    }
    return;
}

void sub_744()
{
    sub_753();
    return;
}

void sub_753()
{
    int iVar2;

    iVar2 = 1;
    sub_767( iVar2 );
    sub_1943( iVar2 );
    return;
}

void sub_767(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_811();
        sub_972();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1080();
            sub_1119();
        }
    }
    sub_1195();
    sub_1296();
    uVar5 = sub_1409( uParam0 );
    sub_1850( uVar5, 0 );
    return;
}

void sub_811()
{
    sub_825( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_925();
    }
    return;
}

void sub_825(int iParam0)
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

void sub_925()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_972()
{
    sub_981();
    return;
}

void sub_981()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1080()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1119()
{
    sub_1128();
    return;
}

void sub_1128()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1195()
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

void sub_1296()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1318();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1318()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1409(unknown uParam0)
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
    sub_1808( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1808(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1850(int iParam0, boolean bParam1)
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

void sub_1943(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1952();
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
        sub_2727();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1952()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_1990( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_1990( 1, g_U569[I] )) != 0)
            {
                sub_2276( I );
            }
        }
    }
    if (NOT sub_2442())
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

int sub_1990(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2276(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2361( g_U569 - 1 );
    return;
}

void sub_2361(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2442()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1990( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2727()
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

void sub_2854()
{
    RELEASE_WEATHER();
    MARK_MODEL_AS_NO_LONGER_NEEDED( -344943009 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1552214124 );
    sub_2895( 1 );
    REMOVE_BLIP( l_U649 );
    REMOVE_BLIP( l_U648 );
    REMOVE_ANIMS( "MISSVLAD3" );
    sub_3642( 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2895(unknown uParam0)
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_2906( uParam0 ) );
    return;
}

int sub_2906(unknown uParam0)
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
    sub_1808( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_3642(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8392 >= 4) AND (g_U8392 <= 8))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_3797()
{
    if (g_U0)
    {
        return;
    }
    if (NOT (g_U10981[g_U26746]._fU140 == 0))
    {
        return;
    }
    g_U10981[g_U26746]._fU140 = 1;
    g_U26745 = 0;
    return;
}

void sub_3927(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_3946();
    return;
}

void sub_3946()
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

void sub_4041()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4090(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_4174( "\n PED NUMBER ", uParam0 );
    sub_4214( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_4174(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4214(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4265(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_4316( uParam0, uParam1, uParam2, "END", "END", "END", "END", "END", "END" );
    return;
}

void sub_4316(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
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

void sub_4719()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_4822()
{
    FORCE_WEATHER_NOW( 1 );
    if (g_U9893._fU24)
    {
        START_CUTSCENE_NOW( "Vla3_a" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        CLEAR_AREA( 936.94100000, -492.73100000, 14.40000000, 5.00000000, 1 );
        CLEAR_AREA( 1068.17200000, -553.23540000, 13.00000000, 8.00000000, 1 );
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
            CLEAR_AREA_OF_CARS( 989.90000000, -542.70000000, 15.00000000, 30.00000000 );
        }
        CLEAR_NAMED_CUTSCENE( "Vla3_a" );
    }
    REQUEST_MODEL( 800869680 );
    REQUEST_ANIMS( "MISSVLAD3" );
    REQUEST_MODEL( 1159759556 );
    LOAD_ALL_OBJECTS_NOW();
    while (((NOT (HAVE_ANIMS_LOADED( "MISSVLAD3" ))) || (NOT (HAS_MODEL_LOADED( 800869680 )))) || (NOT (HAS_MODEL_LOADED( 1159759556 ))))
    {
        WAIT( 0 );
    }
    CHANGE_GARAGE_TYPE( "bs3MG", 3 );
    if (IS_GARAGE_OPEN( "bs3MG" ))
    {
        CLOSE_GARAGE( "bs3MG" );
    }
    SET_GARAGE_LEAVE_CAMERA_ALONE( "bs3MG", 1 );
    SET_CHAR_COORDINATES( sub_4041(), 1063.92900000, -557.49230000, 12.71050000 );
    SET_CHAR_HEADING( sub_4041(), 104.00000000 );
    SET_CAM_BEHIND_PED( sub_4041() );
    SET_PLAYER_CONTROL( sub_4719(), 1 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_4041() );
    SET_WIDESCREEN_BORDERS( 0 );
    ADD_BLIP_FOR_COORD( l_U591._fU0, l_U591._fU4, l_U591._fU8, ref l_U649 );
    SET_ROUTE( l_U649, 1 );
    SWITCH_RANDOM_TRAINS( 0 );
    DELETE_ALL_TRAINS();
    CLEAR_AREA( 1044.83900000, -569.15880000, 23.00000000, 10.00000000, 1 );
    SETTIMERA( 0 );
    LOAD_SCENE( 1061.03700000, -561.03700000, 14.00000000 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    DO_SCREEN_FADE_IN( 500 );
    PRINT_NOW( "VL3A_4", 7500, 1 );
    l_U556++;
    return;
}

void sub_5495()
{
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_4041(), l_U597._fU0, l_U597._fU4, l_U597._fU8, 250, 250, 100, 0 ))
    {
        sub_5555();
    }
    switch (l_U561)
    {
        case 0:
        if (NOT l_U581)
        {
            if (TIMERA() > 2000)
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_4041(), l_U591._fU0, l_U591._fU4, l_U591._fU8, 2.50000000, 9.00000000, 2.50000000, 1 ))
                {
                    PRINT_NOW( "VL3A_5", 7500, 1 );
                    REMOVE_BLIP( l_U649 );
                    ADD_BLIP_FOR_COORD( l_U606._fU0, l_U606._fU4, l_U606._fU8, ref l_U649 );
                    SETTIMERA( 0 );
                    l_U561++;
                }
                else if (LOCATE_CHAR_ANY_MEANS_3D( sub_4041(), l_U606._fU0, l_U606._fU4, l_U606._fU8, 2.50000000, 2.50000000, 2.50000000, 1 ))
                {
                    sub_7614();
                    l_U561 = 2;
                }
            }
        }
        break;
        case 1:
        if (NOT l_U581)
        {
            if (TIMERA() > 3500)
            {
                PRINT_HELP( "VLA3H_T05" );
                SETTIMERA( 0 );
                l_U561++;
            }
        }
        break;
        case 2:
        if (NOT l_U581)
        {
            if (NOT l_U582)
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_4041(), l_U606._fU0, l_U606._fU4, l_U606._fU8, 2.50000000, 2.50000000, 2.50000000, 1 ))
                {
                    sub_7614();
                }
                if (TIMERA() > 30000)
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_4041(), 1037.64600000, -562.23000000, 33.50000000, 20.00000000, 9.00000000, 3.00000000, 0 ))
                    {
                        PRINT_NOW( "VL3A_7", 7500, 1 );
                        SETTIMERA( 0 );
                    }
                }
            }
        }
        if (l_U582)
        {
            if (NOT (IS_CAR_DEAD( l_U641 )))
            {
                if (NOT l_U583)
                {
                    l_U564 = GET_TIME_TIL_NEXT_STATION( l_U641 );
                    if ((IS_CAR_STOPPED( l_U641 )) AND (l_U564 == 0))
                    {
                        SET_TRAIN_IS_STOPPED_AT_STATION( l_U641 );
                        SET_TRAIN_SPEED( l_U641, 0.00000000 );
                        SET_TRAIN_CRUISE_SPEED( l_U641, 0.00000000 );
                        l_U561++;
                        l_U583 = 1;
                    }
                }
            }
        }
        break;
        case 3:
        if (l_U565 > 0)
        {
            if (TIMERA() > 1000)
            {
                if (NOT sub_8273())
                {
                    if (sub_8313())
                    {
                        SETTIMERA( 81000 );
                        l_U565 = 3;
                        l_U570 = 1;
                    }
                }
            }
        }
        switch (l_U565)
        {
            case 0:
            if (IS_CHAR_IN_ANY_CAR( sub_4041() ))
            {
                GET_CAR_CHAR_IS_USING( sub_4041(), ref l_U642 );
                if (IS_VEH_DRIVEABLE( l_U642 ))
                {
                    if (IS_CHAR_IN_CAR( sub_4041(), l_U642 ))
                    {
                        if (IS_CAR_MODEL( l_U642, 800869680 ))
                        {
                            l_U570 = 0;
                            REMOVE_BLIP( l_U649 );
                            SET_PLAYER_CONTROL( sub_4719(), 0 );
                            SET_WIDESCREEN_BORDERS( 1 );
                            BEGIN_CAM_COMMANDS( ref l_U558 );
                            CREATE_CAM( 14, ref l_U650 );
                            SET_CAM_POS( l_U650, 1080.79600000, -563.84190000, 25.12686000 );
                            SET_CAM_ROT( l_U650, 1.62950100, -0.00000000, 117.09010000 );
                            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                            SET_CAM_ACTIVE( l_U650, 1 );
                            SET_CAM_PROPAGATE( l_U650, 1 );
                            sub_8730();
                            PRINT_HELP( "VLA3H_T01" );
                            SETTIMERA( 0 );
                            SETTIMERB( 0 );
                            l_U565++;
                        }
                    }
                }
            }
            else if (NOT (IS_CAR_DEAD( l_U641 )))
            {
                if ((IS_CHAR_IN_AREA_3D( sub_4041(), 1076.41400000, -567.56020000, 22.00000000, 1037.90000000, -560.86000000, 26.68000000, 0 )) AND (IS_CHAR_ON_FOOT( sub_4041() )))
                {
                    if (NOT l_U584)
                    {
                        PRINT_HELP_FOREVER( "VLA3H_T04" );
                        l_U584 = 1;
                    }
                    else if (IS_CHAR_GETTING_IN_TO_A_CAR( sub_4041() ))
                    {
                        CLEAR_HELP();
                    }
                }
                else if (l_U584)
                {
                    CLEAR_HELP();
                    l_U584 = 0;
                }
            }
            break;
            case 1:
            if (TIMERA() > 6000)
            {
                if (NOT (IS_CAR_DEAD( l_U641 )))
                {
                    TRAIN_LEAVE_STATION( l_U641 );
                    SET_TRAIN_CRUISE_SPEED( l_U641, 20.00000000 );
                    SET_TRAIN_STOPS_FOR_STATIONS( l_U641, 0 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    SET_CAM_BEHIND_PED( sub_4041() );
                    PRINT_HELP( "VLA3H_T03" );
                    l_U565++;
                }
            }
            break;
            case 2:
            if (TIMERA() > 11000)
            {
                PRINT_HELP( "VLA3H_T02" );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                SET_PLAYER_CONTROL( sub_4719(), 1 );
                l_U565++;
                SETTIMERA( 0 );
            }
            break;
            case 3:
            if (TIMERA() > 25000)
            {
                CLEAR_HELP();
                DO_SCREEN_FADE_OUT( 1000 );
                SETTIMERB( 0 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                END_CAM_COMMANDS( ref l_U558 );
                l_U588 = 1;
                sub_5555();
                if (NOT l_U570)
                {
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                }
                DO_SCREEN_FADE_IN( 500 );
                l_U581 = 0;
            }
            break;
        }
        break;
    }
    return;
}

void sub_5555()
{
    int I;

    REQUEST_MODEL( -344943009 );
    REQUEST_MODEL( -1552214124 );
    REQUEST_MODEL( 1223224881 );
    REQUEST_ANIMS( "melee_player_unarmed" );
    REQUEST_ANIMS( "melee_unarmed_base" );
    # -sub_C1FFC0-0xc214c8( 2, ref l_U654 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U653 );
    if (l_U588)
    {
        LOAD_ALL_OBJECTS_NOW();
    }
    if ((sub_5704( sub_4041() )) AND (IS_SCREEN_FADED_OUT()))
    {
        LOAD_ALL_OBJECTS_NOW();
    }
    while (((((NOT (HAS_MODEL_LOADED( -344943009 ))) || (NOT (HAS_MODEL_LOADED( -1552214124 )))) || (NOT (HAS_MODEL_LOADED( 1223224881 )))) || (NOT (HAVE_ANIMS_LOADED( "melee_player_unarmed" )))) || (NOT (HAVE_ANIMS_LOADED( "melee_unarmed_base" ))))
    {
        WAIT( 0 );
    }
    SUPPRESS_CAR_MODEL( -344943009 );
    SUPPRESS_PED_MODEL( -1552214124 );
    SUPPRESS_PED_MODEL( 1223224881 );
    if (l_U588)
    {
        LOAD_SCENE( l_U594._fU0, l_U594._fU4, l_U594._fU8 );
        if (IS_CHAR_IN_ANY_CAR( sub_4041() ))
        {
            WARP_CHAR_FROM_CAR_TO_COORD( sub_4041(), l_U594._fU0, l_U594._fU4, l_U594._fU8 );
        }
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_4041() );
        SET_PLAYER_CONTROL( sub_4719(), 1 );
        CLEAR_AREA( l_U597._fU0, l_U597._fU4, l_U597._fU8, 10.00000000, 1 );
        SET_CHAR_HEADING( sub_4041(), 161.40090000 );
    }
    CLEAR_AREA( l_U594._fU0, l_U594._fU4, l_U594._fU8, 2.00000000, 1 );
    REMOVE_BLIP( l_U649 );
    CREATE_CAR( -344943009, l_U597._fU0, l_U597._fU4, l_U597._fU8, ref l_U640, 1 );
    for ( I = 1; I <= 9; I++ )
    {
        TURN_OFF_VEHICLE_EXTRA( l_U640, I, 1 );
    }
    TURN_OFF_VEHICLE_EXTRA( l_U640, 4, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U640, 6, 0 );
    CHANGE_CAR_COLOUR( l_U640, 14, 1 );
    SET_CAR_HEADING( l_U640, 223 );
    ADD_UPSIDEDOWN_CAR_CHECK( l_U640 );
    SET_VEHICLE_DIRT_LEVEL( l_U640, 15.90000000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U640 );
    CREATE_CHAR( 26, -1552214124, 1194.13700000, 816.33330000, 34.97010000, ref l_U643[0], 1 );
    SET_CHAR_HEADING( l_U643[0], 66.62550000 );
    SET_CHAR_DECISION_MAKER( l_U643[0], l_U654 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U643[0], 23 );
    SET_COMBAT_DECISION_MAKER( l_U643[0], l_U653 );
    SET_CHAR_RELATIONSHIP( l_U643[0], 0, 23 );
    sub_4090( 1, l_U643[0], "JIMMY", 0 );
    SET_CHAR_IS_TARGET_PRIORITY( l_U643[0], 1 );
    UNLOCK_RAGDOLL( l_U643[0], 1 );
    SET_CHAR_READY_TO_BE_STUNNED( l_U643[0], 1 );
    TASK_PLAY_ANIM_WITH_ADVANCED_FLAGS( l_U643[0], "carwash_a", "MISSVLAD3", 8.00000000, 1, 0, 0, 0, 0, 1, 1, -1 );
    CLEAR_AREA( 1201.60600000, 809.79030000, 35.11940000, 10.00000000, 1 );
    CREATE_CHAR( 26, 1223224881, 1197.39100000, 820.21610000, 35.12050000, ref l_U643[1], 1 );
    SET_CHAR_HEADING( l_U643[1], 100.00000000 );
    SET_CHAR_DECISION_MAKER( l_U643[1], l_U654 );
    sub_4090( 2, l_U643[1], "JIMMY_FRIEND", 0 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U643[1], 23 );
    SET_COMBAT_DECISION_MAKER( l_U643[1], l_U653 );
    SET_CHAR_RELATIONSHIP( l_U643[1], 0, 23 );
    UNLOCK_RAGDOLL( l_U643[1], 1 );
    SET_CHAR_READY_TO_BE_STUNNED( l_U643[1], 1 );
    if (l_U588)
    {
        sub_7007();
        if (NOT (IS_CAR_DEAD( l_U641 )))
        {
            SET_MISSION_TRAIN_COORDINATES( l_U641, 1259.88300000, 757.39310000, 48.69820000 );
            SET_TRAIN_IS_STOPPED_AT_STATION( l_U641 );
            SET_TRAIN_SPEED( l_U641, 0.00000000 );
            SET_TRAIN_CRUISE_SPEED( l_U641, 0.00000000 );
        }
        DESTROY_CAM( l_U650 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        SET_WIDESCREEN_BORDERS( 0 );
        WAIT( 0 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_4041() );
        SET_CAM_BEHIND_PED( sub_4041() );
        DELETE_MISSION_TRAIN( l_U641 );
        CLEAR_WANTED_LEVEL( sub_4719() );
    }
    REMOVE_BLIP( l_U648 );
    ADD_BLIP_FOR_CAR( l_U640, ref l_U648 );
    SET_ROUTE( l_U648, 1 );
    SET_BLIP_AS_FRIENDLY( l_U648, 1 );
    PRINT_NOW( "VL3A_0", 7500, 1 );
    SWITCH_RANDOM_TRAINS( 1 );
    l_U577 = 1;
    MARK_MODEL_AS_NO_LONGER_NEEDED( 800869680 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1159759556 );
    l_U556 = 2;
    return;
}

int sub_5704(int iParam0)
{
    unknown uVar3;
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( iParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( iParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0, ref uVar3 );
            if (IS_VEH_DRIVEABLE( uVar3 ))
            {
                if (sub_5768( uVar3 ))
                {
                    GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar3, ref iVar5 );
                    if (iVar5 == 3)
                    {
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar3, 1 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar3, 1, ref iVar4 );
                            if (iVar4 == iParam0)
                            {
                                return 1;
                            }
                        }
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar3, 2 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar3, 2, ref iVar4 );
                            if (iVar4 == iParam0)
                            {
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_5768(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2239))
    {
        return 1;
    }
    return 0;
}

void sub_7007()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_7614()
{
    if (NOT l_U582)
    {
        PRINT_NOW( "VL3A_5B", 7500, 1 );
        CREATE_MISSION_TRAIN( 1, 908.49870000, -532.66370000, 24.49420000, 0, ref l_U641 );
        SET_TRAIN_STOPS_FOR_STATIONS( l_U641, 1 );
        SET_TRAIN_SPEED( l_U641, 10.00000000 );
        SET_TRAIN_CRUISE_SPEED( l_U641, 10.00000000 );
        REMOVE_BLIP( l_U649 );
        if (NOT (IS_CAR_DEAD( l_U641 )))
        {
            ADD_BLIP_FOR_CAR( l_U641, ref l_U649 );
            SET_BLIP_AS_FRIENDLY( l_U649, 1 );
        }
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, l_U641, 7000 );
        l_U582 = 1;
    }
    return;
}

int sub_8273()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_8313()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_8730()
{
    return sub_8741( 1, 1 );
}

int sub_8741(boolean bParam0, unknown uParam1)
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

void sub_9406()
{
    if (IS_PLAYER_PLAYING( sub_4719() ))
    {
        if (NOT (IS_CAR_DEAD( l_U640 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U643[0] )))
            {
                sub_9478( ref l_U643[0] );
            }
            if (NOT (IS_CHAR_INJURED( l_U643[1] )))
            {
                sub_9478( ref l_U643[1] );
                if (NOT l_U576)
                {
                    sub_10436( l_U643[1] );
                }
            }
            if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_4041(), l_U640, 9.00000000, 9.00000000, 5.00000000, 0 ))
            {
                switch (l_U559)
                {
                    case 0:
                    SETTIMERB( 0 );
                    l_U559++;
                    break;
                    case 1:
                    if (NOT (IS_CHAR_IN_ANY_CAR( sub_4041() )))
                    {
                        if (TIMERB() > 1000)
                        {
                            if (NOT (IS_CHAR_INJURED( l_U643[0] )))
                            {
                                if (NOT sub_23690())
                                {
                                    if (sub_23735( "V3_ARR", ref l_U655, 7, 1 ))
                                    {
                                        l_U559++;
                                    }
                                }
                            }
                        }
                    }
                    break;
                    case 2:
                    if (TIMERB() > 2500)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U643[0] )))
                        {
                            CLEAR_CHAR_TASKS( l_U643[0] );
                            TASK_TURN_CHAR_TO_FACE_CHAR( l_U643[0], sub_4041() );
                            TASK_LOOK_AT_CHAR( l_U643[0], sub_4041(), -2, 0 );
                            SETTIMERB( 0 );
                            SETTIMERA( 0 );
                            l_U559++;
                        }
                    }
                    break;
                    case 3:
                    if (TIMERB() > 500)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U643[1] )))
                        {
                            TASK_LOOK_AT_CHAR( l_U643[1], sub_4041(), -2, 0 );
                            l_U559++;
                        }
                    }
                    break;
                }
            }
            if (NOT l_U576)
            {
                if (IS_VEH_DRIVEABLE( l_U640 ))
                {
                    if ((NOT (LOCATE_CAR_3D( l_U640, l_U597._fU0, l_U597._fU4, l_U597._fU8, 0.50000000, 0.50000000, 2.00000000, 0 ))) || (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U640, sub_4041() )))
                    {
                        sub_25027();
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U643[0] )))
                {
                    if ((sub_10026( ref l_U643[0] )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U643[0], sub_4041(), 0 )))
                    {
                        sub_25027();
                    }
                    if (l_U559 > 2)
                    {
                        if (TIMERA() > 8000)
                        {
                            if (l_U578 == 0)
                            {
                                PRINT_HELP( "VL3_STUNP1" );
                                l_U578 = 1;
                            }
                        }
                        if (TIMERA() > 15000)
                        {
                            if (l_U579 == 0)
                            {
                                PRINT_HELP( "VL3_STUNP2" );
                                l_U579 = 1;
                            }
                        }
                        if (TIMERB() > 4000)
                        {
                            TASK_TURN_CHAR_TO_FACE_CHAR( l_U643[0], sub_4041() );
                            SETTIMERB( 0 );
                        }
                    }
                }
                else
                {
                    sub_25027();
                }
                if (NOT (IS_CHAR_INJURED( l_U643[1] )))
                {
                    if ((sub_10026( ref l_U643[1] )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U643[1], sub_4041(), 0 )))
                    {
                        sub_25027();
                    }
                }
                else
                {
                    sub_25027();
                }
            }
            if (IS_CHAR_IN_CAR( sub_4041(), l_U640 ))
            {
                sub_25027();
                LOCK_CAR_DOORS( l_U640, 2 );
                SETTIMERA( 0 );
                SETTIMERB( 0 );
                l_U556++;
            }
        }
    }
    return;
}

void sub_9478(unknown uParam0)
{
    int I;
    float fVar4;

    if ((NOT (IS_CHAR_INJURED( (uParam0^) ))) AND (NOT (IS_CHAR_INJURED( sub_4041() ))))
    {
        if (GET_CHAR_MELEE_ACTION_FLAG1( (uParam0^) ))
        {
            SET_CHAR_MELEE_ACTION_FLAG1( (uParam0^), 0 );
            SET_CHAR_READY_TO_BE_STUNNED( (uParam0^), 0 );
            for ( I = 0; I <= 1; I++ )
            {
                if (l_U489[I] == nil)
                {
                    l_U489[I] = (uParam0^);
                }
            }
            SETTIMERA( 0 );
        }
        for ( I = 0; I <= 1; I++ )
        {
            if (NOT (l_U489[I] == nil))
            {
                if (NOT (IS_CHAR_INJURED( l_U489[I] )))
                {
                    if (TIMERA() > 200)
                    {
                        TRIGGER_PTFX_ON_PED_BONE( "blood_stun_punch", l_U489[I], 0.00000000, 0.13000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1205, 1 );
                        SET_CHAR_HEALTH( l_U489[I], 99 );
                        l_U489[I] = nil;
                    }
                    if (IS_CHAR_PLAYING_ANIM( l_U489[I], "MELEE_UNARMED_BASE", "Hit_Jab" ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( l_U489[I], "MELEE_UNARMED_BASE", "Hit_Jab", ref fVar4 );
                        if (fVar4 > 0.10000000)
                        {
                            TRIGGER_PTFX_ON_PED_BONE( "blood_stun_punch", l_U489[I], 0.00000000, 0.13000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1205, 1 );
                            SET_CHAR_HEALTH( l_U489[I], 99 );
                            l_U489[I] = nil;
                        }
                    }
                }
                else
                {
                    l_U489[I] = nil;
                }
            }
        }
    }
    sub_10026( uParam0 );
    return;
}

int sub_10026(unknown uParam0)
{
    boolean bVar3;

    bVar3 = false;
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (GET_CHAR_READY_TO_BE_STUNNED( (uParam0^) ))
        {
            if (HAVE_ANIMS_LOADED( "melee_unarmed_base" ))
            {
                if ((IS_PED_IN_COMBAT( (uParam0^) )) AND (NOT (IS_CHAR_PLAYING_ANIM( sub_4041(), "melee_unarmed_base", "stun_punch" ))))
                {
                    bVar3 = true;
                }
                if ((IS_CHAR_IN_MELEE_COMBAT( (uParam0^) )) AND (NOT (IS_CHAR_PLAYING_ANIM( sub_4041(), "melee_unarmed_base", "stun_punch" ))))
                {
                    bVar3 = true;
                }
            }
            if ((IS_PLAYER_TARGETTING_CHAR( sub_4719(), (uParam0^) )) AND (IS_CHAR_ARMED( (uParam0^), 4 )))
            {
                bVar3 = true;
            }
            if ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_4719(), (uParam0^) )) AND (IS_CHAR_ARMED( (uParam0^), 4 )))
            {
                bVar3 = true;
            }
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam0^), sub_4041(), 0 ))
            {
                bVar3 = true;
            }
        }
    }
    if (bVar3)
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_CHAR_READY_TO_BE_STUNNED( (uParam0^), 0 );
            return 1;
        }
    }
    return 0;
}

void sub_10436(unknown uParam0)
{
    float fVar3;
    unknown uVar4;

    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            if ((NOT IS_MINIGAME_IN_PROGRESS()) || (g_U9180))
            {
                GET_FRAME_TIME( ref fVar3 );
                l_U503 += fVar3 * 1000.00000000;
                l_U504 += fVar3 * 1000.00000000;
                l_U507 += fVar3 * 1000.00000000;
                sub_10560( uParam0 );
                if (l_U499)
                {
                    if (HAVE_ANIMS_LOADED( l_U524 ))
                    {
                        if (((NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U524, l_U525 ))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U524, l_U526 )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U524, l_U527 ))))
                        {
                            sub_20532( uParam0, 0 );
                            l_U499 = 0;
                        }
                    }
                    else
                    {
                        sub_20532( uParam0, 0 );
                        l_U499 = 0;
                    }
                }
                switch (l_U512)
                {
                    case 0:
                    if (NOT (sub_20641( uParam0 )))
                    {
                        l_U504 = 0.00000000;
                    }
                    if (l_U496)
                    {
                        sub_21574( uParam0 );
                    }
                    if (l_U504 > 10000.00000000)
                    {
                        if (NOT (HAVE_ANIMS_LOADED( l_U524 )))
                        {
                            REQUEST_ANIMS( l_U524 );
                        }
                        if (NOT (HAS_MODEL_LOADED( -785338897 )))
                        {
                            REQUEST_MODEL( -785338897 );
                        }
                        if (HAVE_ANIMS_LOADED( l_U524 ))
                        {
                            if ((NOT (IS_CHAR_IN_ANY_CAR( uParam0 ))) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( uParam0 ))))
                            {
                                sub_20532( uParam0, 1 );
                                TASK_CLEAR_LOOK_AT( uParam0 );
                                TASK_PLAY_ANIM_WITH_FLAGS( uParam0, l_U525, l_U524, 8.00000000, -1, 3328 );
                                l_U499 = 1;
                                l_U503 = 0.00000000;
                                l_U512 = 1;
                            }
                            else
                            {
                                sub_21574( uParam0 );
                                l_U503 = 0.00000000;
                                l_U512 = 1;
                            }
                        }
                    }
                    else if (HAVE_ANIMS_LOADED( l_U524 ))
                    {
                        REMOVE_ANIMS( l_U524 );
                    }
                    if (HAS_MODEL_LOADED( -785338897 ))
                    {
                        MARK_MODEL_AS_NO_LONGER_NEEDED( -785338897 );
                    }
                    break;
                    case 1:
                    if (sub_20652( uParam0 ))
                    {
                        if (NOT (HAVE_ANIMS_LOADED( l_U524 )))
                        {
                            REQUEST_ANIMS( l_U524 );
                        }
                        if (NOT (HAS_MODEL_LOADED( -785338897 )))
                        {
                            REQUEST_MODEL( -785338897 );
                        }
                        if (DOES_OBJECT_EXIST( l_U521 ))
                        {
                            if (HAVE_ANIMS_LOADED( l_U524 ))
                            {
                                if ((((((((NOT (IS_PED_RAGDOLL( uParam0 ))) AND (NOT (IS_CHAR_DUCKING( uParam0 )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U524, l_U525 )))) AND (NOT (IS_CHAR_GESTURING( uParam0 )))) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( uParam0 )))) AND (NOT (sub_22355( uParam0 )))) AND (NOT (IS_AMBIENT_SPEECH_PLAYING( uParam0 )))) AND (NOT (IS_SCRIPTED_SPEECH_PLAYING( uParam0 ))))
                                {
                                    if (l_U503 > 20000.00000000)
                                    {
                                        TASK_CLEAR_LOOK_AT( uParam0 );
                                        sub_20532( uParam0, 1 );
                                        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
                                        {
                                            TASK_PLAY_ANIM_WITH_FLAGS( uParam0, l_U526, l_U524, 8.00000000, -1, 3328 );
                                        }
                                        else
                                        {
                                            TASK_PLAY_ANIM_WITH_FLAGS( uParam0, l_U527, l_U524, 8.00000000, -1, 3328 );
                                        }
                                        l_U499 = 1;
                                        l_U503 = 0.00000000;
                                    }
                                }
                            }
                            if (NOT l_U497)
                            {
                                if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
                                {
                                    if (HAVE_ANIMS_LOADED( l_U524 ))
                                    {
                                        if (IS_CHAR_PLAYING_ANIM( uParam0, l_U524, l_U525 ))
                                        {
                                            GET_CHAR_ANIM_CURRENT_TIME( uParam0, l_U524, l_U525, ref fVar3 );
                                            if (fVar3 > l_U506)
                                            {
                                                l_U513 = START_PTFX_ON_OBJ( "ambient_cig_smoke", l_U521, l_U534, l_U537, 1065353216 );
                                                l_U497 = 1;
                                            }
                                        }
                                        else
                                        {
                                            l_U513 = START_PTFX_ON_OBJ( "ambient_cig_smoke", l_U521, l_U534, l_U537, 1065353216 );
                                            l_U497 = 1;
                                        }
                                    }
                                }
                                else
                                {
                                    STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar4 );
                                    if (DOES_VEHICLE_EXIST( uVar4 ))
                                    {
                                        if (NOT (IS_CAR_DEAD( uVar4 )))
                                        {
                                            if (NOT (DOES_CAR_HAVE_ROOF( uVar4 )))
                                            {
                                                if (NOT (sub_22861( uParam0 )))
                                                {
                                                    l_U513 = START_PTFX_ON_OBJ( "ambient_cig_smoke", l_U521, l_U534, l_U537, 1065353216 );
                                                    l_U497 = 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            else if ((sub_10799( uParam0 )) || (sub_22861( uParam0 )))
                            {
                                sub_10672( ref l_U513 );
                                l_U497 = 0;
                            }
                        }
                        else if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
                        {
                            if (HAVE_ANIMS_LOADED( l_U524 ))
                            {
                                if (IS_CHAR_PLAYING_ANIM( uParam0, l_U524, l_U525 ))
                                {
                                    GET_CHAR_ANIM_CURRENT_TIME( uParam0, l_U524, l_U525, ref fVar3 );
                                    if (NOT (DOES_OBJECT_EXIST( l_U521 )))
                                    {
                                        if (fVar3 > l_U505)
                                        {
                                            sub_21574( uParam0 );
                                        }
                                    }
                                }
                                else
                                {
                                    sub_21574( uParam0 );
                                }
                            }
                        }
                        else
                        {
                            sub_21574( uParam0 );
                        }
                        if (sub_22355( uParam0 ))
                        {
                            CLEAR_CHAR_SECONDARY_TASK( uParam0 );
                        }
                    }
                    else
                    {
                        l_U512 = 0;
                        l_U504 = 0.00000000;
                    }
                    break;
                }
            }
            else
            {
                sub_20688( uParam0, 0 );
                if (l_U501)
                {
                    PRINTSTRING( "REMOVE_SPLIFF - 4 \n" );
                }
            }
        }
        else
        {
            sub_20688( uParam0, 1 );
            if (l_U501)
            {
                PRINTSTRING( "REMOVE_SPLIFF - 5 \n" );
            }
        }
    }
    else
    {
        sub_20688( uParam0, 0 );
        if (l_U501)
        {
            PRINTSTRING( "REMOVE_SPLIFF - 6 \n" );
        }
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (DOES_OBJECT_EXIST( l_U521 ))
        {
            if (HAVE_ANIMS_LOADED( l_U524 ))
            {
                if (((IS_CHAR_PLAYING_ANIM( uParam0, l_U524, l_U525 )) || (IS_CHAR_PLAYING_ANIM( uParam0, l_U524, l_U526 ))) || (IS_CHAR_PLAYING_ANIM( uParam0, l_U524, l_U527 )))
                {
                    BLOCK_CHAR_HEAD_IK( uParam0, 1 );
                }
            }
        }
    }
    return;
}

void sub_10560(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    float fVar7;
    int I;
    int iVar9;

    if ((NOT (IS_CHAR_INJURED( uParam0 ))) AND (IS_PLAYER_PLAYING( sub_4719() )))
    {
        switch (l_U514)
        {
            case 0:
            for ( I = 0; I < 4; I++ )
            {
                sub_10672( ref l_U516[I] );
            }
            if (DOES_OBJECT_EXIST( l_U522 ))
            {
                DELETE_OBJECT( ref l_U522 );
            }
            if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
            {
                if (sub_10799( uParam0 ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref l_U555 );
                    if (DOES_VEHICLE_EXIST( l_U555 ))
                    {
                        if (NOT (IS_CAR_DEAD( l_U555 )))
                        {
                            if (NOT (sub_10981( l_U555 )))
                            {
                                l_U514 = 1;
                                l_U507 = 0.00000000;
                            }
                            else
                            {
                                l_U507 = 0.00000000;
                            }
                        }
                        else
                        {
                            l_U507 = 0.00000000;
                        }
                    }
                    else
                    {
                        l_U507 = 0.00000000;
                    }
                }
                else
                {
                    l_U507 = 0.00000000;
                }
            }
            else
            {
                l_U507 = 0.00000000;
            }
            break;
            case 1:
            if (DOES_OBJECT_EXIST( l_U521 ))
            {
                if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref l_U555 );
                    if (DOES_VEHICLE_EXIST( l_U555 ))
                    {
                        if (sub_11167( l_U555 ))
                        {
                            l_U514 = 2;
                            l_U507 = 0.00000000;
                            l_U511 = 0.00000000;
                        }
                        else
                        {
                            l_U514 = 4;
                            l_U507 = 0.00000000;
                        }
                    }
                    else
                    {
                        l_U514 = 0;
                        l_U507 = 0.00000000;
                    }
                }
                else
                {
                    l_U514 = 0;
                    l_U507 = 0.00000000;
                }
            }
            break;
            case 2:
            if (DOES_OBJECT_EXIST( l_U521 ))
            {
                if (DOES_VEHICLE_EXIST( l_U555 ))
                {
                    if (NOT (IS_CAR_DEAD( l_U555 )))
                    {
                        if (NOT (sub_11167( l_U555 )))
                        {
                            l_U514 = 3;
                            l_U507 = 0.00000000;
                            if (l_U511 < 0.10000000)
                            {
                                l_U511 = 0.10000000;
                            }
                        }
                        else if (NOT (IS_CHAR_IN_CAR( uParam0, l_U555 )))
                        {
                            l_U514 = 0;
                            l_U507 = 0.00000000;
                            if (DOES_OBJECT_EXIST( l_U522 ))
                            {
                                DELETE_OBJECT( ref l_U522 );
                            }
                        }
                        if ((NOT (DOES_OBJECT_EXIST( l_U522 ))) AND (l_U502))
                        {
                            GET_CAR_COORDINATES( l_U555, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                            CREATE_OBJECT( -735018886, uVar4._fU0, uVar4._fU4, uVar4._fU8, ref l_U522, 1 );
                            SET_OBJECT_COLLISION( l_U522, 0 );
                            ATTACH_OBJECT_TO_CAR( l_U522, l_U555, 0, l_U549, 0.00000000, 0.00000000, 0.00000000 );
                        }
                        else
                        {
                            l_U511 = l_U507 / l_U508;
                            if (l_U511 > 1.00000000)
                            {
                                l_U511 = 1.00000000;
                            }
                            l_U515 = ROUND( 255.00000000 * l_U511 );
                            if (l_U502)
                            {
                                SET_OBJECT_ALPHA( l_U522, l_U515 );
                            }
                        }
                    }
                    else
                    {
                        l_U514 = 0;
                        l_U507 = 0.00000000;
                    }
                }
                else
                {
                    l_U514 = 0;
                    l_U507 = 0.00000000;
                }
            }
            else
            {
                l_U514 = 0;
                l_U507 = 0.00000000;
            }
            break;
            case 3:
            if (DOES_VEHICLE_EXIST( l_U555 ))
            {
                if (NOT (IS_CAR_DEAD( l_U555 )))
                {
                    if (NOT (sub_10684( l_U516[0] )))
                    {
                        if (sub_11222( l_U555, 0 ))
                        {
                            if (sub_12226( l_U555, 0, ref uVar4 ))
                            {
                                l_U516[0] = START_PTFX_ON_VEH( "smoke_filled_car", l_U555, uVar4, l_U546._fU0, l_U546._fU4, l_U546._fU8, 1065353216 );
                            }
                        }
                    }
                    else if (NOT (sub_11222( l_U555, 0 )))
                    {
                        sub_10672( ref l_U516[0] );
                    }
                    if (NOT (sub_10684( l_U516[1] )))
                    {
                        if (sub_11222( l_U555, 1 ))
                        {
                            if (sub_12226( l_U555, 1, ref uVar4 ))
                            {
                                l_U516[1] = START_PTFX_ON_VEH( "smoke_filled_car", l_U555, uVar4, l_U546._fU0, l_U546._fU4, l_U546._fU8 * -1.00000000, 1065353216 );
                            }
                        }
                    }
                    else if (NOT (sub_11222( l_U555, 1 )))
                    {
                        sub_10672( ref l_U516[1] );
                    }
                    if (NOT (sub_10684( l_U516[2] )))
                    {
                        if (sub_11222( l_U555, 2 ))
                        {
                            if (sub_12226( l_U555, 2, ref uVar4 ))
                            {
                                l_U516[2] = START_PTFX_ON_VEH( "smoke_filled_car", l_U555, uVar4, l_U546._fU0, l_U546._fU4, l_U546._fU8, 1065353216 );
                            }
                        }
                    }
                    else if (NOT (sub_11222( l_U555, 2 )))
                    {
                        sub_10672( ref l_U516[2] );
                    }
                    if (NOT (sub_10684( l_U516[3] )))
                    {
                        if (sub_11222( l_U555, 3 ))
                        {
                            if (sub_12226( l_U555, 3, ref uVar4 ))
                            {
                                l_U516[3] = START_PTFX_ON_VEH( "smoke_filled_car", l_U555, uVar4, l_U546._fU0, l_U546._fU4, l_U546._fU8 * -1.00000000, 1065353216 );
                            }
                        }
                    }
                    else if (NOT (sub_11222( l_U555, 3 )))
                    {
                        sub_10672( ref l_U516[3] );
                    }
                    l_U510 = l_U507 / (l_U509 * l_U511);
                    if (l_U510 > 1.00000000)
                    {
                        l_U510 = 1.00000000;
                    }
                    for ( I = 0; I < 4; I++ )
                    {
                        if (sub_10684( l_U516[I] ))
                        {
                            EVOLVE_PTFX( l_U516[I], "fade", l_U510 );
                        }
                    }
                    if (l_U502)
                    {
                        if (DOES_OBJECT_EXIST( l_U522 ))
                        {
                            fVar7 = 1.00000000 - l_U510;
                            l_U515 = ROUND( 255.00000000 * fVar7 );
                            SET_OBJECT_ALPHA( l_U522, l_U515 );
                        }
                    }
                    if (l_U507 > (l_U509 * l_U511))
                    {
                        for ( I = 0; I < 4; I++ )
                        {
                            sub_10672( ref l_U516[I] );
                        }
                        l_U514 = 0;
                        l_U507 = 0.00000000;
                    }
                    if ((((NOT (sub_10684( l_U516[0] ))) AND (NOT (sub_10684( l_U516[1] )))) AND (NOT (sub_10684( l_U516[2] )))) AND (NOT (sub_10684( l_U516[3] ))))
                    {
                        l_U514 = 0;
                        l_U507 = 0.00000000;
                    }
                }
                else
                {
                    l_U514 = 0;
                    l_U507 = 0.00000000;
                }
            }
            else
            {
                l_U514 = 0;
                l_U507 = 0.00000000;
            }
            break;
            case 4:
            if (DOES_VEHICLE_EXIST( l_U555 ))
            {
                if (NOT (IS_CAR_DEAD( l_U555 )))
                {
                    if (l_U507 > 1000.00000000)
                    {
                        if (NOT (sub_10684( l_U516[0] )))
                        {
                            if (sub_11222( l_U555, 0 ))
                            {
                                if (sub_12226( l_U555, 0, ref uVar4 ))
                                {
                                    l_U516[0] = START_PTFX_ON_VEH( "smoke_filled_car", l_U555, uVar4, l_U546._fU0, l_U546._fU4, l_U546._fU8, 1065353216 );
                                }
                            }
                        }
                        else if (NOT (sub_11222( l_U555, 0 )))
                        {
                            sub_10672( ref l_U516[0] );
                        }
                        if (NOT (sub_10684( l_U516[1] )))
                        {
                            if (sub_11222( l_U555, 1 ))
                            {
                                if (sub_12226( l_U555, 1, ref uVar4 ))
                                {
                                    l_U516[1] = START_PTFX_ON_VEH( "smoke_filled_car", l_U555, uVar4, l_U546._fU0, l_U546._fU4, l_U546._fU8 * -1.00000000, 1065353216 );
                                }
                            }
                        }
                        else if (NOT (sub_11222( l_U555, 1 )))
                        {
                            sub_10672( ref l_U516[1] );
                        }
                        if (NOT (sub_10684( l_U516[2] )))
                        {
                            if (sub_11222( l_U555, 2 ))
                            {
                                if (sub_12226( l_U555, 2, ref uVar4 ))
                                {
                                    l_U516[2] = START_PTFX_ON_VEH( "smoke_filled_car", l_U555, uVar4, l_U546._fU0, l_U546._fU4, l_U546._fU8, 1065353216 );
                                }
                            }
                        }
                        else if (NOT (sub_11222( l_U555, 2 )))
                        {
                            sub_10672( ref l_U516[2] );
                        }
                        if (NOT (sub_10684( l_U516[3] )))
                        {
                            if (sub_11222( l_U555, 3 ))
                            {
                                if (sub_12226( l_U555, 3, ref uVar4 ))
                                {
                                    l_U516[3] = START_PTFX_ON_VEH( "smoke_filled_car", l_U555, uVar4, l_U546._fU0, l_U546._fU4, l_U546._fU8 * -1.00000000, 1065353216 );
                                }
                            }
                        }
                        else if (NOT (sub_11222( l_U555, 3 )))
                        {
                            sub_10672( ref l_U516[3] );
                        }
                        iVar9 = 0;
                        for ( I = 0; I < 4; I++ )
                        {
                            if (sub_10684( l_U516[I] ))
                            {
                                iVar9++;
                            }
                        }
                        l_U510 = 1.00000000 / (TO_FLOAT( iVar9 ));
                        for ( I = 0; I < 4; I++ )
                        {
                            if (sub_10684( l_U516[I] ))
                            {
                                EVOLVE_PTFX( l_U516[I], "fade", l_U510 );
                            }
                        }
                        if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
                        {
                            for ( I = 0; I < 4; I++ )
                            {
                                sub_10672( ref l_U516[I] );
                            }
                            l_U514 = 0;
                            l_U507 = 0.00000000;
                        }
                        else if ((((NOT (sub_10684( l_U516[0] ))) AND (NOT (sub_10684( l_U516[1] )))) AND (NOT (sub_10684( l_U516[2] )))) AND (NOT (sub_10684( l_U516[3] ))))
                        {
                            l_U514 = 1;
                        }
                    }
                }
                else
                {
                    l_U514 = 0;
                    l_U507 = 0.00000000;
                }
            }
            else
            {
                l_U514 = 0;
                l_U507 = 0.00000000;
            }
            break;
        }
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            if (NOT (IS_CAR_DEAD( uVar3 )))
            {
                if (l_U500)
                {
                    for ( I = 0; I < 4; I++ )
                    {
                        if (sub_12226( uVar3, I, ref uVar4 ))
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar3, uVar4._fU0, uVar4._fU4, uVar4._fU8, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                            LINE( uVar4._fU0, uVar4._fU4, uVar4._fU8, uVar4._fU0, uVar4._fU4, uVar4._fU8 + 1.50000000 );
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_10672(unknown uParam0)
{
    if (sub_10684( (uParam0^) ))
    {
        STOP_PTFX( (uParam0^) );
    }
    (uParam0^) = 0;
    return;
}

int sub_10684(int iParam0)
{
    if (iParam0 > 0)
    {
        return 1;
    }
    return 0;
}

int sub_10799(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            if (NOT (IS_CAR_DEAD( uVar3 )))
            {
                GET_CAR_MODEL( uVar3, ref uVar4 );
                if ((IS_THIS_MODEL_A_CAR( uVar4 )) || (IS_THIS_MODEL_A_HELI( uVar4 )))
                {
                    if (DOES_CAR_HAVE_ROOF( uVar3 ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_10981(unknown uParam0)
{
    unknown uVar3;

    return 0;
}

int sub_11167(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            if (DOES_CAR_HAVE_ROOF( uParam0 ))
            {
                if ((((NOT (sub_11222( uParam0, 0 ))) AND (NOT (sub_11222( uParam0, 1 )))) AND (NOT (sub_11222( uParam0, 2 )))) AND (NOT (sub_11222( uParam0, 3 ))))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_11222(unknown uParam0, unknown uParam1)
{
    float fVar4;
    unknown uVar5;
    int iVar6;
    int iVar7;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_MODEL( uParam0, ref uVar5 );
        if ((NOT (IS_THIS_MODEL_A_BIKE( uVar5 ))) AND (NOT (IS_THIS_MODEL_A_BOAT( uVar5 ))))
        {
            if ((IS_CAR_DOOR_DAMAGED( uParam0, uParam1 )) || (IS_CAR_DOOR_FULLY_OPEN( uParam0, uParam1 )))
            {
                return 1;
            }
            else
            {
                GET_DOOR_ANGLE_RATIO( uParam0, uParam1, ref fVar4 );
                if (fVar4 > 0.10000000)
                {
                    return 1;
                }
                else
                {
                    GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar7 );
                    switch (uParam1)
                    {
                        case 0:
                        if (NOT (IS_VEH_WINDOW_INTACT( uParam0, 0 )))
                        {
                            return 1;
                        }
                        break;
                        case 1:
                        if ((NOT (IS_VEH_WINDOW_INTACT( uParam0, 1 ))) AND (iVar7 >= 1))
                        {
                            return 1;
                        }
                        break;
                        case 2:
                        if ((NOT (IS_VEH_WINDOW_INTACT( uParam0, 2 ))) AND (iVar7 >= 2))
                        {
                            return 1;
                        }
                        break;
                        case 3:
                        iVar6 = 3;
                        if ((NOT (IS_VEH_WINDOW_INTACT( uParam0, 3 ))) AND (iVar7 >= 3))
                        {
                            return 1;
                        }
                        break;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_12226(unknown uParam0, unknown uParam1, int iParam2)
{
    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            sub_12274( uParam0, ref l_U540, ref l_U543 );
            switch (uParam1)
            {
                case 0:
                (iParam2^) = {l_U540._fU0, l_U540._fU4, l_U540._fU8};
                iParam2->_fU0 += l_U552._fU0;
                iParam2->_fU4 += l_U552._fU4;
                iParam2->_fU8 += l_U552._fU8;
                break;
                case 1:
                (iParam2^) = {l_U540._fU0 * -1.00000000, l_U540._fU4, l_U540._fU8};
                iParam2->_fU0 += l_U552._fU0 * -1.00000000;
                iParam2->_fU4 += l_U552._fU4;
                iParam2->_fU8 += l_U552._fU8;
                break;
                case 2:
                (iParam2^) = {l_U543._fU0, l_U543._fU4, l_U543._fU8};
                iParam2->_fU0 += l_U552._fU0;
                iParam2->_fU4 += l_U552._fU4;
                iParam2->_fU8 += l_U552._fU8;
                break;
                case 3:
                (iParam2^) = {l_U543._fU0 * -1.00000000, l_U543._fU4, l_U543._fU8};
                iParam2->_fU0 += l_U552._fU0 * -1.00000000;
                iParam2->_fU4 += l_U552._fU4;
                iParam2->_fU8 += l_U552._fU8;
                break;
            }
            return 1;
        }
    }
    return 0;
}

void sub_12274(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_MODEL( uParam0, ref uVar5 );
        switch (uVar5)
        {
            case 1264341792:
            (uParam1^) = {-0.60750000, -0.19750000, 0.61000000};
            (uParam2^) = {-0.61500000, -0.76750000, 0.61750000};
            break;
            case 1171614426:
            (uParam1^) = {-0.79500000, 0.83250000, 1.27500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1041692462:
            (uParam1^) = {-0.60750000, -0.68250000, 0.61000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 2053223216:
            (uParam1^) = {-0.93500000, 1.85250000, 1.35500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 850991848:
            (uParam1^) = {-0.86000000, 2.01500000, 1.38000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -344943009:
            (uParam1^) = {-0.55500000, -0.26500000, 0.86500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1075851868:
            (uParam1^) = {-0.70250000, 0.24500000, 1.00750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1987130134:
            (uParam1^) = {-1.00500000, 0.82750000, 1.16250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -682211828:
            (uParam1^) = {-0.59250000, -0.05000000, 0.55750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1346687836:
            (uParam1^) = {-0.84750000, 0.73250000, 1.14750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -907477130:
            (uParam1^) = {-0.84750000, 0.73250000, 1.14750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -713569950:
            (uParam1^) = {1.18500000, 4.88500000, 1.47250000};
            (uParam2^) = {1.18250000, -1.84000000, 1.47300000};
            break;
            case 1884962369:
            (uParam1^) = {-0.65000000, 0.21250000, 0.86500000};
            (uParam2^) = {-0.62000000, -0.49250000, 0.91500000};
            break;
            case 2006918058:
            (uParam1^) = {-0.61250000, 0.11000000, 1.02500000};
            (uParam2^) = {-0.60500000, -0.66500000, 1.04250000};
            break;
            case -67282078:
            (uParam1^) = {-0.56750000, -0.14250000, 0.87750000};
            (uParam2^) = {-0.56000000, -0.86250000, 0.86500000};
            break;
            case -2030171296:
            (uParam1^) = {-0.58750000, 0.13750000, 0.88750000};
            (uParam2^) = {-0.56750000, -0.86000000, 0.92000000};
            break;
            case 1063483177:
            (uParam1^) = {-0.49000000, -0.25500000, 0.66750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 108773431:
            (uParam1^) = {-0.52000000, -0.47000000, 0.66750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 162883121:
            (uParam1^) = {-0.62500000, -0.15750000, 0.81500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 723973206:
            (uParam1^) = {-0.62500000, -0.17750000, 0.67250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1130810103:
            (uParam1^) = {-0.51750000, 0.03000000, 0.91500000};
            (uParam2^) = {-0.50300000, -0.61750000, 0.91500000};
            break;
            case -1971955454:
            (uParam1^) = {-0.62000000, -0.08500000, 1.10500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -685276541:
            (uParam1^) = {-0.64250000, -0.09000000, 0.75000000};
            (uParam2^) = {-0.63500000, -0.77500000, 0.75250000};
            break;
            case -1883002148:
            (uParam1^) = {-0.64250000, -0.09000000, 0.75000000};
            (uParam2^) = {-0.63500000, -0.77500000, 0.75250000};
            break;
            case -276900515:
            (uParam1^) = {-0.61250000, -0.09000000, 0.75000000};
            (uParam2^) = {-0.59250000, -0.72750000, 0.75250000};
            break;
            case -2119578145:
            (uParam1^) = {-0.59750000, -0.22500000, 0.83000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1127131465:
            (uParam1^) = {-0.57250000, 0.03250000, 0.72250000};
            (uParam2^) = {-0.57500000, -0.73250000, 0.68000000};
            break;
            case -1097828879:
            (uParam1^) = {-0.53000000, -0.41500000, 0.64250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 974744810:
            (uParam1^) = {-0.51000000, -0.10750000, 0.93000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1026055242:
            (uParam1^) = {-0.51000000, -0.10750000, 0.93000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1938952078:
            (uParam1^) = {-1.06250000, 3.41500000, 1.23750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1353720154:
            (uParam1^) = {-1.11250000, 1.71500000, 2.27000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 627033353:
            (uParam1^) = {-0.52500000, -0.14500000, 0.64000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 2016857647:
            (uParam1^) = {-0.50500000, -0.17000000, 0.77750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 675415136:
            (uParam1^) = {-0.62000000, 0.06500000, 1.03000000};
            (uParam2^) = {-0.62250000, -0.63000000, 1.03500000};
            break;
            case 884422927:
            (uParam1^) = {-0.57500000, 0.04500000, 0.85000000};
            (uParam2^) = {-0.56500000, -0.63250000, 0.84750000};
            break;
            case -341892653:
            (uParam1^) = {-0.57500000, -0.04500000, 0.85000000};
            (uParam2^) = {-0.56500000, -0.63250000, 0.84750000};
            break;
            case 486987393:
            (uParam1^) = {-0.63750000, -0.06500000, 1.01750000};
            (uParam2^) = {-0.62250000, -0.87500000, 1.02750000};
            break;
            case -1289722222:
            (uParam1^) = {-0.46000000, -0.06500000, 0.71500000};
            (uParam2^) = {-0.46750000, -0.66250000, 0.71750000};
            break;
            case 886934177:
            (uParam1^) = {-0.53500000, 0.00750000, 0.75000000};
            (uParam2^) = {-0.53250000, -0.67750000, 0.74000000};
            break;
            case 418536135:
            (uParam1^) = {-0.51750000, 0.05500000, 0.56750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1269098716:
            (uParam1^) = {-0.55750000, 0.17250000, 1.28750000};
            (uParam2^) = {-0.55000000, -0.48750000, 1.31000000};
            break;
            case -37030056:
            (uParam1^) = {-0.58500000, -0.13750000, 0.95750000};
            (uParam2^) = {-0.58750000, -0.77250000, 0.97250000};
            break;
            case -2124201592:
            (uParam1^) = {-0.67500000, -0.42750000, 0.67750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1304597482:
            (uParam1^) = {-0.62500000, -0.16500000, 0.81000000};
            (uParam2^) = {-0.62750000, -0.71750000, 0.80250000};
            break;
            case -1260881538:
            (uParam1^) = {-0.61000000, -0.02000000, 0.68250000};
            (uParam2^) = {-0.60000000, -0.58000000, 0.69000000};
            break;
            case -310465116:
            (uParam1^) = {-0.68750000, 0.18000000, 0.86500000};
            (uParam2^) = {-0.66300000, -0.51750000, 0.91000000};
            break;
            case 583100975:
            (uParam1^) = {-0.86750000, 0.89750000, 1.32000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 525509695:
            (uParam1^) = {-0.74500000, 0.38250000, 1.17750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 904750859:
            (uParam1^) = {-0.91250000, 2.66500000, 1.35250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 148777611:
            (uParam1^) = {-0.61250000, -0.18750000, 0.72000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1911513875:
            (uParam1^) = {-1.19250000, 1.06750000, 1.88500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1348744438:
            (uParam1^) = {-0.67250000, -0.08750000, 0.57000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 569305213:
            (uParam1^) = {-1.28750000, 3.05250000, 1.58000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -808457413:
            (uParam1^) = {-0.84000000, 0.36250000, 1.15250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -2077743597:
            (uParam1^) = {-0.63250000, 0.12250000, 1.01250000};
            (uParam2^) = {-0.63250000, -0.84700000, 1.04550000};
            break;
            case -1590284256:
            (uParam1^) = {-0.63250000, 0.12250000, 1.01250000};
            (uParam2^) = {-0.63250000, -0.84700000, 1.04550000};
            break;
            case 1830407356:
            (uParam1^) = {-0.71000000, -0.40500000, 0.88250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 131140572:
            (uParam1^) = {-0.69000000, -0.07000000, 0.80000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1376298265:
            (uParam1^) = {-0.56250000, -0.07000000, 0.76500000};
            (uParam2^) = {-0.56300000, -0.83500000, 0.75500000};
            break;
            case 2046537925:
            (uParam1^) = {-0.62500000, -0.15000000, 0.73500000};
            (uParam2^) = {-0.59300000, -0.71250000, 0.73750000};
            break;
            case -1627000575:
            (uParam1^) = {-0.63250000, 0.01750000, 0.71000000};
            (uParam2^) = {-0.60050000, -0.60750000, 0.71500000};
            break;
            case -350085182:
            (uParam1^) = {-0.82250000, 0.40250000, 1.19500000};
            (uParam2^) = {-0.82050000, -0.68250000, 1.19500000};
            break;
            case -119658072:
            (uParam1^) = {-0.86750000, 0.82750000, 1.10500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1883869285:
            (uParam1^) = {-0.55750000, 0.03750000, 0.79250000};
            (uParam2^) = {-0.53750000, -0.68000000, 0.81750000};
            break;
            case -1962071130:
            (uParam1^) = {-0.53250000, -0.05000000, 0.74250000};
            (uParam2^) = {-0.52000000, -0.58500000, 0.75000000};
            break;
            case -1150599089:
            (uParam1^) = {-0.63500000, -0.05000000, 0.78500000};
            (uParam2^) = {-0.63250000, -0.58500000, 0.79000000};
            break;
            case -1900572838:
            (uParam1^) = {-1.18000000, 1.07750000, 1.87500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1390084576:
            (uParam1^) = {-0.65500000, 0.09250000, 1.11250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 83136452:
            (uParam1^) = {-0.59750000, -0.21250000, 0.94250000};
            (uParam2^) = {-0.59800000, -0.84550000, 0.95050000};
            break;
            case -845979911:
            (uParam1^) = {-1.35000000, 3.69000000, 1.16500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 627094268:
            (uParam1^) = {-0.74250000, 0.28500000, 0.74750000};
            (uParam2^) = {-0.74300000, -0.45700000, 0.77500000};
            break;
            case -1932515764:
            (uParam1^) = {-0.65500000, -0.08000000, 0.71250000};
            (uParam2^) = {-0.65050000, -0.73700000, 0.71000000};
            break;
            case -227741703:
            (uParam1^) = {-0.57000000, -0.37500000, 0.48750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -449022887:
            (uParam1^) = {-0.60750000, -0.27750000, 0.82500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1264386590:
            (uParam1^) = {-0.60750000, -0.27750000, 0.83250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1685021548:
            (uParam1^) = {-0.68000000, -0.25500000, 0.73000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -322343873:
            (uParam1^) = {-0.53500000, -0.12000000, 0.87000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1349725314:
            (uParam1^) = {-0.51750000, -0.19250000, 0.62750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1344573448:
            (uParam1^) = {-0.60250000, -0.00250000, 0.89750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -810318068:
            (uParam1^) = {-0.67250000, 0.64000000, 1.13250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1923400478:
            (uParam1^) = {-0.65250000, -0.17500000, 0.77500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1677715180:
            (uParam1^) = {-0.79750000, 1.25250000, 1.48000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1747439474:
            (uParam1^) = {-1.18000000, 1.00500000, 1.87250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1723137093:
            (uParam1^) = {-0.54000000, -0.12000000, 0.83500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1961627517:
            (uParam1^) = {-0.57750000, 1.12250000, 0.73750000};
            (uParam2^) = {-0.58250000, -2.04500000, 0.74250000};
            break;
            case 1821991593:
            (uParam1^) = {-0.61000000, -0.36250000, 0.62000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 970598228:
            (uParam1^) = {-0.49750000, -0.17000000, 0.91250000};
            (uParam2^) = {-0.50000000, -0.72250000, 0.91300000};
            break;
            case -295689028:
            (uParam1^) = {-0.49750000, -0.31000000, 0.91250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -956048545:
            (uParam1^) = {-0.62500000, -0.17000000, 0.72750000};
            (uParam2^) = {-0.62500000, -0.76750000, 0.72800000};
            break;
            case 1208856469:
            (uParam1^) = {-0.62500000, 0.02000000, 0.69750000};
            (uParam2^) = {-0.62500000, -0.64000000, 0.70300000};
            break;
            case 1917016601:
            (uParam1^) = {-1.20250000, 3.50500000, 1.55750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1896659641:
            (uParam1^) = {-0.56250000, -0.04000000, 0.61000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1534326199:
            (uParam1^) = {-0.50000000, -0.20500000, 0.78000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -825837129:
            (uParam1^) = {-0.59000000, -0.23000000, 0.52000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1758379524:
            (uParam1^) = {-0.62000000, -0.23750000, 0.51750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -583281407:
            (uParam1^) = {-0.45250000, -0.10750000, 0.76500000};
            (uParam2^) = {-0.45300000, -0.70050000, 0.77500000};
            break;
            case -498054846:
            (uParam1^) = {-0.68000000, -0.20500000, 0.93250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 2006667053:
            (uParam1^) = {-0.71500000, -0.08250000, 0.65000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1937616578:
            (uParam1^) = {-0.60750000, -0.02500000, 0.91750000};
            (uParam2^) = {-0.60800000, -0.67250000, 0.91800000};
            break;
            case 1777363799:
            (uParam1^) = {-0.60750000, -0.17750000, 0.81250000};
            (uParam2^) = {-0.62800000, -0.86750000, 0.78050000};
            break;
            case -1099960214:
            (uParam1^) = {-0.93000000, 1.25000000, 1.58000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            default:
            (uParam1^) = {-0.48300000, -0.28500000, 0.62000000};
            (uParam2^) = {-0.48300000, -1.30000000, 0.62000000};
            break;
        }
    }
    return;
}

void sub_20532(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        BLOCK_CHAR_GESTURE_ANIMS( uParam0, uParam1 );
        BLOCK_CHAR_AMBIENT_ANIMS( uParam0, uParam1 );
    }
    return;
}

int sub_20641(unknown uParam0)
{
    float fVar3;

    if (NOT (sub_20652( uParam0 )))
    {
        return 0;
    }
    else if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
    {
        GET_CHAR_SPEED( uParam0, ref fVar3 );
        if (fVar3 > 2.00000000)
        {
            return 0;
        }
        if (IS_CHAR_GESTURING( uParam0 ))
        {
            return 0;
        }
    }
    else
    {
        l_U504 = 999999.90000000;
    }
    if (IS_PLAYER_PLAYING( sub_4719() ))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_4041(), uParam0, 50.00000000, 50.00000000, 0 )))
        {
            return 0;
        }
    }
    return 1;
}

int sub_20652(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (l_U496)
    {
        return 1;
    }
    if (l_U498)
    {
        sub_20688( uParam0, 1 );
        l_U498 = 0;
        if (l_U501)
        {
            PRINTSTRING( "REMOVE_SPLIFF - 1 \n" );
        }
        return 0;
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
        {
            if ((((IS_PED_IN_COMBAT( uParam0 )) || (IS_CHAR_IN_MELEE_COMBAT( uParam0 ))) || (IS_CHAR_SHOOTING( uParam0 ))) || (IS_CHAR_ARMED( uParam0, 7 )))
            {
                sub_20688( uParam0, 1 );
                if (l_U501)
                {
                    PRINTSTRING( "REMOVE_SPLIFF - 1B \n" );
                }
                return 0;
            }
        }
        else
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            if (DOES_VEHICLE_EXIST( uVar3 ))
            {
                GET_CAR_MODEL( uVar3, ref uVar4 );
                if (IS_THIS_MODEL_A_BIKE( uVar4 ))
                {
                    sub_20688( uParam0, 0 );
                    if (l_U501)
                    {
                        PRINTSTRING( "REMOVE_SPLIFF - 2 \n" );
                    }
                    return 0;
                }
            }
            if (sub_5704( uParam0 ))
            {
                sub_20688( uParam0, 0 );
                if (l_U501)
                {
                    PRINTSTRING( "REMOVE_SPLIFF - 3 \n" );
                }
                return 0;
            }
        }
    }
    else
    {
        sub_20688( uParam0, 1 );
        if (l_U501)
        {
            PRINTSTRING( "REMOVE_SPLIFF - 3B \n" );
        }
        return 0;
    }
    return 1;
}

void sub_20688(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_OBJECT_EXIST( l_U521 ))
        {
            DELETE_OBJECT( ref l_U521 );
            l_U521 = nil;
        }
    }
    else if (DOES_OBJECT_EXIST( l_U521 ))
    {
        if (IS_OBJECT_ATTACHED( l_U521 ))
        {
            DETACH_OBJECT( l_U521, 1 );
        }
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U521 );
        l_U521 = nil;
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (HAVE_ANIMS_LOADED( l_U524 ))
        {
            if (((IS_CHAR_PLAYING_ANIM( uParam0, l_U524, l_U525 )) || (IS_CHAR_PLAYING_ANIM( uParam0, l_U524, l_U526 ))) || (IS_CHAR_PLAYING_ANIM( uParam0, l_U524, l_U527 )))
            {
                CLEAR_CHAR_SECONDARY_TASK( uParam0 );
            }
        }
    }
    if (DOES_OBJECT_EXIST( l_U522 ))
    {
        DELETE_OBJECT( ref l_U522 );
    }
    l_U504 = 0.00000000;
    if (l_U497)
    {
        sub_10672( ref l_U513 );
        l_U497 = 0;
    }
    return;
}

void sub_21574(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    int iVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (DOES_OBJECT_EXIST( l_U521 )))
        {
            GET_CHAR_COORDINATES( uParam0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            CREATE_OBJECT( -785338897, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U521, 1 );
            GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar6 );
            if (NOT (iVar6 == 0))
            {
                ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U521, iVar6 );
            }
        }
        if (l_U496)
        {
            if (IS_OBJECT_ATTACHED( l_U521 ))
            {
                DETACH_OBJECT( l_U521, 1 );
            }
        }
        if (sub_21739( uParam0 ))
        {
            if (IS_OBJECT_ATTACHED( l_U521 ))
            {
                DETACH_OBJECT( l_U521, 1 );
            }
        }
        if (NOT (IS_OBJECT_ATTACHED( l_U521 )))
        {
            ATTACH_OBJECT_TO_PED( l_U521, uParam0, 1232, l_U528, l_U531, 0 );
            l_U523 = uParam0;
        }
        if (NOT (l_U512 == 1))
        {
            l_U512 = 1;
            l_U503 = 18000.00000000;
        }
    }
    return;
}

int sub_21739(int iParam0)
{
    if (iParam0 == l_U523)
    {
        return 1;
    }
    return 0;
}

int sub_22355(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_22861(unknown uParam0)
{
    unknown uVar3;
    float fVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            GET_CAR_SPEED( uVar3, ref fVar4 );
            if (fVar4 > 1.00000000)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_23690()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

void sub_23735(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_23758( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_23758(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_23812( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_23812(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_23834( iParam1 )))
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
    sub_24526( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_23834(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_23911( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_23911( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_23911( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_23911(unknown uParam0)
{
    return;
}

void sub_24526(int iParam0, int iParam1)
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

void sub_25027()
{
    if (NOT l_U576)
    {
        sub_25052( ref l_U655, 1 );
        if (NOT (IS_CHAR_INJURED( l_U643[0] )))
        {
            CLEAR_CHAR_TASKS( l_U643[0] );
            SET_CHAR_READY_TO_BE_STUNNED( l_U643[0], 0 );
            SET_CHAR_AS_ENEMY( l_U643[0], 1 );
            if (IS_VEH_DRIVEABLE( l_U640 ))
            {
                if ((IS_CHAR_IN_CAR( sub_4041(), l_U640 )) || (IS_CHAR_GETTING_IN_TO_A_CAR( sub_4041() )))
                {
                    TASK_ENTER_CAR_AS_PASSENGER( l_U643[0], l_U640, -2, 0 );
                    l_U590 = 1;
                }
                if (NOT (IS_CHAR_IN_CAR( sub_4041(), l_U640 )))
                {
                    TASK_COMBAT( l_U643[0], sub_4041() );
                }
            }
            STOP_PED_SPEAKING( l_U643[0], 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U643[1] )))
        {
            CLEAR_CHAR_TASKS( l_U643[1] );
            SET_CHAR_READY_TO_BE_STUNNED( l_U643[1], 0 );
            SET_CHAR_RELATIONSHIP( l_U643[1], 5, 0 );
            SET_CHAR_AS_ENEMY( l_U643[1], 1 );
            TASK_COMBAT( l_U643[1], sub_4041() );
            if (DOES_OBJECT_EXIST( l_U639 ))
            {
                DETACH_OBJECT( l_U639, 1 );
            }
            STOP_PED_SPEAKING( l_U643[1], 0 );
            sub_20688( l_U643[1], 0 );
        }
        RELEASE_WEATHER();
        l_U576 = 1;
        l_U559 = 4;
    }
    return;
}

void sub_25052(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_25982()
{
    float fVar2;

    if (NOT (IS_CHAR_INJURED( l_U643[0] )))
    {
        sub_9478( ref l_U643[0] );
    }
    if (NOT (IS_CHAR_INJURED( l_U643[1] )))
    {
        sub_9478( ref l_U643[1] );
    }
    if (NOT l_U586)
    {
        if (IS_VEH_DRIVEABLE( l_U640 ))
        {
            if (IS_CHAR_SITTING_IN_CAR( sub_4041(), l_U640 ))
            {
                PLAY_SOUND_FROM_VEHICLE( -1, "VEHICLES_EXTRAS_CAR_DOOR_LOCK", l_U640 );
                l_U586 = 1;
            }
        }
    }
    if (l_U578 == 0)
    {
        if (TIMERA() > 8000)
        {
            PRINT_HELP( "VL3_STUNP1" );
            l_U578 = 1;
        }
    }
    if (l_U579 == 0)
    {
        if (TIMERA() > 15000)
        {
            PRINT_HELP( "VL3_STUNP2" );
            l_U579 = 1;
        }
    }
    if (NOT l_U574)
    {
        if (NOT l_U572)
        {
            if (NOT (IS_CAR_DEAD( l_U640 )))
            {
                if (IS_CHAR_IN_CAR( sub_4041(), l_U640 ))
                {
                    switch (l_U562)
                    {
                        case 0:
                        SETTIMERB( 0 );
                        sub_26381( 1 );
                        l_U562++;
                        break;
                        case 1:
                        if (TIMERB() > 3500)
                        {
                            l_U562++;
                        }
                        break;
                        case 2:
                        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_4041(), 1193.74500000, 802.55790000, 35.11900000, 50.00000000, 50.00000000, 4.00000000, 0 )))
                        {
                            l_U562++;
                        }
                        break;
                        case 3:
                        if (IS_CHAR_FATALLY_INJURED( l_U643[0] ))
                        {
                            if (sub_26595( 1, ref l_U612, "V3AUD" ))
                            {
                                SET_CHAR_CANT_BE_DRAGGED_OUT( sub_4041(), 1 );
                                l_U572 = 1;
                                l_U562++;
                                SETTIMERB( 0 );
                            }
                        }
                        else
                        {
                            GET_CHAR_HEALTH( l_U643[0], ref l_U563 );
                            if (l_U563 < 170)
                            {
                                if (sub_26595( 1, ref l_U621, "V3AUD" ))
                                {
                                    SET_CHAR_CANT_BE_DRAGGED_OUT( sub_4041(), 1 );
                                    l_U572 = 1;
                                    l_U562++;
                                    SETTIMERB( 0 );
                                }
                            }
                            else if (l_U563 >= 170)
                            {
                                if (sub_26595( 1, ref l_U630, "V3AUD" ))
                                {
                                    SET_CHAR_CANT_BE_DRAGGED_OUT( sub_4041(), 1 );
                                    l_U572 = 1;
                                    l_U562++;
                                    SETTIMERB( 0 );
                                }
                            }
                        }
                        break;
                    }
                }
            }
        }
        else if (TIMERB() > 1000)
        {
            if (sub_30664() == 6)
            {
                SET_CHAR_CANT_BE_DRAGGED_OUT( sub_4041(), 0 );
                CLEAR_PRINTS();
                if (IS_VEH_DRIVEABLE( l_U640 ))
                {
                    if (IS_CHAR_IN_CAR( sub_4041(), l_U640 ))
                    {
                        l_U557 = 0;
                    }
                }
                l_U577 = 0;
                l_U574 = 1;
            }
        }
    }
    if (IS_VEH_DRIVEABLE( l_U640 ))
    {
        if (l_U571)
        {
            if (TIMERB() > 3000)
            {
                sub_30852();
                l_U575 = 1;
                if (IS_CHAR_IN_CAR( sub_4041(), l_U640 ))
                {
                    l_U557 = 0;
                }
                if (IS_GARAGE_CLOSED( "bs3MG" ))
                {
                    OPEN_GARAGE( "bs3MG" );
                }
                l_U556++;
            }
        }
        else if (IS_CHAR_IN_CAR( sub_4041(), l_U640 ))
        {
            if (l_U560 == 1)
            {
                if (TIMERB() > 7000)
                {
                    if (DOES_BLIP_EXIST( l_U649 ))
                    {
                        FLASH_BLIP( l_U649, 0 );
                        l_U560 = 2;
                    }
                }
            }
            if (g_U9890 == 4)
            {
                l_U580 = 1;
            }
            else
            {
                l_U580 = 0;
                GET_VEHICLE_DIRT_LEVEL( l_U640, ref fVar2 );
                if (fVar2 <= 3.00000000)
                {
                    l_U571 = 1;
                }
            }
            switch (l_U567)
            {
                case 0:
                if (l_U580 == 1)
                {
                    l_U567++;
                }
                break;
                case 1:
                if (l_U580 == 0)
                {
                    if (fVar2 <= 3.00000000)
                    {
                        REMOVE_BLIP( l_U648 );
                        REMOVE_BLIP( l_U649 );
                        l_U571 = 1;
                        l_U567++;
                        SETTIMERB( 0 );
                    }
                }
                break;
            }
        }
        if (NOT l_U585)
        {
            if (l_U576 == 1)
            {
                if (NOT (IS_CHAR_INJURED( l_U643[1] )))
                {
                    if (NOT sub_23690())
                    {
                        sub_23735( "V3_FRIEND1", ref l_U667, 6, 1 );
                        l_U585 = 1;
                    }
                }
            }
        }
        if (IS_CHAR_SITTING_IN_CAR( sub_4041(), l_U640 ))
        {
            if (TIMERA() > 12000)
            {
                LOCK_CAR_DOORS( l_U640, 7 );
                if (NOT l_U587)
                {
                    if (NOT (IS_CHAR_INJURED( l_U643[0] )))
                    {
                        SET_CHAR_RELATIONSHIP( l_U643[0], 5, 0 );
                        TASK_COMBAT( l_U643[0], sub_4041() );
                        l_U587 = 1;
                    }
                }
            }
            else
            {
                LOCK_CAR_DOORS( l_U640, 2 );
            }
        }
        else
        {
            LOCK_CAR_DOORS( l_U640, 1 );
        }
        if (l_U590)
        {
            if (IS_CHAR_ON_FOOT( sub_4041() ))
            {
                if (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_4041() )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U643[0] )))
                    {
                        SET_CHAR_RELATIONSHIP( l_U643[0], 5, 0 );
                        TASK_COMBAT( l_U643[0], sub_4041() );
                        l_U590 = 0;
                    }
                }
            }
        }
    }
    return;
}

void sub_26381(unknown uParam0)
{
    if (g_U15946[uParam0]._fU132._fU0)
    {
        g_U91._fU72 = uParam0;
    }
    else
    {
        g_U91._fU72 = -1;
    }
    return;
}

void sub_26595(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown[2] uVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    array(ref uVar5, 2);
    return sub_26627( uParam0, uParam1, uParam2, 0, ref uVar5, ref uVar5, "", 0, 1, 2, 1, 0, 0, 0 );
}

int sub_26627(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_23911( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_23911( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_4719() )))
    {
        sub_23911( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_4041() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_4041() ))))
    {
        sub_23911( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_23911( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_27142()) AND (NOT bParam11))
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
                sub_23911( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT sub_27142()) AND (NOT bParam11))
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
    sub_28514( uParam0, ref g_U91._fU176 );
    sub_29895( ref g_U91._fU160 );
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
        sub_4214( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

int sub_27142()
{
    if ((g_U91._fU48) || (g_U91._fU52))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_27199())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_27199()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_4719() )))
    {
        sub_23911( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_23911( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_23911( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU100) || (g_U91._fU104))
    {
        sub_23911( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_4719() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_4041() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_4041(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_23911( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_4041() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_23911( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_23911( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_4719() )))
    {
        sub_23911( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_28514(int iParam0, unknown uParam1)
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

void sub_29895(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

int sub_30664()
{
    if (g_U91._fU60 != -1)
    {
        return g_U15946[g_U91._fU60]._fU132._fU24;
    }
    return 6;
}

void sub_30852()
{
    g_U9890 = 0;
    return;
}

void sub_31615()
{
    if (IS_PLAYER_PLAYING( sub_4719() ))
    {
        if (NOT (IS_CAR_DEAD( l_U640 )))
        {
            switch (l_U568)
            {
                case 0:
                if (NOT l_U589)
                {
                    LOCK_CAR_DOORS( l_U640, 1 );
                    l_U589 = 1;
                }
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_4719(), 0 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_4041(), l_U609._fU0, l_U609._fU4, l_U609._fU8, 6.50000000, 7.50000000, 3.00000000, 0 ))
                    {
                        if (NOT (IS_CHAR_DEAD( sub_4041() )))
                        {
                            if (IS_CHAR_SITTING_IN_CAR( sub_4041(), l_U640 ))
                            {
                                if (IS_GARAGE_CLOSED( "bs3MG" ))
                                {
                                    OPEN_GARAGE( "bs3MG" );
                                }
                                PRINT_NOW( "V3GARA1", 7500, 1 );
                                l_U568++;
                            }
                        }
                    }
                    else if (LOCATE_CHAR_ANY_MEANS_3D( sub_4041(), l_U603._fU0, l_U603._fU4, l_U603._fU8, 2.50000000, 2.50000000, 2.50000000, l_U575 ))
                    {
                        ;
                    }
                    if (NOT (IS_VEH_DRIVEABLE( l_U640 )))
                    {
                        if (IS_CAR_IN_GARAGE_AREA( "bs3MG", l_U640 ))
                        {
                            l_U568++;
                        }
                    }
                }
                break;
                case 1:
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_4719(), 0 )))
                {
                    if (IS_CAR_IN_GARAGE_AREA( "bs3MG", l_U640 ))
                    {
                        if (NOT (IS_CHAR_DEAD( sub_4041() )))
                        {
                            if (IS_CHAR_SITTING_IN_CAR( sub_4041(), l_U640 ))
                            {
                                SET_PLAYER_CONTROL( sub_4719(), 0 );
                                CLEAR_PRINTS();
                                SETTIMERA( 0 );
                                SET_CAR_ENGINE_ON( l_U640, 0, 1 );
                                l_U568++;
                            }
                        }
                    }
                    else
                    {
                        LOCATE_CHAR_ANY_MEANS_3D( sub_4041(), l_U603._fU0, l_U603._fU4, l_U603._fU8, 2.50000000, 2.50000000, 2.50000000, l_U575 );
                        if (IS_GARAGE_CLOSED( "bs3MG" ))
                        {
                            OPEN_GARAGE( "bs3MG" );
                        }
                    }
                }
                break;
                case 2:
                if (TIMERA() > 2000)
                {
                    if (NOT l_U573)
                    {
                        BEGIN_CAM_COMMANDS( ref l_U558 );
                        CREATE_CAM( 14, ref l_U650 );
                        REMOVE_BLIP( l_U648 );
                        REMOVE_BLIP( l_U649 );
                        OPEN_SEQUENCE_TASK( ref l_U651 );
                        TASK_LEAVE_CAR( 0, l_U640 );
                        TASK_GO_STRAIGHT_TO_COORD( 0, 963.53880000, -327.02470000, 18.19930000, 2, 6000 );
                        CLOSE_SEQUENCE_TASK( l_U651 );
                        TASK_PERFORM_SEQUENCE( sub_4041(), l_U651 );
                        CLEAR_SEQUENCE_TASK( l_U651 );
                        LOCK_CAR_DOORS( l_U640, 3 );
                        sub_8730();
                        l_U575 = 0;
                        l_U573 = 1;
                        SETTIMERA( 0 );
                        l_U568++;
                    }
                }
                break;
                case 3:
                if (TIMERA() > 2000)
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_4041() );
                    SET_CHAR_HEADING( sub_4041(), 190 );
                    SET_CHAR_COORDINATES( sub_4041(), 965.59420000, -322.79240000, 18.23530000 );
                    TASK_GO_STRAIGHT_TO_COORD( sub_4041(), 965.26400000, -327.79000000, 18.23530000, 2, 6000 );
                    CLEAR_AREA( 963.53880000, -327.02470000, 18.19930000, 2.00000000, 1 );
                    SET_CAM_POS( l_U650, 969.10000000, -324.00380000, 19.39528000 );
                    SET_CAM_ROT( l_U650, -7.52484500, 0.00000000, 112.13470000 );
                    CLEAR_AREA( 964.61800000, -323.41280000, 18.23530000, 4.00000000, 1 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    SET_CAM_ACTIVE( l_U650, 1 );
                    SET_CAM_PROPAGATE( l_U650, 1 );
                    l_U568++;
                }
                break;
                case 4:
                if ((LOCATE_CHAR_ANY_MEANS_3D( sub_4041(), 965.26400000, -327.79000000, 18.23530000, 4.00000000, 1.00000000, 2.00000000, 0 )) || (TIMERA() > 10000))
                {
                    SET_PLAYER_CONTROL( sub_4719(), 1 );
                    REMOVE_BLIP( l_U648 );
                    REMOVE_BLIP( l_U649 );
                    sub_7007();
                    SET_CAM_BEHIND_PED( sub_4041() );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    END_CAM_COMMANDS( ref l_U558 );
                    CLOSE_GARAGE( "bs3MG" );
                    if (DOES_VEHICLE_EXIST( l_U640 ))
                    {
                        GET_CAR_HEALTH( l_U640, ref l_U566 );
                        if (l_U566 < 850)
                        {
                            g_U15654[22] = 0;
                        }
                        else
                        {
                            g_U15654[22] = 1;
                        }
                    }
                    l_U568++;
                    l_U556 = 5;
                }
                break;
            }
        }
    }
    return;
}

void sub_33031()
{
    sub_33040();
    CLEAR_WANTED_LEVEL( sub_4719() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 50 );
    CLEAR_PRINTS();
    REQUEST_IPL( "QW_hideworks" );
    sub_44699( 1, "V3_DONE", "V3AUD", 0 );
    UNLOCK_MISSION_NEWS_STORY( 8 );
    sub_45294( 8 );
    sub_2854();
    return;
}

void sub_33040()
{
    sub_33049();
    return;
}

void sub_33049()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_33067();
    sub_33126( iVar2, iVar3, iVar4 );
    return;
}

void sub_33067()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_33126(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 1;
    sub_33158( iVar5, uParam0, uParam1, uParam2, "Contact_2" );
    return;
}

void sub_33158(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_33254( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_33254( ref cVar9 );
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
            sub_33254( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_33254( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_33254( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_33254( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_33831( iParam0, iVar7 );;;
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
                sub_34228( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_34228( 0, 4 );
            }
        }
    }
    if (NOT (sub_34317( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_4719(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_4719() );
    }
    sub_1952();
    bVar27 = true;
    uVar28 = sub_33831( iParam0, iVar7 );
    uVar29 = sub_1409( iParam0 );
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
                sub_43693( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_44123();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_44208( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_44265( iParam0 );
                sub_44304( 0 );
                sub_1850( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_44412();
        }
    }
    if (bParam2)
    {
        sub_44123();
        sub_44500();
        sub_44304( 0 );
    }
    if (bParam3)
    {
        sub_44123();
        sub_44540();
        sub_44304( 0 );
        sub_1850( uVar29, 0 );
    }
    sub_1296();
    return;
}

void sub_33254(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_33831(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_1808( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_34228(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_34317(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_34525( uParam1 );
        break;
        case 1:
        bVar8 = sub_36603( uParam1 );
        break;
        case 2:
        bVar8 = sub_36829( uParam1 );
        break;
        case 3:
        bVar8 = sub_36979( uParam1 );
        break;
        case 4:
        bVar8 = sub_37257( uParam1 );
        break;
        case 5:
        bVar8 = sub_37560( uParam1 );
        break;
        case 6:
        bVar8 = sub_37759( uParam1 );
        break;
        case 7:
        bVar8 = sub_37985( uParam1 );
        break;
        case 8:
        bVar8 = sub_38220( uParam1 );
        break;
        case 9:
        bVar8 = sub_38595( uParam1 );
        break;
        case 10:
        bVar8 = sub_38842( uParam1 );
        break;
        case 11:
        bVar8 = sub_38981( uParam1 );
        break;
        case 12:
        bVar8 = sub_39280( uParam1 );
        break;
        case 13:
        bVar8 = sub_39508( uParam1 );
        break;
        case 14:
        bVar8 = sub_39795( uParam1 );
        break;
        case 15:
        bVar8 = sub_40077( uParam1 );
        break;
        case 16:
        bVar8 = sub_40359( uParam1 );
        break;
        case 17:
        bVar8 = sub_40560( uParam1 );
        break;
        case 18:
        bVar8 = sub_40633( uParam1 );
        break;
        case 19:
        bVar8 = sub_40847( uParam1 );
        break;
        case 20:
        bVar8 = sub_41100( uParam1 );
        break;
        case 21:
        bVar8 = sub_41347( uParam1 );
        break;
        case 22:
        bVar8 = sub_41548( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_36208( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_33831( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_41871( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_34525(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34804( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_34804( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_34804( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_34804( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_34804( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_34804( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_34804( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_34804( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_34804( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_34804( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_34804( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_34804( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_34804( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_34804( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_34804( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_34804( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_34804( iVar3, 0, 3, 1, 0, 0 );
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
        sub_34804( iVar3, 0, sub_36086(), sub_36352(), 0, 0 );
        break;
        default:
        sub_36511( "Friend 1", 1 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36511( "Friend 1", 0 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_34804(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_34815( uParam1 );
    sub_34989( uParam0, 0, uParam2 );
    sub_34989( uParam0, 1, uParam3 );
    sub_34989( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_33067();
    return;
}

void sub_34815(unknown uParam0)
{
    ADD_SCORE( sub_4719(), uParam0 );
    sub_34840( uParam0 );
    return;
}

void sub_34840(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1808( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_34989(unknown uParam0, int iParam1, int iParam2)
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
        sub_35146( uParam0 );
    }
    return;
}

void sub_35146(unknown uParam0)
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

int sub_36086()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_36208( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_36208(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_36352()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_36208( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_36511(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_36603(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34804( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_34804( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_34804( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_34804( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_36511( "Contact 2", 1 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36511( "Contact 2", 0 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_36829(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_34804( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_36511( "Girl 3", 1 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36511( "Girl 3", 0 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_36979(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34804( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_34804( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_34804( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_34804( iVar3, 0, sub_36086(), sub_36352(), 0, 0 );
        break;
        default:
        sub_36511( "Friend 4", 1 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36511( "Friend 4", 0 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37257(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34804( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_34804( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_34804( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_34804( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_34804( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_34804( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_34804( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_36511( "Contact 5", 1 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36511( "Contact 5", 0 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37560(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34804( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_34804( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_34804( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_36511( "Contact 7", 1 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36511( "Contact 7", 0 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37759(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34804( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_34804( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_34804( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_34804( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_36511( "Contact 7b", 1 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36511( "Contact 7b", 0 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37985(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34804( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_34804( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_34804( iVar3, 0, sub_36086(), sub_36352(), 0, 0 );
        break;
        default:
        sub_36511( "Friend 8", 1 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36511( "Friend 8", 0 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_38220(unknown uParam0)
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
        sub_34804( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_34804( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_34804( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_34804( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_34804( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_34804( iVar3, 0, sub_36086(), sub_36352(), 0, 0 );
        break;
        default:
        sub_36511( "Friend 9", 1 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36511( "Friend 9", 0 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_38595(unknown uParam0)
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
        sub_34804( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_34804( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_34804( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_34804( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_36511( "Contact 10", 1 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_36511( "Contact 10", 0 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_38842(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34804( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_36511( "Girl 11", 1 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36511( "Girl 11", 0 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_38981(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34804( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_34804( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_34804( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_34804( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_34804( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_34804( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_36511( "Contact 12", 1 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36511( "Contact 12", 0 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_39280(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34804( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_34804( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_34804( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_34804( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_36511( "Contact 13", 1 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36511( "Contact 13", 0 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_39508(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34804( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_34804( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_34804( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_34804( iVar3, 0, sub_36086(), sub_36352(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_36511( "Friend 15", 1 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36511( "Friend 15", 0 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_39795(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34804( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_34804( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_34804( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_34804( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_34804( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_34804( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_36511( "Contact 16", 1 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36511( "Contact 16", 0 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40077(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34804( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_34804( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_34804( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_34804( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_34804( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_36511( "Contact 18", 1 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36511( "Contact 18", 0 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40359(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34804( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_34804( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_34804( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_36511( "Contact 19", 1 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36511( "Contact 19", 0 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40560(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_36511( "Girl 20", 0 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40633(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34804( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_34804( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_34804( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_36511( "Contact 21", 1 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36511( "Contact 21", 0 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40847(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34804( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_34804( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_34804( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_34804( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_34804( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_36511( "Contact 22", 1 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36511( "Contact 22", 0 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_41100(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_34804( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_34804( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_34804( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_34804( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_36511( "Contact 24", 1 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36511( "Contact 24", 0 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_41347(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_34804( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_34804( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_34804( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_36511( "Contact 25", 1 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36511( "Contact 25", 0 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_41548(unknown uParam0)
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
        sub_34804( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_36511( "Girl 26", 1 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_36511( "Girl 26", 0 );
        sub_34804( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_41871(int iParam0, int iParam1)
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
    if (sub_41919( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_42650( iParam1 );
    }
    return;
}

int sub_41919(int iParam0, int iParam1)
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
            sub_42059( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_42059(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_42241( 0 );
    return;
}

void sub_42241(boolean bParam0)
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
        sub_42496();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_42496()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_42650(int iParam0)
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
        sub_42983( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_42983( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_42983( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_42983( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_42983( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_42983( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_42983( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_42983( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_42983( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_42983( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_42983( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_42983( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_42983( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_42983( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_42983( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_42983( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_42983( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_42983( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_42983( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_42983(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_43693(unknown uParam0, unknown uParam1)
{
    sub_43712( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_43712(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_44123()
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

int sub_44208(int iParam0, int iParam1)
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

void sub_44265(unknown uParam0)
{
    sub_1195();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_44304(unknown uParam0)
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

void sub_44412()
{
    sub_44421();
    return;
}

void sub_44421()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_44500()
{
    sub_44421();
    return;
}

void sub_44540()
{
    sub_44421();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_44699(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_44743( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_44743(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_45294(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_45381( iParam0 ))
    {
        sub_46431( iParam0 );
    }
    return;
}

int sub_45381(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 20 )) || (IS_BIT_SET( g_U1452[uParam0], 21 )))
    {
        return 0;
    }
    sub_45438( ref uVar3, 1, 0, 0 );
    sub_46050( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_23911( "\n ----------------------------------------------------------------" );
    sub_4174( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_23911( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_45438(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_45491( iParam0, uParam1, uParam2 );
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
        sub_45623( iParam0 + 0 );
    }
    return;
}

void sub_45491(int iParam0, int iParam1, int iParam2)
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
        sub_45623( iParam0 + 0 );
    }
    return;
}

void sub_45623(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_45654( iParam0->_fU4 )))
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

int sub_45654(unknown uParam0)
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

void sub_46050(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_46431(unknown uParam0)
{
    int iVar3;
    unknown uVar4;
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

    iVar3 = GET_BITS_IN_RANGE( g_U953, 12, 14 );
    array(ref uVar4._fU0._fU0, 3);
    ref uVar4._fU0;
    ref uVar4;
    switch (uParam0)
    {
        case 14:
        SET_BITS_IN_RANGE( ref g_U953, 0, 2, iVar3 );
        iVar3++;
        break;
        case 20:
        SET_BITS_IN_RANGE( ref g_U953, 3, 5, iVar3 );
        iVar3++;
        break;
        case 24:
        SET_BITS_IN_RANGE( ref g_U953, 6, 8, iVar3 );
        iVar3++;
        break;
        case 29:
        g_U963 = 1;
        sub_46642( 20, 6, 16383, 16383, ref uVar4 );
        sub_47318( ref uVar4, 7 );
        sub_47349( ref uVar4, 0 );
        break;
        case 36:
        g_U963 = 2;
        break;
        case 39:
        SET_BITS_IN_RANGE( ref g_U953, 9, 11, iVar3 );
        iVar3++;
        break;
        case 40:
        g_U963 = 3;
        sub_46642( 20, 7, 9, 16383, ref uVar4 );
        sub_47318( ref uVar4, 7 );
        sub_47349( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_46642(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_46666( uParam0, 0, iParam4 + 0 );
    sub_46666( uParam1, 1, iParam4 + 0 );
    sub_46666( uParam2, 2, iParam4 + 0 );
    sub_46666( uParam3, 3, iParam4 + 0 );
    sub_46666( 0, 4, iParam4 + 0 );
    sub_46666( 1, 5, iParam4 + 0 );
    sub_46666( 65535, 6, iParam4 + 0 );
    sub_46666( 0, 12, iParam4 + 0 );
    sub_46666( 0, 11, iParam4 + 0 );
    sub_46666( 0, 14, iParam4 + 0 );
    sub_46666( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_46666( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_46666( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_46666(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_47318(int iParam0, unknown uParam1)
{
    sub_46666( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_47349(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_47389())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_48076( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_47875( iVar5 );
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

int sub_47389()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_47423( 5, g_U968[I] )) == 7)
        {
            sub_47875( I );
            return 1;
        }
    }
    return 0;
}

int sub_47423(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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

void sub_47875(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_47948( 39 );
    return;
}

void sub_47948(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_48076(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_48137( uParam0, g_U968[Result] ))
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

int sub_48137(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[0] == uParam10._fU0[0]) AND (uParam0._fU0[1] == uParam10._fU0[1]))
    {
        return 1;
    }
    return 0;
}

void sub_48522()
{
    if ((NOT (IS_CAR_DEAD( l_U640 ))) AND (NOT l_U573))
    {
        if (NOT l_U569)
        {
            if (NOT (IS_CHAR_INJURED( l_U643[0] )))
            {
                if (IS_PED_JACKING( l_U643[0] ))
                {
                    sub_25052( ref l_U661, 1 );
                    sub_23735( "V3_JACK", ref l_U661, 6, 1 );
                    l_U569 = 1;
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U643[1] )))
            {
                if (IS_PED_JACKING( l_U643[1] ))
                {
                    sub_25052( ref l_U667, 1 );
                    sub_23735( "V3_FRIEND2", ref l_U667, 6, 1 );
                    l_U569 = 1;
                }
            }
        }
        if (IS_CHAR_SITTING_IN_CAR( sub_4041(), l_U640 ))
        {
            if (l_U556 == 4)
            {
                if (IS_WANTED_LEVEL_GREATER( sub_4719(), 0 ))
                {
                    if (NOT l_U581)
                    {
                        PRINT_NOW( "VL3WANT", 7500, 1 );
                        REMOVE_BLIP( l_U648 );
                        REMOVE_BLIP( l_U649 );
                        l_U557 = 1;
                        l_U581 = 1;
                    }
                }
                else if (l_U581)
                {
                    l_U557 = 0;
                    l_U581 = 0;
                }
                if (l_U557 == 0)
                {
                    REMOVE_BLIP( l_U648 );
                    REMOVE_BLIP( l_U649 );
                    l_U603._fU8 -= 1.00000000;
                    ADD_BLIP_FOR_COORD( l_U603._fU0, l_U603._fU4, l_U603._fU8, ref l_U649 );
                    l_U603._fU8 += 1.00000000;
                    SET_ROUTE( l_U649, 1 );
                    if (IS_VEH_DRIVEABLE( l_U640 ))
                    {
                        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_4041(), l_U609._fU0, l_U609._fU4, l_U609._fU8, 6.50000000, 7.50000000, 3.00000000, 0 )))
                        {
                            PRINT_NOW( "VL3A_6", 7500, 1 );
                        }
                        else
                        {
                            PRINT_NOW( "V3GARA1", 7500, 1 );
                        }
                    }
                    l_U557 = 1;
                    l_U575 = 1;
                    l_U569 = 0;
                }
            }
            else if (NOT sub_23690())
            {
                if (l_U557 == 0)
                {
                    REMOVE_BLIP( l_U648 );
                    REMOVE_BLIP( l_U649 );
                    if (l_U577 == 0)
                    {
                        ADD_BLIP_FOR_COORD( l_U600._fU0, l_U600._fU4, l_U600._fU8, ref l_U649 );
                        CHANGE_BLIP_SPRITE( l_U649, 91 );
                        SET_ROUTE( l_U649, 1 );
                        CHANGE_BLIP_COLOUR( l_U649, 5 );
                        if (l_U560 == 0)
                        {
                            if (DOES_BLIP_EXIST( l_U649 ))
                            {
                                FLASH_BLIP( l_U649, 1 );
                                l_U560 = 1;
                                SETTIMERB( 0 );
                            }
                        }
                        PRINT_NOW( "VL3A_3", 7500, 1 );
                    }
                    else
                    {
                        l_U603._fU8 -= 1.00000000;
                        ADD_BLIP_FOR_COORD( l_U603._fU0, l_U603._fU4, l_U603._fU8, ref l_U649 );
                        l_U603._fU8 += 1.00000000;
                        SET_ROUTE( l_U649, 1 );
                        PRINT_NOW( "VL3A_1", 7500, 1 );
                    }
                    l_U575 = 1;
                    l_U557 = 1;
                    l_U569 = 0;
                }
            }
        }
        else if (l_U556 < 5)
        {
            if (l_U557 == 1)
            {
                if (NOT (sub_49508( l_U661 )))
                {
                    REMOVE_BLIP( l_U648 );
                    REMOVE_BLIP( l_U649 );
                    ADD_BLIP_FOR_CAR( l_U640, ref l_U648 );
                    SET_BLIP_AS_FRIENDLY( l_U648, 1 );
                    SET_ROUTE( l_U649, 0 );
                    PRINT_NOW( "VL3A_2", 7500, 1 );
                    l_U575 = 0;
                    l_U557 = 0;
                }
            }
        }
    }
    return;
}

int sub_49508(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_23911( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_23911( "\n speech is not playing" );
    }
    return 0;
}

int sub_50073()
{
    if (IS_VEH_DRIVEABLE( l_U640 ))
    {
        if (NOT (CHECK_STUCK_TIMER( l_U640, 3, 60000 )))
        {
            if (NOT (CHECK_STUCK_TIMER( l_U640, 2, 30000 )))
            {
                if (NOT (CHECK_STUCK_TIMER( l_U640, 1, 40000 )))
                {
                    if (NOT (CHECK_STUCK_TIMER( l_U640, 0, 5000 )))
                    {
                        return 1;
                    }
                }
            }
        }
        sub_50196( 2 );
    }
    else
    {
        sub_50196( 1 );
    }
    return 0;
}

void sub_50196(unknown uParam0)
{
    sub_50205();
    switch (uParam0)
    {
        case 0:
        SCRIPT_ASSERT( "ErrorString" );
        break;
        case 1:
        PRINT_NOW( "V3FAIL", 7000, 1 );
        sub_44699( 1, "V3_FAIL", "V3AUD", 0 );
        break;
        case 2:
        PRINT_NOW( "V3FAIL2", 7000, 1 );
        sub_44699( 1, "V3_FAIL", "V3AUD", 0 );
        break;
    }
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_4719(), 150 );
        SAY_AMBIENT_SPEECH( sub_4041(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    sub_2854();
    return;
}

void sub_50205()
{
    sub_50214();
    return;
}

void sub_50214()
{
    int iVar2;

    iVar2 = 1;
    sub_50228( iVar2 );
    sub_1943( iVar2 );
    return;
}

void sub_50228(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_4719(), 150 );
    CLEAR_HELP();
    sub_767( uParam0 );
    return;
}
