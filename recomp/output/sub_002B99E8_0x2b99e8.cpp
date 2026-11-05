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

// Function: sub_002B99E8
// Address: 0x2b99e8 - 0x2b9a18
void sub_002B99E8_0x2b99e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B99E8_0x2b99e8");
#endif

    switch (ctx->pc) {
        case 0x2b9a00u: goto label_2b9a00;
        default: break;
    }

    ctx->pc = 0x2b99e8u;

    // 0x2b99e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b99e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b99ec: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2b99ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2b99f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b99f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b99f4: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x2b99f4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2b99f8: 0xc0ae8c8  jal         func_2BA320
    ctx->pc = 0x2B99F8u;
    SET_GPR_U32(ctx, 31, 0x2B9A00u);
    ctx->pc = 0x2B99FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B99F8u;
    // 0x2b99fc: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA320u, 0x2B99F8u, 0x2B9A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9A00u;
label_2b9a00:
    // 0x2b9a00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b9a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9a04: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A04u;
        // 0x2b9a08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9A0Cu;
    // 0x2b9a0c: 0x0  nop
    ctx->pc = 0x2b9a0cu;
    // NOP
    // 0x2b9a10: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b9a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b9a14: 0x0  nop
    ctx->pc = 0x2b9a14u;
    // NOP
    ctx->pc = 0x2b9a18u;
}
