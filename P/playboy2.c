void main()
{
    l_U0 = 0;
    l_U1 = 1;
    l_U2 = 3;
    l_U102 = 0;
    l_U103 = 0;
    l_U104 = 0;
    l_U105 = 0;
    l_U106 = 0;
    l_U107 = 0;
    l_U108 = 0;
    l_U109 = 0;
    l_U110 = 0;
    l_U111 = 0;
    l_U112 = 0;
    l_U113 = 0;
    ProtectedSet(l_U114, 0);
    ProtectedSet(l_U115, 0);
    l_U116 = 0;
    l_U117 = 0;
    ProtectedSet(l_U178, 0.00000000);
    ProtectedSet(l_U179, 0.00000000);
    l_U200 = 0;
    l_U217 = -1;
    l_U221 = 0;
    l_U222 = 1;
    l_U223 = 1;
    l_U231 = 150.00000000;
    l_U321 = 0;
    l_U322 = 150.00000000;
    l_U372 = 0;
    l_U661 = 0;
    l_U662 = 0;
    l_U663 = 0;
    l_U664 = 0;
    l_U665 = 0;
    l_U666 = 0;
    l_U667 = 0;
    l_U668 = 0;
    l_U669 = 0;
    l_U670 = 0;
    l_U671 = 0;
    l_U672 = 1;
    l_U673 = 0;
    l_U674 = 0;
    l_U675 = 0;
    l_U676 = 0;
    l_U677 = 0;
    l_U678 = 0;
    l_U679 = 0;
    l_U680 = 0;
    l_U681 = 0;
    l_U682 = 0;
    l_U683 = 0;
    l_U684 = 0;
    l_U685 = 0;
    l_U686 = 0;
    l_U687 = 0;
    l_U688 = 0;
    l_U689 = 0;
    l_U690 = 0;
    l_U691 = 0;
    l_U692 = 0;
    l_U693 = 0;
    l_U694 = 0;
    l_U695 = 0;
    l_U698 = 0;
    l_U699 = 0;
    l_U700 = 0;
    l_U701 = 0;
    l_U702 = 0;
    l_U703 = 0;
    l_U704 = 0;
    l_U705 = 0;
    l_U706 = 0;
    l_U707 = 0;
    l_U708 = 0;
    l_U709 = 0;
    l_U710 = 0;
    l_U711 = 0;
    l_U712 = 0;
    l_U713 = 0;
    l_U714 = 0;
    l_U715 = 0;
    l_U716 = 0;
    l_U717 = 0;
    l_U718 = 0;
    l_U719 = 0;
    l_U720 = 0;
    l_U721 = 0;
    l_U728 = 0;
    l_U729 = 0;
    l_U730 = 0;
    l_U789 = 80.00000000;
    l_U790 = 150.00000000;
    l_U820 = 0;
    l_U821 = 0;
    l_U822 = 0;
    l_U823 = 0;
    l_U829 = 0;
    l_U830 = 0;
    l_U841 = 0;
    l_U842 = 0;
    l_U843 = 0;
    l_U844 = 0;
    l_U864 = -1;
    l_U865 = 2;
    l_U866 = 0;
    l_U868 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_687();
        sub_2797();
    }
    SET_MISSION_FLAG( 1 );
    while (true)
    {
        WAIT( 0 );
        if (l_U678)
        {
            if (IS_CHAR_INJURED( l_U649._fU0 ))
            {
                sub_3400( 1 );
                sub_5650();
            }
        }
        sub_21227( ref l_U734 );
        switch (l_U661)
        {
            case 0:
            sub_21464();
            break;
            case 1:
            sub_26257();
            break;
            case 2:
            sub_29321();
            break;
            case 3:
            sub_31319();
            break;
            case 4:
            sub_40877();
            sub_42409( ref l_U649._fU0 );
            break;
            case 5:
            sub_43063();
            break;
            case 7:
            sub_40152();
            break;
            case 8:
            if (sub_27485( ref l_U843, 3000 ))
            {
                sub_5650();
            }
            break;
            case 9:
            sub_40152();
            break;
        }
        if (IS_KEYBOARD_KEY_PRESSED( 31 ))
        {
            sub_5650();
        }
    }
    return;
}

void sub_687()
{
    sub_696();
    return;
}

void sub_696()
{
    int iVar2;

    iVar2 = 9;
    sub_710( iVar2 );
    sub_1886( iVar2 );
    return;
}

void sub_710(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_754();
        sub_915();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1023();
            sub_1062();
        }
    }
    sub_1138();
    sub_1239();
    uVar5 = sub_1352( uParam0 );
    sub_1793( uVar5, 0 );
    return;
}

void sub_754()
{
    sub_768( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_868();
    }
    return;
}

void sub_768(int iParam0)
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

void sub_868()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_915()
{
    sub_924();
    return;
}

void sub_924()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1023()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1062()
{
    sub_1071();
    return;
}

void sub_1071()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1138()
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

void sub_1239()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1261();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1261()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1352(unknown uParam0)
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
    sub_1751( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1751(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1793(int iParam0, boolean bParam1)
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

void sub_1886(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1895();
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
        sub_2670();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1895()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_1933( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_1933( 1, g_U569[I] )) != 0)
            {
                sub_2219( I );
            }
        }
    }
    if (NOT sub_2385())
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

int sub_1933(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2219(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2304( g_U569 - 1 );
    return;
}

void sub_2304(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2385()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1933( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2670()
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

void sub_2797()
{
    if (IS_PLAYER_PLAYING( sub_2806() ))
    {
        SET_PLAYER_CONTROL( sub_2806(), 1 );
    }
    SWITCH_ROADS_BACK_TO_ORIGINAL( -253.71220000, 1425.09900000, -100.00000000, -266.77000000, 1491.78900000, 100.00000000 );
    CLEAR_HELP();
    sub_2909();
    sub_2955();
    sub_3107( 0 );
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3247(), 0 );
    sub_3296();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2806()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_2909()
{
    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    return;
}

void sub_2955()
{
    if (l_U105)
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
    l_U103 = 0;
    l_U102 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_3107(unknown uParam0)
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

void sub_3247()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3296()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_3400(boolean bParam0)
{
    if ((sub_3415( ref l_U649._fU0 )) < 15.00000000)
    {
        sub_3107( 0 );
        sub_3613( "PX2_2CLOSE", ref l_U894[0], 7, 1 );
    }
    CLEAR_PRINTS();
    CLEAR_HELP();
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3247(), 0 );
    if (NOT (IS_CHAR_INJURED( l_U649._fU0 )))
    {
        SET_CHAR_KEEP_TASK( l_U649._fU0, 1 );
        SET_CHAR_AS_ENEMY( l_U649._fU0, 1 );
        CLEAR_CHAR_TASKS( l_U649._fU0 );
        OPEN_SEQUENCE_TASK( ref l_U649._fU44 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U776[l_U865]._fU0, l_U776[l_U865]._fU4, l_U776[l_U865]._fU8, 4, -2, 0.10000000 );
        CLOSE_SEQUENCE_TASK( l_U649._fU44 );
        TASK_PERFORM_SEQUENCE( l_U649._fU0, l_U649._fU44 );
        CLEAR_SEQUENCE_TASK( l_U649._fU44 );
    }
    for ( l_U820 = 0; l_U820 <= 2; l_U820++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U600[l_U820]._fU0 )))
        {
            SET_CHAR_KEEP_TASK( l_U600[l_U820]._fU0, 1 );
            SET_CHAR_AS_ENEMY( l_U600[l_U820]._fU0, 1 );
            OPEN_SEQUENCE_TASK( ref l_U600[l_U820]._fU44 );
            TASK_SMART_FLEE_CHAR( 0, sub_3247(), 300.00000000, -2 );
            CLOSE_SEQUENCE_TASK( l_U600[l_U820]._fU44 );
            TASK_PERFORM_SEQUENCE( l_U600[l_U820]._fU0, l_U600[l_U820]._fU44 );
            CLEAR_SEQUENCE_TASK( l_U600[l_U820]._fU44 );
            l_U820++;
        }
    }
    for ( l_U820 = 1; l_U820 <= 3; l_U820++ )
    {
        sub_5080( ref l_U600[l_U820]._fU0, ref l_U600[l_U820]._fU44 );
        l_U820++;
    }
    if (bParam0)
    {
        l_U661 = 4;
    }
    else if (DOES_BLIP_EXIST( l_U737 ))
    {
        REMOVE_BLIP( l_U737 );
    }
    if (NOT (IS_CHAR_INJURED( l_U649._fU0 )))
    {
        if (NOT (DOES_BLIP_EXIST( l_U649._fU4 )))
        {
            ADD_BLIP_FOR_CHAR( l_U649._fU0, ref l_U649._fU4 );
        }
    }
    for ( l_U820 = 0; l_U820 <= 3; l_U820++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U600[l_U820]._fU0 )))
        {
            if (NOT (DOES_BLIP_EXIST( l_U600[l_U820]._fU4 )))
            {
                ADD_BLIP_FOR_CHAR( l_U600[l_U820]._fU0, ref l_U600[l_U820]._fU4 );
            }
        }
    }
    l_U729 = 1;
    l_U661 = 5;;
    return;
}

void sub_3415(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    float Result;

    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    vVar6 = {0.00000000, 0.00000000, 0.00000000};
    Result = 0.00000000;
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        GET_CHAR_COORDINATES( sub_3247(), ref vVar3.x, ref vVar3.y, ref vVar3.z );
        GET_CHAR_COORDINATES( (uParam0^), ref vVar6.x, ref vVar6.y, ref vVar6.z );
        GET_DISTANCE_BETWEEN_COORDS_3D( vVar3.x, vVar3.y, vVar3.z, vVar6.x, vVar6.y, vVar6.z, ref Result );
        return Result;
    }
    return Result;
}

void sub_3613(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_3634( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

void sub_3634(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_3688( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_3688(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_3710( iParam1 )))
    {
        return 0;
    }
    l_U4._fU384 = 0;
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
    sub_4398( ref g_U8395, ref l_U4 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_3710(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_3787( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_3787( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_3787( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_3787(unknown uParam0)
{
    return;
}

void sub_4398(int iParam0, int iParam1)
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

void sub_5080(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 0 );
        SET_CHAR_KEEP_TASK( (uParam0^), 1 );
        sub_5133( uParam0, ref l_U872 );
        sub_5262( uParam0, uParam1 );
    }
    return;
}

void sub_5133(unknown uParam0, unknown uParam1)
{
    SET_RELATIONSHIP( 5, 0, 23 );
    SET_RELATIONSHIP( 5, 23, 0 );
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 0 );
            SET_COMBAT_DECISION_MAKER( (uParam0^), (uParam1^) );
            SET_CHAR_RELATIONSHIP_GROUP( (uParam0^), 23 );
            SET_CHAR_WILL_USE_COVER( (uParam0^), 1 );
            SET_CHAR_IS_TARGET_PRIORITY( (uParam0^), 1 );
        }
    }
    return;
}

void sub_5262(unknown uParam0, unknown uParam1)
{
    GIVE_WEAPON_TO_CHAR( (uParam0^), 12, 30000, 1 );
    CLEAR_CHAR_TASKS( (uParam0^) );
    OPEN_SEQUENCE_TASK( uParam1 );
    TASK_SHOOT_AT_CHAR( 0, sub_3247(), 3000, 5 );
    CLOSE_SEQUENCE_TASK( (uParam1^) );
    TASK_PERFORM_SEQUENCE( (uParam0^), (uParam1^) );
    CLEAR_SEQUENCE_TASK( (uParam1^) );
    return;
}

void sub_5650()
{
    TRIGGER_MISSION_COMPLETE_AUDIO( 52 );
    CLEAR_WANTED_LEVEL( sub_2806() );
    sub_5707( 9, "PX2_CALL5", "PX2AUD", 15000, 0 );
    sub_6293( 23 );
    sub_9497( 5, 3 );
    sub_9556( 3 );
    l_U672 = 0;
    sub_9621();
    sub_2797();
    return;
}

void sub_5707(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[12] cVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;

    array(ref cVar7, 2);
    StrCopy( ref cVar7[0], uParam1, 16 );
    StrCopy( ref cVar7[1], "END", 16 );
    sub_5750( uParam0, ref cVar7, uParam2, uParam3, uParam4, 0 );
    return;
}

void sub_5750(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_6293(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_6380( iParam0 ))
    {
        sub_7442( iParam0 );
    }
    return;
}

int sub_6380(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 20 )) || (IS_BIT_SET( g_U1452[uParam0], 21 )))
    {
        return 0;
    }
    sub_6437( ref uVar3, 1, 0, 0 );
    sub_7049( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_3787( "\n ----------------------------------------------------------------" );
    sub_7335( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_3787( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_6437(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_6490( iParam0, uParam1, uParam2 );
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
        sub_6622( iParam0 + 0 );
    }
    return;
}

void sub_6490(int iParam0, int iParam1, int iParam2)
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
        sub_6622( iParam0 + 0 );
    }
    return;
}

void sub_6622(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_6653( iParam0->_fU4 )))
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

int sub_6653(unknown uParam0)
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

void sub_7049(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_7335(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_7442(unknown uParam0)
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
        sub_7653( 20, 6, 16383, 16383, ref uVar4 );
        sub_8329( ref uVar4, 7 );
        sub_8360( ref uVar4, 0 );
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
        sub_7653( 20, 7, 9, 16383, ref uVar4 );
        sub_8329( ref uVar4, 7 );
        sub_8360( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_7653(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_7677( uParam0, 0, iParam4 + 0 );
    sub_7677( uParam1, 1, iParam4 + 0 );
    sub_7677( uParam2, 2, iParam4 + 0 );
    sub_7677( uParam3, 3, iParam4 + 0 );
    sub_7677( 0, 4, iParam4 + 0 );
    sub_7677( 1, 5, iParam4 + 0 );
    sub_7677( 65535, 6, iParam4 + 0 );
    sub_7677( 0, 12, iParam4 + 0 );
    sub_7677( 0, 11, iParam4 + 0 );
    sub_7677( 0, 14, iParam4 + 0 );
    sub_7677( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_7677( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_7677( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_7677(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_8329(int iParam0, unknown uParam1)
{
    sub_7677( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_8360(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_8400())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_9087( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_8886( iVar5 );
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

int sub_8400()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_8434( 5, g_U968[I] )) == 7)
        {
            sub_8886( I );
            return 1;
        }
    }
    return 0;
}

int sub_8434(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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

void sub_8886(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_8959( 39 );
    return;
}

void sub_8959(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_9087(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_9148( uParam0, g_U968[Result] ))
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

int sub_9148(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[0] == uParam10._fU0[0]) AND (uParam0._fU0[1] == uParam10._fU0[1]))
    {
        return 1;
    }
    return 0;
}

void sub_9497(int iParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = iParam0 mod 1000;
    SET_BITS_IN_RANGE( ref g_U1502[iVar4 / 16], (iVar4 mod 16) * 2, ((iVar4 mod 16) * 2) + 1, uParam1 );
    return;
}

void sub_9556(unknown uParam0)
{
    if (g_U1816[uParam0] == 0)
    {
        sub_6437( ref g_U1821[uParam0], 4, 0, 0 );
        g_U1816[uParam0] = 1;
    }
    return;
}

void sub_9621()
{
    sub_9630();
    return;
}

void sub_9630()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_9648();
    sub_9707( iVar2, iVar3, iVar4 );
    return;
}

void sub_9648()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U569[I] = 4;
    }
    return;
}

void sub_9707(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 9;
    sub_9740( iVar5, uParam0, uParam1, uParam2, "Contact_10" );
    return;
}

void sub_9740(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_9836( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_9836( ref cVar9 );
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
            sub_9836( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_9836( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_9836( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_9836( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_10413( iParam0, iVar7 );;;
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
                sub_10810( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_10810( 0, 4 );
            }
        }
    }
    if (NOT (sub_10899( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_2806(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_2806() );
    }
    sub_1895();
    bVar27 = true;
    uVar28 = sub_10413( iParam0, iVar7 );
    uVar29 = sub_1352( iParam0 );
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
                sub_20275( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_20705();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_20790( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_20847( iParam0 );
                sub_20886( 0 );
                sub_1793( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_20994();
        }
    }
    if (bParam2)
    {
        sub_20705();
        sub_21082();
        sub_20886( 0 );
    }
    if (bParam3)
    {
        sub_20705();
        sub_21122();
        sub_20886( 0 );
        sub_1793( uVar29, 0 );
    }
    sub_1239();
    return;
}

void sub_9836(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_10413(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_1751( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_10810(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_10899(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_11107( uParam1 );
        break;
        case 1:
        bVar8 = sub_13185( uParam1 );
        break;
        case 2:
        bVar8 = sub_13411( uParam1 );
        break;
        case 3:
        bVar8 = sub_13561( uParam1 );
        break;
        case 4:
        bVar8 = sub_13839( uParam1 );
        break;
        case 5:
        bVar8 = sub_14142( uParam1 );
        break;
        case 6:
        bVar8 = sub_14341( uParam1 );
        break;
        case 7:
        bVar8 = sub_14567( uParam1 );
        break;
        case 8:
        bVar8 = sub_14802( uParam1 );
        break;
        case 9:
        bVar8 = sub_15177( uParam1 );
        break;
        case 10:
        bVar8 = sub_15424( uParam1 );
        break;
        case 11:
        bVar8 = sub_15563( uParam1 );
        break;
        case 12:
        bVar8 = sub_15862( uParam1 );
        break;
        case 13:
        bVar8 = sub_16090( uParam1 );
        break;
        case 14:
        bVar8 = sub_16377( uParam1 );
        break;
        case 15:
        bVar8 = sub_16659( uParam1 );
        break;
        case 16:
        bVar8 = sub_16941( uParam1 );
        break;
        case 17:
        bVar8 = sub_17142( uParam1 );
        break;
        case 18:
        bVar8 = sub_17215( uParam1 );
        break;
        case 19:
        bVar8 = sub_17429( uParam1 );
        break;
        case 20:
        bVar8 = sub_17682( uParam1 );
        break;
        case 21:
        bVar8 = sub_17929( uParam1 );
        break;
        case 22:
        bVar8 = sub_18130( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_12790( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_10413( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_18453( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_11107(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11386( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_11386( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_11386( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_11386( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_11386( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_11386( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_11386( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_11386( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_11386( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_11386( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_11386( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_11386( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_11386( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_11386( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_11386( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_11386( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_11386( iVar3, 0, 3, 1, 0, 0 );
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
        sub_11386( iVar3, 0, sub_12668(), sub_12934(), 0, 0 );
        break;
        default:
        sub_13093( "Friend 1", 1 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13093( "Friend 1", 0 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_11386(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_11397( uParam1 );
    sub_11571( uParam0, 0, uParam2 );
    sub_11571( uParam0, 1, uParam3 );
    sub_11571( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_9648();
    return;
}

void sub_11397(unknown uParam0)
{
    ADD_SCORE( sub_2806(), uParam0 );
    sub_11422( uParam0 );
    return;
}

void sub_11422(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1751( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_11571(unknown uParam0, int iParam1, int iParam2)
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
        sub_11728( uParam0 );
    }
    return;
}

void sub_11728(unknown uParam0)
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

int sub_12668()
{
    switch (l_U569[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_12790( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_12790(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_12934()
{
    switch (l_U569[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_12790( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_13093(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_13185(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11386( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11386( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11386( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_11386( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_13093( "Contact 2", 1 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13093( "Contact 2", 0 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13411(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_11386( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_13093( "Girl 3", 1 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13093( "Girl 3", 0 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13561(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11386( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_11386( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_11386( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_11386( iVar3, 0, sub_12668(), sub_12934(), 0, 0 );
        break;
        default:
        sub_13093( "Friend 4", 1 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13093( "Friend 4", 0 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13839(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11386( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11386( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11386( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_11386( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_11386( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_11386( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_11386( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_13093( "Contact 5", 1 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13093( "Contact 5", 0 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14142(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11386( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11386( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11386( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_13093( "Contact 7", 1 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13093( "Contact 7", 0 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14341(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11386( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11386( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11386( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_11386( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_13093( "Contact 7b", 1 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13093( "Contact 7b", 0 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14567(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11386( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_11386( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_11386( iVar3, 0, sub_12668(), sub_12934(), 0, 0 );
        break;
        default:
        sub_13093( "Friend 8", 1 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13093( "Friend 8", 0 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14802(unknown uParam0)
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
        sub_11386( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_11386( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_11386( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_11386( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_11386( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_11386( iVar3, 0, sub_12668(), sub_12934(), 0, 0 );
        break;
        default:
        sub_13093( "Friend 9", 1 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13093( "Friend 9", 0 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15177(unknown uParam0)
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
        sub_11386( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11386( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_11386( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_11386( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_13093( "Contact 10", 1 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_13093( "Contact 10", 0 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15424(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11386( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_13093( "Girl 11", 1 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13093( "Girl 11", 0 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15563(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11386( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_11386( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_11386( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_11386( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_11386( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_11386( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_13093( "Contact 12", 1 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13093( "Contact 12", 0 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15862(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11386( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11386( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11386( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_11386( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_13093( "Contact 13", 1 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13093( "Contact 13", 0 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16090(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11386( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_11386( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_11386( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_11386( iVar3, 0, sub_12668(), sub_12934(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_13093( "Friend 15", 1 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13093( "Friend 15", 0 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16377(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11386( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11386( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11386( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_11386( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_11386( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_11386( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_13093( "Contact 16", 1 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13093( "Contact 16", 0 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16659(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11386( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11386( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_11386( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_11386( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_11386( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_13093( "Contact 18", 1 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13093( "Contact 18", 0 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16941(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11386( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11386( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11386( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_13093( "Contact 19", 1 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13093( "Contact 19", 0 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17142(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_13093( "Girl 20", 0 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17215(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11386( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11386( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11386( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_13093( "Contact 21", 1 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13093( "Contact 21", 0 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17429(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11386( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11386( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_11386( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_11386( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11386( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_13093( "Contact 22", 1 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13093( "Contact 22", 0 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17682(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_11386( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11386( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_11386( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_11386( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_13093( "Contact 24", 1 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13093( "Contact 24", 0 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17929(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11386( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11386( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11386( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_13093( "Contact 25", 1 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13093( "Contact 25", 0 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_18130(unknown uParam0)
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
        sub_11386( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_13093( "Girl 26", 1 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_13093( "Girl 26", 0 );
        sub_11386( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_18453(int iParam0, int iParam1)
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
    if (sub_18501( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_19232( iParam1 );
    }
    return;
}

int sub_18501(int iParam0, int iParam1)
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
            sub_18641( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_18641(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_18823( 0 );
    return;
}

void sub_18823(boolean bParam0)
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
        sub_19078();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_19078()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_19232(int iParam0)
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
        sub_19565( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_19565( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_19565( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_19565( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_19565( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_19565( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_19565( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_19565( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_19565( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_19565( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_19565( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_19565( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_19565( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_19565( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_19565( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_19565( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_19565( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_19565( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_19565( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_19565(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_20275(unknown uParam0, unknown uParam1)
{
    sub_20294( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_20294(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_20705()
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

int sub_20790(int iParam0, int iParam1)
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

void sub_20847(unknown uParam0)
{
    sub_1138();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_20886(unknown uParam0)
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

void sub_20994()
{
    sub_21003();
    return;
}

void sub_21003()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_21082()
{
    sub_21003();
    return;
}

void sub_21122()
{
    sub_21003();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_21227(unknown uParam0)
{
    int iVar3;

    if (sub_21237( ref iVar3 ))
    {
        if (NOT (IS_CAR_A_MISSION_CAR( iVar3 )))
        {
            if ((uParam0^) != iVar3)
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( uParam0 );
                (uParam0^) = iVar3;
                SET_CAR_AS_MISSION_CAR( (uParam0^) );
            }
        }
    }
    return;
}

int sub_21237(unknown uParam0)
{
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3247() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3247(), uParam0 );
        if (NOT ((uParam0^) == nil))
        {
            if (IS_VEH_DRIVEABLE( (uParam0^) ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_21464()
{
    if (g_U9893._fU24)
    {
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U733 );
        if (DOES_VEHICLE_EXIST( l_U733 ))
        {
            if (IS_VEH_DRIVEABLE( l_U733 ))
            {
                if (LOCATE_CAR_3D( l_U733, -409.40030000, 1492.23600000, 17.74700000, 10.00000000, 10.00000000, 10.00000000, 0 ))
                {
                    SET_CAR_AS_MISSION_CAR( l_U733 );
                    CLEAR_AREA( -409.40030000, 1492.23600000, 17.74700000, 4.00000000, 1 );
                    SET_CAR_HEADING( l_U733, 269.27700000 );
                    SET_CAR_COORDINATES( l_U733, -409.40030000, 1492.23600000, 17.74700000 );
                }
            }
        }
        GET_GAME_TIMER( ref l_U843 );
        LOAD_ADDITIONAL_TEXT( "PX2AUD", 6 );
        ENABLE_SCENE_STREAMING( 0 );
        START_CUTSCENE_NOW( "PX_2" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        ENABLE_SCENE_STREAMING( 1 );
        CLEAR_NAMED_CUTSCENE( "PX_2" );
    }
    SET_CHAR_COORDINATES( sub_3247(), -419.09420000, 1487.03600000, 17.85990000 );
    SET_CHAR_HEADING( sub_3247(), 34.14660000 );
    SET_CAM_BEHIND_PED( sub_3247() );
    sub_21898();
    sub_23646();
    ADD_BLIP_FOR_COORD( l_U786._fU0, l_U786._fU4, l_U786._fU8, ref l_U737 );
    SET_ROUTE( l_U737, 1 );
    SET_PLAYER_CONTROL( sub_2806(), 1 );
    DO_SCREEN_FADE_IN( 500 );
    CLEAR_PRINTS();
    PRINT( "PROMT_01", 7500, 1 );
    GET_GAME_TIMER( ref l_U843 );
    l_U661 = 1;
    return;
}

void sub_21898()
{
    PROCESS_MISSION_DELETION_LIST();
    CLEAR_WANTED_LEVEL( sub_2806() );
    sub_21935( "PX2AUD" );
    l_U600[0]._fU8 = {-238.20510000, 1455.83200000, 20.80000000};
    l_U600[0]._fU32 = 190.35110000;
    l_U600[1]._fU8 = {-237.60410000, 1453.75700000, 19.44700000};
    l_U600[1]._fU32 = 22.26580000;
    l_U600[2]._fU8 = {-236.74880000, 1446.74100000, 19.44670000};
    l_U600[2]._fU32 = 165.88230000;
    l_U600[3]._fU8 = {-238.39150000, 1446.85000000, 19.44670000};
    l_U600[3]._fU32 = 227.93970000;
    l_U649._fU8 = {-237.29570000, 1444.83600000, 19.44700000};
    l_U649._fU32 = 42.78840000;
    l_U649._fU40 = -1143910864;
    l_U745 = {-424.47430000, 1428.49700000, 13.11350000};
    l_U575[0]._fU8 = {-256.82830000, 1462.00000000, 19.23480000};
    l_U575[0]._fU20 = 0.00000000;
    l_U776[0] = {-252.61920000, 1456.91200000, 19.44140000};
    l_U575[1]._fU8 = {-227.48270000, 1424.36300000, 19.31090000};
    l_U575[1]._fU20 = 268.24910000;
    l_U776[1] = {-228.03650000, 1427.74900000, 19.43630000};
    l_U575[2]._fU8 = {-198.06390000, 1456.61700000, 18.22480000};
    l_U575[2]._fU20 = 179.98710000;
    l_U776[2] = {-201.61810000, 1457.07200000, 18.31010000};
    l_U786 = {-266.78300000, 1440.44500000, 21.73900000};
    sub_22513();
    l_U575[0]._fU4 = -1685021548;
    l_U575[1]._fU4 = -808457413;
    l_U575[2]._fU4 = -808457413;
    l_U813 = -808457413;
    l_U867 = 0;
    GET_WEAPONTYPE_MODEL( 12, ref l_U812 );
    REQUEST_MODEL( l_U812 );
    REQUEST_MODEL( -301223260 );
    REQUEST_MODEL( -1143910864 );
    for ( l_U820 = 0; l_U820 <= 1; l_U820++ )
    {
        REQUEST_MODEL( l_U575[l_U820]._fU4 );
    }
    REQUEST_ANIMS( "missplayboy2" );
    LOAD_COMBAT_DECISION_MAKER( 7, ref l_U869 );
    LOAD_COMBAT_DECISION_MAKER( 7, ref l_U870 );
    # -sub_C1FFC0-0xc214c8( 3, ref l_U871 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U872 );
    LOAD_ADDITIONAL_TEXT( "LK_NET3", 0 );
    g_U91._fU40 = 2;
    LOAD_ALL_OBJECTS_NOW();
    LOAD_SCENE( l_U745._fU0, l_U745._fU4, l_U745._fU8 );
    sub_22899( "PlayBoy2" );
    for ( l_U820 = 0; l_U820 <= 3; l_U820++ )
    {
        l_U824[l_U820] = l_U820;
    }
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U869, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U869, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_FIRE_RATE( l_U869, 2 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U869, 100 );
    l_U829 = 0;
    l_U830 = 0;
    l_U823 = 0;
    CREATE_WIDGET_GROUP( "locate dimmensions" );
    ADD_WIDGET_FLOAT_SLIDER( "WIDTH", ref l_U800, -50.00000000, 50.00000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "DEPTH", ref l_U801, -50.00000000, 50.00000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "HEIGHT", ref l_U802, -50.00000000, 50.00000000, 0.10000000 );
    END_WIDGET_GROUP();
    CLEAR_AREA( -424.60910000, 1492.48600000, 18.47760000, 4.00000000, 1 );
    if (NOT (IS_AREA_OCCUPIED( -427.00000000, 1490.55000000, 17.00000000, -421.40000000, 1494.25000000, 27.00000000, 0, 1, 0, 0, 0 )))
    {
        CREATE_CAR( -808457413, -424.60910000, 1492.48600000, 18.47760000, ref l_U735, 1 );
        SET_CAR_HEADING( l_U735, 269.23000000 );
        CHANGE_CAR_COLOUR( l_U735, 89, 0 );
        SET_CAR_ON_GROUND_PROPERLY( l_U735 );
        ADD_CAR_TO_MISSION_DELETION_LIST( l_U735 );
        SET_CAR_LIVERY( l_U735, 1 );
    }
    while (NOT sub_23521())
    {
        WAIT( 0 );
    }
    return;
}

void sub_21935(unknown uParam0)
{
    StrCopy( ref l_U4._fU0, uParam0, 16 );
    sub_21952();
    return;
}

void sub_21952()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U4._fU16[I]._fU0 = nil;
        StrCopy( ref l_U4._fU16[I]._fU4, "", 32 );
        l_U4._fU344[I] = 0;
    }
    return;
}

void sub_22513()
{
    for ( l_U820 = 0; l_U820 <= (l_U722 - 1); l_U820++ )
    {
        l_U722[l_U820] = 0;
    }
    l_U728 = 0;
    return;
}

void sub_22899(unknown uParam0)
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

int sub_23521()
{
    if (g_U555 != 9)
    {
        return 0;
    }
    if (g_U91._fU40 != 2)
    {
        g_U91._fU40 = 2;
        if (IS_BIT_SET( g_U91._fU412, 25 ))
        {
            SET_BIT( ref g_U91._fU412, 26 );
        }
    }
    return 1;
}

void sub_23646()
{
    LOAD_SCENE( -419.09420000, 1487.03600000, 17.85990000 );
    CLEAR_AREA( l_U649._fU8._fU0, l_U649._fU8._fU4, l_U649._fU8._fU8, 150.00000000, 1 );
    ADD_SCENARIO_BLOCKING_AREA( -210.61920000, 1481.53100000, 0.00000000, -248.03530000, 1433.63400000, 50.00000000 );
    CREATE_CHAR( 26, l_U649._fU40, l_U649._fU8._fU0, l_U649._fU8._fU4, l_U649._fU8._fU8, ref l_U649._fU0, 1 );
    SET_CHAR_HEADING( l_U649._fU0, l_U649._fU32 );
    SET_CHAR_IS_TARGET_PRIORITY( l_U649._fU0, 1 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U649._fU0, 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U649._fU0, 1 );
    GET_CHAR_HEALTH( l_U649._fU0, ref l_U857[4] );
    sub_23915( 1, l_U649._fU0, "MARLON", 0 );
    sub_24049( 3 );
    SET_CHAR_COMPONENT_VARIATION( l_U649._fU0, 1, 2, l_U823 );
    SET_CHAR_COMPONENT_VARIATION( l_U649._fU0, 0, 0, 0 );
    l_U831 = l_U823;
    switch (l_U831)
    {
        case 0:
        l_U600[0]._fU40 = -1143910864;
        for ( l_U820 = 1; l_U820 <= 3; l_U820++ )
        {
            l_U600[l_U820]._fU40 = -301223260;
        }
        for ( l_U820 = 0; l_U820 <= 3; l_U820++ )
        {
            CREATE_CHAR( 26, l_U600[l_U820]._fU40, l_U600[l_U820]._fU8._fU0, l_U600[l_U820]._fU8._fU4, l_U600[l_U820]._fU8._fU8, ref l_U600[l_U820]._fU0, 1 );
            SET_CHAR_HEADING( l_U600[l_U820]._fU0, l_U600[l_U820]._fU32 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U600[l_U820]._fU0, 1 );
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U600[l_U820]._fU0, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U600[l_U820]._fU0, 1 );
            GET_CHAR_HEALTH( l_U600[l_U820]._fU0, ref l_U857[l_U820] );
        }
        SET_CHAR_COMPONENT_VARIATION( l_U600[0]._fU0, 1, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U600[0]._fU0, 0, 1, 1 );
        SET_CHAR_COMPONENT_VARIATION( l_U600[1]._fU0, 1, 1, 1 );
        SET_CHAR_COMPONENT_VARIATION( l_U600[1]._fU0, 0, 1, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U600[2]._fU0, 1, 1, 2 );
        SET_CHAR_COMPONENT_VARIATION( l_U600[2]._fU0, 0, 1, 1 );
        SET_CHAR_COMPONENT_VARIATION( l_U600[3]._fU0, 1, 1, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U600[3]._fU0, 0, 1, 0 );
        break;
        case 1:
        l_U600[0]._fU40 = -1143910864;
        for ( l_U820 = 1; l_U820 <= 3; l_U820++ )
        {
            l_U600[l_U820]._fU40 = -301223260;
        }
        for ( l_U820 = 0; l_U820 <= 3; l_U820++ )
        {
            CREATE_CHAR( 26, l_U600[l_U820]._fU40, l_U600[l_U820]._fU8._fU0, l_U600[l_U820]._fU8._fU4, l_U600[l_U820]._fU8._fU8, ref l_U600[l_U820]._fU0, 1 );
            SET_CHAR_HEADING( l_U600[l_U820]._fU0, l_U600[l_U820]._fU32 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U600[l_U820]._fU0, 1 );
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U600[l_U820]._fU0, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U600[l_U820]._fU0, 1 );
            GET_CHAR_HEALTH( l_U600[l_U820]._fU0, ref l_U857[l_U820] );
        }
        SET_CHAR_COMPONENT_VARIATION( l_U600[1]._fU0, 1, 1, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U600[1]._fU0, 0, 1, 1 );
        SET_CHAR_COMPONENT_VARIATION( l_U600[1]._fU0, 1, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U600[1]._fU0, 0, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U600[2]._fU0, 1, 1, 2 );
        SET_CHAR_COMPONENT_VARIATION( l_U600[2]._fU0, 0, 1, 1 );
        SET_CHAR_COMPONENT_VARIATION( l_U600[3]._fU0, 1, 1, 1 );
        SET_CHAR_COMPONENT_VARIATION( l_U600[3]._fU0, 0, 1, 0 );
        break;
        case 2:
        l_U600[0]._fU40 = -1143910864;
        for ( l_U820 = 1; l_U820 <= 3; l_U820++ )
        {
            l_U600[l_U820]._fU40 = -301223260;
        }
        for ( l_U820 = 0; l_U820 <= 3; l_U820++ )
        {
            CREATE_CHAR( 26, l_U600[l_U820]._fU40, l_U600[l_U820]._fU8._fU0, l_U600[l_U820]._fU8._fU4, l_U600[l_U820]._fU8._fU8, ref l_U600[l_U820]._fU0, 1 );
            SET_CHAR_HEADING( l_U600[l_U820]._fU0, l_U600[l_U820]._fU32 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U600[l_U820]._fU0, 1 );
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U600[l_U820]._fU0, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U600[l_U820]._fU0, 1 );
            GET_CHAR_HEALTH( l_U600[l_U820]._fU0, ref l_U857[l_U820] );
        }
        SET_CHAR_COMPONENT_VARIATION( l_U600[0]._fU0, 1, 2, 1 );
        SET_CHAR_COMPONENT_VARIATION( l_U600[0]._fU0, 0, 1, 1 );
        SET_CHAR_COMPONENT_VARIATION( l_U600[1]._fU0, 1, 1, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U600[1]._fU0, 0, 1, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U600[2]._fU0, 1, 1, 2 );
        SET_CHAR_COMPONENT_VARIATION( l_U600[2]._fU0, 0, 1, 1 );
        SET_CHAR_COMPONENT_VARIATION( l_U600[3]._fU0, 1, 1, 1 );
        SET_CHAR_COMPONENT_VARIATION( l_U600[3]._fU0, 0, 1, 0 );
        break;
    }
    sub_23915( 2, l_U600[0]._fU0, "MARLONS_FRIEND_M", 0 );
    sub_23915( 3, l_U600[2]._fU0, "MARLONS_FRIEND_M", 0 );
    TASK_TURN_CHAR_TO_FACE_CHAR( l_U600[1]._fU0, l_U600[0]._fU0 );
    TASK_TURN_CHAR_TO_FACE_CHAR( l_U649._fU0, l_U600[3]._fU0 );
    TASK_TURN_CHAR_TO_FACE_CHAR( l_U600[2]._fU0, l_U649._fU0 );
    TASK_TURN_CHAR_TO_FACE_CHAR( l_U600[3]._fU0, l_U649._fU0 );
    TASK_PLAY_ANIM( l_U649._fU0, "street_chat_a", "missplayboy2", 8.00000000, 1, 0, 0, 0, -2 );
    TASK_PLAY_ANIM( l_U600[1]._fU0, "street_chat_b", "missplayboy2", 8.00000000, 1, 0, 0, 0, -2 );
    for ( l_U820 = 0; l_U820 <= 2; l_U820++ )
    {
        CREATE_CAR( l_U575[l_U820]._fU4, l_U575[l_U820]._fU8._fU0, l_U575[l_U820]._fU8._fU4, l_U575[l_U820]._fU8._fU8, ref l_U575[l_U820]._fU0, 1 );
        SET_CAR_HEADING( l_U575[l_U820]._fU0, l_U575[l_U820]._fU20 );
        CHANGE_CAR_COLOUR( l_U575[l_U820]._fU0, l_U820 + 1, l_U820 * 2 );
    }
    return;
}

void sub_23915(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U4._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U4._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_7335( "\n PED NUMBER ", uParam0 );
    sub_24023( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_24023(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_24049(unknown uParam0)
{
    GENERATE_RANDOM_INT_IN_RANGE( l_U829, uParam0, ref l_U823 );
    return;
}

void sub_26257()
{
    sub_26266();
    sub_26470( 0 );
    if (NOT l_U716)
    {
        if (IS_SCREEN_FADED_IN())
        {
            if (sub_27485( ref l_U843, 5000 ))
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U733 );
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U735 );
                l_U716 = 1;
            }
        }
    }
    if (NOT l_U713)
    {
        if (NOT (IS_CHAR_INJURED( l_U600[0]._fU0 )))
        {
            CLEAR_CHAR_TASKS( l_U600[0]._fU0 );
            OPEN_SEQUENCE_TASK( ref l_U600[0]._fU44 );
            TASK_SIT_DOWN_ON_SEAT( 0, 2, 0, l_U600[0]._fU8._fU0, l_U600[0]._fU8._fU4, l_U600[0]._fU8._fU8, l_U600[0]._fU32, -2 );
            CLOSE_SEQUENCE_TASK( l_U600[0]._fU44 );
            TASK_PERFORM_SEQUENCE( l_U600[0]._fU0, l_U600[0]._fU44 );
            CLEAR_SEQUENCE_TASK( l_U600[0]._fU44 );
            l_U713 = 1;
        }
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_3247(), l_U786._fU0, l_U786._fU4, l_U786._fU8, 2.50000000, 2.50000000, 2.50000000, 1 ))
    {
        if (NOT sub_27823())
        {
            if (sub_27886())
            {
                if (NOT sub_26479())
                {
                    sub_28306();
                }
            }
        }
        else
        {
            sub_3400( 0 );
        }
    }
    if ((IS_KEYBOARD_KEY_PRESSED( 36 )) AND (NOT l_U679))
    {
        if (NOT (IS_CHAR_DEAD( sub_3247() )))
        {
            SET_CHAR_COORDINATES( sub_3247(), 65264, 1490, 19.90000000 );
            SET_CHAR_HEADING( sub_3247(), 90.00000000 );
            l_U679 = 1;
            l_U680 = 1;
        }
    }
    return;
}

void sub_26266()
{
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_3247(), -225.93930000, 1439.09800000, 19.44700000, 14.90000000, 5.30000000, 10.00000000, 0 ))
    {
        l_U865 = 0;
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( sub_3247(), -221.87740000, 1450.76400000, 19.44660000, 10.70000000, 6.30000000, 10.00000000, 0 ))
    {
        l_U865 = 1;
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( sub_3247(), -244.43210000, 1445.04300000, 19.44700000, 3.50000000, 12.00000000, 10.00000000, 0 ))
    {
        l_U865 = 2;
    }
    else
    {
        l_U865 = 2;
    };;;
    return;
}

void sub_26470(unknown uParam0)
{
    if (sub_26479())
    {
        sub_3400( uParam0 );
        return;
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_3247(), -229.59270000, 1445.37300000, 19.45060000, 19.30000000, 13.30000000, 10.00000000, 0 ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3247() ))
        {
            sub_3400( uParam0 );
            return;
        }
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_3247(), -237.56520000, 1448.99900000, 19.44730000, 4.70000000, 8.00000000, 10.00000000, 0 ))
    {
        sub_3400( uParam0 );
        return;
    }
    if (sub_27048( ref l_U600, 35.00000000 ))
    {
        sub_3400( uParam0 );
        return;
    }
    if (sub_27309( ref l_U649._fU0, 25.00000000 ))
    {
        sub_3400( uParam0 );
        return;
    }
    if ((IS_EXPLOSION_IN_AREA( -1, -260.00000000, 1425.08000000, 30.00000000, -199.07000000, 1488.03000000, -30.00000000 )) || (IS_PROJECTILE_IN_AREA( -260.00000000, 1425.08000000, 30.00000000, -199.07000000, 1488.03000000, -30.00000000 )))
    {
        sub_3400( uParam0 );
        return;
    }
    return;
}

int sub_26479()
{
    if (DOES_CHAR_EXIST( l_U649._fU0 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U649._fU0 )))
        {
            GET_CHAR_HEALTH( l_U649._fU0, ref l_U851[4] );
            if (((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U649._fU0, sub_3247(), 0 )) || (l_U851[4] < l_U857[4])) || (IS_CHAR_RESPONDING_TO_EVENT( l_U649._fU0, 9 )))
            {
                if (IS_CHAR_SHOOTING( sub_3247() ))
                {
                    l_U715 = 1;
                }
                return 1;
            }
        }
        else
        {
            return 1;
        }
    }
    for ( l_U820 = 0; l_U820 <= 3; l_U820++ )
    {
        if (DOES_CHAR_EXIST( l_U600[l_U820]._fU0 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U600[l_U820]._fU0 )))
            {
                GET_CHAR_HEALTH( l_U600[l_U820]._fU0, ref l_U851[l_U820] );
                if (((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U600[l_U820]._fU0, sub_3247(), 0 )) || (l_U851[l_U820] < l_U857[l_U820])) || (IS_CHAR_RESPONDING_TO_EVENT( l_U600[l_U820]._fU0, 9 )))
                {
                    if (IS_CHAR_SHOOTING( sub_3247() ))
                    {
                        l_U715 = 1;
                    }
                    return 1;
                }
            }
            else
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_27048(unknown uParam0, unknown uParam1)
{
    int I;

    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        if (sub_27083( ref (uParam0^)[I]._fU0, uParam1 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_27083(unknown uParam0, float fParam1)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if ((sub_3415( uParam0 )) < fParam1)
            {
                if (HAS_CHAR_SPOTTED_CHAR( (uParam0^), sub_3247() ))
                {
                    if (IS_CHAR_ARMED( sub_3247(), 7 ))
                    {
                        if (IS_PLAYER_TARGETTING_CHAR( sub_2806(), (uParam0^) ))
                        {
                            return 1;
                        }
                        if (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_2806(), (uParam0^) ))
                        {
                            return 1;
                        }
                    }
                }
                if (IS_CHAR_SHOOTING( sub_3247() ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_27309(unknown uParam0, unknown uParam1)
{
    return sub_27083( uParam0, uParam1 );
}

int sub_27485(unknown uParam0, int iParam1)
{
    GET_GAME_TIMER( ref l_U113 );
    if ((l_U113 - (uParam0^)) > iParam1)
    {
        return 1;
    }
    return 0;
}

int sub_27823()
{
    unknown uVar2;
    unknown uVar3;

    if (sub_21237( ref uVar2 ))
    {
        GET_CAR_MODEL( uVar2, ref uVar3 );
        if (IS_THIS_MODEL_A_HELI( uVar3 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_27886()
{
    if (sub_27897( 1, 1 ))
    {
        CLEAR_PRINTS();
        CLEAR_HELP();
        sub_3107( 0 );
        DISPLAY_HUD( 0 );
        DISPLAY_RADAR( 0 );
        SET_WIDESCREEN_BORDERS( 1 );
        SET_PLAYER_CONTROL( sub_2806(), 0 );
        CLEAR_CHAR_TASKS( sub_3247() );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3247(), 1 );
        ALLOW_EMERGENCY_SERVICES( 0 );
        return 1;
    }
    return 0;
}

int sub_27897(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3247() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3247(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3247() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3247(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3247()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3247() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3247() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_2806() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_2806() )))
    {
        return 0;
    }
    return 1;
}

void sub_28306()
{
    DO_SCREEN_FADE_OUT_UNHACKED( 500 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    LOAD_SCENE( -244.79000000, 1437.02000000, 20.73000000 );
    REMOVE_BLIP( l_U737 );
    l_U661 = 2;
    CLEAR_AREA( l_U600[0]._fU8._fU0, l_U600[0]._fU8._fU4, l_U600[0]._fU8._fU8, 200.00000000, 1 );
    BEGIN_CAM_COMMANDS( ref l_U866 );
    CREATE_CAM( 3, ref l_U814 );
    CREATE_CAM( 14, ref l_U815 );
    CREATE_CAM( 14, ref l_U816 );
    CREATE_CAM( 14, ref l_U817 );
    CREATE_CAM( 14, ref l_U818 );
    CREATE_CAM( 14, ref l_U819 );
    SET_CAM_POS( l_U815, -244.79010000, 1437.02400000, 20.73602000 );
    SET_CAM_ROT( l_U815, 4.46508400, 0.00000000, -39.78627000 );
    SET_CAM_FOV( l_U815, 40.20001000 );
    SET_CAM_POS( l_U816, -244.79010000, 1437.02400000, 20.73602000 );
    SET_CAM_ROT( l_U816, 4.46508400, 0.00000000, -39.78627000 );
    SET_CAM_FOV( l_U816, 37.80002000 );
    if (GET_IS_HIDEF())
    {
        SET_CAM_POS( l_U817, -239.71100000, 1456.21600000, 20.73118000 );
        SET_CAM_ROT( l_U817, 3.91399000, 0.99576000, -121.92260000 );
        SET_CAM_FOV( l_U817, 31.50003000 );
        SET_CAM_NEAR_DOF( l_U817, 0.01000000 );
        SET_CAM_FAR_DOF( l_U817, 18.00000000 );
    }
    else
    {
        SET_CAM_POS( l_U817, -239.71100000, 1456.21600000, 20.73118000 );
        SET_CAM_ROT( l_U817, 3.91399000, 0.99576000, -121.92260000 );
        SET_CAM_FOV( l_U817, 31.50003000 );
        SET_CAM_NEAR_DOF( l_U817, 0.01000000 );
        SET_CAM_FAR_DOF( l_U817, 18.00000000 );
    }
    SET_CAM_POS( l_U818, -232.29340000, 1441.57800000, 20.06354000 );
    SET_CAM_ROT( l_U818, 4.69469400, 0.00000000, 44.73046000 );
    SET_CAM_FOV( l_U818, 34.50003000 );
    SET_CAM_POS( l_U819, -232.29340000, 1441.57800000, 20.06354000 );
    SET_CAM_ROT( l_U819, 4.69469400, 0.00000000, 44.73046000 );
    SET_CAM_FOV( l_U819, 32.10003000 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    SET_CAM_INTERP_STYLE_CORE( l_U814, l_U815, l_U816, 3000, 0 );
    SET_CAM_ACTIVE( l_U814, 1 );
    SET_CAM_PROPAGATE( l_U814, 1 );
    GET_GAME_TIMER( ref l_U844 );
    if (IS_CHAR_ON_FOOT( sub_3247() ))
    {
        SET_CHAR_COORDINATES( sub_3247(), -269.38180000, 1440.61000000, 19.43700000 );
        SET_CHAR_HEADING( sub_3247(), 301.59280000 );
    }
    DO_SCREEN_FADE_IN_UNHACKED( 500 );
    l_U670 = 1;
    return;
}

void sub_29321()
{
    if (NOT l_U714)
    {
        if (l_U670 != 0)
        {
            if (sub_29360( ref l_U844, 1000 ))
            {
                l_U714 = 1;
                l_U670 = 6;
            }
        }
    }
    switch (l_U670)
    {
        case 1:
        if (NOT IS_CAM_INTERPOLATING())
        {
            if (NOT (IS_CHAR_INJURED( l_U600[0]._fU0 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U600[1]._fU0 )))
                {
                    CLEAR_CHAR_TASKS( l_U600[1]._fU0 );
                    TASK_LOOK_AT_CHAR( l_U600[1]._fU0, l_U600[0]._fU0, 13000, 0 );
                    GET_GAME_TIMER( ref l_U843 );
                    l_U670 = 2;
                }
            }
        }
        break;
        case 2:
        if (sub_27485( ref l_U843, 300 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U649._fU0 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U600[1]._fU0 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U600[0]._fU0 )))
                    {
                        SET_CAM_ACTIVE( l_U814, 0 );
                        SET_CAM_PROPAGATE( l_U814, 0 );
                        SET_CAM_ACTIVE( l_U814, 0 );
                        SET_CAM_PROPAGATE( l_U814, 0 );
                        SET_CAM_ACTIVE( l_U815, 0 );
                        SET_CAM_PROPAGATE( l_U815, 0 );
                        SET_CAM_ACTIVE( l_U816, 0 );
                        SET_CAM_PROPAGATE( l_U816, 0 );
                        CLEAR_CHAR_TASKS( l_U649._fU0 );
                        TASK_LOOK_AT_CHAR( sub_3247(), l_U649._fU0, -2, 0 );
                        sub_29892( "PX2_INTRO", 0, 1, ref l_U894[0], 8, 1 );
                        if (NOT (IS_CHAR_INJURED( l_U649._fU0 )))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U600[2]._fU0 )))
                            {
                                TASK_LOOK_AT_CHAR( l_U600[2]._fU0, l_U649._fU0, 20000, 0 );
                            }
                        }
                        SET_CAM_ACTIVE( l_U817, 1 );
                        SET_CAM_PROPAGATE( l_U817, 1 );
                        SET_USE_HIGHDOF( 1 );
                        GET_GAME_TIMER( ref l_U843 );
                        l_U670 = 3;
                    }
                }
            }
        }
        break;
        case 3:
        if (NOT (sub_30133( l_U894[0] )))
        {
            SET_CAM_ACTIVE( l_U817, 0 );
            SET_CAM_PROPAGATE( l_U817, 0 );
            SET_USE_HIGHDOF( 0 );
            sub_3613( "PX2_CHAT", ref l_U894[0], 7, 1 );
            if (NOT (IS_CHAR_INJURED( l_U649._fU0 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U600[3]._fU0 )))
                {
                    TASK_LOOK_AT_CHAR( l_U600[3]._fU0, l_U649._fU0, 20000, 0 );
                }
            }
            SET_CAM_INTERP_STYLE_CORE( l_U814, l_U818, l_U819, 8000, 0 );
            SET_CAM_ACTIVE( l_U814, 1 );
            SET_CAM_PROPAGATE( l_U814, 1 );
            l_U670 = 4;
        }
        break;
        case 4:
        if (NOT (sub_30133( l_U894[0] )))
        {
            l_U670 = 5;
        }
        break;
        case 5:
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        SET_CAM_ACTIVE( l_U815, 0 );
        SET_CAM_PROPAGATE( l_U815, 0 );
        SET_CAM_ACTIVE( l_U816, 0 );
        SET_CAM_PROPAGATE( l_U816, 0 );
        SET_CAM_ACTIVE( l_U817, 0 );
        SET_CAM_PROPAGATE( l_U817, 0 );
        SET_CAM_ACTIVE( l_U818, 0 );
        SET_CAM_PROPAGATE( l_U818, 0 );
        SET_CAM_ACTIVE( l_U819, 0 );
        SET_CAM_PROPAGATE( l_U819, 0 );
        DESTROY_ALL_CAMS();
        END_CAM_COMMANDS( ref l_U866 );
        if (NOT (IS_CHAR_INJURED( l_U649._fU0 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U600[1]._fU0 )))
            {
                TASK_PLAY_ANIM( l_U649._fU0, "street_chat_a", "missplayboy2", 8.00000000, 1, 0, 0, 0, -2 );
                TASK_PLAY_ANIM( l_U600[1]._fU0, "street_chat_b", "missplayboy2", 8.00000000, 1, 0, 0, 0, -2 );
            }
        }
        if (l_U717)
        {
            sub_30850( 1 );
        }
        else
        {
            sub_31026( 1 );
        }
        PRINT( "PROMT_02", 7500, 1 );
        GET_GAME_TIMER( ref l_U843 );
        l_U661 = 3;
        break;
        case 6:
        if (NOT IS_SCREEN_FADED_OUT())
        {
            if (NOT IS_SCREEN_FADING_OUT())
            {
                sub_3107( 0 );
                CLEAR_PRINTS();
                DO_SCREEN_FADE_OUT( 500 );
            }
        }
        else
        {
            l_U717 = 1;
            l_U670 = 4;
        }
        break;
    }
    sub_26266();
    return;
}

int sub_29360(unknown uParam0, unknown uParam1)
{
    if (sub_27485( uParam0, uParam1 ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if (sub_29395())
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_29395()
{
    return IS_CONTROL_JUST_PRESSED( 2, 77 );
}

void sub_29892(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_29917( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_29917(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    return sub_3688( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

int sub_30133(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_3787( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_3787( "\n speech is not playing" );
    }
    return 0;
}

void sub_30850(boolean bParam0)
{
    CLEAR_PRINTS();
    CLEAR_HELP();
    sub_3107( 0 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    SET_WIDESCREEN_BORDERS( 0 );
    if (IS_PLAYER_PLAYING( sub_2806() ))
    {
        SET_INTERP_IN_OUT_VEHICLE_ENABLED_THIS_FRAME( 0 );
        SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
        SET_CAM_BEHIND_PED( sub_3247() );
        if (bParam0)
        {
            CLEAR_CHAR_TASKS( sub_3247() );
        }
        SET_PLAYER_CONTROL( sub_2806(), 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3247(), 0 );
    }
    ALLOW_EMERGENCY_SERVICES( 1 );
    DO_SCREEN_FADE_IN( 500 );
    return;
}

void sub_31026(boolean bParam0)
{
    CLEAR_PRINTS();
    CLEAR_HELP();
    sub_3107( 0 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    SET_WIDESCREEN_BORDERS( 0 );
    if (IS_PLAYER_PLAYING( sub_2806() ))
    {
        SET_INTERP_IN_OUT_VEHICLE_ENABLED_THIS_FRAME( 0 );
        SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
        SET_CAM_BEHIND_PED( sub_3247() );
        if (bParam0)
        {
            CLEAR_CHAR_TASKS( sub_3247() );
        }
        SET_PLAYER_CONTROL( sub_2806(), 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3247(), 0 );
    }
    ALLOW_EMERGENCY_SERVICES( 1 );
    return;
}

void sub_31319()
{
    if (NOT l_U720)
    {
        if (NOT l_U721)
        {
            if ((sub_3415( ref l_U649._fU0 )) > 50.00000000)
            {
                if (NOT sub_31372())
                {
                    CLEAR_HELP();
                    CLEAR_PRINTS();
                    PRINT( "NET_3_HELP4", 7500, 1 );
                    ADD_BLIP_FOR_COORD( l_U786._fU0, l_U786._fU4, l_U786._fU8, ref l_U737 );
                    l_U721 = 1;
                }
            }
        }
        else if (((LOCATE_CHAR_ANY_MEANS_3D( sub_3247(), l_U786._fU0, l_U786._fU4, l_U786._fU8, 2.50000000, 2.50000000, 2.50000000, 1 )) || ((sub_3415( ref l_U649._fU0 )) < 25.00000000)) || (sub_31372()))
        {
            REMOVE_BLIP( l_U737 );
            CLEAR_HELP();
            l_U721 = 0;
            sub_22513();
            if (sub_31372())
            {
                l_U720 = 1;
            }
        }
    }
    switch (l_U665)
    {
        case 0:
        if (sub_27485( ref l_U843, 5000 ))
        {
            l_U665 = 1;
        }
        break;
        case 1:
        if (NOT l_U721)
        {
            sub_31787();
            switch (l_U666)
            {
                case 0:
                if (NOT (IS_CHAR_INJURED( l_U649._fU0 )))
                {
                    if (sub_32425( l_U649._fU0 ))
                    {
                        l_U709 = 1;
                    }
                    else if ((sub_32425( l_U600[0]._fU0 )) || (sub_32425( l_U600[1]._fU0 )))
                    {
                        l_U707 = 1;
                    }
                    else if ((sub_32425( l_U600[2]._fU0 )) || (sub_32425( l_U600[3]._fU0 )))
                    {
                        l_U708 = 1;
                    }
                    else if (sub_32596())
                    {
                        l_U711 = 1;
                    }
                    else
                    {
                        break;
                    };;;;
                    sub_32656( 9 );
                    sub_32729( 1 );
                    l_U728 = 1;
                    g_U65009 = 1;
                    l_U666 = 1;
                }
                break;
                case 1:
                if ((g_U91._fU0 == 1023) || (g_U91._fU0 == 1024))
                {
                    if (sub_32995( 9 ))
                    {
                        CLEAR_HELP();
                        l_U677 = 1;
                        GET_GAME_TIMER( ref l_U843 );
                        l_U666 = 2;
                    }
                }
                else
                {
                    l_U709 = 0;
                    l_U707 = 0;
                    l_U708 = 0;
                    l_U711 = 0;
                    l_U666 = 0;
                }
                break;
                case 2:
                if (sub_27485( ref l_U843, 4000 ))
                {
                    SET_PHONE_HUD_ITEM( 6, "CONT_C10", -1 );
                    GET_GAME_TIMER( ref l_U843 );
                    l_U665 = 2;
                }
                break;
            }
        }
        break;
        case 2:
        if (sub_27485( ref l_U843, 10000 ))
        {
            if (l_U709)
            {
                l_U665 = 3;
            }
            else if (l_U707)
            {
                CLEAR_HELP();
                sub_33252( 9, 5, 16383, 16383, ref l_U907 );
                sub_33599( ref l_U907, 1 );
                sub_33630( ref l_U907, 0 );
                sub_33660( ref l_U907 );
                sub_34432();
            }
            else if (l_U708)
            {
                CLEAR_HELP();
                if (NOT l_U719)
                {
                    sub_33252( 9, 1, 16383, 16383, ref l_U907 );
                    l_U719 = 1;
                }
                else
                {
                    sub_33252( 9, 6, 16383, 16383, ref l_U907 );
                }
                sub_33599( ref l_U907, 1 );
                sub_33630( ref l_U907, 0 );
                sub_33660( ref l_U907 );
                sub_34432();
            }
            else if (l_U711)
            {
                CLEAR_HELP();
                sub_33252( 9, 3, 16383, 16383, ref l_U907 );
                sub_33599( ref l_U907, 1 );
                sub_33630( ref l_U907, 0 );
                sub_33660( ref l_U907 );
                sub_34432();
            };;;;
        }
        break;
        case 3:
        switch (l_U667)
        {
            case 0:
            CLEAR_HELP();
            switch (l_U831)
            {
                case 0:
                if (sub_34774( 9, "PX2_CYELL", "PX2AUD", 10000, 0 ))
                {
                    l_U864 = -1;
                    l_U712 = 1;
                    l_U667 = 1;
                }
                break;
                case 1:
                if (sub_34774( 9, "PX2_CRED", "PX2AUD", 10000, 0 ))
                {
                    l_U864 = -1;
                    l_U712 = 1;
                    l_U667 = 1;
                }
                break;
                case 2:
                if (sub_34774( 9, "PX2_CPURP", "PX2AUD", 10000, 0 ))
                {
                    l_U864 = -1;
                    l_U712 = 1;
                    l_U667 = 1;
                }
                break;
            }
            if (NOT l_U718)
            {
                if (sub_38776())
                {
                    if (NOT (IS_CHAR_INJURED( l_U600[1]._fU0 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U600[3]._fU0 )))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U649._fU0 )))
                            {
                                OPEN_SEQUENCE_TASK( ref l_U649._fU44 );
                                TASK_LOOK_AT_CHAR( 0, sub_3247(), -2, 0 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3247() );
                                CLOSE_SEQUENCE_TASK( l_U649._fU44 );
                                TASK_PERFORM_SEQUENCE( l_U649._fU0, l_U649._fU44 );
                                CLEAR_SEQUENCE_TASK( l_U649._fU44 );
                                OPEN_SEQUENCE_TASK( ref l_U600[1]._fU44 );
                                TASK_LOOK_AT_CHAR( 0, sub_3247(), -2, 0 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3247() );
                                CLOSE_SEQUENCE_TASK( l_U600[1]._fU44 );
                                TASK_PERFORM_SEQUENCE( l_U600[1]._fU0, l_U600[1]._fU44 );
                                CLEAR_SEQUENCE_TASK( l_U600[1]._fU44 );
                                OPEN_SEQUENCE_TASK( ref l_U600[3]._fU44 );
                                TASK_LOOK_AT_CHAR( 0, sub_3247(), -2, 0 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3247() );
                                CLOSE_SEQUENCE_TASK( l_U600[3]._fU44 );
                                TASK_PERFORM_SEQUENCE( l_U600[3]._fU0, l_U600[3]._fU44 );
                                CLEAR_SEQUENCE_TASK( l_U600[3]._fU44 );
                                l_U718 = 1;
                            }
                        }
                    }
                }
            }
            break;
            case 1:
            if (l_U712)
            {
                switch (sub_39251())
                {
                    case 1:
                    l_U712 = 0;
                    l_U868++;
                    l_U667 = 0;
                    break;
                    default:
                }
            }
            if (NOT (sub_39357( 0 )))
            {
                if (sub_39624() != -1)
                {
                    l_U864 = sub_39624();
                    if (sub_39624() >= 0)
                    {
                        sub_39677();
                        ADD_BLIP_FOR_CHAR( l_U649._fU0, ref l_U649._fU4 );
                        l_U678 = 1;
                        l_U665 = 4;
                    }
                }
            }
            else if (l_U864 != -1)
            {
                if ((NOT sub_39864()) || (l_U864 >= 0))
                {
                    sub_39677();
                    ADD_BLIP_FOR_CHAR( l_U649._fU0, ref l_U649._fU4 );
                    l_U678 = 1;
                    l_U665 = 4;
                }
                else
                {
                    l_U712 = 0;
                    l_U667 = 0;
                }
            }
            else
            {
                l_U868++;
                l_U712 = 0;
                l_U667 = 0;
            }
            break;
        }
        break;
        case 4:
        if (NOT l_U704)
        {
            if (sub_39357( 0 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U649._fU0 )))
                {
                    CLEAR_PRINTS();
                    PRINT( "PROMT_07", 7500, 1 );
                    l_U704 = 1;
                }
            }
        }
        sub_26266();
        sub_26470( 1 );
        break;
    }
    LOCATE_CHAR_ANY_MEANS_3D( sub_3247(), l_U763._fU0, l_U763._fU4, l_U763._fU8, l_U800, l_U801, l_U802, 0 );
    if (l_U868 > 2)
    {
        sub_40152();
    }
    if (l_U665 != 4)
    {
        sub_26266();
        sub_26470( 0 );
    }
    return;
}

int sub_31372()
{
    for ( l_U820 = 0; l_U820 <= (l_U600 - 1); l_U820++ )
    {
        if (DOES_BLIP_EXIST( l_U600[l_U820]._fU4 ))
        {
            return 1;
        }
    }
    if (DOES_BLIP_EXIST( l_U649._fU4 ))
    {
        return 1;
    }
    return 0;
}

void sub_31787()
{
    if (NOT l_U677)
    {
        if (NOT (DOES_BLIP_EXIST( l_U737 )))
        {
            if (NOT sub_31825())
            {
                if (NOT l_U722[0])
                {
                    CLEAR_HELP();
                    PRINT_HELP_FOREVER( "NET_3_HELP_01" );
                    sub_22513();
                    l_U722[0] = 1;
                }
            }
            if (sub_31923() == 1002)
            {
                if (NOT l_U722[1])
                {
                    CLEAR_HELP();
                    PRINT_HELP_FOREVER( "NET_3_HELP_02" );
                    sub_22513();
                    l_U722[1] = 1;
                }
            }
            if (sub_31923() == 1011)
            {
                if (NOT l_U722[2])
                {
                    CLEAR_HELP();
                    PRINT_HELP_FOREVER( "NET_3_HELP_03" );
                    sub_22513();
                    l_U722[2] = 1;
                }
            }
            if (sub_32086())
            {
                if (NOT l_U722[3])
                {
                    CLEAR_HELP();
                    if ((((NOT (# -NULL-0xc27bfa())) AND ((GET_PROFILE_SETTING( 4 )) == 0)) || ((# -NULL-0xc27bfa()) AND (NOT IS_SNIPER_INVERTED()))) || (NOT IS_USING_CONTROLLER()))
                    {
                        PRINT_HELP_FOREVER( "NET_3_HELP2_01" );
                    }
                    else
                    {
                        PRINT_HELP_FOREVER( "NET_3_HELP2_03" );
                    }
                    l_U689 = 1;
                    l_U688 = 1;
                    sub_22513();
                    l_U722[3] = 1;
                    l_U665 = 1;
                }
            }
            if (l_U728)
            {
                if (NOT l_U722[4])
                {
                    CLEAR_HELP();
                    PRINT_HELP_FOREVER( "NET_3_HELP3_01" );
                    sub_22513();
                    l_U722[4] = 1;
                }
            }
        }
    }
    return;
}

int sub_31825()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_31923()
{
    return g_U91._fU0;
}

int sub_32086()
{
    if (g_U91._fU0 == 1020)
    {
        return 1;
    }
    return 0;
}

int sub_32425(unknown uParam0)
{
    if (g_U91._fU0 == 1022)
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            return CELL_CAM_IS_CHAR_VISIBLE( uParam0 );
        }
    }
    return 0;
}

int sub_32596()
{
    if (g_U91._fU0 == 1022)
    {
        return 1;
    }
    return 0;
}

int sub_32656(unknown uParam0)
{
    if ((g_U91._fU0 == 1022) || (g_U91._fU0 == 1023))
    {
        g_U91._fU88 = 1;
        g_U91._fU60 = uParam0;
        return 1;
    }
    return 0;
}

void sub_32729(int iParam0)
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if ((I == iParam0) || (iParam0 == 2))
        {
            sub_32767( I );
            g_U9241._fU148[I] = 0;
            g_U9241._fU112[I] = -1;
            StrCopy( ref g_U9241._fU28[I], "", 16 );
        }
    }
    return;
}

void sub_32767(int iParam0)
{
    if (iParam0 == 0)
    {
        CLEAR_THIS_PRINT( ref g_U9241._fU64[0] );
    }
    else
    {
        sub_32819( ref g_U9241._fU64[1] );
    }
    return;
}

void sub_32819(unknown uParam0)
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

int sub_32995(int iParam0)
{
    if ((g_U91._fU0 == 1024) AND (iParam0 == g_U91._fU60))
    {
        return 1;
    }
    return 0;
}

void sub_33252(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_33274( uParam0, 0, iParam4 + 0 );
    sub_33274( uParam1, 1, iParam4 + 0 );
    sub_33274( uParam2, 2, iParam4 + 0 );
    sub_33274( uParam3, 3, iParam4 + 0 );
    sub_33274( 0, 4, iParam4 + 0 );
    sub_33274( 1, 5, iParam4 + 0 );
    sub_33274( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_33274(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_33599(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_33630(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

int sub_33660(int iParam0)
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
        if (NOT sub_33730())
        {
            sub_2219( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_33857( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_2219( iVar9 );
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
                ConcatString(ref cVar5, sub_1933( 0, iParam0->_fU0 ), 16);
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
        else if ((sub_1933( 4, g_U569[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_33730()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_1933( 1, g_U569[I] )) != 0) AND (g_U569[I]._fU20))
        {
            sub_2219( I );
            return 1;
        }
    }
    return 0;
}

int sub_33857(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U569 - 1); Result++ )
    {
        if (g_U569[Result]._fU0[0] != -1)
        {
            if (sub_33922( uParam0, g_U569[Result] ))
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

int sub_33922(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_1933( 0, uParam0 );
        if (iVar14 == (sub_1933( 0, uParam6 )))
        {
            iVar15 = sub_1933( 3, uParam0 );
            if (iVar15 == (sub_1933( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_34432()
{
    l_U707 = 0;
    l_U708 = 0;
    l_U709 = 0;
    l_U711 = 0;
    l_U666 = 0;
    l_U665 = 1;
    return;
}

void sub_34774(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_34834( uParam0, ref cVar7, uParam2, 0, ref uVar16, ref uVar16, "", uParam3, 1, 0, 1, 0, 0, uParam4 );
}

int sub_34834(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_3787( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_3787( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_2806() )))
    {
        sub_3787( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_3247() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3247() ))))
    {
        sub_3787( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_3787( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_35349()) AND (NOT bParam11))
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
                sub_3787( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT sub_35349()) AND (NOT bParam11))
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
    sub_36721( uParam0, ref g_U91._fU176 );
    sub_38102( ref g_U91._fU160 );
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
        sub_24023( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

int sub_35349()
{
    if ((g_U91._fU48) || (g_U91._fU52))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_35406())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_35406()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_2806() )))
    {
        sub_3787( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_3787( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_3787( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU100) || (g_U91._fU104))
    {
        sub_3787( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_2806() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3247() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_3247(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_3787( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_3247() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_3787( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_3787( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_2806() )))
    {
        sub_3787( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_36721(int iParam0, unknown uParam1)
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

void sub_38102(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

int sub_38776()
{
    switch (g_U91._fU112)
    {
        case 0:
        case 4:
        return 1;
        break;
    }
    return 0;
}

int sub_39251()
{
    if (g_U91._fU60 != -1)
    {
        return g_U15946[g_U91._fU60]._fU132._fU24;
    }
    return 6;
}

int sub_39357(boolean bParam0)
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
        GET_SCRIPT_TASK_STATUS( sub_3247(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_3787( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

void sub_39624()
{
    return GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
}

void sub_39677()
{
    for ( l_U820 = 0; l_U820 <= (l_U600 - 1); l_U820++ )
    {
        if (DOES_BLIP_EXIST( l_U600[l_U820]._fU4 ))
        {
            REMOVE_BLIP( l_U600[l_U820]._fU4 );
        }
    }
    if (DOES_BLIP_EXIST( l_U649._fU4 ))
    {
        REMOVE_BLIP( l_U649._fU4 );
    }
    return;
}

void sub_39864()
{
    return g_U91._fU504;
}

void sub_40152()
{
    if (NOT (sub_30133( l_U894[0] )))
    {
        sub_40181();
        while (sub_31825())
        {
            WAIT( 0 );
        }
        g_U91._fU40 = 1;
        sub_3296();
        CLEAR_PRINTS();
        if (l_U847[0] == 1)
        {
            PRINT( "PROMT_11", 7500, 1 );
        }
        else if (l_U847[1] == 1)
        {
            PRINT( "PROMT_05", 7500, 1 );
        }
        else if (l_U847[2] == 1)
        {
            if (l_U661 == 4)
            {
                PRINT( "PROMT_12", 7500, 1 );
            }
            else
            {
                PRINT( "PROMT_06", 7500, 1 );
            }
        }
        else if (l_U868 > 2)
        {
            PRINT_NOW( "PROMT_04", 7500, 1 );
        };;;;
        l_U672 = 0;
        if (l_U715)
        {
            sub_40545( 9, "PX2_CFAIL2", "PX2AUD", 0 );
        }
        else
        {
            sub_40545( 9, "PX2_CFAIL", "PX2AUD", 0 );
        }
        g_U65010++;
        if (g_U65010 > 1)
        {
            SET_PLAYER_MOOD_PISSED_OFF( sub_2806(), 150 );
            SAY_AMBIENT_SPEECH( sub_3247(), "MISSION_FAIL_RAGE", 0, 0, 0 );
        }
        sub_40715();
        sub_2797();
    }
    return;
}

void sub_40181()
{
    return sub_40192( 1, 1 );
}

int sub_40192(boolean bParam0, unknown uParam1)
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

void sub_40545(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_5750( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_40715()
{
    sub_40724();
    return;
}

void sub_40724()
{
    int iVar2;

    iVar2 = 9;
    sub_40738( iVar2 );
    sub_1886( iVar2 );
    return;
}

void sub_40738(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_2806(), 150 );
    CLEAR_HELP();
    sub_710( uParam0 );
    return;
}

void sub_40877()
{
    sub_40886();
    if (IS_CHAR_DEAD( l_U649._fU0 ))
    {
        sub_5650();
    }
    if (sub_42142( ref l_U649._fU0, ref l_U790 ))
    {
        l_U847[2] = 1;
        sub_40152();
    }
    return;
}

void sub_40886()
{
    if (NOT (IS_CHAR_INJURED( l_U649._fU0 )))
    {
        switch (l_U671)
        {
            case 0:
            GET_SCRIPT_TASK_STATUS( l_U649._fU0, 29, ref l_U878[0] );
            if (l_U878[0] == 7)
            {
                if (IS_VEH_DRIVEABLE( l_U575[l_U865]._fU0 ))
                {
                    OPEN_SEQUENCE_TASK( ref l_U649._fU44 );
                    TASK_ENTER_CAR_AS_DRIVER( 0, l_U575[l_U865]._fU0, -2 );
                    TASK_CAR_MISSION_PED_TARGET( 0, l_U575[l_U865]._fU0, sub_3247(), 8, 30.00000000, 2, -1, -1 );
                    CLOSE_SEQUENCE_TASK( l_U649._fU44 );
                    TASK_PERFORM_SEQUENCE( l_U649._fU0, l_U649._fU44 );
                    CLEAR_SEQUENCE_TASK( l_U649._fU44 );
                    l_U671 = 1;
                }
                else
                {
                    TASK_SMART_FLEE_CHAR( l_U649._fU0, sub_3247(), 100.00000000, -2 );
                    l_U671 = 3;
                }
            }
            break;
            case 1:
            GET_SCRIPT_TASK_STATUS( l_U649._fU0, 29, ref l_U878[0] );
            if (l_U878[0] == 1)
            {
                GET_SEQUENCE_PROGRESS( l_U649._fU0, ref l_U867 );
                if (l_U867 == 0)
                {
                    if (((NOT (IS_VEH_DRIVEABLE( l_U575[l_U865]._fU0 ))) || (IS_CHAR_IN_CAR( sub_3247(), l_U575[l_U865]._fU0 ))) || (sub_41347( ref l_U649._fU0, ref l_U575[l_U865]._fU0, 1, 10.00000000 )))
                    {
                        TASK_SMART_FLEE_CHAR( l_U649._fU0, sub_3247(), 100.00000000, -2 );
                        l_U671 = 3;
                    }
                }
                else if (l_U867 == 1)
                {
                    if ((IS_VEH_DRIVEABLE( l_U575[l_U865]._fU0 )) AND (NOT (IS_CHAR_IN_CAR( sub_3247(), l_U575[l_U865]._fU0 ))))
                    {
                        l_U671 = 2;
                    }
                    else
                    {
                        TASK_SMART_FLEE_CHAR( l_U649._fU0, sub_3247(), 100.00000000, -2 );
                        l_U671 = 3;
                    }
                }
            }
            break;
            case 2:
            if (IS_VEH_DRIVEABLE( l_U575[l_U865]._fU0 ))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U649._fU0, l_U575[l_U865]._fU0 )))
                {
                    SAY_AMBIENT_SPEECH( l_U649._fU0, "GUN_RUN", 0, 0, 0 );
                    GIVE_WEAPON_TO_CHAR( l_U649._fU0, 13, 30000, 1 );
                    sub_5133( ref l_U649._fU0, ref l_U872 );
                    l_U671 = 4;
                }
            }
            else
            {
                OPEN_SEQUENCE_TASK( ref l_U649._fU44 );
                TASK_SMART_FLEE_CHAR( 0, sub_3247(), 100.00000000, -2 );
                CLOSE_SEQUENCE_TASK( l_U649._fU44 );
                TASK_PERFORM_SEQUENCE( l_U649._fU0, l_U649._fU44 );
                CLEAR_SEQUENCE_TASK( l_U649._fU44 );
                l_U671 = 3;
            }
            break;
            case 3:
            if (((sub_3415( ref l_U649._fU0 )) < 5.00000000) || (sub_41940( ref l_U649._fU0, ref l_U857[4] )))
            {
                GIVE_WEAPON_TO_CHAR( l_U649._fU0, 13, 30000, 1 );
                sub_5133( ref l_U649._fU0, ref l_U872 );
                l_U671 = 4;
            }
            break;
            case 4: break;
        }
    }
    return;
}

int sub_41347(unknown uParam0, unknown uParam1, boolean bParam2, float fParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    float fVar12;

    fVar12 = 0.00000000;
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (IS_VEH_DRIVEABLE( (uParam1^) ))
        {
            GET_CHAR_COORDINATES( (uParam0^), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
            GET_CAR_COORDINATES( (uParam1^), ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
            GET_DISTANCE_BETWEEN_COORDS_3D( uVar6._fU0, uVar6._fU4, uVar6._fU8, uVar9._fU0, uVar9._fU4, uVar9._fU8, ref fVar12 );
            if (bParam2)
            {
                if (fVar12 > fParam3)
                {
                    return 1;
                }
            }
            else if (fVar12 < fParam3)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_41940(unknown uParam0, unknown uParam1)
{
    int iVar4;

    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            GET_CHAR_HEALTH( (uParam0^), ref iVar4 );
            if (((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam0^), sub_3247(), 0 )) || (iVar4 < (uParam1^))) || (IS_CHAR_RESPONDING_TO_EVENT( (uParam0^), 9 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_42142(unknown uParam0, unknown uParam1)
{
    unknown[2] uVar4;
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
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;

    array(ref uVar4, 2);
    return sub_42161( ref uVar4, uParam0, uParam1, 0 );
}

int sub_42161(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    int I;

    if (bParam3)
    {
        for ( I = 0; I <= ((uParam0^) - 1); I++ )
        {
            if (DOES_CHAR_EXIST( (uParam0^)[I]._fU0 ))
            {
                if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))
                {
                    if (((sub_3415( ref (uParam0^)[I]._fU0 )) > (uParam2^)) AND (NOT (IS_CHAR_ON_SCREEN( (uParam0^)[I]._fU0 ))))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    else if (DOES_CHAR_EXIST( (uParam1^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam1^) )))
        {
            if (((sub_3415( uParam1 )) > (uParam2^)) AND (NOT (IS_CHAR_ON_SCREEN( (uParam1^) ))))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_42409(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U105)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((l_U103) AND (IS_HINT_RUNNING()))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U104 + 500))
        {
            l_U103 = 0;
        }
    }
    if (((((IS_CONTROL_PRESSED( 0, 51 )) AND (IS_CHAR_IN_ANY_CAR( sub_3247() ))) AND (NOT (IS_CHAR_DEAD( (uParam0^) )))) AND (NOT sub_31825())) AND (iVar3 != 4))
    {
        if ((NOT IS_HINT_RUNNING()) AND (IS_CHAR_IN_ANY_CAR( (uParam0^) )))
        {
            if (l_U105)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U104 );
            l_U103 = 1;
            l_U102 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U102) AND (NOT l_U103))
        {
            if (l_U105)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U102 = 1;
        }
    }
    else if (l_U102)
    {
        if (l_U105)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U102 = 0;
    };;;
    return;
}

void sub_43063()
{
    if (NOT l_U730)
    {
        if (NOT (sub_39357( 0 )))
        {
            if (sub_39624() != -1)
            {
                l_U864 = sub_39624();
                if (sub_39624() >= 0)
                {
                    sub_39677();
                    ADD_BLIP_FOR_CHAR( l_U649._fU0, ref l_U649._fU4 );
                    CLEAR_PRINTS();
                    PRINT( "PROMT_07", 7500, 1 );
                    l_U661 = 4;
                    l_U730 = 1;
                    return;
                }
            }
        }
        else if (l_U864 != -1)
        {
            if ((NOT sub_39864()) || (l_U864 >= 0))
            {
                sub_39677();
                ADD_BLIP_FOR_CHAR( l_U649._fU0, ref l_U649._fU4 );
                l_U678 = 1;
                CLEAR_PRINTS();
                PRINT( "PROMT_07", 7500, 1 );
                l_U661 = 4;
                return;
            }
            else
            {
                l_U730 = 1;
            }
        }
        else
        {
            l_U730 = 1;
        }
    }
    sub_40886();
    if (l_U729)
    {
        if (NOT (sub_30133( l_U894[0] )))
        {
            sub_3107( 0 );
            PRINT_NOW( "PROMT_03", 7500, 1 );
            l_U729 = 0;
        }
    }
    if ((sub_43398( ref l_U600 )) AND (sub_43552( ref l_U649 )))
    {
        sub_5650();
    }
    if ((sub_43693( ref l_U600, ref l_U789 )) || (sub_42142( ref l_U649._fU0, ref l_U790 )))
    {
        l_U847[2] = 1;
        sub_40152();
    }
    return;
}

int sub_43398(unknown uParam0)
{
    int I;
    int iVar4;

    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        if (DOES_CHAR_EXIST( (uParam0^)[I]._fU0 ))
        {
            if (IS_CHAR_INJURED( (uParam0^)[I]._fU0 ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref (uParam0^)[I]._fU0 );
                REMOVE_BLIP( (uParam0^)[I]._fU4 );
                iVar4++;
            }
        }
        else
        {
            iVar4++;
        }
    }
    if (iVar4 == (uParam0^))
    {
        return 1;
    }
    return 0;
}

int sub_43552(int iParam0)
{
    unknown uVar3;
    int iVar4;

    if (DOES_CHAR_EXIST( iParam0->_fU0 ))
    {
        if (IS_CHAR_DEAD( iParam0->_fU0 ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( iParam0 + 0 );
            if (DOES_BLIP_EXIST( iParam0->_fU4 ))
            {
                REMOVE_BLIP( iParam0->_fU4 );
            }
            iVar4++;
        }
    }
    else
    {
        iVar4++;
    }
    if (iVar4 == 1)
    {
        return 1;
    }
    return 0;
}

void sub_43693(unknown uParam0, unknown uParam1)
{
    return sub_42161( uParam0, ref (uParam0^)[0]._fU0, uParam1, 1 );
}
