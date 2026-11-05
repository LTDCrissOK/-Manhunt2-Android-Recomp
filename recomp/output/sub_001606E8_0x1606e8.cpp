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

// Function: sub_001606E8
// Address: 0x1606e8 - 0x160788
void sub_001606E8_0x1606e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001606E8_0x1606e8");
#endif

    switch (ctx->pc) {
        case 0x16070cu: goto label_16070c;
        case 0x160728u: goto label_160728;
        case 0x160730u: goto label_160730;
        case 0x160744u: goto label_160744;
        case 0x160750u: goto label_160750;
        case 0x160760u: goto label_160760;
        case 0x160770u: goto label_160770;
        default: break;
    }

    ctx->pc = 0x1606e8u;

    // 0x1606e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1606e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1606ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1606ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1606f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1606f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1606f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1606f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1606f8: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x1606f8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1606fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1606fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x160700: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x160700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x160704: 0xc04f130  jal         func_13C4C0
    ctx->pc = 0x160704u;
    SET_GPR_U32(ctx, 31, 0x16070Cu);
    ctx->pc = 0x160708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160704u;
    // 0x160708: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4C0u, 0x160704u, 0x16070Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16070Cu;
label_16070c:
    // 0x16070c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16070cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160710: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x160710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x160714: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x160714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x160718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x160718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16071c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16071cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x160720: 0xc04d74a  jal         func_135D28
    ctx->pc = 0x160720u;
    SET_GPR_U32(ctx, 31, 0x160728u);
    ctx->pc = 0x160724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160720u;
    // 0x160724: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135D28u, 0x160720u, 0x160728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160728u;
label_160728:
    // 0x160728: 0xc04d7c0  jal         func_135F00
    ctx->pc = 0x160728u;
    SET_GPR_U32(ctx, 31, 0x160730u);
    ctx->pc = 0x16072Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160728u;
    // 0x16072c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F00u, 0x160728u, 0x160730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160730u;
label_160730:
    // 0x160730: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x160730u;
    {
        const bool branch_taken_0x160730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160730u;
        // 0x160734: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160730) {
            ctx->pc = 0x160748u;
            goto label_160748;
        }
    }
    ctx->pc = 0x160738u;
    // 0x160738: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x160738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16073c: 0xc04f42e  jal         func_13D0B8
    ctx->pc = 0x16073Cu;
    SET_GPR_U32(ctx, 31, 0x160744u);
    ctx->pc = 0x160740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16073Cu;
    // 0x160740: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D0B8u, 0x16073Cu, 0x160744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160744u;
label_160744:
    // 0x160744: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_160748:
    // 0x160748: 0xc04f12a  jal         func_13C4A8
    ctx->pc = 0x160748u;
    SET_GPR_U32(ctx, 31, 0x160750u);
    ctx->pc = 0x16074Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160748u;
    // 0x16074c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4A8u, 0x160748u, 0x160750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160750u;
label_160750:
    // 0x160750: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160754: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x160754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160758: 0xc04f10c  jal         func_13C430
    ctx->pc = 0x160758u;
    SET_GPR_U32(ctx, 31, 0x160760u);
    ctx->pc = 0x16075Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160758u;
    // 0x16075c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C430u, 0x160758u, 0x160760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160760u;
label_160760:
    // 0x160760: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160764: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x160764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160768: 0xc04f118  jal         func_13C460
    ctx->pc = 0x160768u;
    SET_GPR_U32(ctx, 31, 0x160770u);
    ctx->pc = 0x16076Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160768u;
    // 0x16076c: 0x2406001a  addiu       $a2, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C460u, 0x160768u, 0x160770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160770u;
label_160770:
    // 0x160770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x160770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160774: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x160774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x160778: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x160778u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16077c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16077cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x160780: 0x3e00008  jr          $ra
    ctx->pc = 0x160780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160780u;
        // 0x160784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160788u;
}
