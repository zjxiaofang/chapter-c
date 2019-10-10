package com.banyuan.pss.service;

import java.util.List;

public interface UserService {
	int login(String str1,String str2);
	int changePwd(String old,String name,String c,String ne,String rep);
	public int updateRight(int a,String str2);
	List getUserData();
	int insertUser(int num,String name,String pwd,int type,int ID,int state);
	int delUser(String name);
	int type2(String name);
	

}
