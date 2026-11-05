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

// Function: sub_00368880
// Address: 0x368880 - 0x368888
void sub_00368880_0x368880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368880_0x368880");
#endif

    ctx->pc = 0x368880u;

    // 0x368880: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x368880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x368884: 0xc  syscall     0
    ctx->pc = 0x368884u;
    ctx->pc = 0x368888u;
runtime->handleSyscall(rdram, ctx, 0x0u);
    ctx->pc = 0x368888u;
}
