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

// Function: sub_00373208
// Address: 0x373208 - 0x373268
void sub_00373208_0x373208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373208_0x373208");
#endif

    ctx->pc = 0x373208u;

    // 0x373208: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x373208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x37320c: 0x8c625b28  lw          $v0, 0x5B28($v1)
    ctx->pc = 0x37320cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x655B28u));
    // 0x373210: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x373210u;
    {
        const bool branch_taken_0x373210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x373214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373210u;
        // 0x373214: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373210) {
            ctx->pc = 0x373228u;
            goto label_373228;
        }
    }
    ctx->pc = 0x373218u;
    // 0x373218: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x373218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x37321c: 0xac645b28  sw          $a0, 0x5B28($v1)
    ctx->pc = 0x37321cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 23336), GPR_U32(ctx, 4));
    // 0x373220: 0x3e00008  jr          $ra
    ctx->pc = 0x373220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373220u;
        // 0x373224: 0xac475b2c  sw          $a3, 0x5B2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 23340), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373228u;
label_373228:
    // 0x373228: 0x3c02cfff  lui         $v0, 0xCFFF
    ctx->pc = 0x373228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53247 << 16));
    // 0x37322c: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x37322cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x373230: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x373230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x373234: 0x823024  and         $a2, $a0, $v0
    ctx->pc = 0x373234u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x373238: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x373238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x37323c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x37323Cu;
    {
        const bool branch_taken_0x37323c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x373240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37323Cu;
        // 0x373240: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37323c) {
            ctx->pc = 0x373248u;
            goto label_373248;
        }
    }
    ctx->pc = 0x373244u;
    // 0x373244: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x373244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_373248:
    // 0x373248: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x373248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x37324c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x37324cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x373250: 0x8c825b2c  lw          $v0, 0x5B2C($a0)
    ctx->pc = 0x373250u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x655B2Cu));
    // 0x373254: 0xa0450003  sb          $a1, 0x3($v0)
    ctx->pc = 0x373254u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x373258: 0x8c835b2c  lw          $v1, 0x5B2C($a0)
    ctx->pc = 0x373258u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x655B2Cu));
    // 0x37325c: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x37325cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x373260: 0x3e00008  jr          $ra
    ctx->pc = 0x373260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373260u;
        // 0x373264: 0xac875b2c  sw          $a3, 0x5B2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 23340), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373268u;
}
