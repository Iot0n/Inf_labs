#pragma once

#include "MyDialog2.h"

#include <fstream>
#include <chrono>

typedef uint64_t Uint64;
typedef int64_t Sint64;
typedef uint32_t Uint32;
typedef int32_t Sint32;
typedef uint16_t Uint16;
typedef int16_t Sint16;
typedef uint8_t Uint8;
typedef int8_t Sint8;

namespace WindowsFormsApplication11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Runtime::InteropServices;

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:

		Form1(void)
		{
			InitializeComponent();
			InputDialog = gcnew MyDialog();
		}

	protected:

		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ms_main;
	private: System::Windows::Forms::ToolStripMenuItem^ открытьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьКакToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ ofd_open;
	private: System::Windows::Forms::SaveFileDialog^ sfd_save;
	private: System::Windows::Forms::DataGridView^ dgv;






	private: System::Windows::Forms::Button^ btn_add;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::TextBox^ tb_name;
	private: System::Windows::Forms::TextBox^ tb_author;
	private: System::Windows::Forms::TextBox^ tb_genre;
	private: System::Windows::Forms::TextBox^ tb_length;
	private: System::Windows::Forms::TextBox^ tb_number;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btn_add_end;
	private: System::Windows::Forms::Button^ btn_add_by_number;
	private: System::Windows::Forms::Button^ btn_delete_selected;
	private: System::Windows::Forms::Button^ btn_sort_by_name;
	private: System::Windows::Forms::Button^ btn_sort_by_length;
	private: System::Windows::Forms::Button^ btn_search_by_author;
	private: System::Windows::Forms::Button^ btn_search_by_genre;
	private: System::Windows::Forms::Button^ btn_search_by_length;
	private: System::Windows::Forms::TextBox^ tb_search;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;

	private: System::Windows::Forms::Button^ btn_edit;
	private: System::Windows::Forms::Button^  btn_search_by_dlitelnost;
	private: System::Windows::Forms::Button^ button1;












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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ms_main = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьКакToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ofd_open = (gcnew System::Windows::Forms::OpenFileDialog());
			this->sfd_save = (gcnew System::Windows::Forms::SaveFileDialog());
			this->dgv = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->tb_name = (gcnew System::Windows::Forms::TextBox());
			this->tb_author = (gcnew System::Windows::Forms::TextBox());
			this->tb_genre = (gcnew System::Windows::Forms::TextBox());
			this->tb_length = (gcnew System::Windows::Forms::TextBox());
			this->tb_number = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btn_add_end = (gcnew System::Windows::Forms::Button());
			this->btn_add_by_number = (gcnew System::Windows::Forms::Button());
			this->btn_delete_selected = (gcnew System::Windows::Forms::Button());
			this->btn_sort_by_name = (gcnew System::Windows::Forms::Button());
			this->btn_sort_by_length = (gcnew System::Windows::Forms::Button());
			this->btn_search_by_author = (gcnew System::Windows::Forms::Button());
			this->btn_search_by_genre = (gcnew System::Windows::Forms::Button());
			this->btn_search_by_length = (gcnew System::Windows::Forms::Button());
			this->tb_search = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btn_edit = (gcnew System::Windows::Forms::Button());
			this->btn_search_by_dlitelnost = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ms_main });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(6, 3, 0, 3);
			this->menuStrip1->Size = System::Drawing::Size(1240, 36);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::menuStrip1_ItemClicked);
			// 
			// ms_main
			// 
			this->ms_main->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->открытьToolStripMenuItem,
					this->сохранитьToolStripMenuItem, this->сохранитьКакToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->ms_main->Name = L"ms_main";
			this->ms_main->Size = System::Drawing::Size(69, 30);
			this->ms_main->Text = L"Файл";
			this->ms_main->Click += gcnew System::EventHandler(this, &Form1::ms_main_Click);
			// 
			// открытьToolStripMenuItem
			// 
			this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			this->открытьToolStripMenuItem->Size = System::Drawing::Size(244, 34);
			this->открытьToolStripMenuItem->Text = L"Открыть";
			this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::открытьToolStripMenuItem_Click);
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(244, 34);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			this->сохранитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::сохранитьToolStripMenuItem_Click);
			// 
			// сохранитьКакToolStripMenuItem
			// 
			this->сохранитьКакToolStripMenuItem->Name = L"сохранитьКакToolStripMenuItem";
			this->сохранитьКакToolStripMenuItem->Size = System::Drawing::Size(244, 34);
			this->сохранитьКакToolStripMenuItem->Text = L"Сохранить как...";
			this->сохранитьКакToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::сохранитьКакToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(244, 34);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::выходToolStripMenuItem_Click);
			// 
			// ofd_open
			// 
			this->ofd_open->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::ofd_open_FileOk);
			// 
			// sfd_save
			// 
			this->sfd_save->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::sfd_save_FileOk);
			// 
			// dgv
			// 
			this->dgv->AllowUserToAddRows = false;
			this->dgv->AllowUserToDeleteRows = false;
			this->dgv->AllowUserToResizeColumns = false;
			this->dgv->AllowUserToResizeRows = false;
			this->dgv->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1, this->Column2,
					this->Column3, this->Column4, this->Column5
			});
			this->dgv->Location = System::Drawing::Point(13, 51);
			this->dgv->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dgv->Name = L"dgv";
			this->dgv->RowHeadersVisible = false;
			this->dgv->RowHeadersWidth = 62;
			this->dgv->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgv->Size = System::Drawing::Size(1208, 617);
			this->dgv->TabIndex = 1;
			this->dgv->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dgv_CellContentClick);
			this->dgv->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dgv_CellEndEdit);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"№";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 50;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Название композиции";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 300;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Исполнитель";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 150;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Жанр";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 150;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Длительность (сек.)";
			this->Column5->MinimumWidth = 8;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 150;
			// 
			// btn_add
			// 
			this->btn_add->Location = System::Drawing::Point(16, 678);
			this->btn_add->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(112, 35);
			this->btn_add->TabIndex = 2;
			this->btn_add->Text = L"+";
			this->btn_add->UseVisualStyleBackColor = true;
			this->btn_add->Click += gcnew System::EventHandler(this, &Form1::btn_add_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(138, 678);
			this->btn_delete->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(112, 35);
			this->btn_delete->TabIndex = 3;
			this->btn_delete->Text = L"-";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &Form1::btn_delete_Click);
			// 
			// tb_name
			// 
			this->tb_name->Location = System::Drawing::Point(560, 1082);
			this->tb_name->Name = L"tb_name";
			this->tb_name->Size = System::Drawing::Size(236, 26);
			this->tb_name->TabIndex = 4;
			// 
			// tb_author
			// 
			this->tb_author->Location = System::Drawing::Point(802, 1082);
			this->tb_author->Name = L"tb_author";
			this->tb_author->Size = System::Drawing::Size(146, 26);
			this->tb_author->TabIndex = 5;
			// 
			// tb_genre
			// 
			this->tb_genre->Location = System::Drawing::Point(956, 1082);
			this->tb_genre->Name = L"tb_genre";
			this->tb_genre->Size = System::Drawing::Size(146, 26);
			this->tb_genre->TabIndex = 6;
			// 
			// tb_length
			// 
			this->tb_length->Location = System::Drawing::Point(1108, 1082);
			this->tb_length->Name = L"tb_length";
			this->tb_length->Size = System::Drawing::Size(94, 26);
			this->tb_length->TabIndex = 7;
			// 
			// tb_number
			// 
			this->tb_number->Location = System::Drawing::Point(28, 978);
			this->tb_number->Name = L"tb_number";
			this->tb_number->Size = System::Drawing::Size(73, 26);
			this->tb_number->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 942);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 20);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Номер";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1124, 1055);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 20);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Длит.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(980, 1055);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Жанр";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(834, 1058);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 20);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Исполнитель";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(632, 1058);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Название";
			// 
			// btn_add_end
			// 
			this->btn_add_end->Location = System::Drawing::Point(627, 753);
			this->btn_add_end->Name = L"btn_add_end";
			this->btn_add_end->Size = System::Drawing::Size(598, 69);
			this->btn_add_end->TabIndex = 10;
			this->btn_add_end->Text = L"Добавить в конец";
			this->btn_add_end->UseVisualStyleBackColor = true;
			this->btn_add_end->Click += gcnew System::EventHandler(this, &Form1::btn_add_end_Click);
			// 
			// btn_add_by_number
			// 
			this->btn_add_by_number->Location = System::Drawing::Point(123, 957);
			this->btn_add_by_number->Name = L"btn_add_by_number";
			this->btn_add_by_number->Size = System::Drawing::Size(460, 54);
			this->btn_add_by_number->TabIndex = 11;
			this->btn_add_by_number->Text = L"Вставить перед выделенным\r\n";
			this->btn_add_by_number->UseVisualStyleBackColor = true;
			this->btn_add_by_number->Click += gcnew System::EventHandler(this, &Form1::btn_add_by_number_Click);
			// 
			// btn_delete_selected
			// 
			this->btn_delete_selected->Location = System::Drawing::Point(627, 822);
			this->btn_delete_selected->Name = L"btn_delete_selected";
			this->btn_delete_selected->Size = System::Drawing::Size(598, 69);
			this->btn_delete_selected->TabIndex = 11;
			this->btn_delete_selected->Text = L"Удалить";
			this->btn_delete_selected->UseVisualStyleBackColor = true;
			this->btn_delete_selected->Click += gcnew System::EventHandler(this, &Form1::btn_delete_selected_Click);
			// 
			// btn_sort_by_name
			// 
			this->btn_sort_by_name->Location = System::Drawing::Point(627, 893);
			this->btn_sort_by_name->Name = L"btn_sort_by_name";
			this->btn_sort_by_name->Size = System::Drawing::Size(598, 65);
			this->btn_sort_by_name->TabIndex = 11;
			this->btn_sort_by_name->Text = L"Сортировать по названию";
			this->btn_sort_by_name->UseVisualStyleBackColor = true;
			this->btn_sort_by_name->Click += gcnew System::EventHandler(this, &Form1::btn_sort_by_name_Click);
			// 
			// btn_sort_by_length
			// 
			this->btn_sort_by_length->Location = System::Drawing::Point(627, 958);
			this->btn_sort_by_length->Name = L"btn_sort_by_length";
			this->btn_sort_by_length->Size = System::Drawing::Size(598, 63);
			this->btn_sort_by_length->TabIndex = 11;
			this->btn_sort_by_length->Text = L"Сортировка по длительности";
			this->btn_sort_by_length->UseVisualStyleBackColor = true;
			this->btn_sort_by_length->Click += gcnew System::EventHandler(this, &Form1::btn_sort_by_length_Click);
			// 
			// btn_search_by_author
			// 
			this->btn_search_by_author->Location = System::Drawing::Point(200, 762);
			this->btn_search_by_author->Name = L"btn_search_by_author";
			this->btn_search_by_author->Size = System::Drawing::Size(194, 52);
			this->btn_search_by_author->TabIndex = 11;
			this->btn_search_by_author->Text = L"Поиск по исполнителю";
			this->btn_search_by_author->UseVisualStyleBackColor = true;
			this->btn_search_by_author->Click += gcnew System::EventHandler(this, &Form1::btn_search_by_author_Click);
			// 
			// btn_search_by_genre
			// 
			this->btn_search_by_genre->Location = System::Drawing::Point(399, 762);
			this->btn_search_by_genre->Name = L"btn_search_by_genre";
			this->btn_search_by_genre->Size = System::Drawing::Size(220, 52);
			this->btn_search_by_genre->TabIndex = 11;
			this->btn_search_by_genre->Text = L"Поиск по жанру";
			this->btn_search_by_genre->UseVisualStyleBackColor = true;
			this->btn_search_by_genre->Click += gcnew System::EventHandler(this, &Form1::btn_search_by_genre_Click);
			// 
			// btn_search_by_length
			// 
			this->btn_search_by_length->Location = System::Drawing::Point(1128, 1326);
			this->btn_search_by_length->Name = L"btn_search_by_length";
			this->btn_search_by_length->Size = System::Drawing::Size(321, 28);
			this->btn_search_by_length->TabIndex = 11;
			this->btn_search_by_length->Text = L"По длительности";
			this->btn_search_by_length->UseVisualStyleBackColor = true;
			this->btn_search_by_length->Click += gcnew System::EventHandler(this, &Form1::btn_search_by_length_Click);
			// 
			// tb_search
			// 
			this->tb_search->Location = System::Drawing::Point(24, 774);
			this->tb_search->Name = L"tb_search";
			this->tb_search->Size = System::Drawing::Size(164, 26);
			this->tb_search->TabIndex = 8;
			this->tb_search->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(24, 749);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 20);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Поиск";
			// 
			// btn_edit
			// 
			this->btn_edit->Location = System::Drawing::Point(627, 679);
			this->btn_edit->Name = L"btn_edit";
			this->btn_edit->Size = System::Drawing::Size(598, 68);
			this->btn_edit->TabIndex = 13;
			this->btn_edit->Text = L"Редактировать";
			this->btn_edit->UseVisualStyleBackColor = true;
			this->btn_edit->Click += gcnew System::EventHandler(this, &Form1::btn_edit_Click);
			// 
			// btn_search_by_dlitelnost
			// 
			this->btn_search_by_dlitelnost->Location = System::Drawing::Point(24, 822);
			this->btn_search_by_dlitelnost->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_search_by_dlitelnost->Name = L"btn_search_by_dlitelnost";
			this->btn_search_by_dlitelnost->Size = System::Drawing::Size(300, 60);
			this->btn_search_by_dlitelnost->TabIndex = 14;
			this->btn_search_by_dlitelnost->Text = L"Поиск по длительности (не меньше)";
			this->btn_search_by_dlitelnost->UseVisualStyleBackColor = true;
			this->btn_search_by_dlitelnost->Click += gcnew System::EventHandler(this, &Form1::btn_search_by_dlitelnost_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(333, 822);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(286, 57);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Поиск по длительности (не больше)";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AccessibleName = L"";
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1240, 1028);
			this->Controls->Add(this->btn_add_end);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn_search_by_dlitelnost);
			this->Controls->Add(this->btn_edit);
			this->Controls->Add(this->btn_search_by_length);
			this->Controls->Add(this->btn_search_by_genre);
			this->Controls->Add(this->btn_search_by_author);
			this->Controls->Add(this->btn_sort_by_length);
			this->Controls->Add(this->btn_sort_by_name);
			this->Controls->Add(this->btn_delete_selected);
			this->Controls->Add(this->btn_add_by_number);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tb_search);
			this->Controls->Add(this->tb_number);
			this->Controls->Add(this->tb_length);
			this->Controls->Add(this->tb_genre);
			this->Controls->Add(this->tb_author);
			this->Controls->Add(this->tb_name);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->dgv);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		MyDialog^ InputDialog;

		String^ filename;

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e)
	{
		dgv->RowCount = 0;

		//for (int i = 0; i < 5; ++i)
		//{
		//	dgv[0, i]->Value = Convert::ToString(i + 1);
		//}
	}

	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Application::Exit();
	}

	private: System::Void открытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (ofd_open->ShowDialog() == Windows::Forms::DialogResult::OK)
		{
			char* fname = (char*)(void*)Marshal::StringToHGlobalAnsi(ofd_open->FileName);

			filename = ofd_open->FileName;

			std::ifstream in(fname, std::ios::binary);

			if (!in)
			{
				MessageBox::Show("Не удалось открыть файл " + ofd_open->FileName);
			}

			else
			{
				int temp;
				in.read((char*)&temp, sizeof(temp));

				dgv->RowCount = temp;

				char buffer[10000];

				for (int i = 0; i < temp; ++i)
				{
					for (int j = 1; j < 4; ++j)
					{
						int k = 0;

						do
						{
							k++;
							in.read(&buffer[k], 1);
						} while (buffer[k] != '\0');

						for (int i = 0; i <= strlen(buffer); ++i)
						{
							buffer[i] = buffer[i + 1];
						}

						dgv[j, i]->Value = Marshal::PtrToStringAnsi((IntPtr)buffer);
					}

					int temp;
					in.read((char*)&temp, sizeof(temp));

					if (temp != 0)
					{
						dgv[4, i]->Value = Convert::ToString(temp);
					}
				}

				in.close();
			}

			Marshal::FreeHGlobal((IntPtr)fname);
		}

		for (int i = 0; i < dgv->RowCount; ++i)
		{
			dgv[0, i]->Value = Convert::ToString(i + 1);
		}
	}

	private: System::Void сохранитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (filename != nullptr)
		{
			char* fname = (char*)(void*)Marshal::StringToHGlobalAnsi(filename);

			std::ofstream out(fname, std::ios::binary);

			if (!out)
			{
				MessageBox::Show("Не удалось сохранить файл " + ofd_open->FileName);
			}

			else
			{
				int temp = dgv->RowCount;
				out.write((char*)&temp, sizeof(temp));

				for (int i = 0; i < dgv->RowCount; ++i)
				{
					char* name = (char*)(void*)Marshal::StringToHGlobalAnsi(Convert::ToString(dgv[1, i]->Value));
					out.write((char*)name, strlen(name) + 1);

					char* author = (char*)(void*)Marshal::StringToHGlobalAnsi(Convert::ToString(dgv[2, i]->Value));
					out.write((char*)author, strlen(author) + 1);

					char* genre = (char*)(void*)Marshal::StringToHGlobalAnsi(Convert::ToString(dgv[3, i]->Value));
					out.write((char*)genre, strlen(genre) + 1);

					int length = Convert::ToInt32(dgv[4, i]->Value);
					out.write((char*)&length, sizeof(length));

					Marshal::FreeHGlobal((IntPtr)name);
					Marshal::FreeHGlobal((IntPtr)author);
					Marshal::FreeHGlobal((IntPtr)genre);
				}

				out.close();
			}

			Marshal::FreeHGlobal((IntPtr)fname);
		}

		else
		{
			сохранитьКакToolStripMenuItem_Click(sender, e);
		}

	}

	private: System::Void сохранитьКакToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (sfd_save->ShowDialog() == Windows::Forms::DialogResult::OK)
		{
			char* fname = (char*)(void*)Marshal::StringToHGlobalAnsi(sfd_save->FileName);

			std::ofstream out(fname, std::ios::binary);

			if (!out)
			{
				MessageBox::Show("Не удалось сохранить файл " + ofd_open->FileName);
			}

			else
			{
				
				int temp = dgv->RowCount;
				out.write((char*)&temp, sizeof(temp));

				for (int i = 0; i < dgv->RowCount; ++i)
				{
					char* name = (char*)(void*)Marshal::StringToHGlobalAnsi(Convert::ToString(dgv[1, i]->Value));
					out.write((char*)name, strlen(name) + 1);

					char* author = (char*)(void*)Marshal::StringToHGlobalAnsi(Convert::ToString(dgv[2, i]->Value));
					out.write((char*)author, strlen(author) + 1);

					char* genre = (char*)(void*)Marshal::StringToHGlobalAnsi(Convert::ToString(dgv[3, i]->Value));
					out.write((char*)genre, strlen(genre) + 1);

					int length = Convert::ToInt32(dgv[4, i]->Value);
					out.write((char*)&length, sizeof(length));

					Marshal::FreeHGlobal((IntPtr)name);
					Marshal::FreeHGlobal((IntPtr)author);
					Marshal::FreeHGlobal((IntPtr)genre);
				}

				out.close();
			}

			filename = sfd_save->FileName;

			Marshal::FreeHGlobal((IntPtr)fname);
		}
	}

	private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e)
	{
		dgv->RowCount++;

		dgv[0, dgv->RowCount - 1]->Value = Convert::ToString(dgv->RowCount);
	}

	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (dgv->RowCount > 1)
		{
			dgv->RowCount--;
		}
	}

	private: System::Void btn_add_end_Click(System::Object^ sender, System::EventArgs^ e)
	{
		InputDialog->setname("");
		InputDialog->setauthor("");
		InputDialog->setgenre("");
		InputDialog->setlength("");

		if (InputDialog->ShowDialog() == Windows::Forms::DialogResult::OK)
		{
			try
			{
				int temp1 = Convert::ToInt32(InputDialog->getlength());
			}

			catch (Exception^ e)
			{
				MessageBox::Show("Введена длительность в неверном формате");
				return;
			}

			if (Convert::ToInt32(InputDialog->getlength()) <= 0)
			{
				MessageBox::Show("Длина не может быть неположительной.");
				return;
			}

			dgv->RowCount++;

			dgv[0, dgv->RowCount - 1]->Value = Convert::ToString(dgv->RowCount);

			dgv[1, dgv->RowCount - 1]->Value = InputDialog->getname();
			dgv[2, dgv->RowCount - 1]->Value = InputDialog->getauthor();
			dgv[3, dgv->RowCount - 1]->Value = InputDialog->getgenre();
			dgv[4, dgv->RowCount - 1]->Value = InputDialog->getlength();
		}
	}

	private: System::Void dgv_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
	{
		for (int i = 0; i < dgv->RowCount; ++i)
		{
			if (Convert::ToString(dgv[4, i]->Value) != "")
			{
				try
				{
					Sint32 length = Convert::ToInt32(dgv[4, i]->Value);
				}

				catch (Exception^ e)
				{
					MessageBox::Show("В строке " + Convert::ToString(i + 1) + " введена длина в неверном формате.");
					return;
				}

				if (Convert::ToInt32(dgv[4, i]->Value) <= 0)
				{
					MessageBox::Show("Длина не может быть неположительной.");
				}
			}
		}
	}

	private: System::Void btn_add_by_number_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Sint32 number{0};

		/*number = dgv->SelectedRows[0]->Index;
		tb_number->Text = Convert::ToString(number+1);*/

			try
			{
				number = dgv->SelectedRows[0]->Index;
				tb_number->Text = Convert::ToString(number + 1);
				number = Convert::ToInt32(tb_number->Text);
			}

			catch (Exception^ e)
			{
				MessageBox::Show("Введён номер в неверном формате");
				return;
			}

			if (number < 1 || number > dgv->RowCount + 1)
			{
				MessageBox::Show("Номер выходит за границы списка");
				return;
			}

		InputDialog->setname("");
		InputDialog->setauthor("");
		InputDialog->setgenre("");
		InputDialog->setlength("");

		if (InputDialog->ShowDialog() == Windows::Forms::DialogResult::OK)
		{
			try
			{
				int temp1 = Convert::ToInt32(InputDialog->getlength());
			}

			catch (Exception^ e)
			{
				MessageBox::Show("Введена длительность в неверном формате");
				return;
			}

			if (Convert::ToInt32(InputDialog->getlength()) <= 0)
			{
				MessageBox::Show("Длина не может быть неположительной.");
				return;
			}

			dgv->RowCount++;

			tb_number->Text = "";


			for (int i = dgv->RowCount - 2; i > number-2; i--)
			{
				dgv[0, i + 1]->Value = Convert::ToString(Convert::ToInt16(dgv[0, i]->Value) + 1);
				dgv[1, i + 1]->Value = Convert::ToString(dgv[1, i]->Value);
				dgv[2, i + 1]->Value = Convert::ToString(dgv[2, i]->Value);
				dgv[3, i + 1]->Value = Convert::ToString(dgv[3, i]->Value);
				dgv[4, i + 1]->Value = Convert::ToString(dgv[4, i]->Value);
			}

			dgv[1, number - 1]->Value = InputDialog->getname();
			dgv[2, number - 1]->Value = InputDialog->getauthor();
			dgv[3, number - 1]->Value = InputDialog->getgenre();
			dgv[4, number - 1]->Value = InputDialog->getlength();
		}
	}

	private: System::Void dgv_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

	private: System::Void btn_delete_selected_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int sum = dgv->SelectedRows->Count;
		for (int i = 0; i < sum; i++)
		{
			for (int i1 = dgv->SelectedRows[i + dgv->SelectedRows->Count - sum]->Index; i1 < dgv->RowCount - 1; i1++)
			{
				dgv[1, i1]->Value = Convert::ToString(dgv[1, i1 + 1]->Value);
				dgv[2, i1]->Value = Convert::ToString(dgv[2, i1 + 1]->Value);
				dgv[3, i1]->Value = Convert::ToString(dgv[3, i1 + 1]->Value);
				dgv[4, i1]->Value = Convert::ToString(dgv[4, i1 + 1]->Value);
			}

			if (dgv->RowCount > 1)
			{
				dgv->RowCount--;
			}
			else {
				dgv[1, 0]->Value = Convert::ToString("");
				dgv[2, 0]->Value = Convert::ToString("");
				dgv[3, 0]->Value = Convert::ToString("");
				dgv[4, 0]->Value = Convert::ToString("");
			}
		}
	}

	private: System::Void btn_sort_by_name_Click(System::Object^ sender, System::EventArgs^ e)
	{
		for (int i = 0; i < dgv->RowCount; ++i)
		{
			for (int j = 0; j < dgv->RowCount; ++j)
			{
				if (String::Compare(Convert::ToString(dgv[1, j]->Value), Convert::ToString(dgv[1, i]->Value)) > 0)
				{
					String^ temp1 = Convert::ToString(dgv[1, j]->Value);
					String^ temp2 = Convert::ToString(dgv[2, j]->Value);
					String^ temp3 = Convert::ToString(dgv[3, j]->Value);
					String^ temp4 = Convert::ToString(dgv[4, j]->Value);

					dgv[1, j]->Value = Convert::ToString(dgv[1, i]->Value);
					dgv[2, j]->Value = Convert::ToString(dgv[2, i]->Value);
					dgv[3, j]->Value = Convert::ToString(dgv[3, i]->Value);
					dgv[4, j]->Value = Convert::ToString(dgv[4, i]->Value);

					dgv[1, i]->Value = temp1;
					dgv[2, i]->Value = temp2;
					dgv[3, i]->Value = temp3;
					dgv[4, i]->Value = temp4;
				}
			}
		}
	}

	private: System::Void btn_sort_by_length_Click(System::Object^ sender, System::EventArgs^ e)
	{
		for (int i = 0; i < dgv->RowCount; ++i)
		{
			for (int j = 0; j < dgv->RowCount; ++j)
			{

				try
				{
					Convert::ToInt32(dgv[4, j]->Value);
					Convert::ToInt32(dgv[4, i]->Value);
				}
				catch (Exception^ e)
				{
					MessageBox::Show("Введена длительность в неверном формате");
					return;
				}

				if (Convert::ToInt32(dgv[4, j]->Value) > Convert::ToInt32(dgv[4, i]->Value))
				{
					String^ temp1 = Convert::ToString(dgv[1, j]->Value);
					String^ temp2 = Convert::ToString(dgv[2, j]->Value);
					String^ temp3 = Convert::ToString(dgv[3, j]->Value);
					String^ temp4 = Convert::ToString(dgv[4, j]->Value);

					dgv[1, j]->Value = Convert::ToString(dgv[1, i]->Value);
					dgv[2, j]->Value = Convert::ToString(dgv[2, i]->Value);
					dgv[3, j]->Value = Convert::ToString(dgv[3, i]->Value);
					dgv[4, j]->Value = Convert::ToString(dgv[4, i]->Value);

					dgv[1, i]->Value = temp1;
					dgv[2, i]->Value = temp2;
					dgv[3, i]->Value = temp3;
					dgv[4, i]->Value = temp4;
				}
			}
		}
	}

	private: System::Void btn_search_by_author_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ temp;

		for (int i = 0; i < dgv->RowCount; ++i)
		{
			if (String::Compare(Convert::ToString(dgv[2, i]->Value)->ToLower(), tb_search->Text->ToLower()) == 0)
			{
				temp += "Название: " + Convert::ToString(dgv[1, i]->Value) + ". Исполнитель: " + Convert::ToString(dgv[2, i]->Value) + ". Жанр: " + Convert::ToString(dgv[3, i]->Value) + ". Длительность: " + Convert::ToString(dgv[4, i]->Value) + "\n";
			}
		}

		if (temp == "")
		{
			temp += "Не найдено ни одной песни этого исполнителя.";
		}

		MessageBox::Show(temp);
	}

	private: System::Void btn_search_by_genre_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ temp;

		for (int i = 0; i < dgv->RowCount; ++i)
		{
			if (String::Compare(Convert::ToString(dgv[3, i]->Value)->ToLower(), tb_search->Text->ToLower()) == 0)
			{
				temp += "Название: " + Convert::ToString(dgv[1, i]->Value) + ". Исполнитель: " + Convert::ToString(dgv[2, i]->Value) + ". Жанр: " + Convert::ToString(dgv[3, i]->Value) + ". Длительность: " + Convert::ToString(dgv[4, i]->Value) + "с.\n";
			}
		}

		if (temp == nullptr)
		{
			temp += "Не найдено ни одной песни в этом жанре.";
		}

		MessageBox::Show(temp);
	}

	private: System::Void btn_search_by_length_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			int temp = Convert::ToInt32(tb_search->Text);
		}

		catch (Exception^ e)
		{
			MessageBox::Show("Введена длительность в неверном формате");
			return;
		}

		String^ temp;

		for (int i = 0; i < dgv->RowCount; ++i)
		{
			if (Convert::ToInt32(dgv[4, i]->Value) >= Convert::ToInt32(tb_search->Text))
			{
				temp += "Название: " + Convert::ToString(dgv[1, i]->Value) + ". Исполнитель: " + Convert::ToString(dgv[2, i]->Value) + ". Жанр: " + Convert::ToString(dgv[3, i]->Value) + ". Длительность: " + Convert::ToString(dgv[4, i]->Value) + "\n";
			}
		}

		if (temp == nullptr)
		{
			temp += "Не найдено ни одной песни, имеющей длительность, равную или превышающую заданную.";
		}

		MessageBox::Show(temp);
	}

	private: System::Void btn_benchmark_Click(System::Object^ sender, System::EventArgs^ e)
	{
#define max_it 10000000

		auto begin = std::chrono::high_resolution_clock::now();

		for (int i = 0; i < max_it; ++i)
		{
			double test = sin(rand());
		}

		auto end = std::chrono::high_resolution_clock::now();

		MessageBox::Show("У шиндавс формз ушло " + std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() + " нс на подсчёт " + max_it + " синусов, в то время как у нормального C на это ушло (без оптимизаций) 482959600 нс.");
	}

	private: System::Void btn_edit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (dgv->SelectedRows[0]->Index >= 0)
		{
			int temp = dgv->SelectedRows[0]->Index;
			InputDialog->setname(Convert::ToString(dgv[1, temp]->Value));
			InputDialog->setauthor(Convert::ToString(dgv[2, temp]->Value));
			InputDialog->setgenre(Convert::ToString(dgv[3, temp]->Value));
			InputDialog->setlength(Convert::ToString(dgv[4, temp]->Value));

			if (InputDialog->ShowDialog() == Windows::Forms::DialogResult::OK)
			{
				try
				{
					int temp1 = Convert::ToInt32(InputDialog->getlength());
				}

				catch (Exception^ e)
				{
					MessageBox::Show("Введена длительность в неверном формате");
					return;
				}

				if (Convert::ToInt32(InputDialog->getlength()) <= 0)
				{
					MessageBox::Show("Длина не может быть неположительной.");
					return;
				}

				dgv[1, temp]->Value = InputDialog->getname();
				dgv[2, temp]->Value = InputDialog->getauthor();
				dgv[3, temp]->Value = InputDialog->getgenre();
				dgv[4, temp]->Value = InputDialog->getlength();
			}
		}

		else
		{
			MessageBox::Show("Вы не выделили пункт для редактирования.");
		}
	}
	private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
			 }
private: System::Void btn_search_by_dlitelnost_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ temp;

	try 
	{
		Convert::ToDouble(tb_search->Text);
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Введена длительность в неверном формате");
		return;
	}

	temp += "Треки не короче чем " + Convert::ToString(tb_search->Text) + " :"+ "\n";
	for (int i = 0; i < dgv->RowCount; ++i)
	{
		if ((Convert::ToDouble(dgv[4, i]->Value))>=(Convert::ToDouble(tb_search->Text)))
		{
			temp += "Название: " + Convert::ToString(dgv[1, i]->Value) + ". Исполнитель: " + Convert::ToString(dgv[2, i]->Value) + ". Жанр: " + Convert::ToString(dgv[3, i]->Value) + ". Длительность: " + Convert::ToString(dgv[4, i]->Value) + "\n";
		}
	}


	MessageBox::Show(temp);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ temp;

	try
	{
		Convert::ToDouble(tb_search->Text);
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Введена длительность в неверном формате");
		return;
	}

	   temp += "Треки не длиннее чем " + Convert::ToString(tb_search->Text) + " :" + "\n";
	   for (int i = 0; i < dgv->RowCount; ++i)
	   {
		   if ((Convert::ToDouble(dgv[4, i]->Value)) <= (Convert::ToDouble(tb_search->Text)))
		   {
			   temp += "Название: " + Convert::ToString(dgv[1, i]->Value) + ". Исполнитель: " + Convert::ToString(dgv[2, i]->Value) + ". Жанр: " + Convert::ToString(dgv[3, i]->Value) + ". Длительность: " + Convert::ToString(dgv[4, i]->Value) + "\n";
		   }
	   }


	   MessageBox::Show(temp);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void sfd_save_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
private: System::Void ofd_open_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
private: System::Void ms_main_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}