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

// Function: sub_002C6270
// Address: 0x2c6270 - 0x2c64c0
void sub_002C6270_0x2c6270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6270_0x2c6270");
#endif

    ctx->pc = 0x2c6270u;

    // 0x2c6270: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x2c6270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c6274: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c6274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c6278: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x2c6278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c627c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2c627cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2c6280: 0xc4a60028  lwc1        $f6, 0x28($a1)
    ctx->pc = 0x2c6280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c6284: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x2c6284u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6288: 0x46022800  add.s       $f0, $f5, $f2
    ctx->pc = 0x2c6288u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x2c628c: 0xc4aa0004  lwc1        $f10, 0x4($a1)
    ctx->pc = 0x2c628cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2c6290: 0x44805800  mtc1        $zero, $f11
    ctx->pc = 0x2c6290u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x2c6294: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x2c6294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c6298: 0xc4a90008  lwc1        $f9, 0x8($a1)
    ctx->pc = 0x2c6298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2c629c: 0x46060200  add.s       $f8, $f0, $f6
    ctx->pc = 0x2c629cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2c62a0: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x2c62a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c62a4: 0xc4a70018  lwc1        $f7, 0x18($a1)
    ctx->pc = 0x2c62a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c62a8: 0xc4a30020  lwc1        $f3, 0x20($a1)
    ctx->pc = 0x2c62a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c62ac: 0xc4a40024  lwc1        $f4, 0x24($a1)
    ctx->pc = 0x2c62acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c62b0: 0x46085834  c.lt.s      $f11, $f8
    ctx->pc = 0x2c62b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c62b4: 0x244608e8  addiu       $a2, $v0, 0x8E8
    ctx->pc = 0x2c62b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2280));
    // 0x2c62b8: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x2c62b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2c62bc: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x2c62bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2c62c0: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2c62c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4708F0u));
    // 0x2c62c4: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x2c62c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c62c8: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x2c62c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c62cc: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c62ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c62d0: 0xe7a50020  swc1        $f5, 0x20($sp)
    ctx->pc = 0x2c62d0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c62d4: 0xe7aa0024  swc1        $f10, 0x24($sp)
    ctx->pc = 0x2c62d4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2c62d8: 0xe7a90028  swc1        $f9, 0x28($sp)
    ctx->pc = 0x2c62d8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c62dc: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x2c62dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2c62e0: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x2c62e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c62e4: 0xe7a70034  swc1        $f7, 0x34($sp)
    ctx->pc = 0x2c62e4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c62e8: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x2c62e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c62ec: 0xe7a4003c  swc1        $f4, 0x3C($sp)
    ctx->pc = 0x2c62ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2c62f0: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x2C62F0u;
    {
        const bool branch_taken_0x2c62f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C62F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C62F0u;
        // 0x2c62f4: 0xe7a60040  swc1        $f6, 0x40($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c62f0) {
            ctx->pc = 0x2C6354u;
            goto label_2c6354;
        }
    }
    ctx->pc = 0x2C62F8u;
    // 0x2c62f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c62f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c62fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c62fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6300: 0x46043901  sub.s       $f4, $f7, $f4
    ctx->pc = 0x2c6300u;
    ctx->f[4] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
    // 0x2c6304: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c6304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c6308: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2c6308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2c630c: 0x460918c1  sub.s       $f3, $f3, $f9
    ctx->pc = 0x2c630cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[9]);
    // 0x2c6310: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x2c6310u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x2c6314: 0x46015041  sub.s       $f1, $f10, $f1
    ctx->pc = 0x2c6314u;
    ctx->f[1] = FPU_SUB_S(ctx->f[10], ctx->f[1]);
    // 0x2c6318: 0x0  nop
    ctx->pc = 0x2c6318u;
    // NOP
    // 0x2c631c: 0x0  nop
    ctx->pc = 0x2c631cu;
    // NOP
    // 0x2c6320: 0x46000184  c1          0x184
    ctx->pc = 0x2c6320u;
    ctx->f[6] = FPU_SQRT_S(ctx->f[0]);
    // 0x2c6324: 0x46053082  mul.s       $f2, $f6, $f5
    ctx->pc = 0x2c6324u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x2c6328: 0x0  nop
    ctx->pc = 0x2c6328u;
    // NOP
    // 0x2c632c: 0x0  nop
    ctx->pc = 0x2c632cu;
    // NOP
    // 0x2c6330: 0x46062983  div.s       $f6, $f5, $f6
    ctx->pc = 0x2c6330u;
    { if (ctx->f[6] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[5], ctx->f[6]); }
    // 0x2c6334: 0xe5a2000c  swc1        $f2, 0xC($t5)
    ctx->pc = 0x2c6334u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 12), bits); }
    // 0x2c6338: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2c6338u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2c633c: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x2c633cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2c6340: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x2c6340u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2c6344: 0xe5a10008  swc1        $f1, 0x8($t5)
    ctx->pc = 0x2c6344u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
    // 0x2c6348: 0xe5a40000  swc1        $f4, 0x0($t5)
    ctx->pc = 0x2c6348u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x2c634c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2C634Cu;
    {
        const bool branch_taken_0x2c634c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C634Cu;
        // 0x2c6350: 0xe5a30004  swc1        $f3, 0x4($t5) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c634c) {
            ctx->pc = 0x2C64B8u;
            goto label_2c64b8;
        }
    }
    ctx->pc = 0x2C6354u;
label_2c6354:
    // 0x2c6354: 0x46022834  c.lt.s      $f5, $f2
    ctx->pc = 0x2c6354u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6358: 0x0  nop
    ctx->pc = 0x2c6358u;
    // NOP
    // 0x2c635c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C635Cu;
    {
        const bool branch_taken_0x2c635c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C6360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C635Cu;
        // 0x2c6360: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c635c) {
            ctx->pc = 0x2C6368u;
            goto label_2c6368;
        }
    }
    ctx->pc = 0x2C6364u;
    // 0x2c6364: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2c6364u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c6368:
    // 0x2c6368: 0xf1100  sll         $v0, $t7, 4
    ctx->pc = 0x2c6368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x2c636c: 0x27ab0020  addiu       $t3, $sp, 0x20
    ctx->pc = 0x2c636cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c6370: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x2c6370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2c6374: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2c6374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6378: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x2c6378u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c637c: 0x0  nop
    ctx->pc = 0x2c637cu;
    // NOP
    // 0x2c6380: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2C6380u;
    {
        const bool branch_taken_0x2c6380 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6380) {
            ctx->pc = 0x2C6384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6380u;
            // 0x2c6384: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6388u;
            goto label_2c6388;
        }
    }
    ctx->pc = 0x2C6388u;
label_2c6388:
    // 0x2c6388: 0xf7080  sll         $t6, $t7, 2
    ctx->pc = 0x2c6388u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x2c638c: 0xf1100  sll         $v0, $t7, 4
    ctx->pc = 0x2c638cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x2c6390: 0x10e1821  addu        $v1, $t0, $t6
    ctx->pc = 0x2c6390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x2c6394: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x2c6394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2c6398: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x2c6398u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c639c: 0x3ae2021  addu        $a0, $sp, $t6
    ctx->pc = 0x2c639cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 14)));
    // 0x2c63a0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2c63a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c63a4: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x2c63a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2c63a8: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x2c63a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2c63ac: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x2c63acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2c63b0: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x2c63b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2c63b4: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x2c63b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c63b8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2c63b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c63bc: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x2c63bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2c63c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c63c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c63c4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2c63c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c63c8: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x2c63c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x2c63cc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c63ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c63d0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2c63d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2c63d4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2c63d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c63d8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c63d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c63dc: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2c63dcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2c63e0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2c63e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2c63e4: 0x0  nop
    ctx->pc = 0x2c63e4u;
    // NOP
    // 0x2c63e8: 0x0  nop
    ctx->pc = 0x2c63e8u;
    // NOP
    // 0x2c63ec: 0x46020184  c1          0x20184
    ctx->pc = 0x2c63ecu;
    ctx->f[6] = FPU_SQRT_S(ctx->f[0]);
    // 0x2c63f0: 0x46043002  mul.s       $f0, $f6, $f4
    ctx->pc = 0x2c63f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x2c63f4: 0x460b3032  c.eq.s      $f6, $f11
    ctx->pc = 0x2c63f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[6], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c63f8: 0x0  nop
    ctx->pc = 0x2c63f8u;
    // NOP
    // 0x2c63fc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2C63FCu;
    {
        const bool branch_taken_0x2c63fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C6400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C63FCu;
        // 0x2c6400: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c63fc) {
            ctx->pc = 0x2C6410u;
            goto label_2c6410;
        }
    }
    ctx->pc = 0x2C6404u;
    // 0x2c6404: 0x0  nop
    ctx->pc = 0x2c6404u;
    // NOP
    // 0x2c6408: 0x0  nop
    ctx->pc = 0x2c6408u;
    // NOP
    // 0x2c640c: 0x46062183  div.s       $f6, $f4, $f6
    ctx->pc = 0x2c640cu;
    { if (ctx->f[6] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[4], ctx->f[6]); }
label_2c6410:
    // 0x2c6410: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x2c6410u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2c6414: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2c6414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c6418: 0xe53818  mult        $a3, $a3, $a1
    ctx->pc = 0x2c6418u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2c641c: 0x1054018  mult        $t0, $t0, $a1
    ctx->pc = 0x2c641cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2c6420: 0x3a64821  addu        $t1, $sp, $a2
    ctx->pc = 0x2c6420u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
    // 0x2c6424: 0x3a45021  addu        $t2, $sp, $a0
    ctx->pc = 0x2c6424u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x2c6428: 0x1e52818  mult        $a1, $t7, $a1
    ctx->pc = 0x2c6428u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2c642c: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x2c642cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2c6430: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x2c6430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2c6434: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x2c6434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2c6438: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x2c6438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x2c643c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2c643cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6440: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x2c6440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2c6444: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2c6444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6448: 0x1c73821  addu        $a3, $t6, $a3
    ctx->pc = 0x2c6448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
    // 0x2c644c: 0x1663021  addu        $a2, $t3, $a2
    ctx->pc = 0x2c644cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x2c6450: 0x1673821  addu        $a3, $t3, $a3
    ctx->pc = 0x2c6450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x2c6454: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c6454u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c6458: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2c6458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c645c: 0x1c84021  addu        $t0, $t6, $t0
    ctx->pc = 0x2c645cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x2c6460: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x2c6460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x2c6464: 0x1684021  addu        $t0, $t3, $t0
    ctx->pc = 0x2c6464u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x2c6468: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2c6468u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2c646c: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x2c646cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2c6470: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x2c6470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6474: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2c6474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6478: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c6478u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c647c: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2c647cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2c6480: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x2c6480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x2c6484: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x2c6484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6488: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2c6488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c648c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c648cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c6490: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2c6490u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2c6494: 0xe5410000  swc1        $f1, 0x0($t2)
    ctx->pc = 0x2c6494u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x2c6498: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2c6498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c649c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2c649cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c64a0: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x2c64a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c64a4: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2c64a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c64a8: 0xe5a20000  swc1        $f2, 0x0($t5)
    ctx->pc = 0x2c64a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x2c64ac: 0xe5a0000c  swc1        $f0, 0xC($t5)
    ctx->pc = 0x2c64acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 12), bits); }
    // 0x2c64b0: 0xe5a10004  swc1        $f1, 0x4($t5)
    ctx->pc = 0x2c64b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
    // 0x2c64b4: 0xe5a30008  swc1        $f3, 0x8($t5)
    ctx->pc = 0x2c64b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
label_2c64b8:
    // 0x2c64b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C64B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C64BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C64B8u;
        // 0x2c64bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C64B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C64C0u;
}
