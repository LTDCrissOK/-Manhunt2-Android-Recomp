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

// Function: sub_00364B20
// Address: 0x364b20 - 0x364e30
void sub_00364B20_0x364b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364B20_0x364b20");
#endif

    switch (ctx->pc) {
        case 0x364b5cu: goto label_364b5c;
        case 0x364b70u: goto label_364b70;
        case 0x364bb4u: goto label_364bb4;
        case 0x364bccu: goto label_364bcc;
        case 0x364bdcu: goto label_364bdc;
        case 0x364becu: goto label_364bec;
        case 0x364c04u: goto label_364c04;
        case 0x364c14u: goto label_364c14;
        case 0x364c64u: goto label_364c64;
        case 0x364c6cu: goto label_364c6c;
        case 0x364c74u: goto label_364c74;
        case 0x364c94u: goto label_364c94;
        case 0x364d04u: goto label_364d04;
        case 0x364d30u: goto label_364d30;
        case 0x364d40u: goto label_364d40;
        case 0x364d4cu: goto label_364d4c;
        case 0x364d68u: goto label_364d68;
        default: break;
    }

    ctx->pc = 0x364b20u;

    // 0x364b20: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x364b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x364b24: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x364b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x364b28: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x364b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x364b2c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x364b2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364b30: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x364b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x364b34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x364b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364b38: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x364b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x364b3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x364b3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364b40: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x364b40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x364b44: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x364b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364b48: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x364b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x364b4c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x364b4cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x364b50: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x364b50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x364b54: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x364B54u;
    SET_GPR_U32(ctx, 31, 0x364B5Cu);
    ctx->pc = 0x364B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364B54u;
    // 0x364b58: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x364B54u, 0x364B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364B5Cu;
label_364b5c:
    // 0x364b5c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x364b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x364b60: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x364B60u;
    {
        const bool branch_taken_0x364b60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x364b60) {
            ctx->pc = 0x364B7Cu;
            goto label_364b7c;
        }
    }
    ctx->pc = 0x364B68u;
    // 0x364b68: 0xc097f76  jal         func_25FDD8
    ctx->pc = 0x364B68u;
    SET_GPR_U32(ctx, 31, 0x364B70u);
    ctx->pc = 0x25FDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FDD8u, 0x364B68u, 0x364B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364B70u;
label_364b70:
    // 0x364b70: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x364B70u;
    {
        const bool branch_taken_0x364b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364b70) {
            ctx->pc = 0x364B7Cu;
            goto label_364b7c;
        }
    }
    ctx->pc = 0x364B78u;
    // 0x364b78: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x364b78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_364b7c:
    // 0x364b7c: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x364B7Cu;
    {
        const bool branch_taken_0x364b7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x364b7c) {
            ctx->pc = 0x364B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x364B7Cu;
            // 0x364b80: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x364B94u;
            goto label_364b94;
        }
    }
    ctx->pc = 0x364B84u;
    // 0x364b84: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x364b84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x364b88: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x364b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x364b8c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x364B8Cu;
    {
        const bool branch_taken_0x364b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364b8c) {
            ctx->pc = 0x364C44u;
            goto label_364c44;
        }
    }
    ctx->pc = 0x364B94u;
label_364b94:
    // 0x364b94: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x364B94u;
    {
        const bool branch_taken_0x364b94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x364B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364B94u;
        // 0x364b98: 0x26220040  addiu       $v0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364b94) {
            ctx->pc = 0x364C3Cu;
            goto label_364c3c;
        }
    }
    ctx->pc = 0x364B9Cu;
    // 0x364b9c: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x364b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x364ba0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x364ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x364ba4: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x364BA4u;
    {
        const bool branch_taken_0x364ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x364BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364BA4u;
        // 0x364ba8: 0x26220040  addiu       $v0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364ba4) {
            ctx->pc = 0x364C3Cu;
            goto label_364c3c;
        }
    }
    ctx->pc = 0x364BACu;
    // 0x364bac: 0xc0bca40  jal         func_2F2900
    ctx->pc = 0x364BACu;
    SET_GPR_U32(ctx, 31, 0x364BB4u);
    ctx->pc = 0x2F2900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2900u, 0x364BACu, 0x364BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364BB4u;
label_364bb4:
    // 0x364bb4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x364BB4u;
    {
        const bool branch_taken_0x364bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x364BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364BB4u;
        // 0x364bb8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364bb4) {
            ctx->pc = 0x364BE4u;
            goto label_364be4;
        }
    }
    ctx->pc = 0x364BBCu;
    // 0x364bbc: 0x8c43bd48  lw          $v1, -0x42B8($v0)
    ctx->pc = 0x364bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950216)));
    // 0x364bc0: 0x8c700100  lw          $s0, 0x100($v1)
    ctx->pc = 0x364bc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x364bc4: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x364BC4u;
    SET_GPR_U32(ctx, 31, 0x364BCCu);
    ctx->pc = 0x364BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364BC4u;
    // 0x364bc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x364BC4u, 0x364BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364BCCu;
label_364bcc:
    // 0x364bcc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x364BCCu;
    {
        const bool branch_taken_0x364bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x364BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364BCCu;
        // 0x364bd0: 0x260200a0  addiu       $v0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364bcc) {
            ctx->pc = 0x364C3Cu;
            goto label_364c3c;
        }
    }
    ctx->pc = 0x364BD4u;
    // 0x364bd4: 0xc0c4900  jal         func_312400
    ctx->pc = 0x364BD4u;
    SET_GPR_U32(ctx, 31, 0x364BDCu);
    ctx->pc = 0x364BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364BD4u;
    // 0x364bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x364BD4u, 0x364BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364BDCu;
label_364bdc:
    // 0x364bdc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x364BDCu;
    {
        const bool branch_taken_0x364bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x364BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364BDCu;
        // 0x364be0: 0x260200a0  addiu       $v0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364bdc) {
            ctx->pc = 0x364C3Cu;
            goto label_364c3c;
        }
    }
    ctx->pc = 0x364BE4u;
label_364be4:
    // 0x364be4: 0xc0bf868  jal         func_2FE1A0
    ctx->pc = 0x364BE4u;
    SET_GPR_U32(ctx, 31, 0x364BECu);
    ctx->pc = 0x2FE1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE1A0u, 0x364BE4u, 0x364BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364BECu;
label_364bec:
    // 0x364bec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x364BECu;
    {
        const bool branch_taken_0x364bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x364BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364BECu;
        // 0x364bf0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364bec) {
            ctx->pc = 0x364C1Cu;
            goto label_364c1c;
        }
    }
    ctx->pc = 0x364BF4u;
    // 0x364bf4: 0x8c43bd48  lw          $v1, -0x42B8($v0)
    ctx->pc = 0x364bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950216)));
    // 0x364bf8: 0x8c700100  lw          $s0, 0x100($v1)
    ctx->pc = 0x364bf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x364bfc: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x364BFCu;
    SET_GPR_U32(ctx, 31, 0x364C04u);
    ctx->pc = 0x364C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364BFCu;
    // 0x364c00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x364BFCu, 0x364C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364C04u;
label_364c04:
    // 0x364c04: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x364C04u;
    {
        const bool branch_taken_0x364c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x364C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364C04u;
        // 0x364c08: 0x260200a0  addiu       $v0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364c04) {
            ctx->pc = 0x364C3Cu;
            goto label_364c3c;
        }
    }
    ctx->pc = 0x364C0Cu;
    // 0x364c0c: 0xc0c4900  jal         func_312400
    ctx->pc = 0x364C0Cu;
    SET_GPR_U32(ctx, 31, 0x364C14u);
    ctx->pc = 0x364C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364C0Cu;
    // 0x364c10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x364C0Cu, 0x364C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364C14u;
label_364c14:
    // 0x364c14: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x364C14u;
    {
        const bool branch_taken_0x364c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x364C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364C14u;
        // 0x364c18: 0x260200a0  addiu       $v0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364c14) {
            ctx->pc = 0x364C3Cu;
            goto label_364c3c;
        }
    }
    ctx->pc = 0x364C1Cu;
label_364c1c:
    // 0x364c1c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x364c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x364c20: 0x8c440104  lw          $a0, 0x104($v0)
    ctx->pc = 0x364c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x364c24: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x364c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x364c28: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x364c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x364c2c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x364c2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x364c30: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x364c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x364c34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x364C34u;
    {
        const bool branch_taken_0x364c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364c34) {
            ctx->pc = 0x364C44u;
            goto label_364c44;
        }
    }
    ctx->pc = 0x364C3Cu;
label_364c3c:
    // 0x364c3c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x364c3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x364c40: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x364c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_364c44:
    // 0x364c44: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x364c44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x364c48: 0x0  nop
    ctx->pc = 0x364c48u;
    // NOP
    // 0x364c4c: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x364c4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x364c50: 0x0  nop
    ctx->pc = 0x364c50u;
    // NOP
    // 0x364c54: 0x45000063  bc1f        . + 4 + (0x63 << 2)
    ctx->pc = 0x364C54u;
    {
        const bool branch_taken_0x364c54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x364C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364C54u;
        // 0x364c58: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364c54) {
            ctx->pc = 0x364DE4u;
            goto label_364de4;
        }
    }
    ctx->pc = 0x364C5Cu;
    // 0x364c5c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x364C5Cu;
    SET_GPR_U32(ctx, 31, 0x364C64u);
    ctx->pc = 0x364C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364C5Cu;
    // 0x364c60: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x364C5Cu, 0x364C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364C64u;
label_364c64:
    // 0x364c64: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x364C64u;
    SET_GPR_U32(ctx, 31, 0x364C6Cu);
    ctx->pc = 0x364C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364C64u;
    // 0x364c68: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x364C64u, 0x364C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364C6Cu;
label_364c6c:
    // 0x364c6c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x364C6Cu;
    SET_GPR_U32(ctx, 31, 0x364C74u);
    ctx->pc = 0x364C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364C6Cu;
    // 0x364c70: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x364C6Cu, 0x364C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364C74u;
label_364c74:
    // 0x364c74: 0x6400028  bltz        $s2, . + 4 + (0x28 << 2)
    ctx->pc = 0x364C74u;
    {
        const bool branch_taken_0x364c74 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x364C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364C74u;
        // 0x364c78: 0x2a420002  slti        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x364c74) {
            ctx->pc = 0x364D18u;
            goto label_364d18;
        }
    }
    ctx->pc = 0x364C7Cu;
    // 0x364c7c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x364C7Cu;
    {
        const bool branch_taken_0x364c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x364C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364C7Cu;
        // 0x364c80: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364c7c) {
            ctx->pc = 0x364C9Cu;
            goto label_364c9c;
        }
    }
    ctx->pc = 0x364C84u;
    // 0x364c84: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x364c84u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
    // 0x364c88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x364c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364c8c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x364C8Cu;
    SET_GPR_U32(ctx, 31, 0x364C94u);
    ctx->pc = 0x364C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364C8Cu;
    // 0x364c90: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x364C8Cu, 0x364C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364C94u;
label_364c94:
    // 0x364c94: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x364C94u;
    {
        const bool branch_taken_0x364c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x364C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364C94u;
        // 0x364c98: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364c94) {
            ctx->pc = 0x364D70u;
            goto label_364d70;
        }
    }
    ctx->pc = 0x364C9Cu;
label_364c9c:
    // 0x364c9c: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x364c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x364ca0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x364ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x364ca4: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x364ca4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x364ca8: 0x0  nop
    ctx->pc = 0x364ca8u;
    // NOP
    // 0x364cac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x364cacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x364cb0: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x364cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x364cb4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x364CB4u;
    {
        const bool branch_taken_0x364cb4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x364CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364CB4u;
        // 0x364cb8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364cb4) {
            ctx->pc = 0x364CD0u;
            goto label_364cd0;
        }
    }
    ctx->pc = 0x364CBCu;
    // 0x364cbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x364cbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364cc0: 0x0  nop
    ctx->pc = 0x364cc0u;
    // NOP
    // 0x364cc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x364cc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x364cc8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x364CC8u;
    {
        const bool branch_taken_0x364cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364cc8) {
            ctx->pc = 0x364CECu;
            goto label_364cec;
        }
    }
    ctx->pc = 0x364CD0u;
label_364cd0:
    // 0x364cd0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x364cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x364cd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x364cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x364cd8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x364cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x364cdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x364cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364ce0: 0x0  nop
    ctx->pc = 0x364ce0u;
    // NOP
    // 0x364ce4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x364ce4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x364ce8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x364ce8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_364cec:
    // 0x364cec: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x364cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x364cf0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x364cf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x364cf4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x364cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364cf8: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x364cf8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x364cfc: 0xc0b1548  jal         func_2C5520
    ctx->pc = 0x364CFCu;
    SET_GPR_U32(ctx, 31, 0x364D04u);
    ctx->pc = 0x364D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364CFCu;
    // 0x364d00: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5520u, 0x364CFCu, 0x364D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364D04u;
label_364d04:
    // 0x364d04: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x364d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x364d08: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x364d08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x364d0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x364d0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x364d10: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x364D10u;
    {
        const bool branch_taken_0x364d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x364D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364D10u;
        // 0x364d14: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x364d10) {
            ctx->pc = 0x364D60u;
            goto label_364d60;
        }
    }
    ctx->pc = 0x364D18u;
label_364d18:
    // 0x364d18: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x364d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x364d1c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x364d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x364d20: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x364d20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x364d24: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x364d24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x364d28: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x364D28u;
    SET_GPR_U32(ctx, 31, 0x364D30u);
    ctx->pc = 0x364D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364D28u;
    // 0x364d2c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x364D28u, 0x364D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364D30u;
label_364d30:
    // 0x364d30: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x364d30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x364d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x364d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364d38: 0xc0b1548  jal         func_2C5520
    ctx->pc = 0x364D38u;
    SET_GPR_U32(ctx, 31, 0x364D40u);
    ctx->pc = 0x364D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364D38u;
    // 0x364d3c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5520u, 0x364D38u, 0x364D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364D40u;
label_364d40:
    // 0x364d40: 0x4600a307  neg.s       $f12, $f20
    ctx->pc = 0x364d40u;
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
    // 0x364d44: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x364D44u;
    SET_GPR_U32(ctx, 31, 0x364D4Cu);
    ctx->pc = 0x364D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364D44u;
    // 0x364d48: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x364D44u, 0x364D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364D4Cu;
label_364d4c:
    // 0x364d4c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x364d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x364d50: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x364d50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x364d54: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x364d54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x364d58: 0x0  nop
    ctx->pc = 0x364d58u;
    // NOP
    // 0x364d5c: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x364d5cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_364d60:
    // 0x364d60: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x364D60u;
    SET_GPR_U32(ctx, 31, 0x364D68u);
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x364D60u, 0x364D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364D68u;
label_364d68:
    // 0x364d68: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x364d68u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x364d6c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x364d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_364d70:
    // 0x364d70: 0xe7b40074  swc1        $f20, 0x74($sp)
    ctx->pc = 0x364d70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x364d74: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x364d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x364d78: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x364d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x364d7c: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x364d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x364d80: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x364d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x364d84: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x364d84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x364d88: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x364d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x364d8c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x364d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x364d90: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x364d90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x364d94: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x364d94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x364d98: 0xda230010  lqc2        $vf3, 0x10($s1)
    ctx->pc = 0x364d98u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x364d9c: 0xda240020  lqc2        $vf4, 0x20($s1)
    ctx->pc = 0x364d9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x364da0: 0xda250030  lqc2        $vf5, 0x30($s1)
    ctx->pc = 0x364da0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x364da4: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x364da4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x364da8: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x364da8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x364dac: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x364dacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x364db0: 0xfba50060  sqc2        $vf5, 0x60($sp)
    ctx->pc = 0x364db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x364db4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x364db4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364db8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x364db8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x364dbc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x364dbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x364dc0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x364dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x364dc4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x364dc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364dc8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x364dc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x364dcc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x364dccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x364dd0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x364dd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x364dd4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x364dd4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x364dd8: 0x4a0003bf  vwaitq
    ctx->pc = 0x364dd8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x364ddc: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x364ddcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x364de0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x364de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_364de4:
    // 0x364de4: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x364de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x364de8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x364de8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364dec: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x364decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x364df0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x364df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364df4: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x364df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x364df8: 0xe6630000  swc1        $f3, 0x0($s3)
    ctx->pc = 0x364df8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x364dfc: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x364dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x364e00: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x364e00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x364e04: 0xe662000c  swc1        $f2, 0xC($s3)
    ctx->pc = 0x364e04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x364e08: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x364e08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x364e0c: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x364e0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x364e10: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x364e10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x364e14: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x364e14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x364e18: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x364e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x364e1c: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x364e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x364e20: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x364e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x364e24: 0x3e00008  jr          $ra
    ctx->pc = 0x364E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364E24u;
        // 0x364e28: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364E2Cu;
    // 0x364e2c: 0x0  nop
    ctx->pc = 0x364e2cu;
    // NOP
    ctx->pc = 0x364e30u;
}
