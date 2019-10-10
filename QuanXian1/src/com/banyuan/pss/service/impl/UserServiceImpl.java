package com.banyuan.pss.service.impl;

import java.util.List;
import java.util.Vector;

import com.banyuan.pss.dao.UserDao;
import com.banyuan.pss.entity.User;
import com.banyuan.pss.service.UserService;
import com.banyuan.pss.util.Factory;

public class UserServiceImpl implements UserService {
	private UserDao ud = (UserDao) Factory.getInstance("Dao");

	/**
	 * 登陆业务
	 */
	@Override
	public int login(String str1, String str2) {
		// 非空校验
		if ((str1.trim().length() == 0) && (str2.trim().length() == 0)) {
			return -1;
		} else {
			return ud.login(str1, str2);
		}
	}

	@Override
	public int changePwd(String old, String name, String c,String ne, String rep) {
		if (ne.equals(rep)==false) {
			return -2;
		} else if(name.equals(c)==false){
			return -3;
		}
		return ud.changePwd(old, name, ne);
	}
	public int type2(String str1) {
		return ud.type(str1);
	}
	@Override
	public int updateRight(int a, String str2) {
		// TODO Auto-generated method stub
		return ud.changeRight(a,str2);
	}

	
	@Override
	public List<User> getUserData() {
		// TODO Auto-generated method stub
		List<User> list = ud.selectAll();	
		Vector data = new Vector();
		for(Object obj : list) {
			User user = (User)obj;
			Vector d = new Vector();
			d.add(user.getAnumber());
			d.add(user.getAname());
			d.add(user.getApwd());
			d.add(user.getAtype());
			d.add(user.getaID());
			d.add(user.getAstate());
			data.add(d);
		}
		return data;
	}
	 
	

	@Override
	public int insertUser(int num, String name, String pwd, int type, int ID,int state) {
		// TODO Auto-generated method stub
		return ud.saveUser(num, name, pwd, type, ID,state);
	}

	@Override
	public int delUser(String name) {
		// TODO Auto-generated method stub
		return ud.deleteEmpByEmpno(name);
	}
}