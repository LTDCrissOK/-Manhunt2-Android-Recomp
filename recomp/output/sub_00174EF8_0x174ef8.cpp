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

// Function: sub_00174EF8
// Address: 0x174ef8 - 0x174fd0
void sub_00174EF8_0x174ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174EF8_0x174ef8");
#endif

    switch (ctx->pc) {
        case 0x174f48u: goto label_174f48;
        case 0x174f5cu: goto label_174f5c;
        case 0x174facu: goto label_174fac;
        case 0x174fbcu: goto label_174fbc;
        default: break;
    }

    ctx->pc = 0x174ef8u;

    // 0x174ef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174efc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x174efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174f00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x174f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x174f04: 0x8c850228  lw          $a1, 0x228($a0)
    ctx->pc = 0x174f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 552)));
    // 0x174f08: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x174F08u;
    {
        const bool branch_taken_0x174f08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x174F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174F08u;
        // 0x174f0c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174f08) {
            ctx->pc = 0x174F30u;
            goto label_174f30;
        }
    }
    ctx->pc = 0x174F10u;
    // 0x174f10: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x174f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x174f14: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x174f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x174f18: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x174f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x174f1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x174f20: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x174f20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x174f24: 0x10280a  movz        $a1, $zero, $s0
    ctx->pc = 0x174f24u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x174f28: 0x14a0001e  bnez        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x174F28u;
    {
        const bool branch_taken_0x174f28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x174f28) {
            ctx->pc = 0x174FA4u;
            goto label_174fa4;
        }
    }
    ctx->pc = 0x174F30u;
label_174f30:
    // 0x174f30: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x174f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x174f34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x174f34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174f38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174f38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174f3c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x174F3Cu;
    {
        const bool branch_taken_0x174f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174F3Cu;
        // 0x174f40: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174f3c) {
            ctx->pc = 0x174F70u;
            goto label_174f70;
        }
    }
    ctx->pc = 0x174F44u;
    // 0x174f44: 0x0  nop
    ctx->pc = 0x174f44u;
    // NOP
label_174f48:
    // 0x174f48: 0x90830009  lbu         $v1, 0x9($a0)
    ctx->pc = 0x174f48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x174f4c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x174f4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x174f50: 0x10e30012  beq         $a3, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x174F50u;
    {
        const bool branch_taken_0x174f50 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x174F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174F50u;
        // 0x174f54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174f50) {
            ctx->pc = 0x174F9Cu;
            goto label_174f9c;
        }
    }
    ctx->pc = 0x174F58u;
    // 0x174f58: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x174f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_174f5c:
    // 0x174f5c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x174f5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x174f60: 0x2cc30010  sltiu       $v1, $a2, 0x10
    ctx->pc = 0x174f60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x174f64: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x174F64u;
    {
        const bool branch_taken_0x174f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x174F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174F64u;
        // 0x174f68: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174f64) {
            ctx->pc = 0x174F9Cu;
            goto label_174f9c;
        }
    }
    ctx->pc = 0x174F6Cu;
    // 0x174f6c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x174f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_174f70:
    // 0x174f70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x174f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174f74: 0x5040fff9  beql        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x174F74u;
    {
        const bool branch_taken_0x174f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174f74) {
            ctx->pc = 0x174F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174F74u;
            // 0x174f78: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174F5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174f5c;
        }
    }
    ctx->pc = 0x174F7Cu;
    // 0x174f7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x174f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174f80: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x174f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x174f84: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x174f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x174f88: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x174f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x174f8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x174f90: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x174f90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x174f94: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x174F94u;
    {
        const bool branch_taken_0x174f94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x174F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174F94u;
        // 0x174f98: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174f94) {
            ctx->pc = 0x174F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174f48;
        }
    }
    ctx->pc = 0x174F9Cu;
label_174f9c:
    // 0x174f9c: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x174F9Cu;
    {
        const bool branch_taken_0x174f9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x174f9c) {
            ctx->pc = 0x174FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174F9Cu;
            // 0x174fa0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174FC0u;
            goto label_174fc0;
        }
    }
    ctx->pc = 0x174FA4u;
label_174fa4:
    // 0x174fa4: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x174FA4u;
    SET_GPR_U32(ctx, 31, 0x174FACu);
    ctx->pc = 0x174FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174FA4u;
    // 0x174fa8: 0x8c84005c  lw          $a0, 0x5C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x174FA4u, 0x174FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174FACu;
label_174fac:
    // 0x174fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x174facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174fb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x174fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174fb4: 0xc04445e  jal         func_111178
    ctx->pc = 0x174FB4u;
    SET_GPR_U32(ctx, 31, 0x174FBCu);
    ctx->pc = 0x174FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174FB4u;
    // 0x174fb8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111178u, 0x174FB4u, 0x174FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174FBCu;
label_174fbc:
    // 0x174fbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x174fbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174fc0:
    // 0x174fc0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x174fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x174FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174FC4u;
        // 0x174fc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174FCCu;
    // 0x174fcc: 0x0  nop
    ctx->pc = 0x174fccu;
    // NOP
    ctx->pc = 0x174fd0u;
}
