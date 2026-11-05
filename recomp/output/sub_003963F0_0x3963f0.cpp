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

// Function: sub_003963F0
// Address: 0x3963f0 - 0x3964b8
void sub_003963F0_0x3963f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003963F0_0x3963f0");
#endif

    switch (ctx->pc) {
        case 0x39642cu: goto label_39642c;
        case 0x39644cu: goto label_39644c;
        case 0x396468u: goto label_396468;
        case 0x396480u: goto label_396480;
        case 0x396490u: goto label_396490;
        case 0x3964a0u: goto label_3964a0;
        default: break;
    }

    ctx->pc = 0x3963f0u;

    // 0x3963f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3963f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3963f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3963f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3963f8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3963f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3963fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3963fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396400: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x396400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x396404: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x396404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396408: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x396408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x39640c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39640cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396410: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x396410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x396414: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x396414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396418: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x396418u;
    {
        const bool branch_taken_0x396418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396418u;
        // 0x39641c: 0x8c520094  lw          $s2, 0x94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396418) {
            ctx->pc = 0x396438u;
            goto label_396438;
        }
    }
    ctx->pc = 0x396420u;
    // 0x396420: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x396420u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x396424: 0xc0ec0fe  jal         func_3B03F8
    ctx->pc = 0x396424u;
    SET_GPR_U32(ctx, 31, 0x39642Cu);
    ctx->pc = 0x396428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396424u;
    // 0x396428: 0x2484ae68  addiu       $a0, $a0, -0x5198 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x396424u, 0x39642Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39642Cu;
label_39642c:
    // 0x39642c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x39642Cu;
    {
        const bool branch_taken_0x39642c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39642Cu;
        // 0x396430: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39642c) {
            ctx->pc = 0x3964A4u;
            goto label_3964a4;
        }
    }
    ctx->pc = 0x396434u;
    // 0x396434: 0x0  nop
    ctx->pc = 0x396434u;
    // NOP
label_396438:
    // 0x396438: 0x8c4600b0  lw          $a2, 0xB0($v0)
    ctx->pc = 0x396438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x39643c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x39643cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x396440: 0x27a80014  addiu       $t0, $sp, 0x14
    ctx->pc = 0x396440u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x396444: 0xc0e56de  jal         func_395B78
    ctx->pc = 0x396444u;
    SET_GPR_U32(ctx, 31, 0x39644Cu);
    ctx->pc = 0x396448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396444u;
    // 0x396448: 0x27a90018  addiu       $t1, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395B78u, 0x396444u, 0x39644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39644Cu;
label_39644c:
    // 0x39644c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39644cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396450: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x396450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396454: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x396454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396458: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x396458u;
    {
        const bool branch_taken_0x396458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396458u;
        // 0x39645c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396458) {
            ctx->pc = 0x396488u;
            goto label_396488;
        }
    }
    ctx->pc = 0x396460u;
    // 0x396460: 0xc0e576a  jal         func_395DA8
    ctx->pc = 0x396460u;
    SET_GPR_U32(ctx, 31, 0x396468u);
    ctx->pc = 0x395DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395DA8u, 0x396460u, 0x396468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396468u;
label_396468:
    // 0x396468: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x396468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39646c: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x39646cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x396470: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x396470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396474: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x396474u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x396478: 0xc0e9b98  jal         func_3A6E60
    ctx->pc = 0x396478u;
    SET_GPR_U32(ctx, 31, 0x396480u);
    ctx->pc = 0x39647Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396478u;
    // 0x39647c: 0x8fa80018  lw          $t0, 0x18($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6E60u, 0x396478u, 0x396480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396480u;
label_396480:
    // 0x396480: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x396480u;
    {
        const bool branch_taken_0x396480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396480u;
        // 0x396484: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396480) {
            ctx->pc = 0x3964A4u;
            goto label_3964a4;
        }
    }
    ctx->pc = 0x396488u;
label_396488:
    // 0x396488: 0xc0ec184  jal         func_3B0610
    ctx->pc = 0x396488u;
    SET_GPR_U32(ctx, 31, 0x396490u);
    ctx->pc = 0x3B0610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0610u, 0x396488u, 0x396490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396490u;
label_396490:
    // 0x396490: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x396490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x396494: 0x2484ae98  addiu       $a0, $a0, -0x5168
    ctx->pc = 0x396494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946456));
    // 0x396498: 0xc0ec11c  jal         func_3B0470
    ctx->pc = 0x396498u;
    SET_GPR_U32(ctx, 31, 0x3964A0u);
    ctx->pc = 0x39649Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396498u;
    // 0x39649c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0470u, 0x396498u, 0x3964A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3964A0u;
label_3964a0:
    // 0x3964a0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3964a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3964a4:
    // 0x3964a4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x3964a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3964a8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3964a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3964ac: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3964acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3964b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3964B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3964B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3964B0u;
        // 0x3964b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3964B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3964B8u;
}
