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

// Function: sub_00311B70
// Address: 0x311b70 - 0x311be8
void sub_00311B70_0x311b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311B70_0x311b70");
#endif

    switch (ctx->pc) {
        case 0x311bbcu: goto label_311bbc;
        default: break;
    }

    ctx->pc = 0x311b70u;

    // 0x311b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x311b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x311b74: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x311b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x311b78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x311b78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311b7c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x311b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x311b80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x311b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x311b84: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x311b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x311b88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x311b88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311b8c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x311b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x311b90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x311b90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x311b94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x311b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311b98: 0xae00056c  sw          $zero, 0x56C($s0)
    ctx->pc = 0x311b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1388), GPR_U32(ctx, 0));
    // 0x311b9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x311b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311ba0: 0xa200057c  sb          $zero, 0x57C($s0)
    ctx->pc = 0x311ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1404), (uint8_t)GPR_U32(ctx, 0));
    // 0x311ba4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x311ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x311ba8: 0xa200057d  sb          $zero, 0x57D($s0)
    ctx->pc = 0x311ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1405), (uint8_t)GPR_U32(ctx, 0));
    // 0x311bac: 0xe6000570  swc1        $f0, 0x570($s0)
    ctx->pc = 0x311bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1392), bits); }
    // 0x311bb0: 0xe6010574  swc1        $f1, 0x574($s0)
    ctx->pc = 0x311bb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1396), bits); }
    // 0x311bb4: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x311BB4u;
    SET_GPR_U32(ctx, 31, 0x311BBCu);
    ctx->pc = 0x311BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311BB4u;
    // 0x311bb8: 0xae020568  sw          $v0, 0x568($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1384), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x311BB4u, 0x311BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311BBCu;
label_311bbc:
    // 0x311bbc: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x311bbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x311bc0: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x311bc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x311bc4: 0xaa02005f  swl         $v0, 0x5F($s0)
    ctx->pc = 0x311bc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 95); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x311bc8: 0xba02005c  swr         $v0, 0x5C($s0)
    ctx->pc = 0x311bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 92); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x311bcc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x311bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x311bd0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x311bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x311bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x311BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311BD4u;
        // 0x311bd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311BDCu;
    // 0x311bdc: 0x0  nop
    ctx->pc = 0x311bdcu;
    // NOP
    // 0x311be0: 0xac8001f0  sw          $zero, 0x1F0($a0)
    ctx->pc = 0x311be0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 496), GPR_U32(ctx, 0));
    // 0x311be4: 0x0  nop
    ctx->pc = 0x311be4u;
    // NOP
    ctx->pc = 0x311be8u;
}
