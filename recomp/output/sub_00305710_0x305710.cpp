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

// Function: sub_00305710
// Address: 0x305710 - 0x305798
void sub_00305710_0x305710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305710_0x305710");
#endif

    switch (ctx->pc) {
        case 0x305734u: goto label_305734;
        case 0x305740u: goto label_305740;
        case 0x30574cu: goto label_30574c;
        case 0x305758u: goto label_305758;
        case 0x305764u: goto label_305764;
        case 0x305770u: goto label_305770;
        case 0x30577cu: goto label_30577c;
        case 0x305788u: goto label_305788;
        default: break;
    }

    ctx->pc = 0x305710u;

    // 0x305710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x305710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x305714: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x305714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x305718: 0x14a2001b  bne         $a1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x305718u;
    {
        const bool branch_taken_0x305718 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x30571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305718u;
        // 0x30571c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305718) {
            ctx->pc = 0x305788u;
            goto label_305788;
        }
    }
    ctx->pc = 0x305720u;
    // 0x305720: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x305720u;
    {
        const bool branch_taken_0x305720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x305724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305720u;
        // 0x305724: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305720) {
            ctx->pc = 0x30578Cu;
            goto label_30578c;
        }
    }
    ctx->pc = 0x305728u;
    // 0x305728: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x305728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x30572c: 0xc0c126c  jal         func_3049B0
    ctx->pc = 0x30572Cu;
    SET_GPR_U32(ctx, 31, 0x305734u);
    ctx->pc = 0x305730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30572Cu;
    // 0x305730: 0x24846560  addiu       $a0, $a0, 0x6560 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3049B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3049B0u, 0x30572Cu, 0x305734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305734u;
label_305734:
    // 0x305734: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x305734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x305738: 0xc0c126c  jal         func_3049B0
    ctx->pc = 0x305738u;
    SET_GPR_U32(ctx, 31, 0x305740u);
    ctx->pc = 0x30573Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305738u;
    // 0x30573c: 0x24846580  addiu       $a0, $a0, 0x6580 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3049B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3049B0u, 0x305738u, 0x305740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305740u;
label_305740:
    // 0x305740: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x305740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x305744: 0xc0c126c  jal         func_3049B0
    ctx->pc = 0x305744u;
    SET_GPR_U32(ctx, 31, 0x30574Cu);
    ctx->pc = 0x305748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305744u;
    // 0x305748: 0x248465a0  addiu       $a0, $a0, 0x65A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3049B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3049B0u, 0x305744u, 0x30574Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30574Cu;
label_30574c:
    // 0x30574c: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x30574cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x305750: 0xc0c126c  jal         func_3049B0
    ctx->pc = 0x305750u;
    SET_GPR_U32(ctx, 31, 0x305758u);
    ctx->pc = 0x305754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305750u;
    // 0x305754: 0x248465c0  addiu       $a0, $a0, 0x65C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3049B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3049B0u, 0x305750u, 0x305758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305758u;
label_305758:
    // 0x305758: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x305758u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x30575c: 0xc0c126c  jal         func_3049B0
    ctx->pc = 0x30575Cu;
    SET_GPR_U32(ctx, 31, 0x305764u);
    ctx->pc = 0x305760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30575Cu;
    // 0x305760: 0x248465e0  addiu       $a0, $a0, 0x65E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3049B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3049B0u, 0x30575Cu, 0x305764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305764u;
label_305764:
    // 0x305764: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x305764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x305768: 0xc0c126c  jal         func_3049B0
    ctx->pc = 0x305768u;
    SET_GPR_U32(ctx, 31, 0x305770u);
    ctx->pc = 0x30576Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305768u;
    // 0x30576c: 0x24846600  addiu       $a0, $a0, 0x6600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3049B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3049B0u, 0x305768u, 0x305770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305770u;
label_305770:
    // 0x305770: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x305770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x305774: 0xc0c126c  jal         func_3049B0
    ctx->pc = 0x305774u;
    SET_GPR_U32(ctx, 31, 0x30577Cu);
    ctx->pc = 0x305778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305774u;
    // 0x305778: 0x24846620  addiu       $a0, $a0, 0x6620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3049B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3049B0u, 0x305774u, 0x30577Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30577Cu;
label_30577c:
    // 0x30577c: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x30577cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x305780: 0xc0c12ea  jal         func_304BA8
    ctx->pc = 0x305780u;
    SET_GPR_U32(ctx, 31, 0x305788u);
    ctx->pc = 0x305784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305780u;
    // 0x305784: 0x24846640  addiu       $a0, $a0, 0x6640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304BA8u, 0x305780u, 0x305788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305788u;
label_305788:
    // 0x305788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x305788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30578c:
    // 0x30578c: 0x3e00008  jr          $ra
    ctx->pc = 0x30578Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30578Cu;
        // 0x305790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30578Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305794u;
    // 0x305794: 0x0  nop
    ctx->pc = 0x305794u;
    // NOP
    ctx->pc = 0x305798u;
}
