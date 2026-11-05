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

// Function: sub_0015B9E0
// Address: 0x15b9e0 - 0x15ba48
void sub_0015B9E0_0x15b9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B9E0_0x15b9e0");
#endif

    switch (ctx->pc) {
        case 0x15ba04u: goto label_15ba04;
        case 0x15ba10u: goto label_15ba10;
        case 0x15ba24u: goto label_15ba24;
        case 0x15ba34u: goto label_15ba34;
        default: break;
    }

    ctx->pc = 0x15b9e0u;

    // 0x15b9e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15b9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15b9e4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x15b9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x15b9e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x15b9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x15b9ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15b9ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b9f0: 0x8e020b64  lw          $v0, 0xB64($s0)
    ctx->pc = 0x15b9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2916)));
    // 0x15b9f4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x15B9F4u;
    {
        const bool branch_taken_0x15b9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9F4u;
        // 0x15b9f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b9f4) {
            ctx->pc = 0x15BA38u;
            goto label_15ba38;
        }
    }
    ctx->pc = 0x15B9FCu;
    // 0x15b9fc: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x15B9FCu;
    SET_GPR_U32(ctx, 31, 0x15BA04u);
    ctx->pc = 0x15BA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B9FCu;
    // 0x15ba00: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x15B9FCu, 0x15BA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BA04u;
label_15ba04:
    // 0x15ba04: 0x8e050b64  lw          $a1, 0xB64($s0)
    ctx->pc = 0x15ba04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2916)));
    // 0x15ba08: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x15BA08u;
    SET_GPR_U32(ctx, 31, 0x15BA10u);
    ctx->pc = 0x15BA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BA08u;
    // 0x15ba0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x15BA08u, 0x15BA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BA10u;
label_15ba10:
    // 0x15ba10: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15BA10u;
    {
        const bool branch_taken_0x15ba10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA10u;
        // 0x15ba14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba10) {
            ctx->pc = 0x15BA2Cu;
            goto label_15ba2c;
        }
    }
    ctx->pc = 0x15BA18u;
    // 0x15ba18: 0xae000b64  sw          $zero, 0xB64($s0)
    ctx->pc = 0x15ba18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2916), GPR_U32(ctx, 0));
    // 0x15ba1c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x15BA1Cu;
    SET_GPR_U32(ctx, 31, 0x15BA24u);
    ctx->pc = 0x15BA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BA1Cu;
    // 0x15ba20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15BA1Cu, 0x15BA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BA24u;
label_15ba24:
    // 0x15ba24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15BA24u;
    {
        const bool branch_taken_0x15ba24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA24u;
        // 0x15ba28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba24) {
            ctx->pc = 0x15BA38u;
            goto label_15ba38;
        }
    }
    ctx->pc = 0x15BA2Cu;
label_15ba2c:
    // 0x15ba2c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x15BA2Cu;
    SET_GPR_U32(ctx, 31, 0x15BA34u);
    ctx->pc = 0x15BA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BA2Cu;
    // 0x15ba30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15BA2Cu, 0x15BA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BA34u;
label_15ba34:
    // 0x15ba34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ba38:
    // 0x15ba38: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x15ba38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ba3c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x15ba3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15ba40: 0x3e00008  jr          $ra
    ctx->pc = 0x15BA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA40u;
        // 0x15ba44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BA48u;
}
