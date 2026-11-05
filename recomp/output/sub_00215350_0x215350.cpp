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

// Function: sub_00215350
// Address: 0x215350 - 0x2156b8
void sub_00215350_0x215350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215350_0x215350");
#endif

    switch (ctx->pc) {
        case 0x2153a4u: goto label_2153a4;
        case 0x2153bcu: goto label_2153bc;
        case 0x215400u: goto label_215400;
        case 0x215428u: goto label_215428;
        case 0x215470u: goto label_215470;
        case 0x21558cu: goto label_21558c;
        case 0x2155b4u: goto label_2155b4;
        case 0x2155d0u: goto label_2155d0;
        case 0x2155fcu: goto label_2155fc;
        default: break;
    }

    ctx->pc = 0x215350u;

    // 0x215350: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x215350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x215354: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x215354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x215358: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x215358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x21535c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21535cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215360: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x215360u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215364: 0xe7b900a8  swc1        $f25, 0xA8($sp)
    ctx->pc = 0x215364u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x215368: 0xe7b800a0  swc1        $f24, 0xA0($sp)
    ctx->pc = 0x215368u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x21536c: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x21536cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x215370: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x215370u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x215374: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x215374u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x215378: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x215378u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x21537c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x21537cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x215380: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x215380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x215384: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x215384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x215388: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x215388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x21538c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x21538cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x215390: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x215390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x215394: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x215394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x215398: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x215398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x21539c: 0xc0f61a6  jal         func_3D8698
    ctx->pc = 0x21539Cu;
    SET_GPR_U32(ctx, 31, 0x2153A4u);
    ctx->pc = 0x2153A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21539Cu;
    // 0x2153a0: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8698u, 0x21539Cu, 0x2153A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2153A4u;
label_2153a4:
    // 0x2153a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2153a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2153a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2153a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2153ac: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x2153acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2153b0: 0x37a70008  ori         $a3, $sp, 0x8
    ctx->pc = 0x2153b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x2153b4: 0xc0856f4  jal         func_215BD0
    ctx->pc = 0x2153B4u;
    SET_GPR_U32(ctx, 31, 0x2153BCu);
    ctx->pc = 0x2153B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2153B4u;
    // 0x2153b8: 0x37a8000c  ori         $t0, $sp, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215BD0u, 0x2153B4u, 0x2153BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2153BCu;
label_2153bc:
    // 0x2153bc: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2153bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2153c0: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x2153c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2153c4: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2153c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2153c8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2153c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2153cc: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x2153ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2153d0: 0x46001e40  add.s       $f25, $f3, $f0
    ctx->pc = 0x2153d0u;
    ctx->f[25] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2153d4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2153d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2153d8: 0x46000dc0  add.s       $f23, $f1, $f0
    ctx->pc = 0x2153d8u;
    ctx->f[23] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2153dc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2153dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2153e0: 0x46001600  add.s       $f24, $f2, $f0
    ctx->pc = 0x2153e0u;
    ctx->f[24] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2153e4: 0x46001581  sub.s       $f22, $f2, $f0
    ctx->pc = 0x2153e4u;
    ctx->f[22] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2153e8: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2153e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2153ec: 0x46000d41  sub.s       $f21, $f1, $f0
    ctx->pc = 0x2153ecu;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2153f0: 0x1440009a  bnez        $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x2153F0u;
    {
        const bool branch_taken_0x2153f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2153F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2153F0u;
        // 0x2153f4: 0x46001d01  sub.s       $f20, $f3, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2153f0) {
            ctx->pc = 0x21565Cu;
            goto label_21565c;
        }
    }
    ctx->pc = 0x2153F8u;
    // 0x2153f8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2153f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2153fc: 0x0  nop
    ctx->pc = 0x2153fcu;
    // NOP
label_215400:
    // 0x215400: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x215400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x215404: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x215404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x215408: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x215408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x21540c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x21540cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x215410: 0x1440008e  bnez        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x215410u;
    {
        const bool branch_taken_0x215410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215410u;
        // 0x215414: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215410) {
            ctx->pc = 0x21564Cu;
            goto label_21564c;
        }
    }
    ctx->pc = 0x215418u;
    // 0x215418: 0x24020280  addiu       $v0, $zero, 0x280
    ctx->pc = 0x215418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x21541c: 0xa23018  mult        $a2, $a1, $v0
    ctx->pc = 0x21541cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x215420: 0xafa6001c  sw          $a2, 0x1C($sp)
    ctx->pc = 0x215420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 6));
    // 0x215424: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x215424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
label_215428:
    // 0x215428: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x215428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x21542c: 0x2463e4c0  addiu       $v1, $v1, -0x1B40
    ctx->pc = 0x21542cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960320));
    // 0x215430: 0x8fa6001c  lw          $a2, 0x1C($sp)
    ctx->pc = 0x215430u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x215434: 0x600013  mtlo        $v1
    ctx->pc = 0x215434u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x215438: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x215438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21543c: 0x70821000  madd        $v0, $a0, $v0
    ctx->pc = 0x21543cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x215440: 0xc2a021  addu        $s4, $a2, $v0
    ctx->pc = 0x215440u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x215444: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x215444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x215448: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x215448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x21544c: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21544Cu;
    {
        const bool branch_taken_0x21544c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x215450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21544Cu;
        // 0x215450: 0xae830010  sw          $v1, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21544c) {
            ctx->pc = 0x215458u;
            goto label_215458;
        }
    }
    ctx->pc = 0x215454u;
    // 0x215454: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x215454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_215458:
    // 0x215458: 0x10a00076  beqz        $a1, . + 4 + (0x76 << 2)
    ctx->pc = 0x215458u;
    {
        const bool branch_taken_0x215458 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215458u;
        // 0x21545c: 0x249e0001  addiu       $fp, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215458) {
            ctx->pc = 0x215634u;
            goto label_215634;
        }
    }
    ctx->pc = 0x215460u;
    // 0x215460: 0x27b70014  addiu       $s7, $sp, 0x14
    ctx->pc = 0x215460u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x215464: 0x27b60018  addiu       $s6, $sp, 0x18
    ctx->pc = 0x215464u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x215468: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x215468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x21546c: 0x0  nop
    ctx->pc = 0x21546cu;
    // NOP
label_215470:
    // 0x215470: 0x8ca200b0  lw          $v0, 0xB0($a1)
    ctx->pc = 0x215470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 176)));
    // 0x215474: 0x8c8394c8  lw          $v1, -0x6B38($a0)
    ctx->pc = 0x215474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294939848)));
    // 0x215478: 0x50430065  beql        $v0, $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x215478u;
    {
        const bool branch_taken_0x215478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x215478) {
            ctx->pc = 0x21547Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215478u;
            // 0x21547c: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215610u;
            goto label_215610;
        }
    }
    ctx->pc = 0x215480u;
    // 0x215480: 0x8ca200c4  lw          $v0, 0xC4($a1)
    ctx->pc = 0x215480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x215484: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x215484u;
    {
        const bool branch_taken_0x215484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215484u;
        // 0x215488: 0xaca300b0  sw          $v1, 0xB0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215484) {
            ctx->pc = 0x21560Cu;
            goto label_21560c;
        }
    }
    ctx->pc = 0x21548Cu;
    // 0x21548c: 0x90420032  lbu         $v0, 0x32($v0)
    ctx->pc = 0x21548cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 50)));
    // 0x215490: 0x5440005f  bnel        $v0, $zero, . + 4 + (0x5F << 2)
    ctx->pc = 0x215490u;
    {
        const bool branch_taken_0x215490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215490) {
            ctx->pc = 0x215494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215490u;
            // 0x215494: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215610u;
            goto label_215610;
        }
    }
    ctx->pc = 0x215498u;
    // 0x215498: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x215498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21549c: 0xc4a20030  lwc1        $f2, 0x30($a1)
    ctx->pc = 0x21549cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2154a0: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x2154a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2154a4: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x2154a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2154a8: 0x0  nop
    ctx->pc = 0x2154a8u;
    // NOP
    // 0x2154ac: 0x45010057  bc1t        . + 4 + (0x57 << 2)
    ctx->pc = 0x2154ACu;
    {
        const bool branch_taken_0x2154ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2154B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154ACu;
        // 0x2154b0: 0x24a20020  addiu       $v0, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154ac) {
            ctx->pc = 0x21560Cu;
            goto label_21560c;
        }
    }
    ctx->pc = 0x2154B4u;
    // 0x2154b4: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x2154b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2154b8: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x2154b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2154bc: 0x0  nop
    ctx->pc = 0x2154bcu;
    // NOP
    // 0x2154c0: 0x45030053  bc1tl       . + 4 + (0x53 << 2)
    ctx->pc = 0x2154C0u;
    {
        const bool branch_taken_0x2154c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2154c0) {
            ctx->pc = 0x2154C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2154C0u;
            // 0x2154c4: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215610u;
            goto label_215610;
        }
    }
    ctx->pc = 0x2154C8u;
    // 0x2154c8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2154c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2154cc: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x2154ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2154d0: 0x4600c834  c.lt.s      $f25, $f0
    ctx->pc = 0x2154d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2154d4: 0x0  nop
    ctx->pc = 0x2154d4u;
    // NOP
    // 0x2154d8: 0x4503004d  bc1tl       . + 4 + (0x4D << 2)
    ctx->pc = 0x2154D8u;
    {
        const bool branch_taken_0x2154d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2154d8) {
            ctx->pc = 0x2154DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2154D8u;
            // 0x2154dc: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215610u;
            goto label_215610;
        }
    }
    ctx->pc = 0x2154E0u;
    // 0x2154e0: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x2154e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2154e4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2154e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2154e8: 0x0  nop
    ctx->pc = 0x2154e8u;
    // NOP
    // 0x2154ec: 0x45030048  bc1tl       . + 4 + (0x48 << 2)
    ctx->pc = 0x2154ECu;
    {
        const bool branch_taken_0x2154ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2154ec) {
            ctx->pc = 0x2154F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2154ECu;
            // 0x2154f0: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215610u;
            goto label_215610;
        }
    }
    ctx->pc = 0x2154F4u;
    // 0x2154f4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2154f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2154f8: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x2154f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2154fc: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x2154fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215500: 0x0  nop
    ctx->pc = 0x215500u;
    // NOP
    // 0x215504: 0x45030042  bc1tl       . + 4 + (0x42 << 2)
    ctx->pc = 0x215504u;
    {
        const bool branch_taken_0x215504 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x215504) {
            ctx->pc = 0x215508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215504u;
            // 0x215508: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215610u;
            goto label_215610;
        }
    }
    ctx->pc = 0x21550Cu;
    // 0x21550c: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x21550cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x215510: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x215510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215514: 0x0  nop
    ctx->pc = 0x215514u;
    // NOP
    // 0x215518: 0x4503003d  bc1tl       . + 4 + (0x3D << 2)
    ctx->pc = 0x215518u;
    {
        const bool branch_taken_0x215518 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x215518) {
            ctx->pc = 0x21551Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215518u;
            // 0x21551c: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215610u;
            goto label_215610;
        }
    }
    ctx->pc = 0x215520u;
    // 0x215520: 0x10a0003a  beqz        $a1, . + 4 + (0x3A << 2)
    ctx->pc = 0x215520u;
    {
        const bool branch_taken_0x215520 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x215524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215520u;
        // 0x215524: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215520) {
            ctx->pc = 0x21560Cu;
            goto label_21560c;
        }
    }
    ctx->pc = 0x215528u;
    // 0x215528: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x215528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x21552c: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x21552cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x215530: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x215530u;
    {
        const bool branch_taken_0x215530 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x215534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215530u;
        // 0x215534: 0x27b50010  addiu       $s5, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215530) {
            ctx->pc = 0x215550u;
            goto label_215550;
        }
    }
    ctx->pc = 0x215538u;
    // 0x215538: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x215538u;
    {
        const bool branch_taken_0x215538 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x215538) {
            ctx->pc = 0x21553Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215538u;
            // 0x21553c: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215540u;
            goto label_215540;
        }
    }
    ctx->pc = 0x215540u;
label_215540:
    // 0x215540: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x215540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x215544: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x215544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x215548: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x215548u;
    {
        const bool branch_taken_0x215548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215548u;
        // 0x21554c: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215548) {
            ctx->pc = 0x21560Cu;
            goto label_21560c;
        }
    }
    ctx->pc = 0x215550u;
label_215550:
    // 0x215550: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x215550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x215554: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x215554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215558: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x215558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x21555c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x21555cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215560: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x215560u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x215564: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x215564u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x215568: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x215568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x21556c: 0x2e3200b  movn        $a0, $s7, $v1
    ctx->pc = 0x21556cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 23));
    // 0x215570: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x215570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x215574: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x215574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x215578: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x215578u;
    {
        const bool branch_taken_0x215578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215578u;
        // 0x21557c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215578) {
            ctx->pc = 0x215594u;
            goto label_215594;
        }
    }
    ctx->pc = 0x215580u;
    // 0x215580: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x215580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215584: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x215584u;
    SET_GPR_U32(ctx, 31, 0x21558Cu);
    ctx->pc = 0x215588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215584u;
    // 0x215588: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x215584u, 0x21558Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21558Cu;
label_21558c:
    // 0x21558c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21558Cu;
    {
        const bool branch_taken_0x21558c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21558Cu;
        // 0x215590: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21558c) {
            ctx->pc = 0x21559Cu;
            goto label_21559c;
        }
    }
    ctx->pc = 0x215594u;
label_215594:
    // 0x215594: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x215594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215598: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x215598u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21559c:
    // 0x21559c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x21559cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2155a0: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2155A0u;
    {
        const bool branch_taken_0x2155a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x2155A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2155A0u;
        // 0x2155a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2155a0) {
            ctx->pc = 0x2155BCu;
            goto label_2155bc;
        }
    }
    ctx->pc = 0x2155A8u;
    // 0x2155a8: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x2155a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2155ac: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x2155ACu;
    SET_GPR_U32(ctx, 31, 0x2155B4u);
    ctx->pc = 0x2155B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2155ACu;
    // 0x2155b0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x2155ACu, 0x2155B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2155B4u;
label_2155b4:
    // 0x2155b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2155B4u;
    {
        const bool branch_taken_0x2155b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2155B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2155B4u;
        // 0x2155b8: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2155b4) {
            ctx->pc = 0x2155C0u;
            goto label_2155c0;
        }
    }
    ctx->pc = 0x2155BCu;
label_2155bc:
    // 0x2155bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2155bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2155c0:
    // 0x2155c0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2155c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2155c4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2155C4u;
    {
        const bool branch_taken_0x2155c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2155C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2155C4u;
        // 0x2155c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2155c4) {
            ctx->pc = 0x2155E8u;
            goto label_2155e8;
        }
    }
    ctx->pc = 0x2155CCu;
    // 0x2155cc: 0x0  nop
    ctx->pc = 0x2155ccu;
    // NOP
label_2155d0:
    // 0x2155d0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2155d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2155d4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2155d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2155d8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2155d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2155dc: 0x0  nop
    ctx->pc = 0x2155dcu;
    // NOP
    // 0x2155e0: 0x1480fffb  bnez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2155E0u;
    {
        const bool branch_taken_0x2155e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2155E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2155E0u;
        // 0x2155e4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2155e0) {
            ctx->pc = 0x2155D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2155d0;
        }
    }
    ctx->pc = 0x2155E8u;
label_2155e8:
    // 0x2155e8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2155e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2155ec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2155ECu;
    {
        const bool branch_taken_0x2155ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2155F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2155ECu;
        // 0x2155f0: 0x2711021  addu        $v0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2155ec) {
            ctx->pc = 0x215600u;
            goto label_215600;
        }
    }
    ctx->pc = 0x2155F4u;
    // 0x2155f4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2155F4u;
    SET_GPR_U32(ctx, 31, 0x2155FCu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2155F4u, 0x2155FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2155FCu;
label_2155fc:
    // 0x2155fc: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x2155fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_215600:
    // 0x215600: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x215600u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x215604: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x215604u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x215608: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x215608u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_21560c:
    // 0x21560c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x21560cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_215610:
    // 0x215610: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x215610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x215614: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x215614u;
    {
        const bool branch_taken_0x215614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x215618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215614u;
        // 0x215618: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215614) {
            ctx->pc = 0x21562Cu;
            goto label_21562c;
        }
    }
    ctx->pc = 0x21561Cu;
    // 0x21561c: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x21561cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x215620: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x215620u;
    {
        const bool branch_taken_0x215620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x215624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215620u;
        // 0x215624: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215620) {
            ctx->pc = 0x21562Cu;
            goto label_21562c;
        }
    }
    ctx->pc = 0x215628u;
    // 0x215628: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x215628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_21562c:
    // 0x21562c: 0x14a0ff90  bnez        $a1, . + 4 + (-0x70 << 2)
    ctx->pc = 0x21562Cu;
    {
        const bool branch_taken_0x21562c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x215630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21562Cu;
        // 0x215630: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21562c) {
            ctx->pc = 0x215470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215470;
        }
    }
    ctx->pc = 0x215634u;
label_215634:
    // 0x215634: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x215634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x215638: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x215638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21563c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x21563cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x215640: 0x1040ff79  beqz        $v0, . + 4 + (-0x87 << 2)
    ctx->pc = 0x215640u;
    {
        const bool branch_taken_0x215640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215640u;
        // 0x215644: 0x3c03004a  lui         $v1, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215640) {
            ctx->pc = 0x215428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215428;
        }
    }
    ctx->pc = 0x215648u;
    // 0x215648: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x215648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_21564c:
    // 0x21564c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x21564cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215650: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x215650u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x215654: 0x1040ff6a  beqz        $v0, . + 4 + (-0x96 << 2)
    ctx->pc = 0x215654u;
    {
        const bool branch_taken_0x215654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215654u;
        // 0x215658: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215654) {
            ctx->pc = 0x215400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215400;
        }
    }
    ctx->pc = 0x21565Cu;
label_21565c:
    // 0x21565c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x21565cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x215660: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x215660u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215664: 0x8cc294c8  lw          $v0, -0x6B38($a2)
    ctx->pc = 0x215664u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F94C8u));
    // 0x215668: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x215668u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21566c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21566cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x215670: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x215670u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x215674: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x215674u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x215678: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x215678u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21567c: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x21567cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x215680: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x215680u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x215684: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x215684u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x215688: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x215688u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21568c: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x21568cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x215690: 0xc7b900a8  lwc1        $f25, 0xA8($sp)
    ctx->pc = 0x215690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x215694: 0xc7b800a0  lwc1        $f24, 0xA0($sp)
    ctx->pc = 0x215694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x215698: 0xc7b70098  lwc1        $f23, 0x98($sp)
    ctx->pc = 0x215698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x21569c: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x21569cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2156a0: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x2156a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2156a4: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2156a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2156a8: 0xacc294c8  sw          $v0, -0x6B38($a2)
    ctx->pc = 0x2156a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F94C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F94C8u, _value); } while (0);
    // 0x2156ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2156ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2156B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156ACu;
        // 0x2156b0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2156ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2156B4u;
    // 0x2156b4: 0x0  nop
    ctx->pc = 0x2156b4u;
    // NOP
    ctx->pc = 0x2156b8u;
}
