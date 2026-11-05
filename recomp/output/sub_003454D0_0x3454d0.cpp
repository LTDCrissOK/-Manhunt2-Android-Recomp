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

// Function: sub_003454D0
// Address: 0x3454d0 - 0x3456b8
void sub_003454D0_0x3454d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003454D0_0x3454d0");
#endif

    switch (ctx->pc) {
        case 0x3454f8u: goto label_3454f8;
        case 0x34550cu: goto label_34550c;
        case 0x345514u: goto label_345514;
        case 0x34551cu: goto label_34551c;
        case 0x345524u: goto label_345524;
        case 0x34552cu: goto label_34552c;
        case 0x345534u: goto label_345534;
        case 0x34554cu: goto label_34554c;
        default: break;
    }

    ctx->pc = 0x3454d0u;

    // 0x3454d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3454d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3454d4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3454d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3454d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3454d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3454dc: 0x244244b0  addiu       $v0, $v0, 0x44B0
    ctx->pc = 0x3454dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17584));
    // 0x3454e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3454e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3454e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3454e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3454e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3454e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3454ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3454ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3454f0: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x3454F0u;
    SET_GPR_U32(ctx, 31, 0x3454F8u);
    ctx->pc = 0x3454F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3454F0u;
    // 0x3454f4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x3454F0u, 0x3454F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3454F8u;
label_3454f8:
    // 0x3454f8: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3454f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3454fc: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x3454fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x345500: 0x24634480  addiu       $v1, $v1, 0x4480
    ctx->pc = 0x345500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17536));
    // 0x345504: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x345504u;
    SET_GPR_U32(ctx, 31, 0x34550Cu);
    ctx->pc = 0x345508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345504u;
    // 0x345508: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x345504u, 0x34550Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34550Cu;
label_34550c:
    // 0x34550c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34550Cu;
    SET_GPR_U32(ctx, 31, 0x345514u);
    ctx->pc = 0x345510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34550Cu;
    // 0x345510: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34550Cu, 0x345514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345514u;
label_345514:
    // 0x345514: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x345514u;
    SET_GPR_U32(ctx, 31, 0x34551Cu);
    ctx->pc = 0x345518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345514u;
    // 0x345518: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x345514u, 0x34551Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34551Cu;
label_34551c:
    // 0x34551c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34551Cu;
    SET_GPR_U32(ctx, 31, 0x345524u);
    ctx->pc = 0x345520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34551Cu;
    // 0x345520: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34551Cu, 0x345524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345524u;
label_345524:
    // 0x345524: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x345524u;
    SET_GPR_U32(ctx, 31, 0x34552Cu);
    ctx->pc = 0x345528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345524u;
    // 0x345528: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x345524u, 0x34552Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34552Cu;
label_34552c:
    // 0x34552c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34552Cu;
    SET_GPR_U32(ctx, 31, 0x345534u);
    ctx->pc = 0x345530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34552Cu;
    // 0x345530: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34552Cu, 0x345534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345534u;
label_345534:
    // 0x345534: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x345534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x345538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x345538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34553c: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x34553cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x345540: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x345540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345544: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x345544u;
    SET_GPR_U32(ctx, 31, 0x34554Cu);
    ctx->pc = 0x345548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345544u;
    // 0x345548: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x345544u, 0x34554Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34554Cu;
label_34554c:
    // 0x34554c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x34554cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x345550: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x345550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x345554: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x345554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x345558: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x345558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x34555c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x34555cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x345560: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x345560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345564: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x345564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x345568: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x345568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34556c: 0xe601001c  swc1        $f1, 0x1C($s0)
    ctx->pc = 0x34556cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x345570: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x345570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345574: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x345574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x345578: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x345578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34557c: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x34557cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x345580: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x345580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345584: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x345584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x345588: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x345588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34558c: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x34558cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x345590: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x345590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345594: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x345594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x345598: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x345598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34559c: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x34559cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x3455a0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x3455a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3455a4: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x3455a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3455a8: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x3455a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x3455ac: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3455acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3455b0: 0xfa010050  sqc2        $vf1, 0x50($s0)
    ctx->pc = 0x3455b0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3455b4: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x3455b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x3455b8: 0x26220070  addiu       $v0, $s1, 0x70
    ctx->pc = 0x3455b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x3455bc: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x3455bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x3455c0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3455c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3455c4: 0xfa010070  sqc2        $vf1, 0x70($s0)
    ctx->pc = 0x3455c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3455c8: 0xc6200080  lwc1        $f0, 0x80($s1)
    ctx->pc = 0x3455c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3455cc: 0x26230090  addiu       $v1, $s1, 0x90
    ctx->pc = 0x3455ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3455d0: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x3455d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x3455d4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3455d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3455d8: 0xfa010090  sqc2        $vf1, 0x90($s0)
    ctx->pc = 0x3455d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3455dc: 0x262200a0  addiu       $v0, $s1, 0xA0
    ctx->pc = 0x3455dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x3455e0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3455e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3455e4: 0xfa0100a0  sqc2        $vf1, 0xA0($s0)
    ctx->pc = 0x3455e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3455e8: 0x8a2200b3  lwl         $v0, 0xB3($s1)
    ctx->pc = 0x3455e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 179); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x3455ec: 0x9a2200b0  lwr         $v0, 0xB0($s1)
    ctx->pc = 0x3455ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 176); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x3455f0: 0xaa0200b3  swl         $v0, 0xB3($s0)
    ctx->pc = 0x3455f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 179); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3455f4: 0xba0200b0  swr         $v0, 0xB0($s0)
    ctx->pc = 0x3455f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 176); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3455f8: 0x8a2600b7  lwl         $a2, 0xB7($s1)
    ctx->pc = 0x3455f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 183); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x3455fc: 0x9a2600b4  lwr         $a2, 0xB4($s1)
    ctx->pc = 0x3455fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 180); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x345600: 0xaa0600b7  swl         $a2, 0xB7($s0)
    ctx->pc = 0x345600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 183); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x345604: 0xba0600b4  swr         $a2, 0xB4($s0)
    ctx->pc = 0x345604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 180); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x345608: 0x262300c0  addiu       $v1, $s1, 0xC0
    ctx->pc = 0x345608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x34560c: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x34560cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x345610: 0xae0200b8  sw          $v0, 0xB8($s0)
    ctx->pc = 0x345610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
    // 0x345614: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x345614u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x345618: 0xfa0100c0  sqc2        $vf1, 0xC0($s0)
    ctx->pc = 0x345618u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34561c: 0xc62000d0  lwc1        $f0, 0xD0($s1)
    ctx->pc = 0x34561cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345620: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x345620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345624: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x345624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x345628: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x345628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x34562c: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x34562cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x345630: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x345630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x345634: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x345634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x345638: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x345638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x34563c: 0xae0400d8  sw          $a0, 0xD8($s0)
    ctx->pc = 0x34563cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 4));
    // 0x345640: 0x7a2300e0  lq          $v1, 0xE0($s1)
    ctx->pc = 0x345640u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x345644: 0x7e0300e0  sq          $v1, 0xE0($s0)
    ctx->pc = 0x345644u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), GPR_VEC(ctx, 3));
    // 0x345648: 0x7a2400f0  lq          $a0, 0xF0($s1)
    ctx->pc = 0x345648u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x34564c: 0x7e0400f0  sq          $a0, 0xF0($s0)
    ctx->pc = 0x34564cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 240), GPR_VEC(ctx, 4));
    // 0x345650: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x345650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345654: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x345654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x345658: 0xc6210108  lwc1        $f1, 0x108($s1)
    ctx->pc = 0x345658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34565c: 0xe6010108  swc1        $f1, 0x108($s0)
    ctx->pc = 0x34565cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x345660: 0xc620011c  lwc1        $f0, 0x11C($s1)
    ctx->pc = 0x345660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345664: 0xe600011c  swc1        $f0, 0x11C($s0)
    ctx->pc = 0x345664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x345668: 0xc6210120  lwc1        $f1, 0x120($s1)
    ctx->pc = 0x345668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34566c: 0xe6010120  swc1        $f1, 0x120($s0)
    ctx->pc = 0x34566cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x345670: 0x8e230128  lw          $v1, 0x128($s1)
    ctx->pc = 0x345670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x345674: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x345674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
    // 0x345678: 0x8e24012c  lw          $a0, 0x12C($s1)
    ctx->pc = 0x345678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
    // 0x34567c: 0xae04012c  sw          $a0, 0x12C($s0)
    ctx->pc = 0x34567cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 4));
    // 0x345680: 0x8e230130  lw          $v1, 0x130($s1)
    ctx->pc = 0x345680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x345684: 0xae030130  sw          $v1, 0x130($s0)
    ctx->pc = 0x345684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 3));
    // 0x345688: 0x8e240138  lw          $a0, 0x138($s1)
    ctx->pc = 0x345688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x34568c: 0xae040138  sw          $a0, 0x138($s0)
    ctx->pc = 0x34568cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 4));
    // 0x345690: 0x8e230134  lw          $v1, 0x134($s1)
    ctx->pc = 0x345690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x345694: 0xae030134  sw          $v1, 0x134($s0)
    ctx->pc = 0x345694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 3));
    // 0x345698: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x345698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x34569c: 0xae04010c  sw          $a0, 0x10C($s0)
    ctx->pc = 0x34569cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 4));
    // 0x3456a0: 0x8e230110  lw          $v1, 0x110($s1)
    ctx->pc = 0x3456a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x3456a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3456a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3456a8: 0xae030110  sw          $v1, 0x110($s0)
    ctx->pc = 0x3456a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 3));
    // 0x3456ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3456acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3456b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3456B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3456B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3456B0u;
        // 0x3456b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3456B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3456B8u;
}
