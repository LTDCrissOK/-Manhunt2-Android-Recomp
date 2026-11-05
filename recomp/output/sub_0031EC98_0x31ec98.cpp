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

// Function: sub_0031EC98
// Address: 0x31ec98 - 0x31ee60
void sub_0031EC98_0x31ec98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EC98_0x31ec98");
#endif

    switch (ctx->pc) {
        case 0x31ecc8u: goto label_31ecc8;
        case 0x31ece4u: goto label_31ece4;
        case 0x31ed08u: goto label_31ed08;
        case 0x31ed38u: goto label_31ed38;
        case 0x31ed44u: goto label_31ed44;
        case 0x31ed58u: goto label_31ed58;
        case 0x31ed60u: goto label_31ed60;
        case 0x31ed6cu: goto label_31ed6c;
        case 0x31ed74u: goto label_31ed74;
        case 0x31ed88u: goto label_31ed88;
        case 0x31ed9cu: goto label_31ed9c;
        case 0x31eda4u: goto label_31eda4;
        case 0x31edb0u: goto label_31edb0;
        case 0x31edd8u: goto label_31edd8;
        case 0x31edecu: goto label_31edec;
        case 0x31ee0cu: goto label_31ee0c;
        default: break;
    }

    ctx->pc = 0x31ec98u;

    // 0x31ec98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31ec98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31ec9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x31ec9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x31eca0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31eca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31eca4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31eca4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31eca8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31eca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31ecac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x31ecacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x31ecb0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x31ecb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x31ecb4: 0x12400061  beqz        $s2, . + 4 + (0x61 << 2)
    ctx->pc = 0x31ECB4u;
    {
        const bool branch_taken_0x31ecb4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ECB4u;
        // 0x31ecb8: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ecb4) {
            ctx->pc = 0x31EE3Cu;
            goto label_31ee3c;
        }
    }
    ctx->pc = 0x31ECBCu;
    // 0x31ecbc: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x31ecbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x31ecc0: 0xc0dd590  jal         func_375640
    ctx->pc = 0x31ECC0u;
    SET_GPR_U32(ctx, 31, 0x31ECC8u);
    ctx->pc = 0x31ECC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ECC0u;
    // 0x31ecc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375640u, 0x31ECC0u, 0x31ECC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ECC8u;
label_31ecc8:
    // 0x31ecc8: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x31ecc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x31eccc: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x31ECCCu;
    {
        const bool branch_taken_0x31eccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ECD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ECCCu;
        // 0x31ecd0: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eccc) {
            ctx->pc = 0x31ED4Cu;
            goto label_31ed4c;
        }
    }
    ctx->pc = 0x31ECD4u;
    // 0x31ecd4: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x31ecd4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x31ecd8: 0x2453f8c8  addiu       $s3, $v0, -0x738
    ctx->pc = 0x31ecd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965448));
    // 0x31ecdc: 0xc0dc196  jal         func_370658
    ctx->pc = 0x31ECDCu;
    SET_GPR_U32(ctx, 31, 0x31ECE4u);
    ctx->pc = 0x31ECE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ECDCu;
    // 0x31ece0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370658u, 0x31ECDCu, 0x31ECE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ECE4u;
label_31ece4:
    // 0x31ece4: 0x2604f910  addiu       $a0, $s0, -0x6F0
    ctx->pc = 0x31ece4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965520));
    // 0x31ece8: 0x8e02f910  lw          $v0, -0x6F0($s0)
    ctx->pc = 0x31ece8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x31ecec: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x31ececu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31ecf0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x31ecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x31ecf4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x31ecf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x31ecf8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31ECF8u;
    {
        const bool branch_taken_0x31ecf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31ECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ECF8u;
        // 0x31ecfc: 0x8e510030  lw          $s1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ecf8) {
            ctx->pc = 0x31ED08u;
            goto label_31ed08;
        }
    }
    ctx->pc = 0x31ED00u;
    // 0x31ed00: 0xc0dc442  jal         func_371108
    ctx->pc = 0x31ED00u;
    SET_GPR_U32(ctx, 31, 0x31ED08u);
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x31ED00u, 0x31ED08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ED08u;
label_31ed08:
    // 0x31ed08: 0x8e02f910  lw          $v0, -0x6F0($s0)
    ctx->pc = 0x31ed08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x31ed0c: 0x3c055000  lui         $a1, 0x5000
    ctx->pc = 0x31ed0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
    // 0x31ed10: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x31ed10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x31ed14: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x31ed14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x31ed18: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x31ed18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x31ed1c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x31ed1cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x31ed20: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x31ed20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x31ed24: 0xae02f910  sw          $v0, -0x6F0($s0)
    ctx->pc = 0x31ed24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 2));
    // 0x31ed28: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x31ed28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x31ed2c: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x31ed2cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x31ed30: 0xc0dd734  jal         func_375CD0
    ctx->pc = 0x31ED30u;
    SET_GPR_U32(ctx, 31, 0x31ED38u);
    ctx->pc = 0x31ED34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ED30u;
    // 0x31ed34: 0xae03f910  sw          $v1, -0x6F0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375CD0u, 0x31ED30u, 0x31ED38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ED38u;
label_31ed38:
    // 0x31ed38: 0x9245005c  lbu         $a1, 0x5C($s2)
    ctx->pc = 0x31ed38u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x31ed3c: 0xc0dd5da  jal         func_375768
    ctx->pc = 0x31ED3Cu;
    SET_GPR_U32(ctx, 31, 0x31ED44u);
    ctx->pc = 0x31ED40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ED3Cu;
    // 0x31ed40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375768u, 0x31ED3Cu, 0x31ED44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ED44u;
label_31ed44:
    // 0x31ed44: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x31ED44u;
    {
        const bool branch_taken_0x31ed44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ED44u;
        // 0x31ed48: 0xae72001c  sw          $s2, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ed44) {
            ctx->pc = 0x31EE3Cu;
            goto label_31ee3c;
        }
    }
    ctx->pc = 0x31ED4Cu;
label_31ed4c:
    // 0x31ed4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31ed4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ed50: 0xc0dd726  jal         func_375C98
    ctx->pc = 0x31ED50u;
    SET_GPR_U32(ctx, 31, 0x31ED58u);
    ctx->pc = 0x31ED54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ED50u;
    // 0x31ed54: 0x3c14005c  lui         $s4, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)92 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375C98u, 0x31ED50u, 0x31ED58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ED58u;
label_31ed58:
    // 0x31ed58: 0xc0dd716  jal         func_375C58
    ctx->pc = 0x31ED58u;
    SET_GPR_U32(ctx, 31, 0x31ED60u);
    ctx->pc = 0x31ED5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ED58u;
    // 0x31ed5c: 0x2693f910  addiu       $s3, $s4, -0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375C58u, 0x31ED58u, 0x31ED60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ED60u;
label_31ed60:
    // 0x31ed60: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x31ed60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x31ed64: 0xc0dc196  jal         func_370658
    ctx->pc = 0x31ED64u;
    SET_GPR_U32(ctx, 31, 0x31ED6Cu);
    ctx->pc = 0x31ED68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ED64u;
    // 0x31ed68: 0x2484f8c8  addiu       $a0, $a0, -0x738 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370658u, 0x31ED64u, 0x31ED6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ED6Cu;
label_31ed6c:
    // 0x31ed6c: 0xc0dd84e  jal         func_376138
    ctx->pc = 0x31ED6Cu;
    SET_GPR_U32(ctx, 31, 0x31ED74u);
    ctx->pc = 0x31ED70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ED6Cu;
    // 0x31ed70: 0x3c11005b  lui         $s1, 0x5B (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)91 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376138u, 0x31ED6Cu, 0x31ED74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ED74u;
label_31ed74:
    // 0x31ed74: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x31ed74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x31ed78: 0x26312340  addiu       $s1, $s1, 0x2340
    ctx->pc = 0x31ed78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 9024));
    // 0x31ed7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31ed7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ed80: 0xc0dc52e  jal         func_3714B8
    ctx->pc = 0x31ED80u;
    SET_GPR_U32(ctx, 31, 0x31ED88u);
    ctx->pc = 0x31ED84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ED80u;
    // 0x31ed84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3714B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3714B8u, 0x31ED80u, 0x31ED88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ED88u;
label_31ed88:
    // 0x31ed88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31ed88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31ed8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x31ed8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31ed90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31ed90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ed94: 0xc0dbad8  jal         func_36EB60
    ctx->pc = 0x31ED94u;
    SET_GPR_U32(ctx, 31, 0x31ED9Cu);
    ctx->pc = 0x31ED98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ED94u;
    // 0x31ed98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36EB60u, 0x31ED94u, 0x31ED9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ED9Cu;
label_31ed9c:
    // 0x31ed9c: 0xc0dd878  jal         func_3761E0
    ctx->pc = 0x31ED9Cu;
    SET_GPR_U32(ctx, 31, 0x31EDA4u);
    ctx->pc = 0x3761E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3761E0u, 0x31ED9Cu, 0x31EDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EDA4u;
label_31eda4:
    // 0x31eda4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31eda4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31eda8: 0xc0dc536  jal         func_3714D8
    ctx->pc = 0x31EDA8u;
    SET_GPR_U32(ctx, 31, 0x31EDB0u);
    ctx->pc = 0x31EDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EDA8u;
    // 0x31edac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3714D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3714D8u, 0x31EDA8u, 0x31EDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EDB0u;
label_31edb0:
    // 0x31edb0: 0x518023  subu        $s0, $v0, $s1
    ctx->pc = 0x31edb0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x31edb4: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x31edb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x31edb8: 0x108103  sra         $s0, $s0, 4
    ctx->pc = 0x31edb8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
    // 0x31edbc: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x31edbcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x31edc0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31edc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31edc4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x31edc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x31edc8: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x31edc8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31edcc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x31edccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x31edd0: 0xc0b241a  jal         func_2C9068
    ctx->pc = 0x31EDD0u;
    SET_GPR_U32(ctx, 31, 0x31EDD8u);
    ctx->pc = 0x31EDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EDD0u;
    // 0x31edd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9068u, 0x31EDD0u, 0x31EDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EDD8u;
label_31edd8:
    // 0x31edd8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x31edd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31eddc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31eddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ede0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31ede0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ede4: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x31EDE4u;
    SET_GPR_U32(ctx, 31, 0x31EDECu);
    ctx->pc = 0x31EDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EDE4u;
    // 0x31ede8: 0xae420030  sw          $v0, 0x30($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x31EDE4u, 0x31EDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EDECu;
label_31edec:
    // 0x31edec: 0x8e82f910  lw          $v0, -0x6F0($s4)
    ctx->pc = 0x31edecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294965520)));
    // 0x31edf0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x31edf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x31edf4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x31edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x31edf8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x31edf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x31edfc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31EDFCu;
    {
        const bool branch_taken_0x31edfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EDFCu;
        // 0x31ee00: 0x8e500030  lw          $s0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31edfc) {
            ctx->pc = 0x31EE0Cu;
            goto label_31ee0c;
        }
    }
    ctx->pc = 0x31EE04u;
    // 0x31ee04: 0xc0dc442  jal         func_371108
    ctx->pc = 0x31EE04u;
    SET_GPR_U32(ctx, 31, 0x31EE0Cu);
    ctx->pc = 0x31EE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EE04u;
    // 0x31ee08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x31EE04u, 0x31EE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EE0Cu;
label_31ee0c:
    // 0x31ee0c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x31ee0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x31ee10: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x31ee10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x31ee14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31ee14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31ee18: 0x8e84f910  lw          $a0, -0x6F0($s4)
    ctx->pc = 0x31ee18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294965520)));
    // 0x31ee1c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x31ee1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ee20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31ee20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31ee24: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x31ee24u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x31ee28: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x31ee28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x31ee2c: 0xae84f910  sw          $a0, -0x6F0($s4)
    ctx->pc = 0x31ee2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294965520), GPR_U32(ctx, 4));
    // 0x31ee30: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x31ee30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x31ee34: 0xfc800000  sd          $zero, 0x0($a0)
    ctx->pc = 0x31ee34u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 0));
    // 0x31ee38: 0xae82f910  sw          $v0, -0x6F0($s4)
    ctx->pc = 0x31ee38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294965520), GPR_U32(ctx, 2));
label_31ee3c:
    // 0x31ee3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31ee3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ee40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31ee40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31ee44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x31ee44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ee48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x31ee48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31ee4c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x31ee4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31ee50: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x31ee50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31ee54: 0x3e00008  jr          $ra
    ctx->pc = 0x31EE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE54u;
        // 0x31ee58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EE54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EE5Cu;
    // 0x31ee5c: 0x0  nop
    ctx->pc = 0x31ee5cu;
    // NOP
    ctx->pc = 0x31ee60u;
}
