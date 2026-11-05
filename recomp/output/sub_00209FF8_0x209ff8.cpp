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

// Function: sub_00209FF8
// Address: 0x209ff8 - 0x20a038
void sub_00209FF8_0x209ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209FF8_0x209ff8");
#endif

    switch (ctx->pc) {
        case 0x20a014u: goto label_20a014;
        default: break;
    }

    ctx->pc = 0x209ff8u;

    // 0x209ff8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x209ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x209ffc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20a000: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20a000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a004: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20a004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20a008: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20a008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20a00c: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x20A00Cu;
    SET_GPR_U32(ctx, 31, 0x20A014u);
    ctx->pc = 0x20A010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A00Cu;
    // 0x20a010: 0x1020c0  sll         $a0, $s0, 3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x20A00Cu, 0x20A014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A014u;
label_20a014:
    // 0x20a014: 0x3c110048  lui         $s1, 0x48
    ctx->pc = 0x20a014u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
    // 0x20a018: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x20a018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x20a01c: 0xae222b78  sw          $v0, 0x2B78($s1)
    ctx->pc = 0x20a01cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x482B78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482B78u, _value); } while (0);
    // 0x20a020: 0xac702b7c  sw          $s0, 0x2B7C($v1)
    ctx->pc = 0x20a020u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x482B7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482B7Cu, _value); } while (0);
    // 0x20a024: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a028: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20a028u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a02c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20a02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a030: 0x3e00008  jr          $ra
    ctx->pc = 0x20A030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A030u;
        // 0x20a034: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A038u;
}
