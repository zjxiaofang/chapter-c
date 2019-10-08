package com.banyuan.pss.service;

import java.util.List;

public interface UserService {
	int login(String str1,String str2);
	int changePwd(String str1,String str2,String str3,String str4);
	public int updateRight(int a,String str2);
	List getUserData();
	int insertUser(int num,String name,String pwd,int type,int ID);
	int delUser(String name,String pwd);
	int type2(String name);
	

}
