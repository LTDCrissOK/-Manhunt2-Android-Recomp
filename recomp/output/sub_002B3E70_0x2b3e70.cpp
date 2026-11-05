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

// Function: sub_002B3E70
// Address: 0x2b3e70 - 0x2b3f48
void sub_002B3E70_0x2b3e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3E70_0x2b3e70");
#endif

    switch (ctx->pc) {
        case 0x2b3ea0u: goto label_2b3ea0;
        case 0x2b3ebcu: goto label_2b3ebc;
        case 0x2b3ec8u: goto label_2b3ec8;
        case 0x2b3edcu: goto label_2b3edc;
        case 0x2b3f00u: goto label_2b3f00;
        case 0x2b3f10u: goto label_2b3f10;
        case 0x2b3f1cu: goto label_2b3f1c;
        default: break;
    }

    ctx->pc = 0x2b3e70u;

    // 0x2b3e70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b3e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b3e74: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2b3e74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2b3e78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b3e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b3e7c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2b3e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2b3e80: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b3e80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3e84: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2b3e84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3e88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b3e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b3e8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b3e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b3e90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b3e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b3e94: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2b3e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2b3e98: 0xc0acee4  jal         func_2B3B90
    ctx->pc = 0x2B3E98u;
    SET_GPR_U32(ctx, 31, 0x2B3EA0u);
    ctx->pc = 0x2B3E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3E98u;
    // 0x2b3e9c: 0x24a5ac90  addiu       $a1, $a1, -0x5370 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3B90u, 0x2B3E98u, 0x2B3EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3EA0u;
label_2b3ea0:
    // 0x2b3ea0: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2b3ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2b3ea4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3EA4u;
    {
        const bool branch_taken_0x2b3ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3EA4u;
        // 0x2b3ea8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ea4) {
            ctx->pc = 0x2B3EB4u;
            goto label_2b3eb4;
        }
    }
    ctx->pc = 0x2B3EACu;
    // 0x2b3eac: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2B3EACu;
    {
        const bool branch_taken_0x2b3eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3EACu;
        // 0x2b3eb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3eac) {
            ctx->pc = 0x2B3F24u;
            goto label_2b3f24;
        }
    }
    ctx->pc = 0x2B3EB4u;
label_2b3eb4:
    // 0x2b3eb4: 0xc0acff0  jal         func_2B3FC0
    ctx->pc = 0x2B3EB4u;
    SET_GPR_U32(ctx, 31, 0x2B3EBCu);
    ctx->pc = 0x2B3EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3EB4u;
    // 0x2b3eb8: 0x26500960  addiu       $s0, $s2, 0x960 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 2400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3FC0u, 0x2B3EB4u, 0x2B3EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3EBCu;
label_2b3ebc:
    // 0x2b3ebc: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x2b3ebcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b3ec0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2b3ec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3ec4: 0x0  nop
    ctx->pc = 0x2b3ec4u;
    // NOP
label_2b3ec8:
    // 0x2b3ec8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2b3ec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b3ecc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3ECCu;
    {
        const bool branch_taken_0x2b3ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3ECCu;
        // 0x2b3ed0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ecc) {
            ctx->pc = 0x2B3EE4u;
            goto label_2b3ee4;
        }
    }
    ctx->pc = 0x2B3ED4u;
    // 0x2b3ed4: 0xc0ad210  jal         func_2B4840
    ctx->pc = 0x2B3ED4u;
    SET_GPR_U32(ctx, 31, 0x2B3EDCu);
    ctx->pc = 0x2B3ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3ED4u;
    // 0x2b3ed8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4840u, 0x2B3ED4u, 0x2B3EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3EDCu;
label_2b3edc:
    // 0x2b3edc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B3EDCu;
    {
        const bool branch_taken_0x2b3edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3EDCu;
        // 0x2b3ee0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3edc) {
            ctx->pc = 0x2B3F24u;
            goto label_2b3f24;
        }
    }
    ctx->pc = 0x2B3EE4u;
label_2b3ee4:
    // 0x2b3ee4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2b3ee4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2b3ee8: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x2b3ee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2b3eec: 0x2a62000d  slti        $v0, $s3, 0xD
    ctx->pc = 0x2b3eecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2b3ef0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2B3EF0u;
    {
        const bool branch_taken_0x2b3ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3EF0u;
        // 0x2b3ef4: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ef0) {
            ctx->pc = 0x2B3EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3ec8;
        }
    }
    ctx->pc = 0x2B3EF8u;
    // 0x2b3ef8: 0xc0ad336  jal         func_2B4CD8
    ctx->pc = 0x2B3EF8u;
    SET_GPR_U32(ctx, 31, 0x2B3F00u);
    ctx->pc = 0x2B3EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3EF8u;
    // 0x2b3efc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4CD8u, 0x2B3EF8u, 0x2B3F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3F00u;
label_2b3f00:
    // 0x2b3f00: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b3f00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b3f04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b3f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3f08: 0xc0acee4  jal         func_2B3B90
    ctx->pc = 0x2B3F08u;
    SET_GPR_U32(ctx, 31, 0x2B3F10u);
    ctx->pc = 0x2B3F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3F08u;
    // 0x2b3f0c: 0x24a5f8c0  addiu       $a1, $a1, -0x740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3B90u, 0x2B3F08u, 0x2B3F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3F10u;
label_2b3f10:
    // 0x2b3f10: 0x2685ac90  addiu       $a1, $s4, -0x5370
    ctx->pc = 0x2b3f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945936));
    // 0x2b3f14: 0xc0ad210  jal         func_2B4840
    ctx->pc = 0x2B3F14u;
    SET_GPR_U32(ctx, 31, 0x2B3F1Cu);
    ctx->pc = 0x2B3F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3F14u;
    // 0x2b3f18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4840u, 0x2B3F14u, 0x2B3F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3F1Cu;
label_2b3f1c:
    // 0x2b3f1c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2b3f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2b3f20: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2b3f20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2b3f24:
    // 0x2b3f24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b3f24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3f28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b3f28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3f2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b3f2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3f30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b3f30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3f34: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2b3f34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b3f38: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2b3f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b3f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F3Cu;
        // 0x2b3f40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3F44u;
    // 0x2b3f44: 0x0  nop
    ctx->pc = 0x2b3f44u;
    // NOP
    ctx->pc = 0x2b3f48u;
}
