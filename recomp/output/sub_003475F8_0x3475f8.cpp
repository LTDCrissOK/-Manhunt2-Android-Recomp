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

// Function: sub_003475F8
// Address: 0x3475f8 - 0x347900
void sub_003475F8_0x3475f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003475F8_0x3475f8");
#endif

    switch (ctx->pc) {
        case 0x34769cu: goto label_34769c;
        case 0x3476c4u: goto label_3476c4;
        case 0x347700u: goto label_347700;
        case 0x34770cu: goto label_34770c;
        case 0x347718u: goto label_347718;
        case 0x347720u: goto label_347720;
        case 0x347738u: goto label_347738;
        case 0x347750u: goto label_347750;
        case 0x3477acu: goto label_3477ac;
        case 0x3477bcu: goto label_3477bc;
        case 0x3477ccu: goto label_3477cc;
        case 0x347888u: goto label_347888;
        case 0x347898u: goto label_347898;
        case 0x3478a4u: goto label_3478a4;
        default: break;
    }

    ctx->pc = 0x3475f8u;

    // 0x3475f8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3475f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x3475fc: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x3475fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347600: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x347600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x347604: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x347604u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347608: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x347608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x34760c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x34760cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x347610: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x347610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347614: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x347614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x347618: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x347618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34761c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x34761cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x347620: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x347620u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347624: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x347624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x347628: 0x27c40010  addiu       $a0, $fp, 0x10
    ctx->pc = 0x347628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x34762c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x34762cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x347630: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x347630u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347634: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x347634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x347638: 0x27d50040  addiu       $s5, $fp, 0x40
    ctx->pc = 0x347638u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
    // 0x34763c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x34763cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x347640: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x347640u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347644: 0xe7b800e0  swc1        $f24, 0xE0($sp)
    ctx->pc = 0x347644u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x347648: 0x27d70090  addiu       $s7, $fp, 0x90
    ctx->pc = 0x347648u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
    // 0x34764c: 0xe7b700d8  swc1        $f23, 0xD8($sp)
    ctx->pc = 0x34764cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x347650: 0x46007e06  mov.s       $f24, $f15
    ctx->pc = 0x347650u;
    ctx->f[24] = FPU_MOV_S(ctx->f[15]);
    // 0x347654: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x347654u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x347658: 0x460085c6  mov.s       $f23, $f16
    ctx->pc = 0x347658u;
    ctx->f[23] = FPU_MOV_S(ctx->f[16]);
    // 0x34765c: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x34765cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x347660: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x347660u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x347664: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x347664u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x347668: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x347668u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x34766c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x34766cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x347670: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x347670u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x347674: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x347674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x347678: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x347678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x34767c: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x34767cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347680: 0xe7c00004  swc1        $f0, 0x4($fp)
    ctx->pc = 0x347680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
    // 0x347684: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x347684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347688: 0x8fb300f0  lw          $s3, 0xF0($sp)
    ctx->pc = 0x347688u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x34768c: 0xe7c00008  swc1        $f0, 0x8($fp)
    ctx->pc = 0x34768cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
    // 0x347690: 0xc540000c  lwc1        $f0, 0xC($t2)
    ctx->pc = 0x347690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347694: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x347694u;
    SET_GPR_U32(ctx, 31, 0x34769Cu);
    ctx->pc = 0x347698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347694u;
    // 0x347698: 0xe7c0000c  swc1        $f0, 0xC($fp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x347694u, 0x34769Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34769Cu;
label_34769c:
    // 0x34769c: 0xafd1002c  sw          $s1, 0x2C($fp)
    ctx->pc = 0x34769cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 44), GPR_U32(ctx, 17));
    // 0x3476a0: 0xafc00020  sw          $zero, 0x20($fp)
    ctx->pc = 0x3476a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 0));
    // 0x3476a4: 0xafc00024  sw          $zero, 0x24($fp)
    ctx->pc = 0x3476a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 0));
    // 0x3476a8: 0xafc00028  sw          $zero, 0x28($fp)
    ctx->pc = 0x3476a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
    // 0x3476ac: 0x6a820007  ldl         $v0, 0x7($s4)
    ctx->pc = 0x3476acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3476b0: 0x6e820000  ldr         $v0, 0x0($s4)
    ctx->pc = 0x3476b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3476b4: 0xb3c20037  sdl         $v0, 0x37($fp)
    ctx->pc = 0x3476b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3476b8: 0xb7c20030  sdr         $v0, 0x30($fp)
    ctx->pc = 0x3476b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3476bc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3476BCu;
    SET_GPR_U32(ctx, 31, 0x3476C4u);
    ctx->pc = 0x3476C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3476BCu;
    // 0x3476c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3476BCu, 0x3476C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3476C4u;
label_3476c4:
    // 0x3476c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3476c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3476c8: 0xe7d40058  swc1        $f20, 0x58($fp)
    ctx->pc = 0x3476c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 88), bits); }
    // 0x3476cc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3476ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x3476d0: 0xe7d5005c  swc1        $f21, 0x5C($fp)
    ctx->pc = 0x3476d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 92), bits); }
    // 0x3476d4: 0xe7d60060  swc1        $f22, 0x60($fp)
    ctx->pc = 0x3476d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 96), bits); }
    // 0x3476d8: 0x24a56528  addiu       $a1, $a1, 0x6528
    ctx->pc = 0x3476d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25896));
    // 0x3476dc: 0xe7d80064  swc1        $f24, 0x64($fp)
    ctx->pc = 0x3476dcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 100), bits); }
    // 0x3476e0: 0x27c40078  addiu       $a0, $fp, 0x78
    ctx->pc = 0x3476e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 120));
    // 0x3476e4: 0xe7d70068  swc1        $f23, 0x68($fp)
    ctx->pc = 0x3476e4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 104), bits); }
    // 0x3476e8: 0xafc20050  sw          $v0, 0x50($fp)
    ctx->pc = 0x3476e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 80), GPR_U32(ctx, 2));
    // 0x3476ec: 0xafc00054  sw          $zero, 0x54($fp)
    ctx->pc = 0x3476ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 84), GPR_U32(ctx, 0));
    // 0x3476f0: 0xafc00070  sw          $zero, 0x70($fp)
    ctx->pc = 0x3476f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 112), GPR_U32(ctx, 0));
    // 0x3476f4: 0xafc00074  sw          $zero, 0x74($fp)
    ctx->pc = 0x3476f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 116), GPR_U32(ctx, 0));
    // 0x3476f8: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x3476F8u;
    SET_GPR_U32(ctx, 31, 0x347700u);
    ctx->pc = 0x3476FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3476F8u;
    // 0x3476fc: 0xafd3006c  sw          $s3, 0x6C($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 108), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x3476F8u, 0x347700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347700u;
label_347700:
    // 0x347700: 0xafc0008c  sw          $zero, 0x8C($fp)
    ctx->pc = 0x347700u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 140), GPR_U32(ctx, 0));
    // 0x347704: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x347704u;
    SET_GPR_U32(ctx, 31, 0x34770Cu);
    ctx->pc = 0x347708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347704u;
    // 0x347708: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x347704u, 0x34770Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34770Cu;
label_34770c:
    // 0x34770c: 0xafc000a4  sw          $zero, 0xA4($fp)
    ctx->pc = 0x34770cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 164), GPR_U32(ctx, 0));
    // 0x347710: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x347710u;
    SET_GPR_U32(ctx, 31, 0x347718u);
    ctx->pc = 0x347714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347710u;
    // 0x347714: 0x27c400b0  addiu       $a0, $fp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x347710u, 0x347718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347718u;
label_347718:
    // 0x347718: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x347718u;
    SET_GPR_U32(ctx, 31, 0x347720u);
    ctx->pc = 0x34771Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347718u;
    // 0x34771c: 0x27c400c0  addiu       $a0, $fp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x347718u, 0x347720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347720u;
label_347720:
    // 0x347720: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x347720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x347724: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x347724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347728: 0x27c400e0  addiu       $a0, $fp, 0xE0
    ctx->pc = 0x347728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 224));
    // 0x34772c: 0xafc000d0  sw          $zero, 0xD0($fp)
    ctx->pc = 0x34772cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 208), GPR_U32(ctx, 0));
    // 0x347730: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x347730u;
    SET_GPR_U32(ctx, 31, 0x347738u);
    ctx->pc = 0x347734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347730u;
    // 0x347734: 0xe7c000d4  swc1        $f0, 0xD4($fp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 212), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x347730u, 0x347738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347738u;
label_347738:
    // 0x347738: 0xa3c000f1  sb          $zero, 0xF1($fp)
    ctx->pc = 0x347738u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 241), (uint8_t)GPR_U32(ctx, 0));
    // 0x34773c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x34773cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347740: 0xa3c000f2  sb          $zero, 0xF2($fp)
    ctx->pc = 0x347740u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 242), (uint8_t)GPR_U32(ctx, 0));
    // 0x347744: 0xafc000f4  sw          $zero, 0xF4($fp)
    ctx->pc = 0x347744u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 244), GPR_U32(ctx, 0));
    // 0x347748: 0xc0c31d0  jal         func_30C740
    ctx->pc = 0x347748u;
    SET_GPR_U32(ctx, 31, 0x347750u);
    ctx->pc = 0x34774Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347748u;
    // 0x34774c: 0xafc000f8  sw          $zero, 0xF8($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 248), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C740u, 0x347748u, 0x347750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347750u;
label_347750:
    // 0x347750: 0xafc20038  sw          $v0, 0x38($fp)
    ctx->pc = 0x347750u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 56), GPR_U32(ctx, 2));
    // 0x347754: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x347754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x347758: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x347758u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34775c: 0xf8810040  sqc2        $vf1, 0x40($a0)
    ctx->pc = 0x34775cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x347760: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x347760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x347764: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x347764u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x347768: 0xf8810050  sqc2        $vf1, 0x50($a0)
    ctx->pc = 0x347768u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34776c: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x34776cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x347770: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x347770u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x347774: 0xf8810060  sqc2        $vf1, 0x60($a0)
    ctx->pc = 0x347774u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x347778: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x347778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x34777c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x34777cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x347780: 0xf8810070  sqc2        $vf1, 0x70($a0)
    ctx->pc = 0x347780u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x347784: 0x8fc20038  lw          $v0, 0x38($fp)
    ctx->pc = 0x347784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x347788: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x347788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34778c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x34778cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x347790: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x347790u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x347794: 0xfbc10040  sqc2        $vf1, 0x40($fp)
    ctx->pc = 0x347794u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x347798: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x347798u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x34779c: 0xf8610070  sqc2        $vf1, 0x70($v1)
    ctx->pc = 0x34779cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3477a0: 0xc64d0000  lwc1        $f13, 0x0($s2)
    ctx->pc = 0x3477a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3477a4: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x3477A4u;
    SET_GPR_U32(ctx, 31, 0x3477ACu);
    ctx->pc = 0x3477A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3477A4u;
    // 0x3477a8: 0x46006b07  neg.s       $f12, $f13 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x3477A4u, 0x3477ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3477ACu;
label_3477ac:
    // 0x3477ac: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x3477acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3477b0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3477b0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x3477b4: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x3477B4u;
    SET_GPR_U32(ctx, 31, 0x3477BCu);
    ctx->pc = 0x3477B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3477B4u;
    // 0x3477b8: 0x46006b07  neg.s       $f12, $f13 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x3477B4u, 0x3477BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3477BCu;
label_3477bc:
    // 0x3477bc: 0xc64d0008  lwc1        $f13, 0x8($s2)
    ctx->pc = 0x3477bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3477c0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3477c0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3477c4: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x3477C4u;
    SET_GPR_U32(ctx, 31, 0x3477CCu);
    ctx->pc = 0x3477C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3477C4u;
    // 0x3477c8: 0x46006b07  neg.s       $f12, $f13 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x3477C4u, 0x3477CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3477CCu;
label_3477cc:
    // 0x3477cc: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x3477ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3477d0: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x3477d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3477d4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3477d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3477d8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x3477d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x3477dc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3477dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3477e0: 0xfbc10010  sqc2        $vf1, 0x10($fp)
    ctx->pc = 0x3477e0u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3477e4: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x3477e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3477e8: 0xc7c10004  lwc1        $f1, 0x4($fp)
    ctx->pc = 0x3477e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3477ec: 0xc7c20008  lwc1        $f2, 0x8($fp)
    ctx->pc = 0x3477ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3477f0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3477f0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3477f4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3477f4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x3477f8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x3477f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x3477fc: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x3477fcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x347800: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x347800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x347804: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x347804u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x347808: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x347808u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x34780c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x34780cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347810: 0xfbc10090  sqc2        $vf1, 0x90($fp)
    ctx->pc = 0x347810u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x347814: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x347814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x347818: 0xc6e30004  lwc1        $f3, 0x4($s7)
    ctx->pc = 0x347818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34781c: 0xc6e40008  lwc1        $f4, 0x8($s7)
    ctx->pc = 0x34781cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x347820: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x347820u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x347824: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x347824u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x347828: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x347828u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x34782c: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x34782cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347830: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x347830u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x347834: 0x0  nop
    ctx->pc = 0x347834u;
    // NOP
    // 0x347838: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x347838u;
    {
        const bool branch_taken_0x347838 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x347838) {
            ctx->pc = 0x34783Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347838u;
            // 0x34783c: 0x8fc3002c  lw          $v1, 0x2C($fp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347864u;
            goto label_347864;
        }
    }
    ctx->pc = 0x347840u;
    // 0x347840: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x347840u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x347844: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x347844u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x347848: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x347848u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34784c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x34784cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x347850: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x347850u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x347854: 0x4a0003bf  vwaitq
    ctx->pc = 0x347854u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x347858: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x347858u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34785c: 0xfbc10090  sqc2        $vf1, 0x90($fp)
    ctx->pc = 0x34785cu;
    WRITE128(ADD32(GPR_U32(ctx, 30), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x347860: 0x8fc3002c  lw          $v1, 0x2C($fp)
    ctx->pc = 0x347860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
label_347864:
    // 0x347864: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x347864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x347868: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x347868u;
    {
        const bool branch_taken_0x347868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x34786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347868u;
        // 0x34786c: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347868) {
            ctx->pc = 0x3478B8u;
            goto label_3478b8;
        }
    }
    ctx->pc = 0x347870u;
    // 0x347870: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x347870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347874: 0x24042010  addiu       $a0, $zero, 0x2010
    ctx->pc = 0x347874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8208));
    // 0x347878: 0xa3c600f2  sb          $a2, 0xF2($fp)
    ctx->pc = 0x347878u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 242), (uint8_t)GPR_U32(ctx, 6));
    // 0x34787c: 0x241100ff  addiu       $s1, $zero, 0xFF
    ctx->pc = 0x34787cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x347880: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x347880u;
    SET_GPR_U32(ctx, 31, 0x347888u);
    ctx->pc = 0x347884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347880u;
    // 0x347884: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x347880u, 0x347888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347888u;
label_347888:
    // 0x347888: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x347888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34788c: 0x24520010  addiu       $s2, $v0, 0x10
    ctx->pc = 0x34788cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x347890: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x347890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x347894: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x347894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_347898:
    // 0x347898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x347898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34789c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34789Cu;
    SET_GPR_U32(ctx, 31, 0x3478A4u);
    ctx->pc = 0x3478A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34789Cu;
    // 0x3478a0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34789Cu, 0x3478A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3478A4u;
label_3478a4:
    // 0x3478a4: 0x0  nop
    ctx->pc = 0x3478a4u;
    // NOP
    // 0x3478a8: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3478A8u;
    {
        const bool branch_taken_0x3478a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x3478ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3478A8u;
        // 0x3478ac: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3478a8) {
            ctx->pc = 0x347898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_347898;
        }
    }
    ctx->pc = 0x3478B0u;
    // 0x3478b0: 0xafd200f4  sw          $s2, 0xF4($fp)
    ctx->pc = 0x3478b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 244), GPR_U32(ctx, 18));
    // 0x3478b4: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x3478b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3478b8:
    // 0x3478b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3478b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3478bc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3478bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3478c0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3478c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3478c4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3478c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3478c8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3478c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3478cc: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3478ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3478d0: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x3478d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3478d4: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x3478d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3478d8: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x3478d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3478dc: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x3478dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3478e0: 0xc7b800e0  lwc1        $f24, 0xE0($sp)
    ctx->pc = 0x3478e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3478e4: 0xc7b700d8  lwc1        $f23, 0xD8($sp)
    ctx->pc = 0x3478e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3478e8: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x3478e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3478ec: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x3478ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3478f0: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x3478f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3478f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3478F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3478F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3478F4u;
        // 0x3478f8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3478F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3478FCu;
    // 0x3478fc: 0x0  nop
    ctx->pc = 0x3478fcu;
    // NOP
    ctx->pc = 0x347900u;
}
