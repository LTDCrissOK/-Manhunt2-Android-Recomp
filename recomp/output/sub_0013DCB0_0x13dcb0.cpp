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

// Function: sub_0013DCB0
// Address: 0x13dcb0 - 0x13dd00
void sub_0013DCB0_0x13dcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DCB0_0x13dcb0");
#endif

    switch (ctx->pc) {
        case 0x13dcd0u: goto label_13dcd0;
        case 0x13dce8u: goto label_13dce8;
        default: break;
    }

    ctx->pc = 0x13dcb0u;

    // 0x13dcb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13dcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13dcb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13dcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13dcb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13dcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13dcbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13dcbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dcc0: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x13dcc0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13dcc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13dcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13dcc8: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x13DCC8u;
    SET_GPR_U32(ctx, 31, 0x13DCD0u);
    ctx->pc = 0x13DCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DCC8u;
    // 0x13dccc: 0x112080  sll         $a0, $s1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x13DCC8u, 0x13DCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DCD0u;
label_13dcd0:
    // 0x13dcd0: 0xa2110008  sb          $s1, 0x8($s0)
    ctx->pc = 0x13dcd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x13dcd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13dcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13dcd8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x13dcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x13dcdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13dcdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dce0: 0xc04f782  jal         func_13DE08
    ctx->pc = 0x13DCE0u;
    SET_GPR_U32(ctx, 31, 0x13DCE8u);
    ctx->pc = 0x13DCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DCE0u;
    // 0x13dce4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DE08u, 0x13DCE0u, 0x13DCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DCE8u;
label_13dce8:
    // 0x13dce8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13dce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13dcec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13dcecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13dcf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13dcf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13dcf4: 0x3e00008  jr          $ra
    ctx->pc = 0x13DCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DCF4u;
        // 0x13dcf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DCF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DCFCu;
    // 0x13dcfc: 0x0  nop
    ctx->pc = 0x13dcfcu;
    // NOP
    ctx->pc = 0x13dd00u;
}
