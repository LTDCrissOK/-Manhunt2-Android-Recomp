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

// Function: sub_00238EC8
// Address: 0x238ec8 - 0x239030
void sub_00238EC8_0x238ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238EC8_0x238ec8");
#endif

    switch (ctx->pc) {
        case 0x238ec8u: goto label_238ec8;
        case 0x238eccu: goto label_238ecc;
        case 0x238ed0u: goto label_238ed0;
        case 0x238ed4u: goto label_238ed4;
        case 0x238ed8u: goto label_238ed8;
        case 0x238edcu: goto label_238edc;
        case 0x238ee0u: goto label_238ee0;
        case 0x238ee4u: goto label_238ee4;
        case 0x238ee8u: goto label_238ee8;
        case 0x238eecu: goto label_238eec;
        case 0x238ef0u: goto label_238ef0;
        case 0x238ef4u: goto label_238ef4;
        case 0x238ef8u: goto label_238ef8;
        case 0x238efcu: goto label_238efc;
        case 0x238f00u: goto label_238f00;
        case 0x238f04u: goto label_238f04;
        case 0x238f08u: goto label_238f08;
        case 0x238f0cu: goto label_238f0c;
        case 0x238f10u: goto label_238f10;
        case 0x238f14u: goto label_238f14;
        case 0x238f18u: goto label_238f18;
        case 0x238f1cu: goto label_238f1c;
        case 0x238f20u: goto label_238f20;
        case 0x238f24u: goto label_238f24;
        case 0x238f28u: goto label_238f28;
        case 0x238f2cu: goto label_238f2c;
        case 0x238f30u: goto label_238f30;
        case 0x238f34u: goto label_238f34;
        case 0x238f38u: goto label_238f38;
        case 0x238f3cu: goto label_238f3c;
        case 0x238f40u: goto label_238f40;
        case 0x238f44u: goto label_238f44;
        case 0x238f48u: goto label_238f48;
        case 0x238f4cu: goto label_238f4c;
        case 0x238f50u: goto label_238f50;
        case 0x238f54u: goto label_238f54;
        case 0x238f58u: goto label_238f58;
        case 0x238f5cu: goto label_238f5c;
        case 0x238f60u: goto label_238f60;
        case 0x238f64u: goto label_238f64;
        case 0x238f68u: goto label_238f68;
        case 0x238f6cu: goto label_238f6c;
        case 0x238f70u: goto label_238f70;
        case 0x238f74u: goto label_238f74;
        case 0x238f78u: goto label_238f78;
        case 0x238f7cu: goto label_238f7c;
        case 0x238f80u: goto label_238f80;
        case 0x238f84u: goto label_238f84;
        case 0x238f88u: goto label_238f88;
        case 0x238f8cu: goto label_238f8c;
        case 0x238f90u: goto label_238f90;
        case 0x238f94u: goto label_238f94;
        case 0x238f98u: goto label_238f98;
        case 0x238f9cu: goto label_238f9c;
        case 0x238fa0u: goto label_238fa0;
        case 0x238fa4u: goto label_238fa4;
        case 0x238fa8u: goto label_238fa8;
        case 0x238facu: goto label_238fac;
        case 0x238fb0u: goto label_238fb0;
        case 0x238fb4u: goto label_238fb4;
        case 0x238fb8u: goto label_238fb8;
        case 0x238fbcu: goto label_238fbc;
        case 0x238fc0u: goto label_238fc0;
        case 0x238fc4u: goto label_238fc4;
        case 0x238fc8u: goto label_238fc8;
        case 0x238fccu: goto label_238fcc;
        case 0x238fd0u: goto label_238fd0;
        case 0x238fd4u: goto label_238fd4;
        case 0x238fd8u: goto label_238fd8;
        case 0x238fdcu: goto label_238fdc;
        case 0x238fe0u: goto label_238fe0;
        case 0x238fe4u: goto label_238fe4;
        case 0x238fe8u: goto label_238fe8;
        case 0x238fecu: goto label_238fec;
        case 0x238ff0u: goto label_238ff0;
        case 0x238ff4u: goto label_238ff4;
        case 0x238ff8u: goto label_238ff8;
        case 0x238ffcu: goto label_238ffc;
        case 0x239000u: goto label_239000;
        case 0x239004u: goto label_239004;
        case 0x239008u: goto label_239008;
        case 0x23900cu: goto label_23900c;
        case 0x239010u: goto label_239010;
        case 0x239014u: goto label_239014;
        case 0x239018u: goto label_239018;
        case 0x23901cu: goto label_23901c;
        case 0x239020u: goto label_239020;
        case 0x239024u: goto label_239024;
        case 0x239028u: goto label_239028;
        case 0x23902cu: goto label_23902c;
        default: break;
    }

    ctx->pc = 0x238ec8u;

label_238ec8:
    // 0x238ec8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x238ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_238ecc:
    // 0x238ecc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_238ed0:
    // 0x238ed0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x238ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_238ed4:
    // 0x238ed4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x238ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_238ed8:
    // 0x238ed8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_238edc:
    // 0x238edc: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x238edcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_238ee0:
    // 0x238ee0: 0x8e02042c  lw          $v0, 0x42C($s0)
    ctx->pc = 0x238ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1068)));
label_238ee4:
    // 0x238ee4: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_238ee8:
    if (ctx->pc == 0x238EE8u) {
        ctx->pc = 0x238EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EE4u;
        // 0x238ee8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238EECu;
        goto label_238eec;
    }
    ctx->pc = 0x238EE4u;
    {
        const bool branch_taken_0x238ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EE4u;
        // 0x238ee8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238ee4) {
            ctx->pc = 0x238FA4u;
            goto label_238fa4;
        }
    }
    ctx->pc = 0x238EECu;
label_238eec:
    // 0x238eec: 0xae00042c  sw          $zero, 0x42C($s0)
    ctx->pc = 0x238eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1068), GPR_U32(ctx, 0));
label_238ef0:
    // 0x238ef0: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x238ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_238ef4:
    // 0x238ef4: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x238ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_238ef8:
    // 0x238ef8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x238ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_238efc:
    // 0x238efc: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x238efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_238f00:
    // 0x238f00: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x238f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_238f04:
    // 0x238f04: 0x10a4002e  beq         $a1, $a0, . + 4 + (0x2E << 2)
label_238f08:
    if (ctx->pc == 0x238F08u) {
        ctx->pc = 0x238F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F04u;
        // 0x238f08: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238F0Cu;
        goto label_238f0c;
    }
    ctx->pc = 0x238F04u;
    {
        const bool branch_taken_0x238f04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x238F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F04u;
        // 0x238f08: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238f04) {
            ctx->pc = 0x238FC0u;
            goto label_238fc0;
        }
    }
    ctx->pc = 0x238F0Cu;
label_238f0c:
    // 0x238f0c: 0xc08e0fa  jal         func_2383E8
label_238f10:
    if (ctx->pc == 0x238F10u) {
        ctx->pc = 0x238F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F0Cu;
        // 0x238f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238F14u;
        goto label_238f14;
    }
    ctx->pc = 0x238F0Cu;
    SET_GPR_U32(ctx, 31, 0x238F14u);
    ctx->pc = 0x238F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238F0Cu;
    // 0x238f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2383E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2383E8u, 0x238F0Cu, 0x238F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238F14u;
label_238f14:
    // 0x238f14: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_238f18:
    if (ctx->pc == 0x238F18u) {
        ctx->pc = 0x238F1Cu;
        goto label_238f1c;
    }
    ctx->pc = 0x238F14u;
    {
        const bool branch_taken_0x238f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238f14) {
            ctx->pc = 0x238FC0u;
            goto label_238fc0;
        }
    }
    ctx->pc = 0x238F1Cu;
label_238f1c:
    // 0x238f1c: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x238f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_238f20:
    // 0x238f20: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x238f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_238f24:
    // 0x238f24: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x238f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_238f28:
    // 0x238f28: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x238f28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_238f2c:
    // 0x238f2c: 0xc0763f2  jal         func_1D8FC8
label_238f30:
    if (ctx->pc == 0x238F30u) {
        ctx->pc = 0x238F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F2Cu;
        // 0x238f30: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238F34u;
        goto label_238f34;
    }
    ctx->pc = 0x238F2Cu;
    SET_GPR_U32(ctx, 31, 0x238F34u);
    ctx->pc = 0x238F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238F2Cu;
    // 0x238f30: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8FC8u, 0x238F2Cu, 0x238F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238F34u;
label_238f34:
    // 0x238f34: 0xc0767f2  jal         func_1D9FC8
label_238f38:
    if (ctx->pc == 0x238F38u) {
        ctx->pc = 0x238F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F34u;
        // 0x238f38: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238F3Cu;
        goto label_238f3c;
    }
    ctx->pc = 0x238F34u;
    SET_GPR_U32(ctx, 31, 0x238F3Cu);
    ctx->pc = 0x238F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238F34u;
    // 0x238f38: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x238F34u, 0x238F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238F3Cu;
label_238f3c:
    // 0x238f3c: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x238f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_238f40:
    // 0x238f40: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x238f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_238f44:
    // 0x238f44: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x238f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_238f48:
    // 0x238f48: 0x40f809  jalr        $v0
label_238f4c:
    if (ctx->pc == 0x238F4Cu) {
        ctx->pc = 0x238F50u;
        goto label_238f50;
    }
    ctx->pc = 0x238F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238F50u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238F48u, 0x238F50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x238F50u;
label_238f50:
    // 0x238f50: 0xc076de4  jal         func_1DB790
label_238f54:
    if (ctx->pc == 0x238F54u) {
        ctx->pc = 0x238F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F50u;
        // 0x238f54: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238F58u;
        goto label_238f58;
    }
    ctx->pc = 0x238F50u;
    SET_GPR_U32(ctx, 31, 0x238F58u);
    ctx->pc = 0x238F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238F50u;
    // 0x238f54: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB790u, 0x238F50u, 0x238F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238F58u;
label_238f58:
    // 0x238f58: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x238f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_238f5c:
    // 0x238f5c: 0xc06a0ca  jal         func_1A8328
label_238f60:
    if (ctx->pc == 0x238F60u) {
        ctx->pc = 0x238F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F5Cu;
        // 0x238f60: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x238F64u;
        goto label_238f64;
    }
    ctx->pc = 0x238F5Cu;
    SET_GPR_U32(ctx, 31, 0x238F64u);
    ctx->pc = 0x238F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238F5Cu;
    // 0x238f60: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8328u, 0x238F5Cu, 0x238F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238F64u;
label_238f64:
    // 0x238f64: 0xe6140434  swc1        $f20, 0x434($s0)
    ctx->pc = 0x238f64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1076), bits); }
label_238f68:
    // 0x238f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_238f6c:
    // 0x238f6c: 0xc08bdc6  jal         func_22F718
label_238f70:
    if (ctx->pc == 0x238F70u) {
        ctx->pc = 0x238F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F6Cu;
        // 0x238f70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238F74u;
        goto label_238f74;
    }
    ctx->pc = 0x238F6Cu;
    SET_GPR_U32(ctx, 31, 0x238F74u);
    ctx->pc = 0x238F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238F6Cu;
    // 0x238f70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F718u, 0x238F6Cu, 0x238F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238F74u;
label_238f74:
    // 0x238f74: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x238f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_238f78:
    // 0x238f78: 0x90620032  lbu         $v0, 0x32($v1)
    ctx->pc = 0x238f78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
label_238f7c:
    // 0x238f7c: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
label_238f80:
    if (ctx->pc == 0x238F80u) {
        ctx->pc = 0x238F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F7Cu;
        // 0x238f80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238F84u;
        goto label_238f84;
    }
    ctx->pc = 0x238F7Cu;
    {
        const bool branch_taken_0x238f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238f7c) {
            ctx->pc = 0x238F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238F7Cu;
            // 0x238f80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23901Cu;
            goto label_23901c;
        }
    }
    ctx->pc = 0x238F84u;
label_238f84:
    // 0x238f84: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x238f84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
label_238f88:
    // 0x238f88: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x238f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_238f8c:
    // 0x238f8c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x238f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_238f90:
    // 0x238f90: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x238f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_238f94:
    // 0x238f94: 0x40f809  jalr        $v0
label_238f98:
    if (ctx->pc == 0x238F98u) {
        ctx->pc = 0x238F9Cu;
        goto label_238f9c;
    }
    ctx->pc = 0x238F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238F9Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238F94u, 0x238F9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x238F9Cu;
label_238f9c:
    // 0x238f9c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_238fa0:
    if (ctx->pc == 0x238FA0u) {
        ctx->pc = 0x238FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F9Cu;
        // 0x238fa0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238FA4u;
        goto label_238fa4;
    }
    ctx->pc = 0x238F9Cu;
    {
        const bool branch_taken_0x238f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F9Cu;
        // 0x238fa0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238f9c) {
            ctx->pc = 0x23901Cu;
            goto label_23901c;
        }
    }
    ctx->pc = 0x238FA4u;
label_238fa4:
    // 0x238fa4: 0xc6010434  lwc1        $f1, 0x434($s0)
    ctx->pc = 0x238fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238fa8:
    // 0x238fa8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x238fa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_238fac:
    // 0x238fac: 0x0  nop
    ctx->pc = 0x238facu;
    // NOP
label_238fb0:
    // 0x238fb0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x238fb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_238fb4:
    // 0x238fb4: 0x0  nop
    ctx->pc = 0x238fb4u;
    // NOP
label_238fb8:
    // 0x238fb8: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_238fbc:
    if (ctx->pc == 0x238FBCu) {
        ctx->pc = 0x238FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FB8u;
        // 0x238fbc: 0x8e0300c4  lw          $v1, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238FC0u;
        goto label_238fc0;
    }
    ctx->pc = 0x238FB8u;
    {
        const bool branch_taken_0x238fb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x238fb8) {
            ctx->pc = 0x238FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238FB8u;
            // 0x238fbc: 0x8e0300c4  lw          $v1, 0xC4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238FE4u;
            goto label_238fe4;
        }
    }
    ctx->pc = 0x238FC0u;
label_238fc0:
    // 0x238fc0: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
label_238fc4:
    if (ctx->pc == 0x238FC4u) {
        ctx->pc = 0x238FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FC0u;
        // 0x238fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238FC8u;
        goto label_238fc8;
    }
    ctx->pc = 0x238FC0u;
    {
        const bool branch_taken_0x238fc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x238FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FC0u;
        // 0x238fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238fc0) {
            ctx->pc = 0x239018u;
            goto label_239018;
        }
    }
    ctx->pc = 0x238FC8u;
label_238fc8:
    // 0x238fc8: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x238fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
label_238fcc:
    // 0x238fcc: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x238fccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
label_238fd0:
    // 0x238fd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x238fd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_238fd4:
    // 0x238fd4: 0xc08e2b4  jal         func_238AD0
label_238fd8:
    if (ctx->pc == 0x238FD8u) {
        ctx->pc = 0x238FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FD4u;
        // 0x238fd8: 0xe6000434  swc1        $f0, 0x434($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1076), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x238FDCu;
        goto label_238fdc;
    }
    ctx->pc = 0x238FD4u;
    SET_GPR_U32(ctx, 31, 0x238FDCu);
    ctx->pc = 0x238FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238FD4u;
    // 0x238fd8: 0xe6000434  swc1        $f0, 0x434($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1076), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AD0u, 0x238FD4u, 0x238FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238FDCu;
label_238fdc:
    // 0x238fdc: 0x1000000f  b           . + 4 + (0xF << 2)
label_238fe0:
    if (ctx->pc == 0x238FE0u) {
        ctx->pc = 0x238FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FDCu;
        // 0x238fe0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238FE4u;
        goto label_238fe4;
    }
    ctx->pc = 0x238FDCu;
    {
        const bool branch_taken_0x238fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FDCu;
        // 0x238fe0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238fdc) {
            ctx->pc = 0x23901Cu;
            goto label_23901c;
        }
    }
    ctx->pc = 0x238FE4u;
label_238fe4:
    // 0x238fe4: 0x90620032  lbu         $v0, 0x32($v1)
    ctx->pc = 0x238fe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
label_238fe8:
    // 0x238fe8: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_238fec:
    if (ctx->pc == 0x238FECu) {
        ctx->pc = 0x238FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FE8u;
        // 0x238fec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238FF0u;
        goto label_238ff0;
    }
    ctx->pc = 0x238FE8u;
    {
        const bool branch_taken_0x238fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238fe8) {
            ctx->pc = 0x238FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238FE8u;
            // 0x238fec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23901Cu;
            goto label_23901c;
        }
    }
    ctx->pc = 0x238FF0u;
label_238ff0:
    // 0x238ff0: 0x8e020370  lw          $v0, 0x370($s0)
    ctx->pc = 0x238ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
label_238ff4:
    // 0x238ff4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x238ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_238ff8:
    // 0x238ff8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_238ffc:
    if (ctx->pc == 0x238FFCu) {
        ctx->pc = 0x238FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FF8u;
        // 0x238ffc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239000u;
        goto label_239000;
    }
    ctx->pc = 0x238FF8u;
    {
        const bool branch_taken_0x238ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238ff8) {
            ctx->pc = 0x238FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238FF8u;
            // 0x238ffc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23901Cu;
            goto label_23901c;
        }
    }
    ctx->pc = 0x239000u;
label_239000:
    // 0x239000: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x239000u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
label_239004:
    // 0x239004: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x239004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_239008:
    // 0x239008: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x239008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_23900c:
    // 0x23900c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x23900cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_239010:
    // 0x239010: 0x40f809  jalr        $v0
label_239014:
    if (ctx->pc == 0x239014u) {
        ctx->pc = 0x239018u;
        goto label_239018;
    }
    ctx->pc = 0x239010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x239018u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239010u, 0x239018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x239018u;
label_239018:
    // 0x239018: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23901c:
    // 0x23901c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23901cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_239020:
    // 0x239020: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x239020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_239024:
    // 0x239024: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x239024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_239028:
    // 0x239028: 0x3e00008  jr          $ra
label_23902c:
    if (ctx->pc == 0x23902Cu) {
        ctx->pc = 0x23902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239028u;
        // 0x23902c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239030u;
        goto label_fallthrough_0x239028;
    }
    ctx->pc = 0x239028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239028u;
        // 0x23902c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x239028:
    ctx->pc = 0x239030u;
}
