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

// Function: sub_0014C060
// Address: 0x14c060 - 0x14c0a8
void sub_0014C060_0x14c060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C060_0x14c060");
#endif

    switch (ctx->pc) {
        case 0x14c078u: goto label_14c078;
        case 0x14c094u: goto label_14c094;
        default: break;
    }

    ctx->pc = 0x14c060u;

    // 0x14c060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14c060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14c064: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14c064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14c068: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14c068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14c06c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14c06cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c070: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x14C070u;
    SET_GPR_U32(ctx, 31, 0x14C078u);
    ctx->pc = 0x14C074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C070u;
    // 0x14c074: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x14C070u, 0x14C078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C078u;
label_14c078:
    // 0x14c078: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14c078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14c07c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14C07Cu;
    {
        const bool branch_taken_0x14c07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14C080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C07Cu;
        // 0x14c080: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c07c) {
            ctx->pc = 0x14C098u;
            goto label_14c098;
        }
    }
    ctx->pc = 0x14C084u;
    // 0x14c084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c088: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14c088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c08c: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x14C08Cu;
    SET_GPR_U32(ctx, 31, 0x14C094u);
    ctx->pc = 0x14C090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C08Cu;
    // 0x14c090: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x14C08Cu, 0x14C094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C094u;
label_14c094:
    // 0x14c094: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14c094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c098:
    // 0x14c098: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14c098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c09c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14c09cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14c0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x14C0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C0A0u;
        // 0x14c0a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C0A8u;
}
