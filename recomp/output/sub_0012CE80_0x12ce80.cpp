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

// Function: sub_0012CE80
// Address: 0x12ce80 - 0x12cf88
void sub_0012CE80_0x12ce80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012CE80_0x12ce80");
#endif

    switch (ctx->pc) {
        case 0x12cec8u: goto label_12cec8;
        case 0x12cee0u: goto label_12cee0;
        case 0x12cefcu: goto label_12cefc;
        default: break;
    }

    ctx->pc = 0x12ce80u;

    // 0x12ce80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12ce80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12ce84: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x12ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x12ce88: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12ce88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12ce8c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x12ce8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x12ce90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12ce90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ce94: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x12ce94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x12ce98: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12ce98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12ce9c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x12ce9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x12cea0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x12cea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x12cea4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x12cea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x12cea8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x12cea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x12ceac: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x12ceacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x12ceb0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12CEB0u;
    {
        const bool branch_taken_0x12ceb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CEB0u;
        // 0x12ceb4: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ceb0) {
            ctx->pc = 0x12CEC8u;
            goto label_12cec8;
        }
    }
    ctx->pc = 0x12CEB8u;
    // 0x12ceb8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CEB8u;
    {
        const bool branch_taken_0x12ceb8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x12CEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CEB8u;
        // 0x12cebc: 0x2612000c  addiu       $s2, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ceb8) {
            ctx->pc = 0x12CECCu;
            goto label_12cecc;
        }
    }
    ctx->pc = 0x12CEC0u;
    // 0x12cec0: 0xc04c6f2  jal         func_131BC8
    ctx->pc = 0x12CEC0u;
    SET_GPR_U32(ctx, 31, 0x12CEC8u);
    ctx->pc = 0x12CEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CEC0u;
    // 0x12cec4: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131BC8u, 0x12CEC0u, 0x12CEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CEC8u;
label_12cec8:
    // 0x12cec8: 0x2612000c  addiu       $s2, $s0, 0xC
    ctx->pc = 0x12cec8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_12cecc:
    // 0x12cecc: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x12ceccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12ced0: 0x24130009  addiu       $s3, $zero, 0x9
    ctx->pc = 0x12ced0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x12ced4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12ced4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ced8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x12ced8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cedc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x12cedcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_12cee0:
    // 0x12cee0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x12cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x12cee4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x12cee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12cee8: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x12CEE8u;
    {
        const bool branch_taken_0x12cee8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CEE8u;
        // 0x12ceec: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cee8) {
            ctx->pc = 0x12CF38u;
            goto label_12cf38;
        }
    }
    ctx->pc = 0x12CEF0u;
    // 0x12cef0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12cef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cef4: 0xc04c6e4  jal         func_131B90
    ctx->pc = 0x12CEF4u;
    SET_GPR_U32(ctx, 31, 0x12CEFCu);
    ctx->pc = 0x12CEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CEF4u;
    // 0x12cef8: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B90u, 0x12CEF4u, 0x12CEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CEFCu;
label_12cefc:
    // 0x12cefc: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x12CEFCu;
    {
        const bool branch_taken_0x12cefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cefc) {
            ctx->pc = 0x12CF00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CEFCu;
            // 0x12cf00: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CF3Cu;
            goto label_12cf3c;
        }
    }
    ctx->pc = 0x12CF04u;
    // 0x12cf04: 0x16700003  bne         $s3, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12CF04u;
    {
        const bool branch_taken_0x12cf04 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        ctx->pc = 0x12CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF04u;
        // 0x12cf08: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf04) {
            ctx->pc = 0x12CF14u;
            goto label_12cf14;
        }
    }
    ctx->pc = 0x12CF0Cu;
    // 0x12cf0c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12CF0Cu;
    {
        const bool branch_taken_0x12cf0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF0Cu;
        // 0x12cf10: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf0c) {
            ctx->pc = 0x12CF28u;
            goto label_12cf28;
        }
    }
    ctx->pc = 0x12CF14u;
label_12cf14:
    // 0x12cf14: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12cf14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12cf18: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12CF18u;
    {
        const bool branch_taken_0x12cf18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x12CF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF18u;
        // 0x12cf1c: 0x262102a  slt         $v0, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf18) {
            ctx->pc = 0x12CF28u;
            goto label_12cf28;
        }
    }
    ctx->pc = 0x12CF20u;
    // 0x12cf20: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x12cf20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf24: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x12cf24u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_12cf28:
    // 0x12cf28: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CF28u;
    {
        const bool branch_taken_0x12cf28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF28u;
        // 0x12cf2c: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf28) {
            ctx->pc = 0x12CF3Cu;
            goto label_12cf3c;
        }
    }
    ctx->pc = 0x12CF30u;
    // 0x12cf30: 0x8fb30000  lw          $s3, 0x0($sp)
    ctx->pc = 0x12cf30u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12cf34: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x12cf34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12cf38:
    // 0x12cf38: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x12cf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_12cf3c:
    // 0x12cf3c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x12cf3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12cf40: 0x2e230002  sltiu       $v1, $s1, 0x2
    ctx->pc = 0x12cf40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x12cf44: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x12CF44u;
    {
        const bool branch_taken_0x12cf44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF44u;
        // 0x12cf48: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf44) {
            ctx->pc = 0x12CEE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12cee0;
        }
    }
    ctx->pc = 0x12CF4Cu;
    // 0x12cf4c: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x12cf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x12cf50: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12cf50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12cf54: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x12cf54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x12cf58: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x12cf58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12cf5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12cf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12cf60: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12cf60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12cf64: 0x561026  xor         $v0, $v0, $s6
    ctx->pc = 0x12cf64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 22));
    // 0x12cf68: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x12cf68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12cf6c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x12cf6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12cf70: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x12cf70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x12cf74: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x12cf74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12cf78: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x12cf78u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12cf7c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x12cf7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12cf80: 0x3e00008  jr          $ra
    ctx->pc = 0x12CF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF80u;
        // 0x12cf84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CF88u;
}
