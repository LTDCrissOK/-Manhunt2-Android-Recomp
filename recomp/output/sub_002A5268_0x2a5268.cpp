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

// Function: sub_002A5268
// Address: 0x2a5268 - 0x2a55c8
void sub_002A5268_0x2a5268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5268_0x2a5268");
#endif

    switch (ctx->pc) {
        case 0x2a52f8u: goto label_2a52f8;
        case 0x2a53e4u: goto label_2a53e4;
        case 0x2a5410u: goto label_2a5410;
        case 0x2a54c8u: goto label_2a54c8;
        case 0x2a5530u: goto label_2a5530;
        case 0x2a5558u: goto label_2a5558;
        case 0x2a5578u: goto label_2a5578;
        default: break;
    }

    ctx->pc = 0x2a5268u;

    // 0x2a5268: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a5268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a526c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a526cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5270: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2a5270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2a5274: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2a5274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2a5278: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x2a5278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2a527c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2a527cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2a5280: 0x27a30034  addiu       $v1, $sp, 0x34
    ctx->pc = 0x2a5280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x2a5284: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x2a5284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x2a5288: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x2a5288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a528c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2a528cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2a5290: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2a5290u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5294: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2a5294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2a5298: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2a5298u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a529c: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x2a529cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2a52a0: 0x26d20008  addiu       $s2, $s6, 0x8
    ctx->pc = 0x2a52a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x2a52a4: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x2a52a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2a52a8: 0x460c6d81  sub.s       $f22, $f13, $f12
    ctx->pc = 0x2a52a8u;
    ctx->f[22] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x2a52ac: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2a52acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2a52b0: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x2a52b0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x2a52b4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2a52b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2a52b8: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x2a52b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a52bc: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2a52bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2a52c0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2a52c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2a52c4: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x2a52c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x2a52c8: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x2a52c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x2a52cc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a52ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2a52d0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2a52d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2a52d4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2a52d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2a52d8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2a52d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a52dc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2a52dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2a52e0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2a52e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a52e4: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x2a52e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x2a52e8: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2a52e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a52ec: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x2a52ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x2a52f0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2a52f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2a52f4: 0x0  nop
    ctx->pc = 0x2a52f4u;
    // NOP
label_2a52f8:
    // 0x2a52f8: 0x1518c0  sll         $v1, $s5, 3
    ctx->pc = 0x2a52f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x2a52fc: 0x2482a990  addiu       $v0, $a0, -0x5670
    ctx->pc = 0x2a52fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945168));
    // 0x2a5300: 0xc6c20004  lwc1        $f2, 0x4($s6)
    ctx->pc = 0x2a5300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a5304: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5308: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2a5308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a530c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2a530cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5310: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2a5310u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2a5314: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x2a5314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x2a5318: 0x4601b042  mul.s       $f1, $f22, $f1
    ctx->pc = 0x2a5318u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x2a531c: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x2a531cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a5320: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2a5320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a5324: 0x460200a8  max.s       $f2, $f0, $f2
    ctx->pc = 0x2a5324u;
    ctx->f[2] = std::max(ctx->f[0], ctx->f[2]);
    // 0x2a5328: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2a5328u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a532c: 0xe6c20004  swc1        $f2, 0x4($s6)
    ctx->pc = 0x2a532cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x2a5330: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2a5330u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a5334: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x2a5334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2a5338: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2a5338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2a533c: 0x50c20016  beql        $a2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A533Cu;
    {
        const bool branch_taken_0x2a533c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a533c) {
            ctx->pc = 0x2A5340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A533Cu;
            // 0x2a5340: 0xafbe0034  sw          $fp, 0x34($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5398u;
            goto label_2a5398;
        }
    }
    ctx->pc = 0x2A5344u;
    // 0x2a5344: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x2A5344u;
    {
        const bool branch_taken_0x2a5344 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5344u;
        // 0x2a5348: 0x24c20008  addiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5344) {
            ctx->pc = 0x2A5384u;
            goto label_2a5384;
        }
    }
    ctx->pc = 0x2A534Cu;
    // 0x2a534c: 0xe4d40000  swc1        $f20, 0x0($a2)
    ctx->pc = 0x2a534cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2a5350: 0xe4d40004  swc1        $f20, 0x4($a2)
    ctx->pc = 0x2a5350u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2a5354: 0xe4d40008  swc1        $f20, 0x8($a2)
    ctx->pc = 0x2a5354u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2a5358: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x2a5358u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a535c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2a535cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5360: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x2a5360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2a5364: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2a5364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5368: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x2a5368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2a536c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2a536cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5370: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x2a5370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2a5374: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x2a5374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5378: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2a5378u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a537c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2a537cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5380: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x2a5380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
label_2a5384:
    // 0x2a5384: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2a5384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2a5388: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2a5388u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2a538c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2a538cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2a5390: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x2A5390u;
    {
        const bool branch_taken_0x2a5390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5390u;
        // 0x2a5394: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5390) {
            ctx->pc = 0x2A5570u;
            goto label_2a5570;
        }
    }
    ctx->pc = 0x2A5398u;
label_2a5398:
    // 0x2a5398: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x2a5398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x2a539c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2a539cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2a53a0: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x2a53a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2a53a4: 0x8ec40008  lw          $a0, 0x8($s6)
    ctx->pc = 0x2a53a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x2a53a8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2a53a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2a53ac: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2a53acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a53b0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2a53b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a53b4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2a53b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a53b8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2a53b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2a53bc: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2a53bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x2a53c0: 0x5e182b  sltu        $v1, $v0, $fp
    ctx->pc = 0x2a53c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x2a53c4: 0x83280a  movz        $a1, $a0, $v1
    ctx->pc = 0x2a53c4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x2a53c8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2a53c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a53cc: 0x44a021  addu        $s4, $v0, $a0
    ctx->pc = 0x2a53ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a53d0: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A53D0u;
    {
        const bool branch_taken_0x2a53d0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A53D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A53D0u;
        // 0x2a53d4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a53d0) {
            ctx->pc = 0x2A53ECu;
            goto label_2a53ec;
        }
    }
    ctx->pc = 0x2A53D8u;
    // 0x2a53d8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2a53d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2a53dc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2A53DCu;
    SET_GPR_U32(ctx, 31, 0x2A53E4u);
    ctx->pc = 0x2A53E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A53DCu;
    // 0x2a53e0: 0x2822018  mult        $a0, $s4, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2A53DCu, 0x2A53E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A53E4u;
label_2a53e4:
    // 0x2a53e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A53E4u;
    {
        const bool branch_taken_0x2a53e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A53E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A53E4u;
        // 0x2a53e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a53e4) {
            ctx->pc = 0x2A53F4u;
            goto label_2a53f4;
        }
    }
    ctx->pc = 0x2A53ECu;
label_2a53ec:
    // 0x2a53ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a53ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a53f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a53f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a53f4:
    // 0x2a53f4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2a53f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a53f8: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x2a53f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a53fc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2a53fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2a5400: 0x10730017  beq         $v1, $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x2A5400u;
    {
        const bool branch_taken_0x2a5400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x2A5404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5400u;
        // 0x2a5404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5400) {
            ctx->pc = 0x2A5460u;
            goto label_2a5460;
        }
    }
    ctx->pc = 0x2A5408u;
    // 0x2a5408: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x2a5408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2a540c: 0x0  nop
    ctx->pc = 0x2a540cu;
    // NOP
label_2a5410:
    // 0x2a5410: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A5410u;
    {
        const bool branch_taken_0x2a5410 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5410) {
            ctx->pc = 0x2A5414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5410u;
            // 0x2a5414: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5454u;
            goto label_2a5454;
        }
    }
    ctx->pc = 0x2A5418u;
    // 0x2a5418: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x2a5418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
    // 0x2a541c: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x2a541cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x2a5420: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a5420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a5424: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a5424u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2a5428: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2a5428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a542c: 0xe440fff8  swc1        $f0, -0x8($v0)
    ctx->pc = 0x2a542cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
    // 0x2a5430: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2a5430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5434: 0xe441fffc  swc1        $f1, -0x4($v0)
    ctx->pc = 0x2a5434u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
    // 0x2a5438: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2a5438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a543c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2a543cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a5440: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2a5440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5444: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2a5444u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a5448: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2a5448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a544c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2a544cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2a5450: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x2a5450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_2a5454:
    // 0x2a5454: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2a5454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2a5458: 0x1473ffed  bne         $v1, $s3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2A5458u;
    {
        const bool branch_taken_0x2a5458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x2A545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5458u;
        // 0x2a545c: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5458) {
            ctx->pc = 0x2A5410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5410;
        }
    }
    ctx->pc = 0x2A5460u;
label_2a5460:
    // 0x2a5460: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x2a5460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2a5464: 0x145e0013  bne         $v0, $fp, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A5464u;
    {
        const bool branch_taken_0x2a5464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x2A5468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5464u;
        // 0x2a5468: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5464) {
            ctx->pc = 0x2A54B4u;
            goto label_2a54b4;
        }
    }
    ctx->pc = 0x2A546Cu;
    // 0x2a546c: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A546Cu;
    {
        const bool branch_taken_0x2a546c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A546Cu;
        // 0x2a5470: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a546c) {
            ctx->pc = 0x2A54ACu;
            goto label_2a54ac;
        }
    }
    ctx->pc = 0x2A5474u;
    // 0x2a5474: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2a5474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2a5478: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2a5478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2a547c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2a547cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2a5480: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a5480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2a5484: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2a5484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5488: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2a5488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2a548c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2a548cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5490: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2a5490u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2a5494: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2a5494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5498: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2a5498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2a549c: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x2a549cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a54a0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2a54a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a54a4: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2a54a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a54a8: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2a54a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_2a54ac:
    // 0x2a54ac: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2A54ACu;
    {
        const bool branch_taken_0x2a54ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A54B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A54ACu;
        // 0x2a54b0: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a54ac) {
            ctx->pc = 0x2A5518u;
            goto label_2a5518;
        }
    }
    ctx->pc = 0x2A54B4u;
label_2a54b4:
    // 0x2a54b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a54b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a54b8: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A54B8u;
    {
        const bool branch_taken_0x2a54b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A54BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A54B8u;
        // 0x2a54bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a54b8) {
            ctx->pc = 0x2A5514u;
            goto label_2a5514;
        }
    }
    ctx->pc = 0x2A54C0u;
    // 0x2a54c0: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x2a54c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2a54c4: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x2a54c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_2a54c8:
    // 0x2a54c8: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A54C8u;
    {
        const bool branch_taken_0x2a54c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A54CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A54C8u;
        // 0x2a54cc: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a54c8) {
            ctx->pc = 0x2A5508u;
            goto label_2a5508;
        }
    }
    ctx->pc = 0x2A54D0u;
    // 0x2a54d0: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x2a54d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
    // 0x2a54d4: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x2a54d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x2a54d8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a54d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a54dc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a54dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2a54e0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2a54e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a54e4: 0xe440fff8  swc1        $f0, -0x8($v0)
    ctx->pc = 0x2a54e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
    // 0x2a54e8: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2a54e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a54ec: 0xe441fffc  swc1        $f1, -0x4($v0)
    ctx->pc = 0x2a54ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
    // 0x2a54f0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2a54f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a54f4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2a54f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a54f8: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2a54f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a54fc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2a54fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a5500: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2a5500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5504: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2a5504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2a5508:
    // 0x2a5508: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2a5508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2a550c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2A550Cu;
    {
        const bool branch_taken_0x2a550c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A550Cu;
        // 0x2a5510: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a550c) {
            ctx->pc = 0x2A54C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a54c8;
        }
    }
    ctx->pc = 0x2A5514u;
label_2a5514:
    // 0x2a5514: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a5514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a5518:
    // 0x2a5518: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2a5518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a551c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2a551cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2a5520: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A5520u;
    {
        const bool branch_taken_0x2a5520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A5524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5520u;
        // 0x2a5524: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5520) {
            ctx->pc = 0x2A5548u;
            goto label_2a5548;
        }
    }
    ctx->pc = 0x2A5528u;
    // 0x2a5528: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2a5528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2a552c: 0x0  nop
    ctx->pc = 0x2a552cu;
    // NOP
label_2a5530:
    // 0x2a5530: 0x0  nop
    ctx->pc = 0x2a5530u;
    // NOP
    // 0x2a5534: 0x0  nop
    ctx->pc = 0x2a5534u;
    // NOP
    // 0x2a5538: 0x0  nop
    ctx->pc = 0x2a5538u;
    // NOP
    // 0x2a553c: 0x0  nop
    ctx->pc = 0x2a553cu;
    // NOP
    // 0x2a5540: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A5540u;
    {
        const bool branch_taken_0x2a5540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A5544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5540u;
        // 0x2a5544: 0x24420014  addiu       $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5540) {
            ctx->pc = 0x2A5530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5530;
        }
    }
    ctx->pc = 0x2A5548u;
label_2a5548:
    // 0x2a5548: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5548u;
    {
        const bool branch_taken_0x2a5548 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5548u;
        // 0x2a554c: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5548) {
            ctx->pc = 0x2A555Cu;
            goto label_2a555c;
        }
    }
    ctx->pc = 0x2A5550u;
    // 0x2a5550: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2A5550u;
    SET_GPR_U32(ctx, 31, 0x2A5558u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2A5550u, 0x2A5558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5558u;
label_2a5558:
    // 0x2a5558: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2a5558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2a555c:
    // 0x2a555c: 0xae570000  sw          $s7, 0x0($s2)
    ctx->pc = 0x2a555cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 23));
    // 0x2a5560: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x2a5560u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a5564: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x2a5564u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x2a5568: 0x771021  addu        $v0, $v1, $s7
    ctx->pc = 0x2a5568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2a556c: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x2a556cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_2a5570:
    // 0x2a5570: 0xc0a9ec2  jal         func_2A7B08
    ctx->pc = 0x2A5570u;
    SET_GPR_U32(ctx, 31, 0x2A5578u);
    ctx->pc = 0x2A5574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5570u;
    // 0x2a5574: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7B08u, 0x2A5570u, 0x2A5578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5578u;
label_2a5578:
    // 0x2a5578: 0x2ea20007  sltiu       $v0, $s5, 0x7
    ctx->pc = 0x2a5578u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2a557c: 0x5440ff5e  bnel        $v0, $zero, . + 4 + (-0xA2 << 2)
    ctx->pc = 0x2A557Cu;
    {
        const bool branch_taken_0x2a557c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a557c) {
            ctx->pc = 0x2A5580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A557Cu;
            // 0x2a5580: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A52F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a52f8;
        }
    }
    ctx->pc = 0x2A5584u;
    // 0x2a5584: 0xe6d50004  swc1        $f21, 0x4($s6)
    ctx->pc = 0x2a5584u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x2a5588: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2a5588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a558c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2a558cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a5590: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2a5590u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a5594: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2a5594u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2a5598: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2a5598u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a559c: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x2a559cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a55a0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2a55a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a55a4: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x2a55a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a55a8: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2a55a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a55ac: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2a55acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2a55b0: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x2a55b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a55b4: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x2a55b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a55b8: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2a55b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a55bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A55BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A55C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A55BCu;
        // 0x2a55c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A55BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A55C4u;
    // 0x2a55c4: 0x0  nop
    ctx->pc = 0x2a55c4u;
    // NOP
    ctx->pc = 0x2a55c8u;
}
