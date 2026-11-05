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

// Function: sub_001D79A0
// Address: 0x1d79a0 - 0x1d7a78
void sub_001D79A0_0x1d79a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D79A0_0x1d79a0");
#endif

    switch (ctx->pc) {
        case 0x1d79e0u: goto label_1d79e0;
        case 0x1d79f0u: goto label_1d79f0;
        case 0x1d7a04u: goto label_1d7a04;
        case 0x1d7a18u: goto label_1d7a18;
        case 0x1d7a2cu: goto label_1d7a2c;
        case 0x1d7a3cu: goto label_1d7a3c;
        case 0x1d7a48u: goto label_1d7a48;
        case 0x1d7a58u: goto label_1d7a58;
        case 0x1d7a60u: goto label_1d7a60;
        default: break;
    }

    ctx->pc = 0x1d79a0u;

    // 0x1d79a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d79a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d79a4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d79a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1d79a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d79a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d79ac: 0x8c629e40  lw          $v0, -0x61C0($v1)
    ctx->pc = 0x1d79acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9E40u));
    // 0x1d79b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d79b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d79b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d79b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d79b8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d79b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d79bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d79bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d79c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d79c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d79c4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d79c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d79c8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1d79c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d79cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D79CCu;
    {
        const bool branch_taken_0x1d79cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D79D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79CCu;
        // 0x1d79d0: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d79cc) {
            ctx->pc = 0x1D79E8u;
            goto label_1d79e8;
        }
    }
    ctx->pc = 0x1D79D4u;
    // 0x1d79d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d79d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d79d8: 0xc0efd60  jal         func_3BF580
    ctx->pc = 0x1D79D8u;
    SET_GPR_U32(ctx, 31, 0x1D79E0u);
    ctx->pc = 0x1D79DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D79D8u;
    // 0x1d79dc: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF580u, 0x1D79D8u, 0x1D79E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D79E0u;
label_1d79e0:
    // 0x1d79e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D79E0u;
    {
        const bool branch_taken_0x1d79e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D79E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79E0u;
        // 0x1d79e4: 0xa2000006  sb          $zero, 0x6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d79e0) {
            ctx->pc = 0x1D79F0u;
            goto label_1d79f0;
        }
    }
    ctx->pc = 0x1D79E8u;
label_1d79e8:
    // 0x1d79e8: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x1D79E8u;
    SET_GPR_U32(ctx, 31, 0x1D79F0u);
    ctx->pc = 0x1D79ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D79E8u;
    // 0x1d79ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x1D79E8u, 0x1D79F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D79F0u;
label_1d79f0:
    // 0x1d79f0: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D79F0u;
    {
        const bool branch_taken_0x1d79f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D79F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79F0u;
        // 0x1d79f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d79f0) {
            ctx->pc = 0x1D7A0Cu;
            goto label_1d7a0c;
        }
    }
    ctx->pc = 0x1D79F8u;
    // 0x1d79f8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d79f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d79fc: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x1D79FCu;
    SET_GPR_U32(ctx, 31, 0x1D7A04u);
    ctx->pc = 0x1D7A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D79FCu;
    // 0x1d7a00: 0x24a5d700  addiu       $a1, $a1, -0x2900 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x1D79FCu, 0x1D7A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7A04u;
label_1d7a04:
    // 0x1d7a04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D7A04u;
    {
        const bool branch_taken_0x1d7a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7a04) {
            ctx->pc = 0x1D7A18u;
            goto label_1d7a18;
        }
    }
    ctx->pc = 0x1D7A0Cu;
label_1d7a0c:
    // 0x1d7a0c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d7a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d7a10: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x1D7A10u;
    SET_GPR_U32(ctx, 31, 0x1D7A18u);
    ctx->pc = 0x1D7A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7A10u;
    // 0x1d7a14: 0x24a5d708  addiu       $a1, $a1, -0x28F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x1D7A10u, 0x1D7A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7A18u;
label_1d7a18:
    // 0x1d7a18: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D7A18u;
    {
        const bool branch_taken_0x1d7a18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7A18u;
        // 0x1d7a1c: 0x3c05004c  lui         $a1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7a18) {
            ctx->pc = 0x1D7A60u;
            goto label_1d7a60;
        }
    }
    ctx->pc = 0x1D7A20u;
    // 0x1d7a20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a24: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x1D7A24u;
    SET_GPR_U32(ctx, 31, 0x1D7A2Cu);
    ctx->pc = 0x1D7A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7A24u;
    // 0x1d7a28: 0x24a5ec20  addiu       $a1, $a1, -0x13E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x1D7A24u, 0x1D7A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7A2Cu;
label_1d7a2c:
    // 0x1d7a2c: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x1d7a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x1d7a30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a34: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x1D7A34u;
    SET_GPR_U32(ctx, 31, 0x1D7A3Cu);
    ctx->pc = 0x1D7A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7A34u;
    // 0x1d7a38: 0x8c65ee38  lw          $a1, -0x11C8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x1D7A34u, 0x1D7A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7A3Cu;
label_1d7a3c:
    // 0x1d7a3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d7a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a40: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x1D7A40u;
    SET_GPR_U32(ctx, 31, 0x1D7A48u);
    ctx->pc = 0x1D7A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7A40u;
    // 0x1d7a44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x1D7A40u, 0x1D7A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7A48u;
label_1d7a48:
    // 0x1d7a48: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d7a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d7a4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a50: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x1D7A50u;
    SET_GPR_U32(ctx, 31, 0x1D7A58u);
    ctx->pc = 0x1D7A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7A50u;
    // 0x1d7a54: 0x24a5d710  addiu       $a1, $a1, -0x28F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x1D7A50u, 0x1D7A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7A58u;
label_1d7a58:
    // 0x1d7a58: 0xc09dbf8  jal         func_276FE0
    ctx->pc = 0x1D7A58u;
    SET_GPR_U32(ctx, 31, 0x1D7A60u);
    ctx->pc = 0x1D7A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7A58u;
    // 0x1d7a5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276FE0u, 0x1D7A58u, 0x1D7A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7A60u;
label_1d7a60:
    // 0x1d7a60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7a60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7a64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d7a64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7a68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d7a68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7a6c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d7a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d7a70: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7A70u;
        // 0x1d7a74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7A78u;
}
