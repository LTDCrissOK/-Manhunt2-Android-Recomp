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

// Function: sub_003748C0
// Address: 0x3748c0 - 0x3748f8
void sub_003748C0_0x3748c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003748C0_0x3748c0");
#endif

    switch (ctx->pc) {
        case 0x3748ecu: goto label_3748ec;
        default: break;
    }

    ctx->pc = 0x3748c0u;

    // 0x3748c0: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x3748c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3748c4: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x3748c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x3748c8: 0x3084ff00  andi        $a0, $a0, 0xFF00
    ctx->pc = 0x3748c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x3748cc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x3748ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x3748d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3748d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3748d4: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x3748d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3748d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3748d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3748dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3748dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3748e0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3748e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3748e4: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x3748E4u;
    SET_GPR_U32(ctx, 31, 0x3748ECu);
    ctx->pc = 0x3748E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3748E4u;
    // 0x3748e8: 0x2404003d  addiu       $a0, $zero, 0x3D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x3748E4u, 0x3748ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3748ECu;
label_3748ec:
    // 0x3748ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3748ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3748f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3748F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3748F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3748F0u;
        // 0x3748f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3748F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3748F8u;
}
