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

// Function: sub_0018D858
// Address: 0x18d858 - 0x18d8e8
void sub_0018D858_0x18d858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D858_0x18d858");
#endif

    switch (ctx->pc) {
        case 0x18d880u: goto label_18d880;
        case 0x18d89cu: goto label_18d89c;
        case 0x18d8b0u: goto label_18d8b0;
        case 0x18d8c8u: goto label_18d8c8;
        case 0x18d8d0u: goto label_18d8d0;
        default: break;
    }

    ctx->pc = 0x18d858u;

    // 0x18d858: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18d858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18d85c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18d85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18d860: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18d860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18d864: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18d864u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d868: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18d868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18d86c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18d86cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d870: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x18d870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d874: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x18d874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x18d878: 0xc06fb38  jal         func_1BECE0
    ctx->pc = 0x18D878u;
    SET_GPR_U32(ctx, 31, 0x18D880u);
    ctx->pc = 0x18D87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D878u;
    // 0x18d87c: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BECE0u, 0x18D878u, 0x18D880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D880u;
label_18d880:
    // 0x18d880: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18D880u;
    {
        const bool branch_taken_0x18d880 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D880u;
        // 0x18d884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d880) {
            ctx->pc = 0x18D8A4u;
            goto label_18d8a4;
        }
    }
    ctx->pc = 0x18D888u;
    // 0x18d888: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x18d888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x18d88c: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x18d88cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x18d890: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18d890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18d894: 0xc0b121c  jal         func_2C4870
    ctx->pc = 0x18D894u;
    SET_GPR_U32(ctx, 31, 0x18D89Cu);
    ctx->pc = 0x18D898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D894u;
    // 0x18d898: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4870u, 0x18D894u, 0x18D89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D89Cu;
label_18d89c:
    // 0x18d89c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18D89Cu;
    {
        const bool branch_taken_0x18d89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D89Cu;
        // 0x18d8a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d89c) {
            ctx->pc = 0x18D8B8u;
            goto label_18d8b8;
        }
    }
    ctx->pc = 0x18D8A4u;
label_18d8a4:
    // 0x18d8a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18d8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d8a8: 0xc06fb38  jal         func_1BECE0
    ctx->pc = 0x18D8A8u;
    SET_GPR_U32(ctx, 31, 0x18D8B0u);
    ctx->pc = 0x18D8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D8A8u;
    // 0x18d8ac: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BECE0u, 0x18D8A8u, 0x18D8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D8B0u;
label_18d8b0:
    // 0x18d8b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18D8B0u;
    {
        const bool branch_taken_0x18d8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d8b0) {
            ctx->pc = 0x18D8C8u;
            goto label_18d8c8;
        }
    }
    ctx->pc = 0x18D8B8u;
label_18d8b8:
    // 0x18d8b8: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x18d8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x18d8bc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x18d8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18d8c0: 0xc0f7218  jal         func_3DC860
    ctx->pc = 0x18D8C0u;
    SET_GPR_U32(ctx, 31, 0x18D8C8u);
    ctx->pc = 0x18D8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D8C0u;
    // 0x18d8c4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC860u, 0x18D8C0u, 0x18D8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D8C8u;
label_18d8c8:
    // 0x18d8c8: 0xc06364c  jal         func_18D930
    ctx->pc = 0x18D8C8u;
    SET_GPR_U32(ctx, 31, 0x18D8D0u);
    ctx->pc = 0x18D8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D8C8u;
    // 0x18d8cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D930u, 0x18D8C8u, 0x18D8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D8D0u;
label_18d8d0:
    // 0x18d8d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18d8d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d8d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18d8d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18d8d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18d8d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d8dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x18d8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18d8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x18D8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D8E0u;
        // 0x18d8e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D8E8u;
}
