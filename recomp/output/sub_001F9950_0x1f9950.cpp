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

// Function: sub_001F9950
// Address: 0x1f9950 - 0x1f9998
void sub_001F9950_0x1f9950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9950_0x1f9950");
#endif

    switch (ctx->pc) {
        case 0x1f9974u: goto label_1f9974;
        default: break;
    }

    ctx->pc = 0x1f9950u;

    // 0x1f9950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f9954: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f9954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f9958: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f9958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f995c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f995cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9960: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f9960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f9964: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F9964u;
    {
        const bool branch_taken_0x1f9964 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9964u;
        // 0x1f9968: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9964) {
            ctx->pc = 0x1F9980u;
            goto label_1f9980;
        }
    }
    ctx->pc = 0x1F996Cu;
    // 0x1f996c: 0xc07e64e  jal         func_1F9938
    ctx->pc = 0x1F996Cu;
    SET_GPR_U32(ctx, 31, 0x1F9974u);
    ctx->pc = 0x1F9970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F996Cu;
    // 0x1f9970: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9938u, 0x1F996Cu, 0x1F9974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9974u;
label_1f9974:
    // 0x1f9974: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F9974u;
    {
        const bool branch_taken_0x1f9974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9974u;
        // 0x1f9978: 0x362200e0  ori         $v0, $s1, 0xE0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)224);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9974) {
            ctx->pc = 0x1F9980u;
            goto label_1f9980;
        }
    }
    ctx->pc = 0x1F997Cu;
    // 0x1f997c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f997cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1f9980:
    // 0x1f9980: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9984: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f9984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f9988: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f9988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f998c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F998Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F998Cu;
        // 0x1f9990: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F998Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9994u;
    // 0x1f9994: 0x0  nop
    ctx->pc = 0x1f9994u;
    // NOP
    ctx->pc = 0x1f9998u;
}
