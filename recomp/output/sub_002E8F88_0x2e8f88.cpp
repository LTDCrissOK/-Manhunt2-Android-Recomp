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

// Function: sub_002E8F88
// Address: 0x2e8f88 - 0x2e91c8
void sub_002E8F88_0x2e8f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8F88_0x2e8f88");
#endif

    switch (ctx->pc) {
        case 0x2e8f88u: goto label_2e8f88;
        case 0x2e8f8cu: goto label_2e8f8c;
        case 0x2e8f90u: goto label_2e8f90;
        case 0x2e8f94u: goto label_2e8f94;
        case 0x2e8f98u: goto label_2e8f98;
        case 0x2e8f9cu: goto label_2e8f9c;
        case 0x2e8fa0u: goto label_2e8fa0;
        case 0x2e8fa4u: goto label_2e8fa4;
        case 0x2e8fa8u: goto label_2e8fa8;
        case 0x2e8facu: goto label_2e8fac;
        case 0x2e8fb0u: goto label_2e8fb0;
        case 0x2e8fb4u: goto label_2e8fb4;
        case 0x2e8fb8u: goto label_2e8fb8;
        case 0x2e8fbcu: goto label_2e8fbc;
        case 0x2e8fc0u: goto label_2e8fc0;
        case 0x2e8fc4u: goto label_2e8fc4;
        case 0x2e8fc8u: goto label_2e8fc8;
        case 0x2e8fccu: goto label_2e8fcc;
        case 0x2e8fd0u: goto label_2e8fd0;
        case 0x2e8fd4u: goto label_2e8fd4;
        case 0x2e8fd8u: goto label_2e8fd8;
        case 0x2e8fdcu: goto label_2e8fdc;
        case 0x2e8fe0u: goto label_2e8fe0;
        case 0x2e8fe4u: goto label_2e8fe4;
        case 0x2e8fe8u: goto label_2e8fe8;
        case 0x2e8fecu: goto label_2e8fec;
        case 0x2e8ff0u: goto label_2e8ff0;
        case 0x2e8ff4u: goto label_2e8ff4;
        case 0x2e8ff8u: goto label_2e8ff8;
        case 0x2e8ffcu: goto label_2e8ffc;
        case 0x2e9000u: goto label_2e9000;
        case 0x2e9004u: goto label_2e9004;
        case 0x2e9008u: goto label_2e9008;
        case 0x2e900cu: goto label_2e900c;
        case 0x2e9010u: goto label_2e9010;
        case 0x2e9014u: goto label_2e9014;
        case 0x2e9018u: goto label_2e9018;
        case 0x2e901cu: goto label_2e901c;
        case 0x2e9020u: goto label_2e9020;
        case 0x2e9024u: goto label_2e9024;
        case 0x2e9028u: goto label_2e9028;
        case 0x2e902cu: goto label_2e902c;
        case 0x2e9030u: goto label_2e9030;
        case 0x2e9034u: goto label_2e9034;
        case 0x2e9038u: goto label_2e9038;
        case 0x2e903cu: goto label_2e903c;
        case 0x2e9040u: goto label_2e9040;
        case 0x2e9044u: goto label_2e9044;
        case 0x2e9048u: goto label_2e9048;
        case 0x2e904cu: goto label_2e904c;
        case 0x2e9050u: goto label_2e9050;
        case 0x2e9054u: goto label_2e9054;
        case 0x2e9058u: goto label_2e9058;
        case 0x2e905cu: goto label_2e905c;
        case 0x2e9060u: goto label_2e9060;
        case 0x2e9064u: goto label_2e9064;
        case 0x2e9068u: goto label_2e9068;
        case 0x2e906cu: goto label_2e906c;
        case 0x2e9070u: goto label_2e9070;
        case 0x2e9074u: goto label_2e9074;
        case 0x2e9078u: goto label_2e9078;
        case 0x2e907cu: goto label_2e907c;
        case 0x2e9080u: goto label_2e9080;
        case 0x2e9084u: goto label_2e9084;
        case 0x2e9088u: goto label_2e9088;
        case 0x2e908cu: goto label_2e908c;
        case 0x2e9090u: goto label_2e9090;
        case 0x2e9094u: goto label_2e9094;
        case 0x2e9098u: goto label_2e9098;
        case 0x2e909cu: goto label_2e909c;
        case 0x2e90a0u: goto label_2e90a0;
        case 0x2e90a4u: goto label_2e90a4;
        case 0x2e90a8u: goto label_2e90a8;
        case 0x2e90acu: goto label_2e90ac;
        case 0x2e90b0u: goto label_2e90b0;
        case 0x2e90b4u: goto label_2e90b4;
        case 0x2e90b8u: goto label_2e90b8;
        case 0x2e90bcu: goto label_2e90bc;
        case 0x2e90c0u: goto label_2e90c0;
        case 0x2e90c4u: goto label_2e90c4;
        case 0x2e90c8u: goto label_2e90c8;
        case 0x2e90ccu: goto label_2e90cc;
        case 0x2e90d0u: goto label_2e90d0;
        case 0x2e90d4u: goto label_2e90d4;
        case 0x2e90d8u: goto label_2e90d8;
        case 0x2e90dcu: goto label_2e90dc;
        case 0x2e90e0u: goto label_2e90e0;
        case 0x2e90e4u: goto label_2e90e4;
        case 0x2e90e8u: goto label_2e90e8;
        case 0x2e90ecu: goto label_2e90ec;
        case 0x2e90f0u: goto label_2e90f0;
        case 0x2e90f4u: goto label_2e90f4;
        case 0x2e90f8u: goto label_2e90f8;
        case 0x2e90fcu: goto label_2e90fc;
        case 0x2e9100u: goto label_2e9100;
        case 0x2e9104u: goto label_2e9104;
        case 0x2e9108u: goto label_2e9108;
        case 0x2e910cu: goto label_2e910c;
        case 0x2e9110u: goto label_2e9110;
        case 0x2e9114u: goto label_2e9114;
        case 0x2e9118u: goto label_2e9118;
        case 0x2e911cu: goto label_2e911c;
        case 0x2e9120u: goto label_2e9120;
        case 0x2e9124u: goto label_2e9124;
        case 0x2e9128u: goto label_2e9128;
        case 0x2e912cu: goto label_2e912c;
        case 0x2e9130u: goto label_2e9130;
        case 0x2e9134u: goto label_2e9134;
        case 0x2e9138u: goto label_2e9138;
        case 0x2e913cu: goto label_2e913c;
        case 0x2e9140u: goto label_2e9140;
        case 0x2e9144u: goto label_2e9144;
        case 0x2e9148u: goto label_2e9148;
        case 0x2e914cu: goto label_2e914c;
        case 0x2e9150u: goto label_2e9150;
        case 0x2e9154u: goto label_2e9154;
        case 0x2e9158u: goto label_2e9158;
        case 0x2e915cu: goto label_2e915c;
        case 0x2e9160u: goto label_2e9160;
        case 0x2e9164u: goto label_2e9164;
        case 0x2e9168u: goto label_2e9168;
        case 0x2e916cu: goto label_2e916c;
        case 0x2e9170u: goto label_2e9170;
        case 0x2e9174u: goto label_2e9174;
        case 0x2e9178u: goto label_2e9178;
        case 0x2e917cu: goto label_2e917c;
        case 0x2e9180u: goto label_2e9180;
        case 0x2e9184u: goto label_2e9184;
        case 0x2e9188u: goto label_2e9188;
        case 0x2e918cu: goto label_2e918c;
        case 0x2e9190u: goto label_2e9190;
        case 0x2e9194u: goto label_2e9194;
        case 0x2e9198u: goto label_2e9198;
        case 0x2e919cu: goto label_2e919c;
        case 0x2e91a0u: goto label_2e91a0;
        case 0x2e91a4u: goto label_2e91a4;
        case 0x2e91a8u: goto label_2e91a8;
        case 0x2e91acu: goto label_2e91ac;
        case 0x2e91b0u: goto label_2e91b0;
        case 0x2e91b4u: goto label_2e91b4;
        case 0x2e91b8u: goto label_2e91b8;
        case 0x2e91bcu: goto label_2e91bc;
        case 0x2e91c0u: goto label_2e91c0;
        case 0x2e91c4u: goto label_2e91c4;
        default: break;
    }

    ctx->pc = 0x2e8f88u;

label_2e8f88:
    // 0x2e8f88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e8f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2e8f8c:
    // 0x2e8f8c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e8f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2e8f90:
    // 0x2e8f90: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2e8f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_2e8f94:
    // 0x2e8f94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e8f94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e8f98:
    // 0x2e8f98: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2e8f98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e8f9c:
    // 0x2e8f9c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2e8f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2e8fa0:
    // 0x2e8fa0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e8fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2e8fa4:
    // 0x2e8fa4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2e8fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_2e8fa8:
    // 0x2e8fa8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2e8fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_2e8fac:
    // 0x2e8fac: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e8facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2e8fb0:
    // 0x2e8fb0: 0xc08df42  jal         func_237D08
label_2e8fb4:
    if (ctx->pc == 0x2E8FB4u) {
        ctx->pc = 0x2E8FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8FB0u;
        // 0x2e8fb4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8FB8u;
        goto label_2e8fb8;
    }
    ctx->pc = 0x2E8FB0u;
    SET_GPR_U32(ctx, 31, 0x2E8FB8u);
    ctx->pc = 0x2E8FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8FB0u;
    // 0x2e8fb4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237D08u, 0x2E8FB0u, 0x2E8FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8FB8u;
label_2e8fb8:
    // 0x2e8fb8: 0x8e420224  lw          $v0, 0x224($s2)
    ctx->pc = 0x2e8fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
label_2e8fbc:
    // 0x2e8fbc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e8fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e8fc0:
    // 0x2e8fc0: 0x5060001f  beql        $v1, $zero, . + 4 + (0x1F << 2)
label_2e8fc4:
    if (ctx->pc == 0x2E8FC4u) {
        ctx->pc = 0x2E8FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8FC0u;
        // 0x2e8fc4: 0x8e4211c0  lw          $v0, 0x11C0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8FC8u;
        goto label_2e8fc8;
    }
    ctx->pc = 0x2E8FC0u;
    {
        const bool branch_taken_0x2e8fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8fc0) {
            ctx->pc = 0x2E8FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8FC0u;
            // 0x2e8fc4: 0x8e4211c0  lw          $v0, 0x11C0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9040u;
            goto label_2e9040;
        }
    }
    ctx->pc = 0x2E8FC8u;
label_2e8fc8:
    // 0x2e8fc8: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x2e8fc8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
label_2e8fcc:
    // 0x2e8fcc: 0x8e420224  lw          $v0, 0x224($s2)
    ctx->pc = 0x2e8fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
label_2e8fd0:
    // 0x2e8fd0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2e8fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2e8fd4:
    // 0x2e8fd4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2e8fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e8fd8:
    // 0x2e8fd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e8fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2e8fdc:
    // 0x2e8fdc: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2e8fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e8fe0:
    // 0x2e8fe0: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
label_2e8fe4:
    if (ctx->pc == 0x2E8FE4u) {
        ctx->pc = 0x2E8FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8FE0u;
        // 0x2e8fe4: 0x8e430224  lw          $v1, 0x224($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8FE8u;
        goto label_2e8fe8;
    }
    ctx->pc = 0x2E8FE0u;
    {
        const bool branch_taken_0x2e8fe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8fe0) {
            ctx->pc = 0x2E8FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8FE0u;
            // 0x2e8fe4: 0x8e430224  lw          $v1, 0x224($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9028u;
            goto label_2e9028;
        }
    }
    ctx->pc = 0x2E8FE8u;
label_2e8fe8:
    // 0x2e8fe8: 0xc0899bc  jal         func_2266F0
label_2e8fec:
    if (ctx->pc == 0x2E8FECu) {
        ctx->pc = 0x2E8FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8FE8u;
        // 0x2e8fec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8FF0u;
        goto label_2e8ff0;
    }
    ctx->pc = 0x2E8FE8u;
    SET_GPR_U32(ctx, 31, 0x2E8FF0u);
    ctx->pc = 0x2E8FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8FE8u;
    // 0x2e8fec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2E8FE8u, 0x2E8FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8FF0u;
label_2e8ff0:
    // 0x2e8ff0: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
label_2e8ff4:
    if (ctx->pc == 0x2E8FF4u) {
        ctx->pc = 0x2E8FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8FF0u;
        // 0x2e8ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8FF8u;
        goto label_2e8ff8;
    }
    ctx->pc = 0x2E8FF0u;
    {
        const bool branch_taken_0x2e8ff0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8FF0u;
        // 0x2e8ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8ff0) {
            ctx->pc = 0x2E9024u;
            goto label_2e9024;
        }
    }
    ctx->pc = 0x2E8FF8u;
label_2e8ff8:
    // 0x2e8ff8: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2e8ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_2e8ffc:
    // 0x2e8ffc: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2e8ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_2e9000:
    // 0x2e9000: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x2e9000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
label_2e9004:
    // 0x2e9004: 0x8e6395a0  lw          $v1, -0x6A60($s3)
    ctx->pc = 0x2e9004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294940064)));
label_2e9008:
    // 0x2e9008: 0xc098400  jal         func_261000
label_2e900c:
    if (ctx->pc == 0x2E900Cu) {
        ctx->pc = 0x2E900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9008u;
        // 0x2e900c: 0xae0300dc  sw          $v1, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9010u;
        goto label_2e9010;
    }
    ctx->pc = 0x2E9008u;
    SET_GPR_U32(ctx, 31, 0x2E9010u);
    ctx->pc = 0x2E900Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9008u;
    // 0x2e900c: 0xae0300dc  sw          $v1, 0xDC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261000u, 0x2E9008u, 0x2E9010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9010u;
label_2e9010:
    // 0x2e9010: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x2e9010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_2e9014:
    // 0x2e9014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e9014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e9018:
    // 0x2e9018: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x2e9018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2e901c:
    // 0x2e901c: 0x40f809  jalr        $v0
label_2e9020:
    if (ctx->pc == 0x2E9020u) {
        ctx->pc = 0x2E9020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E901Cu;
        // 0x2e9020: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9024u;
        goto label_2e9024;
    }
    ctx->pc = 0x2E901Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E9024u);
        ctx->pc = 0x2E9020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E901Cu;
        // 0x2e9020: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E901Cu, 0x2E9024u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E9024u;
label_2e9024:
    // 0x2e9024: 0x8e430224  lw          $v1, 0x224($s2)
    ctx->pc = 0x2e9024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
label_2e9028:
    // 0x2e9028: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e9028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2e902c:
    // 0x2e902c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e902cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e9030:
    // 0x2e9030: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2e9030u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2e9034:
    // 0x2e9034: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
label_2e9038:
    if (ctx->pc == 0x2E9038u) {
        ctx->pc = 0x2E9038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9034u;
        // 0x2e9038: 0x8e420224  lw          $v0, 0x224($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E903Cu;
        goto label_2e903c;
    }
    ctx->pc = 0x2E9034u;
    {
        const bool branch_taken_0x2e9034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9034) {
            ctx->pc = 0x2E9038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9034u;
            // 0x2e9038: 0x8e420224  lw          $v0, 0x224($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8fd0;
        }
    }
    ctx->pc = 0x2E903Cu;
label_2e903c:
    // 0x2e903c: 0x8e4211c0  lw          $v0, 0x11C0($s2)
    ctx->pc = 0x2e903cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
label_2e9040:
    // 0x2e9040: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x2e9040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_2e9044:
    // 0x2e9044: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e9044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e9048:
    // 0x2e9048: 0x14430054  bne         $v0, $v1, . + 4 + (0x54 << 2)
label_2e904c:
    if (ctx->pc == 0x2E904Cu) {
        ctx->pc = 0x2E9050u;
        goto label_2e9050;
    }
    ctx->pc = 0x2E9048u;
    {
        const bool branch_taken_0x2e9048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e9048) {
            ctx->pc = 0x2E919Cu;
            goto label_2e919c;
        }
    }
    ctx->pc = 0x2E9050u;
label_2e9050:
    // 0x2e9050: 0x8e4311e4  lw          $v1, 0x11E4($s2)
    ctx->pc = 0x2e9050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4580)));
label_2e9054:
    // 0x2e9054: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x2e9054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_2e9058:
    // 0x2e9058: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2e9058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_2e905c:
    // 0x2e905c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2e905cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_2e9060:
    // 0x2e9060: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
label_2e9064:
    if (ctx->pc == 0x2E9064u) {
        ctx->pc = 0x2E9064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9060u;
        // 0x2e9064: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9068u;
        goto label_2e9068;
    }
    ctx->pc = 0x2E9060u;
    {
        const bool branch_taken_0x2e9060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9060u;
        // 0x2e9064: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9060) {
            ctx->pc = 0x2E919Cu;
            goto label_2e919c;
        }
    }
    ctx->pc = 0x2E9068u;
label_2e9068:
    // 0x2e9068: 0xc08a1f2  jal         func_2287C8
label_2e906c:
    if (ctx->pc == 0x2E906Cu) {
        ctx->pc = 0x2E906Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9068u;
        // 0x2e906c: 0x240503fd  addiu       $a1, $zero, 0x3FD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1021));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9070u;
        goto label_2e9070;
    }
    ctx->pc = 0x2E9068u;
    SET_GPR_U32(ctx, 31, 0x2E9070u);
    ctx->pc = 0x2E906Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9068u;
    // 0x2e906c: 0x240503fd  addiu       $a1, $zero, 0x3FD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1021));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x2E9068u, 0x2E9070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9070u;
label_2e9070:
    // 0x2e9070: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2e9070u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e9074:
    // 0x2e9074: 0xc0f70ce  jal         func_3DC338
label_2e9078:
    if (ctx->pc == 0x2E9078u) {
        ctx->pc = 0x2E9078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9074u;
        // 0x2e9078: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E907Cu;
        goto label_2e907c;
    }
    ctx->pc = 0x2E9074u;
    SET_GPR_U32(ctx, 31, 0x2E907Cu);
    ctx->pc = 0x2E9078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9074u;
    // 0x2e9078: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2E9074u, 0x2E907Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E907Cu;
label_2e907c:
    // 0x2e907c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2e9080:
    if (ctx->pc == 0x2E9080u) {
        ctx->pc = 0x2E9084u;
        goto label_2e9084;
    }
    ctx->pc = 0x2E907Cu;
    {
        const bool branch_taken_0x2e907c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e907c) {
            ctx->pc = 0x2E908Cu;
            goto label_2e908c;
        }
    }
    ctx->pc = 0x2E9084u;
label_2e9084:
    // 0x2e9084: 0xc0c4900  jal         func_312400
label_2e9088:
    if (ctx->pc == 0x2E9088u) {
        ctx->pc = 0x2E9088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9084u;
        // 0x2e9088: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E908Cu;
        goto label_2e908c;
    }
    ctx->pc = 0x2E9084u;
    SET_GPR_U32(ctx, 31, 0x2E908Cu);
    ctx->pc = 0x2E9088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9084u;
    // 0x2e9088: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2E9084u, 0x2E908Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E908Cu;
label_2e908c:
    // 0x2e908c: 0x3c01bd2c  lui         $at, 0xBD2C
    ctx->pc = 0x2e908cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48428 << 16));
label_2e9090:
    // 0x2e9090: 0x34210831  ori         $at, $at, 0x831
    ctx->pc = 0x2e9090u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2097);
label_2e9094:
    // 0x2e9094: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e9094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e9098:
    // 0x2e9098: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2e9098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_2e909c:
    // 0x2e909c: 0x3c01bf32  lui         $at, 0xBF32
    ctx->pc = 0x2e909cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48946 << 16));
label_2e90a0:
    // 0x2e90a0: 0x3421f1aa  ori         $at, $at, 0xF1AA
    ctx->pc = 0x2e90a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61866);
label_2e90a4:
    // 0x2e90a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e90a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2e90a8:
    // 0x2e90a8: 0x24555b50  addiu       $s5, $v0, 0x5B50
    ctx->pc = 0x2e90a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 23376));
label_2e90ac:
    // 0x2e90ac: 0x3c01bd28  lui         $at, 0xBD28
    ctx->pc = 0x2e90acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48424 << 16));
label_2e90b0:
    // 0x2e90b0: 0x3421c155  ori         $at, $at, 0xC155
    ctx->pc = 0x2e90b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49493);
label_2e90b4:
    // 0x2e90b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e90b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e90b8:
    // 0x2e90b8: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2e90b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
label_2e90bc:
    // 0x2e90bc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2e90bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2e90c0:
    // 0x2e90c0: 0x26650080  addiu       $a1, $s3, 0x80
    ctx->pc = 0x2e90c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
label_2e90c4:
    // 0x2e90c4: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2e90c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2e90c8:
    // 0x2e90c8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2e90c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2e90cc:
    // 0x2e90cc: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2e90ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_2e90d0:
    // 0x2e90d0: 0x8e4411e4  lw          $a0, 0x11E4($s2)
    ctx->pc = 0x2e90d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4580)));
label_2e90d4:
    // 0x2e90d4: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x2e90d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_2e90d8:
    // 0x2e90d8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2e90d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_2e90dc:
    // 0x2e90dc: 0xac8200c0  sw          $v0, 0xC0($a0)
    ctx->pc = 0x2e90dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 2));
label_2e90e0:
    // 0x2e90e0: 0x8cc395a0  lw          $v1, -0x6A60($a2)
    ctx->pc = 0x2e90e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294940064)));
label_2e90e4:
    // 0x2e90e4: 0xac8300dc  sw          $v1, 0xDC($a0)
    ctx->pc = 0x2e90e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 3));
label_2e90e8:
    // 0x2e90e8: 0x8e4211e4  lw          $v0, 0x11E4($s2)
    ctx->pc = 0x2e90e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4580)));
label_2e90ec:
    // 0x2e90ec: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x2e90ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_2e90f0:
    // 0x2e90f0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2e90f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e90f4:
    // 0x2e90f4: 0x26110040  addiu       $s1, $s0, 0x40
    ctx->pc = 0x2e90f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_2e90f8:
    // 0x2e90f8: 0xc0b1680  jal         func_2C5A00
label_2e90fc:
    if (ctx->pc == 0x2E90FCu) {
        ctx->pc = 0x2E90FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E90F8u;
        // 0x2e90fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9100u;
        goto label_2e9100;
    }
    ctx->pc = 0x2E90F8u;
    SET_GPR_U32(ctx, 31, 0x2E9100u);
    ctx->pc = 0x2E90FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E90F8u;
    // 0x2e90fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A00u, 0x2E90F8u, 0x2E9100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9100u;
label_2e9100:
    // 0x2e9100: 0x8e4211e4  lw          $v0, 0x11E4($s2)
    ctx->pc = 0x2e9100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4580)));
label_2e9104:
    // 0x2e9104: 0x8c430194  lw          $v1, 0x194($v0)
    ctx->pc = 0x2e9104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
label_2e9108:
    // 0x2e9108: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
label_2e910c:
    if (ctx->pc == 0x2E910Cu) {
        ctx->pc = 0x2E910Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9108u;
        // 0x2e910c: 0x266200b0  addiu       $v0, $s3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9110u;
        goto label_2e9110;
    }
    ctx->pc = 0x2E9108u;
    {
        const bool branch_taken_0x2e9108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E910Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9108u;
        // 0x2e910c: 0x266200b0  addiu       $v0, $s3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9108) {
            ctx->pc = 0x2E9168u;
            goto label_2e9168;
        }
    }
    ctx->pc = 0x2E9110u;
label_2e9110:
    // 0x2e9110: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2e9110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
label_2e9114:
    // 0x2e9114: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e9114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e9118:
    // 0x2e9118: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e9118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2e911c:
    // 0x2e911c: 0xc0b15d0  jal         func_2C5740
label_2e9120:
    if (ctx->pc == 0x2E9120u) {
        ctx->pc = 0x2E9120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E911Cu;
        // 0x2e9120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9124u;
        goto label_2e9124;
    }
    ctx->pc = 0x2E911Cu;
    SET_GPR_U32(ctx, 31, 0x2E9124u);
    ctx->pc = 0x2E9120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E911Cu;
    // 0x2e9120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5740u, 0x2E911Cu, 0x2E9124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9124u;
label_2e9124:
    // 0x2e9124: 0x26030070  addiu       $v1, $s0, 0x70
    ctx->pc = 0x2e9124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_2e9128:
    // 0x2e9128: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e9128u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e912c:
    // 0x2e912c: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x2e912cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2e9130:
    // 0x2e9130: 0xda230010  lqc2        $vf3, 0x10($s1)
    ctx->pc = 0x2e9130u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_2e9134:
    // 0x2e9134: 0xda240020  lqc2        $vf4, 0x20($s1)
    ctx->pc = 0x2e9134u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_2e9138:
    // 0x2e9138: 0xda250030  lqc2        $vf5, 0x30($s1)
    ctx->pc = 0x2e9138u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_2e913c:
    // 0x2e913c: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2e913cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2e9140:
    // 0x2e9140: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2e9140u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2e9144:
    // 0x2e9144: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2e9144u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2e9148:
    // 0x2e9148: 0xfa050070  sqc2        $vf5, 0x70($s0)
    ctx->pc = 0x2e9148u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), _mm_castps_si128(ctx->vu0_vf[5]));
label_2e914c:
    // 0x2e914c: 0x266200b0  addiu       $v0, $s3, 0xB0
    ctx->pc = 0x2e914cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
label_2e9150:
    // 0x2e9150: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2e9150u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2e9154:
    // 0x2e9154: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2e9154u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e9158:
    // 0x2e9158: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e9158u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2e915c:
    // 0x2e915c: 0xfa010070  sqc2        $vf1, 0x70($s0)
    ctx->pc = 0x2e915cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e9160:
    // 0x2e9160: 0x10000003  b           . + 4 + (0x3 << 2)
label_2e9164:
    if (ctx->pc == 0x2E9164u) {
        ctx->pc = 0x2E9168u;
        goto label_2e9168;
    }
    ctx->pc = 0x2E9160u;
    {
        const bool branch_taken_0x2e9160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9160) {
            ctx->pc = 0x2E9170u;
            goto label_2e9170;
        }
    }
    ctx->pc = 0x2E9168u;
label_2e9168:
    // 0x2e9168: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e9168u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e916c:
    // 0x2e916c: 0xfa010070  sqc2        $vf1, 0x70($s0)
    ctx->pc = 0x2e916cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e9170:
    // 0x2e9170: 0xc083faa  jal         func_20FEA8
label_2e9174:
    if (ctx->pc == 0x2E9174u) {
        ctx->pc = 0x2E9174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9170u;
        // 0x2e9174: 0x8e4411e4  lw          $a0, 0x11E4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9178u;
        goto label_2e9178;
    }
    ctx->pc = 0x2E9170u;
    SET_GPR_U32(ctx, 31, 0x2E9178u);
    ctx->pc = 0x2E9174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9170u;
    // 0x2e9174: 0x8e4411e4  lw          $a0, 0x11E4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4580)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FEA8u, 0x2E9170u, 0x2E9178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9178u;
label_2e9178:
    // 0x2e9178: 0x8e4211e4  lw          $v0, 0x11E4($s2)
    ctx->pc = 0x2e9178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4580)));
label_2e917c:
    // 0x2e917c: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x2e917cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_2e9180:
    // 0x2e9180: 0xc0c48da  jal         func_312368
label_2e9184:
    if (ctx->pc == 0x2E9184u) {
        ctx->pc = 0x2E9184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9180u;
        // 0x2e9184: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9188u;
        goto label_2e9188;
    }
    ctx->pc = 0x2E9180u;
    SET_GPR_U32(ctx, 31, 0x2E9188u);
    ctx->pc = 0x2E9184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9180u;
    // 0x2e9184: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x2E9180u, 0x2E9188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9188u;
label_2e9188:
    // 0x2e9188: 0x8e4411e4  lw          $a0, 0x11E4($s2)
    ctx->pc = 0x2e9188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4580)));
label_2e918c:
    // 0x2e918c: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x2e918cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_2e9190:
    // 0x2e9190: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x2e9190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2e9194:
    // 0x2e9194: 0x40f809  jalr        $v0
label_2e9198:
    if (ctx->pc == 0x2E9198u) {
        ctx->pc = 0x2E9198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9194u;
        // 0x2e9198: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E919Cu;
        goto label_2e919c;
    }
    ctx->pc = 0x2E9194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E919Cu);
        ctx->pc = 0x2E9198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9194u;
        // 0x2e9198: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9194u, 0x2E919Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E919Cu;
label_2e919c:
    // 0x2e919c: 0xc0bc4e8  jal         func_2F13A0
label_2e91a0:
    if (ctx->pc == 0x2E91A0u) {
        ctx->pc = 0x2E91A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E919Cu;
        // 0x2e91a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E91A4u;
        goto label_2e91a4;
    }
    ctx->pc = 0x2E919Cu;
    SET_GPR_U32(ctx, 31, 0x2E91A4u);
    ctx->pc = 0x2E91A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E919Cu;
    // 0x2e91a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F13A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F13A0u, 0x2E919Cu, 0x2E91A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E91A4u;
label_2e91a4:
    // 0x2e91a4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e91a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e91a8:
    // 0x2e91a8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2e91a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2e91ac:
    // 0x2e91ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e91acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e91b0:
    // 0x2e91b0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2e91b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2e91b4:
    // 0x2e91b4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2e91b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2e91b8:
    // 0x2e91b8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2e91b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2e91bc:
    // 0x2e91bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e91bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2e91c0:
    // 0x2e91c0: 0x3e00008  jr          $ra
label_2e91c4:
    if (ctx->pc == 0x2E91C4u) {
        ctx->pc = 0x2E91C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E91C0u;
        // 0x2e91c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E91C8u;
        goto label_fallthrough_0x2e91c0;
    }
    ctx->pc = 0x2E91C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E91C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E91C0u;
        // 0x2e91c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E91C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e91c0:
    ctx->pc = 0x2E91C8u;
}
