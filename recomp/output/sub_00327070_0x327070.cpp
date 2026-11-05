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

// Function: sub_00327070
// Address: 0x327070 - 0x3270c8
void sub_00327070_0x327070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327070_0x327070");
#endif

    switch (ctx->pc) {
        case 0x327098u: goto label_327098;
        case 0x3270b0u: goto label_3270b0;
        default: break;
    }

    ctx->pc = 0x327070u;

    // 0x327070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x327070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x327074: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x327078: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x327078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32707c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32707cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327080: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x327080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x327084: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x327084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x327088: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x327088u;
    {
        const bool branch_taken_0x327088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327088u;
        // 0x32708c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327088) {
            ctx->pc = 0x32709Cu;
            goto label_32709c;
        }
    }
    ctx->pc = 0x327090u;
    // 0x327090: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x327090u;
    SET_GPR_U32(ctx, 31, 0x327098u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x327090u, 0x327098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327098u;
label_327098:
    // 0x327098: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x327098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_32709c:
    // 0x32709c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x32709cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x3270a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3270A0u;
    {
        const bool branch_taken_0x3270a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3270A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3270A0u;
        // 0x3270a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3270a0) {
            ctx->pc = 0x3270B0u;
            goto label_3270b0;
        }
    }
    ctx->pc = 0x3270A8u;
    // 0x3270a8: 0xc0c9c3a  jal         func_3270E8
    ctx->pc = 0x3270A8u;
    SET_GPR_U32(ctx, 31, 0x3270B0u);
    ctx->pc = 0x3270ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3270A8u;
    // 0x3270ac: 0x24050060  addiu       $a1, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3270E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3270E8u, 0x3270A8u, 0x3270B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3270B0u;
label_3270b0:
    // 0x3270b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3270b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3270b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3270b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3270b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3270b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3270bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3270BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3270C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3270BCu;
        // 0x3270c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3270BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3270C4u;
    // 0x3270c4: 0x0  nop
    ctx->pc = 0x3270c4u;
    // NOP
    ctx->pc = 0x3270c8u;
}
