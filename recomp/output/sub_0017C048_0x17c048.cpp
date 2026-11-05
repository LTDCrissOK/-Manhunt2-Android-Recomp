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

// Function: sub_0017C048
// Address: 0x17c048 - 0x17c0c0
void sub_0017C048_0x17c048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C048_0x17c048");
#endif

    switch (ctx->pc) {
        case 0x17c08cu: goto label_17c08c;
        case 0x17c098u: goto label_17c098;
        case 0x17c0a8u: goto label_17c0a8;
        default: break;
    }

    ctx->pc = 0x17c048u;

    // 0x17c048: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17c048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17c04c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17c04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17c050: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x17c050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17c054: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17c054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c058: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17c058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c05c: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17C05Cu;
    {
        const bool branch_taken_0x17c05c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x17C060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C05Cu;
        // 0x17c060: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c05c) {
            ctx->pc = 0x17C070u;
            goto label_17c070;
        }
    }
    ctx->pc = 0x17C064u;
    // 0x17c064: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x17c064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x17c068: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x17C068u;
    {
        const bool branch_taken_0x17c068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C068u;
        // 0x17c06c: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c068) {
            ctx->pc = 0x17C0A8u;
            goto label_17c0a8;
        }
    }
    ctx->pc = 0x17C070u;
label_17c070:
    // 0x17c070: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17c070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c074: 0xa2060034  sb          $a2, 0x34($s0)
    ctx->pc = 0x17c074u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 6));
    // 0x17c078: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x17c078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x17c07c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x17C07Cu;
    {
        const bool branch_taken_0x17c07c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C07Cu;
        // 0x17c080: 0xae000038  sw          $zero, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c07c) {
            ctx->pc = 0x17C0A8u;
            goto label_17c0a8;
        }
    }
    ctx->pc = 0x17C084u;
    // 0x17c084: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x17C084u;
    SET_GPR_U32(ctx, 31, 0x17C08Cu);
    ctx->pc = 0x17C088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C084u;
    // 0x17c088: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x17C084u, 0x17C08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C08Cu;
label_17c08c:
    // 0x17c08c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17c08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c090: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x17C090u;
    SET_GPR_U32(ctx, 31, 0x17C098u);
    ctx->pc = 0x17C094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C090u;
    // 0x17c094: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x17C090u, 0x17C098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C098u;
label_17c098:
    // 0x17c098: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x17c098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x17c09c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17c09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c0a0: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x17C0A0u;
    SET_GPR_U32(ctx, 31, 0x17C0A8u);
    ctx->pc = 0x17C0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C0A0u;
    // 0x17c0a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x17C0A0u, 0x17C0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C0A8u;
label_17c0a8:
    // 0x17c0a8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17c0a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c0ac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x17c0acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17c0b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17c0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c0b4: 0x3e00008  jr          $ra
    ctx->pc = 0x17C0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C0B4u;
        // 0x17c0b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C0B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C0BCu;
    // 0x17c0bc: 0x0  nop
    ctx->pc = 0x17c0bcu;
    // NOP
    ctx->pc = 0x17c0c0u;
}
