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

// Function: sub_0010A838
// Address: 0x10a838 - 0x10a908
void sub_0010A838_0x10a838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A838_0x10a838");
#endif

    switch (ctx->pc) {
        case 0x10a874u: goto label_10a874;
        case 0x10a884u: goto label_10a884;
        case 0x10a8b4u: goto label_10a8b4;
        case 0x10a8e0u: goto label_10a8e0;
        default: break;
    }

    ctx->pc = 0x10a838u;

    // 0x10a838: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10a838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10a83c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10a83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10a840: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10a840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10a844: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10a844u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a848: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a84c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x10a84cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a850: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x10a850u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x10a854: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10a854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a858: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10a858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10a85c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x10a85cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x10a860: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x10a860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x10a864: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10a864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a868: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x10a868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x10a86c: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x10A86Cu;
    SET_GPR_U32(ctx, 31, 0x10A874u);
    ctx->pc = 0x10A870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A86Cu;
    // 0x10a870: 0x2634000c  addiu       $s4, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x10A86Cu, 0x10A874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A874u;
label_10a874:
    // 0x10a874: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10a874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a878: 0x2c520001  sltiu       $s2, $v0, 0x1
    ctx->pc = 0x10a878u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x10a87c: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10A87Cu;
    SET_GPR_U32(ctx, 31, 0x10A884u);
    ctx->pc = 0x10A880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A87Cu;
    // 0x10a880: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10A87Cu, 0x10A884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A884u;
label_10a884:
    // 0x10a884: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10a884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10a888: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x10a888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x10a88c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10a88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a890: 0x8c70001c  lw          $s0, 0x1C($v1)
    ctx->pc = 0x10a890u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10a894: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x10a894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x10a898: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x10A898u;
    {
        const bool branch_taken_0x10a898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A898u;
        // 0x10a89c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a898) {
            ctx->pc = 0x10A8E4u;
            goto label_10a8e4;
        }
    }
    ctx->pc = 0x10A8A0u;
    // 0x10a8a0: 0x1640000c  bnez        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x10A8A0u;
    {
        const bool branch_taken_0x10a8a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8A0u;
        // 0x10a8a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a8a0) {
            ctx->pc = 0x10A8D4u;
            goto label_10a8d4;
        }
    }
    ctx->pc = 0x10A8A8u;
    // 0x10a8a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10a8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a8ac: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10A8ACu;
    SET_GPR_U32(ctx, 31, 0x10A8B4u);
    ctx->pc = 0x10A8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A8ACu;
    // 0x10a8b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10A8ACu, 0x10A8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A8B4u;
label_10a8b4:
    // 0x10a8b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10a8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10a8b8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x10a8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x10a8bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10a8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a8c0: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x10a8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10a8c4: 0x8ca200d0  lw          $v0, 0xD0($a1)
    ctx->pc = 0x10a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x10a8c8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A8C8u;
    {
        const bool branch_taken_0x10a8c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8C8u;
        // 0x10a8cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a8c8) {
            ctx->pc = 0x10A8E4u;
            goto label_10a8e4;
        }
    }
    ctx->pc = 0x10A8D0u;
    // 0x10a8d0: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x10a8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_10a8d4:
    // 0x10a8d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a8d8: 0xc044194  jal         func_110650
    ctx->pc = 0x10A8D8u;
    SET_GPR_U32(ctx, 31, 0x10A8E0u);
    ctx->pc = 0x10A8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A8D8u;
    // 0x10a8dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x110650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110650u, 0x10A8D8u, 0x10A8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A8E0u;
label_10a8e0:
    // 0x10a8e0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10a8e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10a8e4:
    // 0x10a8e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a8e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a8e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10a8e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10a8ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10a8ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a8f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10a8f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10a8f4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10a8f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a8f8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x10a8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10a8fc: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x10a8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10a900: 0x3e00008  jr          $ra
    ctx->pc = 0x10A900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A900u;
        // 0x10a904: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A908u;
}
