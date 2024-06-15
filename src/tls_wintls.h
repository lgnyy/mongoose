#pragma once

#if MG_TLS == MG_TLS_WINTLS

struct mg_tls {
  void *ctx;
  void *ssl;
};
#endif
