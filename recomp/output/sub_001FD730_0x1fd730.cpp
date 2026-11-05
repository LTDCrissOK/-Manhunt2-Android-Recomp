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

// Function: sub_001FD730
// Address: 0x1fd730 - 0x1fd750
void sub_001FD730_0x1fd730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD730_0x1fd730");
#endif

    switch (ctx->pc) {
        case 0x1fd744u: goto label_1fd744;
        default: break;
    }

    ctx->pc = 0x1fd730u;

    // 0x1fd730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fd734: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1fd734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1fd738: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd73c: 0xc0802e4  jal         func_200B90
    ctx->pc = 0x1FD73Cu;
    SET_GPR_U32(ctx, 31, 0x1FD744u);
    ctx->pc = 0x1FD740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD73Cu;
    // 0x1fd740: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200B90u, 0x1FD73Cu, 0x1FD744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD744u;
label_1fd744:
    // 0x1fd744: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd748: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD748u;
        // 0x1fd74c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD750u;
}
