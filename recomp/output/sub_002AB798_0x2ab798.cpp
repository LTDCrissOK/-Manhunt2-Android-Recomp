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

// Function: sub_002AB798
// Address: 0x2ab798 - 0x2ab838
void sub_002AB798_0x2ab798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB798_0x2ab798");
#endif

    switch (ctx->pc) {
        case 0x2ab7c4u: goto label_2ab7c4;
        case 0x2ab7d0u: goto label_2ab7d0;
        case 0x2ab7dcu: goto label_2ab7dc;
        default: break;
    }

    ctx->pc = 0x2ab798u;

    // 0x2ab798: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ab798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ab79c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ab79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ab7a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ab7a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab7a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ab7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ab7a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ab7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ab7ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ab7acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab7b0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ab7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2ab7b4: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x2ab7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2ab7b8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ab7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2ab7bc: 0xc0ab35e  jal         func_2ACD78
    ctx->pc = 0x2AB7BCu;
    SET_GPR_U32(ctx, 31, 0x2AB7C4u);
    ctx->pc = 0x2AB7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB7BCu;
    // 0x2ab7c0: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACD78u, 0x2AB7BCu, 0x2AB7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB7C4u;
label_2ab7c4:
    // 0x2ab7c4: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x2ab7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x2ab7c8: 0xc0ab35e  jal         func_2ACD78
    ctx->pc = 0x2AB7C8u;
    SET_GPR_U32(ctx, 31, 0x2AB7D0u);
    ctx->pc = 0x2AB7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB7C8u;
    // 0x2ab7cc: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACD78u, 0x2AB7C8u, 0x2AB7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB7D0u;
label_2ab7d0:
    // 0x2ab7d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ab7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab7d4: 0xc0aae0e  jal         func_2AB838
    ctx->pc = 0x2AB7D4u;
    SET_GPR_U32(ctx, 31, 0x2AB7DCu);
    ctx->pc = 0x2AB7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB7D4u;
    // 0x2ab7d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB838u, 0x2AB7D4u, 0x2AB7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB7DCu;
label_2ab7dc:
    // 0x2ab7dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ab7dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab7e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ab7e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab7e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ab7e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab7e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ab7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB7ECu;
        // 0x2ab7f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB7ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB7F4u;
    // 0x2ab7f4: 0x0  nop
    ctx->pc = 0x2ab7f4u;
    // NOP
    // 0x2ab7f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ab7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ab7fc: 0x0  nop
    ctx->pc = 0x2ab7fcu;
    // NOP
    // 0x2ab800: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ab800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ab804: 0x0  nop
    ctx->pc = 0x2ab804u;
    // NOP
    // 0x2ab808: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2ab808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ab80c: 0x0  nop
    ctx->pc = 0x2ab80cu;
    // NOP
    // 0x2ab810: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ab810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ab814: 0x0  nop
    ctx->pc = 0x2ab814u;
    // NOP
    // 0x2ab818: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ab818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ab81c: 0x0  nop
    ctx->pc = 0x2ab81cu;
    // NOP
    // 0x2ab820: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ab820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ab824: 0x0  nop
    ctx->pc = 0x2ab824u;
    // NOP
    // 0x2ab828: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2ab828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ab82c: 0x0  nop
    ctx->pc = 0x2ab82cu;
    // NOP
    // 0x2ab830: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ab830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ab834: 0x0  nop
    ctx->pc = 0x2ab834u;
    // NOP
    ctx->pc = 0x2ab838u;
}
