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

// Function: sub_00341640
// Address: 0x341640 - 0x341808
void sub_00341640_0x341640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341640_0x341640");
#endif

    switch (ctx->pc) {
        case 0x341658u: goto label_341658;
        case 0x341660u: goto label_341660;
        case 0x341678u: goto label_341678;
        case 0x34169cu: goto label_34169c;
        case 0x341788u: goto label_341788;
        case 0x3417c0u: goto label_3417c0;
        default: break;
    }

    ctx->pc = 0x341640u;

    // 0x341640: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x341640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x341644: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x341644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x341648: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x341648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x34164c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34164cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x341650: 0xc0d0580  jal         func_341600
    ctx->pc = 0x341650u;
    SET_GPR_U32(ctx, 31, 0x341658u);
    ctx->pc = 0x341600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341600u, 0x341650u, 0x341658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341658u;
label_341658:
    // 0x341658: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x341658u;
    SET_GPR_U32(ctx, 31, 0x341660u);
    ctx->pc = 0x34165Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341658u;
    // 0x34165c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x341658u, 0x341660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341660u;
label_341660:
    // 0x341660: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x341660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x341664: 0x24443510  addiu       $a0, $v0, 0x3510
    ctx->pc = 0x341664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13584));
    // 0x341668: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x341668u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4A3514u));
    // 0x34166c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x34166cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4A351Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A351Cu, _value); } while (0);
    // 0x341670: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x341670u;
    {
        const bool branch_taken_0x341670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341670u;
        // 0x341674: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341670) {
            ctx->pc = 0x3417D8u;
            goto label_3417d8;
        }
    }
    ctx->pc = 0x341678u;
label_341678:
    // 0x341678: 0x30420401  andi        $v0, $v0, 0x401
    ctx->pc = 0x341678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1025);
    // 0x34167c: 0x38420401  xori        $v0, $v0, 0x401
    ctx->pc = 0x34167cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1025);
    // 0x341680: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x341680u;
    {
        const bool branch_taken_0x341680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x341684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341680u;
        // 0x341684: 0x26233510  addiu       $v1, $s1, 0x3510 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 13584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341680) {
            ctx->pc = 0x3417C4u;
            goto label_3417c4;
        }
    }
    ctx->pc = 0x341688u;
    // 0x341688: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x341688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x34168c: 0x5040004e  beql        $v0, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x34168Cu;
    {
        const bool branch_taken_0x34168c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34168c) {
            ctx->pc = 0x341690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34168Cu;
            // 0x341690: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3417C8u;
            goto label_3417c8;
        }
    }
    ctx->pc = 0x341694u;
    // 0x341694: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x341694u;
    SET_GPR_U32(ctx, 31, 0x34169Cu);
    ctx->pc = 0x341698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341694u;
    // 0x341698: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x341694u, 0x34169Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34169Cu;
label_34169c:
    // 0x34169c: 0x260202b0  addiu       $v0, $s0, 0x2B0
    ctx->pc = 0x34169cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    // 0x3416a0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3416a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3416a4: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x3416a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3416a8: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x3416a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x3416ac: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3416ACu;
    {
        const bool branch_taken_0x3416ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3416B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3416ACu;
        // 0x3416b0: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3416ac) {
            ctx->pc = 0x3416B8u;
            goto label_3416b8;
        }
    }
    ctx->pc = 0x3416B4u;
    // 0x3416b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3416b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3416b8:
    // 0x3416b8: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x3416b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3416bc: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x3416bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3416c0: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x3416c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3416c4: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x3416c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3416c8: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x3416c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3416cc: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x3416ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3416d0: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x3416d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3416d4: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x3416d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3416d8: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x3416d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x3416dc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3416dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3416e0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x3416e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3416e4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x3416e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3416e8: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x3416e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3416ec: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3416ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3416f0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3416f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3416f4: 0x8e0202a0  lw          $v0, 0x2A0($s0)
    ctx->pc = 0x3416f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 672)));
    // 0x3416f8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3416f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3416fc: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3416fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x341700: 0x44041800  mfc1        $a0, $f3
    ctx->pc = 0x341700u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x341704: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x341704u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x341708: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x341708u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x34170c: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34170cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x341710: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x341710u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x341714: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x341714u;
    {
        const bool branch_taken_0x341714 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x341718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341714u;
        // 0x341718: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341714) {
            ctx->pc = 0x341730u;
            goto label_341730;
        }
    }
    ctx->pc = 0x34171Cu;
    // 0x34171c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x34171cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x341720: 0x0  nop
    ctx->pc = 0x341720u;
    // NOP
    // 0x341724: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x341724u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x341728: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x341728u;
    {
        const bool branch_taken_0x341728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341728u;
        // 0x34172c: 0xc610029c  lwc1        $f16, 0x29C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x341728) {
            ctx->pc = 0x34174Cu;
            goto label_34174c;
        }
    }
    ctx->pc = 0x341730u;
label_341730:
    // 0x341730: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x341730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x341734: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x341734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x341738: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x341738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x34173c: 0x0  nop
    ctx->pc = 0x34173cu;
    // NOP
    // 0x341740: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x341740u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x341744: 0x460e7380  add.s       $f14, $f14, $f14
    ctx->pc = 0x341744u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
    // 0x341748: 0xc610029c  lwc1        $f16, 0x29C($s0)
    ctx->pc = 0x341748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_34174c:
    // 0x34174c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x34174cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x341750: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x341750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x341754: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x341754u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x341758: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x341758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x34175c: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x34175cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x341760: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x341760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341764: 0x460f83c2  mul.s       $f15, $f16, $f15
    ctx->pc = 0x341764u;
    ctx->f[15] = FPU_MUL_S(ctx->f[16], ctx->f[15]);
    // 0x341768: 0x8c47f3b0  lw          $a3, -0xC50($v0)
    ctx->pc = 0x341768u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x4BF3B0u));
    // 0x34176c: 0x46008402  mul.s       $f16, $f16, $f0
    ctx->pc = 0x34176cu;
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[0]);
    // 0x341770: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x341770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x341774: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x341774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x341778: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x341778u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34177c: 0x46007c46  mov.s       $f17, $f15
    ctx->pc = 0x34177cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[15]);
    // 0x341780: 0xc0d0610  jal         func_341840
    ctx->pc = 0x341780u;
    SET_GPR_U32(ctx, 31, 0x341788u);
    ctx->pc = 0x341784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341780u;
    // 0x341784: 0x46008486  mov.s       $f18, $f16 (Delay Slot)
    ctx->f[18] = FPU_MOV_S(ctx->f[16]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x341840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341840u, 0x341780u, 0x341788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341788u;
label_341788:
    // 0x341788: 0x92030298  lbu         $v1, 0x298($s0)
    ctx->pc = 0x341788u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 664)));
    // 0x34178c: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x34178cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x341790: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x341790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x341794: 0x92050299  lbu         $a1, 0x299($s0)
    ctx->pc = 0x341794u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 665)));
    // 0x341798: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x341798u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x34179c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34179cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3417a0: 0x34c20040  ori         $v0, $a2, 0x40
    ctx->pc = 0x3417a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x3417a4: 0x9203029a  lbu         $v1, 0x29A($s0)
    ctx->pc = 0x3417a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 666)));
    // 0x3417a8: 0x45300b  movn        $a2, $v0, $a1
    ctx->pc = 0x3417a8u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x3417ac: 0x948700d8  lhu         $a3, 0xD8($a0)
    ctx->pc = 0x3417acu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x3417b0: 0x34c20080  ori         $v0, $a2, 0x80
    ctx->pc = 0x3417b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x3417b4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3417b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3417b8: 0xc0d063e  jal         func_3418F8
    ctx->pc = 0x3417B8u;
    SET_GPR_U32(ctx, 31, 0x3417C0u);
    ctx->pc = 0x3417BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3417B8u;
    // 0x3417bc: 0x43300b  movn        $a2, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3418F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3418F8u, 0x3417B8u, 0x3417C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3417C0u;
label_3417c0:
    // 0x3417c0: 0x26233510  addiu       $v1, $s1, 0x3510
    ctx->pc = 0x3417c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 13584));
label_3417c4:
    // 0x3417c4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3417c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3417c8:
    // 0x3417c8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3417C8u;
    {
        const bool branch_taken_0x3417c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3417c8) {
            ctx->pc = 0x3417CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3417C8u;
            // 0x3417cc: 0x26223510  addiu       $v0, $s1, 0x3510 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 13584));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3417DCu;
            goto label_3417dc;
        }
    }
    ctx->pc = 0x3417D0u;
    // 0x3417d0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3417d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3417d4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x3417d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_3417d8:
    // 0x3417d8: 0x26223510  addiu       $v0, $s1, 0x3510
    ctx->pc = 0x3417d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 13584));
label_3417dc:
    // 0x3417dc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3417dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3417e0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3417E0u;
    {
        const bool branch_taken_0x3417e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3417E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3417E0u;
        // 0x3417e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3417e0) {
            ctx->pc = 0x3417ECu;
            goto label_3417ec;
        }
    }
    ctx->pc = 0x3417E8u;
    // 0x3417e8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3417e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3417ec:
    // 0x3417ec: 0x5600ffa2  bnel        $s0, $zero, . + 4 + (-0x5E << 2)
    ctx->pc = 0x3417ECu;
    {
        const bool branch_taken_0x3417ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3417ec) {
            ctx->pc = 0x3417F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3417ECu;
            // 0x3417f0: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341678;
        }
    }
    ctx->pc = 0x3417F4u;
    // 0x3417f4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3417f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3417f8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x3417f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3417fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3417fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x341800: 0x3e00008  jr          $ra
    ctx->pc = 0x341800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341800u;
        // 0x341804: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341808u;
}
