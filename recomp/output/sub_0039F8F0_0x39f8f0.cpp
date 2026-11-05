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

// Function: sub_0039F8F0
// Address: 0x39f8f0 - 0x39f948
void sub_0039F8F0_0x39f8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039F8F0_0x39f8f0");
#endif

    ctx->pc = 0x39f8f0u;

    // 0x39f8f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39f8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39f8f4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39F8F4u;
    {
        const bool branch_taken_0x39f8f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F8F4u;
        // 0x39f8f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f8f4) {
            ctx->pc = 0x39F910u;
            goto label_39f910;
        }
    }
    ctx->pc = 0x39F8FCu;
    // 0x39f8fc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39f8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39f900: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39f900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39f904: 0x2484bff8  addiu       $a0, $a0, -0x4008
    ctx->pc = 0x39f904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950904));
    // 0x39f908: 0x80ecbf4  j           func_3B2FD0
    ctx->pc = 0x39F908u;
    ctx->pc = 0x39F90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F908u;
    // 0x39f90c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FD0u;
    sub_003B2FD0_0x3b2fd0(rdram, ctx, runtime); return;
    ctx->pc = 0x39F910u;
label_39f910:
    // 0x39f910: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39f910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39f914: 0xa08501b0  sb          $a1, 0x1B0($a0)
    ctx->pc = 0x39f914u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 432), (uint8_t)GPR_U32(ctx, 5));
    // 0x39f918: 0x3e00008  jr          $ra
    ctx->pc = 0x39F918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39F91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F918u;
        // 0x39f91c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39F920u;
    // 0x39f920: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39f920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39f924: 0x0  nop
    ctx->pc = 0x39f924u;
    // NOP
    // 0x39f928: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39f928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39f92c: 0x0  nop
    ctx->pc = 0x39f92cu;
    // NOP
    // 0x39f930: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39f930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39f934: 0x0  nop
    ctx->pc = 0x39f934u;
    // NOP
    // 0x39f938: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39f938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39f93c: 0x0  nop
    ctx->pc = 0x39f93cu;
    // NOP
    // 0x39f940: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39f940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39f944: 0x0  nop
    ctx->pc = 0x39f944u;
    // NOP
    ctx->pc = 0x39f948u;
}
