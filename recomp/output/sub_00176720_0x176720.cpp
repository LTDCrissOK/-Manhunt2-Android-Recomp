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

// Function: sub_00176720
// Address: 0x176720 - 0x176788
void sub_00176720_0x176720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176720_0x176720");
#endif

    switch (ctx->pc) {
        case 0x176750u: goto label_176750;
        case 0x176760u: goto label_176760;
        case 0x176770u: goto label_176770;
        default: break;
    }

    ctx->pc = 0x176720u;

    // 0x176720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x176724: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x176724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x176728: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x176728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17672c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17672cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176730: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x176730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x176734: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x176734u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x176738: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x176738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17673c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x17673cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x176740: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x176740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x176744: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176748: 0xc04efc0  jal         func_13BF00
    ctx->pc = 0x176748u;
    SET_GPR_U32(ctx, 31, 0x176750u);
    ctx->pc = 0x17674Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176748u;
    // 0x17674c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BF00u, 0x176748u, 0x176750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176750u;
label_176750:
    // 0x176750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176754: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x176754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176758: 0xc04f8e0  jal         func_13E380
    ctx->pc = 0x176758u;
    SET_GPR_U32(ctx, 31, 0x176760u);
    ctx->pc = 0x17675Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176758u;
    // 0x17675c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E380u, 0x176758u, 0x176760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176760u;
label_176760:
    // 0x176760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176764: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x176764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176768: 0xc05d8fe  jal         func_1763F8
    ctx->pc = 0x176768u;
    SET_GPR_U32(ctx, 31, 0x176770u);
    ctx->pc = 0x17676Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176768u;
    // 0x17676c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1763F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1763F8u, 0x176768u, 0x176770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176770u;
label_176770:
    // 0x176770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x176770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176774: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x176774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x176778: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x176778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17677c: 0x3e00008  jr          $ra
    ctx->pc = 0x17677Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17677Cu;
        // 0x176780: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17677Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176784u;
    // 0x176784: 0x0  nop
    ctx->pc = 0x176784u;
    // NOP
    ctx->pc = 0x176788u;
}
