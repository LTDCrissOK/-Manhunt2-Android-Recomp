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

// Function: sub_00117B18
// Address: 0x117b18 - 0x117b70
void sub_00117B18_0x117b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117B18_0x117b18");
#endif

    switch (ctx->pc) {
        case 0x117b40u: goto label_117b40;
        case 0x117b58u: goto label_117b58;
        default: break;
    }

    ctx->pc = 0x117b18u;

    // 0x117b18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x117b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x117b1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117b20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x117b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x117b24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x117b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117b28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x117b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x117b2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x117b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x117b30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x117B30u;
    {
        const bool branch_taken_0x117b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B30u;
        // 0x117b34: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b30) {
            ctx->pc = 0x117B40u;
            goto label_117b40;
        }
    }
    ctx->pc = 0x117B38u;
    // 0x117b38: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x117B38u;
    SET_GPR_U32(ctx, 31, 0x117B40u);
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x117B38u, 0x117B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117B40u;
label_117b40:
    // 0x117b40: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x117b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x117b44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x117B44u;
    {
        const bool branch_taken_0x117b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B44u;
        // 0x117b48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b44) {
            ctx->pc = 0x117B58u;
            goto label_117b58;
        }
    }
    ctx->pc = 0x117B4Cu;
    // 0x117b4c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x117b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x117b50: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x117B50u;
    SET_GPR_U32(ctx, 31, 0x117B58u);
    ctx->pc = 0x117B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117B50u;
    // 0x117b54: 0x24848780  addiu       $a0, $a0, -0x7880 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x117B50u, 0x117B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117B58u;
label_117b58:
    // 0x117b58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117b58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117b5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x117b5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x117b60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x117b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117b64: 0x3e00008  jr          $ra
    ctx->pc = 0x117B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B64u;
        // 0x117b68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117B6Cu;
    // 0x117b6c: 0x0  nop
    ctx->pc = 0x117b6cu;
    // NOP
    ctx->pc = 0x117b70u;
}
