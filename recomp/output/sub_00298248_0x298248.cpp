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

// Function: sub_00298248
// Address: 0x298248 - 0x298398
void sub_00298248_0x298248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298248_0x298248");
#endif

    switch (ctx->pc) {
        case 0x298280u: goto label_298280;
        case 0x298290u: goto label_298290;
        case 0x2982a8u: goto label_2982a8;
        case 0x2982b0u: goto label_2982b0;
        case 0x2982c4u: goto label_2982c4;
        case 0x2982d8u: goto label_2982d8;
        case 0x298310u: goto label_298310;
        case 0x29831cu: goto label_29831c;
        case 0x298340u: goto label_298340;
        case 0x29836cu: goto label_29836c;
        default: break;
    }

    ctx->pc = 0x298248u;

    // 0x298248: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x298248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29824c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x29824cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x298250: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x298250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x298254: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x298254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298258: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x298258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x29825c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29825cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298260: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x298260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x298264: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x298264u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298268: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x298268u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29826c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x29826cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x298270: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x298270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x298274: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x298274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x298278: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x298278u;
    SET_GPR_U32(ctx, 31, 0x298280u);
    ctx->pc = 0x29827Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298278u;
    // 0x29827c: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x298278u, 0x298280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298280u;
label_298280:
    // 0x298280: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x298280u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298284: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x298284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298288: 0xc0a58d8  jal         func_296360
    ctx->pc = 0x298288u;
    SET_GPR_U32(ctx, 31, 0x298290u);
    ctx->pc = 0x29828Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298288u;
    // 0x29828c: 0x26b10084  addiu       $s1, $s5, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296360u, 0x298288u, 0x298290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298290u;
label_298290:
    // 0x298290: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x298290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x298294: 0x26a4007c  addiu       $a0, $s5, 0x7C
    ctx->pc = 0x298294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 124));
    // 0x298298: 0x246331e8  addiu       $v1, $v1, 0x31E8
    ctx->pc = 0x298298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12776));
    // 0x29829c: 0xaea00078  sw          $zero, 0x78($s5)
    ctx->pc = 0x29829cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 120), GPR_U32(ctx, 0));
    // 0x2982a0: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2982A0u;
    SET_GPR_U32(ctx, 31, 0x2982A8u);
    ctx->pc = 0x2982A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2982A0u;
    // 0x2982a4: 0xaea30074  sw          $v1, 0x74($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 116), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2982A0u, 0x2982A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2982A8u;
label_2982a8:
    // 0x2982a8: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2982A8u;
    SET_GPR_U32(ctx, 31, 0x2982B0u);
    ctx->pc = 0x2982ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2982A8u;
    // 0x2982ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2982A8u, 0x2982B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2982B0u;
label_2982b0:
    // 0x2982b0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2982b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2982b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2982b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2982b8: 0xaea30070  sw          $v1, 0x70($s5)
    ctx->pc = 0x2982b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 112), GPR_U32(ctx, 3));
    // 0x2982bc: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x2982BCu;
    SET_GPR_U32(ctx, 31, 0x2982C4u);
    ctx->pc = 0x2982C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2982BCu;
    // 0x2982c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x2982BCu, 0x2982C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2982C4u;
label_2982c4:
    // 0x2982c4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2982c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2982c8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2982c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2982cc: 0xe6a0001c  swc1        $f0, 0x1C($s5)
    ctx->pc = 0x2982ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 28), bits); }
    // 0x2982d0: 0xc0a57e2  jal         func_295F88
    ctx->pc = 0x2982D0u;
    SET_GPR_U32(ctx, 31, 0x2982D8u);
    ctx->pc = 0x2982D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2982D0u;
    // 0x2982d4: 0xe6a10018  swc1        $f1, 0x18($s5) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F88u, 0x2982D0u, 0x2982D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2982D8u;
label_2982d8:
    // 0x2982d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2982d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2982dc: 0x2363a  dsrl        $a2, $v0, 24
    ctx->pc = 0x2982dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> 24);
    // 0x2982e0: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x2982e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
    // 0x2982e4: 0x22c3a  dsrl        $a1, $v0, 16
    ctx->pc = 0x2982e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 16);
    // 0x2982e8: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x2982e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2982ec: 0xa3a50002  sb          $a1, 0x2($sp)
    ctx->pc = 0x2982ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x2982f0: 0xa3a60003  sb          $a2, 0x3($sp)
    ctx->pc = 0x2982f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x2982f4: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x2982f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2982f8: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x2982f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2982fc: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x2982fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x298300: 0xaaa20017  swl         $v0, 0x17($s5)
    ctx->pc = 0x298300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x298304: 0xbaa20014  swr         $v0, 0x14($s5)
    ctx->pc = 0x298304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x298308: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x298308u;
    SET_GPR_U32(ctx, 31, 0x298310u);
    ctx->pc = 0x29830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298308u;
    // 0x29830c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x298308u, 0x298310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298310u;
label_298310:
    // 0x298310: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x298310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298314: 0xc0d757c  jal         func_35D5F0
    ctx->pc = 0x298314u;
    SET_GPR_U32(ctx, 31, 0x29831Cu);
    ctx->pc = 0x298318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298314u;
    // 0x298318: 0x2405005f  addiu       $a1, $zero, 0x5F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5F0u, 0x298314u, 0x29831Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29831Cu;
label_29831c:
    // 0x29831c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x29831cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x298320: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x298320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x298324: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x298324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x298328: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x298328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29832c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x29832cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x298330: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x298330u;
    {
        const bool branch_taken_0x298330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298330u;
        // 0x298334: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298330) {
            ctx->pc = 0x29835Cu;
            goto label_29835c;
        }
    }
    ctx->pc = 0x298338u;
    // 0x298338: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x298338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29833c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x29833cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_298340:
    // 0x298340: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x298340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x298344: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x298344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x298348: 0x90a3ffff  lbu         $v1, -0x1($a1)
    ctx->pc = 0x298348u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x29834c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x29834cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x298350: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x298350u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x298354: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x298354u;
    {
        const bool branch_taken_0x298354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x298358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298354u;
        // 0x298358: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298354) {
            ctx->pc = 0x298340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_298340;
        }
    }
    ctx->pc = 0x29835Cu;
label_29835c:
    // 0x29835c: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x29835cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x298360: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x298360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298364: 0xc0f02a8  jal         func_3C0AA0
    ctx->pc = 0x298364u;
    SET_GPR_U32(ctx, 31, 0x29836Cu);
    ctx->pc = 0x298368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298364u;
    // 0x298368: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0AA0u, 0x298364u, 0x29836Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29836Cu;
label_29836c:
    // 0x29836c: 0xaea20078  sw          $v0, 0x78($s5)
    ctx->pc = 0x29836cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 120), GPR_U32(ctx, 2));
    // 0x298370: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x298370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298374: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x298374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298378: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x298378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29837c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x29837cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298380: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x298380u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x298384: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x298384u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x298388: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x298388u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x29838c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x29838cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298390: 0x3e00008  jr          $ra
    ctx->pc = 0x298390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298390u;
        // 0x298394: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298398u;
}
