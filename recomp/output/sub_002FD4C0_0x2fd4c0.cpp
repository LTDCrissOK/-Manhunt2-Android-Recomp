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

// Function: sub_002FD4C0
// Address: 0x2fd4c0 - 0x2fd818
void sub_002FD4C0_0x2fd4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD4C0_0x2fd4c0");
#endif

    switch (ctx->pc) {
        case 0x2fd50cu: goto label_2fd50c;
        case 0x2fd514u: goto label_2fd514;
        case 0x2fd558u: goto label_2fd558;
        case 0x2fd570u: goto label_2fd570;
        case 0x2fd578u: goto label_2fd578;
        case 0x2fd580u: goto label_2fd580;
        case 0x2fd5a0u: goto label_2fd5a0;
        case 0x2fd5b0u: goto label_2fd5b0;
        case 0x2fd5e0u: goto label_2fd5e0;
        case 0x2fd5ecu: goto label_2fd5ec;
        case 0x2fd61cu: goto label_2fd61c;
        case 0x2fd62cu: goto label_2fd62c;
        case 0x2fd668u: goto label_2fd668;
        case 0x2fd680u: goto label_2fd680;
        case 0x2fd688u: goto label_2fd688;
        case 0x2fd690u: goto label_2fd690;
        case 0x2fd6a0u: goto label_2fd6a0;
        case 0x2fd6b4u: goto label_2fd6b4;
        case 0x2fd6e8u: goto label_2fd6e8;
        case 0x2fd6f4u: goto label_2fd6f4;
        case 0x2fd720u: goto label_2fd720;
        case 0x2fd73cu: goto label_2fd73c;
        default: break;
    }

    ctx->pc = 0x2fd4c0u;

    // 0x2fd4c0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2fd4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2fd4c4: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x2fd4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
    // 0x2fd4c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fd4c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd4cc: 0xffb100e8  sd          $s1, 0xE8($sp)
    ctx->pc = 0x2fd4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 17));
    // 0x2fd4d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fd4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd4d4: 0xffb200f0  sd          $s2, 0xF0($sp)
    ctx->pc = 0x2fd4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
    // 0x2fd4d8: 0xffb300f8  sd          $s3, 0xF8($sp)
    ctx->pc = 0x2fd4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 19));
    // 0x2fd4dc: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x2fd4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
    // 0x2fd4e0: 0xffb50108  sd          $s5, 0x108($sp)
    ctx->pc = 0x2fd4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 21));
    // 0x2fd4e4: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x2fd4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x2fd4e8: 0xffb70118  sd          $s7, 0x118($sp)
    ctx->pc = 0x2fd4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 23));
    // 0x2fd4ec: 0xffbe0120  sd          $fp, 0x120($sp)
    ctx->pc = 0x2fd4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 30));
    // 0x2fd4f0: 0xffbf0128  sd          $ra, 0x128($sp)
    ctx->pc = 0x2fd4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 31));
    // 0x2fd4f4: 0xe7b70148  swc1        $f23, 0x148($sp)
    ctx->pc = 0x2fd4f4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x2fd4f8: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x2fd4f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x2fd4fc: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x2fd4fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2fd500: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x2fd500u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2fd504: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2FD504u;
    SET_GPR_U32(ctx, 31, 0x2FD50Cu);
    ctx->pc = 0x2FD508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD504u;
    // 0x2fd508: 0xafa000d0  sw          $zero, 0xD0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2FD504u, 0x2FD50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD50Cu;
label_2fd50c:
    // 0x2fd50c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2FD50Cu;
    SET_GPR_U32(ctx, 31, 0x2FD514u);
    ctx->pc = 0x2FD510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD50Cu;
    // 0x2fd510: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2FD50Cu, 0x2FD514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD514u;
label_2fd514:
    // 0x2fd514: 0x8e0213c0  lw          $v0, 0x13C0($s0)
    ctx->pc = 0x2fd514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5056)));
    // 0x2fd518: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fd518u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fd51c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2fd51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd520: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2fd520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2fd524: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2fd524u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fd528: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2fd528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd52c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2fd52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2fd530: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2fd530u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fd534: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2fd534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd538: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2fd538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2fd53c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fd53cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fd540: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x2fd540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd544: 0x8e0413c4  lw          $a0, 0x13C4($s0)
    ctx->pc = 0x2fd544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5060)));
    // 0x2fd548: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fd548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fd54c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2fd54cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2fd550: 0xc076dd0  jal         func_1DB740
    ctx->pc = 0x2FD550u;
    SET_GPR_U32(ctx, 31, 0x2FD558u);
    ctx->pc = 0x2FD554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD550u;
    // 0x2fd554: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB740u, 0x2FD550u, 0x2FD558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD558u;
label_2fd558:
    // 0x2fd558: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2fd558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2fd55c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2fd55cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2fd560: 0x3c014190  lui         $at, 0x4190
    ctx->pc = 0x2fd560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16784 << 16));
    // 0x2fd564: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2fd564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2fd568: 0xc0767f2  jal         func_1D9FC8
    ctx->pc = 0x2FD568u;
    SET_GPR_U32(ctx, 31, 0x2FD570u);
    ctx->pc = 0x2FD56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD568u;
    // 0x2fd56c: 0x8e0413c4  lw          $a0, 0x13C4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5060)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x2FD568u, 0x2FD570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD570u;
label_2fd570:
    // 0x2fd570: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2FD570u;
    SET_GPR_U32(ctx, 31, 0x2FD578u);
    ctx->pc = 0x2FD574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD570u;
    // 0x2fd574: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2FD570u, 0x2FD578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD578u;
label_2fd578:
    // 0x2fd578: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2FD578u;
    SET_GPR_U32(ctx, 31, 0x2FD580u);
    ctx->pc = 0x2FD57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD578u;
    // 0x2fd57c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2FD578u, 0x2FD580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD580u;
label_2fd580:
    // 0x2fd580: 0x27b70050  addiu       $s7, $sp, 0x50
    ctx->pc = 0x2fd580u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2fd584: 0x27be0060  addiu       $fp, $sp, 0x60
    ctx->pc = 0x2fd584u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fd588: 0x27b60070  addiu       $s6, $sp, 0x70
    ctx->pc = 0x2fd588u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2fd58c: 0x27b100a0  addiu       $s1, $sp, 0xA0
    ctx->pc = 0x2fd58cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd590: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x2fd590u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fd594: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x2fd594u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fd598: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x2fd598u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2fd59c: 0x8e0313c4  lw          $v1, 0x13C4($s0)
    ctx->pc = 0x2fd59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5060)));
label_2fd5a0:
    // 0x2fd5a0: 0x24053210  addiu       $a1, $zero, 0x3210
    ctx->pc = 0x2fd5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12816));
    // 0x2fd5a4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2fd5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2fd5a8: 0xc0798e8  jal         func_1E63A0
    ctx->pc = 0x2FD5A8u;
    SET_GPR_U32(ctx, 31, 0x2FD5B0u);
    ctx->pc = 0x2FD5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD5A8u;
    // 0x2fd5ac: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E63A0u, 0x2FD5A8u, 0x2FD5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD5B0u;
label_2fd5b0:
    // 0x2fd5b0: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x2FD5B0u;
    {
        const bool branch_taken_0x2fd5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD5B0u;
        // 0x2fd5b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd5b0) {
            ctx->pc = 0x2FD78Cu;
            goto label_2fd78c;
        }
    }
    ctx->pc = 0x2FD5B8u;
    // 0x2fd5b8: 0x4493a000  mtc1        $s3, $f20
    ctx->pc = 0x2fd5b8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2fd5bc: 0x0  nop
    ctx->pc = 0x2fd5bcu;
    // NOP
    // 0x2fd5c0: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x2fd5c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x2fd5c4: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x2fd5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x2fd5c8: 0xe6370004  swc1        $f23, 0x4($s1)
    ctx->pc = 0x2fd5c8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2fd5cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fd5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd5d0: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x2fd5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x2fd5d4: 0x4616a302  mul.s       $f12, $f20, $f22
    ctx->pc = 0x2fd5d4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x2fd5d8: 0xc0b1574  jal         func_2C55D0
    ctx->pc = 0x2FD5D8u;
    SET_GPR_U32(ctx, 31, 0x2FD5E0u);
    ctx->pc = 0x2FD5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD5D8u;
    // 0x2fd5dc: 0xafa000ac  sw          $zero, 0xAC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C55D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C55D0u, 0x2FD5D8u, 0x2FD5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD5E0u;
label_2fd5e0:
    // 0x2fd5e0: 0x8e0513c0  lw          $a1, 0x13C0($s0)
    ctx->pc = 0x2fd5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5056)));
    // 0x2fd5e4: 0xc0b1602  jal         func_2C5808
    ctx->pc = 0x2FD5E4u;
    SET_GPR_U32(ctx, 31, 0x2FD5ECu);
    ctx->pc = 0x2FD5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD5E4u;
    // 0x2fd5e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5808u, 0x2FD5E4u, 0x2FD5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD5ECu;
label_2fd5ec:
    // 0x2fd5ec: 0x8e0213c0  lw          $v0, 0x13C0($s0)
    ctx->pc = 0x2fd5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5056)));
    // 0x2fd5f0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2fd5f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fd5f4: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fd5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd5f8: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x2fd5f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2fd5fc: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x2fd5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd600: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2fd600u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2fd604: 0xf8410020  sqc2        $vf1, 0x20($v0)
    ctx->pc = 0x2fd604u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd608: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x2fd608u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2fd60c: 0xf8410030  sqc2        $vf1, 0x30($v0)
    ctx->pc = 0x2fd60cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd610: 0x8e0413c4  lw          $a0, 0x13C4($s0)
    ctx->pc = 0x2fd610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5060)));
    // 0x2fd614: 0xc0767f2  jal         func_1D9FC8
    ctx->pc = 0x2FD614u;
    SET_GPR_U32(ctx, 31, 0x2FD61Cu);
    ctx->pc = 0x2FD618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD614u;
    // 0x2fd618: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x2FD614u, 0x2FD61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD61Cu;
label_2fd61c:
    // 0x2fd61c: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x2fd61cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fd620: 0x0  nop
    ctx->pc = 0x2fd620u;
    // NOP
    // 0x2fd624: 0x4503ffde  bc1tl       . + 4 + (-0x22 << 2)
    ctx->pc = 0x2FD624u;
    {
        const bool branch_taken_0x2fd624 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fd624) {
            ctx->pc = 0x2FD628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD624u;
            // 0x2fd628: 0x8e0313c4  lw          $v1, 0x13C4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5060)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd5a0;
        }
    }
    ctx->pc = 0x2FD62Cu;
label_2fd62c:
    // 0x2fd62c: 0x8e0213c0  lw          $v0, 0x13C0($s0)
    ctx->pc = 0x2fd62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5056)));
    // 0x2fd630: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2fd630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fd634: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2fd634u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fd638: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fd638u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd63c: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x2fd63cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2fd640: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x2fd640u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd644: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x2fd644u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2fd648: 0xf8410020  sqc2        $vf1, 0x20($v0)
    ctx->pc = 0x2fd648u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd64c: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x2fd64cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2fd650: 0xf8410030  sqc2        $vf1, 0x30($v0)
    ctx->pc = 0x2fd650u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd654: 0x8e0413c4  lw          $a0, 0x13C4($s0)
    ctx->pc = 0x2fd654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5060)));
    // 0x2fd658: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fd658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fd65c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2fd65cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2fd660: 0xc076dd0  jal         func_1DB740
    ctx->pc = 0x2FD660u;
    SET_GPR_U32(ctx, 31, 0x2FD668u);
    ctx->pc = 0x2FD664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD660u;
    // 0x2fd664: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB740u, 0x2FD660u, 0x2FD668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD668u;
label_2fd668:
    // 0x2fd668: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2fd668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2fd66c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2fd66cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2fd670: 0x3c014190  lui         $at, 0x4190
    ctx->pc = 0x2fd670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16784 << 16));
    // 0x2fd674: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2fd674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2fd678: 0xc0767f2  jal         func_1D9FC8
    ctx->pc = 0x2FD678u;
    SET_GPR_U32(ctx, 31, 0x2FD680u);
    ctx->pc = 0x2FD67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD678u;
    // 0x2fd67c: 0x8e0413c4  lw          $a0, 0x13C4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5060)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x2FD678u, 0x2FD680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD680u;
label_2fd680:
    // 0x2fd680: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2FD680u;
    SET_GPR_U32(ctx, 31, 0x2FD688u);
    ctx->pc = 0x2FD684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD680u;
    // 0x2fd684: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2FD680u, 0x2FD688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD688u;
label_2fd688:
    // 0x2fd688: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2FD688u;
    SET_GPR_U32(ctx, 31, 0x2FD690u);
    ctx->pc = 0x2FD68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD688u;
    // 0x2fd68c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2FD688u, 0x2FD690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD690u;
label_2fd690:
    // 0x2fd690: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x2fd690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2fd694: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x2fd694u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fd698: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x2fd698u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fd69c: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x2fd69cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2fd6a0:
    // 0x2fd6a0: 0x8e0313c4  lw          $v1, 0x13C4($s0)
    ctx->pc = 0x2fd6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5060)));
    // 0x2fd6a4: 0x24053210  addiu       $a1, $zero, 0x3210
    ctx->pc = 0x2fd6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12816));
    // 0x2fd6a8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2fd6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2fd6ac: 0xc0798e8  jal         func_1E63A0
    ctx->pc = 0x2FD6ACu;
    SET_GPR_U32(ctx, 31, 0x2FD6B4u);
    ctx->pc = 0x2FD6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD6ACu;
    // 0x2fd6b0: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E63A0u, 0x2FD6ACu, 0x2FD6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD6B4u;
label_2fd6b4:
    // 0x2fd6b4: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2FD6B4u;
    {
        const bool branch_taken_0x2fd6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD6B4u;
        // 0x2fd6b8: 0x121023  negu        $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd6b4) {
            ctx->pc = 0x2FD764u;
            goto label_2fd764;
        }
    }
    ctx->pc = 0x2FD6BCu;
    // 0x2fd6bc: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x2fd6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x2fd6c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fd6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fd6c4: 0x0  nop
    ctx->pc = 0x2fd6c4u;
    // NOP
    // 0x2fd6c8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2fd6c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2fd6cc: 0xe6360004  swc1        $f22, 0x4($s1)
    ctx->pc = 0x2fd6ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2fd6d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fd6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd6d4: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x2fd6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x2fd6d8: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x2fd6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x2fd6dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fd6dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd6e0: 0xc0b1574  jal         func_2C55D0
    ctx->pc = 0x2FD6E0u;
    SET_GPR_U32(ctx, 31, 0x2FD6E8u);
    ctx->pc = 0x2FD6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD6E0u;
    // 0x2fd6e4: 0x46156302  mul.s       $f12, $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C55D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C55D0u, 0x2FD6E0u, 0x2FD6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD6E8u;
label_2fd6e8:
    // 0x2fd6e8: 0x8e0513c0  lw          $a1, 0x13C0($s0)
    ctx->pc = 0x2fd6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5056)));
    // 0x2fd6ec: 0xc0b1602  jal         func_2C5808
    ctx->pc = 0x2FD6ECu;
    SET_GPR_U32(ctx, 31, 0x2FD6F4u);
    ctx->pc = 0x2FD6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD6ECu;
    // 0x2fd6f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5808u, 0x2FD6ECu, 0x2FD6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD6F4u;
label_2fd6f4:
    // 0x2fd6f4: 0x8e0213c0  lw          $v0, 0x13C0($s0)
    ctx->pc = 0x2fd6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5056)));
    // 0x2fd6f8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2fd6f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fd6fc: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fd6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd700: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x2fd700u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2fd704: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x2fd704u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd708: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x2fd708u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2fd70c: 0xf8410020  sqc2        $vf1, 0x20($v0)
    ctx->pc = 0x2fd70cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd710: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2fd710u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2fd714: 0xf8410030  sqc2        $vf1, 0x30($v0)
    ctx->pc = 0x2fd714u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd718: 0xc0767f2  jal         func_1D9FC8
    ctx->pc = 0x2FD718u;
    SET_GPR_U32(ctx, 31, 0x2FD720u);
    ctx->pc = 0x2FD71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD718u;
    // 0x2fd71c: 0x8e0413c4  lw          $a0, 0x13C4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5060)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x2FD718u, 0x2FD720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD720u;
label_2fd720:
    // 0x2fd720: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2fd720u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fd724: 0x0  nop
    ctx->pc = 0x2fd724u;
    // NOP
    // 0x2fd728: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2fd728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2fd72c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2fd72cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fd730: 0x0  nop
    ctx->pc = 0x2fd730u;
    // NOP
    // 0x2fd734: 0x4501ffda  bc1t        . + 4 + (-0x26 << 2)
    ctx->pc = 0x2FD734u;
    {
        const bool branch_taken_0x2fd734 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FD738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD734u;
        // 0x2fd738: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd734) {
            ctx->pc = 0x2FD6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd6a0;
        }
    }
    ctx->pc = 0x2FD73Cu;
label_2fd73c:
    // 0x2fd73c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2fd73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2fd740: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2FD740u;
    {
        const bool branch_taken_0x2fd740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD740u;
        // 0x2fd744: 0x272102a  slt         $v0, $s3, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd740) {
            ctx->pc = 0x2FD7D0u;
            goto label_2fd7d0;
        }
    }
    ctx->pc = 0x2FD748u;
    // 0x2fd748: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2FD748u;
    {
        const bool branch_taken_0x2fd748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD748u;
        // 0x2fd74c: 0x27a200a0  addiu       $v0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd748) {
            ctx->pc = 0x2FD7B4u;
            goto label_2fd7b4;
        }
    }
    ctx->pc = 0x2FD750u;
    // 0x2fd750: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2fd750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fd754: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fd754u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fd758: 0xfa0113a0  sqc2        $vf1, 0x13A0($s0)
    ctx->pc = 0x2fd758u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5024), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd75c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2FD75Cu;
    {
        const bool branch_taken_0x2fd75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD75Cu;
        // 0x2fd760: 0x27a30090  addiu       $v1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd75c) {
            ctx->pc = 0x2FD7C0u;
            goto label_2fd7c0;
        }
    }
    ctx->pc = 0x2FD764u;
label_2fd764:
    // 0x2fd764: 0x8e0213c0  lw          $v0, 0x13C0($s0)
    ctx->pc = 0x2fd764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5056)));
    // 0x2fd768: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x2fd768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2fd76c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2fd76cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fd770: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x2fd770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd774: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2fd774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2fd778: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fd778u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fd77c: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x2fd77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd780: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fd780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fd784: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x2FD784u;
    {
        const bool branch_taken_0x2fd784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD784u;
        // 0x2fd788: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd784) {
            ctx->pc = 0x2FD73Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd73c;
        }
    }
    ctx->pc = 0x2FD78Cu;
label_2fd78c:
    // 0x2fd78c: 0x8e0213c0  lw          $v0, 0x13C0($s0)
    ctx->pc = 0x2fd78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5056)));
    // 0x2fd790: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x2fd790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2fd794: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2fd794u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fd798: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x2fd798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd79c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2fd79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2fd7a0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fd7a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fd7a4: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x2fd7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd7a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fd7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fd7ac: 0x1000ff9f  b           . + 4 + (-0x61 << 2)
    ctx->pc = 0x2FD7ACu;
    {
        const bool branch_taken_0x2fd7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD7ACu;
        // 0x2fd7b0: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd7ac) {
            ctx->pc = 0x2FD62Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd62c;
        }
    }
    ctx->pc = 0x2FD7B4u;
label_2fd7b4:
    // 0x2fd7b4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fd7b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fd7b8: 0xfa0113a0  sqc2        $vf1, 0x13A0($s0)
    ctx->pc = 0x2fd7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5024), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd7bc: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x2fd7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2fd7c0:
    // 0x2fd7c0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2fd7c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fd7c4: 0xfa0113b0  sqc2        $vf1, 0x13B0($s0)
    ctx->pc = 0x2fd7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5040), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd7c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FD7C8u;
    {
        const bool branch_taken_0x2fd7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD7C8u;
        // 0x2fd7cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd7c8) {
            ctx->pc = 0x2FD7D4u;
            goto label_2fd7d4;
        }
    }
    ctx->pc = 0x2FD7D0u;
label_2fd7d0:
    // 0x2fd7d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fd7d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fd7d4:
    // 0x2fd7d4: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x2fd7d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2fd7d8: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x2fd7d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2fd7dc: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x2fd7dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2fd7e0: 0xdfb300f8  ld          $s3, 0xF8($sp)
    ctx->pc = 0x2fd7e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2fd7e4: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x2fd7e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2fd7e8: 0xdfb50108  ld          $s5, 0x108($sp)
    ctx->pc = 0x2fd7e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2fd7ec: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x2fd7ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2fd7f0: 0xdfb70118  ld          $s7, 0x118($sp)
    ctx->pc = 0x2fd7f0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2fd7f4: 0xdfbe0120  ld          $fp, 0x120($sp)
    ctx->pc = 0x2fd7f4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2fd7f8: 0xdfbf0128  ld          $ra, 0x128($sp)
    ctx->pc = 0x2fd7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2fd7fc: 0xc7b70148  lwc1        $f23, 0x148($sp)
    ctx->pc = 0x2fd7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2fd800: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x2fd800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2fd804: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x2fd804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2fd808: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x2fd808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fd80c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD80Cu;
        // 0x2fd810: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD814u;
    // 0x2fd814: 0x0  nop
    ctx->pc = 0x2fd814u;
    // NOP
    ctx->pc = 0x2fd818u;
}
