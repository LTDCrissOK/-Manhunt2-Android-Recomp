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

// Function: sub_0029DFB8
// Address: 0x29dfb8 - 0x29e0b8
void sub_0029DFB8_0x29dfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DFB8_0x29dfb8");
#endif

    switch (ctx->pc) {
        case 0x29e010u: goto label_29e010;
        case 0x29e054u: goto label_29e054;
        case 0x29e090u: goto label_29e090;
        default: break;
    }

    ctx->pc = 0x29dfb8u;

    // 0x29dfb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29dfb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29dfbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29dfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29dfc0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29dfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x29dfc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29dfc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dfc8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29dfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x29dfcc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x29dfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x29dfd0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x29dfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x29dfd4: 0x24140005  addiu       $s4, $zero, 0x5
    ctx->pc = 0x29dfd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29dfd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29dfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29dfdc: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x29dfdcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29dfe0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29dfe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29dfe4: 0x3c15004a  lui         $s5, 0x4A
    ctx->pc = 0x29dfe4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)74 << 16));
    // 0x29dfe8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29dfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x29dfec: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x29dfecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x29dff0: 0x8e030208  lw          $v1, 0x208($s0)
    ctx->pc = 0x29dff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x29dff4: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x29dff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x29dff8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x29dff8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29dffc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29dffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29e000: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29e000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29e004: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x29e004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x29e008: 0x8c530014  lw          $s3, 0x14($v0)
    ctx->pc = 0x29e008u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x29e00c: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x29e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_29e010:
    // 0x29e010: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29e010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29e014: 0x14540002  bne         $v0, $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x29E014u;
    {
        const bool branch_taken_0x29e014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x29E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E014u;
        // 0x29e018: 0xae02020c  sw          $v0, 0x20C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e014) {
            ctx->pc = 0x29E020u;
            goto label_29e020;
        }
    }
    ctx->pc = 0x29E01Cu;
    // 0x29e01c: 0xae00020c  sw          $zero, 0x20C($s0)
    ctx->pc = 0x29e01cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 0));
label_29e020:
    // 0x29e020: 0x8e030208  lw          $v1, 0x208($s0)
    ctx->pc = 0x29e020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x29e024: 0x24120014  addiu       $s2, $zero, 0x14
    ctx->pc = 0x29e024u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x29e028: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x29e028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x29e02c: 0x26110014  addiu       $s1, $s0, 0x14
    ctx->pc = 0x29e02cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x29e030: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x29e030u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29e034: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29e034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29e038: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29e038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29e03c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x29e03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29e040: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x29e040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29e044: 0x5080fff2  beql        $a0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x29E044u;
    {
        const bool branch_taken_0x29e044 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e044) {
            ctx->pc = 0x29E048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E044u;
            // 0x29e048: 0x8e02020c  lw          $v0, 0x20C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e010;
        }
    }
    ctx->pc = 0x29E04Cu;
    // 0x29e04c: 0xc0a5b3c  jal         func_296CF0
    ctx->pc = 0x29E04Cu;
    SET_GPR_U32(ctx, 31, 0x29E054u);
    ctx->pc = 0x296CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CF0u, 0x29E04Cu, 0x29E054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E054u;
label_29e054:
    // 0x29e054: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x29E054u;
    {
        const bool branch_taken_0x29e054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E054u;
        // 0x29e058: 0x8e02020c  lw          $v0, 0x20C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e054) {
            ctx->pc = 0x29E010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e010;
        }
    }
    ctx->pc = 0x29E05Cu;
    // 0x29e05c: 0x8e030208  lw          $v1, 0x208($s0)
    ctx->pc = 0x29e05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x29e060: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x29e060u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29e064: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29e064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29e068: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29e068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29e06c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x29e06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29e070: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29e070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29e074: 0x10730006  beq         $v1, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x29E074u;
    {
        const bool branch_taken_0x29e074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x29E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E074u;
        // 0x29e078: 0x26a49b10  addiu       $a0, $s5, -0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e074) {
            ctx->pc = 0x29E090u;
            goto label_29e090;
        }
    }
    ctx->pc = 0x29E07Cu;
    // 0x29e07c: 0xa2160210  sb          $s6, 0x210($s0)
    ctx->pc = 0x29e07cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 528), (uint8_t)GPR_U32(ctx, 22));
    // 0x29e080: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x29e080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x29e084: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29e084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29e088: 0xc07f540  jal         func_1FD500
    ctx->pc = 0x29E088u;
    SET_GPR_U32(ctx, 31, 0x29E090u);
    ctx->pc = 0x29E08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E088u;
    // 0x29e08c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x29E088u, 0x29E090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E090u;
label_29e090:
    // 0x29e090: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29e090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e094: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29e094u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29e098: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29e098u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e09c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29e09cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e0a0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29e0a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e0a4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29e0a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29e0a8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x29e0a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29e0ac: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x29e0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x29E0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E0B0u;
        // 0x29e0b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E0B8u;
}
