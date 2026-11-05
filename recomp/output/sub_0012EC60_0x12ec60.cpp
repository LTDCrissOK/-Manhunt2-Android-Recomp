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

// Function: sub_0012EC60
// Address: 0x12ec60 - 0x12eca8
void sub_0012EC60_0x12ec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012EC60_0x12ec60");
#endif

    switch (ctx->pc) {
        case 0x12ec7cu: goto label_12ec7c;
        case 0x12ec8cu: goto label_12ec8c;
        default: break;
    }

    ctx->pc = 0x12ec60u;

    // 0x12ec60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12ec60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12ec64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12ec64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12ec68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12ec68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12ec6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12ec70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12ec70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12ec74: 0xc04bc6a  jal         func_12F1A8
    ctx->pc = 0x12EC74u;
    SET_GPR_U32(ctx, 31, 0x12EC7Cu);
    ctx->pc = 0x12EC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EC74u;
    // 0x12ec78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F1A8u, 0x12EC74u, 0x12EC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EC7Cu;
label_12ec7c:
    // 0x12ec7c: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x12ec7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x12ec80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12ec80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec84: 0xc04bc80  jal         func_12F200
    ctx->pc = 0x12EC84u;
    SET_GPR_U32(ctx, 31, 0x12EC8Cu);
    ctx->pc = 0x12EC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EC84u;
    // 0x12ec88: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F200u, 0x12EC84u, 0x12EC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EC8Cu;
label_12ec8c:
    // 0x12ec8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12ec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ec90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12ec90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12ec94: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x12ec94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x12ec98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12ec98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ec9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12ec9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12eca0: 0x3e00008  jr          $ra
    ctx->pc = 0x12ECA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECA0u;
        // 0x12eca4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12ECA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12ECA8u;
}
