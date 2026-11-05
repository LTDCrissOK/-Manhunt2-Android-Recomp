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

// Function: sub_0010F7D0
// Address: 0x10f7d0 - 0x10f858
void sub_0010F7D0_0x10f7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F7D0_0x10f7d0");
#endif

    ctx->pc = 0x10f7d0u;

    // 0x10f7d0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x10f7d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f7d4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x10f7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x10f7d8: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x10f7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x10f7dc: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x10f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x10f7e0: 0xace50120  sw          $a1, 0x120($a3)
    ctx->pc = 0x10f7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 288), GPR_U32(ctx, 5));
    // 0x10f7e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10f7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10f7e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10f7ec: 0x8c460108  lw          $a2, 0x108($v0)
    ctx->pc = 0x10f7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x10f7f0: 0x10c00017  beqz        $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x10F7F0u;
    {
        const bool branch_taken_0x10f7f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f7f0) {
            ctx->pc = 0x10F850u;
            goto label_10f850;
        }
    }
    ctx->pc = 0x10F7F8u;
    // 0x10f7f8: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x10F7F8u;
    {
        const bool branch_taken_0x10f7f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f7f8) {
            ctx->pc = 0x10F7FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F7F8u;
            // 0x10f7fc: 0xdcc31020  ld          $v1, 0x1020($a2) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 4128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F824u;
            goto label_10f824;
        }
    }
    ctx->pc = 0x10F800u;
    // 0x10f800: 0xdcc21020  ld          $v0, 0x1020($a2)
    ctx->pc = 0x10f800u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 4128)));
    // 0x10f804: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x10f804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x10f808: 0x31d78  dsll        $v1, $v1, 21
    ctx->pc = 0x10f808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 21);
    // 0x10f80c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x10f80cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x10f810: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10f810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10f814: 0xfcc21020  sd          $v0, 0x1020($a2)
    ctx->pc = 0x10f814u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4128), GPR_U64(ctx, 2));
    // 0x10f818: 0x8c83a9d4  lw          $v1, -0x562C($a0)
    ctx->pc = 0x10f818u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x10f81c: 0x3e00008  jr          $ra
    ctx->pc = 0x10F81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F81Cu;
        // 0x10f820: 0xace30124  sw          $v1, 0x124($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F81Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F824u;
label_10f824:
    // 0x10f824: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x10f824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x10f828: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x10f828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x10f82c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x10f82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x10f830: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10F830u;
    {
        const bool branch_taken_0x10f830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f830) {
            ctx->pc = 0x10F850u;
            goto label_10f850;
        }
    }
    ctx->pc = 0x10F838u;
    // 0x10f838: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x10f838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x10f83c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10f83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10f840: 0x211b8  dsll        $v0, $v0, 6
    ctx->pc = 0x10f840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 6);
    // 0x10f844: 0x3442003f  ori         $v0, $v0, 0x3F
    ctx->pc = 0x10f844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
    // 0x10f848: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x10f848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x10f84c: 0xfcc21020  sd          $v0, 0x1020($a2)
    ctx->pc = 0x10f84cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4128), GPR_U64(ctx, 2));
label_10f850:
    // 0x10f850: 0x3e00008  jr          $ra
    ctx->pc = 0x10F850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F858u;
}
