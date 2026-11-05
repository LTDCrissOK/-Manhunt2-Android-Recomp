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

// Function: sub_00134FA8
// Address: 0x134fa8 - 0x134fb8
void sub_00134FA8_0x134fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134FA8_0x134fa8");
#endif

    ctx->pc = 0x134fa8u;

    // 0x134fa8: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x134fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x134fac: 0x2c620027  sltiu       $v0, $v1, 0x27
    ctx->pc = 0x134facu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)39) ? 1 : 0);
    // 0x134fb0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x134FB0u;
    {
        const bool branch_taken_0x134fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134FB0u;
        // 0x134fb4: 0x2c620062  sltiu       $v0, $v1, 0x62 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)98) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134fb0) {
            ctx->pc = 0x134FC0u;
            return;
        }
    }
    ctx->pc = 0x134FB8u;
}
