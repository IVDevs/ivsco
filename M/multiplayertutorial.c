void main()
{
    unknown uVar2;

    l_U0 = -1;
    l_U1 = sub_13();
    l_U2 = sub_34();
    l_U3 = 1000;
    l_U4 = 1000;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    sub_74();
    while (true)
    {
        WAIT( 0 );
        if (sub_569() == 1)
        {
            TERMINATE_THIS_SCRIPT();
        }
        if (NOT GET_MISSION_FLAG())
        {
            if (g_U9064 == 0)
            {
                if ((NOT sub_674()) || (sub_709() == 1002))
                {
                    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_01" ))
                    {
                        l_U6[25] = 1;
                        CLEAR_HELP();
                    }
                }
                if ((g_U555 == 0) || (g_U555 == 2))
                {
                    switch (g_U91._fU0)
                    {
                        case 1011:
                        if (g_U91._fU428 == 1047)
                        {
                            sub_891( "Multi_01" );
                            sub_2963( 25 );
                            g_U9070++;
                            if (l_U6[25] == 1)
                            {
                                g_U9065 = 1;
                                if (g_U9070 > 2)
                                {
                                    CLEAR_HELP();
                                    PRINT_HELP( "Multi_01" );
                                    WAIT( 0 );
                                    l_U6[25] = 0;
                                }
                            }
                            else
                            {
                                g_U9065 = 0;
                            }
                            if (sub_3539( 25 ))
                            {
                                ;
                            }
                        }
                        else
                        {
                            sub_3682( "Multi_01" );
                            l_U6[25] = 1;
                        }
                        break;
                        case 1047:
                        switch (g_U91._fU428)
                        {
                            case 0:
                            if (# -NULL-0xc27c84())
                            {
                                sub_891( "Multi_02" );
                            }
                            else
                            {
                                sub_891( "Multi_15" );
                            }
                            sub_2963( 0 );
                            g_U9070++;
                            if (l_U6[0] == 1)
                            {
                                g_U9065 = 1;
                                if (g_U9070 > 2)
                                {
                                    CLEAR_HELP();
                                    if (# -NULL-0xc27c84())
                                    {
                                        PRINT_HELP( "Multi_02" );
                                    }
                                    else
                                    {
                                        PRINT_HELP( "Multi_15" );
                                    }
                                    WAIT( 0 );
                                    l_U6[0] = 0;
                                }
                            }
                            else
                            {
                                g_U9065 = 0;
                            }
                            if (sub_3539( 0 ))
                            {
                                ;
                            }
                            break;
                            case 1:
                            sub_2963( 1 );
                            if (# -NULL-0xc27c84())
                            {
                                sub_891( "Multi_03a" );
                            }
                            else if (# -NULL-0xc27bfa())
                            {
                                sub_891( "Multi_03c" );
                            }
                            else
                            {
                                sub_891( "Multi_03b" );
                            }
                            g_U9070++;
                            if (# -NULL-0xc27c84())
                            {
                                if (l_U6[1] == 1)
                                {
                                    g_U9065 = 1;
                                    if (g_U9070 > 2)
                                    {
                                        CLEAR_HELP();
                                        PRINT_HELP( "Multi_03a" );
                                        WAIT( 0 );
                                        l_U6[1] = 0;
                                    }
                                }
                                else
                                {
                                    g_U9065 = 0;
                                }
                            }
                            else if (# -NULL-0xc27bfa())
                            {
                                if (l_U6[1] == 1)
                                {
                                    g_U9065 = 1;
                                    if (g_U9070 > 2)
                                    {
                                        CLEAR_HELP();
                                        PRINT_HELP( "Multi_03c" );
                                        WAIT( 0 );
                                        l_U6[1] = 0;
                                    }
                                }
                                else
                                {
                                    g_U9065 = 0;
                                }
                            }
                            else if (l_U6[1] == 1)
                            {
                                g_U9065 = 1;
                                if (g_U9070 > 2)
                                {
                                    CLEAR_HELP();
                                    PRINT_HELP( "Multi_03b" );
                                    WAIT( 0 );
                                    l_U6[1] = 0;
                                }
                            }
                            else
                            {
                                g_U9065 = 0;
                            };;;
                            if (sub_3539( 1 ))
                            {
                                ;
                            }
                            break;
                            case 2:
                            sub_2963( 2 );
                            sub_891( "Multi_04" );
                            g_U9070++;
                            if (l_U6[2] == 1)
                            {
                                g_U9065 = 1;
                                if (g_U9070 > 2)
                                {
                                    CLEAR_HELP();
                                    PRINT_HELP( "Multi_04" );
                                    WAIT( 0 );
                                    l_U6[2] = 0;
                                }
                            }
                            else
                            {
                                g_U9065 = 0;
                            }
                            if (sub_3539( 2 ))
                            {
                                ;
                            }
                            break;
                            case 3:
                            sub_2963( 26 );
                            sub_891( "Multi_11" );
                            g_U9070++;
                            if (l_U6[26] == 1)
                            {
                                g_U9065 = 1;
                                if (g_U9070 > 2)
                                {
                                    CLEAR_HELP();
                                    PRINT_HELP( "Multi_11" );
                                    WAIT( 0 );
                                    l_U6[26] = 0;
                                }
                            }
                            else
                            {
                                g_U9065 = 0;
                            }
                            if (sub_3539( 26 ))
                            {
                                ;
                            }
                            break;
                            case 4:
                            sub_2963( 27 );
                            sub_891( "Multi_13" );
                            g_U9070++;
                            if (l_U6[27] == 1)
                            {
                                g_U9065 = 1;
                                if (g_U9070 > 2)
                                {
                                    CLEAR_HELP();
                                    PRINT_HELP( "Multi_13" );
                                    WAIT( 0 );
                                    l_U6[27] = 0;
                                }
                            }
                            else
                            {
                                g_U9065 = 0;
                            }
                            if (sub_3539( 27 ))
                            {
                                ;
                            }
                            break;
                            case 5:
                            sub_2963( 28 );
                            sub_891( "Multi_14" );
                            g_U9070++;
                            if (l_U6[28] == 1)
                            {
                                g_U9065 = 1;
                                if (g_U9070 > 2)
                                {
                                    CLEAR_HELP();
                                    PRINT_HELP( "Multi_14" );
                                    WAIT( 0 );
                                    l_U6[28] = 0;
                                }
                            }
                            else
                            {
                                g_U9065 = 0;
                            }
                            if (sub_3539( 28 ))
                            {
                                ;
                            }
                            break;
                        }
                        break;
                        case 1050:
                        switch (g_U91._fU428)
                        {
                            case 0:
                            sub_2963( 3 );
                            sub_891( "Multi_05" );
                            g_U9070++;
                            if (l_U6[3] == 1)
                            {
                                if (g_U9070 > 2)
                                {
                                    CLEAR_HELP();
                                    PRINT_HELP( "Multi_05" );
                                    WAIT( 0 );
                                    l_U6[3] = 0;
                                }
                            }
                            else
                            {
                                g_U9065 = 0;
                            }
                            if (sub_3539( 3 ))
                            {
                                ;
                            }
                            break;
                            case 1:
                            sub_2963( 4 );
                            sub_891( "Multi_06" );
                            g_U9070++;
                            if (l_U6[4] == 1)
                            {
                                if (g_U9070 > 2)
                                {
                                    CLEAR_HELP();
                                    PRINT_HELP( "Multi_06" );
                                    WAIT( 0 );
                                    l_U6[4] = 0;
                                }
                            }
                            else
                            {
                                g_U9065 = 0;
                            }
                            if (sub_3539( 4 ))
                            {
                                ;
                            }
                            break;
                            case 2:
                            sub_2963( 5 );
                            sub_891( "Multi_16" );
                            g_U9070++;
                            if (l_U6[5] == 1)
                            {
                                if (g_U9070 > 2)
                                {
                                    CLEAR_HELP();
                                    PRINT_HELP( "Multi_16" );
                                    WAIT( 0 );
                                    l_U6[5] = 0;
                                }
                            }
                            else
                            {
                                g_U9065 = 0;
                            }
                            if (sub_3539( 5 ))
                            {
                                ;
                            }
                            break;
                        }
                        break;
                        case 1051:
                        switch (g_U91._fU428)
                        {
                            case 0:
                            sub_2963( 3 );
                            sub_891( "Multi_05" );
                            g_U9070++;
                            if (l_U6[3] == 1)
                            {
                                if (g_U9070 > 2)
                                {
                                    CLEAR_HELP();
                                    PRINT_HELP( "Multi_05" );
                                    WAIT( 0 );
                                    l_U6[3] = 0;
                                }
                            }
                            else
                            {
                                g_U9065 = 0;
                            }
                            if (sub_3539( 3 ))
                            {
                                ;
                            }
                            break;
                            case 2:
                            sub_2963( 5 );
                            sub_891( "Multi_16" );
                            g_U9070++;
                            if (l_U6[5] == 1)
                            {
                                if (g_U9070 > 2)
                                {
                                    CLEAR_HELP();
                                    PRINT_HELP( "Multi_16" );
                                    WAIT( 0 );
                                    l_U6[5] = 0;
                                }
                            }
                            else
                            {
                                g_U9065 = 0;
                            }
                            if (sub_3539( 5 ))
                            {
                                ;
                            }
                            break;
                        }
                        break;
                        case 1052:
                        switch (g_U91._fU428)
                        {
                            case 0:
                            sub_2963( 6 );
                            sub_891( "Multi_17" );
                            g_U9070++;
                            if (l_U6[6] == 1)
                            {
                                if (g_U9070 > 2)
                                {
                                    CLEAR_HELP();
                                    PRINT_HELP( "Multi_17" );
                                    WAIT( 0 );
                                    l_U6[6] = 0;
                                }
                            }
                            else
                            {
                                g_U9065 = 0;
                            }
                            if (sub_3539( 6 ))
                            {
                                ;
                            }
                            break;
                            case 1:
                            sub_2963( 7 );
                            sub_891( "Multi_18" );
                            g_U9070++;
                            if (l_U6[7] == 1)
                            {
                                if (g_U9070 > 2)
                                {
                                    CLEAR_HELP();
                                    PRINT_HELP( "Multi_18" );
                                    WAIT( 0 );
                                    l_U6[7] = 0;
                                }
                            }
                            else
                            {
                                g_U9065 = 0;
                            }
                            if (sub_3539( 7 ))
                            {
                                ;
                            }
                            break;
                        }
                        break;
                        case 1049:
                        switch (g_U91._fU428)
                        {
                            case 0:
                            sub_2963( 8 );
                            sub_891( "CP_DESCRP_0" );
                            g_U9070++;
                            if (l_U6[8] == 1)
                            {
                                if (g_U9070 > 2)
                                {
                                    CLEAR_HELP();
                                    PRINT_HELP_WITH_STRING( "CP_MAX_0", "CP_DESCRP_0" );
                                    WAIT( 0 );
                                    l_U6[8] = 0;
                                }
                            }
                            else
                            {
                                g_U9065 = 0;
                            }
                            if (sub_3539( 8 ))
                            {
                                ;
                            }
                            break;
                            case 8:
                            sub_2963( 27 );
                            sub_891( "Multi_13" );
                            g_U9070++;
                            if (l_U6[27] == 1)
                            {
                                g_U9065 = 1;
                                if (g_U9070 > 2)
                                {
                                    CLEAR_HELP();
                                    PRINT_HELP( "Multi_13" );
                                    WAIT( 0 );
                                    l_U6[27] = 0;
                                }
                            }
                            else
                            {
                                g_U9065 = 0;
                            }
                            if (sub_3539( 27 ))
                            {
                                ;
                            }
                            break;
                            case 1:
                            sub_2963( 9 );
                            sub_891( "CP_DESCRP_1" );
                            g_U9070++;
                            if (l_U6[9] == 1)
                            {
                                if (g_U9070 > 2)
                                {
                                    CLEAR_HELP();
                                    PRINT_HELP_WITH_STRING( "CP_MAX_1", "CP_DESCRP_1" );
                                    WAIT( 0 );
                                    l_U6[9] = 0;
                                }
                            }
                            else
                            {
                                g_U9065 = 0;
                            }
                            if (sub_3539( 9 ))
                            {
                                ;
                            }
                            break;
                            case 2:
                            sub_2963( 10 );
                            sub_891( "CP_DESCRP_2" );
                            g_U9070++;
                            if (l_U6[10] == 1)
                            {
                                if (g_U9070 > 2)
                                {
                                    CLEAR_HELP();
                                    PRINT_HELP_WITH_STRING( "CP_MAX_2", "CP_DESCRP_2" );
                                    WAIT( 0 );
                                    l_U6[10] = 0;
                                }
                            }
                            else
                            {
                                g_U9065 = 0;
                            }
                            if (sub_3539( 10 ))
                            {
                                ;
                            }
                            break;
                            case 3:
                            sub_2963( 11 );
                            sub_891( "CP_DESCRP_3" );
                            g_U9070++;
                            if (l_U6[11] == 1)
                            {
                                if (g_U9070 > 2)
                                {
                                    CLEAR_HELP();
                                    PRINT_HELP_WITH_STRING( "CP_MAX_3", "CP_DESCRP_3" );
                                    WAIT( 0 );
                                    l_U6[11] = 0;
                                }
                            }
                            else
                            {
                                g_U9065 = 0;
                            }
                            if (sub_3539( 11 ))
                            {
                                ;
                            }
                            break;
                            case 5:
                            sub_2963( 12 );
                            sub_891( "CP_DESCRP_5" );
                            g_U9070++;
                            if (l_U6[12] == 1)
                            {
                                if (g_U9070 > 2)
                                {
                                    CLEAR_HELP();
                                    PRINT_HELP_WITH_STRING( "CP_MAX_5", "CP_DESCRP_5" );
                                    WAIT( 0 );
                                    l_U6[12] = 0;
                                }
                            }
                            else
                            {
                                g_U9065 = 0;
                            }
                            if (sub_3539( 12 ))
                            {
                                ;
                            }
                            break;
                            case 4:
                            sub_891( "CP_DESCRP_4" );
                            sub_2963( 13 );
                            g_U9070++;
                            if (l_U6[13] == 1)
                            {
                                if (g_U9070 > 2)
                                {
                                    CLEAR_HELP();
                                    PRINT_HELP_WITH_STRING( "CP_MAX_4", "CP_DESCRP_4" );
                                    WAIT( 0 );
                                    l_U6[13] = 0;
                                }
                            }
                            else
                            {
                                g_U9065 = 0;
                            }
                            if (sub_3539( 13 ))
                            {
                                ;
                            }
                            break;
                            case 16:
                            sub_891( "CP_DESCRP_16" );
                            sub_2963( 14 );
                            g_U9070++;
                            if (l_U6[14] == 1)
                            {
                                if (g_U9070 > 2)
                                {
                                    CLEAR_HELP();
                                    PRINT_HELP_WITH_STRING( "CP_MAX_16", "CP_DESCRP_16" );
                                    WAIT( 0 );
                                    l_U6[14] = 0;
                                }
                            }
                            else
                            {
                                g_U9065 = 0;
                            }
                            if (sub_3539( 14 ))
                            {
                                ;
                            }
                            break;
                            case 13:
                            sub_891( "CP_DESCRP_13" );
                            sub_2963( 15 );
                            g_U9070++;
                            if (l_U6[15] == 1)
                            {
                                if (g_U9070 > 2)
                                {
                                    CLEAR_HELP();
                                    PRINT_HELP_WITH_STRING( "CP_MAX_13", "CP_DESCRP_13" );
                                    WAIT( 0 );
                                    l_U6[15] = 0;
                                }
                            }
                            else
                            {
                                g_U9065 = 0;
                            }
                            if (sub_3539( 15 ))
                            {
                                ;
                            }
                            break;
                            case 14:
                            sub_891( "CP_DESCRP_14" );
                            sub_2963( 16 );
                            g_U9070++;
                            if (l_U6[16] == 1)
                            {
                                if (g_U9070 > 2)
                                {
                                    CLEAR_HELP();
                                    PRINT_HELP_WITH_STRING( "CP_MAX_14", "CP_DESCRP_14" );
                                    WAIT( 0 );
                                    l_U6[16] = 0;
                                }
                            }
                            else
                            {
                                g_U9065 = 0;
                            }
                            if (sub_3539( 16 ))
                            {
                                ;
                            }
                            break;
                            case 15:
                            sub_891( "CP_DESCRP_15" );
                            sub_2963( 17 );
                            g_U9070++;
                            if (l_U6[17] == 1)
                            {
                                if (g_U9070 > 2)
                                {
                                    CLEAR_HELP();
                                    PRINT_HELP_WITH_STRING( "CP_MAX_15", "CP_DESCRP_15" );
                                    WAIT( 0 );
                                    l_U6[17] = 0;
                                }
                            }
                            else
                            {
                                g_U9065 = 0;
                            }
                            if (sub_3539( 17 ))
                            {
                                ;
                            }
                            break;
                            case 6:
                            sub_891( "CP_DESCRP_6" );
                            sub_2963( 18 );
                            g_U9070++;
                            if (l_U6[18] == 1)
                            {
                                if (g_U9070 > 2)
                                {
                                    CLEAR_HELP();
                                    PRINT_HELP_WITH_STRING( "CP_MAX_6", "CP_DESCRP_6" );
                                    WAIT( 0 );
                                    l_U6[18] = 0;
                                }
                            }
                            else
                            {
                                g_U9065 = 0;
                            }
                            if (sub_3539( 18 ))
                            {
                                ;
                            }
                            break;
                            case 7:
                            sub_891( "CP_DESCRP_7" );
                            sub_2963( 19 );
                            g_U9070++;
                            if (l_U6[19] == 1)
                            {
                                if (g_U9070 > 2)
                                {
                                    CLEAR_HELP();
                                    PRINT_HELP_WITH_STRING( "CP_MAX_7", "CP_DESCRP_7" );
                                    WAIT( 0 );
                                    l_U6[19] = 0;
                                }
                            }
                            else
                            {
                                g_U9065 = 0;
                            }
                            if (sub_3539( 19 ))
                            {
                                ;
                            }
                            break;
                            case 10:
                            sub_891( "CP_DESCRP_10" );
                            sub_2963( 20 );
                            g_U9070++;
                            if (l_U6[20] == 1)
                            {
                                if (g_U9070 > 2)
                                {
                                    CLEAR_HELP();
                                    PRINT_HELP_WITH_STRING( "CP_MAX_10", "CP_DESCRP_10" );
                                    WAIT( 0 );
                                    l_U6[20] = 0;
                                }
                            }
                            else
                            {
                                g_U9065 = 0;
                            }
                            if (sub_3539( 20 ))
                            {
                                ;
                            }
                            break;
                            case 12:
                            sub_891( "CP_DESCRP_12" );
                            sub_2963( 21 );
                            g_U9070++;
                            if (l_U6[21] == 1)
                            {
                                if (g_U9070 > 2)
                                {
                                    CLEAR_HELP();
                                    PRINT_HELP_WITH_STRING( "CP_MAX_12", "CP_DESCRP_12" );
                                    WAIT( 0 );
                                    l_U6[21] = 0;
                                }
                            }
                            else
                            {
                                g_U9065 = 0;
                            }
                            if (sub_3539( 21 ))
                            {
                                ;
                            }
                            break;
                        }
                        break;
                        default: if (g_U91._fU0 < 1000)
                        {
                            switch (g_U91._fU428)
                            {
                                case 0:
                                sub_2963( 22 );
                                sub_891( "Multi_09" );
                                g_U9070++;
                                if (l_U6[22] == 1)
                                {
                                    if (g_U9070 > 2)
                                    {
                                        CLEAR_HELP();
                                        PRINT_HELP( "Multi_09" );
                                        WAIT( 0 );
                                        l_U6[22] = 0;
                                    }
                                }
                                else
                                {
                                    g_U9065 = 0;
                                }
                                if (sub_3539( 22 ))
                                {
                                    ;
                                }
                                break;
                                case 1:
                                sub_2963( 23 );
                                sub_891( "Multi_08" );
                                g_U9070++;
                                if (l_U6[23] == 1)
                                {
                                    if (g_U9070 > 2)
                                    {
                                        CLEAR_HELP();
                                        WAIT( 0 );
                                        PRINT_HELP( "Multi_08" );
                                        WAIT( 0 );
                                        l_U6[23] = 0;
                                    }
                                }
                                else
                                {
                                    g_U9065 = 0;
                                }
                                if (sub_3539( 23 ))
                                {
                                    ;
                                }
                                break;
                                case 2:
                                sub_2963( 24 );
                                sub_891( "Multi_10" );
                                g_U9070++;
                                if (l_U6[24] == 1)
                                {
                                    if (g_U9070 > 2)
                                    {
                                        CLEAR_HELP();
                                        PRINT_HELP( "Multi_10" );
                                        WAIT( 0 );
                                        l_U6[24] = 0;
                                    }
                                }
                                else
                                {
                                    g_U9065 = 0;
                                }
                                if (sub_3539( 24 ))
                                {
                                    ;
                                }
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_13()
{
    return 16;
}

int sub_34()
{
    return 17;
}

void sub_74()
{
    l_U6[25] = 1;
    l_U6[0] = 1;
    l_U6[1] = 1;
    l_U6[2] = 1;
    l_U6[26] = 1;
    l_U6[27] = 1;
    l_U6[28] = 1;
    l_U6[3] = 1;
    l_U6[4] = 1;
    l_U6[5] = 1;
    l_U6[6] = 1;
    l_U6[7] = 1;
    l_U6[8] = 1;
    l_U6[9] = 1;
    l_U6[10] = 1;
    l_U6[11] = 1;
    l_U6[12] = 1;
    l_U6[13] = 1;
    l_U6[14] = 1;
    l_U6[15] = 1;
    l_U6[16] = 1;
    l_U6[17] = 1;
    l_U6[18] = 1;
    l_U6[19] = 1;
    l_U6[20] = 1;
    l_U6[21] = 1;
    l_U6[22] = 1;
    l_U6[23] = 1;
    l_U6[24] = 1;
    g_U9087[25] = 0;
    g_U9087[0] = 0;
    g_U9087[1] = 0;
    g_U9087[2] = 0;
    g_U9087[26] = 0;
    g_U9087[27] = 0;
    g_U9087[28] = 0;
    g_U9087[3] = 0;
    g_U9087[4] = 0;
    g_U9087[5] = 0;
    g_U9087[6] = 0;
    g_U9087[7] = 0;
    g_U9087[8] = 0;
    g_U9087[9] = 0;
    g_U9087[10] = 0;
    g_U9087[11] = 0;
    g_U9087[12] = 0;
    g_U9087[13] = 0;
    g_U9087[14] = 0;
    g_U9087[15] = 0;
    g_U9087[16] = 0;
    g_U9087[17] = 0;
    g_U9087[18] = 0;
    g_U9087[19] = 0;
    g_U9087[20] = 0;
    g_U9087[21] = 0;
    g_U9087[22] = 0;
    g_U9087[23] = 0;
    g_U9087[24] = 0;
    return;
}

int sub_569()
{
    for ( l_U5 = 0; l_U5 <= 25; l_U5++ )
    {
        if (g_U9087[l_U5] == 0)
        {
            return 0;
        }
    }
    return 1;
}

int sub_674()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_709()
{
    return g_U91._fU0;
}

void sub_891(unknown uParam0)
{
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_01" ))
    {
        if (NOT (COMPARE_STRING( uParam0, "Multi_01" )))
        {
            CLEAR_HELP();
        }
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_02" ))
    {
        if (NOT (COMPARE_STRING( uParam0, "Multi_02" )))
        {
            CLEAR_HELP();
        }
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_03a" ))
    {
        if (NOT (COMPARE_STRING( uParam0, "Multi_03a" )))
        {
            CLEAR_HELP();
        }
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_03b" ))
    {
        if (NOT (COMPARE_STRING( uParam0, "Multi_03b" )))
        {
            CLEAR_HELP();
        }
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_03c" ))
    {
        if (NOT (COMPARE_STRING( uParam0, "Multi_03c" )))
        {
            CLEAR_HELP();
        }
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_04" ))
    {
        if (NOT (COMPARE_STRING( uParam0, "Multi_04" )))
        {
            CLEAR_HELP();
        }
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_11" ))
    {
        if (NOT (COMPARE_STRING( uParam0, "Multi_11" )))
        {
            CLEAR_HELP();
        }
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_05" ))
    {
        if (NOT (COMPARE_STRING( uParam0, "Multi_05" )))
        {
            CLEAR_HELP();
        }
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_06" ))
    {
        if (NOT (COMPARE_STRING( uParam0, "Multi_06" )))
        {
            CLEAR_HELP();
        }
    }
    if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "CP_MAX_0", "CP_DESCRP_0" ))
    {
        if (NOT (COMPARE_STRING( uParam0, "CP_DESCRP_0" )))
        {
            CLEAR_HELP();
        }
    }
    if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "CP_MAX_1", "CP_DESCRP_1" ))
    {
        if (NOT (COMPARE_STRING( uParam0, "CP_DESCRP_1" )))
        {
            CLEAR_HELP();
        }
    }
    if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "CP_MAX_2", "CP_DESCRP_2" ))
    {
        if (NOT (COMPARE_STRING( uParam0, "CP_DESCRP_2" )))
        {
            CLEAR_HELP();
        }
    }
    if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "CP_MAX_3", "CP_DESCRP_3" ))
    {
        if (NOT (COMPARE_STRING( uParam0, "CP_DESCRP_3" )))
        {
            CLEAR_HELP();
        }
    }
    if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "CP_MAX_4", "CP_DESCRP_4" ))
    {
        if (NOT (COMPARE_STRING( uParam0, "CP_DESCRP_4" )))
        {
            CLEAR_HELP();
        }
    }
    if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "CP_MAX_5", "CP_DESCRP_5" ))
    {
        if (NOT (COMPARE_STRING( uParam0, "CP_DESCRP_5" )))
        {
            CLEAR_HELP();
        }
    }
    if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "CP_MAX_16", "CP_DESCRP_16" ))
    {
        if (NOT (COMPARE_STRING( uParam0, "CP_DESCRP_16" )))
        {
            CLEAR_HELP();
        }
    }
    if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "CP_MAX_13", "CP_DESCRP_13" ))
    {
        if (NOT (COMPARE_STRING( uParam0, "CP_DESCRP_13" )))
        {
            CLEAR_HELP();
        }
    }
    if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "CP_MAX_14", "CP_DESCRP_14" ))
    {
        if (NOT (COMPARE_STRING( uParam0, "CP_DESCRP_14" )))
        {
            CLEAR_HELP();
        }
    }
    if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "CP_MAX_15", "CP_DESCRP_15" ))
    {
        if (NOT (COMPARE_STRING( uParam0, "CP_DESCRP_15" )))
        {
            CLEAR_HELP();
        }
    }
    if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "CP_MAX_6", "CP_DESCRP_6" ))
    {
        if (NOT (COMPARE_STRING( uParam0, "CP_DESCRP_6" )))
        {
            CLEAR_HELP();
        }
    }
    if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "CP_MAX_7", "CP_DESCRP_7" ))
    {
        if (NOT (COMPARE_STRING( uParam0, "CP_DESCRP_7" )))
        {
            CLEAR_HELP();
        }
    }
    if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "CP_MAX_10", "CP_DESCRP_10" ))
    {
        if (NOT (COMPARE_STRING( uParam0, "CP_DESCRP_10" )))
        {
            CLEAR_HELP();
        }
    }
    if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "CP_MAX_12", "CP_DESCRP_12" ))
    {
        if (NOT (COMPARE_STRING( uParam0, "CP_DESCRP_12" )))
        {
            CLEAR_HELP();
        }
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_09" ))
    {
        if (NOT (COMPARE_STRING( uParam0, "Multi_09" )))
        {
            CLEAR_HELP();
        }
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_08" ))
    {
        if (NOT (COMPARE_STRING( uParam0, "Multi_08" )))
        {
            CLEAR_HELP();
        }
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_10" ))
    {
        if (NOT (COMPARE_STRING( uParam0, "Multi_10" )))
        {
            CLEAR_HELP();
        }
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_13" ))
    {
        if (NOT (COMPARE_STRING( uParam0, "Multi_13" )))
        {
            CLEAR_HELP();
        }
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_14" ))
    {
        if (NOT (COMPARE_STRING( uParam0, "Multi_14" )))
        {
            CLEAR_HELP();
        }
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_15" ))
    {
        if (NOT (COMPARE_STRING( uParam0, "Multi_15" )))
        {
            CLEAR_HELP();
        }
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_16" ))
    {
        if (NOT (COMPARE_STRING( uParam0, "Multi_16" )))
        {
            CLEAR_HELP();
        }
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_17" ))
    {
        if (NOT (COMPARE_STRING( uParam0, "Multi_17" )))
        {
            CLEAR_HELP();
        }
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_18" ))
    {
        if (NOT (COMPARE_STRING( uParam0, "Multi_18" )))
        {
            CLEAR_HELP();
        }
    }
    return;
}

void sub_2963(int iParam0)
{
    if (iParam0 != 25)
    {
        l_U6[25] = 1;
    }
    if (iParam0 != 0)
    {
        l_U6[0] = 1;
    }
    if (iParam0 != 1)
    {
        l_U6[1] = 1;
    }
    if (iParam0 != 2)
    {
        l_U6[2] = 1;
    }
    if (iParam0 != 26)
    {
        l_U6[26] = 1;
    }
    if (iParam0 != 27)
    {
        l_U6[27] = 1;
    }
    if (iParam0 != 28)
    {
        l_U6[28] = 1;
    }
    if (iParam0 != 3)
    {
        l_U6[3] = 1;
    }
    if (iParam0 != 4)
    {
        l_U6[4] = 1;
    }
    if (iParam0 != 5)
    {
        l_U6[5] = 1;
    }
    if (iParam0 != 6)
    {
        l_U6[6] = 1;
    }
    if (iParam0 != 7)
    {
        l_U6[7] = 1;
    }
    if (iParam0 != 8)
    {
        l_U6[8] = 1;
    }
    if (iParam0 != 9)
    {
        l_U6[9] = 1;
    }
    if (iParam0 != 10)
    {
        l_U6[10] = 1;
    }
    if (iParam0 != 11)
    {
        l_U6[11] = 1;
    }
    if (iParam0 != 12)
    {
        l_U6[12] = 1;
    }
    if (iParam0 != 13)
    {
        l_U6[13] = 1;
    }
    if (iParam0 != 14)
    {
        l_U6[14] = 1;
    }
    if (iParam0 != 15)
    {
        l_U6[15] = 1;
    }
    if (iParam0 != 16)
    {
        l_U6[16] = 1;
    }
    if (iParam0 != 17)
    {
        l_U6[17] = 1;
    }
    if (iParam0 != 18)
    {
        l_U6[18] = 1;
    }
    if (iParam0 != 19)
    {
        l_U6[19] = 1;
    }
    if (iParam0 != 20)
    {
        l_U6[20] = 1;
    }
    if (iParam0 != 21)
    {
        l_U6[21] = 1;
    }
    if (iParam0 != 22)
    {
        l_U6[22] = 1;
    }
    if (iParam0 != 23)
    {
        l_U6[23] = 1;
    }
    if (iParam0 != 24)
    {
        l_U6[24] = 1;
    }
    return;
}

int sub_3539(unknown uParam0)
{
    l_U1 = sub_13();
    l_U2 = sub_34();
    if (IS_BUTTON_JUST_PRESSED( 0, l_U1 ))
    {
        sub_3580();
        g_U9087[uParam0] = 1;
        return 1;
    }
    if (IS_BUTTON_JUST_PRESSED( 0, l_U2 ))
    {
        sub_3580();
        return 1;
    }
    return 0;
}

void sub_3580()
{
    g_U9070 = 0;
    g_U91._fU428 = 0;
    return;
}

void sub_3682(unknown uParam0)
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
