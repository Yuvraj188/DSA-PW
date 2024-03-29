char c;
cout<<"enter the character";
cin>>c;
// 'A'=>65 'a'=>97
if ((c >= 'A' && c<='Z' )||(c>='a'&& c <= 'z')) {
    cout << "alphabet";
}
else {
    cout << "Not an Alphabet";
}