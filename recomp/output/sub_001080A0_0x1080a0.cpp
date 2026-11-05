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

// Function: sub_001080A0
// Address: 0x1080a0 - 0x1080d0
void sub_001080A0_0x1080a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001080A0_0x1080a0");
#endif

    switch (ctx->pc) {
        case 0x1080a0u: goto label_1080a0;
        case 0x1080a4u: goto label_1080a4;
        case 0x1080a8u: goto label_1080a8;
        case 0x1080acu: goto label_1080ac;
        case 0x1080b0u: goto label_1080b0;
        case 0x1080b4u: goto label_1080b4;
        case 0x1080b8u: goto label_1080b8;
        case 0x1080bcu: goto label_1080bc;
        case 0x1080c0u: goto label_1080c0;
        case 0x1080c4u: goto label_1080c4;
        case 0x1080c8u: goto label_1080c8;
        case 0x1080ccu: goto label_1080cc;
        default: break;
    }

    ctx->pc = 0x1080a0u;

label_1080a0:
    // 0x1080a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1080a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1080a4:
    // 0x1080a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1080a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1080a8:
    // 0x1080a8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1080ac:
    if (ctx->pc == 0x1080ACu) {
        ctx->pc = 0x1080ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080A8u;
        // 0x1080ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1080B0u;
        goto label_1080b0;
    }
    ctx->pc = 0x1080A8u;
    {
        const bool branch_taken_0x1080a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1080ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080A8u;
        // 0x1080ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080a8) {
            ctx->pc = 0x1080C0u;
            goto label_1080c0;
        }
    }
    ctx->pc = 0x1080B0u;
label_1080b0:
    // 0x1080b0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1080b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1080b4:
    // 0x1080b4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1080b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1080b8:
    // 0x1080b8: 0x40f809  jalr        $v0
label_1080bc:
    if (ctx->pc == 0x1080BCu) {
        ctx->pc = 0x1080BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080B8u;
        // 0x1080bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1080C0u;
        goto label_1080c0;
    }
    ctx->pc = 0x1080B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1080C0u);
        ctx->pc = 0x1080BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080B8u;
        // 0x1080bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1080B8u, 0x1080C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1080C0u;
label_1080c0:
    // 0x1080c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1080c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1080c4:
    // 0x1080c4: 0x3e00008  jr          $ra
label_1080c8:
    if (ctx->pc == 0x1080C8u) {
        ctx->pc = 0x1080C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080C4u;
        // 0x1080c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1080CCu;
        goto label_1080cc;
    }
    ctx->pc = 0x1080C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1080C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080C4u;
        // 0x1080c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1080C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1080CCu;
label_1080cc:
    // 0x1080cc: 0x0  nop
    ctx->pc = 0x1080ccu;
    // NOP
    ctx->pc = 0x1080d0u;
}
