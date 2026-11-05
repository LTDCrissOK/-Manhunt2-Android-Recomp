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

// Function: sub_0035D048
// Address: 0x35d048 - 0x35d090
void sub_0035D048_0x35d048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D048_0x35d048");
#endif

    switch (ctx->pc) {
        case 0x35d064u: goto label_35d064;
        case 0x35d078u: goto label_35d078;
        default: break;
    }

    ctx->pc = 0x35d048u;

    // 0x35d048: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35d048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35d04c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35d04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35d050: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35d050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35d054: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35d054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d058: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35d058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35d05c: 0xc0d73fc  jal         func_35CFF0
    ctx->pc = 0x35D05Cu;
    SET_GPR_U32(ctx, 31, 0x35D064u);
    ctx->pc = 0x35D060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D05Cu;
    // 0x35d060: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFF0u, 0x35D05Cu, 0x35D064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D064u;
label_35d064:
    // 0x35d064: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x35d064u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x35d068: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35D068u;
    {
        const bool branch_taken_0x35d068 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D068u;
        // 0x35d06c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d068) {
            ctx->pc = 0x35D07Cu;
            goto label_35d07c;
        }
    }
    ctx->pc = 0x35D070u;
    // 0x35d070: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x35D070u;
    SET_GPR_U32(ctx, 31, 0x35D078u);
    ctx->pc = 0x35D074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D070u;
    // 0x35d074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x35D070u, 0x35D078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D078u;
label_35d078:
    // 0x35d078: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35d078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35d07c:
    // 0x35d07c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35d07cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35d080: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35d080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d084: 0x3e00008  jr          $ra
    ctx->pc = 0x35D084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D084u;
        // 0x35d088: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D08Cu;
    // 0x35d08c: 0x0  nop
    ctx->pc = 0x35d08cu;
    // NOP
    ctx->pc = 0x35d090u;
}
