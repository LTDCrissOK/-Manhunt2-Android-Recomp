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

// Function: sub_002CB540
// Address: 0x2cb540 - 0x2cb5b8
void sub_002CB540_0x2cb540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB540_0x2cb540");
#endif

    switch (ctx->pc) {
        case 0x2cb57cu: goto label_2cb57c;
        case 0x2cb590u: goto label_2cb590;
        case 0x2cb5a4u: goto label_2cb5a4;
        default: break;
    }

    ctx->pc = 0x2cb540u;

    // 0x2cb540: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2cb540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2cb544: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cb544u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cb548: 0x8c62b4a8  lw          $v0, -0x4B58($v1)
    ctx->pc = 0x2cb548u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FB4A8u));
    // 0x2cb54c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2cb54cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x2cb550: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cb550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cb554: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2cb554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2cb558: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2cb558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2cb55c: 0x8c4330ac  lw          $v1, 0x30AC($v0)
    ctx->pc = 0x2cb55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12460)));
    // 0x2cb560: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CB560u;
    {
        const bool branch_taken_0x2cb560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB560u;
        // 0x2cb564: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb560) {
            ctx->pc = 0x2CB5A4u;
            goto label_2cb5a4;
        }
    }
    ctx->pc = 0x2CB568u;
    // 0x2cb568: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cb568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb56c: 0x340580f0  ori         $a1, $zero, 0x80F0
    ctx->pc = 0x2cb56cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
    // 0x2cb570: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2cb570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb574: 0xc0ee85c  jal         func_3BA170
    ctx->pc = 0x2CB574u;
    SET_GPR_U32(ctx, 31, 0x2CB57Cu);
    ctx->pc = 0x2CB578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB574u;
    // 0x2cb578: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA170u, 0x2CB574u, 0x2CB57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB57Cu;
label_2cb57c:
    // 0x2cb57c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cb57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb580: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x2cb580u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x2cb584: 0x24060f81  addiu       $a2, $zero, 0xF81
    ctx->pc = 0x2cb584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3969));
    // 0x2cb588: 0xc0ee85c  jal         func_3BA170
    ctx->pc = 0x2CB588u;
    SET_GPR_U32(ctx, 31, 0x2CB590u);
    ctx->pc = 0x2CB58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB588u;
    // 0x2cb58c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA170u, 0x2CB588u, 0x2CB590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB590u;
label_2cb590:
    // 0x2cb590: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2cb590u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb594: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cb594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb598: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x2cb598u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x2cb59c: 0xc0ee85c  jal         func_3BA170
    ctx->pc = 0x2CB59Cu;
    SET_GPR_U32(ctx, 31, 0x2CB5A4u);
    ctx->pc = 0x2CB5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB59Cu;
    // 0x2cb5a0: 0x24061081  addiu       $a2, $zero, 0x1081 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4225));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA170u, 0x2CB59Cu, 0x2CB5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB5A4u;
label_2cb5a4:
    // 0x2cb5a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cb5a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb5a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2cb5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cb5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB5ACu;
        // 0x2cb5b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB5B4u;
    // 0x2cb5b4: 0x0  nop
    ctx->pc = 0x2cb5b4u;
    // NOP
    ctx->pc = 0x2cb5b8u;
}
