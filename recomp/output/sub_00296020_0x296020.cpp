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

// Function: sub_00296020
// Address: 0x296020 - 0x296090
void sub_00296020_0x296020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296020_0x296020");
#endif

    switch (ctx->pc) {
        case 0x296048u: goto label_296048;
        case 0x296054u: goto label_296054;
        default: break;
    }

    ctx->pc = 0x296020u;

    // 0x296020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x296020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x296024: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x296024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x296028: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29602c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29602cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x296030: 0x2450a8c8  addiu       $s0, $v0, -0x5738
    ctx->pc = 0x296030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944968));
    // 0x296034: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x296034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x296038: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x296038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29603c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x29603cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x296040: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x296040u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296044: 0x0  nop
    ctx->pc = 0x296044u;
    // NOP
label_296048:
    // 0x296048: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x296048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29604c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x29604Cu;
    SET_GPR_U32(ctx, 31, 0x296054u);
    ctx->pc = 0x296050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29604Cu;
    // 0x296050: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x29604Cu, 0x296054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296054u;
label_296054:
    // 0x296054: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x296054u;
    {
        const bool branch_taken_0x296054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296054u;
        // 0x296058: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296054) {
            ctx->pc = 0x296064u;
            goto label_296064;
        }
    }
    ctx->pc = 0x29605Cu;
    // 0x29605c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29605Cu;
    {
        const bool branch_taken_0x29605c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29605Cu;
        // 0x296060: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29605c) {
            ctx->pc = 0x296074u;
            goto label_296074;
        }
    }
    ctx->pc = 0x296064u;
label_296064:
    // 0x296064: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x296064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x296068: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x296068u;
    {
        const bool branch_taken_0x296068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296068u;
        // 0x29606c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296068) {
            ctx->pc = 0x296048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296048;
        }
    }
    ctx->pc = 0x296070u;
    // 0x296070: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x296070u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296074:
    // 0x296074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296078: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x296078u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29607c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29607cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296080: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x296080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296084: 0x3e00008  jr          $ra
    ctx->pc = 0x296084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296084u;
        // 0x296088: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29608Cu;
    // 0x29608c: 0x0  nop
    ctx->pc = 0x29608cu;
    // NOP
    ctx->pc = 0x296090u;
}
