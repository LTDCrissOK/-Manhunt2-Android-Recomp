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

// Function: sub_001446C0
// Address: 0x1446c0 - 0x144748
void sub_001446C0_0x1446c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001446C0_0x1446c0");
#endif

    switch (ctx->pc) {
        case 0x1446dcu: goto label_1446dc;
        case 0x144708u: goto label_144708;
        case 0x144730u: goto label_144730;
        default: break;
    }

    ctx->pc = 0x1446c0u;

    // 0x1446c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1446c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1446c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1446c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1446c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1446c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1446cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1446ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1446d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1446d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1446d4: 0xc04e880  jal         func_13A200
    ctx->pc = 0x1446D4u;
    SET_GPR_U32(ctx, 31, 0x1446DCu);
    ctx->pc = 0x1446D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1446D4u;
    // 0x1446d8: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A200u, 0x1446D4u, 0x1446DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1446DCu;
label_1446dc:
    // 0x1446dc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1446DCu;
    {
        const bool branch_taken_0x1446dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1446E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1446DCu;
        // 0x1446e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1446dc) {
            ctx->pc = 0x144730u;
            goto label_144730;
        }
    }
    ctx->pc = 0x1446E4u;
    // 0x1446e4: 0x9222046c  lbu         $v0, 0x46C($s1)
    ctx->pc = 0x1446e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1446e8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1446e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1446ec: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1446ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1446f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1446f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1446f4: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1446f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1446f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1446f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1446fc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1446fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144700: 0xc04dc8c  jal         func_137230
    ctx->pc = 0x144700u;
    SET_GPR_U32(ctx, 31, 0x144708u);
    ctx->pc = 0x144704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144700u;
    // 0x144704: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137230u, 0x144700u, 0x144708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144708u;
label_144708:
    // 0x144708: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x144708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x14470c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x14470cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x144710: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x144710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x144714: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x144714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x144718: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x144718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14471c: 0x8e270ab0  lw          $a3, 0xAB0($s1)
    ctx->pc = 0x14471cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2736)));
    // 0x144720: 0x8c460108  lw          $a2, 0x108($v0)
    ctx->pc = 0x144720u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x144724: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x144724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x144728: 0xc04668a  jal         func_119A28
    ctx->pc = 0x144728u;
    SET_GPR_U32(ctx, 31, 0x144730u);
    ctx->pc = 0x14472Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144728u;
    // 0x14472c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A28u, 0x144728u, 0x144730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144730u;
label_144730:
    // 0x144730: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x144730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144734: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x144734u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x144738: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x144738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14473c: 0x3e00008  jr          $ra
    ctx->pc = 0x14473Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14473Cu;
        // 0x144740: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14473Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144744u;
    // 0x144744: 0x0  nop
    ctx->pc = 0x144744u;
    // NOP
    ctx->pc = 0x144748u;
}
