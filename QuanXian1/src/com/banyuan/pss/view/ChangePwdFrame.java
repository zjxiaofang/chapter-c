package com.banyuan.pss.view;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

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


public class ChangePwdFrame extends JFrame implements ActionListener {

	private JPanel contentPane;
	private JTextField textUName;
	private JPasswordField textOPwd;
	private JPasswordField textNPwd;
	private JPasswordField textRPwd;
	private UserService userservice = (UserService) Factory.getInstance("Service");
	private String c;
	
	public void setC(String c) {
		this.c = c;
	}

	private static final ChangePwdFrame changePwd=new ChangePwdFrame();
	public static ChangePwdFrame getInstance() {
		return changePwd;
	}
	/**
	 * Create the frame.
	 */
	ChangePwdFrame() {
		
		setTitle("修改密码");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 741, 477);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);
		setVisible(true);

		JPanel panel = new JPanel();
		panel.setBounds(6, 6, 741, 449);
		contentPane.add(panel);
		panel.setLayout(null);

		JLabel lblNewLabel = new JLabel("登录名：");
		lblNewLabel.setBounds(93, 48, 61, 29);
		panel.add(lblNewLabel);

		textUName = new JTextField();
		textUName.setBounds(202, 42, 328, 47);
		panel.add(textUName);
		textUName.setColumns(10);

		JLabel lblNewLabel_1 = new JLabel("旧密码：");
		lblNewLabel_1.setBounds(93, 124, 61, 16);
		panel.add(lblNewLabel_1);

		JLabel label = new JLabel("新密码：");
		label.setBounds(93, 185, 61, 21);
		panel.add(label);

		JLabel lblNewLabel_2 = new JLabel("重新输入密码：");
		lblNewLabel_2.setBounds(73, 251, 107, 16);
		panel.add(lblNewLabel_2);

		textOPwd = new JPasswordField();
		textOPwd.setBounds(202, 110, 328, 47);
		panel.add(textOPwd);

		textNPwd = new JPasswordField();
		textNPwd.setBounds(202, 182, 328, 47);
		panel.add(textNPwd);

		textRPwd = new JPasswordField();
		textRPwd.setBounds(202, 246, 328, 47);
		panel.add(textRPwd);

		JButton btnUpdate = new JButton("修改");
		btnUpdate.setBounds(129, 332, 117, 47);
		panel.add(btnUpdate);
		btnUpdate.addActionListener(this);

		JButton btnReset = new JButton("重置");
		btnReset.setBounds(400, 332, 117, 47);
		panel.add(btnReset);
		btnReset.addActionListener(this);
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		String method = e.getActionCommand();
		String username = textUName.getText();
		System.out.println(username);
		String oldPwd = textOPwd.getText();
		System.out.println("====");
		System.out.println(oldPwd);
		String newPwd = textNPwd.getText();
		System.out.println(newPwd);
		String repPwd = textRPwd.getText();
		System.out.println(repPwd);
		int i = userservice.changePwd(oldPwd,username,c,newPwd,repPwd);
		if (method.equals("修改")) {
			if (username == null || oldPwd == null || newPwd == null || repPwd == null) {
				JOptionPane.showMessageDialog(null, "用户名密码不能为空");
			} else if (i == -2) {
				JOptionPane.showMessageDialog(null, "两次输入的密码不一致");
			} else if (i == -3) {
				JOptionPane.showMessageDialog(null, "不能修改别人密码");
			}else if (i == 0) {
				JOptionPane.showMessageDialog(null, "修改失败");
			} else {
				JOptionPane.showMessageDialog(null, "修改成功");
				textUName.setText("");
				textOPwd.setText("");
				textRPwd.setText("");
				textNPwd.setText("");
			}
		} else {
			textNPwd.setText("");
			textOPwd.setText("");
			textUName.setText("");
			textRPwd.setText("");
		}
	}

}
