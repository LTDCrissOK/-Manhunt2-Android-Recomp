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

// Function: sub_00296360
// Address: 0x296360 - 0x296548
void sub_00296360_0x296360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296360_0x296360");
#endif

    switch (ctx->pc) {
        case 0x2963c4u: goto label_2963c4;
        case 0x2963d4u: goto label_2963d4;
        case 0x2963f4u: goto label_2963f4;
        case 0x296430u: goto label_296430;
        case 0x296448u: goto label_296448;
        case 0x296488u: goto label_296488;
        case 0x2964c4u: goto label_2964c4;
        default: break;
    }

    ctx->pc = 0x296360u;

    // 0x296360: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x296360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x296364: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x296364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x296368: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x296368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29636c: 0x24423300  addiu       $v0, $v0, 0x3300
    ctx->pc = 0x29636cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13056));
    // 0x296370: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x296370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296374: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x296374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x296378: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x296378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29637c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x29637cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x296380: 0x26120054  addiu       $s2, $s0, 0x54
    ctx->pc = 0x296380u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x296384: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x296384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x296388: 0x26130008  addiu       $s3, $s0, 0x8
    ctx->pc = 0x296388u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x29638c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x29638cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x296390: 0x26140018  addiu       $s4, $s0, 0x18
    ctx->pc = 0x296390u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x296394: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x296394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x296398: 0x26150020  addiu       $s5, $s0, 0x20
    ctx->pc = 0x296398u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x29639c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x29639cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2963a0: 0x26160028  addiu       $s6, $s0, 0x28
    ctx->pc = 0x2963a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x2963a4: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2963a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x2963a8: 0x26170040  addiu       $s7, $s0, 0x40
    ctx->pc = 0x2963a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2963ac: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2963acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2963b0: 0x261e004c  addiu       $fp, $s0, 0x4C
    ctx->pc = 0x2963b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x2963b4: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x2963b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2963b8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2963b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2963bc: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2963BCu;
    SET_GPR_U32(ctx, 31, 0x2963C4u);
    ctx->pc = 0x2963C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2963BCu;
    // 0x2963c0: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2963BCu, 0x2963C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2963C4u;
label_2963c4:
    // 0x2963c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2963c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2963c8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2963c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2963cc: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2963CCu;
    SET_GPR_U32(ctx, 31, 0x2963D4u);
    ctx->pc = 0x2963D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2963CCu;
    // 0x2963d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2963CCu, 0x2963D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2963D4u;
label_2963d4:
    // 0x2963d4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2963d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2963d8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2963d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2963dc: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x2963dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x2963e0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2963e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2963e4: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x2963e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x2963e8: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2963e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x2963ec: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2963ECu;
    SET_GPR_U32(ctx, 31, 0x2963F4u);
    ctx->pc = 0x2963F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2963ECu;
    // 0x2963f0: 0xaec00004  sw          $zero, 0x4($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2963ECu, 0x2963F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2963F4u;
label_2963f4:
    // 0x2963f4: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2963f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2963f8: 0x3c110047  lui         $s1, 0x47
    ctx->pc = 0x2963f8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)71 << 16));
    // 0x2963fc: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x2963fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
    // 0x296400: 0x240200eb  addiu       $v0, $zero, 0xEB
    ctx->pc = 0x296400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 235));
    // 0x296404: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x296404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x296408: 0x2631baf8  addiu       $s1, $s1, -0x4508
    ctx->pc = 0x296408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294949624));
    // 0x29640c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x29640cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x296410: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x296410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296414: 0xa200006d  sb          $zero, 0x6D($s0)
    ctx->pc = 0x296414u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 109), (uint8_t)GPR_U32(ctx, 0));
    // 0x296418: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x296418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29641c: 0xa2020014  sb          $v0, 0x14($s0)
    ctx->pc = 0x29641cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x296420: 0xa2020016  sb          $v0, 0x16($s0)
    ctx->pc = 0x296420u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 22), (uint8_t)GPR_U32(ctx, 2));
    // 0x296424: 0xa2020017  sb          $v0, 0x17($s0)
    ctx->pc = 0x296424u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 23), (uint8_t)GPR_U32(ctx, 2));
    // 0x296428: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x296428u;
    SET_GPR_U32(ctx, 31, 0x296430u);
    ctx->pc = 0x29642Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296428u;
    // 0x29642c: 0xa2020015  sb          $v0, 0x15($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x296428u, 0x296430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296430u;
label_296430:
    // 0x296430: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x296430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x296434: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x296434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x296438: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x296438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29643c: 0xe6140018  swc1        $f20, 0x18($s0)
    ctx->pc = 0x29643cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x296440: 0xc0a57aa  jal         func_295EA8
    ctx->pc = 0x296440u;
    SET_GPR_U32(ctx, 31, 0x296448u);
    ctx->pc = 0x296444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296440u;
    // 0x296444: 0xe6940004  swc1        $f20, 0x4($s4) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295EA8u, 0x296440u, 0x296448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296448u;
label_296448:
    // 0x296448: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x296448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29644c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29644cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x296450: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x296450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x296454: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x296454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x296458: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x296458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29645c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29645cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296460: 0xe6a10004  swc1        $f1, 0x4($s5)
    ctx->pc = 0x296460u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x296464: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x296464u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x296468: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x296468u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29646c: 0xe6140028  swc1        $f20, 0x28($s0)
    ctx->pc = 0x29646cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x296470: 0xe6d40004  swc1        $f20, 0x4($s6)
    ctx->pc = 0x296470u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x296474: 0xe6150030  swc1        $f21, 0x30($s0)
    ctx->pc = 0x296474u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x296478: 0xa2000034  sb          $zero, 0x34($s0)
    ctx->pc = 0x296478u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 0));
    // 0x29647c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x29647cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x296480: 0xc0a57c8  jal         func_295F20
    ctx->pc = 0x296480u;
    SET_GPR_U32(ctx, 31, 0x296488u);
    ctx->pc = 0x296484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296480u;
    // 0x296484: 0xe6020038  swc1        $f2, 0x38($s0) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F20u, 0x296480u, 0x296488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296488u;
label_296488:
    // 0x296488: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x296488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29648c: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x29648cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x296490: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x296490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x296494: 0xa204006c  sb          $a0, 0x6C($s0)
    ctx->pc = 0x296494u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 4));
    // 0x296498: 0xa2000060  sb          $zero, 0x60($s0)
    ctx->pc = 0x296498u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x29649c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x29649cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2964a0: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x2964a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x2964a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2964a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2964a8: 0xae060064  sw          $a2, 0x64($s0)
    ctx->pc = 0x2964a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 6));
    // 0x2964ac: 0xa2030068  sb          $v1, 0x68($s0)
    ctx->pc = 0x2964acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 3));
    // 0x2964b0: 0xa203006b  sb          $v1, 0x6B($s0)
    ctx->pc = 0x2964b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 107), (uint8_t)GPR_U32(ctx, 3));
    // 0x2964b4: 0xa203006a  sb          $v1, 0x6A($s0)
    ctx->pc = 0x2964b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 3));
    // 0x2964b8: 0xa2030069  sb          $v1, 0x69($s0)
    ctx->pc = 0x2964b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 3));
    // 0x2964bc: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x2964BCu;
    SET_GPR_U32(ctx, 31, 0x2964C4u);
    ctx->pc = 0x2964C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2964BCu;
    // 0x2964c0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x2964BCu, 0x2964C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2964C4u;
label_2964c4:
    // 0x2964c4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2964c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2964c8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2964c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2964cc: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x2964ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2964d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2964d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2964d4: 0xe614004c  swc1        $f20, 0x4C($s0)
    ctx->pc = 0x2964d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x2964d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2964d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2964dc: 0xe7d40004  swc1        $f20, 0x4($fp)
    ctx->pc = 0x2964dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
    // 0x2964e0: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x2964e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2964e4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2964e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2964e8: 0xe6150054  swc1        $f21, 0x54($s0)
    ctx->pc = 0x2964e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2964ec: 0xe6550004  swc1        $f21, 0x4($s2)
    ctx->pc = 0x2964ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2964f0: 0xa203005c  sb          $v1, 0x5C($s0)
    ctx->pc = 0x2964f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 3));
    // 0x2964f4: 0xa204006e  sb          $a0, 0x6E($s0)
    ctx->pc = 0x2964f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 110), (uint8_t)GPR_U32(ctx, 4));
    // 0x2964f8: 0xa203005f  sb          $v1, 0x5F($s0)
    ctx->pc = 0x2964f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2964fc: 0xa203005e  sb          $v1, 0x5E($s0)
    ctx->pc = 0x2964fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 94), (uint8_t)GPR_U32(ctx, 3));
    // 0x296500: 0xa203005d  sb          $v1, 0x5D($s0)
    ctx->pc = 0x296500u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 3));
    // 0x296504: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x296504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x296508: 0xa200006d  sb          $zero, 0x6D($s0)
    ctx->pc = 0x296508u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 109), (uint8_t)GPR_U32(ctx, 0));
    // 0x29650c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29650cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296510: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x296510u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296514: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x296514u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296518: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x296518u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29651c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x29651cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296520: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x296520u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x296524: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x296524u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x296528: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x296528u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x29652c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x29652cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x296530: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x296530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x296534: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x296534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x296538: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x296538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29653c: 0x3e00008  jr          $ra
    ctx->pc = 0x29653Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29653Cu;
        // 0x296540: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29653Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296544u;
    // 0x296544: 0x0  nop
    ctx->pc = 0x296544u;
    // NOP
    ctx->pc = 0x296548u;
}
