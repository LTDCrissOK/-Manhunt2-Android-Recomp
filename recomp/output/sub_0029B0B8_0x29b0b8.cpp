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

// Function: sub_0029B0B8
// Address: 0x29b0b8 - 0x29b468
void sub_0029B0B8_0x29b0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B0B8_0x29b0b8");
#endif

    switch (ctx->pc) {
        case 0x29b168u: goto label_29b168;
        case 0x29b178u: goto label_29b178;
        case 0x29b190u: goto label_29b190;
        case 0x29b1acu: goto label_29b1ac;
        case 0x29b1d0u: goto label_29b1d0;
        case 0x29b1d8u: goto label_29b1d8;
        case 0x29b1e4u: goto label_29b1e4;
        case 0x29b1f4u: goto label_29b1f4;
        case 0x29b224u: goto label_29b224;
        case 0x29b244u: goto label_29b244;
        case 0x29b24cu: goto label_29b24c;
        case 0x29b25cu: goto label_29b25c;
        case 0x29b268u: goto label_29b268;
        case 0x29b274u: goto label_29b274;
        case 0x29b28cu: goto label_29b28c;
        case 0x29b2a8u: goto label_29b2a8;
        case 0x29b2c0u: goto label_29b2c0;
        case 0x29b2d4u: goto label_29b2d4;
        case 0x29b2f0u: goto label_29b2f0;
        case 0x29b310u: goto label_29b310;
        case 0x29b330u: goto label_29b330;
        case 0x29b350u: goto label_29b350;
        case 0x29b364u: goto label_29b364;
        case 0x29b384u: goto label_29b384;
        case 0x29b394u: goto label_29b394;
        case 0x29b39cu: goto label_29b39c;
        case 0x29b3a4u: goto label_29b3a4;
        case 0x29b3b8u: goto label_29b3b8;
        case 0x29b3c0u: goto label_29b3c0;
        case 0x29b3c8u: goto label_29b3c8;
        case 0x29b3d4u: goto label_29b3d4;
        case 0x29b3dcu: goto label_29b3dc;
        case 0x29b3f0u: goto label_29b3f0;
        case 0x29b400u: goto label_29b400;
        default: break;
    }

    ctx->pc = 0x29b0b8u;

    // 0x29b0b8: 0x27bdfcb0  addiu       $sp, $sp, -0x350
    ctx->pc = 0x29b0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966448));
    // 0x29b0bc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x29b0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x29b0c0: 0xffb202c0  sd          $s2, 0x2C0($sp)
    ctx->pc = 0x29b0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 18));
    // 0x29b0c4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x29b0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x29b0c8: 0xffb702e8  sd          $s7, 0x2E8($sp)
    ctx->pc = 0x29b0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 744), GPR_U64(ctx, 23));
    // 0x29b0cc: 0x2463aff0  addiu       $v1, $v1, -0x5010
    ctx->pc = 0x29b0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946800));
    // 0x29b0d0: 0xffbe02f0  sd          $fp, 0x2F0($sp)
    ctx->pc = 0x29b0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 752), GPR_U64(ctx, 30));
    // 0x29b0d4: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x29b0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x29b0d8: 0xffb002b0  sd          $s0, 0x2B0($sp)
    ctx->pc = 0x29b0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 16));
    // 0x29b0dc: 0x3c09004c  lui         $t1, 0x4C
    ctx->pc = 0x29b0dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)76 << 16));
    // 0x29b0e0: 0xffb102b8  sd          $s1, 0x2B8($sp)
    ctx->pc = 0x29b0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 696), GPR_U64(ctx, 17));
    // 0x29b0e4: 0x3c080067  lui         $t0, 0x67
    ctx->pc = 0x29b0e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)103 << 16));
    // 0x29b0e8: 0xffb302c8  sd          $s3, 0x2C8($sp)
    ctx->pc = 0x29b0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 712), GPR_U64(ctx, 19));
    // 0x29b0ec: 0x25089920  addiu       $t0, $t0, -0x66E0
    ctx->pc = 0x29b0ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294940960));
    // 0x29b0f0: 0xffb402d0  sd          $s4, 0x2D0($sp)
    ctx->pc = 0x29b0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 20));
    // 0x29b0f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29b0f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b0f8: 0xffb502d8  sd          $s5, 0x2D8($sp)
    ctx->pc = 0x29b0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 728), GPR_U64(ctx, 21));
    // 0x29b0fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29b0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b100: 0xffb602e0  sd          $s6, 0x2E0($sp)
    ctx->pc = 0x29b100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 22));
    // 0x29b104: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x29b104u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b108: 0xffbf02f8  sd          $ra, 0x2F8($sp)
    ctx->pc = 0x29b108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 760), GPR_U64(ctx, 31));
    // 0x29b10c: 0xe7bc0340  swc1        $f28, 0x340($sp)
    ctx->pc = 0x29b10cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 832), bits); }
    // 0x29b110: 0xe7bb0338  swc1        $f27, 0x338($sp)
    ctx->pc = 0x29b110u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 824), bits); }
    // 0x29b114: 0xe7ba0330  swc1        $f26, 0x330($sp)
    ctx->pc = 0x29b114u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 816), bits); }
    // 0x29b118: 0xe7b90328  swc1        $f25, 0x328($sp)
    ctx->pc = 0x29b118u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 808), bits); }
    // 0x29b11c: 0xe7b80320  swc1        $f24, 0x320($sp)
    ctx->pc = 0x29b11cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 800), bits); }
    // 0x29b120: 0xe7b70318  swc1        $f23, 0x318($sp)
    ctx->pc = 0x29b120u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 792), bits); }
    // 0x29b124: 0xe7b60310  swc1        $f22, 0x310($sp)
    ctx->pc = 0x29b124u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 784), bits); }
    // 0x29b128: 0xe7b50308  swc1        $f21, 0x308($sp)
    ctx->pc = 0x29b128u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 776), bits); }
    // 0x29b12c: 0xe7b40300  swc1        $f20, 0x300($sp)
    ctx->pc = 0x29b12cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 768), bits); }
    // 0x29b130: 0x8c459160  lw          $a1, -0x6EA0($v0)
    ctx->pc = 0x29b130u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3F9160u));
    // 0x29b134: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x29b134u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BB050u));
    // 0x29b138: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x29b138u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x29b13c: 0x8d27ee20  lw          $a3, -0x11E0($t1)
    ctx->pc = 0x29b13cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294962720)));
    // 0x29b140: 0xafa202a8  sw          $v0, 0x2A8($sp)
    ctx->pc = 0x29b140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 2));
    // 0x29b144: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x29b144u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x29b148: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x29b148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x29b14c: 0x24c6beb0  addiu       $a2, $a2, -0x4150
    ctx->pc = 0x29b14cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950576));
    // 0x29b150: 0x8c49efd0  lw          $t1, -0x1030($v0)
    ctx->pc = 0x29b150u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x4BEFD0u));
    // 0x29b154: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x29b154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x29b158: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29b158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29b15c: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x29b15cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
    // 0x29b160: 0xc0efed0  jal         func_3BFB40
    ctx->pc = 0x29B160u;
    SET_GPR_U32(ctx, 31, 0x29B168u);
    ctx->pc = 0x29B164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B160u;
    // 0x29b164: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFB40u, 0x29B160u, 0x29B168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B168u;
label_29b168:
    // 0x29b168: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29b168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b16c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29b16cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b170: 0xc0a0352  jal         func_280D48
    ctx->pc = 0x29B170u;
    SET_GPR_U32(ctx, 31, 0x29B178u);
    ctx->pc = 0x29B174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B170u;
    // 0x29b174: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D48u, 0x29B170u, 0x29B178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B178u;
label_29b178:
    // 0x29b178: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x29b178u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b17c: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B17Cu;
    {
        const bool branch_taken_0x29b17c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B17Cu;
        // 0x29b180: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b17c) {
            ctx->pc = 0x29B194u;
            goto label_29b194;
        }
    }
    ctx->pc = 0x29B184u;
    // 0x29b184: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x29b184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b188: 0xc0c7a76  jal         func_31E9D8
    ctx->pc = 0x29B188u;
    SET_GPR_U32(ctx, 31, 0x29B190u);
    ctx->pc = 0x29B18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B188u;
    // 0x29b18c: 0x24a5beb8  addiu       $a1, $a1, -0x4148 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E9D8u, 0x29B188u, 0x29B190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B190u;
label_29b190:
    // 0x29b190: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x29b190u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29b194:
    // 0x29b194: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x29b194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x29b198: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x29b198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x29b19c: 0x8c56a300  lw          $s6, -0x5D00($v0)
    ctx->pc = 0x29b19cu;
    SET_GPR_S32(ctx, 22, (int32_t)FAST_READ32(0x3FA300u));
    // 0x29b1a0: 0x4480e000  mtc1        $zero, $f28
    ctx->pc = 0x29b1a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x29b1a4: 0xc0dc4fa  jal         func_3713E8
    ctx->pc = 0x29B1A4u;
    SET_GPR_U32(ctx, 31, 0x29B1ACu);
    ctx->pc = 0x29B1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B1A4u;
    // 0x29b1a8: 0x2484f910  addiu       $a0, $a0, -0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3713E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3713E8u, 0x29B1A4u, 0x29B1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B1ACu;
label_29b1ac:
    // 0x29b1ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29b1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29b1b0: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x29b1b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x29b1b4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x29b1b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b1b8: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x29b1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
    // 0x29b1bc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x29b1bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x29b1c0: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x29b1c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x29b1c4: 0x3c013f3c  lui         $at, 0x3F3C
    ctx->pc = 0x29b1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16188 << 16));
    // 0x29b1c8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x29b1c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x29b1cc: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x29b1ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
label_29b1d0:
    // 0x29b1d0: 0xc0db256  jal         func_36C958
    ctx->pc = 0x29B1D0u;
    SET_GPR_U32(ctx, 31, 0x29B1D8u);
    ctx->pc = 0x29B1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B1D0u;
    // 0x29b1d4: 0x2ea40001  sltiu       $a0, $s5, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C958u, 0x29B1D0u, 0x29B1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B1D8u;
label_29b1d8:
    // 0x29b1d8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29b1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b1dc: 0xc0c2a36  jal         func_30A8D8
    ctx->pc = 0x29B1DCu;
    SET_GPR_U32(ctx, 31, 0x29B1E4u);
    ctx->pc = 0x29B1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B1DCu;
    // 0x29b1e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A8D8u, 0x29B1DCu, 0x29B1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B1E4u;
label_29b1e4:
    // 0x29b1e4: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x29B1E4u;
    {
        const bool branch_taken_0x29b1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B1E4u;
        // 0x29b1e8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b1e4) {
            ctx->pc = 0x29B3CCu;
            goto label_29b3cc;
        }
    }
    ctx->pc = 0x29B1ECu;
    // 0x29b1ec: 0xc0db0ea  jal         func_36C3A8
    ctx->pc = 0x29B1ECu;
    SET_GPR_U32(ctx, 31, 0x29B1F4u);
    ctx->pc = 0x29B1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B1ECu;
    // 0x29b1f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x29B1ECu, 0x29B1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B1F4u;
label_29b1f4:
    // 0x29b1f4: 0x13c0000b  beqz        $fp, . + 4 + (0xB << 2)
    ctx->pc = 0x29B1F4u;
    {
        const bool branch_taken_0x29b1f4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B1F4u;
        // 0x29b1f8: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[28]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b1f4) {
            ctx->pc = 0x29B224u;
            goto label_29b224;
        }
    }
    ctx->pc = 0x29B1FCu;
    // 0x29b1fc: 0x4600e346  mov.s       $f13, $f28
    ctx->pc = 0x29b1fcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
    // 0x29b200: 0x4600d386  mov.s       $f14, $f26
    ctx->pc = 0x29b200u;
    ctx->f[14] = FPU_MOV_S(ctx->f[26]);
    // 0x29b204: 0x4600d3c6  mov.s       $f15, $f26
    ctx->pc = 0x29b204u;
    ctx->f[15] = FPU_MOV_S(ctx->f[26]);
    // 0x29b208: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x29b208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29b20c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x29b20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29b210: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x29b210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29b214: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x29b214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29b218: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x29b218u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b21c: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x29B21Cu;
    SET_GPR_U32(ctx, 31, 0x29B224u);
    ctx->pc = 0x29B220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B21Cu;
    // 0x29b220: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x29B21Cu, 0x29B224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B224u;
label_29b224:
    // 0x29b224: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x29b224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x29b228: 0x27a502a0  addiu       $a1, $sp, 0x2A0
    ctx->pc = 0x29b228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x29b22c: 0x8c649160  lw          $a0, -0x6EA0($v1)
    ctx->pc = 0x29b22cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3F9160u));
    // 0x29b230: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x29b230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x29b234: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x29b234u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x29b238: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x29b238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x29b23c: 0xc0a1a36  jal         func_2868D8
    ctx->pc = 0x29B23Cu;
    SET_GPR_U32(ctx, 31, 0x29B244u);
    ctx->pc = 0x29B240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B23Cu;
    // 0x29b240: 0x27a602a4  addiu       $a2, $sp, 0x2A4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 676));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2868D8u, 0x29B23Cu, 0x29B244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B244u;
label_29b244:
    // 0x29b244: 0xc0aec0c  jal         func_2BB030
    ctx->pc = 0x29B244u;
    SET_GPR_U32(ctx, 31, 0x29B24Cu);
    ctx->pc = 0x29B248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B244u;
    // 0x29b248: 0x8fa402a0  lw          $a0, 0x2A0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB030u, 0x29B244u, 0x29B24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B24Cu;
label_29b24c:
    // 0x29b24c: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x29b24cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29b250: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x29b250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x29b254: 0xc0aec00  jal         func_2BB000
    ctx->pc = 0x29B254u;
    SET_GPR_U32(ctx, 31, 0x29B25Cu);
    ctx->pc = 0x29B258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B254u;
    // 0x29b258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB000u, 0x29B254u, 0x29B25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B25Cu;
label_29b25c:
    // 0x29b25c: 0x27b30280  addiu       $s3, $sp, 0x280
    ctx->pc = 0x29b25cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x29b260: 0xc0aebf6  jal         func_2BAFD8
    ctx->pc = 0x29B260u;
    SET_GPR_U32(ctx, 31, 0x29B268u);
    ctx->pc = 0x29B264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B260u;
    // 0x29b264: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAFD8u, 0x29B260u, 0x29B268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B268u;
label_29b268:
    // 0x29b268: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29b268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b26c: 0xc0aea66  jal         func_2BA998
    ctx->pc = 0x29B26Cu;
    SET_GPR_U32(ctx, 31, 0x29B274u);
    ctx->pc = 0x29B270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B26Cu;
    // 0x29b270: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA998u, 0x29B26Cu, 0x29B274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B274u;
label_29b274:
    // 0x29b274: 0x8fa302a4  lw          $v1, 0x2A4($sp)
    ctx->pc = 0x29b274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
    // 0x29b278: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x29b278u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x29b27c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x29b27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29b280: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x29b280u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29b284: 0xc0a0c30  jal         func_2830C0
    ctx->pc = 0x29B284u;
    SET_GPR_U32(ctx, 31, 0x29B28Cu);
    ctx->pc = 0x29B288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B284u;
    // 0x29b288: 0x2a02b  sltu        $s4, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2830C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2830C0u, 0x29B284u, 0x29B28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B28Cu;
label_29b28c:
    // 0x29b28c: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x29b28cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x29b290: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x29b290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x29b294: 0x2465bec0  addiu       $a1, $v1, -0x4140
    ctx->pc = 0x29b294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950592));
    // 0x29b298: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29b298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b29c: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x29b29cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x29b2a0: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x29B2A0u;
    SET_GPR_U32(ctx, 31, 0x29B2A8u);
    ctx->pc = 0x29B2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B2A0u;
    // 0x29b2a4: 0x24444ec0  addiu       $a0, $v0, 0x4EC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x29B2A0u, 0x29B2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B2A8u;
label_29b2a8:
    // 0x29b2a8: 0x4617dd41  sub.s       $f21, $f27, $f23
    ctx->pc = 0x29b2a8u;
    ctx->f[21] = FPU_SUB_S(ctx->f[27], ctx->f[23]);
    // 0x29b2ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29b2acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b2b0: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x29b2b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x29b2b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29b2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b2b8: 0xc09f60e  jal         func_27D838
    ctx->pc = 0x29B2B8u;
    SET_GPR_U32(ctx, 31, 0x29B2C0u);
    ctx->pc = 0x29B2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B2B8u;
    // 0x29b2bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D838u, 0x29B2B8u, 0x29B2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B2C0u;
label_29b2c0:
    // 0x29b2c0: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x29b2c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x29b2c4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x29b2c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x29b2c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29b2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b2cc: 0xc09f60e  jal         func_27D838
    ctx->pc = 0x29B2CCu;
    SET_GPR_U32(ctx, 31, 0x29B2D4u);
    ctx->pc = 0x29B2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B2CCu;
    // 0x29b2d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D838u, 0x29B2CCu, 0x29B2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B2D4u;
label_29b2d4:
    // 0x29b2d4: 0x4614cd01  sub.s       $f20, $f25, $f20
    ctx->pc = 0x29b2d4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[25], ctx->f[20]);
    // 0x29b2d8: 0x92440008  lbu         $a0, 0x8($s2)
    ctx->pc = 0x29b2d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x29b2dc: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x29b2dcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x29b2e0: 0x92450009  lbu         $a1, 0x9($s2)
    ctx->pc = 0x29b2e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x29b2e4: 0x9246000a  lbu         $a2, 0xA($s2)
    ctx->pc = 0x29b2e4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x29b2e8: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x29B2E8u;
    SET_GPR_U32(ctx, 31, 0x29B2F0u);
    ctx->pc = 0x29B2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B2E8u;
    // 0x29b2ec: 0x9247000b  lbu         $a3, 0xB($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x29B2E8u, 0x29B2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B2F0u;
label_29b2f0:
    // 0x29b2f0: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x29b2f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x29b2f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29b2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b2f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x29b2f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x29b2fc: 0x4600db46  mov.s       $f13, $f27
    ctx->pc = 0x29b2fcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
    // 0x29b300: 0x4600d386  mov.s       $f14, $f26
    ctx->pc = 0x29b300u;
    ctx->f[14] = FPU_MOV_S(ctx->f[26]);
    // 0x29b304: 0x4600d3c6  mov.s       $f15, $f26
    ctx->pc = 0x29b304u;
    ctx->f[15] = FPU_MOV_S(ctx->f[26]);
    // 0x29b308: 0xc09f662  jal         func_27D988
    ctx->pc = 0x29B308u;
    SET_GPR_U32(ctx, 31, 0x29B310u);
    ctx->pc = 0x29B30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B308u;
    // 0x29b30c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D988u, 0x29B308u, 0x29B310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B310u;
label_29b310:
    // 0x29b310: 0x56800001  bnel        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x29B310u;
    {
        const bool branch_taken_0x29b310 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b310) {
            ctx->pc = 0x29B314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29B310u;
            // 0x29b314: 0x4617ad41  sub.s       $f21, $f21, $f23 (Delay Slot)
            ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29B318u;
            goto label_29b318;
        }
    }
    ctx->pc = 0x29B318u;
label_29b318:
    // 0x29b318: 0x9244000c  lbu         $a0, 0xC($s2)
    ctx->pc = 0x29b318u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x29b31c: 0x4616cd01  sub.s       $f20, $f25, $f22
    ctx->pc = 0x29b31cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[25], ctx->f[22]);
    // 0x29b320: 0x9245000d  lbu         $a1, 0xD($s2)
    ctx->pc = 0x29b320u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 13)));
    // 0x29b324: 0x9246000e  lbu         $a2, 0xE($s2)
    ctx->pc = 0x29b324u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x29b328: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x29B328u;
    SET_GPR_U32(ctx, 31, 0x29B330u);
    ctx->pc = 0x29B32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B328u;
    // 0x29b32c: 0x9247000f  lbu         $a3, 0xF($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x29B328u, 0x29B330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B330u;
label_29b330:
    // 0x29b330: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x29b330u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x29b334: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29b334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b338: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x29b338u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x29b33c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x29b33cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x29b340: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x29b340u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x29b344: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x29b344u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
    // 0x29b348: 0xc09f662  jal         func_27D988
    ctx->pc = 0x29B348u;
    SET_GPR_U32(ctx, 31, 0x29B350u);
    ctx->pc = 0x29B34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B348u;
    // 0x29b34c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D988u, 0x29B348u, 0x29B350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B350u;
label_29b350:
    // 0x29b350: 0x1280000c  beqz        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x29B350u;
    {
        const bool branch_taken_0x29b350 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B350u;
        // 0x29b354: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b350) {
            ctx->pc = 0x29B384u;
            goto label_29b384;
        }
    }
    ctx->pc = 0x29B358u;
    // 0x29b358: 0x8fa402a4  lw          $a0, 0x2A4($sp)
    ctx->pc = 0x29b358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
    // 0x29b35c: 0xc09f60e  jal         func_27D838
    ctx->pc = 0x29B35Cu;
    SET_GPR_U32(ctx, 31, 0x29B364u);
    ctx->pc = 0x29B360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B35Cu;
    // 0x29b360: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D838u, 0x29B35Cu, 0x29B364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B364u;
label_29b364:
    // 0x29b364: 0x4600cb01  sub.s       $f12, $f25, $f0
    ctx->pc = 0x29b364u;
    ctx->f[12] = FPU_SUB_S(ctx->f[25], ctx->f[0]);
    // 0x29b368: 0x8fa402a4  lw          $a0, 0x2A4($sp)
    ctx->pc = 0x29b368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
    // 0x29b36c: 0x4617ab40  add.s       $f13, $f21, $f23
    ctx->pc = 0x29b36cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
    // 0x29b370: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x29b370u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x29b374: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x29b374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x29b378: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x29b378u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
    // 0x29b37c: 0xc09f662  jal         func_27D988
    ctx->pc = 0x29B37Cu;
    SET_GPR_U32(ctx, 31, 0x29B384u);
    ctx->pc = 0x29B380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B37Cu;
    // 0x29b380: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D988u, 0x29B37Cu, 0x29B384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B384u;
label_29b384:
    // 0x29b384: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29b384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b388: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29b388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b38c: 0xc0a6d1a  jal         func_29B468
    ctx->pc = 0x29B38Cu;
    SET_GPR_U32(ctx, 31, 0x29B394u);
    ctx->pc = 0x29B390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B38Cu;
    // 0x29b390: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B468u, 0x29B38Cu, 0x29B394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B394u;
label_29b394:
    // 0x29b394: 0xc0db0ea  jal         func_36C3A8
    ctx->pc = 0x29B394u;
    SET_GPR_U32(ctx, 31, 0x29B39Cu);
    ctx->pc = 0x29B398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B394u;
    // 0x29b398: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x29B394u, 0x29B39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B39Cu;
label_29b39c:
    // 0x29b39c: 0xc0c2bb8  jal         func_30AEE0
    ctx->pc = 0x29B39Cu;
    SET_GPR_U32(ctx, 31, 0x29B3A4u);
    ctx->pc = 0x29B3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B39Cu;
    // 0x29b3a0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AEE0u, 0x29B39Cu, 0x29B3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B3A4u;
label_29b3a4:
    // 0x29b3a4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x29b3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x29b3a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b3ac: 0x24423378  addiu       $v0, $v0, 0x3378
    ctx->pc = 0x29b3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13176));
    // 0x29b3b0: 0xc0f899c  jal         func_3E2670
    ctx->pc = 0x29B3B0u;
    SET_GPR_U32(ctx, 31, 0x29B3B8u);
    ctx->pc = 0x29B3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B3B0u;
    // 0x29b3b4: 0xafa20290  sw          $v0, 0x290($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2670u, 0x29B3B0u, 0x29B3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B3B8u;
label_29b3b8:
    // 0x29b3b8: 0xc0ae9f6  jal         func_2BA7D8
    ctx->pc = 0x29B3B8u;
    SET_GPR_U32(ctx, 31, 0x29B3C0u);
    ctx->pc = 0x29B3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B3B8u;
    // 0x29b3bc: 0x27a40288  addiu       $a0, $sp, 0x288 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA7D8u, 0x29B3B8u, 0x29B3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B3C0u;
label_29b3c0:
    // 0x29b3c0: 0xc0ae94a  jal         func_2BA528
    ctx->pc = 0x29B3C0u;
    SET_GPR_U32(ctx, 31, 0x29B3C8u);
    ctx->pc = 0x29B3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B3C0u;
    // 0x29b3c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA528u, 0x29B3C0u, 0x29B3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B3C8u;
label_29b3c8:
    // 0x29b3c8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29b3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29b3cc:
    // 0x29b3cc: 0xc0c29a4  jal         func_30A690
    ctx->pc = 0x29B3CCu;
    SET_GPR_U32(ctx, 31, 0x29B3D4u);
    ctx->pc = 0x29B3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B3CCu;
    // 0x29b3d0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A690u, 0x29B3CCu, 0x29B3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B3D4u;
label_29b3d4:
    // 0x29b3d4: 0xc0db2b6  jal         func_36CAD8
    ctx->pc = 0x29B3D4u;
    SET_GPR_U32(ctx, 31, 0x29B3DCu);
    ctx->pc = 0x29B3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B3D4u;
    // 0x29b3d8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CAD8u, 0x29B3D4u, 0x29B3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B3DCu;
label_29b3dc:
    // 0x29b3dc: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x29b3dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x29b3e0: 0x1440ff7b  bnez        $v0, . + 4 + (-0x85 << 2)
    ctx->pc = 0x29B3E0u;
    {
        const bool branch_taken_0x29b3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B3E0u;
        // 0x29b3e4: 0x3c03005c  lui         $v1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b3e0) {
            ctx->pc = 0x29B1D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29b1d0;
        }
    }
    ctx->pc = 0x29B3E8u;
    // 0x29b3e8: 0xc0dc4fa  jal         func_3713E8
    ctx->pc = 0x29B3E8u;
    SET_GPR_U32(ctx, 31, 0x29B3F0u);
    ctx->pc = 0x29B3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B3E8u;
    // 0x29b3ec: 0x2464f910  addiu       $a0, $v1, -0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3713E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3713E8u, 0x29B3E8u, 0x29B3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B3F0u;
label_29b3f0:
    // 0x29b3f0: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x29B3F0u;
    {
        const bool branch_taken_0x29b3f0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B3F0u;
        // 0x29b3f4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b3f0) {
            ctx->pc = 0x29B400u;
            goto label_29b400;
        }
    }
    ctx->pc = 0x29B3F8u;
    // 0x29b3f8: 0xc0c7a32  jal         func_31E8C8
    ctx->pc = 0x29B3F8u;
    SET_GPR_U32(ctx, 31, 0x29B400u);
    ctx->pc = 0x29B3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B3F8u;
    // 0x29b3fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8C8u, 0x29B3F8u, 0x29B400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B400u;
label_29b400:
    // 0x29b400: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x29b400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x29b404: 0xdfb002b0  ld          $s0, 0x2B0($sp)
    ctx->pc = 0x29b404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x29b408: 0x2462aff0  addiu       $v0, $v1, -0x5010
    ctx->pc = 0x29b408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946800));
    // 0x29b40c: 0xdfb102b8  ld          $s1, 0x2B8($sp)
    ctx->pc = 0x29b40cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x29b410: 0x8fa302a8  lw          $v1, 0x2A8($sp)
    ctx->pc = 0x29b410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x29b414: 0xdfb202c0  ld          $s2, 0x2C0($sp)
    ctx->pc = 0x29b414u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x29b418: 0xdfb302c8  ld          $s3, 0x2C8($sp)
    ctx->pc = 0x29b418u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 712)));
    // 0x29b41c: 0xdfb402d0  ld          $s4, 0x2D0($sp)
    ctx->pc = 0x29b41cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x29b420: 0xdfb502d8  ld          $s5, 0x2D8($sp)
    ctx->pc = 0x29b420u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 728)));
    // 0x29b424: 0xdfb602e0  ld          $s6, 0x2E0($sp)
    ctx->pc = 0x29b424u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x29b428: 0xdfb702e8  ld          $s7, 0x2E8($sp)
    ctx->pc = 0x29b428u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x29b42c: 0xdfbe02f0  ld          $fp, 0x2F0($sp)
    ctx->pc = 0x29b42cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x29b430: 0xdfbf02f8  ld          $ra, 0x2F8($sp)
    ctx->pc = 0x29b430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 760)));
    // 0x29b434: 0xc7bc0340  lwc1        $f28, 0x340($sp)
    ctx->pc = 0x29b434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x29b438: 0xc7bb0338  lwc1        $f27, 0x338($sp)
    ctx->pc = 0x29b438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x29b43c: 0xc7ba0330  lwc1        $f26, 0x330($sp)
    ctx->pc = 0x29b43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x29b440: 0xc7b90328  lwc1        $f25, 0x328($sp)
    ctx->pc = 0x29b440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x29b444: 0xc7b80320  lwc1        $f24, 0x320($sp)
    ctx->pc = 0x29b444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x29b448: 0xc7b70318  lwc1        $f23, 0x318($sp)
    ctx->pc = 0x29b448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x29b44c: 0xc7b60310  lwc1        $f22, 0x310($sp)
    ctx->pc = 0x29b44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29b450: 0xc7b50308  lwc1        $f21, 0x308($sp)
    ctx->pc = 0x29b450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29b454: 0xc7b40300  lwc1        $f20, 0x300($sp)
    ctx->pc = 0x29b454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29b458: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x29b458u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6BB050u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB050u, _value); } while (0);
    // 0x29b45c: 0x3e00008  jr          $ra
    ctx->pc = 0x29B45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B45Cu;
        // 0x29b460: 0x27bd0350  addiu       $sp, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B464u;
    // 0x29b464: 0x0  nop
    ctx->pc = 0x29b464u;
    // NOP
    ctx->pc = 0x29b468u;
}
