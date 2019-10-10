package com.banyuan.pss.view;

import java.awt.EventQueue;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JPasswordField;
import javax.swing.JTextField;
import javax.swing.border.EmptyBorder;

import com.banyuan.pss.service.UserService;
import com.banyuan.pss.util.Factory;

public class LoginFrame extends JFrame implements ActionListener {
	private JPanel contentPane;
	private JTextField textField;
	private JPasswordField passwordField;
	private JButton button;
	private JButton button_1;
	private JLabel lblNewLabel;
	private UserService userservice = (UserService) Factory.getInstance("Service");

	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					LoginFrame frame = new LoginFrame();
					frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	public LoginFrame() {
		setTitle("小型超市管理系统");
		setResizable(false);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setSize(450, 300);
		setLocationRelativeTo(null);

		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);

		JLabel name = new JLabel("用户名");
		name.setBounds(52, 150, 61, 16);
		contentPane.add(name);

		JLabel password = new JLabel("密码");
		password.setBounds(52, 191, 61, 16);
		contentPane.add(password);

		textField = new JTextField();
		textField.setBounds(125, 145, 271, 26);
		contentPane.add(textField);
		textField.setColumns(10);

		passwordField = new JPasswordField();
		passwordField.setBounds(125, 186, 271, 26);
		contentPane.add(passwordField);

		JButton Button1 = new JButton("登录");
		Button1.setBounds(73, 231, 82, 29);
		Button1.addActionListener(this);
		contentPane.add(Button1);

		button = new JButton("重置");
		button.setBounds(196, 231, 82, 29);
		button.addActionListener(this);
		contentPane.add(button);

		button_1 = new JButton("退出");
		button_1.setBounds(314, 231, 82, 29);
		button_1.addActionListener(this);
		contentPane.add(button_1);

		lblNewLabel = new JLabel("");
		lblNewLabel.setIcon(new ImageIcon("lib/aa.jpg"));
		lblNewLabel.setBounds(6, 6, 438, 127);
		contentPane.add(lblNewLabel);
	}

	public void actionPerformed(ActionEvent e) {
		if (e.getActionCommand().equals("登录")) {
			String a = textField.getText();
			char[] passwords = passwordField.getPassword();
			String password = new String(passwords);
			int i = userservice.login(a, password);///////////
			try {
				if (i == -1) {
					JOptionPane.showMessageDialog(null, "用户名或密码不能为空");
				} else if (i == -2) {
					JOptionPane.showMessageDialog(null, "错误");
				} else if (i == 1) {
					System.out.println(i);
					MainFrame mf = new MainFrame(a, password);// 超级管理员
					setVisible(false);
				} else if (i == 2) {
					System.out.println(i);
					MainFrame mf = new MainFrame(a, password);// 库存管理员

					mf.tabbedPane.remove(mf.getPBasicInfo());
					mf.tabbedPane.remove(mf.getPSale());
					mf.btnUserMGT.setVisible(false);
					mf.btnAuthorityMGT.setVisible(false);
					setVisible(false);
				} else if (i == 3) {
					System.out.println(i);
					MainFrame mf = new MainFrame(a, password);// 销售员

					mf.tabbedPane.remove(mf.getPBasicInfo());
					mf.tabbedPane.remove(mf.getPPurchase());
					mf.btnUserMGT.setVisible(false);
					mf.btnAuthorityMGT.setVisible(false);
					setVisible(false);
				} else {
					JOptionPane.showMessageDialog(null, "请管理员赋予权限");
				}

			} catch (Exception e1) {
				// TODO Auto-generated catch block
				e1.printStackTrace();
			}
			System.out.println(a);
			System.out.println(password);
		} else if (e.getActionCommand().equals("重置")) {
			textField.setText("");
			passwordField.setText("");
		} else {
			setVisible(false);
		}
	}
}
