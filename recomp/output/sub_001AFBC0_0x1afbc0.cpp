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

// Function: sub_001AFBC0
// Address: 0x1afbc0 - 0x1afcd0
void sub_001AFBC0_0x1afbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AFBC0_0x1afbc0");
#endif

    switch (ctx->pc) {
        case 0x1afbecu: goto label_1afbec;
        case 0x1afc00u: goto label_1afc00;
        case 0x1afc10u: goto label_1afc10;
        case 0x1afc28u: goto label_1afc28;
        case 0x1afc38u: goto label_1afc38;
        case 0x1afc60u: goto label_1afc60;
        case 0x1afc84u: goto label_1afc84;
        case 0x1afc9cu: goto label_1afc9c;
        case 0x1afca8u: goto label_1afca8;
        default: break;
    }

    ctx->pc = 0x1afbc0u;

    // 0x1afbc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1afbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1afbc4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1afbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1afbc8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1afbc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afbcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1afbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1afbd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1afbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1afbd4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1afbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1afbd8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1afbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1afbdc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1afbdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afbe0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1afbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1afbe4: 0xc06c11c  jal         func_1B0470
    ctx->pc = 0x1AFBE4u;
    SET_GPR_U32(ctx, 31, 0x1AFBECu);
    ctx->pc = 0x1AFBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFBE4u;
    // 0x1afbe8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0470u, 0x1AFBE4u, 0x1AFBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFBECu;
label_1afbec:
    // 0x1afbec: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1afbecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1afbf0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1afbf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afbf4: 0x8c70bd50  lw          $s0, -0x42B0($v1)
    ctx->pc = 0x1afbf4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x1afbf8: 0xc08dab6  jal         func_236AD8
    ctx->pc = 0x1AFBF8u;
    SET_GPR_U32(ctx, 31, 0x1AFC00u);
    ctx->pc = 0x1AFBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFBF8u;
    // 0x1afbfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x1AFBF8u, 0x1AFC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFC00u;
label_1afc00:
    // 0x1afc00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AFC00u;
    {
        const bool branch_taken_0x1afc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afc00) {
            ctx->pc = 0x1AFC20u;
            goto label_1afc20;
        }
    }
    ctx->pc = 0x1AFC08u;
    // 0x1afc08: 0xc08dacc  jal         func_236B30
    ctx->pc = 0x1AFC08u;
    SET_GPR_U32(ctx, 31, 0x1AFC10u);
    ctx->pc = 0x1AFC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFC08u;
    // 0x1afc0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B30u, 0x1AFC08u, 0x1AFC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFC10u;
label_1afc10:
    // 0x1afc10: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1AFC10u;
    {
        const bool branch_taken_0x1afc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afc10) {
            ctx->pc = 0x1AFC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AFC10u;
            // 0x1afc14: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AFC44u;
            goto label_1afc44;
        }
    }
    ctx->pc = 0x1AFC18u;
    // 0x1afc18: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1AFC18u;
    {
        const bool branch_taken_0x1afc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC18u;
        // 0x1afc1c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc18) {
            ctx->pc = 0x1AFC44u;
            goto label_1afc44;
        }
    }
    ctx->pc = 0x1AFC20u;
label_1afc20:
    // 0x1afc20: 0xc08db00  jal         func_236C00
    ctx->pc = 0x1AFC20u;
    SET_GPR_U32(ctx, 31, 0x1AFC28u);
    ctx->pc = 0x1AFC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFC20u;
    // 0x1afc24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C00u, 0x1AFC20u, 0x1AFC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFC28u;
label_1afc28:
    // 0x1afc28: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AFC28u;
    {
        const bool branch_taken_0x1afc28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afc28) {
            ctx->pc = 0x1AFC2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AFC28u;
            // 0x1afc2c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AFC44u;
            goto label_1afc44;
        }
    }
    ctx->pc = 0x1AFC30u;
    // 0x1afc30: 0xc08db10  jal         func_236C40
    ctx->pc = 0x1AFC30u;
    SET_GPR_U32(ctx, 31, 0x1AFC38u);
    ctx->pc = 0x1AFC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFC30u;
    // 0x1afc34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C40u, 0x1AFC30u, 0x1AFC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFC38u;
label_1afc38:
    // 0x1afc38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFC38u;
    {
        const bool branch_taken_0x1afc38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC38u;
        // 0x1afc3c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc38) {
            ctx->pc = 0x1AFC48u;
            goto label_1afc48;
        }
    }
    ctx->pc = 0x1AFC40u;
    // 0x1afc40: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1afc40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1afc44:
    // 0x1afc44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1afc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1afc48:
    // 0x1afc48: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFC48u;
    {
        const bool branch_taken_0x1afc48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1afc48) {
            ctx->pc = 0x1AFC58u;
            goto label_1afc58;
        }
    }
    ctx->pc = 0x1AFC50u;
    // 0x1afc50: 0x12600016  beqz        $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x1AFC50u;
    {
        const bool branch_taken_0x1afc50 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC50u;
        // 0x1afc54: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc50) {
            ctx->pc = 0x1AFCACu;
            goto label_1afcac;
        }
    }
    ctx->pc = 0x1AFC58u;
label_1afc58:
    // 0x1afc58: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x1AFC58u;
    SET_GPR_U32(ctx, 31, 0x1AFC60u);
    ctx->pc = 0x1AFC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFC58u;
    // 0x1afc5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x1AFC58u, 0x1AFC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFC60u;
label_1afc60:
    // 0x1afc60: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1AFC60u;
    {
        const bool branch_taken_0x1afc60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC60u;
        // 0x1afc64: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc60) {
            ctx->pc = 0x1AFCACu;
            goto label_1afcac;
        }
    }
    ctx->pc = 0x1AFC68u;
    // 0x1afc68: 0x2622017f  addiu       $v0, $s1, 0x17F
    ctx->pc = 0x1afc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 383));
    // 0x1afc6c: 0x24060184  addiu       $a2, $zero, 0x184
    ctx->pc = 0x1afc6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x1afc70: 0x53300a  movz        $a2, $v0, $s3
    ctx->pc = 0x1afc70u;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1afc74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1afc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afc78: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1afc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1afc7c: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AFC7Cu;
    SET_GPR_U32(ctx, 31, 0x1AFC84u);
    ctx->pc = 0x1AFC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFC7Cu;
    // 0x1afc80: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AFC7Cu, 0x1AFC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFC84u;
label_1afc84:
    // 0x1afc84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1afc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1afc88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1afc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afc8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1afc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1afc90: 0x2a02b  sltu        $s4, $zero, $v0
    ctx->pc = 0x1afc90u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1afc94: 0xc06c546  jal         func_1B1518
    ctx->pc = 0x1AFC94u;
    SET_GPR_U32(ctx, 31, 0x1AFC9Cu);
    ctx->pc = 0x1AFC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFC94u;
    // 0x1afc98: 0xae430098  sw          $v1, 0x98($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x1AFC94u, 0x1AFC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFC9Cu;
label_1afc9c:
    // 0x1afc9c: 0x8e44009c  lw          $a0, 0x9C($s2)
    ctx->pc = 0x1afc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x1afca0: 0xc08fc4e  jal         func_23F138
    ctx->pc = 0x1AFCA0u;
    SET_GPR_U32(ctx, 31, 0x1AFCA8u);
    ctx->pc = 0x1AFCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFCA0u;
    // 0x1afca4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F138u, 0x1AFCA0u, 0x1AFCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFCA8u;
label_1afca8:
    // 0x1afca8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1afca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1afcac:
    // 0x1afcac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1afcacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afcb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1afcb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1afcb4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1afcb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1afcb8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1afcb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1afcbc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1afcbcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1afcc0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1afcc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1afcc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFCC4u;
        // 0x1afcc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFCC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFCCCu;
    // 0x1afccc: 0x0  nop
    ctx->pc = 0x1afcccu;
    // NOP
    ctx->pc = 0x1afcd0u;
}
