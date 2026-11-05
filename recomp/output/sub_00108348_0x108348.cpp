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

// Function: sub_00108348
// Address: 0x108348 - 0x108378
void sub_00108348_0x108348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108348_0x108348");
#endif

    switch (ctx->pc) {
        case 0x108348u: goto label_108348;
        case 0x10834cu: goto label_10834c;
        case 0x108350u: goto label_108350;
        case 0x108354u: goto label_108354;
        case 0x108358u: goto label_108358;
        case 0x10835cu: goto label_10835c;
        case 0x108360u: goto label_108360;
        case 0x108364u: goto label_108364;
        case 0x108368u: goto label_108368;
        case 0x10836cu: goto label_10836c;
        case 0x108370u: goto label_108370;
        case 0x108374u: goto label_108374;
        default: break;
    }

    ctx->pc = 0x108348u;

label_108348:
    // 0x108348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x108348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10834c:
    // 0x10834c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10834cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_108350:
    // 0x108350: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_108354:
    if (ctx->pc == 0x108354u) {
        ctx->pc = 0x108354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108350u;
        // 0x108354: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108358u;
        goto label_108358;
    }
    ctx->pc = 0x108350u;
    {
        const bool branch_taken_0x108350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x108354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108350u;
        // 0x108354: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108350) {
            ctx->pc = 0x108368u;
            goto label_108368;
        }
    }
    ctx->pc = 0x108358u;
label_108358:
    // 0x108358: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x108358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_10835c:
    // 0x10835c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x10835cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_108360:
    // 0x108360: 0x40f809  jalr        $v0
label_108364:
    if (ctx->pc == 0x108364u) {
        ctx->pc = 0x108364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108360u;
        // 0x108364: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108368u;
        goto label_108368;
    }
    ctx->pc = 0x108360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x108368u);
        ctx->pc = 0x108364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108360u;
        // 0x108364: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108360u, 0x108368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108368u;
label_108368:
    // 0x108368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10836c:
    // 0x10836c: 0x3e00008  jr          $ra
label_108370:
    if (ctx->pc == 0x108370u) {
        ctx->pc = 0x108370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10836Cu;
        // 0x108370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108374u;
        goto label_108374;
    }
    ctx->pc = 0x10836Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10836Cu;
        // 0x108370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10836Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108374u;
label_108374:
    // 0x108374: 0x0  nop
    ctx->pc = 0x108374u;
    // NOP
    ctx->pc = 0x108378u;
}
