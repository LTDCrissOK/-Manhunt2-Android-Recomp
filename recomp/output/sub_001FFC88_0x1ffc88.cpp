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

// Function: sub_001FFC88
// Address: 0x1ffc88 - 0x2000e0
void sub_001FFC88_0x1ffc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FFC88_0x1ffc88");
#endif

    switch (ctx->pc) {
        case 0x1ffcd8u: goto label_1ffcd8;
        case 0x1ffce0u: goto label_1ffce0;
        case 0x1ffd20u: goto label_1ffd20;
        case 0x1ffd34u: goto label_1ffd34;
        case 0x1ffd5cu: goto label_1ffd5c;
        case 0x1ffd80u: goto label_1ffd80;
        case 0x1ffdbcu: goto label_1ffdbc;
        case 0x1ffdd0u: goto label_1ffdd0;
        case 0x1ffdf4u: goto label_1ffdf4;
        case 0x1ffe2cu: goto label_1ffe2c;
        case 0x1ffe40u: goto label_1ffe40;
        case 0x1ffe48u: goto label_1ffe48;
        case 0x1ffe58u: goto label_1ffe58;
        case 0x1ffe74u: goto label_1ffe74;
        case 0x1ffe80u: goto label_1ffe80;
        case 0x1ffe94u: goto label_1ffe94;
        case 0x1ffef8u: goto label_1ffef8;
        case 0x1fff3cu: goto label_1fff3c;
        case 0x200030u: goto label_200030;
        case 0x200044u: goto label_200044;
        case 0x200060u: goto label_200060;
        case 0x2000a0u: goto label_2000a0;
        case 0x2000a8u: goto label_2000a8;
        default: break;
    }

    ctx->pc = 0x1ffc88u;

    // 0x1ffc88: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ffc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ffc8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ffc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ffc90: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1ffc90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1ffc94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ffc94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffc98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ffc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ffc9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ffc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ffca0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ffca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ffca4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ffca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1ffca8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1ffca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1ffcac: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1ffcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1ffcb0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1ffcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1ffcb4: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1ffcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1ffcb8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1ffcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1ffcbc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1ffcbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1ffcc0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ffcc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ffcc4: 0x9242004c  lbu         $v0, 0x4C($s2)
    ctx->pc = 0x1ffcc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1ffcc8: 0x144000f8  bnez        $v0, . + 4 + (0xF8 << 2)
    ctx->pc = 0x1FFCC8u;
    {
        const bool branch_taken_0x1ffcc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFCC8u;
        // 0x1ffccc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffcc8) {
            ctx->pc = 0x2000ACu;
            goto label_2000ac;
        }
    }
    ctx->pc = 0x1FFCD0u;
    // 0x1ffcd0: 0xc080e54  jal         func_203950
    ctx->pc = 0x1FFCD0u;
    SET_GPR_U32(ctx, 31, 0x1FFCD8u);
    ctx->pc = 0x203950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203950u, 0x1FFCD0u, 0x1FFCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFCD8u;
label_1ffcd8:
    // 0x1ffcd8: 0xc080ebe  jal         func_203AF8
    ctx->pc = 0x1FFCD8u;
    SET_GPR_U32(ctx, 31, 0x1FFCE0u);
    ctx->pc = 0x1FFCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFCD8u;
    // 0x1ffcdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x1FFCD8u, 0x1FFCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFCE0u;
label_1ffce0:
    // 0x1ffce0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ffce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ffce4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1ffce4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffce8: 0x8c42bd50  lw          $v0, -0x42B0($v0)
    ctx->pc = 0x1ffce8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x1ffcec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FFCECu;
    {
        const bool branch_taken_0x1ffcec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFCECu;
        // 0x1ffcf0: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffcec) {
            ctx->pc = 0x1FFD04u;
            goto label_1ffd04;
        }
    }
    ctx->pc = 0x1FFCF4u;
    // 0x1ffcf4: 0x8c420ff8  lw          $v0, 0xFF8($v0)
    ctx->pc = 0x1ffcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
    // 0x1ffcf8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ffcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ffcfc: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFCFCu;
    {
        const bool branch_taken_0x1ffcfc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1ffcfc) {
            ctx->pc = 0x1FFD00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFCFCu;
            // 0x1ffd00: 0x9242004b  lbu         $v0, 0x4B($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 75)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFD10u;
            goto label_1ffd10;
        }
    }
    ctx->pc = 0x1FFD04u;
label_1ffd04:
    // 0x1ffd04: 0x8e22bd6c  lw          $v0, -0x4294($s1)
    ctx->pc = 0x1ffd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950252)));
    // 0x1ffd08: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1FFD08u;
    {
        const bool branch_taken_0x1ffd08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD08u;
        // 0x1ffd0c: 0x9242004b  lbu         $v0, 0x4B($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 75)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffd08) {
            ctx->pc = 0x1FFD70u;
            goto label_1ffd70;
        }
    }
    ctx->pc = 0x1FFD10u;
label_1ffd10:
    // 0x1ffd10: 0x144000e1  bnez        $v0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x1FFD10u;
    {
        const bool branch_taken_0x1ffd10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD10u;
        // 0x1ffd14: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffd10) {
            ctx->pc = 0x200098u;
            goto label_200098;
        }
    }
    ctx->pc = 0x1FFD18u;
    // 0x1ffd18: 0x26500078  addiu       $s0, $s2, 0x78
    ctx->pc = 0x1ffd18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
    // 0x1ffd1c: 0x0  nop
    ctx->pc = 0x1ffd1cu;
    // NOP
label_1ffd20:
    // 0x1ffd20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ffd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ffd24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFD24u;
    {
        const bool branch_taken_0x1ffd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD24u;
        // 0x1ffd28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffd24) {
            ctx->pc = 0x1FFD34u;
            goto label_1ffd34;
        }
    }
    ctx->pc = 0x1FFD2Cu;
    // 0x1ffd2c: 0xc07f95c  jal         func_1FE570
    ctx->pc = 0x1FFD2Cu;
    SET_GPR_U32(ctx, 31, 0x1FFD34u);
    ctx->pc = 0x1FFD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFD2Cu;
    // 0x1ffd30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE570u, 0x1FFD2Cu, 0x1FFD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFD34u;
label_1ffd34:
    // 0x1ffd34: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ffd34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ffd38: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1ffd38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ffd3c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FFD3Cu;
    {
        const bool branch_taken_0x1ffd3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD3Cu;
        // 0x1ffd40: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffd3c) {
            ctx->pc = 0x1FFD20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ffd20;
        }
    }
    ctx->pc = 0x1FFD44u;
    // 0x1ffd44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ffd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffd48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ffd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffd4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ffd4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffd50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ffd50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffd54: 0xc07f982  jal         func_1FE608
    ctx->pc = 0x1FFD54u;
    SET_GPR_U32(ctx, 31, 0x1FFD5Cu);
    ctx->pc = 0x1FFD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFD54u;
    // 0x1ffd58: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE608u, 0x1FFD54u, 0x1FFD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFD5Cu;
label_1ffd5c:
    // 0x1ffd5c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1ffd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ffd60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ffd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffd64: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x1ffd64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
    // 0x1ffd68: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x1FFD68u;
    {
        const bool branch_taken_0x1ffd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD68u;
        // 0x1ffd6c: 0xae430080  sw          $v1, 0x80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffd68) {
            ctx->pc = 0x200098u;
            goto label_200098;
        }
    }
    ctx->pc = 0x1FFD70u;
label_1ffd70:
    // 0x1ffd70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFD70u;
    {
        const bool branch_taken_0x1ffd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD70u;
        // 0x1ffd74: 0xae400080  sw          $zero, 0x80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffd70) {
            ctx->pc = 0x1FFD80u;
            goto label_1ffd80;
        }
    }
    ctx->pc = 0x1FFD78u;
    // 0x1ffd78: 0xc07fad0  jal         func_1FEB40
    ctx->pc = 0x1FFD78u;
    SET_GPR_U32(ctx, 31, 0x1FFD80u);
    ctx->pc = 0x1FFD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFD78u;
    // 0x1ffd7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEB40u, 0x1FFD78u, 0x1FFD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFD80u;
label_1ffd80:
    // 0x1ffd80: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x1ffd80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x1ffd84: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x1ffd84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x1ffd88: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x1ffd88u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffd8c: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x1ffd8cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1ffd90: 0x2463cb28  addiu       $v1, $v1, -0x34D8
    ctx->pc = 0x1ffd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953768));
    // 0x1ffd94: 0xa2440098  sb          $a0, 0x98($s2)
    ctx->pc = 0x1ffd94u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 152), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ffd98: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1ffd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1ffd9c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FFD9Cu;
    {
        const bool branch_taken_0x1ffd9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD9Cu;
        // 0x1ffda0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffd9c) {
            ctx->pc = 0x1FFDE4u;
            goto label_1ffde4;
        }
    }
    ctx->pc = 0x1FFDA4u;
    // 0x1ffda4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ffda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ffda8: 0x9043b821  lbu         $v1, -0x47DF($v0)
    ctx->pc = 0x1ffda8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FB821u));
    // 0x1ffdac: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1FFDACu;
    {
        const bool branch_taken_0x1ffdac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffdac) {
            ctx->pc = 0x1FFDE4u;
            goto label_1ffde4;
        }
    }
    ctx->pc = 0x1FFDB4u;
    // 0x1ffdb4: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x1FFDB4u;
    SET_GPR_U32(ctx, 31, 0x1FFDBCu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x1FFDB4u, 0x1FFDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFDBCu;
label_1ffdbc:
    // 0x1ffdbc: 0x904300f4  lbu         $v1, 0xF4($v0)
    ctx->pc = 0x1ffdbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x1ffdc0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FFDC0u;
    {
        const bool branch_taken_0x1ffdc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffdc0) {
            ctx->pc = 0x1FFDE4u;
            goto label_1ffde4;
        }
    }
    ctx->pc = 0x1FFDC8u;
    // 0x1ffdc8: 0xc0a0340  jal         func_280D00
    ctx->pc = 0x1FFDC8u;
    SET_GPR_U32(ctx, 31, 0x1FFDD0u);
    ctx->pc = 0x280D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D00u, 0x1FFDC8u, 0x1FFDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFDD0u;
label_1ffdd0:
    // 0x1ffdd0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ffdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ffdd4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFDD4u;
    {
        const bool branch_taken_0x1ffdd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FFDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFDD4u;
        // 0x1ffdd8: 0x8e22bd6c  lw          $v0, -0x4294($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffdd4) {
            ctx->pc = 0x1FFDE4u;
            goto label_1ffde4;
        }
    }
    ctx->pc = 0x1FFDDCu;
    // 0x1ffddc: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x1ffddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x1ffde0: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x1ffde0u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1ffde4:
    // 0x1ffde4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFDE4u;
    {
        const bool branch_taken_0x1ffde4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFDE4u;
        // 0x1ffde8: 0xae500090  sw          $s0, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffde4) {
            ctx->pc = 0x1FFDF4u;
            goto label_1ffdf4;
        }
    }
    ctx->pc = 0x1FFDECu;
    // 0x1ffdec: 0xc07fd5c  jal         func_1FF570
    ctx->pc = 0x1FFDECu;
    SET_GPR_U32(ctx, 31, 0x1FFDF4u);
    ctx->pc = 0x1FFDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFDECu;
    // 0x1ffdf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF570u, 0x1FFDECu, 0x1FFDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFDF4u;
label_1ffdf4:
    // 0x1ffdf4: 0x9242004a  lbu         $v0, 0x4A($s2)
    ctx->pc = 0x1ffdf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 74)));
    // 0x1ffdf8: 0x3c130049  lui         $s3, 0x49
    ctx->pc = 0x1ffdf8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)73 << 16));
    // 0x1ffdfc: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x1ffdfcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x1ffe00: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x1ffe00u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x1ffe04: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1FFE04u;
    {
        const bool branch_taken_0x1ffe04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE04u;
        // 0x1ffe08: 0x3c160059  lui         $s6, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffe04) {
            ctx->pc = 0x1FFE74u;
            goto label_1ffe74;
        }
    }
    ctx->pc = 0x1FFE0Cu;
    // 0x1ffe0c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1ffe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1ffe10: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x1ffe10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD70u));
    // 0x1ffe14: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1ffe14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1ffe18: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FFE18u;
    {
        const bool branch_taken_0x1ffe18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE18u;
        // 0x1ffe1c: 0x2664a080  addiu       $a0, $s3, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffe18) {
            ctx->pc = 0x1FFE78u;
            goto label_1ffe78;
        }
    }
    ctx->pc = 0x1FFE20u;
    // 0x1ffe20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ffe20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffe24: 0xc07fae6  jal         func_1FEB98
    ctx->pc = 0x1FFE24u;
    SET_GPR_U32(ctx, 31, 0x1FFE2Cu);
    ctx->pc = 0x1FFE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFE24u;
    // 0x1ffe28: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEB98u, 0x1FFE24u, 0x1FFE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFE2Cu;
label_1ffe2c:
    // 0x1ffe2c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1ffe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ffe30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ffe30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffe34: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x1ffe34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x1ffe38: 0xc07f84c  jal         func_1FE130
    ctx->pc = 0x1FFE38u;
    SET_GPR_U32(ctx, 31, 0x1FFE40u);
    ctx->pc = 0x1FFE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFE38u;
    // 0x1ffe3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE130u, 0x1FFE38u, 0x1FFE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFE40u;
label_1ffe40:
    // 0x1ffe40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ffe40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffe44: 0x0  nop
    ctx->pc = 0x1ffe44u;
    // NOP
label_1ffe48:
    // 0x1ffe48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ffe48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffe4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ffe4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffe50: 0xc07fc06  jal         func_1FF018
    ctx->pc = 0x1FFE50u;
    SET_GPR_U32(ctx, 31, 0x1FFE58u);
    ctx->pc = 0x1FFE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFE50u;
    // 0x1ffe54: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF018u, 0x1FFE50u, 0x1FFE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFE58u;
label_1ffe58:
    // 0x1ffe58: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1ffe58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ffe5c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FFE5Cu;
    {
        const bool branch_taken_0x1ffe5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE5Cu;
        // 0x1ffe60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffe5c) {
            ctx->pc = 0x1FFE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ffe48;
        }
    }
    ctx->pc = 0x1FFE64u;
    // 0x1ffe64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ffe64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffe68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ffe68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffe6c: 0xc07fc06  jal         func_1FF018
    ctx->pc = 0x1FFE6Cu;
    SET_GPR_U32(ctx, 31, 0x1FFE74u);
    ctx->pc = 0x1FFE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFE6Cu;
    // 0x1ffe70: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF018u, 0x1FFE6Cu, 0x1FFE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFE74u;
label_1ffe74:
    // 0x1ffe74: 0x2664a080  addiu       $a0, $s3, -0x5F80
    ctx->pc = 0x1ffe74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942848));
label_1ffe78:
    // 0x1ffe78: 0xc049696  jal         func_125A58
    ctx->pc = 0x1FFE78u;
    SET_GPR_U32(ctx, 31, 0x1FFE80u);
    ctx->pc = 0x1FFE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFE78u;
    // 0x1ffe7c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125A58u, 0x1FFE78u, 0x1FFE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFE80u;
label_1ffe80:
    // 0x1ffe80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ffe80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffe84: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FFE84u;
    {
        const bool branch_taken_0x1ffe84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE84u;
        // 0x1ffe88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffe84) {
            ctx->pc = 0x1FFEF0u;
            goto label_1ffef0;
        }
    }
    ctx->pc = 0x1FFE8Cu;
    // 0x1ffe8c: 0xc07fef4  jal         func_1FFBD0
    ctx->pc = 0x1FFE8Cu;
    SET_GPR_U32(ctx, 31, 0x1FFE94u);
    ctx->pc = 0x1FFE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFE8Cu;
    // 0x1ffe90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFBD0u, 0x1FFE8Cu, 0x1FFE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFE94u;
label_1ffe94:
    // 0x1ffe94: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ffe94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ffe98: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1ffe98u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1ffe9c: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x1ffe9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ffea0: 0x0  nop
    ctx->pc = 0x1ffea0u;
    // NOP
    // 0x1ffea4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1FFEA4u;
    {
        const bool branch_taken_0x1ffea4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ffea4) {
            ctx->pc = 0x1FFEF0u;
            goto label_1ffef0;
        }
    }
    ctx->pc = 0x1FFEACu;
    // 0x1ffeac: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1ffeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ffeb0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ffeb0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ffeb4: 0x0  nop
    ctx->pc = 0x1ffeb4u;
    // NOP
    // 0x1ffeb8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1FFEB8u;
    {
        const bool branch_taken_0x1ffeb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FFEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFEB8u;
        // 0x1ffebc: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffeb8) {
            ctx->pc = 0x1FFEE8u;
            goto label_1ffee8;
        }
    }
    ctx->pc = 0x1FFEC0u;
    // 0x1ffec0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1ffec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ffec4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ffec4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ffec8: 0x0  nop
    ctx->pc = 0x1ffec8u;
    // NOP
    // 0x1ffecc: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x1FFECCu;
    {
        const bool branch_taken_0x1ffecc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ffecc) {
            ctx->pc = 0x1FFED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFECCu;
            // 0x1ffed0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFEECu;
            goto label_1ffeec;
        }
    }
    ctx->pc = 0x1FFED4u;
    // 0x1ffed4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1ffed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ffed8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ffed8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ffedc: 0x0  nop
    ctx->pc = 0x1ffedcu;
    // NOP
    // 0x1ffee0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFEE0u;
    {
        const bool branch_taken_0x1ffee0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ffee0) {
            ctx->pc = 0x1FFEF0u;
            goto label_1ffef0;
        }
    }
    ctx->pc = 0x1FFEE8u;
label_1ffee8:
    // 0x1ffee8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1ffee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ffeec:
    // 0x1ffeec: 0xae829360  sw          $v0, -0x6CA0($s4)
    ctx->pc = 0x1ffeecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294939488), GPR_U32(ctx, 2));
label_1ffef0:
    // 0x1ffef0: 0xc0494ea  jal         func_1253A8
    ctx->pc = 0x1FFEF0u;
    SET_GPR_U32(ctx, 31, 0x1FFEF8u);
    ctx->pc = 0x1FFEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFEF0u;
    // 0x1ffef4: 0x2664a080  addiu       $a0, $s3, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1253A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253A8u, 0x1FFEF0u, 0x1FFEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFEF8u;
label_1ffef8:
    // 0x1ffef8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FFEF8u;
    {
        const bool branch_taken_0x1ffef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFEF8u;
        // 0x1ffefc: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffef8) {
            ctx->pc = 0x1FFF34u;
            goto label_1fff34;
        }
    }
    ctx->pc = 0x1FFF00u;
    // 0x1fff00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fff00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fff04: 0xaea29364  sw          $v0, -0x6C9C($s5)
    ctx->pc = 0x1fff04u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294939492), GPR_U32(ctx, 2));
    // 0x1fff08: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1fff08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fff0c: 0x0  nop
    ctx->pc = 0x1fff0cu;
    // NOP
    // 0x1fff10: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1FFF10u;
    {
        const bool branch_taken_0x1fff10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FFF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF10u;
        // 0x1fff14: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fff10) {
            ctx->pc = 0x1FFF34u;
            goto label_1fff34;
        }
    }
    ctx->pc = 0x1FFF18u;
    // 0x1fff18: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1fff18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1fff1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fff1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fff20: 0x0  nop
    ctx->pc = 0x1fff20u;
    // NOP
    // 0x1fff24: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1fff24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fff28: 0x0  nop
    ctx->pc = 0x1fff28u;
    // NOP
    // 0x1fff2c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1FFF2Cu;
    {
        const bool branch_taken_0x1fff2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fff2c) {
            ctx->pc = 0x1FFF30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFF2Cu;
            // 0x1fff30: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFF34u;
            goto label_1fff34;
        }
    }
    ctx->pc = 0x1FFF34u;
label_1fff34:
    // 0x1fff34: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x1FFF34u;
    SET_GPR_U32(ctx, 31, 0x1FFF3Cu);
    ctx->pc = 0x1FFF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFF34u;
    // 0x1fff38: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x1FFF34u, 0x1FFF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFF3Cu;
label_1fff3c:
    // 0x1fff3c: 0x904300f4  lbu         $v1, 0xF4($v0)
    ctx->pc = 0x1fff3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x1fff40: 0x26c55870  addiu       $a1, $s6, 0x5870
    ctx->pc = 0x1fff40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 22640));
    // 0x1fff44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fff44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fff48: 0x90a403d4  lbu         $a0, 0x3D4($a1)
    ctx->pc = 0x1fff48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 980)));
    // 0x1fff4c: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FFF4Cu;
    {
        const bool branch_taken_0x1fff4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF4Cu;
        // 0x1fff50: 0x43880b  movn        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fff4c) {
            ctx->pc = 0x1FFF90u;
            goto label_1fff90;
        }
    }
    ctx->pc = 0x1FFF54u;
    // 0x1fff54: 0x90a203d5  lbu         $v0, 0x3D5($a1)
    ctx->pc = 0x1fff54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 981)));
    // 0x1fff58: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FFF58u;
    {
        const bool branch_taken_0x1fff58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF58u;
        // 0x1fff5c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fff58) {
            ctx->pc = 0x1FFF94u;
            goto label_1fff94;
        }
    }
    ctx->pc = 0x1FFF60u;
    // 0x1fff60: 0x90a203d6  lbu         $v0, 0x3D6($a1)
    ctx->pc = 0x1fff60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 982)));
    // 0x1fff64: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FFF64u;
    {
        const bool branch_taken_0x1fff64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF64u;
        // 0x1fff68: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fff64) {
            ctx->pc = 0x1FFF94u;
            goto label_1fff94;
        }
    }
    ctx->pc = 0x1FFF6Cu;
    // 0x1fff6c: 0x90a203d7  lbu         $v0, 0x3D7($a1)
    ctx->pc = 0x1fff6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 983)));
    // 0x1fff70: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FFF70u;
    {
        const bool branch_taken_0x1fff70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF70u;
        // 0x1fff74: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fff70) {
            ctx->pc = 0x1FFF94u;
            goto label_1fff94;
        }
    }
    ctx->pc = 0x1FFF78u;
    // 0x1fff78: 0x90a203d8  lbu         $v0, 0x3D8($a1)
    ctx->pc = 0x1fff78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 984)));
    // 0x1fff7c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FFF7Cu;
    {
        const bool branch_taken_0x1fff7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF7Cu;
        // 0x1fff80: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fff7c) {
            ctx->pc = 0x1FFF94u;
            goto label_1fff94;
        }
    }
    ctx->pc = 0x1FFF84u;
    // 0x1fff84: 0x90a2027c  lbu         $v0, 0x27C($a1)
    ctx->pc = 0x1fff84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 636)));
    // 0x1fff88: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1FFF88u;
    {
        const bool branch_taken_0x1fff88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fff88) {
            ctx->pc = 0x1FFF8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFF88u;
            // 0x1fff8c: 0x8e42008c  lw          $v0, 0x8C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFFF8u;
            goto label_1ffff8;
        }
    }
    ctx->pc = 0x1FFF90u;
label_1fff90:
    // 0x1fff90: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1fff90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1fff94:
    // 0x1fff94: 0x9043bdad  lbu         $v1, -0x4253($v0)
    ctx->pc = 0x1fff94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950317)));
    // 0x1fff98: 0x54600012  bnel        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FFF98u;
    {
        const bool branch_taken_0x1fff98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fff98) {
            ctx->pc = 0x1FFF9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFF98u;
            // 0x1fff9c: 0x8e420090  lw          $v0, 0x90($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFFE4u;
            goto label_1fffe4;
        }
    }
    ctx->pc = 0x1FFFA0u;
    // 0x1fffa0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1fffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1fffa4: 0x9043bdac  lbu         $v1, -0x4254($v0)
    ctx->pc = 0x1fffa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FBDACu));
    // 0x1fffa8: 0x5460000e  bnel        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1FFFA8u;
    {
        const bool branch_taken_0x1fffa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fffa8) {
            ctx->pc = 0x1FFFACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFFA8u;
            // 0x1fffac: 0x8e420090  lw          $v0, 0x90($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFFE4u;
            goto label_1fffe4;
        }
    }
    ctx->pc = 0x1FFFB0u;
    // 0x1fffb0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1fffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1fffb4: 0x8c43bdc0  lw          $v1, -0x4240($v0)
    ctx->pc = 0x1fffb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBDC0u));
    // 0x1fffb8: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1FFFB8u;
    {
        const bool branch_taken_0x1fffb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fffb8) {
            ctx->pc = 0x1FFFBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFFB8u;
            // 0x1fffbc: 0x8e420090  lw          $v0, 0x90($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFFE4u;
            goto label_1fffe4;
        }
    }
    ctx->pc = 0x1FFFC0u;
    // 0x1fffc0: 0x8fc2bd50  lw          $v0, -0x42B0($fp)
    ctx->pc = 0x1fffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950224)));
    // 0x1fffc4: 0x90431198  lbu         $v1, 0x1198($v0)
    ctx->pc = 0x1fffc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4504)));
    // 0x1fffc8: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FFFC8u;
    {
        const bool branch_taken_0x1fffc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fffc8) {
            ctx->pc = 0x1FFFCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFFC8u;
            // 0x1fffcc: 0x8e420090  lw          $v0, 0x90($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFFE4u;
            goto label_1fffe4;
        }
    }
    ctx->pc = 0x1FFFD0u;
    // 0x1fffd0: 0x26e2cb28  addiu       $v0, $s7, -0x34D8
    ctx->pc = 0x1fffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294953768));
    // 0x1fffd4: 0x8c430148  lw          $v1, 0x148($v0)
    ctx->pc = 0x1fffd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x1fffd8: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FFFD8u;
    {
        const bool branch_taken_0x1fffd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fffd8) {
            ctx->pc = 0x1FFFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFFD8u;
            // 0x1fffdc: 0x8e42008c  lw          $v0, 0x8C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFFF8u;
            goto label_1ffff8;
        }
    }
    ctx->pc = 0x1FFFE0u;
    // 0x1fffe0: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x1fffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_1fffe4:
    // 0x1fffe4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFFE4u;
    {
        const bool branch_taken_0x1fffe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFE4u;
        // 0x1fffe8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fffe4) {
            ctx->pc = 0x1FFFF4u;
            goto label_1ffff4;
        }
    }
    ctx->pc = 0x1FFFECu;
    // 0x1fffec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FFFECu;
    {
        const bool branch_taken_0x1fffec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFECu;
        // 0x1ffff0: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fffec) {
            ctx->pc = 0x200008u;
            goto label_200008;
        }
    }
    ctx->pc = 0x1FFFF4u;
label_1ffff4:
    // 0x1ffff4: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x1ffff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_1ffff8:
    // 0x1ffff8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFFF8u;
    {
        const bool branch_taken_0x1ffff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffff8) {
            ctx->pc = 0x1FFFFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFFF8u;
            // 0x1ffffc: 0x8e42005c  lw          $v0, 0x5C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20000Cu;
            goto label_20000c;
        }
    }
    ctx->pc = 0x200000u;
    // 0x200000: 0xae40008c  sw          $zero, 0x8C($s2)
    ctx->pc = 0x200000u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
    // 0x200004: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x200004u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200008:
    // 0x200008: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x200008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_20000c:
    // 0x20000c: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20000Cu;
    {
        const bool branch_taken_0x20000c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x200010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20000Cu;
        // 0x200010: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20000c) {
            ctx->pc = 0x20001Cu;
            goto label_20001c;
        }
    }
    ctx->pc = 0x200014u;
    // 0x200014: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x200014u;
    {
        const bool branch_taken_0x200014 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x200014) {
            ctx->pc = 0x200018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200014u;
            // 0x200018: 0x8e42008c  lw          $v0, 0x8C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200048u;
            goto label_200048;
        }
    }
    ctx->pc = 0x20001Cu;
label_20001c:
    // 0x20001c: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20001Cu;
    {
        const bool branch_taken_0x20001c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x200020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20001Cu;
        // 0x200020: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20001c) {
            ctx->pc = 0x200038u;
            goto label_200038;
        }
    }
    ctx->pc = 0x200024u;
    // 0x200024: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200028: 0xc07fc06  jal         func_1FF018
    ctx->pc = 0x200028u;
    SET_GPR_U32(ctx, 31, 0x200030u);
    ctx->pc = 0x20002Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200028u;
    // 0x20002c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF018u, 0x200028u, 0x200030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200030u;
label_200030:
    // 0x200030: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x200030u;
    {
        const bool branch_taken_0x200030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200030u;
        // 0x200034: 0x8e42008c  lw          $v0, 0x8C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200030) {
            ctx->pc = 0x200048u;
            goto label_200048;
        }
    }
    ctx->pc = 0x200038u;
label_200038:
    // 0x200038: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x200038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20003c: 0xc07fc06  jal         func_1FF018
    ctx->pc = 0x20003Cu;
    SET_GPR_U32(ctx, 31, 0x200044u);
    ctx->pc = 0x200040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20003Cu;
    // 0x200040: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF018u, 0x20003Cu, 0x200044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200044u;
label_200044:
    // 0x200044: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x200044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_200048:
    // 0x200048: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x200048u;
    {
        const bool branch_taken_0x200048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200048u;
        // 0x20004c: 0xae51005c  sw          $s1, 0x5C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200048) {
            ctx->pc = 0x200060u;
            goto label_200060;
        }
    }
    ctx->pc = 0x200050u;
    // 0x200050: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x200050u;
    {
        const bool branch_taken_0x200050 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x200054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200050u;
        // 0x200054: 0x8e829360  lw          $v0, -0x6CA0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294939488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200050) {
            ctx->pc = 0x200064u;
            goto label_200064;
        }
    }
    ctx->pc = 0x200058u;
    // 0x200058: 0xc07fc6c  jal         func_1FF1B0
    ctx->pc = 0x200058u;
    SET_GPR_U32(ctx, 31, 0x200060u);
    ctx->pc = 0x20005Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200058u;
    // 0x20005c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF1B0u, 0x200058u, 0x200060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200060u;
label_200060:
    // 0x200060: 0x8e829360  lw          $v0, -0x6CA0($s4)
    ctx->pc = 0x200060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294939488)));
label_200064:
    // 0x200064: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x200064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x200068: 0x2843ffff  slti        $v1, $v0, -0x1
    ctx->pc = 0x200068u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x20006c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20006Cu;
    {
        const bool branch_taken_0x20006c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x200070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20006Cu;
        // 0x200070: 0xae829360  sw          $v0, -0x6CA0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294939488), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20006c) {
            ctx->pc = 0x20007Cu;
            goto label_20007c;
        }
    }
    ctx->pc = 0x200074u;
    // 0x200074: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x200074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x200078: 0xae829360  sw          $v0, -0x6CA0($s4)
    ctx->pc = 0x200078u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294939488), GPR_U32(ctx, 2));
label_20007c:
    // 0x20007c: 0x8ea29364  lw          $v0, -0x6C9C($s5)
    ctx->pc = 0x20007cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294939492)));
    // 0x200080: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x200080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x200084: 0x2843ffff  slti        $v1, $v0, -0x1
    ctx->pc = 0x200084u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x200088: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x200088u;
    {
        const bool branch_taken_0x200088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200088u;
        // 0x20008c: 0xaea29364  sw          $v0, -0x6C9C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294939492), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200088) {
            ctx->pc = 0x200098u;
            goto label_200098;
        }
    }
    ctx->pc = 0x200090u;
    // 0x200090: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x200090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x200094: 0xaea29364  sw          $v0, -0x6C9C($s5)
    ctx->pc = 0x200094u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294939492), GPR_U32(ctx, 2));
label_200098:
    // 0x200098: 0xc081a88  jal         func_206A20
    ctx->pc = 0x200098u;
    SET_GPR_U32(ctx, 31, 0x2000A0u);
    ctx->pc = 0x20009Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200098u;
    // 0x20009c: 0x8e440034  lw          $a0, 0x34($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206A20u, 0x200098u, 0x2000A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2000A0u;
label_2000a0:
    // 0x2000a0: 0xc081a88  jal         func_206A20
    ctx->pc = 0x2000A0u;
    SET_GPR_U32(ctx, 31, 0x2000A8u);
    ctx->pc = 0x2000A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2000A0u;
    // 0x2000a4: 0x8e440038  lw          $a0, 0x38($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206A20u, 0x2000A0u, 0x2000A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2000A8u;
label_2000a8:
    // 0x2000a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2000a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2000ac:
    // 0x2000ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2000acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2000b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2000b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2000b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2000b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2000b8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2000b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2000bc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2000bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2000c0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2000c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2000c4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2000c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2000c8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2000c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2000cc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2000ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2000d0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2000d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2000d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2000D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2000D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2000D4u;
        // 0x2000d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2000D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2000DCu;
    // 0x2000dc: 0x0  nop
    ctx->pc = 0x2000dcu;
    // NOP
    ctx->pc = 0x2000e0u;
}
