from emprestimo import (
    exportar_emprestimos_excel,
    realizar_emprestimo
)

from livro import (
    cadastrar_livro,
    exportar_livros_excel,
    listar_livros
)

from menu import (
    exibir_menu,
    ler_opcao,
    pausar
)

from usuario import cadastrar_usuario


def executar_sistema():
    """
    Controla o funcionamento principal do sistema.
    """
    while True:
        exibir_menu()
        opcao = ler_opcao()

        if opcao == "1":
            cadastrar_livro()
            pausar()

        elif opcao == "2":
            exportar_livros_excel()
            pausar()

        elif opcao == "3":
            cadastrar_usuario()
            pausar()

        elif opcao == "4":
            realizar_emprestimo()
            pausar()

        elif opcao == "5":
            exportar_emprestimos_excel()
            pausar()

        elif opcao == "6":
            listar_livros()
            pausar()

        elif opcao == "0":
            print("\nSistema encerrado.")
            print("Obrigado por utilizar o Sistema de Biblioteca.")
            break


if __name__ == "__main__":
    executar_sistema()

