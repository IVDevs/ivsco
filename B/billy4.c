void main()
{
    l_U0 = 0;
    l_U1 = 86.00000000;
    l_U2 = 274.00000000;
    l_U3 = 0;
    l_U4 = 0;
    l_U5 = 0;
    l_U6 = 0;
    l_U8 = -1;
    l_U120 = 15.00000000;
    l_U121 = 35.00000000;
    l_U122 = 16.00000000;
    l_U123 = 0.00000000;
    l_U129 = 1000.00000000;
    l_U130 = 7500.00000000;
    l_U139 = 1;
    l_U140 = 30.00000000;
    l_U141 = 30.00000000;
    l_U142 = 2.00000000;
    l_U152 = 0.00000000;
    l_U153 = 0.00000000;
    l_U165 = 1;
    l_U166 = 0;
    l_U167 = -1;
    l_U168 = 1;
    l_U169 = -1;
    l_U170 = -1;
    l_U171 = 15.00000000;
    l_U198 = 0;
    l_U199 = -1949702649;
    l_U200 = 2075870698;
    l_U205 = 0.12000000;
    l_U220 = 0;
    l_U221 = 1;
    l_U222 = 3;
    l_U224 = 0;
    l_U225 = -1;
    l_U226 = 0;
    l_U227 = 0;
    l_U228 = 1;
    l_U229 = 1;
    l_U354 = 0;
    l_U362 = 0;
    l_U363 = 0;
    l_U364 = 0;
    l_U365 = 0;
    l_U366 = 0;
    l_U367 = 0;
    l_U368 = 0;
    l_U369 = 0;
    l_U1240 = 226415164;
    l_U1579 = 0;
    l_U1580 = {-643.10680000, 1228.96500000, 4.90840000};
    l_U1583 = {-601.32930000, 1306.98300000, 15.75800000};
    l_U1586 = {-1890.46400000, -67.41000000, 5.77880000};
    l_U1596 = {-622.76000000, 1207.77000000, 11.75000000};
    l_U1599 = {-618.89800000, 1203.72300000, 5.09870000};
    l_U1602 = {-624.46000000, 1194.66000000, 6.01730000};
    l_U1605 = {-628.84560000, 1190.99000000, 3.91080000};
    l_U1608 = {-629.65000000, 1184.99000000, 3.51730000};
    l_U1611 = {-622.38000000, 1184.71000000, 3.50000000};
    l_U1614 = {64911, 1216, 6};
    l_U1736 = 0;
    l_U1737 = 0;
    l_U1783 = 0.00000000;
    l_U1784 = 0.00000000;
    l_U1785 = 0.00000000;
    l_U1786 = 0.00000000;
    l_U1787 = 0.00000000;
    l_U1788 = 0.00000000;
    l_U1789 = 7.00000000;
    l_U1790 = 5.00000000;
    l_U1815 = 0;
    l_U1816 = 0;
    l_U1817 = 0;
    l_U1831 = 1;
    l_U1845 = 0;
    l_U1846 = {-657.09670000, 1230.54100000, 4.90860000};
    l_U1859 = 1500;
    l_U1869 = 1;
    l_U1920 = 1;
    l_U1923 = 0;
    l_U1924 = 0;
    l_U1933 = 1;
    l_U1935 = 1;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_794();
        sub_977();
        sub_3151();
    }
    sub_4617();
    while (true)
    {
        WAIT( 0 );
        if (l_U1818)
        {
            sub_54413();
            sub_56251();
        }
        sub_56800();
        if (l_U1529)
        {
            if ((((IS_CHAR_IN_AREA_3D( sub_3607(), -622.10000000, 1190.02000000, 8.52000000, -619.25000000, 1193.63000000, 13.59000000, 0 )) || (IS_CHAR_IN_AREA_3D( sub_3607(), -626.67000000, 1203.23000000, 9.92000000, -621.27000000, 1206.44000000, 12.16000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3607(), -621.44360000, 1197.08300000, 15.04180000, 4.00000000, 9.00000000, 2.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3607(), -618.59380000, 1193.85800000, 10.30990000, 1.00000000, 3.00000000, 2.00000000, 0 )))
            {
                if (l_U1579 > 5)
                {
                    SET_CHAR_HEALTH( sub_3607(), 0 );
                }
                else if (NOT (IS_CHAR_ON_FIRE( sub_3607() )))
                {
                    START_CHAR_FIRE( sub_3607() );
                    l_U1579++;
                }
            }
            sub_57568();
        }
        if (NOT (IS_CHAR_INJURED( l_U1241[0]._fU0 )))
        {
            if (IS_CHAR_ON_FIRE( l_U1241[0]._fU0 ))
            {
                SET_CHAR_HEALTH( l_U1241[0]._fU0, 50 );
            }
        }
        switch (l_U362)
        {
            case 0:
            sub_58461();
            break;
            case 1:
            sub_61791();
            break;
            case 2:
            sub_64734();
            break;
            case 3:
            sub_70176();
            break;
            case 4:
            sub_76434();
            break;
            case 5:
            sub_78386();
            break;
            case 6:
            sub_79446();
            break;
            case 7: break;
            case 8:
            sub_86559();
            break;
            case 9:
            if (sub_98084())
            {
                sub_99440();
            }
            break;
            case 10: break;
        }
        if (l_U1538)
        {
            sub_107190();
        }
        if (l_U1566)
        {
            sub_124567( ref l_U1241 );
        }
        sub_124845();
    }
    return;
}

void sub_794()
{
    sub_803();
    return;
}

void sub_803()
{
    int I;

    I = 0;
    for ( I = 0; I < 13; I++ )
    {
        if (g_U38937[I]._fU4)
        {
            g_U38937[I]._fU0 = 1;
            g_U38937[I]._fU4 = 0;
        }
    }
    for ( I = 0; I < 6; I++ )
    {
        if (g_U39058[I]._fU4)
        {
            g_U39058[I]._fU0 = 1;
            g_U39058[I]._fU4 = 0;
        }
    }
    g_U39102 = 0;
    return;
}

void sub_977()
{
    sub_986();
    return;
}

void sub_986()
{
    int iVar2;

    iVar2 = 0;
    sub_1000( iVar2 );
    sub_2141( iVar2 );
    return;
}

void sub_1000(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U14838[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U816)
    {
        sub_1044();
        sub_1252();
        g_U11095 = 1;
    }
    else if (NOT g_U12306[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1377();
            sub_1429();
            g_U11095 = 1;
        }
    }
    sub_1522();
    sub_1661();
    uVar5 = sub_1774( uParam0 );
    sub_2050( uVar5, 0 );
    return;
}

void sub_1044()
{
    if (g_U10993)
    {
        return;
    }
    sub_1071( g_U10992 );
    if (NOT (IS_BIT_SET( g_U10959._fU0, 7 )))
    {
        sub_1192();
    }
    return;
}

void sub_1071(int iParam0)
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
    if (g_U10993)
    {
        return;
    }
    iVar3 = g_U20913[iParam0]._fU100;
    iVar3--;
    g_U20913[iParam0]._fU100 = iVar3;
    DECREMENT_INT_STAT( 255, 1 );
    return;
}

void sub_1192()
{
    if (g_U0)
    {
        return;
    }
    if (g_U10993)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1252()
{
    sub_1261();
    return;
}

void sub_1261()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_1377()
{
    if (g_U0)
    {
        return;
    }
    if (g_U10993)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1429()
{
    sub_1438();
    return;
}

void sub_1438()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_1522()
{
    int J;
    int I;

    J = 0;
    for ( J = 0; J < 11; J++ )
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            if (g_U12306[J]._fU144[I]._fU36)
            {
                g_U12306[J]._fU28 = 1;
            }
            g_U12306[J]._fU144[I]._fU36 = 0;
        }
    }
    return;
}

void sub_1661()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1683();
    if (iVar3 > g_U38472._fU4)
    {
        g_U38472._fU4 = iVar3;
        g_U38472._fU8 = iVar2;
    }
    return;
}

int sub_1683()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_1774(unknown uParam0)
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
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_2005( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 22;
}

void sub_2005(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2050(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 22))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U20853[iParam0] = iVar4;
    if (bParam1)
    {
        g_U20853[iParam0] += 30000;
    }
    return;
}

void sub_2141(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2150();
    if (g_U0)
    {
        return;
    }
    if (g_U94._fU40 == 0)
    {
        return;
    }
    if (NOT g_U12303)
    {
        return;
    }
    iVar3 = g_U14838[iParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (bVar4)
    {
        return;
    }
    if (g_U12306[iParam0]._fU12)
    {
        return;
    }
    if (g_U10959._fU4 == -1)
    {
        return;
    }
    if (NOT (g_U10959._fU4 == iParam0))
    {
        return;
    }
    if (NOT sub_2910())
    {
        return;
    }
    if (NOT g_U816)
    {
        sub_2976();
        SET_BIT( ref g_U10959._fU0, 2 );
    }
    return;
}

void sub_2150()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if (((sub_2188( 5, g_U572[I] )) == 1) AND (g_U572[I]._fU20))
        {
            if ((sub_2188( 1, g_U572[I] )) != 0)
            {
                sub_2474( I );
            }
        }
    }
    if (NOT sub_2640())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U94._fU404 = 1000;
    }
    if (g_U94._fU0 == 1015)
    {
        g_U94._fU92 = 1;
    }
    return;
}

int sub_2188(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2474(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_2559( g_U572 - 1 );
    return;
}

void sub_2559(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_2640()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_2188( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_2910()
{
    if ((g_U10959._fU4 == 0) AND (g_U10959._fU8 == 1))
    {
        return 0;
    }
    return 1;
}

void sub_2976()
{
    CLEAR_BIT( ref g_U10959._fU0, 2 );
    CLEAR_BIT( ref g_U10959._fU0, 3 );
    CLEAR_BIT( ref g_U10959._fU0, 4 );
    CLEAR_BIT( ref g_U10959._fU0, 5 );
    CLEAR_BIT( ref g_U10959._fU0, 6 );
    CLEAR_BIT( ref g_U10959._fU0, 8 );
    CLEAR_BIT( ref g_U10959._fU0, 9 );
    CLEAR_BIT( ref g_U10959._fU0, 10 );
    g_U10959._fU12 = 0;
    return;
}

void sub_3151()
{
    g_U10460 = 1;
    SET_WANTED_MULTIPLIER( 1.00000000 );
    ALLOW_EMERGENCY_SERVICES( 1 );
    SET_GPS_TEST_IN_3D_FLAG( 0 );
    sub_3199( ref l_U1482, 0 );
    sub_3324( 0 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -1743.54000000, 342.30960000, 0.00000000, -1671.31100000, 393.63660000, 100.00000000 );
    sub_3508( 0, ref l_U1241 );
    sub_3706();
    SWITCH_GARBAGE_TRUCKS( 1 );
    FLUSH_SCENARIO_BLOCKING_AREAS();
    SWITCH_ROADS_BACK_TO_ORIGINAL( 63768, 352, -10, 64371, 377, 100 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -1773.22700000, 347.80910000, 0.00000000, -1715.18700000, 365.87880000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -1750.75900000, 346.67620000, 0.00000000, -1668.22300000, 385.36550000, 100.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    sub_3706();
    SET_PED_IS_BLIND_RAGING( sub_3607(), 0 );
    if (l_U1529)
    {
        STOP_SOUND( l_U1738 );
        RELEASE_SOUND_ID( l_U1738 );
    }
    UNREGISTER_SCRIPT_WITH_AUDIO();
    sub_4228( 0 );
    sub_4228( 1 );
    sub_4228( 13 );
    sub_4228( 6 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3199(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8945)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_3324(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8944 >= 4) AND (g_U8944 <= 8))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_3508(unknown uParam0, unknown uParam1)
{
    int I;

    sub_3199( ref l_U143, uParam0 );
    for ( I = 0; I < (uParam1^); I++ )
    {
        sub_3548( ref (uParam1^)[I] );
    }
    return;
}

void sub_3548(int iParam0)
{
    sub_3199( ref l_U143, 1 );
    ref iParam0->_fU44->_fU4 = 0;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        TASK_CLEAR_LOOK_AT( iParam0->_fU0 );
    }
    if (NOT (IS_CHAR_DEAD( sub_3607() )))
    {
        TASK_CLEAR_LOOK_AT( sub_3607() );
    }
    l_U150 = 0;
    return;
}

void sub_3607()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3706()
{
    sub_3715();
    sub_3860();
    return;
}

void sub_3715()
{
    if (l_U6)
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
    l_U4 = 0;
    l_U3 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_3860()
{
    int iVar2;

    if (DOES_CAM_EXIST( l_U7 ))
    {
        BEGIN_CAM_COMMANDS( ref iVar2 );
        if (iVar2 != 1)
        {
            ;
        }
        else
        {
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_CAM_PROPAGATE( l_U7, 0 );
            SET_CAM_ACTIVE( l_U7, 0 );
            DESTROY_CAM( l_U7 );
            l_U7 = nil;
            l_U8 = -1;
            l_U20 = 0;
            if (IS_CONTROL_PRESSED( 0, 51 ))
            {
                GET_GAME_TIMER( ref l_U20 );
            }
            else
            {
                l_U20 = 0;
            }
            SET_GAME_CAMERA_CONTROLS_ACTIVE( 1 );
            SET_CINEMATIC_BUTTON_ENABLED( 1 );
        }
        END_CAM_COMMANDS( ref iVar2 );
    }
    return;
}

void sub_4228(unknown uParam0)
{
    if (NOT g_U1)
    {
        return;
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_4251( uParam0 ) );
    return;
}

int sub_4251(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -451718857;
        case 1: return 870892404;
        case 2: return -411638179;
        case 3: return -727962858;
        case 4: return -900623157;
        case 5: return 954215094;
        case 6: return 1728056212;
        case 7: return 1825562762;
        case 8: return -411638179;
        case 16: return 170756246;
        case 17: return -73790512;
        case 13: return 349841464;
        case 15: return -239294183;
    }
    sub_2005( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_4617()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    boolean bVar5;

    LOAD_ADDITIONAL_TEXT( "BILLY4", 0 );
    LOAD_ADDITIONAL_TEXT( "E1B4AUD", 6 );
    uVar3 = sub_3607();
    sub_4678( ref uVar3, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    g_U10460 = 0;
    SWITCH_GARBAGE_TRUCKS( 0 );
    if (IS_BIT_SET( g_U10959._fU0, 7 ))
    {
        ENABLE_SCENE_STREAMING( 0 );
        if (g_U39149[2] > 0)
        {
            g_U39149[2] = 0;
        }
        START_CUTSCENE_NOW( "BG04_AA" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "BG04_AA" );
        ENABLE_SCENE_STREAMING( 1 );
    }
    # -sub_C1FFC0-0xc214c8( 2, ref l_U1473 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U1481 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U1474 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U1475 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U1476 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U1479 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U1477 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U1478 );
    LOAD_COMBAT_DECISION_MAKER( 10, ref l_U1480 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U1475, 75 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U1476, 75 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U1478, 65 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U1480, 30 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U1477, 50 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U1474, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U1475, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U1476, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U1477, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U1479, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U1478, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U1480, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_CAUTION( l_U1478, 2 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_INJURED_REACTION( l_U1474, 0 );
    SET_RELATIONSHIP( 5, 23, 0 );
    SET_RELATIONSHIP( 5, 0, 23 );
    sub_5808( "E1B4AUD" );
    sub_5929( 0, sub_3607(), "JOHNNY", 0 );
    l_U1636[0] = {-588.32980000, 1204.90700000, 11.25060000};
    l_U1636[1] = {-619.32530000, 1205.68400000, 6.29060000};
    l_U1636[2] = {-620.24280000, 1204.70200000, 6.25060000};
    l_U1636[3] = {64905, 1173, 10};
    l_U1636[4] = {64907, 1173, 10};
    l_U1636[5] = {64909, 1173, 10};
    l_U1636[6] = {64905, 1171, 10};
    l_U1636[7] = {64907, 1171, 10};
    l_U1636[8] = {64909, 1171, 10};
    l_U1664[0] = {-618.27000000, 1195.18100000, 5.10060000};
    l_U1664[1] = {-620.52110000, 1200.06500000, 5.09940000};
    l_U1664[2] = {-625.65000000, 1199.60000000, 5.09940000};
    l_U1664[3] = {-621.68590000, 1181.94900000, 2.09150000};
    l_U1664[4] = {-621.26410000, 1186.63400000, 2.09090000};
    l_U1664[5] = {-624.44000000, 1187.70000000, 8.32109000};
    l_U1664[6] = {-625.82350000, 1192.20800000, 6.11031000};
    l_U1664[7] = {-629.89660000, 1191.90000000, 3.70210000};
    l_U1664[8] = {-628.81690000, 1185.27200000, 2.09880000};
    l_U1692[0] = {-619.26000000, 1200.62000000, 6.10000000};
    l_U1692[1] = {-620.37000000, 1198.31000000, 6.10000000};
    l_U1692[2] = {-620.95000000, 1197.29000000, 6.10000000};
    l_U1740[0] = 4.76920000;
    l_U1740[1] = 93.54670000;
    l_U1740[2] = 87.43450000;
    l_U1740[3] = 348.27210000;
    l_U1740[4] = 20.35890000;
    l_U1740[5] = 322.23570000;
    l_U1740[6] = 347.47460000;
    l_U1740[7] = 17.55290000;
    l_U1740[8] = 2.21430000;
    l_U1750[0] = 355.32660000;
    l_U1750[1] = 308.44060000;
    l_U1750[2] = 305.08190000;
    l_U1750[3] = 90.93110000;
    l_U1750[4] = 87.41100000;
    l_U1750[5] = 334.54320000;
    l_U1750[6] = 5.25070000;
    l_U1750[7] = 280.54320000;
    l_U1750[8] = 4.25070000;
    l_U1760[0] = 1.24000000;
    l_U1760[1] = 2.18000000;
    l_U1760[2] = 5.91000000;
    l_U1702[0] = {-632.10760000, 1224.49000000, 4.90860000};
    l_U1702[1] = {-627.97220000, 1231.68200000, 4.90860000};
    l_U1702[2] = {-623.24360000, 1224.79000000, 5.06020000};
    l_U1702[3] = {-633.83570000, 1230.19200000, 5.06020000};
    l_U1702[4] = {-625.61990000, 1228.87100000, 5.06020000};
    l_U1764[0] = 194.46590000;
    l_U1764[1] = 172.50480000;
    l_U1764[2] = 161.86570000;
    l_U1764[3] = -148.46840000;
    l_U1764[4] = 172.22490000;
    l_U1617[0] = {-1710.50400000, 365.18130000, 24.87330000};
    l_U1617[1] = {-1711.77100000, 363.71460000, 24.77640000};
    l_U1617[2] = {-1714.38600000, 365.71040000, 24.79900000};
    l_U1617[3] = {-1715.30400000, 368.09200000, 24.87620000};
    l_U1617[4] = {-1717.93700000, 366.66400000, 24.74740000};
    l_U1617[5] = {-1719.18400000, 369.90220000, 24.77640000};
    l_U1770[0] = 242.36830000;
    l_U1770[1] = 241.50910000;
    l_U1770[2] = 242.43220000;
    l_U1770[3] = 229.19900000;
    l_U1770[4] = 245.25410000;
    l_U1770[5] = 264.53450000;
    l_U371[0]._fU0 = 5;
    l_U371[0]._fU4 = {-633.94090000, 1201.88500000, 5.05870000};
    l_U371[0]._fU16 = 1;
    l_U371[1]._fU0 = 4;
    l_U371[1]._fU4 = {-640.67700000, 1206.95900000, 4.90800000};
    l_U371[1]._fU16 = 1;
    l_U371[2]._fU0 = 1;
    l_U371[2]._fU4 = {-638.92970000, 1203.37000000, 4.90880000};
    l_U371[2]._fU16 = 1;
    l_U371[3]._fU0 = 3;
    l_U371[3]._fU4 = {-652.73430000, 1209.07200000, 4.90800000};
    l_U371[3]._fU16 = 1;
    l_U371[3]._fU144 = 1;
    l_U371[4]._fU0 = 2;
    l_U371[4]._fU4 = {-650.64370000, 1218.55900000, 4.90810000};
    l_U371[4]._fU16 = 1;
    l_U371[4]._fU144 = 1;
    l_U371[5]._fU0 = 0;
    l_U371[5]._fU4 = {-647.40120000, 1203.28400000, 4.90830000};
    l_U371[5]._fU16 = 2;
    l_U371[6]._fU0 = 7;
    l_U371[6]._fU4 = {-662.08060000, 1207.18300000, 4.90800000};
    l_U371[6]._fU16 = 2;
    l_U371[6]._fU144 = 1;
    l_U371[7]._fU0 = 6;
    l_U371[7]._fU4 = {-644.62540000, 1202.98900000, 4.90880000};
    l_U371[7]._fU16 = 10;
    l_U169 = 4;
    l_U170 = 4;
    l_U1589[0] = {-1890.46400000, -67.41000000, 5.77880000};
    l_U1589[1] = {-1914.40000000, 304.43260000, 22.17550000};
    ADD_SCENARIO_BLOCKING_AREA( 64851, 1156, -10, 64957, 1270, 100 );
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( 64880, 1196, -10, 64903, 1213, 100, 0 );
    SWITCH_ROADS_OFF( -1750.75900000, 346.67620000, 0.00000000, -1668.22300000, 385.36550000, 100.00000000 );
    SWITCH_ROADS_OFF( -1798.88300000, 306.38280000, 0.00000000, -1722.18300000, 449.90750000, 100.00000000 );
    ADD_SCENARIO_BLOCKING_AREA( -671.10060000, 1196.85400000, 0.00000000, -580.31300000, 1250.56500000, 100.00000000 );
    uVar4 = sub_3607();
    sub_4678( ref uVar4, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    switch (g_U39149[2])
    {
        case 0:
        sub_8034();
        LOAD_SCENE( 63784, 331.80000000, 26 );
        if (NOT (IS_CHAR_DEAD( l_U1241[0]._fU0 )))
        {
            ADD_BLIP_FOR_CHAR( l_U1241[0]._fU0, ref l_U1450 );
            SET_BLIP_AS_FRIENDLY( l_U1450, 1 );
        }
        bVar5 = true;
        CLEAR_AREA_OF_CARS( -1729.89300000, 342.60100000, 24.44420000, 500 );
        sub_16493();
        sub_53853( 3000 );
        break;
        case 1:
        l_U1841 = {-647.17370000, 1231.09600000, 4.90860000};
        l_U1844 = 226.85850000;
        l_U362 = 1;
        break;
    }
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    SET_CAR_DENSITY_MULTIPLIER( 0.40000000 );
    ADD_COVER_POINT( -622.19960000, 1181.58800000, 2.09210000, 0, 94.56430000, 3, 0, ref l_U1798[0] );
    ADD_COVER_POINT( -628.78680000, 1186.44300000, 2.09870000, 1, 0.00000000, 3, 0, ref l_U1798[1] );
    ADD_COVER_POINT( -628.36600000, 1181.72500000, 2.13410000, 2, 0.00000000, 0, 0, ref l_U1798[2] );
    ADD_COVER_POINT( -632.74140000, 1220.74100000, 4.90840000, 3, 175.05880000, 0, 0, ref l_U1798[3] );
    ADD_COVER_POINT( -623.41280000, 1221.31500000, 5.02150000, 3, 179.77560000, 0, 0, ref l_U1798[4] );
    ADD_COVER_POINT( -628.05060000, 1220.79200000, 4.90840000, 0, 175.79710000, 0, 0, ref l_U1798[5] );
    ADD_COVER_POINT( -640.21560000, 1228.85000000, 4.90840000, 3, 183.21790000, 0, 0, ref l_U1798[6] );
    ADD_COVER_POINT( -617.76930000, 1203.82700000, 5.09870000, 0, 174.85360000, 3, 0, ref l_U1798[7] );
    SET_GAME_CAM_HEADING( 0.00000000 );
    SET_WANTED_MULTIPLIER( 0.10000000 );
    SET_GPS_TEST_IN_3D_FLAG( 1 );
    if (bVar5)
    {
        WAIT( 1000 );
        if (NOT (IS_CHAR_DEAD( sub_3607() )))
        {
            SET_PLAYER_CONTROL( sub_26182(), 1 );
        }
        SETTIMERA( 0 );
        DO_SCREEN_FADE_IN( 500 );
    }
    return;
}

void sub_4678(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if (((uParam0^) == sub_3607()) AND (g_U15728[19]))
        {
            if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == 0)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 1)))
            {
                SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, 0, 1 );
            }
        }
        else if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == iParam2)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, iParam2, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 2 )) == iParam3)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 2 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 2, iParam3, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 5 )) == iParam4)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 5 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 5, iParam4, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 4 )) == iParam5)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 4 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 4, iParam5, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 3 )) == iParam6)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 3 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 3, iParam6, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 7 )) == iParam7)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 7 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 7, iParam7, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 8 )) == 0)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 8 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 8, 0, 0 );
        }
        iVar12 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar12 );
        if (NOT (iVar12 == iParam8))
        {
            if (iParam8 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 0 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 0, iParam8 );
            }
        }
        iVar13 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar13 );
        if (NOT (iVar13 == iParam9))
        {
            if (iParam9 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 1 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 1, iParam9 );
            }
        }
    }
    return;
}

void sub_5808(unknown uParam0)
{
    StrCopy( ref l_U22._fU0, uParam0, 16 );
    sub_5825();
    return;
}

void sub_5825()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U22._fU16[I]._fU0 = nil;
        StrCopy( ref l_U22._fU16[I]._fU4, "", 32 );
        l_U22._fU344[I] = 0;
    }
    return;
}

void sub_5929(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U22._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U22._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_6009( "\n PED NUMBER ", uParam0 );
    sub_6049( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_6009(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6049(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_8034()
{
    CLEAR_AREA( -1725.15700000, 353.73800000, 24.44400000, 100.00000000, 1 );
    EXTINGUISH_FIRE_AT_POINT( -1725.15700000, 353.73800000, 24.44400000, 300 );
    if (NOT (IS_CHAR_DEAD( sub_3607() )))
    {
        SET_CHAR_COORDINATES( sub_3607(), -1732.51000000, 340.59000000, 25.12000000 );
        SET_CHAR_HEADING( sub_3607(), -27.38000000 );
        CLEAR_ROOM_FOR_CHAR( sub_3607() );
    }
    sub_8176( 0 );
    REQUEST_MODEL( sub_4251( 0 ) );
    REQUEST_MODEL( sub_4251( 1 ) );
    REQUEST_MODEL( sub_4251( 13 ) );
    REQUEST_MODEL( sub_4251( 6 ) );
    REQUEST_MODEL( -2135182574 );
    REQUEST_MODEL( 1488645394 );
    REQUEST_MODEL( -237900182 );
    REQUEST_MODEL( -1085774992 );
    while ((((((((NOT (HAS_MODEL_LOADED( sub_4251( 0 ) ))) || (NOT (HAS_MODEL_LOADED( sub_4251( 1 ) )))) || (NOT (HAS_MODEL_LOADED( sub_4251( 13 ) )))) || (NOT (HAS_MODEL_LOADED( sub_4251( 6 ) )))) || (NOT (HAS_MODEL_LOADED( -2135182574 )))) || (NOT (HAS_MODEL_LOADED( 1488645394 )))) || (NOT (HAS_MODEL_LOADED( -237900182 )))) || (NOT (HAS_MODEL_LOADED( -1085774992 ))))
    {
        WAIT( 0 );
    }
    sub_8519();
    while (NOT (sub_8662( ref l_U1402, -1729.87700000, 342.61800000, 24.44400000, 329.59000000 )))
    {
        WAIT( 0 );
    }
    SET_CAR_ENGINE_ON( l_U1402, 1, 1 );
    SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U1402, 1 );
    while (NOT (sub_10287( 0, -1724.34000000, 357.20960000, 24.44400000, 340.76070000, ref l_U1241[0] )))
    {
        WAIT( 0 );
    }
    sub_5929( 1, l_U1241[0]._fU0, "BILLY", 0 );
    sub_12741( 0 );
    SET_CHAR_DIES_INSTANTLY_IN_WATER( l_U1241[0]._fU0, 1 );
    SET_CHAR_DROWNS_IN_WATER( l_U1241[0]._fU0, 1 );
    SET_CHAR_MAX_TIME_IN_WATER( l_U1241[0]._fU0, 1.00000000 );
    sub_12963( ref l_U1241[0], 128 );
    SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE( l_U1241[0]._fU0, 1 );
    VEHICLE_CAN_BE_TARGETTED_BY_HS_MISSILE( l_U1241[0]._fU4, 0 );
    while (NOT (sub_10287( 1, -1725.15700000, 353.73800000, 24.44400000, 331.97650000, ref l_U1241[1] )))
    {
        WAIT( 0 );
    }
    sub_5929( 5, l_U1241[1]._fU0, "JIM", 0 );
    sub_12741( 1 );
    SET_CHAR_DIES_INSTANTLY_IN_WATER( l_U1241[1]._fU0, 1 );
    SET_CHAR_DROWNS_IN_WATER( l_U1241[1]._fU0, 1 );
    SET_CHAR_MAX_TIME_IN_WATER( l_U1241[1]._fU0, 1.00000000 );
    sub_12963( ref l_U1241[1], 128 );
    while (NOT (sub_10287( 13, -1727.86500000, 351.19800000, 24.44400000, 321.28650000, ref l_U1241[2] )))
    {
        WAIT( 0 );
    }
    sub_5929( 2, l_U1241[2]._fU0, "BRIAN", 0 );
    sub_12741( 13 );
    SET_CHAR_DIES_INSTANTLY_IN_WATER( l_U1241[2]._fU0, 1 );
    SET_CHAR_DROWNS_IN_WATER( l_U1241[2]._fU0, 1 );
    SET_CHAR_MAX_TIME_IN_WATER( l_U1241[2]._fU0, 1.00000000 );
    sub_12963( ref l_U1241[2], 128 );
    while (NOT (sub_10287( 6, -1727.56300000, 347.99210000, 24.44400000, 321.28650000, ref l_U1241[3] )))
    {
        WAIT( 0 );
    }
    sub_5929( 3, l_U1241[3]._fU0, "TERRY", 0 );
    sub_12741( 6 );
    SET_CHAR_DIES_INSTANTLY_IN_WATER( l_U1241[3]._fU0, 1 );
    SET_CHAR_DROWNS_IN_WATER( l_U1241[3]._fU0, 1 );
    SET_CHAR_MAX_TIME_IN_WATER( l_U1241[3]._fU0, 1.00000000 );
    sub_12963( ref l_U1241[3], 128 );
    while (NOT (sub_10287( 7, -1730.02400000, 347.36270000, 24.44400000, 340.46540000, ref l_U1241[4] )))
    {
        WAIT( 0 );
    }
    sub_5929( 4, l_U1241[4]._fU0, "CLAY", 0 );
    sub_12741( 7 );
    SET_CHAR_DIES_INSTANTLY_IN_WATER( l_U1241[4]._fU0, 1 );
    SET_CHAR_DROWNS_IN_WATER( l_U1241[4]._fU0, 1 );
    SET_CHAR_MAX_TIME_IN_WATER( l_U1241[4]._fU0, 1.00000000 );
    sub_12963( ref l_U1241[4], 128 );
    if ((NOT (IS_CHAR_DEAD( sub_3607() ))) AND (NOT (IS_CAR_DEAD( l_U1402 ))))
    {
        WARP_CHAR_INTO_CAR( sub_3607(), l_U1402 );
        SET_CAR_ON_GROUND_PROPERLY( l_U1402 );
        APPLY_FORCE_TO_CAR( l_U1402, 1, 0, 0, -1, 0, 0, 0, 0, 1, 1, 0 );
    }
    sub_13806( ref l_U1241[0], l_U1589[0], 0 );
    sub_14402( ref l_U1241[1], l_U1241[0]._fU0 );
    sub_14402( ref l_U1241[2], l_U1241[0]._fU0 );
    sub_14402( ref l_U1241[3], l_U1241[1]._fU0 );
    sub_14402( ref l_U1241[4], l_U1241[2]._fU0 );
    l_U1241[1]._fU40 = 0;
    l_U1241[2]._fU40 = 1;
    l_U1241[3]._fU40 = 2;
    l_U1241[4]._fU40 = 2;
    if (g_U39218 == 0)
    {
        sub_15575( ref l_U1241[0], "E1B4_BL1V1", "E1B4_BL1V2" );
        sub_15575( ref l_U1241[2], "E1B4_BR1V1", "E1B4_BR1V2" );
    }
    else if (g_U39218 == 1)
    {
        sub_15575( ref l_U1241[0], "E1B4_BL1V2", "E1B4_BL1V1" );
        sub_15575( ref l_U1241[2], "E1B4_BR1V2", "E1B4_BR1V1" );
    }
    if (g_U39218 < 2)
    {
        g_U39218++;
    }
    for ( l_U1721 = 0; l_U1721 < l_U1241; l_U1721++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U1241[l_U1721]._fU0 )))
        {
            if (NOT (IS_CAR_DEAD( l_U1241[l_U1721]._fU4 )))
            {
                sub_15934( ref l_U1241[l_U1721], l_U1241[l_U1721]._fU4, 1 );
                LOCK_CAR_DOORS( l_U1241[l_U1721]._fU4, 3 );
                SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U1241[l_U1721]._fU4, 1 );
            }
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U1241[l_U1721]._fU0, 1 );
            SET_PED_DIES_WHEN_INJURED( l_U1241[l_U1721]._fU0, 1 );
            SET_CHAR_DECISION_MAKER( l_U1241[l_U1721]._fU0, l_U1473 );
            SET_COMBAT_DECISION_MAKER( l_U1241[l_U1721]._fU0, l_U1474 );
            SET_CHAR_MAX_HEALTH( l_U1241[l_U1721]._fU0, 600 );
            SET_CHAR_HEALTH( l_U1241[l_U1721]._fU0, 600 );
            SET_CHAR_SUFFERS_CRITICAL_HITS( l_U1241[l_U1721]._fU0, 0 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U1241[l_U1721]._fU0, 0 );
            SET_CHAR_RELATIONSHIP( l_U1241[l_U1721]._fU0, 0, 0 );
            switch (l_U1721)
            {
                case 0:
                case 3:
                GIVE_WEAPON_TO_CHAR( l_U1241[l_U1721]._fU0, 26, 30000, 0 );
                break;
                case 1:
                GIVE_WEAPON_TO_CHAR( l_U1241[l_U1721]._fU0, 7, 30000, 0 );
                break;
                default:
                GIVE_WEAPON_TO_CHAR( l_U1241[l_U1721]._fU0, 7, 30000, 0 );
                break;
            }
        }
    }
    l_U1818 = 1;
    return;
}

void sub_8176(boolean bParam0)
{
    g_U11108 = 1;
    if (bParam0)
    {
        sub_8200( 0, 0 );
    }
    else
    {
        sub_8200( 1, 1 );
    }
    return;
}

void sub_8200(boolean bParam0, unknown uParam1)
{
    if ((NOT g_U11094) AND (NOT g_U11093))
    {
        if (bParam0)
        {
            g_U11092 = 1;
        }
        else
        {
            g_U11091 = 1;
        }
        g_U11098 = uParam1;
    }
    return;
}

void sub_8519()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (NOT (IS_CHAR_DEAD( sub_3607() )))
    {
        GET_CHAR_COORDINATES( sub_3607(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        uVar2 = GET_CLOSEST_CAR( uVar3, 2000.00000000, sub_8575(), 22 );
        if (DOES_VEHICLE_EXIST( uVar2 ))
        {
            DELETE_CAR( ref uVar2 );
        }
    }
    return;
}

int sub_8575()
{
    return 301427732;
}

int sub_8662(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    uVar7 = sub_8575();
    SUPPRESS_CAR_MODEL( uVar7 );
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
    sub_8802( (uParam0^), uVar7, 9 );
    SET_HAS_BEEN_OWNED_BY_PLAYER( (uParam0^), 1 );
    SET_CAN_BURST_CAR_TYRES( (uParam0^), 0 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uVar7 );
    }
    return 1;
}

void sub_8802(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case -159126838:
        CHANGE_CAR_COLOUR( uParam0, 106, 106 );
        SET_EXTRA_CAR_COLOURS( uParam0, 127, 0 );
        break;
        case 301427732:
        CHANGE_CAR_COLOUR( uParam0, 69, 112 );
        SET_EXTRA_CAR_COLOURS( uParam0, 112, 0 );
        break;
        case -570033273:
        if (iParam2 == 1)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 0, 0 );
            SET_EXTRA_CAR_COLOURS( uParam0, 4, 35 );
        }
        break;
        case -408052231:
        switch (iParam2)
        {
            case 6:
            case 13:
            case 16:
            case 7:
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            if (iParam2 == 6)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
                CHANGE_CAR_COLOUR( uParam0, 78, 37 );
                SET_EXTRA_CAR_COLOURS( uParam0, 81, 1 );
            }
            else if (iParam2 == 13)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 0 );
                CHANGE_CAR_COLOUR( uParam0, 37, 90 );
                SET_EXTRA_CAR_COLOURS( uParam0, 129, 1 );
            }
            else if (iParam2 == 16)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
                CHANGE_CAR_COLOUR( uParam0, 69, 88 );
                SET_EXTRA_CAR_COLOURS( uParam0, 125, 1 );
            }
            else if (iParam2 == 7)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 0 );
                CHANGE_CAR_COLOUR( uParam0, 70, 78 );
                SET_EXTRA_CAR_COLOURS( uParam0, 1, 1 );
            }
            else
            {
                SCRIPT_ASSERT( "Set_Gang_Bike_Colours: DIABOLUS - missing bike extras and colours for contact" );
            };;;;
            break;
        }
        break;
        case 584879743:
        CHANGE_CAR_COLOUR( uParam0, 78, 66 );
        SET_EXTRA_CAR_COLOURS( uParam0, 90, 0 );
        break;
        case 802082487: break;
        case -359167535:
        CHANGE_CAR_COLOUR( uParam0, 1, 90 );
        SET_EXTRA_CAR_COLOURS( uParam0, 95, 0 );
        break;
        case -571009320:
        CHANGE_CAR_COLOUR( uParam0, 112, 74 );
        SET_EXTRA_CAR_COLOURS( uParam0, 4, 0 );
        break;
        case 2006142190:
        CHANGE_CAR_COLOUR( uParam0, 132, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 131, 0 );
        break;
        case -1606187161:
        CHANGE_CAR_COLOUR( uParam0, 85, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 82, 0 );
        break;
        case -618617997:
        CHANGE_CAR_COLOUR( uParam0, 33, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 5, 0 );
        break;
        case -77769032: break;
        case -1670998136: break;
        case -1759858085:
        if (iParam2 == 15)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 132, 1 );
            SET_EXTRA_CAR_COLOURS( uParam0, 112, 112 );
        }
        break;
        case 1265391242: break;
        case -255678177:
        if (iParam2 == 17)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 112, 112 );
            SET_EXTRA_CAR_COLOURS( uParam0, 1, 112 );
        }
        break;
        case -114291515: break;
        case -891462355: break;
    }
    return;
}

int sub_10287(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    if ((NOT (sub_10298( uParam0 ))) || (NOT (HAS_MODEL_LOADED( sub_10332( uParam0 ) ))))
    {
        sub_10566( uParam0 );
        REQUEST_MODEL( sub_10332( uParam0 ) );
        return 0;
    }
    sub_10637( uParam1, uParam4, sub_4251( uParam0 ), sub_10332( uParam0 ), iParam5, 1 );
    sub_8802( iParam5->_fU4, sub_10332( uParam0 ), uParam0 );
    SUPPRESS_CAR_MODEL( sub_10332( uParam0 ) );
    sub_12293( uParam0, iParam5->_fU0 );
    sub_4228( uParam0 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_10332( uParam0 ) );
    }
    return 1;
}

void sub_10298(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_4251( uParam0 ) );
}

int sub_10332(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -359167535;
        case 1: return -570033273;
        case 6: return -408052231;
        case 7: return -408052231;
        case 13: return -408052231;
        case 16: return -408052231;
        case 17: return -255678177;
        case 15: return -1759858085;
    }
    SCRIPT_ASSERT( "Return_Contact_Vehicle_Model: Unknown Contact ID\n" );
    return -570033273;
}

void sub_10566(unknown uParam0)
{
    REQUEST_MODEL( sub_4251( uParam0 ) );
    return;
}

void sub_10637(vector vParam0, unknown uParam3, unknown uParam4, unknown uParam5, int iParam6, boolean bParam7)
{
    unknown uVar10;

    sub_10671( vParam0 + (vector( 2.00000000, 0.00000000, 0.00000000)), uParam3, uParam4, iParam6 );
    uVar10 = sub_12096( vParam0, uParam3, uParam5 );
    WARP_CHAR_INTO_CAR( iParam6->_fU0, uVar10 );
    GIVE_PED_HELMET_WITH_OPTS( iParam6->_fU0, 1 );
    iParam6->_fU4 = uVar10;
    if (NOT bParam7)
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar10 );
    }
    return;
}

void sub_10671(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    CREATE_CHAR( sub_11269( sub_10681( ref uParam4 ) ), uParam4, uParam0._fU0, uParam0._fU4, uParam0._fU8, iParam5 + 0, 1 );
    SET_CHAR_HEADING( iParam5->_fU0, uParam3 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( iParam5->_fU0 );
    SET_CHAR_WILL_USE_CARS_IN_COMBAT( iParam5->_fU0, 1 );
    sub_11397( iParam5 );
    return;
}

void sub_10681(unknown uParam0)
{
    int Result;

    Result = 0;
    switch ((uParam0^))
    {
        case -159126838:
        case 301427732:
        case -570033273:
        case -408052231:
        case 584879743:
        case 802082487:
        case -359167535:
        case 1439613707:
        case 1737188996:
        case -411638179:
        case -2130437771:
        case -1832534792:
        case -1670328242:
        case 188410296:
        case 1414790133:
        case 630267504:
        case 1719115836:
        case 1914397972:
        case -2138439183:
        case 1215631816:
        case 1706970202:
        case 717510247:
        case 965080042:
        case 693982133:
        case 454735664:
        case 1409362172:
        case 767450539:
        case 1686719296:
        case 1917871822:
        case 422524045:
        Result = 1;
        break;
        case -571009320:
        case 2006142190:
        case -1606187161:
        case -77769032:
        case -618617997:
        case 977480632:
        case -1159156463:
        case 479817841:
        case 226415164:
        case 15972646:
        case -2107556865:
        case -150646512:
        case 690697563:
        case -504027408:
        Result = 2;
        break;
        case -114291515:
        case -891462355:
        case -1670998136:
        case -1759858085:
        case 1265391242:
        case -255678177:
        case 236691815:
        case 1590280898:
        Result = 3;
        break;
    }
    if (Result == 0)
    {
        if (((((((uParam0^) == (sub_4251( 0 ))) || ((uParam0^) == (sub_4251( 1 )))) || ((uParam0^) == (sub_4251( 6 )))) || ((uParam0^) == (sub_4251( 7 )))) || ((uParam0^) == (sub_4251( 13 )))) || ((uParam0^) == (sub_4251( 16 ))))
        {
            Result = 1;
        }
        else if (((uParam0^) == (sub_4251( 15 ))) || ((uParam0^) == (sub_4251( 17 ))))
        {
            Result = 3;
        }
    }
    return Result;
}

int sub_11269(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        return 9;
        break;
        case 2:
        return 8;
        break;
    }
    return 25;
}

void sub_11397(int iParam0)
{
    int iVar3;

    SET_CHAR_WILL_DO_DRIVEBYS( iParam0->_fU0, 1 );
    ENABLE_PED_HELMET( iParam0->_fU0, 0 );
    iVar3 = sub_11436( iParam0 + 0 );
    if (iVar3 == 1)
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, 0 );
        SET_CHAR_RELATIONSHIP( iParam0->_fU0, 0, 0 );
        SET_CHAR_NEVER_TARGETTED( iParam0->_fU0, 1 );
    }
    else if (iVar3 == 3)
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, 0 );
        SET_CHAR_RELATIONSHIP( iParam0->_fU0, 1, 0 );
    }
    else if (iVar3 == 2)
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, sub_11606( iVar3 ) );
        SET_CHAR_AS_ENEMY( iParam0->_fU0, 1 );
    }
    else
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, sub_11606( iVar3 ) );
    };;;
    SET_CHAR_PROOFS( iParam0->_fU0, 0, 0, 0, 1, 0 );
    SET_CHAR_WILL_USE_CARS_IN_COMBAT( iParam0->_fU0, 1 );
    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 0 );
    SET_PED_FALL_OFF_BIKES_WHEN_SHOT( iParam0->_fU0, 0 );
    iParam0->_fU8 = nil;
    iParam0->_fU12 = nil;
    iParam0->_fU92 = 0;
    iParam0->_fU16 = {0, 0, 0};
    iParam0->_fU28 = 18.00000000;
    iParam0->_fU32 = 0;
    iParam0->_fU36 = 4;
    iParam0->_fU40 = 2;
    iParam0->_fU88 = 12;
    iParam0->_fU96 = 5;
    if (iVar3 == 1)
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" )) == 0)
        {
            sub_11893( iParam0 );
        }
        else if ((NOT (IS_CHAR_MODEL( iParam0->_fU0, sub_4251( 6 ) ))) AND (NOT (IS_CHAR_MODEL( iParam0->_fU0, sub_4251( 7 ) ))))
        {
            sub_11893( iParam0 );
        }
    }
    return;
}

void sub_11436(unknown uParam0)
{
    unknown uVar3;
    int Result;

    Result = 0;
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        GET_CHAR_MODEL( (uParam0^), ref uVar3 );
        Result = sub_10681( ref uVar3 );
    }
    return Result;
}

int sub_11606(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        return 6;
        break;
        case 2:
        return 5;
        break;
    }
    return 22;
}

void sub_11893(int iParam0)
{
    if (l_U139)
    {
        ADD_BLIP_FOR_CHAR( iParam0->_fU0, iParam0 + 100 );
        SET_BLIP_AS_FRIENDLY( iParam0->_fU100, 1 );
        CHANGE_BLIP_PRIORITY( iParam0->_fU100, 0 );
        SET_BLIP_AS_SHORT_RANGE( iParam0->_fU100, 1 );
        CHANGE_BLIP_SCALE( iParam0->_fU100, 0.50000000 );
        CHANGE_BLIP_DISPLAY( iParam0->_fU100, 5 );
    }
    return;
}

void sub_12096(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown Result;

    CREATE_CAR( uParam4, uParam0._fU0, uParam0._fU4, uParam0._fU8, ref Result, 1 );
    SET_CAR_HEADING( Result, uParam3 );
    sub_8802( Result, uParam4, 9 );
    SET_LOAD_COLLISION_FOR_CAR_FLAG( Result, 1 );
    SET_BLIP_THROTTLE_RANDOMLY( Result, 1 );
    VEHICLE_CAN_BE_TARGETTED_BY_HS_MISSILE( Result, 0 );
    return Result;
}

void sub_12293(unknown uParam0, unknown uParam1)
{
    sub_12305( ref uParam1, uParam0 );
    g_U20762[uParam0]._fU0 = 1;
    g_U20762[uParam0]._fU4 = uParam1;
    return;
}

void sub_12305(unknown uParam0, int iParam1)
{
    sub_12316( uParam0 );
    if (iParam1 == 22)
    {
        sub_4678( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_12442( (uParam0^), iParam1, g_U38647[iParam1] );
    }
    return;
}

void sub_12316(unknown uParam0)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    return;
}

void sub_12442(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 13:
        sub_4678( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_4678( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_12741(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_12752( uParam0 );
    if (iVar3 == 6)
    {
        return;
    }
    g_U39058[iVar3]._fU4 = 1;
    g_U39102 = 1;
    return;
}

int sub_12752(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 1: return 1;
        case 6: return 2;
        case 7: return 3;
        case 13: return 4;
        case 16: return 5;
    }
    return 6;
}

void sub_12963(int iParam0, int iParam1)
{
    iParam0->_fU88 = (iParam0->_fU88) || (iParam1);
    if (iParam1 == 1)
    {
        if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
        {
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 1 );
        }
    }
    return;
}

void sub_13806(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    int iVar7;

    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if ((VDIST2( uParam1, iParam0->_fU16 )) > 1.00000000)
        {
            TASK_PAUSE( iParam0->_fU0, 30 );
        }
        else if ((iParam0->_fU36 == 4) AND ((VDIST( iParam0->_fU16, sub_13899( iParam0->_fU0, 1 ) )) < 12.00000000))
        {
            return;
        }
        else if (iParam0->_fU36 != 2)
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar7 );
            if (iVar7 != 7)
            {
                TASK_PAUSE( iParam0->_fU0, 30 );
            }
        };;;
    }
    if (iParam0->_fU28 < 0.01000000)
    {
        iParam0->_fU28 = 28.00000000;
    }
    iParam0->_fU36 = 2;
    iParam0->_fU16 = {uParam1};
    switch (uParam4)
    {
        case 0:
        sub_14159( iParam0, 32 );
        sub_14159( iParam0, 64 );
        break;
        case 1:
        sub_14159( iParam0, 32 );
        sub_12963( iParam0, 64 );
        sub_12963( iParam0, 1 );
        break;
        case 2:
        sub_14159( iParam0, 32 );
        sub_12963( iParam0, 64 );
        sub_14159( iParam0, 1 );
        break;
        case 3:
        sub_12963( iParam0, 32 );
        sub_14159( iParam0, 64 );
        break;
    }
    return;
}

void sub_13899(unknown uParam0, boolean bParam1)
{
    unknown Result;
    unknown uVar5;
    unknown uVar6;

    if (IS_CHAR_DEAD( uParam0 ))
    {
        N_1363505769( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else
    {
        GET_CHAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    if (NOT bParam1)
    {
        Result._fU8 = 0.00000000;
    }
    return Result;
}

void sub_14159(int iParam0, int iParam1)
{
    if (sub_14172( iParam0, iParam1 ))
    {
        iParam0->_fU88 = (iParam0->_fU88) XOR (iParam1);
    }
    if (iParam1 == 1)
    {
        if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
        {
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 0 );
        }
    }
    return;
}

boolean sub_14172(int iParam0, unknown uParam1)
{
    return ((iParam0->_fU88) AND (uParam1)) > 0;
}

void sub_14402(int iParam0, int iParam1)
{
    unknown uVar4;
    unknown uVar5;
    int iVar6;

    if (IS_CHAR_INJURED( iParam1 ))
    {
        return;
    }
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                if (sub_14498( iParam0->_fU0, uVar4 ))
                {
                    if (NOT (IS_CHAR_IN_CAR( iParam1, uVar4 )))
                    {
                        return;
                    }
                }
            }
        }
    }
    if ((iParam0->_fU8 == sub_3607()) AND (iParam1 != sub_3607()))
    {
        if (iParam0->_fU0 == g_U11198)
        {
            g_U11198 = nil;
        }
        if (iParam0->_fU0 == g_U11197)
        {
            g_U11197 = nil;
        }
    }
    if ((iParam0->_fU0 != g_U11081[0]) AND (iParam0->_fU0 != g_U11081[1]))
    {
        if (DOES_CHAR_EXIST( g_U11197 ))
        {
            if ((g_U11197 == g_U11081[0]) || (g_U11197 == g_U11081[1]))
            {
                g_U11197 = nil;
            }
        }
        if (DOES_CHAR_EXIST( g_U11198 ))
        {
            if ((g_U11198 == g_U11081[0]) || (g_U11198 == g_U11081[1]))
            {
                g_U11198 = nil;
            }
        }
        g_U11114 = 1;
    }
    if ((NOT (IS_CHAR_INJURED( iParam0->_fU0 ))) AND ((iParam0->_fU8 != iParam1) || (iParam0->_fU36 != 1)))
    {
        TASK_PAUSE( iParam0->_fU0, 30 );
    }
    iParam0->_fU8 = iParam1;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (IS_PED_IN_GROUP( iParam0->_fU0 ))
        {
            GET_PED_GROUP_INDEX( iParam0->_fU0, ref uVar5 );
            GET_GROUP_LEADER( uVar5, ref iVar6 );
            if (DOES_GROUP_EXIST( uVar5 ))
            {
                GET_GROUP_LEADER( uVar5, ref iVar6 );
                if (iVar6 != iParam0->_fU8)
                {
                    REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
                }
            }
        }
        sub_14983( iParam0, 1 );
        if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
        {
            SET_CHAR_DEFENSIVE_AREA_ATTACHED_TO_PED( iParam0->_fU0, iParam0->_fU8, 0, 2, -2, 0, 65516, 5, 20, 1 );
        }
        if (iParam0->_fU8 == sub_3607())
        {
            if (NOT (DOES_CHAR_EXIST( g_U11198 )))
            {
                sub_15098( iParam0, 0 );
            }
            else if (IS_CHAR_INJURED( g_U11198 ))
            {
                sub_15098( iParam0, 0 );
            }
            else if (NOT (g_U11198 == iParam0->_fU0))
            {
                if (NOT (DOES_CHAR_EXIST( g_U11197 )))
                {
                    sub_15098( iParam0, 1 );
                }
                else if (IS_CHAR_INJURED( g_U11197 ))
                {
                    sub_15098( iParam0, 1 );
                }
                else if (NOT (g_U11197 == iParam0->_fU0))
                {
                    sub_15098( iParam0, 2 );
                };;;
            };;;
        }
    }
    return;
}

boolean sub_14498(unknown uParam0, unknown uParam1)
{
    return (IS_CHAR_SITTING_IN_CAR( uParam0, uParam1 )) AND (NOT (sub_14522( uParam0, uParam1 )));
}

boolean sub_14522(int iParam0, unknown uParam1)
{
    int iVar4;

    GET_DRIVER_OF_CAR( uParam1, ref iVar4 );
    return iVar4 == iParam0;
}

void sub_14983(int iParam0, unknown uParam1)
{
    iParam0->_fU36 = uParam1;
    return;
}

void sub_15098(int iParam0, int iParam1)
{
    if (iParam0->_fU8 == sub_3607())
    {
        if (iParam1 == 1)
        {
            g_U11197 = iParam0->_fU0;
            if (g_U11198 == iParam0->_fU0)
            {
                g_U11198 = nil;
            }
        }
        if (iParam1 == 0)
        {
            g_U11198 = iParam0->_fU0;
            if (g_U11197 == iParam0->_fU0)
            {
                g_U11197 = nil;
            }
        }
    }
    if ((iParam0->_fU0 != g_U11081[0]) AND (iParam0->_fU0 != g_U11081[1]))
    {
        g_U11114 = 1;
    }
    iParam0->_fU40 = iParam1;
    return;
}

void sub_15575(int iParam0, unknown uParam1, unknown uParam2)
{
    ref iParam0->_fU44->_fU0 = 1;
    ref iParam0->_fU44->_fU8 = 0;
    StrCopy( ref ref iParam0->_fU44->_fU12, uParam1, 16 );
    if (NOT (IS_STRING_NULL( uParam2 )))
    {
        StrCopy( ref ref iParam0->_fU44->_fU28, uParam2, 16 );
    }
    else
    {
        StrCopy( ref ref iParam0->_fU44->_fU28, "", 16 );
    }
    return;
}

void sub_15934(int iParam0, unknown uParam1, boolean bParam2)
{
    iParam0->_fU4 = uParam1;
    if (bParam2)
    {
        sub_14159( iParam0, 2 );
    }
    return;
}

void sub_16493()
{
    int I;
    boolean bVar3;
    float fVar4;

    bVar3 = true;
    if (NOT (IS_CAR_DEAD( l_U1402 )))
    {
        if ((LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3607(), l_U1402, l_U1790, l_U1790, l_U1790, 0 )) || (IS_CHAR_IN_CAR( sub_3607(), l_U1402 )))
        {
            l_U1493 = 1;
        }
        else
        {
            l_U1493 = 0;
        }
    }
    for ( l_U1721 = 0; l_U1721 < l_U1241; l_U1721++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U1241[l_U1721]._fU0 )))
        {
            if (l_U1721 == 0)
            {
                sub_16668( ref l_U1241[l_U1721] );
            }
            if (l_U1498[l_U1721])
            {
                if (l_U1721 == 0)
                {
                    l_U1566 = 1;
                    if (NOT l_U1528)
                    {
                        sub_17395( ref l_U1241[l_U1721], 0 );
                    }
                    if (NOT l_U1527)
                    {
                        if (IS_CHAR_IN_ANY_CAR( l_U1241[l_U1721]._fU0 ))
                        {
                            if (l_U1493)
                            {
                                sub_40779();
                                if (NOT l_U1817)
                                {
                                    if (NOT l_U1834)
                                    {
                                        if (sub_40918())
                                        {
                                            if (NOT (IS_CHAR_DEAD( l_U1241[0]._fU0 )))
                                            {
                                                if (IS_CHAR_IN_ANY_CAR( l_U1241[0]._fU0 ))
                                                {
                                                    if (sub_40779())
                                                    {
                                                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3607(), l_U1241[0]._fU0, 30.00000000, 30.00000000, 30.00000000, 0 ))
                                                        {
                                                            if (l_U1816)
                                                            {
                                                                for ( I = 0; I < l_U1241; I++ )
                                                                {
                                                                    if (sub_21467( l_U1241[I] ))
                                                                    {
                                                                        bVar3 = false;
                                                                    }
                                                                }
                                                                if (bVar3)
                                                                {
                                                                    sub_41276();
                                                                    sub_41368( 1 );
                                                                    if (NOT (DOES_BLIP_EXIST( l_U1849 )))
                                                                    {
                                                                        ADD_BLIP_FOR_COORD( l_U1846._fU0, l_U1846._fU4, l_U1846._fU8, ref l_U1849 );
                                                                        SET_ROUTE( l_U1849, 1 );
                                                                    }
                                                                    l_U1834 = 1;
                                                                }
                                                            }
                                                            else if (NOT l_U1870)
                                                            {
                                                                for ( I = 0; I < l_U1241; I++ )
                                                                {
                                                                    sub_41501( ref l_U1241[I] );
                                                                }
                                                                sub_15575( ref l_U1241[0], "E1B4_SRACE", 0 );
                                                                l_U1870 = 1;
                                                            }
                                                            else if (NOT (sub_21502( l_U1241[0] )))
                                                            {
                                                                sub_41276();
                                                                sub_41368( 1 );
                                                                l_U168 = 0;
                                                                if (NOT (DOES_BLIP_EXIST( l_U1849 )))
                                                                {
                                                                    ADD_BLIP_FOR_COORD( l_U1846._fU0, l_U1846._fU4, l_U1846._fU8, ref l_U1849 );
                                                                    SET_ROUTE( l_U1849, 1 );
                                                                }
                                                                if (DOES_BLIP_EXIST( l_U1450 ))
                                                                {
                                                                    CHANGE_BLIP_SCALE( l_U1450, 0.50000000 );
                                                                    CHANGE_BLIP_DISPLAY( l_U1450, 2 );
                                                                }
                                                                l_U1834 = 1;
                                                            };;;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                if (NOT l_U1834)
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_3D( l_U1241[l_U1721]._fU0, -1765.06400000, 292.94650000, 24.91520000, 81.00000000, 100.00000000, 5.00000000, 0 ))
                                    {
                                        if (NOT l_U1835)
                                        {
                                            sub_41832( ref l_U1241[l_U1721], 3.00000000, 15.00000000, 1, 0 );
                                            if (l_U1815)
                                            {
                                                ;
                                            }
                                        }
                                    }
                                    else if ((LOCATE_CHAR_ANY_MEANS_3D( l_U1241[l_U1721]._fU0, -678.88170000, 1162.97100000, 18.96850000, 46.00000000, 34.00000000, 7.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U1241[l_U1721]._fU0, -596.91890000, 1324.45300000, 16.30740000, 24.00000000, 42.00000000, 7.00000000, 0 )))
                                    {
                                        l_U1835 = 0;
                                        sub_41832( ref l_U1241[l_U1721], 7.00000000, 18.00000000, 1, 0 );
                                        if (l_U1815)
                                        {
                                            ;
                                        }
                                    }
                                    else if ((LOCATE_CHAR_ANY_MEANS_3D( l_U1241[l_U1721]._fU0, -1994.98600000, -8.11480000, 6.72360000, 51.00000000, 15.00000000, 7.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U1241[l_U1721]._fU0, -2023.65300000, -9.00720000, 6.44930000, 25.00000000, 48.00000000, 4.00000000, 0 )))
                                    {
                                        sub_41832( ref l_U1241[l_U1721], 3.00000000, 15.00000000, 1, 0 );
                                        l_U1835 = 1;
                                        if (l_U1815)
                                        {
                                            ;
                                        }
                                    }
                                    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U1241[l_U1721]._fU0, -961.14170000, 1158.75500000, 17.32350000, 3.00000000, 20.00000000, 4.00000000, 0 ))
                                    {
                                        l_U1835 = 0;
                                        sub_41832( ref l_U1241[l_U1721], 7.00000000, 25.00000000, 1, 0 );
                                    }
                                    else if (l_U1835)
                                    {
                                        sub_41832( ref l_U1241[l_U1721], 10.00000000, 30.00000000, 1, 0 );
                                    }
                                    else
                                    {
                                        sub_41832( ref l_U1241[l_U1721], 7.00000000, 25.00000000, 1, 0 );
                                    };;;;;
                                }
                                else if (NOT l_U1866)
                                {
                                    if (NOT (sub_21467( l_U1241[0] )))
                                    {
                                        PRINT_NOW( "B4_RACEG", 7500, 1 );
                                        l_U1866 = 1;
                                    }
                                }
                                if (NOT l_U1867)
                                {
                                    if (NOT l_U1868)
                                    {
                                        if (((LOCATE_CHAR_IN_CAR_3D( sub_3607(), l_U1846._fU0, l_U1846._fU4, l_U1846._fU8 + 2.30000000, 2.50000000, 2.50000000, 2.50000000, 1 )) || (LOCATE_CHAR_IN_CAR_3D( sub_3607(), l_U1846._fU0, l_U1846._fU4, l_U1846._fU8, 6.00000000, 6.00000000, 6.00000000, 0 ))) || (LOCATE_CHAR_IN_CAR_3D( sub_3607(), -642.22560000, 1216.50100000, 5.91360000, 25.00000000, 13.00000000, 2.00000000, 0 )))
                                        {
                                            if (DOES_BLIP_EXIST( l_U1849 ))
                                            {
                                                REMOVE_BLIP( l_U1849 );
                                            }
                                            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3607(), l_U1241[0]._fU0, 25.00000000, 25.00000000, 2.00000000, 0 )))
                                            {
                                                sub_43032( "GENERIC_CELEBRATION" );
                                            }
                                            GET_GAME_TIMER( ref l_U1876 );
                                            l_U1867 = 1;
                                        }
                                    }
                                }
                                else if (NOT l_U1871)
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3607(), l_U1241[0]._fU0, 20.00000000, 20.00000000, 2.00000000, 0 ))
                                    {
                                        sub_21746( "E1B4_JWIN", ref l_U1482, 6, 1 );
                                        l_U1871 = 1;
                                    }
                                }
                                if (NOT l_U1874)
                                {
                                    if (NOT (IS_CAR_DEAD( l_U1402 )))
                                    {
                                        if (IS_CHAR_IN_CAR( sub_3607(), l_U1402 ))
                                        {
                                            GET_CAR_SPEED( l_U1402, ref fVar4 );
                                            if (fVar4 > 10.00000000)
                                            {
                                                if (LOCATE_CHAR_IN_CAR_3D( sub_3607(), -655.87580000, 1225.74000000, 5.91360000, 10.00000000, 8.00000000, 2.00000000, 0 ))
                                                {
                                                    l_U1874 = 1;
                                                }
                                            }
                                            else
                                            {
                                                l_U1874 = 1;
                                            }
                                        }
                                    }
                                }
                                if (NOT (IS_CHAR_DEAD( l_U1241[0]._fU0 )))
                                {
                                    if (NOT l_U1868)
                                    {
                                        if (NOT l_U1867)
                                        {
                                            if (LOCATE_CHAR_IN_CAR_3D( l_U1241[0]._fU0, l_U1846._fU0, l_U1846._fU4, l_U1846._fU8, 8.00000000, 8.00000000, 8.00000000, 0 ))
                                            {
                                                l_U1869 = 0;
                                                l_U1868 = 1;
                                            }
                                        }
                                    }
                                    else if (NOT l_U1871)
                                    {
                                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3607(), l_U1241[0]._fU0, 30.00000000, 30.00000000, 2.00000000, 0 ))
                                        {
                                            if (DOES_BLIP_EXIST( l_U1849 ))
                                            {
                                                REMOVE_BLIP( l_U1849 );
                                            }
                                            sub_21746( "E1B4_JLOSE", ref l_U1482, 6, 1 );
                                            l_U1871 = 1;
                                        }
                                    }
                                    if (LOCATE_CHAR_ANY_MEANS_3D( l_U1241[0]._fU0, -678.88170000, 1162.97100000, 18.96850000, 46.00000000, 34.00000000, 7.00000000, 0 ))
                                    {
                                        sub_43642( ref l_U1241[0], 18.00000000 );
                                    }
                                    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U1241[0]._fU0, -589.13160000, 1326.48300000, 16.31770000, 14.00000000, 26.00000000, 4.00000000, 0 ))
                                    {
                                        sub_43642( ref l_U1241[0], 18.00000000 );
                                    }
                                    else
                                    {
                                        sub_43642( ref l_U1241[0], 30.00000000 );
                                    }
                                }
                                if (NOT l_U1872)
                                {
                                    if (NOT sub_21554())
                                    {
                                        if (NOT (sub_21467( l_U1241[0] )))
                                        {
                                            GET_GAME_TIMER( ref l_U1875 );
                                            if (NOT l_U1873)
                                            {
                                                sub_43032( "GENERIC_CELEBRATION" );
                                                l_U1873 = 1;
                                            }
                                            l_U1872 = 1;
                                        }
                                    }
                                }
                                else
                                {
                                    sub_43872();
                                }
                            }
                            else
                            {
                                SET_DRIVE_TASK_CRUISE_SPEED( l_U1241[l_U1721]._fU0, 0 );
                            }
                        }
                        else if (NOT l_U1871)
                        {
                            if ((l_U1868) || (l_U1867))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3607(), l_U1241[0]._fU0, 30.00000000, 30.00000000, 2.00000000, 0 ))
                                {
                                    if (DOES_BLIP_EXIST( l_U1849 ))
                                    {
                                        REMOVE_BLIP( l_U1849 );
                                    }
                                    sub_21746( "E1B4_JLOSE", ref l_U1482, 6, 1 );
                                    l_U1871 = 1;
                                }
                            }
                        }
                    }
                }
                else if (NOT l_U1510[l_U1721])
                {
                    sub_17395( ref l_U1241[l_U1721], 0 );
                }
            }
            else if (IS_VEH_DRIVEABLE( l_U1241[l_U1721]._fU4 ))
            {
                if (IS_CHAR_IN_ANY_CAR( l_U1241[l_U1721]._fU0 ))
                {
                    if (l_U1504[l_U1721])
                    {
                        GET_SCRIPT_TASK_STATUS( l_U1241[l_U1721]._fU0, 15, ref l_U1796 );
                        if (l_U1796 == 7)
                        {
                            l_U1498[l_U1721] = 1;
                        }
                    }
                    else if (l_U1721 == 0)
                    {
                        sub_45675();
                    }
                    else if ((l_U1504[l_U1721 - 1]) AND (TIMERA() >= l_U1723))
                    {
                        sub_45675();
                    };;;
                }
                else
                {
                    sub_17395( ref l_U1241[l_U1721], 0 );
                }
            }
            else
            {
                CLEAR_CHAR_TASKS( l_U1241[l_U1721]._fU0 );
                l_U1498[l_U1721] = 1;
            }
        }
    }
    if (NOT l_U1862)
    {
        if (l_U1498[4])
        {
            l_U1862 = 1;
        }
    }
    if (l_U1498[1])
    {
        if (NOT l_U1865)
        {
            l_U1865 = 1;
        }
        else if (sub_46000( ref l_U1241[0], 8.00000000, 3 ))
        {
            ;
        }
    }
    if (NOT l_U1527)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U1241[0]._fU0, -578.78000000, 1214.61000000, 11, 12, 12, 12, 0 ))
        {
            if (IS_CHAR_IN_ANY_CAR( l_U1241[0]._fU0 ))
            {
                SET_DRIVE_TASK_CRUISE_SPEED( l_U1241[0]._fU0, 10.00000000 );
            }
            for ( l_U1721 = 0; l_U1721 < l_U1241; l_U1721++ )
            {
                if (l_U1241[l_U1721]._fU40 == 1)
                {
                    l_U1241[l_U1721]._fU40 = 2;
                }
            }
            l_U1527 = 1;
        }
    }
    if (NOT l_U1551)
    {
        if (((sub_50617()) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U1241[0]._fU0, -652.85220000, 1262.19600000, 8.11460000, 7.00000000, 1.00000000, 3.00000000, 0 ))) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1241[0]._fU0, sub_3607(), 40, 40, 40, 0 )))
        {
            if (NOT l_U1834)
            {
                sub_21746( "E1B4_ARR", ref l_U1482, 7, 1 );
            }
            l_U1551 = 1;
        }
    }
    if (NOT l_U1563[0])
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U1241[0]._fU0, l_U1589[0]._fU0, l_U1589[0]._fU4, l_U1589[0]._fU8, 20, 20, 20, 0 ))
        {
            sub_13806( ref l_U1241[0], l_U1589[1], 0 );
            l_U1563[0] = 1;
        }
    }
    else if (NOT l_U1563[1])
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U1241[0]._fU0, l_U1589[1]._fU0, l_U1589[1]._fU4, l_U1589[1]._fU8, 20, 20, 20, 0 ))
        {
            sub_13806( ref l_U1241[0], l_U1583, 0 );
            l_U1563[1] = 1;
        }
    }
    else if (NOT l_U1863)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U1241[0]._fU0, l_U1583._fU0, l_U1583._fU4, l_U1583._fU8, 12, 12, 12, 0 ))
        {
            sub_13806( ref l_U1241[0], l_U1580, 0 );
            l_U1863 = 1;
        }
    }
    else if (NOT l_U1528)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U1241[0]._fU0, l_U1580._fU0, l_U1580._fU4, l_U1580._fU8, 6, 6, 6, 0 ))
        {
            TASK_CAR_MISSION( l_U1241[0]._fU0, l_U1241[0]._fU4, 0, 5, 0.00000000, 2, -1, -1 );
            GET_GAME_TIMER( ref l_U1860 );
            l_U1528 = 1;
        }
    }
    else
    {
        for ( l_U1721 = 0; l_U1721 < l_U1241; l_U1721++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U1241[l_U1721]._fU0 )))
            {
                if (NOT l_U1510[l_U1721])
                {
                    if ((IS_CHAR_STOPPED( l_U1241[l_U1721]._fU0 )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1241[l_U1721]._fU0, l_U1241[0]._fU0, 18, 18, 18, 0 )))
                    {
                        if (l_U1721 == 0)
                        {
                            TASK_LEAVE_ANY_CAR( l_U1241[l_U1721]._fU0 );
                            l_U1510[l_U1721] = 1;
                        }
                        else
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 100, 1000, ref l_U1861 );
                            if (sub_44034( l_U1860, l_U1861 ))
                            {
                                if (l_U1510[l_U1721 - 1])
                                {
                                    TASK_LEAVE_ANY_CAR( l_U1241[l_U1721]._fU0 );
                                    GET_GAME_TIMER( ref l_U1860 );
                                    l_U1510[l_U1721] = 1;
                                }
                            }
                        }
                    }
                }
                else if (NOT (IS_CHAR_IN_ANY_CAR( l_U1241[l_U1721]._fU0 )))
                {
                    sub_51570( l_U1241[l_U1721]._fU0, ref l_U1777[l_U1721] );
                }
            }
        }
    };;;;
    if (NOT l_U1528)
    {
        if (l_U1498[4])
        {
            sub_51748( ref l_U1241 );
        }
    }
    return;
}

void sub_16668(int iParam0)
{
    sub_16681( iParam0 + 0 );
    return;
}

void sub_16681(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U6)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((l_U4) AND (IS_HINT_RUNNING()))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U5 + 500))
        {
            l_U4 = 0;
        }
    }
    if (((((IS_CONTROL_PRESSED( 0, 51 )) AND (IS_CHAR_IN_ANY_CAR( sub_3607() ))) AND (NOT (IS_CHAR_DEAD( (uParam0^) )))) AND (NOT sub_16841())) AND (iVar3 != 4))
    {
        if ((NOT IS_HINT_RUNNING()) AND (IS_CHAR_IN_ANY_CAR( (uParam0^) )))
        {
            if (l_U6)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U5 );
            l_U4 = 1;
            l_U3 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U3) AND (NOT l_U4))
        {
            if (l_U6)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U3 = 1;
        }
    }
    else if (l_U3)
    {
        if (l_U6)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U3 = 0;
    };;;
    return;
}

int sub_16841()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_17395(int iParam0, boolean bParam1)
{
    unknown uVar4;
    int iVar5;

    if (IS_CHAR_INJURED( iParam0->_fU0 ))
    {
        if (iParam0->_fU92 > 0)
        {
            sub_17442( iParam0->_fU92 );
            iParam0->_fU92 = 0;
        }
        if (DOES_BLIP_EXIST( iParam0->_fU100 ))
        {
            REMOVE_BLIP( iParam0->_fU100 );
        }
        return;
    }
    if (iParam0->_fU36 != 0)
    {
        if ((sub_17837( iParam0 )) == 2)
        {
            return;
        }
        sub_21436( iParam0 );
        if (iParam0->_fU36 != 0)
        {
            sub_24085( iParam0 );
        }
        if (sub_14172( iParam0, 1 ))
        {
            sub_28933( iParam0 + 0, 0 );
        }
        else
        {
            sub_28933( iParam0 + 0, 1 );
        }
        if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
        {
            if (IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 ))
            {
                uVar4 = nil;
                STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar4 );
                if (NOT (IS_CAR_DEAD( uVar4 )))
                {
                    if ((IS_CAR_UPSIDEDOWN( uVar4 )) AND (NOT (IS_CAR_IN_AIR_PROPER( uVar4 ))))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( iParam0->_fU0 );
                    }
                }
            }
        }
    }
    switch (iParam0->_fU36)
    {
        case 2:
        iVar5 = sub_29224( iParam0 );
        if (iVar5 == 1)
        {
            if (sub_14172( iParam0, 32 ))
            {
                sub_14983( iParam0, 3 );
            }
            else if (sub_14172( iParam0, 64 ))
            {
                if (sub_14172( iParam0, 1 ))
                {
                    sub_14983( iParam0, 5 );
                }
                else
                {
                    sub_14983( iParam0, 4 );
                }
            }
        }
        else if (iVar5 == 2)
        {
            ;
        }
        else if ((sub_30275( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_30532( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_31700( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_31814( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_31935( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_32235( iParam0 )) != 0)
        {
            ;
        };;;;;;;;
        break;
        case 3:
        if ((sub_32591( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_30275( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_30532( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_31700( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_31814( iParam0 )) != 0)
        {
            ;
        };;;;;
        break;
        case 1:
        if ((g_U10956 != 0) || (g_U10958 != 0))
        {
            if ((sub_21043( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_32850( iParam0 )) != 0)
            {
                ;
            }
        }
        else if ((sub_33007( iParam0 )) != 0)
        {
            ;
        }
        break;
        case 4:
        if ((sub_21043( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_30275( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_30532( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_31700( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_31814( iParam0 )) != 0)
        {
            ;
        };;;;;
        break;
        case 5:
        if ((sub_29321( iParam0 )) > 30.00000000)
        {
            sub_40158( iParam0 );
        }
        else if ((sub_32850( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_20881( iParam0, 1, 0 )) != 0)
        {
            ;
        };;;
        break;
        default: break;
    }
    if (NOT bParam1)
    {
        sub_40243( iParam0 );
    }
    return;
}

void sub_17442(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_17453( uParam0 );
    if (iVar3 == -1)
    {
        return;
    }
    if (NOT g_U38937[iVar3]._fU4)
    {
        PRINTSTRING( "Recurring_Lost_Killed: marked as killed but wasn't in use: " );
        PRINTINT( iVar3 );
        PRINTNL();
        return;
    }
    g_U38937[iVar3]._fU0 = 0;
    return;
}

int sub_17453(int iParam0)
{
    int iVar3;
    int Result;

    iVar3 = 0;
    Result = 0;
    for ( Result = 0; Result < 13; Result++ )
    {
        if ((g_U38937[Result]._fU0) || (g_U38937[Result]._fU4))
        {
            iVar3++;
            if (iVar3 == iParam0)
            {
                return Result;
            }
        }
    }
    SCRIPT_ASSERT( "Get_Recurring_Lost_ArrayPos: Run out of alive Recurring Lost characters" );
    return -1;
}

int sub_17837(int iParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    if ((NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))) || (IS_CHAR_SITTING_IN_ANY_CAR( sub_3607() )))
    {
        return 0;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref iVar3 );
    GET_CAR_CHAR_IS_USING( sub_3607(), ref iVar4 );
    GET_DRIVER_OF_CAR( iVar3, ref iVar5 );
    if (iVar5 != iParam0->_fU0)
    {
        return 0;
    }
    GET_CAR_DOOR_LOCK_STATUS( iVar3, ref iVar6 );
    if (iVar6 != 1)
    {
        return 0;
    }
    if (iVar4 == iVar3)
    {
        if (NOT (((sub_11436( iParam0 + 0 )) == 3) AND ((sub_17980( iVar3 )) == sub_8575())))
        {
            if ((((sub_11436( iParam0 + 0 )) != 1) || ((sub_18038( iParam0->_fU0 )) == (sub_4251( 0 )))) || ((sub_18080( sub_3607() )) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_3607() )))))
            {
                return 0;
            }
            else
            {
                GET_CAR_DOOR_LOCK_STATUS( iVar4, ref iVar7 );
                if (iVar7 != 1)
                {
                    return 0;
                }
            }
        }
        if ((sub_11436( iParam0 + 0 )) == 3)
        {
            sub_18199( iParam0->_fU0, "", sub_3607(), 26 );
        }
        else
        {
            sub_18199( sub_3607(), "", iParam0->_fU0, 37 );
        }
        return sub_20881( iParam0, 1, 1 );
    }
    return 0;
}

void sub_17980(unknown uParam0)
{
    unknown Result;

    GET_CAR_MODEL( uParam0, ref Result );
    return Result;
}

void sub_18038(unknown uParam0)
{
    unknown Result;

    GET_CHAR_MODEL( uParam0, ref Result );
    return Result;
}

boolean sub_18080(unknown uParam0)
{
    return (IS_CHAR_IN_ANY_CAR( uParam0 )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )));
}

void sub_18199(int iParam0, unknown uParam1, int iParam2, int iParam3)
{
    boolean Result;
    unknown uVar7;
    int iVar8;

    Result = false;
    if (IS_CHAR_INJURED( iParam0 ))
    {
        PRINTSTRING( "PERFORM_BIKER_GESTURE: ped is injured\n" );
        return 0;
    }
    if (IS_STRING_NULL( uParam1 ))
    {
        Result = true;
    }
    else if (COMPARE_STRING( uParam1, "" ))
    {
        Result = true;
    }
    else if (NOT ((IS_CHAR_ON_ANY_BIKE( iParam0 )) AND (IS_CHAR_SITTING_IN_ANY_CAR( iParam0 ))))
    {
        Result = true;
    }
    else
    {
        uVar7 = sub_18689( sub_18359( iParam0 ) );
        if (NOT (IS_STRING_NULL( uVar7 )))
        {
            if (HAVE_ANIMS_LOADED( uVar7 ))
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( iParam0, uVar7, uParam1 )))
                {
                    TASK_PLAY_ANIM_SECONDARY_IN_CAR( iParam0, uParam1, uVar7, 8.00000000, 0, 0, 0, 0, 0 );
                    Result = true;
                }
            }
        }
    };;;
    if (Result)
    {
        l_U163 = iParam0;
        l_U164 = iParam2;
        if (DOES_CHAR_EXIST( iParam2 ))
        {
            if (NOT (IS_PED_LOOKING_AT_PED( iParam0, iParam2 )))
            {
                TASK_LOOK_AT_CHAR( iParam0, iParam2, sub_19033( 2000, 5500 ), 0 );
            }
            if (iParam0 != sub_3607())
            {
                iVar8 = sub_11436( ref iParam0 );
                if ((iVar8 == 1) AND (iParam2 != sub_3607()))
                {
                    if (NOT (IS_PED_LOOKING_AT_PED( sub_3607(), iParam2 )))
                    {
                        TASK_LOOK_AT_CHAR( sub_3607(), iParam2, sub_19033( 2000, 5500 ), 0 );
                    }
                }
                else if (NOT (IS_PED_LOOKING_AT_PED( sub_3607(), iParam0 )))
                {
                    TASK_LOOK_AT_CHAR( sub_3607(), iParam0, sub_19033( 2000, 5500 ), 0 );
                }
            }
        }
        if (iParam3 != 39)
        {
            if ((iParam3 == 38) AND (IS_CHAR_MODEL( iParam0, sub_4251( 0 ) )))
            {
                if (l_U168)
                {
                    SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0, "E1B1_WA", "BILLY", 1, 1, 2 );
                }
            }
            else
            {
                SAY_AMBIENT_SPEECH( iParam0, sub_19297( iParam3 ), 1, 1, 2 );
            }
            l_U162 = iParam3;
        }
        GET_GAME_TIMER( ref l_U161 );
        switch (iParam3)
        {
            case 35: SET_BIT( ref l_U166, 2 );
            case 36: SET_BIT( ref l_U166, 1 );
            case 24:
            SET_BIT( ref l_U166, 0 );
            break;
            case 38:
            SET_BIT( ref l_U166, 6 );
            break;
        }
    }
    return Result;
}

void sub_18359(unknown uParam0)
{
    unknown uVar3;
    int Result;

    Result = 5;
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            Result = sub_18412( uVar3 );
        }
    }
    return Result;
}

void sub_18412(unknown uParam0)
{
    int Result;
    unknown uVar4;

    Result = 5;
    GET_CAR_MODEL( uParam0, ref uVar4 );
    switch (uVar4)
    {
        case -1830458836:
        case 584879743:
        case -1606187161:
        case -618617997:
        case 301427732:
        case 802082487:
        case -359167535:
        case -159126838:
        case -408052231:
        Result = 0;
        break;
        case -570033273:
        case -571009320:
        case 2006142190:
        case -77769032:
        Result = 1;
        break;
        case 1203311498:
        case -909201658:
        case -1670998136:
        case -1759858085:
        case 1265391242:
        case -255678177:
        case -114291515:
        case -891462355:
        Result = 2;
        break;
        case 788045382:
        Result = 4;
        break;
        case -1842748181:
        Result = 3;
        break;
    }
    return Result;
}

void sub_18689(unknown uParam0)
{
    string Result;

    Result = nil;
    switch (uParam0)
    {
        case 0:
        Result = "MISSBIKE_GESTFREE";
        break;
        case 1:
        Result = "MISSBIKE_GESTCHOP";
        break;
        case 2:
        Result = "MISSBIKE_GESTSPT";
        break;
        case 3:
        Result = "MISSBIKE_GESTSCOT";
        break;
        case 4:
        Result = "MISSBIKE_GESTDIRT";
        break;
    }
    return Result;
}

void sub_19033(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_19297(unknown uParam0)
{
    string Result;

    Result = nil;
    switch (uParam0)
    {
        case 0:
        Result = "ABUSE_COPS";
        break;
        case 1:
        Result = "ABUSE_GENERIC_BIKER_PED";
        break;
        case 2:
        Result = "ABUSE_HOOKER";
        break;
        case 3:
        Result = "ANGELS_OF_DEATH_TAUNT_LOST";
        break;
        case 4:
        Result = "ANGELS_OF_DEATH_TAUNT_LOST_TRUCE";
        break;
        case 5:
        Result = "BIKE_CRASH_DRIVEN";
        break;
        case 6:
        Result = "BIKE_DRIVE_MORE_CAREFUL";
        break;
        case 7:
        Result = "BIKE_HIT_PED";
        break;
        case 8:
        Result = "BIKE_JUMP";
        break;
        case 9:
        Result = "BIKE_ON_FIRE";
        break;
        case 10:
        Result = "BIKE_OVERTAKE";
        break;
        case 11:
        Result = "BIKER_ACHIEVE_MISSION_OBJECTIVE";
        break;
        case 12:
        Result = "BIKER_CLIPS_ANOTHER_BIKE";
        break;
        case 13:
        Result = "BIKER_CLIPS_ANYTHING";
        break;
        case 14:
        Result = "BIKER_FALLING_BEHIND";
        break;
        case 15:
        Result = "BIKER_FALLS_BEHIND";
        break;
        case 16:
        Result = "BIKER_PASSENGER_SHOOT_GENERIC";
        break;
        case 17:
        Result = "BIKER_PLAYER_FALLS_BEHIND";
        break;
        case 18:
        Result = "COME_UNDER_ATTACK";
        break;
        case 19:
        Result = "FOLLOW_ME_GUYS";
        break;
        case 20:
        Result = "GENERIC_CELEBRATION";
        break;
        case 21:
        Result = "GET_A_MOVE_ON";
        break;
        case 22:
        Result = "GET_IN_COVER";
        break;
        case 23:
        Result = "GET_THE_HELL_OUT_OF_HERE";
        break;
        case 24:
        Result = "GET_WANTED_LEVEL";
        break;
        case 25:
        Result = "GREET_JOHNNY";
        break;
        case 26:
        Result = "JACKED_BY_PLAYER_LIKE";
        break;
        case 27:
        Result = "KEEP_SHOOTING";
        break;
        case 28:
        Result = "LOST_TAUNT_ANGELS_OF_DEATH";
        break;
        case 29:
        Result = "LOST_TAUNT_LOST";
        break;
        case 30:
        Result = "LOST_WHOOP";
        break;
        case 31:
        Result = "NEED_BIKE_NOT_CAR";
        break;
        case 32:
        Result = "NEED_SOME_HELP";
        break;
        case 33:
        Result = "NICE_BIKE";
        break;
        case 34:
        Result = "NICE_SHOOTING_JOHNNY";
        break;
        case 35:
        Result = "POLICE_PURSUIT";
        break;
        case 36:
        Result = "SPOT_POLICE";
        break;
        case 37:
        Result = "JACKING_LOST_BIKE";
        break;
        case 38:
        Result = "WAIT_FOR_ME";
        break;
    }
    return Result;
}

int sub_20881(int iParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    float fVar6;
    int iVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (IS_CHAR_ON_FOOT( iParam0->_fU0 ))
    {
        return 1;
    }
    else if ((sub_18080( iParam0->_fU0 )) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( iParam0->_fU0 ))))
    {
        return 2;
    }
    else if ((uParam1) || (sub_14172( iParam0, 1 )))
    {
        uVar5 = nil;
        if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar5 );
        }
        if (IS_VEH_DRIVEABLE( uVar5 ))
        {
            GET_CAR_SPEED( uVar5, ref fVar6 );
            if (fVar6 > 0.20000000)
            {
                return sub_21043( iParam0 );
            }
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 31, ref iVar7 );
            if (iVar7 == 7)
            {
                if (bParam2)
                {
                    uVar8 = {sub_13899( sub_3607(), 1 )};
                    GET_OFFSET_FROM_CAR_GIVEN_WORLD_COORDS( uVar5, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                    TASK_LEAVE_CAR_IN_DIRECTION( iParam0->_fU0, uVar5, uVar8._fU0 > 0.00000000 );
                }
                else
                {
                    TASK_LEAVE_ANY_CAR( iParam0->_fU0 );
                }
            }
            return 2;
        }
    };;;
    return 0;
}

int sub_21043(int iParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = sub_21054( iParam0 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        if (IS_CHAR_STOPPED( iParam0->_fU0 ))
        {
            return 1;
        }
        else
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar4 );
            if ((iVar4 == 7) || (iParam0->_fU96 != 5))
            {
                iParam0->_fU96 = 5;
                TASK_CAR_MISSION( iParam0->_fU0, uVar3, 0, iParam0->_fU96, 0.00000000, 2, -1, -1 );
            }
            return 2;
        }
    }
    return 0;
}

void sub_21054(int iParam0)
{
    unknown Result;
    int iVar4;

    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref Result );
        if (IS_VEH_DRIVEABLE( Result ))
        {
            GET_DRIVER_OF_CAR( Result, ref iVar4 );
            if (iVar4 == iParam0->_fU0)
            {
                return Result;
            }
        }
    }
    return nil;
}

void sub_21436(int iParam0)
{
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (NOT (sub_21467( (iParam0^) )))
        {
            if (((sub_21502( (iParam0^) )) AND (NOT l_U150)) AND (NOT l_U151))
            {
                if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT sub_21554()))
                {
                    if ((IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 )) AND (IS_CHAR_ON_ANY_BIKE( sub_3607() )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3607(), iParam0->_fU0, l_U140, l_U140, l_U140, 0 ))
                        {
                            if (sub_21653())
                            {
                                if (iParam0->_fU0 == l_U149)
                                {
                                    if (NOT (ref iParam0->_fU44->_fU8))
                                    {
                                        sub_21746( (iParam0 + 44) + 12, ref l_U143, 7, 1 );
                                    }
                                    else
                                    {
                                        sub_21746( (iParam0 + 44) + 28, ref l_U143, 7, 1 );
                                    }
                                    sub_22734( iParam0 );
                                    if (NOT (IS_CHAR_INJURED( sub_3607() )))
                                    {
                                        TASK_LOOK_AT_CHAR( iParam0->_fU0, sub_3607(), -2, 0 );
                                        TASK_LOOK_AT_CHAR( sub_3607(), iParam0->_fU0, -2, 128 );
                                    }
                                    l_U126 = 0;
                                }
                                else
                                {
                                    GET_CHAR_COORDINATES( sub_3607(), ref l_U155._fU0, ref l_U155._fU4, ref l_U155._fU8 );
                                    GET_CHAR_COORDINATES( iParam0->_fU0, ref l_U158._fU0, ref l_U158._fU4, ref l_U158._fU8 );
                                    GET_DISTANCE_BETWEEN_COORDS_3D( l_U155._fU0, l_U155._fU4, l_U155._fU8, l_U158._fU0, l_U158._fU4, l_U158._fU8, ref l_U154 );
                                    if (iParam0->_fU0 == l_U149)
                                    {
                                        l_U153 += 1.00000000 * TIMESTEP();
                                        l_U152 = l_U154;
                                    }
                                    else if ((l_U154 <= l_U152) || (IS_CHAR_INJURED( l_U149 )))
                                    {
                                        l_U149 = iParam0->_fU0;
                                        l_U152 = l_U154;
                                        l_U153 = 0.00000000;
                                    }
                                }
                            }
                            else if (NOT sub_23162())
                            {
                                sub_23190();
                            }
                            else if (sub_23247())
                            {
                                sub_23211();
                            }
                            GET_CHAR_COORDINATES( sub_3607(), ref l_U155._fU0, ref l_U155._fU4, ref l_U155._fU8 );
                            GET_CHAR_COORDINATES( iParam0->_fU0, ref l_U158._fU0, ref l_U158._fU4, ref l_U158._fU8 );
                            GET_DISTANCE_BETWEEN_COORDS_3D( l_U155._fU0, l_U155._fU4, l_U155._fU8, l_U158._fU0, l_U158._fU4, l_U158._fU8, ref l_U154 );
                            if (iParam0->_fU0 == l_U149)
                            {
                                l_U153 += 1.00000000 * TIMESTEP();
                                l_U152 = l_U154;
                            }
                            else if ((l_U154 <= l_U152) || (IS_CHAR_INJURED( l_U149 )))
                            {
                                l_U149 = iParam0->_fU0;
                                l_U152 = l_U154;
                                l_U153 = 0.00000000;
                            };;;;
                        }
                        else if (NOT sub_23511())
                        {
                            sub_23719( (iParam0^) );
                        }
                    }
                    else if (NOT sub_23511())
                    {
                        sub_23719( (iParam0^) );
                    }
                }
                else if (NOT sub_23511())
                {
                    sub_23719( (iParam0^) );
                }
            }
            else if (NOT sub_23511())
            {
                sub_23719( (iParam0^) );
            }
        }
        else if (NOT sub_23511())
        {
            if ((((((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3607(), iParam0->_fU0, l_U141, l_U141, l_U141, 0 ))) || (NOT (IS_CHAR_ON_ANY_BIKE( sub_3607() )))) || (NOT (IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 )))) || (NOT (IS_CHAR_SITTING_IN_ANY_CAR( iParam0->_fU0 )))) || (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3607() )))) || (NOT (sub_23529( l_U143 ))))
            {
                sub_3548( iParam0 );
            }
        }
    }
    else if (sub_21467( (iParam0^) ))
    {
        sub_3199( ref l_U143, 0 );
        sub_3548( iParam0 );
    }
    return;
}

void sub_21467(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25)
{
    return uParam0._fU44._fU4;
}

void sub_21502(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25)
{
    return uParam0._fU44._fU0;
}

void sub_21554()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

int sub_21653()
{
    if (NOT l_U127)
    {
        if (l_U126)
        {
            return 1;
        }
    }
    return 0;
}

void sub_21746(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_21767( uParam0, ref l_U22._fU0, uParam1, uParam2, uParam3 );
}

void sub_21767(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_21821( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_21821(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_21843( iParam1 )))
    {
        return 0;
    }
    l_U22._fU384 = 0;
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
    for ( I = 0; I <= (g_U9051 - 1); I++ )
    {
        StrCopy( ref g_U9051[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U9051[I] = {(uParam0^)[I]};
    }
    g_U9045 = {(iParam1^)};
    sub_22531( ref g_U8947, ref l_U22 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_21843(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_21920( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U559[1] ))
    {
        switch (g_U94._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_21920( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 > iParam0->_fU0)
        {
            sub_21920( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8944 = iParam0->_fU0;
    g_U8945++;
    if (g_U8945 > 100000)
    {
        g_U8945 = 1;
    }
    iParam0->_fU4 = g_U8945;
    return 1;
}

void sub_21920(unknown uParam0)
{
    return;
}

void sub_22531(int iParam0, int iParam1)
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

void sub_22734(int iParam0)
{
    ref iParam0->_fU44->_fU4 = 1;
    if (ref iParam0->_fU44->_fU8)
    {
        ref iParam0->_fU44->_fU0 = 0;
    }
    else if (COMPARE_STRING( (iParam0 + 44) + 28, "" ))
    {
        ref iParam0->_fU44->_fU0 = 0;
    }
    else
    {
        ref iParam0->_fU44->_fU8 = 1;
    }
    l_U149 = nil;
    l_U153 = 0.00000000;
    l_U150 = 1;
    return;
}

void sub_23162()
{
    return l_U125;
}

void sub_23190()
{
    l_U125 = 1;
    l_U126 = 0;
    sub_23211();
    return;
}

void sub_23211()
{
    l_U127 = 0;
    return;
}

void sub_23247()
{
    return l_U127;
}

void sub_23511()
{
    int Result;

    Result = 0;
    if (sub_23529( l_U133 ))
    {
        Result = 1;
    }
    return Result;
}

int sub_23529(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8946 == 1)) || (g_U8946 == 2))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_21920( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_21920( "\n speech is not playing" );
    }
    return 0;
}

void sub_23719(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25)
{
    if (uParam0._fU0 == l_U149)
    {
        l_U149 = nil;
        l_U153 = 0.00000000;
        sub_23760();
    }
    return;
}

void sub_23760()
{
    if (l_U124 == 1)
    {
        l_U128 = 0.00000000;
        l_U127 = 1;
        l_U126 = 0;
    }
    return;
}

void sub_24085(int iParam0)
{
    unknown uVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int iVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    int iVar15;
    boolean bVar16;
    boolean bVar17;
    boolean bVar18;
    int iVar19;
    int iVar20;
    float fVar21;
    unknown uVar22;
    unknown uVar23;
    int iVar24;
    unknown uVar25;
    float fVar26;

    GET_GAME_TIMER( ref iVar4 );
    if ((NOT l_U165) || (iParam0->_fU36 == 0))
    {
        return;
    }
    if ((sub_21467( (iParam0^) )) AND (sub_21554()))
    {
        if ((NOT (IS_CHAR_INJURED( iParam0->_fU0 ))) AND (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
        {
            if (((IS_CHAR_SITTING_IN_CAR( iParam0->_fU0, iParam0->_fU4 )) AND (IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 ))) AND (IS_CHAR_ON_ANY_BIKE( sub_3607() )))
            {
                GET_CHAR_COORDINATES( sub_3607(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                GET_OFFSET_FROM_CAR_GIVEN_WORLD_COORDS( iParam0->_fU4, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                if (IS_SCRIPTED_SPEECH_PLAYING( iParam0->_fU0 ))
                {
                    if ((l_U163 != iParam0->_fU0) || (l_U164 != sub_3607()))
                    {
                        sub_18199( iParam0->_fU0, sub_24359( uVar8._fU0 < 0.00000000, sub_18412( iParam0->_fU4 ) ), sub_3607(), 39 );
                        PRINTSTRING( "PERFORM_BIKER_GESTURE(biker.ped, GET_RANDOM_SPEECH_ANIM(TRUE), PLAYER_CHAR_ID())\n" );
                    }
                    return;
                }
                else if (IS_SCRIPTED_SPEECH_PLAYING( sub_3607() ))
                {
                    l_U163 = sub_3607();
                    l_U164 = iParam0->_fU0;
                }
            }
        }
    }
    if (((sub_21554()) || (sub_21467( (iParam0^) ))) || ((iVar4 - l_U161) < 33))
    {
        return;
    }
    if (l_U161 <= 0)
    {
        l_U161 = iVar4;
        return;
    }
    if ((NOT (IS_CHAR_INJURED( iParam0->_fU0 ))) AND (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        iVar11 = nil;
        uVar12 = nil;
        uVar13 = nil;
        uVar14 = nil;
        iVar15 = 39;
        bVar16 = false;
        bVar17 = false;
        bVar18 = false;
        iVar19 = 10000;
        GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar20 );
        if (iVar20 == iParam0->_fU0)
        {
            uVar12 = iParam0->_fU4;
            bVar16 = true;
        }
        else if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar12 );
        }
        if (NOT (IS_CAR_DEAD( uVar12 )))
        {
            if (sub_25012( uVar12 ))
            {
                fVar21 = sub_25055( iParam0 );
                if (((NOT (sub_21467( (iParam0^) ))) AND (((IS_CHAR_ON_SCREEN( iParam0->_fU0 )) AND (fVar21 < 19)) || (fVar21 < 15))) AND (iParam0->_fU0 != l_U163))
                {
                    GET_CAR_PITCH( uVar12, ref uVar22 );
                    if ((l_U0) AND ((iParam0->_fU36 != 1) || ((sub_19033( 0, 10 )) == 0)))
                    {
                        l_U0 = 0;
                        iVar15 = 17;
                        iVar11 = sub_3607();
                    }
                    else if ((((sub_25245( iParam0 )) AND (iParam0->_fU36 == 2)) AND ((sub_11436( iParam0 + 0 )) == 1)) AND (NOT (IS_BIT_SET( l_U166, 6 ))))
                    {
                        iVar15 = 38;
                        uVar13 = sub_25359( bVar16 );
                        iVar11 = sub_3607();
                    }
                    else if (((IS_CAR_IN_AIR_PROPER( uVar12 )) AND ((ABSF( uVar22 )) < 20.00000000)) AND (sub_25447( 8 )))
                    {
                        uVar13 = sub_25701( bVar16 );
                        iVar15 = 8;
                    }
                    else if ((HAS_CAR_BEEN_DAMAGED_BY_CHAR( uVar12, sub_3607() )) AND (sub_25447( 12 )))
                    {
                        uVar13 = sub_25359( bVar16 );
                        iVar11 = sub_3607();
                        iVar15 = 12;
                        bVar17 = true;
                    }
                    else if (((HAS_CAR_BEEN_DAMAGED_BY_CHAR( uVar12, 0 )) || (IS_PED_RAGDOLL( iParam0->_fU0 ))) AND (sub_25447( 13 )))
                    {
                        uVar13 = sub_25359( bVar16 );
                        iVar11 = nil;
                        iVar15 = 13;
                        bVar17 = true;
                    }
                    else if (((((sub_11436( iParam0 + 0 )) == 1) AND (NOT (IS_PLAYER_PRESSING_HORN( sub_26182() )))) AND (IS_BIT_SET( l_U166, 7 ))) AND (sub_25447( 20 )))
                    {
                        if (bVar16)
                        {
                            bVar18 = true;
                            uVar13 = sub_25701( bVar16 );
                        }
                        iVar15 = 20;
                        iVar11 = sub_3607();
                        CLEAR_BIT( ref l_U166, 7 );
                    }
                    else if ((((IS_WANTED_LEVEL_GREATER( sub_26182(), 0 )) AND (NOT (IS_BIT_SET( l_U166, 0 )))) AND (sub_25447( 24 ))) AND ((sub_11436( iParam0 + 0 )) == 1))
                    {
                        iVar15 = 24;
                        iVar11 = sub_3607();
                    }
                    else if ((((NOT (IS_WANTED_LEVEL_GREATER( sub_26182(), 0 ))) AND (IS_BIT_SET( l_U166, 0 ))) AND (sub_25447( 30 ))) AND ((sub_11436( iParam0 + 0 )) == 1))
                    {
                        iVar15 = 30;
                    }
                    else
                    {
                        uVar5 = {sub_13899( sub_3607(), 1 )};
                        uVar23 = nil;
                        if (iVar15 == 39)
                        {
                            if (IS_BIT_SET( l_U166, 3 ))
                            {
                                if (NOT (IS_CHAR_ON_ANY_BIKE( sub_3607() )))
                                {
                                    if (IS_PED_RAGDOLL( sub_3607() ))
                                    {
                                        if (sub_25447( 20 ))
                                        {
                                            iVar15 = 20;
                                            iVar11 = sub_3607();
                                            if ((sub_19033( 0, 2 )) == 0)
                                            {
                                                uVar13 = sub_25701( bVar16 );
                                            }
                                            else
                                            {
                                                uVar13 = sub_25359( bVar16 );
                                            }
                                            CLEAR_BIT( ref l_U166, 3 );
                                        }
                                    }
                                    else if (IS_CHAR_ON_FOOT( sub_3607() ))
                                    {
                                        CLEAR_BIT( ref l_U166, 3 );
                                        CLEAR_BIT( ref l_U166, 4 );
                                    }
                                }
                            }
                            else if (IS_CHAR_ON_ANY_BIKE( sub_3607() ))
                            {
                                if (((sub_25447( 33 )) AND (NOT (IS_BIT_SET( l_U166, 4 )))) AND ((sub_11436( iParam0 + 0 )) == 1))
                                {
                                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3607(), ref uVar23 );
                                    if (DOES_VEHICLE_EXIST( uVar23 ))
                                    {
                                        iVar24 = sub_18412( uVar23 );
                                        if ((NOT (IS_CAR_A_MISSION_CAR( uVar23 ))) AND ((iVar24 == 1) || (iVar24 == 0)))
                                        {
                                            iVar15 = 33;
                                            SET_BIT( ref l_U166, 4 );
                                        }
                                    }
                                }
                                SET_BIT( ref l_U166, 3 );
                            }
                            else if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3607() ))
                            {
                                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3607(), ref uVar23 );
                                if (DOES_VEHICLE_EXIST( uVar23 ))
                                {
                                    if (((sub_25447( 31 )) AND (NOT (IS_BIT_SET( l_U166, 4 )))) AND ((sub_11436( iParam0 + 0 )) == 1))
                                    {
                                        if (NOT (IS_CAR_A_MISSION_CAR( uVar23 )))
                                        {
                                            iVar15 = 31;
                                            SET_BIT( ref l_U166, 4 );
                                        }
                                    }
                                }
                                SET_BIT( ref l_U166, 3 );
                            }
                            else if ((IS_CHAR_ON_FOOT( sub_3607() )) AND (NOT (IS_PED_RAGDOLL( sub_3607() ))))
                            {
                                CLEAR_BIT( ref l_U166, 3 );
                                CLEAR_BIT( ref l_U166, 4 );
                            };;;
                            uVar23 = nil;;
                        }
                        if (iVar15 == 39)
                        {
                            BEGIN_CHAR_SEARCH_CRITERIA();
                            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 30 );
                            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 28 );
                            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 26 );
                            END_CHAR_SEARCH_CRITERIA();
                            if (GET_CLOSEST_CHAR( uVar5._fU0, uVar5._fU4, uVar5._fU8, 25.00000000, 1, 1, ref iVar11 ))
                            {
                                if ((IS_CHAR_INJURED( iVar11 )) || (iVar11 == l_U164))
                                {
                                    iVar11 = nil;
                                }
                                else if ((sub_25447( 0 )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_26182(), 0 ))))
                                {
                                    if (IS_CHAR_ON_SCREEN( iVar11 ))
                                    {
                                        uVar13 = nil;
                                        iVar15 = 0;
                                        bVar18 = (sub_19033( 0, 10 )) == 0;
                                    }
                                }
                                else if (((sub_25447( 36 )) AND (IS_WANTED_LEVEL_GREATER( sub_26182(), 0 ))) AND (NOT (IS_BIT_SET( l_U166, 1 ))))
                                {
                                    if (IS_CHAR_ON_SCREEN( iVar11 ))
                                    {
                                        uVar13 = nil;
                                        iVar15 = 36;
                                    }
                                }
                                else if ((IS_WANTED_LEVEL_GREATER( sub_26182(), 2 )) AND (sub_25447( 23 )))
                                {
                                    uVar13 = nil;
                                    iVar15 = 23;
                                };;;;
                            }
                        }
                        if ((sub_25447( 2 )) AND (iVar15 == 39))
                        {
                            BEGIN_CHAR_SEARCH_CRITERIA();
                            SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 1 );
                            END_CHAR_SEARCH_CRITERIA();
                            ALLOW_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND( 1 );
                            if (GET_CLOSEST_CHAR( uVar5._fU0, uVar5._fU4, uVar5._fU8, 25.00000000, 1, 1, ref iVar11 ))
                            {
                                if ((IS_CHAR_INJURED( iVar11 )) || (iVar11 == l_U164))
                                {
                                    iVar11 = nil;
                                }
                                else if ((IS_CHAR_MODEL( iVar11, 552542187 )) || (IS_CHAR_MODEL( iVar11, 996267216 )))
                                {
                                    uVar13 = nil;
                                    iVar15 = 2;
                                    bVar18 = (sub_19033( 0, 100 )) == 0;
                                }
                                else
                                {
                                    iVar11 = nil;
                                }
                            }
                        }
                        if (iVar15 == 39)
                        {
                            if ((IS_WANTED_LEVEL_GREATER( sub_26182(), 0 )) AND (NOT (IS_BIT_SET( l_U166, 2 ))))
                            {
                                if (IS_COP_VEHICLE_IN_AREA_3D_NO_SAVE( uVar5._fU0 - 25.00000000, uVar5._fU4 - 25.00000000, uVar5._fU8 - 25.00000000, uVar5._fU0 + 25.00000000, uVar5._fU4 + 25.00000000, uVar5._fU8 + 25.00000000 ))
                                {
                                    iVar15 = 35;
                                }
                            }
                        }
                        if (iVar15 == 39)
                        {
                            uVar23 = sub_27616( uVar5, 25.00000000, 4 );
                            if (IS_VEH_DRIVEABLE( uVar23 ))
                            {
                                GET_DRIVER_OF_CAR( uVar23, ref iVar11 );
                                if ((IS_CHAR_INJURED( iVar11 )) || (iVar11 == l_U164))
                                {
                                    iVar11 = nil;
                                }
                                else if (NOT (IS_CHAR_ON_SCREEN( iVar11 )))
                                {
                                    iVar11 = nil;
                                }
                                else
                                {
                                    uVar13 = nil;
                                    uVar25 = sub_11436( ref iVar11 );
                                    switch (uVar25)
                                    {
                                        case 2:
                                        if ((sub_25447( 28 )) AND ((sub_11436( iParam0 + 0 )) == 1))
                                        {
                                            iVar15 = 28;
                                        }
                                        break;
                                        case 1:
                                        if ((sub_11436( iParam0 + 0 )) == 2)
                                        {
                                            if ((sub_25447( 3 )) AND (sub_25447( 4 )))
                                            {
                                                if (g_U15728[13])
                                                {
                                                    iVar15 = 4;
                                                }
                                                else
                                                {
                                                    iVar15 = 3;
                                                }
                                            }
                                        }
                                        else if ((sub_11436( iParam0 + 0 )) == 1)
                                        {
                                            if (sub_25447( 30 ))
                                            {
                                                uVar13 = sub_28217( bVar16 );
                                                iVar15 = 30;
                                            }
                                        }
                                        break;
                                        default:
                                        if (sub_25447( 1 ))
                                        {
                                            iVar15 = 1;
                                        }
                                        break;
                                    }
                                }
                            }
                        }
                        GET_CHAR_SPEED( sub_3607(), ref fVar26 );
                        if (iVar15 == 39)
                        {
                            if (((sub_11436( iParam0 + 0 )) == 1) AND (fVar26 < 5))
                            {
                                if ((sub_25447( 23 )) AND (IS_WANTED_LEVEL_GREATER( sub_26182(), 0 )))
                                {
                                    iVar15 = 23;
                                }
                                else if (sub_25447( 21 ))
                                {
                                    iVar15 = 21;
                                }
                            }
                        }
                        if (iVar15 == 39)
                        {
                            if ((NOT (IS_BIT_SET( l_U166, 5 ))) AND (fVar26 > 30))
                            {
                                if ((sub_25447( 30 )) AND ((sub_11436( iParam0 + 0 )) == 1))
                                {
                                    iVar15 = 30;
                                }
                                else if (sub_25447( 20 ))
                                {
                                    iVar15 = 20;
                                }
                            }
                        }
                    };;;;;;;;
                    if (bVar18)
                    {
                        SOUND_CAR_HORN( uVar12, sub_19033( 1500, 2500 ) );
                    }
                    if (bVar17)
                    {
                        CLEAR_CAR_LAST_DAMAGE_ENTITY( uVar12 );
                    }
                    if ((iVar15 != 39) || (NOT (IS_STRING_NULL( uVar13 ))))
                    {
                        if (sub_18199( iParam0->_fU0, uVar13, iVar11, iVar15 ))
                        {
                            ;
                        }
                    }
                }
            }
        }
    }
    if (((iVar4 - l_U161) > 10000) AND (IS_BIT_SET( l_U166, 6 )))
    {
        CLEAR_BIT( ref l_U166, 6 );
    }
    if ((IS_PLAYER_PRESSING_HORN( sub_26182() )) AND (NOT (IS_BIT_SET( l_U166, 7 ))))
    {
        SET_BIT( ref l_U166, 7 );
    }
    if (((iVar4 - l_U161) > 28000) AND (l_U163 != nil))
    {
        if ((sub_11436( iParam0 + 0 )) == 1)
        {
            sub_18199( iParam0->_fU0, "", sub_3607(), 30 );
        }
        else
        {
            sub_18199( iParam0->_fU0, "", sub_3607(), 20 );
        }
        l_U163 = iParam0->_fU0;
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_26182(), 0 )))
        {
            CLEAR_BIT( ref l_U166, 0 );
            CLEAR_BIT( ref l_U166, 2 );
            CLEAR_BIT( ref l_U166, 1 );
        }
        CLEAR_BIT( ref l_U166, 7 );
    }
    return;
}

void sub_24359(boolean bParam0, int iParam1)
{
    string Result;

    Result = nil;
    if ((iParam1 == 1) || (iParam1 == 0))
    {
        if (bParam0)
        {
            switch (sub_19033( 0, 3 ))
            {
                case 0:
                Result = "chat_left_e";
                break;
                case 1:
                Result = "chat_left_f";
                break;
                default:
                Result = "chat_left_g";
                break;
            }
        }
        else
        {
            switch (sub_19033( 0, 3 ))
            {
                case 0:
                Result = "chat_right_e";
                break;
                case 1:
                Result = "chat_right_f";
                break;
                default:
                Result = "chat_right_g";
                break;
            }
        }
        PRINTSTRING( "Anim used: " );
        PRINTSTRING( Result );
        PRINTNL();
    }
    return Result;
}

void sub_25012(unknown uParam0)
{
    unknown uVar3;

    GET_CAR_MODEL( uParam0, ref uVar3 );
    return IS_THIS_MODEL_A_BIKE( uVar3 );
}

void sub_25055(int iParam0)
{
    return sub_25075( iParam0->_fU0, sub_3607(), 1 );
}

void sub_25075(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return VDIST( sub_13899( uParam0, uParam2 ), sub_13899( uParam1, uParam2 ) );
}

void sub_25245(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( iParam0->_fU4, 0, 11, 0, ref uVar3, ref uVar4, ref uVar5 );
    return LOCATE_CHAR_IN_CAR_3D( sub_3607(), uVar3, uVar4, uVar5, 10, 10, 10, 0 );
}

void sub_25359(boolean bParam0)
{
    string Result;

    Result = nil;
    if (bParam0)
    {
        Result = "gest_damn";
    }
    return Result;
}

boolean sub_25447(int iParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 10000;
    switch (iParam0)
    {
        case 20:
        iVar3 = 2500;
        break;
        case 8:
        iVar3 = 4500;
        break;
        case 6:
        iVar3 = 2500;
        break;
        case 5:
        iVar3 = 1000;
        break;
        case 33:
        iVar3 = 2000;
        break;
        case 31:
        iVar3 = 2000;
        break;
        case 0:
        iVar3 = 18000;
        break;
        case 1:
        iVar3 = 19000;
        break;
        case 21:
        iVar3 = 25000;
        break;
        case 38:
        iVar3 = 2000;
        break;
    }
    GET_GAME_TIMER( ref iVar4 );
    if (iParam0 == 39)
    {
        return 0;
    }
    return (iVar4 - l_U161) > iVar3;
}

void sub_25701(boolean bParam0)
{
    unknown uVar3;
    string Result;

    Result = nil;
    if (bParam0)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 1, 3, ref uVar3 );
        switch (uVar3)
        {
            case 1:
            Result = "gest_thumbsup";
            break;
            default:
            Result = "gest_thumbsup";
            break;
        }
    }
    else
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 7, ref uVar3 );
        switch (uVar3)
        {
            case 0:
            Result = "p_gest_celeb_a";
            break;
            case 1:
            Result = "p_gest_celeb_b";
            break;
            case 2:
            Result = "p_gest_celeb_c";
            break;
            case 3:
            Result = "p_gest_celeb_d";
            break;
            case 5:
            Result = "p_gest_rockin";
            break;
            case 6:
            Result = "p_gest_yes";
            break;
            default:
            Result = "p_gest_yes";
            break;
        }
    }
    return Result;
}

void sub_26182()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_27616(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown Result;
    int[22] iVar8;
    int I;

    Result = nil;
    array(ref iVar8, 22);
    iVar8[0] = -408052231;
    iVar8[1] = 584879743;
    iVar8[2] = 802082487;
    iVar8[3] = -570033273;
    iVar8[4] = 301427732;
    iVar8[5] = -159126838;
    iVar8[6] = -359167535;
    iVar8[7] = -571009320;
    iVar8[8] = 2006142190;
    iVar8[9] = -1606187161;
    iVar8[10] = -618617997;
    iVar8[11] = -77769032;
    iVar8[12] = 1265391242;
    iVar8[13] = -255678177;
    iVar8[14] = -1670998136;
    iVar8[15] = -1759858085;
    iVar8[16] = -114291515;
    iVar8[17] = -891462355;
    iVar8[18] = 1203311498;
    iVar8[19] = -909201658;
    iVar8[20] = 788045382;
    iVar8[21] = -1842748181;
    for ( I = 0; I < iVar8; I++ )
    {
        Result = GET_CLOSEST_CAR( uParam0, uParam3, iVar8[I], uParam4 );
        if (IS_VEH_DRIVEABLE( Result ))
        {
            return Result;
        }
    }
    return nil;
}

void sub_28217(boolean bParam0)
{
    unknown uVar3;
    string Result;

    Result = nil;
    if (bParam0)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar3 );
        switch (uVar3)
        {
            case 0:
            Result = "gest_thumbsup";
            break;
            case 1:
            Result = "gest_hey";
            break;
        }
    }
    else
    {
        Result = "p_gest_rockin";
    }
    return Result;
}

void sub_28933(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if ((sub_11436( uParam0 )) == 1)
        {
            if ((IS_SCREEN_FADED_OUT()) || (NOT (IS_CHAR_ON_SCREEN( (uParam0^) ))))
            {
                if ((IS_CHAR_ON_ANY_BIKE( (uParam0^) )) || (uParam1))
                {
                    GIVE_PED_HELMET_WITH_OPTS( (uParam0^), 1 );
                }
                else
                {
                    REMOVE_PED_HELMET( (uParam0^), 1 );
                }
            }
        }
    }
    return;
}

int sub_29224(int iParam0)
{
    int iVar3;
    float fVar4;
    int iVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    if (NOT (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    else if ((sub_21054( iParam0 )) != iParam0->_fU4)
    {
        if (sub_25012( iParam0->_fU4 ))
        {
            SET_CAR_TRACTION( iParam0->_fU4, 1.00000000 );
        }
        return 0;
    }
    else if ((sub_29321( iParam0 )) < l_U171)
    {
        return 1;
    };;;
    if (sub_25012( iParam0->_fU4 ))
    {
        SET_CAR_TRACTION( iParam0->_fU4, 1.70000000 );
    }
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar3 );
    if ((iVar3 == 7) || ((iParam0->_fU96 != 4) AND (iParam0->_fU96 != 14)))
    {
        if (sub_14172( iParam0, 8 ))
        {
            iParam0->_fU96 = 14;
        }
        else
        {
            iParam0->_fU96 = 4;
        }
        if (sub_14172( iParam0, 16 ))
        {
            iVar5 = 4;
        }
        else
        {
            iVar5 = 2;
        }
        if (sub_14172( iParam0, 128 ))
        {
            TASK_CAR_MISSION_COORS_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, iParam0->_fU96, iParam0->_fU28, iVar5, l_U170, l_U169 );
        }
        else
        {
            TASK_CAR_MISSION_COORS_TARGET( iParam0->_fU0, iParam0->_fU4, ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, iParam0->_fU96, iParam0->_fU28, iVar5, l_U170, l_U169 );
        }
    }
    else if (sub_14172( iParam0, 64 ))
    {
        fVar4 = (sub_29321( iParam0 )) / 3.00000000;
        if (fVar4 < iParam0->_fU28)
        {
            SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, fVar4 );
        }
        else
        {
            SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
        }
    }
    else
    {
        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
    }
    if (sub_29849( iParam0->_fU4 ))
    {
        uVar6 = {sub_29999( iParam0->_fU4, 1 )};
        if (GET_RANDOM_CAR_NODE( uVar6, 12.00000000, 1, 0, 0, ref uVar6, ref uVar9 ))
        {
            SET_CAR_COORDINATES( iParam0->_fU4, uVar6._fU0, uVar6._fU4, uVar6._fU8 );
            SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
        }
    }
    return 2;
}

void sub_29321(int iParam0)
{
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        switch (iParam0->_fU36)
        {
            case 1:
            if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
            {
                return sub_25075( iParam0->_fU0, iParam0->_fU8, 1 );
            }
            break;
            default:
        }
    }
    return VDIST( sub_13899( iParam0->_fU0, 1 ), iParam0->_fU16 );
}

int sub_29849(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (CHECK_STUCK_TIMER( uParam0, 0, 5000 ))
        {
            return 1;
        }
        else if (CHECK_STUCK_TIMER( uParam0, 3, 60000 ))
        {
            return 1;
        }
        else if (CHECK_STUCK_TIMER( uParam0, 2, 30000 ))
        {
            return 1;
        }
        else if (CHECK_STUCK_TIMER( uParam0, 1, 40000 ))
        {
            return 1;
        };;;;
    }
    return 0;
}

void sub_29999(unknown uParam0, boolean bParam1)
{
    unknown Result;
    unknown uVar5;
    unknown uVar6;

    if (IS_CAR_DEAD( uParam0 ))
    {
        GET_DEAD_CAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else
    {
        GET_CAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    if (NOT bParam1)
    {
        Result._fU8 = 0.00000000;
    }
    return Result;
}

int sub_30275(int iParam0)
{
    unknown uVar3;
    int iVar4;

    if (NOT (sub_14172( iParam0, 2 )))
    {
        return 0;
    }
    uVar3 = sub_21054( iParam0 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        iParam0->_fU4 = uVar3;
        return 1;
    }
    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        GET_CAR_CHAR_IS_USING( iParam0->_fU0, ref uVar3 );
        if (NOT (IS_CAR_DEAD( uVar3 )))
        {
            if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
            {
                if (IS_CHAR_IN_CAR( iParam0->_fU8, uVar3 ))
                {
                    iParam0->_fU4 = uVar3;
                    return 1;
                }
            }
            GET_DRIVER_OF_CAR( uVar3, ref iVar4 );
            if (NOT (IS_CHAR_INJURED( iVar4 )))
            {
                if (((sub_11436( ref iVar4 )) == (sub_11436( iParam0 + 0 ))) || ((iVar4 == sub_3607()) AND ((sub_11436( iParam0 + 0 )) == 1)))
                {
                    sub_14402( iParam0, iVar4 );
                    return 2;
                }
            }
        }
    }
    return 0;
}

int sub_30532(int iParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
    {
        if (sub_30570( iParam0->_fU8, iParam0->_fU0, 0 ))
        {
            return 2;
        }
    }
    if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
    {
        if (sub_18080( iParam0->_fU0 ))
        {
            return 2;
        }
        if ((sub_21054( iParam0 )) == iParam0->_fU4)
        {
            if (sub_25012( iParam0->_fU4 ))
            {
                SET_BLIP_THROTTLE_RANDOMLY( iParam0->_fU4, 1 );
            }
            return 1;
        }
        if (NOT (sub_25012( iParam0->_fU4 )))
        {
            iParam0->_fU4 = nil;
            return 0;
        }
        iVar3 = nil;
        GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
        if ((iVar3 == sub_3607()) || ((iVar3 == iParam0->_fU8) AND (NOT (IS_CHAR_INJURED( iVar3 )))))
        {
            if (IS_CHAR_IN_CAR( iParam0->_fU0, iParam0->_fU4 ))
            {
                return 2;
            }
            else
            {
                return 0;
            }
        }
        else if (NOT (IS_CHAR_INJURED( iVar3 )))
        {
            if ((sub_11436( iParam0 + 0 )) == (sub_11436( ref iVar3 )))
            {
                return 0;
            }
        }
        if ((((IS_CHAR_IN_CAR( sub_3607(), iParam0->_fU4 )) || (IS_CHAR_ON_SCREEN( iParam0->_fU0 ))) || (IS_CAR_ON_SCREEN( iParam0->_fU4 ))) || ((sub_25075( iParam0->_fU0, sub_3607(), 1 )) < 90.00000000))
        {
            if (LOCATE_CHAR_ANY_MEANS_CAR_3D( iParam0->_fU0, iParam0->_fU4, 30.00000000, 30.00000000, 30.00000000, 0 ))
            {
                bVar4 = false;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            bVar4 = true;
            if (DOES_CHAR_EXIST( iVar3 ))
            {
                if (NOT (IS_CHAR_DEAD( iVar3 )))
                {
                    if (IS_PED_A_MISSION_PED( iVar3 ))
                    {
                        bVar4 = false;
                    }
                }
                if (bVar4)
                {
                    DELETE_CHAR( ref iVar3 );
                }
            }
        }
        sub_31254( iParam0 );
        if (bVar4)
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( iParam0->_fU0 );
            SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
            WARP_CHAR_INTO_CAR( iParam0->_fU0, iParam0->_fU4 );
            if (sub_25012( iParam0->_fU4 ))
            {
                SET_BLIP_THROTTLE_RANDOMLY( iParam0->_fU4, 1 );
            }
            return 1;
        }
        else
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 12, ref iVar5 );
            if (iVar5 == 7)
            {
                if (LOCATE_CHAR_ANY_MEANS_CAR_3D( iParam0->_fU0, iParam0->_fU4, 12.00000000, 30.00000000, 30.00000000, 0 ))
                {
                    TASK_ENTER_CAR_AS_DRIVER( iParam0->_fU0, iParam0->_fU4, -1 );
                }
                else
                {
                    TASK_ENTER_CAR_AS_DRIVER( iParam0->_fU0, iParam0->_fU4, -2 );
                }
            }
            return 2;
        }
    }
    return 0;
}

void sub_30570(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown[2] uVar5;

    array(ref uVar5, 2);
    uVar5[0] = uParam0;
    uVar5[1] = uParam1;
    return sub_30600( ref uVar5, uParam2 );
}

int sub_30600(unknown uParam0, unknown uParam1)
{
    int I;
    unknown[2] uVar5;

    array(ref uVar5, 2);
    if (NOT (sub_30625( (uParam0^)[0], ref uVar5[0], uParam1 )))
    {
        return 0;
    }
    for ( I = 1; I <= ((uParam0^) - 1); I++ )
    {
        if (sub_30625( (uParam0^)[I], ref uVar5[1], uParam1 ))
        {
            if (uVar5[0] != uVar5[1])
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int sub_30625(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
        {
            return 0;
        }
    }
    else if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
    {
        return 0;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, uParam1 );
    return 1;
}

int sub_31254(int iParam0)
{
    if (sub_31268( iParam0->_fU0 ))
    {
        ;
    }
    return 1;
}

int sub_31268(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;

    if (IS_PED_IN_GROUP( uParam0 ))
    {
        GET_PED_GROUP_INDEX( uParam0, ref iVar3 );
        if (DOES_GROUP_EXIST( iVar3 ))
        {
            GET_GROUP_SIZE( iVar3, ref iVar4, ref iVar5 );
            if (NOT (IS_GROUP_LEADER( uParam0, iVar3 )))
            {
                if (((iVar4 < 1) || (iVar5 < 2)) AND (iVar3 != sub_31354()))
                {
                    REMOVE_GROUP( iVar3 );
                }
                else
                {
                    REMOVE_CHAR_FROM_GROUP( uParam0 );
                }
                return 1;
            }
            else if ((iVar5 < 1) AND (iVar3 != sub_31354()))
            {
                REMOVE_GROUP( iVar3 );
            }
        }
    }
    return 0;
}

void sub_31354()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_31700(int iParam0)
{
    unknown uVar3;

    if ((NOT (sub_14172( iParam0, 2 ))) AND (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    uVar3 = sub_27616( sub_13899( iParam0->_fU0, 1 ), 30.00000000, 190 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        iParam0->_fU4 = uVar3;
        return 1;
    }
    return 0;
}

int sub_31814(int iParam0)
{
    unknown uVar3;

    return 0;
    if ((NOT (sub_14172( iParam0, 2 ))) AND (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    uVar3 = GET_CLOSEST_CAR( sub_13899( iParam0->_fU0, 1 ), 30.00000000, 0, 190 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        iParam0->_fU4 = uVar3;
        return 1;
    }
    return 0;
}

int sub_31935(int iParam0)
{
    float fVar3;
    int iVar4;

    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        return 0;
    }
    fVar3 = sub_29321( iParam0 );
    if (fVar3 < 12.00000000)
    {
        return 1;
    }
    else if (fVar3 > 90.00000000)
    {
        return 0;
    }
    else
    {
        switch (iParam0->_fU36)
        {
            case 2:
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 27, ref iVar4 );
            if (iVar4 == 7)
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( iParam0->_fU0, ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, 4, -1, 12.00000000 / 2.00000000 );
            }
            else if ((GET_NAVMESH_ROUTE_RESULT( iParam0->_fU0 )) == 2)
            {
                return 0;
            }
            break;
            case 1:
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 21, ref iVar4 );
            if (iVar4 == 7)
            {
                TASK_GO_TO_CHAR( iParam0->_fU0, iParam0->_fU8, -1, 12.00000000 / 2.00000000 );
            }
            break;
            default: break;
        }
    }
    return 2;
}

int sub_32235(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (iParam0->_fU36 != 2)
    {
        return 0;
    }
    GET_GAME_VIEWPORT_ID( ref uVar3 );
    if ((sub_29321( iParam0 )) < 12.00000000)
    {
        return 1;
    }
    else if ((((sub_29321( iParam0 )) > 90.00000000) AND (NOT (IS_CHAR_ON_SCREEN( iParam0->_fU0 )))) AND ((sub_25075( iParam0->_fU0, sub_3607(), 1 )) > 90.00000000))
    {
        if (GET_SAFE_POSITION_FOR_CHAR( ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, 0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 ))
        {
            if (((CAM_IS_SPHERE_VISIBLE( uVar3, uVar4._fU0, uVar4._fU4, uVar4._fU8, 2.00000000 )) || (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar4._fU0, uVar4._fU4, uVar4._fU8, 2.00000000, 2.00000000, 2.00000000 ))) || ((VDIST( sub_13899( sub_3607(), 1 ), uVar4 )) < 30.00000000))
            {
                ;
            }
            else if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( iParam0->_fU0, uVar4._fU0, uVar4._fU4, uVar4._fU8 );
            }
            else
            {
                SET_CHAR_COORDINATES( iParam0->_fU0, uVar4._fU0, uVar4._fU4, uVar4._fU8 );
            }
            return 2;;
        }
    }
    return 0;
}

int sub_32591(int iParam0)
{
    int iVar3;

    if (NOT (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    else if ((sub_21054( iParam0 )) != iParam0->_fU4)
    {
        return 0;
    }
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 16, ref iVar3 );
    if (iVar3 == 7)
    {
        TASK_CAR_DRIVE_WANDER( iParam0->_fU0, iParam0->_fU4, iParam0->_fU28, 2 );
    }
    SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
    return 2;
}

int sub_32850(int iParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
    {
        if (NOT (IS_PED_IN_COMBAT( iParam0->_fU0 )))
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 34, ref iVar3 );
            if ((iVar3 == 7) AND (NOT (IS_CHAR_FACING_CHAR( iParam0->_fU0, sub_3607(), 45.00000000 ))))
            {
                TASK_LOOK_AT_CHAR( iParam0->_fU0, sub_3607(), -1, 0 );
                TASK_TURN_CHAR_TO_FACE_CHAR( iParam0->_fU0, sub_3607() );
            }
        }
        return 1;
    }
    return 0;
}

int sub_33007(int iParam0)
{
    unknown uVar3;
    int iVar4;
    boolean bVar5;
    boolean bVar6;
    unknown uVar7;
    float fVar8;
    int iVar9;

    if (IS_CHAR_INJURED( iParam0->_fU8 ))
    {
        return 0;
    }
    iVar4 = nil;
    bVar5 = false;
    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref iVar4 );
    }
    if (DOES_VEHICLE_EXIST( iVar4 ))
    {
        if (sub_14498( iParam0->_fU0, iVar4 ))
        {
            bVar5 = true;
            GET_DRIVER_OF_CAR( iVar4, ref uVar3 );
            bVar6 = false;
            if ((NOT (IS_CHAR_IN_CAR( sub_3607(), iVar4 ))) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_3607() ))))
            {
                if (IS_CHAR_INJURED( uVar3 ))
                {
                    bVar6 = true;
                }
            }
            if (IS_CAR_MODEL( iVar4, -960289747 ))
            {
                if (sub_30570( sub_3607(), iParam0->_fU0, 0 ))
                {
                    return 2;
                }
            }
            else if ((sub_11436( iParam0 + 0 )) == 1)
            {
                GET_CAR_CHAR_IS_USING( sub_3607(), ref uVar7 );
                if (DOES_VEHICLE_EXIST( uVar7 ))
                {
                    if (IS_CAR_MODEL( uVar7, 800869680 ))
                    {
                        return 2;
                    }
                }
            }
            if (bVar6)
            {
                return sub_20881( iParam0, 1, 0 );
            }
        }
    }
    if ((sub_14172( iParam0, 1 )) AND ((sub_29321( iParam0 )) < 30.00000000))
    {
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 1 );
        if (IS_PED_IN_COMBAT( iParam0->_fU0 ))
        {
            return 2;
        }
    }
    else
    {
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 0 );
        if ((IS_PED_IN_COMBAT( iParam0->_fU0 )) AND (NOT bVar5))
        {
            CLEAR_CHAR_TASKS( iParam0->_fU0 );
        }
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( iParam0->_fU0 )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0->_fU0, 1 );
        }
        else
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0->_fU0, 0 );
        }
    }
    iVar4 = nil;
    GET_CAR_CHAR_IS_USING( sub_3607(), ref iVar4 );
    fVar8 = 20.00000000;
    if (iParam0->_fU8 == sub_3607())
    {
        if ((IS_CHAR_ON_FOOT( iParam0->_fU0 )) AND (IS_CHAR_ON_FOOT( sub_3607() )))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( sub_3607(), ref iVar9 );
            if (iVar9 != 0)
            {
                fVar8 = 100.00000000;
            }
        }
    }
    if ((NOT (IS_CHAR_IN_WATER( iParam0->_fU8 ))) AND ((((IS_CHAR_SITTING_IN_ANY_CAR( iParam0->_fU8 )) || (IS_CHAR_GETTING_IN_TO_A_CAR( iParam0->_fU8 ))) || (DOES_VEHICLE_EXIST( iVar4 ))) || ((sub_25075( iParam0->_fU0, iParam0->_fU8, 1 )) > fVar8)))
    {
        if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
        {
            if ((sub_14522( iParam0->_fU8, iParam0->_fU4 )) || (iParam0->_fU4 == iVar4))
            {
                if ((sub_33693( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_30275( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_31700( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_34760( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_35171( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_31935( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_32850( iParam0 )) != 0)
                {
                    ;
                };;;;;;;
            }
            else if ((sub_14522( sub_3607(), iParam0->_fU4 )) AND ((sub_11436( iParam0 + 0 )) == 1))
            {
                if ((sub_30275( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_31700( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_34760( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_35171( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_31935( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_32850( iParam0 )) != 0)
                {
                    ;
                };;;;;;
            }
            else if ((sub_35997( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_36146( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_30532( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_30275( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_31700( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_35171( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_33693( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_34760( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_31935( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_32850( iParam0 )) != 0)
            {
                ;
            };;;;;;;;;;;;
        }
        else if ((sub_35997( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_30532( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_30275( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_33693( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_31700( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_31814( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_34760( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_35171( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_31935( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_32850( iParam0 )) != 0)
        {
            ;
        };;;;;;;;;;;
    }
    else if (((sub_30570( sub_3607(), iParam0->_fU0, 1 )) AND (iParam0->_fU8 != sub_3607())) AND ((sub_11436( iParam0 + 0 )) == 1))
    {
        sub_14402( iParam0, sub_3607() );
    }
    if (IS_CHAR_IN_WATER( iParam0->_fU8 ))
    {
        if (IS_CHAR_IN_WATER( iParam0->_fU0 ))
        {
            if ((sub_21043( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_30532( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_30275( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_35171( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_34032( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_31935( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_31700( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_31814( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_34760( iParam0 )) != 0)
            {
                ;
            };;;;;;;;;
        }
        else if ((NOT (sub_14172( iParam0, 1 ))) || (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
        {
            if ((sub_21043( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_30532( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_30275( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_35171( iParam0 )) != 0)
            {
                ;
            };;;;
        }
        else if ((sub_35997( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_34032( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_31935( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_32850( iParam0 )) != 0)
        {
            ;
        };;;;;;
    }
    else if ((sub_14172( iParam0, 1 )) AND (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU8 ))))
    {
        if ((sub_35997( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_34032( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_31935( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_20881( iParam0, 0, 0 )) != 0)
        {
            ;
        }
        else if ((sub_21043( iParam0 )) != 0)
        {
            ;
        };;;;;
    }
    else if ((sub_35997( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_21043( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_30532( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_30275( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_33693( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_31700( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_35171( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_34760( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_34032( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_31935( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_32850( iParam0 )) != 0)
    {
        ;
    };;;;;;;;;;;;;;
    return 2;
}

int sub_33693(int iParam0)
{
    unknown uVar3;
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
    int iVar14;
    int iVar15;

    if (IS_CHAR_INJURED( iParam0->_fU8 ))
    {
        return 0;
    }
    else if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU8 )))
    {
        return 0;
    }
    else
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU8, ref uVar3 );
        if (NOT (IS_VEH_DRIVEABLE( uVar3 )))
        {
            return 0;
        }
        else if (IS_CHAR_IN_CAR( iParam0->_fU0, uVar3 ))
        {
            return 1;
        }
        else
        {
            iVar4 = sub_33822( uVar3 );
            if (iVar4 < 0)
            {
                return 0;
            }
        }
    }
    uVar5 = {sub_29999( uVar3, 1 )};
    uVar8 = {sub_13899( iParam0->_fU0, 1 )};
    uVar11 = {sub_13899( sub_3607(), 1 )};
    if (IS_PED_IN_GROUP( iParam0->_fU0 ))
    {
        if ((sub_29321( iParam0 )) > 30.00000000)
        {
            sub_31254( iParam0 );
            return 0;
        }
        else
        {
            return 2;
        }
    }
    else if ((sub_29321( iParam0 )) < 12.00000000)
    {
        iVar14 = sub_34032( iParam0 );
        if (iVar14 != 0)
        {
            return 2;
        }
    }
    if ((((IS_CHAR_ON_SCREEN( iParam0->_fU0 )) || (IS_CAR_ON_SCREEN( uVar3 ))) || ((VDIST( uVar11, uVar5 )) < 30.00000000)) || ((VDIST( uVar11, uVar8 )) < 30.00000000))
    {
        if ((VDIST( uVar8, uVar5 )) > 30.00000000)
        {
            return 0;
        }
        else
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 11, ref iVar15 );
            if (iVar15 == 7)
            {
                TASK_ENTER_CAR_AS_PASSENGER( iParam0->_fU0, uVar3, -2, iVar4 );
            }
            return 2;
        }
    }
    else
    {
        CLEAR_CHAR_TASKS( iParam0->_fU0 );
        WARP_CHAR_INTO_CAR_AS_PASSENGER( iParam0->_fU0, uVar3, iVar4 );
        return 1;
    }
    return 0;
}

int sub_33822(unknown uParam0)
{
    int Result;
    int iVar4;

    GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar4 );
    for ( Result = 0; Result < iVar4; Result++ )
    {
        if (IS_CAR_PASSENGER_SEAT_FREE( uParam0, Result ))
        {
            return Result;
        }
    }
    return -1;
}

int sub_34032(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    unknown uVar6;

    if (IS_CHAR_INJURED( iParam0->_fU8 ))
    {
        if (sub_31268( iParam0->_fU0 ))
        {
            ;
        }
        return 0;
    }
    else if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        if (NOT (sub_30570( iParam0->_fU0, iParam0->_fU8, 1 )))
        {
            return 0;
        }
    }
    else if ((sub_25075( iParam0->_fU0, iParam0->_fU8, 1 )) > 12.00000000)
    {
        return 0;
    }
    GET_PED_GROUP_INDEX( iParam0->_fU8, ref uVar3 );
    if (DOES_GROUP_EXIST( uVar3 ))
    {
        if (IS_GROUP_MEMBER( iParam0->_fU0, uVar3 ))
        {
            return 1;
        }
    }
    else
    {
        REMOVE_ALL_INACTIVE_GROUPS_FROM_CLEANUP_LIST();
        CREATE_GROUP( 0, ref uVar3, 1 );
        SET_GROUP_LEADER( uVar3, iParam0->_fU8 );
        PRINTSTRING( "e1_biker_buddy_task: CREATING GROUP with leader" );
        PRINTINT( iParam0->_fU8 );
        PRINTSTRING( " and ped " );
        PRINTINT( iParam0->_fU0 );
        PRINTNL();
    }
    if (DOES_GROUP_EXIST( uVar3 ))
    {
        GET_GROUP_SIZE( uVar3, ref uVar4, ref iVar5 );
        if (iVar5 < 7)
        {
            if (IS_PED_IN_GROUP( iParam0->_fU0 ))
            {
                REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
            }
            GET_GROUP_LEADER( uVar3, ref uVar6 );
            if (NOT (IS_CHAR_INJURED( uVar6 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0->_fU0, 0 );
                SET_GROUP_MEMBER( uVar3, iParam0->_fU0 );
                SET_CHAR_NEVER_LEAVES_GROUP( iParam0->_fU0, 1 );
                return 1;
            }
        }
    }
    return 0;
}

int sub_34760(int iParam0)
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

    if (NOT (sub_14172( iParam0, 2 )))
    {
        return 0;
    }
    iVar3 = 0;
    if (NOT (IS_CAR_DEAD( iParam0->_fU4 )))
    {
        iVar3 = sub_17980( iParam0->_fU4 );
    }
    else if (HAS_MODEL_LOADED( -408052231 ))
    {
        iVar3 = -408052231;
    }
    else if (HAS_MODEL_LOADED( -570033273 ))
    {
        iVar3 = -570033273;
    }
    else if (HAS_MODEL_LOADED( 584879743 ))
    {
        iVar3 = 584879743;
    }
    else if (HAS_MODEL_LOADED( 802082487 ))
    {
        iVar3 = 802082487;
    }
    else if (HAS_MODEL_LOADED( -1830458836 ))
    {
        iVar3 = -1830458836;
    };;;;;;
    if (iVar3 == 0)
    {
        ;
    }
    else if ((NOT (IS_CHAR_ON_SCREEN( iParam0->_fU0 ))) AND ((sub_25055( iParam0 )) > 30.00000000))
    {
        GET_CHAR_COORDINATES( iParam0->_fU0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        if (GET_CLOSEST_CAR_NODE_WITH_HEADING( uVar4._fU0, uVar4._fU4, uVar4._fU8, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8, ref uVar10 ))
        {
            uVar11 = sub_12096( uVar4, uVar10, iVar3 );
            WARP_CHAR_INTO_CAR( iParam0->_fU0, uVar11 );
            if (sub_25012( uVar11 ))
            {
                GIVE_PED_HELMET_WITH_OPTS( iParam0->_fU0, 0 );
                SET_BLIP_THROTTLE_RANDOMLY( uVar11, 1 );
            }
            MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar11 );
            return 1;
        }
    }
    return 0;
}

int sub_35171(int iParam0)
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
    int iVar13;
    int iVar14;
    boolean bVar15;

    if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
    {
        if (IS_CHAR_SITTING_IN_CAR( iParam0->_fU0, iParam0->_fU4 ))
        {
            GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
            if ((iVar3 == iParam0->_fU0) || (IS_CHAR_INJURED( iVar3 )))
            {
                return 0;
            }
            else if (iVar3 != iParam0->_fU8)
            {
                sub_14402( iParam0, iVar3 );
                return 2;
            }
            else
            {
                return 1;
            }
        }
        uVar4 = {sub_13899( sub_3607(), 1 )};
        uVar7 = {sub_13899( iParam0->_fU0, 1 )};
        uVar10 = {sub_29999( iParam0->_fU4, 1 )};
        if ((((IS_CHAR_ON_SCREEN( iParam0->_fU0 )) || (IS_CAR_ON_SCREEN( iParam0->_fU4 ))) || ((VDIST( uVar4, uVar10 )) < 30.00000000)) || ((VDIST( uVar4, uVar7 )) < 30.00000000))
        {
            if ((VDIST( uVar10, uVar7 )) > 30.00000000)
            {
                return 0;
            }
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 11, ref iVar13 );
            if (iVar13 != 7)
            {
                return 2;
            }
            GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
            if (IS_CHAR_INJURED( iVar3 ))
            {
                return 0;
            }
            else if ((iVar3 == sub_3607()) || ((sub_11436( ref iVar3 )) == (sub_11436( iParam0 + 0 ))))
            {
                iVar14 = sub_33822( iParam0->_fU4 );
                if (iVar14 < 0)
                {
                    return 0;
                }
                else
                {
                    TASK_ENTER_CAR_AS_PASSENGER( iParam0->_fU0, iParam0->_fU4, -2, iVar14 );
                    return 2;
                }
            }
            else
            {
                return 0;
            }
        }
        else
        {
            GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
            if (DOES_CHAR_EXIST( iVar3 ))
            {
                if (IS_PED_A_MISSION_PED( iVar3 ))
                {
                    bVar15 = false;
                }
                else
                {
                    DELETE_CHAR( ref iVar3 );
                    bVar15 = true;
                }
            }
            else
            {
                bVar15 = true;
            }
            if (bVar15)
            {
                CLEAR_CHAR_TASKS( iParam0->_fU0 );
                SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
                WARP_CHAR_INTO_CAR( iParam0->_fU0, iParam0->_fU4 );
                if (sub_25012( iParam0->_fU4 ))
                {
                    GIVE_PED_HELMET_WITH_OPTS( iParam0->_fU0, 0 );
                    SET_BLIP_THROTTLE_RANDOMLY( iParam0->_fU4, 1 );
                }
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
    iParam0->_fU4 = nil;
    return 0;
}

int sub_35997(int iParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (IS_CHAR_INJURED( iParam0->_fU0 ))
    {
        return 0;
    }
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 91, ref uVar3 );
    GET_CHAR_HIGHEST_PRIORITY_EVENT( iParam0->_fU0, ref uVar4 );
    if ((((IS_PED_IN_COMBAT( iParam0->_fU0 )) || (IS_CHAR_RESPONDING_TO_EVENT( iParam0->_fU0, 110 ))) || (IS_CHAR_RESPONDING_TO_EVENT( iParam0->_fU0, 115 ))) AND ((sub_29321( iParam0 )) < 30.00000000))
    {
        return 2;
    }
    return 0;
}

int sub_36146(int iParam0)
{
    int iVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    int iVar8;
    boolean bVar9;
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

    if (NOT (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    else if ((sub_21054( iParam0 )) != iParam0->_fU4)
    {
        if (sub_25012( iParam0->_fU4 ))
        {
            SET_CAR_TRACTION( iParam0->_fU4, 1.00000000 );
        }
        return 0;
    }
    else if (NOT (DOES_CHAR_EXIST( iParam0->_fU8 )))
    {
        if (sub_25012( iParam0->_fU4 ))
        {
            SET_CAR_TRACTION( iParam0->_fU4, 1.00000000 );
        }
        return 0;
    };;;
    if (sub_25012( iParam0->_fU4 ))
    {
        SET_CAR_TRACTION( iParam0->_fU4, 2.00000000 );
    }
    if ((CHECK_STUCK_TIMER( iParam0->_fU4, 0, 5000 )) AND (NOT (IS_CAR_ON_SCREEN( iParam0->_fU4 ))))
    {
        SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
    }
    sub_31254( iParam0 );
    iVar8 = 2;
    if (sub_14172( iParam0, 16 ))
    {
        iVar8 = 4;
    }
    bVar9 = false;
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar3 );
    fVar6 = sub_29321( iParam0 );
    uVar10 = nil;
    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU8 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU8, ref uVar10 );
    }
    else if ((iParam0->_fU8 == sub_3607()) AND (IS_CHAR_GETTING_IN_TO_A_CAR( sub_3607() )))
    {
        GET_VEHICLE_PLAYER_WOULD_ENTER( sub_26182(), ref uVar10 );
    }
    if (IS_VEH_DRIVEABLE( uVar10 ))
    {
        GET_CAR_MODEL( uVar10, ref uVar11 );
        if (NOT ((IS_THIS_MODEL_A_BIKE( uVar11 )) || (IS_THIS_MODEL_A_CAR( uVar11 ))))
        {
            uVar10 = nil;
        }
    }
    if (IS_VEH_DRIVEABLE( uVar10 ))
    {
        if (PLAYER_IS_INTERACTING_WITH_GARAGE())
        {
            uVar12 = {sub_13899( sub_3607(), 1 )};
            if (GET_NTH_CLOSEST_CAR_NODE( uVar12._fU0, uVar12._fU4, uVar12._fU8, 5, ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 ))
            {
                return sub_36664( iParam0, uVar12 );
            }
            else
            {
                return sub_21043( iParam0 );
            }
        }
        GET_CHAR_SPEED( iParam0->_fU8, ref fVar5 );
        GET_CHAR_SPEED( iParam0->_fU0, ref fVar4 );
        fVar7 = 50.00000000;
        if ((fVar4 < 2.50000000) AND (fVar6 < 9.00000000))
        {
            return sub_21043( iParam0 );
        }
        else if (fVar6 < 15.00000000)
        {
            if (fVar6 < 1.50000000)
            {
                fVar7 = 0.00000000;
            }
            else if (fVar5 < 0.50000000)
            {
                return sub_21043( iParam0 );
            }
            else if (fVar5 < 4.00000000)
            {
                fVar7 = fVar5;
            }
            else
            {
                GET_MODEL_DIMENSIONS( uVar11, ref uVar15, ref uVar18 );
                if (iParam0->_fU8 != sub_3607())
                {
                    if ((((fVar6 < 6.00000000) AND (iParam0->_fU40 == 2)) || ((fVar6 < 5.00000000) AND (iParam0->_fU40 == 3))) || (fVar6 < 3.00000000))
                    {
                        fVar7 = fVar5 - 2.00000000;
                        if (iParam0->_fU40 == 2)
                        {
                            SET_CAR_LANE_SHIFT( iParam0->_fU4, 1.50000000 );
                        }
                    }
                    else
                    {
                        SET_CAR_LANE_SHIFT( iParam0->_fU4, 0.00000000 );
                    }
                }
                else if (sub_37076())
                {
                    if (fVar6 < 5.00000000)
                    {
                        fVar7 = fVar5 - 5.00000000;
                    }
                    else
                    {
                        fVar7 = fVar5;
                    }
                }
                else if ((IS_THIS_MODEL_A_CAR( uVar11 )) AND (fVar6 < (((ABSF( uVar15._fU4 )) + uVar18._fU0) + 2.50000000)))
                {
                    fVar7 = fVar5 - 2.00000000;
                }
                else if ((fVar6 < 4.00000000) AND (iParam0->_fU40 == 2))
                {
                    fVar7 = fVar5 - 5.00000000;
                }
                else if (fVar6 < 2.50000000)
                {
                    fVar7 = fVar5;
                };;;;;
            };;;
        }
        else if (((sub_29849( iParam0->_fU4 )) || (sub_14172( iParam0, 4 ))) AND ((sub_25055( iParam0 )) >= l_U121))
        {
            bVar9 = sub_37346( iParam0, l_U121, l_U122, fVar5 + 4.00000000 );
            if (bVar9)
            {
                if (sub_14172( iParam0, 128 ))
                {
                    TASK_CAR_MISSION_PED_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, fVar5 + 6.00000000, iVar8, 12, -1 );
                }
                else
                {
                    TASK_CAR_MISSION_PED_TARGET( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, fVar5 + 6.00000000, iVar8, 12, -1 );
                }
                return 2;
            }
        };;;
        if (fVar7 < 0.00000000)
        {
            fVar7 = 0.00000000;
        }
        if (((((((iVar3 == 7) || ((iParam0->_fU96 == 10) AND (iParam0->_fU40 != 0))) || ((iParam0->_fU96 == 12) AND (iParam0->_fU40 != 2))) || ((iParam0->_fU96 == 11) AND (iParam0->_fU40 != 1))) || ((iParam0->_fU96 == 7) AND (iParam0->_fU40 != 3))) || ((((iParam0->_fU96 != 7) AND (iParam0->_fU96 != 10)) AND (iParam0->_fU96 != 12)) AND (iParam0->_fU96 != 11))) || ((iParam0->_fU8 != iParam0->_fU12) AND (NOT (iParam0->_fU12 == nil))))
        {
            switch (iParam0->_fU40)
            {
                case 0:
                iParam0->_fU96 = 10;
                break;
                case 1:
                iParam0->_fU96 = 11;
                break;
                case 2:
                iParam0->_fU96 = 12;
                break;
                default:
                iParam0->_fU96 = 7;
                break;
            }
            if (sub_14172( iParam0, 128 ))
            {
                TASK_CAR_MISSION_PED_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, fVar7, iVar8, 12, -1 );
            }
            else
            {
                TASK_CAR_MISSION_PED_TARGET( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, fVar7, iVar8, 12, -1 );
            }
            return 2;
        }
        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, fVar7 );
        return 2;
    }
    else
    {
        GET_CHAR_SPEED( iParam0->_fU0, ref fVar4 );
        if (fVar6 < 12.00000000)
        {
            return sub_21043( iParam0 );
        }
        else if (((((((iVar3 == 7) || ((iParam0->_fU96 == 10) AND (iParam0->_fU40 != 0))) || ((iParam0->_fU96 == 12) AND (iParam0->_fU40 != 2))) || ((iParam0->_fU96 == 11) AND (iParam0->_fU40 != 1))) || ((iParam0->_fU96 == 7) AND (iParam0->_fU40 != 3))) || ((((iParam0->_fU96 != 7) AND (iParam0->_fU96 != 10)) AND (iParam0->_fU96 != 12)) AND (iParam0->_fU96 != 11))) || ((iParam0->_fU8 != iParam0->_fU12) AND (NOT (iParam0->_fU12 == nil))))
        {
            switch (iParam0->_fU40)
            {
                case 0:
                iParam0->_fU96 = 10;
                break;
                case 1:
                iParam0->_fU96 = 11;
                break;
                case 2:
                iParam0->_fU96 = 12;
                break;
                default:
                iParam0->_fU96 = 7;
                break;
            }
            if (sub_14172( iParam0, 128 ))
            {
                TASK_CAR_MISSION_PED_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, iParam0->_fU28, iVar8, 12, -1 );
            }
            else
            {
                TASK_CAR_MISSION_PED_TARGET( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, iParam0->_fU28, iVar8, 12, -1 );
            }
        }
        fVar7 = fVar6;
        sub_38790( ref fVar7, 5.00000000, 50.00000000 );
        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, fVar7 );;
    }
    return 2;
}

void sub_36664(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown Result;

    uVar6 = {iParam0->_fU16};
    iParam0->_fU16 = {uParam1};
    uVar9 = iParam0->_fU88;
    sub_12963( iParam0, 64 );
    Result = sub_29224( iParam0 );
    iParam0->_fU16 = {uVar6};
    iParam0->_fU88 = uVar9;
    return Result;
}

boolean sub_37076()
{
    return ((IS_CONTROL_PRESSED( 0, 41 )) || (IS_CONTROL_PRESSED( 0, 44 ))) || (IS_CONTROL_PRESSED( 0, 45 ));
}

int sub_37346(int iParam0, unknown uParam1, float fParam2, unknown uParam3)
{
    vector vVar6;
    vector vVar9;
    vector vVar12;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    float fVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;

    if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( iParam0->_fU8, iParam0->_fU4, uParam1, uParam1, uParam1, 0 )))
    {
        if (NOT (IS_CAR_ON_SCREEN( iParam0->_fU4 )))
        {
            GET_CAR_COORDINATES( iParam0->_fU4, ref vVar6.x, ref vVar6.y, ref vVar6.z );
            GET_CHAR_COORDINATES( iParam0->_fU8, ref vVar12.x, ref vVar12.y, ref vVar12.z );
            vVar9 = {vVar6 - vVar12};
            vVar9 = {vVar9 * ((fParam2 + (10.00000000 / 2)) / (VMAG( vVar9 )))};
            vVar9 = {vVar9 + vVar12};
            if (GET_CLOSEST_CAR_NODE_WITH_HEADING( vVar9.x, vVar9.y, vVar9.z, ref uVar15._fU0, ref uVar15._fU4, ref uVar15._fU8, ref uVar18 ))
            {
                if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar15._fU0, uVar15._fU4, uVar15._fU8, 4.00000000, 4.00000000, 4.00000000 )))
                {
                    GET_GAME_VIEWPORT_ID( ref uVar19 );
                    if (((NOT (CAM_IS_SPHERE_VISIBLE( uVar19, uVar15._fU0, uVar15._fU4, uVar15._fU8, 6.00000000 ))) AND ((VDIST( uVar15, sub_13899( sub_3607(), 1 ) )) > fParam2)) AND ((VDIST2( uVar15, vVar6 )) > 9.00000000))
                    {
                        uVar21 = {-SIN( uVar18 ), COS( uVar18 ), 0.00000000};
                        GET_ANGLE_BETWEEN_2D_VECTORS( uVar21._fU0, uVar21._fU4, vVar12.x - uVar15._fU0, vVar12.y - uVar15._fU4, ref fVar20 );
                        if (fVar20 > 90.00000000)
                        {
                            LIMIT_ANGLE( fVar20 + 180.00000000, ref fVar20 );
                            LIMIT_ANGLE( uVar18 + 180.00000000, ref uVar18 );
                        }
                        if ((fVar20 < 45.00000000) || (fVar20 > 315.00000000))
                        {
                            SET_CAR_HEADING( iParam0->_fU4, uVar18 );
                            SET_CAR_COORDINATES( iParam0->_fU4, uVar15._fU0, uVar15._fU4, uVar15._fU8 );
                            SET_CAR_FORWARD_SPEED( iParam0->_fU4, uParam3 );
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_38790(unknown uParam0, float fParam1, float fParam2)
{
    float fVar5;

    if (fParam2 < fParam1)
    {
        fVar5 = fParam2;
        fParam2 = fParam1;
        fParam1 = fVar5;
    }
    if ((uParam0^) < fParam1)
    {
        (uParam0^) = fParam1;
        return 1;
    }
    else if ((uParam0^) > fParam2)
    {
        (uParam0^) = fParam2;
        return 1;
    }
    return 0;
}

void sub_40158(unknown uParam0)
{
    sub_14983( uParam0, 2 );
    return;
}

void sub_40243(int iParam0)
{
    if (PLAYER_IS_INTERACTING_WITH_GARAGE())
    {
        if (NOT (sub_14172( iParam0, 256 )))
        {
            if (DOES_CHAR_EXIST( iParam0->_fU0 ))
            {
                if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
                {
                    if (IS_CHAR_VISIBLE( iParam0->_fU0 ))
                    {
                        if (NOT (sub_30570( sub_3607(), iParam0->_fU0, 1 )))
                        {
                            SET_CHAR_VISIBLE( iParam0->_fU0, 0 );
                            FREEZE_CHAR_POSITION( iParam0->_fU0, 1 );
                            if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
                            {
                                SET_CHAR_COLLISION( iParam0->_fU0, 0 );
                            }
                        }
                    }
                }
            }
            if (NOT (IS_CAR_DEAD( iParam0->_fU4 )))
            {
                if (NOT (IS_CHAR_IN_CAR( sub_3607(), iParam0->_fU4 )))
                {
                    SET_CAR_VISIBLE( iParam0->_fU4, 0 );
                    FREEZE_CAR_POSITION( iParam0->_fU4, 1 );
                    SET_CAR_COLLISION( iParam0->_fU4, 0 );
                }
            }
            sub_12963( iParam0, 256 );
        }
    }
    else if (sub_14172( iParam0, 256 ))
    {
        if (DOES_CHAR_EXIST( iParam0->_fU0 ))
        {
            if (NOT (IS_CHAR_ON_SCREEN( iParam0->_fU0 )))
            {
                if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
                {
                    if (NOT (IS_CHAR_VISIBLE( iParam0->_fU0 )))
                    {
                        SET_CHAR_VISIBLE( iParam0->_fU0, 1 );
                        FREEZE_CHAR_POSITION( iParam0->_fU0, 0 );
                        if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
                        {
                            SET_CHAR_COLLISION( iParam0->_fU0, 1 );
                        }
                    }
                }
                if (NOT (IS_CAR_DEAD( iParam0->_fU4 )))
                {
                    SET_CAR_VISIBLE( iParam0->_fU4, 1 );
                    FREEZE_CAR_POSITION( iParam0->_fU4, 0 );
                    SET_CAR_COLLISION( iParam0->_fU4, 1 );
                }
                sub_14159( iParam0, 256 );
            }
        }
    }
    return;
}

void sub_40779()
{
    if (NOT l_U1836)
    {
        if (NOT (IS_CHAR_DEAD( l_U1241[0]._fU0 )))
        {
            if (LOCATE_CHAR_IN_CAR_3D( l_U1241[0]._fU0, -2031.27100000, 13.74300000, 7.94960000, 6.00000000, 7.00000000, 2.00000000, 0 ))
            {
                l_U1836 = 1;
            }
        }
    }
    return l_U1836;
}

void sub_40918()
{
    unknown uVar2;

    if (NOT l_U1833)
    {
        if (NOT l_U1817)
        {
            if (NOT (IS_CHAR_DEAD( l_U1241[0]._fU0 )))
            {
                if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3607(), -2028.85300000, 33.91390000, 6.93890000, 7.00000000, 3.00000000, 2.00000000, 0 )) || (LOCATE_CHAR_IN_CAR_3D( sub_3607(), -2031.27100000, 13.74300000, 7.94960000, 6.00000000, 7.00000000, 2.00000000, 0 )))
                {
                    l_U1833 = 1;
                }
                if (l_U1833)
                {
                    if (NOT l_U1816)
                    {
                        ;
                    }
                }
            }
        }
    }
    return l_U1833;
}

void sub_41276()
{
    REMOVE_BLIP( l_U210 );
    if (DOES_OBJECT_EXIST( l_U208 ))
    {
        DELETE_OBJECT( ref l_U208 );
    }
    if (DOES_OBJECT_EXIST( l_U209 ))
    {
        DELETE_OBJECT( ref l_U209 );
    }
    l_U125 = 0;
    return;
}

void sub_41368(unknown uParam0)
{
    l_U151 = uParam0;
    return;
}

void sub_41501(int iParam0)
{
    ref iParam0->_fU44->_fU0 = 0;
    return;
}

void sub_41832(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3, boolean bParam4)
{
    float fVar7;
    float fVar8;
    float Result;

    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (IS_VEH_DRIVEABLE( sub_21054( iParam0 ) ))
        {
            fVar7 = sub_25075( iParam0->_fU0, sub_3607(), 1 );
            if (IS_CHAR_IN_ANY_CAR( sub_3607() ))
            {
                if (fVar7 > 200.00000000)
                {
                    if (bParam3)
                    {
                        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, 0 );
                    }
                    l_U0 = 1;
                }
                else if (fVar7 < 6.00000000)
                {
                    l_U0 = 0;
                }
                if (fVar7 > 75.00000000)
                {
                    fVar7 = 75.00000000;
                    l_U0 = 1;
                }
                fVar7 /= 100.00000000;
                fVar7 += -1.00000000;
                fVar7 *= -1.00000000;
                fVar8 = (fVar7 * (uParam2 - uParam1)) + uParam1;
                Result = (fVar7 * (uParam2 - uParam1)) + uParam1;
                if (NOT bParam4)
                {
                    SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, Result );
                }
                return Result;;
            }
            else if (fVar7 < 200)
            {
                SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, uParam1 );
                return uParam1;
                if (fVar7 > 40.00000000)
                {
                    l_U0 = 1;
                }
            }
            else
            {
                SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, 0 );
                l_U0 = 1;
                return 0.00000000;
            }
        }
    }
    return iParam0->_fU28;
}

void sub_43032(unknown uParam0)
{
    STOP_PED_SPEAKING( sub_3607(), 0 );
    SAY_AMBIENT_SPEECH( sub_3607(), uParam0, 1, 0, 1 );
    STOP_PED_SPEAKING( sub_3607(), 1 );
    return;
}

void sub_43642(int iParam0, unknown uParam1)
{
    iParam0->_fU28 = uParam1;
    return;
}

void sub_43872()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    float fVar6;
    float fVar7;

    if (NOT l_U1854)
    {
        l_U1854 = 1;
        GET_GAME_TIMER( ref l_U1857 );
        GET_GAME_TIMER( ref l_U1858 );
    }
    if (NOT (IS_CAR_DEAD( l_U1402 )))
    {
        if (IS_CHAR_IN_CAR( sub_3607(), l_U1402 ))
        {
            for ( I = 0; I < l_U1241; I++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U1241[I]._fU0 )))
                {
                    if (NOT (IS_CAR_DEAD( l_U1241[I]._fU4 )))
                    {
                        if ((sub_44034( l_U1858, l_U1859 )) || ((l_U1853) AND (sub_44034( l_U1857, 1500 ))))
                        {
                            if (NOT l_U1573[I])
                            {
                                if (NOT (IS_CAR_DEAD( l_U1241[I]._fU4 )))
                                {
                                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1241[I]._fU4, 0, 1.00000000, 0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                    if (LOCATE_CHAR_IN_CAR_3D( sub_3607(), uVar3._fU0, uVar3._fU4, uVar3._fU8, 11.00000000, 0.50000000, 3.00000000, 0 ))
                                    {
                                        GET_CAR_SPEED( l_U1402, ref fVar6 );
                                        GET_CAR_SPEED( l_U1241[I]._fU4, ref fVar7 );
                                        if (fVar6 > fVar7)
                                        {
                                            sub_43032( "BIKE_OVERTAKE" );
                                            sub_44321( I, "Johnny over taking...." );
                                            sub_44359( fVar6, "Johnny speed...." );
                                            sub_44359( fVar7, "Biker speed...." );
                                            sub_44421( uVar3, "Locate here..." );
                                            l_U1573[I] = 1;
                                            l_U1852 = 1;
                                            l_U1853 = 0;
                                            l_U1851 = 1;
                                            GET_GAME_TIMER( ref l_U1858 );
                                        }
                                        else
                                        {
                                            sub_44500( "Not fast enough" );
                                        }
                                    }
                                    else
                                    {
                                        sub_44500( "Not located" );
                                    }
                                }
                            }
                            else if (l_U1567[I])
                            {
                                l_U1573[I] = 0;
                            }
                        }
                        else
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1241[I]._fU4, 0, 1.00000000, 0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                            if (LOCATE_CHAR_IN_CAR_3D( sub_3607(), uVar3._fU0, uVar3._fU4, uVar3._fU8, 11.00000000, 0.50000000, 3.00000000, 0 ))
                            {
                                sub_44500( "Time not passed" );
                                GET_CAR_SPEED( l_U1402, ref fVar6 );
                                GET_CAR_SPEED( l_U1241[I]._fU4, ref fVar7 );
                                if (fVar6 > fVar7)
                                {
                                    sub_44321( I, "Overtaking..." );
                                    l_U1573[I] = 1;
                                }
                            }
                        }
                        if ((sub_44034( l_U1857, l_U1859 )) || ((l_U1852) AND (sub_44034( l_U1858, 1500 ))))
                        {
                            if (NOT (IS_CAR_DEAD( l_U1241[I]._fU4 )))
                            {
                                if (NOT l_U1567[I])
                                {
                                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1402, 0, 1.00000000, 0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                    if (LOCATE_CHAR_IN_CAR_3D( l_U1241[I]._fU0, uVar3._fU0, uVar3._fU4, uVar3._fU8, 11.00000000, 0.50000000, 3.00000000, 0 ))
                                    {
                                        GET_CAR_SPEED( l_U1402, ref fVar6 );
                                        GET_CAR_SPEED( l_U1241[I]._fU4, ref fVar7 );
                                        if (fVar7 > fVar6)
                                        {
                                            SAY_AMBIENT_SPEECH( l_U1241[I]._fU0, "BIKE_OVERTAKE", 1, 1, 2 );
                                            l_U1567[I] = 1;
                                            l_U1853 = 1;
                                            l_U1852 = 0;
                                            l_U1851 = 1;
                                            l_U1855 = 0;
                                            GET_GAME_TIMER( ref l_U1857 );
                                        }
                                    }
                                }
                                else if (l_U1573[I])
                                {
                                    l_U1567[I] = 0;
                                }
                            }
                        }
                        else
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1402, 0, 1.00000000, 0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                            if (LOCATE_CHAR_IN_CAR_3D( l_U1241[I]._fU0, uVar3._fU0, uVar3._fU4, uVar3._fU8, 11.00000000, 0.50000000, 3.00000000, 0 ))
                            {
                                GET_CAR_SPEED( l_U1402, ref fVar6 );
                                GET_CAR_SPEED( l_U1241[I]._fU4, ref fVar7 );
                                if (fVar7 > fVar6)
                                {
                                    if (sub_44034( l_U1857, l_U1855 * 1000 ))
                                    {
                                        SAY_AMBIENT_SPEECH( l_U1241[I]._fU0, "LOST_WHOOP", 1, 1, 2 );
                                        l_U1855++;
                                    }
                                    if (l_U1855 > 4)
                                    {
                                        l_U1855 = 0;
                                    }
                                    l_U1567[I] = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (l_U1851)
    {
        l_U1859 = 6000;
    }
    return;
}

int sub_44034(int iParam0, int iParam1)
{
    int iVar4;

    if (iParam0 > 0)
    {
        GET_GAME_TIMER( ref iVar4 );
        if ((iVar4 - iParam0) > iParam1)
        {
            return 1;
        }
    }
    return 0;
}

void sub_44321(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_44359(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_44421(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return;
}

void sub_44500(unknown uParam0)
{
    return;
}

void sub_45675()
{
    TASK_CAR_DRIVE_TO_COORD( l_U1241[l_U1721]._fU0, l_U1241[l_U1721]._fU4, -1717.42700000, 370.72300000, 24.48290000, 4.00000000, 0, -570033273, 2, 4.00000000, 100 );
    l_U1504[l_U1721] = 1;
    GENERATE_RANDOM_INT_IN_RANGE( 700, 1300, ref l_U1723 );
    SETTIMERA( 0 );
    return;
}

int sub_46000(int iParam0, unknown uParam1, unknown uParam2)
{
    int I;
    int iVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    vector vVar17;
    vector vVar20;
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
    vector vVar35;
    boolean bVar38;
    boolean bVar39;
    float fVar40;
    float fVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    int iVar47;

    if ((l_U125) AND (NOT l_U126))
    {
        if ((NOT (IS_CHAR_INJURED( iParam0->_fU0 ))) AND (IS_CHAR_SITTING_IN_ANY_CAR( iParam0->_fU0 )))
        {
            switch (uParam2)
            {
                case 0:
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( iParam0->_fU0, -2.50000000, -uParam1, 0.00000000, ref uVar43._fU0, ref uVar43._fU4, ref uVar43._fU8 );
                GET_CHAR_HEADING( iParam0->_fU0, ref l_U194 );
                break;
                case 1:
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( iParam0->_fU0, 2.50000000, -uParam1, 0.00000000, ref uVar43._fU0, ref uVar43._fU4, ref uVar43._fU8 );
                GET_CHAR_HEADING( iParam0->_fU0, ref l_U194 );
                break;
                default:
                if (NOT (IS_CAR_DEAD( iParam0->_fU4 )))
                {
                    GET_CAR_SPEED( iParam0->_fU4, ref fVar7 );
                    if (fVar7 < 5.00000000)
                    {
                        fVar7 /= 5.00000000;
                        fVar7 += -1.00000000;
                    }
                    else
                    {
                        fVar7 = 0.00000000;
                    }
                }
                else
                {
                    fVar7 = -1.00000000;
                }
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( iParam0->_fU0, 0.00000000, fVar7 * uParam1, 0.00000000, ref uVar43._fU0, ref uVar43._fU4, ref uVar43._fU8 );
                GET_CHAR_HEADING( iParam0->_fU0, ref l_U194 );
                break;
            }
            fVar7 = 0.00000000;
            fVar7 += 1.00000000 * TIMESTEP();
            fVar7 *= 1000.00000000;
            l_U128 += fVar7;
            l_U195 += fVar7;
            l_U196 += fVar7;
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar42 );
            if (NOT (DOES_OBJECT_EXIST( l_U208 )))
            {
                if ((NOT (HAS_MODEL_LOADED( l_U199 ))) || (NOT (HAS_MODEL_LOADED( l_U200 ))))
                {
                    REQUEST_MODEL( l_U199 );
                    REQUEST_MODEL( l_U200 );
                    return 0;
                }
                l_U172[0] = {uVar43};
                l_U188[0] = l_U194;
                if (DOES_VEHICLE_EXIST( uVar42 ))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar42, 0.00000000, -uParam1, 0.00000000, ref l_U172[0]._fU0, ref l_U172[0]._fU4, ref l_U172[0]._fU8 );
                    CREATE_OBJECT( l_U199, l_U172[0]._fU0, l_U172[0]._fU4, l_U172[0]._fU8, ref l_U208, 1 );
                    FREEZE_OBJECT_POSITION_AND_DONT_LOAD_COLLISION( l_U208, 1 );
                    SET_OBJECT_COLLISION( l_U208, 0 );
                    SET_OBJECT_HEADING( l_U208, fVar7 );
                    SET_OBJECT_ALPHA( l_U208, 0 );
                    CREATE_OBJECT( l_U200, l_U172[0]._fU0, l_U172[0]._fU4, l_U172[0]._fU8, ref l_U209, 1 );
                    FREEZE_OBJECT_POSITION_AND_DONT_LOAD_COLLISION( l_U209, 1 );
                    SET_OBJECT_COLLISION( l_U209, 0 );
                    SET_OBJECT_HEADING( l_U209, fVar7 );
                    SET_OBJECT_VISIBLE( l_U209, 0 );
                }
                if (g_U1)
                {
                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U199 );
                }
                for ( I = 1; I <= (l_U172 - 1); I++ )
                {
                    l_U172[I] = {l_U172[0]};
                    l_U188[I] = l_U188[0];
                }
                l_U201 = {l_U172[l_U172 - 1]};
                l_U204 = l_U188[l_U172 - 1];
                GET_GROUND_Z_FOR_3D_COORD( l_U201._fU0, l_U201._fU4, l_U201._fU8 + 1.50000000, ref fVar8 );
                fVar7 = l_U201._fU8 - fVar8;
                if ((fVar7 < 1.50000000) || (fVar7 > -1.50000000))
                {
                    l_U201._fU8 -= 1.00000000 - l_U205;
                }
                l_U201._fU8 += l_U205;
                l_U128 = 0.00000000;
                l_U197 = 0.00000000;
                l_U195 = 0.00000000;
                l_U196 = 99999.90000000;
                l_U132 = 0;
            }
            else if (NOT (IS_CAR_DEAD( uVar42 )))
            {
                fVar7 = 1.00000000;
                fVar7 *= 1000.00000000;
                fVar41 = fVar7 / (TO_FLOAT( l_U172 ));
                fVar40 = l_U195 / fVar41;
                if (fVar40 > 1.00000000)
                {
                    for ( I = 0; I < l_U172; I++ )
                    {
                        iVar6 = l_U172 - (I + 1);
                        if (iVar6 > 0)
                        {
                            l_U172[iVar6] = {l_U172[iVar6 - 1]};
                            l_U188[iVar6] = l_U188[iVar6 - 1];
                        }
                        else
                        {
                            l_U172[iVar6] = {uVar43};
                            l_U188[iVar6] = l_U194;
                        }
                    }
                    l_U195 -= fVar41;
                    fVar40 += -1.00000000;
                }
                vVar20 = {(l_U172[l_U172 - 2]) - (l_U172[l_U172 - 1])};
                vVar35 = {(l_U172[l_U172 - 1]) + (vVar20 * fVar40)};
                if (NOT (IS_CHAR_INJURED( sub_3607() )))
                {
                    if (IS_CHAR_ON_ANY_BIKE( sub_3607() ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3607(), ref uVar46 );
                        if (IS_VEH_DRIVEABLE( uVar46 ))
                        {
                            GET_CAR_COORDINATES( uVar46, ref vVar17.x, ref vVar17.y, ref vVar17.z );
                            vVar20 = {vVar17 - vVar35};
                            if ((VMAG( vVar20 )) < 3.00000000)
                            {
                                bVar38 = true;
                            }
                        }
                    }
                }
                vVar20 = {vVar35 - l_U201};
                vVar20 = {vVar20 * 0.50000000};
                l_U201 = {l_U201 + vVar20};
                GET_GROUND_Z_FOR_3D_COORD( l_U201._fU0, l_U201._fU4, l_U201._fU8 + 1.50000000, ref fVar8 );
                l_U207 += 150.00000000 * TIMESTEP();
                fVar8 += 0.03000000 * (SIN( l_U207 ));
                fVar7 = fVar8 - l_U201._fU8;
                if ((fVar7 > 0.50000000) || (fVar7 < -0.50000000))
                {
                    fVar8 = l_U201._fU8 - (1.00000000 - l_U205);
                }
                l_U201._fU8 = fVar8 + l_U205;
                fVar7 = (l_U188[l_U188 - 2]) - (l_U188[l_U188 - 1]);
                if (fVar7 > 180.00000000)
                {
                    fVar7 += -360.00000000;
                }
                if (fVar7 < -180.00000000)
                {
                    fVar7 += 360.00000000;
                }
                uVar23._fU8 = (l_U188[l_U172 - 1]) + (fVar7 * fVar40);
                SET_OBJECT_COORDINATES( l_U208, l_U201._fU0, l_U201._fU4, l_U201._fU8 );
                SET_OBJECT_HEADING( l_U208, uVar23._fU8 );
                SET_OBJECT_COORDINATES( l_U209, l_U201._fU0, l_U201._fU4, l_U201._fU8 + 0.01000000 );
                SET_OBJECT_HEADING( l_U209, uVar23._fU8 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U208, -1.70000000, 1.70000000, 1.50000000, ref vVar17.x, ref vVar17.y, ref vVar17.z );
                GET_GROUND_Z_FOR_3D_COORD( vVar17.x, vVar17.y, vVar17.z, ref uVar13 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U208, 1.70000000, 1.70000000, 1.50000000, ref vVar17.x, ref vVar17.y, ref vVar17.z );
                GET_GROUND_Z_FOR_3D_COORD( vVar17.x, vVar17.y, vVar17.z, ref uVar14 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U208, -1.70000000, -1.70000000, 1.50000000, ref vVar17.x, ref vVar17.y, ref vVar17.z );
                GET_GROUND_Z_FOR_3D_COORD( vVar17.x, vVar17.y, vVar17.z, ref uVar15 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U208, -1.70000000, -1.70000000, 1.50000000, ref vVar17.x, ref vVar17.y, ref vVar17.z );
                GET_GROUND_Z_FOR_3D_COORD( vVar17.x, vVar17.y, vVar17.z, ref uVar16 );
                fVar9 = (uVar13 + uVar14) / 2.00000000;
                fVar10 = (uVar15 + uVar16) / 2.00000000;
                fVar11 = (uVar14 + uVar16) / 2.00000000;
                fVar12 = (uVar13 + uVar15) / 2.00000000;
                uVar23._fU0 = ATAN( (fVar9 - fVar10) / (2.00000000 * 1.70000000) );
                uVar23._fU4 = (ATAN( (fVar11 - fVar12) / (2.00000000 * 1.70000000) )) * -1.00000000;
                if (uVar23._fU0 > 15.00000000)
                {
                    uVar23._fU0 = 0.00000000;
                }
                if (uVar23._fU0 < -15.00000000)
                {
                    uVar23._fU0 = 0.00000000;
                }
                if (uVar23._fU4 > 5.00000000)
                {
                    uVar23._fU4 = 0.00000000;
                }
                if (uVar23._fU4 < -5.00000000)
                {
                    uVar23._fU4 = 0.00000000;
                }
                SET_OBJECT_ROTATION( l_U208, uVar23._fU0, uVar23._fU4, uVar23._fU8 );
                SET_OBJECT_ROTATION( l_U209, uVar23._fU0, uVar23._fU4, uVar23._fU8 );
                if (l_U124 == 0)
                {
                    if (sub_48563())
                    {
                        l_U128 = 0.00000000;
                    }
                    bVar39 = false;
                    if (NOT l_U131)
                    {
                        if (l_U128 > l_U129)
                        {
                            l_U131 = 1;
                            bVar39 = true;
                        }
                    }
                    else if (l_U128 > l_U130)
                    {
                        bVar39 = true;
                    }
                    if (IS_MESSAGE_BEING_DISPLAYED())
                    {
                        bVar39 = false;
                    }
                    if (sub_48696())
                    {
                        bVar39 = false;
                    }
                    SET_OBJECT_VISIBLE( l_U208, 0 );
                    SET_OBJECT_VISIBLE( l_U209, 0 );
                    if (bVar39)
                    {
                        l_U197 = 0.00000000;
                        l_U128 = 0.00000000;
                        l_U124 = 1;
                        if (l_U196 > 2000.00000000)
                        {
                            l_U132 = 1;
                            l_U196 = 0.00000000;
                        }
                    }
                }
                if (l_U124 == 1)
                {
                    if (sub_48696())
                    {
                        PRINTSTRING( "Marker told to fade out 1 \n" );
                        sub_23760();
                        l_U124 = 3;
                    }
                    else if (l_U128 > 400.00000000)
                    {
                        SET_OBJECT_VISIBLE( l_U208, 1 );
                        SET_OBJECT_ALPHA( l_U208, 255 );
                    }
                    fVar7 = 0.00000000;
                    fVar7 += 1.00000000 * TIMESTEP();
                    fVar7 *= 1000.00000000;
                    if (bVar38)
                    {
                        if (DOES_OBJECT_EXIST( l_U209 ))
                        {
                            SET_OBJECT_VISIBLE( l_U209, 1 );
                        }
                        l_U197 += fVar7;
                    }
                    else if (DOES_OBJECT_EXIST( l_U209 ))
                    {
                        SET_OBJECT_VISIBLE( l_U209, 0 );
                    }
                    l_U197 = 0.00000000;;
                    if (l_U197 > 1000.00000000)
                    {
                        l_U128 = 99999.00000000;
                        l_U132 = 2;
                        if (IS_PLAYER_PLAYING( sub_26182() ))
                        {
                            GET_PLAYER_MAX_HEALTH( sub_26182(), ref iVar47 );
                            GET_CHAR_HEALTH( sub_3607(), ref I );
                            if (I < iVar47)
                            {
                                fVar7 = TO_FLOAT( I );
                                fVar7 += 15.00000000;
                                I = ROUND( fVar7 );
                                if (I > iVar47)
                                {
                                    I = iVar47;
                                }
                                SET_CHAR_HEALTH( sub_3607(), I );
                            }
                            else
                            {
                                GET_PLAYER_MAX_ARMOUR( sub_26182(), ref iVar47 );
                                GET_CHAR_ARMOUR( sub_3607(), ref I );
                                I = iVar47 - I;
                                if (I > 15)
                                {
                                    I = 15;
                                }
                                ADD_ARMOUR_TO_CHAR( sub_3607(), I );
                            }
                            l_U128 = 0.00000000;
                            if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3607() ))
                            {
                                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3607(), ref uVar42 );
                                GET_CAR_HEALTH( uVar42, ref I );
                                I += 150;
                                SET_CAR_HEALTH( uVar42, I );
                            }
                        }
                        l_U206 = 255;
                        l_U128 = 0.00000000;
                        PRINTSTRING( "Marker told to fade out 2 \n" );
                        l_U124 = 3;
                    }
                }
                if (l_U124 == 3)
                {
                    if (l_U128 > 400.00000000)
                    {
                        l_U206 = 0;
                        if (NOT l_U127)
                        {
                            l_U126 = 1;
                            l_U128 = 0.00000000;
                        }
                        else
                        {
                            l_U128 = 999999.90000000;
                        }
                        l_U124 = 0;
                    }
                }
                sub_49839();
                return (IS_CHAR_IN_ANY_CAR( sub_3607() )) AND ((VDIST( l_U201, sub_13899( sub_3607(), 1 ) )) < 5.00000000);
            }
            else
            {
                sub_41276();
            }
        }
        else
        {
            sub_41276();
        }
    }
    else
    {
        sub_41276();
    }
    sub_49839();
    return 0;
}

void sub_48563()
{
    return sub_23529( l_U143 );
}

int sub_48696()
{
    if (l_U127)
    {
        PRINTSTRING( "SHOULD_CONVERSATION_MARKER_BE_HIDDEN = TRUE - 1 \n" );
        return 1;
    }
    if (IS_PLAYER_PLAYING( sub_26182() ))
    {
        if (NOT (IS_CHAR_ON_ANY_BIKE( sub_3607() )))
        {
            PRINTSTRING( "SHOULD_CONVERSATION_MARKER_BE_HIDDEN = TRUE - 2 \n" );
            return 1;
        }
        if (IS_WANTED_LEVEL_GREATER( sub_26182(), 0 ))
        {
            PRINTSTRING( "SHOULD_CONVERSATION_MARKER_BE_HIDDEN = TRUE - 3 \n" );
            return 1;
        }
    }
    else
    {
        PRINTSTRING( "SHOULD_CONVERSATION_MARKER_BE_HIDDEN = TRUE - 4 \n" );
        return 1;
    }
    return 0;
}

void sub_49839()
{
    switch (l_U132)
    {
        case 0: break;
        case 1:
        if (NOT (sub_23529( l_U133 )))
        {
            sub_5929( 8, 0, "LAZLOW", 0 );
            if (sub_49963( "E1MF3_BLIPB", "E1MF3AU", 0, 1, ref l_U133, 2, 1 ))
            {
                l_U132 = 3;
            }
            else
            {
                PRINTSTRING( "Biker Marker - trying to play EM1F3_BLIPB - line 0 \n" );
            }
        }
        else
        {
            l_U132 = 0;
        }
        break;
        case 2:
        if (NOT (sub_23529( l_U133 )))
        {
            sub_5929( 8, 0, "LAZLOW", 0 );
            if (sub_49963( "E1MF3_BLIPB", "E1MF3AU", 1, 1, ref l_U133, 2, 1 ))
            {
                l_U132 = 3;
            }
            else
            {
                PRINTSTRING( "Biker Marker - trying to play E1MF3_BLIPB - line 1 \n" );
            }
        }
        else
        {
            l_U132 = 0;
        }
        break;
        case 3:
        if (NOT (sub_23529( l_U133 )))
        {
            l_U132 = 0;
        }
        break;
    }
    return;
}

void sub_49963(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    char[16] cVar9;
    char[12] cVar13;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;

    StrCopy( ref cVar9, uParam1, 16 );
    array(ref cVar13, 2);
    StrCopy( ref cVar13[0], uParam0, 16 );
    StrCopy( ref cVar13[1], "END", 16 );
    return sub_21821( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

int sub_50617()
{
    if (((NOT (sub_23529( l_U1482 ))) AND (NOT sub_48563())) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
    {
        return 1;
    }
    return 0;
}

void sub_51570(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if ((uParam1^) >= 2.00000000)
        {
            if (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( uParam0, sub_3607() ))
            {
                TASK_LOOK_AT_CHAR( uParam0, sub_3607(), -2, 0 );
            }
            else
            {
                TASK_TURN_CHAR_TO_FACE_CHAR( uParam0, sub_3607() );
            }
            (uParam1^) = 0.00000000;
        }
        else
        {
            (uParam1^) += 1.00000000 * TIMESTEP();
        }
    }
    return;
}

void sub_51748(unknown uParam0)
{
    int I;
    int iVar4;
    int J;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown[10] uVar10;
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
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    int[10] iVar41;
    int iVar52;
    unknown uVar53;
    unknown uVar54;
    int iVar55;
    float fVar56;
    float fVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;

    if (l_U123 >= 1.20000000)
    {
        array(ref uVar10, 10);
        array(ref iVar41, 10);
        for ( I = 0; I < (uParam0^); I++ )
        {
            if ((NOT ((uParam0^)[I]._fU8 == nil)) AND ((uParam0^)[I]._fU36 == 1))
            {
                if ((NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU8 ))) AND (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 ))))
                {
                    if (IS_CHAR_SITTING_IN_ANY_CAR( (uParam0^)[I]._fU8 ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( (uParam0^)[I]._fU8, ref uVar6 );
                    }
                    else
                    {
                        uVar6 = nil;
                    }
                    if (((IS_VEH_DRIVEABLE( uVar6 )) AND (IS_CHAR_SITTING_IN_ANY_CAR( (uParam0^)[I]._fU0 ))) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( (uParam0^)[I]._fU8, (uParam0^)[I]._fU0, 30, 30, 30, 0 )))
                    {
                        GET_CHAR_COORDINATES( (uParam0^)[I]._fU0, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                        GET_OFFSET_FROM_CAR_GIVEN_WORLD_COORDS( uVar6, uVar7._fU0, uVar7._fU4, uVar7._fU8, ref uVar10[I]._fU0, ref uVar10[I]._fU4, ref uVar10[I]._fU8 );
                        if (uVar10[I]._fU4 < 0)
                        {
                            iVar41[I] = 1;
                        }
                    }
                }
            }
        }
        for ( I = 0; I < (uParam0^); I++ )
        {
            if (iVar41[I])
            {
                if ((((uParam0^)[I]._fU40 == 0) AND (uVar10[I]._fU0 > 0)) || (((uParam0^)[I]._fU40 == 1) AND (uVar10[I]._fU0 < 0)))
                {
                    for ( iVar4 = 0; iVar4 < (uParam0^); iVar4++ )
                    {
                        if ((((NOT (I == iVar4)) AND ((uParam0^)[I]._fU8 == (uParam0^)[iVar4]._fU8)) AND (iVar41[iVar4])) AND ((((uParam0^)[I]._fU40 == 0) AND ((uParam0^)[iVar4]._fU40 == 1)) || (((uParam0^)[I]._fU40 == 1) AND ((uParam0^)[iVar4]._fU40 == 0))))
                        {
                            if ((((uParam0^)[I]._fU40 == 0) AND (uVar10[I]._fU0 > uVar10[iVar4]._fU0)) || (((uParam0^)[I]._fU40 == 1) AND (uVar10[I]._fU0 < uVar10[iVar4]._fU0)))
                            {
                                uVar53 = (uParam0^)[I]._fU40;
                                (uParam0^)[I]._fU40 = (uParam0^)[iVar4]._fU40;
                                (uParam0^)[iVar4]._fU40 = uVar53;
                                for ( J = 0; J < (uParam0^); J++ )
                                {
                                    if ((NOT (J == I)) AND (NOT (J == iVar4)))
                                    {
                                        if ((uParam0^)[J]._fU8 == (uParam0^)[I]._fU0)
                                        {
                                            sub_14402( ref (uParam0^)[J], (uParam0^)[iVar4]._fU0 );
                                            iVar41[J] = 0;
                                        }
                                        else if ((uParam0^)[J]._fU8 == (uParam0^)[iVar4]._fU0)
                                        {
                                            sub_14402( ref (uParam0^)[J], (uParam0^)[I]._fU0 );
                                            iVar41[J] = 0;
                                        }
                                    }
                                }
                                iVar41[I] = 0;
                                iVar41[iVar4] = 0;
                            }
                        }
                    }
                }
            }
        }
        for ( I = 0; I < iVar41; I++ )
        {
            iVar41[I] = 1;
            if (I < (uParam0^))
            {
                if ((uParam0^)[I]._fU36 != 1)
                {
                    iVar41[I] = 0;
                }
                if (IS_CHAR_INJURED( (uParam0^)[I]._fU0 ))
                {
                    iVar41[I] = 0;
                }
                else if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( (uParam0^)[I]._fU0 )))
                {
                    iVar41[I] = 0;
                }
            }
        }
        for ( I = 0; I < (uParam0^); I++ )
        {
            if ((uParam0^)[I]._fU8 == nil)
            {
                if (NOT ((uParam0^)[I]._fU12 == nil))
                {
                    (uParam0^)[I]._fU8 = (uParam0^)[I]._fU12;
                }
            }
            if ((((NOT ((uParam0^)[I]._fU8 == nil)) AND (iVar41[I])) AND (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))) AND (NOT ((uParam0^)[I]._fU8 == sub_3607())))
            {
                if (IS_CHAR_SITTING_IN_ANY_CAR( (uParam0^)[I]._fU0 ))
                {
                    iVar55 = -1;
                    for ( iVar4 = 0; iVar4 < (uParam0^); iVar4++ )
                    {
                        if (((uParam0^)[iVar4]._fU0 == (uParam0^)[I]._fU8) AND (iVar41[iVar4]))
                        {
                            iVar55 = iVar4;
                        }
                    }
                    if (NOT (iVar55 == -1))
                    {
                        if (NOT ((uParam0^)[iVar55]._fU0 == nil))
                        {
                            if (NOT ((uParam0^)[iVar55]._fU8 == nil))
                            {
                                if (NOT (IS_CHAR_INJURED( (uParam0^)[iVar55]._fU8 )))
                                {
                                    if (NOT (IS_CHAR_INJURED( (uParam0^)[iVar55]._fU0 )))
                                    {
                                        GET_CHAR_COORDINATES( (uParam0^)[I]._fU0, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                                        GET_CHAR_COORDINATES( (uParam0^)[iVar55]._fU0, ref uVar58._fU0, ref uVar58._fU4, ref uVar58._fU8 );
                                        GET_CHAR_COORDINATES( (uParam0^)[iVar55]._fU8, ref uVar61._fU0, ref uVar61._fU4, ref uVar61._fU8 );
                                    }
                                    GET_DISTANCE_BETWEEN_COORDS_3D( uVar7._fU0, uVar7._fU4, uVar7._fU8, uVar61._fU0, uVar61._fU4, uVar61._fU8, ref fVar56 );
                                    if (fVar56 < 0)
                                    {
                                        fVar56 *= -1;
                                    }
                                    GET_DISTANCE_BETWEEN_COORDS_3D( uVar58._fU0, uVar58._fU4, uVar58._fU8, uVar61._fU0, uVar61._fU4, uVar61._fU8, ref fVar57 );
                                    if (fVar57 < 0)
                                    {
                                        fVar57 *= -1;
                                    }
                                    iVar52 = 0;
                                    if (IS_CHAR_INJURED( (uParam0^)[iVar55]._fU0 ))
                                    {
                                        iVar52 = 1;
                                    }
                                    else if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( (uParam0^)[iVar55]._fU0 )))
                                    {
                                        iVar52 = 1;
                                    }
                                    if ((iVar52) || (fVar56 < fVar57))
                                    {
                                        iVar41[I] = 0;
                                        iVar41[iVar55] = 0;
                                        for ( iVar4 = 0; iVar4 < (uParam0^); iVar4++ )
                                        {
                                            if (((((NOT ((uParam0^)[iVar4]._fU8 == nil)) AND (NOT (I == iVar4))) AND (NOT (iVar4 == iVar55))) AND ((uParam0^)[iVar4]._fU8 == (uParam0^)[I]._fU8)) AND (iVar41[iVar4]))
                                            {
                                                sub_14402( ref (uParam0^)[iVar4], (uParam0^)[I]._fU0 );
                                                iVar41[iVar4] = 0;
                                            }
                                        }
                                        uVar53 = (uParam0^)[I]._fU40;
                                        uVar54 = (uParam0^)[iVar55]._fU40;
                                        sub_14402( ref (uParam0^)[I], (uParam0^)[iVar55]._fU8 );
                                        sub_14402( ref (uParam0^)[iVar55], (uParam0^)[I]._fU0 );
                                        (uParam0^)[I]._fU40 = uVar54;
                                        (uParam0^)[iVar55]._fU40 = uVar53;
                                        for ( iVar4 = 0; iVar4 < (uParam0^); iVar4++ )
                                        {
                                            if ((((uParam0^)[iVar4]._fU8 == (uParam0^)[I]._fU0) AND (NOT (iVar4 == iVar55))) AND (iVar41[iVar4]))
                                            {
                                                sub_14402( ref (uParam0^)[iVar4], (uParam0^)[iVar55]._fU0 );
                                                iVar41[iVar4] = 0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        l_U123 = 0;
    }
    else
    {
        l_U123 += 1.00000000 * TIMESTEP();
    }
    return;
}

void sub_53853(float fParam0)
{
    if (fParam0 < 1000.00000000)
    {
        l_U129 = 1000.00000000;
    }
    else
    {
        l_U129 = fParam0;
    }
    l_U131 = 0;
    return;
}

void sub_54413()
{
    if ((((((((NOT (l_U362 == 1)) AND (NOT (l_U362 == 4))) AND (NOT (l_U362 == 6))) AND (NOT (l_U362 == 8))) AND (NOT (l_U362 == 5))) AND (NOT (l_U362 == 9))) AND (l_U367 == 0)) AND (l_U1831))
    {
        if ((NOT (IS_VEH_DRIVEABLE( l_U1402 ))) || (sub_54512( l_U1402 )))
        {
            l_U367 = 6;
            l_U362 = 9;
        }
        else if (sub_55953( l_U1402 ))
        {
            if (DOES_VEHICLE_EXIST( l_U1402 ))
            {
                DELETE_CAR( ref l_U1402 );
            }
            l_U367 = 7;
            l_U362 = 9;
        }
        else if (l_U362 == 0)
        {
            if (NOT (IS_VEH_DRIVEABLE( l_U1241[0]._fU4 )))
            {
                l_U367 = 8;
                l_U362 = 9;
            }
        };;;
    }
    return;
}

int sub_54512(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( sub_3607() )))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            if (IS_CHAR_IN_CAR( sub_3607(), uParam0 ))
            {
                if (CHECK_STUCK_TIMER( uParam0, 3, 60000 ))
                {
                    return 1;
                }
                if ((CHECK_STUCK_TIMER( uParam0, 2, 30000 )) AND (NOT (CHECK_STUCK_TIMER( uParam0, 1, 0 ))))
                {
                    return 1;
                }
                if (CHECK_STUCK_TIMER( uParam0, 0, 5000 ))
                {
                    return 1;
                }
            }
            if (sub_54656( uParam0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_54656(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( sub_3607() )))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_3607(), uParam0 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3607(), uParam0, 5, 5, 5, 0 ))
                {
                    if (((IS_BUTTON_PRESSED( 0, 15 )) AND (IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 3 )) AND (NOT IS_USING_CONTROLLER())))
                    {
                        if (IS_BUTTON_JUST_PRESSED( 0, 15 ))
                        {
                            l_U355++;
                        }
                        GET_GAME_TIMER( ref l_U356 );
                    }
                    else if (NOT sub_54827())
                    {
                        if (sub_54905( uParam0 ))
                        {
                            if (l_U355 > 2)
                            {
                                if (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_3607() )))
                                {
                                    if (NOT (IS_PED_RAGDOLL( sub_3607() )))
                                    {
                                        GET_GAME_TIMER( ref l_U357 );
                                        l_U358 = l_U357 - l_U356;
                                        if (l_U358 > 1000)
                                        {
                                            PRINTNL();
                                            PRINTSTRING( "*******************************" );
                                            PRINTNL();
                                            PRINTSTRING( "Brenda's Stuck Check has returned true" );
                                            PRINTNL();
                                            PRINTSTRING( "*******************************" );
                                            PRINTNL();
                                            PRINTNL();
                                            PRINTSTRING( "*******************************" );
                                            PRINTNL();
                                            PRINTSTRING( "Brenda's Stuck Check is setting your vehicle on fire" );
                                            PRINTNL();
                                            PRINTSTRING( "*******************************" );
                                            PRINTNL();
                                            SET_PETROL_TANK_HEALTH( uParam0, 65436 );
                                            return 1;
                                        }
                                    }
                                    else
                                    {
                                        GET_GAME_TIMER( ref l_U356 );
                                        l_U355 = 0;
                                    }
                                }
                                else
                                {
                                    GET_GAME_TIMER( ref l_U356 );
                                    l_U355 = 0;
                                }
                            }
                        }
                        else
                        {
                            GET_GAME_TIMER( ref l_U356 );
                            l_U355 = 0;
                        }
                    }
                    else
                    {
                        GET_GAME_TIMER( ref l_U356 );
                        l_U355 = 0;
                    }
                }
                else
                {
                    GET_GAME_TIMER( ref l_U356 );
                    l_U355 = 0;
                }
            }
            else
            {
                GET_GAME_TIMER( ref l_U356 );
                l_U355 = 0;
            }
        }
    }
    return 0;
}

int sub_54827()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar2, ref iVar3, ref uVar4, ref uVar5 );
    if ((iVar2 > 20) || (iVar2 < 65516))
    {
        return 1;
    }
    if ((iVar3 > 20) || (iVar3 < 65516))
    {
        return 1;
    }
    return 0;
}

int sub_54905(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_COORDINATES( uParam0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    }
    if (NOT (IS_CHAR_INJURED( sub_3607() )))
    {
        GET_CHAR_COORDINATES( sub_3607(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    }
    GET_HEADING_FROM_VECTOR_2D( uVar3._fU0 - uVar6._fU0, uVar3._fU4 - uVar6._fU4, ref uVar9 );
    if (sub_55023( sub_3607(), uVar9, 90 ))
    {
        return 1;
    }
    return 0;
}

int sub_55023(unknown uParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_HEADING( uParam0, ref fVar5 );
        fVar6 = uParam1 - uParam2;
        fVar7 = (uParam1 + uParam2) - 1;
        fVar9 = fVar7 - 360;
        fVar8 = fVar6 + 360;
        if ((fVar7 <= 360) AND (fVar6 >= 0))
        {
            if ((fVar5 > fVar6) AND (fVar5 < fVar7))
            {
                l_U354 = 1;
            }
            else
            {
                l_U354 = 0;
            }
        }
        else if (fVar7 > 360)
        {
            if (((fVar5 < fVar9) AND (fVar5 >= 0)) || ((fVar5 <= 360) AND (fVar5 > fVar6)))
            {
                l_U354 = 1;
            }
            else
            {
                l_U354 = 0;
            }
        }
        else if (fVar6 < 0)
        {
            if (((fVar5 > fVar8) AND (fVar5 <= 360)) || ((fVar5 >= 0) AND (fVar5 < fVar7)))
            {
                l_U354 = 1;
            }
            else
            {
                l_U354 = 0;
            }
        };;;
        if (l_U354)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    return 0;
}

int sub_55953(unknown uParam0)
{
    int iVar3;

    if (g_U9549 == 0)
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_3607(), uParam0 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_3607(), uParam0, 100.00000000, 100.00000000, 0 )))
                {
                    return 1;
                }
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_3607(), uParam0, 50.00000000, 50.00000000, 0 )))
                {
                    GET_GAME_TIMER( ref iVar3 );
                    if ((iVar3 - l_U223) >= 180000)
                    {
                        return 1;
                    }
                }
                else
                {
                    GET_GAME_TIMER( ref l_U223 );
                }
            }
            else
            {
                GET_GAME_TIMER( ref l_U223 );
            }
        }
    }
    return 0;
}

void sub_56251()
{
    if ((((((NOT (l_U362 == 1)) AND (NOT (l_U362 == 4))) AND (NOT (l_U362 == 6))) AND (NOT (l_U362 == 8))) AND (NOT (l_U362 == 9))) AND (NOT (l_U362 == 5)))
    {
        for ( l_U1721 = 0; l_U1721 < l_U1241; l_U1721++ )
        {
            if ((IS_CHAR_INJURED( l_U1241[l_U1721]._fU0 )) AND (l_U367 == 0))
            {
                switch (l_U1721)
                {
                    case 0:
                    l_U367 = 1;
                    break;
                    case 1:
                    l_U367 = 2;
                    break;
                    case 2:
                    l_U367 = 3;
                    break;
                    case 3:
                    l_U367 = 4;
                    break;
                    case 4:
                    l_U367 = 5;
                    break;
                }
                l_U362 = 9;
            }
        }
    }
    if (l_U1819)
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3607(), l_U1580._fU0, l_U1580._fU4, l_U1580._fU8, 110.00000000, 110.00000000, 150.00000000, 0 )))
        {
            PRINT_NOW( "B4_ABAB", 7000, 1 );
            sub_56590();
        }
    }
    return;
}

void sub_56590()
{
    if (g_U10991 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_26182(), 150 );
        SAY_AMBIENT_SPEECH( sub_3607(), "MISSION_FAIL_RAGE", 1, 1, 0 );
    }
    sub_794();
    sub_56666();
    sub_3151();
    return;
}

void sub_56666()
{
    sub_56675();
    return;
}

void sub_56675()
{
    int iVar2;

    iVar2 = 0;
    sub_56689( iVar2 );
    sub_2141( iVar2 );
    return;
}

void sub_56689(unknown uParam0)
{
    if (g_U12306[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_26182(), 150 );
    CLEAR_HELP();
    sub_1000( uParam0 );
    return;
}

void sub_56800()
{
    if (NOT (IS_CHAR_INJURED( sub_3607() )))
    {
        if (LOCATE_CHAR_ANY_MEANS_2D( sub_3607(), 64910, 1198, 200.00000000, 200.00000000, 0 ))
        {
            if (NOT l_U1533)
            {
                GET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1292729623, 64913, 1207, 6, ref l_U1536, ref l_U1794 );
                if (NOT l_U1536)
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1292729623, 64913, 1207, 6, 1, 0.00000000 );
                }
                GET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 566666890, 64909, 1207, 6, ref l_U1536, ref l_U1794 );
                if (NOT l_U1536)
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 566666890, 64909, 1207, 6, 1, 0.00000000 );
                }
            }
            else
            {
                GET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1292729623, 64913, 1207, 6, ref l_U1536, ref l_U1794 );
                if (l_U1536)
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1292729623, 64913, 1207, 6, 0, 0.00000000 );
                }
                GET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 566666890, 64909, 1207, 6, ref l_U1536, ref l_U1794 );
                if (l_U1536)
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 566666890, 64909, 1207, 6, 0, 0.00000000 );
                }
            }
            GET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 64918, 1203, 6, ref l_U1536, ref l_U1794 );
            if (NOT l_U1536)
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 64918, 1203, 6, 1, 1.00000000 );
            }
            GET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 384356690, 64912, 1193, 6, ref l_U1536, ref l_U1794 );
            if (NOT l_U1536)
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 384356690, 64912, 1193, 6, 1, 1.00000000 );
            }
        }
    }
    return;
}

void sub_57568()
{
    switch (l_U369)
    {
        case 0:
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3607(), -624.09000000, 1193.63000000, 6.11000000, 1.20000000, 1.20000000, 1.20000000, 0 ))
        {
            CREATE_CHAR( 26, l_U1240, -620.18000000, 1187.18000000, 6.50000000, ref l_U1401, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1401, 1 );
            SET_CHAR_HEADING( l_U1401, 122 );
            SET_CHAR_NEVER_TARGETTED( l_U1401, 1 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U1401, "E1_AODrearstair" );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U1401 );
            SET_CHAR_DECISION_MAKER( l_U1401, l_U1473 );
            SET_CHAR_KEEP_TASK( l_U1401, 1 );
            START_CHAR_FIRE( l_U1401 );
            SET_CHAR_PROOFS( l_U1401, 0, 1, 0, 0, 0 );
            SAY_AMBIENT_SPEECH_WITH_VOICE( l_U1401, "ON_FIRE", "PAIN_VOICE", 1, 0, 0 );
            STOP_PED_SPEAKING( l_U1401, 0 );
            TASK_GO_STRAIGHT_TO_COORD( l_U1401, -622.98000000, 1185.08000000, 7.51000000, 3, -2 );
            l_U369 = 1;
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U1401 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( l_U1401, -622.98000000, 1185.08000000, 7.51000000, 0.30000000, 0.30000000, 0.30000000, 0 ))
            {
                UNLOCK_RAGDOLL( l_U1401, 1 );
                SAY_AMBIENT_SPEECH_WITH_VOICE( l_U1401, "ON_FIRE", "PAIN_VOICE", 1, 0, 0 );
                l_U1718 = {-0.20000000, 1.00000000, 0.00000000};
                SWITCH_PED_TO_RAGDOLL_WITH_FALL( l_U1401, 3000, 5000, 5, l_U1718 / (VMAG( l_U1718 )), 5.00000000, 0, 0, 0, 0, 0, 0 );
                l_U369 = 2;
            }
        }
        break;
        case 2:
        if (NOT l_U1557)
        {
            if (l_U1787 >= 2.00000000)
            {
                if ((sub_50617()) AND (IS_CHAR_IN_AREA_3D( sub_3607(), -626.85000000, 1183.48000000, 4.40000000, -622.85000000, 1194.23000000, 7.80000000, 0 )))
                {
                    sub_21746( "E1B4_BURN", ref l_U1482, 7, 1 );
                    l_U1557 = 1;
                }
            }
            else
            {
                l_U1787 += 1.00000000 * TIMESTEP();
            }
        }
        break;
    }
    return;
}

void sub_58461()
{
    int iVar2;

    sub_16493();
    if (IS_CHAR_SITTING_IN_CAR( sub_3607(), l_U1402 ))
    {
        if (NOT l_U1550)
        {
            if (sub_50617())
            {
                if (NOT l_U1549)
                {
                    if (IS_SCREEN_FADED_IN())
                    {
                        sub_21746( "E1B4_FOLLOW", ref l_U1482, 7, 1 );
                        l_U1549 = 1;
                    }
                }
                else
                {
                    PRINT_NOW( "B4_GOCLUBHOUSEb", 7500, 1 );
                    l_U1550 = 1;
                    l_U1537 = 1;
                }
            }
        }
        else if (NOT l_U1877)
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                sub_41368( 0 );
                l_U1877 = 1;
            }
        }
    }
    if (NOT l_U1878)
    {
        if (NOT sub_40918())
        {
            if ((NOT (sub_21502( l_U1241[2] ))) AND (NOT (sub_21502( l_U1241[0] ))))
            {
                sub_15575( ref l_U1241[2], "E1B4_BRIAN", "E1B4_BRIAN2" );
                sub_15575( ref l_U1241[0], "E1B4_BILL", 0 );
                l_U1878 = 1;
            }
        }
    }
    sub_58788();
    if (IS_CHAR_SITTING_IN_CAR( sub_3607(), l_U1402 ))
    {
        if ((((l_U1528) AND (IS_CHAR_STOPPED( l_U1241[0]._fU0 ))) AND (sub_59364( 1, 1 ))) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3607(), l_U1241[0]._fU0, 20, 20, 4, 0 )))
        {
            if (l_U1834)
            {
                if (l_U1871)
                {
                    if (NOT sub_21554())
                    {
                        iVar2 = 1;
                    }
                }
            }
            else
            {
                iVar2 = 1;
            }
        }
        else if (l_U1834)
        {
            if ((l_U1867) AND (sub_44034( l_U1876, 60000 )))
            {
                ;
            }
            else if ((((l_U1867) AND (l_U1528)) AND (sub_44034( l_U1876, 20000 ))) AND (NOT ((LOCATE_CHAR_IN_CAR_3D( sub_3607(), l_U1846._fU0, l_U1846._fU4, l_U1846._fU8, 6.00000000, 6.00000000, 6.00000000, 0 )) || (LOCATE_CHAR_IN_CAR_3D( sub_3607(), -642.22560000, 1216.50100000, 5.91360000, 25.00000000, 13.00000000, 2.00000000, 0 )))))
            {
                iVar2 = 1;
            }
        }
    }
    if (iVar2 == 1)
    {
        if (DOES_BLIP_EXIST( l_U1849 ))
        {
            REMOVE_BLIP( l_U1849 );
        }
        sub_41276();
        if (DOES_BLIP_EXIST( l_U1450 ))
        {
            REMOVE_BLIP( l_U1450 );
        }
        l_U362 = 1;
    }
    if (NOT (DOES_OBJECT_EXIST( l_U1423[0] )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3607(), l_U1580._fU0, l_U1580._fU4, l_U1580._fU8, 100.00000000, 100.00000000, 100.00000000, 0 ))
        {
            sub_60198( 0 );
        }
    }
    return;
}

void sub_58788()
{
    if (IS_VEH_DRIVEABLE( l_U1402 ))
    {
        if (NOT l_U1494)
        {
            if (NOT (IS_CHAR_SITTING_IN_CAR( sub_3607(), l_U1402 )))
            {
                if (DOES_BLIP_EXIST( l_U1450 ))
                {
                    REMOVE_BLIP( l_U1450 );
                }
                if (DOES_BLIP_EXIST( l_U1849 ))
                {
                    REMOVE_BLIP( l_U1849 );
                }
                if (NOT (DOES_BLIP_EXIST( l_U1449 )))
                {
                    ADD_BLIP_FOR_CAR( l_U1402, ref l_U1449 );
                    SET_BLIP_AS_FRIENDLY( l_U1449, 1 );
                    if (NOT l_U1495)
                    {
                        PRINT_NOW( "B4_GETONBIKEB", 7500, 1 );
                        l_U1495 = 1;
                    }
                    else
                    {
                        CLEAR_PRINTS();
                    }
                }
                l_U1494 = 1;
            }
        }
        else if (IS_CHAR_SITTING_IN_CAR( sub_3607(), l_U1402 ))
        {
            if (DOES_BLIP_EXIST( l_U1449 ))
            {
                REMOVE_BLIP( l_U1449 );
            }
            if (l_U1834)
            {
                ADD_BLIP_FOR_COORD( l_U1846._fU0, l_U1846._fU4, l_U1846._fU8, ref l_U1849 );
                SET_ROUTE( l_U1849, 1 );
            }
            if (NOT l_U1537)
            {
                PRINT_NOW( "B4_GOCLUBHOUSEb", 7500, 1 );
                l_U1537 = 1;
                l_U1550 = 1;
            }
            else
            {
                CLEAR_THIS_PRINT( "B4_GETONBIKEB" );
            }
            if (NOT (IS_CHAR_INJURED( l_U1241[0]._fU0 )))
            {
                ADD_BLIP_FOR_CHAR( l_U1241[0]._fU0, ref l_U1450 );
                SET_BLIP_AS_FRIENDLY( l_U1450, 1 );
                if (l_U1834)
                {
                    CHANGE_BLIP_SCALE( l_U1450, 0.50000000 );
                    CHANGE_BLIP_DISPLAY( l_U1450, 2 );
                }
            }
            l_U1494 = 0;
        }
    }
    return;
}

int sub_59364(unknown uParam0, boolean bParam1)
{
    unknown uVar4;
    float fVar5;
    unknown uVar6;

    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3607() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3607(), ref uVar6 );
            if (NOT (IS_CAR_DEAD( uVar6 )))
            {
                GET_CAR_MODEL( uVar6, ref uVar4 );
                if (IS_THIS_MODEL_A_BIKE( uVar4 ))
                {
                    GET_CAR_UPRIGHT_VALUE( uVar6, ref fVar5 );
                    if (fVar5 < 0.80000000)
                    {
                        return 0;
                    }
                    else
                    {
                        bParam1 = false;
                    }
                }
            }
        }
    }
    if (sub_59488( uParam0, bParam1 ))
    {
        return 1;
    }
    return 0;
}

int sub_59488(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3607() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3607(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3607() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3607(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3607()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3607() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3607() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_26182() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_26182() )))
    {
        return 0;
    }
    return 1;
}

void sub_60198(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        CREATE_OBJECT( -2135182574, -631.29000000, 1231.05000000, 6, ref l_U1422, 1 );
        SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN( l_U1422, 1 );
        CREATE_OBJECT( -2135182574, -638.70700000, 1204.80300000, 5.10900000, ref l_U1423[0], 1 );
        SET_OBJECT_HEADING( l_U1423[0], 0.00000000 );
        SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN( l_U1423[0], 1 );
        CREATE_OBJECT( 1488645394, -652.50090000, 1211.20600000, 4.90840000, ref l_U1423[1], 1 );
        SET_OBJECT_HEADING( l_U1423[1], 0.00000000 );
        SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN( l_U1423[1], 1 );
        CREATE_OBJECT( 1488645394, -640.60570000, 1208.19000000, 4.90840000, ref l_U1423[2], 1 );
        SET_OBJECT_HEADING( l_U1423[2], 90.00000000 );
        SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN( l_U1423[2], 1 );
        CREATE_OBJECT( 1488645394, -640.11870000, 1227.76000000, 4.90840000, ref l_U1423[6], 1 );
        SET_OBJECT_HEADING( l_U1423[6], 0.00000000 );
        SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN( l_U1423[6], 1 );
        CREATE_OBJECT( -237900182, -649.66210000, 1218.44600000, 4.90810000, ref l_U1423[3], 1 );
        SET_OBJECT_HEADING( l_U1423[3], 90.00000000 );
        SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN( l_U1423[3], 1 );
        CREATE_OBJECT( -237900182, -649.91240000, 1219.00200000, 4.90800000, ref l_U1423[4], 1 );
        SET_OBJECT_HEADING( l_U1423[4], 90.00000000 );
        SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN( l_U1423[4], 1 );
        CREATE_OBJECT( -237900182, -650.24680000, 1218.20800000, 4.90830000, ref l_U1423[5], 1 );
        SET_OBJECT_HEADING( l_U1423[5], 90.00000000 );
        SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN( l_U1423[5], 1 );
        CREATE_OBJECT( -1085774992, -613.70260000, 1246.72500000, 7.76520000, ref l_U1423[7], 1 );
        CREATE_OBJECT( -1085774992, -613.45890000, 1245.87300000, 7.74790000, ref l_U1423[8], 1 );
        CREATE_OBJECT( -1085774992, -613.66910000, 1244.79400000, 7.75740000, ref l_U1423[9], 1 );
        CREATE_OBJECT( -1085774992, -613.74030000, 1243.92100000, 7.77750000, ref l_U1423[10], 1 );
        CREATE_OBJECT( -1085774992, -614.54250000, 1243.33200000, 7.77850000, ref l_U1423[11], 1 );
        CREATE_OBJECT( -1085774992, -629.21300000, 1174.23400000, 8.95400000, ref l_U1423[12], 1 );
        CREATE_OBJECT( -1085774992, -629.17900000, 1172.90100000, 8.95970000, ref l_U1423[13], 1 );
        CREATE_OBJECT( -1085774992, -629.34090000, 1171.63600000, 8.94900000, ref l_U1423[14], 1 );
        CREATE_OBJECT( -1085774992, -636.59690000, 1169.32300000, 8.94810000, ref l_U1423[15], 1 );
        CREATE_OBJECT( -1085774992, -629.74400000, 1170.23200000, 8.95240000, ref l_U1423[16], 1 );
        CREATE_OBJECT( -1085774992, -628.60500000, 1169.54700000, 8.94640000, ref l_U1423[17], 1 );
        CREATE_OBJECT( -1085774992, -628.38170000, 1178.85100000, 8.98000000, ref l_U1423[18], 1 );
        break;
        case 1:
        CREATE_CAR( -1745203402, -602.49820000, 1217.07200000, 7.83730000, ref l_U1406[0], 1 );
        CREATE_CAR( -1745203402, -647.90810000, 1207.09700000, 4.90810000, ref l_U1406[1], 1 );
        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U1406[1], 1 );
        CREATE_CAR( -1745203402, -627.90310000, 1233.64800000, 5.71600000, ref l_U1406[2], 1 );
        CREATE_CAR( 2006142190, -649.31090000, 1204.10900000, 5.40080000, ref l_U1406[3], 1 );
        CREATE_CAR( 2006142190, -643.13090000, 1203.56800000, 5.39770000, ref l_U1406[4], 1 );
        CREATE_CAR( 2006142190, -651.93350000, 1204.27000000, 4.90820000, ref l_U1406[5], 1 );
        SET_CAR_HEADING( l_U1406[0], 89.89440000 );
        SET_CAR_HEADING( l_U1406[1], 40.77880000 );
        SET_CAR_HEADING( l_U1406[2], -112.53450000 );
        SET_CAR_HEADING( l_U1406[3], 16.04790000 );
        SET_CAR_HEADING( l_U1406[4], 209.72220000 );
        SET_CAR_HEADING( l_U1406[5], 359.74300000 );
        LOCK_CAR_DOORS( l_U1406[0], 2 );
        LOCK_CAR_DOORS( l_U1406[2], 2 );
        for ( l_U1721 = 0; l_U1721 < l_U1406; l_U1721++ )
        {
            SET_CAR_ON_GROUND_PROPERLY( l_U1406[l_U1721] );
            if (l_U1721 <= 2)
            {
                CHANGE_CAR_COLOUR( l_U1406[l_U1721], 0, 0 );
                SET_EXTRA_CAR_COLOURS( l_U1406[l_U1721], 0, 0 );
            }
            else
            {
                CHANGE_CAR_COLOUR( l_U1406[l_U1721], 132, 0 );
                SET_EXTRA_CAR_COLOURS( l_U1406[l_U1721], 131, 0 );
            }
        }
        break;
    }
    return;
}

void sub_61791()
{
    switch (l_U1879)
    {
        case 0:
        SET_PLAYER_CONTROL( sub_26182(), 0 );
        l_U1818 = 0;
        l_U1566 = 0;
        if ((NOT IS_SCREEN_FADING_OUT()) AND (NOT IS_SCREEN_FADED_OUT()))
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
        }
        sub_61919();
        CLEAR_WANTED_LEVEL( sub_26182() );
        if (NOT (IS_CAR_DEAD( l_U1402 )))
        {
            GET_CAR_COORDINATES( l_U1402, ref l_U1841._fU0, ref l_U1841._fU4, ref l_U1841._fU8 );
            GET_CAR_HEADING( l_U1402, ref l_U1844 );
        }
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3607() )))
        {
            SET_CHAR_COORDINATES( sub_3607(), -628.02870000, 1226.07000000, 4.90840000 );
        }
        else
        {
            WARP_CHAR_FROM_CAR_TO_COORD( sub_3607(), -628.02870000, 1226.07000000, 4.90840000 );
        }
        SET_CHAR_HEADING( sub_3607(), -183.16730000 );
        CLEAR_PRINTS();
        sub_3199( ref l_U1482, 0 );
        sub_3508( 0, ref l_U1241 );
        sub_41368( 1 );
        sub_3706();
        CLEAR_AREA( l_U1580._fU0, l_U1580._fU4, l_U1580._fU8, 50, 1 );
        EXTINGUISH_FIRE_AT_POINT( l_U1580._fU0, l_U1580._fU4, l_U1580._fU8, 300 );
        sub_62269( 0, 0 );
        REQUEST_MODEL( -408052231 );
        while (NOT (HAS_MODEL_LOADED( -408052231 )))
        {
            WAIT( 0 );
        }
        CREATE_CAR( -408052231, -638.47700000, 1231.70300000, 4.90860000, ref l_U1880, 1 );
        SET_CAR_ON_GROUND_PROPERLY( l_U1880 );
        SET_CAR_ENGINE_ON( l_U1880, 1, 1 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -408052231 );
        LOAD_ADDITIONAL_TEXT( "E1B4AUD", 6 );
        START_CUTSCENE_NOW( "BG04_CA" );
        l_U1879 = 1;
        break;
        case 1:
        if (DOES_CHAR_EXIST( l_U1241[0]._fU0 ))
        {
            ;
        }
        if (HAS_CUTSCENE_LOADED())
        {
            while (NOT HAS_CUTSCENE_FINISHED())
            {
                WAIT( 0 );
            }
            CLEAR_NAMED_CUTSCENE( "BG04_CA" );
            l_U1840 = 1;
            l_U1831 = 0;
            l_U1879 = 2;
        }
        break;
        case 2:
        if (DOES_CHAR_EXIST( l_U1241[4]._fU0 ))
        {
            if (DOES_VEHICLE_EXIST( l_U1880 ))
            {
                DELETE_CAR( ref l_U1880 );
            }
            REQUEST_MODEL( l_U1240 );
            REQUEST_MODEL( 2006142190 );
            REQUEST_MODEL( -1745203402 );
            REQUEST_CAR_RECORDING( 463 );
            REQUEST_CAR_RECORDING( 464 );
            REQUEST_ANIMS( "MISSBILLY_4" );
            while ((((((NOT (HAS_MODEL_LOADED( l_U1240 ))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 463 )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 464 )))) || (NOT (HAS_MODEL_LOADED( 2006142190 )))) || (NOT (HAS_MODEL_LOADED( -1745203402 )))) || (NOT (HAVE_ANIMS_LOADED( "MISSBILLY_4" ))))
            {
                WAIT( 0 );
            }
            sub_60198( 1 );
            if (NOT (DOES_OBJECT_EXIST( l_U1423[0] )))
            {
                sub_60198( 0 );
            }
            for ( l_U1721 = 0; l_U1721 < l_U1241; l_U1721++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U1241[l_U1721]._fU0 )))
                {
                    switch (l_U1721)
                    {
                        case 0:
                        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U1241[l_U1721]._fU0, -634.24480000, 1221.94400000, 4.90860000, 2.00000000 );
                        break;
                        case 2:
                        SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U1241[l_U1721]._fU0, -626.52300000, 1220.19600000, 7.41340000, -626.52300000, 1222.39600000, 4.41340000, 3.00000000 );
                        break;
                        case 3:
                        SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U1241[l_U1721]._fU0, -640.18040000, 1226.38100000, 6.97220000, -640.18040000, 1229.38100000, 3.97220000, 3.00000000 );
                        break;
                        case 1:
                        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U1241[l_U1721]._fU0, -634.79330000, 1222.61900000, 4.90840000, 2.00000000 );
                        break;
                        case 4:
                        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U1241[l_U1721]._fU0, 64915, 1220, 5, 6 );
                        break;
                    }
                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U1241[l_U1721]._fU0, 0 );
                }
            }
            if (DOES_OBJECT_EXIST( l_U1423[3] ))
            {
                SET_OBJECT_COORDINATES( l_U1423[3], -649.66210000, 1218.44600000, 4.90810000 );
                SET_OBJECT_HEADING( l_U1423[3], 90.00000000 );
            }
            if (DOES_OBJECT_EXIST( l_U1423[4] ))
            {
                SET_OBJECT_COORDINATES( l_U1423[4], -649.91240000, 1219.00200000, 4.90800000 );
                SET_OBJECT_HEADING( l_U1423[4], 90.00000000 );
            }
            if (DOES_OBJECT_EXIST( l_U1423[5] ))
            {
                SET_OBJECT_COORDINATES( l_U1423[5], -650.24680000, 1218.20800000, 4.90830000 );
                SET_OBJECT_HEADING( l_U1423[5], 90.00000000 );
            }
            l_U1882 = 15;
            if (NOT (HAS_CHAR_GOT_WEAPON( sub_3607(), 21 )))
            {
                GIVE_WEAPON_TO_CHAR( sub_3607(), 21, l_U1882, 0 );
            }
            else
            {
                GET_AMMO_IN_CHAR_WEAPON( sub_3607(), 21, ref l_U1881 );
                if (l_U1881 < l_U1882)
                {
                    GIVE_WEAPON_TO_CHAR( sub_3607(), 21, l_U1882 - l_U1881, 0 );
                }
            }
            REMOVE_PLAYER_HELMET( sub_26182(), 1 );
            ADD_BLIP_FOR_COORD( l_U1596._fU0, l_U1596._fU4, l_U1596._fU8, ref l_U1452 );
            CLEAR_PRINTS();
            SETTIMERB( 0 );
            SET_PLAYER_CONTROL( sub_26182(), 1 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            DO_SCREEN_FADE_IN( 500 );
            ALLOW_EMERGENCY_SERVICES( 0 );
            g_U39149[2] = 1;
            l_U1819 = 1;
            l_U1818 = 1;
            l_U362 = 2;
        }
        break;
    }
    return;
}

void sub_61919()
{
    int I;
    unknown uVar3;

    for ( I = 0; I < 5; I++ )
    {
        uVar3 = sub_18689( I );
        if (HAVE_ANIMS_LOADED( uVar3 ))
        {
            REMOVE_ANIMS( uVar3 );
        }
    }
    return;
}

void sub_62269(unknown uParam0, boolean bParam1)
{
    int I;

    switch (uParam0)
    {
        case 0:
        if (DOES_VEHICLE_EXIST( l_U1402 ))
        {
            DELETE_CAR( ref l_U1402 );
        }
        if (bParam1)
        {
            for ( l_U1721 = 0; l_U1721 < l_U1241; l_U1721++ )
            {
                sub_62372( ref l_U1241[l_U1721], 1 );
            }
            sub_4228( 0 );
            sub_4228( 1 );
            sub_4228( 13 );
            sub_4228( 6 );
            sub_4228( 7 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( sub_4251( 0 ) );
            MARK_MODEL_AS_NO_LONGER_NEEDED( sub_4251( 1 ) );
            MARK_MODEL_AS_NO_LONGER_NEEDED( sub_4251( 13 ) );
            MARK_MODEL_AS_NO_LONGER_NEEDED( sub_4251( 6 ) );
            MARK_MODEL_AS_NO_LONGER_NEEDED( sub_4251( 7 ) );
            MARK_MODEL_AS_NO_LONGER_NEEDED( sub_10332( 6 ) );
            MARK_MODEL_AS_NO_LONGER_NEEDED( sub_10332( 7 ) );
            MARK_MODEL_AS_NO_LONGER_NEEDED( sub_10332( 13 ) );
        }
        else
        {
            for ( I = 0; I < l_U1241; I++ )
            {
                if (NOT (IS_CHAR_DEAD( l_U1241[I]._fU0 )))
                {
                    if (IS_CHAR_IN_ANY_CAR( l_U1241[I]._fU0 ))
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( l_U1241[I]._fU0, l_U1702[I]._fU0, l_U1702[I]._fU4, l_U1702[I]._fU8 );
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( l_U1241[I]._fU0, l_U1702[I]._fU0, l_U1702[I]._fU4, l_U1702[I]._fU8 );
                    }
                    if ((I == 0) || (I == 1))
                    {
                        if (DOES_VEHICLE_EXIST( l_U1241[I]._fU4 ))
                        {
                            DELETE_CAR( ref l_U1241[I]._fU4 );
                        }
                    }
                }
            }
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_8575() );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_10332( 0 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_10332( 1 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1240 );
        break;
        case 1:
        for ( l_U1721 = 0; l_U1721 < l_U1241; l_U1721++ )
        {
            sub_62372( ref l_U1241[l_U1721], 1 );
        }
        if (DOES_VEHICLE_EXIST( l_U1402 ))
        {
            DELETE_CAR( ref l_U1402 );
        }
        sub_4228( 0 );
        sub_4228( 1 );
        sub_4228( 13 );
        sub_4228( 6 );
        sub_4228( 7 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_4251( 0 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_4251( 1 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_4251( 13 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_4251( 6 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_4251( 7 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_8575() );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_10332( 0 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_10332( 1 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_10332( 6 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_10332( 7 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_10332( 13 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1240 );
        break;
    }
    return;
}

void sub_62372(int iParam0, boolean bParam1)
{
    int iVar4;

    if (DOES_BLIP_EXIST( iParam0->_fU100 ))
    {
        REMOVE_BLIP( iParam0->_fU100 );
    }
    if ((DOES_CHAR_EXIST( iParam0->_fU0 )) AND (iParam0->_fU0 != sub_3607()))
    {
        DELETE_CHAR( iParam0 + 0 );
    }
    if (DOES_VEHICLE_EXIST( iParam0->_fU4 ))
    {
        if (bParam1)
        {
            iVar4 = nil;
            if (IS_CHAR_IN_ANY_CAR( sub_3607() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3607(), ref iVar4 );
            }
            if (iVar4 == iParam0->_fU4)
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( iParam0 + 4 );
            }
            else
            {
                DELETE_CAR( iParam0 + 4 );
            }
        }
        else
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( iParam0 + 4 );
        }
    }
    iParam0->_fU0 = nil;
    iParam0->_fU4 = nil;
    iParam0->_fU8 = nil;
    iParam0->_fU12 = nil;
    iParam0->_fU36 = 4;
    return;
}

void sub_64734()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    sub_64743();
    sub_64971();
    if (NOT l_U1531)
    {
        GET_AMMO_IN_CHAR_WEAPON( sub_3607(), 21, ref iVar2 );
        GET_AMMO_IN_CHAR_WEAPON( sub_3607(), 4, ref iVar3 );
        GET_AMMO_IN_CHAR_WEAPON( sub_3607(), 5, ref iVar4 );
        GET_AMMO_IN_CHAR_WEAPON( sub_3607(), 28, ref iVar5 );
        GET_AMMO_IN_CHAR_WEAPON( sub_3607(), 18, ref iVar6 );
        if (((((iVar2 == 0) AND (iVar3 == 0)) AND (iVar4 == 0)) AND (iVar5 == 0)) AND (iVar6 == 0))
        {
            if (l_U1788 >= 7.00000000)
            {
                l_U367 = 9;
                l_U362 = 9;
            }
            else
            {
                l_U1788 += 1.00000000 * TIMESTEP();
            }
        }
        LOCATE_CHAR_ANY_MEANS_3D( sub_3607(), l_U1596._fU0, l_U1596._fU4, l_U1596._fU8, 2, 2, 2, 1 );
        if (NOT l_U1552)
        {
            if (IS_SCREEN_FADED_IN())
            {
                sub_21746( "E1B4_ARR2", ref l_U1482, 7, 1 );
                l_U1552 = 1;
            }
        }
        else if (NOT l_U1553)
        {
            if (NOT (sub_23529( l_U1482 )))
            {
                l_U1785 = 50;
                SETTIMERB( 0 );
                l_U1553 = 1;
            }
        }
        if (((l_U1785 >= 22.00000000) AND (NOT IS_MESSAGE_BEING_DISPLAYED())) AND (NOT l_U1530))
        {
            PRINT_NOW( "B4_BOMBARD", 7500, 1 );
            l_U1785 = 0.00000000;
        }
        else
        {
            l_U1785 += 1.00000000 * TIMESTEP();
        }
        if (l_U1935)
        {
            if (NOT l_U1884)
            {
                GET_GAME_TIMER( ref l_U1883 );
                l_U1884 = 1;
            }
            else if (NOT (IS_CHAR_DEAD( l_U1241[0]._fU0 )))
            {
                if (NOT sub_21554())
                {
                    if (sub_44034( l_U1883, 10000 ))
                    {
                        SAY_AMBIENT_SPEECH( l_U1241[0]._fU0, "GET_A_MOVE_ON", 1, 1, 2 );
                        l_U1884 = 0;
                    }
                }
            }
        }
        if ((l_U1553) AND (NOT l_U1540))
        {
            if (TIMERB() >= 2000)
            {
                PRINT_HELP( "B4_GHELP" );
                l_U1540 = 1;
            }
        }
        if (NOT (IS_CHAR_IN_AREA_3D( sub_3607(), -632.42000000, 1202.76000000, 9.26000000, -618.30000000, 1206.76000000, 13.23000000, 0 )))
        {
            if (l_U1530)
            {
                l_U1530 = 0;
            }
            if (NOT l_U1934)
            {
                if (IS_PROJECTILE_IN_AREA( -624.01810000, 1206.19000000, 9.91240000, -621.21510000, 1207.54900000, 12.42180000 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U1241[2]._fU0 )))
                    {
                        SAY_AMBIENT_SPEECH( l_U1241[2]._fU0, "EXPLOSION_IS_IMMINENT", 1, 1, 2 );
                        l_U1934 = 1;
                        l_U1935 = 0;
                    }
                }
            }
            if ((IS_EXPLOSION_IN_AREA( -1, -632.50000000, 1190.85000000, 8.66000000, -620.59000000, 1207.41000000, 12.83000000 )) || ((sub_66170()) AND (IS_EXPLOSION_IN_AREA( -1, -730.08540000, 1165.37600000, -100.00000000, -540.62020000, 1298.56400000, 100.00000000 ))))
            {
                if (DOES_BLIP_EXIST( l_U1452 ))
                {
                    REMOVE_BLIP( l_U1452 );
                }
                GET_GAME_TIMER( ref l_U1912 );
                CLEAR_THIS_PRINT( "B4_NOTINHOUSE" );
                CLEAR_THIS_PRINT( "B4_BOMBARD" );
                sub_66384();
                l_U1538 = 1;
                l_U1532 = 1;
                l_U1531 = 1;
                SETTIMERA( 0 );
            }
            else
            {
                sub_66651();
                if (NOT (IS_CHAR_DEAD( l_U1241[1]._fU0 )))
                {
                    if (IS_EXPLOSION_IN_AREA( -1, -730.08540000, 1165.37600000, -100.00000000, -540.62020000, 1298.56400000, 100.00000000 ))
                    {
                        if ((sub_44034( l_U1937, 10000 )) || (l_U1933))
                        {
                            SAY_AMBIENT_SPEECH( l_U1241[1]._fU0, "POOL_PLAYER_MISS", 1, 1, 2 );
                            GET_GAME_TIMER( ref l_U1937 );
                            l_U1933 = 0;
                        }
                    }
                }
            }
        }
        else if (NOT l_U1530)
        {
            PRINT_NOW( "B4_NOTINHOUSE", 7500, 1 );
            l_U1530 = 1;
        }
    }
    else
    {
        l_U1783 += 1.00000000 * TIMESTEP();
    }
    if (NOT l_U1532)
    {
        if ((IS_CHAR_SHOOTING_IN_AREA( sub_3607(), 64857, 1190, 64930, 1249, 0 )) || (l_U1531))
        {
            ;
        }
    }
    if (l_U1539)
    {
        if (NOT l_U1554)
        {
            if (l_U1532)
            {
                if (TIMERA() >= 7000)
                {
                    if ((l_U1531) AND (sub_50617()))
                    {
                        if (NOT l_U1548)
                        {
                            sub_21746( "E1B4_GREET", ref l_U1482, 7, 1 );
                            l_U1548 = 1;
                        }
                    }
                    l_U1554 = 1;
                }
            }
        }
    }
    if (l_U1492)
    {
        if ((l_U1554) AND (l_U1784 < 11.00000000))
        {
            if (sub_50617())
            {
                if (l_U1786 >= l_U1789)
                {
                    switch (l_U1936)
                    {
                        case 0:
                        sub_21746( "E1B4_TAUNT", ref l_U1482, 6, 1 );
                        break;
                        case 1:
                        sub_21746( "E1B4_TAUNT2", ref l_U1482, 6, 1 );
                        break;
                        case 2:
                        sub_21746( "E1B4_USEGT", ref l_U1482, 6, 1 );
                        break;
                    }
                    l_U1936++;
                    if (l_U1936 > 2)
                    {
                        l_U1936 = 0;
                    }
                    l_U1786 = 0.00000000;
                    GENERATE_RANDOM_FLOAT_IN_RANGE( 4.00000000, 7.00000000, ref l_U1789 );
                    l_U1491 = 1;
                    l_U1492 = 0;
                }
                else
                {
                    l_U1786 += 1.00000000 * TIMESTEP();
                }
            }
        }
    }
    else if (l_U1488)
    {
        if (sub_50617())
        {
            sub_21746( "E1B4_MORE", ref l_U1482, 6, 1 );
            l_U1488 = 0;
            l_U1491 = 1;
        }
    }
    else if (l_U1489)
    {
        if (sub_50617())
        {
            if (NOT (IS_CAR_DEAD( l_U1414[0] )))
            {
                sub_21746( "E1B4_VANS", ref l_U1482, 6, 1 );
            }
            l_U1489 = 0;
            l_U1491 = 1;
        }
    }
    else if (l_U1490)
    {
        if (sub_50617())
        {
            if (NOT (IS_CAR_DEAD( l_U1414[1] )))
            {
                sub_21746( "E1B4_BIKES", ref l_U1482, 6, 1 );
            }
            l_U1490 = 0;
            l_U1491 = 1;
        }
    };;;;
    iVar7 = 0;
    for ( l_U1721 = 0; l_U1721 < l_U1372; l_U1721++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U1372[l_U1721] )))
        {
            iVar7++;
        }
    }
    for ( l_U1721 = 0; l_U1721 < l_U1392; l_U1721++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U1392[l_U1721] )))
        {
            iVar7++;
        }
    }
    if (NOT l_U1533)
    {
        if (l_U1932)
        {
            sub_68431();
            sub_69466();
            l_U1533 = 1;
        }
    }
    else
    {
        l_U1784 += 1.00000000 * TIMESTEP();
        if (l_U1932)
        {
            sub_69633();
            for ( l_U1721 = 0; l_U1721 < l_U1241; l_U1721++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U1241[l_U1721]._fU0 )))
                {
                    if (l_U1721 == 0)
                    {
                        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U1241[l_U1721]._fU0, 0 );
                        UNLOCK_RAGDOLL( l_U1241[l_U1721]._fU0, 0 );
                    }
                    else
                    {
                        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U1241[l_U1721]._fU0, 1 );
                    }
                    if (DOES_BLIP_EXIST( l_U1463[l_U1721] ))
                    {
                        REMOVE_BLIP( l_U1463[l_U1721] );
                    }
                }
            }
            l_U362 = 3;
        }
    }
    return;
}

void sub_64743()
{
    if (l_U1496)
    {
        if ((NOT (IS_CHAR_IN_AREA_2D( sub_3607(), 64854, 1179, 64976, 1249, 0 ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3607(), -627.32890000, 1211.82600000, 5.92300000, 22.00000000, 33.00000000, 12.00000000, 0 ))))
        {
            SET_WANTED_MULTIPLIER( 0.10000000 );
            l_U1496 = 0;
        }
    }
    else if ((IS_CHAR_IN_AREA_2D( sub_3607(), 64854, 1179, 64976, 1249, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3607(), -627.32890000, 1211.82600000, 5.92300000, 22.00000000, 33.00000000, 12.00000000, 0 )))
    {
        SET_WANTED_MULTIPLIER( 0.00000000 );
        l_U1496 = 1;
    }
    return;
}

void sub_64971()
{
    for ( l_U1721 = 0; l_U1721 < l_U1522; l_U1721++ )
    {
        if (NOT l_U1522[l_U1721])
        {
            if (NOT (IS_CHAR_INJURED( l_U1392[l_U1721] )))
            {
                if (l_U1721 <= 1)
                {
                    GET_SCRIPT_TASK_STATUS( l_U1392[l_U1721], 29, ref l_U1796 );
                    if ((l_U1796 == 7) || (NOT (IS_CHAR_IN_ANY_CAR( l_U1392[l_U1721] ))))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1392[l_U1721], 0 );
                        l_U1522[l_U1721] = 1;
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U1392[l_U1721 - 2] )))
                {
                    if ((NOT (IS_CHAR_IN_ANY_CAR( l_U1392[l_U1721] ))) || (NOT (IS_CHAR_IN_ANY_CAR( l_U1392[l_U1721 - 2] ))))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1392[l_U1721], 0 );
                        l_U1522[l_U1721] = 1;
                    }
                }
                else
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1392[l_U1721], 0 );
                    l_U1522[l_U1721] = 1;
                }
            }
        }
    }
    return;
}

void sub_66170()
{
    if (NOT l_U1838)
    {
        if (IS_PROJECTILE_IN_AREA( -624.01810000, 1206.19000000, 9.91240000, -621.21510000, 1207.54900000, 12.42180000 ))
        {
            l_U1838 = 1;
        }
    }
    return l_U1838;
}

void sub_66384()
{
    l_U1886[1] = START_PTFX( "ACTION_WINDOW_BLAZE", -622.94000000, 1204.01000000, 10.00000000, 0.00000000, 0.00000000, 90.00000000, 1.00000000 );
    l_U1738 = GET_SOUND_ID();
    PLAY_SOUND_FROM_POSITION( -1, "BG4_ATTACK_ANGELS_CLUBHOUSE_FIRE_START", -622.17000000, 1195.51000000, 9.87000000 );
    PLAY_SOUND_FROM_POSITION( l_U1738, "BG4_ATTACK_ANGELS_CLUBHOUSE_FIRE", -622.17000000, 1195.51000000, 9.87000000 );
    l_U1529 = 1;
    return;
}

void sub_66651()
{
    int I;
    unknown uVar3;

    for ( I = 0; I < l_U1241; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U1241[I]._fU0 )))
        {
            if (NOT l_U1926[I])
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U1241[I]._fU0, l_U1702[I]._fU0, l_U1702[I]._fU4, l_U1702[I]._fU8, 2.00000000, 2.00000000, 2.00000000, 0 )))
                {
                    sub_66819( l_U1241[I]._fU0, l_U1702[I], l_U1764[I], 1 );
                    l_U1926[I] = 1;
                }
                else if (NOT (sub_67024( l_U1241[I]._fU0, l_U1764[I] - 10.00000000, l_U1764[I] + 10.00000000 )))
                {
                    sub_67113( l_U1241[I]._fU0, l_U1764[I] );
                    l_U1926[I] = 1;
                }
            }
            else if (sub_67220( l_U1241[I]._fU0, 1, 0 ))
            {
                l_U1926[I] = 0;
            }
        }
    }
    return;
}

void sub_66819(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5)
{
    unknown uVar8;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        OPEN_SEQUENCE_TASK( ref uVar8 );
        if (bParam5)
        {
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uParam1._fU0, uParam1._fU4, uParam1._fU8, 3, -2, 0.50000000 );
        }
        else
        {
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uParam1._fU0, uParam1._fU4, uParam1._fU8, 2, -2, 0.50000000 );
        }
        TASK_ACHIEVE_HEADING( 0, uParam4 );
        CLOSE_SEQUENCE_TASK( uVar8 );
        TASK_PERFORM_SEQUENCE( uParam0, uVar8 );
    }
    CLEAR_SEQUENCE_TASK( uVar8 );
    return;
}

int sub_67024(unknown uParam0, float fParam1, float fParam2)
{
    float fVar5;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_HEADING( uParam0, ref fVar5 );
        if ((fVar5 >= fParam1) AND (fVar5 <= fParam2))
        {
            return 1;
        }
    }
    return 0;
}

void sub_67113(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        OPEN_SEQUENCE_TASK( ref uVar4 );
        TASK_ACHIEVE_HEADING( 0, uParam1 );
        CLOSE_SEQUENCE_TASK( uVar4 );
        TASK_PERFORM_SEQUENCE( uParam0, uVar4 );
    }
    CLEAR_SEQUENCE_TASK( uVar4 );
    return;
}

int sub_67220(unknown uParam0, boolean bParam1, int iParam2)
{
    int iVar5;
    int iVar6;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_SCRIPT_TASK_STATUS( uParam0, 29, ref iVar5 );
        if (bParam1)
        {
            if (iVar5 == 7)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else if (iVar5 == 1)
        {
            GET_SEQUENCE_PROGRESS( uParam0, ref iVar6 );
            if (iVar6 > iParam2)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_68431()
{
    for ( l_U1721 = 0; l_U1721 < l_U1382; l_U1721++ )
    {
        CREATE_CHAR( 26, l_U1240, l_U1664[l_U1721]._fU0, l_U1664[l_U1721]._fU4, l_U1664[l_U1721]._fU8, ref l_U1382[l_U1721], 1 );
        SET_CHAR_HEADING( l_U1382[l_U1721], l_U1750[l_U1721] );
        switch (l_U1721)
        {
            case 0:
            case 1:
            case 2:
            SET_ROOM_FOR_CHAR_BY_NAME( l_U1382[l_U1721], "E1_AODClubroom" );
            break;
            case 3:
            case 4:
            case 8:
            SET_ROOM_FOR_CHAR_BY_NAME( l_U1382[l_U1721], "E1_AODBasement" );
            break;
            case 5:
            case 6:
            case 7:
            SET_ROOM_FOR_CHAR_BY_NAME( l_U1382[l_U1721], "E1_AODRearStair" );
            break;
        }
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U1382[l_U1721] );
        SET_CHAR_RELATIONSHIP_GROUP( l_U1382[l_U1721], 23 );
        SET_CHAR_DECISION_MAKER( l_U1382[l_U1721], l_U1473 );
        if ((l_U1721 == 7) || (l_U1721 == 4))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1382[l_U1721], 1 );
        }
        if (NOT (l_U1721 == 2))
        {
            SET_COMBAT_DECISION_MAKER( l_U1382[l_U1721], l_U1477 );
        }
        else if ((l_U1721 == 5) || (l_U1721 == 6))
        {
            SET_COMBAT_DECISION_MAKER( l_U1382[l_U1721], l_U1476 );
        }
        else
        {
            SET_COMBAT_DECISION_MAKER( l_U1382[l_U1721], l_U1478 );
        }
        if ((((l_U1721 == 0) || (l_U1721 == 5)) || (l_U1721 == 6)) || (l_U1721 == 3))
        {
            GIVE_WEAPON_TO_CHAR( l_U1382[l_U1721], 26, 30000, 1 );
        }
        else
        {
            GIVE_WEAPON_TO_CHAR( l_U1382[l_U1721], 7, 30000, 1 );
        }
        if (((l_U1721 < 8) AND (l_U1721 > 1)) AND (l_U1721 != 5))
        {
            SET_CHAR_HEALTH( l_U1382[l_U1721], 215 );
        }
        if (l_U1721 == 3)
        {
            SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U1382[l_U1721], -623.18270000, 1181.49500000, 4.59710000, -621.18270000, 1181.49500000, 1.59710000, 2.00000000 );
        }
        else if (l_U1721 == 4)
        {
            SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U1382[l_U1721], -620.90160000, 1184.77200000, 4.59550000, -620.90160000, 1182.77200000, 1.59550000, 1.00000000 );
        }
        else if (l_U1721 == 8)
        {
            SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U1382[l_U1721], -628.83340000, 1187.39200000, 4.60370000, -628.83340000, 1185.39200000, 1.60370000, 2.00000000 );
        }
        else
        {
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U1382[l_U1721], l_U1664[l_U1721], 2.30000000 );
        };;;
        SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U1382[l_U1721], 0 );
        SET_CHAR_KEEP_TASK( l_U1382[l_U1721], 1 );
        SET_PED_DIES_WHEN_INJURED( l_U1382[l_U1721], 1 );
    }
    return;
}

void sub_69466()
{
    REQUEST_MODEL( -1001038881 );
    while (NOT (HAS_MODEL_LOADED( -1001038881 )))
    {
        WAIT( 0 );
    }
    CREATE_OBJECT( -1001038881, -622.48800000, 1184.91700000, 2.12410000, ref l_U1420, 1 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1420, "E1_AODBasement" );
    return;
}

void sub_69633()
{
    for ( l_U1721 = 0; l_U1721 < l_U1372; l_U1721++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U1372[l_U1721] )))
        {
            GET_CHAR_COORDINATES( l_U1372[l_U1721], ref l_U1791, ref l_U1792, ref l_U1793 );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U1372[l_U1721], l_U1791, l_U1792, l_U1793, 8.00000000 );
        }
    }
    for ( l_U1721 = 0; l_U1721 < l_U1392; l_U1721++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U1392[l_U1721] )))
        {
            SET_COMBAT_DECISION_MAKER( l_U1392[l_U1721], l_U1475 );
            if ((l_U1721 == 0) || (l_U1721 == 2))
            {
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U1392[l_U1721], 64891, 1233, 6, 8.00000000 );
            }
            else
            {
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U1392[l_U1721], 64918, 1216, 6, 8.00000000 );
            }
        }
    }
    return;
}

void sub_70176()
{
    int iVar2;
    unknown uVar3;
    int iVar4;

    sub_64743();
    sub_64971();
    if (sub_50617())
    {
        if (NOT l_U1555)
        {
            sub_21746( "E1B4_IN", ref l_U1482, 7, 1 );
            l_U1555 = 1;
        }
        else if (NOT l_U1556)
        {
            ADD_BLIP_FOR_CHAR( l_U1241[0]._fU0, ref l_U1450 );
            SET_BLIP_AS_FRIENDLY( l_U1450, 1 );
            CHANGE_BLIP_SCALE( l_U1450, 0.50000000 );
            CHANGE_BLIP_PRIORITY( l_U1450, 2 );
            for ( l_U1721 = 0; l_U1721 < l_U1382; l_U1721++ )
            {
                if (((((l_U1721 == 0) || (l_U1721 == 1)) || (l_U1721 == 2)) || (l_U1721 == 6)) || (l_U1721 == 7))
                {
                    if (NOT (IS_CHAR_INJURED( l_U1382[l_U1721] )))
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U1453[l_U1721] )))
                        {
                            ADD_BLIP_FOR_CHAR( l_U1382[l_U1721], ref l_U1453[l_U1721] );
                            CHANGE_BLIP_PRIORITY( l_U1453[l_U1721], 1 );
                        }
                    }
                }
            }
            PRINT_NOW( "B4_FOLLOW", 7500, 1 );
            l_U1556 = 1;
        }
    }
    if (NOT l_U1534)
    {
        iVar4 = 0;
        for ( l_U1721 = 0; l_U1721 < l_U1372; l_U1721++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U1372[l_U1721] )))
            {
                iVar4++;
            }
        }
        for ( l_U1721 = 0; l_U1721 < l_U1392; l_U1721++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U1392[l_U1721] )))
            {
                iVar4++;
            }
        }
        if (iVar4 == 0)
        {
            sub_70699();
        }
    }
    if (NOT l_U1535)
    {
        if (NOT (IS_CHAR_INJURED( l_U1382[7] )))
        {
            if ((IS_CHAR_INJURED( l_U1382[6] )) || (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3607(), l_U1382[7], 6, 6, 6, 0 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1382[7], 0 );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U1382[7], -625.82000000, 1192.20000000, 6.11000000, 2.00000000 );
            }
        }
    }
    if (NOT l_U1957)
    {
        if (NOT (IS_CHAR_INJURED( l_U1382[4] )))
        {
            if (sub_71332())
            {
                if (sub_71446( -618.52840000, 1183.44800000, 2.08750000, 1.50000000 ))
                {
                    if (sub_71522( sub_3607(), l_U1382[4] ))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1382[4], 0 );
                        OPEN_SEQUENCE_TASK( ref uVar3 );
                        TASK_GO_TO_COORD_WHILE_AIMING( 0, -620.89360000, 1184.43500000, 2.09050000, 2, 0.50000000, 0.50000000, sub_3607(), 0.00000000, 0.00000000, 0.00000000, 0 );
                        TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( 0, 35.00000000 );
                        CLOSE_SEQUENCE_TASK( uVar3 );
                        TASK_PERFORM_SEQUENCE( l_U1382[4], uVar3 );
                        CLEAR_SEQUENCE_TASK( uVar3 );
                        l_U1957 = 1;
                    }
                }
            }
        }
    }
    for ( l_U1721 = 0; l_U1721 < l_U1382; l_U1721++ )
    {
        if (IS_CHAR_INJURED( l_U1382[l_U1721] ))
        {
            if (DOES_BLIP_EXIST( l_U1453[l_U1721] ))
            {
                REMOVE_BLIP( l_U1453[l_U1721] );
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U1241[0]._fU0 )))
    {
        sub_71872();
        if (((l_U1497) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3607(), l_U1241[0]._fU0, 10, 10, 3, 0 ))) AND (sub_59488( 1, 1 )))
        {
            EXTINGUISH_CHAR_FIRE( l_U1241[0]._fU0 );
            SET_CHAR_PROOFS( l_U1241[0]._fU0, 1, 1, 1, 1, 1 );
            GET_CHAR_HEALTH( l_U1241[0]._fU0, ref iVar2 );
            if (iVar2 < 200)
            {
                SET_CHAR_HEALTH( l_U1241[0]._fU0, 200 );
            }
            if (DOES_BLIP_EXIST( l_U1450 ))
            {
                REMOVE_BLIP( l_U1450 );
            }
            l_U362 = 4;
        }
        else if (NOT l_U1958)
        {
            if (sub_76207())
            {
                GET_GAME_TIMER( ref l_U1956 );
                l_U1958 = 1;
            }
        }
        else if (sub_44034( l_U1956, 60000 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U1241[0]._fU0 )))
            {
                SET_CHAR_COORDINATES( l_U1241[0]._fU0, -623.88680000, 1183.91900000, 2.13100000 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U1241[0]._fU0, "E1_AODBasement" );
                l_U1497 = 1;
            }
        };;;
    }
    return;
}

void sub_70699()
{
    for ( l_U1721 = 0; l_U1721 < l_U1241; l_U1721++ )
    {
        if ((NOT (l_U1721 == 0)) AND (NOT (IS_CHAR_INJURED( l_U1241[l_U1721]._fU0 ))))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1241[l_U1721]._fU0, 1 );
            CLEAR_SEQUENCE_TASK( l_U1795 );
            OPEN_SEQUENCE_TASK( ref l_U1795 );
            switch (l_U1721)
            {
                case 1:
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -632.74140000, 1220.74100000, 4.90840000, 3, -2, 3.00000000 );
                TASK_PUT_CHAR_DIRECTLY_INTO_COVER( 0, -632.74140000, 1220.74100000, 4.90840000, -2 );
                break;
                case 2:
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -628.05060000, 1220.79200000, 4.90840000, 3, -2, 3.00000000 );
                TASK_PUT_CHAR_DIRECTLY_INTO_COVER( 0, -628.05060000, 1220.79200000, 4.90840000, -2 );
                break;
                case 3:
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -640.21560000, 1228.85000000, 4.90840000, 3, -2, 3.00000000 );
                TASK_PUT_CHAR_DIRECTLY_INTO_COVER( 0, -640.21560000, 1228.85000000, 4.90840000, -2 );
                break;
                case 4:
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -623.41280000, 1221.31500000, 5.02150000, 3, -2, 3.00000000 );
                TASK_PUT_CHAR_DIRECTLY_INTO_COVER( 0, -623.41280000, 1221.31500000, 5.02150000, -2 );
                break;
            }
            CLOSE_SEQUENCE_TASK( l_U1795 );
            TASK_PERFORM_SEQUENCE( l_U1241[l_U1721]._fU0, l_U1795 );
        }
    }
    l_U1534 = 1;
    return;
}

void sub_71332()
{
    if (NOT l_U1845)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3607(), -630.68900000, 1183.60300000, 3.64130000, 1.50000000, 4.00000000, 2.00000000, 0 ))
        {
            l_U1845 = 1;
        }
    }
    return l_U1845;
}

int sub_71446(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3 ))
    {
        return 1;
    }
    return 0;
}

int sub_71522(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar4 );
        if (NOT (IS_CHAR_DEAD( uParam1 )))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( uParam1, ref iVar5 );
            if (iVar4 == iVar5)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_71872()
{
    int iVar2;
    int I;
    int iVar4;

    sub_44321( l_U368, "billy_ai...." );
    switch (l_U368)
    {
        case 0:
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1241[0]._fU0, 1 );
        CLEAR_SEQUENCE_TASK( l_U1795 );
        OPEN_SEQUENCE_TASK( ref l_U1795 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -623.80060000, 1207.83600000, 6.06800000, 3, -1, 2.00000000 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -617.65300000, 1203.93000000, 5.09870000, 3, -1, 0.50000000 );
        TASK_CHAR_SLIDE_TO_COORD( 0, -617.65300000, 1203.83000000, 5.09870000, 0.00000000, 1061158912 );
        TASK_PLAY_ANIM( 0, "Go_Idle", "MISSBILLY_4", 4.00000000, 1, 0, 0, 0, 0 );
        CLOSE_SEQUENCE_TASK( l_U1795 );
        TASK_PERFORM_SEQUENCE( l_U1241[0]._fU0, l_U1795 );
        GET_GAME_TIMER( ref l_U1954 );
        l_U1886[0] = START_PTFX( "ACTION_STAIRS_BLAZE", -620.96970000, 1189.40400000, 9.41639600, 0.00000000, 0.00000000, 0.00000000, 1.00000000 );
        l_U368 = 1;
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U1241[0]._fU0 )))
        {
            if (NOT l_U1948)
            {
                GET_INTERIOR_FROM_CHAR( l_U1241[0]._fU0, ref iVar2 );
                if (iVar2 != nil)
                {
                    GET_GAME_TIMER( ref l_U1952 );
                    l_U1948 = 1;
                }
                if (sub_44034( l_U1954, 60000 ))
                {
                    SET_CHAR_COORDINATES( l_U1241[0]._fU0, -621.67950000, 1205.13400000, 5.09870000 );
                    SET_CHAR_HEADING( l_U1241[0]._fU0, 237.03400000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U1241[0]._fU0, "E1_AODEntrance" );
                    l_U1948 = 1;
                }
            }
            else if (l_U1949)
            {
                GET_INTERIOR_FROM_CHAR( sub_3607(), ref iVar2 );
                if (iVar2 != nil)
                {
                    if ((IS_CHAR_PLAYING_ANIM( l_U1241[0]._fU0, "MISSBILLY_4", "Go_Idle" )) || (sub_44034( l_U1952, 15000 )))
                    {
                        if (IS_CHAR_ON_SCREEN( l_U1241[0]._fU0 ))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U1241[0]._fU0, "Go_Go_Go", "MISSBILLY_4", 4.00000000, 0, 0, 0, 0, 0 );
                            sub_21746( "E1B4_NEXT", ref l_U1482, 6, 1 );
                            l_U368 = 2;
                        }
                    }
                    else if (LOCATE_CHAR_ANY_MEANS_3D( sub_3607(), -617.73050000, 1204.43400000, 6.10370000, 1.00000000, 1.00000000, 2.00000000, 0 ))
                    {
                        l_U368 = 2;
                    }
                    else if ((sub_72783()) AND (NOT (sub_71522( sub_3607(), l_U1241[0]._fU0 ))))
                    {
                        l_U368 = 2;
                    };;;
                }
            }
        }
        break;
        case 2:
        if (NOT (IS_CHAR_INJURED( l_U1241[0]._fU0 )))
        {
            if (((IS_CHAR_PLAYING_ANIM( l_U1241[0]._fU0, "MISSBILLY_4", "Go_Go_Go" )) || (sub_44034( l_U1953, 20000 ))) || (sub_72783()))
            {
                CLEAR_AREA( -620.18000000, 1187.18000000, 6.50000000, 3.00000000, 1 );
                l_U368 = 3;
            }
            else if (LOCATE_CHAR_ANY_MEANS_3D( sub_3607(), -617.73050000, 1204.43400000, 6.10370000, 1.00000000, 1.00000000, 2.00000000, 0 ))
            {
                GET_INTERIOR_FROM_CHAR( l_U1241[0]._fU0, ref iVar2 );
                if (iVar2 != nil)
                {
                    CLEAR_AREA( -620.18000000, 1187.18000000, 6.50000000, 3.00000000, 1 );
                    l_U368 = 3;
                }
            }
        }
        break;
        case 3:
        if (NOT (IS_CHAR_PLAYING_ANIM( l_U1241[0]._fU0, "MISSBILLY_4", "Go_Go_Go" )))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( l_U1241[0]._fU0, l_U1599._fU0, l_U1599._fU4, l_U1599._fU8, 2.00000000, 2.00000000, 2.00000000, 0 ))
            {
                if (((((NOT (IS_CHAR_INJURED( l_U1382[0] ))) || (NOT (IS_CHAR_INJURED( l_U1382[1] )))) || (NOT (IS_CHAR_INJURED( l_U1382[2] )))) || (NOT (IS_CHAR_INJURED( l_U1382[6] )))) || (NOT (IS_CHAR_INJURED( l_U1382[7] ))))
                {
                    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U1241[0]._fU0, l_U1599, 2.00000000 );
                    TASK_COMBAT_HATED_TARGETS_IN_AREA( l_U1241[0]._fU0, 64915, 1197, 6, 10 );
                }
                l_U368 = 4;
            }
        }
        break;
        case 4:
        if (((((IS_CHAR_INJURED( l_U1382[0] )) AND (IS_CHAR_INJURED( l_U1382[1] ))) AND (IS_CHAR_INJURED( l_U1382[2] ))) AND (IS_CHAR_INJURED( l_U1382[6] ))) AND (IS_CHAR_INJURED( l_U1382[7] )))
        {
            if (NOT (IS_CHAR_INJURED( l_U1382[5] )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U1453[5] )))
                {
                    ADD_BLIP_FOR_CHAR( l_U1382[5], ref l_U1453[5] );
                    CHANGE_BLIP_PRIORITY( l_U1453[5], 1 );
                }
            }
            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U1241[0]._fU0, l_U1602._fU0, l_U1602._fU4, l_U1602._fU8, 3, -2, 2.00000000 );
            l_U368 = 5;
        }
        break;
        case 5:
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U1241[0]._fU0, l_U1602._fU0, l_U1602._fU4, l_U1602._fU8, 2.00000000, 2.00000000, 2.00000000, 0 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U1382[5] )))
            {
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U1241[0]._fU0, l_U1602, 2.00000000 );
                TASK_COMBAT_HATED_TARGETS_IN_AREA( l_U1241[0]._fU0, 64911, 1191, 6, 10 );
            }
            l_U368 = 6;
        }
        break;
        case 6:
        if (IS_CHAR_INJURED( l_U1382[5] ))
        {
            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U1241[0]._fU0, l_U1605._fU0, l_U1605._fU4, l_U1605._fU8, 3, -2, 2.00000000 );
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U1241[0]._fU0, 1 );
            l_U368 = 7;
        }
        break;
        case 7:
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U1241[0]._fU0, l_U1605._fU0, l_U1605._fU4, l_U1605._fU8, 2.00000000, 2.00000000, 2.00000000, 0 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U1382[8] )))
            {
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U1241[0]._fU0, l_U1605, 2.00000000 );
                TASK_COMBAT_HATED_TARGETS_IN_AREA( l_U1241[0]._fU0, 64912, 1184, 6, 10 );
            }
            l_U368 = 8;
        }
        break;
        case 8:
        if ((IS_CHAR_INJURED( l_U1382[8] )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3607(), l_U1241[0]._fU0, 8.00000000, 8.00000000, 8.00000000, 0 )))
        {
            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U1241[0]._fU0, l_U1608._fU0, l_U1608._fU4, l_U1608._fU8, 3, -2, 2.00000000 );
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U1241[0]._fU0, 1 );
            l_U368 = 9;
        }
        break;
        case 9:
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U1241[0]._fU0, l_U1608._fU0, l_U1608._fU4, l_U1608._fU8, 2.00000000, 2.00000000, 2.00000000, 0 ))
        {
            if (((NOT (IS_CHAR_INJURED( l_U1382[8] ))) || (NOT (IS_CHAR_INJURED( l_U1382[4] )))) || (NOT (IS_CHAR_INJURED( l_U1382[3] ))))
            {
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U1241[0]._fU0, l_U1608, 2.00000000 );
                TASK_COMBAT_HATED_TARGETS_IN_AREA( l_U1241[0]._fU0, l_U1608, 10 );
            }
            l_U368 = 10;
        }
        break;
        case 10:
        if (((IS_CHAR_INJURED( l_U1382[3] )) AND (IS_CHAR_INJURED( l_U1382[4] ))) AND (IS_CHAR_INJURED( l_U1382[8] )))
        {
            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U1241[0]._fU0, l_U1611._fU0, l_U1611._fU4, l_U1611._fU8, 2, 8000, 2.00000000 );
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U1241[0]._fU0, 0 );
            l_U368 = 11;
        }
        break;
        case 11:
        if ((LOCATE_CHAR_ANY_MEANS_3D( l_U1241[0]._fU0, l_U1611._fU0, l_U1611._fU4, l_U1611._fU8, 5.00000000, 5.00000000, 5.00000000, 0 )) AND (sub_71522( sub_3607(), l_U1241[0]._fU0 )))
        {
            l_U1497 = 1;
        }
        break;
    }
    if (NOT (DOES_BLIP_EXIST( l_U1453[5] )))
    {
        if (NOT (IS_CHAR_INJURED( l_U1382[5] )))
        {
            if (sub_72783())
            {
                ADD_BLIP_FOR_CHAR( l_U1382[5], ref l_U1453[5] );
                CHANGE_BLIP_PRIORITY( l_U1453[5], 1 );
            }
        }
    }
    if (sub_72783())
    {
        ;
    }
    if (sub_74660())
    {
        if (NOT (IS_CHAR_INJURED( l_U1382[3] )))
        {
            if (NOT (DOES_BLIP_EXIST( l_U1453[3] )))
            {
                ADD_BLIP_FOR_CHAR( l_U1382[3], ref l_U1453[3] );
                CHANGE_BLIP_PRIORITY( l_U1453[3], 1 );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U1382[4] )))
        {
            if (NOT (DOES_BLIP_EXIST( l_U1453[4] )))
            {
                ADD_BLIP_FOR_CHAR( l_U1382[4], ref l_U1453[4] );
                CHANGE_BLIP_PRIORITY( l_U1453[4], 1 );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U1382[8] )))
        {
            if (NOT (DOES_BLIP_EXIST( l_U1453[8] )))
            {
                ADD_BLIP_FOR_CHAR( l_U1382[8], ref l_U1453[8] );
                CHANGE_BLIP_PRIORITY( l_U1453[8], 1 );
            }
        }
    }
    if (NOT l_U1949)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3607(), -621.08990000, 1205.05500000, 6.10370000, 4.00000000, 1.50000000, 2.00000000, 0 ))
        {
            GET_GAME_TIMER( ref l_U1953 );
            l_U1949 = 1;
        }
    }
    if (l_U1556)
    {
        sub_75080();
    }
    GET_INTERIOR_FROM_CHAR( sub_3607(), ref iVar2 );
    if (iVar2 != nil)
    {
        if (NOT l_U1950)
        {
            if (NOT sub_21554())
            {
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    GET_GAME_TIMER( ref l_U1951 );
                    l_U1950 = 1;
                }
            }
        }
        else if (sub_44034( l_U1951, 5000 ))
        {
            switch (l_U1955)
            {
                case 0:
                for ( I = 0; I < l_U1382; I++ )
                {
                    if (NOT (IS_CHAR_DEAD( l_U1382[I] )))
                    {
                        if (DOES_BLIP_EXIST( l_U1453[I] ))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3607(), l_U1382[I], 10.00000000, 10.00000000, 10.00000000, 0 ))
                            {
                                if (NOT sub_21554())
                                {
                                    SAY_AMBIENT_SPEECH( l_U1382[I], "ANGELS_OF_DEATH_TAUNT_LOST", 0, 0, 2 );
                                    l_U1950 = 0;
                                }
                            }
                        }
                    }
                }
                break;
                case 1:
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    if (sub_50617())
                    {
                        GET_INTERIOR_FROM_CHAR( sub_3607(), ref iVar2 );
                        if (iVar2 != nil)
                        {
                            GET_KEY_FOR_CHAR_IN_ROOM( sub_3607(), ref iVar4 );
                            if (iVar4 == (GET_HASH_KEY( "E1_AODBasement" )))
                            {
                                sub_21746( "E1B4_BASE", ref l_U1482, 7, 1 );
                            }
                            else if (sub_72783())
                            {
                                sub_21746( "E1B4_INCH", ref l_U1482, 7, 1 );
                            }
                            l_U1950 = 0;
                        }
                    }
                }
                break;
            }
            l_U1955++;
            if (l_U1955 > 1)
            {
                l_U1955 = 0;
            }
        }
    }
    return;
}

void sub_72783()
{
    if (NOT l_U1837)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3607(), -618.83840000, 1202.46800000, 6.10400000, 1.00000000, 1.00000000, 2.00000000, 0 ))
        {
            l_U1837 = 1;
        }
    }
    return l_U1837;
}

void sub_74660()
{
    if (NOT l_U1839)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3607(), -624.20530000, 1193.64500000, 6.10600000, 1.00000000, 1.00000000, 2.00000000, 0 ))
        {
            l_U1839 = 1;
        }
    }
    return l_U1839;
}

void sub_75080()
{
    if (sub_50617())
    {
        switch (l_U1736)
        {
            case 0:
            if (l_U368 == 4)
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3607(), l_U1241[0]._fU0, 3, 3, 3, 0 ))
                {
                    sub_21746( "E1B4_OUT", ref l_U1482, 7, 1 );
                    l_U1736++;
                }
            }
            else if (l_U368 > 4)
            {
                l_U1736++;
            }
            break;
            case 1:
            if (l_U368 == 5)
            {
                if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3607(), l_U1241[0]._fU0, 3, 3, 3, 0 )) AND (NOT (IS_CHAR_INJURED( l_U1382[5] ))))
                {
                    sub_21746( "E1B4_STAIR", ref l_U1482, 7, 1 );
                    l_U1736++;
                }
            }
            else if (l_U368 > 5)
            {
                l_U1736++;
            }
            break;
            case 2:
            if (l_U368 == 8)
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3607(), l_U1241[0]._fU0, 3, 3, 3, 0 ))
                {
                    sub_21746( "E1B4_BASEM", ref l_U1482, 7, 1 );
                    l_U1736++;
                }
            }
            else if (l_U368 > 8)
            {
                l_U1736++;
            }
            break;
        }
    }
    return;
}

int sub_76207()
{
    int I;

    for ( I = 0; I < l_U1382; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U1382[I] )))
        {
            return 0;
        }
    }
    return 1;
}

void sub_76434()
{
    switch (l_U1959)
    {
        case 0:
        SET_PLAYER_CONTROL( sub_26182(), 0 );
        l_U1818 = 0;
        DO_SCREEN_FADE_OUT( 500 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        STOP_PTFX( l_U1886[0] );
        STOP_PTFX( l_U1886[1] );
        GET_CURRENT_WEATHER( ref l_U1960 );
        FORCE_WEATHER_NOW( 0 );
        for ( l_U1721 = 0; l_U1721 < l_U1209; l_U1721++ )
        {
            if (DOES_BLIP_EXIST( l_U1209[l_U1721] ))
            {
                REMOVE_BLIP( l_U1209[l_U1721] );
            }
        }
        for ( l_U1721 = 0; l_U1721 < l_U1453; l_U1721++ )
        {
            if (DOES_BLIP_EXIST( l_U1453[l_U1721] ))
            {
                REMOVE_BLIP( l_U1453[l_U1721] );
            }
        }
        CLEAR_PRINTS();
        sub_3199( ref l_U1482, 0 );
        CLEAR_AREA( l_U1611._fU0, l_U1611._fU4, l_U1611._fU8, 20, 1 );
        EXTINGUISH_FIRE_AT_POINT( l_U1611._fU0, l_U1611._fU4, l_U1611._fU8, 20 );
        for ( l_U1721 = 0; l_U1721 < l_U668; l_U1721++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U668[l_U1721]._fU0 )))
            {
                DELETE_CHAR( ref l_U668[l_U1721]._fU0 );
            }
        }
        for ( l_U1721 = 0; l_U1721 < l_U1392; l_U1721++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U1392[l_U1721] )))
            {
                DELETE_CHAR( ref l_U1392[l_U1721] );
            }
        }
        for ( l_U1721 = 0; l_U1721 < l_U1382; l_U1721++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U1382[l_U1721] )))
            {
                DELETE_CHAR( ref l_U1382[l_U1721] );
            }
        }
        for ( l_U1721 = 0; l_U1721 < l_U1406; l_U1721++ )
        {
            if (NOT (IS_CAR_DEAD( l_U1406[l_U1721] )))
            {
                if (IS_CAR_ON_FIRE( l_U1406[l_U1721] ))
                {
                    EXTINGUISH_CAR_FIRE( l_U1406[l_U1721] );
                }
            }
        }
        SET_PED_IS_BLIND_RAGING( sub_3607(), 0 );
        if (NOT (IS_CAR_DEAD( l_U1402 )))
        {
            GET_CAR_COORDINATES( l_U1402, ref l_U1841._fU0, ref l_U1841._fU4, ref l_U1841._fU8 );
            GET_CAR_HEADING( l_U1402, ref l_U1844 );
        }
        if (IS_CHAR_IN_ANY_CAR( sub_3607() ))
        {
            WARP_CHAR_FROM_CAR_TO_COORD( sub_3607(), -622.01810000, 1183.80000000, 2.09190000 );
        }
        CLEAR_AREA( -627.87000000, 1183.65000000, 3.14000000, 20.00000000, 0 );
        sub_62269( 1, 1 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -2135182574 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1488645394 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -237900182 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1085774992 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 2006142190 );
        LOAD_ADDITIONAL_TEXT( "E1B4AUD", 6 );
        START_CUTSCENE_NOW( "BG04_CB" );
        l_U1959 = 1;
        break;
        case 1:
        if (HAS_CUTSCENE_LOADED())
        {
            while (NOT HAS_CUTSCENE_FINISHED())
            {
                WAIT( 0 );
            }
            CLEAR_NAMED_CUTSCENE( "BG04_CB" );
            l_U1840 = 1;
            l_U1959 = 2;
        }
        break;
        case 2:
        if (DOES_CHAR_EXIST( l_U1241[2]._fU0 ))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3607() );
            SET_CHAR_COORDINATES( sub_3607(), -622.01810000, 1183.80000000, 2.09190000 );
            SET_CHAR_HEADING( sub_3607(), 90.00000000 );
            SET_ROOM_FOR_CHAR_BY_NAME( sub_3607(), "E1_AODBasement" );
            l_U1886[0] = START_PTFX( "ACTION_STAIRS_BLAZE", -620.96970000, 1189.40400000, 9.41639600, 0.00000000, 0.00000000, 0.00000000, 1.00000000 );
            l_U1886[1] = START_PTFX( "ACTION_WINDOW_BLAZE", -622.94000000, 1204.01000000, 10.00000000, 0.00000000, 0.00000000, 90.00000000, 1.00000000 );
            if ((NOT (IS_CHAR_INJURED( l_U1241[0]._fU0 ))) AND (NOT (IS_CHAR_INJURED( l_U1241[2]._fU0 ))))
            {
                SET_CHAR_COORDINATES( l_U1241[0]._fU0, -628.31150000, 1191.84300000, 4.31090000 );
                SET_CHAR_HEADING( l_U1241[0]._fU0, 176.83270000 );
                SET_CHAR_COORDINATES( l_U1241[2]._fU0, -649.70150000, 1213.97900000, 4.90810000 );
                CLEAR_ROOM_FOR_CHAR( l_U1241[2]._fU0 );
                CLEAR_SEQUENCE_TASK( l_U1795 );
                OPEN_SEQUENCE_TASK( ref l_U1795 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U1614._fU0, l_U1614._fU4, l_U1614._fU8, 3, 70000, 2.00000000 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -647.28390000, 1217.26700000, 4.90840000, 3, 70000, 2.00000000 );
                CLOSE_SEQUENCE_TASK( l_U1795 );
                SET_CHAR_PROOFS( l_U1241[0]._fU0, 0, 0, 0, 0, 0 );
                TASK_PERFORM_SEQUENCE( l_U1241[0]._fU0, l_U1795 );
                SET_BLIP_AS_FRIENDLY( l_U1450, 1 );
                CLEAR_SEQUENCE_TASK( l_U1795 );
                OPEN_SEQUENCE_TASK( ref l_U1795 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 64906, 1217, 6, 3, -2, 2.00000000 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -649.70150000, 1213.97900000, 4.90810000, 3, 70000, 2.00000000 );
                CLOSE_SEQUENCE_TASK( l_U1795 );
                SET_BLIP_AS_FRIENDLY( l_U1451, 1 );
            }
            if (DOES_OBJECT_EXIST( l_U1420 ))
            {
                DELETE_OBJECT( ref l_U1420 );
            }
            START_PTFX( "smoke_action", 64914, 1197.80000000, 6.00000000, 0.00000000, 0.00000000, 0.00000000, 1.00000000 );
            FORCE_WEATHER_NOW( l_U1960 );
            RELEASE_WEATHER();
            WAIT( 1000 );
            CLEAR_PRINTS();
            SET_PLAYER_CONTROL( sub_26182(), 1 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            DO_SCREEN_FADE_IN( 500 );
            l_U1819 = 0;
            l_U1818 = 1;
            l_U362 = 5;
        }
        break;
    }
    return;
}

void sub_78386()
{
    sub_64743();
    if (sub_50617())
    {
        if (NOT l_U1558)
        {
            sub_21746( "E1B4_BSGO", ref l_U1482, 7, 1 );
            l_U1558 = 1;
        }
        else if (NOT l_U1559)
        {
            if (NOT (sub_23529( l_U1482 )))
            {
                if (NOT (IS_CAR_DEAD( l_U1402 )))
                {
                    PRINT_NOW( "B4_ENDONBIKE", 7500, 1 );
                    ADD_BLIP_FOR_CAR( l_U1402, ref l_U1449 );
                    SET_BLIP_AS_FRIENDLY( l_U1449, 1 );
                    l_U1559 = 1;
                }
                else
                {
                    SCRIPT_ASSERT( "Playe bike dead!" );
                }
            }
            GET_GAME_TIMER( ref l_U1963 );
            l_U1962 = 1;
        }
    }
    if (NOT l_U1961)
    {
        if (l_U1559)
        {
            if (NOT (IS_CAR_DEAD( l_U1406[1] )))
            {
                if (NOT (IS_CHAR_DEAD( l_U1241[0]._fU0 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U1241[2]._fU0 )))
                    {
                        CLEAR_CHAR_TASKS( l_U1241[0]._fU0 );
                        WARP_CHAR_INTO_CAR( l_U1241[0]._fU0, l_U1406[1] );
                        CLEAR_ROOM_FOR_CHAR( l_U1241[0]._fU0 );
                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U1241[2]._fU0, l_U1406[1], 0 );
                        l_U1961 = 1;
                    }
                    else
                    {
                        SCRIPT_ASSERT( "1 is dead" );
                    }
                }
                else
                {
                    SCRIPT_ASSERT( "0 is dead" );
                }
            }
            else
            {
                SCRIPT_ASSERT( "car is dead" );
            }
        }
    }
    else if (IS_CHAR_DEAD( l_U1241[0]._fU0 ))
    {
        l_U367 = 1;
        l_U362 = 9;
    }
    else if (IS_CHAR_DEAD( l_U1241[2]._fU0 ))
    {
        l_U367 = 3;
        l_U362 = 9;
    };;;
    if (NOT (IS_CHAR_INJURED( l_U1241[0]._fU0 )))
    {
        if (sub_59488( 1, 1 ))
        {
            GET_SCRIPT_TASK_STATUS( l_U1241[0]._fU0, 27, ref l_U1796 );
            if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3607(), -623.89980000, 1205.59800000, 6.10350000, 1.00000000, 1.00000000, 2.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3607(), -625.47400000, 1205.18200000, 6.10390000, 1.00000000, 2.00000000, 2.00000000, 0 )))
            {
                if (DOES_BLIP_EXIST( l_U1450 ))
                {
                    REMOVE_BLIP( l_U1450 );
                }
                if (DOES_BLIP_EXIST( l_U1451 ))
                {
                    REMOVE_BLIP( l_U1451 );
                }
                if (l_U1961)
                {
                    if (NOT (IS_CAR_DEAD( l_U1406[1] )))
                    {
                        START_PLAYBACK_RECORDED_CAR( l_U1406[1], 476 );
                        SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1406[1], 2200 );
                        sub_21746( "E1B4_BASE2", ref l_U1482, 7, 1 );
                    }
                    if (NOT (IS_CAR_DEAD( l_U1241[3]._fU4 )))
                    {
                        START_PLAYBACK_RECORDED_CAR( l_U1241[3]._fU4, 477 );
                        SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1241[3]._fU4, 2200 );
                    }
                    if (NOT (IS_CAR_DEAD( l_U1241[4]._fU4 )))
                    {
                        START_PLAYBACK_RECORDED_CAR( l_U1241[4]._fU4, 487 );
                        SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1241[4]._fU4, 2200 );
                    }
                    l_U1964 = 1;
                }
                l_U362 = 8;
            }
        }
    }
    if (l_U1962)
    {
        if (sub_50617())
        {
            if (sub_44034( l_U1963, 4000 ))
            {
                GET_GAME_TIMER( ref l_U1963 );
            }
        }
    }
    return;
}

void sub_79446()
{
    int I;

    if ((((sub_79455()) AND (IS_SCREEN_FADED_IN())) AND (NOT (l_U365 == 0))) AND (NOT (l_U365 == 4)))
    {
        sub_44500( "Skipping...." );
        DO_SCREEN_FADE_OUT( 500 );
        l_U1965 = 1;
        l_U365 = 4;
    }
    sub_44321( l_U365, "end_shot..." );
    switch (l_U365)
    {
        case 0:
        SET_PLAYER_CONTROL( sub_26182(), 0 );
        DO_SCREEN_FADE_OUT( 500 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        CLEAR_PRINTS();
        sub_3199( ref l_U1482, 0 );
        sub_79767();
        WAIT( 1000 );
        CLEAR_WANTED_LEVEL( sub_26182() );
        while (NOT (sub_8662( ref l_U1402, l_U1841, l_U1844 )))
        {
            WAIT( 0 );
        }
        while (NOT (sub_80002( ref l_U1241[0]._fU4, -641.15920000, 1238.56400000, 4.90840000, 240.91700000 )))
        {
            WAIT( 0 );
        }
        while (NOT (sub_80280( ref l_U1241[1]._fU4, -641.15920000, 1238.56400000, 4.90840000, 242.53220000 )))
        {
            WAIT( 0 );
        }
        while (NOT (sub_80357( ref l_U1241[3]._fU4, -647.45000000, 1226.65000000, 6, -85.00000000 )))
        {
            WAIT( 0 );
        }
        while (NOT (sub_80432( ref l_U1241[4]._fU4, -644.88000000, 1232.72000000, 6, 65404 )))
        {
            WAIT( 0 );
        }
        REQUEST_MODEL( -1745203402 );
        while (NOT (HAS_MODEL_LOADED( -1745203402 )))
        {
            WAIT( 0 );
        }
        l_U1724[0] = 4500;
        l_U1724[1] = 6200;
        l_U1724[2] = 6200;
        l_U1724[3] = 8400;
        l_U1724[4] = 10500;
        CLEAR_AREA( l_U1580._fU0, l_U1580._fU4, l_U1580._fU8, 20, 1 );
        EXTINGUISH_FIRE_AT_POINT( l_U1580._fU0, l_U1580._fU4, l_U1580._fU8, 300 );
        if (IS_VEH_DRIVEABLE( l_U1402 ))
        {
            for ( l_U1721 = 0; l_U1721 < l_U1406; l_U1721++ )
            {
                if ((IS_VEH_DRIVEABLE( l_U1406[l_U1721] )) AND (NOT (l_U1721 == 0)))
                {
                    if ((LOCATE_CAR_2D( l_U1406[l_U1721], -623.81000000, 1212.53000000, 6.00000000, 6.00000000, 0 )) || (IS_CAR_IN_AREA_2D( l_U1406[l_U1721], -664.76000000, 1208.96000000, -623.14000000, 1236.05000000, 0 )))
                    {
                        sub_44321( l_U1721, "1....Deleteing scenery vehicle...." );
                        if (NOT (IS_CHAR_IN_CAR( sub_3607(), l_U1406[l_U1721] )))
                        {
                            DELETE_CAR( ref l_U1406[l_U1721] );
                        }
                    }
                }
                else if (DOES_VEHICLE_EXIST( l_U1406[l_U1721] ))
                {
                    sub_44321( l_U1721, "2....Deleteing scenery vehicle...." );
                    if (NOT (IS_CAR_DEAD( l_U1406[l_U1721] )))
                    {
                        if (NOT (IS_CHAR_IN_CAR( sub_3607(), l_U1406[l_U1721] )))
                        {
                            DELETE_CAR( ref l_U1406[l_U1721] );
                        }
                    }
                    else
                    {
                        DELETE_CAR( ref l_U1406[l_U1721] );
                    }
                }
            }
            for ( l_U1721 = 0; l_U1721 < l_U1403; l_U1721++ )
            {
                if (DOES_VEHICLE_EXIST( l_U1403[l_U1721] ))
                {
                    sub_44321( l_U1721, "Deleteing enemy bike...." );
                    if (NOT (IS_CAR_DEAD( l_U1403[l_U1721] )))
                    {
                        if (NOT (IS_CHAR_IN_CAR( sub_3607(), l_U1403[l_U1721] )))
                        {
                            DELETE_CAR( ref l_U1403[l_U1721] );
                        }
                    }
                    else
                    {
                        DELETE_CAR( ref l_U1403[l_U1721] );
                    }
                }
            }
            if (NOT (IS_CHAR_IN_CAR( sub_3607(), l_U1402 )))
            {
                WARP_CHAR_INTO_CAR( sub_3607(), l_U1402 );
            }
            SET_CHAR_COORDINATES( sub_3607(), -623.81000000, 1212.53000000, 5.68000000 );
            SET_CHAR_HEADING( sub_3607(), 270 );
            SET_CAR_ON_GROUND_PROPERLY( l_U1402 );
            TASK_LOOK_AT_COORD( sub_3607(), -619.36910000, 1219.56800000, 5.21510000, -1, 0 );
        }
        if (NOT (IS_VEH_DRIVEABLE( l_U1406[0] )))
        {
            if (DOES_VEHICLE_EXIST( l_U1406[0] ))
            {
                sub_44500( "3...Deleteing scenery veh 0...." );
                if (NOT (IS_CAR_DEAD( l_U1406[0] )))
                {
                    if (NOT (IS_CHAR_IN_CAR( sub_3607(), l_U1406[0] )))
                    {
                        DELETE_CAR( ref l_U1406[0] );
                    }
                }
                else
                {
                    DELETE_CAR( ref l_U1406[0] );
                }
            }
            CREATE_CAR( -1745203402, -619.99770000, 1216.95800000, 5.93150000, ref l_U1406[0], 1 );
            CHANGE_CAR_COLOUR( l_U1406[0], 0, 0 );
            SET_EXTRA_CAR_COLOURS( l_U1406[0], 0, 0 );
        }
        if (IS_VEH_DRIVEABLE( l_U1406[0] ))
        {
            SET_CAR_COORDINATES( l_U1406[0], -619.99770000, 1216.95800000, 5.93150000 );
            SET_CAR_HEADING( l_U1406[0], 87.04920000 );
            SET_CAR_ON_GROUND_PROPERLY( l_U1406[0] );
            SET_CAR_ENGINE_ON( l_U1406[0], 1, 1 );
        }
        for ( l_U1721 = 0; l_U1721 < l_U1241; l_U1721++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U1241[l_U1721]._fU0 )))
            {
                if (l_U1721 == 2)
                {
                    if (NOT (IS_CAR_DEAD( l_U1406[0] )))
                    {
                        WARP_CHAR_INTO_CAR( l_U1241[l_U1721]._fU0, l_U1406[0] );
                    }
                    if (DOES_VEHICLE_EXIST( l_U1241[l_U1721]._fU4 ))
                    {
                        sub_44321( l_U1721, "1...Deleteing biker bike...." );
                        if (NOT (IS_CAR_DEAD( l_U1241[l_U1721]._fU4 )))
                        {
                            if (NOT (IS_CHAR_IN_CAR( sub_3607(), l_U1241[l_U1721]._fU4 )))
                            {
                                DELETE_CAR( ref l_U1241[l_U1721]._fU4 );
                            }
                        }
                        else
                        {
                            DELETE_CAR( ref l_U1241[l_U1721]._fU4 );
                        }
                    }
                }
                else if (NOT (IS_VEH_DRIVEABLE( l_U1241[l_U1721]._fU4 )))
                {
                    sub_82073( l_U1721, 64911, 1217, 20 );
                }
                if (IS_VEH_DRIVEABLE( l_U1241[l_U1721]._fU4 ))
                {
                    if (NOT (IS_CHAR_IN_CAR( l_U1241[l_U1721]._fU0, l_U1241[l_U1721]._fU4 )))
                    {
                        WARP_CHAR_INTO_CAR( l_U1241[l_U1721]._fU0, l_U1241[l_U1721]._fU4 );
                    }
                    SET_CAR_ENGINE_ON( l_U1241[l_U1721]._fU4, 1, 1 );
                    if (l_U1721 == 0)
                    {
                        SET_BLIP_THROTTLE_RANDOMLY( l_U1241[l_U1721]._fU4, 1 );
                    }
                }
                if (l_U1721 == 2)
                {
                    if (NOT (IS_CAR_DEAD( l_U1406[0] )))
                    {
                        START_PLAYBACK_RECORDED_CAR( l_U1406[0], 327 );
                        PAUSE_PLAYBACK_RECORDED_CAR( l_U1406[0] );
                        SET_CAR_PROOFS( l_U1406[0], 1, 1, 1, 1, 1 );
                    }
                }
                else if (NOT (IS_CAR_DEAD( l_U1241[l_U1721]._fU4 )))
                {
                    START_PLAYBACK_RECORDED_CAR( l_U1241[l_U1721]._fU4, 325 + l_U1721 );
                    if (l_U1721 == 0)
                    {
                        SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1241[l_U1721]._fU4, 1200 );
                    }
                    PAUSE_PLAYBACK_RECORDED_CAR( l_U1241[l_U1721]._fU4 );
                    SET_CAR_PROOFS( l_U1241[l_U1721]._fU4, 1, 1, 1, 1, 1 );
                }
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1241[l_U1721]._fU0, 1 );
                SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE( l_U1241[l_U1721]._fU0, 1 );
                SET_CHAR_PROOFS( l_U1241[l_U1721]._fU0, 1, 1, 1, 1, 1 );
            }
            else if (DOES_CHAR_EXIST( l_U1241[l_U1721]._fU0 ))
            {
                DELETE_CHAR( ref l_U1241[l_U1721]._fU0 );
            }
            if (DOES_VEHICLE_EXIST( l_U1241[l_U1721]._fU4 ))
            {
                sub_44321( l_U1721, "2...Deleteing biker bike...." );
                if (NOT (IS_CAR_DEAD( l_U1241[l_U1721]._fU4 )))
                {
                    if (NOT (IS_CHAR_IN_CAR( sub_3607(), l_U1241[l_U1721]._fU4 )))
                    {
                        DELETE_CAR( ref l_U1241[l_U1721]._fU4 );
                    }
                }
                else
                {
                    DELETE_CAR( ref l_U1241[l_U1721]._fU4 );
                }
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U1241[0]._fU0 )))
        {
            TASK_LOOK_AT_CHAR( l_U1241[0]._fU0, l_U1241[2]._fU0, -2, 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U1241[2]._fU0 )))
        {
            TASK_LOOK_AT_CHAR( l_U1241[2]._fU0, l_U1241[0]._fU0, -2, 0 );
        }
        if (NOT (IS_CHAR_INJURED( sub_3607() )))
        {
            TASK_LOOK_AT_CHAR( sub_3607(), l_U1241[0]._fU0, -2, 0 );
        }
        SET_WIDESCREEN_BORDERS( 1 );
        BEGIN_CAM_COMMANDS( ref l_U1722 );
        CREATE_CAM( 14, ref l_U1470 );
        CREATE_CAM( 14, ref l_U1471 );
        CREATE_CAM( 3, ref l_U1472 );
        SET_CAM_POS( l_U1470, -622.54000000, 1209.45000000, 10.55000000 );
        WAIT( 100 );
        SET_CAM_POS( l_U1470, -627.38730000, 1218.57700000, 5.93349400 );
        SET_CAM_ROT( l_U1470, 25.77915000, 0.00000000, -160.55700000 );
        SET_CAM_FOV( l_U1470, 41.00000000 );
        SET_CAM_POS( l_U1471, -627.38730000, 1218.57700000, 5.93349400 );
        SET_CAM_ROT( l_U1471, 0.68359800, 0.00000000, -129.84650000 );
        SET_CAM_FOV( l_U1471, 41.00000000 );
        SET_CAM_ACTIVE( l_U1470, 1 );
        SET_CAM_ACTIVE( l_U1471, 1 );
        SET_CAM_ACTIVE( l_U1472, 1 );
        SET_CAM_PROPAGATE( l_U1470, 1 );
        SET_CAM_PROPAGATE( l_U1471, 1 );
        SET_CAM_PROPAGATE( l_U1472, 1 );
        SET_CAM_INTERP_STYLE_CORE( l_U1472, l_U1470, l_U1471, 5000, 0 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        END_CAM_COMMANDS( ref l_U1722 );
        SETTIMERA( 0 );
        SETTIMERB( 0 );
        DO_SCREEN_FADE_IN( 500 );
        l_U365 = 1;
        break;
        case 1:
        if (NOT l_U1560)
        {
            if (TIMERB() >= 2000)
            {
                sub_21746( "E1B4_CLEAR", ref l_U1482, 7, 1 );
                l_U1560 = 1;
            }
        }
        if (TIMERB() >= 6000)
        {
            BEGIN_CAM_COMMANDS( ref l_U1722 );
            SET_CAM_POS( l_U1470, -623.63850000, 1211.77700000, 5.21894100 );
            SET_CAM_ROT( l_U1470, 10.42108000, 0.00000000, -61.79681000 );
            SET_CAM_FOV( l_U1470, 45 );
            SET_CAM_POS( l_U1471, -623.63850000, 1211.77700000, 5.21894100 );
            SET_CAM_ROT( l_U1471, 10.42108000, 0.00000000, -61.79681000 );
            SET_CAM_FOV( l_U1471, 40 );
            SET_CAM_INTERP_STYLE_CORE( l_U1472, l_U1470, l_U1471, 5000, 0 );
            END_CAM_COMMANDS( ref l_U1722 );
            SETTIMERB( 0 );
            l_U365 = 2;
        }
        break;
        case 2:
        if (TIMERB() >= 4000)
        {
            BEGIN_CAM_COMMANDS( ref l_U1722 );
            SET_CAM_POS( l_U1470, -654.30890000, 1243.27100000, 9.21256800 );
            SET_CAM_ROT( l_U1470, -15.59489000, 0.00000000, -150.84910000 );
            SET_CAM_FOV( l_U1470, 33.60000000 );
            SET_CAM_ACTIVE( l_U1471, 0 );
            SET_CAM_ACTIVE( l_U1472, 0 );
            SET_CAM_PROPAGATE( l_U1471, 0 );
            SET_CAM_PROPAGATE( l_U1472, 0 );
            END_CAM_COMMANDS( ref l_U1722 );
            SETTIMERB( 0 );
            l_U365 = 3;
        }
        break;
        case 3:
        if (TIMERB() >= 5000)
        {
            DO_SCREEN_FADE_OUT( 500 );
            l_U365 = 4;
        }
        break;
        case 4:
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        SET_WIDESCREEN_BORDERS( 0 );
        BEGIN_CAM_COMMANDS( ref l_U1722 );
        SET_CAM_ACTIVE( l_U1470, 0 );
        SET_CAM_PROPAGATE( l_U1471, 0 );
        SET_CAM_ACTIVE( l_U1471, 0 );
        SET_CAM_PROPAGATE( l_U1472, 0 );
        SET_CAM_ACTIVE( l_U1472, 0 );
        SET_CAM_PROPAGATE( l_U1470, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        END_CAM_COMMANDS( ref l_U1722 );
        for ( l_U1721 = 0; l_U1721 < l_U1241; l_U1721++ )
        {
            switch (l_U1721)
            {
                case 0:
                if (NOT (IS_CHAR_INJURED( l_U1241[l_U1721]._fU0 )))
                {
                    if (DOES_CHAR_EXIST( l_U1241[l_U1721]._fU0 ))
                    {
                        DELETE_CHAR( ref l_U1241[l_U1721]._fU0 );
                    }
                }
                if (NOT (IS_CAR_DEAD( l_U1241[l_U1721]._fU4 )))
                {
                    if (DOES_VEHICLE_EXIST( l_U1241[l_U1721]._fU4 ))
                    {
                        sub_44321( l_U1721, "3...Deleteing biker bike...." );
                        DELETE_CAR( ref l_U1241[l_U1721]._fU4 );
                    }
                }
                break;
                case 1:
                case 3:
                case 4:
                if (NOT (IS_CAR_DEAD( l_U1241[l_U1721]._fU4 )))
                {
                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1241[l_U1721]._fU4 ))
                    {
                        STOP_PLAYBACK_RECORDED_CAR( l_U1241[l_U1721]._fU4 );
                    }
                    REQUEST_CAR_RECORDING( 325 + l_U1721 );
                    while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 325 + l_U1721 )))
                    {
                        WAIT( 0 );
                    }
                    if (NOT (IS_CAR_DEAD( l_U1241[l_U1721]._fU4 )))
                    {
                        START_PLAYBACK_RECORDED_CAR( l_U1241[l_U1721]._fU4, 325 + l_U1721 );
                        if (l_U1721 == 1)
                        {
                            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1241[l_U1721]._fU4, 8967 );
                        }
                        else if (l_U1721 == 3)
                        {
                            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1241[l_U1721]._fU4, 6781 );
                        }
                        else if (l_U1721 == 4)
                        {
                            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1241[l_U1721]._fU4, 6477 );
                        };;;
                    }
                }
                break;
                case 2:
                if (NOT (IS_CHAR_INJURED( l_U1241[l_U1721]._fU0 )))
                {
                    if (DOES_CHAR_EXIST( l_U1241[l_U1721]._fU0 ))
                    {
                        DELETE_CHAR( ref l_U1241[l_U1721]._fU0 );
                    }
                }
                if (NOT (IS_CAR_DEAD( l_U1406[0] )))
                {
                    if (DOES_VEHICLE_EXIST( l_U1406[0] ))
                    {
                        sub_44500( "5...Deleteing scenery....0" );
                        DELETE_CAR( ref l_U1406[0] );
                    }
                }
                break;
            }
        }
        sub_85143();
        if (NOT (IS_CHAR_INJURED( sub_3607() )))
        {
            TASK_CLEAR_LOOK_AT( sub_3607() );
        }
        WAIT( 1000 );
        if (NOT (IS_CAR_DEAD( l_U1402 )))
        {
            SET_CAR_FORWARD_SPEED( l_U1402, 10 );
        }
        SET_WANTED_MULTIPLIER( 1.00000000 );
        PRINT_NOW( "B4_LEAVEAREA", 7500, 1 );
        for ( I = 0; I < l_U1241; I++ )
        {
            if (DOES_CHAR_EXIST( l_U1241[I]._fU0 ))
            {
                DELETE_CHAR( ref l_U1241[I]._fU0 );
            }
            if (DOES_VEHICLE_EXIST( l_U1241[I]._fU4 ))
            {
                DELETE_CAR( ref l_U1241[I]._fU4 );
            }
        }
        if (l_U1965)
        {
            INCREMENT_INT_STAT( 372, 1 );
        }
        else
        {
            INCREMENT_INT_STAT( 373, 1 );
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_4251( 0 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_4251( 1 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_4251( 13 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_4251( 6 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_4251( 7 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_10332( 0 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_10332( 1 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_10332( 6 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_10332( 7 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_10332( 13 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1745203402 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 2006142190 );
        SET_PLAYER_CONTROL( sub_26182(), 1 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        DO_SCREEN_FADE_IN( 500 );
        l_U1815 = 0;
        l_U362 = 8;
        break;
    }
    for ( l_U1721 = 0; l_U1721 < l_U1542; l_U1721++ )
    {
        if (NOT l_U1542[l_U1721])
        {
            if (TIMERA() >= l_U1724[l_U1721])
            {
                if (l_U1721 == 2)
                {
                    if (NOT (IS_CAR_DEAD( l_U1406[0] )))
                    {
                        sub_44500( "unpausing car rec for scen veh 0...." );
                        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1406[0] ))
                        {
                            UNPAUSE_PLAYBACK_RECORDED_CAR( l_U1406[0] );
                        }
                        l_U1542[l_U1721] = 1;
                    }
                }
                else if (NOT (IS_CAR_DEAD( l_U1241[l_U1721]._fU4 )))
                {
                    sub_44321( l_U1721, "unpausing car rec for biker bud...." );
                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1241[l_U1721]._fU4 ))
                    {
                        UNPAUSE_PLAYBACK_RECORDED_CAR( l_U1241[l_U1721]._fU4 );
                        if (l_U1721 == 0)
                        {
                            SET_BLIP_THROTTLE_RANDOMLY( l_U1241[l_U1721]._fU4, 1 );
                        }
                    }
                    l_U1542[l_U1721] = 1;
                }
                if (NOT (IS_CHAR_INJURED( l_U1241[l_U1721]._fU0 )))
                {
                    TASK_CLEAR_LOOK_AT( l_U1241[l_U1721]._fU0 );
                }
            }
        }
        l_U1815 = 0;
    }
    return;
}

int sub_79455()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_79767()
{
    REQUEST_CAR_RECORDING( 325 );
    REQUEST_CAR_RECORDING( 326 );
    REQUEST_CAR_RECORDING( 327 );
    REQUEST_CAR_RECORDING( 328 );
    REQUEST_CAR_RECORDING( 329 );
    while (((((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 325 ))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 326 )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 327 )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 328 )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 329 ))))
    {
        WAIT( 0 );
    }
    return;
}

void sub_80002(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    return sub_80019( uParam0, 0, uParam1, uParam4 );
}

void sub_80019(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;

    uVar8 = sub_10332( uParam1 );
    return sub_80050( uParam0, uVar8, uParam2, uParam5, uParam1 );
}

int sub_80050(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    SUPPRESS_CAR_MODEL( uParam1 );
    REQUEST_MODEL( uParam1 );
    if (NOT (HAS_MODEL_LOADED( uParam1 )))
    {
        REQUEST_MODEL( uParam1 );
        return 0;
    }
    CLEAR_AREA( uParam2._fU0, uParam2._fU4, uParam2._fU8, 5.00000000, 0 );
    CREATE_CAR( uParam1, uParam2._fU0, uParam2._fU4, uParam2._fU8, uParam0, 1 );
    SET_CAR_HEADING( (uParam0^), uParam5 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    sub_8802( (uParam0^), uParam1, uParam6 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uParam1 );
    }
    return 1;
}

void sub_80280(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    return sub_80019( uParam0, 1, uParam1, uParam4 );
}

void sub_80357(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    return sub_80019( uParam0, 6, uParam1, uParam4 );
}

void sub_80432(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    return sub_80019( uParam0, 7, uParam1, uParam4 );
}

void sub_82073(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (DOES_VEHICLE_EXIST( l_U1241[l_U1721]._fU4 ))
    {
        if (l_U1241[l_U1721]._fU4 != l_U1402)
        {
            DELETE_CAR( ref l_U1241[l_U1721]._fU4 );
        }
    }
    switch (uParam0)
    {
        case 1:
        REQUEST_MODEL( -570033273 );
        while (NOT (HAS_MODEL_LOADED( -570033273 )))
        {
            WAIT( 0 );
        }
        CREATE_CAR( -570033273, uParam1._fU0, uParam1._fU4, uParam1._fU8, ref l_U1241[l_U1721]._fU4, 1 );
        sub_8802( l_U1241[l_U1721]._fU4, -570033273, 9 );
        break;
        default:
        REQUEST_MODEL( -408052231 );
        while (NOT (HAS_MODEL_LOADED( -408052231 )))
        {
            WAIT( 0 );
        }
        CREATE_CAR( -408052231, uParam1._fU0, uParam1._fU4, uParam1._fU8, ref l_U1241[l_U1721]._fU4, 1 );
        sub_8802( l_U1241[l_U1721]._fU4, -408052231, 9 );
        break;
    }
    if (IS_VEH_DRIVEABLE( l_U1241[l_U1721]._fU4 ))
    {
        SET_CAR_AS_MISSION_CAR( l_U1241[l_U1721]._fU4 );
        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U1241[l_U1721]._fU4, 1 );
        SET_CAR_ON_GROUND_PROPERLY( l_U1241[l_U1721]._fU4 );
    }
    return;
}

void sub_85143()
{
    for ( l_U1721 = 0; l_U1721 < l_U1397; l_U1721++ )
    {
        CREATE_CHAR( 26, l_U1240, l_U1692[l_U1721]._fU0, l_U1692[l_U1721]._fU4, l_U1692[l_U1721]._fU8, ref l_U1397[l_U1721], 1 );
        SET_CHAR_HEADING( l_U1397[l_U1721], l_U1760[l_U1721] );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1397[l_U1721], "E1_AODClubroom" );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U1397[l_U1721] );
        SET_CHAR_RELATIONSHIP_GROUP( l_U1397[l_U1721], 23 );
        SET_CHAR_DECISION_MAKER( l_U1397[l_U1721], l_U1473 );
        SET_COMBAT_DECISION_MAKER( l_U1397[l_U1721], l_U1480 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1397[l_U1721], 1 );
        GIVE_WEAPON_TO_CHAR( l_U1397[l_U1721], 7, 30000, 1 );
        SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U1397[l_U1721], 0 );
        SET_CHAR_KEEP_TASK( l_U1397[l_U1721], 1 );
        CLEAR_SEQUENCE_TASK( l_U1795 );
        OPEN_SEQUENCE_TASK( ref l_U1795 );
        TASK_PAUSE( 0, 4000 + (1500 * l_U1721) );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -629.88000000, 1218.33000000, 6.10000000, 3, -2, 8.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_3607() )))
        {
            TASK_COMBAT( 0, sub_3607() );
        }
        CLOSE_SEQUENCE_TASK( l_U1795 );
        TASK_PERFORM_SEQUENCE( l_U1397[l_U1721], l_U1795 );
    }
    return;
}

void sub_86559()
{
    if (NOT (IS_CAR_DEAD( l_U1406[1] )))
    {
        if (NOT (IS_CHAR_DEAD( l_U1241[2]._fU0 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U1241[0]._fU0 )))
            {
                if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1406[1] )))
                {
                    DELETE_CHAR( ref l_U1241[2]._fU0 );
                    DELETE_CHAR( ref l_U1241[0]._fU0 );
                    DELETE_CAR( ref l_U1406[1] );
                    sub_62372( ref l_U1241[3], 1 );
                    sub_62372( ref l_U1241[4], 1 );
                    l_U1964 = 0;
                }
            }
        }
    }
    if (NOT (IS_CAR_DEAD( l_U1241[3]._fU4 )))
    {
        if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1241[3]._fU4 )))
        {
            sub_62372( ref l_U1241[3], 1 );
        }
    }
    if (NOT (IS_CAR_DEAD( l_U1241[4]._fU4 )))
    {
        if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1241[4]._fU4 )))
        {
            sub_62372( ref l_U1241[4], 1 );
        }
    }
    if (NOT l_U1994)
    {
        if (IS_VEH_DRIVEABLE( l_U1402 ))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_3607(), l_U1402 )))
            {
                if (NOT l_U1993)
                {
                    if (NOT (DOES_BLIP_EXIST( l_U1449 )))
                    {
                        if (NOT (sub_23529( l_U1482 )))
                        {
                            ADD_BLIP_FOR_CAR( l_U1402, ref l_U1449 );
                            SET_BLIP_AS_FRIENDLY( l_U1449, 1 );
                            PRINT_NOW( "B4_GBOB", 7500, 1 );
                            l_U1993 = 1;
                        }
                    }
                }
            }
            else if (DOES_BLIP_EXIST( l_U1449 ))
            {
                REMOVE_BLIP( l_U1449 );
                CLEAR_THIS_PRINT( "B4_GBOB" );
                l_U1994 = 1;
            }
        }
        else
        {
            l_U367 = 6;
            l_U362 = 9;
        }
    }
    else if (NOT (IS_CAR_DEAD( l_U1402 )))
    {
        if (IS_CHAR_IN_CAR( sub_3607(), l_U1402 ))
        {
            if (NOT l_U1998)
            {
                if (NOT sub_21554())
                {
                    PRINT_NOW( "B4_LEAVEAREA", 7500, 1 );
                    l_U1998 = 1;
                }
            }
            CLEAR_THIS_PRINT( "B4_GETONBIKE" );
            if (DOES_BLIP_EXIST( l_U1449 ))
            {
                REMOVE_BLIP( l_U1449 );
            }
            if (NOT (IS_CHAR_IN_AREA_2D( sub_3607(), 64839, 1152, 65016, 1365, 0 )))
            {
                CLEAR_PRINTS();
                sub_87271();
            }
        }
        else if (NOT (DOES_BLIP_EXIST( l_U1449 )))
        {
            CLEAR_PRINTS();
            ADD_BLIP_FOR_CAR( l_U1402, ref l_U1449 );
            CHANGE_BLIP_COLOUR( l_U1449, 3 );
            if (NOT l_U1971)
            {
                PRINT_NOW( "B4_GETONBIKE", 7500, 1 );
                l_U1971 = 1;
            }
        }
    }
    else
    {
        l_U367 = 6;
        l_U362 = 9;
    }
    sub_96694();;
    if (l_U1964)
    {
        if (IS_CHAR_DEAD( l_U1241[0]._fU0 ))
        {
            l_U367 = 1;
            l_U362 = 9;
        }
        else if (IS_CHAR_DEAD( l_U1241[2]._fU0 ))
        {
            l_U367 = 3;
            l_U362 = 9;
        }
    }
    sub_97051();
    return;
}

void sub_87271()
{
    sub_87280();
    sub_94038();
    CLEAR_WANTED_LEVEL( sub_26182() );
    g_U24 = 82;
    sub_3151();
    return;
}

void sub_87280()
{
    sub_87289();
    return;
}

void sub_87289()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_87307();
    sub_87366( iVar2, iVar3, iVar4 );
    return;
}

void sub_87307()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U348[I] = 4;
    }
    return;
}

void sub_87366(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    sub_87398( iVar5, uParam0, uParam1, uParam2, "Contact_1" );
    return;
}

void sub_87398(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    char[64] cVar9;
    int iVar25;
    int I;
    int iVar27;
    boolean bVar28;
    unknown uVar29;
    unknown uVar30;
    int iVar31;
    boolean bVar32;

    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U14838[uParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_87494( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_87494( ref cVar9 );
            return;
        }
        iVar7 = g_U14838[uParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U14838[uParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_87494( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_87494( ref cVar9 );
            return;
        }
        iVar7 = g_U14838[uParam0]._fU160._fU76;
    }
    else if (g_U14838[uParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_87494( ref cVar9 );
        return;
    }
    if (g_U14838[uParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_87494( ref cVar9 );
        return;
    }
    iVar7 = g_U14838[uParam0]._fU0._fU4;
    iVar8 = sub_88071( uParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U12306[uParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U14838[uParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            g_U12306[uParam0]._fU144[I]._fU8++;
            if ((NOT g_U12306[uParam0]._fU144[I]._fU12) AND (g_U12306[uParam0]._fU144[I]._fU8 >= g_U12306[uParam0]._fU144[I]._fU4))
            {
                iVar27 = 0;
                GET_GAME_TIMER( ref iVar27 );
                g_U12306[uParam0]._fU144[I]._fU16 = iVar27 + 90000;
            }
        }
    }
    if (NOT (sub_88519( uParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U14838[uParam0]._fU160._fU84++;
    }
    SET_PLAYER_MOOD_NORMAL( sub_26182() );
    sub_2150();
    bVar28 = true;
    uVar29 = sub_88071( uParam0, iVar7 );
    uVar30 = sub_1774( uParam0 );
    if (bParam1)
    {
        iVar31 = g_U14838[uParam0]._fU0._fU56;
        if ((iVar31 == 5) || (iVar31 == 6))
        {
            bVar28 = false;
        }
        if (NOT g_U0)
        {
            bVar32 = true;
            if (IS_BIT_SET( g_U20913[uVar29]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U10982 );
                sub_92973( 9, ref g_U14838[uParam0]._fU0._fU24 );
                if ((NOT bVar28) AND (g_U12303))
                {
                    bVar32 = false;
                }
                if (bVar32)
                {
                    sub_93407();
                    g_U10974._fU8 = 1;
                    g_U10974._fU20 = sub_93492( uParam0, iVar7 );
                }
            }
            if (bVar28)
            {
                sub_93571( uParam0 );
                sub_93610( 0 );
                sub_2050( uVar30, 0 );
                g_U11093 = 1;
                g_U39101 = 1;
                g_U11108 = 0;
            }
            g_U12306[uParam0]._fU12 = 1;
        }
        if (bVar28)
        {
            sub_93799();
        }
    }
    if (bParam2)
    {
        sub_93407();
        sub_93898();
        sub_93610( 0 );
        g_U11094 = 1;
        g_U11108 = 0;
    }
    if (bParam3)
    {
        sub_93407();
        sub_93950();
        sub_93610( 0 );
        sub_2050( uVar30, 0 );
    }
    sub_1661();
    return;
}

void sub_87494(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_88071(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 11))
    {
        sub_2005( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U26515[iParam0]._fU0;
    iVar5 = g_U26515[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U20913[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

int sub_88519(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_88615( uParam1 );
        break;
        case 1:
        bVar8 = sub_89310( uParam1 );
        break;
        case 2:
        bVar8 = sub_90043( uParam1 );
        break;
        case 3:
        bVar8 = sub_90280( uParam1 );
        break;
        case 4:
        bVar8 = sub_90446( uParam1 );
        break;
        case 5:
        bVar8 = sub_90645( uParam1 );
        break;
        case 6:
        bVar8 = sub_90840( uParam1 );
        break;
        case 7:
        bVar8 = sub_91045( uParam1 );
        break;
        case 8:
        bVar8 = sub_91250( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_89658( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_88071( uParam0, uParam1 );
    if (bParam3)
    {
        sub_91536( uVar9, uParam0 );
    }
    return 1;
}

int sub_88615(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_88712( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 2:
        sub_88712( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 3:
        sub_88712( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 4:
        sub_88712( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 5:
        sub_88712( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 6:
        sub_88712( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 0:
        case 10: break;
        default:
        sub_89217( "Contact 1", 1 );
        sub_88712( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_89217( "Contact 1", 0 );
        sub_88712( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_88712(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_88723( uParam1 );
    sub_88897( uParam0, 0, uParam2 );
    sub_88897( uParam0, 1, uParam3 );
    sub_88897( uParam0, 2, uParam4 );
    ProtectedSet(g_U20902[4], ProtectedGet(g_U20902[4]) + iParam5);
    sub_87307();
    return;
}

void sub_88723(unknown uParam0)
{
    ADD_SCORE( sub_26182(), uParam0 );
    sub_88748( uParam0 );
    return;
}

void sub_88748(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_2005( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_88897(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U12306[uParam0]._fU40[uParam1] += iParam2;
    if (g_U12306[uParam0]._fU40[uParam1] < 0)
    {
        g_U12306[uParam0]._fU40[uParam1] = 0;
    }
    if (g_U12306[uParam0]._fU40[uParam1] > 100)
    {
        g_U12306[uParam0]._fU40[uParam1] = 100;
    }
    return;
}

void sub_89217(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_89310(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_88712( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_88712( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_88712( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_88712( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 4:
        sub_88712( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        sub_88712( iVar3, 0, sub_89536(), sub_89802(), 0, 0 );
        break;
        default:
        sub_89217( "Contact 2", 1 );
        sub_88712( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_89217( "Contact 2", 0 );
        sub_88712( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_89536()
{
    switch (l_U348[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_89658( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_89658(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_89802()
{
    switch (l_U348[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_89658( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

int sub_90043(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_88712( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_88712( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_88712( iVar3, 7000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_88712( iVar3, 1000, 3, 1, 0, 0 );
        break;
        case 4: break;
        default:
        sub_89217( "Contact 3", 1 );
        sub_88712( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_89217( "Contact 3", 0 );
        sub_88712( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_90280(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_88712( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_88712( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_89217( "Friend 4", 1 );
        sub_88712( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_89217( "Friend 4", 0 );
        sub_88712( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_90446(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_88712( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_88712( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_88712( iVar3, 3000, 5, 2, 0, 0 );
        break;
        default:
        sub_89217( "Contact 5", 1 );
        sub_88712( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_89217( "Contact 5", 0 );
        sub_88712( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_90645(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_88712( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_88712( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_88712( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_89217( "Contact 6", 1 );
        sub_88712( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_89217( "Contact 6", 0 );
        sub_88712( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_90840(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        sub_88712( iVar3, 0, sub_89536(), sub_89802(), 0, 0 );
        break;
        default:
        sub_89217( "Friend 7", 1 );
        sub_88712( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_89217( "Friend 7", 0 );
        sub_88712( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_91045(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        sub_88712( iVar3, 0, sub_89536(), sub_89802(), 0, 0 );
        break;
        default:
        sub_89217( "Friend 8", 1 );
        sub_88712( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_89217( "Friend 8", 0 );
        sub_88712( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_91250(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 8;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_88712( iVar3, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_89217( "Contact 9", 1 );
        sub_88712( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_89217( "Contact 9", 0 );
        sub_88712( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_91536(int iParam0, int iParam1)
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
    if (g_U10993)
    {
        return;
    }
    if (sub_91597( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_92315( iParam1 );
    }
    return;
}

int sub_91597(int iParam0, int iParam1)
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
    iVar4 = g_U14838[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U20913[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U20913[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_91737( 0, iVar6 );
            g_U14815[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U20913[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_91737(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_91907( 0 );
    return;
}

void sub_91907(boolean bParam0)
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
        if (g_U26712[I]._fU4 == g_U26712[I]._fU0)
        {
            fVar4 = g_U26712[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U26712[I]._fU0 );
            fVar6 = TO_FLOAT( g_U26712[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U26712[I]._fU8;
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
    SET_FLOAT_STAT( 133, fVar3 );
    if (bVar7)
    {
        sub_92152();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_92152()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

void sub_92315(int iParam0)
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
    if (g_U14815[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U14815[iParam0]._fU4 == g_U14815[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U14815[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U14815[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_92546( 121 );
        SET_FLOAT_STAT( 121, fVar3 );
        break;
        case 1:
        sub_92546( 122 );
        SET_FLOAT_STAT( 122, fVar3 );
        break;
        case 2:
        sub_92546( 125 );
        SET_FLOAT_STAT( 125, fVar3 );
        break;
        case 3:
        sub_92546( 126 );
        SET_FLOAT_STAT( 126, fVar3 );
        break;
        case 4:
        sub_92546( 127 );
        SET_FLOAT_STAT( 127, fVar3 );
        break;
        case 5:
        sub_92546( 128 );
        SET_FLOAT_STAT( 128, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_92546(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_92973(unknown uParam0, unknown uParam1)
{
    sub_92992( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_92992(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_93407()
{
    g_U10974._fU0 = 1;
    g_U10974._fU4 = 0;
    g_U10974._fU8 = 0;
    g_U10974._fU12 = 0;
    g_U10974._fU16 = 0;
    g_U10974._fU20 = 0;
    g_U10974._fU28 = 6;
    return;
}

int sub_93492(int iParam0, int iParam1)
{
    if (iParam0 == 2)
    {
        if (iParam1 == 3)
        {
            return 1;
        }
    }
    if (iParam0 == 0)
    {
        if (iParam1 == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_93571(unknown uParam0)
{
    sub_1522();
    g_U12306[uParam0]._fU116 = 0;
    return;
}

void sub_93610(unknown uParam0)
{
    if (g_U10684)
    {
        g_U10684 = 0;
        return;
    }
    SET_BIT( ref g_U10681._fU0, 1 );
    sub_93661( ref g_U10681._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10681._fU0, 3 );
    g_U10681._fU4 = 0;
    g_U10681._fU8 = 0;
    return;
}

void sub_93661(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_93799()
{
    sub_93808();
    return;
}

void sub_93808()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_93898()
{
    sub_93808();
    return;
}

void sub_93950()
{
    sub_93808();
    StrCopy( ref g_U10987, "FPASS", 16 );
    return;
}

void sub_94038()
{
    sub_94047();
    return;
}

void sub_94047()
{
    int I;
    boolean bVar3;

    I = 0;
    bVar3 = false;
    for ( I = 0; I < 13; I++ )
    {
        if (g_U38937[I]._fU4)
        {
            bVar3 = true;
        }
    }
    if (bVar3)
    {
        sub_94113();
        sub_94198();
        sub_94516();
    }
    bVar3 = false;
    for ( I = 0; I < 6; I++ )
    {
        if (g_U39058[I]._fU4)
        {
            g_U39058[I]._fU4 = 0;
            g_U39058[I]._fU12++;
            g_U39058[I]._fU20 = -2;
            if (sub_95754( g_U39058[I]._fU16 ))
            {
                g_U39104 = 1;
            }
            if (sub_96438( g_U39058[I]._fU16 ))
            {
                g_U39105 = 1;
            }
            bVar3 = true;
        }
    }
    return;
}

void sub_94113()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        g_U39042[I]._fU0 = -1;
        g_U39042[I]._fU4 = 0;
        g_U39042[I]._fU8 = 0;
    }
    return;
}

void sub_94198()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 0;
    for ( I = 0; I < 13; I++ )
    {
        if (g_U38937[I]._fU4)
        {
            if (g_U38937[I]._fU0)
            {
                g_U38937[I]._fU12++;
            }
            if (iVar3 >= 5)
            {
                SCRIPT_ASSERT( "Prepare_Recurring_Lost_Stats_For_Display: Trying to store too many sets of display stats" );
                return;
            }
            g_U39042[iVar3]._fU0 = g_U38937[I]._fU16;
            g_U39042[iVar3]._fU4 = g_U38937[I]._fU0;
            g_U39042[iVar3]._fU8 = g_U38937[I]._fU12;
            iVar3++;
            g_U38937[I]._fU4 = 0;
        }
    }
    return;
}

void sub_94516()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    boolean bVar9;
    int iVar10;
    int iVar11;
    int iVar12;

    bVar9 = false;
    iVar10 = 0;
    iVar11 = 0;
    iVar12 = 0;
    while (iVar12 < 13)
    {
        bVar9 = false;
        if (NOT g_U38937[iVar12]._fU0)
        {
            uVar2 = {g_U38937[iVar12]};
            iVar10 = iVar12 + 1;
            iVar11 = iVar12;
            while (iVar10 < 13)
            {
                g_U38937[iVar11] = {g_U38937[iVar10]};
                iVar11++;
                iVar10++;
            }
            g_U38937[iVar11] = {uVar2};
            sub_94681( iVar11 );
            sub_95103( iVar11 );
            bVar9 = true;
        }
        if (NOT bVar9)
        {
            iVar12++;
        }
    }
    return;
}

void sub_94681(unknown uParam0)
{
    int iVar3;
    unknown uVar4;
    unknown uVar5;

    iVar3 = g_U38937[uParam0]._fU20;
    if (g_U38937[uParam0]._fU8)
    {
        iVar3 += 13;
    }
    uVar4 = g_U38937[uParam0]._fU16;
    uVar5 = g_U38937[uParam0]._fU12;
    sub_94765( iVar3, uVar4, uVar5 );
    return;
}

void sub_94765(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    if (g_U9592[uParam1]._fU12 == 0)
    {
        PRINTNL();
        PRINTNL();
        PRINTSTRING( "-------------------------------------------------------------" );
        PRINTNL();
        PRINTSTRING( "Memorial - Keith returned number = " );
        PRINTINT( uParam1 );
        PRINTNL();
        PRINTSTRING( "-------------------------------------------------------------" );
        PRINTNL();
        PRINTNL();
        g_U9592[uParam1]._fU4 = uParam0;
        g_U9592[uParam1]._fU0 = uParam1;
        g_U9592[uParam1]._fU8 = uParam2;
        g_U9592[uParam1]._fU12 = 1;
        return;
    }
    return;
}

void sub_95103(unknown uParam0)
{
    unknown uVar3;

    g_U38937[uParam0]._fU0 = 1;
    g_U38937[uParam0]._fU4 = 0;
    g_U38937[uParam0]._fU12 = 1;
    g_U38937[uParam0]._fU16 = sub_95154();
    uVar3 = g_U38937[uParam0]._fU24;
    g_U38937[uParam0]._fU24 = -1;
    sub_95343( uVar3 );
    if (g_U38937[uParam0]._fU8)
    {
        g_U38937[uParam0]._fU8 = 0;
    }
    else
    {
        g_U38937[uParam0]._fU8 = 1;
    }
    return;
}

void sub_95154()
{
    int Result;
    boolean bVar3;
    int I;

    Result = -1;
    bVar3 = true;
    while (bVar3)
    {
        bVar3 = false;
        if (g_U38936 >= 24)
        {
            g_U38936 = 0;
        }
        Result = g_U38936;
        I = 0;
        for ( I = 0; I < 13; I++ )
        {
            if (NOT bVar3)
            {
                if (g_U38937[I]._fU16 == Result)
                {
                    bVar3 = true;
                }
            }
        }
        g_U38936++;
    }
    return Result;
}

void sub_95343(int iParam0)
{
    int I;

    if (iParam0 == -1)
    {
        SCRIPT_ASSERT( "Reuse_VoiceID: VoiceID being re-used is UNKNOWN" );
        return;
    }
    I = 0;
    for ( I = 0; I < 12; I++ )
    {
        if (g_U39029[I] == -1)
        {
            g_U39029[I] = iParam0;
            return;
        }
    }
    SCRIPT_ASSERT( "Reuse_VoiceID: Failed to find an unused slot for the VoiceID" );
    return;
}

int sub_95754(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    uVar3 = {sub_95765( uParam0 )};
    uVar7 = GET_STRING_FROM_TEXT_FILE( ref uVar3 );
    if (COMPARE_STRING( uVar7, "Terry" ))
    {
        return 1;
    }
    return 0;
}

void sub_95765(int iParam0)
{
    int iVar3;
    char[16] Result;
    int iVar8;

    iVar3 = 30;
    StrCopy( ref Result, "RECLOST_", 16 );
    if ((iParam0 < 0) || (iParam0 >= iVar3))
    {
        SCRIPT_ASSERT( "Return_Recurring_Lost_Name_From_NameID: NameID out of range" );
        return Result;
    }
    iVar8 = iParam0;
    if (iVar8 >= 40)
    {
        SCRIPT_ASSERT( "Return_Recurring_Lost_Name_From_NameID: more than 40 Lost Member names?" );
        return Result;
    }
    if (iVar8 >= 30)
    {
        ConcatString(ref Result, "3", 16);
        iVar8 -= 30;
    }
    if (iVar8 >= 20)
    {
        ConcatString(ref Result, "2", 16);
        iVar8 -= 20;
    }
    if (iVar8 >= 10)
    {
        ConcatString(ref Result, "1", 16);
        iVar8 -= 10;
    }
    switch (iVar8)
    {
        case 0:
        ConcatString(ref Result, "0", 16);
        break;
        case 1:
        ConcatString(ref Result, "1", 16);
        break;
        case 2:
        ConcatString(ref Result, "2", 16);
        break;
        case 3:
        ConcatString(ref Result, "3", 16);
        break;
        case 4:
        ConcatString(ref Result, "4", 16);
        break;
        case 5:
        ConcatString(ref Result, "5", 16);
        break;
        case 6:
        ConcatString(ref Result, "6", 16);
        break;
        case 7:
        ConcatString(ref Result, "7", 16);
        break;
        case 8:
        ConcatString(ref Result, "8", 16);
        break;
        case 9:
        ConcatString(ref Result, "9", 16);
        break;
        default: SCRIPT_ASSERT( "Return_Recurring_Lost_Name_From_NameID: array position not in range 0 - 9" );
    }
    return Result;
}

int sub_96438(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    uVar3 = {sub_95765( uParam0 )};
    uVar7 = GET_STRING_FROM_TEXT_FILE( ref uVar3 );
    if (COMPARE_STRING( uVar7, "Clay" ))
    {
        return 1;
    }
    return 0;
}

void sub_96694()
{
    for ( l_U1721 = 0; l_U1721 < l_U1397; l_U1721++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U1397[l_U1721] )))
        {
            if (((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1397[l_U1721], sub_3607(), 2.00000000, 2.00000000, 2.00000000, 0 )) || (IS_CHAR_IN_AREA_2D( sub_3607(), -626.74000000, 1200.35000000, -622.70000000, 1206.57000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( l_U1397[l_U1721], -629.88000000, 1218.33000000, 6.10000000, 8.00000000, 8.00000000, 8.00000000, 0 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U1397[l_U1721], 29, ref l_U1796 );
                if (l_U1796 == 1)
                {
                    TASK_COMBAT( l_U1397[l_U1721], sub_3607() );
                }
            }
        }
    }
    return;
}

void sub_97051()
{
    int iVar2;
    unknown[2] uVar3;
    unknown uVar6;

    array(ref uVar3, 2);
    switch (l_U1978)
    {
        case 0:
        REQUEST_MODEL( 2046537925 );
        REQUEST_MODEL( -183203150 );
        l_U1978++;
        break;
        case 1:
        if ((HAS_MODEL_LOADED( 2046537925 )) AND (HAS_MODEL_LOADED( -183203150 )))
        {
            GET_INTERIOR_FROM_CHAR( sub_3607(), ref iVar2 );
            if (iVar2 == nil)
            {
                GET_GAME_TIMER( ref l_U1989 );
                GENERATE_RANDOM_FLOAT_IN_RANGE( 1.00000000, 3.00000000, ref uVar6 );
                l_U1988 = FLOOR( uVar6 * 1000.00000000 );
                l_U1978++;
            }
        }
        break;
        case 2:
        if ((HAS_MODEL_LOADED( 2046537925 )) AND (HAS_MODEL_LOADED( -183203150 )))
        {
            if (sub_44034( l_U1989, l_U1988 ))
            {
                GET_GAME_TIMER( ref l_U1990 );
                l_U1992 = 1;
                SET_WANTED_MULTIPLIER( 1.00000000 );
                CREATE_CAR( 2046537925, -584.83860000, 1151.88300000, 8.94920000, ref l_U1979[0], 1 );
                SET_CAR_HEADING( l_U1979[0], 84.34170000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U1979[0] );
                CREATE_CHAR_AS_PASSENGER( l_U1979[0], 6, -183203150, 0, ref l_U1982[2] );
                CREATE_CHAR_INSIDE_CAR( l_U1979[0], 6, -183203150, ref l_U1982[0] );
                SWITCH_CAR_SIREN( l_U1979[0], 1 );
                OPEN_SEQUENCE_TASK( ref uVar3[0] );
                TASK_CAR_DRIVE_TO_COORD( 0, l_U1979[0], -615.69600000, 1215.93400000, 5.52120000, 20.00000000, 1, 2046537925, 2, 5.00000000, -1 );
                CLOSE_SEQUENCE_TASK( uVar3[0] );
                TASK_PERFORM_SEQUENCE( l_U1982[0], uVar3[0] );
                CLEAR_SEQUENCE_TASK( uVar3[0] );
                CREATE_CAR( 2046537925, -600.21590000, 1347.25300000, 16.17800000, ref l_U1979[1], 1 );
                SET_CAR_HEADING( l_U1979[1], 352.07910000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U1979[1] );
                CREATE_CHAR_AS_PASSENGER( l_U1979[1], 6, -183203150, 0, ref l_U1982[3] );
                CREATE_CHAR_INSIDE_CAR( l_U1979[1], 6, -183203150, ref l_U1982[1] );
                SWITCH_CAR_SIREN( l_U1979[1], 1 );
                OPEN_SEQUENCE_TASK( ref uVar3[1] );
                TASK_CAR_DRIVE_TO_COORD( 0, l_U1979[1], -643.01600000, 1219.64900000, 4.90860000, 20.00000000, 1, 2046537925, 2, 5.00000000, -1 );
                CLOSE_SEQUENCE_TASK( uVar3[1] );
                TASK_PERFORM_SEQUENCE( l_U1982[1], uVar3[1] );
                CLEAR_SEQUENCE_TASK( uVar3[1] );
                l_U1978++;
            }
        }
        break;
        case 3:
        if ((sub_67220( l_U1982[1], 1, 0 )) || (sub_67220( l_U1982[0], 1, 0 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3607(), -640.99430000, 1215.98200000, 5.91360000, 36.00000000, 21.00000000, 3.00000000, 0 ))
            {
                ALTER_WANTED_LEVEL( sub_26182(), 2 );
                l_U1978++;
            }
        }
        break;
    }
    if (l_U1992)
    {
        if (sub_44034( l_U1990, 1500 ))
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                if (NOT sub_21554())
                {
                    sub_21746( "E1B4_SIRENS", ref l_U1482, 6, 1 );
                    l_U1992 = 0;
                }
            }
        }
    }
    return;
}

int sub_98084()
{
    int iVar2;
    int I;

    iVar2 = 0;
    for ( I = 0; I < l_U1241; I++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U1241[I]._fU0 )))
        {
            SET_CHAR_PROOFS( l_U1241[I]._fU0, 1, 1, 1, 1, 1 );
        }
    }
    switch (l_U1823)
    {
        case 0:
        sub_98214();
        CLEAR_PRINTS();
        sub_3199( ref l_U1482, 0 );
        sub_3508( 1, ref l_U1241 );
        SWITCH_ROADS_OFF( -1743.54000000, 342.30960000, 0.00000000, -1671.31100000, 393.63660000, 100.00000000 );
        l_U1491 = 0;
        l_U1492 = 0;
        l_U1488 = 0;
        l_U1489 = 0;
        l_U1490 = 0;
        l_U1819 = 0;
        switch (l_U367)
        {
            case 1:
            l_U1822 = "B4_BILLYDEAD";
            l_U1821 = "E1B4_BDEAD";
            l_U1820 = "E1B4_DROPJ";
            sub_3706();
            break;
            case 2:
            l_U1821 = "";
            l_U1820 = "E1B4_DROP";
            l_U1822 = "B4_JIMDEAD";
            break;
            case 3:
            l_U1821 = "E1B4_BRDEAD";
            l_U1820 = "E1B4_DROP";
            l_U1822 = "B4_BRIANDEAD";
            break;
            case 4:
            l_U1821 = "";
            l_U1820 = "E1B4_DROP";
            l_U1822 = "B4_TERRYDEAD";
            break;
            case 5:
            l_U1821 = "";
            l_U1820 = "E1B4_DROP";
            l_U1822 = "B4_CLAYDEAD";
            break;
            case 6:
            l_U1821 = "E1B4_JBIKE";
            l_U1820 = "E1B4_JFUCK";
            l_U1822 = "B4_PBIKEDEST";
            break;
            case 7:
            l_U1821 = "E1B4_DUMP";
            l_U1820 = "E1B4_JFUCK";
            l_U1822 = "B4_PBIKEAB";
            break;
            case 8:
            l_U1821 = "E1B4_BIKE";
            l_U1820 = "E1B4_DBBF";
            l_U1822 = "B4_BBIKEDEST";
            break;
            case 9:
            l_U1821 = "E1B4_USE";
            l_U1820 = "E1B4_DROPG";
            l_U1822 = "B4_NOAMMO";
            break;
        }
        sub_21746( l_U1821, ref l_U1824, 6, 1 );
        GET_GAME_TIMER( ref l_U1830 );
        l_U1823 = 1;
        break;
        case 1:
        if ((NOT (sub_23529( l_U1824 ))) || (sub_44034( l_U1830, 10000 )))
        {
            PRINT_NOW( l_U1822, 7000, 1 );
            l_U1823 = 2;
        }
        break;
        case 2:
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            for ( l_U1721 = 0; l_U1721 < l_U1241; l_U1721++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U1241[l_U1721]._fU0 )))
                {
                    iVar2++;
                }
            }
            if (iVar2 > 0)
            {
                l_U1823 = 3;
            }
            else
            {
                sub_56590();
            }
        }
        break;
        case 3:
        return 1;
        break;
    }
    return 0;
}

void sub_98214()
{
    if (DOES_BLIP_EXIST( l_U1449 ))
    {
        REMOVE_BLIP( l_U1449 );
    }
    if (DOES_BLIP_EXIST( l_U1450 ))
    {
        REMOVE_BLIP( l_U1450 );
    }
    if (DOES_BLIP_EXIST( l_U1451 ))
    {
        REMOVE_BLIP( l_U1451 );
    }
    if (DOES_BLIP_EXIST( l_U1452 ))
    {
        REMOVE_BLIP( l_U1452 );
    }
    for ( l_U1721 = 0; l_U1721 < l_U1453; l_U1721++ )
    {
        if (DOES_BLIP_EXIST( l_U1453[l_U1721] ))
        {
            REMOVE_BLIP( l_U1453[l_U1721] );
        }
    }
    for ( l_U1721 = 0; l_U1721 < l_U1209; l_U1721++ )
    {
        if (DOES_BLIP_EXIST( l_U1209[l_U1721] ))
        {
            REMOVE_BLIP( l_U1209[l_U1721] );
        }
    }
    return;
}

void sub_99440()
{
    int iVar2;
    int iVar3;
    int iVar4;
    boolean bVar5;
    int iVar6;

    if (NOT l_U1968)
    {
        if (NOT sub_99460())
        {
            l_U1968 = 1;
        }
    }
    else if (((l_U366 > 0) AND (NOT l_U1969)) AND (IS_SCREEN_FADED_IN()))
    {
        if (sub_99460())
        {
            CLEAR_PRINTS();
            DISABLE_PAUSE_MENU( 1 );
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            DISABLE_PAUSE_MENU( 0 );
            sub_3324( 0 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            l_U1969 = 1;
            l_U366 = 2;
        }
    }
    switch (l_U366)
    {
        case 0:
        if (IS_PLAYER_CONTROL_ON( sub_26182() ))
        {
            if (sub_59488( 1, 0 ))
            {
                if (sub_99765())
                {
                    SET_PLAYER_CONTROL( sub_26182(), 0 );
                    if (IS_SCREEN_FADING_IN())
                    {
                        while (IS_SCREEN_FADING_IN())
                        {
                            WAIT( 0 );
                        }
                    }
                    DO_SCREEN_FADE_OUT( 500 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    SET_PLAYER_CONTROL( sub_26182(), 0 );
                    sub_99948();
                    CLEAR_WANTED_LEVEL( sub_26182() );
                    CLEAR_PRINTS();
                    CLEAR_HELP();
                    sub_3199( ref l_U1482, 0 );
                    sub_3508( 0, ref l_U1241 );
                    l_U1730[0] = 0;
                    l_U1730[1] = 700;
                    l_U1730[2] = 400;
                    l_U1730[3] = 1300;
                    l_U1730[4] = 1000;
                    CLEAR_AREA( l_U1617[0]._fU0, l_U1617[0]._fU4, l_U1617[0]._fU8, 300, 1 );
                    EXTINGUISH_FIRE_AT_POINT( l_U1617[0]._fU0, l_U1617[0]._fU4, l_U1617[0]._fU8, 300 );
                    if (IS_VEH_DRIVEABLE( l_U1402 ))
                    {
                        sub_44500( "Player bike is driveable" );
                        if (NOT (IS_CHAR_INJURED( sub_3607() )))
                        {
                            if (NOT (IS_CHAR_IN_CAR( sub_3607(), l_U1402 )))
                            {
                                WARP_CHAR_INTO_CAR( sub_3607(), l_U1402 );
                            }
                            SET_CAR_COORDINATES( l_U1402, l_U1617[l_U1737]._fU0, l_U1617[l_U1737]._fU4, l_U1617[l_U1737]._fU8 );
                            SET_CAR_HEADING( l_U1402, l_U1770[l_U1737] );
                            SET_CAR_ON_GROUND_PROPERLY( l_U1402 );
                            APPLY_FORCE_TO_CAR( l_U1402, 1, 0, 0, -0.20000000, 0, 0, 0, 0, 1, 1, 0 );
                            l_U1737++;
                        }
                    }
                    else
                    {
                        l_U1970 = 1;
                        sub_44500( "Player bike not driveable" );
                    }
                    if (NOT (IS_CHAR_IN_ANY_CAR( sub_3607() )))
                    {
                        SET_CHAR_COORDINATES( sub_3607(), 63818, 361, 26 );
                    }
                    iVar4 = -1;
                    for ( l_U1721 = 0; l_U1721 < l_U1241; l_U1721++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U1241[l_U1721]._fU0 )))
                        {
                            sub_44321( l_U1721, "This ped not killed...." );
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1241[l_U1721]._fU0 );
                            if ((NOT (IS_VEH_DRIVEABLE( l_U1241[l_U1721]._fU4 ))) || (l_U1241[l_U1721]._fU4 == l_U1402))
                            {
                                if (l_U1721 > 0)
                                {
                                    sub_44321( l_U1721, "Creating replacement bike for this ped...." );
                                    sub_82073( l_U1721, l_U1617[l_U1737]._fU0, l_U1617[l_U1737]._fU4, l_U1617[l_U1737]._fU8 );
                                }
                            }
                            if (IS_VEH_DRIVEABLE( l_U1241[l_U1721]._fU4 ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U1241[l_U1721]._fU0 )))
                                {
                                    if (NOT (IS_CHAR_IN_CAR( l_U1241[l_U1721]._fU0, l_U1241[l_U1721]._fU4 )))
                                    {
                                        sub_44321( l_U1721, "Trying to warp this ped onto this vehicle..." );
                                        GET_DRIVER_OF_CAR( l_U1241[l_U1721]._fU4, ref iVar2 );
                                        if (iVar2 != nil)
                                        {
                                            sub_44321( sub_104118( iVar2 ), "This ped is the driver...." );
                                            SCRIPT_ASSERT( "Bike already has driver. Please tell DaveW" );
                                        }
                                        else
                                        {
                                            WARP_CHAR_INTO_CAR( l_U1241[l_U1721]._fU0, l_U1241[l_U1721]._fU4 );
                                        }
                                    }
                                    else
                                    {
                                        sub_44321( l_U1721, "Biker is using his bike...." );
                                    }
                                    SET_CAR_COORDINATES( l_U1241[l_U1721]._fU4, l_U1617[l_U1737]._fU0, l_U1617[l_U1737]._fU4, l_U1617[l_U1737]._fU8 );
                                    SET_CAR_HEADING( l_U1241[l_U1721]._fU4, l_U1770[l_U1737] );
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1241[l_U1721]._fU0, 1 );
                                    SET_CAR_ON_GROUND_PROPERLY( l_U1241[l_U1721]._fU4 );
                                    APPLY_FORCE_TO_CAR( l_U1241[l_U1721]._fU4, 1, 0, 0, -0.20000000, 0, 0, 0, 0, 1, 1, 0 );
                                    if (NOT (IS_CHAR_DEAD( sub_3607() )))
                                    {
                                        TASK_LOOK_AT_CHAR( l_U1241[l_U1721]._fU0, sub_3607(), -2, 0 );
                                    }
                                    if (l_U1737 == 1)
                                    {
                                        iVar4 = l_U1721;
                                    }
                                    l_U1737++;
                                }
                            }
                        }
                        else if (DOES_CHAR_EXIST( l_U1241[l_U1721]._fU0 ))
                        {
                            DELETE_CHAR( ref l_U1241[l_U1721]._fU0 );
                        }
                        if (DOES_VEHICLE_EXIST( l_U1241[l_U1721]._fU4 ))
                        {
                            if (l_U1241[l_U1721]._fU4 != l_U1402)
                            {
                                DELETE_CAR( ref l_U1241[l_U1721]._fU4 );
                            }
                        }
                    }
                    l_U1815 = 0;
                    LOAD_SCENE( l_U1617[0]._fU0, l_U1617[0]._fU4, l_U1617[0]._fU8 );
                    for ( l_U1721 = 0; l_U1721 < l_U1241; l_U1721++ )
                    {
                        if (NOT (IS_CAR_DEAD( l_U1241[l_U1721]._fU4 )))
                        {
                            SET_CAR_ON_GROUND_PROPERLY( l_U1241[l_U1721]._fU4 );
                        }
                    }
                    iVar6 = -1;
                    if (NOT (IS_CHAR_DEAD( sub_3607() )))
                    {
                        if (NOT (IS_VEH_DRIVEABLE( l_U1402 )))
                        {
                            for ( l_U1721 = 0; l_U1721 < l_U1241; l_U1721++ )
                            {
                                if (NOT bVar5)
                                {
                                    if (IS_VEH_DRIVEABLE( l_U1241[l_U1721]._fU4 ))
                                    {
                                        if (IS_CAR_PASSENGER_SEAT_FREE( l_U1241[l_U1721]._fU4, 0 ))
                                        {
                                            WARP_CHAR_INTO_CAR_AS_PASSENGER( sub_3607(), l_U1241[l_U1721]._fU4, 0 );
                                            bVar5 = true;
                                            iVar6 = l_U1721;
                                        }
                                        else
                                        {
                                            sub_44500( "Car passenger seat not free" );
                                        }
                                    }
                                }
                            }
                        }
                        if (iVar4 >= 0)
                        {
                            if (NOT (IS_CHAR_DEAD( l_U1241[iVar4]._fU0 )))
                            {
                                TASK_LOOK_AT_CHAR( sub_3607(), l_U1241[iVar4]._fU0, -2, 0 );
                            }
                        }
                    }
                    bVar5 = false;
                    if (NOT (IS_CHAR_DEAD( l_U1241[0]._fU0 )))
                    {
                        if (NOT (IS_VEH_DRIVEABLE( l_U1241[0]._fU4 )))
                        {
                            for ( l_U1721 = 0; l_U1721 < l_U1241; l_U1721++ )
                            {
                                if (NOT bVar5)
                                {
                                    if (IS_VEH_DRIVEABLE( l_U1402 ))
                                    {
                                        if (IS_CAR_PASSENGER_SEAT_FREE( l_U1402, 0 ))
                                        {
                                            sub_44500( "Warping Billy onto players bike..." );
                                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U1241[0]._fU0, l_U1402, 0 );
                                            bVar5 = true;
                                        }
                                    }
                                    if (NOT bVar5)
                                    {
                                        if (IS_VEH_DRIVEABLE( l_U1241[l_U1721]._fU4 ))
                                        {
                                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U1241[0]._fU0, l_U1241[l_U1721]._fU4, 0 );
                                            bVar5 = true;
                                        }
                                    }
                                }
                            }
                        }
                        if (iVar4 < 0)
                        {
                            SCRIPT_ASSERT( "biker_to_look_at is <0. Please tell DaveW" );
                        }
                        TASK_LOOK_AT_CHAR( sub_3607(), l_U1241[iVar4]._fU0, -2, 0 );
                    }
                    SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
                    SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
                    for ( l_U1721 = 0; l_U1721 < l_U1241; l_U1721++ )
                    {
                        if (DOES_VEHICLE_EXIST( l_U1241[l_U1721]._fU4 ))
                        {
                            if (NOT (IS_CAR_DEAD( l_U1241[l_U1721]._fU4 )))
                            {
                                if (NOT (IS_VEH_DRIVEABLE( l_U1241[l_U1721]._fU4 )))
                                {
                                    GET_DRIVER_OF_CAR( l_U1241[l_U1721]._fU4, ref iVar2 );
                                    if (iVar2 == nil)
                                    {
                                        GET_NUMBER_OF_PASSENGERS( l_U1241[l_U1721]._fU4, ref iVar3 );
                                        if (iVar3 == 0)
                                        {
                                            DELETE_CAR( ref l_U1241[l_U1721]._fU4 );
                                        }
                                    }
                                }
                            }
                            else
                            {
                                DELETE_CAR( ref l_U1241[l_U1721]._fU4 );
                            }
                        }
                    }
                    if (DOES_VEHICLE_EXIST( l_U1402 ))
                    {
                        if (NOT (IS_CAR_DEAD( l_U1402 )))
                        {
                            if (NOT (IS_VEH_DRIVEABLE( l_U1402 )))
                            {
                                GET_DRIVER_OF_CAR( l_U1402, ref iVar2 );
                                if (iVar2 == nil)
                                {
                                    GET_NUMBER_OF_PASSENGERS( l_U1402, ref iVar3 );
                                    if (iVar3 == 0)
                                    {
                                        DELETE_CAR( ref l_U1402 );
                                    }
                                }
                            }
                        }
                        else
                        {
                            DELETE_CAR( ref l_U1402 );
                        }
                    }
                    WAIT( 1800 );
                    SET_WIDESCREEN_BORDERS( 1 );
                    BEGIN_CAM_COMMANDS( ref l_U1722 );
                    if (NOT (DOES_CAM_EXIST( l_U1469 )))
                    {
                        CREATE_CAM( 14, ref l_U1469 );
                    }
                    SET_CAM_POS( l_U1469, -1707.29000000, 365.63750000, 24.97754000 );
                    SET_CAM_ROT( l_U1469, 9.72490900, 0.00000000, 99.04640000 );
                    SET_CAM_FOV( l_U1469, 38.40000000 );
                    SET_CAM_ACTIVE( l_U1469, 1 );
                    SET_CAM_PROPAGATE( l_U1469, 1 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    END_CAM_COMMANDS( ref l_U1722 );
                    CLEAR_AREA( l_U1617[0]._fU0, l_U1617[0]._fU4, l_U1617[0]._fU8, 300, 1 );
                    DO_SCREEN_FADE_IN( 500 );
                    l_U366 = 1;
                }
            }
        }
        break;
        case 1:
        if (l_U1966)
        {
            for ( l_U1721 = 0; l_U1721 < l_U1241; l_U1721++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U1241[l_U1721]._fU0 )))
                {
                    if (NOT l_U1516[l_U1721])
                    {
                        if (TIMERA() >= l_U1730[l_U1721])
                        {
                            CLEAR_SEQUENCE_TASK( l_U1795 );
                            OPEN_SEQUENCE_TASK( ref l_U1795 );
                            TASK_LEAVE_ANY_CAR( 0 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1714.24000000, 355.88000000, 25.65000000, 2, -2, 4.00000000 );
                            CLOSE_SEQUENCE_TASK( l_U1795 );
                            TASK_PERFORM_SEQUENCE( l_U1241[l_U1721]._fU0, l_U1795 );
                            TASK_CLEAR_LOOK_AT( l_U1241[l_U1721]._fU0 );
                            l_U1516[l_U1721] = 1;
                        }
                    }
                }
            }
            if (l_U1970)
            {
                if (IS_CHAR_IN_ANY_CAR( sub_3607() ))
                {
                    if (TIMERA() > 500)
                    {
                        TASK_LEAVE_ANY_CAR( sub_3607() );
                        l_U1970 = 0;
                    }
                }
            }
            if (TIMERA() > 3000)
            {
                DO_SCREEN_FADE_OUT( 500 );
                l_U366 = 2;
            }
        }
        else if (NOT l_U1967)
        {
            if (IS_SCREEN_FADED_IN())
            {
                sub_106526( 1 );
                sub_21746( l_U1820, ref l_U1972, 6, 1 );
                l_U1967 = 1;
            }
        }
        else if (NOT (sub_23529( l_U1972 )))
        {
            SETTIMERA( 0 );
            l_U1966 = 1;
        };;;
        break;
        case 2:
        if ((TIMERA() > 3000) || (l_U1969))
        {
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            if (NOT (IS_CHAR_DEAD( sub_3607() )))
            {
                if (NOT (IS_VEH_DRIVEABLE( l_U1402 )))
                {
                    if (IS_CHAR_IN_ANY_CAR( sub_3607() ))
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( sub_3607(), -1713.92000000, 360.03000000, 25.45000000 );
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( sub_3607(), -1713.92000000, 360.03000000, 25.45000000 );
                    }
                    SET_CHAR_HEADING( sub_3607(), -117.44000000 );
                }
            }
            if (l_U1969)
            {
                INCREMENT_INT_STAT( 372, 1 );
            }
            else
            {
                INCREMENT_INT_STAT( 373, 1 );
            }
            sub_106824();
            if (NOT (IS_CHAR_DEAD( sub_3607() )))
            {
                TASK_CLEAR_LOOK_AT( sub_3607() );
            }
            SET_WIDESCREEN_BORDERS( 0 );
            BEGIN_CAM_COMMANDS( ref l_U1722 );
            SET_CAM_ACTIVE( l_U1469, 0 );
            SET_CAM_PROPAGATE( l_U1469, 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            END_CAM_COMMANDS( ref l_U1722 );
            SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
            SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            sub_107028();
            l_U1815 = 0;
            WAIT( 1000 );
            if (NOT (IS_CAR_DEAD( l_U1402 )))
            {
                SET_CAR_PROOFS( l_U1402, 0, 0, 0, 0, 0 );
            }
            sub_106526( 0 );
            CLEAR_PRINTS();
            SET_PLAYER_CONTROL( sub_26182(), 1 );
            DO_SCREEN_FADE_IN( 500 );
            sub_56590();
        }
        break;
    }
    return;
}

int sub_99460()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_99765()
{
    return sub_99776( 1, 1 );
}

int sub_99776(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U94._fU104 = 1;
    }
    if ((uParam1) AND (g_U558 != 9))
    {
        g_U94._fU100 = 1;
    }
    return 1;
}

void sub_99948()
{
    unknown uVar2;

    if (IS_CHAR_IN_ANY_CAR( sub_3607() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3607(), ref uVar2 );
        SET_CAR_COORDINATES( uVar2, -1714.49500000, 379.86370000, 24.44400000 );
    }
    switch (l_U367)
    {
        case 6:
        case 7:
        sub_100098( 8, 0 );
        sub_100098( 9, 1 );
        sub_101304( 8 );
        break;
        case 8:
        sub_100098( 7, 0 );
        sub_100098( 9, 0 );
        sub_101304( 8 );
        break;
        case 3:
        sub_100098( 7, 0 );
        sub_100098( 8, 1 );
        sub_101304( 8 );
        break;
        case 1:
        sub_100098( 7, 0 );
        sub_100098( 10, 1 );
        sub_101304( 10 );
        break;
        case 4:
        case 2:
        case 5:
        case 9:
        sub_100098( 7, 0 );
        sub_100098( 8, 1 );
        sub_100098( 9, 2 );
        sub_101304( 8 );
        break;
    }
    return;
}

void sub_100098(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 7:
        if (IS_CAR_DEAD( l_U1402 ))
        {
            if (DOES_VEHICLE_EXIST( l_U1402 ))
            {
                DELETE_CAR( ref l_U1402 );
            }
            sub_44500( "Recreating Johnny's bike...." );
            while (NOT (sub_8662( ref l_U1402, l_U1617[uParam1]._fU0, l_U1617[uParam1]._fU4, l_U1617[uParam1]._fU8, l_U1770[uParam1] )))
            {
                WAIT( 0 );
            }
        }
        else
        {
            sub_44500( "DW_POSITION_CONTACT_BIKE_FOR_FAIL_CUT... Johnny's bike OK" );
            SET_CAR_HEALTH( l_U1402, 1000 );
            SET_CAR_PROOFS( l_U1402, 1, 1, 1, 1, 1 );
        }
        break;
        case 8:
        if (NOT (IS_VEH_DRIVEABLE( l_U1241[0]._fU4 )))
        {
            if (DOES_VEHICLE_EXIST( l_U1241[0]._fU4 ))
            {
                DELETE_CAR( ref l_U1241[0]._fU4 );
            }
            sub_44500( "Recreating Billy's bike...." );
            while (NOT (sub_80002( ref l_U1241[0]._fU4, l_U1617[uParam1]._fU0, l_U1617[uParam1]._fU4, l_U1617[uParam1]._fU8, l_U1770[uParam1] )))
            {
                WAIT( 0 );
            }
        }
        else
        {
            sub_44500( "DW_POSITION_CONTACT_BIKE_FOR_FAIL_CUT... Billy's bike OK" );
            SET_CAR_HEALTH( l_U1241[0]._fU4, 1000 );
            SET_CAR_PROOFS( l_U1241[0]._fU4, 1, 1, 1, 1, 1 );
        }
        break;
        case 9:
        if (NOT (IS_VEH_DRIVEABLE( l_U1241[2]._fU4 )))
        {
            if (DOES_VEHICLE_EXIST( l_U1241[2]._fU4 ))
            {
                DELETE_CAR( ref l_U1241[2]._fU4 );
            }
            sub_44500( "Recreating Brian's bike...." );
            while (NOT (sub_100840( ref l_U1241[2]._fU4, l_U1617[uParam1]._fU0, l_U1617[uParam1]._fU4, l_U1617[uParam1]._fU8, l_U1770[uParam1] )))
            {
                WAIT( 0 );
            }
        }
        else
        {
            sub_44500( "DW_POSITION_CONTACT_BIKE_FOR_FAIL_CUT... Brian's bike OK" );
            SET_CAR_HEALTH( l_U1241[2]._fU4, 1000 );
            SET_CAR_PROOFS( l_U1241[2]._fU4, 1, 1, 1, 1, 1 );
        }
        break;
        case 10:
        if (NOT (IS_VEH_DRIVEABLE( l_U1241[1]._fU4 )))
        {
            if (DOES_VEHICLE_EXIST( l_U1241[1]._fU4 ))
            {
                DELETE_CAR( ref l_U1241[1]._fU4 );
            }
            sub_44500( "Recreating Jim's bike...." );
            while (NOT (sub_100840( ref l_U1241[1]._fU4, l_U1617[uParam1]._fU0, l_U1617[uParam1]._fU4, l_U1617[uParam1]._fU8, l_U1770[uParam1] )))
            {
                WAIT( 0 );
            }
        }
        else
        {
            sub_44500( "DW_POSITION_CONTACT_BIKE_FOR_FAIL_CUT... Jim's bike OK" );
            SET_CAR_HEALTH( l_U1241[1]._fU4, 1000 );
            SET_CAR_PROOFS( l_U1241[1]._fU4, 1, 1, 1, 1, 1 );
        }
        break;
    }
    return;
}

void sub_100840(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    return sub_80019( uParam0, 13, uParam1, uParam4 );
}

void sub_101304(unknown uParam0)
{
    switch (uParam0)
    {
        case 8:
        if (IS_CHAR_INJURED( l_U1241[0]._fU0 ))
        {
            sub_44500( "DW_POSITION_CONTACT_FOR_FAIL_CUT... Recreating Billy" );
            if (DOES_CHAR_EXIST( l_U1241[0]._fU0 ))
            {
                DELETE_CHAR( ref l_U1241[0]._fU0 );
            }
            if (NOT (HAS_MODEL_LOADED( sub_4251( 0 ) )))
            {
                REQUEST_MODEL( sub_4251( 0 ) );
                while (NOT (HAS_MODEL_LOADED( sub_4251( 0 ) )))
                {
                    WAIT( 0 );
                }
            }
            sub_101561( 0, ref l_U1241[0]._fU0, -1730.88000000, 340.28110000, 24.44420000, 172.00000000 );
            sub_5929( 1, l_U1241[0]._fU0, "BILLY", 0 );
            if (NOT (IS_CAR_DEAD( l_U1241[0]._fU4 )))
            {
                WARP_CHAR_INTO_CAR( l_U1241[0]._fU0, l_U1241[0]._fU4 );
            }
            else if (IS_CAR_PASSENGER_SEAT_FREE( l_U1402, 0 ))
            {
                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U1241[0]._fU0, l_U1402, 0 );
            }
            else
            {
                SCRIPT_ASSERT( "DW_POSITION_CONTACT_FOR_FAIL_CUT... COuldn't find seat(DW_BILLY)" );
            }
        }
        else
        {
            sub_44500( "DW_POSITION_CONTACT_FOR_FAIL_CUT... Billy ok" );
        }
        break;
        case 9:
        if (IS_CHAR_INJURED( l_U1241[2]._fU0 ))
        {
            sub_44500( "DW_POSITION_CONTACT_FOR_FAIL_CUT... Recreating Brian" );
            if (DOES_CHAR_EXIST( l_U1241[2]._fU0 ))
            {
                DELETE_CHAR( ref l_U1241[2]._fU0 );
            }
            if (NOT (HAS_MODEL_LOADED( sub_4251( 13 ) )))
            {
                REQUEST_MODEL( sub_4251( 13 ) );
                while (NOT (HAS_MODEL_LOADED( sub_4251( 13 ) )))
                {
                    WAIT( 0 );
                }
            }
            sub_101561( 13, ref l_U1241[2]._fU0, -1730.88000000, 340.28110000, 24.44420000, 172.00000000 );
            sub_5929( 2, l_U1241[2]._fU0, "BRIAN", 0 );
            if (NOT (IS_CAR_DEAD( l_U1241[2]._fU4 )))
            {
                WARP_CHAR_INTO_CAR( l_U1241[2]._fU0, l_U1241[2]._fU4 );
            }
            else if (IS_CAR_PASSENGER_SEAT_FREE( l_U1402, 0 ))
            {
                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U1241[2]._fU0, l_U1402, 0 );
            }
            else
            {
                SCRIPT_ASSERT( "DW_POSITION_CONTACT_FOR_FAIL_CUT... COuldn't find seat (DW_BRIAN)" );
            }
        }
        else
        {
            sub_44500( "DW_POSITION_CONTACT_FOR_FAIL_CUT... Brian ok" );
        }
        break;
        case 10:
        if (IS_CHAR_INJURED( l_U1241[1]._fU0 ))
        {
            sub_44500( "DW_POSITION_CONTACT_FOR_FAIL_CUT... Recreating Jim" );
            if (DOES_CHAR_EXIST( l_U1241[1]._fU0 ))
            {
                DELETE_CHAR( ref l_U1241[1]._fU0 );
            }
            if (NOT (HAS_MODEL_LOADED( sub_4251( 1 ) )))
            {
                REQUEST_MODEL( sub_4251( 1 ) );
                while (NOT (HAS_MODEL_LOADED( sub_4251( 1 ) )))
                {
                    WAIT( 0 );
                }
            }
            sub_101561( 1, ref l_U1241[1]._fU0, -1730.88000000, 340.28110000, 24.44420000, 172.00000000 );
            sub_5929( 5, l_U1241[1]._fU0, "JIM", 0 );
            if (NOT (IS_CAR_DEAD( l_U1241[1]._fU4 )))
            {
                WARP_CHAR_INTO_CAR( l_U1241[1]._fU0, l_U1241[1]._fU4 );
            }
            else if (IS_CAR_PASSENGER_SEAT_FREE( l_U1402, 0 ))
            {
                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U1241[1]._fU0, l_U1402, 0 );
            }
            else
            {
                SCRIPT_ASSERT( "DW_POSITION_CONTACT_FOR_FAIL_CUT... COuldn't find seat (DW_BRIAN)" );
            }
        }
        else
        {
            sub_44500( "DW_POSITION_CONTACT_FOR_FAIL_CUT... Jim ok" );
        }
        break;
    }
    return;
}

void sub_101561(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( sub_101572( uParam0 ), sub_4251( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    sub_101679( uParam0, (uParam1^) );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_12293( uParam0, (uParam1^) );
    return;
}

int sub_101572(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        case 6:
        case 7:
        case 16:
        case 13: return 9;
    }
    return 25;
}

void sub_101679(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        case 6:
        case 7:
        case 16:
        case 13:
        SET_CHAR_RELATIONSHIP_GROUP( uParam1, 6 );
        break;
    }
    return;
}

void sub_104118(int iParam0)
{
    int I;
    int Result;

    Result = 99;
    for ( I = 0; I < l_U1241; I++ )
    {
        if (l_U1241[I]._fU0 == iParam0)
        {
            Result = I;
        }
    }
    if (iParam0 == sub_3607())
    {
        Result = -1;
    }
    return Result;
}

void sub_106526(unknown uParam0)
{
    return;
}

void sub_106824()
{
    for ( l_U1721 = 0; l_U1721 < l_U1241; l_U1721++ )
    {
        sub_62372( ref l_U1241[l_U1721], 1 );
    }
    return;
}

void sub_107028()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_107190()
{
    int I;
    float fVar3;
    float fVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    int iVar8;
    unknown[20] uVar9;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    unknown uVar66;
    unknown uVar67;
    unknown uVar68;
    unknown uVar69;
    unknown uVar70;
    unknown uVar71;
    unknown uVar72;
    unknown uVar73;
    unknown uVar74;
    unknown uVar75;
    unknown uVar76;
    unknown uVar77;
    unknown uVar78;
    unknown uVar79;
    unknown uVar80;
    unknown uVar81;
    unknown uVar82;
    unknown uVar83;
    unknown uVar84;
    unknown uVar85;
    unknown uVar86;
    unknown uVar87;
    unknown uVar88;
    unknown uVar89;
    unknown uVar90;
    unknown uVar91;
    unknown uVar92;
    unknown uVar93;
    unknown uVar94;
    unknown uVar95;
    unknown uVar96;
    unknown uVar97;
    unknown uVar98;
    unknown uVar99;
    unknown uVar100;
    unknown uVar101;
    unknown uVar102;
    unknown uVar103;
    unknown uVar104;
    unknown uVar105;
    unknown uVar106;
    unknown uVar107;
    unknown uVar108;
    unknown uVar109;
    unknown uVar110;
    unknown uVar111;
    unknown uVar112;
    unknown uVar113;
    unknown uVar114;
    unknown uVar115;
    unknown uVar116;
    unknown uVar117;
    unknown uVar118;
    unknown uVar119;
    unknown uVar120;
    unknown uVar121;
    unknown uVar122;
    unknown uVar123;
    unknown uVar124;
    unknown uVar125;
    unknown uVar126;
    unknown uVar127;
    unknown uVar128;
    unknown uVar129;
    unknown uVar130;
    unknown uVar131;
    unknown uVar132;
    unknown uVar133;
    unknown uVar134;
    unknown uVar135;
    unknown uVar136;
    unknown uVar137;
    unknown uVar138;
    unknown uVar139;
    unknown uVar140;
    unknown uVar141;
    unknown uVar142;
    unknown uVar143;
    unknown uVar144;
    unknown uVar145;
    unknown uVar146;
    unknown uVar147;
    unknown uVar148;
    unknown uVar149;
    unknown uVar150;
    unknown uVar151;
    unknown uVar152;
    unknown uVar153;
    unknown uVar154;
    unknown uVar155;
    unknown uVar156;
    unknown uVar157;
    unknown uVar158;
    unknown uVar159;
    unknown uVar160;
    unknown uVar161;
    unknown uVar162;
    unknown uVar163;
    unknown uVar164;
    unknown uVar165;
    unknown uVar166;
    unknown uVar167;
    unknown uVar168;
    unknown uVar169;
    unknown uVar170;
    unknown uVar171;
    unknown uVar172;
    unknown uVar173;
    unknown uVar174;
    unknown uVar175;
    unknown uVar176;
    unknown uVar177;
    unknown uVar178;
    unknown uVar179;
    unknown uVar180;
    unknown uVar181;
    unknown uVar182;
    unknown uVar183;
    unknown uVar184;
    unknown uVar185;
    unknown uVar186;
    unknown uVar187;
    unknown uVar188;
    unknown uVar189;
    unknown uVar190;
    unknown uVar191;
    unknown uVar192;
    unknown uVar193;
    unknown uVar194;
    unknown uVar195;
    unknown uVar196;
    unknown uVar197;
    unknown uVar198;
    unknown uVar199;
    unknown uVar200;
    unknown uVar201;
    unknown uVar202;
    unknown uVar203;
    unknown uVar204;
    unknown uVar205;
    unknown uVar206;
    unknown uVar207;
    unknown uVar208;
    unknown uVar209;
    unknown uVar210;
    unknown uVar211;
    unknown uVar212;
    unknown uVar213;
    unknown uVar214;
    unknown uVar215;
    unknown uVar216;
    unknown uVar217;
    unknown uVar218;
    unknown uVar219;
    unknown uVar220;
    unknown uVar221;
    unknown uVar222;
    unknown uVar223;
    unknown uVar224;
    unknown uVar225;
    unknown uVar226;
    unknown uVar227;
    unknown uVar228;
    unknown uVar229;
    unknown uVar230;
    unknown uVar231;
    unknown uVar232;
    unknown uVar233;
    unknown uVar234;
    unknown uVar235;
    unknown uVar236;
    unknown uVar237;
    unknown uVar238;
    unknown uVar239;
    unknown uVar240;
    unknown uVar241;
    unknown uVar242;
    unknown uVar243;
    unknown uVar244;
    unknown uVar245;
    unknown uVar246;
    unknown uVar247;
    unknown uVar248;
    unknown uVar249;
    unknown uVar250;
    unknown uVar251;
    unknown uVar252;
    unknown uVar253;
    unknown uVar254;
    unknown uVar255;
    unknown uVar256;
    unknown uVar257;
    unknown uVar258;
    unknown uVar259;
    unknown uVar260;
    unknown uVar261;
    unknown uVar262;
    unknown uVar263;
    unknown uVar264;
    unknown uVar265;
    unknown uVar266;
    unknown uVar267;
    unknown uVar268;
    unknown uVar269;
    unknown uVar270;
    unknown uVar271;
    unknown uVar272;
    unknown uVar273;
    unknown uVar274;
    unknown uVar275;
    unknown uVar276;
    unknown uVar277;
    unknown uVar278;
    unknown uVar279;
    unknown uVar280;
    unknown uVar281;
    unknown uVar282;
    unknown uVar283;
    unknown uVar284;
    unknown uVar285;
    unknown uVar286;
    unknown uVar287;
    unknown uVar288;
    unknown uVar289;
    unknown uVar290;
    unknown uVar291;
    unknown uVar292;
    unknown uVar293;
    unknown uVar294;
    unknown uVar295;
    unknown uVar296;
    unknown uVar297;
    unknown uVar298;
    unknown uVar299;
    unknown uVar300;
    unknown uVar301;
    unknown uVar302;
    unknown uVar303;
    unknown uVar304;
    unknown uVar305;
    unknown uVar306;
    unknown uVar307;
    unknown uVar308;
    unknown uVar309;
    unknown uVar310;
    unknown uVar311;
    unknown uVar312;
    unknown uVar313;
    unknown uVar314;
    unknown uVar315;
    unknown uVar316;
    unknown uVar317;
    unknown uVar318;
    unknown uVar319;
    unknown uVar320;
    unknown uVar321;
    unknown uVar322;
    unknown uVar323;
    unknown uVar324;
    unknown uVar325;
    unknown uVar326;
    unknown uVar327;
    unknown uVar328;
    unknown uVar329;
    unknown uVar330;
    unknown uVar331;
    unknown uVar332;
    unknown uVar333;
    unknown uVar334;
    unknown uVar335;
    unknown uVar336;
    unknown uVar337;
    unknown uVar338;
    unknown uVar339;
    unknown uVar340;
    unknown uVar341;
    unknown uVar342;
    unknown uVar343;
    unknown uVar344;
    unknown uVar345;
    unknown uVar346;
    unknown uVar347;
    unknown uVar348;
    unknown uVar349;
    unknown uVar350;
    unknown uVar351;
    unknown uVar352;
    unknown uVar353;
    unknown uVar354;
    unknown uVar355;
    unknown uVar356;
    unknown uVar357;
    unknown uVar358;
    unknown uVar359;
    unknown uVar360;
    unknown uVar361;
    unknown uVar362;
    unknown uVar363;
    unknown uVar364;
    unknown uVar365;
    unknown uVar366;
    unknown uVar367;
    unknown uVar368;
    unknown uVar369;

    array(ref uVar9, 20);
    switch (l_U370)
    {
        case 0:
        if (NOT l_U1920)
        {
            if (NOT l_U1562)
            {
                sub_107263( 2 );
                GET_GAME_TIMER( ref l_U1946 );
            }
            l_U370 = 2;
        }
        else
        {
            sub_107263( 0 );
            l_U370 = 1;
        }
        break;
        case 1:
        if (NOT l_U668[12]._fU4)
        {
            l_U668[12]._fU4 = 1;
        }
        if (NOT l_U668[13]._fU4)
        {
            l_U668[13]._fU4 = 1;
        }
        break;
        case 2:
        if (NOT l_U668[0]._fU4)
        {
            if (sub_44034( l_U1946, 100 ))
            {
                l_U668[0]._fU4 = 1;
            }
        }
        if (NOT l_U668[1]._fU4)
        {
            if (sub_44034( l_U1946, 200 ))
            {
                l_U668[1]._fU4 = 1;
            }
        }
        if (NOT l_U668[2]._fU4)
        {
            if (sub_44034( l_U1946, 300 ))
            {
                l_U668[2]._fU4 = 1;
            }
        }
        if (NOT l_U668[3]._fU4)
        {
            if (sub_44034( l_U1946, 400 ))
            {
                l_U668[3]._fU4 = 1;
            }
        }
        if (NOT l_U668[4]._fU4)
        {
            if (sub_44034( l_U1946, 500 ))
            {
                l_U668[4]._fU4 = 1;
            }
        }
        if (NOT l_U1920)
        {
            if (NOT l_U668[5]._fU4)
            {
                if (NOT l_U668[5]._fU4)
                {
                    uVar9[0] = {l_U668[0]};
                    uVar9[1] = {l_U668[1]};
                    uVar9[2] = {l_U668[2]};
                    uVar9[3] = {l_U668[3]};
                    uVar9[4] = {l_U668[4]};
                    if (sub_114157( ref uVar9, 5, 3, 1, 1 ))
                    {
                        sub_107263( 3 );
                        l_U668[5]._fU4 = 1;
                        l_U668[6]._fU4 = 1;
                        l_U668[7]._fU4 = 1;
                        l_U1491 = 0;
                        l_U1488 = 1;
                    }
                }
            }
        }
        if (NOT l_U1938)
        {
            uVar9[0] = {l_U668[0]};
            uVar9[1] = {l_U668[1]};
            uVar9[2] = {l_U668[2]};
            uVar9[3] = {l_U668[3]};
            uVar9[4] = {l_U668[4]};
            if (sub_114157( ref uVar9, 5, 3, 1, 1 ))
            {
                sub_107263( 6 );
                if (NOT (IS_CAR_DEAD( l_U1414[0] )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U668[8]._fU0 )))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U668[9]._fU0 )))
                        {
                            if ((IS_CHAR_SITTING_IN_CAR( l_U668[8]._fU0, l_U1414[0] )) AND (IS_CHAR_SITTING_IN_CAR( l_U668[9]._fU0, l_U1414[0] )))
                            {
                                START_PLAYBACK_RECORDED_CAR( l_U1414[0], 463 );
                                l_U1938 = 1;
                            }
                        }
                    }
                }
            }
        }
        else if (NOT l_U668[8]._fU4)
        {
            if (NOT (IS_CAR_DEAD( l_U1414[0] )))
            {
                if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1414[0] )))
                {
                    l_U1491 = 0;
                    l_U1492 = 0;
                    l_U1489 = 1;
                    l_U668[8]._fU4 = 1;
                    l_U668[9]._fU4 = 1;
                }
            }
        }
        if (NOT l_U1939)
        {
            uVar9[0] = {l_U668[0]};
            uVar9[1] = {l_U668[1]};
            uVar9[2] = {l_U668[2]};
            uVar9[3] = {l_U668[3]};
            uVar9[4] = {l_U668[4]};
            uVar9[5] = {l_U668[5]};
            uVar9[6] = {l_U668[6]};
            uVar9[7] = {l_U668[7]};
            uVar9[8] = {l_U668[8]};
            uVar9[9] = {l_U668[9]};
            if (sub_114157( ref uVar9, 10, 6, 1, 1 ))
            {
                sub_107263( 4 );
                l_U668[14]._fU4 = 1;
                l_U668[15]._fU4 = 1;
                l_U668[16]._fU4 = 1;
                l_U1488 = 1;
                l_U1491 = 0;
                sub_107263( 13 );
                l_U1939 = 1;
            }
        }
        else if (NOT l_U1942)
        {
            if (NOT (IS_CAR_DEAD( l_U1414[1] )))
            {
                if (NOT (IS_CHAR_DEAD( l_U668[10]._fU0 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U668[11]._fU0 )))
                    {
                        if ((IS_CHAR_SITTING_IN_CAR( l_U668[10]._fU0, l_U1414[1] )) AND (IS_CHAR_SITTING_IN_CAR( l_U668[11]._fU0, l_U1414[1] )))
                        {
                            START_PLAYBACK_RECORDED_CAR( l_U1414[1], 464 );
                            l_U1942 = 1;
                        }
                    }
                }
            }
        }
        else if (NOT l_U668[10]._fU4)
        {
            if (NOT (IS_CAR_DEAD( l_U1414[1] )))
            {
                if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1414[1] )))
                {
                    l_U668[10]._fU4 = 1;
                    if (NOT (IS_CHAR_DEAD( l_U668[10]._fU0 )))
                    {
                        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U668[10]._fU0, 0 );
                    }
                    GET_GAME_TIMER( ref l_U1944 );
                }
                else if (NOT l_U1940)
                {
                    fVar3 = GET_TOTAL_DURATION_OF_CAR_RECORDING( 464 );
                    if (fVar3 > 0.00000000)
                    {
                        fVar4 = FIND_TIME_POSITION_IN_RECORDING( l_U1414[1] );
                        sub_44359( fVar4, "fCurrentBikeRecTime" );
                        if (fVar4 > 0.00000000)
                        {
                            if ((fVar4 / fVar3) > 0.50000000)
                            {
                                l_U1490 = 1;
                                l_U1492 = 0;
                                l_U1491 = 0;
                                l_U1940 = 1;
                            }
                        }
                    }
                }
                SET_PLAYBACK_SPEED( l_U1414[1], 0.90000000 );
                fVar3 = GET_TOTAL_DURATION_OF_CAR_RECORDING( 464 );
                sub_44359( fVar3, "fBikeRecDuration" );
                if (fVar3 > 0.00000000)
                {
                    fVar4 = FIND_TIME_POSITION_IN_RECORDING( l_U1414[1] );
                    if (fVar4 > 0.00000000)
                    {
                        if ((fVar4 / fVar3) > 0.35000000)
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1414[1], 0.00000000, 1.50000000, 0.00000000, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                            GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( uVar5._fU0, uVar5._fU4, uVar5._fU8, 1.60000000, 0, 0, ref iVar8 );
                            if (iVar8 != nil)
                            {
                                if (IS_CAR_TOUCHING_CAR( l_U1414[1], iVar8 ))
                                {
                                    STOP_PLAYBACK_RECORDED_CAR( l_U1414[1] );
                                    if (NOT (IS_CHAR_DEAD( l_U668[10]._fU0 )))
                                    {
                                        SET_CHAR_HEALTH( l_U668[10]._fU0, 10 );
                                    }
                                    if (NOT (IS_CHAR_DEAD( l_U668[11]._fU0 )))
                                    {
                                        SET_CHAR_HEALTH( l_U668[11]._fU0, 10 );
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        else if (NOT l_U668[11]._fU4)
        {
            GET_GAME_TIMER( ref l_U1945 );
            if ((l_U1945 - l_U1944) > 1000)
            {
                if (NOT (IS_CHAR_DEAD( l_U668[11]._fU0 )))
                {
                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U668[11]._fU0, 0 );
                }
                l_U668[11]._fU4 = 1;
            }
        };;;;
        break;
    }
    uVar9[0] = {l_U668[0]};
    uVar9[1] = {l_U668[1]};
    uVar9[2] = {l_U668[2]};
    uVar9[3] = {l_U668[3]};
    uVar9[4] = {l_U668[4]};
    uVar9[5] = {l_U668[5]};
    uVar9[6] = {l_U668[6]};
    uVar9[7] = {l_U668[7]};
    uVar9[8] = {l_U668[14]};
    uVar9[9] = {l_U668[15]};
    uVar9[10] = {l_U668[16]};
    uVar9[11] = {l_U668[8]};
    uVar9[12] = {l_U668[9]};
    uVar9[13] = {l_U668[10]};
    uVar9[14] = {l_U668[11]};
    if (l_U1939)
    {
        if (l_U1938)
        {
            if (sub_114157( ref uVar9, 15, 13, 1, 1 ))
            {
                if (NOT l_U668[17]._fU4)
                {
                    sub_107263( 5 );
                    l_U668[17]._fU4 = 1;
                    l_U668[18]._fU4 = 1;
                    l_U668[19]._fU4 = 1;
                }
            }
        }
    }
    uVar9[0] = {l_U668[0]};
    uVar9[1] = {l_U668[1]};
    uVar9[2] = {l_U668[2]};
    uVar9[3] = {l_U668[3]};
    uVar9[4] = {l_U668[4]};
    uVar9[5] = {l_U668[5]};
    uVar9[6] = {l_U668[6]};
    uVar9[7] = {l_U668[7]};
    uVar9[8] = {l_U668[14]};
    uVar9[9] = {l_U668[15]};
    uVar9[10] = {l_U668[16]};
    uVar9[11] = {l_U668[17]};
    uVar9[12] = {l_U668[18]};
    uVar9[13] = {l_U668[19]};
    uVar9[14] = {l_U668[8]};
    uVar9[15] = {l_U668[9]};
    uVar9[16] = {l_U668[10]};
    uVar9[17] = {l_U668[11]};
    if (sub_114157( ref uVar9, 18, 18, 1, 1 ))
    {
        l_U1932 = 1;
    }
    else if (sub_114157( ref uVar9, 14, 14, 1, 1 ))
    {
        if (l_U1938)
        {
            if (IS_CHAR_INJURED( l_U668[8]._fU0 ))
            {
                if (IS_CHAR_INJURED( l_U668[9]._fU0 ))
                {
                    if (l_U1939)
                    {
                        if (IS_CHAR_INJURED( l_U668[10]._fU0 ))
                        {
                            if (IS_CHAR_INJURED( l_U668[11]._fU0 ))
                            {
                                l_U1932 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    for ( I = 0; I < l_U668; I++ )
    {
        if (DOES_BLIP_EXIST( l_U1209[I] ))
        {
            if (IS_CHAR_INJURED( l_U668[I]._fU0 ))
            {
                REMOVE_BLIP( l_U1209[I] );
            }
        }
    }
    sub_116706();
    if (l_U1915)
    {
        sub_116923();
    }
    if (l_U1491)
    {
        if (sub_50617())
        {
            if (NOT l_U1941)
            {
                GET_GAME_TIMER( ref l_U1943 );
                l_U1941 = 1;
            }
            else if (sub_44034( l_U1943, 5000 ))
            {
                for ( I = 0; I < l_U668; I++ )
                {
                    if (l_U1941)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U668[I]._fU0 )))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U668[I]._fU0, sub_3607(), 50.00000000, 50.00000000, 50.00000000, 0 ))
                            {
                                if (l_U1947 == 0)
                                {
                                    sub_5929( 6, l_U668[I]._fU0, "AOD_1", 0 );
                                    sub_21746( "E1B4_AOD1", ref l_U1482, 6, 1 );
                                    l_U1947 = 1;
                                }
                                else
                                {
                                    sub_5929( 7, l_U668[I]._fU0, "AOD_2", 0 );
                                    sub_21746( "E1B4_AOD2", ref l_U1482, 6, 1 );
                                    l_U1947 = 0;
                                }
                                l_U1491 = 0;
                                l_U1492 = 1;
                                l_U1941 = 0;
                            }
                            else
                            {
                                l_U1491 = 0;
                                l_U1492 = 1;
                                l_U1941 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_107263(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        l_U668[12]._fU0 = sub_107366( 23, 64905, 1173, 10, 90.00000000, 26, "", 1 );
        l_U668[12]._fU32 = {-633.94090000, 1201.88500000, 5.05870000};
        l_U668[12]._fU44 = sub_107615( 12, 3 );
        l_U668[12]._fU64 = l_U1475;
        l_U668[12]._fU24 = 1;
        l_U668[13]._fU0 = sub_107366( 23, -630.72940000, 1175.57600000, 8.96910000, 90.00000000, 7, "", 1 );
        l_U668[13]._fU32 = {-638.92970000, 1203.37000000, 4.90880000};
        l_U668[13]._fU44 = sub_107615( 13, 2 );
        l_U668[13]._fU64 = l_U1475;
        l_U668[13]._fU24 = 1;
        break;
        case 1:
        l_U668[0]._fU0 = sub_107366( 23, -634.21580000, 1198.82400000, 5.05870000, 90.00000000, 26, "", 1 );
        l_U668[0]._fU32 = {-633.94090000, 1201.88500000, 5.05870000};
        l_U668[0]._fU44 = sub_107615( 0, 9 );
        l_U668[0]._fU64 = l_U1475;
        ADD_BLIP_FOR_CHAR( l_U668[0]._fU0, ref l_U1209[0] );
        l_U668[1]._fU0 = sub_107366( 23, -635.77330000, 1198.87800000, 5.05870000, 90.00000000, 7, "", 1 );
        l_U668[1]._fU32 = {-638.92970000, 1203.37000000, 4.90880000};
        l_U668[1]._fU44 = sub_107615( 1, 9 );
        l_U668[1]._fU64 = l_U1475;
        ADD_BLIP_FOR_CHAR( l_U668[1]._fU0, ref l_U1209[1] );
        l_U668[2]._fU0 = sub_107366( 23, -634.14500000, 1196.66300000, 5.05870000, 90.00000000, 26, "", 1 );
        l_U668[2]._fU32 = {-640.67700000, 1206.95900000, 4.90840000};
        l_U668[2]._fU44 = sub_107615( 2, 9 );
        l_U668[2]._fU64 = l_U1475;
        ADD_BLIP_FOR_CHAR( l_U668[2]._fU0, ref l_U1209[2] );
        l_U668[3]._fU0 = sub_107366( 23, -635.35770000, 1196.84600000, 5.05870000, 90.00000000, 7, "", 1 );
        l_U668[3]._fU32 = {-647.40120000, 1203.28400000, 4.90830000};
        l_U668[3]._fU44 = sub_107615( 3, 9 );
        l_U668[3]._fU64 = l_U1475;
        ADD_BLIP_FOR_CHAR( l_U668[3]._fU0, ref l_U1209[3] );
        l_U668[4]._fU0 = sub_107366( 23, -636.27060000, 1196.48400000, 5.05870000, 90.00000000, 7, "", 1 );
        l_U668[4]._fU32 = {-652.73430000, 1209.07200000, 4.90800000};
        l_U668[4]._fU44 = sub_107615( 4, 9 );
        l_U668[4]._fU64 = l_U1475;
        ADD_BLIP_FOR_CHAR( l_U668[4]._fU0, ref l_U1209[4] );
        break;
        case 2:
        l_U668[0]._fU0 = sub_107366( 23, 64905, 1173, 10, 90.00000000, 26, "", 1 );
        l_U668[0]._fU32 = {-633.94090000, 1201.88500000, 5.05870000};
        l_U668[0]._fU44 = sub_107615( 0, 9 );
        l_U668[0]._fU64 = l_U1475;
        ADD_BLIP_FOR_CHAR( l_U668[0]._fU0, ref l_U1209[0] );
        l_U668[1]._fU0 = sub_107366( 23, -630.72940000, 1175.57600000, 8.96910000, 90.00000000, 7, "", 1 );
        l_U668[1]._fU32 = {-638.92970000, 1203.37000000, 4.90880000};
        l_U668[1]._fU44 = sub_107615( 1, 9 );
        l_U668[1]._fU64 = l_U1475;
        ADD_BLIP_FOR_CHAR( l_U668[1]._fU0, ref l_U1209[1] );
        l_U668[2]._fU0 = sub_107366( 23, -631.43840000, 1176.69900000, 8.97240000, 90.00000000, 26, "", 1 );
        l_U668[2]._fU32 = {-640.67700000, 1206.95900000, 4.90840000};
        l_U668[2]._fU44 = sub_107615( 2, 9 );
        l_U668[2]._fU64 = l_U1475;
        ADD_BLIP_FOR_CHAR( l_U668[2]._fU0, ref l_U1209[2] );
        l_U668[3]._fU0 = sub_107366( 23, -630.22410000, 1176.38700000, 8.97150000, 90.00000000, 7, "", 1 );
        l_U668[3]._fU32 = {-647.40120000, 1203.28400000, 4.90830000};
        l_U668[3]._fU44 = sub_107615( 3, 9 );
        l_U668[3]._fU64 = l_U1475;
        ADD_BLIP_FOR_CHAR( l_U668[3]._fU0, ref l_U1209[3] );
        l_U668[4]._fU0 = sub_107366( 23, -629.87930000, 1174.26800000, 8.96500000, 90.00000000, 7, "", 1 );
        l_U668[4]._fU32 = {-652.73430000, 1209.07200000, 4.90800000};
        l_U668[4]._fU44 = sub_107615( 4, 9 );
        l_U668[4]._fU64 = l_U1475;
        ADD_BLIP_FOR_CHAR( l_U668[4]._fU0, ref l_U1209[4] );
        break;
        case 3:
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3607(), -630.59410000, 1228.38000000, 6.13180000, 43.00000000, 44.00000000, 19.00000000, 0 ))
        {
            l_U668[5]._fU0 = sub_107366( 23, -631.43840000, 1176.69900000, 8.97240000, 90.00000000, 26, "", 0 );
            l_U668[5]._fU32 = {-640.67700000, 1206.95900000, 4.90840000};
            l_U668[5]._fU44 = sub_107615( 5, 9 );
            l_U668[5]._fU24 = 1;
            l_U668[5]._fU64 = l_U1475;
            ADD_BLIP_FOR_CHAR( l_U668[5]._fU0, ref l_U1209[5] );
            l_U668[6]._fU0 = sub_107366( 23, -630.22410000, 1176.38700000, 8.97150000, 90.00000000, 7, "", 0 );
            l_U668[6]._fU32 = {-647.40120000, 1203.28400000, 4.90830000};
            l_U668[6]._fU44 = sub_107615( 6, 9 );
            l_U668[6]._fU24 = 1;
            l_U668[6]._fU64 = l_U1476;
            ADD_BLIP_FOR_CHAR( l_U668[6]._fU0, ref l_U1209[6] );
            l_U668[7]._fU0 = sub_107366( 23, -629.87930000, 1174.26800000, 8.96500000, 90.00000000, 7, "", 0 );
            l_U668[7]._fU32 = {-652.73430000, 1209.07200000, 4.90800000};
            l_U668[7]._fU44 = sub_107615( 7, 9 );
            l_U668[7]._fU64 = l_U1475;
            ADD_BLIP_FOR_CHAR( l_U668[7]._fU0, ref l_U1209[7] );
        }
        else
        {
            l_U668[5]._fU0 = sub_107366( 23, -624.35690000, 1208.67900000, 6.06080000, 90.00000000, 26, "", 0 );
            l_U668[5]._fU32 = {-640.67700000, 1206.95900000, 4.90840000};
            l_U668[5]._fU44 = sub_107615( 5, 9 );
            l_U668[5]._fU24 = 1;
            l_U668[5]._fU64 = l_U1475;
            ADD_BLIP_FOR_CHAR( l_U668[5]._fU0, ref l_U1209[5] );
            l_U668[6]._fU0 = sub_107366( 23, -624.02200000, 1210.90000000, 5.91950000, 90.00000000, 7, "", 0 );
            l_U668[6]._fU32 = {-647.40120000, 1203.28400000, 4.90830000};
            l_U668[6]._fU44 = sub_107615( 6, 9 );
            l_U668[6]._fU24 = 1;
            l_U668[6]._fU64 = l_U1476;
            ADD_BLIP_FOR_CHAR( l_U668[6]._fU0, ref l_U1209[6] );
            l_U668[7]._fU0 = sub_107366( 23, -621.04770000, 1209.19500000, 6.10370000, 90.00000000, 7, "", 0 );
            l_U668[7]._fU32 = {-652.73430000, 1209.07200000, 4.90800000};
            l_U668[7]._fU44 = sub_107615( 7, 9 );
            l_U668[7]._fU64 = l_U1475;
            ADD_BLIP_FOR_CHAR( l_U668[7]._fU0, ref l_U1209[7] );
        }
        break;
        case 6:
        if (NOT (DOES_CHAR_EXIST( l_U668[8]._fU0 )))
        {
            CREATE_CAR( -1745203402, -625.07430000, 1338.94800000, 16.18200000, ref l_U1414[0], 1 );
            SET_CAR_HEADING( l_U1414[0], 148.17810000 );
            SET_CAR_ON_GROUND_PROPERLY( l_U1414[0] );
            l_U668[8]._fU0 = sub_107366( 23, -626.20520000, 1338.72500000, 16.13600000, 90.00000000, 26, "", 0 );
            l_U668[8]._fU32 = {-661.42660000, 1212.58300000, 4.90800000};
            l_U668[8]._fU44 = sub_107615( 8, 7 );
            l_U668[8]._fU64 = l_U1475;
            l_U668[9]._fU0 = sub_107366( 23, -624.93810000, 1340.84800000, 16.12400000, 90.00000000, 7, "", 0 );
            l_U668[9]._fU32 = {-658.36440000, 1209.61700000, 4.90800000};
            l_U668[9]._fU44 = sub_107615( 9, 7 );
            l_U668[9]._fU64 = l_U1475;
            WARP_CHAR_INTO_CAR( l_U668[8]._fU0, l_U1414[0] );
            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U668[9]._fU0, l_U1414[0], 0 );
            ADD_BLIP_FOR_CHAR( l_U668[8]._fU0, ref l_U1209[8] );
            ADD_BLIP_FOR_CHAR( l_U668[9]._fU0, ref l_U1209[9] );
            TASK_DRIVE_BY( l_U668[9]._fU0, sub_3607(), 0, 0.00000000, 0.00000000, 0.00000000, 500.00000000, 8, 0, 80 );
        }
        break;
        case 13:
        if (NOT (DOES_CHAR_EXIST( l_U668[10]._fU0 )))
        {
            CREATE_CAR( 2006142190, -579.44500000, 1227.47800000, 11.34970000, ref l_U1414[1], 1 );
            SET_CAR_HEADING( l_U1414[1], 148.17810000 );
            SET_CAR_ON_GROUND_PROPERLY( l_U1414[1] );
            l_U668[10]._fU0 = sub_107366( 23, -626.20520000, 1338.72500000, 16.13600000, 90.00000000, 26, "", 1 );
            l_U668[10]._fU32 = {-661.42660000, 1212.58300000, 4.90800000};
            l_U668[10]._fU44 = sub_107615( 10, 9 );
            l_U668[10]._fU24 = 1;
            l_U668[10]._fU64 = l_U1475;
            l_U668[11]._fU0 = sub_107366( 23, -624.93810000, 1340.84800000, 16.12400000, 90.00000000, 7, "", 1 );
            l_U668[11]._fU32 = {-658.36440000, 1209.61700000, 4.90800000};
            l_U668[11]._fU44 = sub_107615( 11, 9 );
            l_U668[11]._fU24 = 1;
            l_U668[11]._fU64 = l_U1475;
            WARP_CHAR_INTO_CAR( l_U668[10]._fU0, l_U1414[1] );
            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U668[11]._fU0, l_U1414[1], 0 );
            ADD_BLIP_FOR_CHAR( l_U668[10]._fU0, ref l_U1209[10] );
            ADD_BLIP_FOR_CHAR( l_U668[11]._fU0, ref l_U1209[11] );
            TASK_DRIVE_BY( l_U668[11]._fU0, sub_3607(), 0, 0.00000000, 0.00000000, 0.00000000, 500.00000000, 8, 0, 80 );
        }
        break;
        case 4:
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3607(), -630.59410000, 1228.38000000, 6.13180000, 43.00000000, 44.00000000, 19.00000000, 0 ))
        {
            l_U668[14]._fU0 = sub_107366( 23, 64905, 1173, 10, 90.00000000, 26, "", 0 );
            l_U668[14]._fU32 = {-633.94090000, 1201.88500000, 5.05870000};
            l_U668[14]._fU44 = sub_107615( 14, 9 );
            l_U668[14]._fU64 = l_U1475;
            ADD_BLIP_FOR_CHAR( l_U668[14]._fU0, ref l_U1209[14] );
            l_U668[15]._fU0 = sub_107366( 23, -630.72940000, 1175.57600000, 8.96910000, 90.00000000, 7, "", 0 );
            l_U668[15]._fU32 = {-638.92970000, 1203.37000000, 4.90880000};
            l_U668[15]._fU44 = sub_107615( 15, 9 );
            l_U668[15]._fU64 = l_U1476;
            ADD_BLIP_FOR_CHAR( l_U668[15]._fU0, ref l_U1209[15] );
            l_U668[16]._fU0 = sub_107366( 23, -631.43840000, 1176.69900000, 8.97240000, 90.00000000, 7, "", 0 );
            l_U668[16]._fU32 = {-640.67700000, 1206.95900000, 4.90840000};
            l_U668[16]._fU44 = sub_107615( 16, 9 );
            l_U668[16]._fU64 = l_U1475;
            ADD_BLIP_FOR_CHAR( l_U668[16]._fU0, ref l_U1209[16] );
        }
        else
        {
            l_U668[14]._fU0 = sub_107366( 23, -624.35690000, 1208.67900000, 6.06080000, 90.00000000, 26, "", 0 );
            l_U668[14]._fU32 = {-633.94090000, 1201.88500000, 5.05870000};
            l_U668[14]._fU44 = sub_107615( 14, 9 );
            l_U668[14]._fU64 = l_U1475;
            ADD_BLIP_FOR_CHAR( l_U668[14]._fU0, ref l_U1209[14] );
            l_U668[15]._fU0 = sub_107366( 23, -624.02200000, 1210.90000000, 5.91950000, 90.00000000, 7, "", 0 );
            l_U668[15]._fU32 = {-638.92970000, 1203.37000000, 4.90880000};
            l_U668[15]._fU44 = sub_107615( 15, 9 );
            l_U668[15]._fU64 = l_U1476;
            ADD_BLIP_FOR_CHAR( l_U668[15]._fU0, ref l_U1209[15] );
            l_U668[16]._fU0 = sub_107366( 23, -621.04770000, 1209.19500000, 6.10370000, 90.00000000, 7, "", 0 );
            l_U668[16]._fU32 = {-640.67700000, 1206.95900000, 4.90840000};
            l_U668[16]._fU44 = sub_107615( 16, 9 );
            l_U668[16]._fU64 = l_U1475;
            ADD_BLIP_FOR_CHAR( l_U668[16]._fU0, ref l_U1209[16] );
        }
        break;
        case 5:
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3607(), -630.59410000, 1228.38000000, 6.13180000, 43.00000000, 44.00000000, 19.00000000, 0 ))
        {
            l_U668[17]._fU0 = sub_107366( 23, 64905, 1173, 10, 90.00000000, 26, "", 0 );
            l_U668[17]._fU32 = {-633.94090000, 1201.88500000, 5.05870000};
            l_U668[17]._fU44 = sub_107615( 17, 9 );
            l_U668[17]._fU64 = l_U1475;
            ADD_BLIP_FOR_CHAR( l_U668[17]._fU0, ref l_U1209[17] );
            l_U668[18]._fU0 = sub_107366( 23, -630.72940000, 1175.57600000, 8.96910000, 90.00000000, 7, "", 0 );
            l_U668[18]._fU32 = {-638.92970000, 1203.37000000, 4.90880000};
            l_U668[18]._fU44 = sub_107615( 18, 9 );
            l_U668[18]._fU64 = l_U1475;
            ADD_BLIP_FOR_CHAR( l_U668[18]._fU0, ref l_U1209[18] );
            l_U668[19]._fU0 = sub_107366( 23, -631.43840000, 1176.69900000, 8.97240000, 90.00000000, 7, "", 0 );
            l_U668[19]._fU32 = {-640.67700000, 1206.95900000, 4.90840000};
            l_U668[19]._fU44 = sub_107615( 19, 9 );
            l_U668[19]._fU64 = l_U1475;
            ADD_BLIP_FOR_CHAR( l_U668[19]._fU0, ref l_U1209[19] );
        }
        else
        {
            l_U668[17]._fU0 = sub_107366( 23, -624.35690000, 1208.67900000, 6.06080000, 90.00000000, 26, "", 0 );
            l_U668[17]._fU32 = {-633.94090000, 1201.88500000, 5.05870000};
            l_U668[17]._fU44 = sub_107615( 17, 9 );
            l_U668[17]._fU64 = l_U1475;
            ADD_BLIP_FOR_CHAR( l_U668[17]._fU0, ref l_U1209[17] );
            l_U668[18]._fU0 = sub_107366( 23, -624.02200000, 1210.90000000, 5.91950000, 90.00000000, 7, "", 0 );
            l_U668[18]._fU32 = {-638.92970000, 1203.37000000, 4.90880000};
            l_U668[18]._fU44 = sub_107615( 18, 9 );
            l_U668[18]._fU64 = l_U1475;
            ADD_BLIP_FOR_CHAR( l_U668[18]._fU0, ref l_U1209[18] );
            l_U668[19]._fU0 = sub_107366( 23, -621.04770000, 1209.19500000, 6.10370000, 90.00000000, 7, "", 0 );
            l_U668[19]._fU32 = {-640.67700000, 1206.95900000, 4.90840000};
            l_U668[19]._fU44 = sub_107615( 19, 9 );
            l_U668[19]._fU64 = l_U1475;
            ADD_BLIP_FOR_CHAR( l_U668[19]._fU0, ref l_U1209[19] );
        }
        break;
    }
    return;
}

void sub_107366(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, boolean bParam7)
{
    unknown Result;

    CREATE_CHAR( 26, l_U1240, uParam1._fU0, uParam1._fU4, uParam1._fU8, ref Result, 1 );
    SET_CHAR_HEADING( Result, uParam4 );
    SET_CHAR_DECISION_MAKER( Result, l_U1481 );
    GIVE_WEAPON_TO_CHAR( Result, uParam5, 3000, 1 );
    SET_CHAR_RELATIONSHIP_GROUP( Result, uParam0 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( Result );
    SET_CHAR_RELATIONSHIP( Result, 1, 23 );
    SET_CHAR_AS_ENEMY( Result, 1 );
    SET_PED_DIES_WHEN_INJURED( Result, 1 );
    SET_CHAR_HEALTH( Result, 215 );
    if (bParam7)
    {
        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( Result, 1 );
    }
    if (NOT (COMPARE_STRING( uParam6, "" )))
    {
        SET_ROOM_FOR_CHAR_BY_NAME( Result, uParam6 );
    }
    return Result;
}

int sub_107615(unknown uParam0, int Result)
{
    int I;
    unknown uVar5;
    unknown uVar6;

    sub_44321( uParam0, "Tring to find DA for ped...." );
    if (Result != 9)
    {
        sub_44500( "returning FOrce to" );
        for ( I = 0; I < l_U371; I++ )
        {
            if (l_U371[I]._fU0 == Result)
            {
                l_U371[I]._fU20[uParam0] = 1;
            }
        }
        l_U1815 = 0;
        return Result;
    }
    else
    {
        for ( I = 0; I < l_U371; I++ )
        {
            if (sub_107808( l_U371[I]._fU0 ))
            {
                if ((sub_108273( l_U371[I] )) < l_U371[I]._fU16)
                {
                    l_U371[I]._fU20[uParam0] = 1;
                    l_U668[uParam0]._fU32 = {l_U371[I]._fU4};
                    if (l_U371[I]._fU144)
                    {
                        l_U668[uParam0]._fU24 = 1;
                    }
                    sub_44321( l_U371[I]._fU0, "Found DA...." );
                    l_U1815 = 0;
                    return l_U371[I]._fU0;
                }
            }
        }
    }
    SCRIPT_ASSERT( "Couldn't find DA for biker!" );
    l_U1815 = 0;
    return 6;
}

int sub_107808(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        case 3:
        case 4:
        case 5:
        case 6:
        case 8:
        case 9:
        return 1;
        break;
        case 0:
        if (NOT (IS_CAR_DEAD( l_U1406[1] )))
        {
            return 1;
        }
        break;
        case 2:
        if (((sub_107984( l_U1423[4], -649.91240000, 1219.00200000, 4.90800000, 2.00000000, 2.00000000, 2.00000000 )) || (sub_107984( l_U1423[3], -649.66210000, 1218.44600000, 4.90810000, 2.00000000, 2.00000000, 2.00000000 ))) || (sub_107984( l_U1423[5], -650.24680000, 1218.20800000, 4.90830000, 2.00000000, 2.00000000, 2.00000000 )))
        {
            return 1;
        }
        break;
        case 7:
        if (NOT (IS_CAR_DEAD( l_U1414[0] )))
        {
            if (LOCATE_CAR_3D( l_U1414[0], -659.61940000, 1211.02200000, 4.90800000, 2.00000000, 2.00000000, 2.00000000, 0 ))
            {
                return 1;
            }
        }
        break;
    }
    return 1;
}

int sub_107984(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (LOCATE_OBJECT_3D( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam4._fU0, uParam4._fU4, uParam4._fU8, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_108273(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, unknown uParam33, unknown uParam34, unknown uParam35, unknown uParam36)
{
    int I;
    int Result;

    sub_44321( uParam0._fU0, "Counting peds at DA...." );
    for ( I = 0; I < uParam0._fU20; I++ )
    {
        if (uParam0._fU20[I])
        {
            if (NOT (IS_CHAR_INJURED( l_U668[I]._fU0 )))
            {
                Result++;
            }
            else
            {
                uParam0._fU20[I] = 0;
            }
        }
    }
    sub_44321( Result, "There are this many peds using this DA..." );
    return Result;
}

int sub_114157(unknown uParam0, int iParam1, int iParam2, boolean bParam3, boolean bParam4)
{
    int I;
    int iVar8;

    for ( I = 0; I <= (iParam1 - 1); I++ )
    {
        if (((uParam0^)[I]._fU4) || (NOT bParam4))
        {
            if ((IS_CHAR_DEAD( (uParam0^)[I]._fU0 )) || (IS_CHAR_FATALLY_INJURED( (uParam0^)[I]._fU0 )))
            {
                iVar8++;
            }
            else if (bParam3)
            {
                if (IS_CHAR_INJURED( (uParam0^)[I]._fU0 ))
                {
                    iVar8++;
                }
            }
        }
    }
    if (iVar8 >= iParam2)
    {
        return 1;
    }
    return 0;
}

int sub_116706()
{
    unknown uVar2;
    int I;
    unknown uVar4;

    if (NOT l_U1561)
    {
        if (NOT sub_99460())
        {
            l_U1561 = 1;
        }
    }
    else if ((((l_U1911 > 0) AND (l_U1911 < 6)) AND (NOT l_U1562)) AND (IS_SCREEN_FADED_IN()))
    {
        if (sub_99460())
        {
            CLEAR_PRINTS();
            DISABLE_PAUSE_MENU( 1 );
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            if (l_U370 != 2)
            {
                l_U370 = 2;
                sub_107263( 1 );
                l_U668[0]._fU4 = 1;
                l_U668[1]._fU4 = 1;
                l_U668[2]._fU4 = 1;
                l_U668[3]._fU4 = 1;
                l_U668[4]._fU4 = 1;
                sub_116923();
                l_U1920 = 0;
                l_U1915 = 1;
            }
            l_U1562 = 1;
            l_U1911 = 5;
        }
    }
    switch (l_U1911)
    {
        case 0:
        if (sub_44034( l_U1912, 1500 ))
        {
            if (sub_59364( 1, 1 ))
            {
                if (NOT sub_118597())
                {
                    for ( I = 0; I < l_U1241; I++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U1241[I]._fU0 )))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1241[I]._fU0, 1 );
                        }
                        if (NOT (IS_CHAR_IN_ANY_CAR( l_U1241[I]._fU0 )))
                        {
                            SET_CHAR_COORDINATES( l_U1241[I]._fU0, l_U1702[I]._fU0, l_U1702[I]._fU4, l_U1702[I]._fU8 );
                        }
                        else
                        {
                            WARP_CHAR_FROM_CAR_TO_COORD( l_U1241[I]._fU0, l_U1702[I]._fU0, l_U1702[I]._fU4, l_U1702[I]._fU8 );
                        }
                        if (NOT (DOES_BLIP_EXIST( l_U1463[I] )))
                        {
                            ADD_BLIP_FOR_CHAR( l_U1241[I]._fU0, ref l_U1463[I] );
                            CHANGE_BLIP_COLOUR( l_U1463[I], 3 );
                            CHANGE_BLIP_SCALE( l_U1463[I], 0.50000000 );
                            CHANGE_BLIP_DISPLAY( l_U1463[I], 2 );
                        }
                    }
                    CLEAR_HELP();
                    BEGIN_CAM_COMMANDS( ref l_U1904 );
                    CREATE_CAM( 14, ref l_U1893[0] );
                    CREATE_CAM( 14, ref l_U1893[1] );
                    CREATE_CAM( 3, ref l_U1893[2] );
                    CREATE_CAM( 14, ref l_U1893[3] );
                    CREATE_CAM( 14, ref l_U1893[7] );
                    CREATE_CAM( 3, ref l_U1893[8] );
                    CREATE_CAM( 14, ref l_U1893[4] );
                    CREATE_CAM( 14, ref l_U1893[5] );
                    CREATE_CAM( 3, ref l_U1893[6] );
                    CREATE_CAM( 14, ref l_U1893[9] );
                    SET_CAM_POS( l_U1893[0], -636.29840000, 1218.96800000, 5.17865600 );
                    SET_CAM_ROT( l_U1893[0], 17.06187000, 0.00000100, -132.60340000 );
                    SET_CAM_FOV( l_U1893[0], 40.50001000 );
                    SET_CAM_FAR_CLIP( l_U1893[0], 200.00000000 );
                    SET_CAM_ACTIVE( l_U1893[0], 1 );
                    SET_CAM_PROPAGATE( l_U1893[0], 1 );
                    SET_CAM_POS( l_U1893[1], -636.29840000, 1218.96800000, 5.17865600 );
                    SET_CAM_ROT( l_U1893[1], 17.06187000, 0.00000000, -161.88310000 );
                    SET_CAM_FOV( l_U1893[1], 40.50001000 );
                    SET_CAM_FAR_CLIP( l_U1893[1], 200.00000000 );
                    SET_CAM_ACTIVE( l_U1893[1], 1 );
                    SET_CAM_PROPAGATE( l_U1893[1], 0 );
                    SET_CAM_FAR_CLIP( l_U1893[2], 200.00000000 );
                    SET_CAM_POS( l_U1893[3], -622.55810000, 1225.15800000, 6.29428000 );
                    SET_CAM_ROT( l_U1893[3], 2.68147000, -0.00000000, 160.00950000 );
                    SET_CAM_FOV( l_U1893[3], 41.70000000 );
                    SET_CAM_FAR_CLIP( l_U1893[3], 200.00000000 );
                    SET_CAM_ACTIVE( l_U1893[3], 0 );
                    SET_CAM_PROPAGATE( l_U1893[3], 0 );
                    SET_CAM_POS( l_U1893[7], -632.23680000, 1225.43800000, 6.29428000 );
                    SET_CAM_ROT( l_U1893[7], 2.68147000, 0.00000000, 160.00950000 );
                    SET_CAM_FOV( l_U1893[7], 41.70000000 );
                    SET_CAM_FAR_CLIP( l_U1893[7], 200.00000000 );
                    SET_CAM_ACTIVE( l_U1893[7], 0 );
                    SET_CAM_PROPAGATE( l_U1893[7], 0 );
                    SET_CAM_FAR_CLIP( l_U1893[8], 200.00000000 );
                    SET_CAM_POS( l_U1893[4], -633.07560000, 1222.56700000, 5.79987400 );
                    SET_CAM_ROT( l_U1893[4], -0.89299200, -0.00000000, 174.96210000 );
                    SET_CAM_FOV( l_U1893[4], 40.80000000 );
                    SET_CAM_ACTIVE( l_U1893[4], 0 );
                    SET_CAM_PROPAGATE( l_U1893[4], 0 );
                    SET_CAM_POS( l_U1893[5], -633.07610000, 1222.56100000, 6.15983100 );
                    SET_CAM_ROT( l_U1893[5], -0.89299200, 0.00000000, 174.96210000 );
                    SET_CAM_FOV( l_U1893[5], 40.80000000 );
                    SET_CAM_ACTIVE( l_U1893[5], 0 );
                    SET_CAM_PROPAGATE( l_U1893[5], 0 );
                    SET_CAM_FAR_CLIP( l_U1893[6], 200.00000000 );
                    SET_CAM_POS( l_U1893[9], -637.32870000, 1198.45500000, 5.16124200 );
                    SET_CAM_ROT( l_U1893[9], 11.82668000, -0.00000000, -147.91010000 );
                    SET_CAM_FOV( l_U1893[9], 35.40002000 );
                    SET_CAM_FAR_CLIP( l_U1893[9], 50.00000000 );
                    SET_CAM_ACTIVE( l_U1893[9], 0 );
                    SET_CAM_PROPAGATE( l_U1893[9], 0 );
                    SET_CAM_ACTIVE( l_U1893[8], 0 );
                    SET_CAM_PROPAGATE( l_U1893[8], 0 );
                    SET_CAM_ACTIVE( l_U1893[0], 0 );
                    SET_CAM_PROPAGATE( l_U1893[0], 0 );
                    SET_CAM_INTERP_STYLE_CORE( l_U1893[2], l_U1893[0], l_U1893[1], 6000, 0 );
                    SET_CAM_ACTIVE( l_U1893[2], 1 );
                    SET_CAM_PROPAGATE( l_U1893[2], 1 );
                    SET_PLAYER_CONTROL( sub_26182(), 0 );
                    SET_INSTANT_WIDESCREEN_BORDERS( 1 );
                    DISPLAY_RADAR( 0 );
                    if (IS_CHAR_IN_ANY_CAR( sub_3607() ))
                    {
                        GET_CAR_CHAR_IS_USING( sub_3607(), ref uVar4 );
                        CLEAR_AREA( -631.73740000, 1252.10000000, 4.90860000, 10.00000000, 1 );
                        SET_CAR_COORDINATES( uVar4, -631.73740000, 1252.10000000, 4.90860000 );
                        SET_CAR_ON_GROUND_PROPERLY( uVar4 );
                        WARP_CHAR_FROM_CAR_TO_COORD( sub_3607(), -628.19070000, 1224.65300000, 4.90840000 );
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( sub_3607(), -628.19070000, 1224.65300000, 4.90840000 );
                    }
                    SET_CHAR_HEADING( sub_3607(), -183.16730000 );
                    CLEAR_AREA( -627.91680000, 1214.80500000, 4.91540000, 15.00000000, 1 );
                    CLEAR_AREA( -635.38330000, 1184.36300000, 6.79040000, 15.00000000, 1 );
                    CLEAR_AREA( -635.72080000, 1199.82400000, 5.05870000, 15.00000000, 1 );
                    if (NOT (IS_CHAR_DEAD( l_U1241[0]._fU0 )))
                    {
                        SET_CHAR_COORDINATES( l_U1241[0]._fU0, -630.62520000, 1224.27200000, 4.90840000 );
                        SET_CHAR_HEADING( l_U1241[0]._fU0, 179.61170000 );
                    }
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    if (NOT (IS_CAR_DEAD( l_U1406[0] )))
                    {
                        SET_CAR_COORDINATES( l_U1406[0], -602.49820000, 1217.07200000, 7.83730000 );
                        SET_CAR_HEADING( l_U1406[0], 89.89440000 );
                        SET_CAR_ON_GROUND_PROPERLY( l_U1406[0] );
                    }
                    else if (DOES_VEHICLE_EXIST( l_U1406[0] ))
                    {
                        DELETE_CAR( ref l_U1406[0] );
                    }
                    if (NOT (IS_CAR_DEAD( l_U1406[1] )))
                    {
                        SET_CAR_COORDINATES( l_U1406[1], -647.90810000, 1207.09700000, 4.90810000 );
                        SET_CAR_HEADING( l_U1406[1], 40.77880000 );
                        SET_CAR_ON_GROUND_PROPERLY( l_U1406[1] );
                    }
                    else if (DOES_VEHICLE_EXIST( l_U1406[1] ))
                    {
                        DELETE_CAR( ref l_U1406[1] );
                    }
                    if (NOT (IS_CAR_DEAD( l_U1406[2] )))
                    {
                        SET_CAR_COORDINATES( l_U1406[2], -627.90310000, 1233.64800000, 5.71600000 );
                        SET_CAR_HEADING( l_U1406[2], -112.53450000 );
                        SET_CAR_ON_GROUND_PROPERLY( l_U1406[2] );
                    }
                    else if (DOES_VEHICLE_EXIST( l_U1406[2] ))
                    {
                        DELETE_CAR( ref l_U1406[2] );
                    }
                    if (NOT (IS_CAR_DEAD( l_U1406[3] )))
                    {
                        SET_CAR_COORDINATES( l_U1406[3], -649.31090000, 1204.10900000, 5.40080000 );
                        SET_CAR_HEADING( l_U1406[3], 16.04790000 );
                        SET_CAR_ON_GROUND_PROPERLY( l_U1406[3] );
                    }
                    else if (DOES_VEHICLE_EXIST( l_U1406[3] ))
                    {
                        DELETE_CAR( ref l_U1406[3] );
                    }
                    if (NOT (IS_CAR_DEAD( l_U1406[4] )))
                    {
                        SET_CAR_COORDINATES( l_U1406[4], -643.13090000, 1203.56800000, 5.39770000 );
                        SET_CAR_HEADING( l_U1406[4], 209.72220000 );
                        SET_CAR_ON_GROUND_PROPERLY( l_U1406[4] );
                    }
                    else if (DOES_VEHICLE_EXIST( l_U1406[4] ))
                    {
                        DELETE_CAR( ref l_U1406[4] );
                    }
                    if (NOT (IS_CAR_DEAD( l_U1406[5] )))
                    {
                        SET_CAR_COORDINATES( l_U1406[5], -651.93350000, 1204.27000000, 4.90820000 );
                        SET_CAR_HEADING( l_U1406[5], 359.74300000 );
                        SET_CAR_ON_GROUND_PROPERLY( l_U1406[5] );
                    }
                    else if (DOES_VEHICLE_EXIST( l_U1406[5] ))
                    {
                        DELETE_CAR( ref l_U1406[5] );
                    }
                    CLEAR_AREA( -627.91680000, 1214.80500000, 4.91540000, 15.00000000, 1 );
                    sub_21746( "E1B4_EXP1", ref l_U1482, 7, 1 );
                    l_U1921 = 1;
                    GET_GAME_TIMER( ref l_U1912 );
                    l_U1911 = 2;
                }
            }
        }
        break;
        case 2:
        if (NOT l_U1918)
        {
            if (NOT l_U1915)
            {
                if (sub_44034( l_U1912, 1000 ))
                {
                    l_U1920 = 1;
                    l_U1915 = 1;
                }
            }
            else if (sub_44034( l_U1912, 1500 + (l_U1923 * 2000) ))
            {
                if (NOT (IS_CHAR_DEAD( l_U668[12]._fU0 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U668[13]._fU0 )))
                    {
                        if ((l_U1924 mod 2) == 0)
                        {
                            SAY_AMBIENT_SPEECH( l_U668[12]._fU0, "ANGELS_OF_DEATH_TAUNT_LOST", 1, 1, 2 );
                        }
                        else
                        {
                            SAY_AMBIENT_SPEECH( l_U668[13]._fU0, "GENERIC_FUCK_OFF", 1, 1, 2 );
                        }
                        l_U1924++;
                        l_U1923++;
                    }
                }
            }
            if (sub_44034( l_U1912, 5500 ))
            {
                if (NOT (IS_CHAR_DEAD( l_U1241[2]._fU0 )))
                {
                    OPEN_SEQUENCE_TASK( ref uVar2 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -623.71810000, 1221.81500000, 5.02010000, 3, -2, 0.50000000 );
                    TASK_PUT_CHAR_DIRECTLY_INTO_COVER( 0, -623.41280000, 1221.31500000, 5.02150000, -2 );
                    CLOSE_SEQUENCE_TASK( uVar2 );
                    TASK_PERFORM_SEQUENCE( l_U1241[2]._fU0, uVar2 );
                    CLEAR_SEQUENCE_TASK( uVar2 );
                    l_U1918 = 1;
                    GET_GAME_TIMER( ref l_U1912 );
                }
            }
        }
        else if ((NOT (IS_CAM_ACTIVE( l_U1893[8] ))) AND (NOT l_U1916))
        {
            if (NOT (IS_CAM_ACTIVE( l_U1893[3] )))
            {
                if (sub_44034( l_U1912, 500 ))
                {
                    CLEAR_PRINTS();
                    SET_CAM_ACTIVE( l_U1893[3], 1 );
                    SET_CAM_PROPAGATE( l_U1893[3], 1 );
                    SET_CAM_ACTIVE( l_U1893[2], 0 );
                    SET_CAM_PROPAGATE( l_U1893[2], 0 );
                }
            }
            else
            {
                l_U370 = 0;
                l_U1920 = 0;
                l_U1915 = 0;
                SET_CAM_ACTIVE( l_U1893[3], 0 );
                SET_CAM_PROPAGATE( l_U1893[3], 0 );
                SET_CAM_ACTIVE( l_U1893[7], 1 );
                SET_CAM_INTERP_STYLE_CORE( l_U1893[8], l_U1893[3], l_U1893[7], 5000, 0 );
                SET_CAM_ACTIVE( l_U1893[8], 1 );
                SET_CAM_PROPAGATE( l_U1893[8], 1 );
                GET_GAME_TIMER( ref l_U1912 );
                l_U1916 = 1;
            }
        }
        else if (NOT l_U1919)
        {
            l_U1915 = 1;
            if (sub_44034( l_U1912, 1200 ))
            {
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -628.04220000, 1221.47100000, 4.90840000, 3, -2, 0.50000000 );
                TASK_PUT_CHAR_DIRECTLY_INTO_COVER( 0, -628.05060000, 1220.79200000, 4.90840000, -2 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                TASK_PERFORM_SEQUENCE( sub_3607(), uVar2 );
                CLEAR_SEQUENCE_TASK( uVar2 );
                GET_GAME_TIMER( ref l_U1912 );
                l_U1919 = 1;
            }
        }
        else if (NOT l_U1917)
        {
            if (sub_44034( l_U1912, 1000 ))
            {
                if (NOT (IS_CHAR_DEAD( l_U1241[0]._fU0 )))
                {
                    OPEN_SEQUENCE_TASK( ref uVar2 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -632.11680000, 1221.54100000, 4.90840000, 3, -2, 0.50000000 );
                    TASK_PUT_CHAR_DIRECTLY_INTO_COVER( 0, -632.74140000, 1220.74100000, 4.90840000, -2 );
                    CLOSE_SEQUENCE_TASK( uVar2 );
                    TASK_PERFORM_SEQUENCE( l_U1241[0]._fU0, uVar2 );
                    CLEAR_SEQUENCE_TASK( uVar2 );
                    l_U1917 = 1;
                }
                GET_GAME_TIMER( ref l_U1912 );
            }
        }
        else if (NOT (IS_CHAR_DEAD( l_U1241[0]._fU0 )))
        {
            if ((IS_PED_IN_COVER( l_U1241[0]._fU0 )) || (sub_44034( l_U1912, 5000 )))
            {
                GET_GAME_TIMER( ref l_U1912 );
                l_U1911 = 3;
            }
        };;;;;
        break;
        case 3:
        if (NOT (IS_CHAR_DEAD( l_U1241[0]._fU0 )))
        {
            if (sub_44034( l_U1912, 500 ))
            {
                if (NOT (IS_CAM_ACTIVE( l_U1893[9] )))
                {
                    if (sub_44034( l_U1912, 500 ))
                    {
                        for ( I = 0; I <= 4; I++ )
                        {
                            if (NOT (IS_CHAR_DEAD( l_U668[I]._fU0 )))
                            {
                                FREEZE_CHAR_POSITION( l_U668[I]._fU0, 0 );
                            }
                        }
                        SET_CAM_ACTIVE( l_U1893[9], 1 );
                        SET_CAM_PROPAGATE( l_U1893[9], 1 );
                        SET_CAM_ACTIVE( l_U1893[7], 0 );
                        SET_CAM_ACTIVE( l_U1893[8], 0 );
                        SET_CAM_PROPAGATE( l_U1893[8], 0 );
                    }
                }
                else
                {
                    sub_21746( "E1B4_GREET", ref l_U1905, 6, 1 );
                    l_U1548 = 1;
                    GET_GAME_TIMER( ref l_U1912 );
                    l_U1911 = 5;
                }
            }
        }
        break;
        case 5:
        if ((NOT (sub_23529( l_U1905 ))) || (l_U1562))
        {
            if (l_U1562)
            {
                if (NOT (IS_PED_IN_COVER( sub_3607() )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3607() );
                    SET_CHAR_COORDINATES( sub_3607(), -628.04220000, 1221.47100000, 4.90840000 );
                    TASK_PUT_CHAR_DIRECTLY_INTO_COVER( sub_3607(), -628.05060000, 1220.79200000, 4.90840000, -2 );
                    GET_GAME_TIMER( ref l_U1925 );
                }
            }
            if (DOES_CHAR_EXIST( l_U668[12]._fU0 ))
            {
                DELETE_CHAR( ref l_U668[12]._fU0 );
            }
            if (DOES_CHAR_EXIST( l_U668[13]._fU0 ))
            {
                DELETE_CHAR( ref l_U668[13]._fU0 );
            }
            SET_CAM_ACTIVE( l_U1893[2], 0 );
            SET_CAM_PROPAGATE( l_U1893[2], 0 );
            SET_CAM_ACTIVE( l_U1893[1], 0 );
            SET_CAM_PROPAGATE( l_U1893[1], 0 );
            SET_CAM_ACTIVE( l_U1893[0], 0 );
            SET_CAM_PROPAGATE( l_U1893[0], 0 );
            SET_CAM_ACTIVE( l_U1893[8], 0 );
            SET_CAM_PROPAGATE( l_U1893[8], 0 );
            SET_CAM_ACTIVE( l_U1893[7], 0 );
            SET_CAM_PROPAGATE( l_U1893[7], 0 );
            SET_CAM_ACTIVE( l_U1893[3], 0 );
            SET_CAM_PROPAGATE( l_U1893[3], 0 );
            SET_CAM_ACTIVE( l_U1893[6], 0 );
            SET_CAM_PROPAGATE( l_U1893[6], 0 );
            SET_CAM_ACTIVE( l_U1893[5], 0 );
            SET_CAM_PROPAGATE( l_U1893[5], 0 );
            SET_CAM_ACTIVE( l_U1893[4], 0 );
            SET_CAM_PROPAGATE( l_U1893[4], 0 );
            SET_CAM_ACTIVE( l_U1893[9], 0 );
            SET_CAM_PROPAGATE( l_U1893[9], 0 );
            DESTROY_CAM( l_U1893[2] );
            DESTROY_CAM( l_U1893[1] );
            DESTROY_CAM( l_U1893[0] );
            DESTROY_CAM( l_U1893[8] );
            DESTROY_CAM( l_U1893[7] );
            DESTROY_CAM( l_U1893[3] );
            DESTROY_CAM( l_U1893[6] );
            DESTROY_CAM( l_U1893[5] );
            DESTROY_CAM( l_U1893[4] );
            DESTROY_CAM( l_U1893[9] );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            END_CAM_COMMANDS( ref l_U1904 );
            if (NOT (IS_CHAR_INJURED( l_U1241[0]._fU0 )))
            {
                SET_CHAR_COORDINATES( l_U1241[0]._fU0, -634.24480000, 1221.94400000, 4.90860000 );
            }
            for ( I = 0; I < l_U1241; I++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U1241[I]._fU0 )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1241[I]._fU0, 0 );
                }
            }
            CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -625.23110000, 1198.23100000, 5.19930000, 90.00000000, 0.00000000, 0.00000000, ref l_U1809[0] );
            ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U1809[0], "E1_AODclubroom" );
            if (l_U1562)
            {
                if ((NOT (sub_44034( l_U1925, 5000 ))) || (NOT (IS_PED_IN_COVER( sub_3607() ))))
                {
                    while ((NOT (sub_44034( l_U1925, 5000 ))) AND (NOT (IS_PED_IN_COVER( sub_3607() ))))
                    {
                        WAIT( 0 );
                    }
                    WAIT( 1000 );
                    l_U1920 = 0;
                    l_U1915 = 1;
                }
                INCREMENT_INT_STAT( 372, 1 );
                DO_SCREEN_FADE_IN( 500 );
            }
            else
            {
                INCREMENT_INT_STAT( 373, 1 );
            }
            l_U1539 = 1;
            l_U1492 = 1;
            l_U1921 = 0;
            SET_PLAYER_CONTROL( sub_26182(), 1 );
            SET_PED_IS_BLIND_RAGING( sub_3607(), 1 );
            SET_INSTANT_WIDESCREEN_BORDERS( 0 );
            DISPLAY_RADAR( 1 );
            SET_TIME_CYCLE_FAR_CLIP_DISABLED( 0 );
            if (NOT (IS_CAR_DEAD( l_U1241[0]._fU4 )))
            {
                SET_CAR_PROOFS( l_U1241[0]._fU4, 1, 1, 1, 1, 1 );
            }
            if (NOT (IS_CAR_DEAD( l_U1402 )))
            {
                SET_CAR_PROOFS( l_U1402, 1, 1, 1, 1, 1 );
            }
            PRINT_NOW( "B4_KILLD", 7500, 1 );
            l_U1911 = 6;
        }
        break;
    }
    if (l_U1921)
    {
        SET_TIME_CYCLE_FAR_CLIP_DISABLED( 1 );
    }
    return 0;
}

void sub_116923()
{
    int I;
    unknown uVar3;

    for ( I = 0; I <= 29; I++ )
    {
        if (l_U668[I]._fU4)
        {
            if (NOT (IS_CHAR_DEAD( l_U668[I]._fU0 )))
            {
                if (NOT l_U668[I]._fU8)
                {
                    SET_CHAR_DECISION_MAKER( l_U668[I]._fU0, l_U1481 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U668[I]._fU0, 1 );
                    if (NOT l_U668[I]._fU24)
                    {
                        OPEN_SEQUENCE_TASK( ref uVar3 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U668[I]._fU32._fU0, l_U668[I]._fU32._fU4, l_U668[I]._fU32._fU8, 3, -1, 0.50000000 );
                        if (l_U668[I]._fU20)
                        {
                            TASK_DUCK( 0, -2 );
                        }
                        CLOSE_SEQUENCE_TASK( uVar3 );
                    }
                    else
                    {
                        SET_PED_DONT_DO_EVASIVE_DIVES( l_U668[I]._fU0, 1 );
                        OPEN_SEQUENCE_TASK( ref uVar3 );
                        TASK_GO_TO_COORD_WHILE_SHOOTING( 0, l_U668[I]._fU32._fU0, l_U668[I]._fU32._fU4, l_U668[I]._fU32._fU8, 3, 0.50000000, 0.50000000, sub_3607(), 1 );
                        CLOSE_SEQUENCE_TASK( uVar3 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U668[I]._fU0 )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U668[I]._fU0, uVar3 );
                    }
                    CLEAR_SEQUENCE_TASK( uVar3 );
                    l_U668[I]._fU8 = 1;
                }
                else if ((NOT l_U668[I]._fU16) || (l_U668[I]._fU12))
                {
                    if (NOT l_U668[I]._fU20)
                    {
                        if (sub_67220( l_U668[I]._fU0, 1, 0 ))
                        {
                            SET_CHAR_DECISION_MAKER( l_U668[I]._fU0, l_U1473 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U668[I]._fU0, 0 );
                            SET_COMBAT_DECISION_MAKER( l_U668[I]._fU0, l_U668[I]._fU64 );
                            SET_PED_DONT_DO_EVASIVE_DIVES( l_U668[I]._fU0, 0 );
                            sub_117525( ref l_U668[I], l_U668[I]._fU44 );
                            SET_CHAR_RELATIONSHIP( l_U668[I]._fU0, 5, 0 );
                            if (l_U668[I]._fU52)
                            {
                                OPEN_SEQUENCE_TASK( ref uVar3 );
                                if (NOT (IS_CHAR_DEAD( l_U668[I]._fU56 )))
                                {
                                    TASK_COMBAT( 0, l_U668[I]._fU56 );
                                }
                                CLOSE_SEQUENCE_TASK( uVar3 );
                            }
                            else
                            {
                                OPEN_SEQUENCE_TASK( ref uVar3 );
                                TASK_COMBAT( 0, sub_3607() );
                                CLOSE_SEQUENCE_TASK( uVar3 );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U668[I]._fU0 )))
                            {
                                TASK_PERFORM_SEQUENCE( l_U668[I]._fU0, uVar3 );
                            }
                            CLEAR_SEQUENCE_TASK( uVar3 );
                            l_U668[I]._fU16 = 1;
                            l_U668[I]._fU12 = 0;
                        }
                        else if (l_U668[I]._fU24)
                        {
                            if (IS_PED_RAGDOLL( l_U668[I]._fU0 ))
                            {
                                OPEN_SEQUENCE_TASK( ref uVar3 );
                                TASK_GO_TO_COORD_WHILE_SHOOTING( 0, l_U668[I]._fU32._fU0, l_U668[I]._fU32._fU4, l_U668[I]._fU32._fU8, 3, 0.50000000, 0.50000000, sub_3607(), 1 );
                                CLOSE_SEQUENCE_TASK( uVar3 );
                                if (NOT (IS_CHAR_INJURED( l_U668[I]._fU0 )))
                                {
                                    TASK_PERFORM_SEQUENCE( l_U668[I]._fU0, uVar3 );
                                }
                                CLEAR_SEQUENCE_TASK( uVar3 );
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_117525(int iParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 6:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -655.59740000, 1207.83800000, 7.91330000, -637.59740000, 1207.83800000, 2.91330000, 9.50000000 );
        break;
        case 0:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -644.32470000, 1207.20400000, 7.91330000, -650.82470000, 1207.20400000, 2.91330000, 7.00000000 );
        break;
        case 1:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -637.24800000, 1204.55600000, 7.52320000, -640.24800000, 1204.55600000, 3.52320000, 3.00000000 );
        break;
        case 2:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -649.05160000, 1218.64700000, 6.91310000, -652.05160000, 1218.64700000, 2.91310000, 3.00000000 );
        break;
        case 3:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -652.35740000, 1212.88000000, 7.97220000, -652.35740000, 1209.88000000, 3.97220000, 3.00000000 );
        break;
        case 4:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -640.28100000, 1209.60700000, 7.97220000, -640.28100000, 1206.60700000, 3.97220000, 2.50000000 );
        break;
        case 5:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -635.40890000, 1203.53000000, 7.06370000, -635.40890000, 1201.03000000, 4.56370000, 3.00000000 );
        break;
        case 7:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -657.97810000, 1209.64000000, 7.41300000, -661.45950000, 1211.61000000, 4.41300000, 7.00000000 );
        break;
        case 8:
        SET_CHAR_SPHERE_DEFENSIVE_AREA( iParam0->_fU0, iParam0->_fU32, 2 );
        break;
    }
    return;
}

int sub_118597()
{
    if (((((IS_CHAR_INJURED( l_U1241[0]._fU0 )) || (IS_CHAR_INJURED( l_U1241[1]._fU0 ))) || (IS_CHAR_INJURED( l_U1241[2]._fU0 ))) || (IS_CHAR_INJURED( l_U1241[4]._fU0 ))) || (IS_CHAR_INJURED( l_U1241[3]._fU0 )))
    {
        return 1;
    }
    return 0;
}

void sub_124567(unknown uParam0)
{
    int[5] iVar3;
    int I;
    unknown uVar10;
    unknown uVar11;

    array(ref iVar3, 5);
    for ( I = 0; I < (uParam0^); I++ )
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))
        {
            if (IS_CHAR_ON_ANY_BIKE( (uParam0^)[I]._fU0 ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( (uParam0^)[I]._fU0, ref uVar10 );
                iVar3[sub_18412( uVar10 )] = 1;
            }
        }
    }
    if (IS_CHAR_ON_ANY_BIKE( sub_3607() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3607(), ref uVar10 );
        iVar3[sub_18412( uVar10 )] = 1;
    }
    for ( I = 0; I < iVar3; I++ )
    {
        uVar11 = sub_18689( I );
        if (iVar3[I])
        {
            if (NOT (HAVE_ANIMS_LOADED( uVar11 )))
            {
                REQUEST_ANIMS( uVar11 );
            }
        }
        else if (HAVE_ANIMS_LOADED( uVar11 ))
        {
            REMOVE_ANIMS( uVar11 );
        }
    }
    return;
}

void sub_124845()
{
    if (l_U1840)
    {
        switch (l_U362)
        {
            case 1:
            if (NOT (DOES_CHAR_EXIST( l_U1241[0]._fU0 )))
            {
                while (NOT (sub_124940( 0, l_U1702[0], l_U1764[0], ref l_U1241[0] )))
                {
                    WAIT( 0 );
                }
            }
            else if (NOT (IS_CHAR_DEAD( l_U1241[0]._fU0 )))
            {
                SET_CHAR_COORDINATES( l_U1241[0]._fU0, l_U1702[0]._fU0, l_U1702[0]._fU4, l_U1702[0]._fU8 );
                SET_CHAR_HEADING( l_U1241[0]._fU0, l_U1764[0] );
            }
            if (NOT (IS_CHAR_DEAD( l_U1241[0]._fU0 )))
            {
                sub_5929( 1, l_U1241[0]._fU0, "BILLY", 0 );
                sub_12741( 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1241[0]._fU0, 1 );
            }
            if (NOT (DOES_CHAR_EXIST( l_U1241[1]._fU0 )))
            {
                while (NOT (sub_124940( 1, l_U1702[1], l_U1764[1], ref l_U1241[1] )))
                {
                    WAIT( 0 );
                }
            }
            else if (NOT (IS_CHAR_DEAD( l_U1241[1]._fU0 )))
            {
                SET_CHAR_COORDINATES( l_U1241[1]._fU0, l_U1702[1]._fU0, l_U1702[1]._fU4, l_U1702[1]._fU8 );
                SET_CHAR_HEADING( l_U1241[1]._fU0, l_U1764[1] );
            }
            if (NOT (IS_CHAR_DEAD( l_U1241[1]._fU0 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1241[1]._fU0, 1 );
                sub_5929( 5, l_U1241[1]._fU0, "JIM", 0 );
                sub_12741( 1 );
            }
            if (NOT (DOES_CHAR_EXIST( l_U1241[2]._fU0 )))
            {
                while (NOT (sub_124940( 13, l_U1702[2], l_U1764[2], ref l_U1241[2] )))
                {
                    WAIT( 0 );
                }
            }
            else if (NOT (IS_CHAR_DEAD( l_U1241[2]._fU0 )))
            {
                SET_CHAR_COORDINATES( l_U1241[2]._fU0, l_U1702[2]._fU0, l_U1702[2]._fU4, l_U1702[2]._fU8 );
                SET_CHAR_HEADING( l_U1241[2]._fU0, l_U1764[2] );
            }
            if (NOT (IS_CHAR_DEAD( l_U1241[2]._fU0 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1241[2]._fU0, 1 );
                sub_5929( 2, l_U1241[2]._fU0, "BRIAN", 0 );
                sub_12741( 13 );
            }
            if (NOT (DOES_VEHICLE_EXIST( l_U1241[2]._fU4 )))
            {
                while (NOT (sub_100840( ref l_U1241[2]._fU4, -640.42000000, 1232.50000000, 6, -132.00000000 )))
                {
                    WAIT( 0 );
                }
            }
            else if (NOT (IS_CAR_DEAD( l_U1241[2]._fU4 )))
            {
                SET_CAR_COORDINATES( l_U1241[2]._fU4, -640.42000000, 1232.50000000, 6 );
                SET_CAR_HEADING( l_U1241[2]._fU4, -132.00000000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U1241[2]._fU4 );
            }
            if (NOT (DOES_CHAR_EXIST( l_U1241[3]._fU0 )))
            {
                while (NOT (sub_124940( 6, l_U1702[3], l_U1764[3], ref l_U1241[3] )))
                {
                    WAIT( 0 );
                }
            }
            else if (NOT (IS_CHAR_DEAD( l_U1241[3]._fU0 )))
            {
                SET_CHAR_COORDINATES( l_U1241[3]._fU0, l_U1702[3]._fU0, l_U1702[3]._fU4, l_U1702[3]._fU8 );
                SET_CHAR_HEADING( l_U1241[3]._fU0, l_U1764[3] );
            }
            if (NOT (IS_CHAR_DEAD( l_U1241[3]._fU0 )))
            {
                sub_5929( 3, l_U1241[3]._fU0, "TERRY", 0 );
                sub_12741( 6 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1241[3]._fU0, 1 );
            }
            if (NOT (DOES_VEHICLE_EXIST( l_U1241[3]._fU4 )))
            {
                while (NOT (sub_80357( ref l_U1241[3]._fU4, -647.45000000, 1226.65000000, 6, -85.00000000 )))
                {
                    WAIT( 0 );
                }
            }
            else if (NOT (IS_CAR_DEAD( l_U1241[3]._fU4 )))
            {
                SET_CAR_COORDINATES( l_U1241[3]._fU4, -647.45000000, 1226.65000000, 6 );
                SET_CAR_HEADING( l_U1241[3]._fU4, -85.00000000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U1241[3]._fU4 );
            }
            if (NOT (DOES_CHAR_EXIST( l_U1241[4]._fU0 )))
            {
                while (NOT (sub_124940( 7, l_U1702[4], l_U1764[4], ref l_U1241[4] )))
                {
                    WAIT( 0 );
                }
            }
            else if (NOT (IS_CHAR_DEAD( l_U1241[4]._fU0 )))
            {
                SET_CHAR_COORDINATES( l_U1241[4]._fU0, l_U1702[4]._fU0, l_U1702[4]._fU4, l_U1702[4]._fU8 );
                SET_CHAR_HEADING( l_U1241[4]._fU0, l_U1764[4] );
            }
            if (NOT (IS_CHAR_DEAD( l_U1241[4]._fU0 )))
            {
                sub_5929( 3, l_U1241[4]._fU0, "CLAY", 0 );
                sub_12741( 7 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1241[4]._fU0, 1 );
            }
            if (NOT (DOES_VEHICLE_EXIST( l_U1241[4]._fU4 )))
            {
                while (NOT (sub_80432( ref l_U1241[4]._fU4, -644.88000000, 1232.72000000, 6, 65404 )))
                {
                    WAIT( 0 );
                }
            }
            else if (NOT (IS_CAR_DEAD( l_U1241[4]._fU4 )))
            {
                SET_CAR_COORDINATES( l_U1241[4]._fU4, -644.88000000, 1232.72000000, 6 );
                SET_CAR_HEADING( l_U1241[4]._fU4, 65404 );
                SET_CAR_ON_GROUND_PROPERLY( l_U1241[4]._fU4 );
            }
            for ( l_U1721 = 0; l_U1721 < l_U1241; l_U1721++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U1241[l_U1721]._fU0 )))
                {
                    if (NOT (IS_CAR_DEAD( l_U1241[l_U1721]._fU4 )))
                    {
                        sub_15934( ref l_U1241[l_U1721], l_U1241[l_U1721]._fU4, 1 );
                        LOCK_CAR_DOORS( l_U1241[l_U1721]._fU4, 3 );
                        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U1241[l_U1721]._fU4, 1 );
                    }
                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U1241[l_U1721]._fU0, 1 );
                    SET_PED_DIES_WHEN_INJURED( l_U1241[l_U1721]._fU0, 1 );
                    SET_CHAR_DECISION_MAKER( l_U1241[l_U1721]._fU0, l_U1473 );
                    SET_COMBAT_DECISION_MAKER( l_U1241[l_U1721]._fU0, l_U1474 );
                    SET_CHAR_MAX_HEALTH( l_U1241[l_U1721]._fU0, 600 );
                    SET_CHAR_HEALTH( l_U1241[l_U1721]._fU0, 600 );
                    SET_CHAR_SUFFERS_CRITICAL_HITS( l_U1241[l_U1721]._fU0, 0 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U1241[l_U1721]._fU0, 0 );
                    SET_CHAR_RELATIONSHIP( l_U1241[l_U1721]._fU0, 0, 0 );
                    switch (l_U1721)
                    {
                        case 0:
                        case 3:
                        GIVE_WEAPON_TO_CHAR( l_U1241[l_U1721]._fU0, 26, 30000, 1 );
                        break;
                        case 1:
                        GIVE_WEAPON_TO_CHAR( l_U1241[l_U1721]._fU0, 7, 30000, 1 );
                        break;
                        default:
                        GIVE_WEAPON_TO_CHAR( l_U1241[l_U1721]._fU0, 7, 30000, 1 );
                        break;
                    }
                }
            }
            l_U1840 = 0;
            break;
            case 4:
            while (NOT (sub_8662( ref l_U1402, l_U1841, l_U1844 )))
            {
                WAIT( 0 );
            }
            if (NOT (LOCATE_CAR_3D( l_U1402, -637.24020000, 1229.24100000, 5.91360000, 25.00000000, 30.00000000, 6.00000000, 0 )))
            {
                SET_CAR_COORDINATES( l_U1402, -646.11170000, 1228.95000000, 4.90860000 );
                SET_CAR_HEADING( l_U1402, 338.67800000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U1402 );
            }
            while (NOT (sub_124940( 0, -626.00630000, 1184.63900000, 2.13240000, 97.70000000, ref l_U1241[0] )))
            {
                WAIT( 0 );
            }
            if (NOT (IS_CHAR_DEAD( l_U1241[0]._fU0 )))
            {
                sub_5929( 1, l_U1241[0]._fU0, "BILLY", 0 );
                sub_12741( 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1241[0]._fU0, 1 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U1241[0]._fU0, "E1_AODBasement" );
            }
            while (NOT (sub_124940( 13, -624.43000000, 1183.49000000, 2.31000000, 79, ref l_U1241[2] )))
            {
                WAIT( 0 );
            }
            if (NOT (IS_CHAR_DEAD( l_U1241[2]._fU0 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1241[2]._fU0, 1 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U1241[2]._fU0, "E1_AODBasement" );
                sub_5929( 2, l_U1241[2]._fU0, "BRIAN", 0 );
                sub_12741( 13 );
            }
            while (NOT (sub_10287( 6, -641.69170000, 1213.11900000, 4.90860000, 267.90690000, ref l_U1241[3] )))
            {
                WAIT( 0 );
            }
            if (NOT (IS_CHAR_DEAD( l_U1241[3]._fU0 )))
            {
                sub_5929( 3, l_U1241[3]._fU0, "TERRY", 0 );
                sub_12741( 6 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1241[3]._fU0, 1 );
            }
            while (NOT (sub_10287( 7, -642.11290000, 1216.24200000, 4.90860000, 274.50250000, ref l_U1241[4] )))
            {
                WAIT( 0 );
            }
            if (NOT (IS_CHAR_DEAD( l_U1241[0]._fU0 )))
            {
                sub_5929( 3, l_U1241[4]._fU0, "CLAY", 0 );
                sub_12741( 7 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1241[4]._fU0, 1 );
            }
            REQUEST_CAR_RECORDING( 476 );
            REQUEST_CAR_RECORDING( 477 );
            REQUEST_CAR_RECORDING( 487 );
            REQUEST_MODEL( -1745203402 );
            while ((((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 476 ))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 477 )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 487 )))) || (NOT (HAS_MODEL_LOADED( -1745203402 ))))
            {
                WAIT( 0 );
            }
            CLEAR_AREA( -633.10600000, 1214.60300000, 5.74740000, 20.00000000, 1 );
            CREATE_CAR( -1745203402, -633.10600000, 1214.60300000, 5.74740000, ref l_U1406[1], 1 );
            SET_CAR_COORDINATES( l_U1406[1], -633.10600000, 1214.60300000, 5.74740000 );
            SET_CAR_HEADING( l_U1406[1], 270.96290000 );
            l_U1840 = 0;
            break;
        }
    }
    return;
}

int sub_124940(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    if (NOT (sub_10298( uParam0 )))
    {
        sub_10566( uParam0 );
        return 0;
    }
    sub_10671( uParam1, uParam4, sub_4251( uParam0 ), iParam5 );
    sub_12293( uParam0, iParam5->_fU0 );
    sub_4228( uParam0 );
    return 1;
}
