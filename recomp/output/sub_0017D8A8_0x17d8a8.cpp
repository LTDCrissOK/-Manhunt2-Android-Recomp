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

// Function: sub_0017D8A8
// Address: 0x17d8a8 - 0x17d928
void sub_0017D8A8_0x17d8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D8A8_0x17d8a8");
#endif

    switch (ctx->pc) {
        case 0x17d8ccu: goto label_17d8cc;
        case 0x17d8d8u: goto label_17d8d8;
        case 0x17d8f0u: goto label_17d8f0;
        case 0x17d904u: goto label_17d904;
        case 0x17d918u: goto label_17d918;
        default: break;
    }

    ctx->pc = 0x17d8a8u;

    // 0x17d8a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17d8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17d8ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17d8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17d8b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17d8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17d8b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17d8b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d8b8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x17d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x17d8bc: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x17D8BCu;
    {
        const bool branch_taken_0x17d8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d8bc) {
            ctx->pc = 0x17D8C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D8BCu;
            // 0x17d8c0: 0x8e0200b0  lw          $v0, 0xB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D8F4u;
            goto label_17d8f4;
        }
    }
    ctx->pc = 0x17D8C4u;
    // 0x17d8c4: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x17D8C4u;
    SET_GPR_U32(ctx, 31, 0x17D8CCu);
    ctx->pc = 0x17D8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D8C4u;
    // 0x17d8c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x17D8C4u, 0x17D8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D8CCu;
label_17d8cc:
    // 0x17d8cc: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x17d8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x17d8d0: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x17D8D0u;
    SET_GPR_U32(ctx, 31, 0x17D8D8u);
    ctx->pc = 0x17D8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D8D0u;
    // 0x17d8d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x17D8D0u, 0x17D8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D8D8u;
label_17d8d8:
    // 0x17d8d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D8D8u;
    {
        const bool branch_taken_0x17d8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D8D8u;
        // 0x17d8dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d8d8) {
            ctx->pc = 0x17D8E8u;
            goto label_17d8e8;
        }
    }
    ctx->pc = 0x17D8E0u;
    // 0x17d8e0: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x17d8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x17d8e4: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x17d8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_17d8e8:
    // 0x17d8e8: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x17D8E8u;
    SET_GPR_U32(ctx, 31, 0x17D8F0u);
    ctx->pc = 0x17D8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D8E8u;
    // 0x17d8ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x17D8E8u, 0x17D8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D8F0u;
label_17d8f0:
    // 0x17d8f0: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x17d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_17d8f4:
    // 0x17d8f4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17D8F4u;
    {
        const bool branch_taken_0x17d8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D8F4u;
        // 0x17d8f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d8f4) {
            ctx->pc = 0x17D90Cu;
            goto label_17d90c;
        }
    }
    ctx->pc = 0x17D8FCu;
    // 0x17d8fc: 0xc05f9e0  jal         func_17E780
    ctx->pc = 0x17D8FCu;
    SET_GPR_U32(ctx, 31, 0x17D904u);
    ctx->pc = 0x17D900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D8FCu;
    // 0x17d900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E780u, 0x17D8FCu, 0x17D904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D904u;
label_17d904:
    // 0x17d904: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17D904u;
    {
        const bool branch_taken_0x17d904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D904u;
        // 0x17d908: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d904) {
            ctx->pc = 0x17D91Cu;
            goto label_17d91c;
        }
    }
    ctx->pc = 0x17D90Cu;
label_17d90c:
    // 0x17d90c: 0x8c8500b4  lw          $a1, 0xB4($a0)
    ctx->pc = 0x17d90cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x17d910: 0xc05f9c8  jal         func_17E720
    ctx->pc = 0x17D910u;
    SET_GPR_U32(ctx, 31, 0x17D918u);
    ctx->pc = 0x17D914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D910u;
    // 0x17d914: 0x8c8600b8  lw          $a2, 0xB8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E720u, 0x17D910u, 0x17D918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D918u;
label_17d918:
    // 0x17d918: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17d918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17d91c:
    // 0x17d91c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17d91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17d920: 0x3e00008  jr          $ra
    ctx->pc = 0x17D920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D920u;
        // 0x17d924: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D928u;
}
