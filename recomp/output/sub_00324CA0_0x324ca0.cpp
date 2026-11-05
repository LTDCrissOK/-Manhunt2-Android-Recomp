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

// Function: sub_00324CA0
// Address: 0x324ca0 - 0x324de8
void sub_00324CA0_0x324ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324CA0_0x324ca0");
#endif

    switch (ctx->pc) {
        case 0x324ce8u: goto label_324ce8;
        case 0x324cf4u: goto label_324cf4;
        case 0x324d00u: goto label_324d00;
        case 0x324d08u: goto label_324d08;
        case 0x324d10u: goto label_324d10;
        case 0x324d18u: goto label_324d18;
        case 0x324d58u: goto label_324d58;
        case 0x324d64u: goto label_324d64;
        case 0x324d80u: goto label_324d80;
        case 0x324d8cu: goto label_324d8c;
        case 0x324da8u: goto label_324da8;
        case 0x324db4u: goto label_324db4;
        default: break;
    }

    ctx->pc = 0x324ca0u;

    // 0x324ca0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x324ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x324ca4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x324ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x324ca8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x324ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x324cac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x324cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x324cb0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x324cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x324cb4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x324cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x324cb8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x324cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x324cbc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x324cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x324cc0: 0x14a2003f  bne         $a1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x324CC0u;
    {
        const bool branch_taken_0x324cc0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x324CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324CC0u;
        // 0x324cc4: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324cc0) {
            ctx->pc = 0x324DC0u;
            goto label_324dc0;
        }
    }
    ctx->pc = 0x324CC8u;
    // 0x324cc8: 0x1080003d  beqz        $a0, . + 4 + (0x3D << 2)
    ctx->pc = 0x324CC8u;
    {
        const bool branch_taken_0x324cc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x324CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324CC8u;
        // 0x324ccc: 0x3c02005b  lui         $v0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324cc8) {
            ctx->pc = 0x324DC0u;
            goto label_324dc0;
        }
    }
    ctx->pc = 0x324CD0u;
    // 0x324cd0: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x324cd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x324cd4: 0x245149e0  addiu       $s1, $v0, 0x49E0
    ctx->pc = 0x324cd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 18912));
    // 0x324cd8: 0x3c14005b  lui         $s4, 0x5B
    ctx->pc = 0x324cd8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)91 << 16));
    // 0x324cdc: 0x3c15005b  lui         $s5, 0x5B
    ctx->pc = 0x324cdcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)91 << 16));
    // 0x324ce0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x324ce0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x324ce4: 0x0  nop
    ctx->pc = 0x324ce4u;
    // NOP
label_324ce8:
    // 0x324ce8: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x324ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x324cec: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x324CECu;
    SET_GPR_U32(ctx, 31, 0x324CF4u);
    ctx->pc = 0x324CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324CECu;
    // 0x324cf0: 0x26300050  addiu       $s0, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x324CECu, 0x324CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324CF4u;
label_324cf4:
    // 0x324cf4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x324cf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x324cf8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x324CF8u;
    SET_GPR_U32(ctx, 31, 0x324D00u);
    ctx->pc = 0x324CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324CF8u;
    // 0x324cfc: 0x26240060  addiu       $a0, $s1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x324CF8u, 0x324D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324D00u;
label_324d00:
    // 0x324d00: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x324D00u;
    SET_GPR_U32(ctx, 31, 0x324D08u);
    ctx->pc = 0x324D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324D00u;
    // 0x324d04: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x324D00u, 0x324D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324D08u;
label_324d08:
    // 0x324d08: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x324D08u;
    SET_GPR_U32(ctx, 31, 0x324D10u);
    ctx->pc = 0x324D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324D08u;
    // 0x324d0c: 0x26240080  addiu       $a0, $s1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x324D08u, 0x324D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324D10u;
label_324d10:
    // 0x324d10: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x324D10u;
    SET_GPR_U32(ctx, 31, 0x324D18u);
    ctx->pc = 0x324D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324D10u;
    // 0x324d14: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x324D10u, 0x324D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324D18u;
label_324d18:
    // 0x324d18: 0x263100f0  addiu       $s1, $s1, 0xF0
    ctx->pc = 0x324d18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x324d1c: 0x1653fff2  bne         $s2, $s3, . + 4 + (-0xE << 2)
    ctx->pc = 0x324D1Cu;
    {
        const bool branch_taken_0x324d1c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x324D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324D1Cu;
        // 0x324d20: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324d1c) {
            ctx->pc = 0x324CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324ce8;
        }
    }
    ctx->pc = 0x324D24u;
    // 0x324d24: 0xae8058e0  sw          $zero, 0x58E0($s4)
    ctx->pc = 0x324d24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 22752), GPR_U32(ctx, 0));
    // 0x324d28: 0x268258e0  addiu       $v0, $s4, 0x58E0
    ctx->pc = 0x324d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 22752));
    // 0x324d2c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x324d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x324d30: 0x26a458f0  addiu       $a0, $s5, 0x58F0
    ctx->pc = 0x324d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 22768));
    // 0x324d34: 0xaea058f0  sw          $zero, 0x58F0($s5)
    ctx->pc = 0x324d34u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 22768), GPR_U32(ctx, 0));
    // 0x324d38: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x324d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
    // 0x324d3c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x324d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x324d40: 0x24725900  addiu       $s2, $v1, 0x5900
    ctx->pc = 0x324d40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 22784));
    // 0x324d44: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x324d44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x324d48: 0x265101b0  addiu       $s1, $s2, 0x1B0
    ctx->pc = 0x324d48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
    // 0x324d4c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x324d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x324d50: 0x24100063  addiu       $s0, $zero, 0x63
    ctx->pc = 0x324d50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x324d54: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x324d54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_324d58:
    // 0x324d58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x324d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324d5c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x324D5Cu;
    SET_GPR_U32(ctx, 31, 0x324D64u);
    ctx->pc = 0x324D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324D5Cu;
    // 0x324d60: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x324D5Cu, 0x324D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324D64u;
label_324d64:
    // 0x324d64: 0x0  nop
    ctx->pc = 0x324d64u;
    // NOP
    // 0x324d68: 0x1613fffb  bne         $s0, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x324D68u;
    {
        const bool branch_taken_0x324d68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x324D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324D68u;
        // 0x324d6c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324d68) {
            ctx->pc = 0x324D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324d58;
        }
    }
    ctx->pc = 0x324D70u;
    // 0x324d70: 0x26530e30  addiu       $s3, $s2, 0xE30
    ctx->pc = 0x324d70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 3632));
    // 0x324d74: 0x265007f0  addiu       $s0, $s2, 0x7F0
    ctx->pc = 0x324d74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 2032));
    // 0x324d78: 0x24110063  addiu       $s1, $zero, 0x63
    ctx->pc = 0x324d78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x324d7c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x324d7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_324d80:
    // 0x324d80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x324d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324d84: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x324D84u;
    SET_GPR_U32(ctx, 31, 0x324D8Cu);
    ctx->pc = 0x324D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324D84u;
    // 0x324d88: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x324D84u, 0x324D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324D8Cu;
label_324d8c:
    // 0x324d8c: 0x0  nop
    ctx->pc = 0x324d8cu;
    // NOP
    // 0x324d90: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x324D90u;
    {
        const bool branch_taken_0x324d90 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x324D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324D90u;
        // 0x324d94: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324d90) {
            ctx->pc = 0x324D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324d80;
        }
    }
    ctx->pc = 0x324D98u;
    // 0x324d98: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x324d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324d9c: 0x24110063  addiu       $s1, $zero, 0x63
    ctx->pc = 0x324d9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x324da0: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x324da0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x324da4: 0x0  nop
    ctx->pc = 0x324da4u;
    // NOP
label_324da8:
    // 0x324da8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x324da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324dac: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x324DACu;
    SET_GPR_U32(ctx, 31, 0x324DB4u);
    ctx->pc = 0x324DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324DACu;
    // 0x324db0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x324DACu, 0x324DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324DB4u;
label_324db4:
    // 0x324db4: 0x0  nop
    ctx->pc = 0x324db4u;
    // NOP
    // 0x324db8: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x324DB8u;
    {
        const bool branch_taken_0x324db8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x324DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324DB8u;
        // 0x324dbc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324db8) {
            ctx->pc = 0x324DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324da8;
        }
    }
    ctx->pc = 0x324DC0u;
label_324dc0:
    // 0x324dc0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x324dc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324dc4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x324dc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x324dc8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x324dc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324dcc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x324dccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x324dd0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x324dd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x324dd4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x324dd4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x324dd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x324dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x324ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x324DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324DDCu;
        // 0x324de0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324DE4u;
    // 0x324de4: 0x0  nop
    ctx->pc = 0x324de4u;
    // NOP
    ctx->pc = 0x324de8u;
}
