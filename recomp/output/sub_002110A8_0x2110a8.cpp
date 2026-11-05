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

// Function: sub_002110A8
// Address: 0x2110a8 - 0x2110f0
void sub_002110A8_0x2110a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002110A8_0x2110a8");
#endif

    switch (ctx->pc) {
        case 0x2110c8u: goto label_2110c8;
        default: break;
    }

    ctx->pc = 0x2110a8u;

    // 0x2110a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2110a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2110ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2110acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2110b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2110b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2110b4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2110b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2110b8: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x2110b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x2110bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2110bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2110c0: 0xc0f7676  jal         func_3DD9D8
    ctx->pc = 0x2110C0u;
    SET_GPR_U32(ctx, 31, 0x2110C8u);
    ctx->pc = 0x2110C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2110C0u;
    // 0x2110c4: 0x24843530  addiu       $a0, $a0, 0x3530 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD9D8u, 0x2110C0u, 0x2110C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2110C8u;
label_2110c8:
    // 0x2110c8: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x2110c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2110cc: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x2110ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x2110d0: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x2110d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
    // 0x2110d4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2110d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2110d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2110d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2110dc: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x2110dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x2110e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2110e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2110e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2110E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2110E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110E4u;
        // 0x2110e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2110E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2110ECu;
    // 0x2110ec: 0x0  nop
    ctx->pc = 0x2110ecu;
    // NOP
    ctx->pc = 0x2110f0u;
}
