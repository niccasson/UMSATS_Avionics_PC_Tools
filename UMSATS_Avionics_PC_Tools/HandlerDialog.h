#ifndef HANDLERDIALOG_h
#define HANDLERDIALOG_h

#pragma once

void openDialog(System::String^ message);

namespace UMSATSAvionicsPCTools {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HandlerDialog
	/// </summary>
	public ref class HandlerDialog : public System::Windows::Forms::Form
	{
	public:
		HandlerDialog(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		HandlerDialog(String^ msg) {
			InitializeComponent();
			SetMessage(msg);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HandlerDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ messageLabel;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->messageLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// messageLabel
			// 
			this->messageLabel->AutoSize = true;
			this->messageLabel->Location = System::Drawing::Point(62, 107);
			this->messageLabel->Name = L"messageLabel";
			this->messageLabel->Size = System::Drawing::Size(70, 25);
			this->messageLabel->TabIndex = 0;
			this->messageLabel->Text = L"label1";
			// 
			// HandlerDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(802, 244);
			this->Controls->Add(this->messageLabel);
			this->Name = L"HandlerDialog";
			this->Text = L"HandlerDialog";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void SetMessage(String^ message) {
			this->messageLabel->Text = message;
		}

	};
}

#endif