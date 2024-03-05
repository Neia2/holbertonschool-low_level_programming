#!/bin/bash

# Percorre todos os arquivos no diretório atual e subdiretórios
for file in $(find . -type f); do
    # Verifica se o arquivo é um arquivo de texto
    if [[ $(file --mime-type -b "$file") == "text/plain" ]]; then
        # Substitui espaços por tabs no arquivo (3 espaços por tabulação)
        expand -t 3 "$file" > "$file.tmp"
        mv "$file.tmp" "$file"
        echo "Espaços removidos de $file"
    fi
done
