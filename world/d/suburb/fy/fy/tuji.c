inherit ROOM;
void create()
{
        set("short", "��������");
        set("long", @LONG
��ϡϡ��ľ���Ϸ��ż�����ɫ�Ұ���������Ŀ�����⡣һ����ͷ��Ӭææµµ��
������䡣����������������Ϲ��Ű����˵���ͷ����ͷ����ţͷ����̨����Ƕ�
���ż���ľϻ��ϻ�з���Щ�����˵�������Źǡ�
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"wcloud5",
]));
        set("objects", ([
        __DIR__"npc/butcher" : 1,
                        ]) );

        setup();
        replace_program(ROOM);
}