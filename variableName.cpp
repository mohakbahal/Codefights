bool variableName(std::string name) {
    regex r("[_a-zA-Z][_a-zA-Z0-9]*");
    return regex_match(name,r);
}