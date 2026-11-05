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

// Function: sub_0014D8E0
// Address: 0x14d8e0 - 0x14d928
void sub_0014D8E0_0x14d8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D8E0_0x14d8e0");
#endif

    switch (ctx->pc) {
        case 0x14d8f8u: goto label_14d8f8;
        case 0x14d914u: goto label_14d914;
        default: break;
    }

    ctx->pc = 0x14d8e0u;

    // 0x14d8e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d8e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14d8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14d8e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14d8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14d8ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14d8ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d8f0: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x14D8F0u;
    SET_GPR_U32(ctx, 31, 0x14D8F8u);
    ctx->pc = 0x14D8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D8F0u;
    // 0x14d8f4: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x14D8F0u, 0x14D8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D8F8u;
label_14d8f8:
    // 0x14d8f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x14d8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14d8fc: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14D8FCu;
    {
        const bool branch_taken_0x14d8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D8FCu;
        // 0x14d900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d8fc) {
            ctx->pc = 0x14D918u;
            goto label_14d918;
        }
    }
    ctx->pc = 0x14D904u;
    // 0x14d904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14d904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d908: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14d908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d90c: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x14D90Cu;
    SET_GPR_U32(ctx, 31, 0x14D914u);
    ctx->pc = 0x14D910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D90Cu;
    // 0x14d910: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x14D90Cu, 0x14D914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D914u;
label_14d914:
    // 0x14d914: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14d914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14d918:
    // 0x14d918: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14d918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d91c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14d91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14d920: 0x3e00008  jr          $ra
    ctx->pc = 0x14D920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D920u;
        // 0x14d924: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D928u;
}
