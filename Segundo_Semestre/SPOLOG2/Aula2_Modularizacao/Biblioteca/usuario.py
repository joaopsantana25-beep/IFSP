import json
import os


PASTA_DADOS = "dados"
ARQUIVO_USUARIOS = os.path.join(PASTA_DADOS, "usuarios.json")


class Usuario:
    """
    Representa um usuario da biblioteca.
    """

    def __init__(self, codigo, nome, email, telefone):
        self.codigo = codigo
        self.nome = nome
        self.email = email
        self.telefone = telefone

    def para_dicionario(self):
        """
        Converte o objeto Usuario em um dicionario.
        """
        return {
            "codigo": self.codigo,
            "nome": self.nome,
            "email": self.email,
            "telefone": self.telefone
        }


def preparar_armazenamento_usuarios():
    """
    Cria a pasta dados e o arquivo usuarios.json,
    caso ainda nao existam.
    """
    os.makedirs(PASTA_DADOS, exist_ok=True)

    if not os.path.exists(ARQUIVO_USUARIOS):
        with open(ARQUIVO_USUARIOS, "w", encoding="utf-8") as arquivo:
            json.dump([], arquivo, ensure_ascii=False, indent=4)


def carregar_usuarios():
    """
    Le os usuarios armazenados no arquivo JSON.
    """
    preparar_armazenamento_usuarios()

    try:
        with open(ARQUIVO_USUARIOS, "r", encoding="utf-8") as arquivo:
            return json.load(arquivo)
    except (json.JSONDecodeError, FileNotFoundError):
        return []


def salvar_usuarios(usuarios):
    """
    Salva os usuarios no arquivo JSON.
    """
    preparar_armazenamento_usuarios()

    with open(ARQUIVO_USUARIOS, "w", encoding="utf-8") as arquivo:
        json.dump(usuarios, arquivo, ensure_ascii=False, indent=4)


def gerar_proximo_codigo_usuario():
    """
    Gera o proximo codigo de usuario.
    """
    usuarios = carregar_usuarios()

    if not usuarios:
        return 1

    maior_codigo = max(usuario["codigo"] for usuario in usuarios)
    return maior_codigo + 1


def email_ja_cadastrado(email):
    """
    Verifica se determinado e-mail ja esta cadastrado.
    """
    usuarios = carregar_usuarios()

    for usuario in usuarios:
        if usuario["email"].lower() == email.lower():
            return True

    return False


def cadastrar_usuario():
    """
    Solicita os dados e cadastra um usuario.
    """
    print("\n" + "=" * 50)
    print("CADASTRO DE USUARIO")
    print("=" * 50)

    nome = input("Nome completo: ").strip()
    email = input("E-mail: ").strip()
    telefone = input("Telefone: ").strip()

    if not nome or not email or not telefone:
        print("\nNome, e-mail e telefone sao obrigatorios.")
        return

    if "@" not in email or "." not in email:
        print("\nInforme um endereco de e-mail valido.")
        return

    if email_ja_cadastrado(email):
        print("\nJa existe um usuario cadastrado com esse e-mail.")
        return

    codigo = gerar_proximo_codigo_usuario()
    usuarios = carregar_usuarios()

    novo_usuario = Usuario(
        codigo=codigo,
        nome=nome,
        email=email,
        telefone=telefone
    )

    usuarios.append(novo_usuario.para_dicionario())
    salvar_usuarios(usuarios)

    print("\nUsuario cadastrado com sucesso.")
    print(f"Codigo gerado: {codigo}")


def buscar_usuario_por_codigo(codigo):
    """
    Procura um usuario utilizando seu codigo.
    """
    usuarios = carregar_usuarios()

    for usuario in usuarios:
        if usuario["codigo"] == codigo:
            return usuario

    return None


def listar_usuarios():
    """
    Exibe os usuarios cadastrados.
    Esta funcao auxilia na realizacao de emprestimos.
    """
    usuarios = carregar_usuarios()

    print("\n" + "=" * 75)
    print("USUARIOS CADASTRADOS")
    print("=" * 75)

    if not usuarios:
        print("Nenhum usuario cadastrado.")
        return

    print(
        f"{'CODIGO':<8}"
        f"{'NOME':<30}"
        f"{'E-MAIL':<35}"
    )

    print("-" * 75)

    for usuario in usuarios:
        print(
            f"{usuario['codigo']:<8}"
            f"{usuario['nome'][:28]:<30}"
            f"{usuario['email'][:33]:<35}"
        )

