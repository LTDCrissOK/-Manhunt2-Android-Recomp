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

// Function: sub_00209F98
// Address: 0x209f98 - 0x209fd0
void sub_00209F98_0x209f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209F98_0x209f98");
#endif

    switch (ctx->pc) {
        case 0x209fc0u: goto label_209fc0;
        default: break;
    }

    ctx->pc = 0x209f98u;

    // 0x209f98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x209f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x209f9c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x209f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x209fa0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x209fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x209fa4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x209fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x209fa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x209fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x209fac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x209facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209fb0: 0xac432b74  sw          $v1, 0x2B74($v0)
    ctx->pc = 0x209fb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x482B74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482B74u, _value); } while (0);
    // 0x209fb4: 0x24051005  addiu       $a1, $zero, 0x1005
    ctx->pc = 0x209fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4101));
    // 0x209fb8: 0xc082700  jal         func_209C00
    ctx->pc = 0x209FB8u;
    SET_GPR_U32(ctx, 31, 0x209FC0u);
    ctx->pc = 0x209FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209FB8u;
    // 0x209fbc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209C00u, 0x209FB8u, 0x209FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209FC0u;
label_209fc0:
    // 0x209fc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x209fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x209FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FC4u;
        // 0x209fc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209FCCu;
    // 0x209fcc: 0x0  nop
    ctx->pc = 0x209fccu;
    // NOP
    ctx->pc = 0x209fd0u;
}
