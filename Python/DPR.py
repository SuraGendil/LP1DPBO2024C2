class DPR:
    __name = ""
    __partai = ""
    __jabatan = ""
    __komisi = ""
    

    def __init__(self, name = "", partai = "", jabatan = "", komisi = ""):
        self.__name = name
        self.__partai = partai
        self.__jabatan = jabatan
        self.__komisi = komisi

    # Untuk Get dan Set pada nama
    def get_name(self):
        return self.__name
    
    def set_name(self, name):
        self.__name = name

    # Untuk Get dan Set Pada partai
    def get_partai(self):
        return self.__partai

    def set_partai(self, partai):
        self.__partai = partai

    # Untuk Get dan Set Pada jabatan
    def get_jabatan(self):
        return self.__jabatan

    def set_jabatan(self, jabatan):
        self.__jabatan = jabatan

    # Untuk Get dan Set Pada komisi
    def get_komisi(self):
        return self.__komisi

    def set_komisi(self, komisi):
        self.__komisi = komisi


