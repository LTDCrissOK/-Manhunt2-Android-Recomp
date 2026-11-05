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

// Function: sub_0034B190
// Address: 0x34b190 - 0x34b5a0
void sub_0034B190_0x34b190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034B190_0x34b190");
#endif

    switch (ctx->pc) {
        case 0x34b1ccu: goto label_34b1cc;
        case 0x34b22cu: goto label_34b22c;
        case 0x34b2b8u: goto label_34b2b8;
        case 0x34b2c0u: goto label_34b2c0;
        case 0x34b2e8u: goto label_34b2e8;
        case 0x34b418u: goto label_34b418;
        case 0x34b420u: goto label_34b420;
        case 0x34b4bcu: goto label_34b4bc;
        case 0x34b51cu: goto label_34b51c;
        case 0x34b56cu: goto label_34b56c;
        default: break;
    }

    ctx->pc = 0x34b190u;

    // 0x34b190: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x34b190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x34b194: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x34b194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x34b198: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x34b198u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x34b19c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x34b19cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34b1a0: 0xffb00130  sd          $s0, 0x130($sp)
    ctx->pc = 0x34b1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 16));
    // 0x34b1a4: 0xffb10138  sd          $s1, 0x138($sp)
    ctx->pc = 0x34b1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 17));
    // 0x34b1a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x34b1a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b1ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34b1acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b1b0: 0xffb20140  sd          $s2, 0x140($sp)
    ctx->pc = 0x34b1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 18));
    // 0x34b1b4: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x34b1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x34b1b8: 0x30d200ff  andi        $s2, $a2, 0xFF
    ctx->pc = 0x34b1b8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x34b1bc: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x34b1bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x34b1c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34b1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b1c4: 0xc0b121c  jal         func_2C4870
    ctx->pc = 0x34B1C4u;
    SET_GPR_U32(ctx, 31, 0x34B1CCu);
    ctx->pc = 0x34B1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B1C4u;
    // 0x34b1c8: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4870u, 0x34B1C4u, 0x34B1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B1CCu;
label_34b1cc:
    // 0x34b1cc: 0x144000ed  bnez        $v0, . + 4 + (0xED << 2)
    ctx->pc = 0x34B1CCu;
    {
        const bool branch_taken_0x34b1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34B1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B1CCu;
        // 0x34b1d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b1cc) {
            ctx->pc = 0x34B584u;
            goto label_34b584;
        }
    }
    ctx->pc = 0x34B1D4u;
    // 0x34b1d4: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x34b1d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34b1d8: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x34b1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34b1dc: 0x6a220037  ldl         $v0, 0x37($s1)
    ctx->pc = 0x34b1dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x34b1e0: 0x6e220030  ldr         $v0, 0x30($s1)
    ctx->pc = 0x34b1e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x34b1e4: 0x6a23003f  ldl         $v1, 0x3F($s1)
    ctx->pc = 0x34b1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x34b1e8: 0x6e230038  ldr         $v1, 0x38($s1)
    ctx->pc = 0x34b1e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x34b1ec: 0xb2220047  sdl         $v0, 0x47($s1)
    ctx->pc = 0x34b1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34b1f0: 0xb6220040  sdr         $v0, 0x40($s1)
    ctx->pc = 0x34b1f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34b1f4: 0xb223004f  sdl         $v1, 0x4F($s1)
    ctx->pc = 0x34b1f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34b1f8: 0xb6230048  sdr         $v1, 0x48($s1)
    ctx->pc = 0x34b1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34b1fc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x34b1fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34b200: 0xfa210020  sqc2        $vf1, 0x20($s1)
    ctx->pc = 0x34b200u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34b204: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x34b204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b208: 0x26240024  addiu       $a0, $s1, 0x24
    ctx->pc = 0x34b208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x34b20c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34b20cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34b210: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x34b210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x34b214: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x34b214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x34b218: 0xc62c0020  lwc1        $f12, 0x20($s1)
    ctx->pc = 0x34b218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34b21c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x34b21cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x34b220: 0xc62d0028  lwc1        $f13, 0x28($s1)
    ctx->pc = 0x34b220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x34b224: 0xc0d0060  jal         func_340180
    ctx->pc = 0x34B224u;
    SET_GPR_U32(ctx, 31, 0x34B22Cu);
    ctx->pc = 0x34B228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B224u;
    // 0x34b228: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x340180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340180u, 0x34B224u, 0x34B22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B22Cu;
label_34b22c:
    // 0x34b22c: 0x104000d5  beqz        $v0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x34B22Cu;
    {
        const bool branch_taken_0x34b22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B22Cu;
        // 0x34b230: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b22c) {
            ctx->pc = 0x34B584u;
            goto label_34b584;
        }
    }
    ctx->pc = 0x34B234u;
    // 0x34b234: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x34b234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b238: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x34b238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b23c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x34b23cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34b240: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x34b240u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x34b244: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x34b244u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b248: 0x0  nop
    ctx->pc = 0x34b248u;
    // NOP
    // 0x34b24c: 0x450000cc  bc1f        . + 4 + (0xCC << 2)
    ctx->pc = 0x34B24Cu;
    {
        const bool branch_taken_0x34b24c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B24Cu;
        // 0x34b250: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b24c) {
            ctx->pc = 0x34B580u;
            goto label_34b580;
        }
    }
    ctx->pc = 0x34B254u;
    // 0x34b254: 0x12420016  beq         $s2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x34B254u;
    {
        const bool branch_taken_0x34b254 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x34b254) {
            ctx->pc = 0x34B2B0u;
            goto label_34b2b0;
        }
    }
    ctx->pc = 0x34B25Cu;
    // 0x34b25c: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x34b25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b260: 0xc6210054  lwc1        $f1, 0x54($s1)
    ctx->pc = 0x34b260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b264: 0xc6230058  lwc1        $f3, 0x58($s1)
    ctx->pc = 0x34b264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34b268: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34b268u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34b26c: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x34b26cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x34b270: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x34b270u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x34b274: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34b274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34b278: 0x460300c0  add.s       $f3, $f0, $f3
    ctx->pc = 0x34b278u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x34b27c: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x34b27cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b280: 0x0  nop
    ctx->pc = 0x34b280u;
    // NOP
    // 0x34b284: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x34B284u;
    {
        const bool branch_taken_0x34b284 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b284) {
            ctx->pc = 0x34B2B0u;
            goto label_34b2b0;
        }
    }
    ctx->pc = 0x34B28Cu;
    // 0x34b28c: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x34b28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b290: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x34b290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b294: 0xc6220038  lwc1        $f2, 0x38($s1)
    ctx->pc = 0x34b294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34b298: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34b298u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34b29c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x34b29cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x34b2a0: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x34b2a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b2a4: 0x0  nop
    ctx->pc = 0x34b2a4u;
    // NOP
    // 0x34b2a8: 0x450000b6  bc1f        . + 4 + (0xB6 << 2)
    ctx->pc = 0x34B2A8u;
    {
        const bool branch_taken_0x34b2a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B2A8u;
        // 0x34b2ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b2a8) {
            ctx->pc = 0x34B584u;
            goto label_34b584;
        }
    }
    ctx->pc = 0x34B2B0u;
label_34b2b0:
    // 0x34b2b0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34B2B0u;
    SET_GPR_U32(ctx, 31, 0x34B2B8u);
    ctx->pc = 0x34B2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B2B0u;
    // 0x34b2b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34B2B0u, 0x34B2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B2B8u;
label_34b2b8:
    // 0x34b2b8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34B2B8u;
    SET_GPR_U32(ctx, 31, 0x34B2C0u);
    ctx->pc = 0x34B2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B2B8u;
    // 0x34b2bc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34B2B8u, 0x34B2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B2C0u;
label_34b2c0:
    // 0x34b2c0: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x34b2c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34b2c4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x34b2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34b2c8: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x34b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x34b2cc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x34b2ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34b2d0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x34b2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34b2d4: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x34b2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x34b2d8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x34b2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x34b2dc: 0x2484be30  addiu       $a0, $a0, -0x41D0
    ctx->pc = 0x34b2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950448));
    // 0x34b2e0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x34B2E0u;
    SET_GPR_U32(ctx, 31, 0x34B2E8u);
    ctx->pc = 0x34B2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B2E0u;
    // 0x34b2e4: 0x24a565a0  addiu       $a1, $a1, 0x65A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x34B2E0u, 0x34B2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B2E8u;
label_34b2e8:
    // 0x34b2e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34b2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34b2ec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34B2ECu;
    {
        const bool branch_taken_0x34b2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B2ECu;
        // 0x34b2f0: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b2ec) {
            ctx->pc = 0x34B314u;
            goto label_34b314;
        }
    }
    ctx->pc = 0x34B2F4u;
    // 0x34b2f4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x34b2f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x34b2f8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x34b2f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x34b2fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34b2fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34b300: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x34b300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b304: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x34b304u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x34b308: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34b308u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34b30c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x34b30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x34b310: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x34b310u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_34b314:
    // 0x34b314: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x34b314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34b318: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x34b318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34b31c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x34b31cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34b320: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x34b320u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b324: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34b324u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34b328: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x34b328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34b32c: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x34b32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34b330: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x34b330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34b334: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x34b334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b338: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x34b338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b33c: 0xc7a5003c  lwc1        $f5, 0x3C($sp)
    ctx->pc = 0x34b33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x34b340: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x34b340u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x34b344: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x34b344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x34b348: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x34b348u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x34b34c: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x34b34cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x34b350: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x34b350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34b354: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x34b354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34b358: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x34b358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34b35c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x34b35cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x34b360: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x34b360u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x34b364: 0x4604219c  madd.s      $f6, $f4, $f4
    ctx->pc = 0x34b364u;
    ctx->f[6] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x34b368: 0x46060184  c1          0x60184
    ctx->pc = 0x34b368u;
    ctx->f[6] = FPU_SQRT_S(ctx->f[0]);
    // 0x34b36c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x34b36cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34b370: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x34b370u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b374: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34b374u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34b378: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x34b378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34b37c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x34b37cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x34b380: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x34b380u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x34b384: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34b384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b388: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x34b388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34b38c: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x34b38cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x34b390: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x34b390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34b394: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x34b394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b398: 0xc7a40058  lwc1        $f4, 0x58($sp)
    ctx->pc = 0x34b398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34b39c: 0x0  nop
    ctx->pc = 0x34b39cu;
    // NOP
    // 0x34b3a0: 0x0  nop
    ctx->pc = 0x34b3a0u;
    // NOP
    // 0x34b3a4: 0x46060003  div.s       $f0, $f0, $f6
    ctx->pc = 0x34b3a4u;
    { if (ctx->f[6] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[6]); }
    // 0x34b3a8: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x34b3a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x34b3ac: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x34b3acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x34b3b0: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x34b3b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x34b3b4: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x34b3b4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x34b3b8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x34b3b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34b3bc: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x34b3bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x34b3c0: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x34b3c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34b3c4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x34b3c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x34b3c8: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x34b3c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x34b3cc: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x34b3ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x34b3d0: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x34b3d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x34b3d4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x34b3d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x34b3d8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x34b3d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b3dc: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x34b3dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34b3e0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34b3e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34b3e4: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x34b3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34b3e8: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x34b3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b3ec: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x34b3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b3f0: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x34b3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34b3f4: 0xc7a3005c  lwc1        $f3, 0x5C($sp)
    ctx->pc = 0x34b3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34b3f8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x34b3f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x34b3fc: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x34b3fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x34b400: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x34b400u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x34b404: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x34b404u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x34b408: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x34b408u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34b40c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x34b40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34b410: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34B410u;
    SET_GPR_U32(ctx, 31, 0x34B418u);
    ctx->pc = 0x34B414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B410u;
    // 0x34b414: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34B410u, 0x34B418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B418u;
label_34b418:
    // 0x34b418: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34B418u;
    SET_GPR_U32(ctx, 31, 0x34B420u);
    ctx->pc = 0x34B41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B418u;
    // 0x34b41c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34B418u, 0x34B420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B420u;
label_34b420:
    // 0x34b420: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x34b420u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b424: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x34b424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x34b428: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x34b428u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34b42c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x34b42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x34b430: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x34b430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x34b434: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x34b434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34b438: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x34b438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x34b43c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x34b43cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34b440: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x34b440u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34b444: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34b444u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34b448: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x34b448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34b44c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x34b44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34b450: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x34b450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34b454: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x34b454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34b458: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x34b458u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x34b45c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x34b45cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x34b460: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x34b460u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x34b464: 0x0  nop
    ctx->pc = 0x34b464u;
    // NOP
    // 0x34b468: 0x0  nop
    ctx->pc = 0x34b468u;
    // NOP
    // 0x34b46c: 0x46000044  c1          0x44
    ctx->pc = 0x34b46cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x34b470: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x34b470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x34b474: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x34b474u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x34b478: 0x0  nop
    ctx->pc = 0x34b478u;
    // NOP
    // 0x34b47c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x34b47cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b480: 0x0  nop
    ctx->pc = 0x34b480u;
    // NOP
    // 0x34b484: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x34B484u;
    {
        const bool branch_taken_0x34b484 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B484u;
        // 0x34b488: 0xe7a100b0  swc1        $f1, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b484) {
            ctx->pc = 0x34B4B0u;
            goto label_34b4b0;
        }
    }
    ctx->pc = 0x34B48Cu;
    // 0x34b48c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34b48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34b490: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34b490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b494: 0x0  nop
    ctx->pc = 0x34b494u;
    // NOP
    // 0x34b498: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x34b498u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x34b49c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x34b49cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x34b4a0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x34b4a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34b4a4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34b4a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34b4a8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34b4a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34b4ac: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x34b4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_34b4b0:
    // 0x34b4b0: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x34b4b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x34b4b4: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x34B4B4u;
    SET_GPR_U32(ctx, 31, 0x34B4BCu);
    ctx->pc = 0x34B4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B4B4u;
    // 0x34b4b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x34B4B4u, 0x34B4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B4BCu;
label_34b4bc:
    // 0x34b4bc: 0x7fa000c0  sq          $zero, 0xC0($sp)
    ctx->pc = 0x34b4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 0));
    // 0x34b4c0: 0x7fa000d0  sq          $zero, 0xD0($sp)
    ctx->pc = 0x34b4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 0));
    // 0x34b4c4: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x34b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x34b4c8: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x34b4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x34b4cc: 0xc44065a8  lwc1        $f0, 0x65A8($v0)
    ctx->pc = 0x34b4ccu;
    { uint32_t bits = FAST_READ32(0x4765A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b4d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x34b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34b4d4: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x34b4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
    // 0x34b4d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34b4d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b4dc: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x34b4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x34b4e0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x34b4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x34b4e4: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x34b4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    // 0x34b4e8: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x34b4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x34b4ec: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x34b4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
    // 0x34b4f0: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x34b4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x34b4f4: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x34b4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
    // 0x34b4f8: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x34b4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
    // 0x34b4fc: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x34b4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x34b500: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x34b500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x34b504: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34b504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b508: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x34b508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x34b50c: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x34b50cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x34b510: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x34b510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x34b514: 0xc077824  jal         func_1DE090
    ctx->pc = 0x34B514u;
    SET_GPR_U32(ctx, 31, 0x34B51Cu);
    ctx->pc = 0x34B518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B514u;
    // 0x34b518: 0xafa00108  sw          $zero, 0x108($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x34B514u, 0x34B51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B51Cu;
label_34b51c:
    // 0x34b51c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x34B51Cu;
    {
        const bool branch_taken_0x34b51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B51Cu;
        // 0x34b520: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b51c) {
            ctx->pc = 0x34B584u;
            goto label_34b584;
        }
    }
    ctx->pc = 0x34B524u;
    // 0x34b524: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x34b524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b528: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x34b528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x34b52c: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x34b52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b530: 0xa2320074  sb          $s2, 0x74($s1)
    ctx->pc = 0x34b530u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 116), (uint8_t)GPR_U32(ctx, 18));
    // 0x34b534: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x34b534u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34b538: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x34b538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34b53c: 0x8c622b00  lw          $v0, 0x2B00($v1)
    ctx->pc = 0x34b53cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x34b540: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x34b540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b544: 0x46146032  c.eq.s      $f12, $f20
    ctx->pc = 0x34b544u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b548: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x34b548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
    // 0x34b54c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x34B54Cu;
    {
        const bool branch_taken_0x34b54c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B54Cu;
        // 0x34b550: 0x46001341  sub.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b54c) {
            ctx->pc = 0x34B564u;
            goto label_34b564;
        }
    }
    ctx->pc = 0x34B554u;
    // 0x34b554: 0x46146832  c.eq.s      $f13, $f20
    ctx->pc = 0x34b554u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b558: 0x0  nop
    ctx->pc = 0x34b558u;
    // NOP
    // 0x34b55c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x34B55Cu;
    {
        const bool branch_taken_0x34b55c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B55Cu;
        // 0x34b560: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b55c) {
            ctx->pc = 0x34B574u;
            goto label_34b574;
        }
    }
    ctx->pc = 0x34B564u;
label_34b564:
    // 0x34b564: 0xc0e404c  jal         func_390130
    ctx->pc = 0x34B564u;
    SET_GPR_U32(ctx, 31, 0x34B56Cu);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x34B564u, 0x34B56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B56Cu;
label_34b56c:
    // 0x34b56c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x34B56Cu;
    {
        const bool branch_taken_0x34b56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B56Cu;
        // 0x34b570: 0xe6200064  swc1        $f0, 0x64($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b56c) {
            ctx->pc = 0x34B578u;
            goto label_34b578;
        }
    }
    ctx->pc = 0x34B574u;
label_34b574:
    // 0x34b574: 0xe6200064  swc1        $f0, 0x64($s1)
    ctx->pc = 0x34b574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
label_34b578:
    // 0x34b578: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x34B578u;
    {
        const bool branch_taken_0x34b578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B578u;
        // 0x34b57c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b578) {
            ctx->pc = 0x34B584u;
            goto label_34b584;
        }
    }
    ctx->pc = 0x34B580u;
label_34b580:
    // 0x34b580: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34b580u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34b584:
    // 0x34b584: 0xdfb00130  ld          $s0, 0x130($sp)
    ctx->pc = 0x34b584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x34b588: 0xdfb10138  ld          $s1, 0x138($sp)
    ctx->pc = 0x34b588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x34b58c: 0xdfb20140  ld          $s2, 0x140($sp)
    ctx->pc = 0x34b58cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x34b590: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x34b590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x34b594: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x34b594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34b598: 0x3e00008  jr          $ra
    ctx->pc = 0x34B598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B598u;
        // 0x34b59c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B5A0u;
}
