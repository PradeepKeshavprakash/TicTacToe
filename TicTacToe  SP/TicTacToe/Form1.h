#pragma once
#include<stdlib.h>
int i,j,k,w=0;
int a[3][3]={0};

namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  Reset;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button10;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->Reset = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LemonChiffon;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 187);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 100);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LemonChiffon;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(118, 187);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 100);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LemonChiffon;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(224, 187);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 100);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::LemonChiffon;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(12, 293);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 100);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::LemonChiffon;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(118, 293);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 100);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::LemonChiffon;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(224, 293);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 100);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::LemonChiffon;
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(12, 399);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 100);
			this->button7->TabIndex = 6;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::LemonChiffon;
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(118, 399);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(100, 100);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::LemonChiffon;
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(224, 399);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(100, 100);
			this->button9->TabIndex = 8;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// Reset
			// 
			this->Reset->BackColor = System::Drawing::Color::SeaShell;
			this->Reset->Location = System::Drawing::Point(14, 62);
			this->Reset->Name = L"Reset";
			this->Reset->Size = System::Drawing::Size(98, 51);
			this->Reset->TabIndex = 0;
			this->Reset->Text = L"RESET";
			this->Reset->UseVisualStyleBackColor = false;
			this->Reset->Click += gcnew System::EventHandler(this, &Form1::Reset_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Silver;
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 119);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(312, 62);
			this->textBox1->TabIndex = 10;
			this->textBox1->Text = L"Single Player";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Bisque;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Enabled = false;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::Desktop;
			this->textBox2->Location = System::Drawing::Point(14, 7);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(308, 46);
			this->textBox2->TabIndex = 11;
			this->textBox2->Text = L"Tic Tac Toe";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(116, 64);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(102, 48);
			this->textBox3->TabIndex = 12;
			this->textBox3->Text = L"Player:"+j+"\r\nComputer:"+k;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(224, 62);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(97, 50);
			this->button10->TabIndex = 13;
			this->button10->Text = L"Score Reset";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AntiqueWhite;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(334, 511);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Reset);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Form1";
			this->Text = L"TIC TAC TOE";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //if there is a place to play
				 //if(i<9){										//if there is a place to play
					 if(i%2==0){								//player's turn 
						 this->button1->Text="X";
						 this->button1->Enabled=false;
						 a[0][0]=1;
						 i++;
						 check();
					 }
					 if(w==0){							//Computer's turn
						 CompPlay();
						 check();
					 }
					 if(i%9==0 && w==0)this->textBox1->Text="Game Over";//if all places are filled and no player has one
				// }
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			// if(i<9){
					 if(i%2==0){								//if there is a place to play
						 this->button2->Text="X";
						 this->button2->Enabled=false;
						 a[0][1]=1;
						 i++;
						 check();
					 }
					 if(w==0){
						 CompPlay();
						 check();
					 }
					 if(i%9==0 && w==0)this->textBox1->Text="Game Over";
				// }
		 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		//	 if(i<9){
					 if(i%2==0){								//if there is a place to play
						 this->button3->Text="X";
						 this->button3->Enabled=false;
						 a[0][2]=1;
						 i++;
						 check();
					 }
					 if(w==0){
						 CompPlay();
					 	 check();
					 }
					 if(i%9==0 && w==0)this->textBox1->Text="Game Over";
			//	 }
		 }
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		//	 if(i<9){
					 if(i%2==0){								//if there is a place to play
						 this->button4->Text="X";
						 this->button4->Enabled=false;
						 a[1][0]=1;
						 i++;
						 check();
					 }
					 if(w==0){
						 CompPlay();
					 	 check();
					 }
					 if(i%9==0 && w==0)this->textBox1->Text="Game Over";
			//	 }
		 }
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		//	 if(i<9){
				if(i%2==0){										//if there is a place to play
						 this->button5->Text="X";
						 this->button5->Enabled=false;
						 a[1][1]=1;
						 i++;
						 check();
					 }
					 if(w==0){
						 CompPlay();
					 	 check();
					 }
					 if(i%9==0 && w==0)this->textBox1->Text="Game Over";
			//	 }
				 
		 }
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		//	 if(i<9){										//if there is a place to play
				if(i%2==0){
						 this->button6->Text="X";
						 this->button6->Enabled=false;
						 a[1][2]=1;
						 i++;
						 check();
					 }
					 if(w==0){
						 CompPlay();
					 	 check();
					 }
					 if(i%9==0 && w==0)this->textBox1->Text="Game Over";
				// }
		 }
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	//		 if(i<9){										//if there is a place to play
					 if(i%2==0){
						 this->button7->Text="X";
						 this->button7->Enabled=false;
						 a[2][0]=1;
						 i++;
						 check();
					 }
					 if(w==0){
						 CompPlay();
						 check();
					 }
					 if(i%9==0 && w==0)this->textBox1->Text="Game Over";
				// }
		 }
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	//		 if(i<9){											//if there is a place to play
					 if(i%2==0){
						 this->button8->Text="X";
						 this->button8->Enabled=false;
						 a[2][1]=1;
						 i++;
						 check();
					 }
					 if(w==0){
						 CompPlay();
					 	 check();
					 }
					 if(i%9==0 && w==0)this->textBox1->Text="Game Over";
			//	 }
		 }
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		//	 if(i<9){										//if there is a place to play
					 if(i%2==0){
						 this->button9->Text="X";
						 this->button9->Enabled=false;
						 a[2][2]=1;
						 i++;
						 check();
					 }
					 if(w==0){
						 CompPlay();
					 	 check();
					 }
					 if(i==9 && w==0)this->textBox1->Text="Game Over";
			//	 }
		 }
	private: System::Void check(){
		if(a[0][0]==1 && a[0][1]==1 && a[0][2]==1){
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button3->BackColor = System::Drawing::Color::Red;
			this->textBox1->Text="Player Wins";
				j++;
				this->button1->Enabled=false;
				this->button2->Enabled=false;
				this->button3->Enabled=false;
				this->button4->Enabled=false;
				this->button5->Enabled=false;
				this->button6->Enabled=false;
				this->button7->Enabled=false;
				this->button8->Enabled=false;
				this->button9->Enabled=false;
				w=1;
		}
		else if(a[1][0]==1 && a[1][1]==1 && a[1][2]==1){
				this->button4->BackColor = System::Drawing::Color::Red;
				this->button5->BackColor = System::Drawing::Color::Red;
				this->button6->BackColor = System::Drawing::Color::Red;
				this->textBox1->Text="Player Wins";
				j++;
				this->button1->Enabled=false;
				this->button2->Enabled=false;
				this->button3->Enabled=false;
				this->button4->Enabled=false;
				this->button5->Enabled=false;
				this->button6->Enabled=false;
				this->button7->Enabled=false;
				this->button8->Enabled=false;
				this->button9->Enabled=false;
				w=1;
		}
		else if(a[2][0]==1 && a[2][1]==1 && a[2][2]==1){
				this->button7->BackColor = System::Drawing::Color::Red;
				this->button8->BackColor = System::Drawing::Color::Red;
				this->button9->BackColor = System::Drawing::Color::Red;
				this->textBox1->Text="Player Wins";
				j++;
				this->button1->Enabled=false;
				this->button2->Enabled=false;
				this->button3->Enabled=false;
				this->button4->Enabled=false;
				this->button5->Enabled=false;
				this->button6->Enabled=false;
				this->button7->Enabled=false;
				this->button8->Enabled=false;
				this->button9->Enabled=false;
				w=1;
		}
		else if(a[0][0]==1 && a[1][0]==1 && a[2][0]==1){
				this->button1->BackColor = System::Drawing::Color::Red;
				this->button4->BackColor = System::Drawing::Color::Red;
				this->button7->BackColor = System::Drawing::Color::Red;
				this->textBox1->Text="Player Wins";
				j++;
				this->button1->Enabled=false;
				this->button2->Enabled=false;
				this->button3->Enabled=false;
				this->button4->Enabled=false;
				this->button5->Enabled=false;
				this->button6->Enabled=false;
				this->button7->Enabled=false;
				this->button8->Enabled=false;
				this->button9->Enabled=false;
				w=1;
		}
		else if(a[0][1]==1 && a[1][1]==1 && a[2][1]==1){
				this->button2->BackColor = System::Drawing::Color::Red;
				this->button5->BackColor = System::Drawing::Color::Red;
				this->button8->BackColor = System::Drawing::Color::Red;
				this->textBox1->Text="Player1 Wins";
				j++;
				this->button1->Enabled=false;
				this->button2->Enabled=false;
				this->button3->Enabled=false;
				this->button4->Enabled=false;
				this->button5->Enabled=false;
				this->button6->Enabled=false;
				this->button7->Enabled=false;
				this->button8->Enabled=false;
				this->button9->Enabled=false;
				w=1;
		}
		else if(a[0][2]==1 && a[1][2]==1 && a[2][2]==1){
				this->button3->BackColor = System::Drawing::Color::Red;
				this->button6->BackColor = System::Drawing::Color::Red;
				this->button9->BackColor = System::Drawing::Color::Red;
				this->textBox1->Text="Player1 Wins";
				j++;
				this->button1->Enabled=false;
				this->button2->Enabled=false;
				this->button3->Enabled=false;
				this->button4->Enabled=false;
				this->button5->Enabled=false;
				this->button6->Enabled=false;
				this->button7->Enabled=false;
				this->button8->Enabled=false;
				this->button9->Enabled=false;
				w=1;
		}
		else if(a[0][0]==1 && a[1][1]==1 && a[2][2]==1){
				this->button1->BackColor = System::Drawing::Color::Red;
				this->button5->BackColor = System::Drawing::Color::Red;
				this->button9->BackColor = System::Drawing::Color::Red;
				this->textBox1->Text="Player Wins";
				j++;
				this->button1->Enabled=false;
				this->button2->Enabled=false;
				this->button3->Enabled=false;
				this->button4->Enabled=false;
				this->button5->Enabled=false;
				this->button6->Enabled=false;
				this->button7->Enabled=false;
				this->button8->Enabled=false;
				this->button9->Enabled=false;
				w=1;
		}
		else if(a[0][2]==1 && a[1][1]==1 && a[2][0]==1){
				this->button3->BackColor = System::Drawing::Color::Red;
				this->button5->BackColor = System::Drawing::Color::Red;
				this->button7->BackColor = System::Drawing::Color::Red;
				this->textBox1->Text="Player Wins";
				j++;
				this->button1->Enabled=false;
				this->button2->Enabled=false;
				this->button3->Enabled=false;
				this->button4->Enabled=false;
				this->button5->Enabled=false;
				this->button6->Enabled=false;
				this->button7->Enabled=false;
				this->button8->Enabled=false;
				this->button9->Enabled=false;
				w=1;
		}
		else if(a[0][0]==2 && a[0][1]==2 && a[0][2]==2){
			this->button1->BackColor = System::Drawing::Color::Lime;
			this->button2->BackColor = System::Drawing::Color::Lime;
			this->button3->BackColor = System::Drawing::Color::Lime;
			this->textBox1->Text="Computer Wins";
				k++;
				this->button1->Enabled=false;
				this->button2->Enabled=false;
				this->button3->Enabled=false;
				this->button4->Enabled=false;
				this->button5->Enabled=false;
				this->button6->Enabled=false;
				this->button7->Enabled=false;
				this->button8->Enabled=false;
				this->button9->Enabled=false;
				w=1;
		}
		else if(a[1][0]==2 && a[1][1]==2 && a[1][2]==2){
			this->button4->BackColor = System::Drawing::Color::Lime;
			this->button5->BackColor = System::Drawing::Color::Lime;
			this->button6->BackColor = System::Drawing::Color::Lime;
			this->textBox1->Text="Computer Wins";
				k++;
				this->button1->Enabled=false;
				this->button2->Enabled=false;
				this->button3->Enabled=false;
				this->button4->Enabled=false;
				this->button5->Enabled=false;
				this->button6->Enabled=false;
				this->button7->Enabled=false;
				this->button8->Enabled=false;
				this->button9->Enabled=false;
				w=1;
		}
		else if(a[2][0]==2 && a[2][1]==2 && a[2][2]==2){
				this->button7->BackColor = System::Drawing::Color::Lime;
				this->button8->BackColor = System::Drawing::Color::Lime;
				this->button9->BackColor = System::Drawing::Color::Lime;
				this->textBox1->Text="Computer Wins";
				k++;
				this->button1->Enabled=false;
				this->button2->Enabled=false;
				this->button3->Enabled=false;
				this->button4->Enabled=false;
				this->button5->Enabled=false;
				this->button6->Enabled=false;
				this->button7->Enabled=false;
				this->button8->Enabled=false;
				this->button9->Enabled=false;
				w=1;
		}
		else if(a[0][0]==2 && a[1][0]==2 && a[2][0]==2){
				this->button1->BackColor = System::Drawing::Color::Lime;
				this->button4->BackColor = System::Drawing::Color::Lime;
				this->button7->BackColor = System::Drawing::Color::Lime;
				this->textBox1->Text="Computer Wins";
				k++;
				this->button1->Enabled=false;
				this->button2->Enabled=false;
				this->button3->Enabled=false;
				this->button4->Enabled=false;
				this->button5->Enabled=false;
				this->button6->Enabled=false;
				this->button7->Enabled=false;
				this->button8->Enabled=false;
				this->button9->Enabled=false;
				w=1;
		}
		else if(a[0][1]==2 && a[1][1]==2 && a[2][1]==2){
				this->button2->BackColor = System::Drawing::Color::Lime;
				this->button5->BackColor = System::Drawing::Color::Lime;
				this->button8->BackColor = System::Drawing::Color::Lime;
				this->textBox1->Text="Computer Wins";
				k++;
				this->button1->Enabled=false;
				this->button2->Enabled=false;
				this->button3->Enabled=false;
				this->button4->Enabled=false;
				this->button5->Enabled=false;
				this->button6->Enabled=false;
				this->button7->Enabled=false;
				this->button8->Enabled=false;
				this->button9->Enabled=false;
				w=1;
		}
		else if(a[0][2]==2 && a[1][2]==2 && a[2][2]==2){
				this->button3->BackColor = System::Drawing::Color::Lime;
				this->button6->BackColor = System::Drawing::Color::Lime;
				this->button9->BackColor = System::Drawing::Color::Lime;
				this->textBox1->Text="Player2 Wins";
				k++;
				this->button1->Enabled=false;
				this->button2->Enabled=false;
				this->button3->Enabled=false;
				this->button4->Enabled=false;
				this->button5->Enabled=false;
				this->button6->Enabled=false;
				this->button7->Enabled=false;
				this->button8->Enabled=false;
				this->button9->Enabled=false;
				w=1;
		}
		else if(a[0][0]==2 && a[1][1]==2 && a[2][2]==2){
				this->button1->BackColor = System::Drawing::Color::Lime;
				this->button5->BackColor = System::Drawing::Color::Lime;
				this->button9->BackColor = System::Drawing::Color::Lime;
				this->textBox1->Text="Player2 Wins";
				k++;
				this->button1->Enabled=false;
				this->button2->Enabled=false;
				this->button3->Enabled=false;
				this->button4->Enabled=false;
				this->button5->Enabled=false;
				this->button6->Enabled=false;
				this->button7->Enabled=false;
				this->button8->Enabled=false;
				this->button9->Enabled=false;
				w=1;
		}
		else if(a[0][2]==2 && a[1][1]==2 && a[2][0]==2){
				this->button3->BackColor = System::Drawing::Color::Lime;
				this->button5->BackColor = System::Drawing::Color::Lime;
				this->button7->BackColor = System::Drawing::Color::Lime;
				this->textBox1->Text="Computer Wins";
				k++;
				this->button1->Enabled=false;
				this->button2->Enabled=false;
				this->button3->Enabled=false;
				this->button4->Enabled=false;
				this->button5->Enabled=false;
				this->button6->Enabled=false;
				this->button7->Enabled=false;
				this->button8->Enabled=false;
				this->button9->Enabled=false;
				w=1;
		}
		this->textBox3->Text = L"Player:"+j+"\r\nComputer:"+k;
	}
	private: System::Void Reset_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->button1->Enabled=true;
			 this->button1->Text="";
			 this->button1->BackColor = System::Drawing::Color::LemonChiffon;
			 this->button2->Enabled=true;
			 this->button2->Text="";
			 this->button2->BackColor = System::Drawing::Color::LemonChiffon;
			 this->button3->Enabled=true;
			 this->button3->Text="";
			 this->button3->BackColor = System::Drawing::Color::LemonChiffon;
			 this->button4->Enabled=true;
			 this->button4->Text="";
			 this->button4->BackColor = System::Drawing::Color::LemonChiffon;
			 this->button5->Enabled=true;
			 this->button5->Text="";
			 this->button5->BackColor = System::Drawing::Color::LemonChiffon;
			 this->button6->Enabled=true;
			 this->button6->Text="";
			 this->button6->BackColor = System::Drawing::Color::LemonChiffon;
			 this->button7->Enabled=true;
			 this->button7->Text="";
			 this->button7->BackColor = System::Drawing::Color::LemonChiffon;
			 this->button8->Enabled=true;
			 this->button8->Text="";
			 this->button8->BackColor = System::Drawing::Color::LemonChiffon;
			 this->button9->Enabled=true;
			 this->button9->Text="";
			 this->button9->BackColor = System::Drawing::Color::LemonChiffon;
			 this->textBox1->Text = L"Single Player";
			 a[0][0]=a[0][1]=a[0][2]=a[1][0]=a[1][1]=a[1][2]=a[2][0]=a[2][1]=a[2][2]=0;
			 w=0;
			 if(i%9==0 && w==0)CompPlay();
		 }
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 j=0;
			 k=0;
			 this->textBox3->Text = L"Player:"+j+"\r\nComputer:"+k;
		 }
	private: System:: Void CompPlay(){
				 int l;
				 //Win Cases{
				 //Top left to Bottom Right
				 if(a[0][0]==2 && a[1][1]==2 && a[2][2]==0){
					 a[2][2]=2;
					this->button9->Text="O";
					this->button9->Enabled=false;
				 }
				 else if(a[0][0]==2 && a[2][2]==2 && a[1][1]==0){
					 a[1][1]=2;
					 this->button5->Text="O";
					 this->button5->Enabled=false;
				 }
				 else if(a[1][1]==2 && a[2][2]==2 && a[0][0]==0){
					 a[0][0]=2;
					 this->button1->Text="O";
					 this->button1->Enabled=false;
				 }
				 //Bottom left to Top Right
				 else if(a[0][2]==2 && a[1][1]==2 && a[2][0]==0){
					 a[2][0]=2;
					 this->button7->Text="O";
					 this->button7->Enabled=false;
				 }
				 else if(a[0][2]==2 && a[2][0]==2 && a[1][1]==0){
					 a[1][1]=2;
					 this->button5->Text="O";
					 this->button5->Enabled=false;
				 }
				 else if(a[1][1]==2 && a[2][0]==2 && a[0][2]==0){
					 a[0][2]=2;
					 this->button3->Text="O";
					 this->button3 ->Enabled=false;
				 }
				 //1st row
				 else if(a[0][0]==2 && a[0][1]==2 && a[0][2]==0){
					 a[0][2]=2;
					 this->button3->Text="O";
					 this->button3->Enabled=false;
				 }
				 else if(a[0][0]==2 && a[0][2]==2 && a[0][1]==0){
					 a[0][1]=2;
					 this->button2->Text="O";
					 this->button2->Enabled=false;
				 }
				 else if(a[0][1]==2 && a[0][2]==2 && a[0][0]==0){
					 a[0][0]=2;
					 this->button1->Text="O";
					 this->button1->Enabled=false;
				 }
				 //2nd row
				 else if(a[1][0]==2 && a[1][1]==2 && a[1][2]==0){
					 a[1][2]=2;
					 this->button6->Text="O";
					 this->button6->Enabled=false;
				 }
				 else if(a[1][0]==2 && a[1][2]==2 && a[1][1]==0){
					 a[1][1]=2;
					 this->button5->Text="O";
					 this->button5->Enabled=false;
				 }
				 else if(a[1][1]==2 && a[1][2]==2 && a[1][0]==0){
					 a[1][0]=2;
					 this->button4->Text="O";
					 this->button4->Enabled=false;
				 }
				 //3rd row
				 else if(a[2][0]==2 && a[2][1]==2 && a[2][2]==0){
					 a[2][2]=2;
					 this->button9->Text="O";
					 this->button9->Enabled=false;
				 }
				 else if(a[2][0]==2 && a[2][2]==2 && a[2][1]==0){
					 a[2][1]=2;
					 this->button8->Text="O";
					 this->button8->Enabled=false;
				 }
				 else if(a[2][1]==2 && a[2][2]==2 && a[2][0]==0){
					 a[2][0]=2;
					 this->button7->Text="O";
					 this->button7->Enabled=false;
				 }
				 //1st col
				 else if(a[0][0]==2 && a[1][0]==2 && a[2][0]==0){
					 a[2][0]=2;
					 this->button7->Text="O";
					 this->button7->Enabled=false;
				 }
				 else if(a[0][0]==2 && a[2][0]==2 && a[1][0]==0){
					 a[1][0]=2;
					 this->button4->Text="O";
					 this->button4->Enabled=false;
				 }
				 else if(a[1][0]==2 && a[2][0]==2 && a[0][0]==0){
					 a[0][0]=2;
					 this->button1->Text="O";
					 this->button1->Enabled=false;
				 }
				 //2nd col
				 else if(a[0][1]==2 && a[1][1]==2 && a[2][1]==0){
					 a[2][1]=2;
					 this->button8->Text="O";
					 this->button8->Enabled=false;
				 }
				 else if(a[0][1]==2 && a[2][1]==2 && a[1][1]==0){
					 a[1][1]=2;
					 this->button5->Text="O";
					 this->button5->Enabled=false;
				 }
				 else if(a[1][1]==2 && a[2][1]==2 && a[0][1]==0){
					 a[0][1]=2;
					 this->button2->Text="O";
					 this->button2->Enabled=false;
				 }
				 //3rd col
				 else if(a[0][2]==2 && a[1][2]==2 && a[2][2]==0){ 
					 a[2][2]=2;
					 this->button9->Text="O";
					 this->button9->Enabled=false;
				 }
				 else if(a[0][2]==2 && a[2][2]==2 && a[1][2]==0){ 
					 a[1][2]=2;
					 this->button6->Text="O";
					 this->button6->Enabled=false;
				 }
				 else if(a[1][2]==2 && a[2][2]==2 && a[0][2]==0){ 
					 a[0][2]=2;
					 this->button3->Text="O";
					 this->button3->Enabled=false;
				 }
				 //}
				 //Human Failure Cases{
				 //Top left to Bottom Right
				 else if(a[0][0]==1 && a[1][1]==1 && a[2][2]==0){
					 a[2][2]=2;
					this->button9->Text="O";
					this->button9->Enabled=false;
				 }
				 else if(a[0][0]==1 && a[2][2]==1 && a[1][1]==0){
					 a[1][1]=2;
					 this->button5->Text="O";
					 this->button5->Enabled=false;
				 }
				 else if(a[1][1]==1 && a[2][2]==1 && a[0][0]==0){
					 a[0][0]=2;
					 this->button1->Text="O";
					 this->button1->Enabled=false;
				 }
				 //Bottom left to Top Right
				 else if(a[0][2]==1 && a[1][1]==1 && a[2][0]==0){
					 a[2][0]=2;
					 this->button7->Text="O";
					 this->button7->Enabled=false;
				 }
				 else if(a[0][2]==1 && a[2][0]==1 && a[1][1]==0){
					 a[1][1]=2;
					 this->button5->Text="O";
					 this->button5->Enabled=false;
				 }
				 else if(a[1][1]==1 && a[2][0]==1 && a[2][0]==0){
					 a[0][0]=2;
					 this->button1->Text="O";
					 this->button1->Enabled=false;
				 }
				 //1st row
				 else if(a[0][0]==1 && a[0][1]==1 && a[0][2]==0){
					 a[0][2]=2;
					 this->button3->Text="O";
					 this->button3->Enabled=false;
				 }
				 else if(a[0][0]==1 && a[0][2]==1 && a[0][1]==0){
					 a[0][1]=2;
					 this->button2->Text="O";
					 this->button2->Enabled=false;
				 }
				 else if(a[0][1]==1 && a[0][2]==1 && a[0][0]==0){
					 a[0][0]=2;
					 this->button1->Text="O";
					 this->button1->Enabled=false;
				 }
				 //2nd row
				 else if(a[1][0]==1 && a[1][1]==1 && a[1][2]==0){
					 a[1][2]=2;
					 this->button6->Text="O";
					 this->button6->Enabled=false;
				 }
				 else if(a[1][0]==1 && a[1][2]==1 && a[1][1]==0){
					 a[1][1]=2;
					 this->button5->Text="O";
					 this->button5->Enabled=false;
				 }
				 else if(a[1][1]==1 && a[1][2]==1 && a[1][0]==0){
					 a[1][0]=2;
					 this->button4->Text="O";
					 this->button4->Enabled=false;
				 }
				 //3rd row
				 else if(a[2][0]==1 && a[2][1]==1 && a[2][2]==0){
					 a[2][2]=2;
					 this->button9->Text="O";
					 this->button9->Enabled=false;
				 }
				 else if(a[2][0]==1 && a[2][2]==1 && a[2][1]==0){
					 a[2][1]=2;
					 this->button8->Text="O";
					 this->button8->Enabled=false;
				 }
				 else if(a[2][1]==1 && a[2][2]==1 && a[2][0]==0){
					 a[2][0]=2;
					 this->button7->Text="O";
					 this->button7->Enabled=false;
				 }
				 //1st col
				 else if(a[0][0]==1 && a[1][0]==1 && a[2][0]==0){
					 a[2][0]=2;
					 this->button7->Text="O";
					 this->button7->Enabled=false;
				 }
				 else if(a[0][0]==1 && a[2][0]==1 && a[1][0]==0){
					 a[1][0]=2;
					 this->button4->Text="O";
					 this->button4->Enabled=false;
				 }
				 else if(a[1][0]==1 && a[2][0]==1 && a[0][0]==0){
					 a[0][0]=2;
					 this->button1->Text="O";
					 this->button1->Enabled=false;
				 }
				 //2nd col
				 else if(a[0][1]==1 && a[1][1]==1 && a[2][1]==0){
					 a[2][1]=2;
					 this->button8->Text="O";
					 this->button8->Enabled=false;
				 }
				 else if(a[0][1]==1 && a[2][1]==1 && a[1][1]==0){
					 a[1][1]=2;
					 this->button5->Text="O";
					 this->button5->Enabled=false;
				 }
				 else if(a[1][1]==1 && a[2][1]==1 && a[0][1]==0){
					 a[0][1]=2;
					 this->button2->Text="O";
					 this->button2->Enabled=false;
				 }
				 //3rd col
				 else if(a[0][2]==1 && a[1][2]==1 && a[2][2]==0){ 
					 a[2][2]=2;
					 this->button9->Text="O";
					 this->button9->Enabled=false;
				 }
				 else if(a[0][2]==1 && a[2][2]==1 && a[1][2]==0){ 
					 a[1][2]=2;
					 this->button6->Text="O";
					 this->button6->Enabled=false;
				 }
				 else if(a[1][2]==1 && a[2][2]==1 && a[0][2]==0){ 
					 a[0][2]=2;
					 this->button3->Text="O";
					 this->button3->Enabled=false;
				 }
				 //}
				 //
				 //Initial Cases{
				 //Top left
				 //
				 else if(a[0][0]==1 && a[2][2]==1 && a[1][1]==2){
					 l=rand()%4;
					 switch(l){
					 case 0:a[0][1]=2;
						 this->button2->Text="O";
						 this->button2->Enabled=false;
						 break;
					 case 1:a[1][0]=2;
						 this->button4->Text="O";
						 this->button4->Enabled=false;
						 break;
					 case 2:a[1][2]=2;
						 this->button6->Text="O";
						 this->button6->Enabled=false;
						 break;
					 case 3:a[2][1]=2;
						 this->button8->Text="O";
						 this->button8->Enabled=false;
						 break;
					 }
				 }
				 else if((a[0][0]==1 && (a[2][1]==1 || a[1][2]==1)) && a[1][1]==2 && a[2][2]==0){
					 a[2][2]=2;
					 this->button9->Text="O";
					 this->button9->Enabled=false;
				 }
				 //
				 //Top right
				 //
				 else if(a[0][2]==1 && a[2][0]==1 && a[1][1]==2){
					 l=rand()%4;
					 switch(l){
					 case 0:a[0][1]=2;
						 this->button2->Text="O";
						 this->button2->Enabled=false;
						 break;
					 case 1:a[1][0]=2;
						 this->button4->Text="O";
						 this->button4->Enabled=false;
						 break;
					 case 2:a[1][2]=2;
						 this->button6->Text="O";
						 this->button6->Enabled=false;
						 break;
					 case 3:a[2][1]=2;
						 this->button8->Text="O";
						 this->button8->Enabled=false;
						 break;
					 }
				 }
				 else if((a[0][2]==1 && (a[1][0]==1 || a[2][1]==1)) && a[1][1]==2 && a[2][0]==0){
					 a[2][0]=2;
					 this->button7->Text="O";
					 this->button7->Enabled=false;
				 }
				 //
				 //bottom left
				 //
				 else if(a[2][0]==1 && a[0][2]==1 && a[1][1]==2){
					 l=rand()%4;
					 switch(l){
					 case 0:a[0][1]=2;
						 this->button2->Text="O";
						 this->button2->Enabled=false;
						 break;
					 case 1:a[1][0]=2;
						 this->button4->Text="O";
						 this->button4->Enabled=false;
						 break;
					 case 2:a[1][2]=2;
						 this->button6->Text="O";
						 this->button6->Enabled=false;
						 break;
					 case 3:a[2][1]=2;
						 this->button8->Text="O";
						 this->button8->Enabled=false;
						 break;
					 }
				 }
				 //
				 //Bottom Right
				 //
				 else if(a[2][2]==1 && a[0][0]==1 && a[1][1]==2){
					 l=rand()%4;
					 switch(l){
					 case 0:a[0][1]=2;
						 this->button2->Text="O";
						 this->button2->Enabled=false;
						 break;
					 case 1:a[1][0]=2;
						 this->button4->Text="O";
						 this->button4->Enabled=false;
						 break;
					 case 2:a[1][2]=2;
						 this->button6->Text="O";
						 this->button6->Enabled=false;
						 break;
					 case 3:a[2][1]=2;
						 this->button8->Text="O";
						 this->button8->Enabled=false;
						 break;
					 }
				 }
				 else if((a[2][2]==1 && (a[0][1]==1 || a[1][0]==1)) && a[1][1]==2 && a[0][0]==0){
					 a[0][0]=2;
					 this->button1->Text="O";
					 this->button1->Enabled=false;
				 }
				 //
				 //top
				 //
				 else if((a[0][1]==1 && (a[2][0]==1 || a[2][2]==1)) && a[1][1]==2){
					 l=rand()%2;
					 switch(l){
					 case 0:if(a[0][0]==0){
						 a[0][0]=2;
						 this->button1->Text="O";
						 this->button1->Enabled=false;
						 break;
							}
							else{
								goto a;
							}
					 case 1:if(a[0][2]==0){
						 a[0][2]=2;
						 this->button3->Text="O";
						 this->button3->Enabled=false;
						 break;
							}
							else{
								goto a;
							}
					 }
				 }
				 else if(a[0][1]==1 && a[1][0]==1 && a[1][1]==2){
					 l=rand()%3;
					 switch(l){
					 case 0:a[0][0]=2;
						 this->button1->Text="O";
						 this->button1->Enabled=false;
						 break;
					 case 1:a[0][2]=2;
						 this->button3->Text="O";
						 this->button3->Enabled=false;
						 break;
					 case 2:a[2][0]=2;
						 this->button7->Text="O";
						 this->button7->Enabled=false;
						 break;
					 }
				 }
				 else if(a[0][1]==1 && a[1][2]==1 && a[1][1]==2){
					 l=rand()%3;
					 switch(l){
					 case 0:a[0][0]=2;
						 this->button1->Text="O";
						 this->button1->Enabled=false;
						 break;
					 case 1:a[0][2]=2;
						 this->button3->Text="O";
						 this->button3->Enabled=false;
						 break;
					 case 2:a[2][2]=2;
						 this->button9->Text="O";
						 this->button9->Enabled=false;
						 break;
					 }
				}
				else if(a[0][1]==1 && a[2][1]==1 && a[1][1]==2){
					 l=rand()%2;
					 switch(l){
					 case 0:a[1][0]=2;
						 this->button4->Text="O";
						 this->button4->Enabled=false;
						 break;
					 case 1:a[1][2]=2;
						 this->button6->Text="O";
						 this->button6->Enabled=false;
						 break;
					 }
				}
				//
				//bottom
				//
				else if((a[2][1]==1 && (a[0][0]==1 || a[0][2]==1)) && a[1][1]==2){
					 l=rand()%2;
					 switch(l){
					 case 0:if(a[2][0]==0){
						 a[2][0]=2;
						 this->button7->Text="O";
						 this->button7->Enabled=false;
						 break;
							}
							else{
								goto a;
							}
					 case 1:if(a[2][2]==0){
						 a[2][2]=2;
						 this->button9->Text="O";
						 this->button9->Enabled=false;
						 break;
							}
							else{
								goto a;
							}
					 }
				 }
				 else if(a[2][1]==1 && a[1][0]==1 && a[1][1]==2){
					 l=rand()%3;
					 switch(l){
					 case 0:a[0][0]=2;
						 this->button1->Text="O";
						 this->button1->Enabled=false;
						 break;
					 case 1:a[2][0]=2;
						 this->button7->Text="O";
						 this->button7->Enabled=false;
						 break;
					 case 2:a[2][2]=2;
						 this->button9->Text="O";
						 this->button9->Enabled=false;
						 break;
					 }
				 }
				 else if(a[2][1]==1 && a[1][2]==1 && a[1][1]==2){
					 l=rand()%3;
					 switch(l){
					 case 0:a[0][2]=2;
						 this->button3->Text="O";
						 this->button3->Enabled=false;
						 break;
					 case 1:a[2][0]=2;
						 this->button7->Text="O";
						 this->button7->Enabled=false;
						 break;
					 case 2:a[2][2]=2;
						 this->button9->Text="O";
						 this->button9->Enabled=false;
						 break;
					 }
				}
				else if(a[2][1]==1 && a[0][1]==1 && a[1][1]==2){
					 l=rand()%2;
					 switch(l){
					 case 0:a[1][0]=2;
						 this->button4->Text="O";
						 break;
					 case 1:a[1][2]=2;
						 this->button6->Text="O";
						 break;
					 }
				}
				//
				//Left
				//
				else if((a[1][0]==1 && (a[0][2]==1 || a[2][2]==1)) && a[1][1]==2){
					 l=rand()%2;
					 switch(l){
					 case 0:if(a[0][0]==0){
						 a[0][0]=2;
						 this->button1->Text="O";
						 this->button1->Enabled=false;
						 break;
							}
							else{
								goto a;
							}
					 case 1:if(a[2][0]==0){
						 a[2][0]=2;
						 this->button7->Text="O";
						 this->button7->Enabled=false;
						 break;
							}
							else{
								goto a;
							}
					 }
				 }
				 else if(a[1][0]==1 && a[0][1]==1 && a[1][1]==2){
					 l=rand()%3;
					 switch(l){
					 case 0:a[0][0]=2;
						 this->button1->Text="O";
						 this->button1->Enabled=false;
						 break;
					 case 1:a[0][2]=2;
						 this->button3->Text="O";
						 this->button3->Enabled=false;
						 break;
					 case 2:a[2][0]=2;
						 this->button7->Text="O";
						 this->button7->Enabled=false;
						 break;
					 }
				 }
				 else if(a[1][0]==1 && a[2][1]==1 && a[1][1]==2){
					 l=rand()%3;
					 switch(l){
					 case 0:a[0][0]=2;
						 this->button1->Text="O";
						 this->button1->Enabled=false;
						 break;
					 case 1:a[2][0]=2;
						 this->button7->Text="O";
						 this->button7->Enabled=false;
						 break;
					 case 2:a[2][2]=2;
						 this->button9->Text="O";
						 this->button9->Enabled=false;
						 break;
					 }
				}
				else if(a[1][0]==1 && a[1][2]==1 && a[1][1]==2){
					 l=rand()%2;
					 switch(l){
					 case 0:a[0][1]=2;
						 this->button2->Text="O";
						 this->button2->Enabled=false;
						 break;
					 case 1:a[2][1]=2;
						 this->button8->Text="O";
						 this->button8->Enabled=false;
						 break;
					 }
				}
				//
				//Right
				//
				else if((a[1][2]==1 && (a[0][0]==1 || a[2][0]==1)) && a[1][1]==2){
					 l=rand()%2;
					 switch(l){
					 case 0:if(a[0][2]==0){
						 a[0][2]=2;
						 this->button3->Text="O";
						 this->button3->Enabled=false;
						 break;
							}
							else{
								goto a;
							}
					 case 1:if(a[2][0]==0){
						 a[2][0]=2;
						 this->button7->Text="O";
						 this->button7->Enabled=false;
						 break;
							}
							else{
								goto a;
							}
					 }
				 }
				 else if(a[1][2]==1 && a[0][1]==1 && a[1][1]==2){
					 l=rand()%3;
					 switch(l){
					 case 0:a[0][0]=2;
						 this->button1->Text="O";
						 this->button1->Enabled=false;
						 break;
					 case 1:a[0][2]=2;
						 this->button3->Text="O";
						 this->button3->Enabled=false;
						 break;
					 case 2:a[2][2]=2;
						 this->button9->Text="O";
						 this->button9->Enabled=false;
						 break;
					 }
				 }
				 else if(a[1][0]==1 && a[2][1]==1 && a[1][1]==2){
					 l=rand()%3;
					 switch(l){
					 case 0:a[0][2]=2;
						 this->button3->Text="O";
						 this->button3->Enabled=false;
						 break;
					 case 1:a[2][0]=2;
						 this->button7->Text="O";
						 this->button7->Enabled=false;
						 break;
					 case 2:a[2][2]=2;
						 this->button9->Text="O";
						 this->button9->Enabled=false;
						 break;
					 }
				}
				else if(a[1][0]==1 && a[1][2]==1 && a[1][1]==2){
					 l=rand()%2;
					 switch(l){
					 case 0:a[0][1]=2;this->button2->Text="O";
						 this->button2->Enabled=false;
						 break;
					 case 1:a[2][1]=2;this->button8->Text="O";
						 this->button8->Enabled=false;
						 break;
					 }
				}				
				//Center
				else if(a[1][1]==1 && a[0][0]==2 && a[2][2]==1){
					 l=rand()%2;
					 switch(l){
					 case 0:a[0][2]=2;
						 this->button3->Text="O";
						 this->button3->Enabled=false;
						 break;
					 case 1:a[2][0]=2;
						 this->button7->Text="O";
						 this->button7->Enabled=false;
						 break;
					 }
				 }
				 else if(a[1][1]==1 && a[0][2]==2 && a[2][0]==1){
					 l=rand()%2;
					 switch(l){
					 case 0:a[0][0]=2;
						 this->button1->Text="O";
						 this->button1->Enabled=false;
						 break;
					 case 1:a[2][2]=2;
						 this->button9->Text="O";
						 this->button9->Enabled=false;
						 break;
					 }
				 }
				 else if(a[1][1]==1 && a[2][0]==2 && a[0][2]==1){
					 l=rand()%2;
					 switch(l){
					 case 0:a[0][2]=2;
						 this->button3->Text="O";
						 this->button3->Enabled=false;
						 break;
					 case 1:a[2][0]=2;
						 this->button7->Text="O";
						 this->button7->Enabled=false;
						 break;
					 }
				 }
				 else if(a[1][1]==1 && a[2][2]==2 && a[0][0]==1){
					 l=rand()%2;
					 switch(l){
					 case 0:a[0][2]=2;
						 this->button3->Text="O";
						 this->button3->Enabled=false;
						 break;
					 case 1:a[2][0]=2;
						 this->button7->Text="O";
						 this->button7->Enabled=false;
						 break;
					 }
				 }
				 else if((a[2][0]==1 && (a[1][2]==1 || a[0][1]==1)) && a[1][1]==2 && a[0][2]==0){
					 a[0][2]=2;
					 this->button3->Text="O";
					 this->button3->Enabled=false;
				 }
				 else if(a[1][1]==1){
					 l=rand()%4;
					 switch(l){
					 case 0:a[0][0]=2;
						 this->button1->Text="O";
						 this->button1->Enabled=false;
						 break;
					 case 1:a[0][2]=2;
						 this->button3->Text="O";
						 this->button3->Enabled=false;
						 break;
					 case 2:a[2][0]=2;
						 this->button7->Text="O";
						 this->button7->Enabled=false;
						 break;
					 case 3:a[2][2]=2;
						 this->button9->Text="O";
						 this->button9->Enabled=false;
						 break;
					 }
				 }
				 else if(a[0][0]==1){
					 a[1][1]=2;
					 this->button5->Text="O";
					 this->button5->Enabled=false;
				 }
				 else if(a[0][2]==1){
					 a[1][1]=2;
					 this->button5->Text="O";
					 this->button5->Enabled=false;
				 }
				 else if(a[2][0]==1){
					 a[1][1]=2;
					 this->button5->Text="O";
					 this->button5->Enabled=false;
				 }
				 else if(a[2][2]==1){
					 a[1][1]=2;
					 this->button5->Text="O";
					 this->button5->Enabled=false;
				 }
				 else if(a[0][1]==1){
					 a[1][1]=2;
					 this->button5->Text="O";
					 this->button5->Enabled=false;
				 }
				 else if(a[1][0]==1){
					 a[1][1]=2;
					 this->button5->Text="O";
					 this->button5->Enabled=false;
				 }
				 else if(a[1][2]==1){
					 a[1][1]=2;
					 this->button5->Text="O";
					 this->button5->Enabled=false;
				 }
				 else if(a[2][1]==1){
					 a[1][1]=2;
					 this->button5->Text="O";
					 this->button5->Enabled=false;
				 }
				 else{
				a:	 l=rand()%9;
					   switch(l){
					 case 0:if(a[0][0]==0){
								a[0][0]=2;
								this->button1->Text="O";
								this->button1->Enabled=false;
							}
							else{
								goto a;
							}
							break;
					 case 1:if(a[0][1]==0){
								a[0][1]=2;
								this->button2->Text="O";
								this->button2->Enabled=false;
							}
							else{
								goto a;
							}
							break;
					 case 2:if(a[0][2]==0){
								a[0][2]=2;
								this->button3->Text="O";
								this->button3->Enabled=false;
							}
							else{
								goto a;
							}
							break;
					 case 3:if(a[1][0]==0){
								a[1][0]=2;
								this->button4->Text="O";
								this->button4->Enabled=false;
							}
							else{
								goto a;
							}
							break;
					 case 4:if(a[1][1]==0){
								a[1][1]=2;
								this->button5->Text="O";
								this->button5->Enabled=false;
							}
							else{
								goto a;
							}
							break;
					 case 5:if(a[1][2]==0){
								a[1][2]=2;
								this->button6->Text="O";
								this->button6->Enabled=false;
							}
							else{
								goto a;
							}
							break;
					 case 6:if(a[2][0]==0){
								a[2][0]=2;
								this->button7->Text="O";
								this->button7->Enabled=false;
							}
							else{
								goto a;
							}
							break;
					 case 7:if(a[2][1]==0){
								a[2][1]=2;
								this->button8->Text="O";
								this->button8->Enabled=false;
							}
							else{
								goto a;
							}
							break;
					 case 8:if(a[2][2]==0){
								a[2][2]=2;
								this->button9->Text="O";
								this->button9->Enabled=false;
							}
							else{
								goto a;
							}
							break;
					 }
				 }
				 i++;
		}
};
}