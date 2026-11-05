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

// Function: sub_00198170
// Address: 0x198170 - 0x1981e0
void sub_00198170_0x198170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198170_0x198170");
#endif

    switch (ctx->pc) {
        case 0x198170u: goto label_198170;
        case 0x198174u: goto label_198174;
        case 0x198178u: goto label_198178;
        case 0x19817cu: goto label_19817c;
        case 0x198180u: goto label_198180;
        case 0x198184u: goto label_198184;
        case 0x198188u: goto label_198188;
        case 0x19818cu: goto label_19818c;
        case 0x198190u: goto label_198190;
        case 0x198194u: goto label_198194;
        case 0x198198u: goto label_198198;
        case 0x19819cu: goto label_19819c;
        case 0x1981a0u: goto label_1981a0;
        case 0x1981a4u: goto label_1981a4;
        case 0x1981a8u: goto label_1981a8;
        case 0x1981acu: goto label_1981ac;
        case 0x1981b0u: goto label_1981b0;
        case 0x1981b4u: goto label_1981b4;
        case 0x1981b8u: goto label_1981b8;
        case 0x1981bcu: goto label_1981bc;
        case 0x1981c0u: goto label_1981c0;
        case 0x1981c4u: goto label_1981c4;
        case 0x1981c8u: goto label_1981c8;
        case 0x1981ccu: goto label_1981cc;
        case 0x1981d0u: goto label_1981d0;
        case 0x1981d4u: goto label_1981d4;
        case 0x1981d8u: goto label_1981d8;
        case 0x1981dcu: goto label_1981dc;
        default: break;
    }

    ctx->pc = 0x198170u;

label_198170:
    // 0x198170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x198170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_198174:
    // 0x198174: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x198174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_198178:
    // 0x198178: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x198178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19817c:
    // 0x19817c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19817cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_198180:
    // 0x198180: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x198180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_198184:
    // 0x198184: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x198184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_198188:
    // 0x198188: 0x50430011  beql        $v0, $v1, . + 4 + (0x11 << 2)
label_19818c:
    if (ctx->pc == 0x19818Cu) {
        ctx->pc = 0x19818Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198188u;
        // 0x19818c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198190u;
        goto label_198190;
    }
    ctx->pc = 0x198188u;
    {
        const bool branch_taken_0x198188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x198188) {
            ctx->pc = 0x19818Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198188u;
            // 0x19818c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1981D0u;
            goto label_1981d0;
        }
    }
    ctx->pc = 0x198190u;
label_198190:
    // 0x198190: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x198190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_198194:
    // 0x198194: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_198198:
    if (ctx->pc == 0x198198u) {
        ctx->pc = 0x198198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198194u;
        // 0x198198: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19819Cu;
        goto label_19819c;
    }
    ctx->pc = 0x198194u;
    {
        const bool branch_taken_0x198194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x198198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198194u;
        // 0x198198: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198194) {
            ctx->pc = 0x1981ACu;
            goto label_1981ac;
        }
    }
    ctx->pc = 0x19819Cu;
label_19819c:
    // 0x19819c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19819cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1981a0:
    // 0x1981a0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1981a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1981a4:
    // 0x1981a4: 0x40f809  jalr        $v0
label_1981a8:
    if (ctx->pc == 0x1981A8u) {
        ctx->pc = 0x1981ACu;
        goto label_1981ac;
    }
    ctx->pc = 0x1981A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1981ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1981A4u, 0x1981ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1981ACu;
label_1981ac:
    // 0x1981ac: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1981acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1981b0:
    // 0x1981b0: 0xc061a12  jal         func_186848
label_1981b4:
    if (ctx->pc == 0x1981B4u) {
        ctx->pc = 0x1981B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1981B0u;
        // 0x1981b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1981B8u;
        goto label_1981b8;
    }
    ctx->pc = 0x1981B0u;
    SET_GPR_U32(ctx, 31, 0x1981B8u);
    ctx->pc = 0x1981B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1981B0u;
    // 0x1981b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1981B0u, 0x1981B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1981B8u;
label_1981b8:
    // 0x1981b8: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x1981b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_1981bc:
    // 0x1981bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1981bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1981c0:
    // 0x1981c0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1981c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1981c4:
    // 0x1981c4: 0x40f809  jalr        $v0
label_1981c8:
    if (ctx->pc == 0x1981C8u) {
        ctx->pc = 0x1981C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1981C4u;
        // 0x1981c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1981CCu;
        goto label_1981cc;
    }
    ctx->pc = 0x1981C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1981CCu);
        ctx->pc = 0x1981C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1981C4u;
        // 0x1981c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1981C4u, 0x1981CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1981CCu;
label_1981cc:
    // 0x1981cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1981ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1981d0:
    // 0x1981d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1981d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1981d4:
    // 0x1981d4: 0x3e00008  jr          $ra
label_1981d8:
    if (ctx->pc == 0x1981D8u) {
        ctx->pc = 0x1981D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1981D4u;
        // 0x1981d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1981DCu;
        goto label_1981dc;
    }
    ctx->pc = 0x1981D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1981D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1981D4u;
        // 0x1981d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1981D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1981DCu;
label_1981dc:
    // 0x1981dc: 0x0  nop
    ctx->pc = 0x1981dcu;
    // NOP
    ctx->pc = 0x1981e0u;
}
