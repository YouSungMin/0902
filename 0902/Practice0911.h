#pragma once

extern int MazeWidth;
extern int MazeHeight;
extern int** Maze;


/// <summary>
/// �� ������ �д� �Լ�
/// </summary>
/// <param name="MapFileName">�� ���� �̸�</param>
/// <param name="OutDataString">��¿�, ���Ͽ��� ���� �ؽ�Ʈ�� �����ش�</param>
/// <returns>������ �дµ� �����ϸ� true, �����ϸ� false</returns>
bool ReadMapFile(const char* MapFileName, std::string& OutDataString);

/// <summary>
/// string�� �޾Ƽ� Maze�� ä��µ� �ʿ��� �����͸� �Ľ��ϴ� �Լ�
/// </summary>
/// <param name="OutDataString"> �ҽ��� ���ڿ�</param>
/// <returns>true : �Ľ̼��� false : �ʵ����Ͱ� �߸��Ȱ��</returns>
bool ParseMapData(std::string& OutDataString);

/// <summary>
/// Source���� �߰ߵǴ� ù���� �����ϴ� �Լ�
/// </summary>
/// <param name="Source"> \n�� ã�� ���� ������</param>
/// <returns>Source ù���� �ּ�</returns>
char* GetLine(char** InOutSource);

/// <summary>
/// ���ڿ� ������ �Ľ��ϴ� �Լ�
/// </summary>
/// <param name="LineData">�Ľ��� ���ڿ�</param>
/// <param name="Size">����� ����� �迭�� ũ��</param>
/// <param name="OutArray">����� ����� �迭</param>
void ParseLineData(const char* LineData, int ArraySize,  int* OutArray);

/// <summary>
/// �̷� ������ �ʱ�ȭ �ϴ� �Լ�
/// </summary>
void InitializeMaze();

/// <summary>
/// �̷� ������ �����ϴ� �Լ�(�Ҵ�� �޸𸮸� �����ϴ� �Լ�)
/// </summary>
void ClearMaze();

void Day0911();