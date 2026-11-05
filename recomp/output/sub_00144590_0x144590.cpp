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

// Function: sub_00144590
// Address: 0x144590 - 0x144628
void sub_00144590_0x144590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144590_0x144590");
#endif

    switch (ctx->pc) {
        case 0x1445acu: goto label_1445ac;
        case 0x1445d8u: goto label_1445d8;
        case 0x1445e8u: goto label_1445e8;
        case 0x144610u: goto label_144610;
        default: break;
    }

    ctx->pc = 0x144590u;

    // 0x144590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x144590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x144594: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x144594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x144598: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x144598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14459c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14459cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1445a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1445a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1445a4: 0xc04e880  jal         func_13A200
    ctx->pc = 0x1445A4u;
    SET_GPR_U32(ctx, 31, 0x1445ACu);
    ctx->pc = 0x1445A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1445A4u;
    // 0x1445a8: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A200u, 0x1445A4u, 0x1445ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1445ACu;
label_1445ac:
    // 0x1445ac: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1445ACu;
    {
        const bool branch_taken_0x1445ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1445B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1445ACu;
        // 0x1445b0: 0x24070012  addiu       $a3, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1445ac) {
            ctx->pc = 0x144610u;
            goto label_144610;
        }
    }
    ctx->pc = 0x1445B4u;
    // 0x1445b4: 0x9222046c  lbu         $v0, 0x46C($s1)
    ctx->pc = 0x1445b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1445b8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1445b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1445bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1445bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1445c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1445c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1445c4: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1445c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1445c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1445c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1445cc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1445ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1445d0: 0xc04dc4c  jal         func_137130
    ctx->pc = 0x1445D0u;
    SET_GPR_U32(ctx, 31, 0x1445D8u);
    ctx->pc = 0x1445D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1445D0u;
    // 0x1445d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137130u, 0x1445D0u, 0x1445D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1445D8u;
label_1445d8:
    // 0x1445d8: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x1445d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1445dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1445dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1445e0: 0xc04e88a  jal         func_13A228
    ctx->pc = 0x1445E0u;
    SET_GPR_U32(ctx, 31, 0x1445E8u);
    ctx->pc = 0x1445E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1445E0u;
    // 0x1445e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A228u, 0x1445E0u, 0x1445E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1445E8u;
label_1445e8:
    // 0x1445e8: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1445e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1445ec: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1445ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1445f0: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1445f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1445f4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1445f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1445f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1445f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1445fc: 0x8e270ab0  lw          $a3, 0xAB0($s1)
    ctx->pc = 0x1445fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2736)));
    // 0x144600: 0x8c460108  lw          $a2, 0x108($v0)
    ctx->pc = 0x144600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x144604: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x144604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x144608: 0xc04668a  jal         func_119A28
    ctx->pc = 0x144608u;
    SET_GPR_U32(ctx, 31, 0x144610u);
    ctx->pc = 0x14460Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144608u;
    // 0x14460c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A28u, 0x144608u, 0x144610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144610u;
label_144610:
    // 0x144610: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x144610u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144614: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x144614u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x144618: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x144618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14461c: 0x3e00008  jr          $ra
    ctx->pc = 0x14461Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14461Cu;
        // 0x144620: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14461Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144624u;
    // 0x144624: 0x0  nop
    ctx->pc = 0x144624u;
    // NOP
    ctx->pc = 0x144628u;
}
