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

// Function: sub_002A1E40
// Address: 0x2a1e40 - 0x2a1eb0
void sub_002A1E40_0x2a1e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1E40_0x2a1e40");
#endif

    switch (ctx->pc) {
        case 0x2a1e6cu: goto label_2a1e6c;
        case 0x2a1e78u: goto label_2a1e78;
        case 0x2a1e88u: goto label_2a1e88;
        case 0x2a1e94u: goto label_2a1e94;
        case 0x2a1e9cu: goto label_2a1e9c;
        default: break;
    }

    ctx->pc = 0x2a1e40u;

    // 0x2a1e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a1e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a1e44: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x2a1e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x2a1e48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a1e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a1e4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a1e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1e50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a1e50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1e54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a1e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a1e58: 0x8c440594  lw          $a0, 0x594($v0)
    ctx->pc = 0x2a1e58u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x520594u));
    // 0x2a1e5c: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2A1E5Cu;
    {
        const bool branch_taken_0x2a1e5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A1E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1E5Cu;
        // 0x2a1e60: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1e5c) {
            ctx->pc = 0x2A1E94u;
            goto label_2a1e94;
        }
    }
    ctx->pc = 0x2A1E64u;
    // 0x2a1e64: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2A1E64u;
    SET_GPR_U32(ctx, 31, 0x2A1E6Cu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2A1E64u, 0x2A1E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1E6Cu;
label_2a1e6c:
    // 0x2a1e6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a1e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1e70: 0xc0a6dea  jal         func_29B7A8
    ctx->pc = 0x2A1E70u;
    SET_GPR_U32(ctx, 31, 0x2A1E78u);
    ctx->pc = 0x2A1E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1E70u;
    // 0x2a1e74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B7A8u, 0x2A1E70u, 0x2A1E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1E78u;
label_2a1e78:
    // 0x2a1e78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a1e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1e80: 0xc0a7096  jal         func_29C258
    ctx->pc = 0x2A1E80u;
    SET_GPR_U32(ctx, 31, 0x2A1E88u);
    ctx->pc = 0x2A1E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1E80u;
    // 0x2a1e84: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C258u, 0x2A1E80u, 0x2A1E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1E88u;
label_2a1e88:
    // 0x2a1e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1e8c: 0xc0a754c  jal         func_29D530
    ctx->pc = 0x2A1E8Cu;
    SET_GPR_U32(ctx, 31, 0x2A1E94u);
    ctx->pc = 0x2A1E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1E8Cu;
    // 0x2a1e90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D530u, 0x2A1E8Cu, 0x2A1E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1E94u;
label_2a1e94:
    // 0x2a1e94: 0xc0a7adc  jal         func_29EB70
    ctx->pc = 0x2A1E94u;
    SET_GPR_U32(ctx, 31, 0x2A1E9Cu);
    ctx->pc = 0x2A1E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1E94u;
    // 0x2a1e98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EB70u, 0x2A1E94u, 0x2A1E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1E9Cu;
label_2a1e9c:
    // 0x2a1e9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a1e9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1ea0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a1ea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a1ea4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a1ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1EA8u;
        // 0x2a1eac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1EB0u;
}
