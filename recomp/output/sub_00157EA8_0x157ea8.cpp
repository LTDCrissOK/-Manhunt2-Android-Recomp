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

// Function: sub_00157EA8
// Address: 0x157ea8 - 0x157f38
void sub_00157EA8_0x157ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157EA8_0x157ea8");
#endif

    switch (ctx->pc) {
        case 0x157ee0u: goto label_157ee0;
        case 0x157ef8u: goto label_157ef8;
        case 0x157f14u: goto label_157f14;
        default: break;
    }

    ctx->pc = 0x157ea8u;

    // 0x157ea8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x157ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x157eac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x157eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x157eb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x157eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x157eb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x157eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157eb8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x157eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x157ebc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x157ebcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ec0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x157ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x157ec4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x157ec4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ec8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x157ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x157ecc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x157eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ed0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x157ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x157ed4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x157ed4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ed8: 0xc04f750  jal         func_13DD40
    ctx->pc = 0x157ED8u;
    SET_GPR_U32(ctx, 31, 0x157EE0u);
    ctx->pc = 0x157EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157ED8u;
    // 0x157edc: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x157ED8u, 0x157EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157EE0u;
label_157ee0:
    // 0x157ee0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x157ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ee4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x157ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x157ee8: 0x50a2000b  beql        $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x157EE8u;
    {
        const bool branch_taken_0x157ee8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x157ee8) {
            ctx->pc = 0x157EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157EE8u;
            // 0x157eec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157F18u;
            goto label_157f18;
        }
    }
    ctx->pc = 0x157EF0u;
    // 0x157ef0: 0xc04f130  jal         func_13C4C0
    ctx->pc = 0x157EF0u;
    SET_GPR_U32(ctx, 31, 0x157EF8u);
    ctx->pc = 0x157EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157EF0u;
    // 0x157ef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4C0u, 0x157EF0u, 0x157EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157EF8u;
label_157ef8:
    // 0x157ef8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157EF8u;
    {
        const bool branch_taken_0x157ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157EF8u;
        // 0x157efc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ef8) {
            ctx->pc = 0x157F14u;
            goto label_157f14;
        }
    }
    ctx->pc = 0x157F00u;
    // 0x157f00: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x157f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157f04: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x157f04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157f08: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x157f08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157f0c: 0xc04d7c6  jal         func_135F18
    ctx->pc = 0x157F0Cu;
    SET_GPR_U32(ctx, 31, 0x157F14u);
    ctx->pc = 0x157F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157F0Cu;
    // 0x157f10: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F18u, 0x157F0Cu, 0x157F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F14u;
label_157f14:
    // 0x157f14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x157f14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_157f18:
    // 0x157f18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x157f18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x157f1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x157f1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157f20: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x157f20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x157f24: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x157f24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x157f28: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x157f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x157f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x157F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F2Cu;
        // 0x157f30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157F34u;
    // 0x157f34: 0x0  nop
    ctx->pc = 0x157f34u;
    // NOP
    ctx->pc = 0x157f38u;
}
