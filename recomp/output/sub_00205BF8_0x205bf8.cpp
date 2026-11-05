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

// Function: sub_00205BF8
// Address: 0x205bf8 - 0x205c40
void sub_00205BF8_0x205bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205BF8_0x205bf8");
#endif

    switch (ctx->pc) {
        case 0x205c1cu: goto label_205c1c;
        case 0x205c24u: goto label_205c24;
        default: break;
    }

    ctx->pc = 0x205bf8u;

    // 0x205bf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205bfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x205bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x205c00: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x205c00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x205c04: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x205c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x205c08: 0x8e0293c4  lw          $v0, -0x6C3C($s0)
    ctx->pc = 0x205c08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F93C4u));
    // 0x205c0c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x205C0Cu;
    {
        const bool branch_taken_0x205c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205c0c) {
            ctx->pc = 0x205C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205C0Cu;
            // 0x205c10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205C30u;
            goto label_205c30;
        }
    }
    ctx->pc = 0x205C14u;
    // 0x205c14: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x205C14u;
    SET_GPR_U32(ctx, 31, 0x205C1Cu);
    ctx->pc = 0x205C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205C14u;
    // 0x205c18: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x205C14u, 0x205C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205C1Cu;
label_205c1c:
    // 0x205c1c: 0xc081722  jal         func_205C88
    ctx->pc = 0x205C1Cu;
    SET_GPR_U32(ctx, 31, 0x205C24u);
    ctx->pc = 0x205C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205C1Cu;
    // 0x205c20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C88u, 0x205C1Cu, 0x205C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205C24u;
label_205c24:
    // 0x205c24: 0xae0293c4  sw          $v0, -0x6C3C($s0)
    ctx->pc = 0x205c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294939588), GPR_U32(ctx, 2));
    // 0x205c28: 0x8e0293c4  lw          $v0, -0x6C3C($s0)
    ctx->pc = 0x205c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939588)));
    // 0x205c2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x205c2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_205c30:
    // 0x205c30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x205c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205c34: 0x3e00008  jr          $ra
    ctx->pc = 0x205C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C34u;
        // 0x205c38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205C3Cu;
    // 0x205c3c: 0x0  nop
    ctx->pc = 0x205c3cu;
    // NOP
    ctx->pc = 0x205c40u;
}
