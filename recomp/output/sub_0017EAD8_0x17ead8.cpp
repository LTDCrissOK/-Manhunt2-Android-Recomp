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

// Function: sub_0017EAD8
// Address: 0x17ead8 - 0x17eb20
void sub_0017EAD8_0x17ead8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017EAD8_0x17ead8");
#endif

    switch (ctx->pc) {
        case 0x17eaf0u: goto label_17eaf0;
        case 0x17eafcu: goto label_17eafc;
        case 0x17eb0cu: goto label_17eb0c;
        default: break;
    }

    ctx->pc = 0x17ead8u;

    // 0x17ead8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17ead8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17eadc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17eadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17eae0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17eae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eae4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17eae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17eae8: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x17EAE8u;
    SET_GPR_U32(ctx, 31, 0x17EAF0u);
    ctx->pc = 0x17EAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EAE8u;
    // 0x17eaec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x17EAE8u, 0x17EAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EAF0u;
label_17eaf0:
    // 0x17eaf0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17eaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eaf4: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x17EAF4u;
    SET_GPR_U32(ctx, 31, 0x17EAFCu);
    ctx->pc = 0x17EAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EAF4u;
    // 0x17eaf8: 0x2405fffc  addiu       $a1, $zero, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x17EAF4u, 0x17EAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EAFCu;
label_17eafc:
    // 0x17eafc: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x17eafcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x17eb00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17eb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eb04: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x17EB04u;
    SET_GPR_U32(ctx, 31, 0x17EB0Cu);
    ctx->pc = 0x17EB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB04u;
    // 0x17eb08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x17EB04u, 0x17EB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EB0Cu;
label_17eb0c:
    // 0x17eb0c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17eb0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17eb10: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17eb10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17eb14: 0x3e00008  jr          $ra
    ctx->pc = 0x17EB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB14u;
        // 0x17eb18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EB1Cu;
    // 0x17eb1c: 0x0  nop
    ctx->pc = 0x17eb1cu;
    // NOP
    ctx->pc = 0x17eb20u;
}
