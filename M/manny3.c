void main()
{
    l_U172 = 0;
    l_U173 = 0;
    l_U174 = 0;
    l_U175 = 0;
    l_U176 = 0;
    l_U177 = 0;
    l_U178 = 0;
    l_U190 = 10.00000000;
    l_U191 = 10.00000000;
    l_U200 = -1;
    l_U208 = 0;
    l_U209 = 0;
    l_U210 = 0;
    l_U211 = 0;
    l_U216 = 0;
    l_U217 = 1;
    l_U218 = 3;
    l_U220 = 0;
    l_U237 = -1;
    l_U241 = 0;
    l_U242 = 1;
    l_U243 = 1;
    l_U251 = 150.00000000;
    l_U341 = 0;
    l_U342 = 150.00000000;
    l_U392 = 0;
    l_U595 = 25.00000000;
    l_U596 = 110;
    l_U597 = 0;
    l_U598 = 0;
    l_U599 = 2;
    l_U600 = 0;
    l_U601 = 0;
    l_U756 = 1;
    l_U757 = 0;
    l_U758 = 0;
    l_U786 = {1068.31300000, -568.25000000, 30.44080000};
    l_U789 = {1308.76100000, -38.10840000, 38.94080000};
    l_U792 = {1276.03700000, -387.87900000, 31.79080000};
    l_U795 = {416.14500000, 1465.51000000, 9.74410000};
    l_U798 = {439.44500000, 1502.21000000, 22.34410000};
    l_U801 = {1615.37400000, 229.51810000, 21.97750000};
    l_U816 = 0;
    l_U850 = 0;
    l_U851 = -1;
    l_U852 = -1;
    l_U853 = -1;
    l_U855 = {893.44700000, 340.48600000, 35.92230000};
    l_U858 = {892.14590000, 351.55620000, 38.73620000};
    l_U872 = 25.00000000;
    l_U873 = 0;
    l_U874 = 0;
    l_U875 = 0;
    l_U876 = 0;
    l_U877 = 1;
    l_U882 = 5.00000000;
    l_U884 = 0;
    l_U885 = 0;
    l_U886 = 0;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_538();
        sub_2648();
    }
    sub_3783();
    while (l_U756)
    {
        WAIT( 0 );
        switch (l_U597)
        {
            case 0:
            sub_4990();
            sub_5127();
            sub_6088();
            break;
            case 1:
            if (IS_CHAR_IN_ANY_CAR( sub_3660() ))
            {
                SWITCH_ROADS_BACK_TO_ORIGINAL( l_U795._fU0, l_U795._fU4, l_U795._fU8, l_U798._fU0, l_U798._fU4, l_U798._fU8 );
            }
            else
            {
                sub_7238( l_U761._fU0, l_U761._fU4, l_U761._fU8 );
            }
            if (sub_7620( l_U761, 7500, "MANNY3_GETCAR", "MANNY3_GETTO", ref l_U760 ))
            {
                if (sub_7986( 1, 1 ))
                {
                    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U761._fU0 - 30, l_U761._fU4 - 30, l_U761._fU8 - 30, l_U761._fU0 + 30, l_U761._fU4 + 30, l_U761._fU8 + 30 );
                    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U795._fU0, l_U795._fU4, l_U795._fU8, l_U798._fU0, l_U798._fU4, l_U798._fU8 );
                    SET_PLAYER_CONTROL( sub_6795(), 0 );
                    l_U597 = 2;
                }
            }
            break;
            case 2:
            sub_8416();
            break;
            case 3:
            sub_12247( ref l_U602._fU0 );
            sub_12925();
            sub_13931();
            break;
            case 4:
            if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "MANNY3_LB1" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "MANNY3_LB2" )))
            {
                CLEAR_HELP();
            }
            if (NOT (sub_16677( 0.75000000, 1 )))
            {
                sub_17337();
            }
            else
            {
                l_U598 = 2;
                l_U597 = 9;
            }
            break;
            case 5:
            if (NOT (sub_22637( 150.00000000, 0.75000000, "MANNY3_WARN3" )))
            {
                sub_12247( ref l_U602._fU0 );
            }
            else
            {
                sub_3193();
                l_U597 = 6;
            }
            break;
            case 6:
            sub_26278();
            break;
            case 7:
            if (sub_27295())
            {
                CLEAR_THIS_PRINT( "MANNY3_KILL" );
                l_U597 = 8;
            }
            break;
            case 8:
            sub_28573();
            break;
            case 9:
            sub_40906();
            break;
        }
    }
    sub_2648();
    return;
}

void sub_538()
{
    sub_547();
    return;
}

void sub_547()
{
    int iVar2;

    iVar2 = 5;
    sub_561( iVar2 );
    sub_1737( iVar2 );
    return;
}

void sub_561(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_605();
        sub_766();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_874();
            sub_913();
        }
    }
    sub_989();
    sub_1090();
    uVar5 = sub_1203( uParam0 );
    sub_1644( uVar5, 0 );
    return;
}

void sub_605()
{
    sub_619( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_719();
    }
    return;
}

void sub_619(int iParam0)
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

void sub_719()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_766()
{
    sub_775();
    return;
}

void sub_775()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_874()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_913()
{
    sub_922();
    return;
}

void sub_922()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_989()
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

void sub_1090()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1112();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1112()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1203(unknown uParam0)
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
    sub_1602( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1602(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1644(int iParam0, boolean bParam1)
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

void sub_1737(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1746();
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
        sub_2521();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1746()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_1784( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_1784( 1, g_U569[I] )) != 0)
            {
                sub_2070( I );
            }
        }
    }
    if (NOT sub_2236())
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

int sub_1784(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2070(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2155( g_U569 - 1 );
    return;
}

void sub_2155(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2236()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1784( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2521()
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

void sub_2648()
{
    if (IS_VEH_DRIVEABLE( l_U704._fU0 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U602._fU0 )))
        {
            if (IS_CHAR_IN_CAR( l_U602._fU0, l_U704._fU0 ))
            {
                DELETE_CHAR( ref l_U602._fU0 );
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U627[0]._fU0 )))
        {
            if (IS_CHAR_IN_CAR( l_U627[0]._fU0, l_U704._fU0 ))
            {
                DELETE_CHAR( ref l_U627[0]._fU0 );
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U627[1]._fU0 )))
        {
            if (IS_CHAR_IN_CAR( l_U627[1]._fU0, l_U704._fU0 ))
            {
                DELETE_CHAR( ref l_U627[1]._fU0 );
            }
        }
        SET_TRAIN_AUDIO_ROLLOFF( l_U704._fU0, 1.00000000 );
    }
    MARK_MISSION_TRAIN_AS_NO_LONGER_NEEDED( l_U704._fU0 );
    MARK_MISSION_TRAINS_AS_NO_LONGER_NEEDED();
    if (NOT (IS_CAR_DEAD( l_U678._fU0 )))
    {
        LOCK_CAR_DOORS( l_U678._fU0, 7 );
    }
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U678._fU0 );
    DONT_SUPPRESS_CAR_MODEL( l_U678._fU4 );
    sub_2973();
    REMOVE_DECISION_MAKER( l_U804 );
    REMOVE_DECISION_MAKER( l_U805 );
    REMOVE_DECISION_MAKER( l_U807 );
    REMOVE_DECISION_MAKER( l_U808 );
    REMOVE_DECISION_MAKER( l_U806 );
    sub_3113();
    sub_3193();
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U761._fU0 - 30.00000000, l_U761._fU4 - 30.00000000, l_U761._fU8 - 30.00000000, l_U761._fU0 + 30.00000000, l_U761._fU4 + 30.00000000, l_U761._fU8 + 30.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U764[0]._fU0 - 30.00000000, l_U764[0]._fU4 - 30.00000000, l_U764[0]._fU8 - 30.00000000, l_U764[0]._fU0 + 30.00000000, l_U764[0]._fU4 + 30.00000000, l_U764[0]._fU8 + 30.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U761._fU0 - 30, l_U761._fU4 - 30, l_U761._fU8 - 30, l_U761._fU0 + 30, l_U761._fU4 + 30, l_U761._fU8 + 30 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U795._fU0, l_U795._fU4, l_U795._fU8, l_U798._fU0, l_U798._fU4, l_U798._fU8 );
    STOP_PED_SPEAKING( sub_3660(), 0 );
    sub_3709();
    SWITCH_RANDOM_TRAINS( 1 );
    RELEASE_WEATHER();
    CLEAR_HELP();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2973()
{
    int I;

    if (l_U131 != 0)
    {
        for ( I = 0; I <= (l_U131 - 1); I++ )
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U98[I] );
        }
    }
    l_U131 = 0;
    return;
}

void sub_3113()
{
    int I;

    if (l_U165 != 0)
    {
        for ( I = 0; I <= (l_U165 - 1); I++ )
        {
            REMOVE_CAR_RECORDING( l_U132[I] );
        }
    }
    l_U165 = 0;
    return;
}

void sub_3193()
{
    if (l_U211)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED KILL_CHASE_HINT_CAM()" );
    }
    if (IS_HINT_RUNNING())
    {
        HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
    }
    l_U209 = 0;
    l_U208 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_3660()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3709()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_3783()
{
    l_U602._fU8 = "target";
    l_U602._fU12 = -1926041127;
    l_U602._fU16 = 0;
    l_U602._fU36 = 0;
    l_U602._fU40 = 2;
    l_U602._fU44[0] = {1305.52500000, -49.72000000, 38.55140000};
    l_U602._fU44[1] = {1306.04400000, -58.17270000, 34.97270000};
    l_U602._fU44[2] = {1310.24500000, -47.91590000, 35.46000000};
    l_U602._fU44[3] = {1303.82400000, -41.00960000, 28.34170000};
    l_U627[0]._fU8 = "goon 0";
    l_U627[0]._fU12 = 492147228;
    l_U627[0]._fU16 = 7;
    l_U627[0]._fU36 = 1;
    l_U627[0]._fU40 = 0;
    l_U627[0]._fU44[0] = {1305.78400000, -47.72000000, 38.55090000};
    l_U627[0]._fU44[1] = {1306.04400000, -58.17270000, 34.97270000};
    l_U627[0]._fU44[2] = {1310.24500000, -47.91590000, 35.46000000};
    l_U627[0]._fU44[3] = {1303.82400000, -41.00960000, 28.34170000};
    l_U627[1]._fU8 = "goon 1";
    l_U627[1]._fU12 = l_U627[0]._fU12;
    l_U627[1]._fU16 = 7;
    l_U627[1]._fU36 = 2;
    l_U627[1]._fU40 = -1;
    l_U627[1]._fU44[0] = {1305.87600000, -46.97170000, 38.55090000};
    l_U627[1]._fU44[1] = {1306.04400000, -58.17270000, 34.97270000};
    l_U627[1]._fU44[2] = {1310.24500000, -47.91590000, 35.46000000};
    l_U627[1]._fU44[3] = {1303.82400000, -41.00960000, 28.34170000};
    l_U678._fU4 = -685276541;
    l_U678._fU8 = {1299.13400000, -33.45570000, 27.88080000};
    l_U678._fU20 = 333.53750000;
    l_U704._fU4 = 800869680;
    l_U704._fU8 = {751.16300000, 252.12500000, 34.67920000};
    l_U704._fU20 = 333.53750000;
    switch (g_U64569 mod 3)
    {
        case 0:
        l_U836 = "M3_CFAIL1";
        break;
        case 1:
        l_U836 = "M3_2CLOSE";
        break;
        default: l_U836 = "M3_2CLOSE2";
    }
    l_U761 = {877.07520000, 338.02080000, 38.28430000};
    l_U764[0] = {1299.17000000, -33.47360000, 27.87860000};
    l_U764[1] = {1305.67600000, 38.30180000, 32.90640000};
    l_U764[2] = {1263.35700000, 2.29360000, 35.57780000};
    l_U764[3] = {1239.28700000, -78.63730000, 27.69280000};
    l_U764[4] = {1225.10300000, -138.80250000, 27.37370000};
    l_U764[5] = {1207.08600000, -127.37000000, 27.57250000};
    l_U764[6] = {1209.11900000, -98.75620000, 27.74290000};
    switch (g_U64560)
    {
        case 0:
        l_U596 = 125;
        break;
        case 1:
        l_U596 = 150;
        break;
        default:
          case 2: l_U596 = 175;
    }
    l_U730._fU8 = {434.28230000, 1472.47800000, 10.73170000};
    l_U730._fU20 = 210.00000000;
    FORCE_WEATHER( l_U599 );
    return;
}

void sub_4990()
{
    if (g_U9893._fU24)
    {
        LOAD_ADDITIONAL_TEXT( "M3AUD", 6 );
        START_CUTSCENE_NOW( "EM_5" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "EM_5" );
        FORCE_WEATHER_NOW( l_U599 );
    }
    return;
}

void sub_5127()
{
    sub_5141( 1159759556 );
    sub_5141( l_U602._fU12 );
    sub_5141( l_U627[0]._fU12 );
    sub_5379( l_U704._fU4 );
    sub_5379( l_U678._fU4 );
    SUPPRESS_CAR_MODEL( l_U678._fU4 );
    sub_5507( 7 );
    sub_5544( 663 );
    LOAD_ADDITIONAL_TEXT( "MANNY3", 0 );
    sub_5622( "Manny1" );
    sub_5800( "M3AUD" );
    sub_5919( 0, sub_3660(), "NIKO", 0 );
    LOAD_ADDITIONAL_TEXT( "M3AUD", 6 );
    return;
}

void sub_5141(unknown uParam0)
{
    char[64] cVar3;

    if (IS_THIS_MODEL_A_PED( uParam0 ))
    {
        sub_5166( uParam0 );
    }
    else
    {
        StrCopy( ref cVar3, "model ", 64 );
        ConcatString(ref cVar3, GET_MODEL_NAME_FOR_DEBUG( uParam0 ), 64);
        ConcatString(ref cVar3, " not a ped model", 64);
        SCRIPT_ASSERT( ref cVar3 );
    }
    return;
}

void sub_5166(unknown uParam0)
{
    sub_5194( "REQUEST_A_MODEL(" );
    sub_5194( GET_MODEL_NAME_FOR_DEBUG( uParam0 ) );
    sub_5194( ")\n" );
    REQUEST_MODEL( uParam0 );
    l_U98[l_U131] = uParam0;
    l_U131++;
    return;
}

void sub_5194(unknown uParam0)
{
    return;
}

void sub_5379(unknown uParam0)
{
    char[64] cVar3;

    if (IS_THIS_MODEL_A_VEHICLE( uParam0 ))
    {
        sub_5166( uParam0 );
    }
    else
    {
        StrCopy( ref cVar3, "model ", 64 );
        ConcatString(ref cVar3, GET_MODEL_NAME_FOR_DEBUG( uParam0 ), 64);
        ConcatString(ref cVar3, " not a vehicle model", 64);
        SCRIPT_ASSERT( ref cVar3 );
    }
    return;
}

void sub_5507(unknown uParam0)
{
    unknown uVar3;

    GET_WEAPONTYPE_MODEL( uParam0, ref uVar3 );
    sub_5166( uVar3 );
    return;
}

void sub_5544(unknown uParam0)
{
    REQUEST_CAR_RECORDING( uParam0 );
    l_U132[l_U165] = uParam0;
    l_U165++;
    return;
}

void sub_5622(unknown uParam0)
{
    string sVar3;

    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    StrCopy( ref g_U9232, uParam0, 32 );
    sVar3 = "text_link_mission";
    if (IS_NETWORK_SESSION())
    {
        sVar3 = "txtlnkmiss_net";
    }
    while (NOT (HAS_SCRIPT_LOADED( sVar3 )))
    {
        REQUEST_SCRIPT( sVar3 );
        WAIT( 0 );
    }
    g_U9240 = START_NEW_SCRIPT( sVar3, 1024 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( sVar3 );
    return;
}

void sub_5800(unknown uParam0)
{
    StrCopy( ref l_U0._fU0, uParam0, 16 );
    sub_5817();
    return;
}

void sub_5817()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U0._fU16[I]._fU0 = nil;
        StrCopy( ref l_U0._fU16[I]._fU4, "", 32 );
        l_U0._fU344[I] = 0;
    }
    return;
}

void sub_5919(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U0._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U0._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_5999( "\n PED NUMBER ", uParam0 );
    sub_6039( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_5999(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6039(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6088()
{
    while ((NOT sub_6097()) || (NOT sub_6282()))
    {
        WAIT( 0 );
    }
    # -sub_C1FFC0-0xc214c8( 3, ref l_U804 );
    # -sub_C1FFC0-0xc214c8( 2, ref l_U805 );
    LOAD_COMBAT_DECISION_MAKER( 10, ref l_U807 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U808 );
    LOAD_COMBAT_DECISION_MAKER( 1, ref l_U806 );
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U730._fU0 );
    if (NOT (IS_CAR_DEAD( l_U730._fU0 )))
    {
        SET_CAR_HEADING( l_U730._fU0, l_U730._fU20 );
        SET_CAR_COORDINATES( l_U730._fU0, l_U730._fU8._fU0, l_U730._fU8._fU4, l_U730._fU8._fU8 );
        sub_6565( l_U730._fU0 );
    }
    SWITCH_ROADS_OFF( l_U795._fU0, l_U795._fU4, l_U795._fU8, l_U798._fU0, l_U798._fU4, l_U798._fU8 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3660() );
    SET_CHAR_COORDINATES( sub_3660(), 410.69450000, 1475.65100000, 10.62400000 );
    SET_CHAR_HEADING( sub_3660(), 276.14790000 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    if (NOT (IS_PLAYER_CONTROL_ON( sub_6795() )))
    {
        SET_PLAYER_CONTROL( sub_6795(), 1 );
    }
    if (NOT IS_SCREEN_FADED_IN())
    {
        DO_SCREEN_FADE_IN( 500 );
    }
    ADD_BLIP_FOR_COORD( l_U761._fU0, l_U761._fU4, l_U761._fU8, ref l_U760 );
    SET_ROUTE( l_U760, 1 );
    sub_6936( 410.69450000, 1475.65100000, 10.62400000, 1 );
    PRINT( "MANNY3_DRIVETO", 7500, 1 );
    l_U597 = 1;
    return;
}

int sub_6097()
{
    int I;

    if (l_U131 != 0)
    {
        for ( I = 0; I <= (l_U131 - 1); I++ )
        {
            if (NOT (HAS_MODEL_LOADED( l_U98[I] )))
            {
                REQUEST_MODEL( l_U98[I] );
                sub_5194( "REQUEST_MODEL(" );
                sub_5194( GET_MODEL_NAME_FOR_DEBUG( l_U98[I] ) );
                sub_5194( ") [" );
                sub_6230( I );
                sub_5194( "]\n" );
                return 0;
            }
        }
    }
    return 1;
}

void sub_6230(unknown uParam0)
{
    return;
}

int sub_6282()
{
    int I;

    if (l_U165 != 0)
    {
        for ( I = 0; I <= (l_U165 - 1); I++ )
        {
            if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U132[I] )))
            {
                REQUEST_CAR_RECORDING( l_U132[I] );
                return 0;
            }
        }
    }
    return 1;
}

void sub_6565(unknown uParam0)
{
    unknown uVar3;

    GET_CAR_MODEL( uParam0, ref uVar3 );
    if ((NOT (IS_THIS_MODEL_A_BOAT( uVar3 ))) AND (NOT (IS_THIS_MODEL_A_HELI( uVar3 ))))
    {
        SET_CAR_ON_GROUND_PROPERLY( uParam0 );
    }
    else
    {
        APPLY_FORCE_TO_CAR( uParam0, 0, 0.00000000, 0.00000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
    }
    return;
}

void sub_6795()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_6936(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    vector vVar6;
    vector vVar9;
    float fVar12;

    vVar6 = {398.43800000, 1477.37000000, 10.61100000};
    vVar9 = {388.43800000, 1484.07000000, 10.61100000};
    fVar12 = 15.00000000;
    CLEAR_AREA( vVar6.x, vVar6.y, vVar6.z, fVar12, uParam3 );
    CLEAR_AREA( vVar9.x, vVar9.y, vVar9.z, fVar12, uParam3 );
    CLEAR_AREA( uParam0._fU0, uParam0._fU4, uParam0._fU8, 1.50000000, uParam3 );
    CLEAR_AREA_OF_CHARS( uParam0._fU0, uParam0._fU4, uParam0._fU8, 25.00000000 );
    return;
}

void sub_7238(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    if (NOT (sub_7263( uParam0, uParam1, uParam2, l_U190, 1120403456 )))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3660(), uParam0, uParam1, uParam2, 50.00000000, 50.00000000, 50.00000000, 0 )))
        {
            GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar5 );
            if (DOES_VEHICLE_EXIST( uVar5 ))
            {
                if (NOT (IS_CAR_DEAD( uVar5 )))
                {
                    if (NOT (LOCATE_CAR_3D( uVar5, uParam0, uParam1, uParam2, l_U190, l_U190, l_U190, 0 )))
                    {
                        CLEAR_AREA_OF_CARS( uParam0, uParam1, uParam2, l_U190 );
                    }
                }
            }
            else
            {
                CLEAR_AREA_OF_CARS( uParam0, uParam1, uParam2, l_U190 );
            }
        }
    }
    return;
}

int sub_7263(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (sub_7280( uParam0, uParam1, uParam2, uParam3 ))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_3660(), uParam0, uParam1, uParam4, uParam4, 0 )))
        {
            return 0;
        }
        else if (IS_SCREEN_FADED_OUT())
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int sub_7280(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0, uParam1, uParam2, uParam3 ))
    {
        return 1;
    }
    return 0;
}

int sub_7620(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    if (NOT (DOES_BLIP_EXIST( (uParam6^) )))
    {
        ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam6 );
        SET_ROUTE( (uParam6^), 1 );
    }
    if (NOT (IS_CHAR_IN_ANY_CAR( sub_3660() )))
    {
        if (LOCATE_CHAR_ON_FOOT_3D( sub_3660(), uParam0._fU0, uParam0._fU4, uParam0._fU8, 2.50000000, 2.50000000, 2.50000000, 1 ))
        {
            if (l_U877)
            {
                if (NOT l_U876)
                {
                    l_U877 = 0;
                    CLEAR_THIS_PRINT( uParam5 );
                    PRINT( uParam4, uParam3, 1 );
                }
                else
                {
                    l_U877 = 0;
                    CLEAR_THIS_PRINT( uParam5 );
                    PRINT( uParam4, uParam3, 1 );
                }
            }
        }
    }
    else if (NOT l_U877)
    {
        l_U877 = 1;
        CLEAR_THIS_PRINT( uParam4 );
        PRINT( uParam5, uParam3, 1 );
    }
    else if (NOT l_U876)
    {
        CLEAR_THIS_PRINT( "MANNY3_DRIVETO" );
        PRINT( uParam5, uParam3, 1 );
        l_U876 = 1;
    }
    if (LOCATE_CHAR_IN_CAR_3D( sub_3660(), uParam0._fU0, uParam0._fU4, uParam0._fU8, 2.50000000, 2.50000000, 2.50000000, 1 ))
    {
        return 1;
    };;;
    return 0;
}

int sub_7986(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3660() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3660(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3660() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3660(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3660()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3660() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3660() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_6795() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_6795() )))
    {
        return 0;
    }
    return 1;
}

void sub_8416()
{
    int I;

    if (sub_8434( ref l_U758, l_U600 ))
    {
        l_U600 = 3;
    }
    switch (l_U600)
    {
        case 0:
        if (NOT (DOES_VEHICLE_EXIST( l_U704._fU0 )))
        {
            while (NOT sub_8686())
            {
                WAIT( 0 );
            }
            SWITCH_RANDOM_TRAINS( 0 );
            SET_USE_HIGHDOF( 1 );
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3660(), 1 );
            DISPLAY_RADAR( 0 );
            sub_8825( ref l_U809 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            sub_8961( l_U704._fU8._fU0, l_U704._fU8._fU4, l_U704._fU8._fU8, l_U872 );
            GET_CAR_CHAR_IS_USING( sub_3660(), ref l_U759 );
            if (IS_VEH_DRIVEABLE( l_U759 ))
            {
                sub_6565( l_U759 );
                SET_VEH_HAS_STRONG_AXLES( l_U759, 1 );
                SET_CAR_HEALTH( l_U759, 1000 );
            }
            SWITCH_ROADS_OFF( l_U761._fU0 - 30.00000000, l_U761._fU4 - 30.00000000, l_U761._fU8 - 30.00000000, l_U761._fU0 + 30.00000000, l_U761._fU4 + 30.00000000, l_U761._fU8 + 30.00000000 );
            if (DOES_BLIP_EXIST( l_U760 ))
            {
                REMOVE_BLIP( l_U760 );
            }
            CREATE_CAM( 14, ref l_U864[0] );
            CREATE_CAM( 14, ref l_U864[1] );
            if (GET_IS_WIDESCREEN())
            {
                SET_CAM_POS( l_U864[0], 895.51210000, 353.24840000, 39.90803000 );
                SET_CAM_ROT( l_U864[0], 1.77082200, -0.00000000, 110.91880000 );
                SET_CAM_POS( l_U864[1], 895.14390000, 353.16410000, 39.92101000 );
                SET_CAM_ROT( l_U864[1], 1.77082200, -0.00000000, 117.45020000 );
            }
            else
            {
                SET_CAM_POS( l_U864[0], 895.51210000, 353.24840000, 39.90803000 );
                SET_CAM_ROT( l_U864[0], 1.77082200, -0.00000000, 110.91880000 );
                SET_CAM_POS( l_U864[1], 895.14390000, 353.16410000, 39.92101000 );
                SET_CAM_ROT( l_U864[1], 1.77082200, -0.00000000, 117.45020000 );
            }
            SET_CAM_FOV( l_U864[0], 35.00000000 );
            SET_CAM_NEAR_DOF( l_U864[0], 8.00000000 );
            SET_CAM_FAR_DOF( l_U864[0], 85.00000000 );
            SET_CAM_FOV( l_U864[1], 35.00000000 );
            SET_CAM_NEAR_DOF( l_U864[1], 8.00000000 );
            SET_CAM_FAR_DOF( l_U864[1], 85.00000000 );
            CREATE_CAM( 3, ref l_U864[2] );
            CREATE_CAM( 14, ref l_U868[0] );
            SET_CAM_POS( l_U868[0], 883.41250000, 265.12570000, 36.37964000 );
            SET_CAM_ROT( l_U868[0], 2.11459300, -0.00000000, 115.96530000 );
            SET_CAM_FOV( l_U868[0], 35.00000000 );
            SET_CAM_NEAR_DOF( l_U868[0], 11.00000000 );
            SET_CAM_FAR_DOF( l_U868[0], 47.50000000 );
            CREATE_CAM( 14, ref l_U868[1] );
            SET_CAM_POS( l_U868[1], 884.18490000, 265.50200000, 36.34793000 );
            SET_CAM_ROT( l_U868[1], 2.11459900, -0.00000000, 115.96530000 );
            SET_CAM_FOV( l_U868[1], 35.00000000 );
            SET_CAM_NEAR_DOF( l_U868[1], 11.00000000 );
            SET_CAM_FAR_DOF( l_U868[1], 47.50000000 );
            CREATE_CAM( 3, ref l_U868[2] );
            SET_CAM_INTERP_STYLE_CORE( l_U864[2], l_U864[0], l_U864[1], 3000, 0 );
            SET_CAM_ACTIVE( l_U864[0], 1 );
            SET_CAM_ACTIVE( l_U864[1], 1 );
            SET_CAM_ACTIVE( l_U864[2], 1 );
            SET_CAM_PROPAGATE( l_U864[2], 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            SET_WIDESCREEN_BORDERS( 1 );
            l_U855 = {893.13370000, 343.20220000, 36.55670000};
            CLEAR_AREA( l_U855._fU0, l_U855._fU4, l_U855._fU8, 50.00000000, 1 );
            if (CAN_CREATE_RANDOM_CHAR( 0, 1 ))
            {
                CREATE_RANDOM_FEMALE_CHAR( l_U855._fU0, l_U855._fU4, l_U855._fU8, ref l_U854 );
            }
            else
            {
                REQUEST_MODEL( 761763258 );
                while (NOT (HAS_MODEL_LOADED( 761763258 )))
                {
                    WAIT( 0 );
                }
                CREATE_CHAR( 5, 761763258, l_U855._fU0, l_U855._fU4, l_U855._fU8, ref l_U854, 1 );
            }
            SET_CHAR_HEADING( l_U854, l_U861 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U854 );
            TASK_GO_STRAIGHT_TO_COORD( l_U854, l_U858._fU0, l_U858._fU4, l_U858._fU8, 2, -2 );
            SETTIMERB( 0 );
            l_U600 = 1;
        }
        break;
        case 1:
        if (IS_VEH_DRIVEABLE( l_U704._fU0 ))
        {
            if (NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U864[2] )))
            {
                DO_SCREEN_FADE_OUT( 125 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                LOAD_SCENE( 884.18490000, 265.50200000, 36.34793000 );
                SET_CAM_PROPAGATE( l_U864[2], 0 );
                SET_CAM_INTERP_STYLE_CORE( l_U868[2], l_U868[0], l_U868[1], 4500, 0 );
                SET_CAM_ACTIVE( l_U868[0], 1 );
                SET_CAM_ACTIVE( l_U868[1], 1 );
                SET_CAM_ACTIVE( l_U868[2], 1 );
                SET_CAM_PROPAGATE( l_U868[2], 1 );
                if (IS_VEH_DRIVEABLE( l_U704._fU0 ))
                {
                    SET_TRAIN_SPEED( l_U704._fU0, l_U872 );
                }
                GET_GAME_TIMER( ref l_U863 );
                DO_SCREEN_FADE_IN( 125 );
                l_U600 = 2;
            }
        }
        break;
        case 2:
        if (IS_VEH_DRIVEABLE( l_U840[2] ))
        {
            if (NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U868[2] )))
            {
                DO_SCREEN_FADE_OUT( 125 );
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                l_U600 = 4;
            }
        }
        break;
        case 3:
        DO_SCREEN_FADE_OUT( 250 );
        l_U600 = 4;
        break;
        case 4:
        if (IS_SCREEN_FADED_OUT())
        {
            for ( I = 0; I < l_U864; I++ )
            {
                SET_CAM_PROPAGATE( l_U864[I], 0 );
                SET_CAM_ACTIVE( l_U864[I], 0 );
            }
            for ( I = 0; I < l_U868; I++ )
            {
                SET_CAM_PROPAGATE( l_U868[I], 0 );
                SET_CAM_ACTIVE( l_U868[I], 0 );
            }
            SET_USE_HIGHDOF( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            sub_11659( ref l_U809 );
            sub_11774( 893.28440000, 257.12280000, 34.38660000, l_U872 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U854 );
            if (HAS_MODEL_LOADED( 761763258 ))
            {
                MARK_MODEL_AS_NO_LONGER_NEEDED( 761763258 );
            }
            DISPLAY_RADAR( 1 );
            SET_PLAYER_CONTROL( sub_6795(), 1 );
            SET_WIDESCREEN_BORDERS( 0 );
            sub_3709();
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3660(), 0 );
            CLEAR_AREA( l_U761._fU0, l_U761._fU4, l_U761._fU8, 30.00000000, 1 );
            SWITCH_ROADS_BACK_TO_ORIGINAL( l_U761._fU0 - 30.00000000, l_U761._fU4 - 30.00000000, l_U761._fU8 - 30.00000000, l_U761._fU0 + 30.00000000, l_U761._fU4 + 30.00000000, l_U761._fU8 + 30.00000000 );
            if (NOT (DOES_BLIP_EXIST( l_U602._fU4 )))
            {
                ADD_BLIP_FOR_CHAR( l_U602._fU0, ref l_U602._fU4 );
                SET_BLIP_AS_FRIENDLY( l_U602._fU4, 0 );
            }
            GET_GAME_TIMER( ref l_U812 );
            SET_CAM_BEHIND_PED( sub_3660() );
            FORCE_WEATHER_NOW( l_U599 );
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3660(), 0 );
            SET_WANTED_MULTIPLIER( 0.10000000 );
            PRINT( "MANNY3_B1", 7500, 1 );
            DO_SCREEN_FADE_IN( 125 );
            l_U597 = 3;
        }
        break;
    }
    return;
}

int sub_8434(unknown uParam0, int iParam1)
{
    if ((uParam0^))
    {
        if (((sub_8451()) AND (IS_SCREEN_FADED_IN())) AND (iParam1 > 0))
        {
            return 1;
        }
        else
        {
            (uParam0^) = 0;
        }
    }
    if (NOT sub_8451())
    {
        (uParam0^) = 1;
    }
    return 0;
}

int sub_8451()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_8686()
{
    return sub_8697( 1, 1 );
}

int sub_8697(boolean bParam0, unknown uParam1)
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

void sub_8825(unknown uParam0)
{
    BEGIN_CAM_COMMANDS( uParam0 );
    if ((uParam0^) != 1)
    {
        PRINTSTRING( "  ## ar_BEGIN_CAM_COMMANDS(" );
        PRINTINT( (uParam0^) );
        PRINTSTRING( ")\n" );
    }
    return;
}

void sub_8961(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    CREATE_MISSION_TRAIN( 4, uParam0, uParam1, uParam2, 1, ref l_U704._fU0 );
    SET_TRAIN_SPEED( l_U704._fU0, uParam3 );
    SET_TRAIN_AUDIO_ROLLOFF( l_U704._fU0, 3.00000000 );
    GET_TRAIN_CARRIAGE( l_U704._fU0, 0, ref l_U840[0] );
    GET_TRAIN_CARRIAGE( l_U704._fU0, 1, ref l_U840[1] );
    GET_TRAIN_CARRIAGE( l_U704._fU0, 2, ref l_U840[2] );
    if (IS_VEH_DRIVEABLE( l_U840[1] ))
    {
        CREATE_CHAR_AS_PASSENGER( l_U840[1], 26, l_U602._fU12, l_U602._fU36, ref l_U602._fU0 );
        sub_5919( 1, l_U602._fU0, "BANGER_1", 0 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U602._fU0 );
        SET_CHAR_NAME_DEBUG( l_U602._fU0, l_U602._fU8 );
        SET_CHAR_DECISION_MAKER( l_U602._fU0, l_U805 );
        SET_COMBAT_DECISION_MAKER( l_U602._fU0, l_U807 );
        SET_CHAR_IS_TARGET_PRIORITY( l_U602._fU0, 1 );
        SET_PED_DIES_WHEN_INJURED( l_U602._fU0, 1 );
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U602._fU0, 0 );
        SET_CHAR_AS_ENEMY( l_U602._fU0, 1 );
        CREATE_CHAR_AS_PASSENGER( l_U840[1], 26, l_U627[0]._fU12, l_U627[0]._fU36, ref l_U627[0]._fU0 );
        sub_5919( 2, l_U627[0]._fU0, "BANGER_2", 0 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U627[0]._fU0 );
        SET_CHAR_NAME_DEBUG( l_U627[0]._fU0, l_U627[0]._fU8 );
        GIVE_WEAPON_TO_CHAR( l_U627[0]._fU0, l_U627[0]._fU16, 30000, 0 );
        SET_CHAR_DECISION_MAKER( l_U627[0]._fU0, l_U805 );
        SET_COMBAT_DECISION_MAKER( l_U627[0]._fU0, l_U807 );
        SET_CHAR_ACCURACY( l_U627[0]._fU0, 40 );
        SET_PED_DIES_WHEN_INJURED( l_U627[0]._fU0, 1 );
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U627[0]._fU0, 0 );
        SET_CHAR_AS_ENEMY( l_U627[0]._fU0, 1 );
        CREATE_CHAR_AS_PASSENGER( l_U840[1], 26, l_U627[1]._fU12, l_U627[1]._fU36, ref l_U627[1]._fU0 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U627[1]._fU0 );
        SET_CHAR_NAME_DEBUG( l_U627[1]._fU0, l_U627[1]._fU8 );
        GIVE_WEAPON_TO_CHAR( l_U627[1]._fU0, l_U627[1]._fU16, 30000, 0 );
        SET_CHAR_DECISION_MAKER( l_U627[1]._fU0, l_U805 );
        SET_COMBAT_DECISION_MAKER( l_U627[1]._fU0, l_U808 );
        SET_CHAR_ACCURACY( l_U627[1]._fU0, 40 );
        SET_PED_DIES_WHEN_INJURED( l_U627[1]._fU0, 1 );
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U627[1]._fU0, 0 );
        SET_CHAR_AS_ENEMY( l_U627[1]._fU0, 1 );
    }
    GET_TRAIN_CABOOSE( l_U704._fU0, ref l_U844 );
    return;
}

void sub_11659(unknown uParam0)
{
    END_CAM_COMMANDS( uParam0 );
    if ((uParam0^) != 0)
    {
        PRINTSTRING( "  ## ar_BEGIN_CAM_COMMANDS(" );
        PRINTINT( (uParam0^) );
        PRINTSTRING( ")\n" );
    }
    return;
}

void sub_11774(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    DELETE_CHAR( ref l_U602._fU0 );
    DELETE_CHAR( ref l_U627[0]._fU0 );
    DELETE_CHAR( ref l_U627[1]._fU0 );
    DELETE_MISSION_TRAIN( l_U704._fU0 );
    sub_8961( uParam0, uParam1, uParam2, uParam3 );
    return;
}

void sub_12247(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U211)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((l_U209) AND (IS_HINT_RUNNING()))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U210 + 500))
        {
            l_U209 = 0;
        }
    }
    if (((((IS_CONTROL_PRESSED( 0, 51 )) AND (IS_CHAR_IN_ANY_CAR( sub_3660() ))) AND (NOT (IS_CHAR_DEAD( (uParam0^) )))) AND (NOT sub_12415())) AND (iVar3 != 4))
    {
        if ((NOT IS_HINT_RUNNING()) AND (IS_CHAR_IN_ANY_CAR( (uParam0^) )))
        {
            if (l_U211)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U210 );
            l_U209 = 1;
            l_U208 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U208) AND (NOT l_U209))
        {
            if (l_U211)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U208 = 1;
        }
    }
    else if (l_U208)
    {
        if (l_U211)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U208 = 0;
    };;;
    return;
}

int sub_12415()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_12925()
{
    int iVar2;
    unknown uVar3;

    if ((IS_CHAR_SITTING_IN_ANY_CAR( sub_3660() )) AND (IS_VEH_DRIVEABLE( l_U704._fU0 )))
    {
        if (sub_12966())
        {
            GET_GAME_TIMER( ref iVar2 );
            if (iVar2 > (l_U811 + 12000))
            {
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "MANNY3_LB1" ))
                {
                    CLEAR_HELP();
                }
            }
            l_U873 = 1;
        }
        else
        {
            l_U873 = 0;
        }
        if (l_U873)
        {
            l_U874 = 1;
        }
        else
        {
            GET_GAME_TIMER( ref iVar2 );
            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "MANNY3_LB1" )))
            {
                if (NOT l_U875)
                {
                    if (iVar2 > (l_U812 + 7500))
                    {
                        GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref uVar3 );
                        if (sub_13174())
                        {
                            sub_13252( "MANNY3_LB", 1, 7500 );
                            GET_GAME_TIMER( ref l_U811 );
                            l_U875 = 1;
                        }
                    }
                }
                else if (NOT l_U874)
                {
                    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref uVar3 );
                    if (sub_13174())
                    {
                        if (iVar2 > (l_U811 + 30000))
                        {
                            PRINT_HELP( "MANNY3_LB1" );
                            GET_GAME_TIMER( ref l_U811 );
                        }
                    }
                }
            }
            else
            {
                GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref uVar3 );
                if ((NOT sub_13174()) || (iVar2 > (l_U811 + 12000)))
                {
                    if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "MANNY3_LB1" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "MANNY3_LB2" )))
                    {
                        CLEAR_HELP();
                    }
                }
            }
        }
    }
    else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "MANNY3_LB1" ))
    {
        CLEAR_HELP();
    }
    return;
}

int sub_12966()
{
    if (IS_CONTROL_PRESSED( 2, 51 ))
    {
        return 1;
    }
    return 0;
}

int sub_13174()
{
    int iVar2;

    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar2 );
    if (((iVar2 != 4) AND (iVar2 != 5)) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_3660() )))
    {
        return 1;
    }
    return 0;
}

void sub_13252(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_13272( 1, "", -1, uParam0, uParam1, uParam2 );
    return;
}

void sub_13272(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if ((I == iParam0) || (iParam0 == 2))
        {
            sub_13314( I );
            sub_13431( uParam5, I );
            switch (I)
            {
                case 0:
                StrCopy( ref g_U9241._fU28[0], uParam1, 16 );
                g_U9241._fU100[0] = uParam2;
                break;
                case 1:
                StrCopy( ref g_U9241._fU28[1], uParam3, 16 );
                g_U9241._fU100[1] = uParam4;
                break;
            }
            g_U9241._fU112[I] = 0;
            if (iParam0 == 2)
            {
                g_U9241._fU148[I] = 3;
            }
            else
            {
                g_U9241._fU148[I] = 1;
            }
            g_U9241._fU136[I] = -1;
            g_U9241._fU124[I] = 0;
        }
    }
    return;
}

void sub_13314(int iParam0)
{
    if (iParam0 == 0)
    {
        CLEAR_THIS_PRINT( ref g_U9241._fU64[0] );
    }
    else
    {
        sub_13366( ref g_U9241._fU64[1] );
    }
    return;
}

void sub_13366(unknown uParam0)
{
    if (DOES_TEXT_LABEL_EXIST( uParam0 ))
    {
        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( uParam0 ))
        {
            CLEAR_HELP();
        }
    }
    return;
}

void sub_13431(int iParam0, unknown uParam1)
{
    if (iParam0 == -1)
    {
        g_U9241._fU16[uParam1] = 6000;
    }
    else
    {
        g_U9241._fU16[uParam1] = iParam0;
    }
    return;
}

void sub_13931()
{
    if (IS_VEH_DRIVEABLE( l_U704._fU0 ))
    {
        if (LOCATE_CAR_3D( l_U704._fU0, l_U789._fU0, l_U789._fU4, l_U789._fU8, 6.00000000, 6.00000000, 6.00000000, 0 ))
        {
            SWITCH_ROADS_OFF( l_U764[0]._fU0 - 30.00000000, l_U764[0]._fU4 - 30.00000000, l_U764[0]._fU8 - 30.00000000, l_U764[0]._fU0 + 30.00000000, l_U764[0]._fU4 + 30.00000000, l_U764[0]._fU8 + 30.00000000 );
            PRINT_NOW( "MANNY3_STOP", 7500, 1 );
            GENERATE_RANDOM_INT_IN_RANGE( 6000, 10000, ref l_U810 );
            SETTIMERA( 0 );
            l_U817 = 0;
            if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "MANNY3_LB1" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "MANNY3_LB2" )))
            {
                CLEAR_HELP();
            }
            RELEASE_WEATHER();
            sub_3193();
            SET_TRAIN_FORCED_TO_SLOW_DOWN( l_U704._fU0, 1 );
            SET_TRAIN_SPEED( l_U704._fU0, 0.00000000 );
            SET_TRAIN_IS_STOPPED_AT_STATION( l_U704._fU0 );
            l_U597 = 4;
        }
        else if (LOCATE_CAR_3D( l_U704._fU0, l_U789._fU0, l_U789._fU4, l_U789._fU8, 20.00000000, 20.00000000, 20.00000000, 0 ))
        {
            SET_TRAIN_SPEED( l_U704._fU0, sub_14366( 1.00000000 ) );
        }
        else
        {
            SET_TRAIN_SPEED( l_U704._fU0, sub_14366( 0.80000000 ) );
        }
        if (NOT l_U816)
        {
            if (LOCATE_CAR_3D( l_U704._fU0, l_U792._fU0, l_U792._fU4, l_U792._fU8, 6.00000000, 6.00000000, 6.00000000, 0 ))
            {
                l_U816 = 1;
            }
        }
    }
    if (NOT (DOES_VEHICLE_EXIST( l_U678._fU0 )))
    {
        if (LOCATE_CHAR_IN_CAR_2D( sub_3660(), l_U678._fU8._fU0, l_U678._fU8._fU4, 180.00000000, 180.00000000, 0 ))
        {
            CREATE_CAR( l_U678._fU4, l_U678._fU8._fU0, l_U678._fU8._fU4, l_U678._fU8._fU8, ref l_U678._fU0, 1 );
            SET_CAR_HEADING( l_U678._fU0, l_U678._fU20 );
            LOCK_CAR_DOORS( l_U678._fU0, 3 );
        }
    }
    return;
}

void sub_14366(unknown uParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;
    float Result;

    l_U813 = sub_14382( l_U704._fU0 );
    l_U814 = l_U596;
    if (l_U816)
    {
        l_U595 = 19.00000000;
    }
    l_U815 = l_U814 * uParam0;
    if (l_U813 > l_U814)
    {
        if (NOT (IS_CAR_ON_SCREEN( l_U704._fU0 )))
        {
            sub_5194( "  FAILED: " );
            sub_14568( l_U813 );
            sub_5194( " > " );
            sub_14568( l_U814 );
            sub_5194( "!!!\n" );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            sub_3193();
            l_U598 = 1;
            l_U597 = 9;
            return -1.00000000;
        }
    }
    else if (l_U813 > l_U815)
    {
        if (NOT (sub_14697( l_U818 )))
        {
            if (NOT l_U837)
            {
                if (sub_14894( "M3_LOSING", ref l_U818, 6, 1 ))
                {
                    l_U837 = 1;
                }
            }
        }
    }
    else
    {
        CLEAR_THIS_PRINT( "MANNY3_WARN1" );
        l_U837 = 0;
    }
    fVar3 = (l_U814 - l_U813) / l_U814;
    fVar4 = (1 - fVar3) * 4.00000000;
    fVar5 = fVar3 * l_U595;
    Result = fVar4 + fVar5;
    if ((sub_15935()) || (l_U813 < 20.00000000))
    {
        if (NOT l_U757)
        {
            l_U757 = 1;
            SETTIMERA( 0 );
            l_U817 = 0;
        }
        else if (TIMERA() > 3000)
        {
            Result += (l_U595 - Result) * 2.00000000;
            if (Result > (l_U595 * 2.00000000))
            {
                Result = l_U595 * 2.00000000;
            }
        }
        l_U817 = TIMERA();;
    }
    else
    {
        l_U757 = 0;
    }
    l_U704._fU100 = Result;
    return Result;
}

void sub_14382(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown Result;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_COORDINATES( uParam0, ref uVar3, ref uVar4, ref uVar5 );
        GET_CHAR_COORDINATES( sub_3660(), ref uVar6, ref uVar7, ref uVar8 );
        GET_DISTANCE_BETWEEN_COORDS_2D( uVar3, uVar4, uVar6, uVar7, ref Result );
    }
    return Result;
}

void sub_14568(unknown uParam0)
{
    return;
}

int sub_14697(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_5194( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_5194( "\n speech is not playing" );
    }
    return 0;
}

void sub_14894(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_14915( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

void sub_14915(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_14969( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_14969(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_14991( iParam1 )))
    {
        return 0;
    }
    l_U0._fU384 = 0;
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
    sub_15667( ref g_U8395, ref l_U0 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_14991(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_5194( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_5194( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_5194( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_15667(int iParam0, int iParam1)
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

int sub_15935()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    GET_CHAR_COORDINATES( sub_3660(), ref l_U878._fU0, ref l_U878._fU4, ref l_U878._fU8 );
    if (IS_VEH_DRIVEABLE( l_U704._fU0 ))
    {
        GET_CAR_FORWARD_X( l_U704._fU0, ref uVar5._fU0 );
        GET_CAR_FORWARD_Y( l_U704._fU0, ref uVar5._fU4 );
        uVar5._fU8 = 0.00000000;
        GET_CAR_COORDINATES( l_U704._fU0, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        uVar8._fU0 = l_U878._fU0 - uVar2._fU0;
        uVar8._fU4 = l_U878._fU4 - uVar2._fU4;
        uVar8._fU8 = 0.00000000;
        if ((sub_16106( ref uVar5, ref uVar8 )) > 0.00000000)
        {
            return 1;
        }
    }
    return 0;
}

float sub_16106(int iParam0, int iParam1)
{
    return ((iParam0->_fU0 * iParam1->_fU0) + (iParam0->_fU4 * iParam1->_fU4)) + (iParam0->_fU8 * iParam1->_fU8);
}

int sub_16677(unknown uParam0, boolean bParam1)
{
    int I;
    float fVar5;
    float fVar6;

    if (NOT (IS_CHAR_DEAD( l_U602._fU0 )))
    {
        l_U813 = sub_16718( sub_3660(), l_U602._fU0 );
        l_U814 = l_U596;
        if (bParam1)
        {
            l_U814 += 35.00000000;
        }
        l_U815 = l_U814 * uParam0;
    }
    else
    {
        fVar5 = 99999.00000000;
        for ( I = 0; I < l_U627; I++ )
        {
            if (NOT (IS_CHAR_DEAD( l_U627[I]._fU0 )))
            {
                fVar6 = sub_16718( sub_3660(), l_U627[I]._fU0 );
                l_U814 = l_U596;
                l_U815 = l_U814 * uParam0;
                if (fVar6 < fVar5)
                {
                    fVar5 = fVar6;
                    l_U813 = fVar6;
                }
            }
        }
    }
    PRINTSTRING( "  * fDistance: " );
    PRINTFLOAT( l_U813 );
    PRINTSTRING( " (" );
    PRINTFLOAT( l_U815 );
    PRINTSTRING( ", " );
    PRINTFLOAT( l_U814 );
    PRINTSTRING( ")\n" );
    if (l_U813 >= l_U814)
    {
        return 1;
    }
    else if (NOT l_U881)
    {
        if (l_U813 >= l_U815)
        {
            PRINT( "M3_WLOSE", 7500, 1 );
            l_U881 = 1;
        }
    }
    else if ((l_U813 < (l_U815 * 0.85000000)) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
    {
        l_U881 = 0;
    };;;
    return 0;
}

void sub_16718(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown Result;

    if ((NOT (DOES_CHAR_EXIST( uParam0 ))) || (NOT (DOES_CHAR_EXIST( uParam1 ))))
    {
        return 9999.00000000;
        break;
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
    }
    else
    {
        N_1363505769( uParam0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
    }
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
    }
    else
    {
        N_1363505769( uParam1, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
    }
    GET_DISTANCE_BETWEEN_COORDS_3D( uVar4._fU0, uVar4._fU4, uVar4._fU8, uVar7._fU0, uVar7._fU4, uVar7._fU8, ref Result );
    return Result;
}

void sub_17337()
{
    if (((NOT (IS_CHAR_INJURED( l_U602._fU0 ))) AND (NOT (IS_CHAR_INJURED( l_U627[0]._fU0 )))) AND (NOT (IS_CHAR_INJURED( l_U627[1]._fU0 ))))
    {
        if (((IS_VEH_DRIVEABLE( l_U704._fU0 )) AND (IS_VEH_DRIVEABLE( l_U840[1] ))) AND (IS_VEH_DRIVEABLE( l_U678._fU0 )))
        {
            if (((NOT (IS_CHAR_IN_CAR( l_U602._fU0, l_U678._fU0 ))) || (NOT (IS_CHAR_IN_CAR( l_U627[0]._fU0, l_U678._fU0 )))) || (NOT (IS_CHAR_IN_CAR( l_U627[1]._fU0, l_U678._fU0 ))))
            {
                sub_5194( "  ** someone not in car\n" );
                if (IS_CHAR_IN_CAR( l_U602._fU0, l_U840[1] ))
                {
                    if (sub_17600( l_U602._fU0, 13 ))
                    {
                        TASK_LEAVE_CAR_IMMEDIATELY( l_U602._fU0, l_U840[1] );
                        sub_5194( "  * target.ped in train_carrage[1]\n" );
                    }
                    else
                    {
                        sub_5194( "  * target.ped leaving train_carrage[1]\n" );
                    }
                    SET_TRAIN_SPEED( l_U704._fU0, 0.00000000 );
                }
                else if (IS_CHAR_IN_CAR( l_U627[0]._fU0, l_U840[1] ))
                {
                    if (sub_17600( l_U627[0]._fU0, 13 ))
                    {
                        TASK_LEAVE_CAR_IMMEDIATELY( l_U627[0]._fU0, l_U840[1] );
                        sub_5194( "  * goon[GOON_0].ped in train_carrage[1]\n" );
                    }
                    else
                    {
                        sub_5194( "  * goon[GOON_0].ped leaving train_carrage[1]\n" );
                    }
                    SET_TRAIN_SPEED( l_U704._fU0, 0.00000000 );
                }
                else if (IS_CHAR_IN_CAR( l_U627[1]._fU0, l_U840[1] ))
                {
                    if (sub_17600( l_U627[1]._fU0, 13 ))
                    {
                        TASK_LEAVE_CAR_IMMEDIATELY( l_U627[1]._fU0, l_U840[1] );
                        sub_5194( "  * goon[GOON_1_driver].ped in train_carrage[1]\n" );
                    }
                    else
                    {
                        sub_5194( "  * goon[GOON_1_driver].ped leaving train_carrage[1]\n" );
                    }
                    SET_TRAIN_SPEED( l_U704._fU0, 0.00000000 );
                }
                else
                {
                    SWITCH_RANDOM_TRAINS( 1 );
                    SET_TRAIN_CRUISE_SPEED( l_U704._fU0, 10.00000000 );
                    TRAIN_LEAVE_STATION( l_U704._fU0 );
                    sub_18297( l_U602._fU0, ref l_U602._fU96, ref l_U602._fU44, l_U602._fU40, ref l_U851 );
                    sub_18297( l_U627[0]._fU0, ref l_U627[0]._fU96, ref l_U627[0]._fU44, l_U627[0]._fU40, ref l_U852 );
                    sub_18297( l_U627[1]._fU0, ref l_U627[1]._fU96, ref l_U627[0]._fU44, l_U627[1]._fU40, ref l_U853 );
                };;;
            }
            else
            {
                SWITCH_ROADS_BACK_TO_ORIGINAL( l_U764[0]._fU0 - 30.00000000, l_U764[0]._fU4 - 30.00000000, l_U764[0]._fU8 - 30.00000000, l_U764[0]._fU0 + 30.00000000, l_U764[0]._fU4 + 30.00000000, l_U764[0]._fU8 + 30.00000000 );
                PRINT( "MANNY3_FOLLOW", 7500, 1 );
                l_U597 = 5;
            }
            if (((sub_20307( l_U602._fU0 )) || (sub_20307( l_U627[0]._fU0 ))) || (sub_20307( l_U627[1]._fU0 )))
            {
                sub_5194( "  ** PLAYER ATTACKED\n" );
                sub_20916( 0 );
                PRINT_NOW( "MANNY3_KILL", 7500, 1 );
                if (NOT (IS_CAR_DEAD( l_U678._fU0 )))
                {
                    TASK_EVERYONE_LEAVE_CAR( l_U678._fU0 );
                }
                if (NOT (IS_CHAR_DEAD( l_U602._fU0 )))
                {
                    SET_CHAR_DECISION_MAKER( l_U602._fU0, l_U804 );
                    SET_COMBAT_DECISION_MAKER( l_U602._fU0, l_U806 );
                }
                sub_5194( "  ** ''current_manny3_stage = KILL_TARGET''\n" );
                SET_WANTED_MULTIPLIER( 0.10000000 );
                l_U851 = -1;
                STOP_PED_SPEAKING( sub_3660(), 1 );
                l_U597 = 7;
            }
        }
        else
        {
            sub_5194( "one of the vehicles are dead\n" );
            SWITCH_RANDOM_TRAINS( 1 );
            if (NOT (IS_CAR_DEAD( l_U704._fU0 )))
            {
                SET_TRAIN_CRUISE_SPEED( l_U704._fU0, 10.00000000 );
            }
            if (NOT (IS_CAR_DEAD( l_U840[1] )))
            {
                if (IS_CHAR_IN_CAR( l_U602._fU0, l_U840[1] ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( l_U602._fU0, l_U602._fU44[0]._fU0, l_U602._fU44[0]._fU4, l_U602._fU44[0]._fU8 );
                }
                if (IS_CHAR_IN_CAR( l_U627[0]._fU0, l_U840[1] ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( l_U627[0]._fU0, l_U627[0]._fU44[0]._fU0, l_U627[0]._fU44[0]._fU4, l_U627[0]._fU44[0]._fU8 );
                }
                if (IS_CHAR_IN_CAR( l_U627[1]._fU0, l_U840[1] ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( l_U627[1]._fU0, l_U627[1]._fU44[0]._fU0, l_U627[1]._fU44[0]._fU4, l_U627[1]._fU44[0]._fU8 );
                }
            }
            sub_5194( "  ** VEHICLE ATTACKED\n" );
            sub_20916( 0 );
            PRINT_NOW( "MANNY3_KILL", 7500, 1 );
            if (NOT (IS_CAR_DEAD( l_U678._fU0 )))
            {
                TASK_EVERYONE_LEAVE_CAR( l_U678._fU0 );
            }
            if (NOT (IS_CHAR_DEAD( l_U602._fU0 )))
            {
                SET_CHAR_DECISION_MAKER( l_U602._fU0, l_U804 );
                SET_COMBAT_DECISION_MAKER( l_U602._fU0, l_U806 );
            }
            sub_5194( "  ** ''current_manny3_stage = KILL_TARGET''\n" );
            SET_WANTED_MULTIPLIER( 0.10000000 );
            l_U851 = -1;
            STOP_PED_SPEAKING( sub_3660(), 1 );
            l_U597 = 7;
        }
    }
    else
    {
        sub_5194( "one of the goons are dead\n" );
        SWITCH_RANDOM_TRAINS( 1 );
        if (NOT (IS_CAR_DEAD( l_U704._fU0 )))
        {
            SET_TRAIN_CRUISE_SPEED( l_U704._fU0, 10.00000000 );
        }
        if ((NOT (IS_CHAR_INJURED( l_U602._fU0 ))) AND (NOT (IS_CAR_DEAD( l_U840[1] ))))
        {
            if (IS_CHAR_IN_CAR( l_U602._fU0, l_U840[1] ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( l_U602._fU0, l_U602._fU44[0]._fU0, l_U602._fU44[0]._fU4, l_U602._fU44[0]._fU8 );
            }
        }
        if ((NOT (IS_CHAR_INJURED( l_U627[0]._fU0 ))) AND (NOT (IS_CAR_DEAD( l_U840[1] ))))
        {
            if (IS_CHAR_IN_CAR( l_U627[0]._fU0, l_U840[1] ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( l_U627[0]._fU0, l_U627[0]._fU44[0]._fU0, l_U627[0]._fU44[0]._fU4, l_U627[0]._fU44[0]._fU8 );
            }
        }
        if ((NOT (IS_CHAR_INJURED( l_U627[1]._fU0 ))) AND (NOT (IS_CAR_DEAD( l_U840[1] ))))
        {
            if (IS_CHAR_IN_CAR( l_U627[1]._fU0, l_U840[1] ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( l_U627[1]._fU0, l_U627[1]._fU44[0]._fU0, l_U627[1]._fU44[0]._fU4, l_U627[1]._fU44[0]._fU8 );
            }
        }
        sub_5194( "  ** VEHICLE ATTACKED\n" );
        sub_20916( 0 );
        PRINT_NOW( "MANNY3_KILL", 7500, 1 );
        if (NOT (IS_CAR_DEAD( l_U678._fU0 )))
        {
            TASK_EVERYONE_LEAVE_CAR( l_U678._fU0 );
        }
        if (NOT (IS_CHAR_DEAD( l_U602._fU0 )))
        {
            SET_CHAR_DECISION_MAKER( l_U602._fU0, l_U804 );
            SET_COMBAT_DECISION_MAKER( l_U602._fU0, l_U806 );
        }
        sub_5194( "  ** ''current_manny3_stage = KILL_TARGET''\n" );
        SET_WANTED_MULTIPLIER( 0.10000000 );
        l_U851 = -1;
        STOP_PED_SPEAKING( sub_3660(), 1 );
        l_U597 = 7;
    }
    return;
}

int sub_17600(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    if (iVar4 == 7)
    {
        return 1;
    }
    return 0;
}

void sub_18297(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4)
{
    float fVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int iVar11;

    switch ((uParam1^))
    {
        case 0:
        if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
        {
            SET_CHAR_COORDINATES( uParam0, (uParam2^)[0]._fU0, (uParam2^)[0]._fU4, (uParam2^)[0]._fU8 );
            SET_CHAR_HEADING( uParam0, 180 );
            (uParam1^) = 1;
        }
        break;
        case 1:
        if (NOT (LOCATE_CHAR_ON_FOOT_3D( uParam0, (uParam2^)[1]._fU0, (uParam2^)[1]._fU4, (uParam2^)[1]._fU8, 0.50000000, 0.50000000, 2.50000000, 0 )))
        {
            if (sub_17600( uParam0, 27 ))
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( uParam0, (uParam2^)[1]._fU0, (uParam2^)[1]._fU4, (uParam2^)[1]._fU8, 2, -2, 0.50000000 );
            }
        }
        else
        {
            CLEAR_CHAR_TASKS( uParam0 );
            (uParam1^) = 2;
        }
        break;
        case 2:
        if (NOT (LOCATE_CHAR_ON_FOOT_3D( uParam0, (uParam2^)[2]._fU0, (uParam2^)[2]._fU4, (uParam2^)[2]._fU8, 0.50000000, 0.50000000, 2.50000000, 0 )))
        {
            if (sub_17600( uParam0, 27 ))
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( uParam0, (uParam2^)[2]._fU0, (uParam2^)[2]._fU4, (uParam2^)[2]._fU8, 2, -2, 0.50000000 );
            }
        }
        else
        {
            CLEAR_CHAR_TASKS( uParam0 );
            (uParam1^) = 3;
        }
        break;
        case 3:
        if (NOT (LOCATE_CHAR_ON_FOOT_3D( uParam0, (uParam2^)[3]._fU0, (uParam2^)[3]._fU4, (uParam2^)[3]._fU8, 0.50000000, 0.50000000, 2.50000000, 0 )))
        {
            if (sub_17600( uParam0, 27 ))
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( uParam0, (uParam2^)[3]._fU0, (uParam2^)[3]._fU4, (uParam2^)[3]._fU8, 2, -2, 0.50000000 );
            }
        }
        else
        {
            CLEAR_CHAR_TASKS( uParam0 );
            (uParam1^) = 4;
        }
        break;
        case 4:
        if (NOT (IS_CAR_DEAD( l_U678._fU0 )))
        {
            if (NOT (IS_CHAR_IN_CAR( uParam0, l_U678._fU0 )))
            {
                GET_CAR_COORDINATES( l_U678._fU0, ref l_U678._fU24._fU0, ref l_U678._fU24._fU4, ref l_U678._fU24._fU8 );
                GET_CHAR_COORDINATES( uParam0, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                GET_DISTANCE_BETWEEN_COORDS_3D( l_U678._fU24._fU0, l_U678._fU24._fU4, l_U678._fU24._fU8, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref fVar7 );
                if (fVar7 > 15.00000000)
                {
                    if (sub_17600( uParam0, 27 ))
                    {
                        TASK_FOLLOW_NAV_MESH_TO_COORD( uParam0, l_U678._fU24._fU0, l_U678._fU24._fU4, l_U678._fU24._fU8, 2, -2, 12.50000000 );
                    }
                }
                else if ((sub_19059( uParam0, uParam4, 20000 )) AND (NOT l_U850))
                {
                    if (iParam3 < 0)
                    {
                        if (sub_17600( uParam0, 12 ))
                        {
                            SET_NEXT_DESIRED_MOVE_STATE( 2 );
                            TASK_ENTER_CAR_AS_DRIVER( uParam0, l_U678._fU0, -2 );
                        }
                        else if (sub_19247())
                        {
                            MODIFY_CHAR_MOVE_STATE( uParam0, 3 );
                        }
                    }
                    else
                    {
                        sub_5194( "  ## passenger(" );
                        sub_6230( iParam3 );
                        sub_5194( ")\n" );
                        if (sub_17600( uParam0, 11 ))
                        {
                            GET_DRIVER_OF_CAR( l_U678._fU0, ref iVar11 );
                            if ((iParam3 > 0) || (iVar11 != nil))
                            {
                                sub_5194( "  ### task enter car\n" );
                                SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                TASK_ENTER_CAR_AS_PASSENGER( uParam0, l_U678._fU0, -2, iParam3 );
                            }
                            else if (sub_17600( uParam0, 18 ))
                            {
                                TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_CAR( uParam0, l_U678._fU0, 2.00000000, 0.00000000, 0.00000000, 2, -2 );
                            }
                            else if (sub_19247())
                            {
                                MODIFY_CHAR_MOVE_STATE( uParam0, 3 );
                            };;;
                        }
                        else if (sub_19247())
                        {
                            MODIFY_CHAR_MOVE_STATE( uParam0, 3 );
                        }
                    }
                }
                else if (IS_CHAR_IN_ANY_CAR( uParam0 ))
                {
                    TASK_LEAVE_ANY_CAR( uParam0 );
                }
                else
                {
                    TASK_FOLLOW_NAV_MESH_TO_COORD( uParam0, l_U801._fU0, l_U801._fU4, l_U801._fU8, 2, -2, 2.50000000 );
                }
                (uParam1^) = 5;;;
            }
            else
            {
                LOCK_CAR_DOORS( l_U678._fU0, 1 );
                (uParam1^) = 5;
            }
        }
        break;
        case 5:
        if (NOT l_U850)
        {
            ;
        }
        else if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            if (sub_17600( uParam0, 31 ))
            {
                CLEAR_CHAR_TASKS( uParam0 );
                TASK_LEAVE_ANY_CAR( uParam0 );
            }
        }
        else if (sub_17600( uParam0, 27 ))
        {
            CLEAR_CHAR_TASKS( uParam0 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( uParam0, l_U801._fU0, l_U801._fU4, l_U801._fU8, 2, -2, 2.50000000 );
        };;;
        break;
    }
    return;
}

int sub_19059(unknown uParam0, unknown uParam1, int iParam2)
{
    if ((uParam1^) < 0)
    {
        GET_GAME_TIMER( uParam1 );
    }
    else
    {
        GET_GAME_TIMER( ref l_U862 );
        if (((l_U862 >= ((uParam1^) + iParam2)) AND (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( uParam0 ))))
        {
            if ((sub_17600( uParam0, 12 )) AND (sub_17600( uParam0, 11 )))
            {
                l_U850 = 1;
                return 0;
            }
        }
    }
    return 1;
}

int sub_19247()
{
    if (IS_VEH_DRIVEABLE( l_U678._fU0 ))
    {
        if (sub_19282( l_U678._fU0 ))
        {
            return 1;
        }
        if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U678._fU0, sub_3660() ))
        {
            return 1;
        }
        return 0;
    }
    return 1;
}

int sub_19282(unknown uParam0)
{
    if (IS_CAR_TYRE_BURST( uParam0, 0 ))
    {
        PRINTSTRING( "BURST TYRE FRONT_LEFT" );
        return 1;
    }
    if (IS_CAR_TYRE_BURST( uParam0, 1 ))
    {
        PRINTSTRING( "BURST TYRE FRONT_RIGHT" );
        return 1;
    }
    if (IS_CAR_TYRE_BURST( uParam0, 4 ))
    {
        PRINTSTRING( "BURST TYRE REAR_LEFT" );
        return 1;
    }
    if (IS_CAR_TYRE_BURST( uParam0, 5 ))
    {
        PRINTSTRING( "BURST TYRE REAR_RIGHT" );
        return 1;
    }
    return 0;
}

int sub_20307(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( uParam0, sub_3660(), 0 ))
    {
        return 1;
    }
    if (IS_PLAYER_TARGETTING_CHAR( sub_6795(), uParam0 ))
    {
        return 1;
    }
    if ((IS_CHAR_IN_ANY_CAR( uParam0 )) AND (IS_CHAR_IN_ANY_CAR( sub_3660() )))
    {
        GET_CAR_CHAR_IS_USING( uParam0, ref iVar3 );
        GET_CAR_CHAR_IS_USING( sub_3660(), ref iVar4 );
        if (iVar3 == iVar4)
        {
            PRINTSTRING( "  * gang_ped_veh = PLAYER_CHAR_ID_veh\n" );
            return 1;
        }
    }
    if (((sub_16718( sub_3660(), uParam0 )) < l_U882) || (l_U839))
    {
        if ((IS_CHAR_ARMED( sub_3660(), 3 )) AND (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( uParam0, sub_3660() )))
        {
            SAY_AMBIENT_SPEECH( uParam0, "GANG_WEAPON_WARNING", 0, 0, 0 );
            return 1;
        }
        if (NOT l_U838)
        {
            sub_14894( "M3_CPASS", ref l_U824, 6, 1 );
            l_U838 = 1;
        }
        else if (sub_14697( l_U824 ))
        {
            GET_GAME_TIMER( ref l_U883 );
        }
        else
        {
            GET_GAME_TIMER( ref l_U862 );
            if ((l_U862 > (l_U883 + 3500)) || (l_U839))
            {
                if (NOT l_U839)
                {
                    sub_14894( l_U836, ref l_U830, 6, 1 );
                    l_U839 = 1;
                    g_U64569++;
                }
                else if (sub_14697( l_U830 ))
                {
                    if (sub_17600( uParam0, 21 ))
                    {
                        CLEAR_CHAR_TASKS( uParam0 );
                        SET_NEXT_DESIRED_MOVE_STATE( 2 );
                        TASK_GO_TO_CHAR( uParam0, sub_3660(), -1, l_U882 * 0.75000000 );
                    }
                    else
                    {
                        MODIFY_CHAR_MOVE_STATE( uParam0, 2 );
                    }
                }
                else
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_20916(int iParam0)
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if ((I == iParam0) || (iParam0 == 2))
        {
            sub_13314( I );
            g_U9241._fU148[I] = 0;
            g_U9241._fU112[I] = -1;
            StrCopy( ref g_U9241._fU28[I], "", 16 );
        }
    }
    return;
}

int sub_22637(float fParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_CHAR_DEAD( l_U602._fU0 )))
    {
        if (IS_VEH_DRIVEABLE( l_U678._fU0 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U627[1]._fU0 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U602._fU0, l_U801._fU0, l_U801._fU4, l_U801._fU8, 4.00000000, 4.00000000, 4.00000000, 0 )))
                {
                    if (NOT l_U886)
                    {
                        if (sub_22776())
                        {
                            sub_5194( "  @ NOT bStarted_driving\n" );
                            if (sub_17600( l_U627[1]._fU0, 15 ))
                            {
                                sub_5194( "  @@@ TASK_CAR_DRIVE_TO_COORD " );
                                sub_23770( l_U801 );
                                PRINTNL();
                                TASK_CAR_DRIVE_TO_COORD( l_U627[1]._fU0, l_U678._fU0, l_U801._fU0, l_U801._fU4, l_U801._fU8, 10.00000000, 0, l_U678._fU4, 6, 2.50000000, -1 );
                            }
                            else
                            {
                                l_U886 = 1;
                            }
                        }
                    }
                    else if ((sub_16718( sub_3660(), l_U602._fU0 )) > fParam0)
                    {
                        if (NOT (IS_CHAR_ON_SCREEN( l_U602._fU0 )))
                        {
                            l_U598 = 2;
                            l_U597 = 9;
                        }
                    }
                    else if ((sub_16718( sub_3660(), l_U602._fU0 )) > (fParam0 * uParam1))
                    {
                        l_U885 = 1;
                    }
                    if (l_U885)
                    {
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT( uParam2, 7500, 1 );
                            l_U885 = 0;
                        }
                    }
                    sub_5194( "  @ bStarted_driving\n" );
                    if (NOT l_U884)
                    {
                        if ((HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U678._fU0, sub_3660() )) || (sub_19282( l_U678._fU0 )))
                        {
                            if (sub_22776())
                            {
                                TASK_CAR_DRIVE_TO_COORD( l_U627[1]._fU0, l_U678._fU0, l_U801._fU0, l_U801._fU4, l_U801._fU8, 30.00000000, 0, l_U678._fU4, 3, 2.50000000, -1 );
                                l_U884 = 1;
                            }
                        }
                        GET_CAR_CHAR_IS_USING( sub_3660(), ref l_U759 );
                        if (IS_VEH_DRIVEABLE( l_U759 ))
                        {
                            if (HAS_CAR_BEEN_DAMAGED_BY_CAR( l_U678._fU0, l_U759 ))
                            {
                                if (sub_22776())
                                {
                                    TASK_CAR_DRIVE_TO_COORD( l_U627[1]._fU0, l_U678._fU0, l_U801._fU0, l_U801._fU4, l_U801._fU8, 30.00000000, 0, l_U678._fU4, 3, 2.50000000, -1 );
                                    l_U884 = 1;
                                }
                            }
                        }
                    }
                    else if (NOT (IS_CHAR_INJURED( l_U627[0]._fU0 )))
                    {
                        if (sub_17600( l_U627[0]._fU0, 52 ))
                        {
                            TASK_DRIVE_BY( l_U627[0]._fU0, sub_3660(), 0, 0.00000000, 2.00000000, 0.00000000, 250.00000000, 8, 0, 75 );
                        }
                    };;;
                }
                else
                {
                    sub_5194( "  @@ bStarted_playback_once\n" );
                    if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3660(), l_U678._fU0, 15.00000000, 15.00000000, 4.00000000, 0 ))
                    {
                        sub_5194( "  @@@ locate PLAYER_CHAR_ID any means target_car.veh <<15.0, 15.0, 4.0>>\n" );
                        return 1;
                    }
                    else
                    {
                        sub_5194( "  @@@ NOT locate PLAYER_CHAR_ID any means target_car.veh <<15.0, 15.0, 4.0>>\n" );
                        if (IS_CHAR_IN_ANY_CAR( sub_3660() ))
                        {
                            sub_5194( "  @@@@ player in any car\n" );
                        }
                        else
                        {
                            sub_5194( "  @@@@ player NOT in any car\n" );
                        }
                        sub_5194( "  @@@@@ distance between player and target ped: " );
                        sub_14568( sub_16718( sub_3660(), l_U602._fU0 ) );
                        sub_24854();
                        if (l_U884)
                        {
                            if (NOT (IS_CHAR_DEAD( l_U602._fU0 )))
                            {
                                SET_CHAR_DECISION_MAKER( l_U602._fU0, l_U804 );
                                SET_COMBAT_DECISION_MAKER( l_U602._fU0, l_U806 );
                            }
                            sub_5194( "  @ 'current_manny3_stage = KILL_TARGET'\n" );
                            SET_WANTED_MULTIPLIER( 0.10000000 );
                            l_U851 = -1;
                            STOP_PED_SPEAKING( sub_3660(), 1 );
                            l_U597 = 7;
                        }
                    }
                }
            }
            else if (NOT (IS_CHAR_DEAD( l_U602._fU0 )))
            {
                SET_CHAR_DECISION_MAKER( l_U602._fU0, l_U804 );
                SET_COMBAT_DECISION_MAKER( l_U602._fU0, l_U806 );
            }
            sub_5194( "  @ 'current_manny3_stage = KILL_TARGET'\n" );
            SET_WANTED_MULTIPLIER( 0.10000000 );
            l_U851 = -1;
            STOP_PED_SPEAKING( sub_3660(), 1 );
            l_U597 = 7;;
            if (((sub_25198( l_U602._fU0 )) || (IS_CHAR_INJURED( l_U627[0]._fU0 ))) || (IS_CHAR_INJURED( l_U627[1]._fU0 )))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U678._fU0 ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U678._fU0 );
                }
                if (IS_CHAR_IN_CAR( l_U602._fU0, l_U678._fU0 ))
                {
                    TASK_LEAVE_CAR( l_U602._fU0, l_U678._fU0 );
                }
                PRINT_NOW( "MANNY3_KILL", 7500, 1 );
                if (NOT (IS_CHAR_DEAD( l_U602._fU0 )))
                {
                    SET_CHAR_DECISION_MAKER( l_U602._fU0, l_U804 );
                    SET_COMBAT_DECISION_MAKER( l_U602._fU0, l_U806 );
                }
                sub_5194( "  @ 'current_manny3_stage = KILL_TARGET'\n" );
                SET_WANTED_MULTIPLIER( 0.10000000 );
                l_U851 = -1;
                STOP_PED_SPEAKING( sub_3660(), 1 );
                l_U597 = 7;
            }
            else if ((IS_CHAR_IN_CAR( sub_3660(), l_U678._fU0 )) || ((IS_CHAR_GETTING_IN_TO_A_CAR( sub_3660() )) AND (LOCATE_CHAR_ON_FOOT_CAR_2D( sub_3660(), l_U678._fU0, 2.00000000, 2.00000000, 0 ))))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U678._fU0 ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U678._fU0 );
                }
                if (IS_CHAR_IN_CAR( l_U602._fU0, l_U678._fU0 ))
                {
                    TASK_LEAVE_CAR( l_U602._fU0, l_U678._fU0 );
                }
                PRINT_NOW( "MANNY3_KILL", 7500, 1 );
                if (NOT (IS_CHAR_DEAD( l_U602._fU0 )))
                {
                    SET_CHAR_DECISION_MAKER( l_U602._fU0, l_U804 );
                    SET_COMBAT_DECISION_MAKER( l_U602._fU0, l_U806 );
                }
                sub_5194( "  @ 'current_manny3_stage = KILL_TARGET'\n" );
                SET_WANTED_MULTIPLIER( 0.10000000 );
                l_U851 = -1;
                STOP_PED_SPEAKING( sub_3660(), 1 );
                l_U597 = 7;
            }
        }
        else if (NOT (IS_CHAR_DEAD( l_U602._fU0 )))
        {
            SET_CHAR_DECISION_MAKER( l_U602._fU0, l_U804 );
            SET_COMBAT_DECISION_MAKER( l_U602._fU0, l_U806 );
        }
        PRINT_NOW( "MANNY3_KILL", 7500, 1 );
        sub_5194( "  # 'current_manny3_stage = KILL_TARGET'\n" );
        SET_WANTED_MULTIPLIER( 0.10000000 );
        l_U851 = -1;
        STOP_PED_SPEAKING( sub_3660(), 1 );
        l_U597 = 7;;
    }
    else if (NOT (IS_CHAR_DEAD( l_U602._fU0 )))
    {
        SET_CHAR_DECISION_MAKER( l_U602._fU0, l_U804 );
        SET_COMBAT_DECISION_MAKER( l_U602._fU0, l_U806 );
    }
    PRINT_NOW( "MANNY3_KILL", 7500, 1 );
    sub_5194( "  # 'current_manny3_stage = KILL_TARGET'\n" );
    SET_WANTED_MULTIPLIER( 0.10000000 );
    l_U851 = -1;
    STOP_PED_SPEAKING( sub_3660(), 1 );
    l_U597 = 7;;
    return 0;
}

int sub_22776()
{
    if (IS_VEH_DRIVEABLE( l_U678._fU0 ))
    {
        if (((NOT (IS_CHAR_INJURED( l_U602._fU0 ))) AND (NOT (IS_CHAR_INJURED( l_U627[0]._fU0 )))) AND (NOT (IS_CHAR_INJURED( l_U627[1]._fU0 ))))
        {
            if (((NOT (IS_CHAR_SITTING_IN_CAR( l_U602._fU0, l_U678._fU0 ))) || (NOT (IS_CHAR_SITTING_IN_CAR( l_U627[0]._fU0, l_U678._fU0 )))) || (NOT (IS_CHAR_SITTING_IN_CAR( l_U627[1]._fU0, l_U678._fU0 ))))
            {
                if (NOT (IS_CHAR_SITTING_IN_CAR( l_U602._fU0, l_U678._fU0 )))
                {
                    if (sub_17600( l_U602._fU0, 11 ))
                    {
                        TASK_ENTER_CAR_AS_PASSENGER( l_U602._fU0, l_U678._fU0, -2, l_U602._fU40 );
                    }
                    else if (NOT (LOCATE_CHAR_ON_FOOT_CAR_3D( l_U602._fU0, l_U678._fU0, 4.00000000, 4.00000000, 4.00000000, 0 )))
                    {
                        MODIFY_CHAR_MOVE_STATE( l_U602._fU0, 2 );
                    }
                }
                if (NOT (IS_CHAR_SITTING_IN_CAR( l_U627[0]._fU0, l_U678._fU0 )))
                {
                    if (sub_17600( l_U627[0]._fU0, 11 ))
                    {
                        TASK_ENTER_CAR_AS_PASSENGER( l_U627[0]._fU0, l_U678._fU0, -2, l_U627[0]._fU40 );
                    }
                    else if (NOT (LOCATE_CHAR_ON_FOOT_CAR_3D( l_U627[0]._fU0, l_U678._fU0, 4.00000000, 4.00000000, 4.00000000, 0 )))
                    {
                        MODIFY_CHAR_MOVE_STATE( l_U627[0]._fU0, 2 );
                    }
                }
                if (NOT (sub_17600( l_U627[1]._fU0, 15 )))
                {
                    CLEAR_CHAR_TASKS( l_U627[1]._fU0 );
                }
                else if (NOT (IS_CHAR_SITTING_IN_CAR( l_U627[1]._fU0, l_U678._fU0 )))
                {
                    if (sub_17600( l_U627[1]._fU0, 12 ))
                    {
                        TASK_ENTER_CAR_AS_DRIVER( l_U627[1]._fU0, l_U678._fU0, -2 );
                    }
                    else if (NOT (LOCATE_CHAR_ON_FOOT_CAR_3D( l_U627[1]._fU0, l_U678._fU0, 4.00000000, 4.00000000, 4.00000000, 0 )))
                    {
                        MODIFY_CHAR_MOVE_STATE( l_U627[1]._fU0, 2 );
                    }
                }
                PRINTSTRING( "everyone_on_car(): FALSE\n" );
            }
            else
            {
                return 1;
            }
        }
        else
        {
            TASK_EVERYONE_LEAVE_CAR( l_U678._fU0 );
            PRINT_NOW( "MANNY3_KILL", 7500, 1 );
            if (NOT (IS_CHAR_DEAD( l_U602._fU0 )))
            {
                SET_CHAR_DECISION_MAKER( l_U602._fU0, l_U804 );
                SET_COMBAT_DECISION_MAKER( l_U602._fU0, l_U806 );
            }
            sub_5194( "  @ 'current_manny3_stage = KILL_TARGET'\n" );
            SET_WANTED_MULTIPLIER( 0.10000000 );
            l_U851 = -1;
            STOP_PED_SPEAKING( sub_3660(), 1 );
            l_U597 = 7;
        }
    }
    return 0;
}

void sub_23770(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (g_U9231)
    {
        PRINTVECTOR( uParam0 );
    }
    return;
}

void sub_24854()
{
    if (g_U9231)
    {
        PRINTNL();
    }
    return;
}

int sub_25198(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    GET_CAR_CHAR_IS_USING( sub_3660(), ref uVar3 );
    GET_CAR_CHAR_IS_USING( uParam0, ref uVar4 );
    if (IS_VEH_DRIVEABLE( uVar4 ))
    {
        if (IS_CAR_ON_FIRE( uVar4 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_26278()
{
    if ((((NOT (IS_CHAR_DEAD( l_U602._fU0 ))) AND (NOT (IS_CHAR_DEAD( l_U627[0]._fU0 )))) AND (NOT (IS_CHAR_DEAD( l_U627[1]._fU0 )))) AND (NOT (IS_CAR_DEAD( l_U678._fU0 ))))
    {
        switch (l_U601)
        {
            case 0:
            if (NOT IS_HINT_RUNNING())
            {
                HINT_CAM( 0.00000000, 0.00000000, 0.00000000, l_U602._fU0, 0, 0, 999999 );
                SET_PLAYER_CONTROL( sub_6795(), 0 );
                SET_WIDESCREEN_BORDERS( 1 );
                while (NOT sub_8686())
                {
                    WAIT( 0 );
                }
                SETTIMERB( 0 );
                l_U601 = 1;
            }
            break;
            case 1:
            if (TIMERB() > 2500)
            {
                if (NOT l_U839)
                {
                    sub_14894( l_U836, ref l_U830, 6, 1 );
                    l_U839 = 1;
                    g_U64569++;
                }
                TASK_LEAVE_ANY_CAR( l_U627[0]._fU0 );
                l_U601 = 2;
            }
            break;
            case 2:
            if (TIMERB() > 3500)
            {
                TASK_LEAVE_ANY_CAR( l_U627[1]._fU0 );
                l_U601 = 3;
            }
            break;
            case 3:
            if (TIMERB() > 5000)
            {
                TASK_LEAVE_CAR_DONT_CLOSE_DOOR( l_U602._fU0, l_U678._fU0 );
                l_U601 = 4;
            }
            break;
            case 4:
            if (((NOT (IS_CHAR_IN_CAR( l_U602._fU0, l_U678._fU0 ))) AND (NOT (IS_CHAR_IN_CAR( l_U627[0]._fU0, l_U678._fU0 )))) AND (NOT (IS_CHAR_IN_CAR( l_U627[1]._fU0, l_U678._fU0 ))))
            {
                TASK_ENTER_CAR_AS_DRIVER( l_U602._fU0, l_U678._fU0, -2 );
                TASK_COMBAT( l_U627[0]._fU0, sub_3660() );
                TASK_COMBAT( l_U627[1]._fU0, sub_3660() );
                SET_CHAR_RELATIONSHIP( l_U602._fU0, 5, 0 );
                SET_CHAR_RELATIONSHIP( l_U627[0]._fU0, 5, 0 );
                SET_CHAR_RELATIONSHIP( l_U627[1]._fU0, 5, 0 );
                HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
                sub_3193();
                SET_PLAYER_CONTROL( sub_6795(), 1 );
                SET_WIDESCREEN_BORDERS( 0 );
                sub_3709();
                PRINT( "MANNY3_KILL", 7500, 1 );
                if (NOT (DOES_BLIP_EXIST( l_U602._fU4 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U602._fU0, ref l_U602._fU4 );
                    SET_BLIP_AS_FRIENDLY( l_U602._fU4, 0 );
                }
                if (NOT (DOES_BLIP_EXIST( l_U627[0]._fU4 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U627[0]._fU0, ref l_U627[0]._fU4 );
                    SET_BLIP_AS_FRIENDLY( l_U627[0]._fU4, 0 );
                }
                if (NOT (DOES_BLIP_EXIST( l_U627[1]._fU4 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U627[1]._fU0, ref l_U627[1]._fU4 );
                    SET_BLIP_AS_FRIENDLY( l_U627[1]._fU4, 0 );
                }
                if (NOT (IS_CHAR_DEAD( l_U602._fU0 )))
                {
                    SET_CHAR_DECISION_MAKER( l_U602._fU0, l_U804 );
                    SET_COMBAT_DECISION_MAKER( l_U602._fU0, l_U806 );
                }
                SET_WANTED_MULTIPLIER( 0.10000000 );
                l_U851 = -1;
                STOP_PED_SPEAKING( sub_3660(), 1 );
                l_U597 = 7;
            }
            break;
        }
    }
    return;
}

void sub_27295()
{
    int Result;
    int I;
    int iVar4;
    unknown uVar5;

    Result = 1;
    if (sub_14697( l_U824 ))
    {
        sub_27328( ref l_U824, 1 );
    }
    else if (sub_14697( l_U830 ))
    {
        sub_27328( ref l_U830, 1 );
    }
    if (NOT (sub_16677( 0.65000000, 0 )))
    {
        if (NOT (IS_CHAR_INJURED( l_U602._fU0 )))
        {
            if (IS_CHAR_IN_ANY_CAR( l_U602._fU0 ))
            {
                if (IS_VEH_DRIVEABLE( l_U678._fU0 ))
                {
                    if (IS_CHAR_IN_CAR( l_U602._fU0, l_U678._fU0 ))
                    {
                        if (sub_17600( l_U602._fU0, 13 ))
                        {
                            TASK_LEAVE_CAR( l_U602._fU0, l_U678._fU0 );
                        }
                    }
                }
                else if (sub_17600( l_U602._fU0, 31 ))
                {
                    TASK_LEAVE_ANY_CAR( l_U602._fU0 );
                }
            }
            if (IS_VEH_DRIVEABLE( l_U678._fU0 ))
            {
                GET_DRIVER_OF_CAR( l_U678._fU0, ref iVar4 );
                if (iVar4 != l_U602._fU0)
                {
                    if (sub_19059( l_U602._fU0, ref l_U851, 7500 ))
                    {
                        if (sub_17600( l_U602._fU0, 12 ))
                        {
                            TASK_ENTER_CAR_AS_DRIVER( l_U602._fU0, l_U678._fU0, -2 );
                        }
                    }
                    else if (sub_17600( l_U602._fU0, 58 ))
                    {
                        SET_CHAR_RELATIONSHIP( l_U602._fU0, 5, 0 );
                        TASK_FLEE_CHAR_ANY_MEANS( l_U602._fU0, sub_3660(), 50.00000000, -1, 0, 0, 0, 5.00000000 );
                    }
                }
                else if (sub_17600( l_U602._fU0, 58 ))
                {
                    SET_CHAR_RELATIONSHIP( l_U602._fU0, 5, 0 );
                    TASK_FLEE_CHAR_ANY_MEANS( l_U602._fU0, sub_3660(), 50.00000000, -1, 0, 0, 0, 5.00000000 );
                }
            }
            else if (sub_17600( l_U602._fU0, 58 ))
            {
                SET_CHAR_RELATIONSHIP( l_U602._fU0, 5, 0 );
                TASK_FLEE_CHAR_ANY_MEANS( l_U602._fU0, sub_3660(), 50.00000000, -1, 0, 0, 0, 5.00000000 );
            }
            Result = 0;
        }
        else if (DOES_BLIP_EXIST( l_U602._fU4 ))
        {
            REMOVE_BLIP( l_U602._fU4 );
        }
        for ( I = 0; I < l_U627; I++ )
        {
            if (IS_CHAR_INJURED( l_U627[I]._fU0 ))
            {
                if (DOES_BLIP_EXIST( l_U627[I]._fU4 ))
                {
                    REMOVE_BLIP( l_U627[I]._fU4 );
                }
            }
            else if (NOT (DOES_BLIP_EXIST( l_U627[I]._fU4 )))
            {
                ADD_BLIP_FOR_CHAR( l_U627[I]._fU0, ref l_U627[I]._fU4 );
                SET_BLIP_AS_FRIENDLY( l_U627[I]._fU4, 0 );
            }
            if (IS_CHAR_IN_ANY_CAR( l_U627[I]._fU0 ))
            {
                TASK_LEAVE_ANY_CAR( l_U627[I]._fU0 );
            }
            else if (NOT l_U887[I])
            {
                if (sub_17600( l_U627[I]._fU0, 29 ))
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0 + (250 + I), 500 + (250 + I), ref uVar5 );
                    OPEN_SEQUENCE_TASK( ref l_U890 );
                    TASK_PAUSE( 0, uVar5 );
                    TASK_SWAP_WEAPON( 0, 1 );
                    TASK_COMBAT( 0, sub_3660() );
                    CLOSE_SEQUENCE_TASK( l_U890 );
                    TASK_PERFORM_SEQUENCE( l_U627[I]._fU0, l_U890 );
                    CLEAR_SEQUENCE_TASK( l_U890 );
                    l_U887[I] = 1;
                }
            }
            else if ((sub_17600( l_U627[I]._fU0, 91 )) AND (sub_17600( l_U627[I]._fU0, 29 )))
            {
                SET_CHAR_RELATIONSHIP( l_U627[I]._fU0, 5, 0 );
                TASK_COMBAT( l_U627[I]._fU0, sub_3660() );
            };;;
            Result = 0;;
        }
    }
    else
    {
        l_U598 = 2;
        l_U597 = 9;
        return 0;
    }
    return Result;
}

void sub_27328(int iParam0, unknown uParam1)
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

void sub_28573()
{
    sub_28605( 5, "M3_SUCCESS", "M3AUD", 0 );
    CLEAR_WANTED_LEVEL( sub_6795() );
    sub_29203();
    TRIGGER_MISSION_COMPLETE_AUDIO( 52 );
    sub_40801();
    l_U756 = 0;
    return;
}

void sub_28605(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_28649( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_28649(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_29203()
{
    sub_29212();
    return;
}

void sub_29212()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_29230();
    sub_29289( iVar2, iVar3, iVar4 );
    return;
}

void sub_29230()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U589[I] = 4;
    }
    return;
}

void sub_29289(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 5;
    sub_29321( iVar5, uParam0, uParam1, uParam2, "Contact_7" );
    return;
}

void sub_29321(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_29417( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_29417( ref cVar9 );
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
            sub_29417( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_29417( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_29417( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_29417( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_29994( iParam0, iVar7 );;;
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
                sub_30391( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_30391( 0, 4 );
            }
        }
    }
    if (NOT (sub_30480( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_6795(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_6795() );
    }
    sub_1746();
    bVar27 = true;
    uVar28 = sub_29994( iParam0, iVar7 );
    uVar29 = sub_1203( iParam0 );
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
                sub_39856( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_40286();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_40371( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_40428( iParam0 );
                sub_40467( 0 );
                sub_1644( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_40575();
        }
    }
    if (bParam2)
    {
        sub_40286();
        sub_40663();
        sub_40467( 0 );
    }
    if (bParam3)
    {
        sub_40286();
        sub_40703();
        sub_40467( 0 );
        sub_1644( uVar29, 0 );
    }
    sub_1090();
    return;
}

void sub_29417(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_29994(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_1602( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_30391(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_30480(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_30688( uParam1 );
        break;
        case 1:
        bVar8 = sub_32766( uParam1 );
        break;
        case 2:
        bVar8 = sub_32992( uParam1 );
        break;
        case 3:
        bVar8 = sub_33142( uParam1 );
        break;
        case 4:
        bVar8 = sub_33420( uParam1 );
        break;
        case 5:
        bVar8 = sub_33723( uParam1 );
        break;
        case 6:
        bVar8 = sub_33922( uParam1 );
        break;
        case 7:
        bVar8 = sub_34148( uParam1 );
        break;
        case 8:
        bVar8 = sub_34383( uParam1 );
        break;
        case 9:
        bVar8 = sub_34758( uParam1 );
        break;
        case 10:
        bVar8 = sub_35005( uParam1 );
        break;
        case 11:
        bVar8 = sub_35144( uParam1 );
        break;
        case 12:
        bVar8 = sub_35443( uParam1 );
        break;
        case 13:
        bVar8 = sub_35671( uParam1 );
        break;
        case 14:
        bVar8 = sub_35958( uParam1 );
        break;
        case 15:
        bVar8 = sub_36240( uParam1 );
        break;
        case 16:
        bVar8 = sub_36522( uParam1 );
        break;
        case 17:
        bVar8 = sub_36723( uParam1 );
        break;
        case 18:
        bVar8 = sub_36796( uParam1 );
        break;
        case 19:
        bVar8 = sub_37010( uParam1 );
        break;
        case 20:
        bVar8 = sub_37263( uParam1 );
        break;
        case 21:
        bVar8 = sub_37510( uParam1 );
        break;
        case 22:
        bVar8 = sub_37711( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_32371( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_29994( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_38034( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_30688(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30967( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_30967( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_30967( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_30967( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_30967( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_30967( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_30967( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_30967( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_30967( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_30967( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_30967( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_30967( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_30967( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_30967( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_30967( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_30967( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_30967( iVar3, 0, 3, 1, 0, 0 );
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
        sub_30967( iVar3, 0, sub_32249(), sub_32515(), 0, 0 );
        break;
        default:
        sub_32674( "Friend 1", 1 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32674( "Friend 1", 0 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_30967(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_30978( uParam1 );
    sub_31152( uParam0, 0, uParam2 );
    sub_31152( uParam0, 1, uParam3 );
    sub_31152( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_29230();
    return;
}

void sub_30978(unknown uParam0)
{
    ADD_SCORE( sub_6795(), uParam0 );
    sub_31003( uParam0 );
    return;
}

void sub_31003(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1602( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_31152(unknown uParam0, int iParam1, int iParam2)
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
        sub_31309( uParam0 );
    }
    return;
}

void sub_31309(unknown uParam0)
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

int sub_32249()
{
    switch (l_U589[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_32371( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_32371(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_32515()
{
    switch (l_U589[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_32371( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_32674(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_32766(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30967( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_30967( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_30967( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_30967( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_32674( "Contact 2", 1 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32674( "Contact 2", 0 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_32992(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_30967( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_32674( "Girl 3", 1 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32674( "Girl 3", 0 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_33142(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30967( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_30967( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_30967( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_30967( iVar3, 0, sub_32249(), sub_32515(), 0, 0 );
        break;
        default:
        sub_32674( "Friend 4", 1 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32674( "Friend 4", 0 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_33420(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30967( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_30967( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_30967( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_30967( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_30967( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_30967( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_30967( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_32674( "Contact 5", 1 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32674( "Contact 5", 0 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_33723(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30967( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_30967( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_30967( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_32674( "Contact 7", 1 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32674( "Contact 7", 0 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_33922(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30967( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_30967( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_30967( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_30967( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_32674( "Contact 7b", 1 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32674( "Contact 7b", 0 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_34148(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30967( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_30967( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_30967( iVar3, 0, sub_32249(), sub_32515(), 0, 0 );
        break;
        default:
        sub_32674( "Friend 8", 1 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32674( "Friend 8", 0 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_34383(unknown uParam0)
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
        sub_30967( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_30967( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_30967( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_30967( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_30967( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_30967( iVar3, 0, sub_32249(), sub_32515(), 0, 0 );
        break;
        default:
        sub_32674( "Friend 9", 1 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32674( "Friend 9", 0 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_34758(unknown uParam0)
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
        sub_30967( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_30967( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_30967( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_30967( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_32674( "Contact 10", 1 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_32674( "Contact 10", 0 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_35005(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30967( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_32674( "Girl 11", 1 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32674( "Girl 11", 0 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_35144(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30967( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_30967( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_30967( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_30967( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_30967( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_30967( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_32674( "Contact 12", 1 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32674( "Contact 12", 0 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_35443(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30967( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_30967( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_30967( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_30967( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_32674( "Contact 13", 1 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32674( "Contact 13", 0 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_35671(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30967( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_30967( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_30967( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_30967( iVar3, 0, sub_32249(), sub_32515(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_32674( "Friend 15", 1 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32674( "Friend 15", 0 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_35958(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30967( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_30967( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_30967( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_30967( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_30967( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_30967( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_32674( "Contact 16", 1 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32674( "Contact 16", 0 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_36240(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30967( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_30967( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_30967( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_30967( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_30967( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_32674( "Contact 18", 1 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32674( "Contact 18", 0 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_36522(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30967( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_30967( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_30967( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_32674( "Contact 19", 1 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32674( "Contact 19", 0 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_36723(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_32674( "Girl 20", 0 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_36796(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30967( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_30967( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_30967( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_32674( "Contact 21", 1 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32674( "Contact 21", 0 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37010(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30967( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_30967( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_30967( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_30967( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_30967( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_32674( "Contact 22", 1 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32674( "Contact 22", 0 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37263(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_30967( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_30967( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_30967( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_30967( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_32674( "Contact 24", 1 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32674( "Contact 24", 0 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37510(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30967( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_30967( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_30967( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_32674( "Contact 25", 1 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32674( "Contact 25", 0 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37711(unknown uParam0)
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
        sub_30967( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_32674( "Girl 26", 1 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_32674( "Girl 26", 0 );
        sub_30967( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_38034(int iParam0, int iParam1)
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
    if (sub_38082( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_38813( iParam1 );
    }
    return;
}

int sub_38082(int iParam0, int iParam1)
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
            sub_38222( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_38222(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_38404( 0 );
    return;
}

void sub_38404(boolean bParam0)
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
        sub_38659();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_38659()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_38813(int iParam0)
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
        sub_39146( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_39146( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_39146( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_39146( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_39146( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_39146( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_39146( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_39146( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_39146( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_39146( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_39146( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_39146( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_39146( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_39146( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_39146( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_39146( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_39146( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_39146( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_39146( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_39146(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_39856(unknown uParam0, unknown uParam1)
{
    sub_39875( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_39875(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_40286()
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

int sub_40371(int iParam0, int iParam1)
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

void sub_40428(unknown uParam0)
{
    sub_989();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_40467(unknown uParam0)
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

void sub_40575()
{
    sub_40584();
    return;
}

void sub_40584()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_40663()
{
    sub_40584();
    return;
}

void sub_40703()
{
    sub_40584();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_40801()
{
    sub_40812( 6, 3 );
    sub_40812( 1020, 3 );
    return;
}

void sub_40812(int iParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = iParam0 mod 1000;
    SET_BITS_IN_RANGE( ref g_U1502[iVar4 / 16], (iVar4 mod 16) * 2, ((iVar4 mod 16) * 2) + 1, uParam1 );
    return;
}

void sub_40906()
{
    boolean bVar2;

    bVar2 = false;
    if (IS_HINT_RUNNING())
    {
        HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
    }
    sub_3193();
    switch (l_U598)
    {
        case 1:
        if (DOES_BLIP_EXIST( l_U602._fU4 ))
        {
            REMOVE_BLIP( l_U602._fU4 );
            CLEAR_HELP();
        }
        else
        {
            PRINT_NOW( "M3_FLOST_TARG", 7500, 1 );
            sub_28605( 5, "M3_CFAIL2", "M3AUD", 0 );
            bVar2 = true;
        }
        break;
        case 2:
        if (DOES_BLIP_EXIST( l_U602._fU4 ))
        {
            REMOVE_BLIP( l_U602._fU4 );
            CLEAR_HELP();
        }
        else
        {
            PRINT_NOW( "M3_FLOST_TARG", 7500, 1 );
            sub_28605( 5, "M3_FAIL3", "M3AUD", 0 );
            bVar2 = true;
        }
        break;
        case 3:
        PRINT( "M_FAIL", 5000, 1 );
        sub_5194( "  DDD   EEEE  BBBB   U   U   GGG          QQQ   U   U  III  TTTTT\n" );
        sub_5194( "  D  D  E     B   B  U   U  G            Q   Q  U   U   I     T\n" );
        sub_5194( "  D  D  EEE   BBBB   U   U  G  GG        Q   Q  U   U   I     T\n" );
        sub_5194( "  D  D  E     B   B  U   U  G   G        Q  QQ  U   U   I     T\n" );
        sub_5194( "  DD    EEEE  BBBB    UUU    GGG          QQQQ   UUU   III    T\n" );
        sub_24854();
        l_U756 = 0;
        g_U64559++;
        sub_41627();
        break;
        case 4:
        sub_5194( "PLAYER IS NOT PLAYING!\n" );
        l_U756 = 0;
        break;
        default:
        if (NOT (IS_CHAR_DEAD( sub_3660() )))
        {
            PRINT( "M_FAIL", 5000, 1 );
        }
        sub_24854();
        sub_5194( " @@ reason_for_fail: " );
        sub_6230( l_U598 );
        sub_24854();
        sub_24854();
        l_U756 = 0;
        break;
    }
    if (bVar2)
    {
        if (NOT bVar2)
        {
            ;
        }
        SET_PLAYER_MOOD_PISSED_OFF( sub_6795(), 150 );
        SAY_AMBIENT_SPEECH( sub_3660(), "MISSION_FAIL_RAGE", 0, 0, 0 );
        l_U756 = 0;
        g_U64560++;
        sub_41627();
    }
    return;
}

void sub_41627()
{
    sub_41636();
    return;
}

void sub_41636()
{
    int iVar2;

    iVar2 = 5;
    sub_41650( iVar2 );
    sub_1737( iVar2 );
    return;
}

void sub_41650(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_6795(), 150 );
    CLEAR_HELP();
    sub_561( uParam0 );
    return;
}
