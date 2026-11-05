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

// Function: sub_002112B0
// Address: 0x2112b0 - 0x211300
void sub_002112B0_0x2112b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002112B0_0x2112b0");
#endif

    switch (ctx->pc) {
        case 0x2112d4u: goto label_2112d4;
        case 0x2112e4u: goto label_2112e4;
        default: break;
    }

    ctx->pc = 0x2112b0u;

    // 0x2112b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2112b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2112b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2112b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2112b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2112b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2112bc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2112bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2112c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2112c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2112c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2112c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2112c8: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x2112c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2112cc: 0xc0c885e  jal         func_322178
    ctx->pc = 0x2112CCu;
    SET_GPR_U32(ctx, 31, 0x2112D4u);
    ctx->pc = 0x2112D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2112CCu;
    // 0x2112d0: 0x8e250104  lw          $a1, 0x104($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322178u, 0x2112CCu, 0x2112D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2112D4u;
label_2112d4:
    // 0x2112d4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2112D4u;
    {
        const bool branch_taken_0x2112d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2112D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2112D4u;
        // 0x2112d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2112d4) {
            ctx->pc = 0x2112E8u;
            goto label_2112e8;
        }
    }
    ctx->pc = 0x2112DCu;
    // 0x2112dc: 0xc08583c  jal         func_2160F0
    ctx->pc = 0x2112DCu;
    SET_GPR_U32(ctx, 31, 0x2112E4u);
    ctx->pc = 0x2112E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2112DCu;
    // 0x2112e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2160F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2160F0u, 0x2112DCu, 0x2112E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2112E4u;
label_2112e4:
    // 0x2112e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2112e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2112e8:
    // 0x2112e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2112e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2112ec: 0xae2201a0  sw          $v0, 0x1A0($s1)
    ctx->pc = 0x2112ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 2));
    // 0x2112f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2112f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2112f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2112f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2112f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2112F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2112FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2112F8u;
        // 0x2112fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2112F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211300u;
}
