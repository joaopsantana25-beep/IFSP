def exibir_menu():
    """
    Exibe as opcoes disponiveis no sistema.
    """
    print("\n" + "=" * 55)
    print("SISTEMA DE BIBLIOTECA")
    print("=" * 55)
    print("1 - Cadastrar livro")
    print("2 - Exportar cadastro de livros")
    print("3 - Cadastrar usuario")
    print("4 - Realizar emprestimo")
    print("5 - Exportar cadastro de emprestimos")
    print("6 - Listar livros cadastrados")
    print("0 - Encerrar o programa")
    print("=" * 55)


def ler_opcao():
    """
    Le e valida a opcao informada pelo usuario.
    """
    opcoes_validas = {"0", "1", "2", "3", "4", "5", "6"}

    while True:
        opcao = input("Escolha uma opcao: ").strip()

        if opcao in opcoes_validas:
            return opcao

        print("Opcao invalida. Escolha uma opcao entre 0 e 6.")


def pausar():
    """
    Interrompe temporariamente a execucao ate que
    o usuario pressione Enter.
    """
    input("\nPressione Enter para continuar...")

