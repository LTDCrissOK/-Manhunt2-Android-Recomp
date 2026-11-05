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

// Function: sub_0012C040
// Address: 0x12c040 - 0x12c090
void sub_0012C040_0x12c040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C040_0x12c040");
#endif

    switch (ctx->pc) {
        case 0x12c05cu: goto label_12c05c;
        case 0x12c070u: goto label_12c070;
        default: break;
    }

    ctx->pc = 0x12c040u;

    // 0x12c040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12c040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12c044: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c048: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12c048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12c04c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12c04cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c050: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12c050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12c054: 0xc04b100  jal         func_12C400
    ctx->pc = 0x12C054u;
    SET_GPR_U32(ctx, 31, 0x12C05Cu);
    ctx->pc = 0x12C058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C054u;
    // 0x12c058: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C400u, 0x12C054u, 0x12C05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C05Cu;
label_12c05c:
    // 0x12c05c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12c060: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c064: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x12c064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12c068: 0xc05f4a0  jal         func_17D280
    ctx->pc = 0x12C068u;
    SET_GPR_U32(ctx, 31, 0x12C070u);
    ctx->pc = 0x12C06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C068u;
    // 0x12c06c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D280u, 0x12C068u, 0x12C070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C070u;
label_12c070:
    // 0x12c070: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c074: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12c074u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c078: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12c078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c07c: 0x3e00008  jr          $ra
    ctx->pc = 0x12C07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C07Cu;
        // 0x12c080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C084u;
    // 0x12c084: 0x0  nop
    ctx->pc = 0x12c084u;
    // NOP
    // 0x12c088: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x12c088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12c08c: 0x0  nop
    ctx->pc = 0x12c08cu;
    // NOP
    ctx->pc = 0x12c090u;
}
