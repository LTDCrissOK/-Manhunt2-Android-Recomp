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

// Function: sub_001314D0
// Address: 0x1314d0 - 0x131520
void sub_001314D0_0x1314d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001314D0_0x1314d0");
#endif

    switch (ctx->pc) {
        case 0x1314e0u: goto label_1314e0;
        case 0x131504u: goto label_131504;
        default: break;
    }

    ctx->pc = 0x1314d0u;

    // 0x1314d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1314d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1314d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1314d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1314d8: 0xc043920  jal         func_10E480
    ctx->pc = 0x1314D8u;
    SET_GPR_U32(ctx, 31, 0x1314E0u);
    ctx->pc = 0x1314DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1314D8u;
    // 0x1314dc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E480u, 0x1314D8u, 0x1314E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1314E0u;
label_1314e0:
    // 0x1314e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1314e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1314e4: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1314E4u;
    {
        const bool branch_taken_0x1314e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1314E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1314E4u;
        // 0x1314e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1314e4) {
            ctx->pc = 0x131514u;
            goto label_131514;
        }
    }
    ctx->pc = 0x1314ECu;
    // 0x1314ec: 0x8c821060  lw          $v0, 0x1060($a0)
    ctx->pc = 0x1314ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4192)));
    // 0x1314f0: 0x3842000a  xori        $v0, $v0, 0xA
    ctx->pc = 0x1314f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
    // 0x1314f4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1314F4u;
    {
        const bool branch_taken_0x1314f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1314f4) {
            ctx->pc = 0x1314F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1314F4u;
            // 0x1314f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131514u;
            goto label_131514;
        }
    }
    ctx->pc = 0x1314FCu;
    // 0x1314fc: 0xc09524a  jal         func_254928
    ctx->pc = 0x1314FCu;
    SET_GPR_U32(ctx, 31, 0x131504u);
    ctx->pc = 0x254928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254928u, 0x1314FCu, 0x131504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131504u;
label_131504:
    // 0x131504: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x131504u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131508: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x131508u;
    {
        const bool branch_taken_0x131508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131508u;
        // 0x13150c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131508) {
            ctx->pc = 0x131514u;
            goto label_131514;
        }
    }
    ctx->pc = 0x131510u;
    // 0x131510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_131514:
    // 0x131514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x131514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131518: 0x3e00008  jr          $ra
    ctx->pc = 0x131518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131518u;
        // 0x13151c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131520u;
}
