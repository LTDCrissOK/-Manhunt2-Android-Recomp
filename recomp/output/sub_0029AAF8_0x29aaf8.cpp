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

// Function: sub_0029AAF8
// Address: 0x29aaf8 - 0x29ab88
void sub_0029AAF8_0x29aaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AAF8_0x29aaf8");
#endif

    switch (ctx->pc) {
        case 0x29ab34u: goto label_29ab34;
        case 0x29ab3cu: goto label_29ab3c;
        case 0x29ab4cu: goto label_29ab4c;
        case 0x29ab5cu: goto label_29ab5c;
        default: break;
    }

    ctx->pc = 0x29aaf8u;

    // 0x29aaf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29aaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29aafc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29aafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29ab00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x29ab00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x29ab04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29ab04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ab08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29ab08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ab0c: 0x92020080  lbu         $v0, 0x80($s0)
    ctx->pc = 0x29ab0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x29ab10: 0x14440014  bne         $v0, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x29AB10u;
    {
        const bool branch_taken_0x29ab10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x29AB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB10u;
        // 0x29ab14: 0x3c020052  lui         $v0, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ab10) {
            ctx->pc = 0x29AB64u;
            goto label_29ab64;
        }
    }
    ctx->pc = 0x29AB18u;
    // 0x29ab18: 0xa2000080  sb          $zero, 0x80($s0)
    ctx->pc = 0x29ab18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ab1c: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x29ab1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x29ab20: 0x8c43ac80  lw          $v1, -0x5380($v0)
    ctx->pc = 0x29ab20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945920)));
    // 0x29ab24: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29AB24u;
    {
        const bool branch_taken_0x29ab24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x29ab24) {
            ctx->pc = 0x29AB44u;
            goto label_29ab44;
        }
    }
    ctx->pc = 0x29AB2Cu;
    // 0x29ab2c: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x29AB2Cu;
    SET_GPR_U32(ctx, 31, 0x29AB34u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x29AB2Cu, 0x29AB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AB34u;
label_29ab34:
    // 0x29ab34: 0xc0a7142  jal         func_29C508
    ctx->pc = 0x29AB34u;
    SET_GPR_U32(ctx, 31, 0x29AB3Cu);
    ctx->pc = 0x29AB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AB34u;
    // 0x29ab38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C508u, 0x29AB34u, 0x29AB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AB3Cu;
label_29ab3c:
    // 0x29ab3c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x29AB3Cu;
    {
        const bool branch_taken_0x29ab3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB3Cu;
        // 0x29ab40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ab3c) {
            ctx->pc = 0x29AB7Cu;
            goto label_29ab7c;
        }
    }
    ctx->pc = 0x29AB44u;
label_29ab44:
    // 0x29ab44: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x29AB44u;
    SET_GPR_U32(ctx, 31, 0x29AB4Cu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x29AB44u, 0x29AB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AB4Cu;
label_29ab4c:
    // 0x29ab4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29ab4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ab50: 0x26050078  addiu       $a1, $s0, 0x78
    ctx->pc = 0x29ab50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x29ab54: 0xc0a7096  jal         func_29C258
    ctx->pc = 0x29AB54u;
    SET_GPR_U32(ctx, 31, 0x29AB5Cu);
    ctx->pc = 0x29AB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AB54u;
    // 0x29ab58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C258u, 0x29AB54u, 0x29AB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AB5Cu;
label_29ab5c:
    // 0x29ab5c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29AB5Cu;
    {
        const bool branch_taken_0x29ab5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB5Cu;
        // 0x29ab60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ab5c) {
            ctx->pc = 0x29AB7Cu;
            goto label_29ab7c;
        }
    }
    ctx->pc = 0x29AB64u;
label_29ab64:
    // 0x29ab64: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x29ab64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29ab68: 0x2442ac80  addiu       $v0, $v0, -0x5380
    ctx->pc = 0x29ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945920));
    // 0x29ab6c: 0xac4358f8  sw          $v1, 0x58F8($v0)
    ctx->pc = 0x29ab6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22776), GPR_U32(ctx, 3));
    // 0x29ab70: 0xac44591c  sw          $a0, 0x591C($v0)
    ctx->pc = 0x29ab70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22812), GPR_U32(ctx, 4));
    // 0x29ab74: 0xa2040080  sb          $a0, 0x80($s0)
    ctx->pc = 0x29ab74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 4));
    // 0x29ab78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29ab78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29ab7c:
    // 0x29ab7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29ab7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29ab80: 0x3e00008  jr          $ra
    ctx->pc = 0x29AB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB80u;
        // 0x29ab84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AB88u;
}
