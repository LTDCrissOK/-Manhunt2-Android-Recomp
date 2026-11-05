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

// Function: sub_0011E338
// Address: 0x11e338 - 0x11e384
void sub_0011E338_0x11e338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E338_0x11e338");
#endif

    ctx->pc = 0x11e338u;

    // 0x11e338: 0x2ca20040  sltiu       $v0, $a1, 0x40
    ctx->pc = 0x11e338u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x11e33c: 0x1040024f  beqz        $v0, . + 4 + (0x24F << 2)
    ctx->pc = 0x11E33Cu;
    {
        const bool branch_taken_0x11e33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E33Cu;
        // 0x11e340: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e33c) {
            ctx->pc = 0x11EC7Cu;
            return;
        }
    }
    ctx->pc = 0x11E344u;
    // 0x11e344: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x11e344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x11e348: 0x2442c730  addiu       $v0, $v0, -0x38D0
    ctx->pc = 0x11e348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952752));
    // 0x11e34c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11e34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11e350: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11e350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11e354: 0x800008  jr          $a0
    ctx->pc = 0x11E354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E35Cu: goto label_11e35c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E354u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11E35Cu;
label_11e35c:
    // 0x11e35c: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x11e35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x11e360: 0x2447c3c8  addiu       $a3, $v0, -0x3C38
    ctx->pc = 0x11e360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951880));
    // 0x11e364: 0x88e30003  lwl         $v1, 0x3($a3)
    ctx->pc = 0x11e364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x11e368: 0x98e30000  lwr         $v1, 0x0($a3)
    ctx->pc = 0x11e368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x11e36c: 0x80e40004  lb          $a0, 0x4($a3)
    ctx->pc = 0x11e36cu;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x43C3CCu));
    // 0x11e370: 0xa8c30003  swl         $v1, 0x3($a2)
    ctx->pc = 0x11e370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x11e374: 0xb8c30000  swr         $v1, 0x0($a2)
    ctx->pc = 0x11e374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x11e378: 0xa0c40004  sb          $a0, 0x4($a2)
    ctx->pc = 0x11e378u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x11e37c: 0x3e00008  jr          $ra
    ctx->pc = 0x11E37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E384u;
}
