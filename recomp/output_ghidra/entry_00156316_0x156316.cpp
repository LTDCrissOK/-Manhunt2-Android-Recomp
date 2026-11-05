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

// Function: entry_00156316
// Address: 0x156316 - 0x156328
void entry_00156316_0x156316(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156316_0x156316");
#endif

    ctx->pc = 0x156316u;

    // 0x156316: 0x8e02  srl         $s1, $zero, 24
    ctx->pc = 0x156316u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 0), 24));
    // 0x15631a: 0xda41  .word       0x0000DA41                   # INVALID     $zero, $zero, -0x25BF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x15631au;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x15631A raw=0x0000DA41");
    // 0x15631e: 0x86cd842  j           func_1B36108
    ctx->pc = 0x15631Eu;
    ctx->pc = 0x156322u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15631Eu;
    // 0x156322: 0x4bc2  srl         $t1, $zero, 15 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B36108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B36108u, 0x15631Eu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x156326u;
    // 0x156326: 0x202dfba1  addi        $t5, $at, -0x45F
    ctx->pc = 0x156326u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)4294966177, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    ctx->pc = 0x156328u;
}
