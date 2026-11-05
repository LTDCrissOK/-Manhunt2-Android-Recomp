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

// Function: sub_00398DA8
// Address: 0x398da8 - 0x398ef8
void sub_00398DA8_0x398da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398DA8_0x398da8");
#endif

    switch (ctx->pc) {
        case 0x398da8u: goto label_398da8;
        case 0x398dacu: goto label_398dac;
        case 0x398db0u: goto label_398db0;
        case 0x398db4u: goto label_398db4;
        case 0x398db8u: goto label_398db8;
        case 0x398dbcu: goto label_398dbc;
        case 0x398dc0u: goto label_398dc0;
        case 0x398dc4u: goto label_398dc4;
        case 0x398dc8u: goto label_398dc8;
        case 0x398dccu: goto label_398dcc;
        case 0x398dd0u: goto label_398dd0;
        case 0x398dd4u: goto label_398dd4;
        case 0x398dd8u: goto label_398dd8;
        case 0x398ddcu: goto label_398ddc;
        case 0x398de0u: goto label_398de0;
        case 0x398de4u: goto label_398de4;
        case 0x398de8u: goto label_398de8;
        case 0x398decu: goto label_398dec;
        case 0x398df0u: goto label_398df0;
        case 0x398df4u: goto label_398df4;
        case 0x398df8u: goto label_398df8;
        case 0x398dfcu: goto label_398dfc;
        case 0x398e00u: goto label_398e00;
        case 0x398e04u: goto label_398e04;
        case 0x398e08u: goto label_398e08;
        case 0x398e0cu: goto label_398e0c;
        case 0x398e10u: goto label_398e10;
        case 0x398e14u: goto label_398e14;
        case 0x398e18u: goto label_398e18;
        case 0x398e1cu: goto label_398e1c;
        case 0x398e20u: goto label_398e20;
        case 0x398e24u: goto label_398e24;
        case 0x398e28u: goto label_398e28;
        case 0x398e2cu: goto label_398e2c;
        case 0x398e30u: goto label_398e30;
        case 0x398e34u: goto label_398e34;
        case 0x398e38u: goto label_398e38;
        case 0x398e3cu: goto label_398e3c;
        case 0x398e40u: goto label_398e40;
        case 0x398e44u: goto label_398e44;
        case 0x398e48u: goto label_398e48;
        case 0x398e4cu: goto label_398e4c;
        case 0x398e50u: goto label_398e50;
        case 0x398e54u: goto label_398e54;
        case 0x398e58u: goto label_398e58;
        case 0x398e5cu: goto label_398e5c;
        case 0x398e60u: goto label_398e60;
        case 0x398e64u: goto label_398e64;
        case 0x398e68u: goto label_398e68;
        case 0x398e6cu: goto label_398e6c;
        case 0x398e70u: goto label_398e70;
        case 0x398e74u: goto label_398e74;
        case 0x398e78u: goto label_398e78;
        case 0x398e7cu: goto label_398e7c;
        case 0x398e80u: goto label_398e80;
        case 0x398e84u: goto label_398e84;
        case 0x398e88u: goto label_398e88;
        case 0x398e8cu: goto label_398e8c;
        case 0x398e90u: goto label_398e90;
        case 0x398e94u: goto label_398e94;
        case 0x398e98u: goto label_398e98;
        case 0x398e9cu: goto label_398e9c;
        case 0x398ea0u: goto label_398ea0;
        case 0x398ea4u: goto label_398ea4;
        case 0x398ea8u: goto label_398ea8;
        case 0x398eacu: goto label_398eac;
        case 0x398eb0u: goto label_398eb0;
        case 0x398eb4u: goto label_398eb4;
        case 0x398eb8u: goto label_398eb8;
        case 0x398ebcu: goto label_398ebc;
        case 0x398ec0u: goto label_398ec0;
        case 0x398ec4u: goto label_398ec4;
        case 0x398ec8u: goto label_398ec8;
        case 0x398eccu: goto label_398ecc;
        case 0x398ed0u: goto label_398ed0;
        case 0x398ed4u: goto label_398ed4;
        case 0x398ed8u: goto label_398ed8;
        case 0x398edcu: goto label_398edc;
        case 0x398ee0u: goto label_398ee0;
        case 0x398ee4u: goto label_398ee4;
        case 0x398ee8u: goto label_398ee8;
        case 0x398eecu: goto label_398eec;
        case 0x398ef0u: goto label_398ef0;
        case 0x398ef4u: goto label_398ef4;
        default: break;
    }

    ctx->pc = 0x398da8u;

label_398da8:
    // 0x398da8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x398da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_398dac:
    // 0x398dac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x398dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_398db0:
    // 0x398db0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x398db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_398db4:
    // 0x398db4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x398db4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_398db8:
    // 0x398db8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x398db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_398dbc:
    // 0x398dbc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x398dbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398dc0:
    // 0x398dc0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x398dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_398dc4:
    // 0x398dc4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x398dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_398dc8:
    // 0x398dc8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x398dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_398dcc:
    // 0x398dcc: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x398dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_398dd0:
    // 0x398dd0: 0x82430002  lb          $v1, 0x2($s2)
    ctx->pc = 0x398dd0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_398dd4:
    // 0x398dd4: 0x28840  sll         $s1, $v0, 1
    ctx->pc = 0x398dd4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_398dd8:
    // 0x398dd8: 0x1860001a  blez        $v1, . + 4 + (0x1A << 2)
label_398ddc:
    if (ctx->pc == 0x398DDCu) {
        ctx->pc = 0x398DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398DD8u;
        // 0x398ddc: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398DE0u;
        goto label_398de0;
    }
    ctx->pc = 0x398DD8u;
    {
        const bool branch_taken_0x398dd8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x398DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398DD8u;
        // 0x398ddc: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398dd8) {
            ctx->pc = 0x398E44u;
            goto label_398e44;
        }
    }
    ctx->pc = 0x398DE0u;
label_398de0:
    // 0x398de0: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x398de0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_398de4:
    // 0x398de4: 0x0  nop
    ctx->pc = 0x398de4u;
    // NOP
label_398de8:
    // 0x398de8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x398de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_398dec:
    // 0x398dec: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x398decu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_398df0:
    // 0x398df0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x398df0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_398df4:
    // 0x398df4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x398df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398df8:
    // 0x398df8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x398df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_398dfc:
    // 0x398dfc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x398dfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_398e00:
    // 0x398e00: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x398e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_398e04:
    // 0x398e04: 0x40f809  jalr        $v0
label_398e08:
    if (ctx->pc == 0x398E08u) {
        ctx->pc = 0x398E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E04u;
        // 0x398e08: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398E0Cu;
        goto label_398e0c;
    }
    ctx->pc = 0x398E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398E0Cu);
        ctx->pc = 0x398E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E04u;
        // 0x398e08: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398E04u, 0x398E0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398E0Cu;
label_398e0c:
    // 0x398e0c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x398e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_398e10:
    // 0x398e10: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x398e10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_398e14:
    // 0x398e14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x398e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398e18:
    // 0x398e18: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x398e18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_398e1c:
    // 0x398e1c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x398e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_398e20:
    // 0x398e20: 0x228102a  slt         $v0, $s1, $t0
    ctx->pc = 0x398e20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_398e24:
    // 0x398e24: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x398e24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_398e28:
    // 0x398e28: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x398e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
label_398e2c:
    // 0x398e2c: 0x60f809  jalr        $v1
label_398e30:
    if (ctx->pc == 0x398E30u) {
        ctx->pc = 0x398E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E2Cu;
        // 0x398e30: 0x102880a  movz        $s1, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398E34u;
        goto label_398e34;
    }
    ctx->pc = 0x398E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x398E34u);
        ctx->pc = 0x398E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E2Cu;
        // 0x398e30: 0x102880a  movz        $s1, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398E2Cu, 0x398E34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398E34u;
label_398e34:
    // 0x398e34: 0x82420002  lb          $v0, 0x2($s2)
    ctx->pc = 0x398e34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_398e38:
    // 0x398e38: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x398e38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_398e3c:
    // 0x398e3c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_398e40:
    if (ctx->pc == 0x398E40u) {
        ctx->pc = 0x398E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E3Cu;
        // 0x398e40: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398E44u;
        goto label_398e44;
    }
    ctx->pc = 0x398E3Cu;
    {
        const bool branch_taken_0x398e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x398E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E3Cu;
        // 0x398e40: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398e3c) {
            ctx->pc = 0x398DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398de8;
        }
    }
    ctx->pc = 0x398E44u;
label_398e44:
    // 0x398e44: 0x1117c2  srl         $v0, $s1, 31
    ctx->pc = 0x398e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
label_398e48:
    // 0x398e48: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x398e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_398e4c:
    // 0x398e4c: 0x2a043  sra         $s4, $v0, 1
    ctx->pc = 0x398e4cu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 1));
label_398e50:
    // 0x398e50: 0x148840  sll         $s1, $s4, 1
    ctx->pc = 0x398e50u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_398e54:
    // 0x398e54: 0x1a200020  blez        $s1, . + 4 + (0x20 << 2)
label_398e58:
    if (ctx->pc == 0x398E58u) {
        ctx->pc = 0x398E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E54u;
        // 0x398e58: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398E5Cu;
        goto label_398e5c;
    }
    ctx->pc = 0x398E54u;
    {
        const bool branch_taken_0x398e54 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x398E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E54u;
        // 0x398e58: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398e54) {
            ctx->pc = 0x398ED8u;
            goto label_398ed8;
        }
    }
    ctx->pc = 0x398E5Cu;
label_398e5c:
    // 0x398e5c: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x398e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_398e60:
    // 0x398e60: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
label_398e64:
    if (ctx->pc == 0x398E64u) {
        ctx->pc = 0x398E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E60u;
        // 0x398e64: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398E68u;
        goto label_398e68;
    }
    ctx->pc = 0x398E60u;
    {
        const bool branch_taken_0x398e60 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x398E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E60u;
        // 0x398e64: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398e60) {
            ctx->pc = 0x398EC8u;
            goto label_398ec8;
        }
    }
    ctx->pc = 0x398E68u;
label_398e68:
    // 0x398e68: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x398e68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_398e6c:
    // 0x398e6c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x398e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_398e70:
    // 0x398e70: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x398e70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_398e74:
    // 0x398e74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x398e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398e78:
    // 0x398e78: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x398e78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_398e7c:
    // 0x398e7c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x398e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_398e80:
    // 0x398e80: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x398e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_398e84:
    // 0x398e84: 0x40f809  jalr        $v0
label_398e88:
    if (ctx->pc == 0x398E88u) {
        ctx->pc = 0x398E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E84u;
        // 0x398e88: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398E8Cu;
        goto label_398e8c;
    }
    ctx->pc = 0x398E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398E8Cu);
        ctx->pc = 0x398E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E84u;
        // 0x398e88: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398E84u, 0x398E8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398E8Cu;
label_398e8c:
    // 0x398e8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x398e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398e90:
    // 0x398e90: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x398e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_398e94:
    // 0x398e94: 0xc0efab3  jal         func_3BEACC
label_398e98:
    if (ctx->pc == 0x398E98u) {
        ctx->pc = 0x398E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E94u;
        // 0x398e98: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398E9Cu;
        goto label_398e9c;
    }
    ctx->pc = 0x398E94u;
    SET_GPR_U32(ctx, 31, 0x398E9Cu);
    ctx->pc = 0x398E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398E94u;
    // 0x398e98: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x398E94u, 0x398E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398E9Cu;
label_398e9c:
    // 0x398e9c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x398e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_398ea0:
    // 0x398ea0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x398ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_398ea4:
    // 0x398ea4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x398ea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_398ea8:
    // 0x398ea8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x398ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_398eac:
    // 0x398eac: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x398eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_398eb0:
    // 0x398eb0: 0x60f809  jalr        $v1
label_398eb4:
    if (ctx->pc == 0x398EB4u) {
        ctx->pc = 0x398EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398EB0u;
        // 0x398eb4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398EB8u;
        goto label_398eb8;
    }
    ctx->pc = 0x398EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x398EB8u);
        ctx->pc = 0x398EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398EB0u;
        // 0x398eb4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398EB0u, 0x398EB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398EB8u;
label_398eb8:
    // 0x398eb8: 0x82420002  lb          $v0, 0x2($s2)
    ctx->pc = 0x398eb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_398ebc:
    // 0x398ebc: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x398ebcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_398ec0:
    // 0x398ec0: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
label_398ec4:
    if (ctx->pc == 0x398EC4u) {
        ctx->pc = 0x398EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398EC0u;
        // 0x398ec4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398EC8u;
        goto label_398ec8;
    }
    ctx->pc = 0x398EC0u;
    {
        const bool branch_taken_0x398ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x398ec0) {
            ctx->pc = 0x398EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398EC0u;
            // 0x398ec4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398e70;
        }
    }
    ctx->pc = 0x398EC8u;
label_398ec8:
    // 0x398ec8: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x398ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_398ecc:
    // 0x398ecc: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x398eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_398ed0:
    // 0x398ed0: 0xae4200a0  sw          $v0, 0xA0($s2)
    ctx->pc = 0x398ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
label_398ed4:
    // 0x398ed4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x398ed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_398ed8:
    // 0x398ed8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x398ed8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_398edc:
    // 0x398edc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x398edcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_398ee0:
    // 0x398ee0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x398ee0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_398ee4:
    // 0x398ee4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x398ee4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_398ee8:
    // 0x398ee8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x398ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_398eec:
    // 0x398eec: 0x3e00008  jr          $ra
label_398ef0:
    if (ctx->pc == 0x398EF0u) {
        ctx->pc = 0x398EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398EECu;
        // 0x398ef0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398EF4u;
        goto label_398ef4;
    }
    ctx->pc = 0x398EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398EECu;
        // 0x398ef0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398EF4u;
label_398ef4:
    // 0x398ef4: 0x0  nop
    ctx->pc = 0x398ef4u;
    // NOP
    ctx->pc = 0x398ef8u;
}
