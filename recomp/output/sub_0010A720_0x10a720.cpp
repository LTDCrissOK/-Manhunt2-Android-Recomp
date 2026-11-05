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

// Function: sub_0010A720
// Address: 0x10a720 - 0x10a7a0
void sub_0010A720_0x10a720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A720_0x10a720");
#endif

    switch (ctx->pc) {
        case 0x10a744u: goto label_10a744;
        case 0x10a770u: goto label_10a770;
        case 0x10a780u: goto label_10a780;
        default: break;
    }

    ctx->pc = 0x10a720u;

    // 0x10a720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10a720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10a724: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a728: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10a728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10a72c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10a72cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a730: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10a730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10a734: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10a734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10a738: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10a738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a73c: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10A73Cu;
    SET_GPR_U32(ctx, 31, 0x10A744u);
    ctx->pc = 0x10A740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A73Cu;
    // 0x10a740: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10A73Cu, 0x10A744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A744u;
label_10a744:
    // 0x10a744: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10a744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10a748: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x10a748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10a74c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10a750: 0x8c50001c  lw          $s0, 0x1C($v0)
    ctx->pc = 0x10a750u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x10a754: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x10a754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x10a758: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x10A758u;
    {
        const bool branch_taken_0x10a758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A758u;
        // 0x10a75c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a758) {
            ctx->pc = 0x10A788u;
            goto label_10a788;
        }
    }
    ctx->pc = 0x10A760u;
    // 0x10a760: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x10a760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x10a764: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10a764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a768: 0xc04786e  jal         func_11E1B8
    ctx->pc = 0x10A768u;
    SET_GPR_U32(ctx, 31, 0x10A770u);
    ctx->pc = 0x10A76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A768u;
    // 0x10a76c: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1B8u, 0x10A768u, 0x10A770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A770u;
label_10a770:
    // 0x10a770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a774: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10a774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a778: 0xc04416c  jal         func_1105B0
    ctx->pc = 0x10A778u;
    SET_GPR_U32(ctx, 31, 0x10A780u);
    ctx->pc = 0x10A77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A778u;
    // 0x10a77c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1105B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1105B0u, 0x10A778u, 0x10A780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A780u;
label_10a780:
    // 0x10a780: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10A780u;
    {
        const bool branch_taken_0x10a780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A780u;
        // 0x10a784: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a780) {
            ctx->pc = 0x10A78Cu;
            goto label_10a78c;
        }
    }
    ctx->pc = 0x10A788u;
label_10a788:
    // 0x10a788: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10a78c:
    // 0x10a78c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10a78cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10a790: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10a790u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a794: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10a794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10a798: 0x3e00008  jr          $ra
    ctx->pc = 0x10A798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A798u;
        // 0x10a79c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A7A0u;
}
