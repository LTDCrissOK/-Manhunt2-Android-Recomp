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

// Function: sub_00298EB8
// Address: 0x298eb8 - 0x298f98
void sub_00298EB8_0x298eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298EB8_0x298eb8");
#endif

    switch (ctx->pc) {
        case 0x298eecu: goto label_298eec;
        case 0x298ef8u: goto label_298ef8;
        case 0x298f20u: goto label_298f20;
        case 0x298f2cu: goto label_298f2c;
        case 0x298f40u: goto label_298f40;
        default: break;
    }

    ctx->pc = 0x298eb8u;

    // 0x298eb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x298eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x298ebc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x298ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x298ec0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x298ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x298ec4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x298ec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298ec8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x298ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x298ecc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x298eccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298ed0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x298ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x298ed4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x298ed4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298ed8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x298ed8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298edc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x298edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x298ee0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x298ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x298ee4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x298EE4u;
    SET_GPR_U32(ctx, 31, 0x298EECu);
    ctx->pc = 0x298EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298EE4u;
    // 0x298ee8: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x298EE4u, 0x298EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298EECu;
label_298eec:
    // 0x298eec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x298eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298ef0: 0xc0a58d8  jal         func_296360
    ctx->pc = 0x298EF0u;
    SET_GPR_U32(ctx, 31, 0x298EF8u);
    ctx->pc = 0x298EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298EF0u;
    // 0x298ef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296360u, 0x298EF0u, 0x298EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298EF8u;
label_298ef8:
    // 0x298ef8: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x298ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x298efc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x298efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298f00: 0x24633108  addiu       $v1, $v1, 0x3108
    ctx->pc = 0x298f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12552));
    // 0x298f04: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x298f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x298f08: 0xa2060078  sb          $a2, 0x78($s0)
    ctx->pc = 0x298f08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 6));
    // 0x298f0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x298f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298f10: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x298f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x298f14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298f18: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x298F18u;
    SET_GPR_U32(ctx, 31, 0x298F20u);
    ctx->pc = 0x298F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298F18u;
    // 0x298f1c: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x298F18u, 0x298F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298F20u;
label_298f20:
    // 0x298f20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x298f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298f24: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x298F24u;
    SET_GPR_U32(ctx, 31, 0x298F2Cu);
    ctx->pc = 0x298F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298F24u;
    // 0x298f28: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x298F24u, 0x298F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298F2Cu;
label_298f2c:
    // 0x298f2c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x298f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298f30: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x298f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298f34: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x298f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x298f38: 0xc0a57e2  jal         func_295F88
    ctx->pc = 0x298F38u;
    SET_GPR_U32(ctx, 31, 0x298F40u);
    ctx->pc = 0x298F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298F38u;
    // 0x298f3c: 0xe6010018  swc1        $f1, 0x18($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F88u, 0x298F38u, 0x298F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298F40u;
label_298f40:
    // 0x298f40: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x298f40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298f44: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x298f44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x298f48: 0x3123a  dsrl        $v0, $v1, 8
    ctx->pc = 0x298f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 8);
    // 0x298f4c: 0x32e3a  dsrl        $a1, $v1, 24
    ctx->pc = 0x298f4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) >> 24);
    // 0x298f50: 0x3243a  dsrl        $a0, $v1, 16
    ctx->pc = 0x298f50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> 16);
    // 0x298f54: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x298f54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x298f58: 0xa3a40002  sb          $a0, 0x2($sp)
    ctx->pc = 0x298f58u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x298f5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x298f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298f60: 0xa3a50003  sb          $a1, 0x3($sp)
    ctx->pc = 0x298f60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x298f64: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x298f64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x298f68: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x298f68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298f6c: 0x8ba30003  lwl         $v1, 0x3($sp)
    ctx->pc = 0x298f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x298f70: 0x9ba30000  lwr         $v1, 0x0($sp)
    ctx->pc = 0x298f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x298f74: 0xaa030017  swl         $v1, 0x17($s0)
    ctx->pc = 0x298f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x298f78: 0xba030014  swr         $v1, 0x14($s0)
    ctx->pc = 0x298f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x298f7c: 0xa2140078  sb          $s4, 0x78($s0)
    ctx->pc = 0x298f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 20));
    // 0x298f80: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x298f80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298f84: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x298f84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298f88: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x298f88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298f8c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x298f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x298f90: 0x3e00008  jr          $ra
    ctx->pc = 0x298F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F90u;
        // 0x298f94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298F98u;
}
