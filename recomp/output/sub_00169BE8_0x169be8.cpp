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

// Function: sub_00169BE8
// Address: 0x169be8 - 0x169c38
void sub_00169BE8_0x169be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169BE8_0x169be8");
#endif

    switch (ctx->pc) {
        case 0x169c10u: goto label_169c10;
        case 0x169c20u: goto label_169c20;
        default: break;
    }

    ctx->pc = 0x169be8u;

    // 0x169be8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169bec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x169becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169bf0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x169bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x169bf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169bf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x169bfc: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x169bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x169c00: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x169C00u;
    {
        const bool branch_taken_0x169c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C00u;
        // 0x169c04: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c00) {
            ctx->pc = 0x169C14u;
            goto label_169c14;
        }
    }
    ctx->pc = 0x169C08u;
    // 0x169c08: 0xc05a798  jal         func_169E60
    ctx->pc = 0x169C08u;
    SET_GPR_U32(ctx, 31, 0x169C10u);
    ctx->pc = 0x169C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169C08u;
    // 0x169c0c: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169E60u, 0x169C08u, 0x169C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169C10u;
label_169c10:
    // 0x169c10: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x169c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
label_169c14:
    // 0x169c14: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x169c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x169c18: 0xc046058  jal         func_118160
    ctx->pc = 0x169C18u;
    SET_GPR_U32(ctx, 31, 0x169C20u);
    ctx->pc = 0x169C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169C18u;
    // 0x169c1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x169C18u, 0x169C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169C20u;
label_169c20:
    // 0x169c20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x169c20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169c24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x169c24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169c28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x169c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x169C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C2Cu;
        // 0x169c30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169C34u;
    // 0x169c34: 0x0  nop
    ctx->pc = 0x169c34u;
    // NOP
    ctx->pc = 0x169c38u;
}
