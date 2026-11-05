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

// Function: sub_002D7988
// Address: 0x2d7988 - 0x2d7a80
void sub_002D7988_0x2d7988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7988_0x2d7988");
#endif

    switch (ctx->pc) {
        case 0x2d79acu: goto label_2d79ac;
        case 0x2d79d0u: goto label_2d79d0;
        case 0x2d79e4u: goto label_2d79e4;
        case 0x2d7a10u: goto label_2d7a10;
        case 0x2d7a2cu: goto label_2d7a2c;
        case 0x2d7a48u: goto label_2d7a48;
        default: break;
    }

    ctx->pc = 0x2d7988u;

    // 0x2d7988: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d7988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d798c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d798cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d7990: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d7990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d7994: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d7994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7998: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d7998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d799c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d799cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d79a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d79a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d79a4: 0xc0b5ea0  jal         func_2D7A80
    ctx->pc = 0x2D79A4u;
    SET_GPR_U32(ctx, 31, 0x2D79ACu);
    ctx->pc = 0x2D79A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D79A4u;
    // 0x2d79a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7A80u, 0x2D79A4u, 0x2D79ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D79ACu;
label_2d79ac:
    // 0x2d79ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d79acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d79b0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D79B0u;
    {
        const bool branch_taken_0x2d79b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D79B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D79B0u;
        // 0x2d79b4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d79b0) {
            ctx->pc = 0x2D79C0u;
            goto label_2d79c0;
        }
    }
    ctx->pc = 0x2D79B8u;
    // 0x2d79b8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2D79B8u;
    {
        const bool branch_taken_0x2d79b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D79BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D79B8u;
        // 0x2d79bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d79b8) {
            ctx->pc = 0x2D7A64u;
            goto label_2d7a64;
        }
    }
    ctx->pc = 0x2D79C0u;
label_2d79c0:
    // 0x2d79c0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2d79c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d79c4: 0x24a51020  addiu       $a1, $a1, 0x1020
    ctx->pc = 0x2d79c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4128));
    // 0x2d79c8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2D79C8u;
    SET_GPR_U32(ctx, 31, 0x2D79D0u);
    ctx->pc = 0x2D79CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D79C8u;
    // 0x2d79cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2D79C8u, 0x2D79D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D79D0u;
label_2d79d0:
    // 0x2d79d0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D79D0u;
    {
        const bool branch_taken_0x2d79d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d79d0) {
            ctx->pc = 0x2D79D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D79D0u;
            // 0x2d79d4: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D79F0u;
            goto label_2d79f0;
        }
    }
    ctx->pc = 0x2D79D8u;
    // 0x2d79d8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d79d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2d79dc: 0xc0b5ea0  jal         func_2D7A80
    ctx->pc = 0x2D79DCu;
    SET_GPR_U32(ctx, 31, 0x2D79E4u);
    ctx->pc = 0x2D79E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D79DCu;
    // 0x2d79e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7A80u, 0x2D79DCu, 0x2D79E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D79E4u;
label_2d79e4:
    // 0x2d79e4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2d79e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2d79e8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2D79E8u;
    {
        const bool branch_taken_0x2d79e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D79ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D79E8u;
        // 0x2d79ec: 0x2982b  sltu        $s3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d79e8) {
            ctx->pc = 0x2D7A60u;
            goto label_2d7a60;
        }
    }
    ctx->pc = 0x2D79F0u;
label_2d79f0:
    // 0x2d79f0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2d79f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2d79f4: 0x24a51028  addiu       $a1, $a1, 0x1028
    ctx->pc = 0x2d79f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4136));
    // 0x2d79f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d79f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d79fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d79fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d7a00: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2d7a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d7a04: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2d7a04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x2d7a08: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2D7A08u;
    SET_GPR_U32(ctx, 31, 0x2D7A10u);
    ctx->pc = 0x2D7A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7A08u;
    // 0x2d7a0c: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2D7A08u, 0x2D7A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7A10u;
label_2d7a10:
    // 0x2d7a10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7A10u;
    {
        const bool branch_taken_0x2d7a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A10u;
        // 0x2d7a14: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7a10) {
            ctx->pc = 0x2D7A20u;
            goto label_2d7a20;
        }
    }
    ctx->pc = 0x2D7A18u;
    // 0x2d7a18: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2D7A18u;
    {
        const bool branch_taken_0x2d7a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A18u;
        // 0x2d7a1c: 0xae130000  sw          $s3, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7a18) {
            ctx->pc = 0x2D7A60u;
            goto label_2d7a60;
        }
    }
    ctx->pc = 0x2D7A20u;
label_2d7a20:
    // 0x2d7a20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d7a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7a24: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2D7A24u;
    SET_GPR_U32(ctx, 31, 0x2D7A2Cu);
    ctx->pc = 0x2D7A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7A24u;
    // 0x2d7a28: 0x24a51030  addiu       $a1, $a1, 0x1030 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2D7A24u, 0x2D7A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7A2Cu;
label_2d7a2c:
    // 0x2d7a2c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7A2Cu;
    {
        const bool branch_taken_0x2d7a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A2Cu;
        // 0x2d7a30: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7a2c) {
            ctx->pc = 0x2D7A3Cu;
            goto label_2d7a3c;
        }
    }
    ctx->pc = 0x2D7A34u;
    // 0x2d7a34: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D7A34u;
    {
        const bool branch_taken_0x2d7a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A34u;
        // 0x2d7a38: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7a34) {
            ctx->pc = 0x2D7A5Cu;
            goto label_2d7a5c;
        }
    }
    ctx->pc = 0x2D7A3Cu;
label_2d7a3c:
    // 0x2d7a3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d7a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7a40: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2D7A40u;
    SET_GPR_U32(ctx, 31, 0x2D7A48u);
    ctx->pc = 0x2D7A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7A40u;
    // 0x2d7a44: 0x24a51038  addiu       $a1, $a1, 0x1038 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2D7A40u, 0x2D7A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7A48u;
label_2d7a48:
    // 0x2d7a48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7A48u;
    {
        const bool branch_taken_0x2d7a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A48u;
        // 0x2d7a4c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7a48) {
            ctx->pc = 0x2D7A58u;
            goto label_2d7a58;
        }
    }
    ctx->pc = 0x2D7A50u;
    // 0x2d7a50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D7A50u;
    {
        const bool branch_taken_0x2d7a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A50u;
        // 0x2d7a54: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7a50) {
            ctx->pc = 0x2D7A5Cu;
            goto label_2d7a5c;
        }
    }
    ctx->pc = 0x2D7A58u;
label_2d7a58:
    // 0x2d7a58: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d7a58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d7a5c:
    // 0x2d7a5c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d7a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2d7a60:
    // 0x2d7a60: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2d7a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d7a64:
    // 0x2d7a64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d7a64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7a68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d7a68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d7a6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d7a6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7a70: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d7a70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d7a74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d7a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d7a78: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A78u;
        // 0x2d7a7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7A80u;
}
