//#include<iostream>
//#include <windows.h>
//#include<winnls.h>
//#include<fstream>
//#include<string>
//#include<string.h>
//using namespace std;
//
//static const std::string base64_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
//static inline bool is_base64(unsigned char c) {
//    return (isalnum(c) || (c == '+') || (c == '/'));
//}
//
//std::string base64_decode(std::string const& encoded_string) {
//    int in_len = encoded_string.size();
//    int i = 0;
//    int j = 0;
//    int in_ = 0;
//    unsigned char char_array_4[4], char_array_3[3];
//    std::string ret;
//   
//    while (in_len-- && ( encoded_string[in_] != '=') && is_base64(encoded_string[in_])) {
//        char_array_4[i++] = encoded_string[in_]; in_++;
//        if (i ==4) {
//            for (i = 0; i <4; i++)
//                char_array_4[i] = base64_chars.find(char_array_4[i]);
//           
//            char_array_3[0] = (char_array_4[0] << 2) + ((char_array_4[1] & 0x30) >> 4);
//            char_array_3[1] = ((char_array_4[1] & 0xf) << 4) + ((char_array_4[2] & 0x3c) >> 2);
//            char_array_3[2] = ((char_array_4[2] & 0x3) << 6) + char_array_4[3];
//           
//            for (i = 0; (i < 3); i++)
//                ret += char_array_3[i];
//            i = 0;
//        }
//    }
//   
//    if (i) {
//        for (j = i; j <4; j++)
//            char_array_4[j] = 0;
//       
//        for (j = 0; j <4; j++)
//            char_array_4[j] = base64_chars.find(char_array_4[j]);
//       
//        char_array_3[0] = (char_array_4[0] << 2) + ((char_array_4[1] & 0x30) >> 4);
//        char_array_3[1] = ((char_array_4[1] & 0xf) << 4) + ((char_array_4[2] & 0x3c) >> 2);
//        char_array_3[2] = ((char_array_4[2] & 0x3) << 6) + char_array_4[3];
//       
//        for (j = 0; (j < i - 1); j++) ret += char_array_3[j];
//    }
//   
//    return ret;
//}
//
//void main()
//{
//	ofstream ofile("d://eml.txt");
//
//	for(int i=0;i<4;i++)
//	{	
//		string d="d:\\"; 
//	    d+=char(i+49);
//		d+=".eml";
//ifstream ifile(d);
//if(ifile.good())
//{
//	int sign=1;
//	string s,sss;
//	while((!ifile.eof()))
//	{
//     ifile>>s;
//	 if((sign==2)&& (s.find_first_of(':')<s.length()) )
//		break;
//	if(sign==2)
//		sss+=s;
//	if(s=="Subject:")
//		sign=2;
//    }
//	if(sss.find("?B?")<sss.length())
//	{
//		int sign=1;
//		//string type;
//		string fuck=sss; 
//		string lsls;
//		while(fuck.find("?B?")<fuck.length())
//	 {
//		 
//		 string tm=fuck;
//		 //int sfront=tm.find("=?");
//	 int front=tm.find("?B?");
//	 int rear=tm.find("?=");
//	 if(sign){string type(tm,2,front-2) ;
//	 ofile<<i+1<<":"<<type<<" "; 
//	 sign=0; }
//	 string ml(tm,front+3,rear-front-3);
//	lsls+=ml;
//     string sl(tm,rear+2,tm.length()+1-rear-2);	 	 
//	fuck=sl;
//	 };
//	 //cout<<fuck<<endl;
//	 lsls+=fuck;
//	cout<<lsls<<endl;
//	 string lll=base64_decode(lsls);
//	// cout<<lll<<endl;
//	 ofile<<lll<<endl;
//	}
//	else
//		{ofile<<sss<<endl;
//	cout<<sss<<endl;}
//	}
//}
//ifile.close();
//	}
//}
//
//
//
////小bug
//
////search打印
////base64//
//
////模式串的读入















