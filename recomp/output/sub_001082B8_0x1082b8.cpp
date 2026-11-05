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

// Function: sub_001082B8
// Address: 0x1082b8 - 0x1082e8
void sub_001082B8_0x1082b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001082B8_0x1082b8");
#endif

    switch (ctx->pc) {
        case 0x1082b8u: goto label_1082b8;
        case 0x1082bcu: goto label_1082bc;
        case 0x1082c0u: goto label_1082c0;
        case 0x1082c4u: goto label_1082c4;
        case 0x1082c8u: goto label_1082c8;
        case 0x1082ccu: goto label_1082cc;
        case 0x1082d0u: goto label_1082d0;
        case 0x1082d4u: goto label_1082d4;
        case 0x1082d8u: goto label_1082d8;
        case 0x1082dcu: goto label_1082dc;
        case 0x1082e0u: goto label_1082e0;
        case 0x1082e4u: goto label_1082e4;
        default: break;
    }

    ctx->pc = 0x1082b8u;

label_1082b8:
    // 0x1082b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1082b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1082bc:
    // 0x1082bc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1082bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1082c0:
    // 0x1082c0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1082c4:
    if (ctx->pc == 0x1082C4u) {
        ctx->pc = 0x1082C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082C0u;
        // 0x1082c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1082C8u;
        goto label_1082c8;
    }
    ctx->pc = 0x1082C0u;
    {
        const bool branch_taken_0x1082c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1082C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082C0u;
        // 0x1082c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082c0) {
            ctx->pc = 0x1082D8u;
            goto label_1082d8;
        }
    }
    ctx->pc = 0x1082C8u;
label_1082c8:
    // 0x1082c8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1082c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1082cc:
    // 0x1082cc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1082ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1082d0:
    // 0x1082d0: 0x40f809  jalr        $v0
label_1082d4:
    if (ctx->pc == 0x1082D4u) {
        ctx->pc = 0x1082D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082D0u;
        // 0x1082d4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1082D8u;
        goto label_1082d8;
    }
    ctx->pc = 0x1082D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1082D8u);
        ctx->pc = 0x1082D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082D0u;
        // 0x1082d4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1082D0u, 0x1082D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1082D8u;
label_1082d8:
    // 0x1082d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1082d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1082dc:
    // 0x1082dc: 0x3e00008  jr          $ra
label_1082e0:
    if (ctx->pc == 0x1082E0u) {
        ctx->pc = 0x1082E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082DCu;
        // 0x1082e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1082E4u;
        goto label_1082e4;
    }
    ctx->pc = 0x1082DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1082E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082DCu;
        // 0x1082e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1082DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1082E4u;
label_1082e4:
    // 0x1082e4: 0x0  nop
    ctx->pc = 0x1082e4u;
    // NOP
    ctx->pc = 0x1082e8u;
}
