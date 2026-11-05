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

// Function: sub_00196EE0
// Address: 0x196ee0 - 0x196f58
void sub_00196EE0_0x196ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196EE0_0x196ee0");
#endif

    switch (ctx->pc) {
        case 0x196ee0u: goto label_196ee0;
        case 0x196ee4u: goto label_196ee4;
        case 0x196ee8u: goto label_196ee8;
        case 0x196eecu: goto label_196eec;
        case 0x196ef0u: goto label_196ef0;
        case 0x196ef4u: goto label_196ef4;
        case 0x196ef8u: goto label_196ef8;
        case 0x196efcu: goto label_196efc;
        case 0x196f00u: goto label_196f00;
        case 0x196f04u: goto label_196f04;
        case 0x196f08u: goto label_196f08;
        case 0x196f0cu: goto label_196f0c;
        case 0x196f10u: goto label_196f10;
        case 0x196f14u: goto label_196f14;
        case 0x196f18u: goto label_196f18;
        case 0x196f1cu: goto label_196f1c;
        case 0x196f20u: goto label_196f20;
        case 0x196f24u: goto label_196f24;
        case 0x196f28u: goto label_196f28;
        case 0x196f2cu: goto label_196f2c;
        case 0x196f30u: goto label_196f30;
        case 0x196f34u: goto label_196f34;
        case 0x196f38u: goto label_196f38;
        case 0x196f3cu: goto label_196f3c;
        case 0x196f40u: goto label_196f40;
        case 0x196f44u: goto label_196f44;
        case 0x196f48u: goto label_196f48;
        case 0x196f4cu: goto label_196f4c;
        case 0x196f50u: goto label_196f50;
        case 0x196f54u: goto label_196f54;
        default: break;
    }

    ctx->pc = 0x196ee0u;

label_196ee0:
    // 0x196ee0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x196ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_196ee4:
    // 0x196ee4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x196ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_196ee8:
    // 0x196ee8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x196ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_196eec:
    // 0x196eec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x196eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_196ef0:
    // 0x196ef0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x196ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_196ef4:
    // 0x196ef4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x196ef4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_196ef8:
    // 0x196ef8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x196ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_196efc:
    // 0x196efc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x196efcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_196f00:
    // 0x196f00: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x196f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_196f04:
    // 0x196f04: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x196f04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_196f08:
    // 0x196f08: 0xc06faee  jal         func_1BEBB8
label_196f0c:
    if (ctx->pc == 0x196F0Cu) {
        ctx->pc = 0x196F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196F08u;
        // 0x196f0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196F10u;
        goto label_196f10;
    }
    ctx->pc = 0x196F08u;
    SET_GPR_U32(ctx, 31, 0x196F10u);
    ctx->pc = 0x196F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196F08u;
    // 0x196f0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBB8u, 0x196F08u, 0x196F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196F10u;
label_196f10:
    // 0x196f10: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x196f10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_196f14:
    // 0x196f14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_196f18:
    // 0x196f18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_196f1c:
    // 0x196f1c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x196f1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_196f20:
    // 0x196f20: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x196f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_196f24:
    // 0x196f24: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x196f24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_196f28:
    // 0x196f28: 0x60f809  jalr        $v1
label_196f2c:
    if (ctx->pc == 0x196F2Cu) {
        ctx->pc = 0x196F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196F28u;
        // 0x196f2c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196F30u;
        goto label_196f30;
    }
    ctx->pc = 0x196F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x196F30u);
        ctx->pc = 0x196F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196F28u;
        // 0x196f2c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196F28u, 0x196F30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196F30u;
label_196f30:
    // 0x196f30: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x196f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_196f34:
    // 0x196f34: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x196f34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_196f38:
    // 0x196f38: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x196f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
label_196f3c:
    // 0x196f3c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x196f3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_196f40:
    // 0x196f40: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x196f40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_196f44:
    // 0x196f44: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x196f44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_196f48:
    // 0x196f48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x196f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_196f4c:
    // 0x196f4c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x196f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_196f50:
    // 0x196f50: 0x3e00008  jr          $ra
label_196f54:
    if (ctx->pc == 0x196F54u) {
        ctx->pc = 0x196F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196F50u;
        // 0x196f54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196F58u;
        goto label_fallthrough_0x196f50;
    }
    ctx->pc = 0x196F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196F50u;
        // 0x196f54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x196f50:
    ctx->pc = 0x196F58u;
}
