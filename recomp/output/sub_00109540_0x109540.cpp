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

// Function: sub_00109540
// Address: 0x109540 - 0x1095f8
void sub_00109540_0x109540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109540_0x109540");
#endif

    switch (ctx->pc) {
        case 0x10955cu: goto label_10955c;
        case 0x10958cu: goto label_10958c;
        case 0x10959cu: goto label_10959c;
        case 0x1095c0u: goto label_1095c0;
        case 0x1095d4u: goto label_1095d4;
        case 0x1095e0u: goto label_1095e0;
        default: break;
    }

    ctx->pc = 0x109540u;

    // 0x109540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x109540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x109544: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x109544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x109548: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x109548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10954c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10954cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x109550: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x109550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x109554: 0xc043366  jal         func_10CD98
    ctx->pc = 0x109554u;
    SET_GPR_U32(ctx, 31, 0x10955Cu);
    ctx->pc = 0x109558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109554u;
    // 0x109558: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x109554u, 0x10955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10955Cu;
label_10955c:
    // 0x10955c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10955cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109560: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x109560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x109564: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x109564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x109568: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x109568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10956c: 0x8c70001c  lw          $s0, 0x1C($v1)
    ctx->pc = 0x10956cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x109570: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x109570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x109574: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x109574u;
    {
        const bool branch_taken_0x109574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x109574) {
            ctx->pc = 0x109578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109574u;
            // 0x109578: 0x8e0300b0  lw          $v1, 0xB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1095A0u;
            goto label_1095a0;
        }
    }
    ctx->pc = 0x10957Cu;
    // 0x10957c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x10957cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x109580: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x109580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109584: 0xc047866  jal         func_11E198
    ctx->pc = 0x109584u;
    SET_GPR_U32(ctx, 31, 0x10958Cu);
    ctx->pc = 0x109588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109584u;
    // 0x109588: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E198u, 0x109584u, 0x10958Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10958Cu;
label_10958c:
    // 0x10958c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x10958cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x109590: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x109590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109594: 0xc0484c0  jal         func_121300
    ctx->pc = 0x109594u;
    SET_GPR_U32(ctx, 31, 0x10959Cu);
    ctx->pc = 0x109598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109594u;
    // 0x109598: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121300u, 0x109594u, 0x10959Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10959Cu;
label_10959c:
    // 0x10959c: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x10959cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_1095a0:
    // 0x1095a0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1095A0u;
    {
        const bool branch_taken_0x1095a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1095A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1095A0u;
        // 0x1095a4: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1095a0) {
            ctx->pc = 0x1095C0u;
            goto label_1095c0;
        }
    }
    ctx->pc = 0x1095A8u;
    // 0x1095a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1095a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1095ac: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1095acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1095b0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1095b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1095b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1095b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1095b8: 0xc0440c8  jal         func_110320
    ctx->pc = 0x1095B8u;
    SET_GPR_U32(ctx, 31, 0x1095C0u);
    ctx->pc = 0x1095BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1095B8u;
    // 0x1095bc: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110320u, 0x1095B8u, 0x1095C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1095C0u;
label_1095c0:
    // 0x1095c0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1095c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1095c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1095C4u;
    {
        const bool branch_taken_0x1095c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1095C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1095C4u;
        // 0x1095c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1095c4) {
            ctx->pc = 0x1095D8u;
            goto label_1095d8;
        }
    }
    ctx->pc = 0x1095CCu;
    // 0x1095cc: 0xc04408c  jal         func_110230
    ctx->pc = 0x1095CCu;
    SET_GPR_U32(ctx, 31, 0x1095D4u);
    ctx->pc = 0x1095D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1095CCu;
    // 0x1095d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110230u, 0x1095CCu, 0x1095D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1095D4u;
label_1095d4:
    // 0x1095d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1095d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1095d8:
    // 0x1095d8: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x1095D8u;
    SET_GPR_U32(ctx, 31, 0x1095E0u);
    ctx->pc = 0x1095DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1095D8u;
    // 0x1095dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x1095D8u, 0x1095E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1095E0u;
label_1095e0:
    // 0x1095e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1095e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1095e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1095e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1095e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1095e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1095ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1095ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1095f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1095F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1095F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1095F0u;
        // 0x1095f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1095F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1095F8u;
}
