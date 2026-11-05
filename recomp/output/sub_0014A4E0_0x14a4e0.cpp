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

// Function: sub_0014A4E0
// Address: 0x14a4e0 - 0x14a538
void sub_0014A4E0_0x14a4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A4E0_0x14a4e0");
#endif

    switch (ctx->pc) {
        case 0x14a520u: goto label_14a520;
        default: break;
    }

    ctx->pc = 0x14a4e0u;

    // 0x14a4e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14a4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14a4e4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14a4e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14a4e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14a4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14a4ec: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x14a4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14a4f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14a4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14a4f4: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x14a4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x14a4f8: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x14a4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x14a4fc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x14a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14a500: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x14a500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14a504: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x14a504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14a508: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x14a508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14a50c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14a510: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14a510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14a514: 0x8c70020c  lw          $s0, 0x20C($v1)
    ctx->pc = 0x14a514u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x14a518: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x14A518u;
    SET_GPR_U32(ctx, 31, 0x14A520u);
    ctx->pc = 0x14A51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A518u;
    // 0x14a51c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x14A518u, 0x14A520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A520u;
label_14a520:
    // 0x14a520: 0xae000254  sw          $zero, 0x254($s0)
    ctx->pc = 0x14a520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 0));
    // 0x14a524: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14a524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a528: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14a528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14a52c: 0x3e00008  jr          $ra
    ctx->pc = 0x14A52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A52Cu;
        // 0x14a530: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A534u;
    // 0x14a534: 0x0  nop
    ctx->pc = 0x14a534u;
    // NOP
    ctx->pc = 0x14a538u;
}
