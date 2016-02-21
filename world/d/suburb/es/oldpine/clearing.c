// Room: "/d/oldpine/clearing.c

inherit ROOM;

void create()
{
	set("short", "�ּ�յ�");
	set("long", @LONG
����һ���ּ�յأ����ܵ���ľ�������Ǳ����޼���һ�㣬������
�յ�Χ��һ�������Բ�Σ��յ�����һ��޴������(pine)��ƽ���ϳ�
��һ�Ѵ�ɡ��������Ҷï�ܵ���ȥ�˴������⣬�յ�����������С·
�ֱ�ͨ�����������������������ϵ�С·������һ������(sign)��
LONG
	);
	set("item_desc", ([
		"pine": "һ���ָ��ִ������������̧ͷ���Ͽ���ʱ���ƺ��и���Ӱ\n"
				"������֮���ƶ�������Ҳ��\�Ƿ紵������ɵĴ�����\n",
		"sign": "���ٸ���ʾ���˴����д��˳�û����\n"
	]) );
	set("exits", ([
		"west" : "/d/suburb/es/oldpine/npath3",
		"north" : "/d/suburb/es/oldpine/spath1",
		"east" : "/d/suburb/es/oldpine/epath1"
]));

	setup();
}

void init()
{
	add_action("do_climb", "climb");
	if( this_player() ) {
		tell_room(__DIR__"tree1", this_player()->name() + "���������˹�����\n");
	}
}

int do_climb(string arg)
{
	if( arg!="pine" ) return 0;

	message_vision("$N�ֽŲ��ã����ݵ������˿յ�����Ĵ�������\n",
		this_player());

	tell_room(__DIR__"tree1", this_player()->name() + "����������������\n");
	this_player()->move(__DIR__"tree1");

	return 1;
}

int valid_leave(object me, string dir)
{
	tell_room(__DIR__"tree1",
		"���µ�" + me->name() + "��" + to_chinese(dir) + "�뿪�ˡ�\n");
	return 1;
}