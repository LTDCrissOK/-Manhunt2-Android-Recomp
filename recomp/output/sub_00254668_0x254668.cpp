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

// Function: sub_00254668
// Address: 0x254668 - 0x2546b0
void sub_00254668_0x254668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254668_0x254668");
#endif

    switch (ctx->pc) {
        case 0x2546a0u: goto label_2546a0;
        default: break;
    }

    ctx->pc = 0x254668u;

    // 0x254668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25466c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x25466cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254674: 0x8ca200c0  lw          $v0, 0xC0($a1)
    ctx->pc = 0x254674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x254678: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x254678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x25467c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x25467Cu;
    {
        const bool branch_taken_0x25467c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25467c) {
            ctx->pc = 0x254680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25467Cu;
            // 0x254680: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2546A4u;
            goto label_2546a4;
        }
    }
    ctx->pc = 0x254684u;
    // 0x254684: 0x8ca20fe8  lw          $v0, 0xFE8($a1)
    ctx->pc = 0x254684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4072)));
    // 0x254688: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x254688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x25468c: 0xaca31060  sw          $v1, 0x1060($a1)
    ctx->pc = 0x25468cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4192), GPR_U32(ctx, 3));
    // 0x254690: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x254690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254694: 0xac44035c  sw          $a0, 0x35C($v0)
    ctx->pc = 0x254694u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 860), GPR_U32(ctx, 4));
    // 0x254698: 0xc094ed4  jal         func_253B50
    ctx->pc = 0x254698u;
    SET_GPR_U32(ctx, 31, 0x2546A0u);
    ctx->pc = 0x25469Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254698u;
    // 0x25469c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B50u, 0x254698u, 0x2546A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2546A0u;
label_2546a0:
    // 0x2546a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2546a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2546a4:
    // 0x2546a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2546a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2546a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2546A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2546ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2546A8u;
        // 0x2546ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2546A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2546B0u;
}
