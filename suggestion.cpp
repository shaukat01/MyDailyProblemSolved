vector<vector<string> > getSuggestions(TrieNode* root, string input) {

	//var/DS
	TrieNode* prev = root;
	vector<vector<string> > output;
	string prefix="";
	
	for(int i=0; i<input.length(); i++) {
		char lastch = input[i];

		int index = lastch - 'a';
		TrieNode* curr = prev->children[index];

		if(curr == NULL)
			break;
		else {
			//iske andar main saare suggestion store krke launga
			vector<string> temp;
			prefix.push_back(lastch);
			storeSuggestions(curr, temp, prefix);
			output.push_back(temp);
			prev = curr;
		}
	}
	return output;
}
