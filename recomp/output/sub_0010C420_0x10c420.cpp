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

// Function: sub_0010C420
// Address: 0x10c420 - 0x10c4f8
void sub_0010C420_0x10c420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C420_0x10c420");
#endif

    switch (ctx->pc) {
        case 0x10c44cu: goto label_10c44c;
        case 0x10c478u: goto label_10c478;
        case 0x10c48cu: goto label_10c48c;
        case 0x10c4b8u: goto label_10c4b8;
        case 0x10c4c8u: goto label_10c4c8;
        default: break;
    }

    ctx->pc = 0x10c420u;

    // 0x10c420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10c420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10c424: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x10c424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x10c428: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10c428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10c42c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10c42cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c430: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c434: 0x8c449c1c  lw          $a0, -0x63E4($v0)
    ctx->pc = 0x10c434u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x489C1Cu));
    // 0x10c438: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10c438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10c43c: 0x10800028  beqz        $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x10C43Cu;
    {
        const bool branch_taken_0x10c43c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C43Cu;
        // 0x10c440: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c43c) {
            ctx->pc = 0x10C4E0u;
            goto label_10c4e0;
        }
    }
    ctx->pc = 0x10C444u;
    // 0x10c444: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x10C444u;
    SET_GPR_U32(ctx, 31, 0x10C44Cu);
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x10C444u, 0x10C44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C44Cu;
label_10c44c:
    // 0x10c44c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x10C44Cu;
    {
        const bool branch_taken_0x10c44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C44Cu;
        // 0x10c450: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c44c) {
            ctx->pc = 0x10C4E4u;
            goto label_10c4e4;
        }
    }
    ctx->pc = 0x10C454u;
    // 0x10c454: 0x90430020  lbu         $v1, 0x20($v0)
    ctx->pc = 0x10c454u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x10c458: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x10c458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x10c45c: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x10C45Cu;
    {
        const bool branch_taken_0x10c45c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10C460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C45Cu;
        // 0x10c460: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c45c) {
            ctx->pc = 0x10C4E0u;
            goto label_10c4e0;
        }
    }
    ctx->pc = 0x10C464u;
    // 0x10c464: 0x922200cc  lbu         $v0, 0xCC($s1)
    ctx->pc = 0x10c464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x10c468: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x10C468u;
    {
        const bool branch_taken_0x10c468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C468u;
        // 0x10c46c: 0xa2230008  sb          $v1, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c468) {
            ctx->pc = 0x10C4A4u;
            goto label_10c4a4;
        }
    }
    ctx->pc = 0x10C470u;
    // 0x10c470: 0x2632000c  addiu       $s2, $s1, 0xC
    ctx->pc = 0x10c470u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x10c474: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x10c474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_10c478:
    // 0x10c478: 0x92250008  lbu         $a1, 0x8($s1)
    ctx->pc = 0x10c478u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x10c47c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x10c47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x10c480: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10c480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10c484: 0xc0443e6  jal         func_110F98
    ctx->pc = 0x10C484u;
    SET_GPR_U32(ctx, 31, 0x10C48Cu);
    ctx->pc = 0x10C488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C484u;
    // 0x10c488: 0x8c64001c  lw          $a0, 0x1C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F98u, 0x10C484u, 0x10C48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C48Cu;
label_10c48c:
    // 0x10c48c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x10c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x10c490: 0x922200cc  lbu         $v0, 0xCC($s1)
    ctx->pc = 0x10c490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x10c494: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x10c494u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x10c498: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x10c498u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10c49c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x10C49Cu;
    {
        const bool branch_taken_0x10c49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C49Cu;
        // 0x10c4a0: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c49c) {
            ctx->pc = 0x10C478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10c478;
        }
    }
    ctx->pc = 0x10C4A4u;
label_10c4a4:
    // 0x10c4a4: 0x922200cc  lbu         $v0, 0xCC($s1)
    ctx->pc = 0x10c4a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x10c4a8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10C4A8u;
    {
        const bool branch_taken_0x10c4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C4A8u;
        // 0x10c4ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c4a8) {
            ctx->pc = 0x10C4E0u;
            goto label_10c4e0;
        }
    }
    ctx->pc = 0x10C4B0u;
    // 0x10c4b0: 0x2632000c  addiu       $s2, $s1, 0xC
    ctx->pc = 0x10c4b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x10c4b4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x10c4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_10c4b8:
    // 0x10c4b8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x10c4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x10c4bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10c4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10c4c0: 0xc044454  jal         func_111150
    ctx->pc = 0x10C4C0u;
    SET_GPR_U32(ctx, 31, 0x10C4C8u);
    ctx->pc = 0x10C4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C4C0u;
    // 0x10c4c4: 0x8c64001c  lw          $a0, 0x1C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111150u, 0x10C4C0u, 0x10C4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C4C8u;
label_10c4c8:
    // 0x10c4c8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x10c4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x10c4cc: 0x922200cc  lbu         $v0, 0xCC($s1)
    ctx->pc = 0x10c4ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x10c4d0: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x10c4d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x10c4d4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x10c4d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10c4d8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x10C4D8u;
    {
        const bool branch_taken_0x10c4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C4D8u;
        // 0x10c4dc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c4d8) {
            ctx->pc = 0x10C4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10c4b8;
        }
    }
    ctx->pc = 0x10C4E0u;
label_10c4e0:
    // 0x10c4e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c4e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10c4e4:
    // 0x10c4e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10c4e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c4e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10c4e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c4ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10c4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10c4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x10C4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C4F0u;
        // 0x10c4f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C4F8u;
}
