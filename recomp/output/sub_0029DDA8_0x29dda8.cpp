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

// Function: sub_0029DDA8
// Address: 0x29dda8 - 0x29deb0
void sub_0029DDA8_0x29dda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DDA8_0x29dda8");
#endif

    switch (ctx->pc) {
        case 0x29de00u: goto label_29de00;
        case 0x29de48u: goto label_29de48;
        case 0x29de88u: goto label_29de88;
        default: break;
    }

    ctx->pc = 0x29dda8u;

    // 0x29dda8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29dda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29ddac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29ddacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29ddb0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29ddb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x29ddb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29ddb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ddb8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29ddb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x29ddbc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x29ddbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x29ddc0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x29ddc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x29ddc4: 0x24140018  addiu       $s4, $zero, 0x18
    ctx->pc = 0x29ddc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x29ddc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29ddc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29ddcc: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x29ddccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ddd0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29ddd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29ddd4: 0x3c15004a  lui         $s5, 0x4A
    ctx->pc = 0x29ddd4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)74 << 16));
    // 0x29ddd8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29ddd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x29dddc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x29dddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x29dde0: 0x8e030208  lw          $v1, 0x208($s0)
    ctx->pc = 0x29dde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x29dde4: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x29dde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x29dde8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x29dde8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29ddec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29ddf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29ddf4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x29ddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x29ddf8: 0x8c530014  lw          $s3, 0x14($v0)
    ctx->pc = 0x29ddf8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x29ddfc: 0x8e020208  lw          $v0, 0x208($s0)
    ctx->pc = 0x29ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
label_29de00:
    // 0x29de00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29DE00u;
    {
        const bool branch_taken_0x29de00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DE00u;
        // 0x29de04: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29de00) {
            ctx->pc = 0x29DE10u;
            goto label_29de10;
        }
    }
    ctx->pc = 0x29DE08u;
    // 0x29de08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29DE08u;
    {
        const bool branch_taken_0x29de08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DE08u;
        // 0x29de0c: 0xae140208  sw          $s4, 0x208($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29de08) {
            ctx->pc = 0x29DE14u;
            goto label_29de14;
        }
    }
    ctx->pc = 0x29DE10u;
label_29de10:
    // 0x29de10: 0xae020208  sw          $v0, 0x208($s0)
    ctx->pc = 0x29de10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 2));
label_29de14:
    // 0x29de14: 0x8e030208  lw          $v1, 0x208($s0)
    ctx->pc = 0x29de14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x29de18: 0x24120014  addiu       $s2, $zero, 0x14
    ctx->pc = 0x29de18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x29de1c: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x29de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x29de20: 0x26110014  addiu       $s1, $s0, 0x14
    ctx->pc = 0x29de20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x29de24: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x29de24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29de28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29de28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29de2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29de2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29de30: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x29de30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29de34: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x29de34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29de38: 0x5080fff1  beql        $a0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x29DE38u;
    {
        const bool branch_taken_0x29de38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29de38) {
            ctx->pc = 0x29DE3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DE38u;
            // 0x29de3c: 0x8e020208  lw          $v0, 0x208($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DE00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29de00;
        }
    }
    ctx->pc = 0x29DE40u;
    // 0x29de40: 0xc0a5b3c  jal         func_296CF0
    ctx->pc = 0x29DE40u;
    SET_GPR_U32(ctx, 31, 0x29DE48u);
    ctx->pc = 0x296CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CF0u, 0x29DE40u, 0x29DE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DE48u;
label_29de48:
    // 0x29de48: 0x5040ffed  beql        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x29DE48u;
    {
        const bool branch_taken_0x29de48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29de48) {
            ctx->pc = 0x29DE4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DE48u;
            // 0x29de4c: 0x8e020208  lw          $v0, 0x208($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DE00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29de00;
        }
    }
    ctx->pc = 0x29DE50u;
    // 0x29de50: 0x8e030208  lw          $v1, 0x208($s0)
    ctx->pc = 0x29de50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x29de54: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x29de54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x29de58: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x29de58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29de5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29de5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29de60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29de60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29de64: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x29de64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29de68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29de68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29de6c: 0x10730006  beq         $v1, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x29DE6Cu;
    {
        const bool branch_taken_0x29de6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x29DE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DE6Cu;
        // 0x29de70: 0x26a49b10  addiu       $a0, $s5, -0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29de6c) {
            ctx->pc = 0x29DE88u;
            goto label_29de88;
        }
    }
    ctx->pc = 0x29DE74u;
    // 0x29de74: 0xa2160210  sb          $s6, 0x210($s0)
    ctx->pc = 0x29de74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 528), (uint8_t)GPR_U32(ctx, 22));
    // 0x29de78: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x29de78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x29de7c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29de7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29de80: 0xc07f540  jal         func_1FD500
    ctx->pc = 0x29DE80u;
    SET_GPR_U32(ctx, 31, 0x29DE88u);
    ctx->pc = 0x29DE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DE80u;
    // 0x29de84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x29DE80u, 0x29DE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DE88u;
label_29de88:
    // 0x29de88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29de88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29de8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29de8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29de90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29de90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29de94: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29de94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29de98: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29de98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29de9c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29de9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29dea0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x29dea0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29dea4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x29dea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dea8: 0x3e00008  jr          $ra
    ctx->pc = 0x29DEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DEA8u;
        // 0x29deac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DEA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29DEB0u;
}
