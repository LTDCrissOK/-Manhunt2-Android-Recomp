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

// Function: sub_00139F58
// Address: 0x139f58 - 0x13a080
void sub_00139F58_0x139f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139F58_0x139f58");
#endif

    switch (ctx->pc) {
        case 0x139f58u: goto label_139f58;
        case 0x139f5cu: goto label_139f5c;
        case 0x139f60u: goto label_139f60;
        case 0x139f64u: goto label_139f64;
        case 0x139f68u: goto label_139f68;
        case 0x139f6cu: goto label_139f6c;
        case 0x139f70u: goto label_139f70;
        case 0x139f74u: goto label_139f74;
        case 0x139f78u: goto label_139f78;
        case 0x139f7cu: goto label_139f7c;
        case 0x139f80u: goto label_139f80;
        case 0x139f84u: goto label_139f84;
        case 0x139f88u: goto label_139f88;
        case 0x139f8cu: goto label_139f8c;
        case 0x139f90u: goto label_139f90;
        case 0x139f94u: goto label_139f94;
        case 0x139f98u: goto label_139f98;
        case 0x139f9cu: goto label_139f9c;
        case 0x139fa0u: goto label_139fa0;
        case 0x139fa4u: goto label_139fa4;
        case 0x139fa8u: goto label_139fa8;
        case 0x139facu: goto label_139fac;
        case 0x139fb0u: goto label_139fb0;
        case 0x139fb4u: goto label_139fb4;
        case 0x139fb8u: goto label_139fb8;
        case 0x139fbcu: goto label_139fbc;
        case 0x139fc0u: goto label_139fc0;
        case 0x139fc4u: goto label_139fc4;
        case 0x139fc8u: goto label_139fc8;
        case 0x139fccu: goto label_139fcc;
        case 0x139fd0u: goto label_139fd0;
        case 0x139fd4u: goto label_139fd4;
        case 0x139fd8u: goto label_139fd8;
        case 0x139fdcu: goto label_139fdc;
        case 0x139fe0u: goto label_139fe0;
        case 0x139fe4u: goto label_139fe4;
        case 0x139fe8u: goto label_139fe8;
        case 0x139fecu: goto label_139fec;
        case 0x139ff0u: goto label_139ff0;
        case 0x139ff4u: goto label_139ff4;
        case 0x139ff8u: goto label_139ff8;
        case 0x139ffcu: goto label_139ffc;
        case 0x13a000u: goto label_13a000;
        case 0x13a004u: goto label_13a004;
        case 0x13a008u: goto label_13a008;
        case 0x13a00cu: goto label_13a00c;
        case 0x13a010u: goto label_13a010;
        case 0x13a014u: goto label_13a014;
        case 0x13a018u: goto label_13a018;
        case 0x13a01cu: goto label_13a01c;
        case 0x13a020u: goto label_13a020;
        case 0x13a024u: goto label_13a024;
        case 0x13a028u: goto label_13a028;
        case 0x13a02cu: goto label_13a02c;
        case 0x13a030u: goto label_13a030;
        case 0x13a034u: goto label_13a034;
        case 0x13a038u: goto label_13a038;
        case 0x13a03cu: goto label_13a03c;
        case 0x13a040u: goto label_13a040;
        case 0x13a044u: goto label_13a044;
        case 0x13a048u: goto label_13a048;
        case 0x13a04cu: goto label_13a04c;
        case 0x13a050u: goto label_13a050;
        case 0x13a054u: goto label_13a054;
        case 0x13a058u: goto label_13a058;
        case 0x13a05cu: goto label_13a05c;
        case 0x13a060u: goto label_13a060;
        case 0x13a064u: goto label_13a064;
        case 0x13a068u: goto label_13a068;
        case 0x13a06cu: goto label_13a06c;
        case 0x13a070u: goto label_13a070;
        case 0x13a074u: goto label_13a074;
        case 0x13a078u: goto label_13a078;
        case 0x13a07cu: goto label_13a07c;
        default: break;
    }

    ctx->pc = 0x139f58u;

label_139f58:
    // 0x139f58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x139f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_139f5c:
    // 0x139f5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x139f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_139f60:
    // 0x139f60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x139f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_139f64:
    // 0x139f64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x139f64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_139f68:
    // 0x139f68: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x139f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_139f6c:
    // 0x139f6c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x139f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_139f70:
    // 0x139f70: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x139f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_139f74:
    // 0x139f74: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x139f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_139f78:
    // 0x139f78: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x139f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_139f7c:
    // 0x139f7c: 0x40f809  jalr        $v0
label_139f80:
    if (ctx->pc == 0x139F80u) {
        ctx->pc = 0x139F84u;
        goto label_139f84;
    }
    ctx->pc = 0x139F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x139F84u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139F7Cu, 0x139F84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x139F84u;
label_139f84:
    // 0x139f84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x139f84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_139f88:
    // 0x139f88: 0x12200036  beqz        $s1, . + 4 + (0x36 << 2)
label_139f8c:
    if (ctx->pc == 0x139F8Cu) {
        ctx->pc = 0x139F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139F88u;
        // 0x139f8c: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139F90u;
        goto label_139f90;
    }
    ctx->pc = 0x139F88u;
    {
        const bool branch_taken_0x139f88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x139F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139F88u;
        // 0x139f8c: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139f88) {
            ctx->pc = 0x13A064u;
            goto label_13a064;
        }
    }
    ctx->pc = 0x139F90u;
label_139f90:
    // 0x139f90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x139f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_139f94:
    // 0x139f94: 0x24529a08  addiu       $s2, $v0, -0x65F8
    ctx->pc = 0x139f94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
label_139f98:
    // 0x139f98: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x139f98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_139f9c:
    // 0x139f9c: 0xc0478c8  jal         func_11E320
label_139fa0:
    if (ctx->pc == 0x139FA0u) {
        ctx->pc = 0x139FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139F9Cu;
        // 0x139fa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139FA4u;
        goto label_139fa4;
    }
    ctx->pc = 0x139F9Cu;
    SET_GPR_U32(ctx, 31, 0x139FA4u);
    ctx->pc = 0x139FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139F9Cu;
    // 0x139fa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E320u, 0x139F9Cu, 0x139FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139FA4u;
label_139fa4:
    // 0x139fa4: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
label_139fa8:
    if (ctx->pc == 0x139FA8u) {
        ctx->pc = 0x139FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139FA4u;
        // 0x139fa8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139FACu;
        goto label_139fac;
    }
    ctx->pc = 0x139FA4u;
    {
        const bool branch_taken_0x139fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139fa4) {
            ctx->pc = 0x139FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139FA4u;
            // 0x139fa8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A068u;
            goto label_13a068;
        }
    }
    ctx->pc = 0x139FACu;
label_139fac:
    // 0x139fac: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x139facu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_139fb0:
    // 0x139fb0: 0xc04ea00  jal         func_13A800
label_139fb4:
    if (ctx->pc == 0x139FB4u) {
        ctx->pc = 0x139FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139FB0u;
        // 0x139fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139FB8u;
        goto label_139fb8;
    }
    ctx->pc = 0x139FB0u;
    SET_GPR_U32(ctx, 31, 0x139FB8u);
    ctx->pc = 0x139FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139FB0u;
    // 0x139fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A800u, 0x139FB0u, 0x139FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139FB8u;
label_139fb8:
    // 0x139fb8: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_139fbc:
    if (ctx->pc == 0x139FBCu) {
        ctx->pc = 0x139FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139FB8u;
        // 0x139fbc: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139FC0u;
        goto label_139fc0;
    }
    ctx->pc = 0x139FB8u;
    {
        const bool branch_taken_0x139fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139fb8) {
            ctx->pc = 0x139FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139FB8u;
            // 0x139fbc: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A008u;
            goto label_13a008;
        }
    }
    ctx->pc = 0x139FC0u;
label_139fc0:
    // 0x139fc0: 0xc04eb10  jal         func_13AC40
label_139fc4:
    if (ctx->pc == 0x139FC4u) {
        ctx->pc = 0x139FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139FC0u;
        // 0x139fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139FC8u;
        goto label_139fc8;
    }
    ctx->pc = 0x139FC0u;
    SET_GPR_U32(ctx, 31, 0x139FC8u);
    ctx->pc = 0x139FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139FC0u;
    // 0x139fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC40u, 0x139FC0u, 0x139FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139FC8u;
label_139fc8:
    // 0x139fc8: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_139fcc:
    if (ctx->pc == 0x139FCCu) {
        ctx->pc = 0x139FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139FC8u;
        // 0x139fcc: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139FD0u;
        goto label_139fd0;
    }
    ctx->pc = 0x139FC8u;
    {
        const bool branch_taken_0x139fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139FC8u;
        // 0x139fcc: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139fc8) {
            ctx->pc = 0x13A064u;
            goto label_13a064;
        }
    }
    ctx->pc = 0x139FD0u;
label_139fd0:
    // 0x139fd0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x139fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_139fd4:
    // 0x139fd4: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x139fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
label_139fd8:
    // 0x139fd8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x139fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_139fdc:
    // 0x139fdc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x139fdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_139fe0:
    // 0x139fe0: 0xc046642  jal         func_119908
label_139fe4:
    if (ctx->pc == 0x139FE4u) {
        ctx->pc = 0x139FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139FE0u;
        // 0x139fe4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139FE8u;
        goto label_139fe8;
    }
    ctx->pc = 0x139FE0u;
    SET_GPR_U32(ctx, 31, 0x139FE8u);
    ctx->pc = 0x139FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139FE0u;
    // 0x139fe4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x139FE0u, 0x139FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139FE8u;
label_139fe8:
    // 0x139fe8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x139fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_139fec:
    // 0x139fec: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x139fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_139ff0:
    // 0x139ff0: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x139ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_139ff4:
    // 0x139ff4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_139ff8:
    if (ctx->pc == 0x139FF8u) {
        ctx->pc = 0x139FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139FF4u;
        // 0x139ff8: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139FFCu;
        goto label_139ffc;
    }
    ctx->pc = 0x139FF4u;
    {
        const bool branch_taken_0x139ff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x139ff4) {
            ctx->pc = 0x139FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139FF4u;
            // 0x139ff8: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A008u;
            goto label_13a008;
        }
    }
    ctx->pc = 0x139FFCu;
label_139ffc:
    // 0x139ffc: 0xc043ee0  jal         func_10FB80
label_13a000:
    if (ctx->pc == 0x13A000u) {
        ctx->pc = 0x13A004u;
        goto label_13a004;
    }
    ctx->pc = 0x139FFCu;
    SET_GPR_U32(ctx, 31, 0x13A004u);
    ctx->pc = 0x10FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FB80u, 0x139FFCu, 0x13A004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A004u;
label_13a004:
    // 0x13a004: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x13a004u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_13a008:
    // 0x13a008: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x13a008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_13a00c:
    // 0x13a00c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_13a010:
    // 0x13a010: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13a010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13a014:
    // 0x13a014: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13a014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13a018:
    // 0x13a018: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_13a01c:
    if (ctx->pc == 0x13A01Cu) {
        ctx->pc = 0x13A01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A018u;
        // 0x13a01c: 0x26729a08  addiu       $s2, $s3, -0x65F8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A020u;
        goto label_13a020;
    }
    ctx->pc = 0x13A018u;
    {
        const bool branch_taken_0x13a018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A018u;
        // 0x13a01c: 0x26729a08  addiu       $s2, $s3, -0x65F8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a018) {
            ctx->pc = 0x13A064u;
            goto label_13a064;
        }
    }
    ctx->pc = 0x13A020u;
label_13a020:
    // 0x13a020: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x13a020u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_13a024:
    // 0x13a024: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x13a024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_13a028:
    // 0x13a028: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x13a028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_13a02c:
    // 0x13a02c: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
label_13a030:
    if (ctx->pc == 0x13A030u) {
        ctx->pc = 0x13A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A02Cu;
        // 0x13a030: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A034u;
        goto label_13a034;
    }
    ctx->pc = 0x13A02Cu;
    {
        const bool branch_taken_0x13a02c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a02c) {
            ctx->pc = 0x13A030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A02Cu;
            // 0x13a030: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A068u;
            goto label_13a068;
        }
    }
    ctx->pc = 0x13A034u;
label_13a034:
    // 0x13a034: 0xc043a64  jal         func_10E990
label_13a038:
    if (ctx->pc == 0x13A038u) {
        ctx->pc = 0x13A03Cu;
        goto label_13a03c;
    }
    ctx->pc = 0x13A034u;
    SET_GPR_U32(ctx, 31, 0x13A03Cu);
    ctx->pc = 0x10E990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E990u, 0x13A034u, 0x13A03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A03Cu;
label_13a03c:
    // 0x13a03c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_13a040:
    if (ctx->pc == 0x13A040u) {
        ctx->pc = 0x13A040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A03Cu;
        // 0x13a040: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A044u;
        goto label_13a044;
    }
    ctx->pc = 0x13A03Cu;
    {
        const bool branch_taken_0x13a03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A03Cu;
        // 0x13a040: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a03c) {
            ctx->pc = 0x13A064u;
            goto label_13a064;
        }
    }
    ctx->pc = 0x13A044u;
label_13a044:
    // 0x13a044: 0x8c430108  lw          $v1, 0x108($v0)
    ctx->pc = 0x13a044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
label_13a048:
    // 0x13a048: 0x8c641050  lw          $a0, 0x1050($v1)
    ctx->pc = 0x13a048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4176)));
label_13a04c:
    // 0x13a04c: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
label_13a050:
    if (ctx->pc == 0x13A050u) {
        ctx->pc = 0x13A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A04Cu;
        // 0x13a050: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A054u;
        goto label_13a054;
    }
    ctx->pc = 0x13A04Cu;
    {
        const bool branch_taken_0x13a04c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a04c) {
            ctx->pc = 0x13A050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A04Cu;
            // 0x13a050: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A068u;
            goto label_13a068;
        }
    }
    ctx->pc = 0x13A054u;
label_13a054:
    // 0x13a054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13a054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13a058:
    // 0x13a058: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13a058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a05c:
    // 0x13a05c: 0xc04e9fa  jal         func_13A7E8
label_13a060:
    if (ctx->pc == 0x13A060u) {
        ctx->pc = 0x13A060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A05Cu;
        // 0x13a060: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A064u;
        goto label_13a064;
    }
    ctx->pc = 0x13A05Cu;
    SET_GPR_U32(ctx, 31, 0x13A064u);
    ctx->pc = 0x13A060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A05Cu;
    // 0x13a060: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A7E8u, 0x13A05Cu, 0x13A064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A064u;
label_13a064:
    // 0x13a064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13a064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13a068:
    // 0x13a068: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13a068u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13a06c:
    // 0x13a06c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13a06cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13a070:
    // 0x13a070: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13a070u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13a074:
    // 0x13a074: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13a074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13a078:
    // 0x13a078: 0x3e00008  jr          $ra
label_13a07c:
    if (ctx->pc == 0x13A07Cu) {
        ctx->pc = 0x13A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A078u;
        // 0x13a07c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A080u;
        goto label_fallthrough_0x13a078;
    }
    ctx->pc = 0x13A078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A078u;
        // 0x13a07c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13a078:
    ctx->pc = 0x13A080u;
}
