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

// Function: sub_0021CD68
// Address: 0x21cd68 - 0x21cdb8
void sub_0021CD68_0x21cd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CD68_0x21cd68");
#endif

    switch (ctx->pc) {
        case 0x21cd7cu: goto label_21cd7c;
        case 0x21cd94u: goto label_21cd94;
        case 0x21cda4u: goto label_21cda4;
        default: break;
    }

    ctx->pc = 0x21cd68u;

    // 0x21cd68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21cd68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21cd6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21cd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21cd70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21cd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21cd74: 0xc08736e  jal         func_21CDB8
    ctx->pc = 0x21CD74u;
    SET_GPR_U32(ctx, 31, 0x21CD7Cu);
    ctx->pc = 0x21CD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CD74u;
    // 0x21cd78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CDB8u, 0x21CD74u, 0x21CD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CD7Cu;
label_21cd7c:
    // 0x21cd7c: 0x8e040220  lw          $a0, 0x220($s0)
    ctx->pc = 0x21cd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x21cd80: 0x90820010  lbu         $v0, 0x10($a0)
    ctx->pc = 0x21cd80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x21cd84: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21CD84u;
    {
        const bool branch_taken_0x21cd84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21cd84) {
            ctx->pc = 0x21CD9Cu;
            goto label_21cd9c;
        }
    }
    ctx->pc = 0x21CD8Cu;
    // 0x21cd8c: 0xc0d59f8  jal         func_3567E0
    ctx->pc = 0x21CD8Cu;
    SET_GPR_U32(ctx, 31, 0x21CD94u);
    ctx->pc = 0x3567E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3567E0u, 0x21CD8Cu, 0x21CD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CD94u;
label_21cd94:
    // 0x21cd94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21CD94u;
    {
        const bool branch_taken_0x21cd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD94u;
        // 0x21cd98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd94) {
            ctx->pc = 0x21CDA8u;
            goto label_21cda8;
        }
    }
    ctx->pc = 0x21CD9Cu;
label_21cd9c:
    // 0x21cd9c: 0xc084aba  jal         func_212AE8
    ctx->pc = 0x21CD9Cu;
    SET_GPR_U32(ctx, 31, 0x21CDA4u);
    ctx->pc = 0x21CDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CD9Cu;
    // 0x21cda0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212AE8u, 0x21CD9Cu, 0x21CDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CDA4u;
label_21cda4:
    // 0x21cda4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21cda4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21cda8:
    // 0x21cda8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21cda8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21cdac: 0x3e00008  jr          $ra
    ctx->pc = 0x21CDACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CDACu;
        // 0x21cdb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CDACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CDB4u;
    // 0x21cdb4: 0x0  nop
    ctx->pc = 0x21cdb4u;
    // NOP
    ctx->pc = 0x21cdb8u;
}
