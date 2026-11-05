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

// Function: sub_002FFAC8
// Address: 0x2ffac8 - 0x2ffbf0
void sub_002FFAC8_0x2ffac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FFAC8_0x2ffac8");
#endif

    switch (ctx->pc) {
        case 0x2ffb08u: goto label_2ffb08;
        case 0x2ffb38u: goto label_2ffb38;
        case 0x2ffb58u: goto label_2ffb58;
        case 0x2ffb80u: goto label_2ffb80;
        case 0x2ffba0u: goto label_2ffba0;
        case 0x2ffbb4u: goto label_2ffbb4;
        case 0x2ffbbcu: goto label_2ffbbc;
        default: break;
    }

    ctx->pc = 0x2ffac8u;

    // 0x2ffac8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ffac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ffacc: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x2ffaccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x2ffad0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ffad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ffad4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ffad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ffad8: 0x24725870  addiu       $s2, $v1, 0x5870
    ctx->pc = 0x2ffad8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 22640));
    // 0x2ffadc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ffadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ffae0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ffae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ffae4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2ffae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2ffae8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2ffae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2ffaec: 0x8e4200e8  lw          $v0, 0xE8($s2)
    ctx->pc = 0x2ffaecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x595958u));
    // 0x2ffaf0: 0x18400037  blez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2FFAF0u;
    {
        const bool branch_taken_0x2ffaf0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2FFAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFAF0u;
        // 0x2ffaf4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffaf0) {
            ctx->pc = 0x2FFBD0u;
            goto label_2ffbd0;
        }
    }
    ctx->pc = 0x2FFAF8u;
    // 0x2ffaf8: 0x265400ec  addiu       $s4, $s2, 0xEC
    ctx->pc = 0x2ffaf8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 236));
    // 0x2ffafc: 0x24130030  addiu       $s3, $zero, 0x30
    ctx->pc = 0x2ffafcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2ffb00: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2ffb00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ffb04: 0x0  nop
    ctx->pc = 0x2ffb04u;
    // NOP
label_2ffb08:
    // 0x2ffb08: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2ffb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2ffb0c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2ffb0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ffb10: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2FFB10u;
    {
        const bool branch_taken_0x2ffb10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB10u;
        // 0x2ffb14: 0x24910001  addiu       $s1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffb10) {
            ctx->pc = 0x2FFBBCu;
            goto label_2ffbbc;
        }
    }
    ctx->pc = 0x2FFB18u;
    // 0x2ffb18: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2ffb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ffb1c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2FFB1Cu;
    {
        const bool branch_taken_0x2ffb1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB1Cu;
        // 0x2ffb20: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffb1c) {
            ctx->pc = 0x2FFB58u;
            goto label_2ffb58;
        }
    }
    ctx->pc = 0x2FFB24u;
    // 0x2ffb24: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x2ffb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x2ffb28: 0x532818  mult        $a1, $v0, $s3
    ctx->pc = 0x2ffb28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2ffb2c: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x2ffb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ffb30: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FFB30u;
    {
        const bool branch_taken_0x2ffb30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FFB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB30u;
        // 0x2ffb34: 0x2442ffd0  addiu       $v0, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffb30) {
            ctx->pc = 0x2FFB50u;
            goto label_2ffb50;
        }
    }
    ctx->pc = 0x2FFB38u;
label_2ffb38:
    // 0x2ffb38: 0x0  nop
    ctx->pc = 0x2ffb38u;
    // NOP
    // 0x2ffb3c: 0x0  nop
    ctx->pc = 0x2ffb3cu;
    // NOP
    // 0x2ffb40: 0x0  nop
    ctx->pc = 0x2ffb40u;
    // NOP
    // 0x2ffb44: 0x0  nop
    ctx->pc = 0x2ffb44u;
    // NOP
    // 0x2ffb48: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2FFB48u;
    {
        const bool branch_taken_0x2ffb48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FFB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB48u;
        // 0x2ffb4c: 0x2442ffd0  addiu       $v0, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffb48) {
            ctx->pc = 0x2FFB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ffb38;
        }
    }
    ctx->pc = 0x2FFB50u;
label_2ffb50:
    // 0x2ffb50: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x2FFB50u;
    SET_GPR_U32(ctx, 31, 0x2FFB58u);
    ctx->pc = 0x2FFB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFB50u;
    // 0x2ffb54: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2FFB50u, 0x2FFB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFB58u;
label_2ffb58:
    // 0x2ffb58: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2ffb58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ffb5c: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FFB5Cu;
    {
        const bool branch_taken_0x2ffb5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffb5c) {
            ctx->pc = 0x2FFB60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFB5Cu;
            // 0x2ffb60: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFBA4u;
            goto label_2ffba4;
        }
    }
    ctx->pc = 0x2FFB64u;
    // 0x2ffb64: 0x8c82fff0  lw          $v0, -0x10($a0)
    ctx->pc = 0x2ffb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x2ffb68: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2ffb68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2ffb6c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2ffb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ffb70: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FFB70u;
    {
        const bool branch_taken_0x2ffb70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FFB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB70u;
        // 0x2ffb74: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffb70) {
            ctx->pc = 0x2FFB98u;
            goto label_2ffb98;
        }
    }
    ctx->pc = 0x2FFB78u;
    // 0x2ffb78: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x2ffb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x2ffb7c: 0x0  nop
    ctx->pc = 0x2ffb7cu;
    // NOP
label_2ffb80:
    // 0x2ffb80: 0x0  nop
    ctx->pc = 0x2ffb80u;
    // NOP
    // 0x2ffb84: 0x0  nop
    ctx->pc = 0x2ffb84u;
    // NOP
    // 0x2ffb88: 0x0  nop
    ctx->pc = 0x2ffb88u;
    // NOP
    // 0x2ffb8c: 0x0  nop
    ctx->pc = 0x2ffb8cu;
    // NOP
    // 0x2ffb90: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2FFB90u;
    {
        const bool branch_taken_0x2ffb90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FFB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB90u;
        // 0x2ffb94: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffb90) {
            ctx->pc = 0x2FFB80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ffb80;
        }
    }
    ctx->pc = 0x2FFB98u;
label_2ffb98:
    // 0x2ffb98: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x2FFB98u;
    SET_GPR_U32(ctx, 31, 0x2FFBA0u);
    ctx->pc = 0x2FFB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFB98u;
    // 0x2ffb9c: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2FFB98u, 0x2FFBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFBA0u;
label_2ffba0:
    // 0x2ffba0: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2ffba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2ffba4:
    // 0x2ffba4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FFBA4u;
    {
        const bool branch_taken_0x2ffba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffba4) {
            ctx->pc = 0x2FFBB4u;
            goto label_2ffbb4;
        }
    }
    ctx->pc = 0x2FFBACu;
    // 0x2ffbac: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x2FFBACu;
    SET_GPR_U32(ctx, 31, 0x2FFBB4u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2FFBACu, 0x2FFBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFBB4u;
label_2ffbb4:
    // 0x2ffbb4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2FFBB4u;
    SET_GPR_U32(ctx, 31, 0x2FFBBCu);
    ctx->pc = 0x2FFBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFBB4u;
    // 0x2ffbb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2FFBB4u, 0x2FFBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFBBCu;
label_2ffbbc:
    // 0x2ffbbc: 0x8e4200e8  lw          $v0, 0xE8($s2)
    ctx->pc = 0x2ffbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
    // 0x2ffbc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ffbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffbc4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2ffbc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ffbc8: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x2FFBC8u;
    {
        const bool branch_taken_0x2ffbc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBC8u;
        // 0x2ffbcc: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffbc8) {
            ctx->pc = 0x2FFB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ffb08;
        }
    }
    ctx->pc = 0x2FFBD0u;
label_2ffbd0:
    // 0x2ffbd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ffbd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ffbd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ffbd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ffbd8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ffbd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ffbdc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ffbdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ffbe0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ffbe0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ffbe4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2ffbe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ffbe8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFBE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBE8u;
        // 0x2ffbec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFBE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFBF0u;
}
