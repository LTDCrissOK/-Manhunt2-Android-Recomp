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

// Function: sub_001100D8
// Address: 0x1100d8 - 0x110210
void sub_001100D8_0x1100d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001100D8_0x1100d8");
#endif

    switch (ctx->pc) {
        case 0x11011cu: goto label_11011c;
        case 0x110138u: goto label_110138;
        case 0x110154u: goto label_110154;
        case 0x110184u: goto label_110184;
        case 0x1101a4u: goto label_1101a4;
        case 0x1101b4u: goto label_1101b4;
        case 0x1101c0u: goto label_1101c0;
        case 0x1101ccu: goto label_1101cc;
        case 0x1101e0u: goto label_1101e0;
        default: break;
    }

    ctx->pc = 0x1100d8u;

    // 0x1100d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1100d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1100dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1100dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1100e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1100e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1100e4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1100e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1100e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1100e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1100ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1100ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1100f0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1100f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1100f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1100f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1100f8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1100f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1100fc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1100fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x110100: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x110100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x110104: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x110104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x110108: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x110108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x11010c: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x11010Cu;
    {
        const bool branch_taken_0x11010c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11010Cu;
        // 0x110110: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11010c) {
            ctx->pc = 0x1101E0u;
            goto label_1101e0;
        }
    }
    ctx->pc = 0x110114u;
    // 0x110114: 0xc0443da  jal         func_110F68
    ctx->pc = 0x110114u;
    SET_GPR_U32(ctx, 31, 0x11011Cu);
    ctx->pc = 0x110F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F68u, 0x110114u, 0x11011Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11011Cu;
label_11011c:
    // 0x11011c: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x11011Cu;
    {
        const bool branch_taken_0x11011c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11011c) {
            ctx->pc = 0x110120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11011Cu;
            // 0x110120: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1101E4u;
            goto label_1101e4;
        }
    }
    ctx->pc = 0x110124u;
    // 0x110124: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x110124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x110128: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x110128u;
    {
        const bool branch_taken_0x110128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110128u;
        // 0x11012c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110128) {
            ctx->pc = 0x1101E0u;
            goto label_1101e0;
        }
    }
    ctx->pc = 0x110130u;
    // 0x110130: 0xc044eb4  jal         func_113AD0
    ctx->pc = 0x110130u;
    SET_GPR_U32(ctx, 31, 0x110138u);
    ctx->pc = 0x110134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110130u;
    // 0x110134: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113AD0u, 0x110130u, 0x110138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110138u;
label_110138:
    // 0x110138: 0x2635001f  addiu       $s5, $s1, 0x1F
    ctx->pc = 0x110138u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 31));
    // 0x11013c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11013cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110140: 0x6210007  bgez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x110140u;
    {
        const bool branch_taken_0x110140 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x110144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110140u;
        // 0x110144: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110140) {
            ctx->pc = 0x110160u;
            goto label_110160;
        }
    }
    ctx->pc = 0x110148u;
    // 0x110148: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x110148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11014c: 0xc044ed2  jal         func_113B48
    ctx->pc = 0x11014Cu;
    SET_GPR_U32(ctx, 31, 0x110154u);
    ctx->pc = 0x110150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11014Cu;
    // 0x110150: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B48u, 0x11014Cu, 0x110154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110154u;
label_110154:
    // 0x110154: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x110154u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110158: 0x6200021  bltz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x110158u;
    {
        const bool branch_taken_0x110158 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x11015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110158u;
        // 0x11015c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110158) {
            ctx->pc = 0x1101E0u;
            goto label_1101e0;
        }
    }
    ctx->pc = 0x110160u;
label_110160:
    // 0x110160: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x110160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x110164: 0x0  nop
    ctx->pc = 0x110164u;
    // NOP
    // 0x110168: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x110168u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11016c: 0x0  nop
    ctx->pc = 0x11016cu;
    // NOP
    // 0x110170: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x110170u;
    {
        const bool branch_taken_0x110170 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x110174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110170u;
        // 0x110174: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110170) {
            ctx->pc = 0x11017Cu;
            goto label_11017c;
        }
    }
    ctx->pc = 0x110178u;
    // 0x110178: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x110178u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11017c:
    // 0x11017c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x11017Cu;
    SET_GPR_U32(ctx, 31, 0x110184u);
    ctx->pc = 0x110180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11017Cu;
    // 0x110180: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x11017Cu, 0x110184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110184u;
label_110184:
    // 0x110184: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x110184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110188: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x110188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11018c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x11018cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x110190: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x110190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x110194: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x110194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x110198: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x110198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
    // 0x11019c: 0xc0449d6  jal         func_112758
    ctx->pc = 0x11019Cu;
    SET_GPR_U32(ctx, 31, 0x1101A4u);
    ctx->pc = 0x1101A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11019Cu;
    // 0x1101a0: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x112758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112758u, 0x11019Cu, 0x1101A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1101A4u;
label_1101a4:
    // 0x1101a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1101a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1101a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1101a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1101ac: 0xc04634e  jal         func_118D38
    ctx->pc = 0x1101ACu;
    SET_GPR_U32(ctx, 31, 0x1101B4u);
    ctx->pc = 0x1101B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1101ACu;
    // 0x1101b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D38u, 0x1101ACu, 0x1101B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1101B4u;
label_1101b4:
    // 0x1101b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1101b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1101b8: 0xc046154  jal         func_118550
    ctx->pc = 0x1101B8u;
    SET_GPR_U32(ctx, 31, 0x1101C0u);
    ctx->pc = 0x1101BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1101B8u;
    // 0x1101bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118550u, 0x1101B8u, 0x1101C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1101C0u;
label_1101c0:
    // 0x1101c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1101c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1101c4: 0xc046138  jal         func_1184E0
    ctx->pc = 0x1101C4u;
    SET_GPR_U32(ctx, 31, 0x1101CCu);
    ctx->pc = 0x1101C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1101C4u;
    // 0x1101c8: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1184E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1184E0u, 0x1101C4u, 0x1101CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1101CCu;
label_1101cc:
    // 0x1101cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1101ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1101d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1101d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1101d4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1101d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1101d8: 0xc044e90  jal         func_113A40
    ctx->pc = 0x1101D8u;
    SET_GPR_U32(ctx, 31, 0x1101E0u);
    ctx->pc = 0x1101DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1101D8u;
    // 0x1101dc: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113A40u, 0x1101D8u, 0x1101E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1101E0u;
label_1101e0:
    // 0x1101e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1101e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1101e4:
    // 0x1101e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1101e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1101e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1101e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1101ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1101ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1101f0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1101f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1101f4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1101f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1101f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1101f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1101fc: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1101fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x110200: 0x3e00008  jr          $ra
    ctx->pc = 0x110200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110200u;
        // 0x110204: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110208u;
    // 0x110208: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x110208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11020c: 0x0  nop
    ctx->pc = 0x11020cu;
    // NOP
    ctx->pc = 0x110210u;
}
