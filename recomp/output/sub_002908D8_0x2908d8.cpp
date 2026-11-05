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

// Function: sub_002908D8
// Address: 0x2908d8 - 0x290920
void sub_002908D8_0x2908d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002908D8_0x2908d8");
#endif

    switch (ctx->pc) {
        case 0x290900u: goto label_290900;
        case 0x290914u: goto label_290914;
        default: break;
    }

    ctx->pc = 0x2908d8u;

    // 0x2908d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2908d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2908dc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2908dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2908e0: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2908E0u;
    {
        const bool branch_taken_0x2908e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2908E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2908E0u;
        // 0x2908e4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2908e0) {
            ctx->pc = 0x290914u;
            goto label_290914;
        }
    }
    ctx->pc = 0x2908E8u;
    // 0x2908e8: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2908E8u;
    {
        const bool branch_taken_0x2908e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2908ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2908E8u;
        // 0x2908ec: 0x3c04004c  lui         $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2908e8) {
            ctx->pc = 0x290914u;
            goto label_290914;
        }
    }
    ctx->pc = 0x2908F0u;
    // 0x2908f0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2908f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2908f4: 0x24841168  addiu       $a0, $a0, 0x1168
    ctx->pc = 0x2908f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4456));
    // 0x2908f8: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2908F8u;
    SET_GPR_U32(ctx, 31, 0x290900u);
    ctx->pc = 0x2908FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2908F8u;
    // 0x2908fc: 0x24a5b428  addiu       $a1, $a1, -0x4BD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2908F8u, 0x290900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290900u;
label_290900:
    // 0x290900: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x290900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x290904: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x290904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x290908: 0x24841170  addiu       $a0, $a0, 0x1170
    ctx->pc = 0x290908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4464));
    // 0x29090c: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x29090Cu;
    SET_GPR_U32(ctx, 31, 0x290914u);
    ctx->pc = 0x290910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29090Cu;
    // 0x290910: 0x24a5b438  addiu       $a1, $a1, -0x4BC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29090Cu, 0x290914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290914u;
label_290914:
    // 0x290914: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290918: 0x3e00008  jr          $ra
    ctx->pc = 0x290918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290918u;
        // 0x29091c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290920u;
}
