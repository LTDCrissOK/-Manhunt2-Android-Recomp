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

// Function: sub_001085E0
// Address: 0x1085e0 - 0x108638
void sub_001085E0_0x1085e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001085E0_0x1085e0");
#endif

    switch (ctx->pc) {
        case 0x108604u: goto label_108604;
        case 0x10861cu: goto label_10861c;
        default: break;
    }

    ctx->pc = 0x1085e0u;

    // 0x1085e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1085e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1085e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1085e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1085e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1085e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1085ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1085ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1085f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1085f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1085f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1085f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1085f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1085f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1085fc: 0xc042240  jal         func_108900
    ctx->pc = 0x1085FCu;
    SET_GPR_U32(ctx, 31, 0x108604u);
    ctx->pc = 0x108600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1085FCu;
    // 0x108600: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108900u, 0x1085FCu, 0x108604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108604u;
label_108604:
    // 0x108604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108608: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x108608u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x10860c: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x10860cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x108610: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x108610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108614: 0xc0422a8  jal         func_108AA0
    ctx->pc = 0x108614u;
    SET_GPR_U32(ctx, 31, 0x10861Cu);
    ctx->pc = 0x108618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108614u;
    // 0x108618: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x108614u, 0x10861Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10861Cu;
label_10861c:
    // 0x10861c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10861cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108620: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x108620u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x108624: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x108624u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108628: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x108628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10862c: 0x3e00008  jr          $ra
    ctx->pc = 0x10862Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10862Cu;
        // 0x108630: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10862Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108634u;
    // 0x108634: 0x0  nop
    ctx->pc = 0x108634u;
    // NOP
    ctx->pc = 0x108638u;
}
