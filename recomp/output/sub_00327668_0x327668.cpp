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

// Function: sub_00327668
// Address: 0x327668 - 0x327708
void sub_00327668_0x327668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327668_0x327668");
#endif

    switch (ctx->pc) {
        case 0x3276a0u: goto label_3276a0;
        case 0x3276b0u: goto label_3276b0;
        case 0x3276ccu: goto label_3276cc;
        case 0x3276d4u: goto label_3276d4;
        default: break;
    }

    ctx->pc = 0x327668u;

    // 0x327668: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x327668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32766c: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x32766cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
    // 0x327670: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x327670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x327674: 0x24846e50  addiu       $a0, $a0, 0x6E50
    ctx->pc = 0x327674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28240));
    // 0x327678: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32767c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32767cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327680: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x327680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x327684: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x327684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x327688: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x327688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x32768c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32768cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327690: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x327690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x327694: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x327694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x327698: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x327698u;
    SET_GPR_U32(ctx, 31, 0x3276A0u);
    ctx->pc = 0x32769Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327698u;
    // 0x32769c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x327698u, 0x3276A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3276A0u;
label_3276a0:
    // 0x3276a0: 0x3c140047  lui         $s4, 0x47
    ctx->pc = 0x3276a0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)71 << 16));
    // 0x3276a4: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x3276a4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x3276a8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3276a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3276ac: 0x8e22bf38  lw          $v0, -0x40C8($s1)
    ctx->pc = 0x3276acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBF38u));
label_3276b0:
    // 0x3276b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3276b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3276b4: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x3276b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x3276b8: 0x26864868  addiu       $a2, $s4, 0x4868
    ctx->pc = 0x3276b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 18536));
    // 0x3276bc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3276bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3276c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3276c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3276c4: 0xc0efed0  jal         func_3BFB40
    ctx->pc = 0x3276C4u;
    SET_GPR_U32(ctx, 31, 0x3276CCu);
    ctx->pc = 0x3276C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3276C4u;
    // 0x3276c8: 0xae22bf38  sw          $v0, -0x40C8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294950712), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFB40u, 0x3276C4u, 0x3276CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3276CCu;
label_3276cc:
    // 0x3276cc: 0xc085d4e  jal         func_217538
    ctx->pc = 0x3276CCu;
    SET_GPR_U32(ctx, 31, 0x3276D4u);
    ctx->pc = 0x3276D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3276CCu;
    // 0x3276d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217538u, 0x3276CCu, 0x3276D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3276D4u;
label_3276d4:
    // 0x3276d4: 0x262800a  movz        $s0, $s3, $v0
    ctx->pc = 0x3276d4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 19));
    // 0x3276d8: 0x1200fff5  beqz        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3276D8u;
    {
        const bool branch_taken_0x3276d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3276DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3276D8u;
        // 0x3276dc: 0x8e22bf38  lw          $v0, -0x40C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3276d8) {
            ctx->pc = 0x3276B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3276b0;
        }
    }
    ctx->pc = 0x3276E0u;
    // 0x3276e0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3276e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3276e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3276e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3276e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3276e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3276ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3276ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3276f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3276f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3276f4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3276f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3276f8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3276f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3276fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3276FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3276FCu;
        // 0x327700: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3276FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327704u;
    // 0x327704: 0x0  nop
    ctx->pc = 0x327704u;
    // NOP
    ctx->pc = 0x327708u;
}
