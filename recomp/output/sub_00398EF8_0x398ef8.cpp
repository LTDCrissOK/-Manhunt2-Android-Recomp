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

// Function: sub_00398EF8
// Address: 0x398ef8 - 0x399040
void sub_00398EF8_0x398ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398EF8_0x398ef8");
#endif

    switch (ctx->pc) {
        case 0x398ef8u: goto label_398ef8;
        case 0x398efcu: goto label_398efc;
        case 0x398f00u: goto label_398f00;
        case 0x398f04u: goto label_398f04;
        case 0x398f08u: goto label_398f08;
        case 0x398f0cu: goto label_398f0c;
        case 0x398f10u: goto label_398f10;
        case 0x398f14u: goto label_398f14;
        case 0x398f18u: goto label_398f18;
        case 0x398f1cu: goto label_398f1c;
        case 0x398f20u: goto label_398f20;
        case 0x398f24u: goto label_398f24;
        case 0x398f28u: goto label_398f28;
        case 0x398f2cu: goto label_398f2c;
        case 0x398f30u: goto label_398f30;
        case 0x398f34u: goto label_398f34;
        case 0x398f38u: goto label_398f38;
        case 0x398f3cu: goto label_398f3c;
        case 0x398f40u: goto label_398f40;
        case 0x398f44u: goto label_398f44;
        case 0x398f48u: goto label_398f48;
        case 0x398f4cu: goto label_398f4c;
        case 0x398f50u: goto label_398f50;
        case 0x398f54u: goto label_398f54;
        case 0x398f58u: goto label_398f58;
        case 0x398f5cu: goto label_398f5c;
        case 0x398f60u: goto label_398f60;
        case 0x398f64u: goto label_398f64;
        case 0x398f68u: goto label_398f68;
        case 0x398f6cu: goto label_398f6c;
        case 0x398f70u: goto label_398f70;
        case 0x398f74u: goto label_398f74;
        case 0x398f78u: goto label_398f78;
        case 0x398f7cu: goto label_398f7c;
        case 0x398f80u: goto label_398f80;
        case 0x398f84u: goto label_398f84;
        case 0x398f88u: goto label_398f88;
        case 0x398f8cu: goto label_398f8c;
        case 0x398f90u: goto label_398f90;
        case 0x398f94u: goto label_398f94;
        case 0x398f98u: goto label_398f98;
        case 0x398f9cu: goto label_398f9c;
        case 0x398fa0u: goto label_398fa0;
        case 0x398fa4u: goto label_398fa4;
        case 0x398fa8u: goto label_398fa8;
        case 0x398facu: goto label_398fac;
        case 0x398fb0u: goto label_398fb0;
        case 0x398fb4u: goto label_398fb4;
        case 0x398fb8u: goto label_398fb8;
        case 0x398fbcu: goto label_398fbc;
        case 0x398fc0u: goto label_398fc0;
        case 0x398fc4u: goto label_398fc4;
        case 0x398fc8u: goto label_398fc8;
        case 0x398fccu: goto label_398fcc;
        case 0x398fd0u: goto label_398fd0;
        case 0x398fd4u: goto label_398fd4;
        case 0x398fd8u: goto label_398fd8;
        case 0x398fdcu: goto label_398fdc;
        case 0x398fe0u: goto label_398fe0;
        case 0x398fe4u: goto label_398fe4;
        case 0x398fe8u: goto label_398fe8;
        case 0x398fecu: goto label_398fec;
        case 0x398ff0u: goto label_398ff0;
        case 0x398ff4u: goto label_398ff4;
        case 0x398ff8u: goto label_398ff8;
        case 0x398ffcu: goto label_398ffc;
        case 0x399000u: goto label_399000;
        case 0x399004u: goto label_399004;
        case 0x399008u: goto label_399008;
        case 0x39900cu: goto label_39900c;
        case 0x399010u: goto label_399010;
        case 0x399014u: goto label_399014;
        case 0x399018u: goto label_399018;
        case 0x39901cu: goto label_39901c;
        case 0x399020u: goto label_399020;
        case 0x399024u: goto label_399024;
        case 0x399028u: goto label_399028;
        case 0x39902cu: goto label_39902c;
        case 0x399030u: goto label_399030;
        case 0x399034u: goto label_399034;
        case 0x399038u: goto label_399038;
        case 0x39903cu: goto label_39903c;
        default: break;
    }

    ctx->pc = 0x398ef8u;

label_398ef8:
    // 0x398ef8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x398ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_398efc:
    // 0x398efc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x398efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_398f00:
    // 0x398f00: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x398f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_398f04:
    // 0x398f04: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x398f04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_398f08:
    // 0x398f08: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x398f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_398f0c:
    // 0x398f0c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x398f0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398f10:
    // 0x398f10: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x398f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_398f14:
    // 0x398f14: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x398f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_398f18:
    // 0x398f18: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x398f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_398f1c:
    // 0x398f1c: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x398f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_398f20:
    // 0x398f20: 0x82430002  lb          $v1, 0x2($s2)
    ctx->pc = 0x398f20u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_398f24:
    // 0x398f24: 0x28840  sll         $s1, $v0, 1
    ctx->pc = 0x398f24u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_398f28:
    // 0x398f28: 0x1860001a  blez        $v1, . + 4 + (0x1A << 2)
label_398f2c:
    if (ctx->pc == 0x398F2Cu) {
        ctx->pc = 0x398F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F28u;
        // 0x398f2c: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398F30u;
        goto label_398f30;
    }
    ctx->pc = 0x398F28u;
    {
        const bool branch_taken_0x398f28 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x398F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F28u;
        // 0x398f2c: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398f28) {
            ctx->pc = 0x398F94u;
            goto label_398f94;
        }
    }
    ctx->pc = 0x398F30u;
label_398f30:
    // 0x398f30: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x398f30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_398f34:
    // 0x398f34: 0x0  nop
    ctx->pc = 0x398f34u;
    // NOP
label_398f38:
    // 0x398f38: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x398f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_398f3c:
    // 0x398f3c: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x398f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_398f40:
    // 0x398f40: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x398f40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_398f44:
    // 0x398f44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x398f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_398f48:
    // 0x398f48: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x398f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_398f4c:
    // 0x398f4c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x398f4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_398f50:
    // 0x398f50: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x398f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_398f54:
    // 0x398f54: 0x40f809  jalr        $v0
label_398f58:
    if (ctx->pc == 0x398F58u) {
        ctx->pc = 0x398F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F54u;
        // 0x398f58: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398F5Cu;
        goto label_398f5c;
    }
    ctx->pc = 0x398F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398F5Cu);
        ctx->pc = 0x398F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F54u;
        // 0x398f58: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398F54u, 0x398F5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398F5Cu;
label_398f5c:
    // 0x398f5c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x398f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_398f60:
    // 0x398f60: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x398f60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_398f64:
    // 0x398f64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x398f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_398f68:
    // 0x398f68: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x398f68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_398f6c:
    // 0x398f6c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x398f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_398f70:
    // 0x398f70: 0x228102a  slt         $v0, $s1, $t0
    ctx->pc = 0x398f70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_398f74:
    // 0x398f74: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x398f74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_398f78:
    // 0x398f78: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x398f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
label_398f7c:
    // 0x398f7c: 0x60f809  jalr        $v1
label_398f80:
    if (ctx->pc == 0x398F80u) {
        ctx->pc = 0x398F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F7Cu;
        // 0x398f80: 0x102880a  movz        $s1, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398F84u;
        goto label_398f84;
    }
    ctx->pc = 0x398F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x398F84u);
        ctx->pc = 0x398F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F7Cu;
        // 0x398f80: 0x102880a  movz        $s1, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398F7Cu, 0x398F84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398F84u;
label_398f84:
    // 0x398f84: 0x82420002  lb          $v0, 0x2($s2)
    ctx->pc = 0x398f84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_398f88:
    // 0x398f88: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x398f88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_398f8c:
    // 0x398f8c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_398f90:
    if (ctx->pc == 0x398F90u) {
        ctx->pc = 0x398F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F8Cu;
        // 0x398f90: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398F94u;
        goto label_398f94;
    }
    ctx->pc = 0x398F8Cu;
    {
        const bool branch_taken_0x398f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x398F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F8Cu;
        // 0x398f90: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398f8c) {
            ctx->pc = 0x398F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398f38;
        }
    }
    ctx->pc = 0x398F94u;
label_398f94:
    // 0x398f94: 0x1117c2  srl         $v0, $s1, 31
    ctx->pc = 0x398f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
label_398f98:
    // 0x398f98: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x398f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_398f9c:
    // 0x398f9c: 0x2a043  sra         $s4, $v0, 1
    ctx->pc = 0x398f9cu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 1));
label_398fa0:
    // 0x398fa0: 0x148840  sll         $s1, $s4, 1
    ctx->pc = 0x398fa0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_398fa4:
    // 0x398fa4: 0x1a20001c  blez        $s1, . + 4 + (0x1C << 2)
label_398fa8:
    if (ctx->pc == 0x398FA8u) {
        ctx->pc = 0x398FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398FA4u;
        // 0x398fa8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398FACu;
        goto label_398fac;
    }
    ctx->pc = 0x398FA4u;
    {
        const bool branch_taken_0x398fa4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x398FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398FA4u;
        // 0x398fa8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398fa4) {
            ctx->pc = 0x399018u;
            goto label_399018;
        }
    }
    ctx->pc = 0x398FACu;
label_398fac:
    // 0x398fac: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x398facu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_398fb0:
    // 0x398fb0: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
label_398fb4:
    if (ctx->pc == 0x398FB4u) {
        ctx->pc = 0x398FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398FB0u;
        // 0x398fb4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398FB8u;
        goto label_398fb8;
    }
    ctx->pc = 0x398FB0u;
    {
        const bool branch_taken_0x398fb0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x398FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398FB0u;
        // 0x398fb4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398fb0) {
            ctx->pc = 0x399008u;
            goto label_399008;
        }
    }
    ctx->pc = 0x398FB8u;
label_398fb8:
    // 0x398fb8: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x398fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_398fbc:
    // 0x398fbc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x398fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_398fc0:
    // 0x398fc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x398fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_398fc4:
    // 0x398fc4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x398fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_398fc8:
    // 0x398fc8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x398fc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_398fcc:
    // 0x398fcc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x398fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_398fd0:
    // 0x398fd0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x398fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_398fd4:
    // 0x398fd4: 0x40f809  jalr        $v0
label_398fd8:
    if (ctx->pc == 0x398FD8u) {
        ctx->pc = 0x398FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398FD4u;
        // 0x398fd8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398FDCu;
        goto label_398fdc;
    }
    ctx->pc = 0x398FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398FDCu);
        ctx->pc = 0x398FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398FD4u;
        // 0x398fd8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398FD4u, 0x398FDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398FDCu;
label_398fdc:
    // 0x398fdc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x398fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_398fe0:
    // 0x398fe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x398fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398fe4:
    // 0x398fe4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x398fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_398fe8:
    // 0x398fe8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x398fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_398fec:
    // 0x398fec: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x398fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_398ff0:
    // 0x398ff0: 0x60f809  jalr        $v1
label_398ff4:
    if (ctx->pc == 0x398FF4u) {
        ctx->pc = 0x398FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398FF0u;
        // 0x398ff4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398FF8u;
        goto label_398ff8;
    }
    ctx->pc = 0x398FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x398FF8u);
        ctx->pc = 0x398FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398FF0u;
        // 0x398ff4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398FF0u, 0x398FF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398FF8u;
label_398ff8:
    // 0x398ff8: 0x82420002  lb          $v0, 0x2($s2)
    ctx->pc = 0x398ff8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_398ffc:
    // 0x398ffc: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x398ffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_399000:
    // 0x399000: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
label_399004:
    if (ctx->pc == 0x399004u) {
        ctx->pc = 0x399004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399000u;
        // 0x399004: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399008u;
        goto label_399008;
    }
    ctx->pc = 0x399000u;
    {
        const bool branch_taken_0x399000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x399000) {
            ctx->pc = 0x399004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399000u;
            // 0x399004: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398fc0;
        }
    }
    ctx->pc = 0x399008u;
label_399008:
    // 0x399008: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x399008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_39900c:
    // 0x39900c: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x39900cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_399010:
    // 0x399010: 0xae4200a4  sw          $v0, 0xA4($s2)
    ctx->pc = 0x399010u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 2));
label_399014:
    // 0x399014: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x399014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_399018:
    // 0x399018: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x399018u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_39901c:
    // 0x39901c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x39901cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_399020:
    // 0x399020: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x399020u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_399024:
    // 0x399024: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x399024u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_399028:
    // 0x399028: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x399028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_39902c:
    // 0x39902c: 0x3e00008  jr          $ra
label_399030:
    if (ctx->pc == 0x399030u) {
        ctx->pc = 0x399030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39902Cu;
        // 0x399030: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399034u;
        goto label_399034;
    }
    ctx->pc = 0x39902Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39902Cu;
        // 0x399030: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39902Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399034u;
label_399034:
    // 0x399034: 0x0  nop
    ctx->pc = 0x399034u;
    // NOP
label_399038:
    // 0x399038: 0xad270010  sw          $a3, 0x10($t1)
    ctx->pc = 0x399038u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 7));
label_39903c:
    // 0x39903c: 0x0  nop
    ctx->pc = 0x39903cu;
    // NOP
    ctx->pc = 0x399040u;
}
