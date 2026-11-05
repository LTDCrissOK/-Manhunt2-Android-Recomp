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

// Function: sub_00130030
// Address: 0x130030 - 0x130078
void sub_00130030_0x130030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130030_0x130030");
#endif

    switch (ctx->pc) {
        case 0x130058u: goto label_130058;
        default: break;
    }

    ctx->pc = 0x130030u;

    // 0x130030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x130030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x130034: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130038: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x130038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13003c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13003cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130040: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x130040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x130044: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x130044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x130048: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x130048u;
    {
        const bool branch_taken_0x130048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130048u;
        // 0x13004c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130048) {
            ctx->pc = 0x130064u;
            goto label_130064;
        }
    }
    ctx->pc = 0x130050u;
    // 0x130050: 0xc04c4ac  jal         func_1312B0
    ctx->pc = 0x130050u;
    SET_GPR_U32(ctx, 31, 0x130058u);
    ctx->pc = 0x1312B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1312B0u, 0x130050u, 0x130058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130058u;
label_130058:
    // 0x130058: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x130058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13005c: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x13005cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x130060: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x130060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_130064:
    // 0x130064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130068: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x130068u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13006c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13006cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130070: 0x3e00008  jr          $ra
    ctx->pc = 0x130070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130070u;
        // 0x130074: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130078u;
}
