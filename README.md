# GTK+-3.0 e Glade

## Usando o GTK+ no Broadway

> O backend GDK Broadway fornece suporte para exibir aplicativos GTK + em um navegador da Web, usando o __HTML5__ e os soquetes da web. Para executar seu aplicativo desta maneira, selecione o backend da Broadway configurando __GDK_BACKEND = broadway__. Em seguida, você pode fazer seu aplicativo aparecer em um navegador da Web apontando-o em http://127.0.0.1:8080. Observe que você precisa habilitar os soquetes da Web em seu navegador da Web.

> Você pode escolher uma porta diferente do padrão 8080 definindo a variável de ambiente __BROADWAY_DISPLAY__ para a porta que você deseja usar.

> Também é possível usar vários aplicativos GTK + na mesma janela do navegador da Web, usando o servidor Broadway, broadwayd, que acompanha o GTK +. Para usar broadwayd, inicie-o assim:

`broadwayd :5`

> Em seguida, aponte o navegador da web em http://127.0.0.1:8085. Inicie seus aplicativos como este:

`GDK_BACKEND=broadway BROADWAY_DISPLAY=:5 ./test`

### Variáveis de ambiente específicas da Broadway

> __BROADWAY_DISPLAY__. Especifica o número de exibição da Broadway. O display padrão é 0. O número de exibição determina a porta a ser usada ao conectar-se a um aplicativo Broadway através da seguinte fórmula:

`port = 8080 + display`
