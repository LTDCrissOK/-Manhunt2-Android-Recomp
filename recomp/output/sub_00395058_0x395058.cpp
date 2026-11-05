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

// Function: sub_00395058
// Address: 0x395058 - 0x3950b8
void sub_00395058_0x395058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395058_0x395058");
#endif

    switch (ctx->pc) {
        case 0x395080u: goto label_395080;
        case 0x395094u: goto label_395094;
        default: break;
    }

    ctx->pc = 0x395058u;

    // 0x395058: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x395058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39505c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x39505cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x395060: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x395060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x395064: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x395064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x395068: 0x2450e208  addiu       $s0, $v0, -0x1DF8
    ctx->pc = 0x395068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959624));
    // 0x39506c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39506cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x395070: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x395070u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x395074: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x395074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x395078: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x395078u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39507c: 0x0  nop
    ctx->pc = 0x39507cu;
    // NOP
label_395080:
    // 0x395080: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x395080u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x395084: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x395084u;
    {
        const bool branch_taken_0x395084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x395084) {
            ctx->pc = 0x395088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395084u;
            // 0x395088: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395098u;
            goto label_395098;
        }
    }
    ctx->pc = 0x39508Cu;
    // 0x39508c: 0xc0e53da  jal         func_394F68
    ctx->pc = 0x39508Cu;
    SET_GPR_U32(ctx, 31, 0x395094u);
    ctx->pc = 0x395090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39508Cu;
    // 0x395090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394F68u, 0x39508Cu, 0x395094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395094u;
label_395094:
    // 0x395094: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x395094u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_395098:
    // 0x395098: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x395098u;
    {
        const bool branch_taken_0x395098 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x39509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395098u;
        // 0x39509c: 0x26100034  addiu       $s0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395098) {
            ctx->pc = 0x395080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395080;
        }
    }
    ctx->pc = 0x3950A0u;
    // 0x3950a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3950a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3950a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3950a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3950a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3950a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3950ac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3950acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3950b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3950B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3950B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3950B0u;
        // 0x3950b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3950B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3950B8u;
}
