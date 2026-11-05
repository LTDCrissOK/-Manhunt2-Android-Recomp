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

// Function: sub_00104F60
// Address: 0x104f60 - 0x104f98
void sub_00104F60_0x104f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104F60_0x104f60");
#endif

    ctx->pc = 0x104f60u;

    // 0x104f60: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x104F60u;
    {
        const bool branch_taken_0x104f60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x104f60) {
            ctx->pc = 0x104F90u;
            goto label_104f90;
        }
    }
    ctx->pc = 0x104F68u;
    // 0x104f68: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x104F68u;
    {
        const bool branch_taken_0x104f68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x104f68) {
            ctx->pc = 0x104F7Cu;
            goto label_104f7c;
        }
    }
    ctx->pc = 0x104F70u;
    // 0x104f70: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x104f70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x104f74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x104f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x104f78: 0xa4a20004  sh          $v0, 0x4($a1)
    ctx->pc = 0x104f78u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 2));
label_104f7c:
    // 0x104f7c: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x104F7Cu;
    {
        const bool branch_taken_0x104f7c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x104f7c) {
            ctx->pc = 0x104F90u;
            goto label_104f90;
        }
    }
    ctx->pc = 0x104F84u;
    // 0x104f84: 0x94a20006  lhu         $v0, 0x6($a1)
    ctx->pc = 0x104f84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x104f88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x104f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x104f8c: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x104f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
label_104f90:
    // 0x104f90: 0x3e00008  jr          $ra
    ctx->pc = 0x104F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104F98u;
}
