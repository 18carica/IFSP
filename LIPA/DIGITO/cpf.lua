-- cpf.lua

function validaCPF(cpf)

  local digitos = {}
  local soma1, soma2 = 0, 0
  local dv1, dv2
  
  if cpf:len() ~= 11 or
    cpf == "00000000000" or
    cpf == "11111111111" or
    cpf == "22222222222" or
    cpf == "33333333333" or
    cpf == "44444444444" or
    cpf == "55555555555" or
    cpf == "66666666666" or
    cpf == "77777777777" or
    cpf == "88888888888" or
    cpf == "99999999999" or
    cpf == "12345678909"
  then
    return false
  end

  for i = 1, 11 do
    digitos[i] = tonumber(string.sub(cpf, i, i))
  end
  
  for i = 1, 9 do
    soma1 = soma1 + digitos[i] * i
  end
 
  dv1 = soma1 % 11
  if dv1 == 10 then
    dv1 = 0
  end

  for i = 1, 10 do
    soma2 = soma2 + digitos[i] * (i - 1)
  end
 
  dv2 = soma2 % 11
  if dv2 == 10 then
    dv2 = 0
  end

  if dv1 == digitos[10] and dv2 == digitos[11] then
    return true
  else
    return false
  end
  
end

io.write("Informe CPF no formato 999.999.999-99: ")
cpf_cfmt = io.read()
cpf_sfmt = cpf_cfmt:gsub("%.", ""):gsub("-", "")
if validaCPF(cpf_sfmt) then
  print("CPF valido")
else
  print("CPF invalido")
end

-- string:len() = retorna o tamanho da string
-- string.sub(cadeia, índice_ini, índice_fim) = retorna uma sub-cadeia
-- string.gsub(busca, troca) = substitui certa ocorrência
