// Room: "/d/oldpine/cliffside.c

inherit ROOM;

void create()
{
	set("short", "�ּ�....��....���±�");
	set("long", @LONG
��������վ��һ�������ּ��С�յ��ϣ���ı��ߡ����ߡ��ϱ߶�
��ï�ܵ�������Ψ�������Ǹ�����(cliff)������̽ͷһ�������̲���
�����ص���һ��������������ɵ�ǧ��С�ģ�һ��С�ĵ�����ȥ�϶���
������ǡ�
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
///  "south" : "/d/suburb/es/oldpine/pine2",
  "north" : "/d/suburb/es/oldpine/pine1",
///  "east" : "/d/suburb/es/oldpine/pine1",
]));
	set("item_desc", ([ /* sizeof() == 1 */
  "cliff" : "�㶨������һ������ʵ�������û����������ô�ֲ���Ҳ����
���Դ���������ɽ����ֻ���������ϴ��û�����ְ׳�Ը���
����ɵ�°ɡ�
",
]));
	set("outdoors", "oldpine");

	setup();
	replace_program(ROOM);
}