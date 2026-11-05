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

// Function: sub_0036C7E8
// Address: 0x36c7e8 - 0x36c828
void sub_0036C7E8_0x36c7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C7E8_0x36c7e8");
#endif

    switch (ctx->pc) {
        case 0x36c81cu: goto label_36c81c;
        default: break;
    }

    ctx->pc = 0x36c7e8u;

    // 0x36c7e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c7ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x36c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x36c7f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c7f4: 0x24421f00  addiu       $v0, $v0, 0x1F00
    ctx->pc = 0x36c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7936));
    // 0x36c7f8: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x36c7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6C1F48u));
    // 0x36c7fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x36c7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x36c800: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x36c800u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36c804: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x36c804u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x36c808: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x36c808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x36c80c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x36c80cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c810: 0x8cc5009c  lw          $a1, 0x9C($a2)
    ctx->pc = 0x36c810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 156)));
    // 0x36c814: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x36C814u;
    SET_GPR_U32(ctx, 31, 0x36C81Cu);
    ctx->pc = 0x36C818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C814u;
    // 0x36c818: 0x8c44004c  lw          $a0, 0x4C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x36C814u, 0x36C81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C81Cu;
label_36c81c:
    // 0x36c81c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c820: 0x3e00008  jr          $ra
    ctx->pc = 0x36C820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C820u;
        // 0x36c824: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C828u;
}
