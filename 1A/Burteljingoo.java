		super(arg);
		setSize(500, 500);
		menu = new JMenuBar();
		Action = new JMenu("Edit");
		String Act[] = {"New   ", "Open   ", "Save   ", "Save as .."
		, "Cut   ", "Copy   ", "Paste   ", "Exit   "};
		for(int count=0; count<8; count++) {
			mi[count] = new JMenuItem(Act[count]);
			mi[count].addActionListener(new ActionListener() {
				public void actionPerformed(ActionEvent e) {
					System.out.println(e.getActionCommand());
					JPanel panel = new JPanel();
					if(e.getActionCommand()=="Exit   ") {
						System.exit(0);
					}
					if(e.getActionCommand()=="Open   ") {
						String file;
				   		JFileChooser chooser = new JFileChooser("a.txt");
						try {
							File f = new File(new File("").getCanonicalPath());
							chooser.setSelectedFile(f);
							} catch (IOException er) {
						}
						chooser.showOpenDialog(panel); 
				   	 	File curFile = chooser.getSelectedFile();
				//   	 	text.setText();
					}
				}
			});
			Action.add(mi[count]);
		}
