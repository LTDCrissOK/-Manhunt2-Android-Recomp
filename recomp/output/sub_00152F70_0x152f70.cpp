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

// Function: sub_00152F70
// Address: 0x152f70 - 0x1530c8
void sub_00152F70_0x152f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152F70_0x152f70");
#endif

    switch (ctx->pc) {
        case 0x152f70u: goto label_152f70;
        case 0x152f74u: goto label_152f74;
        case 0x152f78u: goto label_152f78;
        case 0x152f7cu: goto label_152f7c;
        case 0x152f80u: goto label_152f80;
        case 0x152f84u: goto label_152f84;
        case 0x152f88u: goto label_152f88;
        case 0x152f8cu: goto label_152f8c;
        case 0x152f90u: goto label_152f90;
        case 0x152f94u: goto label_152f94;
        case 0x152f98u: goto label_152f98;
        case 0x152f9cu: goto label_152f9c;
        case 0x152fa0u: goto label_152fa0;
        case 0x152fa4u: goto label_152fa4;
        case 0x152fa8u: goto label_152fa8;
        case 0x152facu: goto label_152fac;
        case 0x152fb0u: goto label_152fb0;
        case 0x152fb4u: goto label_152fb4;
        case 0x152fb8u: goto label_152fb8;
        case 0x152fbcu: goto label_152fbc;
        case 0x152fc0u: goto label_152fc0;
        case 0x152fc4u: goto label_152fc4;
        case 0x152fc8u: goto label_152fc8;
        case 0x152fccu: goto label_152fcc;
        case 0x152fd0u: goto label_152fd0;
        case 0x152fd4u: goto label_152fd4;
        case 0x152fd8u: goto label_152fd8;
        case 0x152fdcu: goto label_152fdc;
        case 0x152fe0u: goto label_152fe0;
        case 0x152fe4u: goto label_152fe4;
        case 0x152fe8u: goto label_152fe8;
        case 0x152fecu: goto label_152fec;
        case 0x152ff0u: goto label_152ff0;
        case 0x152ff4u: goto label_152ff4;
        case 0x152ff8u: goto label_152ff8;
        case 0x152ffcu: goto label_152ffc;
        case 0x153000u: goto label_153000;
        case 0x153004u: goto label_153004;
        case 0x153008u: goto label_153008;
        case 0x15300cu: goto label_15300c;
        case 0x153010u: goto label_153010;
        case 0x153014u: goto label_153014;
        case 0x153018u: goto label_153018;
        case 0x15301cu: goto label_15301c;
        case 0x153020u: goto label_153020;
        case 0x153024u: goto label_153024;
        case 0x153028u: goto label_153028;
        case 0x15302cu: goto label_15302c;
        case 0x153030u: goto label_153030;
        case 0x153034u: goto label_153034;
        case 0x153038u: goto label_153038;
        case 0x15303cu: goto label_15303c;
        case 0x153040u: goto label_153040;
        case 0x153044u: goto label_153044;
        case 0x153048u: goto label_153048;
        case 0x15304cu: goto label_15304c;
        case 0x153050u: goto label_153050;
        case 0x153054u: goto label_153054;
        case 0x153058u: goto label_153058;
        case 0x15305cu: goto label_15305c;
        case 0x153060u: goto label_153060;
        case 0x153064u: goto label_153064;
        case 0x153068u: goto label_153068;
        case 0x15306cu: goto label_15306c;
        case 0x153070u: goto label_153070;
        case 0x153074u: goto label_153074;
        case 0x153078u: goto label_153078;
        case 0x15307cu: goto label_15307c;
        case 0x153080u: goto label_153080;
        case 0x153084u: goto label_153084;
        case 0x153088u: goto label_153088;
        case 0x15308cu: goto label_15308c;
        case 0x153090u: goto label_153090;
        case 0x153094u: goto label_153094;
        case 0x153098u: goto label_153098;
        case 0x15309cu: goto label_15309c;
        case 0x1530a0u: goto label_1530a0;
        case 0x1530a4u: goto label_1530a4;
        case 0x1530a8u: goto label_1530a8;
        case 0x1530acu: goto label_1530ac;
        case 0x1530b0u: goto label_1530b0;
        case 0x1530b4u: goto label_1530b4;
        case 0x1530b8u: goto label_1530b8;
        case 0x1530bcu: goto label_1530bc;
        case 0x1530c0u: goto label_1530c0;
        case 0x1530c4u: goto label_1530c4;
        default: break;
    }

    ctx->pc = 0x152f70u;

label_152f70:
    // 0x152f70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x152f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_152f74:
    // 0x152f74: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x152f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_152f78:
    // 0x152f78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x152f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_152f7c:
    // 0x152f7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x152f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_152f80:
    // 0x152f80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x152f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_152f84:
    // 0x152f84: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x152f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_152f88:
    // 0x152f88: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x152f88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_152f8c:
    // 0x152f8c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x152f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_152f90:
    // 0x152f90: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x152f90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_152f94:
    // 0x152f94: 0xc04d8d6  jal         func_136358
label_152f98:
    if (ctx->pc == 0x152F98u) {
        ctx->pc = 0x152F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F94u;
        // 0x152f98: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152F9Cu;
        goto label_152f9c;
    }
    ctx->pc = 0x152F94u;
    SET_GPR_U32(ctx, 31, 0x152F9Cu);
    ctx->pc = 0x152F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152F94u;
    // 0x152f98: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x152F94u, 0x152F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152F9Cu;
label_152f9c:
    // 0x152f9c: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x152f9cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
label_152fa0:
    // 0x152fa0: 0xc04d8e2  jal         func_136388
label_152fa4:
    if (ctx->pc == 0x152FA4u) {
        ctx->pc = 0x152FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152FA0u;
        // 0x152fa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152FA8u;
        goto label_152fa8;
    }
    ctx->pc = 0x152FA0u;
    SET_GPR_U32(ctx, 31, 0x152FA8u);
    ctx->pc = 0x152FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152FA0u;
    // 0x152fa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x152FA0u, 0x152FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152FA8u;
label_152fa8:
    // 0x152fa8: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x152fa8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
label_152fac:
    // 0x152fac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_152fb0:
    // 0x152fb0: 0xc054bcc  jal         func_152F30
label_152fb4:
    if (ctx->pc == 0x152FB4u) {
        ctx->pc = 0x152FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152FB0u;
        // 0x152fb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152FB8u;
        goto label_152fb8;
    }
    ctx->pc = 0x152FB0u;
    SET_GPR_U32(ctx, 31, 0x152FB8u);
    ctx->pc = 0x152FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152FB0u;
    // 0x152fb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152F30u, 0x152FB0u, 0x152FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152FB8u;
label_152fb8:
    // 0x152fb8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x152fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_152fbc:
    // 0x152fbc: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x152fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
label_152fc0:
    // 0x152fc0: 0x8e450464  lw          $a1, 0x464($s2)
    ctx->pc = 0x152fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1124)));
label_152fc4:
    // 0x152fc4: 0x2610b060  addiu       $s0, $s0, -0x4FA0
    ctx->pc = 0x152fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946912));
label_152fc8:
    // 0x152fc8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x152fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_152fcc:
    // 0x152fcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x152fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_152fd0:
    // 0x152fd0: 0x40f809  jalr        $v0
label_152fd4:
    if (ctx->pc == 0x152FD4u) {
        ctx->pc = 0x152FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152FD0u;
        // 0x152fd4: 0x8cb10010  lw          $s1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152FD8u;
        goto label_152fd8;
    }
    ctx->pc = 0x152FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x152FD8u);
        ctx->pc = 0x152FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152FD0u;
        // 0x152fd4: 0x8cb10010  lw          $s1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152FD0u, 0x152FD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x152FD8u;
label_152fd8:
    // 0x152fd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_152fdc:
    // 0x152fdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x152fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_152fe0:
    // 0x152fe0: 0xc04ae20  jal         func_12B880
label_152fe4:
    if (ctx->pc == 0x152FE4u) {
        ctx->pc = 0x152FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152FE0u;
        // 0x152fe4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152FE8u;
        goto label_152fe8;
    }
    ctx->pc = 0x152FE0u;
    SET_GPR_U32(ctx, 31, 0x152FE8u);
    ctx->pc = 0x152FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152FE0u;
    // 0x152fe4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x152FE0u, 0x152FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152FE8u;
label_152fe8:
    // 0x152fe8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_152fec:
    if (ctx->pc == 0x152FECu) {
        ctx->pc = 0x152FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152FE8u;
        // 0x152fec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152FF0u;
        goto label_152ff0;
    }
    ctx->pc = 0x152FE8u;
    {
        const bool branch_taken_0x152fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152fe8) {
            ctx->pc = 0x152FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152FE8u;
            // 0x152fec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153000u;
            goto label_153000;
        }
    }
    ctx->pc = 0x152FF0u;
label_152ff0:
    // 0x152ff0: 0xc054bd4  jal         func_152F50
label_152ff4:
    if (ctx->pc == 0x152FF4u) {
        ctx->pc = 0x152FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152FF0u;
        // 0x152ff4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152FF8u;
        goto label_152ff8;
    }
    ctx->pc = 0x152FF0u;
    SET_GPR_U32(ctx, 31, 0x152FF8u);
    ctx->pc = 0x152FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152FF0u;
    // 0x152ff4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152F50u, 0x152FF0u, 0x152FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152FF8u;
label_152ff8:
    // 0x152ff8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x152ff8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_152ffc:
    // 0x152ffc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x152ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_153000:
    // 0x153000: 0xc04da9c  jal         func_136A70
label_153004:
    if (ctx->pc == 0x153004u) {
        ctx->pc = 0x153004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153000u;
        // 0x153004: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153008u;
        goto label_153008;
    }
    ctx->pc = 0x153000u;
    SET_GPR_U32(ctx, 31, 0x153008u);
    ctx->pc = 0x153004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153000u;
    // 0x153004: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x153000u, 0x153008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153008u;
label_153008:
    // 0x153008: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x153008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15300c:
    // 0x15300c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x15300cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_153010:
    // 0x153010: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x153010u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_153014:
    // 0x153014: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x153014u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_153018:
    // 0x153018: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x153018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_15301c:
    // 0x15301c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x15301cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_153020:
    // 0x153020: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x153020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_153024:
    // 0x153024: 0xc04daca  jal         func_136B28
label_153028:
    if (ctx->pc == 0x153028u) {
        ctx->pc = 0x153028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153024u;
        // 0x153028: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15302Cu;
        goto label_15302c;
    }
    ctx->pc = 0x153024u;
    SET_GPR_U32(ctx, 31, 0x15302Cu);
    ctx->pc = 0x153028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153024u;
    // 0x153028: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x153024u, 0x15302Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15302Cu;
label_15302c:
    // 0x15302c: 0xc054bd4  jal         func_152F50
label_153030:
    if (ctx->pc == 0x153030u) {
        ctx->pc = 0x153030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15302Cu;
        // 0x153030: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153034u;
        goto label_153034;
    }
    ctx->pc = 0x15302Cu;
    SET_GPR_U32(ctx, 31, 0x153034u);
    ctx->pc = 0x153030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15302Cu;
    // 0x153030: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152F50u, 0x15302Cu, 0x153034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153034u;
label_153034:
    // 0x153034: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x153034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_153038:
    // 0x153038: 0xc046030  jal         func_1180C0
label_15303c:
    if (ctx->pc == 0x15303Cu) {
        ctx->pc = 0x15303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153038u;
        // 0x15303c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153040u;
        goto label_153040;
    }
    ctx->pc = 0x153038u;
    SET_GPR_U32(ctx, 31, 0x153040u);
    ctx->pc = 0x15303Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153038u;
    // 0x15303c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180C0u, 0x153038u, 0x153040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153040u;
label_153040:
    // 0x153040: 0xc64c0524  lwc1        $f12, 0x524($s2)
    ctx->pc = 0x153040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_153044:
    // 0x153044: 0xc046290  jal         func_118A40
label_153048:
    if (ctx->pc == 0x153048u) {
        ctx->pc = 0x153048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153044u;
        // 0x153048: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15304Cu;
        goto label_15304c;
    }
    ctx->pc = 0x153044u;
    SET_GPR_U32(ctx, 31, 0x15304Cu);
    ctx->pc = 0x153048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153044u;
    // 0x153048: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x153044u, 0x15304Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15304Cu;
label_15304c:
    // 0x15304c: 0xc0dde53  jal         func_37794C
label_153050:
    if (ctx->pc == 0x153050u) {
        ctx->pc = 0x153050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15304Cu;
        // 0x153050: 0xc64c0528  lwc1        $f12, 0x528($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x153054u;
        goto label_153054;
    }
    ctx->pc = 0x15304Cu;
    SET_GPR_U32(ctx, 31, 0x153054u);
    ctx->pc = 0x153050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15304Cu;
    // 0x153050: 0xc64c0528  lwc1        $f12, 0x528($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x15304Cu, 0x153054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153054u;
label_153054:
    // 0x153054: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x153054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_153058:
    // 0x153058: 0xc046256  jal         func_118958
label_15305c:
    if (ctx->pc == 0x15305Cu) {
        ctx->pc = 0x15305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153058u;
        // 0x15305c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153060u;
        goto label_153060;
    }
    ctx->pc = 0x153058u;
    SET_GPR_U32(ctx, 31, 0x153060u);
    ctx->pc = 0x15305Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153058u;
    // 0x15305c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x153058u, 0x153060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153060u;
label_153060:
    // 0x153060: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x153060u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
label_153064:
    // 0x153064: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x153064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_153068:
    // 0x153068: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x153068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_15306c:
    // 0x15306c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x15306cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_153070:
    // 0x153070: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x153070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_153074:
    // 0x153074: 0xc04d8f8  jal         func_1363E0
label_153078:
    if (ctx->pc == 0x153078u) {
        ctx->pc = 0x153078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153074u;
        // 0x153078: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15307Cu;
        goto label_15307c;
    }
    ctx->pc = 0x153074u;
    SET_GPR_U32(ctx, 31, 0x15307Cu);
    ctx->pc = 0x153078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153074u;
    // 0x153078: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x153074u, 0x15307Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15307Cu;
label_15307c:
    // 0x15307c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15307cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_153080:
    // 0x153080: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x153080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_153084:
    // 0x153084: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x153084u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_153088:
    // 0x153088: 0xc04dae2  jal         func_136B88
label_15308c:
    if (ctx->pc == 0x15308Cu) {
        ctx->pc = 0x15308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153088u;
        // 0x15308c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153090u;
        goto label_153090;
    }
    ctx->pc = 0x153088u;
    SET_GPR_U32(ctx, 31, 0x153090u);
    ctx->pc = 0x15308Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153088u;
    // 0x15308c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x153088u, 0x153090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153090u;
label_153090:
    // 0x153090: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x153090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_153094:
    // 0x153094: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x153094u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_153098:
    // 0x153098: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x153098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
label_15309c:
    // 0x15309c: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x15309cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1530a0:
    // 0x1530a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1530a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1530a4:
    // 0x1530a4: 0xc043c56  jal         func_10F158
label_1530a8:
    if (ctx->pc == 0x1530A8u) {
        ctx->pc = 0x1530A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1530A4u;
        // 0x1530a8: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1530ACu;
        goto label_1530ac;
    }
    ctx->pc = 0x1530A4u;
    SET_GPR_U32(ctx, 31, 0x1530ACu);
    ctx->pc = 0x1530A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1530A4u;
    // 0x1530a8: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x1530A4u, 0x1530ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1530ACu;
label_1530ac:
    // 0x1530ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1530acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1530b0:
    // 0x1530b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1530b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1530b4:
    // 0x1530b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1530b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1530b8:
    // 0x1530b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1530b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1530bc:
    // 0x1530bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1530bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1530c0:
    // 0x1530c0: 0x3e00008  jr          $ra
label_1530c4:
    if (ctx->pc == 0x1530C4u) {
        ctx->pc = 0x1530C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1530C0u;
        // 0x1530c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1530C8u;
        goto label_fallthrough_0x1530c0;
    }
    ctx->pc = 0x1530C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1530C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1530C0u;
        // 0x1530c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1530C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1530c0:
    ctx->pc = 0x1530C8u;
}
