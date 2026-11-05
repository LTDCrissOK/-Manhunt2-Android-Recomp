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

// Function: sub_00246540
// Address: 0x246540 - 0x2465b0
void sub_00246540_0x246540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246540_0x246540");
#endif

    switch (ctx->pc) {
        case 0x246568u: goto label_246568;
        case 0x24657cu: goto label_24657c;
        case 0x246588u: goto label_246588;
        case 0x246590u: goto label_246590;
        case 0x24659cu: goto label_24659c;
        default: break;
    }

    ctx->pc = 0x246540u;

    // 0x246540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x246540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x246544: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x246544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x246548: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x246548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24654c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x24654cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246550: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x246550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x246554: 0x904301a6  lbu         $v1, 0x1A6($v0)
    ctx->pc = 0x246554u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 422)));
    // 0x246558: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x246558u;
    {
        const bool branch_taken_0x246558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246558u;
        // 0x24655c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246558) {
            ctx->pc = 0x24659Cu;
            goto label_24659c;
        }
    }
    ctx->pc = 0x246560u;
    // 0x246560: 0xc08bbf4  jal         func_22EFD0
    ctx->pc = 0x246560u;
    SET_GPR_U32(ctx, 31, 0x246568u);
    ctx->pc = 0x246564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246560u;
    // 0x246564: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EFD0u, 0x246560u, 0x246568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246568u;
label_246568:
    // 0x246568: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x246568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x24656c: 0x2405080d  addiu       $a1, $zero, 0x80D
    ctx->pc = 0x24656cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    // 0x246570: 0xa04001a6  sb          $zero, 0x1A6($v0)
    ctx->pc = 0x246570u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 422), (uint8_t)GPR_U32(ctx, 0));
    // 0x246574: 0xc069b56  jal         func_1A6D58
    ctx->pc = 0x246574u;
    SET_GPR_U32(ctx, 31, 0x24657Cu);
    ctx->pc = 0x246578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246574u;
    // 0x246578: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6D58u, 0x246574u, 0x24657Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24657Cu;
label_24657c:
    // 0x24657c: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x24657cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x246580: 0xc06a05e  jal         func_1A8178
    ctx->pc = 0x246580u;
    SET_GPR_U32(ctx, 31, 0x246588u);
    ctx->pc = 0x246584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246580u;
    // 0x246584: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x246580u, 0x246588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246588u;
label_246588:
    // 0x246588: 0xc06a328  jal         func_1A8CA0
    ctx->pc = 0x246588u;
    SET_GPR_U32(ctx, 31, 0x246590u);
    ctx->pc = 0x24658Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246588u;
    // 0x24658c: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8CA0u, 0x246588u, 0x246590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246590u;
label_246590:
    // 0x246590: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x246590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x246594: 0xc0757d2  jal         func_1D5F48
    ctx->pc = 0x246594u;
    SET_GPR_U32(ctx, 31, 0x24659Cu);
    ctx->pc = 0x246598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246594u;
    // 0x246598: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F48u, 0x246594u, 0x24659Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24659Cu;
label_24659c:
    // 0x24659c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24659cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2465a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2465a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2465a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2465A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2465A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2465A4u;
        // 0x2465a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2465A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2465ACu;
    // 0x2465ac: 0x0  nop
    ctx->pc = 0x2465acu;
    // NOP
    ctx->pc = 0x2465b0u;
}
