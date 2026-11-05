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

// Function: sub_0019B190
// Address: 0x19b190 - 0x19b1d0
void sub_0019B190_0x19b190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B190_0x19b190");
#endif

    ctx->pc = 0x19b190u;

    // 0x19b190: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x19b190u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19b194: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x19b194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19b198: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x19b198u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x19b19c: 0x3c04bfff  lui         $a0, 0xBFFF
    ctx->pc = 0x19b19cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49151 << 16));
    // 0x19b1a0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x19b1a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x19b1a4: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x19b1a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x19b1a8: 0x348401ff  ori         $a0, $a0, 0x1FF
    ctx->pc = 0x19b1a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)511);
    // 0x19b1ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19b1acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b1b0: 0xdcc21020  ld          $v0, 0x1020($a2)
    ctx->pc = 0x19b1b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 4128)));
    // 0x19b1b4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x19b1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x19b1b8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x19b1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x19b1bc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x19b1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x19b1c0: 0xfcc21020  sd          $v0, 0x1020($a2)
    ctx->pc = 0x19b1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4128), GPR_U64(ctx, 2));
    // 0x19b1c4: 0x3e00008  jr          $ra
    ctx->pc = 0x19B1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B1C4u;
        // 0x19b1c8: 0xac670910  sw          $a3, 0x910($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2320), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B1C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B1CCu;
    // 0x19b1cc: 0x0  nop
    ctx->pc = 0x19b1ccu;
    // NOP
    ctx->pc = 0x19b1d0u;
}
