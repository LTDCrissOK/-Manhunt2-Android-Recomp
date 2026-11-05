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

// Function: sub_001658D0
// Address: 0x1658d0 - 0x165928
void sub_001658D0_0x1658d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001658D0_0x1658d0");
#endif

    switch (ctx->pc) {
        case 0x165900u: goto label_165900;
        case 0x165918u: goto label_165918;
        default: break;
    }

    ctx->pc = 0x1658d0u;

    // 0x1658d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1658d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1658d4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1658d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1658d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1658d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1658dc: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1658dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1658e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1658e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1658e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1658e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1658e8: 0xae000304  sw          $zero, 0x304($s0)
    ctx->pc = 0x1658e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 0));
    // 0x1658ec: 0x8e0302e0  lw          $v1, 0x2E0($s0)
    ctx->pc = 0x1658ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x1658f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1658f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1658f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1658f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1658f8: 0xc043996  jal         func_10E658
    ctx->pc = 0x1658F8u;
    SET_GPR_U32(ctx, 31, 0x165900u);
    ctx->pc = 0x1658FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1658F8u;
    // 0x1658fc: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E658u, 0x1658F8u, 0x165900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165900u;
label_165900:
    // 0x165900: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165900u;
    {
        const bool branch_taken_0x165900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165900u;
        // 0x165904: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165900) {
            ctx->pc = 0x165910u;
            goto label_165910;
        }
    }
    ctx->pc = 0x165908u;
    // 0x165908: 0xae0203b0  sw          $v0, 0x3B0($s0)
    ctx->pc = 0x165908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 2));
    // 0x16590c: 0xae0203ac  sw          $v0, 0x3AC($s0)
    ctx->pc = 0x16590cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 940), GPR_U32(ctx, 2));
label_165910:
    // 0x165910: 0xc05996a  jal         func_1665A8
    ctx->pc = 0x165910u;
    SET_GPR_U32(ctx, 31, 0x165918u);
    ctx->pc = 0x165914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165910u;
    // 0x165914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1665A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1665A8u, 0x165910u, 0x165918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165918u;
label_165918:
    // 0x165918: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x165918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16591c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16591cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x165920: 0x3e00008  jr          $ra
    ctx->pc = 0x165920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165920u;
        // 0x165924: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165928u;
}
