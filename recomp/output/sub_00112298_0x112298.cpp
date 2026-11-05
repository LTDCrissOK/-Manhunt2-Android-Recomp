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

// Function: sub_00112298
// Address: 0x112298 - 0x112320
void sub_00112298_0x112298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112298_0x112298");
#endif

    switch (ctx->pc) {
        case 0x1122e0u: goto label_1122e0;
        case 0x1122ecu: goto label_1122ec;
        case 0x1122fcu: goto label_1122fc;
        case 0x11230cu: goto label_11230c;
        default: break;
    }

    ctx->pc = 0x112298u;

    // 0x112298: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x112298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11229c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x11229cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1122a0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1122a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1122a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1122a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1122a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1122a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1122ac: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x1122acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x1122b0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1122B0u;
    {
        const bool branch_taken_0x1122b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1122B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1122B0u;
        // 0x1122b4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1122b0) {
            ctx->pc = 0x112310u;
            goto label_112310;
        }
    }
    ctx->pc = 0x1122B8u;
    // 0x1122b8: 0x50a00016  beql        $a1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1122B8u;
    {
        const bool branch_taken_0x1122b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1122b8) {
            ctx->pc = 0x1122BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1122B8u;
            // 0x1122bc: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112314u;
            goto label_112314;
        }
    }
    ctx->pc = 0x1122C0u;
    // 0x1122c0: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x1122c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x1122c4: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1122C4u;
    {
        const bool branch_taken_0x1122c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1122c4) {
            ctx->pc = 0x1122C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1122C4u;
            // 0x1122c8: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112314u;
            goto label_112314;
        }
    }
    ctx->pc = 0x1122CCu;
    // 0x1122cc: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x1122ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x1122d0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1122D0u;
    {
        const bool branch_taken_0x1122d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1122d0) {
            ctx->pc = 0x112304u;
            goto label_112304;
        }
    }
    ctx->pc = 0x1122D8u;
    // 0x1122d8: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x1122D8u;
    SET_GPR_U32(ctx, 31, 0x1122E0u);
    ctx->pc = 0x1122DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1122D8u;
    // 0x1122dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x1122D8u, 0x1122E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1122E0u;
label_1122e0:
    // 0x1122e0: 0x8e250118  lw          $a1, 0x118($s1)
    ctx->pc = 0x1122e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x1122e4: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x1122E4u;
    SET_GPR_U32(ctx, 31, 0x1122ECu);
    ctx->pc = 0x1122E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1122E4u;
    // 0x1122e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x1122E4u, 0x1122ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1122ECu;
label_1122ec:
    // 0x1122ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1122ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1122f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1122f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1122f4: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x1122F4u;
    SET_GPR_U32(ctx, 31, 0x1122FCu);
    ctx->pc = 0x1122F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1122F4u;
    // 0x1122f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x1122F4u, 0x1122FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1122FCu;
label_1122fc:
    // 0x1122fc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1122FCu;
    {
        const bool branch_taken_0x1122fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x112300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1122FCu;
        // 0x112300: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1122fc) {
            ctx->pc = 0x112310u;
            goto label_112310;
        }
    }
    ctx->pc = 0x112304u;
label_112304:
    // 0x112304: 0xc044c38  jal         func_1130E0
    ctx->pc = 0x112304u;
    SET_GPR_U32(ctx, 31, 0x11230Cu);
    ctx->pc = 0x112308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112304u;
    // 0x112308: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1130E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1130E0u, 0x112304u, 0x11230Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11230Cu;
label_11230c:
    // 0x11230c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11230cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_112310:
    // 0x112310: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x112310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_112314:
    // 0x112314: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x112314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112318: 0x3e00008  jr          $ra
    ctx->pc = 0x112318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112318u;
        // 0x11231c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112320u;
}
