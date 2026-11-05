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

// Function: sub_0011CC70
// Address: 0x11cc70 - 0x11cd20
void sub_0011CC70_0x11cc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CC70_0x11cc70");
#endif

    switch (ctx->pc) {
        case 0x11cc84u: goto label_11cc84;
        case 0x11cc94u: goto label_11cc94;
        case 0x11ccb0u: goto label_11ccb0;
        case 0x11ccccu: goto label_11cccc;
        case 0x11cce8u: goto label_11cce8;
        case 0x11ccfcu: goto label_11ccfc;
        default: break;
    }

    ctx->pc = 0x11cc70u;

    // 0x11cc70: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x11cc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x11cc74: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x11cc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x11cc78: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11cc78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cc7c: 0xc09e062  jal         func_278188
    ctx->pc = 0x11CC7Cu;
    SET_GPR_U32(ctx, 31, 0x11CC84u);
    ctx->pc = 0x11CC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CC7Cu;
    // 0x11cc80: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278188u, 0x11CC7Cu, 0x11CC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC84u;
label_11cc84:
    // 0x11cc84: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11cc84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11cc88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11cc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cc8c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11CC8Cu;
    SET_GPR_U32(ctx, 31, 0x11CC94u);
    ctx->pc = 0x11CC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CC8Cu;
    // 0x11cc90: 0x24a5bd98  addiu       $a1, $a1, -0x4268 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11CC8Cu, 0x11CC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC94u;
label_11cc94:
    // 0x11cc94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CC94u;
    {
        const bool branch_taken_0x11cc94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC94u;
        // 0x11cc98: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc94) {
            ctx->pc = 0x11CCA4u;
            goto label_11cca4;
        }
    }
    ctx->pc = 0x11CC9Cu;
    // 0x11cc9c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x11CC9Cu;
    {
        const bool branch_taken_0x11cc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC9Cu;
        // 0x11cca0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc9c) {
            ctx->pc = 0x11CD14u;
            goto label_11cd14;
        }
    }
    ctx->pc = 0x11CCA4u;
label_11cca4:
    // 0x11cca4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11cca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cca8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11CCA8u;
    SET_GPR_U32(ctx, 31, 0x11CCB0u);
    ctx->pc = 0x11CCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CCA8u;
    // 0x11ccac: 0x24a5bda0  addiu       $a1, $a1, -0x4260 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11CCA8u, 0x11CCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CCB0u;
label_11ccb0:
    // 0x11ccb0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CCB0u;
    {
        const bool branch_taken_0x11ccb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CCB0u;
        // 0x11ccb4: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ccb0) {
            ctx->pc = 0x11CCC0u;
            goto label_11ccc0;
        }
    }
    ctx->pc = 0x11CCB8u;
    // 0x11ccb8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x11CCB8u;
    {
        const bool branch_taken_0x11ccb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CCB8u;
        // 0x11ccbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ccb8) {
            ctx->pc = 0x11CD14u;
            goto label_11cd14;
        }
    }
    ctx->pc = 0x11CCC0u;
label_11ccc0:
    // 0x11ccc0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11ccc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ccc4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11CCC4u;
    SET_GPR_U32(ctx, 31, 0x11CCCCu);
    ctx->pc = 0x11CCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CCC4u;
    // 0x11ccc8: 0x24a5bda8  addiu       $a1, $a1, -0x4258 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11CCC4u, 0x11CCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CCCCu;
label_11cccc:
    // 0x11cccc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CCCCu;
    {
        const bool branch_taken_0x11cccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CCCCu;
        // 0x11ccd0: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cccc) {
            ctx->pc = 0x11CCDCu;
            goto label_11ccdc;
        }
    }
    ctx->pc = 0x11CCD4u;
    // 0x11ccd4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x11CCD4u;
    {
        const bool branch_taken_0x11ccd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CCD4u;
        // 0x11ccd8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ccd4) {
            ctx->pc = 0x11CD14u;
            goto label_11cd14;
        }
    }
    ctx->pc = 0x11CCDCu;
label_11ccdc:
    // 0x11ccdc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11ccdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cce0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11CCE0u;
    SET_GPR_U32(ctx, 31, 0x11CCE8u);
    ctx->pc = 0x11CCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CCE0u;
    // 0x11cce4: 0x24a5bdb0  addiu       $a1, $a1, -0x4250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11CCE0u, 0x11CCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CCE8u;
label_11cce8:
    // 0x11cce8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11CCE8u;
    {
        const bool branch_taken_0x11cce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CCE8u;
        // 0x11ccec: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cce8) {
            ctx->pc = 0x11CD10u;
            goto label_11cd10;
        }
    }
    ctx->pc = 0x11CCF0u;
    // 0x11ccf0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11ccf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ccf4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11CCF4u;
    SET_GPR_U32(ctx, 31, 0x11CCFCu);
    ctx->pc = 0x11CCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CCF4u;
    // 0x11ccf8: 0x24a5bdb8  addiu       $a1, $a1, -0x4248 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11CCF4u, 0x11CCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CCFCu;
label_11ccfc:
    // 0x11ccfc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x11ccfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11cd00: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x11cd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11cd04: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x11cd04u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x11cd08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11CD08u;
    {
        const bool branch_taken_0x11cd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD08u;
        // 0x11cd0c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd08) {
            ctx->pc = 0x11CD14u;
            goto label_11cd14;
        }
    }
    ctx->pc = 0x11CD10u;
label_11cd10:
    // 0x11cd10: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11cd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_11cd14:
    // 0x11cd14: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x11cd14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x11cd18: 0x3e00008  jr          $ra
    ctx->pc = 0x11CD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD18u;
        // 0x11cd1c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CD18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CD20u;
}
