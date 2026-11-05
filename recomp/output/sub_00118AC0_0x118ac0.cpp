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

// Function: sub_00118AC0
// Address: 0x118ac0 - 0x118af0
void sub_00118AC0_0x118ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118AC0_0x118ac0");
#endif

    switch (ctx->pc) {
        case 0x118ac0u: goto label_118ac0;
        case 0x118ac4u: goto label_118ac4;
        case 0x118ac8u: goto label_118ac8;
        case 0x118accu: goto label_118acc;
        case 0x118ad0u: goto label_118ad0;
        case 0x118ad4u: goto label_118ad4;
        case 0x118ad8u: goto label_118ad8;
        case 0x118adcu: goto label_118adc;
        case 0x118ae0u: goto label_118ae0;
        case 0x118ae4u: goto label_118ae4;
        case 0x118ae8u: goto label_118ae8;
        case 0x118aecu: goto label_118aec;
        default: break;
    }

    ctx->pc = 0x118ac0u;

label_118ac0:
    // 0x118ac0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x118ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_118ac4:
    // 0x118ac4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x118ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_118ac8:
    // 0x118ac8: 0x2444fffb  addiu       $a0, $v0, -0x5
    ctx->pc = 0x118ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
label_118acc:
    // 0x118acc: 0x2c830012  sltiu       $v1, $a0, 0x12
    ctx->pc = 0x118accu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_118ad0:
    // 0x118ad0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_118ad4:
    if (ctx->pc == 0x118AD4u) {
        ctx->pc = 0x118AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118AD0u;
        // 0x118ad4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118AD8u;
        goto label_118ad8;
    }
    ctx->pc = 0x118AD0u;
    {
        const bool branch_taken_0x118ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x118AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118AD0u;
        // 0x118ad4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ad0) {
            ctx->pc = 0x118B38u;
            return;
        }
    }
    ctx->pc = 0x118AD8u;
label_118ad8:
    // 0x118ad8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x118ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_118adc:
    // 0x118adc: 0x2442b590  addiu       $v0, $v0, -0x4A70
    ctx->pc = 0x118adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948240));
label_118ae0:
    // 0x118ae0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x118ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_118ae4:
    // 0x118ae4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x118ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_118ae8:
    // 0x118ae8: 0x800008  jr          $a0
label_118aec:
    if (ctx->pc == 0x118AECu) {
        ctx->pc = 0x118AF0u;
        goto label_fallthrough_0x118ae8;
    }
    ctx->pc = 0x118AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118AE8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x118ae8:
    ctx->pc = 0x118AF0u;
}
