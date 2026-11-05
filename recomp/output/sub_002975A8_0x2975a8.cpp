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

// Function: sub_002975A8
// Address: 0x2975a8 - 0x2976a0
void sub_002975A8_0x2975a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002975A8_0x2975a8");
#endif

    switch (ctx->pc) {
        case 0x2975e0u: goto label_2975e0;
        case 0x2975f0u: goto label_2975f0;
        case 0x297604u: goto label_297604;
        case 0x29761cu: goto label_29761c;
        case 0x297624u: goto label_297624;
        case 0x29765cu: goto label_29765c;
        case 0x297678u: goto label_297678;
        default: break;
    }

    ctx->pc = 0x2975a8u;

    // 0x2975a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2975a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2975ac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2975acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2975b0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2975b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2975b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2975b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2975b8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2975b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2975bc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2975bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2975c0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2975c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2975c4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2975c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2975c8: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2975c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2975cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2975ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2975d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2975d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2975d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2975d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2975d8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2975D8u;
    SET_GPR_U32(ctx, 31, 0x2975E0u);
    ctx->pc = 0x2975DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2975D8u;
    // 0x2975dc: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2975D8u, 0x2975E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2975E0u;
label_2975e0:
    // 0x2975e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2975e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2975e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2975e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2975e8: 0xc0a58d8  jal         func_296360
    ctx->pc = 0x2975E8u;
    SET_GPR_U32(ctx, 31, 0x2975F0u);
    ctx->pc = 0x2975ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2975E8u;
    // 0x2975ec: 0x26120078  addiu       $s2, $s0, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296360u, 0x2975E8u, 0x2975F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2975F0u;
label_2975f0:
    // 0x2975f0: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2975f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2975f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2975f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2975f8: 0x24633220  addiu       $v1, $v1, 0x3220
    ctx->pc = 0x2975f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12832));
    // 0x2975fc: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2975FCu;
    SET_GPR_U32(ctx, 31, 0x297604u);
    ctx->pc = 0x297600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2975FCu;
    // 0x297600: 0xae030074  sw          $v1, 0x74($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2975FCu, 0x297604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297604u;
label_297604:
    // 0x297604: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x297604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x297608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x297608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29760c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29760cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297610: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x297610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x297614: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x297614u;
    SET_GPR_U32(ctx, 31, 0x29761Cu);
    ctx->pc = 0x297618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297614u;
    // 0x297618: 0xa2000080  sb          $zero, 0x80($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x297614u, 0x29761Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29761Cu;
label_29761c:
    // 0x29761c: 0xc0a57e2  jal         func_295F88
    ctx->pc = 0x29761Cu;
    SET_GPR_U32(ctx, 31, 0x297624u);
    ctx->pc = 0x295F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F88u, 0x29761Cu, 0x297624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297624u;
label_297624:
    // 0x297624: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x297624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297628: 0x2363a  dsrl        $a2, $v0, 24
    ctx->pc = 0x297628u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> 24);
    // 0x29762c: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x29762cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
    // 0x297630: 0x2243a  dsrl        $a0, $v0, 16
    ctx->pc = 0x297630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> 16);
    // 0x297634: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x297634u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x297638: 0xa3a40002  sb          $a0, 0x2($sp)
    ctx->pc = 0x297638u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x29763c: 0xa3a60003  sb          $a2, 0x3($sp)
    ctx->pc = 0x29763cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x297640: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x297640u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x297644: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x297644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x297648: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x297648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x29764c: 0xaa020017  swl         $v0, 0x17($s0)
    ctx->pc = 0x29764cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x297650: 0xba020014  swr         $v0, 0x14($s0)
    ctx->pc = 0x297650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x297654: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x297654u;
    SET_GPR_U32(ctx, 31, 0x29765Cu);
    ctx->pc = 0x297658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297654u;
    // 0x297658: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x297654u, 0x29765Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29765Cu;
label_29765c:
    // 0x29765c: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x29765cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297660: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x297660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297664: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x297664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297668: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x297668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29766c: 0xe601001c  swc1        $f1, 0x1C($s0)
    ctx->pc = 0x29766cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x297670: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x297670u;
    SET_GPR_U32(ctx, 31, 0x297678u);
    ctx->pc = 0x297674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297670u;
    // 0x297674: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x297670u, 0x297678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297678u;
label_297678:
    // 0x297678: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x297678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29767c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x29767cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x297680: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x297680u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297684: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x297684u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297688: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x297688u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29768c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x29768cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297690: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x297690u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297694: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x297694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x297698: 0x3e00008  jr          $ra
    ctx->pc = 0x297698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297698u;
        // 0x29769c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2976A0u;
}
