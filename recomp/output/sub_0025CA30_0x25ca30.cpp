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

// Function: sub_0025CA30
// Address: 0x25ca30 - 0x25ca80
void sub_0025CA30_0x25ca30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CA30_0x25ca30");
#endif

    switch (ctx->pc) {
        case 0x25ca54u: goto label_25ca54;
        case 0x25ca70u: goto label_25ca70;
        default: break;
    }

    ctx->pc = 0x25ca30u;

    // 0x25ca30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25ca30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25ca34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25ca34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25ca38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x25ca38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x25ca3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25ca3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ca40: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x25ca40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25ca44: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x25CA44u;
    {
        const bool branch_taken_0x25ca44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ca44) {
            ctx->pc = 0x25CA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CA44u;
            // 0x25ca48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CA74u;
            goto label_25ca74;
        }
    }
    ctx->pc = 0x25CA4Cu;
    // 0x25ca4c: 0xc0972a0  jal         func_25CA80
    ctx->pc = 0x25CA4Cu;
    SET_GPR_U32(ctx, 31, 0x25CA54u);
    ctx->pc = 0x25CA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CA80u, 0x25CA4Cu, 0x25CA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CA54u;
label_25ca54:
    // 0x25ca54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25ca54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ca58: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25CA58u;
    {
        const bool branch_taken_0x25ca58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CA58u;
        // 0x25ca5c: 0xae040004  sw          $a0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ca58) {
            ctx->pc = 0x25CA70u;
            goto label_25ca70;
        }
    }
    ctx->pc = 0x25CA60u;
    // 0x25ca60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ca64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25ca64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ca68: 0xc0d27ca  jal         func_349F28
    ctx->pc = 0x25CA68u;
    SET_GPR_U32(ctx, 31, 0x25CA70u);
    ctx->pc = 0x25CA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CA68u;
    // 0x25ca6c: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349F28u, 0x25CA68u, 0x25CA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CA70u;
label_25ca70:
    // 0x25ca70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25ca70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25ca74:
    // 0x25ca74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x25ca74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25ca78: 0x3e00008  jr          $ra
    ctx->pc = 0x25CA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CA78u;
        // 0x25ca7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CA80u;
}
