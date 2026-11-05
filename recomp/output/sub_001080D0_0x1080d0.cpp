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

// Function: sub_001080D0
// Address: 0x1080d0 - 0x108100
void sub_001080D0_0x1080d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001080D0_0x1080d0");
#endif

    switch (ctx->pc) {
        case 0x1080d0u: goto label_1080d0;
        case 0x1080d4u: goto label_1080d4;
        case 0x1080d8u: goto label_1080d8;
        case 0x1080dcu: goto label_1080dc;
        case 0x1080e0u: goto label_1080e0;
        case 0x1080e4u: goto label_1080e4;
        case 0x1080e8u: goto label_1080e8;
        case 0x1080ecu: goto label_1080ec;
        case 0x1080f0u: goto label_1080f0;
        case 0x1080f4u: goto label_1080f4;
        case 0x1080f8u: goto label_1080f8;
        case 0x1080fcu: goto label_1080fc;
        default: break;
    }

    ctx->pc = 0x1080d0u;

label_1080d0:
    // 0x1080d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1080d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1080d4:
    // 0x1080d4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1080d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1080d8:
    // 0x1080d8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1080dc:
    if (ctx->pc == 0x1080DCu) {
        ctx->pc = 0x1080DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080D8u;
        // 0x1080dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1080E0u;
        goto label_1080e0;
    }
    ctx->pc = 0x1080D8u;
    {
        const bool branch_taken_0x1080d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1080DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080D8u;
        // 0x1080dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080d8) {
            ctx->pc = 0x1080F0u;
            goto label_1080f0;
        }
    }
    ctx->pc = 0x1080E0u;
label_1080e0:
    // 0x1080e0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1080e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1080e4:
    // 0x1080e4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1080e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1080e8:
    // 0x1080e8: 0x40f809  jalr        $v0
label_1080ec:
    if (ctx->pc == 0x1080ECu) {
        ctx->pc = 0x1080ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080E8u;
        // 0x1080ec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1080F0u;
        goto label_1080f0;
    }
    ctx->pc = 0x1080E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1080F0u);
        ctx->pc = 0x1080ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080E8u;
        // 0x1080ec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1080E8u, 0x1080F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1080F0u;
label_1080f0:
    // 0x1080f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1080f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1080f4:
    // 0x1080f4: 0x3e00008  jr          $ra
label_1080f8:
    if (ctx->pc == 0x1080F8u) {
        ctx->pc = 0x1080F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080F4u;
        // 0x1080f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1080FCu;
        goto label_1080fc;
    }
    ctx->pc = 0x1080F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1080F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080F4u;
        // 0x1080f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1080F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1080FCu;
label_1080fc:
    // 0x1080fc: 0x0  nop
    ctx->pc = 0x1080fcu;
    // NOP
    ctx->pc = 0x108100u;
}
