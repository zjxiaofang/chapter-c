package com.banyuan.pss.dao.impl;

import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

import com.banyuan.pss.dao.UserDao;
import com.banyuan.pss.entity.User;
import com.banyuan.pss.util.DBUtils;

public class UserDaoImpl implements UserDao {

	@Override
	public int login(String str1, String str2) {
		String sql = "select * from account where accountName=? and accountPassword=?";
		List<User> list = new DBUtils().executeQuery(sql, str1, str2);
		if(list==null||list.isEmpty()) {
			return -2;
		}else {
			User user = list.get(0);
			return user.getAtype();
		}
	}

	public int type(String str1) {
		String sql = "select * from account where accountName=?";
		User user = new DBUtils().executeQuery(sql, str1).get(0);
		return user.getAtype();
	}
	@Override
	public int changePwd(String old, String name, String ne) {
		// TODO Auto-generated method stub
		String sql = "update account set accountPassword=? where accountName=? and accountPassword=?";
		int i = new DBUtils().executeUpdate(sql, ne, name, old);
		return i;
	}

	@Override
	public int changeRight(int a, String str) {
		// TODO Auto-generated method stub
		String sql = "update account set accountType=? where accountName=?";
		int i = new DBUtils().executeUpdate(sql, a, str);
		return i;
	}

	public List<User> selectAll() {
		String sql = "select * from account";
		return new DBUtils().executeQuery(sql);
	}

	public int deleteEmpByEmpno(String name) {
		String sql = "delete from account where accountName=?";
		return new DBUtils().executeUpdate(sql, name);
	}

	public int saveUser(int num, String name, String pwd, int type, int ID,int state) {
		String sql = "insert into account values (?,?,?,?,?,?)";
		return new DBUtils().executeUpdate(sql, num, name, pwd, type, ID,state);
	}
}
