#include "../v3/rsa.h"

/*
     * Creates RSA signature. Returns 1 if signing process successful,
     * otherwise returns an appropriate negative error code.
     * 
     * key: EVP_PKEY object of private key (created by create_private_RSA method);
     * in: data to be signed;
     * inlen: size of data;
     * signature: if successful, contains base64 encoded signature of provided message;
     */
int RSA_sign(PRIVATE_KEY key, BYTES in, SIZE inlen, BASE64 *signature);

/*
     * Performs RSA encryption. Returns 1 if encryption process successful,
     * otherwise returns an appropriate negative error code.
     * 
     * in: data to be encrypted;
     * inlen: size in bytes of data to be encrypted;
     * out: if successful, contains base64 encoded encrypted data;
     * key: EVP_PKEY object of public key (create_public_RSA); 
     */
int RSA_encrypt(BYTES in, SIZE inlen, BASE64 *out, PUBLIC_KEY key);

/*
     * Performs RSA decryption. Returns 1 if decryption successful,
     * otherwise returns an appropriate negative error code.
     * 
     * in: base64 encoded data to be decrypted;
     * out: if successful, contains decrypted data;
     * outlen: length of decrypted data;
     * key: EVP_PKEY object of private key (create_private_RSA);
     */
int RSA_decrypt(BASE64 in, BYTES *out, SIZE &outlen, PRIVATE_KEY key);