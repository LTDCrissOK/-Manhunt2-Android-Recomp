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

// Function: entry_00155a14
// Address: 0x155a14 - 0x155a26
void entry_00155a14_0x155a14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155a14_0x155a14");
#endif

    ctx->pc = 0x155a14u;

    // 0x155a14: 0x0  nop
    ctx->pc = 0x155a14u;
    // NOP
    // 0x155a18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x155a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x155a1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x155a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x155a20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x155a20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x155a24: 0x0  nop
    ctx->pc = 0x155a24u;
    // NOP
    ctx->pc = 0x155a26u;
}
