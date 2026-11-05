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

// Function: sub_00145E48
// Address: 0x145e48 - 0x145e90
void sub_00145E48_0x145e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145E48_0x145e48");
#endif

    switch (ctx->pc) {
        case 0x145e5cu: goto label_145e5c;
        case 0x145e7cu: goto label_145e7c;
        default: break;
    }

    ctx->pc = 0x145e48u;

    // 0x145e48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x145e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x145e4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x145e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x145e50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x145e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x145e54: 0xc04d6b0  jal         func_135AC0
    ctx->pc = 0x145E54u;
    SET_GPR_U32(ctx, 31, 0x145E5Cu);
    ctx->pc = 0x145E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145E54u;
    // 0x145e58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135AC0u, 0x145E54u, 0x145E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E5Cu;
label_145e5c:
    // 0x145e5c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x145e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x145e60: 0xae00056c  sw          $zero, 0x56C($s0)
    ctx->pc = 0x145e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1388), GPR_U32(ctx, 0));
    // 0x145e64: 0x24630948  addiu       $v1, $v1, 0x948
    ctx->pc = 0x145e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2376));
    // 0x145e68: 0xae000570  sw          $zero, 0x570($s0)
    ctx->pc = 0x145e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1392), GPR_U32(ctx, 0));
    // 0x145e6c: 0xae000460  sw          $zero, 0x460($s0)
    ctx->pc = 0x145e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 0));
    // 0x145e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145e74: 0xc0518a2  jal         func_146288
    ctx->pc = 0x145E74u;
    SET_GPR_U32(ctx, 31, 0x145E7Cu);
    ctx->pc = 0x145E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145E74u;
    // 0x145e78: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146288u, 0x145E74u, 0x145E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E7Cu;
label_145e7c:
    // 0x145e7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x145e7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145e80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x145e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x145e84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x145e84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145e88: 0x3e00008  jr          $ra
    ctx->pc = 0x145E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E88u;
        // 0x145e8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145E90u;
}
