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

// Function: sub_0015A040
// Address: 0x15a040 - 0x15a0d0
void sub_0015A040_0x15a040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A040_0x15a040");
#endif

    switch (ctx->pc) {
        case 0x15a078u: goto label_15a078;
        case 0x15a090u: goto label_15a090;
        case 0x15a0acu: goto label_15a0ac;
        default: break;
    }

    ctx->pc = 0x15a040u;

    // 0x15a040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15a040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15a044: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15a044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15a048: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15a048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15a04c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15a04cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a050: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x15a050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15a054: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x15a054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a058: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x15a058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x15a05c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x15a05cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a060: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x15a060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x15a064: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15a064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a068: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x15a068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x15a06c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x15a06cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a070: 0xc04f750  jal         func_13DD40
    ctx->pc = 0x15A070u;
    SET_GPR_U32(ctx, 31, 0x15A078u);
    ctx->pc = 0x15A074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A070u;
    // 0x15a074: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x15A070u, 0x15A078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A078u;
label_15a078:
    // 0x15a078: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15a078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a07c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x15a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15a080: 0x50a2000b  beql        $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15A080u;
    {
        const bool branch_taken_0x15a080 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x15a080) {
            ctx->pc = 0x15A084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A080u;
            // 0x15a084: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A0B0u;
            goto label_15a0b0;
        }
    }
    ctx->pc = 0x15A088u;
    // 0x15a088: 0xc04f130  jal         func_13C4C0
    ctx->pc = 0x15A088u;
    SET_GPR_U32(ctx, 31, 0x15A090u);
    ctx->pc = 0x15A08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A088u;
    // 0x15a08c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4C0u, 0x15A088u, 0x15A090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A090u;
label_15a090:
    // 0x15a090: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15A090u;
    {
        const bool branch_taken_0x15a090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A090u;
        // 0x15a094: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a090) {
            ctx->pc = 0x15A0ACu;
            goto label_15a0ac;
        }
    }
    ctx->pc = 0x15A098u;
    // 0x15a098: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15a098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a09c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15a09cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a0a0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x15a0a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a0a4: 0xc04d7c6  jal         func_135F18
    ctx->pc = 0x15A0A4u;
    SET_GPR_U32(ctx, 31, 0x15A0ACu);
    ctx->pc = 0x15A0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A0A4u;
    // 0x15a0a8: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F18u, 0x15A0A4u, 0x15A0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A0ACu;
label_15a0ac:
    // 0x15a0ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15a0acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15a0b0:
    // 0x15a0b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15a0b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15a0b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15a0b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a0b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x15a0b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15a0bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x15a0bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a0c0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x15a0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15a0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x15A0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A0C4u;
        // 0x15a0c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A0CCu;
    // 0x15a0cc: 0x0  nop
    ctx->pc = 0x15a0ccu;
    // NOP
    ctx->pc = 0x15a0d0u;
}
