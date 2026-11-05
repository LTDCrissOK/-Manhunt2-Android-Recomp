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

// Function: sub_002D48F0
// Address: 0x2d48f0 - 0x2d4a00
void sub_002D48F0_0x2d48f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D48F0_0x2d48f0");
#endif

    switch (ctx->pc) {
        case 0x2d494cu: goto label_2d494c;
        case 0x2d495cu: goto label_2d495c;
        case 0x2d496cu: goto label_2d496c;
        case 0x2d4988u: goto label_2d4988;
        case 0x2d4998u: goto label_2d4998;
        case 0x2d49a8u: goto label_2d49a8;
        case 0x2d49bcu: goto label_2d49bc;
        case 0x2d49d8u: goto label_2d49d8;
        default: break;
    }

    ctx->pc = 0x2d48f0u;

    // 0x2d48f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d48f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d48f4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2d48f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2d48f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d48f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d48fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d48fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d4900: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d4900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4904: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d4904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d4908: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d4908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d490c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d490cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4910: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x2d4910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2d4914: 0x2cc20006  sltiu       $v0, $a2, 0x6
    ctx->pc = 0x2d4914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2d4918: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2D4918u;
    {
        const bool branch_taken_0x2d4918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4918u;
        // 0x2d491c: 0x8c71bd2c  lw          $s1, -0x42D4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4918) {
            ctx->pc = 0x2D49BCu;
            goto label_2d49bc;
        }
    }
    ctx->pc = 0x2D4920u;
    // 0x2d4920: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2d4920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2d4924: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2d4924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2d4928: 0x24420ef0  addiu       $v0, $v0, 0xEF0
    ctx->pc = 0x2d4928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3824));
    // 0x2d492c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d492cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d4930: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d4930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d4934: 0x800008  jr          $a0
    ctx->pc = 0x2D4934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D493Cu: goto label_2d493c;
            case 0x2D4978u: goto label_2d4978;
            case 0x2D4988u: goto label_2d4988;
            case 0x2D49B0u: goto label_2d49b0;
            case 0x2D49BCu: goto label_2d49bc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4934u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D493Cu;
label_2d493c:
    // 0x2d493c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2d493cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d4940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d4940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4944: 0xc0b4ede  jal         func_2D3B78
    ctx->pc = 0x2D4944u;
    SET_GPR_U32(ctx, 31, 0x2D494Cu);
    ctx->pc = 0x2D4948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4944u;
    // 0x2d4948: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3B78u, 0x2D4944u, 0x2D494Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D494Cu;
label_2d494c:
    // 0x2d494c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2d494cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d4950: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d4950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4954: 0xc0b4ede  jal         func_2D3B78
    ctx->pc = 0x2D4954u;
    SET_GPR_U32(ctx, 31, 0x2D495Cu);
    ctx->pc = 0x2D4958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4954u;
    // 0x2d4958: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3B78u, 0x2D4954u, 0x2D495Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D495Cu;
label_2d495c:
    // 0x2d495c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2d495cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d4960: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d4960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4964: 0xc0b4ede  jal         func_2D3B78
    ctx->pc = 0x2D4964u;
    SET_GPR_U32(ctx, 31, 0x2D496Cu);
    ctx->pc = 0x2D4968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4964u;
    // 0x2d4968: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3B78u, 0x2D4964u, 0x2D496Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D496Cu;
label_2d496c:
    // 0x2d496c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2d496cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d4970: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2D4970u;
    {
        const bool branch_taken_0x2d4970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4970u;
        // 0x2d4974: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4970) {
            ctx->pc = 0x2D49BCu;
            goto label_2d49bc;
        }
    }
    ctx->pc = 0x2D4978u;
label_2d4978:
    // 0x2d4978: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2d4978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d497c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d497cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4980: 0xc0b4ede  jal         func_2D3B78
    ctx->pc = 0x2D4980u;
    SET_GPR_U32(ctx, 31, 0x2D4988u);
    ctx->pc = 0x2D4984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4980u;
    // 0x2d4984: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3B78u, 0x2D4980u, 0x2D4988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4988u;
label_2d4988:
    // 0x2d4988: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2d4988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d498c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d498cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4990: 0xc0b4ede  jal         func_2D3B78
    ctx->pc = 0x2D4990u;
    SET_GPR_U32(ctx, 31, 0x2D4998u);
    ctx->pc = 0x2D4994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4990u;
    // 0x2d4994: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3B78u, 0x2D4990u, 0x2D4998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4998u;
label_2d4998:
    // 0x2d4998: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2d4998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d499c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d499cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d49a0: 0xc0b50de  jal         func_2D4378
    ctx->pc = 0x2D49A0u;
    SET_GPR_U32(ctx, 31, 0x2D49A8u);
    ctx->pc = 0x2D49A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D49A0u;
    // 0x2d49a4: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4378u, 0x2D49A0u, 0x2D49A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D49A8u;
label_2d49a8:
    // 0x2d49a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D49A8u;
    {
        const bool branch_taken_0x2d49a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D49ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D49A8u;
        // 0x2d49ac: 0x92020038  lbu         $v0, 0x38($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d49a8) {
            ctx->pc = 0x2D49C0u;
            goto label_2d49c0;
        }
    }
    ctx->pc = 0x2D49B0u;
label_2d49b0:
    // 0x2d49b0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2d49b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2d49b4: 0xc0b50de  jal         func_2D4378
    ctx->pc = 0x2D49B4u;
    SET_GPR_U32(ctx, 31, 0x2D49BCu);
    ctx->pc = 0x2D49B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D49B4u;
    // 0x2d49b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4378u, 0x2D49B4u, 0x2D49BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D49BCu;
label_2d49bc:
    // 0x2d49bc: 0x92020038  lbu         $v0, 0x38($s0)
    ctx->pc = 0x2d49bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
label_2d49c0:
    // 0x2d49c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D49C0u;
    {
        const bool branch_taken_0x2d49c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D49C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D49C0u;
        // 0x2d49c4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d49c0) {
            ctx->pc = 0x2D49D8u;
            goto label_2d49d8;
        }
    }
    ctx->pc = 0x2D49C8u;
    // 0x2d49c8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d49c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d49cc: 0x8c44bd20  lw          $a0, -0x42E0($v0)
    ctx->pc = 0x2d49ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950176)));
    // 0x2d49d0: 0xc0b551c  jal         func_2D5470
    ctx->pc = 0x2D49D0u;
    SET_GPR_U32(ctx, 31, 0x2D49D8u);
    ctx->pc = 0x2D49D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D49D0u;
    // 0x2d49d4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5470u, 0x2D49D0u, 0x2D49D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D49D8u;
label_2d49d8:
    // 0x2d49d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d49d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d49dc: 0xa2000038  sb          $zero, 0x38($s0)
    ctx->pc = 0x2d49dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d49e0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d49e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2d49e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d49e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d49e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d49e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d49ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d49ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d49f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d49f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d49f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D49F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D49F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D49F4u;
        // 0x2d49f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D49F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D49FCu;
    // 0x2d49fc: 0x0  nop
    ctx->pc = 0x2d49fcu;
    // NOP
    ctx->pc = 0x2d4a00u;
}
