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

// Function: sub_00399AF0
// Address: 0x399af0 - 0x399b38
void sub_00399AF0_0x399af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399AF0_0x399af0");
#endif

    switch (ctx->pc) {
        case 0x399b0cu: goto label_399b0c;
        case 0x399b18u: goto label_399b18;
        case 0x399b20u: goto label_399b20;
        default: break;
    }

    ctx->pc = 0x399af0u;

    // 0x399af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x399af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x399af4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x399af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x399af8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x399af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399afc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x399afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x399b00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x399b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x399b04: 0xc0e6a72  jal         func_39A9C8
    ctx->pc = 0x399B04u;
    SET_GPR_U32(ctx, 31, 0x399B0Cu);
    ctx->pc = 0x399B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399B04u;
    // 0x399b08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A9C8u, 0x399B04u, 0x399B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399B0Cu;
label_399b0c:
    // 0x399b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x399b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399b10: 0xc0e66ce  jal         func_399B38
    ctx->pc = 0x399B10u;
    SET_GPR_U32(ctx, 31, 0x399B18u);
    ctx->pc = 0x399B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399B10u;
    // 0x399b14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399B38u, 0x399B10u, 0x399B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399B18u;
label_399b18:
    // 0x399b18: 0xc0e6a78  jal         func_39A9E0
    ctx->pc = 0x399B18u;
    SET_GPR_U32(ctx, 31, 0x399B20u);
    ctx->pc = 0x399B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399B18u;
    // 0x399b1c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A9E0u, 0x399B18u, 0x399B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399B20u;
label_399b20:
    // 0x399b20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x399b20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x399b24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x399b24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399b28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x399b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x399b2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x399b2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x399b30: 0x3e00008  jr          $ra
    ctx->pc = 0x399B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399B30u;
        // 0x399b34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399B38u;
}
