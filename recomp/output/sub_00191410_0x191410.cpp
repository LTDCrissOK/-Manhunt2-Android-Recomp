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

// Function: sub_00191410
// Address: 0x191410 - 0x191450
void sub_00191410_0x191410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191410_0x191410");
#endif

    switch (ctx->pc) {
        case 0x191444u: goto label_191444;
        default: break;
    }

    ctx->pc = 0x191410u;

    // 0x191410: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x191410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191414: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x191414u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x191418: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x191418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x19141c: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x19141cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x191420: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191424: 0x24630f90  addiu       $v1, $v1, 0xF90
    ctx->pc = 0x191424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
    // 0x191428: 0x24840fc8  addiu       $a0, $a0, 0xFC8
    ctx->pc = 0x191428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4040));
    // 0x19142c: 0xacc30048  sw          $v1, 0x48($a2)
    ctx->pc = 0x19142cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 3));
    // 0x191430: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x191430u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x191434: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x191434u;
    {
        const bool branch_taken_0x191434 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x191438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191434u;
        // 0x191438: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191434) {
            ctx->pc = 0x191444u;
            goto label_191444;
        }
    }
    ctx->pc = 0x19143Cu;
    // 0x19143c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x19143Cu;
    SET_GPR_U32(ctx, 31, 0x191444u);
    ctx->pc = 0x191440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19143Cu;
    // 0x191440: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x19143Cu, 0x191444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191444u;
label_191444:
    // 0x191444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191448: 0x3e00008  jr          $ra
    ctx->pc = 0x191448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191448u;
        // 0x19144c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191450u;
}
