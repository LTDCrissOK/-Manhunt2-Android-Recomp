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

// Function: sub_003A0B40
// Address: 0x3a0b40 - 0x3a0b80
void sub_003A0B40_0x3a0b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0B40_0x3a0b40");
#endif

    switch (ctx->pc) {
        case 0x3a0b54u: goto label_3a0b54;
        case 0x3a0b6cu: goto label_3a0b6c;
        default: break;
    }

    ctx->pc = 0x3a0b40u;

    // 0x3a0b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a0b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a0b44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a0b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a0b48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3a0b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3a0b4c: 0xc0ecbe4  jal         func_3B2F90
    ctx->pc = 0x3A0B4Cu;
    SET_GPR_U32(ctx, 31, 0x3A0B54u);
    ctx->pc = 0x3A0B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0B4Cu;
    // 0x3a0b50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2F90u, 0x3A0B4Cu, 0x3A0B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0B54u;
label_3a0b54:
    // 0x3a0b54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0b58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a0b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0b5c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A0B5Cu;
    {
        const bool branch_taken_0x3a0b5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0B5Cu;
        // 0x3a0b60: 0x24061964  addiu       $a2, $zero, 0x1964 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0b5c) {
            ctx->pc = 0x3A0B6Cu;
            goto label_3a0b6c;
        }
    }
    ctx->pc = 0x3A0B64u;
    // 0x3a0b64: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3A0B64u;
    SET_GPR_U32(ctx, 31, 0x3A0B6Cu);
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3A0B64u, 0x3A0B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0B6Cu;
label_3a0b6c:
    // 0x3a0b6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a0b6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0b70: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a0b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a0b74: 0x80ecbea  j           func_3B2FA8
    ctx->pc = 0x3A0B74u;
    ctx->pc = 0x3A0B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0B74u;
    // 0x3a0b78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FA8u;
    sub_003B2FA8_0x3b2fa8(rdram, ctx, runtime); return;
    ctx->pc = 0x3A0B7Cu;
    // 0x3a0b7c: 0x0  nop
    ctx->pc = 0x3a0b7cu;
    // NOP
    ctx->pc = 0x3a0b80u;
}
