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

// Function: sub_00220ED8
// Address: 0x220ed8 - 0x220f20
void sub_00220ED8_0x220ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220ED8_0x220ed8");
#endif

    switch (ctx->pc) {
        case 0x220ef4u: goto label_220ef4;
        case 0x220f04u: goto label_220f04;
        case 0x220f0cu: goto label_220f0c;
        default: break;
    }

    ctx->pc = 0x220ed8u;

    // 0x220ed8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x220ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x220edc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x220edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220ee0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x220ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x220ee4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x220ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220ee8: 0x26050230  addiu       $a1, $s0, 0x230
    ctx->pc = 0x220ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    // 0x220eec: 0xc087996  jal         func_21E658
    ctx->pc = 0x220EECu;
    SET_GPR_U32(ctx, 31, 0x220EF4u);
    ctx->pc = 0x220EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220EECu;
    // 0x220ef0: 0x8e060228  lw          $a2, 0x228($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E658u, 0x220EECu, 0x220EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220EF4u;
label_220ef4:
    // 0x220ef4: 0x8e0602e4  lw          $a2, 0x2E4($s0)
    ctx->pc = 0x220ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
    // 0x220ef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x220ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220efc: 0xc087996  jal         func_21E658
    ctx->pc = 0x220EFCu;
    SET_GPR_U32(ctx, 31, 0x220F04u);
    ctx->pc = 0x220F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220EFCu;
    // 0x220f00: 0x260502ec  addiu       $a1, $s0, 0x2EC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 748));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E658u, 0x220EFCu, 0x220F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220F04u;
label_220f04:
    // 0x220f04: 0xc0878f2  jal         func_21E3C8
    ctx->pc = 0x220F04u;
    SET_GPR_U32(ctx, 31, 0x220F0Cu);
    ctx->pc = 0x220F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220F04u;
    // 0x220f08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E3C8u, 0x220F04u, 0x220F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220F0Cu;
label_220f0c:
    // 0x220f0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220f0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220f10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x220f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220f14: 0x3e00008  jr          $ra
    ctx->pc = 0x220F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220F14u;
        // 0x220f18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220F1Cu;
    // 0x220f1c: 0x0  nop
    ctx->pc = 0x220f1cu;
    // NOP
    ctx->pc = 0x220f20u;
}
