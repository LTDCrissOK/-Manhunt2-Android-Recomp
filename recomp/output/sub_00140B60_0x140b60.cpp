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

// Function: sub_00140B60
// Address: 0x140b60 - 0x140ba8
void sub_00140B60_0x140b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140B60_0x140b60");
#endif

    switch (ctx->pc) {
        case 0x140b84u: goto label_140b84;
        case 0x140b94u: goto label_140b94;
        default: break;
    }

    ctx->pc = 0x140b60u;

    // 0x140b60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x140b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x140b64: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x140b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x140b68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x140b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x140b6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x140b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x140b70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x140b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140b74: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x140b74u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x140b78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x140b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x140b7c: 0xc0503ca  jal         func_140F28
    ctx->pc = 0x140B7Cu;
    SET_GPR_U32(ctx, 31, 0x140B84u);
    ctx->pc = 0x140B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140B7Cu;
    // 0x140b80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F28u, 0x140B7Cu, 0x140B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B84u;
label_140b84:
    // 0x140b84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140b88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x140b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140b8c: 0xc04d88a  jal         func_136228
    ctx->pc = 0x140B8Cu;
    SET_GPR_U32(ctx, 31, 0x140B94u);
    ctx->pc = 0x140B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140B8Cu;
    // 0x140b90: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136228u, 0x140B8Cu, 0x140B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B94u;
label_140b94:
    // 0x140b94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x140b94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140b98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x140b98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x140b9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x140b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x140BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BA0u;
        // 0x140ba4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140BA8u;
}
