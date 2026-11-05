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

// Function: sub_00117B70
// Address: 0x117b70 - 0x117bb8
void sub_00117B70_0x117b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117B70_0x117b70");
#endif

    switch (ctx->pc) {
        case 0x117b8cu: goto label_117b8c;
        case 0x117b98u: goto label_117b98;
        default: break;
    }

    ctx->pc = 0x117b70u;

    // 0x117b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x117b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x117b74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117b78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x117b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x117b7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x117b7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117b80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x117b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x117b84: 0xc04635e  jal         func_118D78
    ctx->pc = 0x117B84u;
    SET_GPR_U32(ctx, 31, 0x117B8Cu);
    ctx->pc = 0x117B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117B84u;
    // 0x117b88: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D78u, 0x117B84u, 0x117B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117B8Cu;
label_117b8c:
    // 0x117b8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x117b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117b90: 0xc04638a  jal         func_118E28
    ctx->pc = 0x117B90u;
    SET_GPR_U32(ctx, 31, 0x117B98u);
    ctx->pc = 0x117B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117B90u;
    // 0x117b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118E28u, 0x117B90u, 0x117B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117B98u;
label_117b98:
    // 0x117b98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x117b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117b9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x117b9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x117ba0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x117ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x117ba4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117ba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117ba8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x117ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117bac: 0x3e00008  jr          $ra
    ctx->pc = 0x117BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117BACu;
        // 0x117bb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117BB4u;
    // 0x117bb4: 0x0  nop
    ctx->pc = 0x117bb4u;
    // NOP
    ctx->pc = 0x117bb8u;
}
