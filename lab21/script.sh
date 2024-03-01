#!/bin/bash
if [[ "$1" == "?" ]]; then
	echo "
Имя:		script
Версия:         1.0

Описание:
	Этот скрипт удаляет файлы с заданным расширением и заданным кол-вом дней,
	 в течение которых к файлу не обращались.

Подсказка:
	1-ый параметр отвечает за расширение (Пример: .txt)
	2-ой параметр отвечает за кол-во дней (Пример: 3)
"
	exit 0;
fi;

suffix="${1:-.txt}";
days=${2:-0};

if [[ $suffix == ?(-)+([[:digit:]]) ]]; then
	echo "Неправильно указано расширение файла"
	exit 1
fi;

if [[ $days == *"."* ]]; then
        echo "Неправильный указано кол-во дней"
	exit 1
fi;

mapfile -t files < <(find . -type f -atime $days | xargs ls -ld | grep -oE '[^ /]+$')

for file in "${files[@]}"; do
	answer=$(echo "$file" | grep -E "\\$suffix");
	if [[ $answer != "" ]]; then
		# rm $answer;
		echo $answer;
	fi;
done;
