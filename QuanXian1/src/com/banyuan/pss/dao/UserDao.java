package com.banyuan.pss.dao;
import java.util.List;
import com.banyuan.pss.entity.User;
public interface UserDao {
	public int login(String name, String pwd);
	public int changePwd(String pwdOld,String name,String pwdNew);
	public int changeRight(int type,String name);
	public List<User> selectAll();
	public int deleteEmpByEmpno(String name);
	public int saveUser(int num,String name,String pwd,int type,int ID,int state);
	public int type(String str1);
}
