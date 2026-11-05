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

// Function: entry_0015601e
// Address: 0x15601e - 0x156034
void entry_0015601e_0x15601e(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015601e_0x15601e");
#endif

    ctx->pc = 0x15601eu;

    // 0x15601e: 0x88c64  .word       0x00088C64                   # and         $s1, $zero, $t0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x15601eu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) & GPR_U64(ctx, 8));
    // 0x156022: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x156022u;
    
    // 0x156026: 0x59580000  .word       0x59580000                   # blezl       $t2, . + 4 + (0x0 << 2) # 00180000 <InstrIdType: CPU_NORMAL>
label_15602a:
    if (ctx->pc == 0x15602Au) {
        ctx->pc = 0x15602Au;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156026u;
        // 0x15602a: 0x202d0c05  addi        $t5, $at, 0xC05 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)3077, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15602Eu;
        goto label_fallthrough_0x156026;
    }
    ctx->pc = 0x156026u;
    {
        const bool branch_taken_0x156026 = (GPR_S32(ctx, 10) <= 0);
        if (branch_taken_0x156026) {
            ctx->pc = 0x15602Au;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156026u;
            // 0x15602a: 0x202d0c05  addi        $t5, $at, 0xC05 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)3077, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x15602Au;
            goto label_15602a;
        }
    }
label_fallthrough_0x156026:
    ctx->pc = 0x15602Eu;
    // 0x15602e: 0x180200  sll         $zero, $t8, 8
    ctx->pc = 0x15602eu;
    
    // 0x156032: 0x11000  sll         $v0, $at, 0
    ctx->pc = 0x156032u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
    ctx->pc = 0x156034u;
}
