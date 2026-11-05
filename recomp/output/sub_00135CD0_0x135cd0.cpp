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

// Function: sub_00135CD0
// Address: 0x135cd0 - 0x135d28
void sub_00135CD0_0x135cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135CD0_0x135cd0");
#endif

    switch (ctx->pc) {
        case 0x135ce8u: goto label_135ce8;
        case 0x135cf8u: goto label_135cf8;
        case 0x135d10u: goto label_135d10;
        default: break;
    }

    ctx->pc = 0x135cd0u;

    // 0x135cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x135cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x135cd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x135cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x135cd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x135cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x135cdc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x135cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x135ce0: 0xc04f750  jal         func_13DD40
    ctx->pc = 0x135CE0u;
    SET_GPR_U32(ctx, 31, 0x135CE8u);
    ctx->pc = 0x135CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135CE0u;
    // 0x135ce4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x135CE0u, 0x135CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135CE8u;
label_135ce8:
    // 0x135ce8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x135ce8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135cec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135cf0: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x135CF0u;
    SET_GPR_U32(ctx, 31, 0x135CF8u);
    ctx->pc = 0x135CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135CF0u;
    // 0x135cf4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x135CF0u, 0x135CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135CF8u;
label_135cf8:
    // 0x135cf8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x135CF8u;
    {
        const bool branch_taken_0x135cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x135cf8) {
            ctx->pc = 0x135CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135CF8u;
            // 0x135cfc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135D14u;
            goto label_135d14;
        }
    }
    ctx->pc = 0x135D00u;
    // 0x135d00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135d04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x135d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135d08: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x135D08u;
    SET_GPR_U32(ctx, 31, 0x135D10u);
    ctx->pc = 0x135D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135D08u;
    // 0x135d0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x135D08u, 0x135D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135D10u;
label_135d10:
    // 0x135d10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135d10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_135d14:
    // 0x135d14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135d14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135d18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x135d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x135D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135D1Cu;
        // 0x135d20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135D24u;
    // 0x135d24: 0x0  nop
    ctx->pc = 0x135d24u;
    // NOP
    ctx->pc = 0x135d28u;
}
