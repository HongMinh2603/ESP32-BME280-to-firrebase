#ifndef FIREBASE_H
#define FIREBASE_H

#include <stdint.h>
#include <stddef.h>

// Cấu trúc để chứa thông tin cấu hình Firebase
typedef struct {
    const char *url;      // Địa chỉ URL của Firebase
    const char *auth;     // Token xác thực
} firebase_config_t;

// Địa chỉ URL và token xác thực mặc định
#define FIREBASE_URL "https://your-project-id.firebaseio.com/"
#define FIREBASE_AUTH "your_firebase_auth_token"

// Hàm khởi tạo Firebase
int firebase_init(firebase_config_t *config);

// Gửi dữ liệu tới Firebase
int firebase_send_data(const char *path, const char *json_data);

// Nhận dữ liệu từ Firebase
int firebase_get_data(const char *path, char *buffer, size_t buffer_size);
#endif // FIREBASE_H

