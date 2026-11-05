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

// Function: sub_0029DCA0
// Address: 0x29dca0 - 0x29dda8
void sub_0029DCA0_0x29dca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DCA0_0x29dca0");
#endif

    switch (ctx->pc) {
        case 0x29dcf8u: goto label_29dcf8;
        case 0x29dd3cu: goto label_29dd3c;
        case 0x29dd7cu: goto label_29dd7c;
        default: break;
    }

    ctx->pc = 0x29dca0u;

    // 0x29dca0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29dca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29dca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29dca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29dca8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29dca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x29dcac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29dcacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dcb0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29dcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x29dcb4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x29dcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x29dcb8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x29dcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x29dcbc: 0x24140019  addiu       $s4, $zero, 0x19
    ctx->pc = 0x29dcbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x29dcc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29dcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29dcc4: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x29dcc4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29dcc8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29dcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29dccc: 0x3c15004a  lui         $s5, 0x4A
    ctx->pc = 0x29dcccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)74 << 16));
    // 0x29dcd0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29dcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x29dcd4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x29dcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x29dcd8: 0x8e030208  lw          $v1, 0x208($s0)
    ctx->pc = 0x29dcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x29dcdc: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x29dcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x29dce0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x29dce0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29dce4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29dce8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29dce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29dcec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x29dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x29dcf0: 0x8c530014  lw          $s3, 0x14($v0)
    ctx->pc = 0x29dcf0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x29dcf4: 0x8e020208  lw          $v0, 0x208($s0)
    ctx->pc = 0x29dcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
label_29dcf8:
    // 0x29dcf8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29dcfc: 0x14540002  bne         $v0, $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x29DCFCu;
    {
        const bool branch_taken_0x29dcfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x29DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DCFCu;
        // 0x29dd00: 0xae020208  sw          $v0, 0x208($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dcfc) {
            ctx->pc = 0x29DD08u;
            goto label_29dd08;
        }
    }
    ctx->pc = 0x29DD04u;
    // 0x29dd04: 0xae000208  sw          $zero, 0x208($s0)
    ctx->pc = 0x29dd04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
label_29dd08:
    // 0x29dd08: 0x8e030208  lw          $v1, 0x208($s0)
    ctx->pc = 0x29dd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x29dd0c: 0x24120014  addiu       $s2, $zero, 0x14
    ctx->pc = 0x29dd0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x29dd10: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x29dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x29dd14: 0x26110014  addiu       $s1, $s0, 0x14
    ctx->pc = 0x29dd14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x29dd18: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x29dd18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29dd1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29dd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29dd20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29dd24: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x29dd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29dd28: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x29dd28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29dd2c: 0x5080fff2  beql        $a0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x29DD2Cu;
    {
        const bool branch_taken_0x29dd2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29dd2c) {
            ctx->pc = 0x29DD30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DD2Cu;
            // 0x29dd30: 0x8e020208  lw          $v0, 0x208($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DCF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29dcf8;
        }
    }
    ctx->pc = 0x29DD34u;
    // 0x29dd34: 0xc0a5b3c  jal         func_296CF0
    ctx->pc = 0x29DD34u;
    SET_GPR_U32(ctx, 31, 0x29DD3Cu);
    ctx->pc = 0x296CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CF0u, 0x29DD34u, 0x29DD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DD3Cu;
label_29dd3c:
    // 0x29dd3c: 0x5040ffee  beql        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x29DD3Cu;
    {
        const bool branch_taken_0x29dd3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29dd3c) {
            ctx->pc = 0x29DD40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DD3Cu;
            // 0x29dd40: 0x8e020208  lw          $v0, 0x208($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DCF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29dcf8;
        }
    }
    ctx->pc = 0x29DD44u;
    // 0x29dd44: 0x8e030208  lw          $v1, 0x208($s0)
    ctx->pc = 0x29dd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x29dd48: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x29dd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x29dd4c: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x29dd4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29dd50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29dd54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29dd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29dd58: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x29dd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29dd5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29dd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29dd60: 0x10730006  beq         $v1, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x29DD60u;
    {
        const bool branch_taken_0x29dd60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x29DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD60u;
        // 0x29dd64: 0x26a49b10  addiu       $a0, $s5, -0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dd60) {
            ctx->pc = 0x29DD7Cu;
            goto label_29dd7c;
        }
    }
    ctx->pc = 0x29DD68u;
    // 0x29dd68: 0xa2160210  sb          $s6, 0x210($s0)
    ctx->pc = 0x29dd68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 528), (uint8_t)GPR_U32(ctx, 22));
    // 0x29dd6c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x29dd6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x29dd70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29dd70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29dd74: 0xc07f540  jal         func_1FD500
    ctx->pc = 0x29DD74u;
    SET_GPR_U32(ctx, 31, 0x29DD7Cu);
    ctx->pc = 0x29DD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DD74u;
    // 0x29dd78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x29DD74u, 0x29DD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DD7Cu;
label_29dd7c:
    // 0x29dd7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29dd7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29dd80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29dd80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29dd84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29dd84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29dd88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29dd88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29dd8c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29dd8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29dd90: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29dd90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29dd94: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x29dd94u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29dd98: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x29dd98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dd9c: 0x3e00008  jr          $ra
    ctx->pc = 0x29DD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD9Cu;
        // 0x29dda0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29DDA4u;
    // 0x29dda4: 0x0  nop
    ctx->pc = 0x29dda4u;
    // NOP
    ctx->pc = 0x29dda8u;
}
