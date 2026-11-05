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

// Function: sub_0014BBF0
// Address: 0x14bbf0 - 0x14bc38
void sub_0014BBF0_0x14bbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BBF0_0x14bbf0");
#endif

    switch (ctx->pc) {
        case 0x14bc14u: goto label_14bc14;
        case 0x14bc24u: goto label_14bc24;
        default: break;
    }

    ctx->pc = 0x14bbf0u;

    // 0x14bbf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14bbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14bbf4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x14bbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14bbf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14bbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14bbfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14bbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14bc00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14bc00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bc04: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x14bc04u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14bc08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14bc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14bc0c: 0xc053062  jal         func_14C188
    ctx->pc = 0x14BC0Cu;
    SET_GPR_U32(ctx, 31, 0x14BC14u);
    ctx->pc = 0x14BC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BC0Cu;
    // 0x14bc10: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C188u, 0x14BC0Cu, 0x14BC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BC14u;
label_14bc14:
    // 0x14bc14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bc18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14bc18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bc1c: 0xc04d88a  jal         func_136228
    ctx->pc = 0x14BC1Cu;
    SET_GPR_U32(ctx, 31, 0x14BC24u);
    ctx->pc = 0x14BC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BC1Cu;
    // 0x14bc20: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136228u, 0x14BC1Cu, 0x14BC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BC24u;
label_14bc24:
    // 0x14bc24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14bc24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14bc28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14bc28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14bc2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14bc2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14bc30: 0x3e00008  jr          $ra
    ctx->pc = 0x14BC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC30u;
        // 0x14bc34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BC38u;
}
