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

// Function: entry_00156204
// Address: 0x156204 - 0x156218
void entry_00156204_0x156204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156204_0x156204");
#endif

    ctx->pc = 0x156204u;

    // 0x156204: 0x5443004d  bnel        $v0, $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x156204u;
    {
        const bool branch_taken_0x156204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x156204) {
            ctx->pc = 0x156208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156204u;
            // 0x156208: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15633Cu;
            return;
        }
    }
    ctx->pc = 0x15620Cu;
    // 0x15620c: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x15620cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x156210: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x156210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x156214: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x156214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x156218u;
}
