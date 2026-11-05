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

// Function: sub_00140B18
// Address: 0x140b18 - 0x140b60
void sub_00140B18_0x140b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140B18_0x140b18");
#endif

    switch (ctx->pc) {
        case 0x140b3cu: goto label_140b3c;
        case 0x140b4cu: goto label_140b4c;
        default: break;
    }

    ctx->pc = 0x140b18u;

    // 0x140b18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x140b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x140b1c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x140b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x140b20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x140b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x140b24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x140b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x140b28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x140b28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140b2c: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x140b2cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x140b30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x140b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x140b34: 0xc0503ca  jal         func_140F28
    ctx->pc = 0x140B34u;
    SET_GPR_U32(ctx, 31, 0x140B3Cu);
    ctx->pc = 0x140B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140B34u;
    // 0x140b38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F28u, 0x140B34u, 0x140B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B3Cu;
label_140b3c:
    // 0x140b3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140b40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x140b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140b44: 0xc04d88a  jal         func_136228
    ctx->pc = 0x140B44u;
    SET_GPR_U32(ctx, 31, 0x140B4Cu);
    ctx->pc = 0x140B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140B44u;
    // 0x140b48: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136228u, 0x140B44u, 0x140B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B4Cu;
label_140b4c:
    // 0x140b4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x140b4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140b50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x140b50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x140b54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x140b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140b58: 0x3e00008  jr          $ra
    ctx->pc = 0x140B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B58u;
        // 0x140b5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140B60u;
}
