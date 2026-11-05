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

// Function: sub_002B9930
// Address: 0x2b9930 - 0x2b9978
void sub_002B9930_0x2b9930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9930_0x2b9930");
#endif

    switch (ctx->pc) {
        case 0x2b9948u: goto label_2b9948;
        case 0x2b9954u: goto label_2b9954;
        default: break;
    }

    ctx->pc = 0x2b9930u;

    // 0x2b9930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b9930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b9934: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b9934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b9938: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b9938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b993c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b993cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9940: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b9940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b9944: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b9944u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b9948:
    // 0x2b9948: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b9948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b994c: 0xc0ae6e6  jal         func_2B9B98
    ctx->pc = 0x2B994Cu;
    SET_GPR_U32(ctx, 31, 0x2B9954u);
    ctx->pc = 0x2B9950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B994Cu;
    // 0x2b9950: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9B98u, 0x2B994Cu, 0x2B9954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9954u;
label_2b9954:
    // 0x2b9954: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b9954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b9958: 0x1a00fffb  blez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2B9958u;
    {
        const bool branch_taken_0x2b9958 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2B995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9958u;
        // 0x2b995c: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9958) {
            ctx->pc = 0x2B9948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9948;
        }
    }
    ctx->pc = 0x2B9960u;
    // 0x2b9960: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b9960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9964: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b9964u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9968: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b9968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b996c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B996Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B996Cu;
        // 0x2b9970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B996Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9974u;
    // 0x2b9974: 0x0  nop
    ctx->pc = 0x2b9974u;
    // NOP
    ctx->pc = 0x2b9978u;
}
