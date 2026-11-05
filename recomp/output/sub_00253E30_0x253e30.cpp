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

// Function: sub_00253E30
// Address: 0x253e30 - 0x253e88
void sub_00253E30_0x253e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253E30_0x253e30");
#endif

    switch (ctx->pc) {
        case 0x253e6cu: goto label_253e6c;
        case 0x253e74u: goto label_253e74;
        default: break;
    }

    ctx->pc = 0x253e30u;

    // 0x253e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x253e34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x253e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x253e38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x253e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x253e3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x253e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253e40: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x253e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x253e44: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x253e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x253e48: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x253E48u;
    {
        const bool branch_taken_0x253e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x253e48) {
            ctx->pc = 0x253E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253E48u;
            // 0x253e4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253E78u;
            goto label_253e78;
        }
    }
    ctx->pc = 0x253E50u;
    // 0x253e50: 0x8e020fe8  lw          $v0, 0xFE8($s0)
    ctx->pc = 0x253e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    // 0x253e54: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x253e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x253e58: 0xae031060  sw          $v1, 0x1060($s0)
    ctx->pc = 0x253e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4192), GPR_U32(ctx, 3));
    // 0x253e5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x253e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253e60: 0xac44035c  sw          $a0, 0x35C($v0)
    ctx->pc = 0x253e60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 860), GPR_U32(ctx, 4));
    // 0x253e64: 0xc061d60  jal         func_187580
    ctx->pc = 0x253E64u;
    SET_GPR_U32(ctx, 31, 0x253E6Cu);
    ctx->pc = 0x253E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253E64u;
    // 0x253e68: 0x8e040fe4  lw          $a0, 0xFE4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187580u, 0x253E64u, 0x253E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253E6Cu;
label_253e6c:
    // 0x253e6c: 0xc0944f6  jal         func_2513D8
    ctx->pc = 0x253E6Cu;
    SET_GPR_U32(ctx, 31, 0x253E74u);
    ctx->pc = 0x253E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253E6Cu;
    // 0x253e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2513D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513D8u, 0x253E6Cu, 0x253E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253E74u;
label_253e74:
    // 0x253e74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_253e78:
    // 0x253e78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x253e78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253e7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x253e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x253e80: 0x3e00008  jr          $ra
    ctx->pc = 0x253E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E80u;
        // 0x253e84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253E88u;
}
