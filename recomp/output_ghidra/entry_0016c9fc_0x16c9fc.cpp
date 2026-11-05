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

// Function: entry_0016c9fc
// Address: 0x16c9fc - 0x16ca50
void entry_0016c9fc_0x16c9fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c9fc_0x16c9fc");
#endif

    switch (ctx->pc) {
        case 0x16ca08u: goto label_16ca08;
        case 0x16ca40u: goto label_16ca40;
        default: break;
    }

    ctx->pc = 0x16c9fcu;

    // 0x16c9fc: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x16c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x16ca00: 0xc05b4ca  jal         func_16D328
    ctx->pc = 0x16CA00u;
    SET_GPR_U32(ctx, 31, 0x16CA08u);
    ctx->pc = 0x16CA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CA00u;
    // 0x16ca04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D328u, 0x16CA00u, 0x16CA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CA08u;
label_16ca08:
    // 0x16ca08: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x16ca08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x16ca0c: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x16ca0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16ca10: 0x2c83000b  sltiu       $v1, $a0, 0xB
    ctx->pc = 0x16ca10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x16ca14: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x16CA14u;
    {
        const bool branch_taken_0x16ca14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA14u;
        // 0x16ca18: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca14) {
            ctx->pc = 0x16CA40u;
            goto label_16ca40;
        }
    }
    ctx->pc = 0x16CA1Cu;
    // 0x16ca1c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16ca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16ca20: 0x2442f080  addiu       $v0, $v0, -0xF80
    ctx->pc = 0x16ca20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x16ca24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16ca24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ca28: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16ca28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ca2c: 0x800008  jr          $a0
    ctx->pc = 0x16CA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16CA34u: goto label_16ca34;
            case 0x16CA40u: goto label_16ca40;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CA2Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16CA34u;
label_16ca34:
    // 0x16ca34: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x16ca34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x16ca38: 0xc04990a  jal         func_126428
    ctx->pc = 0x16CA38u;
    SET_GPR_U32(ctx, 31, 0x16CA40u);
    ctx->pc = 0x16CA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CA38u;
    // 0x16ca3c: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126428u, 0x16CA38u, 0x16CA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CA40u;
label_16ca40:
    // 0x16ca40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16ca40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ca44: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16ca44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16ca48: 0x3e00008  jr          $ra
    ctx->pc = 0x16CA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA48u;
        // 0x16ca4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16CA50u;
}
