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

// Function: sub_003A62E8
// Address: 0x3a62e8 - 0x3a6338
void sub_003A62E8_0x3a62e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A62E8_0x3a62e8");
#endif

    switch (ctx->pc) {
        case 0x3a6304u: goto label_3a6304;
        default: break;
    }

    ctx->pc = 0x3a62e8u;

    // 0x3a62e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a62e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a62ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3a62ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a62f0: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A62F0u;
    {
        const bool branch_taken_0x3a62f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A62F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A62F0u;
        // 0x3a62f4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a62f0) {
            ctx->pc = 0x3A6310u;
            goto label_3a6310;
        }
    }
    ctx->pc = 0x3A62F8u;
    // 0x3a62f8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a62f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a62fc: 0xc0e960a  jal         func_3A5828
    ctx->pc = 0x3A62FCu;
    SET_GPR_U32(ctx, 31, 0x3A6304u);
    ctx->pc = 0x3A6300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A62FCu;
    // 0x3a6300: 0x24a5ddd0  addiu       $a1, $a1, -0x2230 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5828u, 0x3A62FCu, 0x3A6304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6304u;
label_3a6304:
    // 0x3a6304: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A6304u;
    {
        const bool branch_taken_0x3a6304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6304u;
        // 0x3a6308: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6304) {
            ctx->pc = 0x3A6328u;
            goto label_3a6328;
        }
    }
    ctx->pc = 0x3A630Cu;
    // 0x3a630c: 0x0  nop
    ctx->pc = 0x3a630cu;
    // NOP
label_3a6310:
    // 0x3a6310: 0x80a30002  lb          $v1, 0x2($a1)
    ctx->pc = 0x3a6310u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3a6314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a6314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a6318: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A6318u;
    {
        const bool branch_taken_0x3a6318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a6318) {
            ctx->pc = 0x3A631Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6318u;
            // 0x3a631c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6328u;
            goto label_3a6328;
        }
    }
    ctx->pc = 0x3A6320u;
    // 0x3a6320: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x3a6320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x3a6324: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x3a6324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_3a6328:
    // 0x3a6328: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a6328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a632c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A632Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A632Cu;
        // 0x3a6330: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A632Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6334u;
    // 0x3a6334: 0x0  nop
    ctx->pc = 0x3a6334u;
    // NOP
    ctx->pc = 0x3a6338u;
}
