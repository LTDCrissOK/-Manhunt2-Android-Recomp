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

// Function: sub_00138370
// Address: 0x138370 - 0x1384f8
void sub_00138370_0x138370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138370_0x138370");
#endif

    switch (ctx->pc) {
        case 0x138400u: goto label_138400;
        case 0x138438u: goto label_138438;
        case 0x138444u: goto label_138444;
        case 0x13847cu: goto label_13847c;
        case 0x1384a4u: goto label_1384a4;
        case 0x1384c8u: goto label_1384c8;
        default: break;
    }

    ctx->pc = 0x138370u;

    // 0x138370: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x138370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x138374: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x138374u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138378: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x138378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x13837c: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x13837cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x138380: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x138380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x138384: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x138384u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138388: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x138388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x13838c: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x13838cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x138390: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x138390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x138394: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x138394u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x138398: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x138398u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x13839c: 0x8e830104  lw          $v1, 0x104($s4)
    ctx->pc = 0x13839cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
    // 0x1383a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1383a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1383a4: 0x24530070  addiu       $s3, $v0, 0x70
    ctx->pc = 0x1383a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1383a8: 0x12600048  beqz        $s3, . + 4 + (0x48 << 2)
    ctx->pc = 0x1383A8u;
    {
        const bool branch_taken_0x1383a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1383ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1383A8u;
        // 0x1383ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1383a8) {
            ctx->pc = 0x1384CCu;
            goto label_1384cc;
        }
    }
    ctx->pc = 0x1383B0u;
    // 0x1383b0: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1383b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1383b4: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x1383b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1383b8: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1383b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1383bc: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1383bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1383c0: 0x1032821  addu        $a1, $t0, $v1
    ctx->pc = 0x1383c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1383c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1383c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1383c8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1383c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1383cc: 0x8c510108  lw          $s1, 0x108($v0)
    ctx->pc = 0x1383ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x1383d0: 0xc4740414  lwc1        $f20, 0x414($v1)
    ctx->pc = 0x1383d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1383d4: 0xc4b50418  lwc1        $f21, 0x418($a1)
    ctx->pc = 0x1383d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1383d8: 0x1220003c  beqz        $s1, . + 4 + (0x3C << 2)
    ctx->pc = 0x1383D8u;
    {
        const bool branch_taken_0x1383d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1383DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1383D8u;
        // 0x1383dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1383d8) {
            ctx->pc = 0x1384CCu;
            goto label_1384cc;
        }
    }
    ctx->pc = 0x1383E0u;
    // 0x1383e0: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x1383e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x1383e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1383e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1383e8: 0x24720070  addiu       $s2, $v1, 0x70
    ctx->pc = 0x1383e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1383ec: 0x1240001f  beqz        $s2, . + 4 + (0x1F << 2)
    ctx->pc = 0x1383ECu;
    {
        const bool branch_taken_0x1383ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1383F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1383ECu;
        // 0x1383f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1383ec) {
            ctx->pc = 0x13846Cu;
            goto label_13846c;
        }
    }
    ctx->pc = 0x1383F4u;
    // 0x1383f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1383f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1383f8: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x1383F8u;
    SET_GPR_U32(ctx, 31, 0x138400u);
    ctx->pc = 0x1383FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1383F8u;
    // 0x1383fc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1383F8u, 0x138400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138400u;
label_138400:
    // 0x138400: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x138400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x138404: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x138404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x138408: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x138408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13840c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x13840cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x138410: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x138410u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x138414: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x138414u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x138418: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x138418u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13841c: 0x0  nop
    ctx->pc = 0x13841cu;
    // NOP
    // 0x138420: 0x4501002a  bc1t        . + 4 + (0x2A << 2)
    ctx->pc = 0x138420u;
    {
        const bool branch_taken_0x138420 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x138424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138420u;
        // 0x138424: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138420) {
            ctx->pc = 0x1384CCu;
            goto label_1384cc;
        }
    }
    ctx->pc = 0x138428u;
    // 0x138428: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x138428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13842c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13842cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138430: 0xc0729fa  jal         func_1CA7E8
    ctx->pc = 0x138430u;
    SET_GPR_U32(ctx, 31, 0x138438u);
    ctx->pc = 0x138434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138430u;
    // 0x138434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA7E8u, 0x138430u, 0x138438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138438u;
label_138438:
    // 0x138438: 0xafb1001c  sw          $s1, 0x1C($sp)
    ctx->pc = 0x138438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 17));
    // 0x13843c: 0xc072be8  jal         func_1CAFA0
    ctx->pc = 0x13843Cu;
    SET_GPR_U32(ctx, 31, 0x138444u);
    ctx->pc = 0x138440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13843Cu;
    // 0x138440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAFA0u, 0x13843Cu, 0x138444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138444u;
label_138444:
    // 0x138444: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x138444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138448: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x138448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x13844c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x13844cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x138450: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x138450u;
    {
        const bool branch_taken_0x138450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x138454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138450u;
        // 0x138454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138450) {
            ctx->pc = 0x1384CCu;
            goto label_1384cc;
        }
    }
    ctx->pc = 0x138458u;
    // 0x138458: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x138458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13845c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x13845cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138460: 0x0  nop
    ctx->pc = 0x138460u;
    // NOP
    // 0x138464: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x138464u;
    {
        const bool branch_taken_0x138464 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x138464) {
            ctx->pc = 0x138474u;
            goto label_138474;
        }
    }
    ctx->pc = 0x13846Cu;
label_13846c:
    // 0x13846c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x13846Cu;
    {
        const bool branch_taken_0x13846c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13846Cu;
        // 0x138470: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13846c) {
            ctx->pc = 0x1384CCu;
            goto label_1384cc;
        }
    }
    ctx->pc = 0x138474u;
label_138474:
    // 0x138474: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x138474u;
    SET_GPR_U32(ctx, 31, 0x13847Cu);
    ctx->pc = 0x138478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138474u;
    // 0x138478: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x138474u, 0x13847Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13847Cu;
label_13847c:
    // 0x13847c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x13847cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x138480: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x138480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x138484: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x138484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138488: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x138488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13848c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x13848cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x138490: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x138490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x138494: 0x0  nop
    ctx->pc = 0x138494u;
    // NOP
    // 0x138498: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x138498u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x13849c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x13849Cu;
    SET_GPR_U32(ctx, 31, 0x1384A4u);
    ctx->pc = 0x1384A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13849Cu;
    // 0x1384a0: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x13849Cu, 0x1384A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1384A4u;
label_1384a4:
    // 0x1384a4: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1384a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1384a8: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1384a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1384ac: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x1384acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1384b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1384b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1384b4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1384b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1384b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1384b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1384bc: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1384bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1384c0: 0xc041032  jal         func_1040C8
    ctx->pc = 0x1384C0u;
    SET_GPR_U32(ctx, 31, 0x1384C8u);
    ctx->pc = 0x1384C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1384C0u;
    // 0x1384c4: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1040C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1040C8u, 0x1384C0u, 0x1384C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1384C8u;
label_1384c8:
    // 0x1384c8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1384c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1384cc:
    // 0x1384cc: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1384ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1384d0: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x1384d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1384d4: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1384d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1384d8: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x1384d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1384dc: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x1384dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1384e0: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x1384e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1384e4: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x1384e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1384e8: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1384e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1384ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1384ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1384F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1384ECu;
        // 0x1384f0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1384ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1384F4u;
    // 0x1384f4: 0x0  nop
    ctx->pc = 0x1384f4u;
    // NOP
    ctx->pc = 0x1384f8u;
}
