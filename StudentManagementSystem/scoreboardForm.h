#pragma once
#include <msclr/marshal_cppstd.h>
#include <fstream>
namespace StudentManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;

	/// <summary>
	/// Summary for scoreboardForm
	/// </summary>
	public ref class scoreboardForm : public System::Windows::Forms::Form
	{
	public:
		scoreboardForm(String^ s)
		{
			InitializeComponent();
			classname = s;
			this->Text = s;
			dgvScoreLoad();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	public:
	private: System::Windows::Forms::ToolStripMenuItem^ exportToCSVFileToolStripMenuItem;
	public: String^ classname;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~scoreboardForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvScore;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListNo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListLastname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListGender;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListDob;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::ComponentModel::IContainer^ components;
	protected:







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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dgvScore = (gcnew System::Windows::Forms::DataGridView());
			this->dgvStudentListNo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvStudentListID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvStudentListLastname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvStudentListGender = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvStudentListDob = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->exportToCSVFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvScore))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgvScore
			// 
			this->dgvScore->AllowUserToAddRows = false;
			this->dgvScore->AllowUserToDeleteRows = false;
			this->dgvScore->AllowUserToResizeColumns = false;
			this->dgvScore->AllowUserToResizeRows = false;
			this->dgvScore->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->dgvScore->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgvScore->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvScore->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgvScore->ColumnHeadersHeight = 30;
			this->dgvScore->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dgvScore->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->dgvStudentListNo,
					this->dgvStudentListID, this->dgvStudentListLastname, this->dgvStudentListGender, this->dgvStudentListDob, this->Column1, this->Column2
			});
			this->dgvScore->ContextMenuStrip = this->contextMenuStrip1;
			this->dgvScore->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dgvScore->EnableHeadersVisualStyles = false;
			this->dgvScore->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dgvScore->Location = System::Drawing::Point(0, 51);
			this->dgvScore->MultiSelect = false;
			this->dgvScore->Name = L"dgvScore";
			this->dgvScore->RowHeadersVisible = false;
			this->dgvScore->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			this->dgvScore->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->dgvScore->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dgvScore->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::SystemColors::Control;
			this->dgvScore->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			this->dgvScore->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			this->dgvScore->RowTemplate->Height = 25;
			this->dgvScore->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvScore->Size = System::Drawing::Size(796, 353);
			this->dgvScore->TabIndex = 4;
			// 
			// dgvStudentListNo
			// 
			this->dgvStudentListNo->HeaderText = L"No";
			this->dgvStudentListNo->Name = L"dgvStudentListNo";
			this->dgvStudentListNo->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvStudentListNo->Width = 50;
			// 
			// dgvStudentListID
			// 
			this->dgvStudentListID->HeaderText = L"STUDENT ID";
			this->dgvStudentListID->Name = L"dgvStudentListID";
			this->dgvStudentListID->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvStudentListID->Width = 130;
			// 
			// dgvStudentListLastname
			// 
			this->dgvStudentListLastname->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dgvStudentListLastname->HeaderText = L"STUDENT NAME";
			this->dgvStudentListLastname->Name = L"dgvStudentListLastname";
			this->dgvStudentListLastname->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// dgvStudentListGender
			// 
			this->dgvStudentListGender->HeaderText = L"MIDTERM";
			this->dgvStudentListGender->Name = L"dgvStudentListGender";
			this->dgvStudentListGender->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// dgvStudentListDob
			// 
			this->dgvStudentListDob->HeaderText = L"FINAL";
			this->dgvStudentListDob->Name = L"dgvStudentListDob";
			this->dgvStudentListDob->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"BONUS";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"TOTAL";
			this->Column2->Name = L"Column2";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exportToCSVFileToolStripMenuItem });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(181, 48);
			// 
			// exportToCSVFileToolStripMenuItem
			// 
			this->exportToCSVFileToolStripMenuItem->Name = L"exportToCSVFileToolStripMenuItem";
			this->exportToCSVFileToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->exportToCSVFileToolStripMenuItem->Text = L"Export to CSV file";
			this->exportToCSVFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &scoreboardForm::exportToCSVFileToolStripMenuItem_Click);
			// 
			// scoreboardForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->ClientSize = System::Drawing::Size(796, 404);
			this->Controls->Add(this->dgvScore);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"scoreboardForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"scoreboardForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvScore))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		void dgvScoreLoad()
		{
			std::ifstream f(msclr::interop::marshal_as<std::string>(classname->ToString()) + "_sco.l");
			dgvScore->Rows->Clear();
			int x = 0;
			std::string s;
			getline(f, s, '\n');
			while (f.good())
			{
				getline(f, s, '\n');
				dgvScore->Rows->Add();
				dgvScore->Rows[x]->Cells[0]->Value = x + 1;
				getline(f, s, '\n');
				dgvScore->Rows[x]->Cells[1]->Value = gcnew String(s.c_str());
				getline(f, s, '\n');
				dgvScore->Rows[x]->Cells[2]->Value = gcnew String(s.c_str());
				getline(f, s, '\n');
				dgvScore->Rows[x]->Cells[3]->Value = gcnew String(s.c_str());
				getline(f, s, '\n');
				dgvScore->Rows[x]->Cells[4]->Value = gcnew String(s.c_str());
				getline(f, s, '\n');
				dgvScore->Rows[x]->Cells[5]->Value = gcnew String(s.c_str());
				getline(f, s, '\n');
				dgvScore->Rows[x]->Cells[6]->Value = gcnew String(s.c_str());
				x++;
			}
			dgvScore->ClearSelection();
		}
	private: System::Void exportToCSVFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ofstream f(msclr::interop::marshal_as<std::string>(classname->ToString()) + "_scoreboard.csv");
		f << "No,Student Name,Student ID,Midterm,Final,Bonus,Total";
		for (int i = 0; i < dgvScore->RowCount; i++)
		{
			f << endl <<
				msclr::interop::marshal_as<std::string>(dgvScore->Rows[i]->Cells[0]->Value->ToString()) << "," <<
				msclr::interop::marshal_as<std::string>(dgvScore->Rows[i]->Cells[1]->Value->ToString()) << "," <<
				msclr::interop::marshal_as<std::string>(dgvScore->Rows[i]->Cells[2]->Value->ToString()) << "," <<
				msclr::interop::marshal_as<std::string>(dgvScore->Rows[i]->Cells[3]->Value->ToString()) << "," <<
				msclr::interop::marshal_as<std::string>(dgvScore->Rows[i]->Cells[4]->Value->ToString()) << "," <<
				msclr::interop::marshal_as<std::string>(dgvScore->Rows[i]->Cells[5]->Value->ToString()) << "," <<
				msclr::interop::marshal_as<std::string>(dgvScore->Rows[i]->Cells[6]->Value->ToString());
		}
		f.close();
	}
};
}
