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

// Function: sub_001497F8
// Address: 0x1497f8 - 0x149838
void sub_001497F8_0x1497f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001497F8_0x1497f8");
#endif

    switch (ctx->pc) {
        case 0x14981cu: goto label_14981c;
        case 0x149828u: goto label_149828;
        default: break;
    }

    ctx->pc = 0x1497f8u;

    // 0x1497f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1497f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1497fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1497fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x149800: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x149800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x149804: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x149804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149808: 0x8e0206ec  lw          $v0, 0x6EC($s0)
    ctx->pc = 0x149808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
    // 0x14980c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14980Cu;
    {
        const bool branch_taken_0x14980c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14980c) {
            ctx->pc = 0x149810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14980Cu;
            // 0x149810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149820u;
            goto label_149820;
        }
    }
    ctx->pc = 0x149814u;
    // 0x149814: 0xc05260e  jal         func_149838
    ctx->pc = 0x149814u;
    SET_GPR_U32(ctx, 31, 0x14981Cu);
    ctx->pc = 0x149818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149814u;
    // 0x149818: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149838u, 0x149814u, 0x14981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14981Cu;
label_14981c:
    // 0x14981c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14981cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_149820:
    // 0x149820: 0xc04da5c  jal         func_136970
    ctx->pc = 0x149820u;
    SET_GPR_U32(ctx, 31, 0x149828u);
    ctx->pc = 0x149824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149820u;
    // 0x149824: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136970u, 0x149820u, 0x149828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149828u;
label_149828:
    // 0x149828: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x149828u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14982c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14982cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x149830: 0x3e00008  jr          $ra
    ctx->pc = 0x149830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149830u;
        // 0x149834: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149838u;
}
