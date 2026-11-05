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

// Function: sub_003A65A0
// Address: 0x3a65a0 - 0x3a65f8
void sub_003A65A0_0x3a65a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A65A0_0x3a65a0");
#endif

    switch (ctx->pc) {
        case 0x3a65c0u: goto label_3a65c0;
        case 0x3a65e4u: goto label_3a65e4;
        default: break;
    }

    ctx->pc = 0x3a65a0u;

    // 0x3a65a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a65a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a65a4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x3a65a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3a65a8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3a65a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3a65ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a65acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a65b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a65b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a65b4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3a65b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3a65b8: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3A65B8u;
    SET_GPR_U32(ctx, 31, 0x3A65C0u);
    ctx->pc = 0x3A65BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A65B8u;
    // 0x3a65bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3A65B8u, 0x3A65C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A65C0u;
label_3a65c0:
    // 0x3a65c0: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x3a65c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x3a65c4: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x3a65c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x3a65c8: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x3a65c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3a65cc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a65ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a65d0: 0x24a5de68  addiu       $a1, $a1, -0x2198
    ctx->pc = 0x3a65d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958696));
    // 0x3a65d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a65d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a65d8: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x3a65d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3a65dc: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x3A65DCu;
    SET_GPR_U32(ctx, 31, 0x3A65E4u);
    ctx->pc = 0x3A65E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A65DCu;
    // 0x3a65e0: 0xa3a00005  sb          $zero, 0x5($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x3A65DCu, 0x3A65E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A65E4u;
label_3a65e4:
    // 0x3a65e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3a65e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a65e8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3a65e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3a65ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3a65ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a65f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A65F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A65F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A65F0u;
        // 0x3a65f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A65F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A65F8u;
}
