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

// Function: sub_0035C038
// Address: 0x35c038 - 0x35c090
void sub_0035C038_0x35c038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C038_0x35c038");
#endif

    switch (ctx->pc) {
        case 0x35c04cu: goto label_35c04c;
        case 0x35c054u: goto label_35c054;
        case 0x35c05cu: goto label_35c05c;
        case 0x35c064u: goto label_35c064;
        default: break;
    }

    ctx->pc = 0x35c038u;

    // 0x35c038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35c038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35c03c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35c03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35c040: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35c040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35c044: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x35C044u;
    SET_GPR_U32(ctx, 31, 0x35C04Cu);
    ctx->pc = 0x35C048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C044u;
    // 0x35c048: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x35C044u, 0x35C04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C04Cu;
label_35c04c:
    // 0x35c04c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x35C04Cu;
    SET_GPR_U32(ctx, 31, 0x35C054u);
    ctx->pc = 0x35C050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C04Cu;
    // 0x35c050: 0x260405f0  addiu       $a0, $s0, 0x5F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35C04Cu, 0x35C054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C054u;
label_35c054:
    // 0x35c054: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x35C054u;
    SET_GPR_U32(ctx, 31, 0x35C05Cu);
    ctx->pc = 0x35C058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C054u;
    // 0x35c058: 0x26040600  addiu       $a0, $s0, 0x600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35C054u, 0x35C05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C05Cu;
label_35c05c:
    // 0x35c05c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x35C05Cu;
    SET_GPR_U32(ctx, 31, 0x35C064u);
    ctx->pc = 0x35C060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C05Cu;
    // 0x35c060: 0x26040610  addiu       $a0, $s0, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35C05Cu, 0x35C064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C064u;
label_35c064:
    // 0x35c064: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x35c064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c068: 0xae0005e0  sw          $zero, 0x5E0($s0)
    ctx->pc = 0x35c068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1504), GPR_U32(ctx, 0));
    // 0x35c06c: 0xae000628  sw          $zero, 0x628($s0)
    ctx->pc = 0x35c06cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1576), GPR_U32(ctx, 0));
    // 0x35c070: 0xa2000620  sb          $zero, 0x620($s0)
    ctx->pc = 0x35c070u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1568), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35c074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c078: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35c078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35c07c: 0x3e00008  jr          $ra
    ctx->pc = 0x35C07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C07Cu;
        // 0x35c080: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C084u;
    // 0x35c084: 0x0  nop
    ctx->pc = 0x35c084u;
    // NOP
    // 0x35c088: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x35c088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35c08c: 0x0  nop
    ctx->pc = 0x35c08cu;
    // NOP
    ctx->pc = 0x35c090u;
}
