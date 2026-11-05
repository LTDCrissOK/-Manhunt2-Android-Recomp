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

// Function: sub_0025B440
// Address: 0x25b440 - 0x25b7e8
void sub_0025B440_0x25b440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B440_0x25b440");
#endif

    switch (ctx->pc) {
        case 0x25b510u: goto label_25b510;
        case 0x25b580u: goto label_25b580;
        case 0x25b594u: goto label_25b594;
        case 0x25b5a4u: goto label_25b5a4;
        case 0x25b66cu: goto label_25b66c;
        case 0x25b6c0u: goto label_25b6c0;
        case 0x25b6d0u: goto label_25b6d0;
        case 0x25b708u: goto label_25b708;
        case 0x25b754u: goto label_25b754;
        case 0x25b790u: goto label_25b790;
        default: break;
    }

    ctx->pc = 0x25b440u;

    // 0x25b440: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x25b440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x25b444: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25b444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25b448: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25b448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b44c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x25b44cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b450: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x25b450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25b454: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x25b454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
    // 0x25b458: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x25b458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
    // 0x25b45c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x25b45cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b460: 0xffb200f0  sd          $s2, 0xF0($sp)
    ctx->pc = 0x25b460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
    // 0x25b464: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x25b464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b468: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x25b468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x25b46c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x25b46cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25b470: 0xffbe0120  sd          $fp, 0x120($sp)
    ctx->pc = 0x25b470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 30));
    // 0x25b474: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x25b474u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b478: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x25b478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x25b47c: 0x3c1e0040  lui         $fp, 0x40
    ctx->pc = 0x25b47cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)64 << 16));
    // 0x25b480: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x25b480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x25b484: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x25b484u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x25b488: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x25b488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x25b48c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x25b48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x25b490: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x25b490u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x25b494: 0xffb100e8  sd          $s1, 0xE8($sp)
    ctx->pc = 0x25b494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 17));
    // 0x25b498: 0xffb300f8  sd          $s3, 0xF8($sp)
    ctx->pc = 0x25b498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 19));
    // 0x25b49c: 0xffb50108  sd          $s5, 0x108($sp)
    ctx->pc = 0x25b49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 21));
    // 0x25b4a0: 0xffb70118  sd          $s7, 0x118($sp)
    ctx->pc = 0x25b4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 23));
    // 0x25b4a4: 0xffbf0128  sd          $ra, 0x128($sp)
    ctx->pc = 0x25b4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 31));
    // 0x25b4a8: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x25b4a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x25b4ac: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x25b4acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x25b4b0: 0xafa500d8  sw          $a1, 0xD8($sp)
    ctx->pc = 0x25b4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 5));
    // 0x25b4b4: 0x6ba30037  ldl         $v1, 0x37($sp)
    ctx->pc = 0x25b4b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x25b4b8: 0x6fa30030  ldr         $v1, 0x30($sp)
    ctx->pc = 0x25b4b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x25b4bc: 0x6ba4003f  ldl         $a0, 0x3F($sp)
    ctx->pc = 0x25b4bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x25b4c0: 0x6fa40038  ldr         $a0, 0x38($sp)
    ctx->pc = 0x25b4c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x25b4c4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x25b4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25b4c8: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x25b4c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25b4cc: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x25b4ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25b4d0: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x25b4d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25b4d4: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x25b4d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25b4d8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25b4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x25b4dc: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x25b4dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x25b4e0: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x25b4e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x25b4e4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x25b4e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x25b4e8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x25b4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b4ec: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x25b4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b4f0: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x25b4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25b4f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25b4f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25b4f8: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x25b4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25b4fc: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x25b4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b500: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x25b500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x25b504: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x25b504u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x25b508: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x25b508u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x25b50c: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x25b50cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_25b510:
    // 0x25b510: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x25b510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b514: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x25b514u;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
    // 0x25b518: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x25b518u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b51c: 0x0  nop
    ctx->pc = 0x25b51cu;
    // NOP
    // 0x25b520: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x25B520u;
    {
        const bool branch_taken_0x25b520 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B520u;
        // 0x25b524: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b520) {
            ctx->pc = 0x25B52Cu;
            goto label_25b52c;
        }
    }
    ctx->pc = 0x25B528u;
    // 0x25b528: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25b528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b52c:
    // 0x25b52c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x25B52Cu;
    {
        const bool branch_taken_0x25b52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b52c) {
            ctx->pc = 0x25B530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B52Cu;
            // 0x25b530: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B558u;
            goto label_25b558;
        }
    }
    ctx->pc = 0x25B534u;
    // 0x25b534: 0x0  nop
    ctx->pc = 0x25b534u;
    // NOP
    // 0x25b538: 0x0  nop
    ctx->pc = 0x25b538u;
    // NOP
    // 0x25b53c: 0x46020803  div.s       $f0, $f1, $f2
    ctx->pc = 0x25b53cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x25b540: 0x121027  nor         $v0, $zero, $s2
    ctx->pc = 0x25b540u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 18)));
    // 0x25b544: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x25b544u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x25b548: 0x202900a  movz        $s2, $s0, $v0
    ctx->pc = 0x25b548u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 16));
    // 0x25b54c: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x25b54cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b550: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25b550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x25b554: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25b554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_25b558:
    // 0x25b558: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x25b558u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x25b55c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x25B55Cu;
    {
        const bool branch_taken_0x25b55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B55Cu;
        // 0x25b560: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b55c) {
            ctx->pc = 0x25B510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25b510;
        }
    }
    ctx->pc = 0x25B564u;
    // 0x25b564: 0xc6810024  lwc1        $f1, 0x24($s4)
    ctx->pc = 0x25b564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b568: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x25b568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x25b56c: 0xc6800030  lwc1        $f0, 0x30($s4)
    ctx->pc = 0x25b56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b570: 0x8fc49cf8  lw          $a0, -0x6308($fp)
    ctx->pc = 0x25b570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294941944)));
    // 0x25b574: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x25b574u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x25b578: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x25B578u;
    SET_GPR_U32(ctx, 31, 0x25B580u);
    ctx->pc = 0x25B57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B578u;
    // 0x25b57c: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x25B578u, 0x25B580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B580u;
label_25b580:
    // 0x25b580: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25b580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b584: 0x5200008b  beql        $s0, $zero, . + 4 + (0x8B << 2)
    ctx->pc = 0x25B584u;
    {
        const bool branch_taken_0x25b584 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b584) {
            ctx->pc = 0x25B588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B584u;
            // 0x25b588: 0xdfb000e0  ld          $s0, 0xE0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B7B4u;
            goto label_25b7b4;
        }
    }
    ctx->pc = 0x25B58Cu;
    // 0x25b58c: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x25B58Cu;
    SET_GPR_U32(ctx, 31, 0x25B594u);
    ctx->pc = 0x25B590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B58Cu;
    // 0x25b590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x25B58Cu, 0x25B594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B594u;
label_25b594:
    // 0x25b594: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B594u;
    {
        const bool branch_taken_0x25b594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b594) {
            ctx->pc = 0x25B598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B594u;
            // 0x25b598: 0xc6000080  lwc1        $f0, 0x80($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B5A8u;
            goto label_25b5a8;
        }
    }
    ctx->pc = 0x25B59Cu;
    // 0x25b59c: 0xc0c4900  jal         func_312400
    ctx->pc = 0x25B59Cu;
    SET_GPR_U32(ctx, 31, 0x25B5A4u);
    ctx->pc = 0x25B5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B59Cu;
    // 0x25b5a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x25B59Cu, 0x25B5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B5A4u;
label_25b5a4:
    // 0x25b5a4: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x25b5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b5a8:
    // 0x25b5a8: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x25b5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x25b5ac: 0x26030090  addiu       $v1, $s0, 0x90
    ctx->pc = 0x25b5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x25b5b0: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x25b5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x25b5b4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x25b5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25b5b8: 0x260500b0  addiu       $a1, $s0, 0xB0
    ctx->pc = 0x25b5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x25b5bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25b5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25b5c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x25b5c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25b5c4: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x25b5c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25b5c8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x25b5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b5cc: 0x3c06004b  lui         $a2, 0x4B
    ctx->pc = 0x25b5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)75 << 16));
    // 0x25b5d0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x25b5d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x25b5d4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x25b5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b5d8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x25b5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x25b5dc: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x25b5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b5e0: 0xe7a1005c  swc1        $f1, 0x5C($sp)
    ctx->pc = 0x25b5e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x25b5e4: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x25b5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b5e8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x25b5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x25b5ec: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x25b5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b5f0: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x25b5f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x25b5f4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x25b5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b5f8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x25b5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x25b5fc: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x25b5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b600: 0xe7a1006c  swc1        $f1, 0x6C($sp)
    ctx->pc = 0x25b600u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x25b604: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x25b604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b608: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x25b608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x25b60c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x25b60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b610: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x25b610u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x25b614: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x25b614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b618: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x25b618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x25b61c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x25b61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b620: 0xe7a1007c  swc1        $f1, 0x7C($sp)
    ctx->pc = 0x25b620u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x25b624: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x25b624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b628: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x25b628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x25b62c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x25b62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b630: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x25b630u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x25b634: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x25b634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b638: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x25b638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x25b63c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x25b63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b640: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x25b640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x25b644: 0xe7a1008c  swc1        $f1, 0x8C($sp)
    ctx->pc = 0x25b644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x25b648: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x25b648u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x25b64c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x25b64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x25b650: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x25b650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x25b654: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x25b654u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25b658: 0xf8c13d40  sqc2        $vf1, 0x3D40($a2)
    ctx->pc = 0x25b658u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4B3D40u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4B3D40u, _value); } while (0);
    // 0x25b65c: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x25b65cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25b660: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25b660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b664: 0xc096b88  jal         func_25AE20
    ctx->pc = 0x25B664u;
    SET_GPR_U32(ctx, 31, 0x25B66Cu);
    ctx->pc = 0x25B668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B664u;
    // 0x25b668: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AE20u, 0x25B664u, 0x25B66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B66Cu;
label_25b66c:
    // 0x25b66c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x25b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x25b670: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x25b670u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25b674: 0xf8413d50  sqc2        $vf1, 0x3D50($v0)
    ctx->pc = 0x25b674u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4B3D50u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4B3D50u, _value); } while (0);
    // 0x25b678: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x25b678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25b67c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x25b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x25b680: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x25b680u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25b684: 0xf8413d60  sqc2        $vf1, 0x3D60($v0)
    ctx->pc = 0x25b684u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4B3D60u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4B3D60u, _value); } while (0);
    // 0x25b688: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x25b688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x25b68c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x25b68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x25b690: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x25b690u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25b694: 0xf8413d70  sqc2        $vf1, 0x3D70($v0)
    ctx->pc = 0x25b694u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4B3D70u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4B3D70u, _value); } while (0);
    // 0x25b698: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x25b698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x25b69c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x25b69cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25b6a0: 0xf8613d80  sqc2        $vf1, 0x3D80($v1)
    ctx->pc = 0x25b6a0u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4B3D80u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4B3D80u, _value); } while (0);
    // 0x25b6a4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x25b6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x25b6a8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x25b6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x25b6ac: 0xac402bb0  sw          $zero, 0x2BB0($v0)
    ctx->pc = 0x25b6acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482BB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482BB0u, _value); } while (0);
    // 0x25b6b0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x25b6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25b6b4: 0xac602bb4  sw          $zero, 0x2BB4($v1)
    ctx->pc = 0x25b6b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482BB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482BB4u, _value); } while (0);
    // 0x25b6b8: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x25B6B8u;
    SET_GPR_U32(ctx, 31, 0x25B6C0u);
    ctx->pc = 0x25B6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B6B8u;
    // 0x25b6bc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x25B6B8u, 0x25B6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B6C0u;
label_25b6c0:
    // 0x25b6c0: 0x2ad70004  slti        $s7, $s6, 0x4
    ctx->pc = 0x25b6c0u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x25b6c4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x25b6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25b6c8: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x25B6C8u;
    SET_GPR_U32(ctx, 31, 0x25B6D0u);
    ctx->pc = 0x25B6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B6C8u;
    // 0x25b6cc: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x25B6C8u, 0x25B6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B6D0u;
label_25b6d0:
    // 0x25b6d0: 0x2d0102a  slt         $v0, $s6, $s0
    ctx->pc = 0x25b6d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x25b6d4: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x25B6D4u;
    {
        const bool branch_taken_0x25b6d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B6D4u;
        // 0x25b6d8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b6d4) {
            ctx->pc = 0x25B760u;
            goto label_25b760;
        }
    }
    ctx->pc = 0x25B6DCu;
    // 0x25b6dc: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x25b6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x25b6e0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x25b6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25b6e4: 0x24429ce0  addiu       $v0, $v0, -0x6320
    ctx->pc = 0x25b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941920));
    // 0x25b6e8: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x25b6e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b6ec: 0x3c01c270  lui         $at, 0xC270
    ctx->pc = 0x25b6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49776 << 16));
    // 0x25b6f0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x25b6f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x25b6f4: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x25b6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x25b6f8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25b6f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25b6fc: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x25b6fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25b700: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x25b700u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25b704: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x25b704u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_25b708:
    // 0x25b708: 0x3a0b0004  xori        $t3, $s0, 0x4
    ctx->pc = 0x25b708u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)4);
    // 0x25b70c: 0xe6540004  swc1        $f20, 0x4($s2)
    ctx->pc = 0x25b70cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x25b710: 0x2d6b0001  sltiu       $t3, $t3, 0x1
    ctx->pc = 0x25b710u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x25b714: 0xe6550008  swc1        $f21, 0x8($s2)
    ctx->pc = 0x25b714u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x25b718: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25b718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b71c: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x25b71cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x25b720: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x25b720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b724: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x25b724u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b728: 0x27a900d0  addiu       $t1, $sp, 0xD0
    ctx->pc = 0x25b728u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x25b72c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x25b72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x25b730: 0x27aa00d4  addiu       $t2, $sp, 0xD4
    ctx->pc = 0x25b730u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x25b734: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x25b734u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25b738: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25b738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x25b73c: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x25b73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25b740: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x25b740u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x25b744: 0x8fc59cf8  lw          $a1, -0x6308($fp)
    ctx->pc = 0x25b744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294941944)));
    // 0x25b748: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x25b748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x25b74c: 0xc096dfa  jal         func_25B7E8
    ctx->pc = 0x25B74Cu;
    SET_GPR_U32(ctx, 31, 0x25B754u);
    ctx->pc = 0x25B750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B74Cu;
    // 0x25b750: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B7E8u, 0x25B74Cu, 0x25B754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B754u;
label_25b754:
    // 0x25b754: 0x2d0102a  slt         $v0, $s6, $s0
    ctx->pc = 0x25b754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x25b758: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x25B758u;
    {
        const bool branch_taken_0x25b758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b758) {
            ctx->pc = 0x25B75Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B758u;
            // 0x25b75c: 0xe7b50030  swc1        $f21, 0x30($sp) (Delay Slot)
            { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25b708;
        }
    }
    ctx->pc = 0x25B760u;
label_25b760:
    // 0x25b760: 0x12e0000b  beqz        $s7, . + 4 + (0xB << 2)
    ctx->pc = 0x25B760u;
    {
        const bool branch_taken_0x25b760 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B760u;
        // 0x25b764: 0x26c30001  addiu       $v1, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b760) {
            ctx->pc = 0x25B790u;
            goto label_25b790;
        }
    }
    ctx->pc = 0x25B768u;
    // 0x25b768: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x25b768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x25b76c: 0x24429ce0  addiu       $v0, $v0, -0x6320
    ctx->pc = 0x25b76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941920));
    // 0x25b770: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25b770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25b774: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25b774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25b778: 0x8fc49cf8  lw          $a0, -0x6308($fp)
    ctx->pc = 0x25b778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294941944)));
    // 0x25b77c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x25b77cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25b780: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x25b780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b784: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x25b784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25b788: 0xc096b66  jal         func_25AD98
    ctx->pc = 0x25B788u;
    SET_GPR_U32(ctx, 31, 0x25B790u);
    ctx->pc = 0x25B78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B788u;
    // 0x25b78c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD98u, 0x25B788u, 0x25B790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B790u;
label_25b790:
    // 0x25b790: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x25b790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25b794: 0xc7a300d4  lwc1        $f3, 0xD4($sp)
    ctx->pc = 0x25b794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25b798: 0xc6800024  lwc1        $f0, 0x24($s4)
    ctx->pc = 0x25b798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b79c: 0xc6810030  lwc1        $f1, 0x30($s4)
    ctx->pc = 0x25b79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b7a0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x25b7a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x25b7a4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x25b7a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x25b7a8: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x25b7a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
    // 0x25b7ac: 0xe6810030  swc1        $f1, 0x30($s4)
    ctx->pc = 0x25b7acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 48), bits); }
    // 0x25b7b0: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x25b7b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_25b7b4:
    // 0x25b7b4: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x25b7b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25b7b8: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x25b7b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x25b7bc: 0xdfb300f8  ld          $s3, 0xF8($sp)
    ctx->pc = 0x25b7bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x25b7c0: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x25b7c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x25b7c4: 0xdfb50108  ld          $s5, 0x108($sp)
    ctx->pc = 0x25b7c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x25b7c8: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x25b7c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x25b7cc: 0xdfb70118  ld          $s7, 0x118($sp)
    ctx->pc = 0x25b7ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x25b7d0: 0xdfbe0120  ld          $fp, 0x120($sp)
    ctx->pc = 0x25b7d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x25b7d4: 0xdfbf0128  ld          $ra, 0x128($sp)
    ctx->pc = 0x25b7d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x25b7d8: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x25b7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25b7dc: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x25b7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25b7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x25B7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B7E0u;
        // 0x25b7e4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B7E8u;
}
