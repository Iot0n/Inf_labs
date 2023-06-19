#pragma once

namespace WindowsFormsApplication11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyDialog
	/// </summary>
	public ref class MyDialog : public System::Windows::Forms::Form
	{
	public:
		MyDialog(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BtnOK;
	private: System::Windows::Forms::TextBox^ tb_name;
	private: System::Windows::Forms::TextBox^ tb_author;


	private: System::Windows::Forms::Button^ BrnCancel;

	private: System::Windows::Forms::TextBox^ tb_length;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox1;




	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->BtnOK = (gcnew System::Windows::Forms::Button());
			this->tb_name = (gcnew System::Windows::Forms::TextBox());
			this->tb_author = (gcnew System::Windows::Forms::TextBox());
			this->BrnCancel = (gcnew System::Windows::Forms::Button());
			this->tb_length = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// BtnOK
			// 
			this->BtnOK->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->BtnOK->Location = System::Drawing::Point(358, 565);
			this->BtnOK->Name = L"BtnOK";
			this->BtnOK->Size = System::Drawing::Size(92, 31);
			this->BtnOK->TabIndex = 0;
			this->BtnOK->Text = L"Принять";
			this->BtnOK->UseVisualStyleBackColor = true;
			this->BtnOK->Click += gcnew System::EventHandler(this, &MyDialog::BtnOK_Click);
			// 
			// tb_name
			// 
			this->tb_name->Location = System::Drawing::Point(137, 299);
			this->tb_name->Name = L"tb_name";
			this->tb_name->Size = System::Drawing::Size(241, 26);
			this->tb_name->TabIndex = 1;
			// 
			// tb_author
			// 
			this->tb_author->Location = System::Drawing::Point(384, 299);
			this->tb_author->Name = L"tb_author";
			this->tb_author->Size = System::Drawing::Size(232, 26);
			this->tb_author->TabIndex = 2;
			// 
			// BrnCancel
			// 
			this->BrnCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->BrnCancel->Location = System::Drawing::Point(797, 565);
			this->BrnCancel->Name = L"BrnCancel";
			this->BrnCancel->Size = System::Drawing::Size(92, 31);
			this->BrnCancel->TabIndex = 3;
			this->BrnCancel->Text = L"Отмена";
			this->BrnCancel->UseVisualStyleBackColor = true;
			this->BrnCancel->Click += gcnew System::EventHandler(this, &MyDialog::BrnCancel_Click);
			// 
			// tb_length
			// 
			this->tb_length->Location = System::Drawing::Point(768, 299);
			this->tb_length->Name = L"tb_length";
			this->tb_length->Size = System::Drawing::Size(102, 26);
			this->tb_length->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(192, 273);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"название";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(431, 273);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"автор";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(631, 273);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"жанр";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(777, 273);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(121, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Длительность";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"Bluz", L"Dzaz", L"Rok", L"Pank_rok", L"Popsa" });
			this->comboBox1->Location = System::Drawing::Point(622, 299);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(140, 28);
			this->comboBox1->TabIndex = 6;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyDialog::comboBox1_SelectedIndexChanged);
			// 
			// MyDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1391, 670);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->BrnCancel);
			this->Controls->Add(this->tb_length);
			this->Controls->Add(this->tb_author);
			this->Controls->Add(this->tb_name);
			this->Controls->Add(this->BtnOK);
			this->Name = L"MyDialog";
			this->Text = L"MyDialog";
			this->Load += gcnew System::EventHandler(this, &MyDialog::MyDialog_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: String^ getname()
	{
		return tb_name->Text;
	}
	public: String^ getauthor()
	{
		return tb_author->Text;
	}
	public: String^ getgenre()
	{
		return comboBox1->Text;
	}
	public: String^ getlength()
	{
		return tb_length->Text;
	}
	public: void setname(String^ name)
	{
		tb_name->Text = name;
	}
	public: void setauthor(String^ age)
	{
		tb_author->Text = age;
	}
	public: void setgenre(String^ name)
	{
		comboBox1->Text = name;
	}
	public: void setlength(String^ age)
	{
		tb_length->Text = age;
	}
	private: System::Void BtnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MyDialog_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void BrnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
