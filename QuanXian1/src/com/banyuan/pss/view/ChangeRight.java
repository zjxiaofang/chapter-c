package com.banyuan.pss.view;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.List;
import java.util.Vector;

import javax.swing.DefaultComboBoxModel;
import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;

import com.banyuan.pss.service.UserService;
import com.banyuan.pss.util.Factory;


public class ChangeRight extends JFrame implements ActionListener {

	private JPanel contentPane;
	private JCheckBox chckbx1;
	private JCheckBox chckbx2;
	private JCheckBox chckbx3;
	private JComboBox comboBox_1;
	private static DefaultComboBoxModel dcb;
	private UserService userservice = (UserService) Factory.getInstance("Service");
	
	private static ChangeRight changeRight = new ChangeRight();
	public static ChangeRight getInstance() {
		return changeRight;
	}
	/**
	 * Create the frame.
	 */
	ChangeRight() {
		setTitle("修改用户权限");
		// setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 716, 435);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);

		JPanel panel = new JPanel();
		panel.setBounds(0, 0, 710, 407);
		contentPane.add(panel);
		panel.setLayout(null);

		JLabel label = new JLabel("权限：");
		label.setBounds(58, 161, 61, 16);
		panel.add(label);

		JLabel label_1 = new JLabel("选择修改用户：");
		label_1.setBounds(58, 70, 91, 23);
		panel.add(label_1);

		// 下拉框获取数据
		dcb = new DefaultComboBoxModel();
		List list = userservice.getUserData();
		for (int i = 0; i < list.size(); i++) {
			Vector v= (Vector)(list.get(i));
			dcb.addElement(v.get(1));
		}
		comboBox_1 = new JComboBox(dcb);
		comboBox_1.setBounds(180, 66, 262, 27);

		panel.add(comboBox_1);
		JButton btnUpdate = new JButton("修改");
		btnUpdate.setBounds(250, 263, 117, 42);
		panel.add(btnUpdate);
		btnUpdate.addActionListener(this);

		chckbx1 = new JCheckBox("系统管理员");
		chckbx1.setBounds(162, 157, 128, 23);
		panel.add(chckbx1);
		chckbx1.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
				if (chckbx1.isSelected()) {
					chckbx2.setVisible(false);
					chckbx3.setVisible(false);
				} else {
					chckbx2.setVisible(true);
					chckbx3.setVisible(true);
				}
			}
		});

		chckbx2 = new JCheckBox("销售员");
		chckbx2.setBounds(310, 157, 128, 23);
		panel.add(chckbx2);

		chckbx3 = new JCheckBox("库存管理员");
		chckbx3.setBounds(434, 157, 128, 23);
		panel.add(chckbx3);
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		if (!chckbx1.isSelected() && !chckbx2.isSelected() && !chckbx3.isSelected()) {
			JOptionPane.showMessageDialog(null, "请选择权限");
		} else {
			String name = (String) comboBox_1.getSelectedItem();
			if (userservice.type2(name) == 1) {
				JOptionPane.showMessageDialog(null, "无法修改管理员权限");
			} else {
				
				if (chckbx1.isSelected()) {
					int j = userservice.updateRight(1, name);
					if (j > 0) {
						JOptionPane.showMessageDialog(null, "权限修改成功");
					} else {
						JOptionPane.showMessageDialog(null, "权限修改失败");
					}
				} else if (chckbx2.isSelected()) {
					int j = userservice.updateRight(2, name);
					if (j > 0) {
						JOptionPane.showMessageDialog(null, "权限修改成功");
					} else {
						JOptionPane.showMessageDialog(null, "权限修改失败");
					}
				} else if (chckbx3.isSelected()) {
					int j = userservice.updateRight(3, name);
					if (j > 0) {
						JOptionPane.showMessageDialog(null, "权限修改成功");
					} else {
						JOptionPane.showMessageDialog(null, "权限修改失败");
					}
				}	
			}
			
		}
	}
}
