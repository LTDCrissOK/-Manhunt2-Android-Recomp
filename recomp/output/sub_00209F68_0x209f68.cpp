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

// Function: sub_00209F68
// Address: 0x209f68 - 0x209f98
void sub_00209F68_0x209f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209F68_0x209f68");
#endif

    switch (ctx->pc) {
        case 0x209f8cu: goto label_209f8c;
        default: break;
    }

    ctx->pc = 0x209f68u;

    // 0x209f68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x209f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x209f6c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x209f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x209f70: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x209f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x209f74: 0x24051004  addiu       $a1, $zero, 0x1004
    ctx->pc = 0x209f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4100));
    // 0x209f78: 0xac442b70  sw          $a0, 0x2B70($v0)
    ctx->pc = 0x209f78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x482B70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482B70u, _value); } while (0);
    // 0x209f7c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x209f7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209f80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x209f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x209f84: 0xc082700  jal         func_209C00
    ctx->pc = 0x209F84u;
    SET_GPR_U32(ctx, 31, 0x209F8Cu);
    ctx->pc = 0x209F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209F84u;
    // 0x209f88: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209C00u, 0x209F84u, 0x209F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209F8Cu;
label_209f8c:
    // 0x209f8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x209f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209f90: 0x3e00008  jr          $ra
    ctx->pc = 0x209F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F90u;
        // 0x209f94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209F98u;
}
