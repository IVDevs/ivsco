void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 0;
    l_U103 = 0.40000000;
    l_U104 = 0;
    l_U105 = 0;
    l_U106 = 0;
    l_U107 = 0;
    l_U108 = 0;
    l_U109 = 0;
    l_U110 = 0;
    l_U111 = 0;
    l_U134 = 1;
    l_U141 = 0;
    l_U148 = "EC1_PLOOK";
    l_U155 = "EC1_FLOOK";
    l_U162 = "EC1_ALOOK";
    l_U169 = "EC1_BYCOP";
    l_U176 = "EC1_ALLBY";
    l_U177 = 0;
    l_U264 = 2046537925;
    l_U265 = 1171614426;
    l_U266 = 1938952078;
    l_U267 = -183203150;
    l_U268 = -1175077216;
    l_U269 = -610224615;
    l_U270 = 6;
    l_U271 = 20;
    l_U272 = 21;
    ProtectedSet(l_U288, 1000);
    ProtectedSet(l_U289, 500);
    THIS_SCRIPT_SHOULD_BE_SAVED();
    if (HAS_DEATHARREST_EXECUTED())
    {
        l_U104 = 6;
    }
    sub_313();
    while (true)
    {
        WAIT( 0 );
        if (IS_PLAYER_PLAYING( sub_344() ))
        {
            switch (l_U104)
            {
                case 0:
                sub_455();
                break;
                case 1:
                sub_8500();
                break;
                case 2:
                sub_9613();
                sub_11322();
                break;
                case 3:
                sub_9613();
                sub_12611();
                break;
                case 4:
                sub_9613();
                sub_13969();
                break;
                case 5:
                sub_9613();
                sub_16709();
                break;
                case 6:
                sub_17732();
                sub_18593();
                sub_18920();
                break;
            }
        }
    }
    return;
}

void sub_313()
{
    return;
}

void sub_344()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_455()
{
    switch (l_U109)
    {
        case 0:
        if (sub_506( "911" ))
        {
            l_U109 = 1;
        }
        break;
        case 1:
        if (sub_506( "911" ))
        {
            if (g_U9553 == 0)
            {
                sub_687( "Police_help", "ambul_help", "fire_help" );
                sub_766( "ECE1_LINE1", "", 1 );
            }
            else
            {
                sub_3810( "ECE1_ALLBY", "", 1 );
                sub_4034( ref l_U178, "ECE1_ALLBY", ref l_U110 );
                l_U177 = 1;
                l_U111 = 3;
            }
            sub_4180( "EMERGENCY_OPERATOR" );
            while (l_U134)
            {
                WAIT( 0 );
                switch (l_U111)
                {
                    case 0:
                    l_U274 = sub_4271();
                    if (l_U274 == 2)
                    {
                        CLEAR_PRINTS();
                        l_U104 = 6;
                        l_U134 = 0;
                    }
                    switch (sub_4368())
                    {
                        case -2:
                        CLEAR_PRINTS();
                        l_U104 = 6;
                        l_U134 = 0;
                        break;
                        case 1:
                        if (GET_CREATE_RANDOM_COPS())
                        {
                            sub_4034( ref l_U178, "E1_COPCALL1", ref l_U110 );
                            l_U105 = 1;
                            l_U111 = 1;
                        }
                        else
                        {
                            sub_4034( ref l_U178, "ECE1_BYCOP", ref l_U110 );
                            l_U105 = 1;
                            l_U177 = 1;
                            l_U111 = 3;
                        }
                        break;
                        case 2:
                        sub_4034( ref l_U178, "E1_MEDCALL1", ref l_U110 );
                        l_U105 = 2;
                        l_U111 = 1;
                        break;
                        case 3:
                        sub_4034( ref l_U178, "E1_FIRECALL", ref l_U110 );
                        l_U105 = 3;
                        l_U111 = 1;
                        break;
                    }
                    break;
                    case 1:
                    l_U274 = sub_4271();
                    if (l_U274 == 2)
                    {
                        CLEAR_PRINTS();
                        l_U109 = 3;
                        l_U134 = 0;
                    }
                    sub_4034( ref l_U178, sub_4700(), ref l_U110 );
                    l_U111 = 2;
                    break;
                    case 2:
                    l_U274 = sub_4271();
                    if (l_U274 == 2)
                    {
                        CLEAR_PRINTS();
                        l_U109 = 3;
                        l_U134 = 0;
                    }
                    if (NOT (COMPARE_STRING( sub_4700(), "E1ES_82" )))
                    {
                        if (l_U105 == 1)
                        {
                            sub_4034( ref l_U178, "ECE1_OFFICER", ref l_U110 );
                        }
                        else if (l_U105 == 2)
                        {
                            sub_4034( ref l_U178, "ECE1_MEDIC", ref l_U110 );
                        }
                        else if (l_U105 == 3)
                        {
                            sub_4034( ref l_U178, "ECE1_FIRE", ref l_U110 );
                        };;;
                    }
                    else
                    {
                        l_U177 = 1;
                        sub_4034( ref l_U178, "ECE1_WASTE", ref l_U110 );
                    }
                    l_U111 = 3;
                    break;
                    case 3:
                    l_U274 = sub_4271();
                    if (l_U274 == 2)
                    {
                        CLEAR_PRINTS();
                        l_U109 = 3;
                        l_U134 = 0;
                    }
                    sub_8168( ref l_U178, "", 1 );
                    sub_4180( "EMERGENCY_OPERATOR" );
                    l_U109 = 3;
                    l_U134 = 0;
                    break;
                }
            }
        }
        break;
        case 3:
        if (l_U177 == 0)
        {
            if (NOT sub_8384())
            {
                CLEAR_PRINTS();
                l_U104 = 1;
            }
        }
        else if (NOT sub_8384())
        {
            CLEAR_PRINTS();
            l_U104 = 6;
        }
        break;
    }
    return;
}

int sub_506(unknown uParam0)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        return 0;
    }
    if ((g_U94._fU0 == 1005) AND (g_U94._fU508 >= 4))
    {
        if (g_U94._fU60 == 21)
        {
            return COMPARE_STRING( ref g_U94._fU128, uParam0 );
        }
    }
    return 0;
}

void sub_687(unknown uParam0, unknown uParam1, unknown uParam2)
{
    StrCopy( ref g_U94._fU432[0], uParam0, 16 );
    StrCopy( ref g_U94._fU432[1], uParam1, 16 );
    StrCopy( ref g_U94._fU432[2], uParam2, 16 );
    return;
}

int sub_766(unknown uParam0, unknown uParam1, boolean bParam2)
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
    uVar23 = g_U94._fU60;
    if (bParam2)
    {
        return sub_845( uVar23, ref cVar5, uParam1, 0, ref uVar14, ref uVar14, "", 0, bParam2, 1, 1, 0, 1, 0 );
    }
    if (NOT g_U94._fU368)
    {
        StrCopy( ref g_U94._fU224[0], uParam1, 16 );
        StrCopy( ref g_U94._fU224[1], uParam0, 16 );
        sub_2780( uVar23, ref g_U94._fU176 );
        g_U94._fU368 = 1;
        return 1;
    }
    return 0;
}

int sub_845(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U94._fU540)
    {
        return 0;
    }
    sub_915( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 >= 6)
        {
            sub_915( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_344() )))
    {
        sub_915( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_1076() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1076() ))))
    {
        sub_915( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        sub_915( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_1408()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U94._fU60 = uParam0;
        g_U94._fU48 = 1;
        g_U15862[g_U94._fU60]._fU196._fU24 = 0;
        break;
        case 1:
        if (g_U94._fU368)
        {
            if ((g_U94._fU372) || (NOT bParam8))
            {
                sub_915( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
                return 0;
            }
        }
        if (g_U94._fU60 != -1)
        {
            if ((g_U15862[g_U94._fU60]._fU196._fU24 != 5) AND (g_U15862[g_U94._fU60]._fU196._fU24 != 4))
            {
                g_U15862[g_U94._fU60]._fU196._fU24 = 0;
            }
        }
        g_U94._fU368 = 1;
        g_U94._fU372 = bParam8;
        uParam0 = g_U94._fU60;
        break;
        case 2:
        if ((NOT sub_1408()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U94._fU60 = uParam0;
        g_U94._fU52 = 1;
        g_U94._fU56 = 1;
        g_U94._fU372 = 1;
        g_U94._fU368 = 1;
        g_U15862[g_U94._fU60]._fU196._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    sub_2780( uParam0, ref g_U94._fU176 );
    sub_3176( ref g_U94._fU160 );
    g_U94._fU380 = uParam10;
    g_U94._fU376 = bParam11;
    g_U94._fU420 = uParam12;
    g_U94._fU424 = -1;
    g_U94._fU364 = uParam3;
    StrCopy( ref g_U94._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U9051 - 1); I++ )
    {
        StrCopy( ref g_U9051[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U9051[I] = {(uParam1^)[I]};
        sub_3418( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
    }
    for ( I = 0; I <= (g_U94._fU260 - 1); I++ )
    {
        if (I < (uParam4^))
        {
            g_U94._fU260[I] = {(uParam4^)[I]};
        }
        else
        {
            StrCopy( ref g_U94._fU260[I], "", 16 );
        }
    }
    for ( I = 0; I <= (g_U94._fU312 - 1); I++ )
    {
        if (I < (uParam5^))
        {
            g_U94._fU312[I] = {(uParam5^)[I]};
        }
        else
        {
            StrCopy( ref g_U94._fU312[I], "", 16 );
        }
    }
    StrCopy( ref g_U94._fU208, uParam6, 16 );
    g_U94._fU80 = uParam7;
    g_U94._fU384 = 0;
    g_U94._fU532 = uParam13;
    g_U8946 = 4;
    return 1;
}

void sub_915(unknown uParam0)
{
    return;
}

void sub_1076()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1408()
{
    if ((g_U94._fU48) || (g_U94._fU52))
    {
        return 0;
    }
    if (g_U94._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_1465())
    {
        return 0;
    }
    if (g_U558 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_1465()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_344() )))
    {
        sub_915( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_915( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U94._fU376)
    {
        sub_915( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U94._fU100) || (g_U94._fU104))
    {
        sub_915( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_344() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_1076() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_1076(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_915( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_1076() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_915( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_915( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_344() )))
    {
        sub_915( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_2780(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        StrCopy( (uParam1^), "BILLY", 32 );
        break;
        case 1:
        StrCopy( (uParam1^), "JIM", 32 );
        break;
        case 2:
        StrCopy( (uParam1^), "STUBBS", 32 );
        break;
        case 3:
        StrCopy( (uParam1^), "ASHLEY", 32 );
        break;
        case 4:
        StrCopy( (uParam1^), "ELIZABETA", 32 );
        break;
        case 5:
        StrCopy( (uParam1^), "RAY", 32 );
        break;
        case 6:
        StrCopy( (uParam1^), "TERRY", 32 );
        break;
        case 7:
        StrCopy( (uParam1^), "CLAY", 32 );
        break;
        case 8:
        StrCopy( (uParam1^), "ANGUS", 32 );
        break;
        case 13:
        StrCopy( (uParam1^), "BRIAN", 32 );
        break;
        case 15:
        StrCopy( (uParam1^), "MALC", 32 );
        break;
        case 18:
        StrCopy( (uParam1^), "BERNIE", 32 );
        break;
        case 12:
        StrCopy( (uParam1^), "LAZLOW", 32 );
        break;
        case 11:
        StrCopy( (uParam1^), "FED", 32 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        break;
    }
    return;
}

void sub_3176(unknown uParam0)
{
    StrCopy( (uParam0^), "JOHNNY", 16 );
    return;
}

void sub_3418(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_3810(unknown uParam0, unknown uParam1, boolean bParam2)
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
    uVar23 = g_U94._fU60;
    if (NOT (COMPARE_STRING( uParam0, "PLACEHOLDER" )))
    {
        if (bParam2)
        {
            return sub_845( uVar23, ref cVar5, uParam1, 0, ref uVar14, ref uVar14, "", 0, bParam2, 1, 1, 0, 0, 0 );
        }
        if ((NOT g_U94._fU368) == 1)
        {
            StrCopy( ref g_U94._fU224[0], uParam1, 16 );
            StrCopy( ref g_U94._fU224[1], uParam0, 16 );
            sub_2780( uVar23, ref g_U94._fU176 );
            g_U94._fU368 = 1;
            return 1;
        }
    }
    return 0;
}

void sub_4034(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if ((uParam2^) < (uParam0^))
    {
        StrCopy( ref (uParam0^)[(uParam2^)], uParam1, 16 );
        (uParam2^)++;
    }
    else
    {
        SCRIPT_ASSERT( "ADD_SPEECH_LABEL - increase the size of your array" );
    }
    return;
}

void sub_4180(unknown uParam0)
{
    StrCopy( ref g_U94._fU176, uParam0, 32 );
    return;
}

int sub_4271()
{
    if (g_U94._fU60 != -1)
    {
        return g_U15862[g_U94._fU60]._fU196._fU24;
    }
    return 6;
}

void sub_4368()
{
    return g_U94._fU424;
}

string sub_4700()
{
    unknown uVar2;

    uVar2 = GET_SPEECH_FOR_EMERGENCY_SERVICE_CALL();
    if (COMPARE_STRING( uVar2, "STEIN" ))
    {
        return "E1ES_12";
    }
    else if (COMPARE_STRING( uVar2, "NORMY" ))
    {
        return "E1ES_61";
    }
    else if (COMPARE_STRING( uVar2, "STHBO" ))
    {
        return "E1ES_7";
    }
    else if (COMPARE_STRING( uVar2, "BOULE" ))
    {
        return "E1ES_2";
    }
    else if (COMPARE_STRING( uVar2, "CASGR" ))
    {
        return "E1ES_29";
    }
    else if (COMPARE_STRING( uVar2, "CASGC" ))
    {
        return "E1ES_35";
    }
    else if (COMPARE_STRING( uVar2, "CHISL" ))
    {
        return "E1ES_9";
    }
    else if (COMPARE_STRING( uVar2, "COISL" ))
    {
        return "E1ES_10";
    }
    else if (COMPARE_STRING( uVar2, "MIDPW" ))
    {
        return "E1ES_52";
    }
    else if (COMPARE_STRING( uVar2, "VASIH" ))
    {
        return "E1ES_51";
    }
    else if (COMPARE_STRING( uVar2, "MIDPA" ))
    {
        return "E1ES_50";
    }
    else if (COMPARE_STRING( uVar2, "NOHOL" ))
    {
        return "E1ES_53";
    }
    else if (COMPARE_STRING( uVar2, "EAHOL" ))
    {
        return "E1ES_54";
    }
    else if (COMPARE_STRING( uVar2, "NORWO" ))
    {
        return "E1ES_56";
    }
    else if (COMPARE_STRING( uVar2, "STARJ" ))
    {
        return "E1ES_46";
    }
    else if (COMPARE_STRING( uVar2, "TMEQU" ))
    {
        return "E1ES_41";
    }
    else if (COMPARE_STRING( uVar2, "WESMI" ))
    {
        return "E1ES_44";
    }
    else if (COMPARE_STRING( uVar2, "PUGAT" ))
    {
        return "E1ES_45";
    }
    else if (COMPARE_STRING( uVar2, "EASON" ))
    {
        return "E1ES_39";
    }
    else if (COMPARE_STRING( uVar2, "THPRES" ))
    {
        return "E1ES_42";
    }
    else if (COMPARE_STRING( uVar2, "HATGA" ))
    {
        return "E1ES_47";
    }
    else if (COMPARE_STRING( uVar2, "LANCE" ))
    {
        return "E1ES_43";
    }
    else if (COMPARE_STRING( uVar2, "SUFFO" ))
    {
        return "E1ES_37";
    }
    else if (COMPARE_STRING( uVar2, "LITAL" ))
    {
        return "E1ES_32";
    }
    else if (COMPARE_STRING( uVar2, "CITH" ))
    {
        return "E1ES_70";
    }
    else if (COMPARE_STRING( uVar2, "CHITO" ))
    {
        return "E1ES_31";
    }
    else if (COMPARE_STRING( uVar2, "LOWEA" ))
    {
        return "E1ES_38";
    }
    else if (COMPARE_STRING( uVar2, "FISSN" ))
    {
        return "E1ES_33";
    }
    else if (COMPARE_STRING( uVar2, "FISSO" ))
    {
        return "E1ES_34";
    }
    else if (COMPARE_STRING( uVar2, "THXCH" ))
    {
        return "E1ES_30";
    }
    else if (COMPARE_STRING( uVar2, "LANCA" ))
    {
        return "E1ES_49";
    }
    else if (COMPARE_STRING( uVar2, "MIDPE" ))
    {
        return "E1ES_48";
    }
    else if (COMPARE_STRING( uVar2, "LEFWO" ))
    {
        return "E1ES_58";
    }
    else if (COMPARE_STRING( uVar2, "ESHOO" ))
    {
        return "E1ES_21";
    }
    else if (COMPARE_STRING( uVar2, "BOAB" ))
    {
        return "E1ES_22";
    }
    else if (COMPARE_STRING( uVar2, "LTBAY" ))
    {
        return "E1ES_3";
    }
    else if (COMPARE_STRING( uVar2, "INSTI" ))
    {
        return "E1ES_6";
    }
    else if (COMPARE_STRING( uVar2, "HAPIN" ))
    {
        return "E1ES_69";
    }
    else if (COMPARE_STRING( uVar2, "WESDY" ))
    {
        return "E1ES_57";
    }
    else if (COMPARE_STRING( uVar2, "ALDCI" ))
    {
        return "E1ES_59";
    }
    else if (COMPARE_STRING( uVar2, "ACTRR" ))
    {
        return "E1ES_62";
    }
    else if (COMPARE_STRING( uVar2, "TUDOR" ))
    {
        return "E1ES_65";
    }
    else if (COMPARE_STRING( uVar2, "PORTU" ))
    {
        return "E1ES_64";
    }
    else if (COMPARE_STRING( uVar2, "ACTIP" ))
    {
        return "E1ES_66";
    }
    else if (COMPARE_STRING( uVar2, "THTRI" ))
    {
        return "E1ES_40";
    }
    else if (COMPARE_STRING( uVar2, "ROTTH" ))
    {
        return "E1ES_11";
    }
    else if (COMPARE_STRING( uVar2, "DOWTW" ))
    {
        return "E1ES_20";
    }
    else if (COMPARE_STRING( uVar2, "FIREP" ))
    {
        return "E1ES_26";
    }
    else if (COMPARE_STRING( uVar2, "HOBEH" ))
    {
        return "E1ES_25";
    }
    else if (COMPARE_STRING( uVar2, "EISLC" ))
    {
        return "E1ES_13";
    }
    else if (COMPARE_STRING( uVar2, "MEADP" ))
    {
        return "E1ES_14";
    }
    else if (COMPARE_STRING( uVar2, "CERHE" ))
    {
        return "E1ES_16";
    }
    else if (COMPARE_STRING( uVar2, "SCHOL" ))
    {
        return "E1ES_18";
    }
    else if (COMPARE_STRING( uVar2, "BEECW" ))
    {
        return "E1ES_19";
    }
    else if (COMPARE_STRING( uVar2, "FRANI" ))
    {
        return "E1ES_23";
    }
    else if (COMPARE_STRING( uVar2, "SUTHS" ))
    {
        return "E1ES_24";
    }
    else if (COMPARE_STRING( uVar2, "FORSI" ))
    {
        return "E1ES_5";
    }
    else if (COMPARE_STRING( uVar2, "NRTGA" ))
    {
        return "E1ES_4";
    }
    else if (COMPARE_STRING( uVar2, "CHAPO" ))
    {
        return "E1ES_8";
    }
    else if (COMPARE_STRING( uVar2, "MEADH" ))
    {
        return "E1ES_15";
    }
    else if (COMPARE_STRING( uVar2, "FIISL" ))
    {
        return "E1ES_26";
    }
    else if (COMPARE_STRING( uVar2, "BERCH" ))
    {
        return "E1ES_60";
    }
    else if (COMPARE_STRING( uVar2, "WILLI" ))
    {
        return "E1ES_17";
    }
    else if (COMPARE_STRING( uVar2, "BEGGA" ))
    {
        return "E1ES_1";
    }
    else if (COMPARE_STRING( uVar2, "OUTL" ))
    {
        return "E1ES_27";
    }
    else if (COMPARE_STRING( uVar2, "ANGBY" ))
    {
        return "E1ES_28";
    }
    else if (COMPARE_STRING( uVar2, "NOROL" ))
    {
        return "E1ES_36";
    }
    else if (COMPARE_STRING( uVar2, "JEFFH" ))
    {
        return "E1ES_55";
    }
    else if (COMPARE_STRING( uVar2, "ACTBY" ))
    {
        return "E1ES_63";
    }
    else if (COMPARE_STRING( uVar2, "FROGT" ))
    {
        return "E1ES_68";
    }
    else if (COMPARE_STRING( uVar2, "BRBRO" ))
    {
        return "E1ES_74";
    }
    else if (COMPARE_STRING( uVar2, "BRALG" ))
    {
        return "E1ES_75";
    }
    else if (COMPARE_STRING( uVar2, "BREBB" ))
    {
        return "E1ES_76";
    }
    else if (COMPARE_STRING( uVar2, "BRDBB" ))
    {
        return "E1ES_77";
    }
    else if (COMPARE_STRING( uVar2, "NOWOB" ))
    {
        return "E1ES_79";
    }
    else if (COMPARE_STRING( uVar2, "HIBRG" ))
    {
        return "E1ES_78";
    }
    else if (COMPARE_STRING( uVar2, "BOTU" ))
    {
        return "E1ES_80";
    }
    else if (COMPARE_STRING( uVar2, "LEAPE" ))
    {
        return "E1ES_81";
    }
    else
    {
        return "E1ES_82";
    };;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    return "E1ES_82";
}

int sub_8168(unknown uParam0, unknown uParam1, boolean bParam2)
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
    uVar14 = g_U94._fU60;
    if (bParam2)
    {
        return sub_845( uVar14, uParam0, uParam1, 0, ref uVar5, ref uVar5, "", 0, bParam2, 1, 1, 0, 0, 0 );
    }
    if (NOT g_U94._fU368)
    {
        StrCopy( ref g_U94._fU224[0], uParam1, 16 );
        g_U94._fU224[1] = {(uParam0^)[0]};
        sub_2780( uVar14, ref g_U94._fU176 );
        g_U94._fU368 = 1;
        return 1;
    }
    return 0;
}

int sub_8384()
{
    if ((g_U94._fU0 == 1007) || (g_U94._fU0 == 1008))
    {
        return 1;
    }
    return 0;
}

void sub_8500()
{
    if (l_U105 == 1)
    {
        sub_8521();
    }
    else if (l_U105 == 2)
    {
        sub_8872();
    }
    else if (l_U105 == 3)
    {
        sub_9264();
    };;;
    return;
}

void sub_8521()
{
    GET_CHAR_COORDINATES( sub_1076(), ref l_U117._fU0, ref l_U117._fU4, ref l_U117._fU8 );
    l_U131 = GET_NAME_OF_ZONE( l_U117._fU0, l_U117._fU4, l_U117._fU8 );
    switch (l_U107)
    {
        case 0:
        GET_CURRENT_BASIC_POLICE_CAR_MODEL( ref l_U264 );
        REQUEST_ANIMS( "missemergencycall" );
        REQUEST_MODEL( l_U267 );
        l_U107 = 1;
        break;
        case 1:
        GET_CURRENT_BASIC_POLICE_CAR_MODEL( ref l_U264 );
        REQUEST_ANIMS( "missemergencycall" );
        REQUEST_MODEL( l_U267 );
        if (HAS_MODEL_LOADED( l_U264 ))
        {
            if (HAVE_ANIMS_LOADED( "missemergencycall" ))
            {
                if (HAS_MODEL_LOADED( l_U267 ))
                {
                    l_U107 = 2;
                }
            }
        }
        break;
        case 2:
        l_U107 = 3;
        break;
        case 3:
        l_U104 = 2;
        break;
    }
    return;
}

void sub_8872()
{
    GET_CHAR_COORDINATES( sub_1076(), ref l_U117._fU0, ref l_U117._fU4, ref l_U117._fU8 );
    l_U131 = GET_NAME_OF_ZONE( l_U117._fU0, l_U117._fU4, l_U117._fU8 );
    switch (l_U107)
    {
        case 0:
        if (g_U9590 == 0)
        {
            PRINT_HELP( "EmergenHelp" );
            g_U9590 = 1;
        }
        REQUEST_MODEL( l_U265 );
        REQUEST_ANIMS( "missemergencycall" );
        REQUEST_MODEL( l_U268 );
        l_U107 = 1;
        break;
        case 1:
        REQUEST_MODEL( l_U265 );
        REQUEST_ANIMS( "missemergencycall" );
        REQUEST_MODEL( l_U268 );
        if (HAS_MODEL_LOADED( l_U265 ))
        {
            if (HAVE_ANIMS_LOADED( "missemergencycall" ))
            {
                if (HAS_MODEL_LOADED( l_U268 ))
                {
                    l_U107 = 2;
                }
            }
        }
        break;
        case 2:
        l_U107 = 3;
        break;
        case 3:
        l_U104 = 2;
        break;
    }
    return;
}

void sub_9264()
{
    GET_CHAR_COORDINATES( sub_1076(), ref l_U117._fU0, ref l_U117._fU4, ref l_U117._fU8 );
    l_U131 = GET_NAME_OF_ZONE( l_U117._fU0, l_U117._fU4, l_U117._fU8 );
    switch (l_U107)
    {
        case 0:
        REQUEST_MODEL( l_U266 );
        REQUEST_ANIMS( "missemergencycall" );
        REQUEST_MODEL( l_U269 );
        l_U107 = 1;
        break;
        case 1:
        REQUEST_MODEL( l_U266 );
        REQUEST_ANIMS( "missemergencycall" );
        REQUEST_MODEL( l_U269 );
        if (HAS_MODEL_LOADED( l_U266 ))
        {
            if (HAVE_ANIMS_LOADED( "missemergencycall" ))
            {
                if (HAS_MODEL_LOADED( l_U269 ))
                {
                    l_U107 = 2;
                }
            }
        }
        break;
        case 2:
        l_U107 = 3;
        break;
        case 3:
        l_U104 = 2;
        break;
    }
    return;
}

void sub_9613()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (DOES_CHAR_EXIST( l_U279 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U279 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( l_U279, sub_1076(), 30.00000000, 30.00000000, 0 ))
            {
                if (IS_CHAR_SHOOTING( sub_1076() ))
                {
                    l_U104 = 6;
                }
            }
            if (IS_CHAR_INJURED( l_U279 ))
            {
                l_U104 = 6;
            }
            if (NOT (IS_CHAR_INJURED( l_U279 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_1076(), l_U279, 150.00000000, 150.00000000, 0 )))
                {
                    if (l_U104 == 3)
                    {
                        l_U104 = 6;
                    }
                }
                if (IS_CHAR_IN_MELEE_COMBAT( l_U279 ))
                {
                    l_U104 = 6;
                }
            }
        }
        else
        {
            l_U104 = 6;
        }
    }
    if (IS_CHAR_GETTING_IN_TO_A_CAR( sub_1076() ))
    {
        GET_CAR_CHAR_IS_USING( sub_1076(), ref l_U278 );
        if (((l_U278 == l_U275) || (l_U278 == l_U276)) || (l_U278 == l_U277))
        {
            l_U104 = 6;
        }
    }
    if (IS_VEH_DRIVEABLE( l_U275 ))
    {
        if (IS_CHAR_IN_CAR( sub_1076(), l_U275 ))
        {
            l_U104 = 6;
        }
    }
    if (DOES_CHAR_EXIST( l_U280 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U280 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( l_U280, sub_1076(), 30.00000000, 30.00000000, 0 ))
            {
                if (IS_CHAR_SHOOTING( sub_1076() ))
                {
                    l_U104 = 6;
                }
            }
            if (IS_CHAR_INJURED( l_U280 ))
            {
                l_U104 = 6;
            }
            if (NOT (IS_CHAR_INJURED( l_U280 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_1076(), l_U280, 150.00000000, 150.00000000, 0 )))
                {
                    if (l_U104 == 4)
                    {
                        l_U104 = 6;
                    }
                }
                if (IS_CHAR_IN_MELEE_COMBAT( l_U280 ))
                {
                    l_U104 = 6;
                }
            }
        }
        else
        {
            l_U104 = 6;
        }
    }
    if (IS_VEH_DRIVEABLE( l_U276 ))
    {
        if (IS_CHAR_IN_CAR( sub_1076(), l_U276 ))
        {
            l_U104 = 6;
        }
    }
    if (DOES_CHAR_EXIST( l_U281 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U281 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( l_U281, sub_1076(), 30.00000000, 30.00000000, 0 ))
            {
                if (IS_CHAR_SHOOTING( sub_1076() ))
                {
                    l_U104 = 6;
                }
            }
            if (IS_CHAR_INJURED( l_U281 ))
            {
                l_U104 = 6;
            }
            if (NOT (IS_CHAR_INJURED( l_U281 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_1076(), l_U281, 150.00000000, 150.00000000, 0 )))
                {
                    if (l_U104 == 5)
                    {
                        l_U104 = 6;
                    }
                }
                if (IS_CHAR_IN_MELEE_COMBAT( l_U281 ))
                {
                    l_U104 = 6;
                }
            }
        }
        else
        {
            l_U104 = 6;
        }
    }
    if (IS_VEH_DRIVEABLE( l_U277 ))
    {
        if (IS_CHAR_IN_CAR( sub_1076(), l_U277 ))
        {
            l_U104 = 6;
        }
    }
    if (DOES_CHAR_EXIST( l_U282 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U282 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U282 )))
            {
                if (IS_CHAR_IN_MELEE_COMBAT( l_U282 ))
                {
                    l_U104 = 6;
                }
            }
            if (IS_CHAR_INJURED( l_U282 ))
            {
                l_U104 = 6;
            }
        }
        else
        {
            l_U104 = 6;
        }
    }
    if (IS_VEH_DRIVEABLE( l_U277 ))
    {
        GET_CAR_COORDINATES( l_U277, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        if ((GET_NUMBER_OF_FIRES_IN_RANGE( uVar2._fU0, uVar2._fU4, uVar2._fU8, 20.00000000 )) > 0)
        {
            l_U104 = 6;
        }
    }
    if (NOT HAS_CUTSCENE_FINISHED())
    {
        sub_10688();
        l_U104 = 6;
    }
    if (((COUNT_SCRIPT_CAMS_BY_TYPE_AND_OR_STATE( -1, 1, 1 )) > 0) AND (NOT (sub_10957( sub_1076() ))))
    {
        sub_10688();
        l_U104 = 6;
    }
    if (l_U104 > 0)
    {
        if (g_U9553 == 1)
        {
            sub_10688();
            g_U9553 = 0;
            l_U104 = 6;
        }
    }
    sub_11275();
    return;
}

void sub_10688()
{
    if (NOT (IS_CHAR_INJURED( l_U279 )))
    {
        DELETE_CHAR( ref l_U279 );
    }
    if (NOT (IS_CHAR_INJURED( l_U280 )))
    {
        DELETE_CHAR( ref l_U280 );
    }
    if (NOT (IS_CHAR_INJURED( l_U281 )))
    {
        DELETE_CHAR( ref l_U281 );
    }
    if (NOT (IS_CHAR_INJURED( l_U282 )))
    {
        DELETE_CHAR( ref l_U282 );
    }
    if (DOES_VEHICLE_EXIST( l_U275 ))
    {
        DELETE_CAR( ref l_U275 );
    }
    if (DOES_VEHICLE_EXIST( l_U276 ))
    {
        DELETE_CAR( ref l_U276 );
    }
    if (DOES_VEHICLE_EXIST( l_U277 ))
    {
        DELETE_CAR( ref l_U277 );
    }
    if (DOES_GROUP_EXIST( l_U286 ))
    {
        REMOVE_GROUP( l_U286 );
    }
    return;
}

int sub_10957(int iParam0)
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
                if (sub_11021( uVar3 ))
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

int sub_11021(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2784))
    {
        return 1;
    }
    return 0;
}

void sub_11275()
{
    if (sub_506( "911" ))
    {
        l_U104 = 6;
    }
    return;
}

void sub_11322()
{
    GET_CHAR_COORDINATES( sub_1076(), ref l_U117._fU0, ref l_U117._fU4, ref l_U117._fU8 );
    GET_NTH_CLOSEST_CAR_NODE( l_U117._fU0, l_U117._fU4, l_U117._fU8, 40, ref l_U123._fU0, ref l_U123._fU4, ref l_U123._fU8 );
    GET_NTH_CLOSEST_CAR_NODE( l_U117._fU0, l_U117._fU4, l_U117._fU8, 5, ref l_U120._fU0, ref l_U120._fU4, ref l_U120._fU8 );
    if (l_U141 > 15)
    {
        l_U104 = 6;
    }
    if (l_U105 == 1)
    {
        if (CREATE_EMERGENCY_SERVICES_CAR_RETURN_DRIVER( l_U264, l_U120._fU0, l_U120._fU4, l_U120._fU8, ref l_U275, ref l_U282, ref l_U279 ))
        {
            if (IS_VEH_DRIVEABLE( l_U275 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U282 )))
                {
                    SET_CHAR_AS_MISSION_CHAR( l_U282 );
                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U282, 0 );
                    TASK_CAR_DRIVE_TO_COORD( l_U282, l_U275, l_U120._fU0, l_U120._fU4, l_U120._fU8, 8.00000000, 0, l_U264, 2, 5.00000000, 20 );
                    SWITCH_CAR_SIREN( l_U275, 1 );
                    SET_INFORM_RESPECTED_FRIENDS( l_U282, 999, 999 );
                    FORCE_CAR_LIGHTS( l_U275, 2 );
                    SET_HAS_BEEN_OWNED_BY_PLAYER( l_U275, 0 );
                    LOCK_CAR_DOORS( l_U275, 1 );
                    sub_11726();
                }
                if (NOT (IS_CHAR_INJURED( l_U279 )))
                {
                    SET_CHAR_AS_MISSION_CHAR( l_U279 );
                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U279, 0 );
                    SET_INFORM_RESPECTED_FRIENDS( l_U279, 999, 999 );
                }
            }
            GET_GAME_TIMER( ref l_U135 );
            l_U104 = 3;
        }
        else
        {
            WAIT( 300 );
            l_U141++;
        }
    }
    else if (l_U105 == 2)
    {
        if (CREATE_EMERGENCY_SERVICES_CAR_RETURN_DRIVER( l_U265, l_U120._fU0, l_U120._fU4, l_U120._fU8, ref l_U276, ref l_U282, ref l_U280 ))
        {
            if (IS_VEH_DRIVEABLE( l_U276 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U282 )))
                {
                    SET_CHAR_AS_MISSION_CHAR( l_U282 );
                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U282, 0 );
                    TASK_CAR_DRIVE_TO_COORD( l_U282, l_U276, l_U120._fU0, l_U120._fU4, l_U120._fU8, 8.00000000, 0, l_U265, 2, 5.00000000, 20 );
                    SWITCH_CAR_SIREN( l_U276, 1 );
                    FORCE_CAR_LIGHTS( l_U276, 2 );
                    SET_HAS_BEEN_OWNED_BY_PLAYER( l_U276, 0 );
                    LOCK_CAR_DOORS( l_U276, 1 );
                    sub_11726();
                }
                if (NOT (IS_CHAR_INJURED( l_U280 )))
                {
                    SET_CHAR_AS_MISSION_CHAR( l_U280 );
                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U280, 0 );
                }
            }
            GET_GAME_TIMER( ref l_U135 );
            l_U104 = 4;
        }
        else
        {
            WAIT( 300 );
            l_U141++;
        }
    }
    else if (l_U105 == 3)
    {
        if (CREATE_EMERGENCY_SERVICES_CAR_RETURN_DRIVER( l_U266, l_U120._fU0, l_U120._fU4, l_U120._fU8, ref l_U277, ref l_U282, ref l_U281 ))
        {
            if (IS_VEH_DRIVEABLE( l_U277 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U282 )))
                {
                    SET_CHAR_AS_MISSION_CHAR( l_U282 );
                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U282, 0 );
                    TASK_CAR_DRIVE_TO_COORD( l_U282, l_U277, l_U120._fU0, l_U120._fU4, l_U120._fU8, 8.00000000, 0, l_U266, 2, 5.00000000, 20 );
                    SWITCH_CAR_SIREN( l_U277, 1 );
                    FORCE_CAR_LIGHTS( l_U277, 2 );
                    SET_HAS_BEEN_OWNED_BY_PLAYER( l_U277, 0 );
                    LOCK_CAR_DOORS( l_U277, 1 );
                    sub_11726();
                }
                if (NOT (IS_CHAR_INJURED( l_U281 )))
                {
                    SET_CHAR_AS_MISSION_CHAR( l_U281 );
                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U281, 0 );
                }
            }
            GET_GAME_TIMER( ref l_U135 );
            l_U104 = 5;
        }
        else
        {
            WAIT( 300 );
            l_U141++;
        }
    };;;
    return;
}

void sub_11726()
{
    if (NOT (IS_CHAR_INJURED( l_U282 )))
    {
        if (DOES_GROUP_EXIST( l_U286 ))
        {
            REMOVE_GROUP( l_U286 );
        }
        CREATE_GROUP( 0, ref l_U286, 1 );
        SET_GROUP_LEADER( l_U286, l_U282 );
        SET_GROUP_FOLLOW_STATUS( l_U286, 1 );
    }
    return;
}

void sub_12611()
{
    if (NOT (IS_CHAR_INJURED( l_U279 )))
    {
        if (NOT (IS_CHAR_INJURED( l_U282 )))
        {
            if (NOT (IS_CAR_DEAD( l_U275 )))
            {
                if (IS_VEH_DRIVEABLE( l_U275 ))
                {
                    switch (l_U106)
                    {
                        case 0:
                        GET_GAME_TIMER( ref l_U136 );
                        l_U137 = l_U136 - l_U135;
                        if (l_U137 > 100000)
                        {
                            sub_12802();
                        }
                        else if (LOCATE_CAR_2D( l_U275, l_U120._fU0, l_U120._fU4, 10.00000000, 10.00000000, 0 ))
                        {
                            TASK_CAR_MISSION( l_U282, l_U275, 0, 5, 1.00000000, 2, 5, 20 );
                            l_U106 = 1;
                        }
                        break;
                        case 1:
                        GET_CAR_SPEED( l_U275, ref l_U130 );
                        if (l_U130 < 2)
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U275, 0.00000000, 4.00000000, 0.00000000, ref l_U126._fU0, ref l_U126._fU4, ref l_U126._fU8 );
                            TASK_LEAVE_CAR( l_U279, l_U275 );
                            l_U106 = 2;
                        }
                        break;
                        case 2:
                        if (NOT (IS_CHAR_IN_CAR( l_U279, l_U275 )))
                        {
                            SAY_AMBIENT_SPEECH( l_U279, "EMERG_ARRIVE_AT_SCENE", 1, 1, 2 );
                            OPEN_SEQUENCE_TASK( ref l_U287 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U126._fU0, l_U126._fU4, l_U126._fU8, 2, -2, 2.00000000 );
                            TASK_PLAY_ANIM( 0, "idle_lookaround_b", "missemergencycall", 8.00000000, 0, 0, 0, 0, -2 );
                            TASK_PLAY_ANIM( 0, "idle_adjust_hat", "missemergencycall", 8.00000000, 0, 0, 0, 0, -2 );
                            CLOSE_SEQUENCE_TASK( l_U287 );
                            TASK_PERFORM_SEQUENCE( l_U279, l_U287 );
                            CLEAR_SEQUENCE_TASK( l_U287 );
                            l_U106 = 3;
                        }
                        break;
                        case 3:
                        GET_SCRIPT_TASK_STATUS( l_U279, 29, ref l_U273 );
                        if (l_U273 == 7)
                        {
                            l_U106 = 4;
                        }
                        break;
                        case 4:
                        SAY_AMBIENT_SPEECH( l_U279, "EMERG_PRANK_CALL", 1, 1, 0 );
                        l_U273 = 0;
                        l_U106 = 5;
                        break;
                        case 5:
                        GET_SCRIPT_TASK_STATUS( l_U279, 80, ref l_U273 );
                        if (l_U273 == 7)
                        {
                            SWITCH_CAR_SIREN( l_U275, 0 );
                            SET_NEXT_DESIRED_MOVE_STATE( 2 );
                            TASK_ENTER_CAR_AS_PASSENGER( l_U279, l_U275, -2, 0 );
                            GET_GAME_TIMER( ref l_U135 );
                            l_U106 = 6;
                        }
                        break;
                        case 6:
                        if (IS_CHAR_IN_CAR( l_U279, l_U275 ))
                        {
                            SET_CHAR_KEEP_TASK( l_U279, 1 );
                            TASK_STAND_STILL( l_U279, -2 );
                            SET_CHAR_KEEP_TASK( l_U282, 1 );
                            TASK_CAR_DRIVE_WANDER( l_U282, l_U275, 10, 6 );
                            l_U104 = 6;
                        }
                        else
                        {
                            GET_GAME_TIMER( ref l_U136 );
                            l_U137 = l_U136 - l_U135;
                            if (l_U137 > 50000)
                            {
                                if (NOT (IS_GROUP_MEMBER( l_U279, l_U286 )))
                                {
                                    SET_GROUP_MEMBER( l_U286, l_U279 );
                                }
                                l_U104 = 6;
                            }
                        }
                        break;
                    }
                }
            }
        }
    }
    return;
}

void sub_12802()
{
    l_U106 = 0;
    if (NOT (IS_CHAR_DEAD( l_U279 )))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U279 );
        l_U279 = nil;
    }
    if (NOT (IS_CHAR_DEAD( l_U280 )))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U280 );
        l_U280 = nil;
    }
    if (NOT (IS_CHAR_DEAD( l_U281 )))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U281 );
        l_U281 = nil;
    }
    if (NOT (IS_CHAR_DEAD( l_U282 )))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U282 );
        l_U282 = nil;
    }
    if (IS_VEH_DRIVEABLE( l_U275 ))
    {
        SWITCH_CAR_SIREN( l_U275, 0 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U275 );
        l_U275 = nil;
    }
    if (IS_VEH_DRIVEABLE( l_U276 ))
    {
        SWITCH_CAR_SIREN( l_U276, 0 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U276 );
        l_U276 = nil;
    }
    if (IS_VEH_DRIVEABLE( l_U277 ))
    {
        SWITCH_CAR_SIREN( l_U277, 0 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U277 );
        l_U277 = nil;
    }
    l_U104 = 2;
    return;
}

void sub_13969()
{
    if (NOT (IS_CHAR_INJURED( l_U280 )))
    {
        if (NOT (IS_CHAR_INJURED( l_U282 )))
        {
            if (NOT (IS_CAR_DEAD( l_U276 )))
            {
                if (IS_VEH_DRIVEABLE( l_U276 ))
                {
                    sub_14050( 2 );
                    switch (l_U106)
                    {
                        case 0:
                        GET_GAME_TIMER( ref l_U136 );
                        l_U137 = l_U136 - l_U135;
                        if (l_U137 > 100000)
                        {
                            sub_12802();
                        }
                        else if (LOCATE_CAR_2D( l_U276, l_U120._fU0, l_U120._fU4, 10.00000000, 10.00000000, 0 ))
                        {
                            TASK_CAR_MISSION( l_U282, l_U276, 0, 5, 1.00000000, 2, 5, 20 );
                            l_U106 = 1;
                        }
                        break;
                        case 1:
                        GET_CAR_SPEED( l_U276, ref l_U130 );
                        if (l_U130 < 2)
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U276, 0.00000000, 4.00000000, 0.00000000, ref l_U126._fU0, ref l_U126._fU4, ref l_U126._fU8 );
                            TASK_LEAVE_CAR( l_U280, l_U276 );
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U132 );
                            l_U106 = 2;
                        }
                        break;
                        case 2:
                        if (NOT (IS_CHAR_IN_CAR( l_U280, l_U276 )))
                        {
                            SAY_AMBIENT_SPEECH( l_U280, "EMERG_ARRIVE_AT_SCENE", 1, 1, 2 );
                            OPEN_SEQUENCE_TASK( ref l_U287 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U126._fU0, l_U126._fU4, l_U126._fU8, 2, -2, 2.00000000 );
                            TASK_PLAY_ANIM( 0, "idle_lookaround_b", "missemergencycall", 8.00000000, 0, 0, 0, 0, -2 );
                            TASK_PLAY_ANIM( 0, "idle_adjust_hat", "missemergencycall", 8.00000000, 0, 0, 0, 0, -2 );
                            CLOSE_SEQUENCE_TASK( l_U287 );
                            TASK_PERFORM_SEQUENCE( l_U280, l_U287 );
                            CLEAR_SEQUENCE_TASK( l_U287 );
                            l_U106 = 3;
                        }
                        break;
                        case 3:
                        GET_SCRIPT_TASK_STATUS( l_U280, 29, ref l_U273 );
                        if (l_U273 == 7)
                        {
                            l_U106 = 4;
                        }
                        break;
                        case 4:
                        SAY_AMBIENT_SPEECH( l_U280, "EMERG_PRANK_CALL", 1, 1, 0 );
                        l_U273 = 0;
                        l_U106 = 5;
                        break;
                        case 5:
                        SWITCH_CAR_SIREN( l_U276, 0 );
                        SET_NEXT_DESIRED_MOVE_STATE( 2 );
                        TASK_ENTER_CAR_AS_PASSENGER( l_U280, l_U276, -2, 0 );
                        GET_GAME_TIMER( ref l_U135 );
                        l_U106 = 6;
                        break;
                        case 6:
                        if (IS_CHAR_IN_CAR( l_U280, l_U276 ))
                        {
                            SET_CHAR_KEEP_TASK( l_U280, 1 );
                            TASK_STAND_STILL( l_U280, -2 );
                            SET_CHAR_KEEP_TASK( l_U282, 1 );
                            TASK_CAR_DRIVE_WANDER( l_U282, l_U276, 10, 6 );
                            l_U104 = 6;
                        }
                        else
                        {
                            GET_GAME_TIMER( ref l_U136 );
                            l_U137 = l_U136 - l_U135;
                            if (l_U137 > 50000)
                            {
                                if (NOT (IS_GROUP_MEMBER( l_U280, l_U286 )))
                                {
                                    SET_GROUP_MEMBER( l_U286, l_U280 );
                                }
                                l_U104 = 6;
                            }
                        }
                        break;
                        case 7: break;
                    }
                }
            }
        }
    }
    return;
}

void sub_14050(int iParam0)
{
    if (iParam0 == 2)
    {
        if (IS_VEH_DRIVEABLE( l_U276 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U280 )))
            {
                if (l_U108 > 0)
                {
                    if (IS_CHAR_IN_ANY_CAR( sub_1076() ))
                    {
                        CLEAR_CHAR_TASKS( l_U280 );
                        l_U108 = 6;
                    }
                }
                switch (l_U108)
                {
                    case 0:
                    if (sub_14226())
                    {
                        CLEAR_CHAR_TASKS( l_U280 );
                        PRINT_HELP_WITH_NUMBER( "emerg_cost", sub_14339() );
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U132 );
                        l_U106 = 7;
                        l_U108 = 1;
                    }
                    break;
                    case 1:
                    if (NOT (IS_GROUP_MEMBER( l_U280, sub_14488() )))
                    {
                        SAY_AMBIENT_SPEECH( l_U280, "EMERG_MEDIC_SEES_P", 1, 1, 0 );
                        SET_GROUP_SEPARATION_RANGE( sub_14488(), 30.00000000 );
                        SET_GROUP_MEMBER( sub_14488(), l_U280 );
                        SET_GROUP_FORMATION( sub_14488(), 1 );
                        SET_GROUP_FORMATION_SPACING( sub_14488(), 0.50000000 );
                        GET_GAME_TIMER( ref l_U114 );
                        l_U108 = 2;
                    }
                    break;
                    case 2:
                    GET_GAME_TIMER( ref l_U115 );
                    l_U116 = l_U115 - l_U114;
                    if (sub_14691() == 0)
                    {
                        if (LOCATE_CHAR_ON_FOOT_CHAR_3D( l_U280, sub_1076(), 1.50000000, 1.50000000, 10.00000000, 0 ))
                        {
                            if (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_344() ))
                            {
                                if (IS_SCORE_GREATER( sub_344(), sub_14339() ))
                                {
                                    SAY_AMBIENT_SPEECH( l_U280, "EMERG_MEDIC_HEALS_P", 1, 1, 0 );
                                    SET_PLAYER_CONTROL( sub_344(), 0 );
                                    l_U108 = 3;
                                }
                                else if (NOT (IS_GROUP_MEMBER( l_U280, sub_14488() )))
                                {
                                    l_U108 = 6;
                                }
                                if (l_U116 > 50000)
                                {
                                    if (IS_GROUP_MEMBER( l_U280, sub_14488() ))
                                    {
                                        REMOVE_CHAR_FROM_GROUP( l_U280 );
                                    }
                                    l_U108 = 6;
                                }
                            }
                        }
                        else if (NOT (IS_GROUP_MEMBER( l_U280, sub_14488() )))
                        {
                            l_U108 = 6;
                        }
                        if (l_U116 > 50000)
                        {
                            if (IS_GROUP_MEMBER( l_U280, sub_14488() ))
                            {
                                REMOVE_CHAR_FROM_GROUP( l_U280 );
                            }
                            l_U108 = 6;
                        }
                    }
                    else
                    {
                        CLEAR_HELP();
                        PRINT_HELP( "emerg_spook" );
                        if (IS_GROUP_MEMBER( l_U280, sub_14488() ))
                        {
                            REMOVE_CHAR_FROM_GROUP( l_U280 );
                        }
                        l_U108 = 6;
                    }
                    break;
                    case 3:
                    TASK_TURN_CHAR_TO_FACE_CHAR( sub_1076(), l_U280 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U280, sub_1076() );
                    l_U108 = 4;
                    break;
                    case 4:
                    GET_SCRIPT_TASK_STATUS( sub_1076(), 34, ref l_U273 );
                    if (l_U273 == 7)
                    {
                        l_U108 = 5;
                    }
                    break;
                    case 5:
                    ADD_SCORE( sub_344(), -sub_14339() );
                    INCREMENT_INT_STAT( 102, sub_14339() );
                    SET_CHAR_MONEY( l_U280, sub_14339() );
                    SET_CHAR_HEALTH( sub_1076(), sub_15361() );
                    sub_15423();
                    TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U280, "Medic_health_inject", "Missemergencycall", 8.00000000, 0, 1, 1, 0, -2 );
                    TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( sub_1076(), "player_health_recieve", "Missemergencycall", 8.00000000, 0, 1, 1, 0, -2 );
                    l_U108 = 6;
                    break;
                    case 6:
                    if (NOT (IS_CHAR_PLAYING_ANIM( l_U280, "Missemergencycall", "Medic_health_inject" )))
                    {
                        SET_PLAYER_CONTROL( sub_344(), 1 );
                        if (IS_GROUP_MEMBER( l_U280, sub_14488() ))
                        {
                            REMOVE_CHAR_FROM_GROUP( l_U280 );
                        }
                        l_U106 = 5;
                        l_U108 = 7;
                    }
                    break;
                    case 7: break;
                }
            }
        }
    }
    return;
}

int sub_14226()
{
    if (NOT (IS_CHAR_INJURED( l_U280 )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_1076() )))
        {
            GET_CHAR_HEALTH( sub_1076(), ref l_U113 );
            if (LOCATE_CHAR_ON_FOOT_CHAR_3D( l_U280, sub_1076(), 40.00000000, 40.00000000, 40.00000000, 0 ))
            {
                if ((l_U113 < 175) AND (IS_SCORE_GREATER( sub_344(), sub_14339() )))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_14339()
{
    int iVar2;

    GET_CHAR_HEALTH( sub_1076(), ref iVar2 );
    return (ProtectedGet(l_U288) - (iVar2 * 5)) + ProtectedGet(l_U289);
}

void sub_14488()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_14691()
{
    if (NOT (IS_CHAR_INJURED( l_U280 )))
    {
        if (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_344(), l_U280 ))
        {
            return 1;
        }
        if (IS_PLAYER_TARGETTING_CHAR( sub_344(), l_U280 ))
        {
            return 1;
        }
        if (IS_CHAR_IN_ANY_CAR( sub_1076() ))
        {
            return 1;
        }
        if (IS_CHAR_IN_MELEE_COMBAT( sub_1076() ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_15361()
{
    int Result;

    if (NOT (IS_CHAR_DEAD( sub_1076() )))
    {
        GET_CHAR_HEALTH( sub_1076(), ref Result );
        Result = 200;
    }
    return Result;
}

void sub_15423()
{
    if (NOT (IS_CHAR_DEAD( sub_1076() )))
    {
        RESET_VISIBLE_PED_DAMAGE( sub_1076() );
    }
    return;
}

void sub_16709()
{
    if (NOT (IS_CHAR_INJURED( l_U281 )))
    {
        if (NOT (IS_CHAR_INJURED( l_U282 )))
        {
            if (NOT (IS_CAR_DEAD( l_U277 )))
            {
                if (IS_VEH_DRIVEABLE( l_U277 ))
                {
                    switch (l_U106)
                    {
                        case 0:
                        GET_GAME_TIMER( ref l_U136 );
                        l_U137 = l_U136 - l_U135;
                        if (l_U137 > 100000)
                        {
                            sub_12802();
                        }
                        else if (LOCATE_CAR_2D( l_U277, l_U120._fU0, l_U120._fU4, 10.00000000, 10.00000000, 0 ))
                        {
                            TASK_CAR_MISSION( l_U282, l_U277, 0, 5, 1.00000000, 2, 5, 20 );
                            l_U106 = 1;
                        }
                        break;
                        case 1:
                        GET_CAR_SPEED( l_U277, ref l_U130 );
                        if (l_U130 < 2)
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U277, 0.00000000, 7.00000000, 0.00000000, ref l_U126._fU0, ref l_U126._fU4, ref l_U126._fU8 );
                            TASK_LEAVE_CAR( l_U281, l_U277 );
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U132 );
                            l_U106 = 2;
                        }
                        break;
                        case 2:
                        if (NOT (IS_CHAR_IN_CAR( l_U281, l_U277 )))
                        {
                            SAY_AMBIENT_SPEECH( l_U281, "EMERG_ARRIVE_AT_SCENE", 1, 1, 2 );
                            OPEN_SEQUENCE_TASK( ref l_U287 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U126._fU0, l_U126._fU4, l_U126._fU8, 2, -2, 2.00000000 );
                            TASK_PLAY_ANIM( 0, "idle_lookaround_b", "missemergencycall", 8.00000000, 0, 0, 0, 0, -2 );
                            TASK_PLAY_ANIM( 0, "idle_adjust_hat", "missemergencycall", 8.00000000, 0, 0, 0, 0, -2 );
                            CLOSE_SEQUENCE_TASK( l_U287 );
                            TASK_PERFORM_SEQUENCE( l_U281, l_U287 );
                            CLEAR_SEQUENCE_TASK( l_U287 );
                            l_U106 = 3;
                        }
                        break;
                        case 3:
                        GET_SCRIPT_TASK_STATUS( l_U281, 29, ref l_U273 );
                        if (l_U273 == 7)
                        {
                            l_U106 = 4;
                        }
                        break;
                        case 4:
                        SAY_AMBIENT_SPEECH( l_U281, "EMERG_PRANK_CALL", 1, 1, 0 );
                        l_U273 = 0;
                        l_U106 = 5;
                        break;
                        case 5:
                        SWITCH_CAR_SIREN( l_U277, 0 );
                        SET_NEXT_DESIRED_MOVE_STATE( 2 );
                        TASK_ENTER_CAR_AS_PASSENGER( l_U281, l_U277, -2, 0 );
                        GET_GAME_TIMER( ref l_U135 );
                        l_U106 = 6;
                        break;
                        case 6:
                        if (IS_CHAR_IN_CAR( l_U281, l_U277 ))
                        {
                            SET_CHAR_KEEP_TASK( l_U281, 1 );
                            TASK_STAND_STILL( l_U281, -2 );
                            SET_CHAR_KEEP_TASK( l_U282, 1 );
                            TASK_CAR_DRIVE_WANDER( l_U282, l_U277, 10, 6 );
                            l_U104 = 6;
                        }
                        else
                        {
                            GET_GAME_TIMER( ref l_U136 );
                            l_U137 = l_U136 - l_U135;
                            if (l_U137 > 50000)
                            {
                                if (NOT (IS_GROUP_MEMBER( l_U281, l_U286 )))
                                {
                                    SET_GROUP_MEMBER( l_U286, l_U281 );
                                }
                                l_U104 = 6;
                            }
                        }
                        break;
                    }
                }
            }
        }
    }
    return;
}

void sub_17732()
{
    if (NOT (IS_CHAR_INJURED( l_U279 )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( l_U279 )))
        {
            if (NOT (IS_CAR_DEAD( l_U275 )))
            {
                FORCE_CAR_LIGHTS( l_U275, 1 );
            }
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U279 );
        l_U279 = nil;
    }
    if (NOT (IS_CHAR_INJURED( l_U280 )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( l_U280 )))
        {
            if (IS_GROUP_MEMBER( l_U280, sub_14488() ))
            {
                REMOVE_CHAR_FROM_GROUP( l_U280 );
            }
            if (NOT (IS_CAR_DEAD( l_U276 )))
            {
                FORCE_CAR_LIGHTS( l_U276, 1 );
            }
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U280 );
        l_U280 = nil;
    }
    if (NOT (IS_CHAR_INJURED( l_U281 )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( l_U281 )))
        {
            if (NOT (IS_CAR_DEAD( l_U277 )))
            {
                FORCE_CAR_LIGHTS( l_U277, 1 );
            }
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U281 );
        l_U281 = nil;
    }
    if (NOT (IS_CHAR_INJURED( l_U282 )))
    {
        CLEAR_CHAR_TASKS( l_U282 );
        SET_CHAR_KEEP_TASK( l_U282, 1 );
        if (l_U104 == 3)
        {
            if (IS_VEH_DRIVEABLE( l_U275 ))
            {
                TASK_CAR_DRIVE_WANDER( l_U282, l_U275, 10, 6 );
            }
        }
        if (l_U104 == 4)
        {
            if (IS_VEH_DRIVEABLE( l_U276 ))
            {
                TASK_CAR_DRIVE_WANDER( l_U282, l_U276, 10, 6 );
            }
        }
        if (l_U104 == 5)
        {
            if (IS_VEH_DRIVEABLE( l_U277 ))
            {
                TASK_CAR_DRIVE_WANDER( l_U282, l_U277, 10, 6 );
            }
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U282 );
        l_U282 = nil;
    }
    if (IS_VEH_DRIVEABLE( l_U275 ))
    {
        SWITCH_CAR_SIREN( l_U275, 0 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U275 );
        l_U275 = nil;
    }
    if (IS_VEH_DRIVEABLE( l_U276 ))
    {
        SWITCH_CAR_SIREN( l_U276, 0 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U276 );
        l_U276 = nil;
    }
    if (IS_VEH_DRIVEABLE( l_U277 ))
    {
        SWITCH_CAR_SIREN( l_U277, 0 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U277 );
        l_U277 = nil;
    }
    if (HAS_MODEL_LOADED( l_U267 ))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U267 );
    }
    if (HAS_MODEL_LOADED( l_U268 ))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U268 );
    }
    if (HAS_MODEL_LOADED( l_U269 ))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U269 );
    }
    if (HAS_MODEL_LOADED( l_U264 ))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U264 );
    }
    if (HAS_MODEL_LOADED( l_U265 ))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U265 );
    }
    if (HAS_MODEL_LOADED( l_U266 ))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U266 );
    }
    if (DOES_GROUP_EXIST( l_U286 ))
    {
        REMOVE_GROUP( l_U286 );
    }
    return;
}

void sub_18593()
{
    if (l_U105 == 1)
    {
        if (HAVE_ANIMS_LOADED( "missemergencycall" ))
        {
            REMOVE_ANIMS( "missemergencycall" );
        }
        if (HAS_MODEL_LOADED( l_U267 ))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U267 );
        }
    }
    else if (l_U105 == 2)
    {
        if (HAVE_ANIMS_LOADED( "missemergencycall" ))
        {
            REMOVE_ANIMS( "missemergencycall" );
        }
        if (HAS_MODEL_LOADED( l_U268 ))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U268 );
        }
    }
    else if (l_U105 == 3)
    {
        if (HAVE_ANIMS_LOADED( "missemergencycall" ))
        {
            REMOVE_ANIMS( "missemergencycall" );
        }
        if (HAS_MODEL_LOADED( l_U269 ))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U269 );
        }
    };;;
    return;
}

void sub_18920()
{
    int I;

    for ( I = 0; I <= 19; I++ )
    {
        CLEAR_TEXT_LABEL( ref l_U178[I] );
    }
    l_U110 = 0;
    l_U111 = 0;
    l_U141 = 0;
    l_U134 = 1;
    l_U177 = 0;
    l_U109 = 0;
    l_U105 = 0;
    l_U106 = 0;
    l_U107 = 0;
    l_U108 = 0;
    l_U104 = 0;
    return;
}
