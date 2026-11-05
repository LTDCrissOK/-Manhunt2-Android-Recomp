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

// Function: sub_0016ECA0
// Address: 0x16eca0 - 0x16eec0
void sub_0016ECA0_0x16eca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016ECA0_0x16eca0");
#endif

    switch (ctx->pc) {
        case 0x16ecfcu: goto label_16ecfc;
        case 0x16ed10u: goto label_16ed10;
        case 0x16ed68u: goto label_16ed68;
        case 0x16ed88u: goto label_16ed88;
        case 0x16eda4u: goto label_16eda4;
        case 0x16edb4u: goto label_16edb4;
        case 0x16edc8u: goto label_16edc8;
        default: break;
    }

    ctx->pc = 0x16eca0u;

    // 0x16eca0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x16eca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x16eca4: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x16eca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x16eca8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x16eca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ecac: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x16ecacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x16ecb0: 0xffb500c8  sd          $s5, 0xC8($sp)
    ctx->pc = 0x16ecb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 21));
    // 0x16ecb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16ecb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ecb8: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x16ecb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x16ecbc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x16ecbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x16ecc0: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x16ecc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x16ecc4: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x16ecc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x16ecc8: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x16ecc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x16eccc: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x16ecccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x16ecd0: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x16ecd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x16ecd4: 0xffb700d8  sd          $s7, 0xD8($sp)
    ctx->pc = 0x16ecd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 23));
    // 0x16ecd8: 0xffbe00e0  sd          $fp, 0xE0($sp)
    ctx->pc = 0x16ecd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
    // 0x16ecdc: 0xffbf00e8  sd          $ra, 0xE8($sp)
    ctx->pc = 0x16ecdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 31));
    // 0x16ece0: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x16ece0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x16ece4: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x16ece4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x16ece8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x16ece8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x16ecec: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x16ececu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x16ecf0: 0x8c570010  lw          $s7, 0x10($v0)
    ctx->pc = 0x16ecf0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16ecf4: 0xc04ae56  jal         func_12B958
    ctx->pc = 0x16ECF4u;
    SET_GPR_U32(ctx, 31, 0x16ECFCu);
    ctx->pc = 0x16ECF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ECF4u;
    // 0x16ecf8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B958u, 0x16ECF4u, 0x16ECFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ECFCu;
label_16ecfc:
    // 0x16ecfc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x16ecfcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed00: 0x12a00060  beqz        $s5, . + 4 + (0x60 << 2)
    ctx->pc = 0x16ED00u;
    {
        const bool branch_taken_0x16ed00 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED00u;
        // 0x16ed04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ed00) {
            ctx->pc = 0x16EE84u;
            goto label_16ee84;
        }
    }
    ctx->pc = 0x16ED08u;
    // 0x16ed08: 0xc05a618  jal         func_169860
    ctx->pc = 0x16ED08u;
    SET_GPR_U32(ctx, 31, 0x16ED10u);
    ctx->pc = 0x16ED0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ED08u;
    // 0x16ed0c: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x16ED08u, 0x16ED10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ED10u;
label_16ed10:
    // 0x16ed10: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x16ed10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x16ed14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16ed14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16ed18: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x16ed18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x16ed1c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16ed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16ed20: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x16ed20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x16ed24: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x16ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x16ed28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16ed28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16ed2c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16ed2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16ed30: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x16ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x16ed34: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x16ED34u;
    {
        const bool branch_taken_0x16ed34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ed34) {
            ctx->pc = 0x16ED38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16ED34u;
            // 0x16ed38: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16ED44u;
            goto label_16ed44;
        }
    }
    ctx->pc = 0x16ED3Cu;
    // 0x16ed3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16ED3Cu;
    {
        const bool branch_taken_0x16ed3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED3Cu;
        // 0x16ed40: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ed3c) {
            ctx->pc = 0x16ED4Cu;
            goto label_16ed4c;
        }
    }
    ctx->pc = 0x16ED44u;
label_16ed44:
    // 0x16ed44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16ed44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ed48: 0x247e0070  addiu       $fp, $v1, 0x70
    ctx->pc = 0x16ed48u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_16ed4c:
    // 0x16ed4c: 0x24160020  addiu       $s6, $zero, 0x20
    ctx->pc = 0x16ed4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x16ed50: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x16ed50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16ed54: 0x12a00042  beqz        $s5, . + 4 + (0x42 << 2)
    ctx->pc = 0x16ED54u;
    {
        const bool branch_taken_0x16ed54 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED54u;
        // 0x16ed58: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ed54) {
            ctx->pc = 0x16EE60u;
            goto label_16ee60;
        }
    }
    ctx->pc = 0x16ED5Cu;
    // 0x16ed5c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x16ed5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x16ed60: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x16ed60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x16ed64: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x16ed64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
label_16ed68:
    // 0x16ed68: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x16ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x16ed6c: 0x2464b060  addiu       $a0, $v1, -0x4FA0
    ctx->pc = 0x16ed6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946912));
    // 0x16ed70: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x16ed70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed74: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x16ed74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x16ed78: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x16ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x16ed7c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x16ed7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ed80: 0xc04ae84  jal         func_12BA10
    ctx->pc = 0x16ED80u;
    SET_GPR_U32(ctx, 31, 0x16ED88u);
    ctx->pc = 0x16ED84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ED80u;
    // 0x16ed84: 0x24478738  addiu       $a3, $v0, -0x78C8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA10u, 0x16ED80u, 0x16ED88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ED88u;
label_16ed88:
    // 0x16ed88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16ed88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed8c: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x16ED8Cu;
    {
        const bool branch_taken_0x16ed8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED8Cu;
        // 0x16ed90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ed8c) {
            ctx->pc = 0x16EE4Cu;
            goto label_16ee4c;
        }
    }
    ctx->pc = 0x16ED94u;
    // 0x16ed94: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x16ed94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16ed98: 0x8e130008  lw          $s3, 0x8($s0)
    ctx->pc = 0x16ed98u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16ed9c: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x16ED9Cu;
    SET_GPR_U32(ctx, 31, 0x16EDA4u);
    ctx->pc = 0x16EDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ED9Cu;
    // 0x16eda0: 0x8e140004  lw          $s4, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x16ED9Cu, 0x16EDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EDA4u;
label_16eda4:
    // 0x16eda4: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x16eda4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x16eda8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16eda8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16edac: 0xc042128  jal         func_1084A0
    ctx->pc = 0x16EDACu;
    SET_GPR_U32(ctx, 31, 0x16EDB4u);
    ctx->pc = 0x16EDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EDACu;
    // 0x16edb0: 0x24648758  addiu       $a0, $v1, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x16EDACu, 0x16EDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EDB4u;
label_16edb4:
    // 0x16edb4: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x16EDB4u;
    {
        const bool branch_taken_0x16edb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EDB4u;
        // 0x16edb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16edb4) {
            ctx->pc = 0x16EE4Cu;
            goto label_16ee4c;
        }
    }
    ctx->pc = 0x16EDBCu;
    // 0x16edbc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x16edbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16edc0: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x16EDC0u;
    SET_GPR_U32(ctx, 31, 0x16EDC8u);
    ctx->pc = 0x16EDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EDC0u;
    // 0x16edc4: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x16EDC0u, 0x16EDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EDC8u;
label_16edc8:
    // 0x16edc8: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x16edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16edcc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x16edccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16edd0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x16edd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16edd4: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x16edd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x16edd8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x16edd8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x16eddc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x16eddcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x16ede0: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x16ede0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x16ede4: 0x3ac20020  xori        $v0, $s6, 0x20
    ctx->pc = 0x16ede4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)32);
    // 0x16ede8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x16ede8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x16edec: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16EDECu;
    {
        const bool branch_taken_0x16edec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16edec) {
            ctx->pc = 0x16EE0Cu;
            goto label_16ee0c;
        }
    }
    ctx->pc = 0x16EDF4u;
    // 0x16edf4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x16edf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16edf8: 0x0  nop
    ctx->pc = 0x16edf8u;
    // NOP
    // 0x16edfc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x16EDFCu;
    {
        const bool branch_taken_0x16edfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16edfc) {
            ctx->pc = 0x16EE00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EDFCu;
            // 0x16ee00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EE04u;
            goto label_16ee04;
        }
    }
    ctx->pc = 0x16EE04u;
label_16ee04:
    // 0x16ee04: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x16EE04u;
    {
        const bool branch_taken_0x16ee04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE04u;
        // 0x16ee08: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ee04) {
            ctx->pc = 0x16EE50u;
            goto label_16ee50;
        }
    }
    ctx->pc = 0x16EE0Cu;
label_16ee0c:
    // 0x16ee0c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x16ee0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ee10: 0x0  nop
    ctx->pc = 0x16ee10u;
    // NOP
    // 0x16ee14: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x16EE14u;
    {
        const bool branch_taken_0x16ee14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE14u;
        // 0x16ee18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ee14) {
            ctx->pc = 0x16EE20u;
            goto label_16ee20;
        }
    }
    ctx->pc = 0x16EE1Cu;
    // 0x16ee1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16ee1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ee20:
    // 0x16ee20: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x16EE20u;
    {
        const bool branch_taken_0x16ee20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ee20) {
            ctx->pc = 0x16EE24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EE20u;
            // 0x16ee24: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EE48u;
            goto label_16ee48;
        }
    }
    ctx->pc = 0x16EE28u;
    // 0x16ee28: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x16ee28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16ee2c: 0x56630003  bnel        $s3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16EE2Cu;
    {
        const bool branch_taken_0x16ee2c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x16ee2c) {
            ctx->pc = 0x16EE30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EE2Cu;
            // 0x16ee30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EE3Cu;
            goto label_16ee3c;
        }
    }
    ctx->pc = 0x16EE34u;
    // 0x16ee34: 0x56930001  bnel        $s4, $s3, . + 4 + (0x1 << 2)
    ctx->pc = 0x16EE34u;
    {
        const bool branch_taken_0x16ee34 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        if (branch_taken_0x16ee34) {
            ctx->pc = 0x16EE38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EE34u;
            // 0x16ee38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EE3Cu;
            goto label_16ee3c;
        }
    }
    ctx->pc = 0x16EE3Cu;
label_16ee3c:
    // 0x16ee3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16EE3Cu;
    {
        const bool branch_taken_0x16ee3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE3Cu;
        // 0x16ee40: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ee3c) {
            ctx->pc = 0x16EE50u;
            goto label_16ee50;
        }
    }
    ctx->pc = 0x16EE44u;
    // 0x16ee44: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16ee44u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_16ee48:
    // 0x16ee48: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x16ee48u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16ee4c:
    // 0x16ee4c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x16ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_16ee50:
    // 0x16ee50: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x16ee50u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16ee54: 0x255182b  sltu        $v1, $s2, $s5
    ctx->pc = 0x16ee54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x16ee58: 0x1460ffc3  bnez        $v1, . + 4 + (-0x3D << 2)
    ctx->pc = 0x16EE58u;
    {
        const bool branch_taken_0x16ee58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE58u;
        // 0x16ee5c: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ee58) {
            ctx->pc = 0x16ED68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ed68;
        }
    }
    ctx->pc = 0x16EE60u;
label_16ee60:
    // 0x16ee60: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x16ee60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x16ee64: 0x12c20006  beq         $s6, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16EE64u;
    {
        const bool branch_taken_0x16ee64 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x16EE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE64u;
        // 0x16ee68: 0x8fa30090  lw          $v1, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ee64) {
            ctx->pc = 0x16EE80u;
            goto label_16ee80;
        }
    }
    ctx->pc = 0x16EE6Cu;
    // 0x16ee6c: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x16ee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x16ee70: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x16ee70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x16ee74: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x16ee74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x16ee78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16EE78u;
    {
        const bool branch_taken_0x16ee78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE78u;
        // 0x16ee7c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ee78) {
            ctx->pc = 0x16EE84u;
            goto label_16ee84;
        }
    }
    ctx->pc = 0x16EE80u;
label_16ee80:
    // 0x16ee80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16ee80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ee84:
    // 0x16ee84: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x16ee84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16ee88: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x16ee88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16ee8c: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x16ee8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16ee90: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x16ee90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16ee94: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x16ee94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16ee98: 0xdfb500c8  ld          $s5, 0xC8($sp)
    ctx->pc = 0x16ee98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16ee9c: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x16ee9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16eea0: 0xdfb700d8  ld          $s7, 0xD8($sp)
    ctx->pc = 0x16eea0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16eea4: 0xdfbe00e0  ld          $fp, 0xE0($sp)
    ctx->pc = 0x16eea4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16eea8: 0xdfbf00e8  ld          $ra, 0xE8($sp)
    ctx->pc = 0x16eea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16eeac: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x16eeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16eeb0: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x16eeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16eeb4: 0x3e00008  jr          $ra
    ctx->pc = 0x16EEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EEB4u;
        // 0x16eeb8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16EEBCu;
    // 0x16eebc: 0x0  nop
    ctx->pc = 0x16eebcu;
    // NOP
    ctx->pc = 0x16eec0u;
}
