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

// Function: sub_003DDB88
// Address: 0x3ddb88 - 0x3ddbe0
void sub_003DDB88_0x3ddb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DDB88_0x3ddb88");
#endif

    ctx->pc = 0x3ddb88u;

    // 0x3ddb88: 0x3e00008  jr          $ra
    ctx->pc = 0x3DDB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DDB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DDB90u;
    // 0x3ddb90: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3ddb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3ddb94: 0x0  nop
    ctx->pc = 0x3ddb94u;
    // NOP
    // 0x3ddb98: 0xac820140  sw          $v0, 0x140($a0)
    ctx->pc = 0x3ddb98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 320), GPR_U32(ctx, 2));
    // 0x3ddb9c: 0x0  nop
    ctx->pc = 0x3ddb9cu;
    // NOP
    // 0x3ddba0: 0xac850144  sw          $a1, 0x144($a0)
    ctx->pc = 0x3ddba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 324), GPR_U32(ctx, 5));
    // 0x3ddba4: 0x0  nop
    ctx->pc = 0x3ddba4u;
    // NOP
    // 0x3ddba8: 0xa086018c  sb          $a2, 0x18C($a0)
    ctx->pc = 0x3ddba8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 396), (uint8_t)GPR_U32(ctx, 6));
    // 0x3ddbac: 0x0  nop
    ctx->pc = 0x3ddbacu;
    // NOP
    // 0x3ddbb0: 0x9082018c  lbu         $v0, 0x18C($a0)
    ctx->pc = 0x3ddbb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 396)));
    // 0x3ddbb4: 0x0  nop
    ctx->pc = 0x3ddbb4u;
    // NOP
    // 0x3ddbb8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3ddbb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3ddbbc: 0x0  nop
    ctx->pc = 0x3ddbbcu;
    // NOP
    // 0x3ddbc0: 0xac800188  sw          $zero, 0x188($a0)
    ctx->pc = 0x3ddbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 392), GPR_U32(ctx, 0));
    // 0x3ddbc4: 0x0  nop
    ctx->pc = 0x3ddbc4u;
    // NOP
    // 0x3ddbc8: 0x0  nop
    ctx->pc = 0x3ddbc8u;
    // NOP
    // 0x3ddbcc: 0x0  nop
    ctx->pc = 0x3ddbccu;
    // NOP
    // 0x3ddbd0: 0xac8200c0  sw          $v0, 0xC0($a0)
    ctx->pc = 0x3ddbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 2));
    // 0x3ddbd4: 0x0  nop
    ctx->pc = 0x3ddbd4u;
    // NOP
    // 0x3ddbd8: 0xac8200c0  sw          $v0, 0xC0($a0)
    ctx->pc = 0x3ddbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 2));
    // 0x3ddbdc: 0x0  nop
    ctx->pc = 0x3ddbdcu;
    // NOP
    ctx->pc = 0x3ddbe0u;
}
