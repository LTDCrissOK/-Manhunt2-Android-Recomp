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

// Function: sub_00297288
// Address: 0x297288 - 0x297350
void sub_00297288_0x297288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297288_0x297288");
#endif

    switch (ctx->pc) {
        case 0x2972b4u: goto label_2972b4;
        case 0x2972bcu: goto label_2972bc;
        case 0x2972ccu: goto label_2972cc;
        case 0x2972d8u: goto label_2972d8;
        case 0x2972fcu: goto label_2972fc;
        default: break;
    }

    ctx->pc = 0x297288u;

    // 0x297288: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x297288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29728c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x29728cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x297290: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x297290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x297294: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x297294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297298: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x297298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x29729c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29729cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2972a0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2972a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2972a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2972a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2972a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2972a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2972ac: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2972ACu;
    SET_GPR_U32(ctx, 31, 0x2972B4u);
    ctx->pc = 0x2972B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2972ACu;
    // 0x2972b0: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2972ACu, 0x2972B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2972B4u;
label_2972b4:
    // 0x2972b4: 0xc0a5c88  jal         func_297220
    ctx->pc = 0x2972B4u;
    SET_GPR_U32(ctx, 31, 0x2972BCu);
    ctx->pc = 0x2972B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2972B4u;
    // 0x2972b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297220u, 0x2972B4u, 0x2972BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2972BCu;
label_2972bc:
    // 0x2972bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2972bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2972c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2972c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2972c4: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x2972C4u;
    SET_GPR_U32(ctx, 31, 0x2972CCu);
    ctx->pc = 0x2972C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2972C4u;
    // 0x2972c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x2972C4u, 0x2972CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2972CCu;
label_2972cc:
    // 0x2972cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2972ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2972d0: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x2972D0u;
    SET_GPR_U32(ctx, 31, 0x2972D8u);
    ctx->pc = 0x2972D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2972D0u;
    // 0x2972d4: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x2972D0u, 0x2972D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2972D8u;
label_2972d8:
    // 0x2972d8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2972d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2972dc: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x2972dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x2972e0: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2972e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2972e4: 0xe6010050  swc1        $f1, 0x50($s0)
    ctx->pc = 0x2972e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2972e8: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2972e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2972ec: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2972ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2972f0: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2972f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2972f4: 0xc0a57e2  jal         func_295F88
    ctx->pc = 0x2972F4u;
    SET_GPR_U32(ctx, 31, 0x2972FCu);
    ctx->pc = 0x2972F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2972F4u;
    // 0x2972f8: 0xe6010058  swc1        $f1, 0x58($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F88u, 0x2972F4u, 0x2972FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2972FCu;
label_2972fc:
    // 0x2972fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2972fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297300: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x297300u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x297304: 0x3123a  dsrl        $v0, $v1, 8
    ctx->pc = 0x297304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 8);
    // 0x297308: 0x32e3a  dsrl        $a1, $v1, 24
    ctx->pc = 0x297308u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) >> 24);
    // 0x29730c: 0x3243a  dsrl        $a0, $v1, 16
    ctx->pc = 0x29730cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> 16);
    // 0x297310: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x297310u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x297314: 0xa3a40002  sb          $a0, 0x2($sp)
    ctx->pc = 0x297314u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x297318: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x297318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29731c: 0xa3a50003  sb          $a1, 0x3($sp)
    ctx->pc = 0x29731cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x297320: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x297320u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x297324: 0x8ba30003  lwl         $v1, 0x3($sp)
    ctx->pc = 0x297324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x297328: 0x9ba30000  lwr         $v1, 0x0($sp)
    ctx->pc = 0x297328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x29732c: 0xaa030017  swl         $v1, 0x17($s0)
    ctx->pc = 0x29732cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x297330: 0xba030014  swr         $v1, 0x14($s0)
    ctx->pc = 0x297330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x297334: 0xa200006c  sb          $zero, 0x6C($s0)
    ctx->pc = 0x297334u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
    // 0x297338: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x297338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29733c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29733cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297340: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x297340u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x297344: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x297344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297348: 0x3e00008  jr          $ra
    ctx->pc = 0x297348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297348u;
        // 0x29734c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297350u;
}
