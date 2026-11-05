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

// Function: sub_001DEB78
// Address: 0x1deb78 - 0x1dec58
void sub_001DEB78_0x1deb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DEB78_0x1deb78");
#endif

    switch (ctx->pc) {
        case 0x1deb9cu: goto label_1deb9c;
        case 0x1debbcu: goto label_1debbc;
        case 0x1debccu: goto label_1debcc;
        case 0x1debe0u: goto label_1debe0;
        case 0x1dec00u: goto label_1dec00;
        case 0x1dec1cu: goto label_1dec1c;
        default: break;
    }

    ctx->pc = 0x1deb78u;

    // 0x1deb78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1deb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1deb7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1deb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1deb80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1deb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1deb84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1deb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1deb88: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1deb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1deb8c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1deb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1deb90: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1deb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1deb94: 0xc077fee  jal         func_1DFFB8
    ctx->pc = 0x1DEB94u;
    SET_GPR_U32(ctx, 31, 0x1DEB9Cu);
    ctx->pc = 0x1DEB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB94u;
    // 0x1deb98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFFB8u, 0x1DEB94u, 0x1DEB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB9Cu;
label_1deb9c:
    // 0x1deb9c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DEB9Cu;
    {
        const bool branch_taken_0x1deb9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1deb9c) {
            ctx->pc = 0x1DEBC4u;
            goto label_1debc4;
        }
    }
    ctx->pc = 0x1DEBA4u;
    // 0x1deba4: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x1deba4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x1deba8: 0x8e0291c0  lw          $v0, -0x6E40($s0)
    ctx->pc = 0x1deba8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F91C0u));
    // 0x1debac: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1DEBACu;
    {
        const bool branch_taken_0x1debac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1debac) {
            ctx->pc = 0x1DEBB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DEBACu;
            // 0x1debb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DEC3Cu;
            goto label_1dec3c;
        }
    }
    ctx->pc = 0x1DEBB4u;
    // 0x1debb4: 0xc077ac6  jal         func_1DEB18
    ctx->pc = 0x1DEBB4u;
    SET_GPR_U32(ctx, 31, 0x1DEBBCu);
    ctx->pc = 0x1DEB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEB18u, 0x1DEBB4u, 0x1DEBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEBBCu;
label_1debbc:
    // 0x1debbc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1DEBBCu;
    {
        const bool branch_taken_0x1debbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEBBCu;
        // 0x1debc0: 0x8e0291c0  lw          $v0, -0x6E40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1debbc) {
            ctx->pc = 0x1DEC38u;
            goto label_1dec38;
        }
    }
    ctx->pc = 0x1DEBC4u;
label_1debc4:
    // 0x1debc4: 0xc0f75c2  jal         func_3DD708
    ctx->pc = 0x1DEBC4u;
    SET_GPR_U32(ctx, 31, 0x1DEBCCu);
    ctx->pc = 0x1DEBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEBC4u;
    // 0x1debc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD708u, 0x1DEBC4u, 0x1DEBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEBCCu;
label_1debcc:
    // 0x1debcc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DEBCCu;
    {
        const bool branch_taken_0x1debcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEBCCu;
        // 0x1debd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1debcc) {
            ctx->pc = 0x1DEC38u;
            goto label_1dec38;
        }
    }
    ctx->pc = 0x1DEBD4u;
    // 0x1debd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1debd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1debd8: 0xc077e7a  jal         func_1DF9E8
    ctx->pc = 0x1DEBD8u;
    SET_GPR_U32(ctx, 31, 0x1DEBE0u);
    ctx->pc = 0x1DEBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEBD8u;
    // 0x1debdc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF9E8u, 0x1DEBD8u, 0x1DEBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEBE0u;
label_1debe0:
    // 0x1debe0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1debe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1debe4: 0x8c6291f4  lw          $v0, -0x6E0C($v1)
    ctx->pc = 0x1debe4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F91F4u));
    // 0x1debe8: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DEBE8u;
    {
        const bool branch_taken_0x1debe8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1DEBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEBE8u;
        // 0x1debec: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1debe8) {
            ctx->pc = 0x1DEC2Cu;
            goto label_1dec2c;
        }
    }
    ctx->pc = 0x1DEBF0u;
    // 0x1debf0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x1debf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x1debf4: 0x3c13001e  lui         $s3, 0x1E
    ctx->pc = 0x1debf4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)30 << 16));
    // 0x1debf8: 0x2452c758  addiu       $s2, $v0, -0x38A8
    ctx->pc = 0x1debf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952792));
    // 0x1debfc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1debfcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x66C758u));
label_1dec00:
    // 0x1dec00: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dec00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dec04: 0x2667dee0  addiu       $a3, $s3, -0x2120
    ctx->pc = 0x1dec04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958816));
    // 0x1dec08: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1dec08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dec0c: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x1dec0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1dec10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1dec10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1dec14: 0xc0dbdf4  jal         func_36F7D0
    ctx->pc = 0x1DEC14u;
    SET_GPR_U32(ctx, 31, 0x1DEC1Cu);
    ctx->pc = 0x1DEC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEC14u;
    // 0x1dec18: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F7D0u, 0x1DEC14u, 0x1DEC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEC1Cu;
label_1dec1c:
    // 0x1dec1c: 0x8e8391f4  lw          $v1, -0x6E0C($s4)
    ctx->pc = 0x1dec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294939124)));
    // 0x1dec20: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1dec20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1dec24: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1DEC24u;
    {
        const bool branch_taken_0x1dec24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dec24) {
            ctx->pc = 0x1DEC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DEC24u;
            // 0x1dec28: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DEC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dec00;
        }
    }
    ctx->pc = 0x1DEC2Cu;
label_1dec2c:
    // 0x1dec2c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1dec2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1dec30: 0x8c622b1c  lw          $v0, 0x2B1C($v1)
    ctx->pc = 0x1dec30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B1Cu));
    // 0x1dec34: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1dec34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1dec38:
    // 0x1dec38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dec38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dec3c:
    // 0x1dec3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dec3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dec40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dec40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dec44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dec44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dec48: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1dec48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dec4c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1dec4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dec50: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEC50u;
        // 0x1dec54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEC58u;
}
