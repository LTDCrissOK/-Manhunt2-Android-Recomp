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

// Function: sub_0033EF80
// Address: 0x33ef80 - 0x33efa8
void sub_0033EF80_0x33ef80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033EF80_0x33ef80");
#endif

    switch (ctx->pc) {
        case 0x33ef98u: goto label_33ef98;
        default: break;
    }

    ctx->pc = 0x33ef80u;

    // 0x33ef80: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x33ef80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ef84: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33ef84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33ef88: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x33ef88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x33ef8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33ef8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33ef90: 0xc0c3164  jal         func_30C590
    ctx->pc = 0x33EF90u;
    SET_GPR_U32(ctx, 31, 0x33EF98u);
    ctx->pc = 0x33EF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EF90u;
    // 0x33ef94: 0x24a5ef18  addiu       $a1, $a1, -0x10E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C590u, 0x33EF90u, 0x33EF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EF98u;
label_33ef98:
    // 0x33ef98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33ef98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ef9c: 0x3e00008  jr          $ra
    ctx->pc = 0x33EF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33EFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EF9Cu;
        // 0x33efa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33EFA4u;
    // 0x33efa4: 0x0  nop
    ctx->pc = 0x33efa4u;
    // NOP
    ctx->pc = 0x33efa8u;
}
