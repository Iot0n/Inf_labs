#pragma once
#include <cassert>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS


namespace Mypolugon {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			PB->Image = gcnew Bitmap(PB->Width, PB->Height);
			br = gcnew SolidBrush(Color::PapayaWhip);
			br_text = gcnew SolidBrush(Color::Black);
			pn_axes = gcnew Pen(Color::Black, 3);
			pn_line = gcnew Pen(Color::Blue, 3);
			pn_grid = gcnew Pen(Color::Gray, 1);
			printFont = gcnew System::Drawing::Font("Arial", 8);
			br_poly = gcnew SolidBrush(Color::RoyalBlue);
			gr = Graphics::FromImage(PB->Image);
			Changes = gcnew array<float, 2>(3, 3);
			identity_mat(Changes);
			CurChanges = gcnew array<float, 2>(3, 3);
			identity_mat(CurChanges);
			PrevChanges = gcnew array<float, 2>(3, 3);
			identity_mat(PrevChanges);

			origin.X = PB->Image->Width / 2;
			origin.Y = PB->Image->Height / 2;
			//Zero = false;
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
	private: System::Windows::Forms::PictureBox^ PB;
	private: System::Windows::Forms::Button^ btn_move_left;
	protected:

	private: System::Windows::Forms::Button^ btn_move_under;
	private: System::Windows::Forms::Button^ btn_move_down;


	private: System::Windows::Forms::Button^ btn_move_right;

	private: System::Windows::Forms::Button^ btn_zoom_X_plus;
	private: System::Windows::Forms::Button^ btn_zoom_X_min;


	private: System::Windows::Forms::Button^ btn_zoom_Y_plus;
	private: System::Windows::Forms::Button^ btn_zoom_Y_min;


	private: System::Windows::Forms::Button^ btn_clear;
	private: System::Windows::Forms::Button^ btn_point;
	private: System::Windows::Forms::Button^ btn_rotate_po;
	private: System::Windows::Forms::Button^ btn_rotate_prot;




	private: System::Windows::Forms::ListBox^ LBX;
	private: System::Windows::Forms::ListBox^ LBY;
	private: System::Windows::Forms::TextBox^ tb_gradus;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

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
			this->PB = (gcnew System::Windows::Forms::PictureBox());
			this->btn_move_left = (gcnew System::Windows::Forms::Button());
			this->btn_move_under = (gcnew System::Windows::Forms::Button());
			this->btn_move_down = (gcnew System::Windows::Forms::Button());
			this->btn_move_right = (gcnew System::Windows::Forms::Button());
			this->btn_zoom_X_plus = (gcnew System::Windows::Forms::Button());
			this->btn_zoom_X_min = (gcnew System::Windows::Forms::Button());
			this->btn_zoom_Y_plus = (gcnew System::Windows::Forms::Button());
			this->btn_zoom_Y_min = (gcnew System::Windows::Forms::Button());
			this->btn_clear = (gcnew System::Windows::Forms::Button());
			this->btn_point = (gcnew System::Windows::Forms::Button());
			this->btn_rotate_po = (gcnew System::Windows::Forms::Button());
			this->btn_rotate_prot = (gcnew System::Windows::Forms::Button());
			this->LBX = (gcnew System::Windows::Forms::ListBox());
			this->LBY = (gcnew System::Windows::Forms::ListBox());
			this->tb_gradus = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB))->BeginInit();
			this->SuspendLayout();
			// 
			// PB
			// 
			this->PB->BackColor = System::Drawing::Color::PapayaWhip;
			this->PB->Location = System::Drawing::Point(12, 12);
			this->PB->Name = L"PB";
			this->PB->Size = System::Drawing::Size(992, 707);
			this->PB->TabIndex = 0;
			this->PB->TabStop = false;
			this->PB->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::PB_MouseClick);
			// 
			// btn_move_left
			// 
			this->btn_move_left->Location = System::Drawing::Point(1206, 518);
			this->btn_move_left->Name = L"btn_move_left";
			this->btn_move_left->Size = System::Drawing::Size(80, 50);
			this->btn_move_left->TabIndex = 1;
			this->btn_move_left->Text = L"<";
			this->btn_move_left->UseVisualStyleBackColor = true;
			this->btn_move_left->Click += gcnew System::EventHandler(this, &MyForm::btn_move_left_Click);
			// 
			// btn_move_under
			// 
			this->btn_move_under->Location = System::Drawing::Point(1292, 461);
			this->btn_move_under->Name = L"btn_move_under";
			this->btn_move_under->Size = System::Drawing::Size(80, 50);
			this->btn_move_under->TabIndex = 2;
			this->btn_move_under->Text = L"/\\";
			this->btn_move_under->UseVisualStyleBackColor = true;
			this->btn_move_under->Click += gcnew System::EventHandler(this, &MyForm::btn_move_under_Click);
			// 
			// btn_move_down
			// 
			this->btn_move_down->Location = System::Drawing::Point(1292, 575);
			this->btn_move_down->Name = L"btn_move_down";
			this->btn_move_down->Size = System::Drawing::Size(80, 50);
			this->btn_move_down->TabIndex = 3;
			this->btn_move_down->Text = L"\\/";
			this->btn_move_down->UseVisualStyleBackColor = true;
			this->btn_move_down->Click += gcnew System::EventHandler(this, &MyForm::btn_move_down_Click);
			// 
			// btn_move_right
			// 
			this->btn_move_right->Location = System::Drawing::Point(1378, 518);
			this->btn_move_right->Name = L"btn_move_right";
			this->btn_move_right->Size = System::Drawing::Size(80, 50);
			this->btn_move_right->TabIndex = 4;
			this->btn_move_right->Text = L">";
			this->btn_move_right->UseVisualStyleBackColor = true;
			this->btn_move_right->Click += gcnew System::EventHandler(this, &MyForm::btn_move_right_Click);
			// 
			// btn_zoom_X_plus
			// 
			this->btn_zoom_X_plus->Location = System::Drawing::Point(1028, 62);
			this->btn_zoom_X_plus->Name = L"btn_zoom_X_plus";
			this->btn_zoom_X_plus->Size = System::Drawing::Size(80, 40);
			this->btn_zoom_X_plus->TabIndex = 5;
			this->btn_zoom_X_plus->Text = L"+";
			this->btn_zoom_X_plus->UseVisualStyleBackColor = true;
			this->btn_zoom_X_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_zoom_X_plus_Click);
			// 
			// btn_zoom_X_min
			// 
			this->btn_zoom_X_min->Location = System::Drawing::Point(1028, 108);
			this->btn_zoom_X_min->Name = L"btn_zoom_X_min";
			this->btn_zoom_X_min->Size = System::Drawing::Size(80, 40);
			this->btn_zoom_X_min->TabIndex = 6;
			this->btn_zoom_X_min->Text = L"-";
			this->btn_zoom_X_min->UseVisualStyleBackColor = true;
			this->btn_zoom_X_min->Click += gcnew System::EventHandler(this, &MyForm::btn_zoom_X_min_Click);
			// 
			// btn_zoom_Y_plus
			// 
			this->btn_zoom_Y_plus->Location = System::Drawing::Point(1150, 62);
			this->btn_zoom_Y_plus->Name = L"btn_zoom_Y_plus";
			this->btn_zoom_Y_plus->Size = System::Drawing::Size(80, 40);
			this->btn_zoom_Y_plus->TabIndex = 7;
			this->btn_zoom_Y_plus->Text = L"+";
			this->btn_zoom_Y_plus->UseVisualStyleBackColor = true;
			this->btn_zoom_Y_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_zoom_Y_plus_Click);
			// 
			// btn_zoom_Y_min
			// 
			this->btn_zoom_Y_min->Location = System::Drawing::Point(1150, 108);
			this->btn_zoom_Y_min->Name = L"btn_zoom_Y_min";
			this->btn_zoom_Y_min->Size = System::Drawing::Size(80, 40);
			this->btn_zoom_Y_min->TabIndex = 8;
			this->btn_zoom_Y_min->Text = L"-";
			this->btn_zoom_Y_min->UseVisualStyleBackColor = true;
			this->btn_zoom_Y_min->Click += gcnew System::EventHandler(this, &MyForm::btn_zoom_Y_min_Click);
			// 
			// btn_clear
			// 
			this->btn_clear->Location = System::Drawing::Point(1392, 292);
			this->btn_clear->Name = L"btn_clear";
			this->btn_clear->Size = System::Drawing::Size(246, 40);
			this->btn_clear->TabIndex = 9;
			this->btn_clear->Text = L"Очистить";
			this->btn_clear->UseVisualStyleBackColor = true;
			this->btn_clear->Click += gcnew System::EventHandler(this, &MyForm::btn_clear_Click);
			// 
			// btn_point
			// 
			this->btn_point->Location = System::Drawing::Point(1392, 338);
			this->btn_point->Name = L"btn_point";
			this->btn_point->Size = System::Drawing::Size(246, 40);
			this->btn_point->TabIndex = 10;
			this->btn_point->Text = L"Построить";
			this->btn_point->UseVisualStyleBackColor = true;
			this->btn_point->Click += gcnew System::EventHandler(this, &MyForm::btn_plot_Click);
			// 
			// btn_rotate_po
			// 
			this->btn_rotate_po->Location = System::Drawing::Point(1028, 292);
			this->btn_rotate_po->Name = L"btn_rotate_po";
			this->btn_rotate_po->Size = System::Drawing::Size(80, 40);
			this->btn_rotate_po->TabIndex = 11;
			this->btn_rotate_po->Text = L"По";
			this->btn_rotate_po->UseVisualStyleBackColor = true;
			this->btn_rotate_po->Click += gcnew System::EventHandler(this, &MyForm::btn_rotate_po_Click);
			// 
			// btn_rotate_prot
			// 
			this->btn_rotate_prot->Location = System::Drawing::Point(1028, 338);
			this->btn_rotate_prot->Name = L"btn_rotate_prot";
			this->btn_rotate_prot->Size = System::Drawing::Size(80, 40);
			this->btn_rotate_prot->TabIndex = 12;
			this->btn_rotate_prot->Text = L"Против";
			this->btn_rotate_prot->UseVisualStyleBackColor = true;
			this->btn_rotate_prot->Click += gcnew System::EventHandler(this, &MyForm::btn_rotate_prot_Click);
			// 
			// LBX
			// 
			this->LBX->FormattingEnabled = true;
			this->LBX->ItemHeight = 20;
			this->LBX->Location = System::Drawing::Point(1392, 62);
			this->LBX->Name = L"LBX";
			this->LBX->Size = System::Drawing::Size(120, 224);
			this->LBX->TabIndex = 13;
			this->LBX->Click += gcnew System::EventHandler(this, &MyForm::LBX_Click);
			// 
			// LBY
			// 
			this->LBY->FormattingEnabled = true;
			this->LBY->ItemHeight = 20;
			this->LBY->Location = System::Drawing::Point(1518, 62);
			this->LBY->Name = L"LBY";
			this->LBY->Size = System::Drawing::Size(120, 224);
			this->LBY->TabIndex = 14;
			this->LBY->Click += gcnew System::EventHandler(this, &MyForm::LBY_Click);
			// 
			// tb_gradus
			// 
			this->tb_gradus->Location = System::Drawing::Point(1130, 321);
			this->tb_gradus->Name = L"tb_gradus";
			this->tb_gradus->Size = System::Drawing::Size(100, 26);
			this->tb_gradus->TabIndex = 15;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1034, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 20);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Zoom X";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1156, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 20);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Zoom Y";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1442, 32);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 20);
			this->label3->TabIndex = 18;
			this->label3->Text = L"X";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1566, 32);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 20);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Y";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1034, 266);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 20);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Rotate";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1650, 735);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tb_gradus);
			this->Controls->Add(this->LBY);
			this->Controls->Add(this->LBX);
			this->Controls->Add(this->btn_rotate_prot);
			this->Controls->Add(this->btn_rotate_po);
			this->Controls->Add(this->btn_point);
			this->Controls->Add(this->btn_clear);
			this->Controls->Add(this->btn_zoom_Y_min);
			this->Controls->Add(this->btn_zoom_Y_plus);
			this->Controls->Add(this->btn_zoom_X_min);
			this->Controls->Add(this->btn_zoom_X_plus);
			this->Controls->Add(this->btn_move_right);
			this->Controls->Add(this->btn_move_down);
			this->Controls->Add(this->btn_move_under);
			this->Controls->Add(this->btn_move_left);
			this->Controls->Add(this->PB);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		Brush^ br, ^ br_text, ^ br_poly;
		Pen^ pn_axes, ^ pn_line, ^ pn_grid;
		System::Drawing::Font^ printFont;
		int count;
		bool not_now{ false };
		int index;
		Point origin;
		array<PointF>^ points;
		array<PointF>^ points1;
		array<float, 2>^ Changes;
		array<float, 2>^ CurChanges;
		array<float, 2>^ PrevChanges;
		Graphics^ gr;



		void multiply(array<float, 2>^ A, array<float, 2>^ B, array<float, 2>^ C) {
			int n = A->GetLength(0), m = B->GetLength(1), k = A->GetLength(1);
			assert(k == B->GetLength(0) && n == C->GetLength(0) && m == C->GetLength(1));
			for (int i = 0; i < n; i++)
				for (int j = 0; j < m; j++) {
					C[i, j] = 0;
					for (int p = 0; p < k; p++)
						C[i, j] += A[i, p] * B[p, j];
				}
		}
		//единичная матрица
		void identity_mat(array<float, 2>^ M) {
			int n = M->GetLength(0), m = M->GetLength(1);
			for (int i = 0; i < n; i++)
				for (int j = 0; j < m; j++)
					M[i, j] = float(i == j);
		}
		//функция сдвига
		void move_mat(float dx, float dy, array<float, 2>^ T) {
			identity_mat(T);
			T[0, T->GetLength(1) - 1] = dx;
			T[1, T->GetLength(1) - 1] = dy;
		}
		//функция масштабирования
		void scale_mat(float kx, float ky, array<float, 2>^ S) {
			identity_mat(S);
			S[0, 0] = kx;
			S[1, 1] = ky;
		}
		//функция поворота
		void rotate_mat(float phi, array<float, 2>^ R) {
			identity_mat(R);
			R[0, 0] = cos(phi);
			R[1, 1] = R[0, 0];
			R[0, 1] = sin(phi);
			R[1, 0] = -R[0, 1];
		}

		PointF prim_ism(PointF p, array<float, 2>^ M) {
			return PointF(p.X * M[0, 0] + p.Y * M[0, 1] + M[0, 2], p.X * M[1, 0] + p.Y * M[1, 1] + M[1, 2]);
		}

		void scale_mat(PointF c, float kx, float ky, array<float, 2>^ S) {
			scale_mat(kx, ky, S);
			PointF scaled_c = prim_ism(c, S);
			S[0, S->GetLength(1) - 1] = c.X - scaled_c.X;
			S[1, S->GetLength(1) - 1] = c.Y - scaled_c.Y;
		}

		void rotate_mat(PointF c, float phi, array<float, 2>^ R) {
			rotate_mat(phi, R);
			PointF rot_c = prim_ism(c, R);
			R[0, R->GetLength(1) - 1] = c.X - rot_c.X;
			R[1, R->GetLength(1) - 1] = c.Y - rot_c.Y;
		}

		PointF rotate(PointF p, PointF c, float phi) {
			return PointF(c.X + (p.X - c.X) * cos(phi) - (p.Y - c.Y) * sin(phi),
				c.Y + (p.X - c.X) * sin(phi) + (p.Y - c.Y) * cos(phi));
		}

		void clear() {
			gr->FillRectangle(br, 0, 0, PB->Width, PB->Height);
			PB->Refresh();
		}

		void clear_all() {
			clear();
			LBX->Items->Clear();
			LBY->Items->Clear();
			count = 0;
			not_now = false;
		}


		void replot() {
			clear();
			gr->FillPolygon(br_poly, points1);
			PB->Refresh();
		}


		void uploadchanges() {
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					PrevChanges[i, j] = Changes[i, j];
				}
			}
		}

		void Reset_PB() {
			multiply(CurChanges, PrevChanges, Changes);
			for (int i = 0; i < points->Length; i++) {
				points1[i] = prim_ism(points[i], Changes);
			}
			replot();
			uploadchanges();
			uploadlb();
		}

		void uploadlb() {
			LBX->Items->Clear();
			LBY->Items->Clear();
			for (int i = 0; i < count; i++) {
				LBX->Items->Add(points1[i].X - origin.X);
				LBY->Items->Add(origin.Y - points1[i].Y);
			}
			LBX->Items->Add(0);
			LBY->Items->Add(0);
		}

		void reset_with_select() {
			index = LBX->SelectedIndex;
			Reset_PB();
			LBX->SelectedIndex = index;
			LBY->SelectedIndex = index;
		}


private: System::Void PB_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (not_now)
		return;
	LBX->Items->Add(Convert::ToString(e->X - origin.X));
	LBY->Items->Add(Convert::ToString(origin.Y - e->Y));
	count++;
}


private: System::Void btn_plot_Click(System::Object^ sender, System::EventArgs^ e) {
	if (count == 0 || not_now)
		return;
	not_now = true;
	points = gcnew array< PointF >(count);
	points1 = gcnew array< PointF >(count);

	PointF p;

	for (int i = 0; i < count; i++) {
		p.X = Convert::ToDouble(LBX->Items[i]->ToString());
		p.Y = Convert::ToDouble(LBY->Items[i]->ToString());
		p.X = origin.X + p.X;
		p.Y = -p.Y + origin.Y;
		points1[i] = points[i] = p;
	}

	gr->FillPolygon(br_poly, points);
	PB->Refresh();
	LBX->Items->Add(0);
	LBY->Items->Add(0);
}

	   
private: System::Void btn_clear_Click(System::Object^ sender, System::EventArgs^ e) {
	clear_all();
}


private: System::Void btn_move_under_Click(System::Object^ sender, System::EventArgs^ e) {
	move_mat(0, -10, CurChanges);
	Reset_PB();
}


private: System::Void btn_move_down_Click(System::Object^ sender, System::EventArgs^ e) {
	move_mat(0, 10, CurChanges);
	Reset_PB();
}


private: System::Void btn_move_left_Click(System::Object^ sender, System::EventArgs^ e) {
	move_mat(-10, 0, CurChanges);
	Reset_PB();
}


private: System::Void btn_move_right_Click(System::Object^ sender, System::EventArgs^ e) {
	move_mat(10, 0, CurChanges);
	Reset_PB();

}


	private: System::Void btn_zoom_X_plus_Click(System::Object^ sender, System::EventArgs^ e) {
	if (LBX->SelectedIndex > -1 && LBX->SelectedIndex < (count - 1)) {
		scale_mat(points1[LBX->SelectedIndex], 2, 1, CurChanges);
		reset_with_select();
	}
	else {
		scale_mat(PointF(0, 0), 2, 1, CurChanges);
		reset_with_select();
	}

	/*else if (LBX->SelectedIndex == 0) {
		scale_mat(PointF(0, 0), 2, 1, CurChanges);
		reset_with_select();
	}*/
}


	private: System::Void btn_zoom_X_min_Click(System::Object^ sender, System::EventArgs^ e) {
	if (LBX->SelectedIndex > -1 && LBX->SelectedIndex < (count - 1)) {
		scale_mat(points1[LBX->SelectedIndex], 0.5, 1, CurChanges);
		reset_with_select();
		}
	else {
		scale_mat(PointF(0, 0), 0.5, 1, CurChanges);
		reset_with_select();
	}

	/*else if (LBX->SelectedIndex == 0){
		scale_mat(PointF(0, 0), 0.5, 1, CurChanges);
		reset_with_select();
	}*/
}


private: System::Void btn_zoom_Y_plus_Click(System::Object^ sender, System::EventArgs^ e) {
	if (LBY->SelectedIndex > -1 && LBY->SelectedIndex < (count - 1)) {
		scale_mat(points1[LBY->SelectedIndex], 1, 2, CurChanges);
		reset_with_select();
	}
	else {
		scale_mat(PointF(0, 0), 1, 2, CurChanges);
		reset_with_select();
	}

	/*else if (LBY->SelectedIndex == 0) {
		scale_mat(PointF(0, 0), 1, 2, CurChanges);
		reset_with_select();
	}*/
}


private: System::Void btn_zoom_Y_min_Click(System::Object^ sender, System::EventArgs^ e) {
	if (LBY->SelectedIndex > -1 && LBY->SelectedIndex < (count - 1)){
		scale_mat(points1[LBY->SelectedIndex], 1, 0.5, CurChanges);
		reset_with_select();
	}

	else {
		scale_mat(PointF(0, 0), 1, 0.5, CurChanges);
		reset_with_select();
	}
	/*else if (LBY->SelectedIndex == 0){
		scale_mat(PointF(0, 0), 1, 0.5, CurChanges);
		reset_with_select();
	}*/
}


private: System::Void LBX_Click(System::Object^ sender, System::EventArgs^ e) {
	LBY->SetSelected(LBX->SelectedIndex, true);
}


private: System::Void LBY_Click(System::Object^ sender, System::EventArgs^ e) {
	LBX->SetSelected(LBY->SelectedIndex, true);
}


	private: System::Void btn_rotate_po_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		double grad = Convert::ToDouble(tb_gradus->Text);
	}
	catch (Exception^ e) {
		MessageBox::Show("Введено некорректное значение угла");
		return;
	}
	double grad = Convert::ToDouble(tb_gradus->Text);
	if (LBY->SelectedIndex > -1 && LBY->SelectedIndex < (count - 1)) {
		rotate_mat(points1[LBY->SelectedIndex], -grad / 57.3, CurChanges);
		reset_with_select();
	}
	else{
		rotate_mat(PointF(0, 0), -grad / 57.3, CurChanges);
	reset_with_select();
	}
	/*if (LBY->SelectedIndex == 0) {
		rotate_mat(PointF(0, 0), -grad / 57.3, CurChanges);
		reset_with_select();
	}*/
}


private: System::Void btn_rotate_prot_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		double grad = Convert::ToDouble(tb_gradus->Text);
	}
	catch (Exception^ e) {
		MessageBox::Show("Введено некорректное значение угла");
		return;
	}
	double grad = Convert::ToDouble(tb_gradus->Text);
	if (LBY->SelectedIndex > -1 && LBY->SelectedIndex < (count-1)) {
		rotate_mat(points1[LBY->SelectedIndex], grad/57.3, CurChanges);
		reset_with_select();
	}
	else {
		rotate_mat(PointF(0, 0), grad / 57.3, CurChanges);
		reset_with_select();
	}
	/*if (LBY->SelectedIndex == 0) {
		rotate_mat(PointF(0, 0), grad / 57.3, CurChanges);
		reset_with_select();
	}*/
}
};
}

//if (LBX->index == count)

