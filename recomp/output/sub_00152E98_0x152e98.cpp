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

// Function: sub_00152E98
// Address: 0x152e98 - 0x152ee0
void sub_00152E98_0x152e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152E98_0x152e98");
#endif

    switch (ctx->pc) {
        case 0x152eb0u: goto label_152eb0;
        case 0x152eccu: goto label_152ecc;
        default: break;
    }

    ctx->pc = 0x152e98u;

    // 0x152e98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x152e9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x152e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x152ea0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x152ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x152ea4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x152ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ea8: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x152EA8u;
    SET_GPR_U32(ctx, 31, 0x152EB0u);
    ctx->pc = 0x152EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152EA8u;
    // 0x152eac: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x152EA8u, 0x152EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152EB0u;
label_152eb0:
    // 0x152eb0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x152eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x152eb4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x152EB4u;
    {
        const bool branch_taken_0x152eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x152EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152EB4u;
        // 0x152eb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152eb4) {
            ctx->pc = 0x152ED0u;
            goto label_152ed0;
        }
    }
    ctx->pc = 0x152EBCu;
    // 0x152ebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ec0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x152ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152ec4: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x152EC4u;
    SET_GPR_U32(ctx, 31, 0x152ECCu);
    ctx->pc = 0x152EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152EC4u;
    // 0x152ec8: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x152EC4u, 0x152ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152ECCu;
label_152ecc:
    // 0x152ecc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x152eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_152ed0:
    // 0x152ed0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x152ed0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152ed4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x152ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x152ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x152ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152ED8u;
        // 0x152edc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152EE0u;
}
