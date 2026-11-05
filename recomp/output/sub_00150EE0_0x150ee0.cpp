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

// Function: sub_00150EE0
// Address: 0x150ee0 - 0x1511b0
void sub_00150EE0_0x150ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150EE0_0x150ee0");
#endif

    switch (ctx->pc) {
        case 0x150f50u: goto label_150f50;
        case 0x150fa0u: goto label_150fa0;
        case 0x150fc0u: goto label_150fc0;
        case 0x150fd0u: goto label_150fd0;
        case 0x150fdcu: goto label_150fdc;
        case 0x15100cu: goto label_15100c;
        case 0x15101cu: goto label_15101c;
        case 0x151034u: goto label_151034;
        case 0x151050u: goto label_151050;
        case 0x151070u: goto label_151070;
        case 0x15108cu: goto label_15108c;
        case 0x1510bcu: goto label_1510bc;
        case 0x1510d8u: goto label_1510d8;
        case 0x1510e4u: goto label_1510e4;
        case 0x1510f0u: goto label_1510f0;
        case 0x1510fcu: goto label_1510fc;
        case 0x151108u: goto label_151108;
        case 0x15111cu: goto label_15111c;
        case 0x151158u: goto label_151158;
        case 0x15116cu: goto label_15116c;
        case 0x15117cu: goto label_15117c;
        default: break;
    }

    ctx->pc = 0x150ee0u;

    // 0x150ee0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x150ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x150ee4: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x150ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x150ee8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x150ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x150eec: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x150eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x150ef0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x150ef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150ef4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x150ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x150ef8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x150ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x150efc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x150efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x150f00: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x150f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x150f04: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x150f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x150f08: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x150f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x150f0c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x150f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x150f10: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x150f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x150f14: 0x9203046c  lbu         $v1, 0x46C($s0)
    ctx->pc = 0x150f14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x150f18: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x150f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x150f1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x150f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x150f20: 0x8e1708e0  lw          $s7, 0x8E0($s0)
    ctx->pc = 0x150f20u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2272)));
    // 0x150f24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x150f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x150f28: 0x16e2002e  bne         $s7, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x150F28u;
    {
        const bool branch_taken_0x150f28 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x150F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F28u;
        // 0x150f2c: 0x8c760000  lw          $s6, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150f28) {
            ctx->pc = 0x150FE4u;
            goto label_150fe4;
        }
    }
    ctx->pc = 0x150F30u;
    // 0x150f30: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x150f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x150f34: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x150f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x150f38: 0x24519e60  addiu       $s1, $v0, -0x61A0
    ctx->pc = 0x150f38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942304));
    // 0x150f3c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x150f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x150f40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x150f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150f44: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x150f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150f48: 0xc047f94  jal         func_11FE50
    ctx->pc = 0x150F48u;
    SET_GPR_U32(ctx, 31, 0x150F50u);
    ctx->pc = 0x150F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150F48u;
    // 0x150f4c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE50u, 0x150F48u, 0x150F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150F50u;
label_150f50:
    // 0x150f50: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x150F50u;
    {
        const bool branch_taken_0x150f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F50u;
        // 0x150f54: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150f50) {
            ctx->pc = 0x151004u;
            goto label_151004;
        }
    }
    ctx->pc = 0x150F58u;
    // 0x150f58: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x150f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x150f5c: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x150f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x150f60: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x150f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x150f64: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x150f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x150f68: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x150F68u;
    {
        const bool branch_taken_0x150f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F68u;
        // 0x150f6c: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150f68) {
            ctx->pc = 0x150FA4u;
            goto label_150fa4;
        }
    }
    ctx->pc = 0x150F70u;
    // 0x150f70: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x150f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x150f74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x150f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x150f78: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x150f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x150f7c: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x150f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x150f80: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x150F80u;
    {
        const bool branch_taken_0x150f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150f80) {
            ctx->pc = 0x150F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150F80u;
            // 0x150f84: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150F90u;
            goto label_150f90;
        }
    }
    ctx->pc = 0x150F88u;
    // 0x150f88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x150F88u;
    {
        const bool branch_taken_0x150f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F88u;
        // 0x150f8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150f88) {
            ctx->pc = 0x150F98u;
            goto label_150f98;
        }
    }
    ctx->pc = 0x150F90u;
label_150f90:
    // 0x150f90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x150f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150f94: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x150f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_150f98:
    // 0x150f98: 0xc048108  jal         func_120420
    ctx->pc = 0x150F98u;
    SET_GPR_U32(ctx, 31, 0x150FA0u);
    ctx->pc = 0x150F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150F98u;
    // 0x150f9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120420u, 0x150F98u, 0x150FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150FA0u;
label_150fa0:
    // 0x150fa0: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x150fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_150fa4:
    // 0x150fa4: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x150fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x150fa8: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x150fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x150fac: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x150facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150fb0: 0x38e20037  xori        $v0, $a3, 0x37
    ctx->pc = 0x150fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)55);
    // 0x150fb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150fb8: 0xc04dc0c  jal         func_137030
    ctx->pc = 0x150FB8u;
    SET_GPR_U32(ctx, 31, 0x150FC0u);
    ctx->pc = 0x150FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150FB8u;
    // 0x150fbc: 0x62300b  movn        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137030u, 0x150FB8u, 0x150FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150FC0u;
label_150fc0:
    // 0x150fc0: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x150fc0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x150fc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150fc8: 0xc04d936  jal         func_1364D8
    ctx->pc = 0x150FC8u;
    SET_GPR_U32(ctx, 31, 0x150FD0u);
    ctx->pc = 0x150FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150FC8u;
    // 0x150fcc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1364D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1364D8u, 0x150FC8u, 0x150FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150FD0u;
label_150fd0:
    // 0x150fd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150fd4: 0xc053b82  jal         func_14EE08
    ctx->pc = 0x150FD4u;
    SET_GPR_U32(ctx, 31, 0x150FDCu);
    ctx->pc = 0x150FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150FD4u;
    // 0x150fd8: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE08u, 0x150FD4u, 0x150FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150FDCu;
label_150fdc:
    // 0x150fdc: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x150FDCu;
    {
        const bool branch_taken_0x150fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FDCu;
        // 0x150fe0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150fdc) {
            ctx->pc = 0x151180u;
            goto label_151180;
        }
    }
    ctx->pc = 0x150FE4u;
label_150fe4:
    // 0x150fe4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x150fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x150fe8: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x150fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x150fec: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x150fecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150ff0: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x150ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x150ff4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x150ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150ff8: 0x8c55020c  lw          $s5, 0x20C($v0)
    ctx->pc = 0x150ff8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x150ffc: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x150FFCu;
    {
        const bool branch_taken_0x150ffc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x151000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FFCu;
        // 0x151000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ffc) {
            ctx->pc = 0x151014u;
            goto label_151014;
        }
    }
    ctx->pc = 0x151004u;
label_151004:
    // 0x151004: 0xc05446c  jal         func_1511B0
    ctx->pc = 0x151004u;
    SET_GPR_U32(ctx, 31, 0x15100Cu);
    ctx->pc = 0x151008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151004u;
    // 0x151008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1511B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1511B0u, 0x151004u, 0x15100Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15100Cu;
label_15100c:
    // 0x15100c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x15100Cu;
    {
        const bool branch_taken_0x15100c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15100Cu;
        // 0x151010: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15100c) {
            ctx->pc = 0x151180u;
            goto label_151180;
        }
    }
    ctx->pc = 0x151014u;
label_151014:
    // 0x151014: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x151014u;
    SET_GPR_U32(ctx, 31, 0x15101Cu);
    ctx->pc = 0x151018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151014u;
    // 0x151018: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x151014u, 0x15101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15101Cu;
label_15101c:
    // 0x15101c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15101cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151020: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x151020u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151024: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x151024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151028: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x151028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x15102c: 0xc0443cc  jal         func_110F30
    ctx->pc = 0x15102Cu;
    SET_GPR_U32(ctx, 31, 0x151034u);
    ctx->pc = 0x151030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15102Cu;
    // 0x151030: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F30u, 0x15102Cu, 0x151034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151034u;
label_151034:
    // 0x151034: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x151034u;
    {
        const bool branch_taken_0x151034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151034u;
        // 0x151038: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151034) {
            ctx->pc = 0x1510DCu;
            goto label_1510dc;
        }
    }
    ctx->pc = 0x15103Cu;
    // 0x15103c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x15103cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x151040: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x151040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151044: 0x24849e60  addiu       $a0, $a0, -0x61A0
    ctx->pc = 0x151044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942304));
    // 0x151048: 0xc047f94  jal         func_11FE50
    ctx->pc = 0x151048u;
    SET_GPR_U32(ctx, 31, 0x151050u);
    ctx->pc = 0x15104Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151048u;
    // 0x15104c: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE50u, 0x151048u, 0x151050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151050u;
label_151050:
    // 0x151050: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x151050u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151054: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x151054u;
    {
        const bool branch_taken_0x151054 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x151058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151054u;
        // 0x151058: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151054) {
            ctx->pc = 0x151064u;
            goto label_151064;
        }
    }
    ctx->pc = 0x15105Cu;
    // 0x15105c: 0x38420037  xori        $v0, $v0, 0x37
    ctx->pc = 0x15105cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)55);
    // 0x151060: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x151060u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_151064:
    // 0x151064: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x151064u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x151068: 0xc053bb0  jal         func_14EEC0
    ctx->pc = 0x151068u;
    SET_GPR_U32(ctx, 31, 0x151070u);
    ctx->pc = 0x15106Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151068u;
    // 0x15106c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EEC0u, 0x151068u, 0x151070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151070u;
label_151070:
    // 0x151070: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x151070u;
    {
        const bool branch_taken_0x151070 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x151074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151070u;
        // 0x151074: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151070) {
            ctx->pc = 0x1510BCu;
            goto label_1510bc;
        }
    }
    ctx->pc = 0x151078u;
    // 0x151078: 0x271880a  movz        $s1, $s3, $s1
    ctx->pc = 0x151078u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 19));
    // 0x15107c: 0x5620000d  bnel        $s1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x15107Cu;
    {
        const bool branch_taken_0x15107c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x15107c) {
            ctx->pc = 0x151080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15107Cu;
            // 0x151080: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1510B4u;
            goto label_1510b4;
        }
    }
    ctx->pc = 0x151084u;
    // 0x151084: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x151084u;
    SET_GPR_U32(ctx, 31, 0x15108Cu);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x151084u, 0x15108Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15108Cu;
label_15108c:
    // 0x15108c: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x15108cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x151090: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x151090u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x151094: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x151094u;
    {
        const bool branch_taken_0x151094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151094) {
            ctx->pc = 0x151098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151094u;
            // 0x151098: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15109Cu;
            goto label_15109c;
        }
    }
    ctx->pc = 0x15109Cu;
label_15109c:
    // 0x15109c: 0x92a200ac  lbu         $v0, 0xAC($s5)
    ctx->pc = 0x15109cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 172)));
    // 0x1510a0: 0x2010  mfhi        $a0
    ctx->pc = 0x1510a0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1510a4: 0x82882b  sltu        $s1, $a0, $v0
    ctx->pc = 0x1510a4u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1510a8: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1510A8u;
    {
        const bool branch_taken_0x1510a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1510a8) {
            ctx->pc = 0x1510C4u;
            goto label_1510c4;
        }
    }
    ctx->pc = 0x1510B0u;
    // 0x1510b0: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1510b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_1510b4:
    // 0x1510b4: 0xc053b82  jal         func_14EE08
    ctx->pc = 0x1510B4u;
    SET_GPR_U32(ctx, 31, 0x1510BCu);
    ctx->pc = 0x1510B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1510B4u;
    // 0x1510b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE08u, 0x1510B4u, 0x1510BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1510BCu;
label_1510bc:
    // 0x1510bc: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1510BCu;
    {
        const bool branch_taken_0x1510bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1510C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1510BCu;
        // 0x1510c0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1510bc) {
            ctx->pc = 0x1510DCu;
            goto label_1510dc;
        }
    }
    ctx->pc = 0x1510C4u;
label_1510c4:
    // 0x1510c4: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1510C4u;
    {
        const bool branch_taken_0x1510c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1510c4) {
            ctx->pc = 0x1510C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1510C4u;
            // 0x1510c8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1510DCu;
            goto label_1510dc;
        }
    }
    ctx->pc = 0x1510CCu;
    // 0x1510cc: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1510ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x1510d0: 0xc053b9a  jal         func_14EE68
    ctx->pc = 0x1510D0u;
    SET_GPR_U32(ctx, 31, 0x1510D8u);
    ctx->pc = 0x1510D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1510D0u;
    // 0x1510d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE68u, 0x1510D0u, 0x1510D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1510D8u;
label_1510d8:
    // 0x1510d8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1510d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1510dc:
    // 0x1510dc: 0xc046138  jal         func_1184E0
    ctx->pc = 0x1510DCu;
    SET_GPR_U32(ctx, 31, 0x1510E4u);
    ctx->pc = 0x1510E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1510DCu;
    // 0x1510e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1184E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1184E0u, 0x1510DCu, 0x1510E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1510E4u;
label_1510e4:
    // 0x1510e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1510e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1510e8: 0xc046154  jal         func_118550
    ctx->pc = 0x1510E8u;
    SET_GPR_U32(ctx, 31, 0x1510F0u);
    ctx->pc = 0x1510ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1510E8u;
    // 0x1510ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118550u, 0x1510E8u, 0x1510F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1510F0u;
label_1510f0:
    // 0x1510f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1510f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1510f4: 0xc04db8e  jal         func_136E38
    ctx->pc = 0x1510F4u;
    SET_GPR_U32(ctx, 31, 0x1510FCu);
    ctx->pc = 0x1510F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1510F4u;
    // 0x1510f8: 0x260508dc  addiu       $a1, $s0, 0x8DC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136E38u, 0x1510F4u, 0x1510FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1510FCu;
label_1510fc:
    // 0x1510fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1510fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151100: 0xc046256  jal         func_118958
    ctx->pc = 0x151100u;
    SET_GPR_U32(ctx, 31, 0x151108u);
    ctx->pc = 0x151104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151100u;
    // 0x151104: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x151100u, 0x151108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151108u;
label_151108:
    // 0x151108: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x151108u;
    {
        const bool branch_taken_0x151108 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151108u;
        // 0x15110c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151108) {
            ctx->pc = 0x15115Cu;
            goto label_15115c;
        }
    }
    ctx->pc = 0x151110u;
    // 0x151110: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x151110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x151114: 0xc046164  jal         func_118590
    ctx->pc = 0x151114u;
    SET_GPR_U32(ctx, 31, 0x15111Cu);
    ctx->pc = 0x151118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151114u;
    // 0x151118: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118590u, 0x151114u, 0x15111Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15111Cu;
label_15111c:
    // 0x15111c: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x15111cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x151120: 0x27c39a08  addiu       $v1, $fp, -0x65F8
    ctx->pc = 0x151120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941192));
    // 0x151124: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x151124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x151128: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x151128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15112c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15112cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x151130: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x151130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x151134: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x151134u;
    {
        const bool branch_taken_0x151134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151134u;
        // 0x151138: 0x24849e60  addiu       $a0, $a0, -0x61A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151134) {
            ctx->pc = 0x151144u;
            goto label_151144;
        }
    }
    ctx->pc = 0x15113Cu;
    // 0x15113c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15113Cu;
    {
        const bool branch_taken_0x15113c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15113Cu;
        // 0x151140: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15113c) {
            ctx->pc = 0x151150u;
            goto label_151150;
        }
    }
    ctx->pc = 0x151144u;
label_151144:
    // 0x151144: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x151144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x151148: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x151148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15114c: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x15114cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_151150:
    // 0x151150: 0xc048108  jal         func_120420
    ctx->pc = 0x151150u;
    SET_GPR_U32(ctx, 31, 0x151158u);
    ctx->pc = 0x120420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120420u, 0x151150u, 0x151158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151158u;
label_151158:
    // 0x151158: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x151158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_15115c:
    // 0x15115c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x15115cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151164: 0xc04db5a  jal         func_136D68
    ctx->pc = 0x151164u;
    SET_GPR_U32(ctx, 31, 0x15116Cu);
    ctx->pc = 0x151168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151164u;
    // 0x151168: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D68u, 0x151164u, 0x15116Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15116Cu;
label_15116c:
    // 0x15116c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15116cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151170: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x151170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151174: 0xc04d936  jal         func_1364D8
    ctx->pc = 0x151174u;
    SET_GPR_U32(ctx, 31, 0x15117Cu);
    ctx->pc = 0x151178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151174u;
    // 0x151178: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1364D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1364D8u, 0x151174u, 0x15117Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15117Cu;
label_15117c:
    // 0x15117c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x15117cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_151180:
    // 0x151180: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x151180u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x151184: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x151184u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151188: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x151188u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15118c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x15118cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151190: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x151190u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x151194: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x151194u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x151198: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x151198u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15119c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x15119cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1511a0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1511a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1511a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1511A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1511A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1511A4u;
        // 0x1511a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1511A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1511ACu;
    // 0x1511ac: 0x0  nop
    ctx->pc = 0x1511acu;
    // NOP
    ctx->pc = 0x1511b0u;
}
