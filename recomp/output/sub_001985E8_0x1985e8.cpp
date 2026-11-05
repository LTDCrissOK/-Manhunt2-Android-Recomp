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

// Function: sub_001985E8
// Address: 0x1985e8 - 0x198640
void sub_001985E8_0x1985e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001985E8_0x1985e8");
#endif

    switch (ctx->pc) {
        case 0x198600u: goto label_198600;
        default: break;
    }

    ctx->pc = 0x1985e8u;

    // 0x1985e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1985e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1985ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1985ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1985f0: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x1985f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1985f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1985f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1985f8: 0xc095006  jal         func_254018
    ctx->pc = 0x1985F8u;
    SET_GPR_U32(ctx, 31, 0x198600u);
    ctx->pc = 0x1985FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1985F8u;
    // 0x1985fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254018u, 0x1985F8u, 0x198600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198600u;
label_198600:
    // 0x198600: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198604: 0x3e00008  jr          $ra
    ctx->pc = 0x198604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198604u;
        // 0x198608: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19860Cu;
    // 0x19860c: 0x0  nop
    ctx->pc = 0x19860cu;
    // NOP
    // 0x198610: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x198610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x198614: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x198614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x198618: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x198618u;
    {
        const bool branch_taken_0x198618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198618u;
        // 0x19861c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198618) {
            ctx->pc = 0x198634u;
            goto label_198634;
        }
    }
    ctx->pc = 0x198620u;
    // 0x198620: 0x8c840064  lw          $a0, 0x64($a0)
    ctx->pc = 0x198620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x198624: 0x8ca30064  lw          $v1, 0x64($a1)
    ctx->pc = 0x198624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x198628: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x198628u;
    {
        const bool branch_taken_0x198628 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x19862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198628u;
        // 0x19862c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198628) {
            ctx->pc = 0x198634u;
            goto label_198634;
        }
    }
    ctx->pc = 0x198630u;
    // 0x198630: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x198630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198634:
    // 0x198634: 0x3e00008  jr          $ra
    ctx->pc = 0x198634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19863Cu;
    // 0x19863c: 0x0  nop
    ctx->pc = 0x19863cu;
    // NOP
    ctx->pc = 0x198640u;
}
