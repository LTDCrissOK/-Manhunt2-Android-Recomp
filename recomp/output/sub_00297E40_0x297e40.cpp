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

// Function: sub_00297E40
// Address: 0x297e40 - 0x297f08
void sub_00297E40_0x297e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297E40_0x297e40");
#endif

    switch (ctx->pc) {
        case 0x297e70u: goto label_297e70;
        case 0x297e7cu: goto label_297e7c;
        case 0x297ea0u: goto label_297ea0;
        case 0x297eb8u: goto label_297eb8;
        case 0x297ed8u: goto label_297ed8;
        case 0x297ee4u: goto label_297ee4;
        default: break;
    }

    ctx->pc = 0x297e40u;

    // 0x297e40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x297e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x297e44: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x297e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x297e48: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x297e48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297e4c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x297e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x297e50: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x297e50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297e54: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x297e54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x297e58: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x297e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x297e5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x297e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297e60: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x297e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x297e64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x297e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x297e68: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x297E68u;
    SET_GPR_U32(ctx, 31, 0x297E70u);
    ctx->pc = 0x297E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297E68u;
    // 0x297e6c: 0x24a5baf8  addiu       $a1, $a1, -0x4508 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x297E68u, 0x297E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297E70u;
label_297e70:
    // 0x297e70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x297e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297e74: 0xc0d757c  jal         func_35D5F0
    ctx->pc = 0x297E74u;
    SET_GPR_U32(ctx, 31, 0x297E7Cu);
    ctx->pc = 0x297E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297E74u;
    // 0x297e78: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5F0u, 0x297E74u, 0x297E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297E7Cu;
label_297e7c:
    // 0x297e7c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x297e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x297e80: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x297e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x297e84: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x297e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x297e88: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x297e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x297e8c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x297e8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x297e90: 0x1044000e  beq         $v0, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x297E90u;
    {
        const bool branch_taken_0x297e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x297E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297E90u;
        // 0x297e94: 0x24120029  addiu       $s2, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297e90) {
            ctx->pc = 0x297ECCu;
            goto label_297ecc;
        }
    }
    ctx->pc = 0x297E98u;
    // 0x297e98: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x297e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x297e9c: 0x0  nop
    ctx->pc = 0x297e9cu;
    // NOP
label_297ea0:
    // 0x297ea0: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x297ea0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ea4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x297ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ea8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x297ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x297eac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x297eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x297eb0: 0xc0d755e  jal         func_35D578
    ctx->pc = 0x297EB0u;
    SET_GPR_U32(ctx, 31, 0x297EB8u);
    ctx->pc = 0x297EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297EB0u;
    // 0x297eb4: 0x80450000  lb          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D578u, 0x297EB0u, 0x297EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297EB8u;
label_297eb8:
    // 0x297eb8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x297eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x297ebc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x297ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x297ec0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x297ec0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x297ec4: 0x5452fff6  bnel        $v0, $s2, . + 4 + (-0xA << 2)
    ctx->pc = 0x297EC4u;
    {
        const bool branch_taken_0x297ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x297ec4) {
            ctx->pc = 0x297EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297EC4u;
            // 0x297ec8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_297ea0;
        }
    }
    ctx->pc = 0x297ECCu;
label_297ecc:
    // 0x297ecc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x297eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ed0: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x297ED0u;
    SET_GPR_U32(ctx, 31, 0x297ED8u);
    ctx->pc = 0x297ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297ED0u;
    // 0x297ed4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x297ED0u, 0x297ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297ED8u;
label_297ed8:
    // 0x297ed8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x297ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297edc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x297EDCu;
    SET_GPR_U32(ctx, 31, 0x297EE4u);
    ctx->pc = 0x297EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297EDCu;
    // 0x297ee0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x297EDCu, 0x297EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297EE4u;
label_297ee4:
    // 0x297ee4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x297ee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ee8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x297ee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297eec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x297eecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x297ef0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x297ef0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297ef4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x297ef4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x297ef8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x297ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297efc: 0x3e00008  jr          $ra
    ctx->pc = 0x297EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297EFCu;
        // 0x297f00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297F04u;
    // 0x297f04: 0x0  nop
    ctx->pc = 0x297f04u;
    // NOP
    ctx->pc = 0x297f08u;
}
