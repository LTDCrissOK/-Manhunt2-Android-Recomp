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

// Function: sub_002052A8
// Address: 0x2052a8 - 0x205300
void sub_002052A8_0x2052a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002052A8_0x2052a8");
#endif

    switch (ctx->pc) {
        case 0x2052ccu: goto label_2052cc;
        case 0x2052f0u: goto label_2052f0;
        default: break;
    }

    ctx->pc = 0x2052a8u;

    // 0x2052a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2052a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2052ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2052acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2052b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2052b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2052b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2052b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2052b8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2052b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2052bc: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2052BCu;
    {
        const bool branch_taken_0x2052bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2052bc) {
            ctx->pc = 0x2052C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2052BCu;
            // 0x2052c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2052F4u;
            goto label_2052f4;
        }
    }
    ctx->pc = 0x2052C4u;
    // 0x2052c4: 0xc0e71c6  jal         func_39C718
    ctx->pc = 0x2052C4u;
    SET_GPR_U32(ctx, 31, 0x2052CCu);
    ctx->pc = 0x2052C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2052C4u;
    // 0x2052c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C718u, 0x2052C4u, 0x2052CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2052CCu;
label_2052cc:
    // 0x2052cc: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x2052ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x2052d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2052D0u;
    {
        const bool branch_taken_0x2052d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2052D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052D0u;
        // 0x2052d4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2052d0) {
            ctx->pc = 0x2052F0u;
            goto label_2052f0;
        }
    }
    ctx->pc = 0x2052D8u;
    // 0x2052d8: 0x904393c0  lbu         $v1, -0x6C40($v0)
    ctx->pc = 0x2052d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939584)));
    // 0x2052dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2052DCu;
    {
        const bool branch_taken_0x2052dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2052E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052DCu;
        // 0x2052e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2052dc) {
            ctx->pc = 0x2052F0u;
            goto label_2052f0;
        }
    }
    ctx->pc = 0x2052E4u;
    // 0x2052e4: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x2052e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x2052e8: 0xc082ae2  jal         func_20AB88
    ctx->pc = 0x2052E8u;
    SET_GPR_U32(ctx, 31, 0x2052F0u);
    ctx->pc = 0x2052ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2052E8u;
    // 0x2052ec: 0x2484c100  addiu       $a0, $a0, -0x3F00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AB88u, 0x2052E8u, 0x2052F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2052F0u;
label_2052f0:
    // 0x2052f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2052f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2052f4:
    // 0x2052f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2052f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2052f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2052F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2052FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052F8u;
        // 0x2052fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2052F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205300u;
}
