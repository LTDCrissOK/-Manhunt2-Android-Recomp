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

// Function: sub_001C7278
// Address: 0x1c7278 - 0x1c74e8
void sub_001C7278_0x1c7278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7278_0x1c7278");
#endif

    switch (ctx->pc) {
        case 0x1c72b4u: goto label_1c72b4;
        case 0x1c7318u: goto label_1c7318;
        case 0x1c7328u: goto label_1c7328;
        case 0x1c7350u: goto label_1c7350;
        case 0x1c7408u: goto label_1c7408;
        case 0x1c7430u: goto label_1c7430;
        case 0x1c7450u: goto label_1c7450;
        case 0x1c747cu: goto label_1c747c;
        case 0x1c74b0u: goto label_1c74b0;
        default: break;
    }

    ctx->pc = 0x1c7278u;

    // 0x1c7278: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1c7278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1c727c: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x1c727cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
    // 0x1c7280: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1c7280u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7284: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1c7284u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1c7288: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x1c7288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x1c728c: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x1c728cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x1c7290: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x1c7290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x1c7294: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x1c7294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x1c7298: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x1c7298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x1c729c: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x1c729cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x1c72a0: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x1c72a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x1c72a4: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1c72a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x1c72a8: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x1c72a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x1c72ac: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C72ACu;
    SET_GPR_U32(ctx, 31, 0x1C72B4u);
    ctx->pc = 0x1C72B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C72ACu;
    // 0x1c72b0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C72ACu, 0x1C72B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C72B4u;
label_1c72b4:
    // 0x1c72b4: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x1c72b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x1c72b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c72b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c72bc: 0x7ae20320  lq          $v0, 0x320($s7)
    ctx->pc = 0x1c72bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 800)));
    // 0x1c72c0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1c72c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c72c4: 0x3c014144  lui         $at, 0x4144
    ctx->pc = 0x1c72c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16708 << 16));
    // 0x1c72c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c72c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c72cc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c72ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c72d0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1c72d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1c72d4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1c72d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1c72d8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1c72d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c72dc: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1c72dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1c72e0: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x1c72e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1c72e4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1c72e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c72e8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1c72e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1c72ec: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1c72ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c72f0: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x1c72f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1c72f4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1c72f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c72f8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1c72f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1c72fc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1c72fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c7300: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1c7300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7304: 0x8ee20034  lw          $v0, 0x34($s7)
    ctx->pc = 0x1c7304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 52)));
    // 0x1c7308: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c7308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c730c: 0x8ee50318  lw          $a1, 0x318($s7)
    ctx->pc = 0x1c730cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 792)));
    // 0x1c7310: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x1C7310u;
    SET_GPR_U32(ctx, 31, 0x1C7318u);
    ctx->pc = 0x1C7314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7310u;
    // 0x1c7314: 0xaee20038  sw          $v0, 0x38($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x1C7310u, 0x1C7318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7318u;
label_1c7318:
    // 0x1c7318: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c7318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c731c: 0x24050210  addiu       $a1, $zero, 0x210
    ctx->pc = 0x1c731cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x1c7320: 0xc07a592  jal         func_1E9648
    ctx->pc = 0x1C7320u;
    SET_GPR_U32(ctx, 31, 0x1C7328u);
    ctx->pc = 0x1C7324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7320u;
    // 0x1c7324: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9648u, 0x1C7320u, 0x1C7328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7328u;
label_1c7328:
    // 0x1c7328: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x1C7328u;
    {
        const bool branch_taken_0x1c7328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7328u;
        // 0x1c732c: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7328) {
            ctx->pc = 0x1C74A4u;
            goto label_1c74a4;
        }
    }
    ctx->pc = 0x1C7330u;
    // 0x1c7330: 0x8c622b1c  lw          $v0, 0x2B1C($v1)
    ctx->pc = 0x1c7330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11036)));
    // 0x1c7334: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x1C7334u;
    {
        const bool branch_taken_0x1c7334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7334u;
        // 0x1c7338: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7334) {
            ctx->pc = 0x1C74A4u;
            goto label_1c74a4;
        }
    }
    ctx->pc = 0x1C733Cu;
    // 0x1c733c: 0x27a20068  addiu       $v0, $sp, 0x68
    ctx->pc = 0x1c733cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1c7340: 0x27be006c  addiu       $fp, $sp, 0x6C
    ctx->pc = 0x1c7340u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1c7344: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x1c7344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x1c7348: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1c7348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1c734c: 0x0  nop
    ctx->pc = 0x1c734cu;
    // NOP
label_1c7350:
    // 0x1c7350: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1c7350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1c7354: 0x8c822b20  lw          $v0, 0x2B20($a0)
    ctx->pc = 0x1c7354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11040)));
    // 0x1c7358: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c7358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c735c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1c735cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c7360: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x1c7360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1c7364: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x1c7364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x1c7368: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7368u;
    {
        const bool branch_taken_0x1c7368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7368) {
            ctx->pc = 0x1C736Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7368u;
            // 0x1c736c: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7378u;
            goto label_1c7378;
        }
    }
    ctx->pc = 0x1C7370u;
    // 0x1c7370: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1c7370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1c7374: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x1c7374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_1c7378:
    // 0x1c7378: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x1c7378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x1c737c: 0x8c8300c0  lw          $v1, 0xC0($a0)
    ctx->pc = 0x1c737cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x1c7380: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1c7380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c7384: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1C7384u;
    {
        const bool branch_taken_0x1c7384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7384u;
        // 0x1c7388: 0x26750001  addiu       $s5, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7384) {
            ctx->pc = 0x1C748Cu;
            goto label_1c748c;
        }
    }
    ctx->pc = 0x1C738Cu;
    // 0x1c738c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1c738cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1c7390: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x1C7390u;
    {
        const bool branch_taken_0x1c7390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7390) {
            ctx->pc = 0x1C7394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7390u;
            // 0x1c7394: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7490u;
            goto label_1c7490;
        }
    }
    ctx->pc = 0x1C7398u;
    // 0x1c7398: 0x26f10034  addiu       $s1, $s7, 0x34
    ctx->pc = 0x1c7398u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 52));
    // 0x1c739c: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1c739cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c73a0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1c73a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c73a4: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C73A4u;
    {
        const bool branch_taken_0x1c73a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C73A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C73A4u;
        // 0x1c73a8: 0x27b60064  addiu       $s6, $sp, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c73a4) {
            ctx->pc = 0x1C73C4u;
            goto label_1c73c4;
        }
    }
    ctx->pc = 0x1C73ACu;
    // 0x1c73ac: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C73ACu;
    {
        const bool branch_taken_0x1c73ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c73ac) {
            ctx->pc = 0x1C73B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C73ACu;
            // 0x1c73b0: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C73B4u;
            goto label_1c73b4;
        }
    }
    ctx->pc = 0x1C73B4u;
label_1c73b4:
    // 0x1c73b4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c73b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c73b8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1c73b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1c73bc: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1C73BCu;
    {
        const bool branch_taken_0x1c73bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C73C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C73BCu;
        // 0x1c73c0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c73bc) {
            ctx->pc = 0x1C748Cu;
            goto label_1c748c;
        }
    }
    ctx->pc = 0x1C73C4u;
label_1c73c4:
    // 0x1c73c4: 0x8ee30034  lw          $v1, 0x34($s7)
    ctx->pc = 0x1c73c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 52)));
    // 0x1c73c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c73c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c73cc: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x1c73ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x1c73d0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1c73d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c73d4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c73d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c73d8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c73d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c73dc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1c73dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1c73e0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1c73e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c73e4: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x1c73e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x1c73e8: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1c73e8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x1c73ec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c73ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c73f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c73f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c73f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C73F4u;
    {
        const bool branch_taken_0x1c73f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C73F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C73F4u;
        // 0x1c73f8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c73f4) {
            ctx->pc = 0x1C7410u;
            goto label_1c7410;
        }
    }
    ctx->pc = 0x1C73FCu;
    // 0x1c73fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c73fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7400: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1C7400u;
    SET_GPR_U32(ctx, 31, 0x1C7408u);
    ctx->pc = 0x1C7404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7400u;
    // 0x1c7404: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1C7400u, 0x1C7408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7408u;
label_1c7408:
    // 0x1c7408: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7408u;
    {
        const bool branch_taken_0x1c7408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7408u;
        // 0x1c740c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7408) {
            ctx->pc = 0x1C7418u;
            goto label_1c7418;
        }
    }
    ctx->pc = 0x1C7410u;
label_1c7410:
    // 0x1c7410: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c7410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7414: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c7414u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7418:
    // 0x1c7418: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1c7418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c741c: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C741Cu;
    {
        const bool branch_taken_0x1c741c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C7420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C741Cu;
        // 0x1c7420: 0x2058023  subu        $s0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c741c) {
            ctx->pc = 0x1C7438u;
            goto label_1c7438;
        }
    }
    ctx->pc = 0x1C7424u;
    // 0x1c7424: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c7424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7428: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x1C7428u;
    SET_GPR_U32(ctx, 31, 0x1C7430u);
    ctx->pc = 0x1C742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7428u;
    // 0x1c742c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x1C7428u, 0x1C7430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7430u;
label_1c7430:
    // 0x1c7430: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C7430u;
    {
        const bool branch_taken_0x1c7430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7430u;
        // 0x1c7434: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7430) {
            ctx->pc = 0x1C743Cu;
            goto label_1c743c;
        }
    }
    ctx->pc = 0x1C7438u;
label_1c7438:
    // 0x1c7438: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1c7438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c743c:
    // 0x1c743c: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c743cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c7440: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c7440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7444: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C7444u;
    {
        const bool branch_taken_0x1c7444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7444u;
        // 0x1c7448: 0x26750001  addiu       $s5, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7444) {
            ctx->pc = 0x1C7468u;
            goto label_1c7468;
        }
    }
    ctx->pc = 0x1C744Cu;
    // 0x1c744c: 0x0  nop
    ctx->pc = 0x1c744cu;
    // NOP
label_1c7450:
    // 0x1c7450: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1c7450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1c7454: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c7454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c7458: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c7458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1c745c: 0x0  nop
    ctx->pc = 0x1c745cu;
    // NOP
    // 0x1c7460: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C7460u;
    {
        const bool branch_taken_0x1c7460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7460u;
        // 0x1c7464: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7460) {
            ctx->pc = 0x1C7450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7450;
        }
    }
    ctx->pc = 0x1C7468u;
label_1c7468:
    // 0x1c7468: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1c7468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c746c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C746Cu;
    {
        const bool branch_taken_0x1c746c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C746Cu;
        // 0x1c7470: 0x2921021  addu        $v0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c746c) {
            ctx->pc = 0x1C7480u;
            goto label_1c7480;
        }
    }
    ctx->pc = 0x1C7474u;
    // 0x1c7474: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1C7474u;
    SET_GPR_U32(ctx, 31, 0x1C747Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1C7474u, 0x1C747Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C747Cu;
label_1c747c:
    // 0x1c747c: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x1c747cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_1c7480:
    // 0x1c7480: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1c7480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x1c7484: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1c7484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1c7488: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x1c7488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_1c748c:
    // 0x1c748c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1c748cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_1c7490:
    // 0x1c7490: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x1c7490u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7494: 0x8c622b1c  lw          $v0, 0x2B1C($v1)
    ctx->pc = 0x1c7494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11036)));
    // 0x1c7498: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1c7498u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c749c: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x1C749Cu;
    {
        const bool branch_taken_0x1c749c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C74A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C749Cu;
        // 0x1c74a0: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c749c) {
            ctx->pc = 0x1C7350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7350;
        }
    }
    ctx->pc = 0x1C74A4u;
label_1c74a4:
    // 0x1c74a4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c74a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c74a8: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x1C74A8u;
    SET_GPR_U32(ctx, 31, 0x1C74B0u);
    ctx->pc = 0x1C74ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C74A8u;
    // 0x1c74ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x1C74A8u, 0x1C74B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C74B0u;
label_1c74b0:
    // 0x1c74b0: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x1c74b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c74b4: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x1c74b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c74b8: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x1c74b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c74bc: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x1c74bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c74c0: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x1c74c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c74c4: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x1c74c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1c74c8: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x1c74c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c74cc: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x1c74ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1c74d0: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1c74d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c74d4: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x1c74d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1c74d8: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1c74d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c74dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C74DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C74E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C74DCu;
        // 0x1c74e0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C74DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C74E4u;
    // 0x1c74e4: 0x0  nop
    ctx->pc = 0x1c74e4u;
    // NOP
    ctx->pc = 0x1c74e8u;
}
