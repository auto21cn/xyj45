// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
inherit ROOM;
#include <room.h>

void create ()
{
  set ("short", "���ƶ�");
  set ("long", @LONG

������С������ȴ������ء�
LONG);
  set("exits", ([ /* sizeof() == 3 */
//  "north": __DIR__"baiyun19",
  "north": __DIR__"baiyun15",
  "northeast": __DIR__"baiyun"+sprintf("%d",random(20)),
  "northwest": __DIR__"baiyun11",
]));

  set("no_clean_up", 1);
  setup();
}
int clean_up()
{
      return 0;
}
