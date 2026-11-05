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

// Function: sub_00173FB0
// Address: 0x173fb0 - 0x174018
void sub_00173FB0_0x173fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173FB0_0x173fb0");
#endif

    switch (ctx->pc) {
        case 0x173fe0u: goto label_173fe0;
        case 0x173ff0u: goto label_173ff0;
        case 0x174000u: goto label_174000;
        default: break;
    }

    ctx->pc = 0x173fb0u;

    // 0x173fb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x173fb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x173fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173fb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x173fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x173fbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x173fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173fc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x173fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x173fc4: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x173fc4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x173fc8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x173fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x173fcc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x173fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x173fd0: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x173fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x173fd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x173fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x173fd8: 0xc04efc0  jal         func_13BF00
    ctx->pc = 0x173FD8u;
    SET_GPR_U32(ctx, 31, 0x173FE0u);
    ctx->pc = 0x173FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173FD8u;
    // 0x173fdc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BF00u, 0x173FD8u, 0x173FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173FE0u;
label_173fe0:
    // 0x173fe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173fe4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x173fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173fe8: 0xc04f8e0  jal         func_13E380
    ctx->pc = 0x173FE8u;
    SET_GPR_U32(ctx, 31, 0x173FF0u);
    ctx->pc = 0x173FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173FE8u;
    // 0x173fec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E380u, 0x173FE8u, 0x173FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173FF0u;
label_173ff0:
    // 0x173ff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173ff4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x173ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173ff8: 0xc05cd5c  jal         func_173570
    ctx->pc = 0x173FF8u;
    SET_GPR_U32(ctx, 31, 0x174000u);
    ctx->pc = 0x173FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173FF8u;
    // 0x173ffc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173570u, 0x173FF8u, 0x174000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174000u;
label_174000:
    // 0x174000: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x174000u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174004: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x174004u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174008: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x174008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17400c: 0x3e00008  jr          $ra
    ctx->pc = 0x17400Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17400Cu;
        // 0x174010: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17400Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174014u;
    // 0x174014: 0x0  nop
    ctx->pc = 0x174014u;
    // NOP
    ctx->pc = 0x174018u;
}
