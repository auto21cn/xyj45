// kickout.c

#include <ansi.h>
#include <command.h>

inherit F_CLEAN_UP;

int main(object me, string arg)
{
	object ob;

	if( !arg || sscanf(arg, "%s", arg) != 1 )
		return notify_fail("��Ҫ�ݻ�ʲô��\n");

	if( !objectp(ob = present(arg, me)) )
        return notify_fail("������û������������\n");
	if(me->query("id") != ob->query("owner"))
	return notify_fail("��������������ģ��㲻���Դݻ�����\n");
	seteuid(ROOT_UID);
	rm(base_name(ob) + ".c");
	ob->move(environment(me));
	destruct(ob);
	me->add("created_item",-1);
	seteuid(getuid());
	write("�ϣ�\n");
	return 1;
}

int help(object me)
{
write(@HELP
������ô�ָ��ݻ�һ�����Լ�����������ݻٵ������
��Զ��ʧ����ָ���������ݻ��㲻����Ҫ��������Ʒ��
ָ���ʽ : destroy <ĳ���>

HELP
    );
    return 1;
}
