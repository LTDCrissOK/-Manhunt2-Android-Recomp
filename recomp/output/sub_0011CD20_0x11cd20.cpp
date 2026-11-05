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

// Function: sub_0011CD20
// Address: 0x11cd20 - 0x11cdb8
void sub_0011CD20_0x11cd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CD20_0x11cd20");
#endif

    switch (ctx->pc) {
        case 0x11cd34u: goto label_11cd34;
        case 0x11cd44u: goto label_11cd44;
        case 0x11cd60u: goto label_11cd60;
        case 0x11cd7cu: goto label_11cd7c;
        case 0x11cd90u: goto label_11cd90;
        default: break;
    }

    ctx->pc = 0x11cd20u;

    // 0x11cd20: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x11cd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x11cd24: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x11cd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x11cd28: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11cd28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cd2c: 0xc09e062  jal         func_278188
    ctx->pc = 0x11CD2Cu;
    SET_GPR_U32(ctx, 31, 0x11CD34u);
    ctx->pc = 0x11CD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CD2Cu;
    // 0x11cd30: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278188u, 0x11CD2Cu, 0x11CD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CD34u;
label_11cd34:
    // 0x11cd34: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11cd34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11cd38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11cd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cd3c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11CD3Cu;
    SET_GPR_U32(ctx, 31, 0x11CD44u);
    ctx->pc = 0x11CD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CD3Cu;
    // 0x11cd40: 0x24a5bdc0  addiu       $a1, $a1, -0x4240 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11CD3Cu, 0x11CD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CD44u;
label_11cd44:
    // 0x11cd44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CD44u;
    {
        const bool branch_taken_0x11cd44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD44u;
        // 0x11cd48: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd44) {
            ctx->pc = 0x11CD54u;
            goto label_11cd54;
        }
    }
    ctx->pc = 0x11CD4Cu;
    // 0x11cd4c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x11CD4Cu;
    {
        const bool branch_taken_0x11cd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD4Cu;
        // 0x11cd50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd4c) {
            ctx->pc = 0x11CDA8u;
            goto label_11cda8;
        }
    }
    ctx->pc = 0x11CD54u;
label_11cd54:
    // 0x11cd54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11cd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cd58: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11CD58u;
    SET_GPR_U32(ctx, 31, 0x11CD60u);
    ctx->pc = 0x11CD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CD58u;
    // 0x11cd5c: 0x24a5bdd0  addiu       $a1, $a1, -0x4230 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11CD58u, 0x11CD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CD60u;
label_11cd60:
    // 0x11cd60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CD60u;
    {
        const bool branch_taken_0x11cd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD60u;
        // 0x11cd64: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd60) {
            ctx->pc = 0x11CD70u;
            goto label_11cd70;
        }
    }
    ctx->pc = 0x11CD68u;
    // 0x11cd68: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x11CD68u;
    {
        const bool branch_taken_0x11cd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD68u;
        // 0x11cd6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd68) {
            ctx->pc = 0x11CDA8u;
            goto label_11cda8;
        }
    }
    ctx->pc = 0x11CD70u;
label_11cd70:
    // 0x11cd70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11cd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cd74: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11CD74u;
    SET_GPR_U32(ctx, 31, 0x11CD7Cu);
    ctx->pc = 0x11CD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CD74u;
    // 0x11cd78: 0x24a5bde0  addiu       $a1, $a1, -0x4220 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11CD74u, 0x11CD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CD7Cu;
label_11cd7c:
    // 0x11cd7c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11CD7Cu;
    {
        const bool branch_taken_0x11cd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD7Cu;
        // 0x11cd80: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd7c) {
            ctx->pc = 0x11CDA4u;
            goto label_11cda4;
        }
    }
    ctx->pc = 0x11CD84u;
    // 0x11cd84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11cd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cd88: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11CD88u;
    SET_GPR_U32(ctx, 31, 0x11CD90u);
    ctx->pc = 0x11CD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CD88u;
    // 0x11cd8c: 0x24a5bde8  addiu       $a1, $a1, -0x4218 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11CD88u, 0x11CD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CD90u;
label_11cd90:
    // 0x11cd90: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x11cd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11cd94: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x11cd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11cd98: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x11cd98u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x11cd9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11CD9Cu;
    {
        const bool branch_taken_0x11cd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD9Cu;
        // 0x11cda0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd9c) {
            ctx->pc = 0x11CDA8u;
            goto label_11cda8;
        }
    }
    ctx->pc = 0x11CDA4u;
label_11cda4:
    // 0x11cda4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11cda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11cda8:
    // 0x11cda8: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x11cda8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x11cdac: 0x3e00008  jr          $ra
    ctx->pc = 0x11CDACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CDACu;
        // 0x11cdb0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CDACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CDB4u;
    // 0x11cdb4: 0x0  nop
    ctx->pc = 0x11cdb4u;
    // NOP
    ctx->pc = 0x11cdb8u;
}
