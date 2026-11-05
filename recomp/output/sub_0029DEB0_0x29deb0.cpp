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

// Function: sub_0029DEB0
// Address: 0x29deb0 - 0x29dfb8
void sub_0029DEB0_0x29deb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DEB0_0x29deb0");
#endif

    switch (ctx->pc) {
        case 0x29df08u: goto label_29df08;
        case 0x29df50u: goto label_29df50;
        case 0x29df8cu: goto label_29df8c;
        default: break;
    }

    ctx->pc = 0x29deb0u;

    // 0x29deb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29deb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29deb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29deb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29deb8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29deb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x29debc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29debcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dec0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29dec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x29dec4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x29dec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x29dec8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x29dec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x29decc: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x29deccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29ded0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29ded0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29ded4: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x29ded4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ded8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29ded8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29dedc: 0x3c15004a  lui         $s5, 0x4A
    ctx->pc = 0x29dedcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)74 << 16));
    // 0x29dee0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29dee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x29dee4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x29dee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x29dee8: 0x8e030208  lw          $v1, 0x208($s0)
    ctx->pc = 0x29dee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x29deec: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x29deecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x29def0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x29def0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29def4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29def4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29def8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29def8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29defc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x29defcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x29df00: 0x8c530014  lw          $s3, 0x14($v0)
    ctx->pc = 0x29df00u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x29df04: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x29df04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_29df08:
    // 0x29df08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29DF08u;
    {
        const bool branch_taken_0x29df08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DF08u;
        // 0x29df0c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29df08) {
            ctx->pc = 0x29DF18u;
            goto label_29df18;
        }
    }
    ctx->pc = 0x29DF10u;
    // 0x29df10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29DF10u;
    {
        const bool branch_taken_0x29df10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DF10u;
        // 0x29df14: 0xae14020c  sw          $s4, 0x20C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29df10) {
            ctx->pc = 0x29DF1Cu;
            goto label_29df1c;
        }
    }
    ctx->pc = 0x29DF18u;
label_29df18:
    // 0x29df18: 0xae02020c  sw          $v0, 0x20C($s0)
    ctx->pc = 0x29df18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 2));
label_29df1c:
    // 0x29df1c: 0x8e030208  lw          $v1, 0x208($s0)
    ctx->pc = 0x29df1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x29df20: 0x24120014  addiu       $s2, $zero, 0x14
    ctx->pc = 0x29df20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x29df24: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x29df24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x29df28: 0x26110014  addiu       $s1, $s0, 0x14
    ctx->pc = 0x29df28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x29df2c: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x29df2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29df30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29df30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29df34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29df34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29df38: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x29df38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29df3c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x29df3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29df40: 0x5080fff1  beql        $a0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x29DF40u;
    {
        const bool branch_taken_0x29df40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29df40) {
            ctx->pc = 0x29DF44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DF40u;
            // 0x29df44: 0x8e02020c  lw          $v0, 0x20C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DF08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29df08;
        }
    }
    ctx->pc = 0x29DF48u;
    // 0x29df48: 0xc0a5b3c  jal         func_296CF0
    ctx->pc = 0x29DF48u;
    SET_GPR_U32(ctx, 31, 0x29DF50u);
    ctx->pc = 0x296CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CF0u, 0x29DF48u, 0x29DF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DF50u;
label_29df50:
    // 0x29df50: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x29DF50u;
    {
        const bool branch_taken_0x29df50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DF50u;
        // 0x29df54: 0x8e02020c  lw          $v0, 0x20C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29df50) {
            ctx->pc = 0x29DF08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29df08;
        }
    }
    ctx->pc = 0x29DF58u;
    // 0x29df58: 0x8e030208  lw          $v1, 0x208($s0)
    ctx->pc = 0x29df58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x29df5c: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x29df5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29df60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29df60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29df64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29df64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29df68: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x29df68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29df6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29df6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29df70: 0x10730006  beq         $v1, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x29DF70u;
    {
        const bool branch_taken_0x29df70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x29DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DF70u;
        // 0x29df74: 0x26a49b10  addiu       $a0, $s5, -0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29df70) {
            ctx->pc = 0x29DF8Cu;
            goto label_29df8c;
        }
    }
    ctx->pc = 0x29DF78u;
    // 0x29df78: 0xa2160210  sb          $s6, 0x210($s0)
    ctx->pc = 0x29df78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 528), (uint8_t)GPR_U32(ctx, 22));
    // 0x29df7c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x29df7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x29df80: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29df80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29df84: 0xc07f540  jal         func_1FD500
    ctx->pc = 0x29DF84u;
    SET_GPR_U32(ctx, 31, 0x29DF8Cu);
    ctx->pc = 0x29DF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DF84u;
    // 0x29df88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x29DF84u, 0x29DF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DF8Cu;
label_29df8c:
    // 0x29df8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29df8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29df90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29df90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29df94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29df94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29df98: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29df98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29df9c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29df9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29dfa0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29dfa0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29dfa4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x29dfa4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29dfa8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x29dfa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dfac: 0x3e00008  jr          $ra
    ctx->pc = 0x29DFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DFACu;
        // 0x29dfb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29DFB4u;
    // 0x29dfb4: 0x0  nop
    ctx->pc = 0x29dfb4u;
    // NOP
    ctx->pc = 0x29dfb8u;
}
