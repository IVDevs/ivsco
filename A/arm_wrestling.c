void main()
{
    vector vVar2;
    vector vVar5;
    float fVar8;
    float fVar9;
    int I;
    boolean bVar11;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U104 = 0;
    l_U105 = 1;
    l_U106 = 3;
    l_U112 = 0;
    l_U120 = 0;
    l_U122 = 0;
    l_U123 = 0;
    l_U125 = 1;
    l_U126 = 0;
    l_U133 = 180.00000000;
    l_U134 = 0.00000000;
    l_U136 = 100.00000000;
    l_U138 = 100.00000000;
    l_U139 = 20.00000000;
    l_U140 = 100.00000000;
    l_U141 = -15.00000000;
    l_U153 = 100.00000000;
    l_U155 = 0.01000000;
    l_U163 = 100.00000000;
    l_U164 = 0.10000000;
    l_U165 = 0.50000000;
    l_U167 = 0.40000000;
    l_U174 = 122.75000000;
    l_U178 = 13.00000000;
    l_U179 = 9.00000000;
    l_U194 = 0;
    l_U195 = 254;
    l_U196 = 5;
    l_U202 = 0;
    l_U205 = 0;
    l_U206 = 0;
    l_U212 = "mini_arm";
    l_U215 = "M_Y_GLOST_03_FULL_01";
    l_U216 = "F_Y_GLOST_01";
    l_U217 = "F_Y_GLOST_01";
    l_U218 = "F_Y_GLOST_01";
    l_U232 = 17;
    l_U233 = 16;
    l_U240 = {0.21500000, 1.14800000, 0.00000000};
    l_U243 = {1.09000000, 1.08800000, 0.00000000};
    PRINTSTRING( "Arm Wrestling script started \n" );
    if (sub_519( l_U289._fU4[0], -1716.26000000, 346.01570000, 29.05680000, -1710.68500000, 353.09070000, 34.63180000 ))
    {
        l_U202 = 0;
    }
    else if (sub_519( l_U289._fU4[0], -662.27000000, 1182.83000000, 0.00000000, -622.27000000, 1222.83000000, 10.91000000 ))
    {
        l_U202 = 1;
    }
    else if (sub_519( l_U289._fU4[0], -258.55000000, 1635.61000000, 10.00000000, -218.55000000, 1675.61000000, 38.00000000 ))
    {
        l_U202 = 2;
    }
    else
    {
        l_U202 = 0;
    };;;
    if (l_U202 == 0)
    {
        while (NOT g_U10460)
        {
            WAIT( 0 );
        }
    }
    else if (g_U12303)
    {
        PRINTSTRING( "Arm Wrestling cleaned up - g_OnMission = TRUE, and not at clubhouse \n" );
        sub_885();
    }
    g_U10486 = 0;
    switch (l_U202)
    {
        case 0:
        l_U237 = {-1713.19300000, 349.06700000, 31.74800000};
        l_U130 = 66.22000000;
        l_U234 = {l_U237};
        l_U246[0] = {-1714.02300000, 351.07510000, 33.07367000};
        l_U259[0] = {-29.97048000, 0.00000000, -166.16480000};
        l_U157[0] = 45.00000000;
        l_U246[1] = {-1713.85100000, 348.50560000, 31.90049000};
        l_U259[1] = {12.02812000, 0.00000000, -2.99855800};
        l_U157[1] = 45.00000000;
        l_U246[2] = {-1712.89200000, 349.93500000, 31.97335000};
        l_U259[2] = {5.73988700, -0.00000000, 122.51190000};
        l_U157[2] = 45.00000000;
        l_U246[3] = {-1716.35200000, 350.33470000, 32.64436000};
        l_U259[3] = {-10.07631000, 0.00000000, -112.19340000};
        l_U157[3] = 45.00000000;
        l_U272[0] = {-1714.74800000, 348.93300000, 30.72670000};
        l_U169[0] = 298.25000000;
        l_U272[1] = {-1713.32700000, 348.30900000, 30.73200000};
        l_U169[1] = 24.50000000;
        l_U272[2] = {-1712.54100000, 349.64900000, 30.73200000};
        l_U169[2] = 108.45000000;
        l_U272[3] = {-1713.63700000, 350.61500000, 30.72700000};
        l_U169[3] = 209.45000000;
        l_U205 = 1439613707;
        l_U206 = -2130437771;
        l_U185 = GET_HASH_KEY( "E1_Lost_1stfloor" );
        l_U215 = "M_Y_GLOST_03_FULL_01";
        l_U216 = "F_Y_GLOST_01";
        l_U217 = "F_Y_GLOST_01";
        l_U218 = "F_Y_GLOST_01";
        break;
        case 1:
        l_U237 = {-650.62320000, 1205.61900000, 5.94800000};
        l_U130 = 312.70000000;
        l_U234 = {l_U237};
        l_U246[0] = {-649.69420000, 1204.48500000, 6.36099000};
        l_U259[0] = {-5.43856400, 0.00000000, 19.76701000};
        l_U157[0] = 45.00000000;
        l_U246[1] = {-650.32660000, 1207.82400000, 6.28241600};
        l_U259[1] = {0.49525700, 0.00000000, -175.71810000};
        l_U157[1] = 23.10006000;
        l_U246[2] = {-649.91780000, 1203.89100000, 6.27598300};
        l_U259[2] = {-0.90733900, 0.00000000, 3.61728300};
        l_U157[2] = 23.10006000;
        l_U246[3] = {-652.10340000, 1207.91600000, 6.78618300};
        l_U259[3] = {-9.44525300, -0.00000000, -132.96900000};
        l_U157[3] = 45.00000000;
        l_U272[0] = {-651.82590000, 1206.49100000, 4.90800000};
        l_U169[0] = 251.23120000;
        l_U272[1] = {-650.51900000, 1207.86700000, 4.90800000};
        l_U169[1] = 188.06770000;
        l_U272[2] = {-650.58000000, 1204.67300000, 4.90800000};
        l_U169[2] = 30.11200000;
        l_U272[3] = {-651.70950000, 1203.81100000, 4.90820000};
        l_U169[3] = 20.21410000;
        l_U205 = -1159156463;
        l_U206 = 479817841;
        l_U285 = {-650.14600000, 1205.93700000, 4.90800000};
        l_U180 = 123.50000000;
        l_U215 = "M_Y_GANGELS_04_FULL_01";
        l_U216 = "F_Y_GLOST_01";
        l_U217 = "M_Y_GANGELS_01_GANG_01";
        l_U218 = "M_Y_GANGELS_02_GANG_01";
        break;
        case 2:
        l_U237 = {-237.38510000, 1656.08800000, 18.71900000};
        l_U130 = 101.92620000;
        l_U234 = {l_U237};
        l_U246[0] = {-237.73700000, 1657.62000000, 19.26129000};
        l_U259[0] = {-8.69506700, -0.00000000, 175.42390000};
        l_U157[0] = 44.10000000;
        l_U246[1] = {-239.17840000, 1654.44400000, 19.20844000};
        l_U259[1] = {-4.99682200, 0.00000000, -41.23218000};
        l_U157[1] = 23.10006000;
        l_U246[2] = {-236.83260000, 1657.93300000, 19.03361000};
        l_U259[2] = {1.64522900, -0.00000000, 145.20510000};
        l_U157[2] = 23.10006000;
        l_U246[3] = {-239.81360000, 1653.97700000, 19.63344000};
        l_U259[3] = {-12.22947000, -0.00000000, -43.20711000};
        l_U157[3] = 45.00000000;
        l_U272[0] = {-236.73000000, 1655.16000000, 17.71000000};
        l_U169[0] = 56.34000000;
        l_U272[1] = {-237.89100000, 1654.52400000, 17.71000000};
        l_U169[1] = 12.96000000;
        l_U272[2] = {-237.09300000, 1657.18100000, 17.71000000};
        l_U169[2] = 166.49420000;
        l_U272[3] = {-234.76170000, 1653.12400000, 17.70990000};
        l_U169[3] = 17.37790000;
        l_U205 = 236691815;
        l_U206 = 1590280898;
        l_U285 = {-237.99300000, 1656.01100000, 17.71000000};
        l_U180 = 90.00000000;
        l_U215 = "M_Y_GANGELS_04_FULL_01";
        l_U216 = "F_Y_GLOST_01";
        l_U217 = "M_Y_GANGELS_01_GANG_01";
        l_U218 = "M_Y_GANGELS_02_GANG_01";
        break;
    }
    l_U132 = 0.50000000;
    GET_INTERIOR_AT_COORDS( l_U234._fU0, l_U234._fU4, l_U234._fU8 + 1.00000000, ref l_U204 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        if ((l_U184 == 2) || (l_U184 == 3))
        {
            PRINTSTRING( "Arm Wrestling cleaned up - HAS_DEATHARREST_EXECUTED \n" );
            sub_4986();
            sub_885();
        }
    }
    while (IS_PLAYER_PLAYING( sub_2820() ))
    {
        sub_914( 1 );
        if (l_U202 == 0)
        {
            if (NOT g_U10460)
            {
                if ((NOT (l_U184 == 2)) AND (NOT (l_U184 == 3)))
                {
                    if (NOT sub_5960())
                    {
                        sub_6052();
                    }
                }
                else
                {
                    sub_4986();
                    sub_6052();
                }
            }
        }
        else if (g_U12303)
        {
            if ((NOT (l_U184 == 2)) AND (NOT (l_U184 == 3)))
            {
                sub_885();
            }
        }
        if (l_U202 == 0)
        {
            if (NOT l_U123)
            {
                GET_KEY_FOR_CHAR_IN_ROOM( sub_5037(), ref I );
                if (I == l_U185)
                {
                    l_U123 = 1;
                }
            }
            else
            {
                GET_KEY_FOR_CHAR_IN_ROOM( sub_5037(), ref I );
                if (NOT (I == l_U185))
                {
                    l_U123 = 0;
                }
            }
        }
        else
        {
            l_U123 = 1;
        }
        if (NOT IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            sub_885();
        }
        else if (l_U202 == 0)
        {
            if ((NOT sub_5960()) AND (NOT (l_U184 == 0)))
            {
                sub_6052();
            }
        }
        GET_FRAME_TIME( ref fVar8 );
        fVar8 *= 1000.00000000;
        l_U154 += fVar8;
        l_U162 += fVar8;
        l_U166 += fVar8;
        l_U168 += fVar8;
        l_U175 += fVar8;
        l_U176 += fVar8;
        l_U177 += fVar8;
        l_U181 += fVar8;
        l_U182 += fVar8;
        switch (l_U184)
        {
            case 0:
            bVar11 = false;
            if (l_U202 == 0)
            {
                if (g_U10460)
                {
                    bVar11 = true;
                }
            }
            else if (NOT g_U12303)
            {
                bVar11 = true;
            }
            if (bVar11)
            {
                if ((sub_5960()) || (NOT (l_U202 == 0)))
                {
                    if ((((NOT (HAS_MODEL_LOADED( l_U205 ))) || (NOT (HAS_MODEL_LOADED( l_U206 )))) || (NOT (HAVE_ANIMS_LOADED( l_U212 )))) || (NOT (HAVE_ANIMS_LOADED( l_U212 ))))
                    {
                        REQUEST_MODEL( l_U205 );
                        REQUEST_MODEL( l_U206 );
                        REQUEST_ANIMS( l_U212 );
                    }
                    else
                    {
                        sub_6715();
                        if (DOES_OBJECT_EXIST( l_U208 ))
                        {
                            DELETE_OBJECT( ref l_U208 );
                        }
                        CREATE_OBJECT( -195381842, l_U234._fU0, l_U234._fU4, l_U234._fU8, ref l_U208, 1 );
                        SET_OBJECT_HEADING( l_U208, l_U129 );
                        FREEZE_OBJECT_POSITION( l_U208, 1 );
                        SET_OBJECT_VISIBLE( l_U208, 0 );
                        SET_OBJECT_COLLISION( l_U208, 0 );
                        if (IS_CHAR_INJURED( l_U227 ))
                        {
                            DELETE_CHAR( ref l_U227 );
                        }
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "billy1" )) > 0)
                        {
                            CREATE_CHAR( 26, l_U205, l_U234._fU0, l_U234._fU4, l_U234._fU8, ref l_U227, 1 );
                        }
                        else if (I == 0)
                        {
                            CREATE_CHAR( 26, l_U205, l_U234._fU0, l_U234._fU4, l_U234._fU8, ref l_U227, 1 );
                        }
                        else
                        {
                            CREATE_CHAR( 26, l_U206, l_U234._fU0, l_U234._fU4, l_U234._fU8, ref l_U227, 1 );
                        }
                        sub_7145( l_U227 );
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U227 );
                        if (l_U202 == 0)
                        {
                            if (I == 0)
                            {
                                SET_CHAR_COMPONENT_VARIATION( l_U227, 0, 0, 1 );
                            }
                            else
                            {
                                SET_CHAR_COMPONENT_VARIATION( l_U227, 0, 1, 0 );
                            }
                        }
                        FREEZE_CHAR_POSITION( l_U227, 1 );
                        SET_CHAR_COLLISION( l_U227, l_U125 );
                        SET_CHAR_HEADING( l_U227, l_U129 );
                        if (l_U202 == 0)
                        {
                            SET_ROOM_FOR_CHAR_BY_KEY( l_U227, l_U185 );
                        }
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U227, 1 );
                        ATTACH_PED_TO_OBJECT( l_U227, l_U208, 0, 0.00000000, 0.00000000, 0.00000000, l_U129, 360.00000000, 0, 0 );
                        sub_7945();
                        if ((l_U202 == 1) || (l_U202 == 2))
                        {
                            CREATE_OBJECT_NO_OFFSET( -291311029, l_U285._fU0, l_U285._fU4, l_U285._fU8, ref l_U210, 1 );
                            SET_OBJECT_HEADING( l_U210, l_U180 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U220 )))
                        {
                            sub_8953( l_U220 );
                            BLOCK_CHAR_GESTURE_ANIMS( l_U220, 1 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U227 )))
                        {
                            sub_8953( l_U227 );
                            BLOCK_CHAR_GESTURE_ANIMS( l_U227, 1 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U221[3] )))
                        {
                            sub_8953( l_U221[3] );
                            BLOCK_CHAR_GESTURE_ANIMS( l_U221[3], 1 );
                        }
                        l_U184 = 1;
                    }
                }
            }
            break;
            case 1:
            switch (l_U198)
            {
                case 0:
                if ((NOT (IS_CHAR_INJURED( l_U220 ))) AND (NOT (IS_CHAR_INJURED( l_U227 ))))
                {
                    if ((((NOT (IS_CHAR_PLAYING_ANIM( l_U220, l_U212, "idle_to_neutral" ))) AND (sub_10071( l_U220, l_U212, "Curse_Outro" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U227, l_U212, "idle_to_neutral" )))) AND (sub_10071( l_U227, l_U212, "Curse_Outro" )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U220, "idle_to_neutral", l_U212, 8.00000000, 0, 0, 0, 1, -1 );
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U227, "idle_to_neutral", l_U212, 8.00000000, 0, 0, 0, 1, -1 );
                        l_U201 = 3;
                    }
                    if (IS_CHAR_PLAYING_ANIM( l_U220, l_U212, "idle_to_neutral" ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( l_U220, l_U212, "idle_to_neutral", ref fVar8 );
                        if (fVar8 > 0.98000000)
                        {
                            if (IS_CHAR_PLAYING_ANIM( l_U227, l_U212, "idle_to_neutral" ))
                            {
                                GET_CHAR_ANIM_CURRENT_TIME( l_U227, l_U212, "idle_to_neutral", ref fVar8 );
                                if (fVar8 > 0.98000000)
                                {
                                    l_U134 = 0.00000000;
                                    l_U132 = 0.00000000;
                                    if (NOT (IS_CHAR_INJURED( l_U221[3] )))
                                    {
                                        OPEN_SEQUENCE_TASK( ref l_U219 );
                                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Ref_Intro", l_U212, 4.00000000, 0, 0, 0, 0, -1 );
                                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Ref_Loop", l_U212, 4.00000000, 0, 0, 0, 0, -1 );
                                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Ref_Outro", l_U212, 4.00000000, 0, 0, 0, 0, -1 );
                                        CLOSE_SEQUENCE_TASK( l_U219 );
                                        TASK_PERFORM_SEQUENCE( l_U221[3], l_U219 );
                                        CLEAR_SEQUENCE_TASK( l_U219 );
                                    }
                                    l_U198 = 1;
                                }
                            }
                        }
                    }
                }
                break;
                case 1:
                if (NOT (IS_CHAR_INJURED( l_U221[3] )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U221[3], 29, ref l_U211 );
                    if ((l_U211 == 7) || (IS_CHAR_PLAYING_ANIM( l_U221[3], l_U212, "Ref_Outro" )))
                    {
                        sub_10810( l_U221[0], 0 );
                        sub_10810( l_U221[1], 1 );
                        sub_10810( l_U221[2], 2 );
                        GENERATE_RANDOM_FLOAT_IN_RANGE( 10000.00000000, 15000.00000000, ref l_U181 );
                        GENERATE_RANDOM_FLOAT_IN_RANGE( 10000.00000000, 15000.00000000, ref l_U182 );
                        if (NOT (IS_CHAR_INJURED( l_U227 )))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U227, "attack", l_U212, 1000.00000000, 0, 0, 0, 1, -1 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U220 )))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U220, "defend", l_U212, 1000.00000000, 0, 0, 0, 1, -1 );
                        }
                        l_U198 = 2;
                    }
                }
                break;
                case 2:
                if (l_U166 > 2000.00000000)
                {
                    l_U166 = 0.00000000;
                }
                if (l_U166 < 1000.00000000)
                {
                    l_U152 = l_U166 / 1000.00000000;
                }
                else
                {
                    l_U152 = 1.00000000 - ((l_U166 - 1000.00000000) / 1000.00000000);
                }
                if (l_U154 > l_U153)
                {
                    fVar8 = l_U153 - l_U154;
                    l_U154 = fVar8;
                }
                fVar8 = l_U154 / l_U153;
                fVar8 *= 360.00000000;
                l_U156 = ((SIN( fVar8 )) * l_U155) * l_U152;
                GENERATE_RANDOM_FLOAT_IN_RANGE( -0.60000000, 0.50000000, ref fVar8 );
                GET_FRAME_TIME( ref fVar9 );
                if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "billy1" )) > 0)
                {
                    fVar8 = fVar9 * (1.00000000 / 13.00000000);
                    fVar8 *= -1.00000000;
                }
                else
                {
                    fVar8 *= fVar9;
                }
                l_U134 += fVar8;
                if (l_U134 > 1.00000000)
                {
                    l_U134 = 1.00000000;
                }
                if (l_U134 < -1.00000000)
                {
                    l_U134 = -1.00000000;
                }
                l_U132 = l_U134 + l_U156;
                if (l_U132 > 1.00000000)
                {
                    l_U132 = 1.00000000;
                }
                if (l_U132 < -1.00000000)
                {
                    l_U132 = -1.00000000;
                }
                if (l_U134 >= 0.00000000)
                {
                    if (l_U132 < 0.00000000)
                    {
                        l_U132 = 0.00000000;
                    }
                    if (NOT (IS_CHAR_INJURED( l_U227 )))
                    {
                        if (NOT (IS_CHAR_PLAYING_ANIM( l_U227, l_U212, "attack" )))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U227, "attack", l_U212, 4.00000000, 0, 0, 0, 1, -1 );
                        }
                        else
                        {
                            SET_CHAR_ANIM_SPEED( l_U227, l_U212, "attack", 0.00000000 );
                            SET_CHAR_ANIM_CURRENT_TIME( l_U227, l_U212, "attack", l_U132 );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U220 )))
                    {
                        if (NOT (IS_CHAR_PLAYING_ANIM( l_U220, l_U212, "defend" )))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U220, "defend", l_U212, 4.00000000, 0, 0, 0, 1, -1 );
                        }
                        else
                        {
                            SET_CHAR_ANIM_SPEED( l_U220, l_U212, "defend", 0.00000000 );
                            SET_CHAR_ANIM_CURRENT_TIME( l_U220, l_U212, "defend", l_U132 );
                        }
                    }
                }
                else if (l_U132 > 0.00000000)
                {
                    l_U132 = 0.00000000;
                }
                if (NOT (IS_CHAR_INJURED( l_U227 )))
                {
                    if (NOT (IS_CHAR_PLAYING_ANIM( l_U227, l_U212, "defend" )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U227, "defend", l_U212, 4.00000000, 0, 0, 0, 1, -1 );
                    }
                    else
                    {
                        SET_CHAR_ANIM_SPEED( l_U227, l_U212, "defend", 0.00000000 );
                        SET_CHAR_ANIM_CURRENT_TIME( l_U227, l_U212, "defend", l_U132 * -1.00000000 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U220 )))
                {
                    if (NOT (IS_CHAR_PLAYING_ANIM( l_U220, l_U212, "attack" )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U220, "attack", l_U212, 4.00000000, 0, 0, 0, 1, -1 );
                    }
                    else
                    {
                        SET_CHAR_ANIM_SPEED( l_U220, l_U212, "attack", 0.00000000 );
                        SET_CHAR_ANIM_CURRENT_TIME( l_U220, l_U212, "attack", l_U132 * -1.00000000 );
                    }
                }
                if ((l_U134 >= 1.00000000) || (l_U134 <= -1.00000000))
                {
                    if (l_U134 >= 1.00000000)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U227 )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U219 );
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Celeb_A", l_U212, 1000.00000000, 0, 1, 1, 0, -1 );
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "stand_wait", l_U212, 4.00000000, 1, 0, 0, 0, -1 );
                            CLOSE_SEQUENCE_TASK( l_U219 );
                            TASK_PERFORM_SEQUENCE( l_U227, l_U219 );
                            CLEAR_SEQUENCE_TASK( l_U219 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U220 )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U219 );
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Curse_Intro", l_U212, 4.00000000, 0, 1, 1, 0, -1 );
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Curse_Loop", l_U212, 4.00000000, 0, 1, 1, 0, -1 );
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Curse_Outro", l_U212, 4.00000000, 0, 1, 1, 0, -1 );
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "stand_wait", l_U212, 4.00000000, 1, 0, 0, 0, -1 );
                            CLOSE_SEQUENCE_TASK( l_U219 );
                            TASK_PERFORM_SEQUENCE( l_U220, l_U219 );
                            CLEAR_SEQUENCE_TASK( l_U219 );
                        }
                    }
                    if (l_U134 <= -1.00000000)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U220 )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U219 );
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Celeb_A", l_U212, 1000.00000000, 0, 1, 1, 0, -1 );
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "stand_wait", l_U212, 4.00000000, 1, 0, 0, 0, -1 );
                            CLOSE_SEQUENCE_TASK( l_U219 );
                            TASK_PERFORM_SEQUENCE( l_U220, l_U219 );
                            CLEAR_SEQUENCE_TASK( l_U219 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U227 )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U219 );
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Curse_Intro", l_U212, 4.00000000, 0, 1, 1, 0, -1 );
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Curse_Loop", l_U212, 4.00000000, 0, 1, 1, 0, -1 );
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Curse_Outro", l_U212, 4.00000000, 0, 1, 1, 0, -1 );
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "stand_wait", l_U212, 4.00000000, 1, 0, 0, 0, -1 );
                            CLOSE_SEQUENCE_TASK( l_U219 );
                            TASK_PERFORM_SEQUENCE( l_U227, l_U219 );
                            CLEAR_SEQUENCE_TASK( l_U219 );
                        }
                    }
                    SETTIMERA( 0 );
                    if (l_U123)
                    {
                        if (l_U134 >= 1.00000000)
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                            if (I == 0)
                            {
                                l_U201 = 18;
                            }
                            else
                            {
                                l_U201 = 21;
                            }
                        }
                        else
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                            if (I == 0)
                            {
                                l_U201 = 20;
                            }
                            else
                            {
                                l_U201 = 19;
                            }
                        }
                        if (NOT (IS_CHAR_INJURED( l_U221[0] )))
                        {
                            SAY_AMBIENT_SPEECH_WITH_VOICE( l_U221[0], "LAUGH", "PAIN_VOICE", 0, 1, 2 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U221[1] )))
                        {
                            SAY_AMBIENT_SPEECH_WITH_VOICE( l_U221[1], "SHIT", "PAIN_VOICE", 0, 1, 2 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U221[2] )))
                        {
                            SAY_AMBIENT_SPEECH_WITH_VOICE( l_U221[2], "WHOOP", "PAIN_VOICE", 0, 1, 2 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U221[3] )))
                        {
                            SAY_AMBIENT_SPEECH_WITH_VOICE( l_U221[3], "CHEER", "PAIN_VOICE", 0, 1, 2 );
                        }
                    }
                    l_U198 = 3;
                }
                if (l_U123)
                {
                    if (NOT (l_U198 == 3))
                    {
                        if (l_U201 == 0)
                        {
                            if (l_U177 > 5000.00000000)
                            {
                                if (l_U134 > 0.80000000)
                                {
                                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                    if (I == 0)
                                    {
                                        l_U201 = 24;
                                    }
                                    else
                                    {
                                        l_U201 = 23;
                                    }
                                    l_U177 = 0.00000000;
                                }
                                else if (l_U134 < -0.80000000)
                                {
                                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                    if (I == 0)
                                    {
                                        l_U201 = 22;
                                    }
                                    else
                                    {
                                        l_U201 = 25;
                                    }
                                    l_U177 = 0.00000000;
                                }
                            }
                        }
                    }
                }
                if (l_U123)
                {
                    if (NOT (l_U198 == 3))
                    {
                        if (l_U201 == 0)
                        {
                            if (l_U176 > 30000.00000000)
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                if (I == 0)
                                {
                                    l_U201 = 16;
                                }
                                else
                                {
                                    l_U201 = 17;
                                }
                                l_U176 = 0.00000000;
                            }
                        }
                    }
                }
                if (l_U123)
                {
                    if (NOT (l_U198 == 3))
                    {
                        if (l_U201 == 0)
                        {
                            if (l_U175 > 3000.00000000)
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                if (I == 0)
                                {
                                    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref I );
                                    switch (I)
                                    {
                                        case 0:
                                        l_U201 = 14;
                                        break;
                                        case 1:
                                        l_U201 = 12;
                                        break;
                                        case 2:
                                        l_U201 = 10;
                                        break;
                                    }
                                }
                                else
                                {
                                    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref I );
                                    switch (I)
                                    {
                                        case 0:
                                        l_U201 = 15;
                                        break;
                                        case 1:
                                        l_U201 = 13;
                                        break;
                                        case 2:
                                        l_U201 = 11;
                                        break;
                                    }
                                }
                                l_U175 = 0.00000000;
                            }
                        }
                    }
                }
                if (l_U123)
                {
                    if (l_U181 > 15000.00000000)
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref I );
                        if (NOT (IS_CHAR_INJURED( l_U221[I] )))
                        {
                            if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U221[I] )))
                            {
                                SAY_AMBIENT_SPEECH_WITH_VOICE( l_U221[I], "WHOOP", "PAIN_VOICE", 1, 1, 2 );
                                GENERATE_RANDOM_FLOAT_IN_RANGE( -5000.00000000, 5000.00000000, ref l_U181 );
                            }
                        }
                    }
                }
                if (l_U123)
                {
                    if (l_U182 > 15000.00000000)
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref I );
                        if (NOT (IS_CHAR_INJURED( l_U221[I] )))
                        {
                            if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U221[I] )))
                            {
                                SAY_AMBIENT_SPEECH_WITH_VOICE( l_U221[I], "CHEER", "PAIN_VOICE", 1, 1, 2 );
                                GENERATE_RANDOM_FLOAT_IN_RANGE( -5000.00000000, 5000.00000000, ref l_U182 );
                            }
                        }
                    }
                }
                break;
                case 3:
                if (NOT (IS_CHAR_INJURED( l_U220 )))
                {
                    if ((((((NOT (IS_CHAR_PLAYING_ANIM( l_U220, l_U212, "attack" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U220, l_U212, "defend" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U220, l_U212, "Celeb_A" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U220, l_U212, "Curse_Intro" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U220, l_U212, "Curse_Loop" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U220, l_U212, "Curse_Outro" ))))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U227 )))
                        {
                            if ((((((NOT (IS_CHAR_PLAYING_ANIM( l_U227, l_U212, "attack" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U227, l_U212, "defend" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U227, l_U212, "Celeb_A" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U227, l_U212, "Curse_Intro" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U227, l_U212, "Curse_Loop" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U227, l_U212, "Curse_Outro" ))))
                            {
                                l_U198 = 0;
                                SETTIMERA( 0 );
                            }
                        }
                    }
                }
                break;
            }
            sub_14795();
            sub_15301();
            if (IS_PLAYER_PLAYING( sub_2820() ))
            {
                bVar11 = false;
                if (IS_ANY_CHAR_SHOOTING_IN_AREA( l_U237 + (vector( -2.00000000, -20.00000000, -20.00000000)), l_U237 + (vector( 2.00000000, 20.00000000, 20.00000000)), 0 ))
                {
                    bVar11 = true;
                }
                for ( I = 0; I < 4; I++ )
                {
                    if (NOT (IS_CHAR_DEAD( l_U221[I] )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U221[I] )))
                        {
                            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U221[I], sub_5037(), 0 ))
                            {
                                l_U126 = 1;
                                bVar11 = true;
                            }
                        }
                        else
                        {
                            bVar11 = true;
                        }
                    }
                    else
                    {
                        bVar11 = true;
                    }
                }
                if (NOT (IS_CHAR_DEAD( l_U220 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U220 )))
                    {
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U220, sub_5037(), 0 ))
                        {
                            l_U126 = 1;
                            bVar11 = true;
                        }
                    }
                    else
                    {
                        bVar11 = true;
                    }
                }
                else
                {
                    bVar11 = true;
                }
                if (DOES_CHAR_EXIST( l_U227 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U227 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U227 )))
                        {
                            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U227, sub_5037(), 0 ))
                            {
                                l_U126 = 1;
                                bVar11 = true;
                            }
                        }
                        else
                        {
                            bVar11 = true;
                        }
                    }
                    else
                    {
                        bVar11 = true;
                    }
                }
                if (IS_CHAR_IN_ANY_CAR( sub_5037() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5037(), ref l_U288 );
                }
                if (NOT (IS_CAR_DEAD( l_U288 )))
                {
                    for ( I = 0; I < 4; I++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U221[I] )))
                        {
                            if (IS_CHAR_TOUCHING_VEHICLE( l_U221[I], l_U288 ))
                            {
                                bVar11 = true;
                                l_U126 = 1;
                            }
                            else
                            {
                                GET_CAR_SPEED( l_U288, ref fVar8 );
                                if (fVar8 < 5.00000000)
                                {
                                    if (LOCATE_CHAR_ON_FOOT_CAR_3D( l_U221[I], l_U288, 3.00000000, 3.00000000, 2.00000000, 0 ))
                                    {
                                        bVar11 = true;
                                        l_U126 = 1;
                                    }
                                }
                                else if (LOCATE_CHAR_ON_FOOT_CAR_3D( l_U221[I], l_U288, 10.00000000, 10.00000000, 2.00000000, 0 ))
                                {
                                    bVar11 = true;
                                    l_U126 = 1;
                                }
                            }
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U220 )))
                    {
                        if (IS_CHAR_TOUCHING_VEHICLE( l_U220, l_U288 ))
                        {
                            bVar11 = true;
                            l_U126 = 1;
                        }
                        else
                        {
                            GET_CAR_SPEED( l_U288, ref fVar8 );
                            if (fVar8 < 5.00000000)
                            {
                                if (LOCATE_CHAR_ON_FOOT_CAR_3D( l_U220, l_U288, 3.00000000, 3.00000000, 2.00000000, 0 ))
                                {
                                    bVar11 = true;
                                    l_U126 = 1;
                                }
                            }
                            else if (LOCATE_CHAR_ON_FOOT_CAR_3D( l_U220, l_U288, 10.00000000, 10.00000000, 2.00000000, 0 ))
                            {
                                bVar11 = true;
                                l_U126 = 1;
                            }
                        }
                    }
                    if (DOES_CHAR_EXIST( l_U227 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U227 )))
                        {
                            if (IS_CHAR_TOUCHING_VEHICLE( l_U227, l_U288 ))
                            {
                                bVar11 = true;
                                l_U126 = 1;
                            }
                            else
                            {
                                GET_CAR_SPEED( l_U288, ref fVar8 );
                                if (fVar8 < 5.00000000)
                                {
                                    if (LOCATE_CHAR_ON_FOOT_CAR_3D( l_U227, l_U288, 3.00000000, 3.00000000, 2.00000000, 0 ))
                                    {
                                        bVar11 = true;
                                        l_U126 = 1;
                                    }
                                }
                                else if (LOCATE_CHAR_ON_FOOT_CAR_3D( l_U227, l_U288, 10.00000000, 10.00000000, 2.00000000, 0 ))
                                {
                                    bVar11 = true;
                                    l_U126 = 1;
                                }
                            }
                        }
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U221[3] )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_5037(), l_U221[3], 0.30000000, 0.30000000, 1.00000000, 0 ))
                    {
                        bVar11 = true;
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U220 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_5037(), l_U220, 0.30000000, 0.30000000, 1.00000000, 0 ))
                    {
                        bVar11 = true;
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U227 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_5037(), l_U227, 0.30000000, 0.30000000, 1.00000000, 0 ))
                    {
                        bVar11 = true;
                    }
                }
                if ((NOT (IS_CHAR_INJURED( l_U220 ))) AND (NOT (IS_CHAR_INJURED( l_U227 ))))
                {
                    GET_CHAR_COORDINATES( l_U220, ref vVar2.x, ref vVar2.y, ref vVar2.z );
                    GET_CHAR_COORDINATES( l_U227, ref vVar5.x, ref vVar5.y, ref vVar5.z );
                    vVar2 = {vVar2 + vVar5};
                    vVar2 = {vVar2 / 2.00000000};
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_5037(), vVar2.x, vVar2.y, vVar2.z, 0.50000000, 0.50000000, 1.50000000, 0 ))
                    {
                        l_U126 = 1;
                        bVar11 = true;
                    }
                }
                if (sub_18351())
                {
                    GET_FRAME_TIME( ref fVar8 );
                    fVar8 *= 1000.00000000;
                    l_U183 += fVar8;
                    if (l_U183 > 2000)
                    {
                        l_U126 = 1;
                        bVar11 = true;
                    }
                }
                else
                {
                    l_U183 = 0.00000000;
                }
                if (g_U10486)
                {
                    l_U126 = 1;
                    bVar11 = true;
                }
                if (bVar11)
                {
                    if (l_U126)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U220 )))
                        {
                            SET_CHAR_RELATIONSHIP( l_U220, 5, 0 );
                        }
                        for ( I = 0; I < 4; I++ )
                        {
                            if (NOT (IS_CHAR_INJURED( l_U221[I] )))
                            {
                                SET_CHAR_RELATIONSHIP( l_U221[I], 5, 0 );
                            }
                        }
                        if (NOT (IS_CHAR_INJURED( l_U227 )))
                        {
                            SET_CHAR_RELATIONSHIP( l_U227, 5, 0 );
                        }
                        g_U10486 = 1;
                    }
                    sub_6062( 1 );
                }
            }
            bVar11 = true;
            if (l_U109)
            {
                if (NOT (IS_CONTROL_PRESSED( 2, 23 )))
                {
                    l_U109 = 0;
                }
            }
            if (bVar11)
            {
                l_U203 = 100;
                if (((DOES_CHAR_EXIST( l_U229 )) || (DOES_CHAR_EXIST( l_U230 ))) || (DOES_CHAR_EXIST( l_U231 )))
                {
                    l_U203 = 20;
                }
                else
                {
                    switch (l_U202)
                    {
                        case 0:
                        l_U203 = 100;
                        break;
                        case 1:
                        l_U203 = 200;
                        break;
                        case 2:
                        l_U203 = 300;
                        break;
                    }
                }
            }
            if (NOT l_U121)
            {
                if ((sub_19061()) AND (sub_20648( 2, 0 )))
                {
                    l_U228 = nil;
                    if (NOT (IS_SCORE_GREATER( sub_2820(), l_U203 - 1 )))
                    {
                        switch (l_U203)
                        {
                            case 20:
                            l_U213 = "ARM_G16";
                            if (((NOT (IS_CHAR_INJURED( l_U229 ))) AND (IS_CHAR_INJURED( l_U230 ))) AND (IS_CHAR_INJURED( l_U231 )))
                            {
                                l_U213 = "ARM_G16J";
                            }
                            if (((IS_CHAR_INJURED( l_U229 )) AND (NOT (IS_CHAR_INJURED( l_U230 )))) AND (IS_CHAR_INJURED( l_U231 )))
                            {
                                l_U213 = "ARM_G16T";
                            }
                            if (((IS_CHAR_INJURED( l_U229 )) AND (IS_CHAR_INJURED( l_U230 ))) AND (NOT (IS_CHAR_INJURED( l_U231 ))))
                            {
                                l_U213 = "ARM_G16C";
                            }
                            break;
                            case 100:
                            l_U213 = "ARM_G13";
                            break;
                            case 200:
                            l_U213 = "ARM_G14";
                            break;
                            case 300:
                            l_U213 = "ARM_G15";
                            break;
                        }
                    }
                    else
                    {
                        I = 0;
                        if (NOT (IS_CHAR_INJURED( l_U229 )))
                        {
                            I++;
                        }
                        if (NOT (IS_CHAR_INJURED( l_U230 )))
                        {
                            I++;
                        }
                        if (NOT (IS_CHAR_INJURED( l_U231 )))
                        {
                            I++;
                        }
                        if (I == 0)
                        {
                            switch (l_U202)
                            {
                                case 0:
                                l_U213 = "ARM_G10";
                                break;
                                case 1:
                                l_U213 = "ARM_G11";
                                break;
                                case 2:
                                l_U213 = "ARM_G12";
                                break;
                            }
                            l_U228 = l_U220;
                        }
                        else if (I == 1)
                        {
                            if (((NOT (IS_CHAR_INJURED( l_U229 ))) AND (IS_CHAR_INJURED( l_U230 ))) AND (IS_CHAR_INJURED( l_U231 )))
                            {
                                l_U213 = "ARM_G07";
                                l_U228 = l_U229;
                            }
                            if (((IS_CHAR_INJURED( l_U229 )) AND (NOT (IS_CHAR_INJURED( l_U230 )))) AND (IS_CHAR_INJURED( l_U231 )))
                            {
                                l_U213 = "ARM_G08";
                                l_U228 = l_U230;
                            }
                            if (((IS_CHAR_INJURED( l_U229 )) AND (IS_CHAR_INJURED( l_U230 ))) AND (NOT (IS_CHAR_INJURED( l_U231 ))))
                            {
                                l_U213 = "ARM_G09";
                                l_U228 = l_U231;
                            }
                        }
                        else if (I == 2)
                        {
                            l_U213 = "ARM_G01";
                        }
                        else if (I == 3)
                        {
                            l_U213 = "ARM_G01";
                        };;;;
                    }
                    if (NOT (IS_STRING_NULL( l_U214 )))
                    {
                        if (NOT (COMPARE_STRING( l_U214, l_U213 )))
                        {
                            sub_2540( 2, l_U214 );
                            l_U214 = l_U213;
                        }
                    }
                    else
                    {
                        l_U214 = l_U213;
                    }
                    if (NOT l_U109)
                    {
                        if ((sub_21848( 2, l_U214, 0 )) AND (IS_SCORE_GREATER( sub_2820(), l_U203 - 1 )))
                        {
                            bVar11 = true;
                            if (g_U12303)
                            {
                                if (NOT (sub_20096( 1 )))
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U229 )))
                                    {
                                        SAY_AMBIENT_SPEECH( l_U229, "GENERIC_NO_THANKS", 1, 1, 2 );
                                    }
                                    else if (NOT (IS_CHAR_INJURED( l_U230 )))
                                    {
                                        SAY_AMBIENT_SPEECH( l_U230, "GENERIC_NO_THANKS", 1, 1, 2 );
                                    }
                                    else if (NOT (IS_CHAR_INJURED( l_U231 )))
                                    {
                                        SAY_AMBIENT_SPEECH( l_U231, "GENERIC_NO_THANKS", 1, 1, 2 );
                                    };;;
                                    bVar11 = false;
                                }
                            }
                            if (bVar11)
                            {
                                l_U109 = 1;
                                if (I >= 2)
                                {
                                    SET_PLAYER_CONTROL( sub_2820(), 0 );
                                    l_U121 = 1;
                                }
                                else if (NOT sub_22738())
                                {
                                    sub_2540( 2, l_U214 );
                                }
                            }
                        }
                    }
                }
                else
                {
                    sub_2540( 2, l_U214 );
                }
            }
            else if (NOT sub_19061())
            {
                l_U121 = 0;
            }
            l_U228 = nil;
            bVar11 = false;
            if ((((NOT (IS_CHAR_INJURED( l_U229 ))) AND (NOT (IS_CHAR_INJURED( l_U230 )))) AND (NOT (IS_CHAR_INJURED( l_U231 )))) AND (l_U121))
            {
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_G02" )))
                {
                    PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "ARM_G02", "NULL" );
                }
                if (((IS_BUTTON_PRESSED( 0, 16 )) AND (IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 115 )) AND (NOT IS_USING_CONTROLLER())) AND (NOT bVar11)))
                {
                    l_U228 = l_U229;
                    bVar11 = true;
                }
                if (((IS_BUTTON_PRESSED( 0, 17 )) AND (IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 116 )) AND (NOT IS_USING_CONTROLLER())) AND (NOT bVar11)))
                {
                    l_U228 = l_U230;
                    bVar11 = true;
                }
                if (((IS_BUTTON_PRESSED( 0, 14 )) AND (IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 117 )) AND (NOT IS_USING_CONTROLLER())) AND (NOT bVar11)))
                {
                    l_U228 = l_U231;
                    bVar11 = true;
                }
            }
            if ((((NOT (IS_CHAR_INJURED( l_U229 ))) AND (NOT (IS_CHAR_INJURED( l_U230 )))) AND (IS_CHAR_INJURED( l_U231 ))) AND (l_U121))
            {
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_G03" )))
                {
                    PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "ARM_G03", "NULL" );
                }
                if (((IS_BUTTON_PRESSED( 0, 16 )) AND (IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 115 )) AND (NOT IS_USING_CONTROLLER())) AND (NOT bVar11)))
                {
                    l_U228 = l_U229;
                    bVar11 = true;
                }
                if (((IS_BUTTON_PRESSED( 0, 17 )) AND (IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 116 )) AND (NOT IS_USING_CONTROLLER())) AND (NOT bVar11)))
                {
                    l_U228 = l_U230;
                    bVar11 = true;
                }
            }
            if ((((NOT (IS_CHAR_INJURED( l_U229 ))) AND (IS_CHAR_INJURED( l_U230 ))) AND (NOT (IS_CHAR_INJURED( l_U231 )))) AND (l_U121))
            {
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_G04" )))
                {
                    PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "ARM_G04", "NULL" );
                }
                if (((IS_BUTTON_PRESSED( 0, 16 )) AND (IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 115 )) AND (NOT IS_USING_CONTROLLER())) AND (NOT bVar11)))
                {
                    l_U228 = l_U229;
                    bVar11 = true;
                }
                if (((IS_BUTTON_PRESSED( 0, 17 )) AND (IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 116 )) AND (NOT IS_USING_CONTROLLER())) AND (NOT bVar11)))
                {
                    l_U228 = l_U231;
                    bVar11 = true;
                }
            }
            if ((((IS_CHAR_INJURED( l_U229 )) AND (NOT (IS_CHAR_INJURED( l_U230 )))) AND (NOT (IS_CHAR_INJURED( l_U231 )))) AND (l_U121))
            {
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_G05" )))
                {
                    PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "ARM_G05", "NULL" );
                }
                if (((IS_BUTTON_PRESSED( 0, 16 )) AND (IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 115 )) AND (NOT IS_USING_CONTROLLER())) AND (NOT bVar11)))
                {
                    l_U228 = l_U230;
                    bVar11 = true;
                }
                if (((IS_BUTTON_PRESSED( 0, 17 )) AND (IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 116 )) AND (NOT IS_USING_CONTROLLER())) AND (NOT bVar11)))
                {
                    l_U228 = l_U231;
                    bVar11 = true;
                }
            }
            if (((NOT (IS_CHAR_INJURED( l_U229 ))) AND (IS_CHAR_INJURED( l_U230 ))) AND (IS_CHAR_INJURED( l_U231 )))
            {
                l_U121 = 0;
                bVar11 = false;
            }
            if (((IS_CHAR_INJURED( l_U229 )) AND (NOT (IS_CHAR_INJURED( l_U230 )))) AND (IS_CHAR_INJURED( l_U231 )))
            {
                l_U121 = 0;
                bVar11 = false;
            }
            if (((IS_CHAR_INJURED( l_U229 )) AND (IS_CHAR_INJURED( l_U230 ))) AND (NOT (IS_CHAR_INJURED( l_U231 ))))
            {
                l_U121 = 0;
                bVar11 = false;
            }
            if (((IS_CHAR_INJURED( l_U229 )) AND (IS_CHAR_INJURED( l_U230 ))) AND (IS_CHAR_INJURED( l_U231 )))
            {
                l_U121 = 0;
                bVar11 = false;
            }
            if (bVar11)
            {
                if (NOT sub_22738())
                {
                    bVar11 = false;
                }
            }
            if (NOT bVar11)
            {
                if ((NOT l_U109) || (NOT l_U121))
                {
                    if ((IS_CONTROL_PRESSED( 2, 23 )) || (NOT l_U121))
                    {
                        CLEAR_HELP();
                        l_U121 = 0;
                        l_U109 = 1;
                        sub_2540( 2, l_U214 );
                        SET_PLAYER_CONTROL( sub_2820(), 1 );
                    }
                }
            }
            break;
            case 2:
            if (((((NOT (HAS_MODEL_LOADED( l_U205 ))) || (NOT (HAS_MODEL_LOADED( l_U206 )))) || (NOT (HAVE_ANIMS_LOADED( l_U212 )))) || (NOT (HAS_MODEL_LOADED( -911507684 )))) || (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( "ARMWRES", 3 ))))
            {
                REQUEST_ADDITIONAL_TEXT( "ARMWRES", 3 );
                REQUEST_MODEL( l_U205 );
                REQUEST_MODEL( l_U206 );
                REQUEST_ANIMS( l_U212 );
                REQUEST_MODEL( -911507684 );
            }
            else if (NOT (IS_CHAR_INJURED( l_U228 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U228 );
            }
            if (NOT (IS_CHAR_INJURED( l_U221[3] )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U221[3] );
            }
            WAIT( 0 );
            sub_24929();
            if (DOES_CHAR_EXIST( l_U227 ))
            {
                if (NOT (l_U227 == sub_5037()))
                {
                    DELETE_CHAR( ref l_U227 );
                }
            }
            if (DOES_CHAR_EXIST( l_U228 ))
            {
                if (DOES_CHAR_EXIST( l_U220 ))
                {
                    if (NOT (l_U228 == l_U220))
                    {
                        DELETE_CHAR( ref l_U220 );
                    }
                }
            }
            l_U220 = l_U228;
            sub_6715();
            if (NOT (IS_CHAR_INJURED( l_U220 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U220 );
            }
            if (NOT (IS_CHAR_INJURED( l_U227 )))
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U227, 1 );
            }
            if (NOT (IS_CHAR_INJURED( l_U228 )))
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U228, 1 );
            }
            if (NOT (IS_CHAR_INJURED( l_U220 )))
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U220, 1 );
            }
            I = 0;
            if ((NOT (IS_CHAR_INJURED( l_U229 ))) AND (NOT (l_U220 == l_U229)))
            {
                if (DOES_CHAR_EXIST( l_U221[I] ))
                {
                    DELETE_CHAR( ref l_U221[I] );
                }
                l_U221[I] = l_U229;
                I++;
            }
            if ((NOT (IS_CHAR_INJURED( l_U230 ))) AND (NOT (l_U220 == l_U230)))
            {
                if (DOES_CHAR_EXIST( l_U221[I] ))
                {
                    DELETE_CHAR( ref l_U221[I] );
                }
                l_U221[I] = l_U230;
                I++;
            }
            if ((NOT (IS_CHAR_INJURED( l_U231 ))) AND (NOT (l_U220 == l_U231)))
            {
                if (DOES_CHAR_EXIST( l_U221[I] ))
                {
                    DELETE_CHAR( ref l_U221[I] );
                }
                l_U221[I] = l_U231;
                I++;
            }
            sub_7945();
            if (DOES_OBJECT_EXIST( l_U208 ))
            {
                DELETE_OBJECT( ref l_U208 );
            }
            CREATE_OBJECT( -195381842, l_U234._fU0, l_U234._fU4, l_U234._fU8, ref l_U208, 1 );
            SET_OBJECT_HEADING( l_U208, l_U129 );
            FREEZE_OBJECT_POSITION( l_U208, 1 );
            SET_OBJECT_VISIBLE( l_U208, 0 );
            SET_OBJECT_COLLISION( l_U208, 0 );
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
            if (I == 0)
            {
                CREATE_CHAR( 26, l_U205, l_U234._fU0, l_U234._fU4, l_U234._fU8, ref l_U226, 1 );
            }
            else
            {
                CREATE_CHAR( 26, l_U206, l_U234._fU0, l_U234._fU4, l_U234._fU8, ref l_U226, 1 );
            }
            sub_7145( l_U226 );
            SET_CHAR_COORDINATES( l_U226, l_U234._fU0, l_U234._fU4, l_U234._fU8 );
            SET_CHAR_HEADING( l_U226, l_U129 );
            SET_CHAR_COLLISION( l_U226, l_U125 );
            FREEZE_CHAR_POSITION( l_U226, 1 );
            if (l_U202 == 0)
            {
                SET_ROOM_FOR_CHAR_BY_KEY( l_U226, l_U185 );
            }
            ATTACH_PED_TO_OBJECT( l_U226, l_U208, 0, 0.00000000, 0.00000000, 0.00000000, l_U129, 360.00000000, 0, 0 );
            if (DOES_CHAR_EXIST( l_U227 ))
            {
                if (NOT (l_U227 == sub_5037()))
                {
                    DELETE_CHAR( ref l_U227 );
                    l_U227 = nil;
                }
            }
            if (IS_PLAYER_PLAYING( sub_2820() ))
            {
                SET_PLAYER_CONTROL( sub_2820(), 0 );
                SHAKE_PLAYERPAD_WHEN_CONTROLLER_DISABLED();
                SET_CHAR_COORDINATES( sub_5037(), l_U234._fU0, l_U234._fU4, l_U234._fU8 - 1.00000000 );
                SET_CHAR_HEADING( sub_5037(), l_U129 );
                SET_CHAR_COLLISION( sub_5037(), l_U125 );
                FREEZE_CHAR_POSITION( sub_5037(), 1 );
                if (l_U202 == 0)
                {
                    SET_ROOM_FOR_CHAR_BY_KEY( sub_5037(), l_U185 );
                }
                ATTACH_PED_TO_OBJECT( sub_5037(), l_U208, 0, 0.00000000, 0.00000000, 0.00000000, l_U129, 360.00000000, 0, 0 );
                HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_5037(), 1 );
            }
            l_U227 = sub_5037();
            if (l_U202 == 0)
            {
                LOAD_SCENE_FOR_ROOM_BY_KEY( l_U204, l_U185 );
            }
            sub_14795();
            if (NOT (IS_CHAR_INJURED( l_U220 )))
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( l_U220, l_U212, "stand_wait" )))
                {
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U220, "stand_wait", l_U212, 4.00000000, 1, 0, 0, 0, -1 );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U227 )))
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( l_U227, l_U212, "stand_wait" )))
                {
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U227, "stand_wait", l_U212, 4.00000000, 1, 0, 0, 0, -1 );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U220 )))
            {
                sub_8953( l_U220 );
            }
            if (NOT (IS_CHAR_INJURED( l_U227 )))
            {
                sub_8953( l_U227 );
            }
            if (NOT (IS_CHAR_INJURED( l_U221[3] )))
            {
                sub_8953( l_U221[3] );
            }
            l_U119 = 1;
            sub_15301();
            if (NOT l_U110)
            {
                DISPLAY_RADAR( 0 );
                BEGIN_CAM_COMMANDS( ref l_U187 );
                l_U110 = 1;
                CREATE_CAM( 14, ref l_U127 );
                SET_CAM_POS( l_U127, l_U246[0]._fU0, l_U246[0]._fU4, l_U246[0]._fU8 );
                SET_CAM_ROT( l_U127, l_U259[0]._fU0, l_U259[0]._fU4, l_U259[0]._fU8 );
                SET_CAM_FOV( l_U127, l_U157[0] );
                SET_CAM_ACTIVE( l_U127, 1 );
                SET_CAM_PROPAGATE( l_U127, 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                l_U197 = 0;
            }
            SETTIMERA( 0 );
            CLEAR_HELP();
            l_U135 = 0.00000000;
            l_U136 = 100.00000000;
            l_U137 = 0.00000000;
            l_U138 = 100.00000000;
            l_U134 = 0.00000000;
            l_U186 = 0;
            l_U199 = 0;
            l_U200 = 0;
            l_U184 = 3;;
            break;
            case 3:
            if (NOT l_U120)
            {
                l_U227 = sub_5037();
                if (NOT (IS_CHAR_INJURED( l_U226 )))
                {
                    SET_CHAR_VISIBLE( l_U226, 0 );
                }
                if (NOT (IS_CHAR_INJURED( sub_5037() )))
                {
                    SET_CHAR_VISIBLE( sub_5037(), 1 );
                }
            }
            else
            {
                l_U227 = l_U226;
                if (NOT (IS_CHAR_INJURED( sub_5037() )))
                {
                    SET_CHAR_VISIBLE( sub_5037(), 0 );
                }
                if (NOT (IS_CHAR_INJURED( l_U226 )))
                {
                    SET_CHAR_VISIBLE( l_U226, 1 );
                }
            }
            sub_15301();
            switch (l_U186)
            {
                case 0:
                if (NOT (IS_CHAR_INJURED( l_U220 )))
                {
                    if (NOT (IS_CHAR_PLAYING_ANIM( l_U220, l_U212, "stand_wait" )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U220, "stand_wait", l_U212, 4.00000000, 1, 0, 0, 0, -1 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U227 )))
                {
                    if (NOT (IS_CHAR_PLAYING_ANIM( l_U227, l_U212, "stand_wait" )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U227, "stand_wait", l_U212, 4.00000000, 1, 0, 0, 0, -1 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U220 )))
                {
                    if (IS_CHAR_PLAYING_ANIM( l_U220, l_U212, "stand_wait" ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U227 )))
                        {
                            if (IS_CHAR_PLAYING_ANIM( l_U227, l_U212, "stand_wait" ))
                            {
                                if (TIMERA() > 2000)
                                {
                                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                    if (I == 0)
                                    {
                                        l_U201 = 1;
                                    }
                                    else
                                    {
                                        l_U201 = 3;
                                    }
                                    l_U186 = 1;
                                }
                            }
                        }
                    }
                }
                break;
                case 1:
                if ((NOT (IS_CHAR_INJURED( l_U220 ))) AND (NOT (IS_CHAR_INJURED( l_U227 ))))
                {
                    if ((((NOT (IS_CHAR_PLAYING_ANIM( l_U220, l_U212, "idle_to_neutral" ))) AND (sub_10071( l_U220, l_U212, "Curse_Outro" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U227, l_U212, "idle_to_neutral" )))) AND (sub_10071( l_U227, l_U212, "Curse_Outro" )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U220, "idle_to_neutral", l_U212, 4.00000000, 0, 0, 0, 1, -1 );
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U227, "idle_to_neutral", l_U212, 4.00000000, 0, 0, 0, 1, -1 );
                    }
                    if (IS_CHAR_PLAYING_ANIM( l_U220, l_U212, "idle_to_neutral" ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( l_U220, l_U212, "idle_to_neutral", ref fVar8 );
                        if (fVar8 > 0.98000000)
                        {
                            if (IS_CHAR_PLAYING_ANIM( l_U227, l_U212, "idle_to_neutral" ))
                            {
                                GET_CHAR_ANIM_CURRENT_TIME( l_U227, l_U212, "idle_to_neutral", ref fVar8 );
                                if (fVar8 > 0.98000000)
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U221[3] )))
                                    {
                                        OPEN_SEQUENCE_TASK( ref l_U219 );
                                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Ref_Intro", l_U212, 4.00000000, 0, 0, 0, 0, -1 );
                                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Ref_Loop", l_U212, 4.00000000, 1, 0, 0, 0, -1 );
                                        CLOSE_SEQUENCE_TASK( l_U219 );
                                        TASK_PERFORM_SEQUENCE( l_U221[3], l_U219 );
                                        CLEAR_SEQUENCE_TASK( l_U219 );
                                    }
                                    l_U132 = 1.00000000;
                                    l_U134 = 0.00000000;
                                    if ((l_U199 == 0) AND (l_U200 == 0))
                                    {
                                        l_U167 = sub_28164( l_U220 );
                                    }
                                    if ((l_U199 == 1) AND (l_U200 == 0))
                                    {
                                        l_U167 = (sub_28164( l_U220 )) + 0.10000000;
                                    }
                                    if ((l_U199 == 0) AND (l_U200 == 1))
                                    {
                                        l_U167 = (sub_28164( l_U220 )) - 0.10000000;
                                    }
                                    if ((l_U199 == 1) AND (l_U200 == 1))
                                    {
                                        l_U167 = sub_28164( l_U220 );
                                    }
                                    l_U186 = 2;
                                }
                            }
                        }
                    }
                }
                break;
                case 2:
                if ((l_U199 == 0) AND (l_U200 == 0))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_H01" )))
                    {
                        PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "ARM_H01", "NULL" );
                    }
                }
                if ((l_U199 == 1) AND (l_U200 == 0))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_H08" )))
                    {
                        PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "ARM_H08", "NULL" );
                    }
                }
                if ((l_U199 == 0) AND (l_U200 == 1))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_H09" )))
                    {
                        PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "ARM_H09", "NULL" );
                    }
                }
                if ((l_U199 == 1) AND (l_U200 == 1))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_H10" )))
                    {
                        PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "ARM_H10", "NULL" );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U220 )))
                {
                    if (IS_CHAR_PLAYING_ANIM( l_U220, l_U212, "idle_to_neutral" ))
                    {
                        ;
                    }
                    else
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U220, "idle_to_neutral", l_U212, 8.00000000, 0, 0, 0, 1, -1 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U227 )))
                {
                    if (IS_CHAR_PLAYING_ANIM( l_U227, l_U212, "idle_to_neutral" ))
                    {
                        ;
                    }
                    else
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U227, "idle_to_neutral", l_U212, 8.00000000, 0, 0, 0, 1, -1 );
                    }
                }
                if (NOT sub_29005())
                {
                    if (l_U111)
                    {
                        if ((NOT (IS_CONTROL_PRESSED( 2, 77 ))) AND (NOT (IS_CONTROL_PRESSED( 2, 137 ))))
                        {
                            l_U111 = 0;
                        }
                    }
                    if (NOT l_U111)
                    {
                        if ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 2, 137 )))
                        {
                            SETTIMERA( 0 );
                            l_U201 = 5;
                            l_U186 = 3;
                        }
                    }
                }
                break;
                case 3:
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_H02" )))
                {
                    PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "ARM_H02", "NULL" );
                }
                if (l_U201 == 0)
                {
                    GET_GAME_TIMER( ref l_U190[0] );
                    GET_GAME_TIMER( ref l_U190[1] );
                    l_U134 = 0.00000000;
                    l_U135 = 0.00000000;
                    l_U137 = 0.00000000;
                    l_U136 = 100.00000000;
                    l_U138 = 100.00000000;
                    l_U197 = 0;
                    if (NOT l_U116)
                    {
                        l_U137 = l_U139 * l_U167;
                    }
                    if (NOT (IS_CHAR_INJURED( l_U221[3] )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U221[3], "Ref_Outro", l_U212, 4.00000000, 0, 0, 0, 0, -1 );
                    }
                    sub_10810( l_U221[0], 0 );
                    sub_10810( l_U221[1], 1 );
                    sub_10810( l_U221[2], 2 );
                    l_U175 = 0.00000000;
                    l_U176 = 0.00000000;
                    l_U177 = 0.00000000;
                    GENERATE_RANDOM_FLOAT_IN_RANGE( 10000.00000000, 15000.00000000, ref l_U181 );
                    GENERATE_RANDOM_FLOAT_IN_RANGE( 10000.00000000, 15000.00000000, ref l_U182 );
                    if (NOT (IS_CHAR_INJURED( l_U227 )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U227, "attack", l_U212, 1000.00000000, 0, 0, 0, 1, -1 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U220 )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U220, "defend", l_U212, 1000.00000000, 0, 0, 0, 1, -1 );
                    }
                    SETTIMERA( 0 );
                    l_U186 = 4;
                }
                break;
                case 4:
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_H02" )))
                {
                    PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "ARM_H02", "NULL" );
                }
                l_U148[0] = l_U141;
                if (NOT l_U113[0])
                {
                    if (sub_29735( 0 ))
                    {
                        GET_GAME_TIMER( ref I );
                        l_U193 = I - l_U190[0];
                        l_U151 = (TO_FLOAT( l_U193 )) / 1000.00000000;
                        l_U145[0] = 1.00000000 / l_U151;
                        if (l_U145[0] > l_U139)
                        {
                            l_U145[0] = l_U139;
                        }
                        l_U148[0] = (l_U145[0] - l_U135) / l_U151;
                        l_U142[0] = l_U145[0];
                        l_U190[0] = I;
                        l_U113[0] = 1;
                    }
                }
                else if (sub_30043( 0 ))
                {
                    GET_GAME_TIMER( ref I );
                    l_U193 = I - l_U190[0];
                    l_U151 = (TO_FLOAT( l_U193 )) / 1000.00000000;
                    l_U145[0] = 1.00000000 / l_U151;
                    if (l_U145[0] > l_U139)
                    {
                        l_U145[0] = l_U139;
                    }
                    l_U148[0] = (l_U145[0] - l_U135) / l_U151;
                    l_U142[0] = l_U145[0];
                    l_U190[0] = I;
                    l_U113[0] = 0;
                }
                if (l_U148[0] < l_U141)
                {
                    l_U148[0] = l_U141;
                }
                GET_FRAME_TIME( ref fVar8 );
                l_U135 += fVar8 * l_U148[0];
                if (l_U135 < 0.00000000)
                {
                    l_U135 = 0.00000000;
                }
                if (l_U135 > l_U139)
                {
                    l_U135 = l_U139;
                }
                if (l_U116)
                {
                    l_U148[1] = l_U141;
                    if (NOT l_U113[1])
                    {
                        if (sub_29735( 99 ))
                        {
                            GET_GAME_TIMER( ref I );
                            l_U193 = I - l_U190[1];
                            l_U151 = (TO_FLOAT( l_U193 )) / 1000.00000000;
                            l_U145[1] = 1.00000000 / l_U151;
                            if (l_U145[1] > l_U139)
                            {
                                l_U145[1] = l_U139;
                            }
                            l_U148[1] = (l_U145[1] - l_U135) / l_U151;
                            l_U142[1] = l_U145[1];
                            l_U190[1] = I;
                            l_U113[1] = 1;
                        }
                    }
                    else if (sub_30043( 99 ))
                    {
                        GET_GAME_TIMER( ref I );
                        l_U193 = I - l_U190[1];
                        l_U151 = (TO_FLOAT( l_U193 )) / 1000.00000000;
                        l_U145[1] = 1.00000000 / l_U151;
                        if (l_U145[1] > l_U139)
                        {
                            l_U145[1] = l_U139;
                        }
                        l_U148[1] = (l_U145[1] - l_U137) / l_U151;
                        l_U142[1] = l_U145[1];
                        l_U190[1] = I;
                        l_U113[1] = 0;
                    }
                }
                else if (TIMERA() > l_U194)
                {
                    I = TIMERA() - l_U194;
                    SETTIMERA( I );
                }
                if (l_U194 > 0)
                {
                    fVar8 = (TO_FLOAT( TIMERA() )) / (TO_FLOAT( l_U194 ));
                    fVar8 *= 360.00000000;
                    l_U148[1] = SIN( fVar8 );
                }
                else
                {
                    l_U148[1] = 0.00000000;
                }
                if (l_U148[1] < l_U141)
                {
                    l_U148[1] = l_U141;
                }
                GET_FRAME_TIME( ref fVar8 );
                l_U137 += fVar8 * l_U148[1];
                if (l_U137 < 0.00000000)
                {
                    l_U137 = 0.00000000;
                }
                if (l_U137 > l_U139)
                {
                    l_U137 = l_U139;
                }
                if (l_U117)
                {
                    l_U135 = l_U137;
                }
                fVar8 = l_U135 - l_U137;
                fVar8 /= l_U139;
                GET_FRAME_TIME( ref fVar9 );
                l_U134 += fVar8 * fVar9;
                fVar8 = l_U135 - l_U137;
                fVar8 /= l_U139;
                if (fVar8 > 0.00000000)
                {
                    l_U152 = 1.00000000 - fVar8;
                }
                else
                {
                    l_U152 = 1.00000000 - (fVar8 * -1.00000000);
                }
                if (l_U152 > 0.50000000)
                {
                    l_U152 += -0.50000000;
                    l_U152 /= 0.50000000;
                    l_U152 *= ((l_U135 + l_U137) * 0.50000000) / l_U139;
                }
                else
                {
                    l_U152 = 0.00000000;
                }
                if (l_U154 > l_U153)
                {
                    fVar8 = l_U153 - l_U154;
                    l_U154 = fVar8;
                }
                fVar8 = l_U154 / l_U153;
                fVar8 *= 360.00000000;
                l_U156 = ((SIN( fVar8 )) * l_U155) * l_U152;
                if (l_U162 >= l_U163)
                {
                    if (l_U152 > l_U164)
                    {
                        fVar9 = l_U135 / l_U139;
                        if (fVar9 > 1.00000000)
                        {
                            fVar9 = 1.00000000;
                        }
                        if (fVar9 < 0.00000000)
                        {
                            fVar9 = 0.00000000;
                        }
                        I = ROUND( ((l_U195 - l_U196) * fVar9) + l_U196 );
                        if (I > 255)
                        {
                            I = 255;
                        }
                        SHAKE_PAD( 0, ROUND( l_U163 ), I );
                    }
                    l_U162 = 0.00000000;
                }
                if (l_U134 > 1.00000000)
                {
                    l_U134 = 1.00000000;
                }
                if (l_U134 < -1.00000000)
                {
                    l_U134 = -1.00000000;
                }
                l_U132 = l_U134 + l_U156;
                if (l_U132 > 1.00000000)
                {
                    l_U132 = 1.00000000;
                }
                if (l_U132 < -1.00000000)
                {
                    l_U132 = -1.00000000;
                }
                if (l_U134 >= 0.00000000)
                {
                    if (l_U132 < 0.00000000)
                    {
                        l_U132 = 0.00000000;
                    }
                    if (NOT (IS_CHAR_INJURED( l_U227 )))
                    {
                        if (NOT (IS_CHAR_PLAYING_ANIM( l_U227, l_U212, "attack" )))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U227, "attack", l_U212, 4.00000000, 0, 0, 0, 1, -1 );
                        }
                        else
                        {
                            SET_CHAR_ANIM_SPEED( l_U227, l_U212, "attack", 0.00000000 );
                            SET_CHAR_ANIM_CURRENT_TIME( l_U227, l_U212, "attack", l_U132 );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U220 )))
                    {
                        if (NOT (IS_CHAR_PLAYING_ANIM( l_U220, l_U212, "defend" )))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U220, "defend", l_U212, 4.00000000, 0, 0, 0, 1, -1 );
                        }
                        else
                        {
                            SET_CHAR_ANIM_SPEED( l_U220, l_U212, "defend", 0.00000000 );
                            SET_CHAR_ANIM_CURRENT_TIME( l_U220, l_U212, "defend", l_U132 );
                        }
                    }
                }
                else if (l_U132 > 0.00000000)
                {
                    l_U132 = 0.00000000;
                }
                if (NOT (IS_CHAR_INJURED( l_U227 )))
                {
                    if (NOT (IS_CHAR_PLAYING_ANIM( l_U227, l_U212, "defend" )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U227, "defend", l_U212, 4.00000000, 0, 0, 0, 1, -1 );
                    }
                    else
                    {
                        SET_CHAR_ANIM_SPEED( l_U227, l_U212, "defend", 0.00000000 );
                        SET_CHAR_ANIM_CURRENT_TIME( l_U227, l_U212, "defend", l_U132 * -1.00000000 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U220 )))
                {
                    if (NOT (IS_CHAR_PLAYING_ANIM( l_U220, l_U212, "attack" )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U220, "attack", l_U212, 4.00000000, 0, 0, 0, 1, -1 );
                    }
                    else
                    {
                        SET_CHAR_ANIM_SPEED( l_U220, l_U212, "attack", 0.00000000 );
                        SET_CHAR_ANIM_CURRENT_TIME( l_U220, l_U212, "attack", l_U132 * -1.00000000 );
                    }
                }
                if ((l_U134 >= 1.00000000) || (l_U134 <= -1.00000000))
                {
                    CLEAR_HELP();
                    if (NOT (IS_CHAR_INJURED( l_U221[0] )))
                    {
                        SAY_AMBIENT_SPEECH_WITH_VOICE( l_U221[0], "LAUGH", "PAIN_VOICE", 0, 1, 2 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U221[1] )))
                    {
                        SAY_AMBIENT_SPEECH_WITH_VOICE( l_U221[1], "SHIT", "PAIN_VOICE", 0, 1, 2 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U221[2] )))
                    {
                        SAY_AMBIENT_SPEECH_WITH_VOICE( l_U221[2], "WHOOP", "PAIN_VOICE", 0, 1, 2 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U221[3] )))
                    {
                        SAY_AMBIENT_SPEECH_WITH_VOICE( l_U221[3], "CHEER", "PAIN_VOICE", 0, 1, 2 );
                    }
                    if (l_U134 >= 1.00000000)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U227 )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U219 );
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Celeb_A", l_U212, 1000.00000000, 0, 1, 1, 0, -1 );
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "stand_wait", l_U212, 4.00000000, 1, 0, 0, 0, -1 );
                            CLOSE_SEQUENCE_TASK( l_U219 );
                            TASK_PERFORM_SEQUENCE( l_U227, l_U219 );
                            CLEAR_SEQUENCE_TASK( l_U219 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U220 )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U219 );
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Curse_Intro", l_U212, 4.00000000, 0, 1, 1, 0, -1 );
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Curse_Loop", l_U212, 4.00000000, 1, 1, 1, 0, -1 );
                            CLOSE_SEQUENCE_TASK( l_U219 );
                            TASK_PERFORM_SEQUENCE( l_U220, l_U219 );
                            CLEAR_SEQUENCE_TASK( l_U219 );
                        }
                        l_U199++;
                    }
                    if (l_U134 <= -1.00000000)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U220 )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U219 );
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Celeb_A", l_U212, 1000.00000000, 0, 1, 1, 0, -1 );
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "stand_wait", l_U212, 4.00000000, 1, 0, 0, 0, -1 );
                            CLOSE_SEQUENCE_TASK( l_U219 );
                            TASK_PERFORM_SEQUENCE( l_U220, l_U219 );
                            CLEAR_SEQUENCE_TASK( l_U219 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U227 )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U219 );
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Curse_Intro", l_U212, 4.00000000, 0, 1, 1, 0, -1 );
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Curse_Loop", l_U212, 4.00000000, 1, 1, 1, 0, -1 );
                            CLOSE_SEQUENCE_TASK( l_U219 );
                            TASK_PERFORM_SEQUENCE( l_U227, l_U219 );
                            CLEAR_SEQUENCE_TASK( l_U219 );
                        }
                        l_U200++;
                    }
                    if (l_U199 >= 2)
                    {
                        PRINT_NOW( "ARM_WIN", 5000, 1 );
                    }
                    else if (l_U200 >= 2)
                    {
                        PRINT_NOW( "ARM_LOSE", 5000, 1 );
                    }
                    if ((l_U199 < 2) AND (l_U200 < 2))
                    {
                        if (l_U134 >= 1.00000000)
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                            if (I == 0)
                            {
                                l_U201 = 18;
                            }
                            else
                            {
                                l_U201 = 21;
                            }
                        }
                        else
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                            if (I == 0)
                            {
                                l_U201 = 20;
                            }
                            else
                            {
                                l_U201 = 19;
                            }
                        }
                    }
                    else if (l_U199 == 2)
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                        if (I == 0)
                        {
                            l_U201 = 26;
                        }
                        else
                        {
                            l_U201 = 29;
                        }
                    }
                    else
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                        if (I == 0)
                        {
                            l_U201 = 27;
                        }
                        else
                        {
                            l_U201 = 28;
                        }
                    }
                    CLEAR_HELP();
                    SETTIMERA( 0 );
                    l_U186 = 11;
                }
                if (NOT (l_U186 == 11))
                {
                    if (l_U201 == 0)
                    {
                        if (l_U177 > 5000.00000000)
                        {
                            if (l_U134 > 0.80000000)
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                if (I == 0)
                                {
                                    l_U201 = 24;
                                }
                                else
                                {
                                    l_U201 = 23;
                                }
                                l_U177 = 0.00000000;
                            }
                            else if (l_U134 < -0.80000000)
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                if (I == 0)
                                {
                                    l_U201 = 22;
                                }
                                else
                                {
                                    l_U201 = 25;
                                }
                                l_U177 = 0.00000000;
                            }
                        }
                    }
                }
                if (NOT (l_U186 == 11))
                {
                    if (l_U201 == 0)
                    {
                        if (l_U176 > 30000.00000000)
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                            if (I == 0)
                            {
                                l_U201 = 16;
                            }
                            else
                            {
                                l_U201 = 17;
                            }
                            l_U176 = 0.00000000;
                        }
                    }
                }
                if (NOT (l_U186 == 11))
                {
                    if (l_U201 == 0)
                    {
                        if (l_U175 > 3000.00000000)
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                            if (I == 0)
                            {
                                if (l_U135 > l_U178)
                                {
                                    l_U201 = 14;
                                }
                                else if (l_U135 > l_U179)
                                {
                                    l_U201 = 12;
                                }
                                else
                                {
                                    l_U201 = 10;
                                }
                            }
                            else if (l_U137 > l_U178)
                            {
                                l_U201 = 15;
                            }
                            else if (l_U137 > l_U179)
                            {
                                l_U201 = 13;
                            }
                            else
                            {
                                l_U201 = 11;
                            };;;
                            l_U175 = 0.00000000;
                        }
                    }
                }
                if (l_U181 > 15000.00000000)
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref I );
                    if (NOT (IS_CHAR_INJURED( l_U221[I] )))
                    {
                        if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U221[I] )))
                        {
                            SAY_AMBIENT_SPEECH_WITH_VOICE( l_U221[I], "WHOOP", "PAIN_VOICE", 1, 1, 2 );
                            GENERATE_RANDOM_FLOAT_IN_RANGE( -5000.00000000, 5000.00000000, ref l_U181 );
                        }
                    }
                }
                if (l_U182 > 15000.00000000)
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref I );
                    if (NOT (IS_CHAR_INJURED( l_U221[I] )))
                    {
                        if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U221[I] )))
                        {
                            SAY_AMBIENT_SPEECH_WITH_VOICE( l_U221[I], "CHEER", "PAIN_VOICE", 1, 1, 2 );
                            GENERATE_RANDOM_FLOAT_IN_RANGE( -5000.00000000, 5000.00000000, ref l_U182 );
                        }
                    }
                }
                break;
                case 11:
                if (TIMERA() > 1000)
                {
                    if ((NOT (IS_CHAR_INJURED( l_U220 ))) AND (NOT (IS_CHAR_INJURED( l_U227 ))))
                    {
                        if ((((NOT (IS_CHAR_PLAYING_ANIM( l_U220, l_U212, "Celeb_A" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U227, l_U212, "Celeb_A" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U220, l_U212, "Curse_Intro" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U227, l_U212, "Curse_Intro" ))))
                        {
                            if (l_U199 >= 2)
                            {
                                ADD_SCORE( sub_2820(), l_U203 * 2 );
                                sub_34601( 3 );
                                INCREMENT_INT_STAT( 181, 1 );
                                INCREMENT_INT_STAT( 180, 1 );
                                sub_35220( 0 );
                                SETTIMERA( 0 );
                                l_U134 = 0.00000000;
                                l_U197 = 3;
                                l_U186 = 10;
                            }
                            else if (l_U200 >= 2)
                            {
                                if (NOT (IS_CHAR_INJURED( l_U228 )))
                                {
                                    I = GET_CHAR_MONEY( l_U228 );
                                    I += l_U203;
                                    SET_CHAR_MONEY( l_U228, I );
                                }
                                INCREMENT_INT_STAT( 180, 1 );
                                sub_35220( 1 );
                                SETTIMERA( 0 );
                                l_U134 = 0.00000000;
                                l_U197 = 3;
                                l_U186 = 10;
                            }
                            else if (TIMERA() > 4000)
                            {
                                if (IS_CHAR_PLAYING_ANIM( l_U220, l_U212, "Curse_Loop" ))
                                {
                                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U220, "Curse_Outro", l_U212, 4.00000000, 0, 0, 0, 1, -1 );
                                }
                                if (IS_CHAR_PLAYING_ANIM( l_U227, l_U212, "Curse_Loop" ))
                                {
                                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U227, "Curse_Outro", l_U212, 4.00000000, 0, 0, 0, 1, -1 );
                                }
                                SETTIMERA( 0 );
                                l_U134 = 0.00000000;
                                l_U197 = 0;
                                l_U186 = 1;
                            };;;
                        }
                    }
                }
                break;
                case 10:
                if (NOT (IS_SCORE_GREATER( sub_2820(), l_U203 - 1 )))
                {
                    if (IS_CHAR_PLAYING_ANIM( l_U220, l_U212, "Curse_Loop" ))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U220, "Curse_Outro", l_U212, 4.00000000, 0, 0, 0, 1, -1 );
                    }
                    if (IS_CHAR_PLAYING_ANIM( l_U227, l_U212, "Curse_Loop" ))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U227, "Curse_Outro", l_U212, 4.00000000, 0, 0, 0, 1, -1 );
                    }
                    sub_4986();
                }
                else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_H04" )))
                {
                    PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "ARM_H04", "NULL" );
                }
                if (IS_CONTROL_PRESSED( 2, 23 ))
                {
                    if (IS_CHAR_PLAYING_ANIM( l_U220, l_U212, "Curse_Loop" ))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U220, "Curse_Outro", l_U212, 4.00000000, 0, 0, 0, 0, -1 );
                        SET_CHAR_KEEP_TASK( l_U220, 1 );
                    }
                    if (IS_CHAR_PLAYING_ANIM( l_U227, l_U212, "Curse_Loop" ))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U227, "Curse_Outro", l_U212, 4.00000000, 0, 0, 0, 1, -1 );
                        SET_CHAR_KEEP_TASK( l_U227, 1 );
                    }
                    WAIT( 0 );
                    sub_4986();
                }
                else if ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 2, 137 )))
                {
                    if (IS_CHAR_PLAYING_ANIM( l_U220, l_U212, "Curse_Loop" ))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U220, "Curse_Outro", l_U212, 4.00000000, 0, 0, 0, 1, -1 );
                    }
                    if (IS_CHAR_PLAYING_ANIM( l_U227, l_U212, "Curse_Loop" ))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U227, "Curse_Outro", l_U212, 4.00000000, 0, 0, 0, 1, -1 );
                    }
                    l_U197 = 0;
                    CLEAR_HELP();
                    l_U199 = 0;
                    l_U200 = 0;
                    ADD_SCORE( sub_2820(), l_U203 * -1 );
                    l_U186 = 1;
                };;;
                break;
                case 5:
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_H03" )))
                {
                    PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "ARM_H03", "NULL" );
                }
                if (l_U109)
                {
                    if (NOT (IS_CONTROL_PRESSED( 2, 23 )))
                    {
                        l_U109 = 0;
                    }
                }
                else if (IS_CONTROL_PRESSED( 2, 23 ))
                {
                    sub_35220( 3 );
                    sub_4986();
                }
                if (NOT (IS_CONTROL_PRESSED( 2, 23 )))
                {
                    if ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 2, 137 )))
                    {
                        l_U111 = 1;
                        l_U186 = l_U188;
                    }
                }
                break;
                case 6:
                switch (l_U189)
                {
                    case 0:
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_HT1" )))
                    {
                        PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "ARM_HT1", "NULL" );
                    }
                    if (l_U111)
                    {
                        if ((NOT (IS_CONTROL_PRESSED( 2, 77 ))) AND (NOT (IS_CONTROL_PRESSED( 2, 137 ))))
                        {
                            l_U111 = 0;
                        }
                    }
                    if ((((IS_CONTROL_PRESSED( 2, 77 )) AND (NOT l_U111)) || ((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT l_U111))) || (TIMERA() > 5000))
                    {
                        SETTIMERA( 0 );
                        l_U111 = 1;
                        l_U189++;
                    }
                    break;
                    case 1:
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_HT2" )))
                    {
                        PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "ARM_HT2", "NULL" );
                    }
                    if (l_U111)
                    {
                        if ((NOT (IS_CONTROL_PRESSED( 2, 77 ))) AND (NOT (IS_CONTROL_PRESSED( 2, 137 ))))
                        {
                            l_U111 = 0;
                        }
                    }
                    if ((((IS_CONTROL_PRESSED( 2, 77 )) AND (NOT l_U111)) || ((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT l_U111))) || (TIMERA() > 5000))
                    {
                        l_U111 = 1;
                        SETTIMERA( 0 );
                        l_U189++;
                    }
                    break;
                    case 2:
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_HT3" )))
                    {
                        PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "ARM_HT3", "NULL" );
                    }
                    if (l_U111)
                    {
                        if ((NOT (IS_CONTROL_PRESSED( 2, 77 ))) AND (NOT (IS_CONTROL_PRESSED( 2, 137 ))))
                        {
                            l_U111 = 0;
                        }
                    }
                    if ((((IS_CONTROL_PRESSED( 2, 77 )) AND (NOT l_U111)) || ((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT l_U111))) || (TIMERA() > 5000))
                    {
                        l_U111 = 1;
                        l_U186 = 2;
                    }
                    break;
                }
                if (IS_CONTROL_PRESSED( 2, 23 ))
                {
                    l_U186 = 2;
                    l_U109 = 1;
                }
                break;
            }
            sub_37116();
            sub_14795();
            break;
        }
        if (DOES_OBJECT_EXIST( l_U210 ))
        {
            SET_OBJECT_COORDINATES( l_U210, l_U285._fU0, l_U285._fU4, l_U285._fU8 );
            SET_OBJECT_HEADING( l_U210, l_U180 );
        }
        if (((NOT sub_38135()) AND (NOT (IS_CHAR_INJURED( l_U227 )))) AND (NOT (IS_CHAR_INJURED( l_U220 ))))
        {
            if (l_U184 == 1)
            {
                bVar11 = false;
            }
            else
            {
                bVar11 = true;
            }
            switch (l_U201)
            {
                case 1:
                SAY_AMBIENT_SPEECH( l_U227, "ARM_WRESTLING_TAUNT_PRELIM", bVar11, 1, 2 );
                l_U201 = 4;
                break;
                case 3:
                SAY_AMBIENT_SPEECH( l_U220, "ARM_WRESTLING_TAUNT_PRELIM", bVar11, 1, 2 );
                l_U201 = 2;
                break;
                case 2:
                SAY_AMBIENT_SPEECH( l_U227, "ARM_WRESTLING_TAUNT_PRELIM_RESP", bVar11, 1, 2 );
                l_U201 = 30;
                break;
                case 4:
                SAY_AMBIENT_SPEECH( l_U220, "ARM_WRESTLING_TAUNT_PRELIM_RESP", bVar11, 1, 2 );
                l_U201 = 30;
                break;
                case 5:
                if (NOT (IS_CHAR_INJURED( l_U221[3] )))
                {
                    SAY_AMBIENT_SPEECH( l_U221[3], "ARM_WRESTLING_START", bVar11, 1, 2 );
                    l_U201 = 30;
                }
                break;
                case 6:
                SAY_AMBIENT_SPEECH( l_U227, "ARM_WRESTLING_TAUNT", bVar11, 1, 2 );
                l_U201 = 9;
                break;
                case 8:
                SAY_AMBIENT_SPEECH( l_U220, "ARM_WRESTLING_TAUNT", bVar11, 1, 2 );
                l_U201 = 7;
                break;
                case 7:
                SAY_AMBIENT_SPEECH( l_U227, "ARM_WRESTLING_TAUNT_RESP", bVar11, 1, 2 );
                l_U201 = 30;
                break;
                case 9:
                SAY_AMBIENT_SPEECH( l_U220, "ARM_WRESTLING_TAUNT_RESP", bVar11, 1, 2 );
                l_U201 = 30;
                break;
                case 10:
                SAY_AMBIENT_SPEECH( l_U227, "ARM_WRESTLING_GROAN_LOW", bVar11, 1, 2 );
                l_U201 = 30;
                break;
                case 11:
                SAY_AMBIENT_SPEECH( l_U220, "ARM_WRESTLING_GROAN_LOW", bVar11, 1, 2 );
                l_U201 = 30;
                break;
                case 12:
                SAY_AMBIENT_SPEECH( l_U227, "ARM_WRESTLING_GROAN_MED", bVar11, 1, 2 );
                l_U201 = 30;
                break;
                case 13:
                SAY_AMBIENT_SPEECH( l_U220, "ARM_WRESTLING_GROAN_MED", bVar11, 1, 2 );
                l_U201 = 30;
                break;
                case 14:
                SAY_AMBIENT_SPEECH( l_U227, "ARM_WRESTLING_GROAN_HIGH", bVar11, 1, 2 );
                l_U201 = 30;
                break;
                case 15:
                SAY_AMBIENT_SPEECH( l_U220, "ARM_WRESTLING_GROAN_HIGH", bVar11, 1, 2 );
                l_U201 = 30;
                break;
                case 16:
                SAY_AMBIENT_SPEECH( l_U227, "ARM_WRESTLING_TIRED", bVar11, 1, 2 );
                l_U201 = 30;
                break;
                case 17:
                SAY_AMBIENT_SPEECH( l_U220, "ARM_WRESTLING_TIRED", bVar11, 1, 2 );
                l_U201 = 30;
                break;
                case 18:
                SAY_AMBIENT_SPEECH( l_U227, "ARM_WRESTLING_POINT_OF_VICTORY", bVar11, 1, 2 );
                l_U201 = 30;
                break;
                case 19:
                SAY_AMBIENT_SPEECH( l_U220, "ARM_WRESTLING_POINT_OF_VICTORY", bVar11, 1, 2 );
                l_U201 = 30;
                break;
                case 20:
                SAY_AMBIENT_SPEECH( l_U227, "ARM_WRESTLING_POINT_OF_DEFEAT", bVar11, 1, 2 );
                l_U201 = 30;
                break;
                case 21:
                SAY_AMBIENT_SPEECH( l_U220, "ARM_WRESTLING_POINT_OF_DEFEAT", bVar11, 1, 2 );
                l_U201 = 30;
                break;
                case 22:
                SAY_AMBIENT_SPEECH( l_U227, "ARM_WRESTLING_DEFEAT_IS_CLOSE", bVar11, 1, 2 );
                l_U201 = 30;
                break;
                case 23:
                SAY_AMBIENT_SPEECH( l_U220, "ARM_WRESTLING_DEFEAT_IS_CLOSE", bVar11, 1, 2 );
                l_U201 = 30;
                break;
                case 24:
                SAY_AMBIENT_SPEECH( l_U227, "ARM_WRESTLING_VICTORY_IS_CLOSE", bVar11, 1, 2 );
                l_U201 = 30;
                break;
                case 25:
                SAY_AMBIENT_SPEECH( l_U220, "ARM_WRESTLING_VICTORY_IS_CLOSE", bVar11, 1, 2 );
                l_U201 = 30;
                break;
                case 26:
                SAY_AMBIENT_SPEECH( l_U227, "ARM_WRESTLING_WON", bVar11, 1, 2 );
                l_U201 = 30;
                break;
                case 27:
                SAY_AMBIENT_SPEECH( l_U227, "ARM_WRESTLING_LOST", bVar11, 1, 2 );
                l_U201 = 30;
                break;
                case 28:
                SAY_AMBIENT_SPEECH( l_U220, "ARM_WRESTLING_WON", bVar11, 1, 2 );
                l_U201 = 30;
                break;
                case 29:
                SAY_AMBIENT_SPEECH( l_U220, "ARM_WRESTLING_LOST", bVar11, 1, 2 );
                l_U201 = 30;
                break;
                case 30:
                l_U201 = 0;
                break;
            }
        }
        sub_914( 1 );
        WAIT( 0 );
    }
    return;
}

int sub_519(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    if ((((((uParam0._fU0 > uParam3._fU0) AND (uParam0._fU4 > uParam3._fU4)) AND (uParam0._fU8 > uParam3._fU8)) AND (uParam0._fU0 < uParam6._fU0)) AND (uParam0._fU4 < uParam6._fU4)) AND (uParam0._fU8 < uParam6._fU8))
    {
        return 1;
    }
    return 0;
}

void sub_885()
{
    sub_895( 0 );
    sub_2540( 2, l_U214 );
    PRINTSTRING( "Arm wrestling script terminated. \n" );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_895(boolean bParam0)
{
    int I;

    sub_904();
    REMOVE_ANIMS( l_U212 );
    if (NOT (l_U205 == 0))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U205 );
    }
    if (NOT (l_U206 == 0))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U206 );
    }
    if (DOES_CHAR_EXIST( l_U220 ))
    {
        if (NOT (sub_1295( l_U220 )))
        {
            if (bParam0)
            {
                DELETE_CHAR( ref l_U220 );
            }
            else
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U220 );
            }
        }
    }
    for ( I = 0; I < 4; I++ )
    {
        if (DOES_CHAR_EXIST( l_U221[I] ))
        {
            if (NOT (sub_1295( l_U221[I] )))
            {
                if (bParam0)
                {
                    DELETE_CHAR( ref l_U221[I] );
                }
                else
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U221[I] );
                }
            }
        }
    }
    if (DOES_CHAR_EXIST( l_U226 ))
    {
        if (NOT (sub_1295( l_U226 )))
        {
            if (bParam0)
            {
                DELETE_CHAR( ref l_U226 );
            }
            else
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U226 );
            }
        }
    }
    if (DOES_CHAR_EXIST( l_U227 ))
    {
        if (NOT (sub_1295( l_U227 )))
        {
            if (bParam0)
            {
                DELETE_CHAR( ref l_U227 );
            }
            else
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U227 );
            }
        }
    }
    if (DOES_OBJECT_EXIST( l_U210 ))
    {
        if (bParam0)
        {
            DELETE_OBJECT( ref l_U210 );
        }
        else
        {
            MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U210 );
        }
    }
    return;
}

void sub_904()
{
    int I;

    sub_914( 0 );
    if (DOES_CHAR_EXIST( l_U227 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U227 )))
        {
            DETACH_PED( l_U227, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U227, 0 );
            SET_CHAR_COLLISION( l_U227, 1 );
            FREEZE_CHAR_POSITION( l_U227, 0 );
            SET_CHAR_VISIBLE( l_U227, 1 );
        }
    }
    if (DOES_OBJECT_EXIST( l_U208 ))
    {
        DELETE_OBJECT( ref l_U208 );
    }
    if (DOES_CHAR_EXIST( l_U220 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U220 )))
        {
            DETACH_PED( l_U220, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U220, 0 );
            SET_CHAR_COLLISION( l_U220, 1 );
            FREEZE_CHAR_POSITION( l_U220, 0 );
            SET_CHAR_VISIBLE( l_U220, 1 );
            if (NOT (sub_1295( l_U220 )))
            {
                if (HAVE_ANIMS_LOADED( l_U212 ))
                {
                    if (NOT (IS_CHAR_PLAYING_ANIM( l_U220, l_U212, "Curse_Outro" )))
                    {
                        TASK_PLAY_ANIM( l_U220, "stand_wait", l_U212, 4.00000000, 0, 0, 0, 0, 500 );
                    }
                }
                GIVE_WEAPON_TO_CHAR( l_U220, 27, 99, 0 );
            }
            else if (NOT (IS_CHAR_PLAYING_ANIM( l_U220, l_U212, "Curse_Outro" )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U220 );
            }
            l_U122 = 1;
            l_U220 = nil;;
        }
    }
    if (DOES_OBJECT_EXIST( l_U207 ))
    {
        DELETE_OBJECT( ref l_U207 );
    }
    for ( I = 0; I < 4; I++ )
    {
        if (DOES_CHAR_EXIST( l_U221[I] ))
        {
            if (NOT (IS_CHAR_DEAD( l_U221[I] )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U221[I], 0 );
                SET_CHAR_COLLISION( l_U221[I], 1 );
                FREEZE_CHAR_POSITION( l_U221[I], 0 );
                SET_CHAR_VISIBLE( l_U221[I], 1 );
                if (NOT (sub_1295( l_U221[I] )))
                {
                    switch (I)
                    {
                        case 0:
                        GIVE_WEAPON_TO_CHAR( l_U221[I], 7, 99, 0 );
                        break;
                        case 1:
                        case 2:
                        GIVE_WEAPON_TO_CHAR( l_U221[I], 3, 99, 0 );
                        break;
                    }
                }
                else if (HAVE_ANIMS_LOADED( l_U212 ))
                {
                    TASK_PLAY_ANIM( l_U221[I], "stand_wait", l_U212, 4.00000000, 0, 0, 0, 0, 500 );
                }
                l_U221[I] = nil;;
            }
        }
    }
    if (DOES_CHAR_EXIST( l_U226 ))
    {
        DELETE_CHAR( ref l_U226 );
    }
    if (DOES_CHAR_EXIST( l_U221[3] ))
    {
        if (NOT (IS_CHAR_DEAD( l_U221[3] )))
        {
            if (HAVE_ANIMS_LOADED( l_U212 ))
            {
                TASK_PLAY_ANIM( l_U221[3], "stand_wait", l_U212, 4.00000000, 0, 0, 0, 0, 500 );
            }
            DETACH_PED( l_U221[3], 1 );
            SET_CHAR_COLLISION( l_U221[3], 1 );
            FREEZE_CHAR_POSITION( l_U221[3], 0 );
            DELETE_OBJECT( ref l_U209 );
        }
    }
    if (DOES_OBJECT_EXIST( l_U209 ))
    {
        DELETE_OBJECT( ref l_U209 );
    }
    return;
}

void sub_914(unknown uParam0)
{
    int I;

    for ( I = 0; I < l_U221; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U221[I] )))
        {
            BLOCK_CHAR_GESTURE_ANIMS( l_U221[I], uParam0 );
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U227 )))
    {
        BLOCK_CHAR_GESTURE_ANIMS( l_U227, uParam0 );
    }
    if (NOT (IS_CHAR_INJURED( l_U220 )))
    {
        BLOCK_CHAR_GESTURE_ANIMS( l_U220, uParam0 );
    }
    return;
}

int sub_1295(int iParam0)
{
    if (((iParam0 == l_U229) || (iParam0 == l_U230)) || (iParam0 == l_U231))
    {
        return 1;
    }
    return 0;
}

void sub_2540(int iParam0, string sParam1)
{
    string sVar4;

    if (USING_STANDARD_CONTROLS())
    {
        sVar4 = "CNTBUT1";
    }
    else
    {
        sVar4 = "CNTBUT2";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (NOT (IS_STRING_NULL( sParam1 )))
    {
        if (COMPARE_STRING( sParam1, ref g_U10470 ))
        {
            if ((g_U10468 == iParam0) AND (l_U103))
            {
                StrCopy( ref g_U10470, "", 16 );
                g_U10468 = 0;
                g_U10469 = 0;
                g_U10474 = nil;
                l_U103 = 0;
                if (l_U101)
                {
                    sub_2767();
                    l_U101 = 0;
                }
            }
            if (l_U102)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_2820(), 1 );
                l_U102 = 0;
            }
            if (l_U100)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U100 = 0;
            }
        }
    }
    return;
}

void sub_2767()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_2820()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_4986()
{
    unknown uVar2;

    CLEAR_HELP();
    sub_904();
    if (IS_PLAYER_PLAYING( sub_2820() ))
    {
        SET_PLAYER_CONTROL( sub_2820(), 1 );
        CLEAR_CHAR_TASKS( sub_5037() );
        TASK_PLAY_ANIM( sub_5037(), "stand_wait", l_U212, 4.00000000, 0, 0, 0, 0, 500 );
        DETACH_PED( sub_5037(), 1 );
        SET_CHAR_COLLISION( sub_5037(), 1 );
        FREEZE_CHAR_POSITION( sub_5037(), 0 );
        SET_CHAR_VISIBLE( sub_5037(), 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_5037(), 0 );
    }
    if ((NOT (IS_CHAR_INJURED( l_U227 ))) AND (NOT (l_U227 == sub_5037())))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U227 );
    }
    l_U227 = nil;
    if (DOES_CHAR_EXIST( l_U226 ))
    {
        DELETE_CHAR( ref l_U226 );
    }
    if (NOT (IS_CHAR_INJURED( l_U227 )))
    {
        if (l_U227 == sub_5037())
        {
            BLOCK_CHAR_GESTURE_ANIMS( l_U227, 0 );
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U228 )))
    {
        if (sub_1295( l_U228 ))
        {
            BLOCK_CHAR_GESTURE_ANIMS( l_U228, 0 );
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U220 )))
    {
        if (sub_1295( l_U220 ))
        {
            BLOCK_CHAR_GESTURE_ANIMS( l_U220, 0 );
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U221[3] )))
    {
        if (sub_1295( l_U221[3] ))
        {
            BLOCK_CHAR_GESTURE_ANIMS( l_U221[3], 0 );
        }
    }
    sub_5463();
    CLEAR_SHAKE_PLAYERPAD_WHEN_CONTROLLER_DISABLED();
    DISPLAY_RADAR( 1 );
    sub_5533();
    sub_5697();
    return;
}

void sub_5037()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_5463()
{
    l_U198 = 0;
    l_U184 = 1;
    l_U186 = 0;
    l_U109 = 1;
    l_U121 = 0;
    SETTIMERA( 0 );
    return;
}

void sub_5533()
{
    if (l_U110)
    {
        if (l_U122)
        {
            SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
            l_U122 = 0;
        }
        else
        {
            SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 2000 );
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        if (DOES_CAM_EXIST( l_U127 ))
        {
            DESTROY_CAM( l_U127 );
        }
        END_CAM_COMMANDS( ref l_U187 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        if (IS_PLAYER_PLAYING( sub_2820() ))
        {
            SET_CAM_BEHIND_PED( sub_5037() );
        }
        l_U110 = 0;
    }
    return;
}

void sub_5697()
{
    DISPLAY_RADAR( 1 );
    SET_MINIGAME_IN_PROGRESS( 0 );
    g_U12304 = 0;
    if (g_U26739._fU0 == 19)
    {
        g_U12303 = 0;
        sub_5748();
        return;
    }
    if (NOT (g_U26739._fU8 == 12))
    {
        if (g_U26739._fU20 == 8)
        {
            g_U26739._fU20 = 3;
        }
    }
    else if (NOT (g_U26739._fU4 == 12))
    {
        if (g_U26739._fU16 == 8)
        {
            g_U26739._fU16 = 3;
        }
    }
    else
    {
        return;
    }
    g_U26739._fU28 = 1;
    return;
}

void sub_5748()
{
    g_U26737._fU4 = 1;
    return;
}

int sub_5960()
{
    int iVar2;
    int iVar3;

    if (IS_PLAYER_PLAYING( sub_2820() ))
    {
        GET_INTERIOR_AT_COORDS( -1731.77000000, 331.04000000, 32.24000000, ref iVar2 );
        GET_INTERIOR_FROM_CHAR( sub_5037(), ref iVar3 );
        if (iVar2 == iVar3)
        {
            return 1;
        }
    }
    return 0;
}

void sub_6052()
{
    sub_6062( 0 );
    sub_895( 0 );
    sub_5463();
    l_U184 = 0;
    return;
}

void sub_6062(boolean bParam0)
{
    sub_904();
    if (bParam0)
    {
        sub_885();
    }
    return;
}

void sub_6715()
{
    int iVar2;

    if (DOES_OBJECT_EXIST( l_U207 ))
    {
        DELETE_OBJECT( ref l_U207 );
    }
    CREATE_OBJECT( -195381842, l_U237._fU0, l_U237._fU4, l_U237._fU8, ref l_U207, 1 );
    SET_OBJECT_HEADING( l_U207, l_U130 );
    FREEZE_OBJECT_POSITION( l_U207, 1 );
    SET_OBJECT_VISIBLE( l_U207, 0 );
    SET_OBJECT_COLLISION( l_U207, 0 );
    if (IS_CHAR_INJURED( l_U220 ))
    {
        DELETE_CHAR( ref l_U220 );
        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar2 );
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "billy1" )) > 0)
        {
            CREATE_CHAR( 26, l_U205, l_U237._fU0, l_U237._fU4, l_U237._fU8, ref l_U220, 1 );
        }
        else if (iVar2 == 0)
        {
            CREATE_CHAR( 26, l_U205, l_U237._fU0, l_U237._fU4, l_U237._fU8, ref l_U220, 1 );
        }
        else
        {
            CREATE_CHAR( 26, l_U206, l_U237._fU0, l_U237._fU4, l_U237._fU8, ref l_U220, 1 );
        }
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U220 );
        if (l_U202 == 0)
        {
            if (iVar2 == 0)
            {
                SET_CHAR_COMPONENT_VARIATION( l_U220, 0, 0, 2 );
            }
            else
            {
                SET_CHAR_COMPONENT_VARIATION( l_U220, 0, 0, 2 );
            }
        }
        if (l_U202 == 0)
        {
            SET_ROOM_FOR_CHAR_BY_KEY( l_U220, l_U185 );
        }
        sub_7145( l_U220 );
    }
    if (NOT (IS_CHAR_INJURED( l_U220 )))
    {
        SET_CHAR_COORDINATES( l_U220, l_U237._fU0, l_U237._fU4, l_U237._fU8 - 1.00000000 );
        FREEZE_CHAR_POSITION( l_U220, 1 );
        SET_CHAR_COLLISION( l_U220, l_U125 );
        SET_CHAR_HEADING( l_U220, l_U130 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U220, 1 );
        ATTACH_PED_TO_OBJECT( l_U220, l_U207, 0, 0.00000000, 0.00000000, 0.00000000, l_U130, 360.00000000, 0, 0 );
        FREEZE_CHAR_POSITION( l_U220, 1 );
    }
    return;
}

void sub_7145(unknown uParam0)
{
    switch (l_U202)
    {
        case 0:
        SET_CHAR_RELATIONSHIP_GROUP( uParam0, 6 );
        break;
        case 1:
        case 2:
        SET_CHAR_RELATIONSHIP_GROUP( uParam0, 5 );
        break;
    }
    return;
}

void sub_7945()
{
    int I;

    for ( I = 0; I < 4; I++ )
    {
        if (IS_CHAR_INJURED( l_U221[I] ))
        {
            DELETE_CHAR( ref l_U221[I] );
            if ((I == 0) || (I == 2))
            {
                CREATE_CHAR( 26, l_U205, l_U272[I]._fU0, l_U272[I]._fU4, l_U272[I]._fU8, ref l_U221[I], 1 );
            }
            else
            {
                CREATE_CHAR( 26, l_U206, l_U272[I]._fU0, l_U272[I]._fU4, l_U272[I]._fU8, ref l_U221[I], 1 );
            }
            sub_7145( l_U221[I] );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U221[I] );
            if (l_U202 == 0)
            {
                switch (I)
                {
                    case 0:
                    SET_CHAR_COMPONENT_VARIATION( l_U221[I], 0, 0, 0 );
                    break;
                    case 1:
                    SET_CHAR_COMPONENT_VARIATION( l_U221[I], 0, 0, 0 );
                    break;
                    case 2:
                    SET_CHAR_COMPONENT_VARIATION( l_U221[I], 0, 1, 2 );
                    break;
                    case 3:
                    SET_CHAR_COMPONENT_VARIATION( l_U221[I], 0, 0, 1 );
                    break;
                }
            }
            if (l_U202 == 0)
            {
                SET_ROOM_FOR_CHAR_BY_KEY( l_U221[I], l_U185 );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U221[I] )))
        {
            SET_CHAR_COORDINATES( l_U221[I], l_U272[I]._fU0, l_U272[I]._fU4, l_U272[I]._fU8 );
            SET_CHAR_HEADING( l_U221[I], l_U169[I] );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U221[I], 1 );
            FREEZE_CHAR_POSITION( l_U221[I], 1 );
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U221[3] )))
    {
        if (DOES_OBJECT_EXIST( l_U209 ))
        {
            DELETE_OBJECT( ref l_U209 );
        }
        CREATE_OBJECT( -195381842, l_U272[3]._fU0, l_U272[3]._fU4, l_U272[3]._fU8, ref l_U209, 1 );
        SET_OBJECT_HEADING( l_U209, l_U169[3] );
        FREEZE_OBJECT_POSITION( l_U209, 1 );
        SET_OBJECT_VISIBLE( l_U209, 0 );
        SET_OBJECT_COLLISION( l_U209, 0 );
        SET_CHAR_COORDINATES( l_U221[3], l_U272[3]._fU0, l_U272[3]._fU4, l_U272[3]._fU8 - 1.00000000 );
        FREEZE_CHAR_POSITION( l_U221[3], 1 );
        SET_CHAR_COLLISION( l_U221[3], l_U125 );
        SET_CHAR_HEADING( l_U221[3], l_U169[3] );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U221[3], 1 );
        BLOCK_CHAR_GESTURE_ANIMS( l_U221[3], 1 );
        ATTACH_PED_TO_OBJECT( l_U221[3], l_U209, 0, 0.00000000, 0.00000000, 0.00000000, l_U169[3], 360.00000000, 0, 0 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U221[3] );
    }
    return;
}

void sub_8953(int iParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_INJURED( iParam0 )))
    {
        if (iParam0 == sub_5037())
        {
            ;
        }
        else
        {
            GET_CHAR_MODEL( iParam0, ref iVar3 );
            if (iVar3 == (sub_9008( 1 )))
            {
                ;
            }
            else if (iVar3 == (sub_9008( 6 )))
            {
                ;
            }
            else if (iVar3 == (sub_9008( 7 )))
            {
                ;
            }
            else
            {
                switch (iVar3)
                {
                    case 1439613707:
                    SET_AMBIENT_VOICE_NAME( iParam0, "M_Y_GLOST_01_GANG_01" );
                    break;
                    case 1737188996:
                    SET_AMBIENT_VOICE_NAME( iParam0, "M_Y_GLOST_02_GANG_01" );
                    break;
                    case -411638179:
                    SET_AMBIENT_VOICE_NAME( iParam0, "M_Y_GLOST_03_FULL_01" );
                    break;
                    case -2130437771:
                    SET_AMBIENT_VOICE_NAME( iParam0, "M_Y_GLOST_04_FULL_01" );
                    break;
                    case -1159156463:
                    SET_AMBIENT_VOICE_NAME( iParam0, "M_Y_GANGELS_02_GANG_01" );
                    break;
                    case 479817841:
                    SET_AMBIENT_VOICE_NAME( iParam0, "M_Y_GANGELS_03_GANG_01" );
                    break;
                    case 236691815:
                    SET_AMBIENT_VOICE_NAME( iParam0, "M_Y_GANGELS_03_GANG_01" );
                    break;
                    case 1590280898:
                    SET_AMBIENT_VOICE_NAME( iParam0, "M_Y_GANGELS_03_GANG_01" );
                    break;
                    default:
                    SET_AMBIENT_VOICE_NAME( iParam0, "M_Y_GANGELS_04_FULL_01" );
                    break;
                }
            };;;
        }
    }
    return;
}

int sub_9008(unknown uParam0)
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
    sub_9307( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_9307(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_10071(unknown uParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_PLAYING_ANIM( uParam0, uParam1, uParam2 ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( uParam0, uParam1, uParam2, ref fVar5 );
            if (fVar5 < 0.99000000)
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_10810(unknown uParam0, int iParam1)
{
    if (iParam1 == -1)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref iParam1 );
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (l_U123)
        {
            switch (iParam1)
            {
                case 0:
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam0, "cheer_on_fight_A", l_U212, 4.00000000, 0, 0, 0, 0, -1 );
                break;
                case 1:
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam0, "cheer_on_fight_B", l_U212, 4.00000000, 0, 0, 0, 0, -1 );
                break;
                case 2:
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam0, "cheer_on_fight_C", l_U212, 4.00000000, 0, 0, 0, 0, -1 );
                break;
                case 3:
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam0, "cheer_on_fight_D", l_U212, 4.00000000, 0, 0, 0, 0, -1 );
                break;
            }
        }
    }
    return;
}

void sub_14795()
{
    if (NOT (IS_CHAR_INJURED( l_U220 )))
    {
        if (NOT (IS_PED_RAGDOLL( l_U220 )))
        {
            SET_CHAR_HEADING( l_U220, l_U130 );
        }
    }
    if (DOES_OBJECT_EXIST( l_U207 ))
    {
        SET_OBJECT_COORDINATES( l_U207, l_U237._fU0, l_U237._fU4, l_U237._fU8 );
    }
    if (NOT (IS_CHAR_INJURED( l_U227 )))
    {
        if (NOT (IS_PED_RAGDOLL( l_U227 )))
        {
            SET_CHAR_HEADING( l_U227, l_U130 + l_U133 );
        }
    }
    if (DOES_OBJECT_EXIST( l_U208 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U220 )))
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U220, l_U240._fU0, l_U240._fU4, l_U240._fU8, ref l_U234._fU0, ref l_U234._fU4, ref l_U234._fU8 );
            SET_OBJECT_COORDINATES( l_U208, l_U234._fU0, l_U234._fU4, l_U234._fU8 );
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U221[3] )))
    {
        if (NOT (IS_PED_RAGDOLL( l_U221[3] )))
        {
            SET_CHAR_HEADING( l_U221[3], l_U130 + l_U174 );
        }
    }
    if (DOES_OBJECT_EXIST( l_U209 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U221[3] )))
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U220, l_U243._fU0, l_U243._fU4, l_U243._fU8, ref l_U272[3]._fU0, ref l_U272[3]._fU4, ref l_U272[3]._fU8 );
            SET_OBJECT_COORDINATES( l_U209, l_U272[3]._fU0, l_U272[3]._fU4, l_U272[3]._fU8 );
        }
    }
    return;
}

void sub_15301()
{
    int I;

    if (l_U119)
    {
        for ( I = 0; I < 4; I++ )
        {
            if (DOES_CHAR_EXIST( l_U221[I] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U221[I] )))
                {
                    SET_CHAR_COORDINATES( l_U221[I], l_U272[I]._fU0, l_U272[I]._fU4, l_U272[I]._fU8 );
                    SET_CHAR_HEADING( l_U221[I], l_U169[I] );
                }
            }
        }
        l_U119 = 0;
    }
    else if ((NOT (IS_CHAR_INJURED( l_U220 ))) AND (NOT (IS_CHAR_INJURED( l_U227 ))))
    {
        if ((((NOT (IS_CHAR_PLAYING_ANIM( l_U220, l_U212, "idle_to_neutral" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U227, l_U212, "idle_to_neutral" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U220, l_U212, "stand_wait" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U227, l_U212, "stand_wait" ))))
        {
            if (DOES_CHAR_EXIST( l_U221[0] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U221[0] )))
                {
                    if (NOT (sub_15694( l_U221[0] )))
                    {
                        sub_10810( l_U221[0], -1 );
                    }
                }
            }
            if (DOES_CHAR_EXIST( l_U221[1] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U221[1] )))
                {
                    if (NOT (sub_15694( l_U221[1] )))
                    {
                        sub_10810( l_U221[1], -1 );
                    }
                }
            }
            if (DOES_CHAR_EXIST( l_U221[2] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U221[2] )))
                {
                    if (NOT (sub_15694( l_U221[2] )))
                    {
                        sub_10810( l_U221[2], -1 );
                    }
                }
            }
            if (DOES_CHAR_EXIST( l_U221[3] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U221[3] )))
                {
                    if (((NOT (IS_CHAR_PLAYING_ANIM( l_U221[3], l_U212, "Ref_Intro" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U221[3], l_U212, "Ref_Loop" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U221[3], l_U212, "Ref_Outro" ))))
                    {
                        if (NOT (sub_15694( l_U221[3] )))
                        {
                            sub_10810( l_U221[3], -1 );
                        }
                    }
                }
            }
        }
        else if (DOES_CHAR_EXIST( l_U221[0] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U221[0] )))
            {
                if ((NOT (sub_16268( l_U221[0] ))) AND (NOT (sub_15694( l_U221[0] ))))
                {
                    sub_16399( l_U221[0], -1 );
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U221[1] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U221[1] )))
            {
                if ((NOT (sub_16268( l_U221[1] ))) AND (NOT (sub_15694( l_U221[1] ))))
                {
                    sub_16399( l_U221[1], -1 );
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U221[2] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U221[2] )))
            {
                if ((NOT (sub_16268( l_U221[2] ))) AND (NOT (sub_15694( l_U221[2] ))))
                {
                    sub_16399( l_U221[2], -1 );
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U221[3] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U221[3] )))
            {
                if (((((NOT (IS_CHAR_PLAYING_ANIM( l_U221[3], l_U212, "Ref_Intro" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U221[3], l_U212, "Ref_Loop" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U221[3], l_U212, "Ref_Outro" )))) AND (NOT (sub_16268( l_U221[3] )))) AND (NOT (sub_15694( l_U221[3] ))))
                {
                    sub_16399( l_U221[3], -1 );
                }
            }
        }
    }
    return;
}

int sub_15694(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if ((((NOT (sub_10071( uParam0, l_U212, "cheer_on_fight_A" ))) || (NOT (sub_10071( uParam0, l_U212, "cheer_on_fight_B" )))) || (NOT (sub_10071( uParam0, l_U212, "cheer_on_fight_C" )))) || (NOT (sub_10071( uParam0, l_U212, "cheer_on_fight_D" ))))
        {
            return 1;
        }
    }
    return 0;
}

int sub_16268(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if ((NOT (sub_10071( uParam0, l_U212, "stand_about_a" ))) || (NOT (sub_10071( uParam0, l_U212, "stand_about_b" ))))
        {
            return 1;
        }
    }
    return 0;
}

void sub_16399(unknown uParam0, int iParam1)
{
    if (iParam1 == -1)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iParam1 );
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        switch (iParam1)
        {
            case 0:
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam0, "stand_about_a", l_U212, 4.00000000, 0, 0, 0, 0, -1 );
            break;
            case 1:
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam0, "stand_about_b", l_U212, 4.00000000, 0, 0, 0, 0, -1 );
            break;
        }
    }
    return;
}

int sub_18351()
{
    int I;

    if (IS_PLAYER_PLAYING( sub_2820() ))
    {
        for ( I = 0; I < 4; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U221[I] )))
            {
                if ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_2820(), l_U221[I] )) || (IS_PLAYER_TARGETTING_CHAR( sub_2820(), l_U221[I] )))
                {
                    return 1;
                }
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U220 )))
        {
            if ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_2820(), l_U220 )) || (IS_PLAYER_TARGETTING_CHAR( sub_2820(), l_U220 )))
            {
                return 1;
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U227 )))
        {
            if ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_2820(), l_U227 )) || (IS_PLAYER_TARGETTING_CHAR( sub_2820(), l_U227 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_19061()
{
    int iVar2;

    if (l_U202 == 0)
    {
        l_U229 = sub_19083( 1 );
        if (l_U229 == nil)
        {
            l_U229 = sub_19302( 0 );
        }
        l_U230 = sub_19083( 6 );
        if (l_U230 == nil)
        {
            l_U230 = sub_19302( 1 );
        }
        l_U231 = sub_19083( 7 );
        if (l_U231 == nil)
        {
            l_U231 = sub_19302( 2 );
        }
    }
    else
    {
        l_U229 = nil;
        l_U230 = nil;
        l_U231 = nil;
    }
    if (DOES_CHAR_EXIST( l_U229 ))
    {
        if (NOT (sub_19556( sub_5037(), l_U229 )))
        {
            l_U229 = nil;
        }
    }
    if (DOES_CHAR_EXIST( l_U230 ))
    {
        if (NOT (sub_19556( sub_5037(), l_U230 )))
        {
            l_U230 = nil;
        }
    }
    if (DOES_CHAR_EXIST( l_U231 ))
    {
        if (NOT (sub_19556( sub_5037(), l_U231 )))
        {
            l_U231 = nil;
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U220 )))
    {
        if (NOT (LOCATE_CHAR_ON_FOOT_3D( sub_5037(), l_U237._fU0, l_U237._fU4, l_U237._fU8, 3.00000000, 3.00000000, 2.00000000, 0 )))
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
    if (NOT (IS_CHAR_INJURED( l_U220 )))
    {
        if (NOT (LOCATE_CHAR_ON_FOOT_3D( sub_5037(), l_U237._fU0, l_U237._fU4, l_U237._fU8, 3.00000000, 3.00000000, 2.00000000, 0 )))
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
    if (NOT (DOES_CHAR_EXIST( l_U220 )))
    {
        if (((IS_CHAR_INJURED( l_U229 )) AND (IS_CHAR_INJURED( l_U230 ))) AND (IS_CHAR_INJURED( l_U231 )))
        {
            return 0;
        }
    }
    if (IS_PLAYER_PLAYING( sub_2820() ))
    {
        if (IS_WANTED_LEVEL_GREATER( sub_2820(), 0 ))
        {
            return 0;
        }
    }
    if (NOT sub_20039())
    {
        return 0;
    }
    if (sub_20096( 1 ))
    {
        if (sub_20416( ref iVar2 ))
        {
            if (((iVar2 == 1) || (iVar2 == 6)) || (iVar2 == 7))
            {
                if (((NOT (DOES_CHAR_EXIST( l_U229 ))) AND (NOT (DOES_CHAR_EXIST( l_U230 )))) AND (NOT (DOES_CHAR_EXIST( l_U231 ))))
                {
                    return 0;
                }
            }
        }
    }
    else if (NOT g_U12303)
    {
        if (sub_20416( ref iVar2 ))
        {
            if (((NOT (iVar2 == 1)) AND (NOT (iVar2 == 6))) AND (NOT (iVar2 == 7)))
            {
                return 0;
            }
        }
    }
    else
    {
        return 0;
    }
    if (NOT (IS_CHAR_INJURED( l_U220 )))
    {
        if (IS_PED_IN_COMBAT( l_U220 ))
        {
            return 0;
        }
    }
    return 1;
}

void sub_19083(unknown uParam0)
{
    unknown Result;
    unknown uVar4;
    int iVar5;
    int I;

    Result = nil;
    if (IS_PLAYER_PLAYING( sub_2820() ))
    {
        if (DOES_GROUP_EXIST( sub_19113() ))
        {
            GET_GROUP_SIZE( sub_19113(), ref uVar4, ref iVar5 );
            if (iVar5 > 0)
            {
                for ( I = 0; I < iVar5; I++ )
                {
                    GET_GROUP_MEMBER( sub_19113(), I, ref Result );
                    if (NOT (IS_CHAR_INJURED( Result )))
                    {
                        if (IS_CHAR_MODEL( Result, sub_9008( uParam0 ) ))
                        {
                            return Result;
                        }
                    }
                }
            }
        }
    }
    Result = nil;
    return Result;
}

void sub_19113()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_19302(int iParam0)
{
    if ((iParam0 < 0) || (iParam0 >= 3))
    {
        SCRIPT_ASSERT( "Minigames_Get_Biker_Friend_Index: Minigame Biker Index out of range" );
        return nil;
    }
    return g_U38857[iParam0]._fU0;
}

int sub_19556(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if ((NOT (IS_CHAR_INJURED( uParam0 ))) AND (NOT (IS_CHAR_INJURED( uParam1 ))))
    {
        if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam1 ))))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar4 );
            GET_KEY_FOR_CHAR_IN_ROOM( uParam1, ref iVar5 );
            if (iVar4 == iVar5)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_20039()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U20912)
    {
        return 0;
    }
    return 1;
}

int sub_20096(int iParam0)
{
    unknown uVar3;

    if (NOT g_U12303)
    {
        return 1;
    }
    if (g_U26739._fU0 == 19)
    {
        return 0;
    }
    if (sub_20140( iParam0 ))
    {
        return 0;
    }
    if (sub_20199( g_U26739._fU0 ))
    {
        if (NOT (sub_20231( g_U26739._fU0, iParam0 )))
        {
            return 0;
        }
        return 1;
    }
    uVar3 = iParam0;
    if (iParam0 == g_U26739._fU4)
    {
        if (g_U26739._fU24)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    if (g_U26739._fU8 == iParam0)
    {
        return 1;
    }
    if (NOT (g_U26739._fU8 == 12))
    {
        if (g_U26739._fU24)
        {
            return 0;
        }
    }
    if (g_U26739._fU32 <= 0)
    {
        return 0;
    }
    if (g_U26739._fU36[uVar3] > 0)
    {
        return 1;
    }
    return 0;
}

int sub_20140(int iParam0)
{
    if (iParam0 == 8)
    {
        if (g_U10999 == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_20199(unknown uParam0)
{
    return 0;
}

int sub_20231(unknown uParam0, unknown uParam1)
{
    return 1;
}

int sub_20416(unknown uParam0)
{
    (uParam0^) = g_U26739._fU0;
    if (g_U26739._fU0 == 19)
    {
        return 0;
    }
    return 1;
}

int sub_20648(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_2820() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_2820() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_2820() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U10499)))
                {
                    if (NOT sub_20744())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_5037() )) == nil)
                        {
                            if (g_U10468 <= iParam0)
                            {
                                if (g_U10469 == 0)
                                {
                                    if (sub_20829())
                                    {
                                        return 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_20744()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_20829()
{
    return sub_20840( 0, 0 );
}

int sub_20840(boolean bParam0, unknown uParam1)
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

int sub_21848(unknown uParam0, string sParam1, unknown uParam2)
{
    string sVar5;
    string sVar6;

    if (USING_STANDARD_CONTROLS())
    {
        sVar5 = "CNTBUT1";
        sVar6 = "CNTBUT2";
    }
    else
    {
        sVar5 = "CNTBUT2";
        sVar6 = "CNTBUT1";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (sub_20648( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U102)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_2820(), 0 );
                l_U102 = 1;
            }
            g_U10468 = uParam0;
            l_U103 = 1;
            StrCopy( ref g_U10470, sParam1, 16 );
            g_U10474 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_22129();
                l_U101 = 1;
                g_U10469 = 6;
                if (NOT (IS_STRING_NULL( sParam1 )))
                {
                    if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))
                    {
                        CLEAR_HELP();
                    }
                }
                return 1;
            }
            else
            {
                g_U10469 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U100 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U100)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U100 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_22129()
{
    return sub_20840( 1, 1 );
}

int sub_22738()
{
    int iVar2;

    if (g_U12303)
    {
        if (NOT (sub_22758( 1 )))
        {
            return 0;
        }
    }
    CLEAR_HELP();
    l_U109 = 1;
    l_U121 = 0;
    SET_PLAYER_CONTROL( sub_2820(), 0 );
    PRINTSTRING( "ARM WRESTLING - going to STATE_LOADING \n" );
    ADD_SCORE( sub_2820(), l_U203 * -1 );
    if (NOT (IS_CHAR_INJURED( l_U228 )))
    {
        iVar2 = GET_CHAR_MONEY( l_U228 );
        if (iVar2 < l_U203)
        {
            SET_CHAR_MONEY( l_U228, l_U203 );
        }
    }
    l_U184 = 2;
    return 1;
}

int sub_22758(int iParam0)
{
    unknown uVar3;

    if (g_U26739._fU0 == 19)
    {
        return 0;
    }
    if (sub_20140( iParam0 ))
    {
        return 0;
    }
    if (sub_20199( g_U26739._fU0 ))
    {
        if (NOT (sub_20231( g_U26739._fU0, iParam0 )))
        {
            return 0;
        }
        g_U26739._fU8 = iParam0;
        g_U26739._fU84 = 0;
        return 1;
    }
    uVar3 = iParam0;
    if (iParam0 == g_U26739._fU4)
    {
        if (g_U26739._fU24)
        {
            return 0;
        }
        else
        {
            g_U26739._fU8 = 12;
            if (g_U26739._fU36[uVar3] > 0)
            {
                g_U26739._fU36[uVar3]--;
            }
            g_U26739._fU84 = 0;
            return 1;
        }
    }
    if (g_U26739._fU8 == iParam0)
    {
        return 1;
    }
    if (NOT (g_U26739._fU8 == 12))
    {
        if (g_U26739._fU24)
        {
            return 0;
        }
        else
        {
            g_U26739._fU8 = 12;
        }
    }
    if (g_U26739._fU32 <= 0)
    {
        g_U26739._fU12 = iParam0;
        return 0;
    }
    if (g_U26739._fU36[uVar3] > 0)
    {
        g_U26739._fU8 = iParam0;
        g_U26739._fU36[uVar3]--;
        if (iParam0 == 8)
        {
            g_U26739._fU84 = 1;
        }
        return 1;
    }
    g_U26739._fU12 = iParam0;
    return 0;
}

void sub_24929()
{
    sub_24938();
    DISPLAY_RADAR( 0 );
    return;
}

void sub_24938()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    g_U12304 = 1;
    if (NOT (g_U26739._fU0 == 19))
    {
        g_U26739._fU24 = 1;
        g_U26739._fU28 = 0;
        if (NOT (g_U26739._fU8 == 12))
        {
            sub_25007();
        }
        return;
    }
    g_U12303 = 1;
    sub_25073();
    return;
}

void sub_25007()
{
    if (NOT (g_U26739._fU32 > 0))
    {
        return;
    }
    g_U26739._fU32--;
    return;
}

void sub_25073()
{
    g_U26737._fU4 = 0;
    return;
}

float sub_28164(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_MODEL( uParam0, ref iVar3 );
        if (iVar3 == (sub_9008( 1 )))
        {
            return 0.60000000;
        }
        else if (iVar3 == (sub_9008( 6 )))
        {
            return 0.30000000;
        }
        else if (iVar3 == (sub_9008( 7 )))
        {
            return 0.50000000;
        }
        else
        {
            switch (iVar3)
            {
                case 1439613707:
                case -411638179:
                return 0.40000000;
                break;
                case -1159156463:
                case 479817841:
                return 0.60000000;
                break;
                case 236691815:
                case 1590280898:
                return 0.50000000;
                break;
            }
        };;;
    }
    return 0.40000000;
}

int sub_29005()
{
    if (IS_CONTROL_PRESSED( 2, 23 ))
    {
        CLEAR_HELP();
        l_U109 = 1;
        l_U188 = l_U186;
        l_U186 = 5;
        return 1;
    }
    return 0;
}

int sub_29735(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    iVar7 = 64;
    GET_POSITION_OF_ANALOGUE_STICKS( uParam0, ref iVar3, ref iVar4, ref iVar5, ref iVar6 );
    if ((iVar5 == 0) AND (iVar6 == 0))
    {
        GET_MOUSE_INPUT( ref iVar5, ref iVar6 );
        iVar7 = 5;
    }
    if (((NOT IS_USING_CONTROLLER()) AND (iVar3 == 0)) AND (iVar4 == 0))
    {
        GET_KEYBOARD_MOVE_INPUT( ref iVar3, ref iVar4 );
        if (iVar3 > 64)
        {
            return 1;
        }
    }
    if (NOT (iVar5 < 0))
    {
        if (iVar5 > iVar7)
        {
            return 1;
        }
    }
    return 0;
}

int sub_30043(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    iVar7 = 65472;
    GET_POSITION_OF_ANALOGUE_STICKS( uParam0, ref iVar3, ref iVar4, ref iVar5, ref iVar6 );
    if ((iVar5 == 0) AND (iVar6 == 0))
    {
        GET_MOUSE_INPUT( ref iVar5, ref iVar6 );
        iVar7 = -5;
    }
    if (((NOT IS_USING_CONTROLLER()) AND (iVar3 == 0)) AND (iVar4 == 0))
    {
        GET_KEYBOARD_MOVE_INPUT( ref iVar3, ref iVar4 );
        if (iVar3 < 65472)
        {
            return 1;
        }
    }
    if (NOT (iVar5 > 0))
    {
        if (iVar5 < iVar7)
        {
            return 1;
        }
    }
    return 0;
}

void sub_34601(unknown uParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    iVar3 = 0;
    if (NOT g_U38782[uParam0]._fU0)
    {
        iVar3 = ProtectedGet(g_U38782[uParam0]._fU8);
        if (iVar3 > 0)
        {
            sub_34670( 2, iVar3 );
            g_U38782[uParam0]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_34670(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_34840( 0 );
    return;
}

void sub_34840(boolean bParam0)
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
        sub_35085();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_35085()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

void sub_35220(unknown uParam0)
{
    if (g_U26739._fU0 == 19)
    {
        return;
    }
    if (NOT (g_U26739._fU8 == 12))
    {
        g_U26739._fU20 = uParam0;
        if (sub_20199( g_U26739._fU0 ))
        {
            g_U26739._fU16 = uParam0;
        }
        return;
    }
    g_U26739._fU16 = uParam0;
    return;
}

void sub_37116()
{
    int I;

    if (DOES_CAM_EXIST( l_U127 ))
    {
        switch (l_U197)
        {
            case 0:
            if (l_U134 < -0.65000000)
            {
                l_U197 = 1;
            }
            if (l_U134 > 0.65000000)
            {
                l_U197 = 2;
            }
            for ( I = 0; I < 4; I++ )
            {
                if (DOES_CHAR_EXIST( l_U221[I] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U221[I] )))
                    {
                        SET_CHAR_VISIBLE( l_U221[I], 1 );
                    }
                }
            }
            break;
            case 2:
            if (l_U134 < 0.50000000)
            {
                l_U197 = 0;
            }
            if (DOES_CHAR_EXIST( l_U221[0] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U221[0] )))
                {
                    SET_CHAR_VISIBLE( l_U221[0], 1 );
                }
            }
            if (DOES_CHAR_EXIST( l_U221[1] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U221[1] )))
                {
                    SET_CHAR_VISIBLE( l_U221[1], 1 );
                }
            }
            if (DOES_CHAR_EXIST( l_U221[2] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U221[2] )))
                {
                    SET_CHAR_VISIBLE( l_U221[2], 0 );
                }
            }
            if (DOES_CHAR_EXIST( l_U221[3] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U221[3] )))
                {
                    SET_CHAR_VISIBLE( l_U221[3], 1 );
                }
            }
            break;
            case 1:
            if (l_U134 > -0.50000000)
            {
                l_U197 = 0;
            }
            if (DOES_CHAR_EXIST( l_U221[0] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U221[0] )))
                {
                    SET_CHAR_VISIBLE( l_U221[0], 1 );
                }
            }
            if (DOES_CHAR_EXIST( l_U221[1] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U221[1] )))
                {
                    SET_CHAR_VISIBLE( l_U221[1], 0 );
                }
            }
            if (DOES_CHAR_EXIST( l_U221[2] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U221[2] )))
                {
                    SET_CHAR_VISIBLE( l_U221[2], 1 );
                }
            }
            if (DOES_CHAR_EXIST( l_U221[3] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U221[3] )))
                {
                    SET_CHAR_VISIBLE( l_U221[3], 1 );
                }
            }
            break;
            case 3:
            for ( I = 0; I < 4; I++ )
            {
                if (DOES_CHAR_EXIST( l_U221[I] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U221[I] )))
                    {
                        SET_CHAR_VISIBLE( l_U221[I], 1 );
                    }
                }
            }
            break;
        }
        SET_CAM_POS( l_U127, l_U246[l_U197]._fU0, l_U246[l_U197]._fU4, l_U246[l_U197]._fU8 );
        SET_CAM_ROT( l_U127, l_U259[l_U197]._fU0, l_U259[l_U197]._fU4, l_U259[l_U197]._fU8 );
        SET_CAM_FOV( l_U127, l_U157[l_U197] );
    }
    return;
}

int sub_38135()
{
    if (NOT (IS_CHAR_INJURED( l_U220 )))
    {
        if (IS_AMBIENT_SPEECH_PLAYING( l_U220 ))
        {
            return 1;
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U227 )))
    {
        if (IS_AMBIENT_SPEECH_PLAYING( l_U227 ))
        {
            return 1;
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U221[3] )))
    {
        if (IS_AMBIENT_SPEECH_PLAYING( l_U221[3] ))
        {
            return 1;
        }
    }
    return 0;
}
