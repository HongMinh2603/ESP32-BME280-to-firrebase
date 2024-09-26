/* Automatically generated by generate_psa_constant.py. DO NOT EDIT. */

static const char *psa_strerror(psa_status_t status)
{
    switch (status) {
    case PSA_ERROR_ALREADY_EXISTS: return "PSA_ERROR_ALREADY_EXISTS";
    case PSA_ERROR_BAD_STATE: return "PSA_ERROR_BAD_STATE";
    case PSA_ERROR_BUFFER_TOO_SMALL: return "PSA_ERROR_BUFFER_TOO_SMALL";
    case PSA_ERROR_COMMUNICATION_FAILURE: return "PSA_ERROR_COMMUNICATION_FAILURE";
    case PSA_ERROR_CORRUPTION_DETECTED: return "PSA_ERROR_CORRUPTION_DETECTED";
    case PSA_ERROR_DATA_CORRUPT: return "PSA_ERROR_DATA_CORRUPT";
    case PSA_ERROR_DATA_INVALID: return "PSA_ERROR_DATA_INVALID";
    case PSA_ERROR_DOES_NOT_EXIST: return "PSA_ERROR_DOES_NOT_EXIST";
    case PSA_ERROR_GENERIC_ERROR: return "PSA_ERROR_GENERIC_ERROR";
    case PSA_ERROR_HARDWARE_FAILURE: return "PSA_ERROR_HARDWARE_FAILURE";
    case PSA_ERROR_INSUFFICIENT_DATA: return "PSA_ERROR_INSUFFICIENT_DATA";
    case PSA_ERROR_INSUFFICIENT_ENTROPY: return "PSA_ERROR_INSUFFICIENT_ENTROPY";
    case PSA_ERROR_INSUFFICIENT_MEMORY: return "PSA_ERROR_INSUFFICIENT_MEMORY";
    case PSA_ERROR_INSUFFICIENT_STORAGE: return "PSA_ERROR_INSUFFICIENT_STORAGE";
    case PSA_ERROR_INVALID_ARGUMENT: return "PSA_ERROR_INVALID_ARGUMENT";
    case PSA_ERROR_INVALID_HANDLE: return "PSA_ERROR_INVALID_HANDLE";
    case PSA_ERROR_INVALID_PADDING: return "PSA_ERROR_INVALID_PADDING";
    case PSA_ERROR_INVALID_SIGNATURE: return "PSA_ERROR_INVALID_SIGNATURE";
    case PSA_ERROR_NOT_PERMITTED: return "PSA_ERROR_NOT_PERMITTED";
    case PSA_ERROR_NOT_SUPPORTED: return "PSA_ERROR_NOT_SUPPORTED";
    case PSA_ERROR_STORAGE_FAILURE: return "PSA_ERROR_STORAGE_FAILURE";
    case PSA_SUCCESS: return "PSA_SUCCESS";
    default: return NULL;
    }
}

static const char *psa_ecc_family_name(psa_ecc_family_t curve)
{
    switch (curve) {
    case PSA_ECC_FAMILY_BRAINPOOL_P_R1: return "PSA_ECC_FAMILY_BRAINPOOL_P_R1";
    case PSA_ECC_FAMILY_MONTGOMERY: return "PSA_ECC_FAMILY_MONTGOMERY";
    case PSA_ECC_FAMILY_SECP_K1: return "PSA_ECC_FAMILY_SECP_K1";
    case PSA_ECC_FAMILY_SECP_R1: return "PSA_ECC_FAMILY_SECP_R1";
    case PSA_ECC_FAMILY_SECP_R2: return "PSA_ECC_FAMILY_SECP_R2";
    case PSA_ECC_FAMILY_SECT_K1: return "PSA_ECC_FAMILY_SECT_K1";
    case PSA_ECC_FAMILY_SECT_R1: return "PSA_ECC_FAMILY_SECT_R1";
    case PSA_ECC_FAMILY_SECT_R2: return "PSA_ECC_FAMILY_SECT_R2";
    case PSA_ECC_FAMILY_TWISTED_EDWARDS: return "PSA_ECC_FAMILY_TWISTED_EDWARDS";
    default: return NULL;
    }
}

static const char *psa_dh_family_name(psa_dh_family_t group)
{
    switch (group) {
    case PSA_DH_FAMILY_CUSTOM: return "PSA_DH_FAMILY_CUSTOM";
    case PSA_DH_FAMILY_RFC7919: return "PSA_DH_FAMILY_RFC7919";
    default: return NULL;
    }
}

static const char *psa_hash_algorithm_name(psa_algorithm_t hash_alg)
{
    switch (hash_alg) {
    case PSA_ALG_ANY_HASH: return "PSA_ALG_ANY_HASH";
    case PSA_ALG_CATEGORY_HASH: return "PSA_ALG_CATEGORY_HASH";
    case PSA_ALG_MD5: return "PSA_ALG_MD5";
    case PSA_ALG_RIPEMD160: return "PSA_ALG_RIPEMD160";
    case PSA_ALG_SHA3_224: return "PSA_ALG_SHA3_224";
    case PSA_ALG_SHA3_256: return "PSA_ALG_SHA3_256";
    case PSA_ALG_SHA3_384: return "PSA_ALG_SHA3_384";
    case PSA_ALG_SHA3_512: return "PSA_ALG_SHA3_512";
    case PSA_ALG_SHAKE256_512: return "PSA_ALG_SHAKE256_512";
    case PSA_ALG_SHA_1: return "PSA_ALG_SHA_1";
    case PSA_ALG_SHA_224: return "PSA_ALG_SHA_224";
    case PSA_ALG_SHA_256: return "PSA_ALG_SHA_256";
    case PSA_ALG_SHA_384: return "PSA_ALG_SHA_384";
    case PSA_ALG_SHA_512: return "PSA_ALG_SHA_512";
    case PSA_ALG_SHA_512_224: return "PSA_ALG_SHA_512_224";
    case PSA_ALG_SHA_512_256: return "PSA_ALG_SHA_512_256";
    default: return NULL;
    }
}

static const char *psa_ka_algorithm_name(psa_algorithm_t ka_alg)
{
    switch (ka_alg) {
    case PSA_ALG_CATEGORY_KEY_AGREEMENT: return "PSA_ALG_CATEGORY_KEY_AGREEMENT";
    case PSA_ALG_ECDH: return "PSA_ALG_ECDH";
    case PSA_ALG_FFDH: return "PSA_ALG_FFDH";
    default: return NULL;
    }
}

static int psa_snprint_key_type(char *buffer, size_t buffer_size,
                                psa_key_type_t type)
{
    size_t required_size = 0;
    switch (type) {
    case PSA_KEY_TYPE_AES: append(&buffer, buffer_size, &required_size, "PSA_KEY_TYPE_AES", 16); break;
    case PSA_KEY_TYPE_ARIA: append(&buffer, buffer_size, &required_size, "PSA_KEY_TYPE_ARIA", 17); break;
    case PSA_KEY_TYPE_CAMELLIA: append(&buffer, buffer_size, &required_size, "PSA_KEY_TYPE_CAMELLIA", 21); break;
    case PSA_KEY_TYPE_CATEGORY_FLAG_PAIR: append(&buffer, buffer_size, &required_size, "PSA_KEY_TYPE_CATEGORY_FLAG_PAIR", 31); break;
    case PSA_KEY_TYPE_CATEGORY_KEY_PAIR: append(&buffer, buffer_size, &required_size, "PSA_KEY_TYPE_CATEGORY_KEY_PAIR", 30); break;
    case PSA_KEY_TYPE_CATEGORY_PUBLIC_KEY: append(&buffer, buffer_size, &required_size, "PSA_KEY_TYPE_CATEGORY_PUBLIC_KEY", 32); break;
    case PSA_KEY_TYPE_CATEGORY_RAW: append(&buffer, buffer_size, &required_size, "PSA_KEY_TYPE_CATEGORY_RAW", 25); break;
    case PSA_KEY_TYPE_CATEGORY_SYMMETRIC: append(&buffer, buffer_size, &required_size, "PSA_KEY_TYPE_CATEGORY_SYMMETRIC", 31); break;
    case PSA_KEY_TYPE_CHACHA20: append(&buffer, buffer_size, &required_size, "PSA_KEY_TYPE_CHACHA20", 21); break;
    case PSA_KEY_TYPE_DERIVE: append(&buffer, buffer_size, &required_size, "PSA_KEY_TYPE_DERIVE", 19); break;
    case PSA_KEY_TYPE_DES: append(&buffer, buffer_size, &required_size, "PSA_KEY_TYPE_DES", 16); break;
    case PSA_KEY_TYPE_DH_KEY_PAIR_BASE: append(&buffer, buffer_size, &required_size, "PSA_KEY_TYPE_DH_KEY_PAIR_BASE", 29); break;
    case PSA_KEY_TYPE_DH_PUBLIC_KEY_BASE: append(&buffer, buffer_size, &required_size, "PSA_KEY_TYPE_DH_PUBLIC_KEY_BASE", 31); break;
    case PSA_KEY_TYPE_DSA_KEY_PAIR: append(&buffer, buffer_size, &required_size, "PSA_KEY_TYPE_DSA_KEY_PAIR", 25); break;
    case PSA_KEY_TYPE_DSA_PUBLIC_KEY: append(&buffer, buffer_size, &required_size, "PSA_KEY_TYPE_DSA_PUBLIC_KEY", 27); break;
    case PSA_KEY_TYPE_ECC_KEY_PAIR_BASE: append(&buffer, buffer_size, &required_size, "PSA_KEY_TYPE_ECC_KEY_PAIR_BASE", 30); break;
    case PSA_KEY_TYPE_ECC_PUBLIC_KEY_BASE: append(&buffer, buffer_size, &required_size, "PSA_KEY_TYPE_ECC_PUBLIC_KEY_BASE", 32); break;
    case PSA_KEY_TYPE_HMAC: append(&buffer, buffer_size, &required_size, "PSA_KEY_TYPE_HMAC", 17); break;
    case PSA_KEY_TYPE_NONE: append(&buffer, buffer_size, &required_size, "PSA_KEY_TYPE_NONE", 17); break;
    case PSA_KEY_TYPE_PASSWORD: append(&buffer, buffer_size, &required_size, "PSA_KEY_TYPE_PASSWORD", 21); break;
    case PSA_KEY_TYPE_PASSWORD_HASH: append(&buffer, buffer_size, &required_size, "PSA_KEY_TYPE_PASSWORD_HASH", 26); break;
    case PSA_KEY_TYPE_PEPPER: append(&buffer, buffer_size, &required_size, "PSA_KEY_TYPE_PEPPER", 19); break;
    case PSA_KEY_TYPE_RAW_DATA: append(&buffer, buffer_size, &required_size, "PSA_KEY_TYPE_RAW_DATA", 21); break;
    case PSA_KEY_TYPE_RSA_KEY_PAIR: append(&buffer, buffer_size, &required_size, "PSA_KEY_TYPE_RSA_KEY_PAIR", 25); break;
    case PSA_KEY_TYPE_RSA_PUBLIC_KEY: append(&buffer, buffer_size, &required_size, "PSA_KEY_TYPE_RSA_PUBLIC_KEY", 27); break;
    default:
        if (PSA_KEY_TYPE_IS_ECC_KEY_PAIR(type)) {
            append_with_curve(&buffer, buffer_size, &required_size,
                              "PSA_KEY_TYPE_ECC_KEY_PAIR", 25,
                              PSA_KEY_TYPE_ECC_GET_FAMILY(type));
        } else if (PSA_KEY_TYPE_IS_ECC_PUBLIC_KEY(type)) {
            append_with_curve(&buffer, buffer_size, &required_size,
                              "PSA_KEY_TYPE_ECC_PUBLIC_KEY", 27,
                              PSA_KEY_TYPE_ECC_GET_FAMILY(type));
        } else if (PSA_KEY_TYPE_IS_DH_KEY_PAIR(type)) {
            append_with_group(&buffer, buffer_size, &required_size,
                              "PSA_KEY_TYPE_DH_KEY_PAIR", 24,
                              PSA_KEY_TYPE_DH_GET_FAMILY(type));
        } else if (PSA_KEY_TYPE_IS_DH_PUBLIC_KEY(type)) {
            append_with_group(&buffer, buffer_size, &required_size,
                              "PSA_KEY_TYPE_DH_PUBLIC_KEY", 26,
                              PSA_KEY_TYPE_DH_GET_FAMILY(type));
        } else {
            return snprintf(buffer, buffer_size,
                            "0x%04x", (unsigned) type);
        }
        break;
    }
    buffer[0] = 0;
    return (int) required_size;
}

#define NO_LENGTH_MODIFIER 0xfffffffflu
static int psa_snprint_algorithm(char *buffer, size_t buffer_size,
                                 psa_algorithm_t alg)
{
    size_t required_size = 0;
    psa_algorithm_t core_alg = alg;
    unsigned long length_modifier = NO_LENGTH_MODIFIER;
    if (PSA_ALG_IS_MAC(alg)) {
        core_alg = PSA_ALG_TRUNCATED_MAC(alg, 0);
        if (alg & PSA_ALG_MAC_AT_LEAST_THIS_LENGTH_FLAG) {
            append(&buffer, buffer_size, &required_size,
                   "PSA_ALG_AT_LEAST_THIS_LENGTH_MAC(", 33);
            length_modifier = PSA_MAC_TRUNCATED_LENGTH(alg);
        } else if (core_alg != alg) {
            append(&buffer, buffer_size, &required_size,
                   "PSA_ALG_TRUNCATED_MAC(", 22);
            length_modifier = PSA_MAC_TRUNCATED_LENGTH(alg);
        }
    } else if (PSA_ALG_IS_AEAD(alg)) {
        core_alg = PSA_ALG_AEAD_WITH_DEFAULT_LENGTH_TAG(alg);
        if (core_alg == 0) {
            /* For unknown AEAD algorithms, there is no "default tag length". */
            core_alg = alg;
        } else if (alg & PSA_ALG_AEAD_AT_LEAST_THIS_LENGTH_FLAG) {
            append(&buffer, buffer_size, &required_size,
                   "PSA_ALG_AEAD_WITH_AT_LEAST_THIS_LENGTH_TAG(", 43);
            length_modifier = PSA_ALG_AEAD_GET_TAG_LENGTH(alg);
        } else if (core_alg != alg) {
            append(&buffer, buffer_size, &required_size,
                   "PSA_ALG_AEAD_WITH_SHORTENED_TAG(", 32);
            length_modifier = PSA_ALG_AEAD_GET_TAG_LENGTH(alg);
        }
    } else if (PSA_ALG_IS_KEY_AGREEMENT(alg) &&
               !PSA_ALG_IS_RAW_KEY_AGREEMENT(alg)) {
        core_alg = PSA_ALG_KEY_AGREEMENT_GET_KDF(alg);
        append(&buffer, buffer_size, &required_size,
               "PSA_ALG_KEY_AGREEMENT(", 22);
        append_with_alg(&buffer, buffer_size, &required_size,
                        psa_ka_algorithm_name,
                        PSA_ALG_KEY_AGREEMENT_GET_BASE(alg));
        append(&buffer, buffer_size, &required_size, ", ", 2);
    }
    switch (core_alg) {
    case PSA_ALG_ANY_HASH: append(&buffer, buffer_size, &required_size, "PSA_ALG_ANY_HASH", 16); break;
    case PSA_ALG_CATEGORY_AEAD: append(&buffer, buffer_size, &required_size, "PSA_ALG_CATEGORY_AEAD", 21); break;
    case PSA_ALG_CATEGORY_ASYMMETRIC_ENCRYPTION: append(&buffer, buffer_size, &required_size, "PSA_ALG_CATEGORY_ASYMMETRIC_ENCRYPTION", 38); break;
    case PSA_ALG_CATEGORY_CIPHER: append(&buffer, buffer_size, &required_size, "PSA_ALG_CATEGORY_CIPHER", 23); break;
    case PSA_ALG_CATEGORY_HASH: append(&buffer, buffer_size, &required_size, "PSA_ALG_CATEGORY_HASH", 21); break;
    case PSA_ALG_CATEGORY_KEY_AGREEMENT: append(&buffer, buffer_size, &required_size, "PSA_ALG_CATEGORY_KEY_AGREEMENT", 30); break;
    case PSA_ALG_CATEGORY_KEY_DERIVATION: append(&buffer, buffer_size, &required_size, "PSA_ALG_CATEGORY_KEY_DERIVATION", 31); break;
    case PSA_ALG_CATEGORY_MAC: append(&buffer, buffer_size, &required_size, "PSA_ALG_CATEGORY_MAC", 20); break;
    case PSA_ALG_CATEGORY_PAKE: append(&buffer, buffer_size, &required_size, "PSA_ALG_CATEGORY_PAKE", 21); break;
    case PSA_ALG_CATEGORY_SIGN: append(&buffer, buffer_size, &required_size, "PSA_ALG_CATEGORY_SIGN", 21); break;
    case PSA_ALG_CBC_MAC: append(&buffer, buffer_size, &required_size, "PSA_ALG_CBC_MAC", 15); break;
    case PSA_ALG_CBC_NO_PADDING: append(&buffer, buffer_size, &required_size, "PSA_ALG_CBC_NO_PADDING", 22); break;
    case PSA_ALG_CBC_PKCS7: append(&buffer, buffer_size, &required_size, "PSA_ALG_CBC_PKCS7", 17); break;
    case PSA_ALG_CCM: append(&buffer, buffer_size, &required_size, "PSA_ALG_CCM", 11); break;
    case PSA_ALG_CCM_STAR_NO_TAG: append(&buffer, buffer_size, &required_size, "PSA_ALG_CCM_STAR_NO_TAG", 23); break;
    case PSA_ALG_CFB: append(&buffer, buffer_size, &required_size, "PSA_ALG_CFB", 11); break;
    case PSA_ALG_CHACHA20_POLY1305: append(&buffer, buffer_size, &required_size, "PSA_ALG_CHACHA20_POLY1305", 25); break;
    case PSA_ALG_CIPHER_MAC_BASE: append(&buffer, buffer_size, &required_size, "PSA_ALG_CIPHER_MAC_BASE", 23); break;
    case PSA_ALG_CMAC: append(&buffer, buffer_size, &required_size, "PSA_ALG_CMAC", 12); break;
    case PSA_ALG_CTR: append(&buffer, buffer_size, &required_size, "PSA_ALG_CTR", 11); break;
    case PSA_ALG_DETERMINISTIC_DSA_BASE: append(&buffer, buffer_size, &required_size, "PSA_ALG_DETERMINISTIC_DSA_BASE", 30); break;
    case PSA_ALG_DETERMINISTIC_ECDSA_BASE: append(&buffer, buffer_size, &required_size, "PSA_ALG_DETERMINISTIC_ECDSA_BASE", 32); break;
    case PSA_ALG_DSA_BASE: append(&buffer, buffer_size, &required_size, "PSA_ALG_DSA_BASE", 16); break;
    case PSA_ALG_ECB_NO_PADDING: append(&buffer, buffer_size, &required_size, "PSA_ALG_ECB_NO_PADDING", 22); break;
    case PSA_ALG_ECDH: append(&buffer, buffer_size, &required_size, "PSA_ALG_ECDH", 12); break;
    case PSA_ALG_ECDSA_ANY: append(&buffer, buffer_size, &required_size, "PSA_ALG_ECDSA_ANY", 17); break;
    case PSA_ALG_ED25519PH: append(&buffer, buffer_size, &required_size, "PSA_ALG_ED25519PH", 17); break;
    case PSA_ALG_ED448PH: append(&buffer, buffer_size, &required_size, "PSA_ALG_ED448PH", 15); break;
    case PSA_ALG_FFDH: append(&buffer, buffer_size, &required_size, "PSA_ALG_FFDH", 12); break;
    case PSA_ALG_GCM: append(&buffer, buffer_size, &required_size, "PSA_ALG_GCM", 11); break;
    case PSA_ALG_HASH_EDDSA_BASE: append(&buffer, buffer_size, &required_size, "PSA_ALG_HASH_EDDSA_BASE", 23); break;
    case PSA_ALG_HKDF_BASE: append(&buffer, buffer_size, &required_size, "PSA_ALG_HKDF_BASE", 17); break;
    case PSA_ALG_HKDF_EXPAND_BASE: append(&buffer, buffer_size, &required_size, "PSA_ALG_HKDF_EXPAND_BASE", 24); break;
    case PSA_ALG_HKDF_EXTRACT_BASE: append(&buffer, buffer_size, &required_size, "PSA_ALG_HKDF_EXTRACT_BASE", 25); break;
    case PSA_ALG_HMAC_BASE: append(&buffer, buffer_size, &required_size, "PSA_ALG_HMAC_BASE", 17); break;
    case PSA_ALG_JPAKE: append(&buffer, buffer_size, &required_size, "PSA_ALG_JPAKE", 13); break;
    case PSA_ALG_MD5: append(&buffer, buffer_size, &required_size, "PSA_ALG_MD5", 11); break;
    case PSA_ALG_NONE: append(&buffer, buffer_size, &required_size, "PSA_ALG_NONE", 12); break;
    case PSA_ALG_OFB: append(&buffer, buffer_size, &required_size, "PSA_ALG_OFB", 11); break;
    case PSA_ALG_PBKDF2_AES_CMAC_PRF_128: append(&buffer, buffer_size, &required_size, "PSA_ALG_PBKDF2_AES_CMAC_PRF_128", 31); break;
    case PSA_ALG_PBKDF2_HMAC_BASE: append(&buffer, buffer_size, &required_size, "PSA_ALG_PBKDF2_HMAC_BASE", 24); break;
    case PSA_ALG_PURE_EDDSA: append(&buffer, buffer_size, &required_size, "PSA_ALG_PURE_EDDSA", 18); break;
    case PSA_ALG_RIPEMD160: append(&buffer, buffer_size, &required_size, "PSA_ALG_RIPEMD160", 17); break;
    case PSA_ALG_RSA_OAEP_BASE: append(&buffer, buffer_size, &required_size, "PSA_ALG_RSA_OAEP_BASE", 21); break;
    case PSA_ALG_RSA_PKCS1V15_CRYPT: append(&buffer, buffer_size, &required_size, "PSA_ALG_RSA_PKCS1V15_CRYPT", 26); break;
    case PSA_ALG_RSA_PKCS1V15_SIGN_RAW: append(&buffer, buffer_size, &required_size, "PSA_ALG_RSA_PKCS1V15_SIGN_RAW", 29); break;
    case PSA_ALG_RSA_PSS_ANY_SALT_BASE: append(&buffer, buffer_size, &required_size, "PSA_ALG_RSA_PSS_ANY_SALT_BASE", 29); break;
    case PSA_ALG_RSA_PSS_BASE: append(&buffer, buffer_size, &required_size, "PSA_ALG_RSA_PSS_BASE", 20); break;
    case PSA_ALG_SHA3_224: append(&buffer, buffer_size, &required_size, "PSA_ALG_SHA3_224", 16); break;
    case PSA_ALG_SHA3_256: append(&buffer, buffer_size, &required_size, "PSA_ALG_SHA3_256", 16); break;
    case PSA_ALG_SHA3_384: append(&buffer, buffer_size, &required_size, "PSA_ALG_SHA3_384", 16); break;
    case PSA_ALG_SHA3_512: append(&buffer, buffer_size, &required_size, "PSA_ALG_SHA3_512", 16); break;
    case PSA_ALG_SHAKE256_512: append(&buffer, buffer_size, &required_size, "PSA_ALG_SHAKE256_512", 20); break;
    case PSA_ALG_SHA_1: append(&buffer, buffer_size, &required_size, "PSA_ALG_SHA_1", 13); break;
    case PSA_ALG_SHA_224: append(&buffer, buffer_size, &required_size, "PSA_ALG_SHA_224", 15); break;
    case PSA_ALG_SHA_256: append(&buffer, buffer_size, &required_size, "PSA_ALG_SHA_256", 15); break;
    case PSA_ALG_SHA_384: append(&buffer, buffer_size, &required_size, "PSA_ALG_SHA_384", 15); break;
    case PSA_ALG_SHA_512: append(&buffer, buffer_size, &required_size, "PSA_ALG_SHA_512", 15); break;
    case PSA_ALG_SHA_512_224: append(&buffer, buffer_size, &required_size, "PSA_ALG_SHA_512_224", 19); break;
    case PSA_ALG_SHA_512_256: append(&buffer, buffer_size, &required_size, "PSA_ALG_SHA_512_256", 19); break;
    case PSA_ALG_STREAM_CIPHER: append(&buffer, buffer_size, &required_size, "PSA_ALG_STREAM_CIPHER", 21); break;
    case PSA_ALG_TLS12_ECJPAKE_TO_PMS: append(&buffer, buffer_size, &required_size, "PSA_ALG_TLS12_ECJPAKE_TO_PMS", 28); break;
    case PSA_ALG_TLS12_PRF_BASE: append(&buffer, buffer_size, &required_size, "PSA_ALG_TLS12_PRF_BASE", 22); break;
    case PSA_ALG_TLS12_PSK_TO_MS_BASE: append(&buffer, buffer_size, &required_size, "PSA_ALG_TLS12_PSK_TO_MS_BASE", 28); break;
    case PSA_ALG_XTS: append(&buffer, buffer_size, &required_size, "PSA_ALG_XTS", 11); break;
    default:
        if (PSA_ALG_IS_DETERMINISTIC_DSA(core_alg)) {
            append(&buffer, buffer_size, &required_size,
                   "PSA_ALG_DETERMINISTIC_DSA(", 25 + 1);
            append_with_alg(&buffer, buffer_size, &required_size,
                            psa_hash_algorithm_name,
                            PSA_ALG_GET_HASH(core_alg));
            append(&buffer, buffer_size, &required_size, ")", 1);
        } else if (PSA_ALG_IS_DETERMINISTIC_ECDSA(core_alg)) {
            append(&buffer, buffer_size, &required_size,
                   "PSA_ALG_DETERMINISTIC_ECDSA(", 27 + 1);
            append_with_alg(&buffer, buffer_size, &required_size,
                            psa_hash_algorithm_name,
                            PSA_ALG_GET_HASH(core_alg));
            append(&buffer, buffer_size, &required_size, ")", 1);
        } else if (PSA_ALG_IS_RANDOMIZED_DSA(core_alg)) {
            append(&buffer, buffer_size, &required_size,
                   "PSA_ALG_DSA(", 11 + 1);
            append_with_alg(&buffer, buffer_size, &required_size,
                            psa_hash_algorithm_name,
                            PSA_ALG_GET_HASH(core_alg));
            append(&buffer, buffer_size, &required_size, ")", 1);
        } else if (PSA_ALG_IS_RANDOMIZED_ECDSA(core_alg)) {
            append(&buffer, buffer_size, &required_size,
                   "PSA_ALG_ECDSA(", 13 + 1);
            append_with_alg(&buffer, buffer_size, &required_size,
                            psa_hash_algorithm_name,
                            PSA_ALG_GET_HASH(core_alg));
            append(&buffer, buffer_size, &required_size, ")", 1);
        } else if (PSA_ALG_IS_HKDF(core_alg)) {
            append(&buffer, buffer_size, &required_size,
                   "PSA_ALG_HKDF(", 12 + 1);
            append_with_alg(&buffer, buffer_size, &required_size,
                            psa_hash_algorithm_name,
                            PSA_ALG_GET_HASH(core_alg));
            append(&buffer, buffer_size, &required_size, ")", 1);
        } else if (PSA_ALG_IS_HKDF_EXPAND(core_alg)) {
            append(&buffer, buffer_size, &required_size,
                   "PSA_ALG_HKDF_EXPAND(", 19 + 1);
            append_with_alg(&buffer, buffer_size, &required_size,
                            psa_hash_algorithm_name,
                            PSA_ALG_GET_HASH(core_alg));
            append(&buffer, buffer_size, &required_size, ")", 1);
        } else if (PSA_ALG_IS_HKDF_EXTRACT(core_alg)) {
            append(&buffer, buffer_size, &required_size,
                   "PSA_ALG_HKDF_EXTRACT(", 20 + 1);
            append_with_alg(&buffer, buffer_size, &required_size,
                            psa_hash_algorithm_name,
                            PSA_ALG_GET_HASH(core_alg));
            append(&buffer, buffer_size, &required_size, ")", 1);
        } else if (PSA_ALG_IS_HMAC(core_alg)) {
            append(&buffer, buffer_size, &required_size,
                   "PSA_ALG_HMAC(", 12 + 1);
            append_with_alg(&buffer, buffer_size, &required_size,
                            psa_hash_algorithm_name,
                            PSA_ALG_GET_HASH(core_alg));
            append(&buffer, buffer_size, &required_size, ")", 1);
        } else if (PSA_ALG_IS_PBKDF2_HMAC(core_alg)) {
            append(&buffer, buffer_size, &required_size,
                   "PSA_ALG_PBKDF2_HMAC(", 19 + 1);
            append_with_alg(&buffer, buffer_size, &required_size,
                            psa_hash_algorithm_name,
                            PSA_ALG_GET_HASH(core_alg));
            append(&buffer, buffer_size, &required_size, ")", 1);
        } else if (PSA_ALG_IS_RSA_OAEP(core_alg)) {
            append(&buffer, buffer_size, &required_size,
                   "PSA_ALG_RSA_OAEP(", 16 + 1);
            append_with_alg(&buffer, buffer_size, &required_size,
                            psa_hash_algorithm_name,
                            PSA_ALG_GET_HASH(core_alg));
            append(&buffer, buffer_size, &required_size, ")", 1);
        } else if (PSA_ALG_IS_RSA_PKCS1V15_SIGN(core_alg)) {
            append(&buffer, buffer_size, &required_size,
                   "PSA_ALG_RSA_PKCS1V15_SIGN(", 25 + 1);
            append_with_alg(&buffer, buffer_size, &required_size,
                            psa_hash_algorithm_name,
                            PSA_ALG_GET_HASH(core_alg));
            append(&buffer, buffer_size, &required_size, ")", 1);
        } else if (PSA_ALG_IS_RSA_PSS_STANDARD_SALT(core_alg)) {
            append(&buffer, buffer_size, &required_size,
                   "PSA_ALG_RSA_PSS(", 15 + 1);
            append_with_alg(&buffer, buffer_size, &required_size,
                            psa_hash_algorithm_name,
                            PSA_ALG_GET_HASH(core_alg));
            append(&buffer, buffer_size, &required_size, ")", 1);
        } else if (PSA_ALG_IS_RSA_PSS_ANY_SALT(core_alg)) {
            append(&buffer, buffer_size, &required_size,
                   "PSA_ALG_RSA_PSS_ANY_SALT(", 24 + 1);
            append_with_alg(&buffer, buffer_size, &required_size,
                            psa_hash_algorithm_name,
                            PSA_ALG_GET_HASH(core_alg));
            append(&buffer, buffer_size, &required_size, ")", 1);
        } else if (PSA_ALG_IS_TLS12_PRF(core_alg)) {
            append(&buffer, buffer_size, &required_size,
                   "PSA_ALG_TLS12_PRF(", 17 + 1);
            append_with_alg(&buffer, buffer_size, &required_size,
                            psa_hash_algorithm_name,
                            PSA_ALG_GET_HASH(core_alg));
            append(&buffer, buffer_size, &required_size, ")", 1);
        } else if (PSA_ALG_IS_TLS12_PSK_TO_MS(core_alg)) {
            append(&buffer, buffer_size, &required_size,
                   "PSA_ALG_TLS12_PSK_TO_MS(", 23 + 1);
            append_with_alg(&buffer, buffer_size, &required_size,
                            psa_hash_algorithm_name,
                            PSA_ALG_GET_HASH(core_alg));
            append(&buffer, buffer_size, &required_size, ")", 1);
        } else {
            append_integer(&buffer, buffer_size, &required_size,
                           "0x%08lx", (unsigned long) core_alg);
        }
        break;
    }
    if (core_alg != alg) {
        if (length_modifier != NO_LENGTH_MODIFIER) {
            append(&buffer, buffer_size, &required_size, ", ", 2);
            append_integer(&buffer, buffer_size, &required_size,
                           "%lu", length_modifier);
        }
        append(&buffer, buffer_size, &required_size, ")", 1);
    }
    buffer[0] = 0;
    return (int) required_size;
}

static int psa_snprint_key_usage(char *buffer, size_t buffer_size,
                                 psa_key_usage_t usage)
{
    size_t required_size = 0;
    if (usage == 0) {
        if (buffer_size > 1) {
            buffer[0] = '0';
            buffer[1] = 0;
        } else if (buffer_size == 1) {
            buffer[0] = 0;
        }
        return 1;
    }
    if (usage & PSA_KEY_USAGE_COPY) {
        if (required_size != 0) {
            append(&buffer, buffer_size, &required_size, " | ", 3);
        }
        append(&buffer, buffer_size, &required_size, "PSA_KEY_USAGE_COPY", 18);
        usage ^= PSA_KEY_USAGE_COPY;
    }
    if (usage & PSA_KEY_USAGE_DECRYPT) {
        if (required_size != 0) {
            append(&buffer, buffer_size, &required_size, " | ", 3);
        }
        append(&buffer, buffer_size, &required_size, "PSA_KEY_USAGE_DECRYPT", 21);
        usage ^= PSA_KEY_USAGE_DECRYPT;
    }
    if (usage & PSA_KEY_USAGE_DERIVE) {
        if (required_size != 0) {
            append(&buffer, buffer_size, &required_size, " | ", 3);
        }
        append(&buffer, buffer_size, &required_size, "PSA_KEY_USAGE_DERIVE", 20);
        usage ^= PSA_KEY_USAGE_DERIVE;
    }
    if (usage & PSA_KEY_USAGE_ENCRYPT) {
        if (required_size != 0) {
            append(&buffer, buffer_size, &required_size, " | ", 3);
        }
        append(&buffer, buffer_size, &required_size, "PSA_KEY_USAGE_ENCRYPT", 21);
        usage ^= PSA_KEY_USAGE_ENCRYPT;
    }
    if (usage & PSA_KEY_USAGE_EXPORT) {
        if (required_size != 0) {
            append(&buffer, buffer_size, &required_size, " | ", 3);
        }
        append(&buffer, buffer_size, &required_size, "PSA_KEY_USAGE_EXPORT", 20);
        usage ^= PSA_KEY_USAGE_EXPORT;
    }
    if (usage & PSA_KEY_USAGE_SIGN_HASH) {
        if (required_size != 0) {
            append(&buffer, buffer_size, &required_size, " | ", 3);
        }
        append(&buffer, buffer_size, &required_size, "PSA_KEY_USAGE_SIGN_HASH", 23);
        usage ^= PSA_KEY_USAGE_SIGN_HASH;
    }
    if (usage & PSA_KEY_USAGE_SIGN_MESSAGE) {
        if (required_size != 0) {
            append(&buffer, buffer_size, &required_size, " | ", 3);
        }
        append(&buffer, buffer_size, &required_size, "PSA_KEY_USAGE_SIGN_MESSAGE", 26);
        usage ^= PSA_KEY_USAGE_SIGN_MESSAGE;
    }
    if (usage & PSA_KEY_USAGE_VERIFY_DERIVATION) {
        if (required_size != 0) {
            append(&buffer, buffer_size, &required_size, " | ", 3);
        }
        append(&buffer, buffer_size, &required_size, "PSA_KEY_USAGE_VERIFY_DERIVATION", 31);
        usage ^= PSA_KEY_USAGE_VERIFY_DERIVATION;
    }
    if (usage & PSA_KEY_USAGE_VERIFY_HASH) {
        if (required_size != 0) {
            append(&buffer, buffer_size, &required_size, " | ", 3);
        }
        append(&buffer, buffer_size, &required_size, "PSA_KEY_USAGE_VERIFY_HASH", 25);
        usage ^= PSA_KEY_USAGE_VERIFY_HASH;
    }
    if (usage & PSA_KEY_USAGE_VERIFY_MESSAGE) {
        if (required_size != 0) {
            append(&buffer, buffer_size, &required_size, " | ", 3);
        }
        append(&buffer, buffer_size, &required_size, "PSA_KEY_USAGE_VERIFY_MESSAGE", 28);
        usage ^= PSA_KEY_USAGE_VERIFY_MESSAGE;
    }
    if (usage != 0) {
        if (required_size != 0) {
            append(&buffer, buffer_size, &required_size, " | ", 3);
        }
        append_integer(&buffer, buffer_size, &required_size,
                       "0x%08lx", (unsigned long) usage);
    } else {
        buffer[0] = 0;
    }
    return (int) required_size;
}

/* End of automatically generated file. */
