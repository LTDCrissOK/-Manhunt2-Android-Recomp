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

// Function: sub_0013A730
// Address: 0x13a730 - 0x13a7e8
void sub_0013A730_0x13a730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A730_0x13a730");
#endif

    switch (ctx->pc) {
        case 0x13a770u: goto label_13a770;
        case 0x13a77cu: goto label_13a77c;
        case 0x13a78cu: goto label_13a78c;
        case 0x13a7b0u: goto label_13a7b0;
        case 0x13a7c4u: goto label_13a7c4;
        default: break;
    }

    ctx->pc = 0x13a730u;

    // 0x13a730: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13a730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13a734: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x13a734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x13a738: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x13a738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x13a73c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x13a73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x13a740: 0x30b300ff  andi        $s3, $a1, 0xFF
    ctx->pc = 0x13a740u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13a744: 0x2629018  mult        $s2, $s3, $v0
    ctx->pc = 0x13a744u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x13a748: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13a748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13a74c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13a74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13a750: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13a750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a754: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x13a754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x13a758: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x13a758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x13a75c: 0x8c510510  lw          $s1, 0x510($v0)
    ctx->pc = 0x13a75cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1296)));
    // 0x13a760: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x13A760u;
    {
        const bool branch_taken_0x13a760 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A760u;
        // 0x13a764: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a760) {
            ctx->pc = 0x13A7C8u;
            goto label_13a7c8;
        }
    }
    ctx->pc = 0x13A768u;
    // 0x13a768: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x13A768u;
    SET_GPR_U32(ctx, 31, 0x13A770u);
    ctx->pc = 0x13A76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A768u;
    // 0x13a76c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x13A768u, 0x13A770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A770u;
label_13a770:
    // 0x13a770: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13a770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a774: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x13A774u;
    SET_GPR_U32(ctx, 31, 0x13A77Cu);
    ctx->pc = 0x13A778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A774u;
    // 0x13a778: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x13A774u, 0x13A77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A77Cu;
label_13a77c:
    // 0x13a77c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13A77Cu;
    {
        const bool branch_taken_0x13a77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A77Cu;
        // 0x13a780: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a77c) {
            ctx->pc = 0x13A7B8u;
            goto label_13a7b8;
        }
    }
    ctx->pc = 0x13A784u;
    // 0x13a784: 0xc04e9ac  jal         func_13A6B0
    ctx->pc = 0x13A784u;
    SET_GPR_U32(ctx, 31, 0x13A78Cu);
    ctx->pc = 0x13A788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A784u;
    // 0x13a788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A6B0u, 0x13A784u, 0x13A78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A78Cu;
label_13a78c:
    // 0x13a78c: 0x2502821  addu        $a1, $s2, $s0
    ctx->pc = 0x13a78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x13a790: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x13a790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a794: 0x8c430514  lw          $v1, 0x514($v0)
    ctx->pc = 0x13a794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1300)));
    // 0x13a798: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x13A798u;
    {
        const bool branch_taken_0x13a798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A798u;
        // 0x13a79c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a798) {
            ctx->pc = 0x13A7BCu;
            goto label_13a7bc;
        }
    }
    ctx->pc = 0x13A7A0u;
    // 0x13a7a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a7a4: 0xaca20514  sw          $v0, 0x514($a1)
    ctx->pc = 0x13a7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1300), GPR_U32(ctx, 2));
    // 0x13a7a8: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x13A7A8u;
    SET_GPR_U32(ctx, 31, 0x13A7B0u);
    ctx->pc = 0x13A7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A7A8u;
    // 0x13a7ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x13A7A8u, 0x13A7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A7B0u;
label_13a7b0:
    // 0x13a7b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13A7B0u;
    {
        const bool branch_taken_0x13a7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A7B0u;
        // 0x13a7b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a7b0) {
            ctx->pc = 0x13A7C8u;
            goto label_13a7c8;
        }
    }
    ctx->pc = 0x13A7B8u;
label_13a7b8:
    // 0x13a7b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13a7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13a7bc:
    // 0x13a7bc: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x13A7BCu;
    SET_GPR_U32(ctx, 31, 0x13A7C4u);
    ctx->pc = 0x13A7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A7BCu;
    // 0x13a7c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x13A7BCu, 0x13A7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A7C4u;
label_13a7c4:
    // 0x13a7c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13a7c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a7c8:
    // 0x13a7c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13a7c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a7cc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13a7ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13a7d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x13a7d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a7d4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x13a7d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13a7d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13a7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x13A7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A7DCu;
        // 0x13a7e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A7E4u;
    // 0x13a7e4: 0x0  nop
    ctx->pc = 0x13a7e4u;
    // NOP
    ctx->pc = 0x13a7e8u;
}
