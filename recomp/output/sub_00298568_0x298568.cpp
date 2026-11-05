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

// Function: sub_00298568
// Address: 0x298568 - 0x2986b8
void sub_00298568_0x298568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298568_0x298568");
#endif

    switch (ctx->pc) {
        case 0x29859cu: goto label_29859c;
        case 0x2985a8u: goto label_2985a8;
        case 0x2985c0u: goto label_2985c0;
        case 0x2985c8u: goto label_2985c8;
        case 0x2985e8u: goto label_2985e8;
        case 0x2985fcu: goto label_2985fc;
        case 0x298634u: goto label_298634;
        case 0x298658u: goto label_298658;
        case 0x298684u: goto label_298684;
        case 0x298694u: goto label_298694;
        default: break;
    }

    ctx->pc = 0x298568u;

    // 0x298568: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x298568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29856c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x29856cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x298570: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x298570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x298574: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x298574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298578: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x298578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29857c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29857cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298580: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x298580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x298584: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x298584u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298588: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x298588u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29858c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x29858cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x298590: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x298590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x298594: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x298594u;
    SET_GPR_U32(ctx, 31, 0x29859Cu);
    ctx->pc = 0x298598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298594u;
    // 0x298598: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x298594u, 0x29859Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29859Cu;
label_29859c:
    // 0x29859c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x29859cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2985a0: 0xc0a58d8  jal         func_296360
    ctx->pc = 0x2985A0u;
    SET_GPR_U32(ctx, 31, 0x2985A8u);
    ctx->pc = 0x2985A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2985A0u;
    // 0x2985a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296360u, 0x2985A0u, 0x2985A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2985A8u;
label_2985a8:
    // 0x2985a8: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2985a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2985ac: 0x2664007c  addiu       $a0, $s3, 0x7C
    ctx->pc = 0x2985acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 124));
    // 0x2985b0: 0x246331e8  addiu       $v1, $v1, 0x31E8
    ctx->pc = 0x2985b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12776));
    // 0x2985b4: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2985b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2985b8: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2985B8u;
    SET_GPR_U32(ctx, 31, 0x2985C0u);
    ctx->pc = 0x2985BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2985B8u;
    // 0x2985bc: 0xae630074  sw          $v1, 0x74($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2985B8u, 0x2985C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2985C0u;
label_2985c0:
    // 0x2985c0: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2985C0u;
    SET_GPR_U32(ctx, 31, 0x2985C8u);
    ctx->pc = 0x2985C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2985C0u;
    // 0x2985c4: 0x26640084  addiu       $a0, $s3, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2985C0u, 0x2985C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2985C8u;
label_2985c8:
    // 0x2985c8: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2985c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2985cc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2985ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2985d0: 0x24633140  addiu       $v1, $v1, 0x3140
    ctx->pc = 0x2985d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12608));
    // 0x2985d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2985d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2985d8: 0xae630074  sw          $v1, 0x74($s3)
    ctx->pc = 0x2985d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 3));
    // 0x2985dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2985dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2985e0: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x2985E0u;
    SET_GPR_U32(ctx, 31, 0x2985E8u);
    ctx->pc = 0x2985E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2985E0u;
    // 0x2985e4: 0xae620070  sw          $v0, 0x70($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x2985E0u, 0x2985E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2985E8u;
label_2985e8:
    // 0x2985e8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2985e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2985ec: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2985ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2985f0: 0xe660001c  swc1        $f0, 0x1C($s3)
    ctx->pc = 0x2985f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    // 0x2985f4: 0xc0a57e2  jal         func_295F88
    ctx->pc = 0x2985F4u;
    SET_GPR_U32(ctx, 31, 0x2985FCu);
    ctx->pc = 0x2985F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2985F4u;
    // 0x2985f8: 0xe6610018  swc1        $f1, 0x18($s3) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F88u, 0x2985F4u, 0x2985FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2985FCu;
label_2985fc:
    // 0x2985fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2985fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298600: 0x2363a  dsrl        $a2, $v0, 24
    ctx->pc = 0x298600u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> 24);
    // 0x298604: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x298604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
    // 0x298608: 0x22c3a  dsrl        $a1, $v0, 16
    ctx->pc = 0x298608u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 16);
    // 0x29860c: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x29860cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x298610: 0xa3a50002  sb          $a1, 0x2($sp)
    ctx->pc = 0x298610u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x298614: 0xa3a60003  sb          $a2, 0x3($sp)
    ctx->pc = 0x298614u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x298618: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x298618u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x29861c: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x29861cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x298620: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x298620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x298624: 0xaa620017  swl         $v0, 0x17($s3)
    ctx->pc = 0x298624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x298628: 0xba620014  swr         $v0, 0x14($s3)
    ctx->pc = 0x298628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x29862c: 0xc0d757c  jal         func_35D5F0
    ctx->pc = 0x29862Cu;
    SET_GPR_U32(ctx, 31, 0x298634u);
    ctx->pc = 0x298630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29862Cu;
    // 0x298630: 0x2405005f  addiu       $a1, $zero, 0x5F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5F0u, 0x29862Cu, 0x298634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298634u;
label_298634:
    // 0x298634: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x298634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x298638: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x298638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29863c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x29863cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x298640: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x298640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x298644: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x298644u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x298648: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x298648u;
    {
        const bool branch_taken_0x298648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298648u;
        // 0x29864c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298648) {
            ctx->pc = 0x298674u;
            goto label_298674;
        }
    }
    ctx->pc = 0x298650u;
    // 0x298650: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x298650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298654: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x298654u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_298658:
    // 0x298658: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x298658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x29865c: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x29865cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x298660: 0x90a3ffff  lbu         $v1, -0x1($a1)
    ctx->pc = 0x298660u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x298664: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x298664u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x298668: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x298668u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29866c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29866Cu;
    {
        const bool branch_taken_0x29866c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x298670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29866Cu;
        // 0x298670: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29866c) {
            ctx->pc = 0x298658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_298658;
        }
    }
    ctx->pc = 0x298674u;
label_298674:
    // 0x298674: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x298674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x298678: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x298678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29867c: 0xc0f02a8  jal         func_3C0AA0
    ctx->pc = 0x29867Cu;
    SET_GPR_U32(ctx, 31, 0x298684u);
    ctx->pc = 0x298680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29867Cu;
    // 0x298680: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0AA0u, 0x29867Cu, 0x298684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298684u;
label_298684:
    // 0x298684: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x298684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298688: 0x26640084  addiu       $a0, $s3, 0x84
    ctx->pc = 0x298688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
    // 0x29868c: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x29868Cu;
    SET_GPR_U32(ctx, 31, 0x298694u);
    ctx->pc = 0x298690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29868Cu;
    // 0x298690: 0xae620078  sw          $v0, 0x78($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x29868Cu, 0x298694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298694u;
label_298694:
    // 0x298694: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x298694u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298698: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x298698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29869c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x29869cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2986a0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2986a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2986a4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2986a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2986a8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2986a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2986ac: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2986acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2986b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2986B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2986B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2986B0u;
        // 0x2986b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2986B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2986B8u;
}
