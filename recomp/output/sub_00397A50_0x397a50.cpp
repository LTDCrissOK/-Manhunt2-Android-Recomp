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

// Function: sub_00397A50
// Address: 0x397a50 - 0x397a80
void sub_00397A50_0x397a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397A50_0x397a50");
#endif

    switch (ctx->pc) {
        case 0x397a6cu: goto label_397a6c;
        default: break;
    }

    ctx->pc = 0x397a50u;

    // 0x397a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x397a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x397a54: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x397a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x397a58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x397a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x397a5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x397a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397a60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x397a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x397a64: 0xc0e9af6  jal         func_3A6BD8
    ctx->pc = 0x397A64u;
    SET_GPR_U32(ctx, 31, 0x397A6Cu);
    ctx->pc = 0x397A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397A64u;
    // 0x397a68: 0xac509200  sw          $s0, -0x6E00($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294939136), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6BD8u, 0x397A64u, 0x397A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397A6Cu;
label_397a6c:
    // 0x397a6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x397a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x397a70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x397a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397a74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x397a74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397a78: 0x80e925e  j           func_3A4978
    ctx->pc = 0x397A78u;
    ctx->pc = 0x397A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397A78u;
    // 0x397a7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4978u, 0x397A78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x397A80u;
}
