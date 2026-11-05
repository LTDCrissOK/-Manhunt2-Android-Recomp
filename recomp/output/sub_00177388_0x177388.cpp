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

// Function: sub_00177388
// Address: 0x177388 - 0x177408
void sub_00177388_0x177388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177388_0x177388");
#endif

    switch (ctx->pc) {
        case 0x1773b0u: goto label_1773b0;
        case 0x1773ccu: goto label_1773cc;
        case 0x1773e8u: goto label_1773e8;
        case 0x1773f4u: goto label_1773f4;
        default: break;
    }

    ctx->pc = 0x177388u;

    // 0x177388: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x177388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17738c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17738cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177390: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x177390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x177394: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x177394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177398: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x177398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17739c: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x17739cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x1773a0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1773A0u;
    {
        const bool branch_taken_0x1773a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1773A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1773A0u;
        // 0x1773a4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1773a0) {
            ctx->pc = 0x1773E0u;
            goto label_1773e0;
        }
    }
    ctx->pc = 0x1773A8u;
    // 0x1773a8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1773a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1773ac: 0x0  nop
    ctx->pc = 0x1773acu;
    // NOP
label_1773b0:
    // 0x1773b0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1773b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1773b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1773b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1773b8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1773b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1773bc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1773BCu;
    {
        const bool branch_taken_0x1773bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1773C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1773BCu;
        // 0x1773c0: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1773bc) {
            ctx->pc = 0x1773D0u;
            goto label_1773d0;
        }
    }
    ctx->pc = 0x1773C4u;
    // 0x1773c4: 0xc05dd4a  jal         func_177528
    ctx->pc = 0x1773C4u;
    SET_GPR_U32(ctx, 31, 0x1773CCu);
    ctx->pc = 0x1773C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1773C4u;
    // 0x1773c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177528u, 0x1773C4u, 0x1773CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1773CCu;
label_1773cc:
    // 0x1773cc: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1773ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1773d0:
    // 0x1773d0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1773d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1773d4: 0x2e230030  sltiu       $v1, $s1, 0x30
    ctx->pc = 0x1773d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x1773d8: 0x5460fff5  bnel        $v1, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x1773D8u;
    {
        const bool branch_taken_0x1773d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1773d8) {
            ctx->pc = 0x1773DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1773D8u;
            // 0x1773dc: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1773B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1773b0;
        }
    }
    ctx->pc = 0x1773E0u;
label_1773e0:
    // 0x1773e0: 0xc05e0a0  jal         func_178280
    ctx->pc = 0x1773E0u;
    SET_GPR_U32(ctx, 31, 0x1773E8u);
    ctx->pc = 0x1773E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1773E0u;
    // 0x1773e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178280u, 0x1773E0u, 0x1773E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1773E8u;
label_1773e8:
    // 0x1773e8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1773e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1773ec: 0xc04f71c  jal         func_13DC70
    ctx->pc = 0x1773ECu;
    SET_GPR_U32(ctx, 31, 0x1773F4u);
    ctx->pc = 0x1773F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1773ECu;
    // 0x1773f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DC70u, 0x1773ECu, 0x1773F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1773F4u;
label_1773f4:
    // 0x1773f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1773f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1773f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1773f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1773fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1773fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177400: 0x3e00008  jr          $ra
    ctx->pc = 0x177400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177400u;
        // 0x177404: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177408u;
}
