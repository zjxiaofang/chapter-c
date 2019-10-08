package com.banyuan.pss.serviceImpl;

import java.util.List;

import com.banyuan.pss.dao.UserDao;
import com.banyuan.pss.db.Factory;
import com.banyuan.pss.entity.User;
import com.banyuan.pss.service.UserService;

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
	public int changePwd(String str1, String str2, String str3, String str4) {
		if (str3 == str4) {
			return ud.changePwd(str1, str2, str3);
		} else {
			return -1;
		}
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
		return ud.selectAll();
	}

	@Override
	public int insertUser(int num, String name, String pwd, int type, int ID) {
		// TODO Auto-generated method stub
		return ud.saveUser(num, name, pwd, type, ID);
	}

	@Override
	public int delUser(String name, String pwd) {
		// TODO Auto-generated method stub
		return ud.deleteEmpByEmpno(name, pwd);

	}
}