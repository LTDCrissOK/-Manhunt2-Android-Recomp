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

// Function: sub_0030F708
// Address: 0x30f708 - 0x30f760
void sub_0030F708_0x30f708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030F708_0x30f708");
#endif

    switch (ctx->pc) {
        case 0x30f730u: goto label_30f730;
        case 0x30f744u: goto label_30f744;
        default: break;
    }

    ctx->pc = 0x30f708u;

    // 0x30f708: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30f708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30f70c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30f70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30f710: 0x3c11005b  lui         $s1, 0x5B
    ctx->pc = 0x30f710u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)91 << 16));
    // 0x30f714: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30f714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30f718: 0x8e222140  lw          $v0, 0x2140($s1)
    ctx->pc = 0x30f718u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5B2140u));
    // 0x30f71c: 0x3c10005b  lui         $s0, 0x5B
    ctx->pc = 0x30f71cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)91 << 16));
    // 0x30f720: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30F720u;
    {
        const bool branch_taken_0x30f720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F720u;
        // 0x30f724: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f720) {
            ctx->pc = 0x30F744u;
            goto label_30f744;
        }
    }
    ctx->pc = 0x30F728u;
    // 0x30f728: 0xc0c3dd8  jal         func_30F760
    ctx->pc = 0x30F728u;
    SET_GPR_U32(ctx, 31, 0x30F730u);
    ctx->pc = 0x30F72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F728u;
    // 0x30f72c: 0x260417a0  addiu       $a0, $s0, 0x17A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F760u, 0x30F728u, 0x30F730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F730u;
label_30f730:
    // 0x30f730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30f730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f734: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x30f734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x30f738: 0xae222140  sw          $v0, 0x2140($s1)
    ctx->pc = 0x30f738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8512), GPR_U32(ctx, 2));
    // 0x30f73c: 0xc0f0278  jal         func_3C09E0
    ctx->pc = 0x30F73Cu;
    SET_GPR_U32(ctx, 31, 0x30F744u);
    ctx->pc = 0x30F740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F73Cu;
    // 0x30f740: 0x2484f6e0  addiu       $a0, $a0, -0x920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C09E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09E0u, 0x30F73Cu, 0x30F744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F744u;
label_30f744:
    // 0x30f744: 0x260217a0  addiu       $v0, $s0, 0x17A0
    ctx->pc = 0x30f744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 6048));
    // 0x30f748: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30f748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30f74c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30f74cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30f750: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30f750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30f754: 0x3e00008  jr          $ra
    ctx->pc = 0x30F754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F754u;
        // 0x30f758: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F75Cu;
    // 0x30f75c: 0x0  nop
    ctx->pc = 0x30f75cu;
    // NOP
    ctx->pc = 0x30f760u;
}
