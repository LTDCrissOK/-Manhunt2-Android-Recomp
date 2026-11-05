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

// Function: sub_0017BCB8
// Address: 0x17bcb8 - 0x17bd00
void sub_0017BCB8_0x17bcb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BCB8_0x17bcb8");
#endif

    switch (ctx->pc) {
        case 0x17bcdcu: goto label_17bcdc;
        case 0x17bcf4u: goto label_17bcf4;
        default: break;
    }

    ctx->pc = 0x17bcb8u;

    // 0x17bcb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17bcb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17bcbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17bcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17bcc0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x17bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x17bcc4: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x17BCC4u;
    {
        const bool branch_taken_0x17bcc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BCC4u;
        // 0x17bcc8: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bcc4) {
            ctx->pc = 0x17BCE4u;
            goto label_17bce4;
        }
    }
    ctx->pc = 0x17BCCCu;
    // 0x17bccc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x17bcccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x17bcd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17bcd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bcd4: 0xc04af42  jal         func_12BD08
    ctx->pc = 0x17BCD4u;
    SET_GPR_U32(ctx, 31, 0x17BCDCu);
    ctx->pc = 0x17BCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BCD4u;
    // 0x17bcd8: 0x2484b060  addiu       $a0, $a0, -0x4FA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BD08u, 0x17BCD4u, 0x17BCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BCDCu;
label_17bcdc:
    // 0x17bcdc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17BCDCu;
    {
        const bool branch_taken_0x17bcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BCDCu;
        // 0x17bce0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bcdc) {
            ctx->pc = 0x17BCF8u;
            goto label_17bcf8;
        }
    }
    ctx->pc = 0x17BCE4u;
label_17bce4:
    // 0x17bce4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x17bce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x17bce8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17bce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bcec: 0xc04af68  jal         func_12BDA0
    ctx->pc = 0x17BCECu;
    SET_GPR_U32(ctx, 31, 0x17BCF4u);
    ctx->pc = 0x17BCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BCECu;
    // 0x17bcf0: 0x2484b060  addiu       $a0, $a0, -0x4FA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDA0u, 0x17BCECu, 0x17BCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BCF4u;
label_17bcf4:
    // 0x17bcf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17bcf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17bcf8:
    // 0x17bcf8: 0x3e00008  jr          $ra
    ctx->pc = 0x17BCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BCF8u;
        // 0x17bcfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BCF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BD00u;
}
