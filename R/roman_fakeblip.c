void main()
{
    boolean bVar2;

    THIS_SCRIPT_SHOULD_BE_SAVED();
    l_U1 = {1235.80000000, -504.53000000, 13.04430000};
    l_U4 = 0;
    l_U5 = 0;
    bVar2 = true;
    while (bVar2)
    {
        WAIT( 0 );
        bVar2 = true;
        if (g_U64904)
        {
            if (DOES_BLIP_EXIST( l_U0 ))
            {
                REMOVE_BLIP( l_U0 );
            }
            g_U64904 = 0;
            bVar2 = false;
        }
        if (bVar2)
        {
            if (g_U64905)
            {
                if (NOT (DOES_BLIP_EXIST( l_U0 )))
                {
                    ADD_BLIP_FOR_CONTACT( l_U1._fU0, l_U1._fU4, l_U1._fU8, ref l_U0 );
                    CHANGE_BLIP_DISPLAY( l_U0, 2 );
                    CHANGE_BLIP_SPRITE( l_U0, 27 );
                    FLASH_BLIP_ALT( l_U0, 1 );
                    CHANGE_BLIP_PRIORITY( l_U0, 3 );
                    l_U5 = 1;
                    SETTIMERA( 0 );
                }
                g_U64905 = 0;
            }
            if (l_U5)
            {
                if (DOES_BLIP_EXIST( l_U0 ))
                {
                    if (TIMERA() > 10000)
                    {
                        FLASH_BLIP( l_U0, 0 );
                        CHANGE_BLIP_PRIORITY( l_U0, 1 );
                        l_U5 = 0;
                    }
                }
            }
        }
    }
    TERMINATE_THIS_SCRIPT();
    return;
}
