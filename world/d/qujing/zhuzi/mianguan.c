// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// by snowcat 11/6/1997
inherit ROOM;

void create()
{
  set ("short", "���");
  set ("long", @LONG

����λ�ڳ����ĵ�һ����ݣ��ضη��������⼫Ϊ��¡����������
��ʽ����������㣬�������ձ����ɡ�������һ��ͨ�����Ͻ֣���
��ͨ��Ϧ�ֽ֡�

LONG);

  set("exits", ([ 
    "east" : __DIR__"zhuzi3",
    "south" : __DIR__"xi4",
  ]));
  set("objects", ([
    __DIR__"npc/liuguang" : 1,
  ]));
  setup();
}