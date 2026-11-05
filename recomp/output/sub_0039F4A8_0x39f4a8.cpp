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

// Function: sub_0039F4A8
// Address: 0x39f4a8 - 0x39f4c8
void sub_0039F4A8_0x39f4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039F4A8_0x39f4a8");
#endif

    ctx->pc = 0x39f4a8u;

    // 0x39f4a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39f4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39f4ac: 0x3c087fff  lui         $t0, 0x7FFF
    ctx->pc = 0x39f4acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32767 << 16));
    // 0x39f4b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39f4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39f4b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39f4b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f4b8: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x39f4b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x39f4bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39f4bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39f4c0: 0x80e7cc2  j           func_39F308
    ctx->pc = 0x39F4C0u;
    ctx->pc = 0x39F4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F4C0u;
    // 0x39f4c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39F308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39F308u, 0x39F4C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x39F4C8u;
}
