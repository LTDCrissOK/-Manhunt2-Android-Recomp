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

// Function: sub_001DA540
// Address: 0x1da540 - 0x1da5c0
void sub_001DA540_0x1da540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA540_0x1da540");
#endif

    switch (ctx->pc) {
        case 0x1da578u: goto label_1da578;
        case 0x1da598u: goto label_1da598;
        default: break;
    }

    ctx->pc = 0x1da540u;

    // 0x1da540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1da540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1da544: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da548: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1da548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1da54c: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x1da54cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x1da550: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1da550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1da554: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1da554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da558: 0x3610fdef  ori         $s0, $s0, 0xFDEF
    ctx->pc = 0x1da558u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65007);
    // 0x1da55c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1da55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1da560: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x1da560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1da564: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x1da564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1da568: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DA568u;
    {
        const bool branch_taken_0x1da568 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA568u;
        // 0x1da56c: 0xa2800a  movz        $s0, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da568) {
            ctx->pc = 0x1DA580u;
            goto label_1da580;
        }
    }
    ctx->pc = 0x1DA570u;
    // 0x1da570: 0xc079538  jal         func_1E54E0
    ctx->pc = 0x1DA570u;
    SET_GPR_U32(ctx, 31, 0x1DA578u);
    ctx->pc = 0x1DA574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA570u;
    // 0x1da574: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E54E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E54E0u, 0x1DA570u, 0x1DA578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA578u;
label_1da578:
    // 0x1da578: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DA578u;
    {
        const bool branch_taken_0x1da578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA578u;
        // 0x1da57c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da578) {
            ctx->pc = 0x1DA5A8u;
            goto label_1da5a8;
        }
    }
    ctx->pc = 0x1DA580u;
label_1da580:
    // 0x1da580: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1da580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1da584: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1da584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1da588: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DA588u;
    {
        const bool branch_taken_0x1da588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da588) {
            ctx->pc = 0x1DA58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA588u;
            // 0x1da58c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA5A8u;
            goto label_1da5a8;
        }
    }
    ctx->pc = 0x1DA590u;
    // 0x1da590: 0xc0798c8  jal         func_1E6320
    ctx->pc = 0x1DA590u;
    SET_GPR_U32(ctx, 31, 0x1DA598u);
    ctx->pc = 0x1DA594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA590u;
    // 0x1da594: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6320u, 0x1DA590u, 0x1DA598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA598u;
label_1da598:
    // 0x1da598: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1da598u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da59c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DA59Cu;
    {
        const bool branch_taken_0x1da59c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA59Cu;
        // 0x1da5a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da59c) {
            ctx->pc = 0x1DA5A8u;
            goto label_1da5a8;
        }
    }
    ctx->pc = 0x1DA5A4u;
    // 0x1da5a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1da5a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da5a8:
    // 0x1da5a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da5a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da5ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1da5acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da5b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1da5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA5B4u;
        // 0x1da5b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA5BCu;
    // 0x1da5bc: 0x0  nop
    ctx->pc = 0x1da5bcu;
    // NOP
    ctx->pc = 0x1da5c0u;
}
