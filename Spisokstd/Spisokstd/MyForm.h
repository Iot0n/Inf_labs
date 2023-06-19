#pragma once
#include "Header.h"

namespace LABA3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			lst = createlist<student>();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::ListBox^ lbx_students;


	private: System::Windows::Forms::ListBox^ lbx_marks;
	private: System::Windows::Forms::Button^ btn_append;
	private: System::Windows::Forms::TextBox^ tb_name;
	private: System::Windows::Forms::TextBox^ tb_ots3;

	private: System::Windows::Forms::TextBox^ tb_ots2;


	private: System::Windows::Forms::TextBox^ tb_ots1;

	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btn_addat;



	private: System::Windows::Forms::Button^ btn_search;
	private: System::Windows::Forms::Button^ btn_sort;
	private: System::Windows::Forms::Button^ btn_removeall;
	private: System::Windows::Forms::Button^ btn_change;
	private: System::Windows::Forms::Button^ RemovePV;
	private: System::Windows::Forms::Button^ AnsWer;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tb_num;
	private: System::Windows::Forms::Label^ label5;



	protected:

	protected:

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbx_students = (gcnew System::Windows::Forms::ListBox());
			this->lbx_marks = (gcnew System::Windows::Forms::ListBox());
			this->btn_append = (gcnew System::Windows::Forms::Button());
			this->tb_name = (gcnew System::Windows::Forms::TextBox());
			this->tb_ots3 = (gcnew System::Windows::Forms::TextBox());
			this->tb_ots2 = (gcnew System::Windows::Forms::TextBox());
			this->tb_ots1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btn_addat = (gcnew System::Windows::Forms::Button());
			this->btn_search = (gcnew System::Windows::Forms::Button());
			this->btn_sort = (gcnew System::Windows::Forms::Button());
			this->btn_removeall = (gcnew System::Windows::Forms::Button());
			this->btn_change = (gcnew System::Windows::Forms::Button());
			this->RemovePV = (gcnew System::Windows::Forms::Button());
			this->AnsWer = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tb_num = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbx_students
			// 
			this->lbx_students->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbx_students->FormattingEnabled = true;
			this->lbx_students->ItemHeight = 29;
			this->lbx_students->Location = System::Drawing::Point(12, 37);
			this->lbx_students->Name = L"lbx_students";
			this->lbx_students->SelectionMode = System::Windows::Forms::SelectionMode::MultiExtended;
			this->lbx_students->Size = System::Drawing::Size(312, 439);
			this->lbx_students->TabIndex = 3;
			// 
			// lbx_marks
			// 
			this->lbx_marks->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbx_marks->FormattingEnabled = true;
			this->lbx_marks->ItemHeight = 29;
			this->lbx_marks->Location = System::Drawing::Point(334, 37);
			this->lbx_marks->Name = L"lbx_marks";
			this->lbx_marks->SelectionMode = System::Windows::Forms::SelectionMode::MultiExtended;
			this->lbx_marks->Size = System::Drawing::Size(365, 439);
			this->lbx_marks->TabIndex = 5;
			this->lbx_marks->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::lbx_marks_SelectedIndexChanged);
			// 
			// btn_append
			// 
			this->btn_append->BackColor = System::Drawing::Color::Transparent;
			this->btn_append->Location = System::Drawing::Point(707, 37);
			this->btn_append->Name = L"btn_append";
			this->btn_append->Size = System::Drawing::Size(256, 48);
			this->btn_append->TabIndex = 6;
			this->btn_append->Text = L"Добавить в конец";
			this->btn_append->UseVisualStyleBackColor = false;
			this->btn_append->Click += gcnew System::EventHandler(this, &MyForm::btn_append_Click);
			// 
			// tb_name
			// 
			this->tb_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tb_name->Location = System::Drawing::Point(707, 557);
			this->tb_name->Name = L"tb_name";
			this->tb_name->Size = System::Drawing::Size(208, 35);
			this->tb_name->TabIndex = 7;
			// 
			// tb_ots3
			// 
			this->tb_ots3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tb_ots3->Location = System::Drawing::Point(824, 620);
			this->tb_ots3->Name = L"tb_ots3";
			this->tb_ots3->Size = System::Drawing::Size(41, 35);
			this->tb_ots3->TabIndex = 8;
			this->tb_ots3->Text = L"0";
			// 
			// tb_ots2
			// 
			this->tb_ots2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tb_ots2->Location = System::Drawing::Point(766, 620);
			this->tb_ots2->Name = L"tb_ots2";
			this->tb_ots2->Size = System::Drawing::Size(41, 35);
			this->tb_ots2->TabIndex = 9;
			this->tb_ots2->Text = L"0";
			// 
			// tb_ots1
			// 
			this->tb_ots1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tb_ots1->Location = System::Drawing::Point(707, 620);
			this->tb_ots1->Name = L"tb_ots1";
			this->tb_ots1->Size = System::Drawing::Size(41, 35);
			this->tb_ots1->TabIndex = 10;
			this->tb_ots1->Text = L"0";
			this->tb_ots1->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_ots1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(598, 620);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 29);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Оценки";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(631, 560);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 29);
			this->label4->TabIndex = 14;
			this->label4->Text = L"ФИО";
			// 
			// btn_addat
			// 
			this->btn_addat->BackColor = System::Drawing::Color::Transparent;
			this->btn_addat->Location = System::Drawing::Point(707, 91);
			this->btn_addat->Name = L"btn_addat";
			this->btn_addat->Size = System::Drawing::Size(256, 50);
			this->btn_addat->TabIndex = 15;
			this->btn_addat->Text = L"Вставить перед выделенным";
			this->btn_addat->UseVisualStyleBackColor = false;
			this->btn_addat->Click += gcnew System::EventHandler(this, &MyForm::btn_addat_Click);
			// 
			// btn_search
			// 
			this->btn_search->BackColor = System::Drawing::Color::Transparent;
			this->btn_search->Location = System::Drawing::Point(707, 205);
			this->btn_search->Name = L"btn_search";
			this->btn_search->Size = System::Drawing::Size(256, 48);
			this->btn_search->TabIndex = 19;
			this->btn_search->Text = L"Найти по ФИО";
			this->btn_search->UseVisualStyleBackColor = false;
			this->btn_search->Click += gcnew System::EventHandler(this, &MyForm::btn_search_Click);
			// 
			// btn_sort
			// 
			this->btn_sort->BackColor = System::Drawing::Color::Transparent;
			this->btn_sort->Location = System::Drawing::Point(706, 259);
			this->btn_sort->Name = L"btn_sort";
			this->btn_sort->Size = System::Drawing::Size(256, 48);
			this->btn_sort->TabIndex = 20;
			this->btn_sort->Text = L"Сортировка";
			this->btn_sort->UseVisualStyleBackColor = false;
			this->btn_sort->Click += gcnew System::EventHandler(this, &MyForm::btn_sort_Click);
			// 
			// btn_removeall
			// 
			this->btn_removeall->BackColor = System::Drawing::Color::Transparent;
			this->btn_removeall->Location = System::Drawing::Point(706, 313);
			this->btn_removeall->Name = L"btn_removeall";
			this->btn_removeall->Size = System::Drawing::Size(256, 48);
			this->btn_removeall->TabIndex = 21;
			this->btn_removeall->Text = L"Очистка";
			this->btn_removeall->UseVisualStyleBackColor = false;
			this->btn_removeall->Click += gcnew System::EventHandler(this, &MyForm::btn_removeall_Click);
			// 
			// btn_change
			// 
			this->btn_change->BackColor = System::Drawing::Color::Transparent;
			this->btn_change->Location = System::Drawing::Point(706, 367);
			this->btn_change->Name = L"btn_change";
			this->btn_change->Size = System::Drawing::Size(256, 52);
			this->btn_change->TabIndex = 22;
			this->btn_change->Text = L"Редактировать";
			this->btn_change->UseVisualStyleBackColor = false;
			this->btn_change->Click += gcnew System::EventHandler(this, &MyForm::btn_change_Click);
			// 
			// RemovePV
			// 
			this->RemovePV->BackColor = System::Drawing::Color::Transparent;
			this->RemovePV->Location = System::Drawing::Point(707, 149);
			this->RemovePV->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->RemovePV->Name = L"RemovePV";
			this->RemovePV->Size = System::Drawing::Size(255, 48);
			this->RemovePV->TabIndex = 23;
			this->RemovePV->Text = L"Удалить выбранное";
			this->RemovePV->UseVisualStyleBackColor = false;
			this->RemovePV->Click += gcnew System::EventHandler(this, &MyForm::RemovePV_Click);
			// 
			// AnsWer
			// 
			this->AnsWer->BackColor = System::Drawing::Color::Transparent;
			this->AnsWer->Location = System::Drawing::Point(706, 427);
			this->AnsWer->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->AnsWer->Name = L"AnsWer";
			this->AnsWer->Size = System::Drawing::Size(255, 49);
			this->AnsWer->TabIndex = 24;
			this->AnsWer->Text = L"Потвердить";
			this->AnsWer->UseVisualStyleBackColor = false;
			this->AnsWer->Click += gcnew System::EventHandler(this, &MyForm::AnsWer_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(130, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 20);
			this->label2->TabIndex = 25;
			this->label2->Text = L"ФИО";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(453, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 20);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Оценки";
			// 
			// tb_num
			// 
			this->tb_num->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tb_num->Location = System::Drawing::Point(707, 499);
			this->tb_num->Name = L"tb_num";
			this->tb_num->Size = System::Drawing::Size(41, 35);
			this->tb_num->TabIndex = 16;
			this->tb_num->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_num_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(611, 502);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 29);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Номер";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(1006, 674);
			this->Controls->Add(this->tb_num);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->AnsWer);
			this->Controls->Add(this->RemovePV);
			this->Controls->Add(this->btn_change);
			this->Controls->Add(this->btn_removeall);
			this->Controls->Add(this->btn_sort);
			this->Controls->Add(this->btn_search);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btn_addat);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tb_ots1);
			this->Controls->Add(this->tb_ots2);
			this->Controls->Add(this->tb_ots3);
			this->Controls->Add(this->tb_name);
			this->Controls->Add(this->btn_append);
			this->Controls->Add(this->lbx_marks);
			this->Controls->Add(this->lbx_students);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		List <student> lst;

	private:
		student enter() {
			student p;
			p.name = (char*)(void*)Marshal::StringToHGlobalAnsi(tb_name->Text);
				p.m.ots1 = Convert::ToSingle(tb_ots1->Text);
				p.m.ots2 = Convert::ToSingle(tb_ots2->Text);
				p.m.ots3 = Convert::ToSingle(tb_ots3->Text);
			return p;
		}
		void refresh() {
			lbx_students->Items->Clear();
			lbx_marks->Items->Clear();
			if (lst.head != nullptr) {
				ListNode <student>* p = lst.head;
				for (int i = 0; p != nullptr; p = p->next, i++) {
					lbx_students->Items->Add(Convert::ToString(i) + ". " + Marshal::PtrToStringAnsi((IntPtr)p->value.name));
					lbx_marks->Items->Add("Ots1: " + Convert::ToString(p->value.m.ots1) + "  " + "Ots2: " + Convert::ToString(p->value.m.ots2) + "  " + "Ots3: " + Convert::ToString(p->value.m.ots3));
				}
			}
		}
	private: System::Void btn_append_Click(System::Object^ sender, System::EventArgs^ e) {
		if (tb_name->Text != "" &&
			tb_ots1->Text != "" &&
			tb_ots2->Text != "" &&
			tb_ots3->Text != "") {
			append<student>(lst, enter());
			refresh();
		}
		else
			throw "Undefined format";
	}
		   static int num_of_pos {};
	private: System::Void btn_addat_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lbx_students->SelectedItems->Count) {
			num_of_pos = lbx_students->SelectedIndices[0];
			//if (n != 0)
			//	tb_num->Text = Convert::ToString(lbx_students->SelectedIndices[0]);
			addat<student>(lst, enter(), num_of_pos);
			refresh();
		}
	}
	private: System::Void btn_search_Click(System::Object^ sender, System::EventArgs^ e) {
		ListNode <student>* p = lst.head;
		int num = 0;
		char* nameone = (char*)(void*)Marshal::StringToHGlobalAnsi(tb_name->Text);
		String^ s = "Найденный(е) студент(ы):" + "\n";
		bool ok = true;
		while (p != nullptr) {
			if (strcmp(nameone, p->value.name) == 0) {
				s += num + ". " + Marshal::PtrToStringAnsi((IntPtr)p->value.name) + " [ Ots1 " + Convert::ToString(p->value.m.ots1) + ", Ots2 " + Convert::ToString(p->value.m.ots2) + ", Ots3 " + Convert::ToString(p->value.m.ots3) + " ]" + "\n";
				ok = false;
			}
			p = p->next;
			num++;
		}
		if (ok)
			s = "Студент с таким ФИО не найден";
		MessageBox::Show(s);
	}
	private: System::Void btn_sort_Click(System::Object^ sender, System::EventArgs^ e) {
		bubblesort(lst);
		refresh();
	}
	private: System::Void btn_removeall_Click(System::Object^ sender, System::EventArgs^ e) {
		ListNode <student>* p = lst.head;
		for (int i = 0; p != nullptr; i++, p = p->next) {
			Marshal::FreeHGlobal((IntPtr)p->value.name);
		}
		deletelist(lst);
		refresh();
	}

		   static int index_of_red{};

	private: System::Void btn_change_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = lbx_students->SelectedItems->Count;
		if (n != 0) {
			//static int index_of_red{};
			tb_num->Text = Convert::ToString(lbx_students->SelectedItem)->Substring(0, 1);
			index_of_red = Convert::ToInt32(tb_num->Text);
			tb_name->Text = Convert::ToString(lbx_students->SelectedItem)->Substring(3, (lbx_students->SelectedItem->ToString())->Length - 3);
			ListNode <student>* p = lst.head;
			for (int i = 0; i < index_of_red; i++) {
				p = p->next;
			}
			tb_ots1->Text = Convert::ToString(p->value.m.ots1);
			tb_ots2->Text = Convert::ToString(p->value.m.ots2);
			tb_ots3->Text = Convert::ToString(p->value.m.ots3);
		}

		refresh();
	}
	private: System::Void RemovePV_Click(System::Object^ sender, System::EventArgs^ e) {
		ListNode <student>* p = lst.head;
		int n = lbx_students->SelectedItems->Count;
		for (int j = n - 1; j >= 0; j--) {
			int n1 = Convert::ToInt32(lbx_students->SelectedIndices[j]);
			for (int i = 0; i < n1; i++) {
				if (p->next != nullptr)
					p = p->next;
			}
			Marshal::FreeHGlobal((IntPtr)p->value.name);
			p = lst.head;
		}
		for (int j = n - 1; j >= 0; j--) {
			removeat(lst, Convert::ToInt32(lbx_students->SelectedIndices[j]));
		}
		refresh();
	}
	private: System::Void AnsWer_Click(System::Object^ sender, System::EventArgs^ e) {
		int num = lbx_students->SelectedIndex;
		num = index_of_red;
		ListNode <student>* p = lst.head;
		if (num >= 0 && num < lst.len) {
			for (int i = 0; i < num; i++) {
				p = p->next;
			}
			p->value.name = (char*)(void*)Marshal::StringToHGlobalAnsi(tb_name->Text);
			p->value.m.ots1 = Convert::ToSingle(tb_ots1->Text);
			p->value.m.ots2 = Convert::ToSingle(tb_ots2->Text);
			p->value.m.ots3 = Convert::ToSingle(tb_ots3->Text);
		}
		refresh();
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tb_num_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lbx_marks_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tb_ots1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}