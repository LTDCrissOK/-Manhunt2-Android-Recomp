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

// Function: sub_0014BC38
// Address: 0x14bc38 - 0x14bc80
void sub_0014BC38_0x14bc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BC38_0x14bc38");
#endif

    switch (ctx->pc) {
        case 0x14bc5cu: goto label_14bc5c;
        case 0x14bc6cu: goto label_14bc6c;
        default: break;
    }

    ctx->pc = 0x14bc38u;

    // 0x14bc38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14bc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14bc3c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x14bc3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14bc40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14bc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14bc44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14bc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14bc48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14bc48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bc4c: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x14bc4cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14bc50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14bc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14bc54: 0xc053062  jal         func_14C188
    ctx->pc = 0x14BC54u;
    SET_GPR_U32(ctx, 31, 0x14BC5Cu);
    ctx->pc = 0x14BC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BC54u;
    // 0x14bc58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C188u, 0x14BC54u, 0x14BC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BC5Cu;
label_14bc5c:
    // 0x14bc5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bc60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14bc60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bc64: 0xc04d88a  jal         func_136228
    ctx->pc = 0x14BC64u;
    SET_GPR_U32(ctx, 31, 0x14BC6Cu);
    ctx->pc = 0x14BC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BC64u;
    // 0x14bc68: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136228u, 0x14BC64u, 0x14BC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BC6Cu;
label_14bc6c:
    // 0x14bc6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14bc6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14bc70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14bc70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14bc74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14bc74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14bc78: 0x3e00008  jr          $ra
    ctx->pc = 0x14BC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC78u;
        // 0x14bc7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BC80u;
}
