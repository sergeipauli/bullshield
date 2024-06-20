#include "win_file.h"

void RenameFilesInDirectory(const std::string& directory) {
	WIN32_FIND_DATA file_data;
	HANDLE hFind = FindFirstFile((directory + "\\*").c_str(), &file_data);
	
	if (hFind == INVALID_HANDLE_VALUE) {
		std::cerr << "Incorrect directory" << std::endl;
		
		return;
	}
	
	for (int file_index = 0; FindNextFile(hFind, &file_data) != 0;) {
		if (!(file_data.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) {
			std::string new_name, old_name = file_data.cFileName;
			std::replace(new_name.begin(), new_name.end(), ' ', '_');
			
			if (old_name != new_name) {
				if (MoveFile((directory + "\\" + old_name).c_str(), (directory + "\\" + new_name).c_str()) == 0) {
					std::cerr << "Rename error: " << old_name << std::endl;
				}
			}
		}
	}
	
	FindClose(hFind);
}