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

// Function: sub_00104DE0
// Address: 0x104de0 - 0x104e78
void sub_00104DE0_0x104de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104DE0_0x104de0");
#endif

    switch (ctx->pc) {
        case 0x104e14u: goto label_104e14;
        case 0x104e48u: goto label_104e48;
        default: break;
    }

    ctx->pc = 0x104de0u;

    // 0x104de0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x104de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x104de4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x104de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x104de8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x104de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x104dec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x104decu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104df0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x104df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x104df4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x104df4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104df8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x104df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x104dfc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x104dfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x104e04: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x104e04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e08: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x104e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x104e0c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x104E0Cu;
    SET_GPR_U32(ctx, 31, 0x104E14u);
    ctx->pc = 0x104E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104E0Cu;
    // 0x104e10: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x104E0Cu, 0x104E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104E14u;
label_104e14:
    // 0x104e14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x104e14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e18: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x104E18u;
    {
        const bool branch_taken_0x104e18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x104E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E18u;
        // 0x104e1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104e18) {
            ctx->pc = 0x104E50u;
            goto label_104e50;
        }
    }
    ctx->pc = 0x104E20u;
    // 0x104e20: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x104e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x104e24: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x104e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x104e28: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x104e28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x104e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x104e30: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x104e30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e34: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x104e34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x104e38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x104e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e3c: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x104e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x104e40: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x104E40u;
    SET_GPR_U32(ctx, 31, 0x104E48u);
    ctx->pc = 0x104E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104E40u;
    // 0x104e44: 0xa6000006  sh          $zero, 0x6($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x104E40u, 0x104E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104E48u;
label_104e48:
    // 0x104e48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x104E48u;
    {
        const bool branch_taken_0x104e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E48u;
        // 0x104e4c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104e48) {
            ctx->pc = 0x104E54u;
            goto label_104e54;
        }
    }
    ctx->pc = 0x104E50u;
label_104e50:
    // 0x104e50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x104e50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_104e54:
    // 0x104e54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104e54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104e58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x104e58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x104e5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x104e5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104e60: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x104e60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x104e64: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x104e64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104e68: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x104e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x104e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x104E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E6Cu;
        // 0x104e70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104E74u;
    // 0x104e74: 0x0  nop
    ctx->pc = 0x104e74u;
    // NOP
    ctx->pc = 0x104e78u;
}
