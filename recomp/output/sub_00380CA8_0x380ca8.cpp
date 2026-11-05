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

// Function: sub_00380CA8
// Address: 0x380ca8 - 0x380d10
void sub_00380CA8_0x380ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380CA8_0x380ca8");
#endif

    switch (ctx->pc) {
        case 0x380cb8u: goto label_380cb8;
        case 0x380cd0u: goto label_380cd0;
        case 0x380cf0u: goto label_380cf0;
        default: break;
    }

    ctx->pc = 0x380ca8u;

    // 0x380ca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x380ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x380cac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x380cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x380cb0: 0xc0e02e0  jal         func_380B80
    ctx->pc = 0x380CB0u;
    SET_GPR_U32(ctx, 31, 0x380CB8u);
    ctx->pc = 0x380B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380B80u, 0x380CB0u, 0x380CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380CB8u;
label_380cb8:
    // 0x380cb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x380cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x380CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380CBCu;
        // 0x380cc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380CC4u;
    // 0x380cc4: 0x0  nop
    ctx->pc = 0x380cc4u;
    // NOP
    // 0x380cc8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x380cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x380ccc: 0x0  nop
    ctx->pc = 0x380cccu;
    // NOP
label_380cd0:
    // 0x380cd0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x380cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x380cd4: 0x0  nop
    ctx->pc = 0x380cd4u;
    // NOP
    // 0x380cd8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x380cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x380cdc: 0x0  nop
    ctx->pc = 0x380cdcu;
    // NOP
    // 0x380ce0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x380ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x380ce4: 0x0  nop
    ctx->pc = 0x380ce4u;
    // NOP
    // 0x380ce8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x380ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x380cec: 0x0  nop
    ctx->pc = 0x380cecu;
    // NOP
label_380cf0:
    // 0x380cf0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x380cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x380cf4: 0x0  nop
    ctx->pc = 0x380cf4u;
    // NOP
    // 0x380cf8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x380cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x380cfc: 0x0  nop
    ctx->pc = 0x380cfcu;
    // NOP
    // 0x380d00: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x380d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x380d04: 0x0  nop
    ctx->pc = 0x380d04u;
    // NOP
    // 0x380d08: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x380d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x380d0c: 0x0  nop
    ctx->pc = 0x380d0cu;
    // NOP
    ctx->pc = 0x380d10u;
}
