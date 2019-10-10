package com.banyuan.pss.util;
import java.io.FileInputStream;
import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.List;
import java.util.Properties;
import java.util.Vector;

import com.banyuan.pss.entity.User;

public class DBUtils {
	static String driver;
	static String url;
	static String username;
	static String pwd;
	Connection conn = null;
	PreparedStatement ps = null;
	ResultSet rs = null;
	Statement sta = null;

	static {
		try {
			Properties properties = new Properties();
			// 加载配置文件
			properties.load(new FileInputStream("lib/db.properties"));
			driver = properties.getProperty("driver");
			url = properties.getProperty("url");
			username = properties.getProperty("username");
			pwd = properties.getProperty("pwd");
			// 加载驱动
			Class.forName(driver);
		} catch (IOException e) {
			e.printStackTrace();
		} catch (ClassNotFoundException e) {
			e.printStackTrace();
		}
	}

	// 获取连接
	public Connection getConnection() {

		try {
			conn = DriverManager.getConnection(url, username, pwd);
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return conn;
	}

	// 关闭资源
	public void closeAll() {
		try {
			if (rs != null) {
				rs.close();
			}
		} catch (SQLException e) {
			e.printStackTrace();
		}
		try {
			if (sta != null) {
				sta.close();
			}
		} catch (SQLException e) {
			e.printStackTrace();
		}
		try {
			if (conn != null) {
				conn.close();
			}
		} catch (SQLException e) {
			e.printStackTrace();
		}
	}

	// 执行增加，删除，修改：
	public int executeUpdate(String sql, Object... obj) {
		int n = 0;
		try {
			conn = getConnection();
			// 3.创建会话
			ps = conn.prepareStatement(sql);
			// 4.设置？的值：
			for (int i = 0; i < obj.length; i++) {
				ps.setObject(i + 1, obj[i]);
			}
			// 5.执行：
			n = ps.executeUpdate();
		} catch (SQLException e) {
			e.printStackTrace();
		} finally {
			closeAll();
		}
		return n;
	}

	public List<User> executeQuery(String sql, Object... obj) {
		List<User> list = new Vector<>();
		ResultSet rs = null;
		User user = null;
		try {
			// 创建连接对象
			conn = getConnection();
			// 创建执行对象
			ps = conn.prepareStatement(sql);
			// 如果有参数 则添加参数
			if (obj.length > 0) {
				for (int i = 0; i < obj.length; i++) {
					ps.setObject(i + 1, obj[i]);
				}
			}
			rs = ps.executeQuery();
			while (rs.next()) {
				user = new User();
				user.setAnumber(rs.getInt(1));
				user.setAname(rs.getString(2));
				user.setApwd(rs.getString(3));
				user.setAtype(rs.getInt(4));
				user.setaID(rs.getInt(5));
				user.setAstate(rs.getInt(6));
				list.add(user);
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
		return list;
	}
}
