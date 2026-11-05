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

// Function: sub_002B8908
// Address: 0x2b8908 - 0x2b8950
void sub_002B8908_0x2b8908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8908_0x2b8908");
#endif

    switch (ctx->pc) {
        case 0x2b8924u: goto label_2b8924;
        case 0x2b8930u: goto label_2b8930;
        default: break;
    }

    ctx->pc = 0x2b8908u;

    // 0x2b8908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b8908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b890c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2b890cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2b8910: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b8910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b8914: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b8914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8918: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b8918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b891c: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B891Cu;
    SET_GPR_U32(ctx, 31, 0x2B8924u);
    ctx->pc = 0x2B8920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B891Cu;
    // 0x2b8920: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B891Cu, 0x2B8924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8924u;
label_2b8924:
    // 0x2b8924: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b8924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b8928: 0xc0c29a4  jal         func_30A690
    ctx->pc = 0x2B8928u;
    SET_GPR_U32(ctx, 31, 0x2B8930u);
    ctx->pc = 0x2B892Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8928u;
    // 0x2b892c: 0x8c44a300  lw          $a0, -0x5D00($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A690u, 0x2B8928u, 0x2B8930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8930u;
label_2b8930:
    // 0x2b8930: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2b8930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2b8934: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b8934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8938: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b8938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2b893c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2b893cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2b8940: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b8940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8944: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8944u;
        // 0x2b8948: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B894Cu;
    // 0x2b894c: 0x0  nop
    ctx->pc = 0x2b894cu;
    // NOP
    ctx->pc = 0x2b8950u;
}
