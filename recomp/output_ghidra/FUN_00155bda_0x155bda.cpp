#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00155bda
// Address: 0x155bda - 0x155be8
void FUN_00155bda_0x155bda(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00155bda_0x155bda");
#endif

    ctx->pc = 0x155bdau;

    // 0x155bda: 0x0  nop
    ctx->pc = 0x155bdau;
    // NOP
    // 0x155bde: 0x0  nop
    ctx->pc = 0x155bdeu;
    // NOP
    // 0x155be2: 0x0  nop
    ctx->pc = 0x155be2u;
    // NOP
    // 0x155be6: 0xfffb0000  sd          $k1, 0x0($ra)
    ctx->pc = 0x155be6u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 0), GPR_U64(ctx, 27));
    ctx->pc = 0x155be8u;
}
