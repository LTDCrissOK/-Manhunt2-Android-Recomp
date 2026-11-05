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

// Function: sub_0029A260
// Address: 0x29a260 - 0x29a368
void sub_0029A260_0x29a260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A260_0x29a260");
#endif

    switch (ctx->pc) {
        case 0x29a260u: goto label_29a260;
        case 0x29a264u: goto label_29a264;
        case 0x29a268u: goto label_29a268;
        case 0x29a26cu: goto label_29a26c;
        case 0x29a270u: goto label_29a270;
        case 0x29a274u: goto label_29a274;
        case 0x29a278u: goto label_29a278;
        case 0x29a27cu: goto label_29a27c;
        case 0x29a280u: goto label_29a280;
        case 0x29a284u: goto label_29a284;
        case 0x29a288u: goto label_29a288;
        case 0x29a28cu: goto label_29a28c;
        case 0x29a290u: goto label_29a290;
        case 0x29a294u: goto label_29a294;
        case 0x29a298u: goto label_29a298;
        case 0x29a29cu: goto label_29a29c;
        case 0x29a2a0u: goto label_29a2a0;
        case 0x29a2a4u: goto label_29a2a4;
        case 0x29a2a8u: goto label_29a2a8;
        case 0x29a2acu: goto label_29a2ac;
        case 0x29a2b0u: goto label_29a2b0;
        case 0x29a2b4u: goto label_29a2b4;
        case 0x29a2b8u: goto label_29a2b8;
        case 0x29a2bcu: goto label_29a2bc;
        case 0x29a2c0u: goto label_29a2c0;
        case 0x29a2c4u: goto label_29a2c4;
        case 0x29a2c8u: goto label_29a2c8;
        case 0x29a2ccu: goto label_29a2cc;
        case 0x29a2d0u: goto label_29a2d0;
        case 0x29a2d4u: goto label_29a2d4;
        case 0x29a2d8u: goto label_29a2d8;
        case 0x29a2dcu: goto label_29a2dc;
        case 0x29a2e0u: goto label_29a2e0;
        case 0x29a2e4u: goto label_29a2e4;
        case 0x29a2e8u: goto label_29a2e8;
        case 0x29a2ecu: goto label_29a2ec;
        case 0x29a2f0u: goto label_29a2f0;
        case 0x29a2f4u: goto label_29a2f4;
        case 0x29a2f8u: goto label_29a2f8;
        case 0x29a2fcu: goto label_29a2fc;
        case 0x29a300u: goto label_29a300;
        case 0x29a304u: goto label_29a304;
        case 0x29a308u: goto label_29a308;
        case 0x29a30cu: goto label_29a30c;
        case 0x29a310u: goto label_29a310;
        case 0x29a314u: goto label_29a314;
        case 0x29a318u: goto label_29a318;
        case 0x29a31cu: goto label_29a31c;
        case 0x29a320u: goto label_29a320;
        case 0x29a324u: goto label_29a324;
        case 0x29a328u: goto label_29a328;
        case 0x29a32cu: goto label_29a32c;
        case 0x29a330u: goto label_29a330;
        case 0x29a334u: goto label_29a334;
        case 0x29a338u: goto label_29a338;
        case 0x29a33cu: goto label_29a33c;
        case 0x29a340u: goto label_29a340;
        case 0x29a344u: goto label_29a344;
        case 0x29a348u: goto label_29a348;
        case 0x29a34cu: goto label_29a34c;
        case 0x29a350u: goto label_29a350;
        case 0x29a354u: goto label_29a354;
        case 0x29a358u: goto label_29a358;
        case 0x29a35cu: goto label_29a35c;
        case 0x29a360u: goto label_29a360;
        case 0x29a364u: goto label_29a364;
        default: break;
    }

    ctx->pc = 0x29a260u;

label_29a260:
    // 0x29a260: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29a260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_29a264:
    // 0x29a264: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29a264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_29a268:
    // 0x29a268: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x29a268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_29a26c:
    // 0x29a26c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29a26cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29a270:
    // 0x29a270: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x29a270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_29a274:
    // 0x29a274: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29a274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29a278:
    // 0x29a278: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x29a278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_29a27c:
    // 0x29a27c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x29a27cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29a280:
    // 0x29a280: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x29a280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_29a284:
    // 0x29a284: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x29a284u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_29a288:
    // 0x29a288: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x29a288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_29a28c:
    // 0x29a28c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x29a28cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_29a290:
    // 0x29a290: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x29a290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_29a294:
    // 0x29a294: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x29a294u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_29a298:
    // 0x29a298: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29a298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_29a29c:
    // 0x29a29c: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x29a29cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29a2a0:
    // 0x29a2a0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x29a2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_29a2a4:
    // 0x29a2a4: 0xc0f5240  jal         func_3D4900
label_29a2a8:
    if (ctx->pc == 0x29A2A8u) {
        ctx->pc = 0x29A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A2A4u;
        // 0x29a2a8: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A2ACu;
        goto label_29a2ac;
    }
    ctx->pc = 0x29A2A4u;
    SET_GPR_U32(ctx, 31, 0x29A2ACu);
    ctx->pc = 0x29A2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A2A4u;
    // 0x29a2a8: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x29A2A4u, 0x29A2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A2ACu;
label_29a2ac:
    // 0x29a2ac: 0xc0a6730  jal         func_299CC0
label_29a2b0:
    if (ctx->pc == 0x29A2B0u) {
        ctx->pc = 0x29A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A2ACu;
        // 0x29a2b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A2B4u;
        goto label_29a2b4;
    }
    ctx->pc = 0x29A2ACu;
    SET_GPR_U32(ctx, 31, 0x29A2B4u);
    ctx->pc = 0x29A2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A2ACu;
    // 0x29a2b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299CC0u, 0x29A2ACu, 0x29A2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A2B4u;
label_29a2b4:
    // 0x29a2b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29a2b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29a2b8:
    // 0x29a2b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29a2b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29a2bc:
    // 0x29a2bc: 0xc0d745c  jal         func_35D170
label_29a2c0:
    if (ctx->pc == 0x29A2C0u) {
        ctx->pc = 0x29A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A2BCu;
        // 0x29a2c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A2C4u;
        goto label_29a2c4;
    }
    ctx->pc = 0x29A2BCu;
    SET_GPR_U32(ctx, 31, 0x29A2C4u);
    ctx->pc = 0x29A2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A2BCu;
    // 0x29a2c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x29A2BCu, 0x29A2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A2C4u;
label_29a2c4:
    // 0x29a2c4: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x29a2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_29a2c8:
    // 0x29a2c8: 0xc0d745c  jal         func_35D170
label_29a2cc:
    if (ctx->pc == 0x29A2CCu) {
        ctx->pc = 0x29A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A2C8u;
        // 0x29a2cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A2D0u;
        goto label_29a2d0;
    }
    ctx->pc = 0x29A2C8u;
    SET_GPR_U32(ctx, 31, 0x29A2D0u);
    ctx->pc = 0x29A2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A2C8u;
    // 0x29a2cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x29A2C8u, 0x29A2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A2D0u;
label_29a2d0:
    // 0x29a2d0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x29a2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29a2d4:
    // 0x29a2d4: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x29a2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_29a2d8:
    // 0x29a2d8: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x29a2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29a2dc:
    // 0x29a2dc: 0xc0a57e2  jal         func_295F88
label_29a2e0:
    if (ctx->pc == 0x29A2E0u) {
        ctx->pc = 0x29A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A2DCu;
        // 0x29a2e0: 0xe601001c  swc1        $f1, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A2E4u;
        goto label_29a2e4;
    }
    ctx->pc = 0x29A2DCu;
    SET_GPR_U32(ctx, 31, 0x29A2E4u);
    ctx->pc = 0x29A2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A2DCu;
    // 0x29a2e0: 0xe601001c  swc1        $f1, 0x1C($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F88u, 0x29A2DCu, 0x29A2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A2E4u;
label_29a2e4:
    // 0x29a2e4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x29a2e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29a2e8:
    // 0x29a2e8: 0x24e3a  dsrl        $t1, $v0, 24
    ctx->pc = 0x29a2e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) >> 24);
label_29a2ec:
    // 0x29a2ec: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x29a2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
label_29a2f0:
    // 0x29a2f0: 0x2243a  dsrl        $a0, $v0, 16
    ctx->pc = 0x29a2f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> 16);
label_29a2f4:
    // 0x29a2f4: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x29a2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
label_29a2f8:
    // 0x29a2f8: 0xa3a40002  sb          $a0, 0x2($sp)
    ctx->pc = 0x29a2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 4));
label_29a2fc:
    // 0x29a2fc: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x29a2fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29a300:
    // 0x29a300: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x29a300u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_29a304:
    // 0x29a304: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x29a304u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29a308:
    // 0x29a308: 0xa3a90003  sb          $t1, 0x3($sp)
    ctx->pc = 0x29a308u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 9));
label_29a30c:
    // 0x29a30c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x29a30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_29a310:
    // 0x29a310: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x29a310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_29a314:
    // 0x29a314: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x29a314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_29a318:
    // 0x29a318: 0xaa020017  swl         $v0, 0x17($s0)
    ctx->pc = 0x29a318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_29a31c:
    // 0x29a31c: 0xba020014  swr         $v0, 0x14($s0)
    ctx->pc = 0x29a31cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_29a320:
    // 0x29a320: 0xc0a68da  jal         func_29A368
label_29a324:
    if (ctx->pc == 0x29A324u) {
        ctx->pc = 0x29A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A320u;
        // 0x29a324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A328u;
        goto label_29a328;
    }
    ctx->pc = 0x29A320u;
    SET_GPR_U32(ctx, 31, 0x29A328u);
    ctx->pc = 0x29A324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A320u;
    // 0x29a324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A368u, 0x29A320u, 0x29A328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A328u;
label_29a328:
    // 0x29a328: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x29a328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_29a32c:
    // 0x29a32c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x29a32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_29a330:
    // 0x29a330: 0x40f809  jalr        $v0
label_29a334:
    if (ctx->pc == 0x29A334u) {
        ctx->pc = 0x29A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A330u;
        // 0x29a334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A338u;
        goto label_29a338;
    }
    ctx->pc = 0x29A330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29A338u);
        ctx->pc = 0x29A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A330u;
        // 0x29a334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A330u, 0x29A338u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29A338u;
label_29a338:
    // 0x29a338: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29a338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29a33c:
    // 0x29a33c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x29a33cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_29a340:
    // 0x29a340: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29a340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29a344:
    // 0x29a344: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29a344u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29a348:
    // 0x29a348: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x29a348u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_29a34c:
    // 0x29a34c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x29a34cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29a350:
    // 0x29a350: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x29a350u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_29a354:
    // 0x29a354: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x29a354u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29a358:
    // 0x29a358: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x29a358u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_29a35c:
    // 0x29a35c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x29a35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_29a360:
    // 0x29a360: 0x3e00008  jr          $ra
label_29a364:
    if (ctx->pc == 0x29A364u) {
        ctx->pc = 0x29A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A360u;
        // 0x29a364: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A368u;
        goto label_fallthrough_0x29a360;
    }
    ctx->pc = 0x29A360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A360u;
        // 0x29a364: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29a360:
    ctx->pc = 0x29A368u;
}
