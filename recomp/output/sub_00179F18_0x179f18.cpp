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

// Function: sub_00179F18
// Address: 0x179f18 - 0x179fd8
void sub_00179F18_0x179f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179F18_0x179f18");
#endif

    switch (ctx->pc) {
        case 0x179f34u: goto label_179f34;
        case 0x179f40u: goto label_179f40;
        case 0x179f58u: goto label_179f58;
        default: break;
    }

    ctx->pc = 0x179f18u;

    // 0x179f18: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x179f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x179f1c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x179F1Cu;
    {
        const bool branch_taken_0x179f1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x179F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F1Cu;
        // 0x179f20: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f1c) {
            ctx->pc = 0x179F2Cu;
            goto label_179f2c;
        }
    }
    ctx->pc = 0x179F24u;
    // 0x179f24: 0x54c20005  bnel        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x179F24u;
    {
        const bool branch_taken_0x179f24 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x179f24) {
            ctx->pc = 0x179F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179F24u;
            // 0x179f28: 0x90e30584  lbu         $v1, 0x584($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1412)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179F3Cu;
            goto label_179f3c;
        }
    }
    ctx->pc = 0x179F2Cu;
label_179f2c:
    // 0x179f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x179F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F2Cu;
        // 0x179f30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179F34u;
label_179f34:
    // 0x179f34: 0x3e00008  jr          $ra
    ctx->pc = 0x179F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F34u;
        // 0x179f38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179F3Cu;
label_179f3c:
    // 0x179f3c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x179f3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179f40:
    // 0x179f40: 0x123102b  sltu        $v0, $t1, $v1
    ctx->pc = 0x179f40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x179f44: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x179F44u;
    {
        const bool branch_taken_0x179f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F44u;
        // 0x179f48: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f44) {
            ctx->pc = 0x179FC4u;
            goto label_179fc4;
        }
    }
    ctx->pc = 0x179F4Cu;
    // 0x179f4c: 0x24ea0534  addiu       $t2, $a3, 0x534
    ctx->pc = 0x179f4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1332));
    // 0x179f50: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x179f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x179f54: 0x0  nop
    ctx->pc = 0x179f54u;
    // NOP
label_179f58:
    // 0x179f58: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x179f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x179f5c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x179f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x179f60: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x179f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x179f64: 0x14650011  bne         $v1, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x179F64u;
    {
        const bool branch_taken_0x179f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x179F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F64u;
        // 0x179f68: 0x25030001  addiu       $v1, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f64) {
            ctx->pc = 0x179FACu;
            goto label_179fac;
        }
    }
    ctx->pc = 0x179F6Cu;
    // 0x179f6c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x179f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x179f70: 0x5446000f  bnel        $v0, $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x179F70u;
    {
        const bool branch_taken_0x179f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x179f70) {
            ctx->pc = 0x179F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179F70u;
            // 0x179f74: 0x90e20584  lbu         $v0, 0x584($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1412)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179FB0u;
            goto label_179fb0;
        }
    }
    ctx->pc = 0x179F78u;
    // 0x179f78: 0x9083001d  lbu         $v1, 0x1D($a0)
    ctx->pc = 0x179f78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
    // 0x179f7c: 0x9082001f  lbu         $v0, 0x1F($a0)
    ctx->pc = 0x179f7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 31)));
    // 0x179f80: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x179F80u;
    {
        const bool branch_taken_0x179f80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x179F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F80u;
        // 0x179f84: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f80) {
            ctx->pc = 0x179FA8u;
            goto label_179fa8;
        }
    }
    ctx->pc = 0x179F88u;
    // 0x179f88: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x179f88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179f8c: 0xa083001d  sb          $v1, 0x1D($a0)
    ctx->pc = 0x179f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 3));
    // 0x179f90: 0x90e20585  lbu         $v0, 0x585($a3)
    ctx->pc = 0x179f90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1413)));
    // 0x179f94: 0x90e40009  lbu         $a0, 0x9($a3)
    ctx->pc = 0x179f94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 9)));
    // 0x179f98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x179f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x179f9c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x179f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x179fa0: 0x1064ffe4  beq         $v1, $a0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x179FA0u;
    {
        const bool branch_taken_0x179fa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x179FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179FA0u;
        // 0x179fa4: 0xa0e20585  sb          $v0, 0x585($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 1413), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179fa0) {
            ctx->pc = 0x179F34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179f34;
        }
    }
    ctx->pc = 0x179FA8u;
label_179fa8:
    // 0x179fa8: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x179fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_179fac:
    // 0x179fac: 0x90e20584  lbu         $v0, 0x584($a3)
    ctx->pc = 0x179facu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1412)));
label_179fb0:
    // 0x179fb0: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x179fb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x179fb4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x179fb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179fb8: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x179fb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x179fbc: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x179FBCu;
    {
        const bool branch_taken_0x179fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179FBCu;
        // 0x179fc0: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179fbc) {
            ctx->pc = 0x179F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179f58;
        }
    }
    ctx->pc = 0x179FC4u;
label_179fc4:
    // 0x179fc4: 0x1520ffde  bnez        $t1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x179FC4u;
    {
        const bool branch_taken_0x179fc4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x179FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179FC4u;
        // 0x179fc8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179fc4) {
            ctx->pc = 0x179F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179f40;
        }
    }
    ctx->pc = 0x179FCCu;
    // 0x179fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x179FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179FCCu;
        // 0x179fd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179FD4u;
    // 0x179fd4: 0x0  nop
    ctx->pc = 0x179fd4u;
    // NOP
    ctx->pc = 0x179fd8u;
}
