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

// Function: sub_0023E5C8
// Address: 0x23e5c8 - 0x23e608
void sub_0023E5C8_0x23e5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E5C8_0x23e5c8");
#endif

    ctx->pc = 0x23e5c8u;

    // 0x23e5c8: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x23e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x23e5cc: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23e5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x23e5d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23E5D0u;
    {
        const bool branch_taken_0x23e5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5D0u;
        // 0x23e5d4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e5d0) {
            ctx->pc = 0x23E600u;
            goto label_23e600;
        }
    }
    ctx->pc = 0x23E5D8u;
    // 0x23e5d8: 0x8c82036c  lw          $v0, 0x36C($a0)
    ctx->pc = 0x23e5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 876)));
    // 0x23e5dc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x23e5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23e5e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23E5E0u;
    {
        const bool branch_taken_0x23e5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e5e0) {
            ctx->pc = 0x23E600u;
            goto label_23e600;
        }
    }
    ctx->pc = 0x23E5E8u;
    // 0x23e5e8: 0x8c820370  lw          $v0, 0x370($a0)
    ctx->pc = 0x23e5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x23e5ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23e5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23e5f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E5F0u;
    {
        const bool branch_taken_0x23e5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e5f0) {
            ctx->pc = 0x23E600u;
            goto label_23e600;
        }
    }
    ctx->pc = 0x23E5F8u;
    // 0x23e5f8: 0x9082047d  lbu         $v0, 0x47D($a0)
    ctx->pc = 0x23e5f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1149)));
    // 0x23e5fc: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x23e5fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23e600:
    // 0x23e600: 0x3e00008  jr          $ra
    ctx->pc = 0x23E600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E600u;
        // 0x23e604: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E608u;
}
