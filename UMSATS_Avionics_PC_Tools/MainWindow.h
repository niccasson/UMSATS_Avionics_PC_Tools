#ifndef MAINWINDOW_h
#define MAINWINDOW_h

#pragma once

namespace UMSATSAvionicsPCTools {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;

#pragma region Enums

	enum messageSelect {
		SETUP_FAILED = 0,
		SETUP_SUCCESS = 1,
		SETUP_CLOSED = 2,
	};

#pragma endregion

#pragma region Constants
	
	const std::string setupMessages[3] = { "Please select a baud rate and com port.", "Connection made successfully.", "Disconnected successfully." };
	
#pragma endregion

	/// <summary>
	/// Summary for MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
		{
			InitializeComponent();

			FindPorts();
			PopulateFields();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

//--------------Begin element declarations-----------------

	private: System::Windows::Forms::GroupBox^ overView;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox;

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ Config;
	private: System::Windows::Forms::GroupBox^ groupBox7;

	private: System::Windows::Forms::GroupBox^ groupBox5;

	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TabControl^ configMenu;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ baudBox;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ portsBox;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ closePortButton;



	private: System::Windows::Forms::Button^ openPortButton;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ applySettingsButton;

	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label16;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::CheckBox^ connectedCheckBox;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::ComboBox^ presOversamplingBox;

	private: System::Windows::Forms::ComboBox^ bmp388OdrBox;

	private: System::Windows::Forms::ComboBox^ bmp388IIRBox;

	private: System::Windows::Forms::ComboBox^ gyroRangeBox;

	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::ComboBox^ gyroBndwdthOdrBox;

	private: System::Windows::Forms::ComboBox^ accRangeBox;

	private: System::Windows::Forms::ComboBox^ accBandwidthBox;

	private: System::Windows::Forms::ComboBox^ recordToFlashBox;

	private: System::Windows::Forms::Label^ label4;




	private: System::Windows::Forms::ComboBox^ dataRateBox;
	private: System::Windows::Forms::ComboBox^ tempOversamplingBox;


	private: System::Windows::Forms::ComboBox^ inFlightBox;

	private: System::Windows::Forms::ComboBox^ accOdrBox;

	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::TextBox^ timeToWaitBox;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::GroupBox^ groupBox4;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ button7;


	private: System::IO::Ports::SerialPort^ serialPort1;

//--------------End element declarations-------------------


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->overView = (gcnew System::Windows::Forms::GroupBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->Config = (gcnew System::Windows::Forms::TabPage());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->timeToWaitBox = (gcnew System::Windows::Forms::TextBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->tempOversamplingBox = (gcnew System::Windows::Forms::ComboBox());
			this->inFlightBox = (gcnew System::Windows::Forms::ComboBox());
			this->accOdrBox = (gcnew System::Windows::Forms::ComboBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->presOversamplingBox = (gcnew System::Windows::Forms::ComboBox());
			this->bmp388OdrBox = (gcnew System::Windows::Forms::ComboBox());
			this->bmp388IIRBox = (gcnew System::Windows::Forms::ComboBox());
			this->gyroRangeBox = (gcnew System::Windows::Forms::ComboBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->gyroBndwdthOdrBox = (gcnew System::Windows::Forms::ComboBox());
			this->accRangeBox = (gcnew System::Windows::Forms::ComboBox());
			this->accBandwidthBox = (gcnew System::Windows::Forms::ComboBox());
			this->recordToFlashBox = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataRateBox = (gcnew System::Windows::Forms::ComboBox());
			this->applySettingsButton = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->connectedCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->closePortButton = (gcnew System::Windows::Forms::Button());
			this->openPortButton = (gcnew System::Windows::Forms::Button());
			this->baudBox = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->portsBox = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->configMenu = (gcnew System::Windows::Forms::TabControl());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->overView->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->Config->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->configMenu->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// overView
			// 
			this->overView->Controls->Add(this->label31);
			this->overView->Controls->Add(this->label30);
			this->overView->Controls->Add(this->label17);
			this->overView->Controls->Add(this->label18);
			this->overView->Controls->Add(this->label25);
			this->overView->Controls->Add(this->label26);
			this->overView->Controls->Add(this->label27);
			this->overView->Controls->Add(this->label28);
			this->overView->Controls->Add(this->label29);
			this->overView->Controls->Add(this->label24);
			this->overView->Controls->Add(this->label23);
			this->overView->Controls->Add(this->label22);
			this->overView->Controls->Add(this->label21);
			this->overView->Controls->Add(this->label20);
			this->overView->Controls->Add(this->label19);
			this->overView->Controls->Add(this->label16);
			this->overView->Controls->Add(this->label15);
			this->overView->Controls->Add(this->label14);
			this->overView->Controls->Add(this->label13);
			this->overView->Controls->Add(this->label12);
			this->overView->Controls->Add(this->label11);
			this->overView->Controls->Add(this->label10);
			this->overView->Controls->Add(this->label9);
			this->overView->Controls->Add(this->label8);
			this->overView->Controls->Add(this->label7);
			this->overView->Location = System::Drawing::Point(12, 12);
			this->overView->Name = L"overView";
			this->overView->Size = System::Drawing::Size(482, 265);
			this->overView->TabIndex = 1;
			this->overView->TabStop = false;
			this->overView->Text = L"Overview";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(151, 220);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(119, 25);
			this->label31->TabIndex = 33;
			this->label31->Text = L"Launchpad";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(6, 220);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(138, 25);
			this->label30->TabIndex = 32;
			this->label30->Text = L"Flight Status:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(327, 182);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(39, 25);
			this->label17->TabIndex = 31;
			this->label17->Text = L"--.-";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(245, 182);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(39, 25);
			this->label18->TabIndex = 30;
			this->label18->Text = L"--.-";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(303, 182);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(18, 25);
			this->label25->TabIndex = 29;
			this->label25->Text = L",";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(221, 182);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(18, 25);
			this->label26->TabIndex = 28;
			this->label26->Text = L",";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(405, 182);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(71, 25);
			this->label27->TabIndex = 27;
			this->label27->Text = L"(x,y,z)";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(162, 182);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(39, 25);
			this->label28->TabIndex = 26;
			this->label28->Text = L"--.-";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(6, 182);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(122, 25);
			this->label29->TabIndex = 25;
			this->label29->Text = L"Gyroscope:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(327, 145);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(39, 25);
			this->label24->TabIndex = 24;
			this->label24->Text = L"--.-";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(245, 145);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(39, 25);
			this->label23->TabIndex = 23;
			this->label23->Text = L"--.-";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(303, 145);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(18, 25);
			this->label22->TabIndex = 22;
			this->label22->Text = L",";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(221, 145);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(18, 25);
			this->label21->TabIndex = 21;
			this->label21->Text = L",";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(405, 145);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(71, 25);
			this->label20->TabIndex = 20;
			this->label20->Text = L"(x,y,z)";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(210, 109);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(29, 25);
			this->label19->TabIndex = 19;
			this->label19->Text = L"m";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(162, 145);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(39, 25);
			this->label16->TabIndex = 16;
			this->label16->Text = L"--.-";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(105, 109);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(67, 25);
			this->label15->TabIndex = 15;
			this->label15->Text = L"-----.--";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 145);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(156, 25);
			this->label14->TabIndex = 14;
			this->label14->Text = L"Accelerometer:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 109);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(90, 25);
			this->label13->TabIndex = 13;
			this->label13->Text = L"Altitude:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(152, 71);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(39, 25);
			this->label12->TabIndex = 12;
			this->label12->Text = L"--.-";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 71);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(140, 25);
			this->label11->TabIndex = 11;
			this->label11->Text = L"Temperature:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(221, 71);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(35, 25);
			this->label10->TabIndex = 10;
			this->label10->Text = L"°C";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(190, 37);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(49, 25);
			this->label9->TabIndex = 9;
			this->label9->Text = L"kPa";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(116, 37);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(39, 25);
			this->label8->TabIndex = 8;
			this->label8->Text = L"--.-";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 37);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(104, 25);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Pressure:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->richTextBox);
			this->groupBox1->Location = System::Drawing::Point(12, 283);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(482, 703);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Console";
			// 
			// richTextBox
			// 
			this->richTextBox->Location = System::Drawing::Point(11, 30);
			this->richTextBox->Name = L"richTextBox";
			this->richTextBox->Size = System::Drawing::Size(459, 659);
			this->richTextBox->TabIndex = 0;
			this->richTextBox->Text = L">";
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(8, 39);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1317, 716);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Live Data";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// Config
			// 
			this->Config->Controls->Add(this->groupBox4);
			this->Config->Controls->Add(this->groupBox7);
			this->Config->Controls->Add(this->groupBox5);
			this->Config->Controls->Add(this->groupBox3);
			this->Config->Controls->Add(this->groupBox2);
			this->Config->Location = System::Drawing::Point(8, 39);
			this->Config->Name = L"Config";
			this->Config->Padding = System::Windows::Forms::Padding(3);
			this->Config->Size = System::Drawing::Size(1317, 716);
			this->Config->TabIndex = 0;
			this->Config->Text = L"Config";
			this->Config->UseVisualStyleBackColor = true;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->button4);
			this->groupBox7->Controls->Add(this->textBox1);
			this->groupBox7->Controls->Add(this->button3);
			this->groupBox7->Controls->Add(this->button1);
			this->groupBox7->Location = System::Drawing::Point(7, 390);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(697, 320);
			this->groupBox7->TabIndex = 5;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Flash Memory";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->textBox2);
			this->groupBox5->Controls->Add(this->label42);
			this->groupBox5->Controls->Add(this->button2);
			this->groupBox5->Location = System::Drawing::Point(287, 6);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(252, 378);
			this->groupBox5->TabIndex = 3;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"eMatches";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->timeToWaitBox);
			this->groupBox3->Controls->Add(this->label39);
			this->groupBox3->Controls->Add(this->tempOversamplingBox);
			this->groupBox3->Controls->Add(this->inFlightBox);
			this->groupBox3->Controls->Add(this->accOdrBox);
			this->groupBox3->Controls->Add(this->label41);
			this->groupBox3->Controls->Add(this->label40);
			this->groupBox3->Controls->Add(this->label38);
			this->groupBox3->Controls->Add(this->label37);
			this->groupBox3->Controls->Add(this->label36);
			this->groupBox3->Controls->Add(this->presOversamplingBox);
			this->groupBox3->Controls->Add(this->bmp388OdrBox);
			this->groupBox3->Controls->Add(this->bmp388IIRBox);
			this->groupBox3->Controls->Add(this->gyroRangeBox);
			this->groupBox3->Controls->Add(this->label35);
			this->groupBox3->Controls->Add(this->label34);
			this->groupBox3->Controls->Add(this->label33);
			this->groupBox3->Controls->Add(this->label32);
			this->groupBox3->Controls->Add(this->gyroBndwdthOdrBox);
			this->groupBox3->Controls->Add(this->accRangeBox);
			this->groupBox3->Controls->Add(this->accBandwidthBox);
			this->groupBox3->Controls->Add(this->recordToFlashBox);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->dataRateBox);
			this->groupBox3->Controls->Add(this->applySettingsButton);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Location = System::Drawing::Point(545, 6);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(766, 378);
			this->groupBox3->TabIndex = 1;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Settings";
			// 
			// timeToWaitBox
			// 
			this->timeToWaitBox->Location = System::Drawing::Point(230, 73);
			this->timeToWaitBox->Name = L"timeToWaitBox";
			this->timeToWaitBox->Size = System::Drawing::Size(121, 31);
			this->timeToWaitBox->TabIndex = 31;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(397, 118);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(131, 25);
			this->label39->TabIndex = 4;
			this->label39->Text = L"BMP388 IIR:";
			// 
			// tempOversamplingBox
			// 
			this->tempOversamplingBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->tempOversamplingBox->FormattingEnabled = true;
			this->tempOversamplingBox->Location = System::Drawing::Point(609, 226);
			this->tempOversamplingBox->Name = L"tempOversamplingBox";
			this->tempOversamplingBox->Size = System::Drawing::Size(121, 33);
			this->tempOversamplingBox->TabIndex = 30;
			// 
			// inFlightBox
			// 
			this->inFlightBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->inFlightBox->FormattingEnabled = true;
			this->inFlightBox->Location = System::Drawing::Point(230, 267);
			this->inFlightBox->Name = L"inFlightBox";
			this->inFlightBox->Size = System::Drawing::Size(121, 33);
			this->inFlightBox->TabIndex = 29;
			// 
			// accOdrBox
			// 
			this->accOdrBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->accOdrBox->FormattingEnabled = true;
			this->accOdrBox->Location = System::Drawing::Point(230, 228);
			this->accOdrBox->Name = L"accOdrBox";
			this->accOdrBox->Size = System::Drawing::Size(121, 33);
			this->accOdrBox->TabIndex = 28;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(397, 234);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(212, 25);
			this->label41->TabIndex = 27;
			this->label41->Text = L"Temp. oversampling:";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(7, 278);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(87, 25);
			this->label40->TabIndex = 26;
			this->label40->Text = L"In flight:";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(397, 195);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(202, 25);
			this->label38->TabIndex = 24;
			this->label38->Text = L"Pres. oversampling:";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(397, 156);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(137, 25);
			this->label37->TabIndex = 23;
			this->label37->Text = L"BMP388 odr:";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(397, 78);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(125, 25);
			this->label36->TabIndex = 22;
			this->label36->Text = L"Gyro range:";
			// 
			// presOversamplingBox
			// 
			this->presOversamplingBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->presOversamplingBox->FormattingEnabled = true;
			this->presOversamplingBox->Location = System::Drawing::Point(609, 187);
			this->presOversamplingBox->Name = L"presOversamplingBox";
			this->presOversamplingBox->Size = System::Drawing::Size(121, 33);
			this->presOversamplingBox->TabIndex = 21;
			// 
			// bmp388OdrBox
			// 
			this->bmp388OdrBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->bmp388OdrBox->FormattingEnabled = true;
			this->bmp388OdrBox->Location = System::Drawing::Point(609, 149);
			this->bmp388OdrBox->Name = L"bmp388OdrBox";
			this->bmp388OdrBox->Size = System::Drawing::Size(121, 33);
			this->bmp388OdrBox->TabIndex = 20;
			// 
			// bmp388IIRBox
			// 
			this->bmp388IIRBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->bmp388IIRBox->FormattingEnabled = true;
			this->bmp388IIRBox->Location = System::Drawing::Point(609, 110);
			this->bmp388IIRBox->Name = L"bmp388IIRBox";
			this->bmp388IIRBox->Size = System::Drawing::Size(121, 33);
			this->bmp388IIRBox->TabIndex = 19;
			// 
			// gyroRangeBox
			// 
			this->gyroRangeBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->gyroRangeBox->FormattingEnabled = true;
			this->gyroRangeBox->Location = System::Drawing::Point(609, 73);
			this->gyroRangeBox->Name = L"gyroRangeBox";
			this->gyroRangeBox->Size = System::Drawing::Size(121, 33);
			this->gyroRangeBox->TabIndex = 18;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(397, 38);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(194, 25);
			this->label35->TabIndex = 17;
			this->label35->Text = L"Gyro bndwdth_odr:";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(7, 235);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(91, 25);
			this->label34->TabIndex = 16;
			this->label34->Text = L"Acc odr:";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(7, 195);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(115, 25);
			this->label33->TabIndex = 15;
			this->label33->Text = L"Acc range:";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(7, 158);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(158, 25);
			this->label32->TabIndex = 14;
			this->label32->Text = L"Acc bandwidth:";
			// 
			// gyroBndwdthOdrBox
			// 
			this->gyroBndwdthOdrBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->gyroBndwdthOdrBox->FormattingEnabled = true;
			this->gyroBndwdthOdrBox->Location = System::Drawing::Point(609, 34);
			this->gyroBndwdthOdrBox->Name = L"gyroBndwdthOdrBox";
			this->gyroBndwdthOdrBox->Size = System::Drawing::Size(121, 33);
			this->gyroBndwdthOdrBox->TabIndex = 13;
			// 
			// accRangeBox
			// 
			this->accRangeBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->accRangeBox->FormattingEnabled = true;
			this->accRangeBox->Location = System::Drawing::Point(230, 189);
			this->accRangeBox->Name = L"accRangeBox";
			this->accRangeBox->Size = System::Drawing::Size(121, 33);
			this->accRangeBox->TabIndex = 12;
			// 
			// accBandwidthBox
			// 
			this->accBandwidthBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->accBandwidthBox->FormattingEnabled = true;
			this->accBandwidthBox->Location = System::Drawing::Point(230, 150);
			this->accBandwidthBox->Name = L"accBandwidthBox";
			this->accBandwidthBox->Size = System::Drawing::Size(121, 33);
			this->accBandwidthBox->TabIndex = 11;
			// 
			// recordToFlashBox
			// 
			this->recordToFlashBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->recordToFlashBox->FormattingEnabled = true;
			this->recordToFlashBox->Location = System::Drawing::Point(230, 111);
			this->recordToFlashBox->Name = L"recordToFlashBox";
			this->recordToFlashBox->Size = System::Drawing::Size(121, 33);
			this->recordToFlashBox->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 118);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(163, 25);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Record to flash:";
			// 
			// dataRateBox
			// 
			this->dataRateBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->dataRateBox->FormattingEnabled = true;
			this->dataRateBox->Location = System::Drawing::Point(230, 33);
			this->dataRateBox->Name = L"dataRateBox";
			this->dataRateBox->Size = System::Drawing::Size(121, 33);
			this->dataRateBox->TabIndex = 7;
			// 
			// applySettingsButton
			// 
			this->applySettingsButton->Location = System::Drawing::Point(624, 308);
			this->applySettingsButton->Name = L"applySettingsButton";
			this->applySettingsButton->Size = System::Drawing::Size(126, 47);
			this->applySettingsButton->TabIndex = 6;
			this->applySettingsButton->Text = L"Apply";
			this->applySettingsButton->UseVisualStyleBackColor = true;
			this->applySettingsButton->Click += gcnew System::EventHandler(this, &MainWindow::applySettingsButton_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 78);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(181, 25);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Time to wait (ms):";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 37);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(152, 25);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Data rate (Hz):";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->connectedCheckBox);
			this->groupBox2->Controls->Add(this->closePortButton);
			this->groupBox2->Controls->Add(this->openPortButton);
			this->groupBox2->Controls->Add(this->baudBox);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->portsBox);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Location = System::Drawing::Point(6, 6);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(275, 378);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Setup";
			// 
			// connectedCheckBox
			// 
			this->connectedCheckBox->AutoSize = true;
			this->connectedCheckBox->Location = System::Drawing::Point(75, 198);
			this->connectedCheckBox->Name = L"connectedCheckBox";
			this->connectedCheckBox->Size = System::Drawing::Size(148, 29);
			this->connectedCheckBox->TabIndex = 7;
			this->connectedCheckBox->Text = L"Connected";
			this->connectedCheckBox->UseVisualStyleBackColor = true;
			// 
			// closePortButton
			// 
			this->closePortButton->Enabled = false;
			this->closePortButton->Location = System::Drawing::Point(143, 129);
			this->closePortButton->Name = L"closePortButton";
			this->closePortButton->Size = System::Drawing::Size(126, 47);
			this->closePortButton->TabIndex = 5;
			this->closePortButton->Text = L"Close";
			this->closePortButton->UseVisualStyleBackColor = true;
			this->closePortButton->Click += gcnew System::EventHandler(this, &MainWindow::closePortButton_Click);
			// 
			// openPortButton
			// 
			this->openPortButton->Location = System::Drawing::Point(6, 129);
			this->openPortButton->Name = L"openPortButton";
			this->openPortButton->Size = System::Drawing::Size(126, 47);
			this->openPortButton->TabIndex = 4;
			this->openPortButton->Text = L"Open";
			this->openPortButton->UseVisualStyleBackColor = true;
			this->openPortButton->Click += gcnew System::EventHandler(this, &MainWindow::openPortButton_Click);
			// 
			// baudBox
			// 
			this->baudBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->baudBox->FormattingEnabled = true;
			this->baudBox->Location = System::Drawing::Point(132, 75);
			this->baudBox->Name = L"baudBox";
			this->baudBox->Size = System::Drawing::Size(121, 33);
			this->baudBox->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 78);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(119, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Baud Rate:";
			// 
			// portsBox
			// 
			this->portsBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->portsBox->FormattingEnabled = true;
			this->portsBox->Location = System::Drawing::Point(132, 35);
			this->portsBox->Name = L"portsBox";
			this->portsBox->Size = System::Drawing::Size(121, 33);
			this->portsBox->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 25);
			this->label2->TabIndex = 0;
			this->label2->Text = L"COM:";
			// 
			// configMenu
			// 
			this->configMenu->Controls->Add(this->Config);
			this->configMenu->Controls->Add(this->tabPage2);
			this->configMenu->Location = System::Drawing::Point(500, 223);
			this->configMenu->Name = L"configMenu";
			this->configMenu->SelectedIndex = 0;
			this->configMenu->Size = System::Drawing::Size(1333, 763);
			this->configMenu->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(497, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1022, 61);
			this->label1->TabIndex = 3;
			this->label1->Text = L"UMSATS Rocket SRAD Flight Comp GUI";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 35);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(227, 47);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Download flight data";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(65, 61);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(126, 47);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Fire";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(249, 35);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(95, 47);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Browse";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(350, 43);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(326, 31);
			this->textBox1->TabIndex = 7;
			this->textBox1->Text = L"--path--";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(16, 100);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(227, 47);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Erase flash";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(10, 140);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(79, 25);
			this->label42->TabIndex = 9;
			this->label42->Text = L"Status:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(95, 137);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(151, 31);
			this->textBox2->TabIndex = 10;
			this->textBox2->Text = L"Launchpad";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button5);
			this->groupBox4->Controls->Add(this->textBox3);
			this->groupBox4->Controls->Add(this->button6);
			this->groupBox4->Controls->Add(this->button7);
			this->groupBox4->Location = System::Drawing::Point(710, 390);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(601, 320);
			this->groupBox4->TabIndex = 6;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Emulation";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(16, 100);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(227, 47);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Emulate flight";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(350, 43);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(235, 31);
			this->textBox3->TabIndex = 7;
			this->textBox3->Text = L"--path--";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(249, 35);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(95, 47);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Browse";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(16, 35);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(227, 47);
			this->button7->TabIndex = 5;
			this->button7->Text = L"Select flight data";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(1874, 1029);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->overView);
			this->Controls->Add(this->configMenu);
			this->MaximumSize = System::Drawing::Size(1900, 1100);
			this->MinimumSize = System::Drawing::Size(1900, 1100);
			this->Name = L"MainWindow";
			this->Text = L"MainWindow";
			this->overView->ResumeLayout(false);
			this->overView->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->Config->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->configMenu->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		cli::array<System::Object^>^ baudRates = GetArrayCLI(gcnew System::String{ "9600" },
			gcnew System::String{ "115200" });

		template<typename T, typename ...Ts>
		auto GetArrayCLI(T first, Ts... args) {
			return gcnew cli::array<T, 1>{first, args...};
		}

		//Find available comm ports
		private: void FindPorts(void) {
			cli::array<Object^>^ ports = SerialPort::GetPortNames();
			this->portsBox->Items->AddRange(ports);
		}

		private: void PopulateFields(void) {
			cli::array<ComboBox^>^ boxes = {this->recordToFlashBox, this->accBandwidthBox, this->accRangeBox, 
			this->accOdrBox, this->gyroBndwdthOdrBox, this->gyroRangeBox, this->bmp388OdrBox, this->presOversamplingBox,
			this->tempOversamplingBox, this->bmp388IIRBox, this->inFlightBox};
			cli::array<cli::array<Object^>^>^ params = { {true, false}, {0,2,4}, {3,6,12,24}, {12,25,50,100,200,400,800,1600}, 
			{"32_100","64_200","12_100","23_200","47_400","116_1000","230_2000","532_2000"}, {125,250,500,1000,2000},
			{1,12,25,50,100,200}, {0,2,4,8,16,32}, {0,2,4,8,16,32}, {0,1,3,7,15,31,63,127}, {true, false} };

			//Setup
			this->baudBox->Items->AddRange(baudRates);

			//Settings
			for (int i = 0; i < 101; i++)
				this->dataRateBox->Items->Add(i);
			int count = 0;
			for each (ComboBox ^box in boxes)
			{
				box->Items->AddRange(params[count]);
				count++;
			}
		}

		private: System::Void applySettingsButton_Click(System::Object^ sender, System::EventArgs^ e) {

		}

		private: System::Void openPortButton_Click(System::Object^ sender, System::EventArgs^ e) {

			if (this->portsBox->Text == String::Empty || this->baudBox->Text == String::Empty) {
				openDialog(gcnew String(setupMessages[SETUP_FAILED].c_str()));
			}
			else{
				
				try {
					if (!this->serialPort1->IsOpen) {
						this->openPortButton->Enabled = false;

						this->serialPort1->PortName = this->portsBox->Text;
						this->serialPort1->BaudRate = Int32::Parse(this->baudBox->Text);
						this->serialPort1->Open();

						this->connectedCheckBox->Checked = true;
						this->closePortButton->Enabled = true;

						openDialog(gcnew String(setupMessages[SETUP_SUCCESS].c_str()));
					}
				}
				catch(UnauthorizedAccessException^){
				}
			}

		}

		private: System::Void closePortButton_Click(System::Object^ sender, System::EventArgs^ e) {
			try {
				if (this->serialPort1->IsOpen) {
					this->openPortButton->Enabled = true;

					this->serialPort1->Close();

					this->connectedCheckBox->Checked = false;
					this->closePortButton->Enabled = false;

					openDialog(gcnew String(setupMessages[SETUP_CLOSED].c_str()));
				}
			}
			catch (UnauthorizedAccessException^) {
			}
		}
};
}
#endif // !MAINWINDOW_h