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

// Function: sub_00369448
// Address: 0x369448 - 0x369530
void sub_00369448_0x369448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369448_0x369448");
#endif

    switch (ctx->pc) {
        case 0x36947cu: goto label_36947c;
        case 0x369488u: goto label_369488;
        case 0x3694b8u: goto label_3694b8;
        case 0x3694d0u: goto label_3694d0;
        case 0x3694e4u: goto label_3694e4;
        case 0x3694f4u: goto label_3694f4;
        default: break;
    }

    ctx->pc = 0x369448u;

    // 0x369448: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x369448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36944c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36944cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x369450: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x369450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x369454: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x369454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369458: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x369458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36945c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x36945cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369460: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x369460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x369464: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x369464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x369468: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x369468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x36946c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x36946Cu;
    {
        const bool branch_taken_0x36946c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x369470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36946Cu;
        // 0x369470: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36946c) {
            ctx->pc = 0x36947Cu;
            goto label_36947c;
        }
    }
    ctx->pc = 0x369474u;
    // 0x369474: 0xc0da452  jal         func_369148
    ctx->pc = 0x369474u;
    SET_GPR_U32(ctx, 31, 0x36947Cu);
    ctx->pc = 0x369148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369148u, 0x369474u, 0x36947Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36947Cu;
label_36947c:
    // 0x36947c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36947cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x369480: 0xc0dd1d4  jal         func_374750
    ctx->pc = 0x369480u;
    SET_GPR_U32(ctx, 31, 0x369488u);
    ctx->pc = 0x369484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369480u;
    // 0x369484: 0x26300050  addiu       $s0, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374750u, 0x369480u, 0x369488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369488u;
label_369488:
    // 0x369488: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x369488u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36948c: 0xde220010  ld          $v0, 0x10($s1)
    ctx->pc = 0x36948cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x369490: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x369490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x369494: 0x9623001a  lhu         $v1, 0x1A($s1)
    ctx->pc = 0x369494u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x369498: 0x21338  dsll        $v0, $v0, 12
    ctx->pc = 0x369498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 12);
    // 0x36949c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x36949cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3694a0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3694a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3694a4: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x3694a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3694a8: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x3694a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3694ac: 0x12120013  beq         $s0, $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x3694ACu;
    {
        const bool branch_taken_0x3694ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x3694B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3694ACu;
        // 0x3694b0: 0x223a021  addu        $s4, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3694ac) {
            ctx->pc = 0x3694FCu;
            goto label_3694fc;
        }
    }
    ctx->pc = 0x3694B4u;
    // 0x3694b4: 0x96020022  lhu         $v0, 0x22($s0)
    ctx->pc = 0x3694b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
label_3694b8:
    // 0x3694b8: 0x5053000b  beql        $v0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x3694B8u;
    {
        const bool branch_taken_0x3694b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x3694b8) {
            ctx->pc = 0x3694BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3694B8u;
            // 0x3694bc: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3694E8u;
            goto label_3694e8;
        }
    }
    ctx->pc = 0x3694C0u;
    // 0x3694c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3694c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3694c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3694c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3694c8: 0xc0c5492  jal         func_315248
    ctx->pc = 0x3694C8u;
    SET_GPR_U32(ctx, 31, 0x3694D0u);
    ctx->pc = 0x3694CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3694C8u;
    // 0x3694cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315248u, 0x3694C8u, 0x3694D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3694D0u;
label_3694d0:
    // 0x3694d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3694d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3694d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3694d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3694d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3694d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3694dc: 0xc0da46c  jal         func_3691B0
    ctx->pc = 0x3694DCu;
    SET_GPR_U32(ctx, 31, 0x3694E4u);
    ctx->pc = 0x3694E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3694DCu;
    // 0x3694e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3691B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3691B0u, 0x3694DCu, 0x3694E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3694E4u;
label_3694e4:
    // 0x3694e4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x3694e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3694e8:
    // 0x3694e8: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x3694e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3694ec: 0xc0dd8e8  jal         func_3763A0
    ctx->pc = 0x3694ECu;
    SET_GPR_U32(ctx, 31, 0x3694F4u);
    ctx->pc = 0x3694F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3694ECu;
    // 0x3694f0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3763A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3763A0u, 0x3694ECu, 0x3694F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3694F4u;
label_3694f4:
    // 0x3694f4: 0x5612fff0  bnel        $s0, $s2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3694F4u;
    {
        const bool branch_taken_0x3694f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x3694f4) {
            ctx->pc = 0x3694F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3694F4u;
            // 0x3694f8: 0x96020022  lhu         $v0, 0x22($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3694B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3694b8;
        }
    }
    ctx->pc = 0x3694FCu;
label_3694fc:
    // 0x3694fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3694fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369500: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x369500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369504: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x369504u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x369508: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x369508u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36950c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x36950cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x369510: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x369510u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x369514: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x369514u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x369518: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x369518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36951c: 0x3e00008  jr          $ra
    ctx->pc = 0x36951Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36951Cu;
        // 0x369520: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36951Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369524u;
    // 0x369524: 0x0  nop
    ctx->pc = 0x369524u;
    // NOP
    // 0x369528: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x369528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x36952c: 0x0  nop
    ctx->pc = 0x36952cu;
    // NOP
    ctx->pc = 0x369530u;
}
