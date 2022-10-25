vector<int> num;
    vector<char> alpha;
    for (int i = 0; i <4; ++i) {
        num.push_back(i + 1);
        alpha.push_back(char(i+65));
    }
    for (int i = 0; i < 4; ++i){
        cout << alpha[i] << endl;
        cout << num[i] << endl;
    }
