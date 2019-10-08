package com.banyuan.pss.view;

import java.awt.EventQueue;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JTabbedPane;
import javax.swing.border.EmptyBorder;

public class MainFrame extends JFrame {

	private JPanel contentPane;
	 JTabbedPane tabbedPane;
	 JButton btnUserMGT;
	private JButton limitsbtn;
	 JButton btnAuthorityMGT;
	private JPanel pBasicInfo;
	private JPanel pPurchase;
	private JPanel pSale;
	
//	public static void main(String[] args) {
//		EventQueue.invokeLater(new Runnable() {
//			public void run() {
//				try {
//					MainFrame frame = new MainFrame();
//					frame.setVisible(true);
//				} catch (Exception e) {
//					e.printStackTrace();
//				}
//			}
//		});
//	}

	public MainFrame(String a,String b) {
		setResizable(false);
		setTitle("小型超市管理系统");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setSize(1000,660);
		setLocationRelativeTo(null);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);
		
		
		JTabbedPane tabbedPane = new JTabbedPane(JTabbedPane.TOP);
		tabbedPane.setBounds(6, 6, 988, 120);
		contentPane.add(tabbedPane);
		
		 pBasicInfo = new JPanel();
		tabbedPane.addTab("基础信息管理", null, pBasicInfo, null);
		pBasicInfo.setLayout(null);
		
		JButton btnCommodity = new JButton("商品信息管理");
//		btnCommodity.addActionListener(new ActionListener() {
//			public void actionPerformed(ActionEvent e) {
//				CommodityFrame commodityFrame = CommodityFrame.getInstance();
//				commodityFrame.setVisible(true);
//			}
//		});
		btnCommodity.setBounds(368, 11, 122, 51);
		pBasicInfo.add(btnCommodity);
		
		JButton btnProvider = new JButton("供应商信息管理");
		btnProvider.setBounds(502, 11, 135, 51);
		pBasicInfo.add(btnProvider);
		
		pPurchase = new JPanel();
		tabbedPane.addTab("进货管理", null, pPurchase, null);
		pPurchase.setLayout(null);
		
		JButton btnPurchase = new JButton("进货单");
		btnPurchase.setBounds(406, 11, 83, 51);
		pPurchase.add(btnPurchase);
		
		JButton btnReturnPurchase = new JButton("进货退货");
		btnReturnPurchase.setBounds(501, 11, 96, 51);
		pPurchase.add(btnReturnPurchase);
		
		pSale = new JPanel();
		tabbedPane.addTab("销售管理", null, pSale, null);
		pSale.setLayout(null);
		
		JButton btnSale = new JButton("销售单");
		btnSale.setBounds(406, 11, 83, 51);
		pSale.add(btnSale);
		
		JButton btnReturnSale = new JButton("销售退货");
		btnReturnSale.setBounds(501, 11, 96, 51);
		pSale.add(btnReturnSale);
		
		JPanel pQuery = new JPanel();
		tabbedPane.addTab("查询统计", null, pQuery, null);
		pQuery.setLayout(null);
		
		JPanel pQueryLeft = new JPanel();
		pQueryLeft.setBounds(6, 6, 338, 62);
		pQuery.add(pQueryLeft);
		pQueryLeft.setLayout(null);
		
		JButton btnQueryCommodity = new JButton("商品查询");
		btnQueryCommodity.setBounds(87, 5, 96, 51);
		pQueryLeft.add(btnQueryCommodity);
		
		JPanel pQueryRight = new JPanel();
		pQueryRight.setBounds(356, 6, 605, 62);
		pQuery.add(pQueryRight);
		pQueryRight.setLayout(null);
		
		JButton btnQueryProvider = new JButton("供应商查询");
		btnQueryProvider.setBounds(222, 6, 109, 51);
		pQueryRight.add(btnQueryProvider);
		
		JButton btnQuerySale = new JButton("销售查询");
		btnQuerySale.setBounds(343, 6, 96, 51);
		pQueryRight.add(btnQuerySale);
		
		JButton btnQueryPurchase = new JButton("入库查询");
		btnQueryPurchase.setBounds(451, 6, 96, 51);
		pQueryRight.add(btnQueryPurchase);
		
		JPanel pStock = new JPanel();
		tabbedPane.addTab("库存管理", null, pStock, null);
		pStock.setLayout(null);
		
		JButton btnReport = new JButton("生成报表");
		btnReport.setBounds(447, 11, 96, 51);
		pStock.add(btnReport);
		
		JPanel pAuthority = new JPanel();
		tabbedPane.addTab("权限管理", null, pAuthority, null);
		pAuthority.setLayout(null);
		
		JButton btnUserMGT = new JButton("用户管理");
		btnUserMGT.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
			}
		});
		btnUserMGT.setBounds(339, 11, 96, 51);
		pAuthority.add(btnUserMGT);
		
		JButton btnChangePwd = new JButton("修改密码");
		btnChangePwd.setBounds(447, 11, 96, 51);
		pAuthority.add(btnChangePwd);
		
		JButton btnAuthorityMGT = new JButton("权限管理");
		btnAuthorityMGT.setBounds(555, 11, 96, 51);
		pAuthority.add(btnAuthorityMGT);
		btnSale.setEnabled(false);
	}
	public JPanel getPSale() {
		return pSale;
	}
	public JPanel getPBasicInfo() {
		return pBasicInfo;
	}
	public JPanel getPPurchase() {
		return pPurchase;
	}
	
}

