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

// Function: sub_0037B6D0
// Address: 0x37b6d0 - 0x37b730
void sub_0037B6D0_0x37b6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B6D0_0x37b6d0");
#endif

    switch (ctx->pc) {
        case 0x37b6e4u: goto label_37b6e4;
        case 0x37b6f8u: goto label_37b6f8;
        case 0x37b714u: goto label_37b714;
        case 0x37b728u: goto label_37b728;
        default: break;
    }

    ctx->pc = 0x37b6d0u;

    // 0x37b6d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37b6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37b6d4: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x37b6d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x37b6d8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x37b6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x37b6dc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x37b6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x37b6e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37b6e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37b6e4:
    // 0x37b6e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x37b6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b6e8: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x37b6e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37b6ec: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x37b6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x37b6f0: 0xc0df52a  jal         func_37D4A8
    ctx->pc = 0x37B6F0u;
    SET_GPR_U32(ctx, 31, 0x37B6F8u);
    ctx->pc = 0x37B6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B6F0u;
    // 0x37b6f4: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D4A8u, 0x37B6F0u, 0x37B6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B6F8u;
label_37b6f8:
    // 0x37b6f8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x37b6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x37b6fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x37b6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b700: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x37b700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x37b704: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x37b704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x37b708: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x37b708u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b70c: 0xc0df50e  jal         func_37D438
    ctx->pc = 0x37B70Cu;
    SET_GPR_U32(ctx, 31, 0x37B714u);
    ctx->pc = 0x37B710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B70Cu;
    // 0x37b710: 0x7e020000  sq          $v0, 0x0($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D438u, 0x37B70Cu, 0x37B714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B714u;
label_37b714:
    // 0x37b714: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x37b714u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x37b718: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x37b718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37b71c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x37b71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x37b720: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x37b720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37b724: 0x3e00008  jr          $ra
label_37b728:
    if (ctx->pc == 0x37B728u) {
        ctx->pc = 0x37B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B724u;
        // 0x37b728: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B72Cu;
        goto label_fallthrough_0x37b724;
    }
    ctx->pc = 0x37B724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B724u;
        // 0x37b728: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x37b724:
    ctx->pc = 0x37B72Cu;
    // 0x37b72c: 0x0  nop
    ctx->pc = 0x37b72cu;
    // NOP
    ctx->pc = 0x37b730u;
}
