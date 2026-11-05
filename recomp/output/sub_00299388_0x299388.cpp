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

// Function: sub_00299388
// Address: 0x299388 - 0x299588
void sub_00299388_0x299388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299388_0x299388");
#endif

    switch (ctx->pc) {
        case 0x2993b0u: goto label_2993b0;
        case 0x299458u: goto label_299458;
        case 0x2994d8u: goto label_2994d8;
        case 0x299520u: goto label_299520;
        case 0x299560u: goto label_299560;
        default: break;
    }

    ctx->pc = 0x299388u;

    // 0x299388: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x299388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29938c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x29938cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x299390: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x299390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299394: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x299394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x299398: 0xe7b80050  swc1        $f24, 0x50($sp)
    ctx->pc = 0x299398u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x29939c: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x29939cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2993a0: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x2993a0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2993a4: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2993a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2993a8: 0xc0a5952  jal         func_296548
    ctx->pc = 0x2993A8u;
    SET_GPR_U32(ctx, 31, 0x2993B0u);
    ctx->pc = 0x2993ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2993A8u;
    // 0x2993ac: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x296548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296548u, 0x2993A8u, 0x2993B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2993B0u;
label_2993b0:
    // 0x2993b0: 0x92020060  lbu         $v0, 0x60($s0)
    ctx->pc = 0x2993b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2993b4: 0x8a030017  lwl         $v1, 0x17($s0)
    ctx->pc = 0x2993b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x2993b8: 0x9a030014  lwr         $v1, 0x14($s0)
    ctx->pc = 0x2993b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x2993bc: 0xaba30003  swl         $v1, 0x3($sp)
    ctx->pc = 0x2993bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2993c0: 0xbba30000  swr         $v1, 0x0($sp)
    ctx->pc = 0x2993c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2993c4: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2993C4u;
    {
        const bool branch_taken_0x2993c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2993C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2993C4u;
        // 0x2993c8: 0x93a50001  lbu         $a1, 0x1($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2993c4) {
            ctx->pc = 0x29943Cu;
            goto label_29943c;
        }
    }
    ctx->pc = 0x2993CCu;
    // 0x2993cc: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x2993ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2993d0: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x2993d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x2993d4: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x2993d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2993d8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2993d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2993dc: 0x0  nop
    ctx->pc = 0x2993dcu;
    // NOP
    // 0x2993e0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2993e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2993e4: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x2993e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x2993e8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2993e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2993ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2993ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2993f0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2993f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2993f4: 0x0  nop
    ctx->pc = 0x2993f4u;
    // NOP
    // 0x2993f8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2993f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2993fc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2993fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x299400: 0x0  nop
    ctx->pc = 0x299400u;
    // NOP
    // 0x299404: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x299404u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x299408: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x299408u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x29940c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x29940cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x299410: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x299410u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x299414: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x299414u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x299418: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x299418u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x29941c: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29941cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x299420: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x299420u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x299424: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x299424u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x299428: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x299428u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29942c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x29942cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x299430: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x299430u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x299434: 0xa3a40002  sb          $a0, 0x2($sp)
    ctx->pc = 0x299434u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x299438: 0x93a50001  lbu         $a1, 0x1($sp)
    ctx->pc = 0x299438u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_29943c:
    // 0x29943c: 0x93a60002  lbu         $a2, 0x2($sp)
    ctx->pc = 0x29943cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x299440: 0x93a70003  lbu         $a3, 0x3($sp)
    ctx->pc = 0x299440u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x299444: 0x3c013b44  lui         $at, 0x3B44
    ctx->pc = 0x299444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15172 << 16));
    // 0x299448: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x299448u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
    // 0x29944c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x29944cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x299450: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x299450u;
    SET_GPR_U32(ctx, 31, 0x299458u);
    ctx->pc = 0x299454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299450u;
    // 0x299454: 0x93a40000  lbu         $a0, 0x0($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x299450u, 0x299458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299458u;
label_299458:
    // 0x299458: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x299458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x29945c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x29945cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x299460: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x299460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x299464: 0xc601002c  lwc1        $f1, 0x2C($s0)
    ctx->pc = 0x299464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299468: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x299468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x29946c: 0xc603001c  lwc1        $f3, 0x1C($s0)
    ctx->pc = 0x29946cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x299470: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x299470u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x299474: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x299474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299478: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x299478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29947c: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x29947cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x299480: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x299480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x299484: 0xc615008c  lwc1        $f21, 0x8C($s0)
    ctx->pc = 0x299484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x299488: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x299488u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29948c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x29948cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x299490: 0xc6160088  lwc1        $f22, 0x88($s0)
    ctx->pc = 0x299490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x299494: 0x46151d40  add.s       $f21, $f3, $f21
    ctx->pc = 0x299494u;
    ctx->f[21] = FPU_ADD_S(ctx->f[3], ctx->f[21]);
    // 0x299498: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x299498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x29949c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x29949cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2994a0: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x2994a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2994a4: 0xc454ac6c  lwc1        $f20, -0x5394($v0)
    ctx->pc = 0x2994a4u;
    { uint32_t bits = FAST_READ32(0x6BAC6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2994a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2994a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2994ac: 0x46161580  add.s       $f22, $f2, $f22
    ctx->pc = 0x2994acu;
    ctx->f[22] = FPU_ADD_S(ctx->f[2], ctx->f[22]);
    // 0x2994b0: 0x93a50001  lbu         $a1, 0x1($sp)
    ctx->pc = 0x2994b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x2994b4: 0x460fad40  add.s       $f21, $f21, $f15
    ctx->pc = 0x2994b4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[15]);
    // 0x2994b8: 0x93a60002  lbu         $a2, 0x2($sp)
    ctx->pc = 0x2994b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2994bc: 0x4618a502  mul.s       $f20, $f20, $f24
    ctx->pc = 0x2994bcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
    // 0x2994c0: 0x93a40000  lbu         $a0, 0x0($sp)
    ctx->pc = 0x2994c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2994c4: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2994c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2994c8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2994c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2994cc: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x2994ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2994d0: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x2994D0u;
    SET_GPR_U32(ctx, 31, 0x2994D8u);
    ctx->pc = 0x2994D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2994D0u;
    // 0x2994d4: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x2994D0u, 0x2994D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2994D8u;
label_2994d8:
    // 0x2994d8: 0x4614b580  add.s       $f22, $f22, $f20
    ctx->pc = 0x2994d8u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
    // 0x2994dc: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x2994dcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x2994e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2994e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2994e4: 0x4618ad40  add.s       $f21, $f21, $f24
    ctx->pc = 0x2994e4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[24]);
    // 0x2994e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2994e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2994ec: 0x3c013c65  lui         $at, 0x3C65
    ctx->pc = 0x2994ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15461 << 16));
    // 0x2994f0: 0x34216041  ori         $at, $at, 0x6041
    ctx->pc = 0x2994f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24641);
    // 0x2994f4: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x2994f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x2994f8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2994f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2994fc: 0x4614bdc1  sub.s       $f23, $f23, $f20
    ctx->pc = 0x2994fcu;
    ctx->f[23] = FPU_SUB_S(ctx->f[23], ctx->f[20]);
    // 0x299500: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x299500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299504: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x299504u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x299508: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x299508u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
    // 0x29950c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x29950cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x299510: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x299510u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299514: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x299514u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x299518: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x299518u;
    SET_GPR_U32(ctx, 31, 0x299520u);
    ctx->pc = 0x29951Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299518u;
    // 0x29951c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x299518u, 0x299520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299520u;
label_299520:
    // 0x299520: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x299520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299524: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x299524u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x299528: 0xc60e007c  lwc1        $f14, 0x7C($s0)
    ctx->pc = 0x299528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x29952c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x29952cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x299530: 0x93a50001  lbu         $a1, 0x1($sp)
    ctx->pc = 0x299530u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x299534: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x299534u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
    // 0x299538: 0x0  nop
    ctx->pc = 0x299538u;
    // NOP
    // 0x29953c: 0x0  nop
    ctx->pc = 0x29953cu;
    // NOP
    // 0x299540: 0x46007383  div.s       $f14, $f14, $f0
    ctx->pc = 0x299540u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = FPU_DIV_S(ctx->f[14], ctx->f[0]); }
    // 0x299544: 0x93a60002  lbu         $a2, 0x2($sp)
    ctx->pc = 0x299544u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x299548: 0x93a40000  lbu         $a0, 0x0($sp)
    ctx->pc = 0x299548u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29954c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x29954cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x299550: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x299550u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299554: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x299554u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299558: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x299558u;
    SET_GPR_U32(ctx, 31, 0x299560u);
    ctx->pc = 0x29955Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299558u;
    // 0x29955c: 0x460ebb82  mul.s       $f14, $f23, $f14 (Delay Slot)
    ctx->f[14] = FPU_MUL_S(ctx->f[23], ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x299558u, 0x299560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299560u;
label_299560:
    // 0x299560: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x299560u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299564: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x299564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x299568: 0xc7b80050  lwc1        $f24, 0x50($sp)
    ctx->pc = 0x299568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x29956c: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x29956cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x299570: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x299570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x299574: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x299574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x299578: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x299578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29957c: 0x3e00008  jr          $ra
    ctx->pc = 0x29957Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29957Cu;
        // 0x299580: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29957Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299584u;
    // 0x299584: 0x0  nop
    ctx->pc = 0x299584u;
    // NOP
    ctx->pc = 0x299588u;
}
