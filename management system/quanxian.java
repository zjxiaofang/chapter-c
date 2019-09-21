package com.banyuan.test02;

import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.JPasswordField;
import javax.swing.JButton;
import javax.swing.ImageIcon;

public class LoginFrame extends JFrame {

	private JPanel contentPane;
	private JTextField textField;
	private JPasswordField passwordField;
	private JButton button;
	private JButton button_1;
	private JLabel lblNewLabel;

	/**
	 * Launch the application.
	 */
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

	/**
	 * Create the frame.
	 */
	public LoginFrame() {
		setTitle("小型超市管理系统");
		
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 450, 300);
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
		
		JButton Button1 = new JButton("登陆");
		Button1.setBounds(73, 231, 82, 29);
		contentPane.add(Button1);
		
		button = new JButton("重置");
		button.setBounds(196, 231, 82, 29);
		contentPane.add(button);
		
		button_1 = new JButton("退出");
		button_1.setBounds(314, 231, 82, 29);
		contentPane.add(button_1);
		
		lblNewLabel = new JLabel("");
		lblNewLabel.setIcon(new ImageIcon("/Users/edz/Desktop/屏幕快照 2019-09-21 上午11.27.29.jpg"));
		lblNewLabel.setBounds(6, 6, 438, 127);
		contentPane.add(lblNewLabel);
	}
}
