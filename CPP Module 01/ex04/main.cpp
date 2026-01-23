/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keak <keak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 20:08:15 by keak              #+#    #+#             */
/*   Updated: 2026/01/23 13:27:34 by keak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string replaceOccurrences(std::string content, const std::string& s1, const std::string& s2)
{
    if (s1.empty())
        return (content);

    std::string result;
    int startPos = 0;
    size_t foundPos = content.find(s1, startPos);
    while (foundPos != std::string::npos)
	{
        result.append(content, startPos, foundPos - startPos);
        result.append(s2);
        startPos = foundPos + s1.length();
        foundPos = content.find(s1, startPos);
    }
    result.append(content.substr(startPos));
    return (result);
}

int main(int argc, char **argv)
{
    if (argc != 4)
	{
        std::cerr << "Correct usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return (1);
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open())
	{
        std::cerr << "Error: Could not open input file '" << filename << "'" << std::endl;
        return 1;
    }

    std::string content;
    std::string line;
    while (std::getline(inputFile, line))
	{
        content += line;
        if (!inputFile.eof())
            content += "\n";
    }
    inputFile.close();
    std::string modifiedContent = replaceOccurrences(content, s1, s2);
    std::string outFilename = filename + ".replace";
    std::ofstream outputFile(outFilename.c_str());
    if (!outputFile.is_open())
	{
        std::cerr << "Error: Could not create output file '" << outFilename << "'" << std::endl;
        return (1);
    }
    outputFile << modifiedContent;
    outputFile.close();
    return 0;
}