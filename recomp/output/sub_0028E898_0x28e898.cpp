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

// Function: sub_0028E898
// Address: 0x28e898 - 0x28e8e8
void sub_0028E898_0x28e898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E898_0x28e898");
#endif

    switch (ctx->pc) {
        case 0x28e8b0u: goto label_28e8b0;
        case 0x28e8c4u: goto label_28e8c4;
        default: break;
    }

    ctx->pc = 0x28e898u;

    // 0x28e898: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28e898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28e89c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x28e89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x28e8a0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x28e8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x28e8a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28e8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28e8a8: 0xc0a3948  jal         func_28E520
    ctx->pc = 0x28E8A8u;
    SET_GPR_U32(ctx, 31, 0x28E8B0u);
    ctx->pc = 0x28E8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E8A8u;
    // 0x28e8ac: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E520u, 0x28E8A8u, 0x28E8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E8B0u;
label_28e8b0:
    // 0x28e8b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28e8b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e8b4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28E8B4u;
    {
        const bool branch_taken_0x28e8b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E8B4u;
        // 0x28e8b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e8b4) {
            ctx->pc = 0x28E8D4u;
            goto label_28e8d4;
        }
    }
    ctx->pc = 0x28E8BCu;
    // 0x28e8bc: 0xc0a36ca  jal         func_28DB28
    ctx->pc = 0x28E8BCu;
    SET_GPR_U32(ctx, 31, 0x28E8C4u);
    ctx->pc = 0x28E8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E8BCu;
    // 0x28e8c0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB28u, 0x28E8BCu, 0x28E8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E8C4u;
label_28e8c4:
    // 0x28e8c4: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x28e8c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x28e8c8: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x28e8c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x28e8cc: 0xaa020033  swl         $v0, 0x33($s0)
    ctx->pc = 0x28e8ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 51); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x28e8d0: 0xba020030  swr         $v0, 0x30($s0)
    ctx->pc = 0x28e8d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_28e8d4:
    // 0x28e8d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x28e8d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e8d8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x28e8d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28e8dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28e8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28e8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x28E8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E8E0u;
        // 0x28e8e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E8E8u;
}
