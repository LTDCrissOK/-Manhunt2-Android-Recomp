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

// Function: sub_003D6800
// Address: 0x3d6800 - 0x3d68e8
void sub_003D6800_0x3d6800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D6800_0x3d6800");
#endif

    switch (ctx->pc) {
        case 0x3d6820u: goto label_3d6820;
        case 0x3d683cu: goto label_3d683c;
        case 0x3d686cu: goto label_3d686c;
        case 0x3d6888u: goto label_3d6888;
        default: break;
    }

    ctx->pc = 0x3d6800u;

    // 0x3d6800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d6800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d6804: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3d6804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x3d6808: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d6808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d680c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3d680cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3d6810: 0x8c508e78  lw          $s0, -0x7188($v0)
    ctx->pc = 0x3d6810u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x668E78u));
    // 0x3d6814: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d6814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6818: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d6818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d681c: 0x0  nop
    ctx->pc = 0x3d681cu;
    // NOP
label_3d6820:
    // 0x3d6820: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3D6820u;
    {
        const bool branch_taken_0x3d6820 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6820u;
        // 0x3d6824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6820) {
            ctx->pc = 0x3D68D0u;
            goto label_3d68d0;
        }
    }
    ctx->pc = 0x3D6828u;
    // 0x3d6828: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3d6828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d682c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D682Cu;
    {
        const bool branch_taken_0x3d682c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D6830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D682Cu;
        // 0x3d6830: 0x222102b  sltu        $v0, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d682c) {
            ctx->pc = 0x3D6844u;
            goto label_3d6844;
        }
    }
    ctx->pc = 0x3D6834u;
    // 0x3d6834: 0xc0f59b0  jal         func_3D66C0
    ctx->pc = 0x3D6834u;
    SET_GPR_U32(ctx, 31, 0x3D683Cu);
    ctx->pc = 0x3D6838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6834u;
    // 0x3d6838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D66C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D66C0u, 0x3D6834u, 0x3D683Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D683Cu;
label_3d683c:
    // 0x3d683c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3d683cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d6840: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3d6840u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3d6844:
    // 0x3d6844: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x3D6844u;
    {
        const bool branch_taken_0x3d6844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d6844) {
            ctx->pc = 0x3D6848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D6844u;
            // 0x3d6848: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D6820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6820;
        }
    }
    ctx->pc = 0x3D684Cu;
    // 0x3d684c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3d684cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3d6850: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3d6850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d6854: 0x5040fff2  beql        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x3D6854u;
    {
        const bool branch_taken_0x3d6854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6854) {
            ctx->pc = 0x3D6858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D6854u;
            // 0x3d6858: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D6820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6820;
        }
    }
    ctx->pc = 0x3D685Cu;
    // 0x3d685c: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D685Cu;
    {
        const bool branch_taken_0x3d685c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d685c) {
            ctx->pc = 0x3D6860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D685Cu;
            // 0x3d6860: 0x8e070010  lw          $a3, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D6874u;
            goto label_3d6874;
        }
    }
    ctx->pc = 0x3D6864u;
    // 0x3d6864: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3D6864u;
    {
        const bool branch_taken_0x3d6864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6864u;
        // 0x3d6868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6864) {
            ctx->pc = 0x3D68D0u;
            goto label_3d68d0;
        }
    }
    ctx->pc = 0x3D686Cu;
label_3d686c:
    // 0x3d686c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3D686Cu;
    {
        const bool branch_taken_0x3d686c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D686Cu;
        // 0x3d6870: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d686c) {
            ctx->pc = 0x3D68D0u;
            goto label_3d68d0;
        }
    }
    ctx->pc = 0x3D6874u;
label_3d6874:
    // 0x3d6874: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x3D6874u;
    {
        const bool branch_taken_0x3d6874 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6874u;
        // 0x3d6878: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6874) {
            ctx->pc = 0x3D68CCu;
            goto label_3d68cc;
        }
    }
    ctx->pc = 0x3D687Cu;
    // 0x3d687c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x3d687cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3d6880: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x3d6880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x3d6884: 0x0  nop
    ctx->pc = 0x3d6884u;
    // NOP
label_3d6888:
    // 0x3d6888: 0x23042  srl         $a2, $v0, 1
    ctx->pc = 0x3d6888u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3d688c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3d688cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3d6890: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d6890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d6894: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3d6894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d6898: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x3d6898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3d689c: 0x225102b  sltu        $v0, $s1, $a1
    ctx->pc = 0x3d689cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3d68a0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D68A0u;
    {
        const bool branch_taken_0x3d68a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d68a0) {
            ctx->pc = 0x3D68A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D68A0u;
            // 0x3d68a4: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D68B0u;
            goto label_3d68b0;
        }
    }
    ctx->pc = 0x3D68A8u;
    // 0x3d68a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3D68A8u;
    {
        const bool branch_taken_0x3d68a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D68ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D68A8u;
        // 0x3d68ac: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d68a8) {
            ctx->pc = 0x3D68C0u;
            goto label_3d68c0;
        }
    }
    ctx->pc = 0x3D68B0u;
label_3d68b0:
    // 0x3d68b0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3d68b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3d68b4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3d68b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d68b8: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3D68B8u;
    {
        const bool branch_taken_0x3d68b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D68BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D68B8u;
        // 0x3d68bc: 0x24c80001  addiu       $t0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d68b8) {
            ctx->pc = 0x3D686Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d686c;
        }
    }
    ctx->pc = 0x3D68C0u;
label_3d68c0:
    // 0x3d68c0: 0x107102b  sltu        $v0, $t0, $a3
    ctx->pc = 0x3d68c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3d68c4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3D68C4u;
    {
        const bool branch_taken_0x3d68c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D68C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D68C4u;
        // 0x3d68c8: 0x1071021  addu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d68c4) {
            ctx->pc = 0x3D6888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6888;
        }
    }
    ctx->pc = 0x3D68CCu;
label_3d68cc:
    // 0x3d68cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d68ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d68d0:
    // 0x3d68d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d68d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d68d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3d68d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d68d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d68d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d68dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3D68DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D68E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D68DCu;
        // 0x3d68e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D68DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D68E4u;
    // 0x3d68e4: 0x0  nop
    ctx->pc = 0x3d68e4u;
    // NOP
    ctx->pc = 0x3d68e8u;
}
