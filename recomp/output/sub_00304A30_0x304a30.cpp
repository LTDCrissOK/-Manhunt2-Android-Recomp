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

// Function: sub_00304A30
// Address: 0x304a30 - 0x304a78
void sub_00304A30_0x304a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304A30_0x304a30");
#endif

    switch (ctx->pc) {
        case 0x304a60u: goto label_304a60;
        default: break;
    }

    ctx->pc = 0x304a30u;

    // 0x304a30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x304a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x304a34: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x304a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x304a38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x304a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x304a3c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x304a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x304a40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x304a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304a44: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x304a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x304a48: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x304a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x304a4c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x304a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x304a50: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x304A50u;
    {
        const bool branch_taken_0x304a50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x304A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A50u;
        // 0x304a54: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304a50) {
            ctx->pc = 0x304A64u;
            goto label_304a64;
        }
    }
    ctx->pc = 0x304A58u;
    // 0x304a58: 0xc0c12d4  jal         func_304B50
    ctx->pc = 0x304A58u;
    SET_GPR_U32(ctx, 31, 0x304A60u);
    ctx->pc = 0x304A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304A58u;
    // 0x304a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304B50u, 0x304A58u, 0x304A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304A60u;
label_304a60:
    // 0x304a60: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x304a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_304a64:
    // 0x304a64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x304a64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304a68: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x304a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x304a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x304A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A6Cu;
        // 0x304a70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304A74u;
    // 0x304a74: 0x0  nop
    ctx->pc = 0x304a74u;
    // NOP
    ctx->pc = 0x304a78u;
}
