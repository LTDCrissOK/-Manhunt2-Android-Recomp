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

// Function: sub_00151260
// Address: 0x151260 - 0x1512a0
void sub_00151260_0x151260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151260_0x151260");
#endif

    switch (ctx->pc) {
        case 0x151294u: goto label_151294;
        default: break;
    }

    ctx->pc = 0x151260u;

    // 0x151260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x151260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x151264: 0x3c060049  lui         $a2, 0x49
    ctx->pc = 0x151264u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)73 << 16));
    // 0x151268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15126c: 0x24c69a08  addiu       $a2, $a2, -0x65F8
    ctx->pc = 0x15126cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941192));
    // 0x151270: 0x9083046c  lbu         $v1, 0x46C($a0)
    ctx->pc = 0x151270u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    // 0x151274: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x151274u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x151278: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x151278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15127c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x15127cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x151280: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x151280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151284: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x151284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x151288: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x151288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x15128c: 0xc04437e  jal         func_110DF8
    ctx->pc = 0x15128Cu;
    SET_GPR_U32(ctx, 31, 0x151294u);
    ctx->pc = 0x151290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15128Cu;
    // 0x151290: 0x8cc4020c  lw          $a0, 0x20C($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110DF8u, 0x15128Cu, 0x151294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151294u;
label_151294:
    // 0x151294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151298: 0x3e00008  jr          $ra
    ctx->pc = 0x151298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151298u;
        // 0x15129c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1512A0u;
}
