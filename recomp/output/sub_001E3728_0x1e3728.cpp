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

// Function: sub_001E3728
// Address: 0x1e3728 - 0x1e3a28
void sub_001E3728_0x1e3728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3728_0x1e3728");
#endif

    ctx->pc = 0x1e3728u;

    // 0x1e3728: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1e3728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e372c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1e372cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e3730: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1e3730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e3734: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3734u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3738: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1e3738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1e373c: 0x90a80010  lbu         $t0, 0x10($a1)
    ctx->pc = 0x1e373cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1e3740: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1e3740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1e3744: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x1e3744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x1e3748: 0x2d060006  sltiu       $a2, $t0, 0x6
    ctx->pc = 0x1e3748u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1e374c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1e374cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1e3750: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1e3750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1e3754: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1e3754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1e3758: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1e3758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e375c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1e375cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e3760: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1e3760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e3764: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1e3764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1e3768: 0x10c000a4  beqz        $a2, . + 4 + (0xA4 << 2)
    ctx->pc = 0x1E3768u;
    {
        const bool branch_taken_0x1e3768 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3768u;
        // 0x1e376c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3768) {
            ctx->pc = 0x1E39FCu;
            goto label_1e39fc;
        }
    }
    ctx->pc = 0x1E3770u;
    // 0x1e3770: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1e3770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1e3774: 0x2442d8e0  addiu       $v0, $v0, -0x2720
    ctx->pc = 0x1e3774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957280));
    // 0x1e3778: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e3778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e377c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e377cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e3780: 0x800008  jr          $a0
    ctx->pc = 0x1E3780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E3788u: goto label_1e3788;
            case 0x1E3860u: goto label_1e3860;
            case 0x1E3918u: goto label_1e3918;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3780u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1E3788u;
label_1e3788:
    // 0x1e3788: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1e3788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e378c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1e378cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e3790: 0xc4850000  lwc1        $f5, 0x0($a0)
    ctx->pc = 0x1e3790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e3794: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x1e3794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e3798: 0xc4e70008  lwc1        $f7, 0x8($a3)
    ctx->pc = 0x1e3798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1e379c: 0xc4e60000  lwc1        $f6, 0x0($a3)
    ctx->pc = 0x1e379cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1e37a0: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x1e37a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e37a4: 0x460438c1  sub.s       $f3, $f7, $f4
    ctx->pc = 0x1e37a4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
    // 0x1e37a8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1e37a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e37ac: 0x46053001  sub.s       $f0, $f6, $f5
    ctx->pc = 0x1e37acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x1e37b0: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1e37b0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x1e37b4: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x1e37b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x1e37b8: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x1e37b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1e37bc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1e37bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e37c0: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1e37c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1e37c4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1e37c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1e37c8: 0x46080036  c.le.s      $f0, $f8
    ctx->pc = 0x1e37c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e37cc: 0x0  nop
    ctx->pc = 0x1e37ccu;
    // NOP
    // 0x1e37d0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E37D0u;
    {
        const bool branch_taken_0x1e37d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E37D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37D0u;
        // 0x1e37d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e37d0) {
            ctx->pc = 0x1E37DCu;
            goto label_1e37dc;
        }
    }
    ctx->pc = 0x1E37D8u;
    // 0x1e37d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e37d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e37dc:
    // 0x1e37dc: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x1e37dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e37e0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e37e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e37e4: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x1e37e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e37e8: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x1e37e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e37ec: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1e37ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e37f0: 0x460438c1  sub.s       $f3, $f7, $f4
    ctx->pc = 0x1e37f0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
    // 0x1e37f4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1e37f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e37f8: 0x46053001  sub.s       $f0, $f6, $f5
    ctx->pc = 0x1e37f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x1e37fc: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1e37fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x1e3800: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x1e3800u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x1e3804: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1e3804u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e3808: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1e3808u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1e380c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1e380cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1e3810: 0x46080036  c.le.s      $f0, $f8
    ctx->pc = 0x1e3810u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e3814: 0x0  nop
    ctx->pc = 0x1e3814u;
    // NOP
    // 0x1e3818: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E3818u;
    {
        const bool branch_taken_0x1e3818 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3818u;
        // 0x1e381c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3818) {
            ctx->pc = 0x1E3824u;
            goto label_1e3824;
        }
    }
    ctx->pc = 0x1E3820u;
    // 0x1e3820: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e3820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3824:
    // 0x1e3824: 0xa3a50011  sb          $a1, 0x11($sp)
    ctx->pc = 0x1e3824u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 5));
    // 0x1e3828: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e3828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e382c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1e382cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3830: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1e3830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e3834: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1e3834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3838: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1e3838u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1e383c: 0x460438c1  sub.s       $f3, $f7, $f4
    ctx->pc = 0x1e383cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
    // 0x1e3840: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x1e3840u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x1e3844: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1e3844u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1e3848: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x1e3848u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1e384c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e384cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e3850: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1e3850u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1e3854: 0x46080036  c.le.s      $f0, $f8
    ctx->pc = 0x1e3854u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e3858: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1E3858u;
    {
        const bool branch_taken_0x1e3858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3858u;
        // 0x1e385c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3858) {
            ctx->pc = 0x1E39ECu;
            goto label_1e39ec;
        }
    }
    ctx->pc = 0x1E3860u;
label_1e3860:
    // 0x1e3860: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1e3860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3864: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1e3864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e3868: 0xc4850004  lwc1        $f5, 0x4($a0)
    ctx->pc = 0x1e3868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e386c: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x1e386cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e3870: 0xc4e70008  lwc1        $f7, 0x8($a3)
    ctx->pc = 0x1e3870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1e3874: 0xc4e60004  lwc1        $f6, 0x4($a3)
    ctx->pc = 0x1e3874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1e3878: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x1e3878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e387c: 0x460438c1  sub.s       $f3, $f7, $f4
    ctx->pc = 0x1e387cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
    // 0x1e3880: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1e3880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3884: 0x46053001  sub.s       $f0, $f6, $f5
    ctx->pc = 0x1e3884u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x1e3888: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1e3888u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x1e388c: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x1e388cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x1e3890: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x1e3890u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1e3894: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1e3894u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e3898: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1e3898u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1e389c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1e389cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1e38a0: 0x46004036  c.le.s      $f8, $f0
    ctx->pc = 0x1e38a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e38a4: 0x0  nop
    ctx->pc = 0x1e38a4u;
    // NOP
    // 0x1e38a8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E38A8u;
    {
        const bool branch_taken_0x1e38a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E38ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38A8u;
        // 0x1e38ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e38a8) {
            ctx->pc = 0x1E38B4u;
            goto label_1e38b4;
        }
    }
    ctx->pc = 0x1E38B0u;
    // 0x1e38b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e38b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e38b4:
    // 0x1e38b4: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x1e38b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e38b8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e38b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e38bc: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x1e38bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e38c0: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x1e38c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e38c4: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1e38c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e38c8: 0x460438c1  sub.s       $f3, $f7, $f4
    ctx->pc = 0x1e38c8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
    // 0x1e38cc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1e38ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e38d0: 0x46053001  sub.s       $f0, $f6, $f5
    ctx->pc = 0x1e38d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x1e38d4: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1e38d4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x1e38d8: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x1e38d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x1e38dc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1e38dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e38e0: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1e38e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1e38e4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1e38e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1e38e8: 0x46004036  c.le.s      $f8, $f0
    ctx->pc = 0x1e38e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e38ec: 0x0  nop
    ctx->pc = 0x1e38ecu;
    // NOP
    // 0x1e38f0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E38F0u;
    {
        const bool branch_taken_0x1e38f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E38F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38F0u;
        // 0x1e38f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e38f0) {
            ctx->pc = 0x1E38FCu;
            goto label_1e38fc;
        }
    }
    ctx->pc = 0x1E38F8u;
    // 0x1e38f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e38f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e38fc:
    // 0x1e38fc: 0xa3a50011  sb          $a1, 0x11($sp)
    ctx->pc = 0x1e38fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 5));
    // 0x1e3900: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e3900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3904: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e3904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3908: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x1e3908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e390c: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1e390cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e3910: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1E3910u;
    {
        const bool branch_taken_0x1e3910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3910u;
        // 0x1e3914: 0xc4810008  lwc1        $f1, 0x8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3910) {
            ctx->pc = 0x1E39CCu;
            goto label_1e39cc;
        }
    }
    ctx->pc = 0x1E3918u;
label_1e3918:
    // 0x1e3918: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1e3918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e391c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1e391cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e3920: 0xc4850000  lwc1        $f5, 0x0($a0)
    ctx->pc = 0x1e3920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e3924: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x1e3924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e3928: 0xc4e70004  lwc1        $f7, 0x4($a3)
    ctx->pc = 0x1e3928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1e392c: 0xc4e60000  lwc1        $f6, 0x0($a3)
    ctx->pc = 0x1e392cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1e3930: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1e3930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3934: 0x460438c1  sub.s       $f3, $f7, $f4
    ctx->pc = 0x1e3934u;
    ctx->f[3] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
    // 0x1e3938: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1e3938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e393c: 0x46053001  sub.s       $f0, $f6, $f5
    ctx->pc = 0x1e393cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x1e3940: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1e3940u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x1e3944: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x1e3944u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x1e3948: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x1e3948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1e394c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1e394cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e3950: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1e3950u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1e3954: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1e3954u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1e3958: 0x46004036  c.le.s      $f8, $f0
    ctx->pc = 0x1e3958u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e395c: 0x0  nop
    ctx->pc = 0x1e395cu;
    // NOP
    // 0x1e3960: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E3960u;
    {
        const bool branch_taken_0x1e3960 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E3964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3960u;
        // 0x1e3964: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3960) {
            ctx->pc = 0x1E396Cu;
            goto label_1e396c;
        }
    }
    ctx->pc = 0x1E3968u;
    // 0x1e3968: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e3968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e396c:
    // 0x1e396c: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x1e396cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e3970: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e3970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e3974: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x1e3974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e3978: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x1e3978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e397c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1e397cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3980: 0x460438c1  sub.s       $f3, $f7, $f4
    ctx->pc = 0x1e3980u;
    ctx->f[3] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
    // 0x1e3984: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1e3984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3988: 0x46053001  sub.s       $f0, $f6, $f5
    ctx->pc = 0x1e3988u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x1e398c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1e398cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x1e3990: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x1e3990u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x1e3994: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1e3994u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e3998: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1e3998u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1e399c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1e399cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1e39a0: 0x46004036  c.le.s      $f8, $f0
    ctx->pc = 0x1e39a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e39a4: 0x0  nop
    ctx->pc = 0x1e39a4u;
    // NOP
    // 0x1e39a8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E39A8u;
    {
        const bool branch_taken_0x1e39a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E39ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39A8u;
        // 0x1e39ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e39a8) {
            ctx->pc = 0x1E39B4u;
            goto label_1e39b4;
        }
    }
    ctx->pc = 0x1E39B0u;
    // 0x1e39b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e39b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e39b4:
    // 0x1e39b4: 0xa3a50011  sb          $a1, 0x11($sp)
    ctx->pc = 0x1e39b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 5));
    // 0x1e39b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e39b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e39bc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e39bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e39c0: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1e39c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e39c4: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x1e39c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e39c8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1e39c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e39cc:
    // 0x1e39cc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1e39ccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1e39d0: 0x460438c1  sub.s       $f3, $f7, $f4
    ctx->pc = 0x1e39d0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
    // 0x1e39d4: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x1e39d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x1e39d8: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1e39d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1e39dc: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x1e39dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1e39e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e39e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e39e4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1e39e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1e39e8: 0x46004036  c.le.s      $f8, $f0
    ctx->pc = 0x1e39e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e39ec:
    // 0x1e39ec: 0x0  nop
    ctx->pc = 0x1e39ecu;
    // NOP
    // 0x1e39f0: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E39F0u;
    {
        const bool branch_taken_0x1e39f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e39f0) {
            ctx->pc = 0x1E39F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E39F0u;
            // 0x1e39f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E39F8u;
            goto label_1e39f8;
        }
    }
    ctx->pc = 0x1E39F8u;
label_1e39f8:
    // 0x1e39f8: 0xa3a30012  sb          $v1, 0x12($sp)
    ctx->pc = 0x1e39f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 3));
label_1e39fc:
    // 0x1e39fc: 0x93a30010  lbu         $v1, 0x10($sp)
    ctx->pc = 0x1e39fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3a00: 0x93a20011  lbu         $v0, 0x11($sp)
    ctx->pc = 0x1e3a00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x1e3a04: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E3A04u;
    {
        const bool branch_taken_0x1e3a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E3A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A04u;
        // 0x1e3a08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3a04) {
            ctx->pc = 0x1E3A1Cu;
            goto label_1e3a1c;
        }
    }
    ctx->pc = 0x1E3A0Cu;
    // 0x1e3a0c: 0x93a20012  lbu         $v0, 0x12($sp)
    ctx->pc = 0x1e3a0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x1e3a10: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1e3a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1e3a14: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e3a14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e3a18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e3a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e3a1c:
    // 0x1e3a1c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e3a1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3a20: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A20u;
        // 0x1e3a24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3A28u;
}
