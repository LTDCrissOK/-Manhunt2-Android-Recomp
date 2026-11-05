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

// Function: sub_001D1FB8
// Address: 0x1d1fb8 - 0x1d2008
void sub_001D1FB8_0x1d1fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1FB8_0x1d1fb8");
#endif

    switch (ctx->pc) {
        case 0x1d1fe0u: goto label_1d1fe0;
        default: break;
    }

    ctx->pc = 0x1d1fb8u;

    // 0x1d1fb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d1fbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1fc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d1fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d1fc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d1fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1fc8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d1fc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1fcc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d1fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d1fd0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d1fd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1fd4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d1fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d1fd8: 0xc0b241a  jal         func_2C9068
    ctx->pc = 0x1D1FD8u;
    SET_GPR_U32(ctx, 31, 0x1D1FE0u);
    ctx->pc = 0x1D1FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1FD8u;
    // 0x1d1fdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9068u, 0x1D1FD8u, 0x1D1FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1FE0u;
label_1d1fe0:
    // 0x1d1fe0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d1fe0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1fe4: 0xae120024  sw          $s2, 0x24($s0)
    ctx->pc = 0x1d1fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 18));
    // 0x1d1fe8: 0xae110020  sw          $s1, 0x20($s0)
    ctx->pc = 0x1d1fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
    // 0x1d1fec: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1d1fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1d1ff0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1ff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1ff4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d1ff4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1ff8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d1ff8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1ffc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d1ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2000: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2000u;
        // 0x1d2004: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2008u;
}
