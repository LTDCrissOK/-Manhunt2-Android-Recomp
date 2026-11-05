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

// Function: sub_002074E8
// Address: 0x2074e8 - 0x207520
void sub_002074E8_0x2074e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002074E8_0x2074e8");
#endif

    switch (ctx->pc) {
        case 0x20750cu: goto label_20750c;
        default: break;
    }

    ctx->pc = 0x2074e8u;

    // 0x2074e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2074e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2074ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2074ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2074f0: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2074f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2074f4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2074f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2074f8: 0x8e0493cc  lw          $a0, -0x6C34($s0)
    ctx->pc = 0x2074f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3F93CCu));
    // 0x2074fc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2074FCu;
    {
        const bool branch_taken_0x2074fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2074fc) {
            ctx->pc = 0x207500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2074FCu;
            // 0x207500: 0xae0093cc  sw          $zero, -0x6C34($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4294939596), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207510u;
            goto label_207510;
        }
    }
    ctx->pc = 0x207504u;
    // 0x207504: 0xc081e0a  jal         func_207828
    ctx->pc = 0x207504u;
    SET_GPR_U32(ctx, 31, 0x20750Cu);
    ctx->pc = 0x207508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207504u;
    // 0x207508: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207828u, 0x207504u, 0x20750Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20750Cu;
label_20750c:
    // 0x20750c: 0xae0093cc  sw          $zero, -0x6C34($s0)
    ctx->pc = 0x20750cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294939596), GPR_U32(ctx, 0));
label_207510:
    // 0x207510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x207510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207514: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x207514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x207518: 0x3e00008  jr          $ra
    ctx->pc = 0x207518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207518u;
        // 0x20751c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207520u;
}
