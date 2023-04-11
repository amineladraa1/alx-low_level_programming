#include <string.h>
#include <stdlib.h>

/**
 * count_word - Entry point
 * 
 * Description: helper function to count the number of words in a string
 *
 * @s: string to evaluate
 *
 * Return: number of words
 */

char **strtow(char *str)
{
	int i, num_words, word_index, start_index, end_index;
	char **words;

	if (str == NULL || strlen(str) == 0)
	{
		return (NULL);
	}
	num_words = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i-1] == ' '))
		{
		num_words++;
		}
	}
	words = (char **)malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	words[num_words] = NULL;

	word_index = 0;
	
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			start_index = i;
			while (str[i] != ' ' && str[i] != '\0') {
			i++;
		}
		end_index = i;
		word_length = end_index - start_index;
		words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
			if (words[word_index] == NULL)
			{
				for (int j = 0; j < word_index; j++) {
				free(words[j]);
			}
			free(words);
			return (NULL);
			}
			strncpy(words[word_index], str + start_index, word_length);
			words[word_index][word_length] = '\0';
			word_index++;
		}
	}
	return (words);
}
