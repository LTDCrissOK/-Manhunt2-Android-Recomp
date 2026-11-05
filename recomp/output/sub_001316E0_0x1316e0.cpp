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

// Function: sub_001316E0
// Address: 0x1316e0 - 0x131728
void sub_001316E0_0x1316e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001316E0_0x1316e0");
#endif

    switch (ctx->pc) {
        case 0x131708u: goto label_131708;
        case 0x131718u: goto label_131718;
        default: break;
    }

    ctx->pc = 0x1316e0u;

    // 0x1316e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1316e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1316e4: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x1316e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1316e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1316e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1316ec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1316ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1316f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1316f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1316f4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1316f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1316f8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1316f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1316fc: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x1316fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x131700: 0xc043920  jal         func_10E480
    ctx->pc = 0x131700u;
    SET_GPR_U32(ctx, 31, 0x131708u);
    ctx->pc = 0x131704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131700u;
    // 0x131704: 0x62800a  movz        $s0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E480u, 0x131700u, 0x131708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131708u;
label_131708:
    // 0x131708: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x131708u;
    {
        const bool branch_taken_0x131708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131708u;
        // 0x13170c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131708) {
            ctx->pc = 0x131718u;
            goto label_131718;
        }
    }
    ctx->pc = 0x131710u;
    // 0x131710: 0xc0952f2  jal         func_254BC8
    ctx->pc = 0x131710u;
    SET_GPR_U32(ctx, 31, 0x131718u);
    ctx->pc = 0x131714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131710u;
    // 0x131714: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254BC8u, 0x131710u, 0x131718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131718u;
label_131718:
    // 0x131718: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x131718u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13171c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x13171cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x131720: 0x3e00008  jr          $ra
    ctx->pc = 0x131720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131720u;
        // 0x131724: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131728u;
}
