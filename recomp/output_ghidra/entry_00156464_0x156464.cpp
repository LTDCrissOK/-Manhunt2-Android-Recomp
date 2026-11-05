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

// Function: entry_00156464
// Address: 0x156464 - 0x156498
void entry_00156464_0x156464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156464_0x156464");
#endif

    switch (ctx->pc) {
        case 0x156474u: goto label_156474;
        default: break;
    }

    ctx->pc = 0x156464u;

    // 0x156464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156468: 0xae220544  sw          $v0, 0x544($s1)
    ctx->pc = 0x156468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1348), GPR_U32(ctx, 2));
    // 0x15646c: 0xc046086  jal         func_118218
    ctx->pc = 0x15646Cu;
    SET_GPR_U32(ctx, 31, 0x156474u);
    ctx->pc = 0x156470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15646Cu;
    // 0x156470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118218u, 0x15646Cu, 0x156474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156474u;
label_156474:
    // 0x156474: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x156474u;
    {
        const bool branch_taken_0x156474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156474) {
            ctx->pc = 0x156478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156474u;
            // 0x156478: 0x8e220544  lw          $v0, 0x544($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15647Cu;
            goto label_15647c;
        }
    }
    ctx->pc = 0x15647Cu;
label_15647c:
    // 0x15647c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x15647cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156480: 0xfa210530  sqc2        $vf1, 0x530($s1)
    ctx->pc = 0x156480u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1328), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x156484: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x156484u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156488: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x156488u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15648c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15648cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156490: 0x3e00008  jr          $ra
    ctx->pc = 0x156490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156490u;
        // 0x156494: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156498u;
}
