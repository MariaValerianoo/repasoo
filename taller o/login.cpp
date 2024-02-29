void registrarUsuario(string& numeroUsuario, string& contrasena) {
    cout<<"Vamos a hacer tu registro recuerda que tu numero de telefono no debe exceder los 10 caracteres"<<endl;
    cout << "Ingrese su numero de telefono: ";
    cin>>numeroUsuario;
    while (numeroUsuario.length()!=10)
    {
        cout<<"No es correcto el numero vuelve a intentarlo"<<endl;
        cin>>numeroUsuario;
    }
    cout<<"El numero es valido, ahora ingresa la contraseña'\n recuerda que debe tener 4 digitos: ";
    cin>> contrasena;
    while (contrasena.length()!=4)
    {
        cout<<"No es correcta la contraseña vuelve a intentarlo: "<<endl;
        cin>>contrasena;
    }
    }
//creamos la funcion de verificar para hacer el inicio de sesion
bool verificarCredenciales(const string& numeroUsuario, const string& contrasena){
    string numeroUsuarioIngresado;
    string clave;
    int intentos=3;
    cout<<"Ingrese su numero de telefono: \n";
    cin>>numeroUsuarioIngresado;
    while (numeroUsuarioIngresado.length()!=10 || numeroUsuarioIngresado!=numeroUsuario)
    {
        cout<<"No es correcto el numero vuelve a intentarlo"<<endl;
        cin>>numeroUsuarioIngresado;
    }
    cout << "El numero es valido, ahora ingresa la contraseña\n recuerda que esta es de 4 digitos: ";
    cin >> clave;
    while (clave.length() != 4 || clave != contrasena) {
        cout << "No es correcta la contraseña vuelve a intentarlo: " << endl;
        cin >> clave;
        intentos--;
        if (intentos == 0) {
            return false;
        }
}
    return true;

}
