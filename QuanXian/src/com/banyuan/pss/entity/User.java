package com.banyuan.pss.entity;

public class User
{
	private int anumber;
	private String aname;
	private String apwd;
	private int atype;
	private int aID;
	private int astate;
	public User() {
		super();
	}
	public User(int anumber, String aname, String apwd, int atype, int aID, int astate) {
		super();
		this.anumber = anumber;
		this.aname = aname;
		this.apwd = apwd;
		this.atype = atype;
		this.aID = aID;
		this.astate = astate;
	}
	public int getAnumber() {
		return anumber;
	}
	public void setAnumber(int anumber) {
		this.anumber = anumber;
	}
	public String getAname() {
		return aname;
	}
	public void setAname(String aname) {
		this.aname = aname;
	}
	public String getApwd() {
		return apwd;
	}
	public void setApwd(String apwd) {
		this.apwd = apwd;
	}
	public int getAtype() {
		return atype;
	}
	public void setAtype(int atype) {
		this.atype = atype;
	}
	public int getaID() {
		return aID;
	}
	public void setaID(int aID) {
		this.aID = aID;
	}
	public int getAstate() {
		return astate;
	}
	public void setAstate(int astate) {
		this.astate = astate;
	}
	@Override
	public String toString() {
		return "User [anumber=" + anumber + ", aname=" + aname + ", apwd=" + apwd + ", atype=" + atype + ", aID=" + aID
				+ ", astate=" + astate + "]";
	}
	
	
	
}

