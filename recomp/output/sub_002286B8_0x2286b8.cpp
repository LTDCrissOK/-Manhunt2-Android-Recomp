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

// Function: sub_002286B8
// Address: 0x2286b8 - 0x228770
void sub_002286B8_0x2286b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002286B8_0x2286b8");
#endif

    switch (ctx->pc) {
        case 0x228730u: goto label_228730;
        case 0x228740u: goto label_228740;
        default: break;
    }

    ctx->pc = 0x2286b8u;

    // 0x2286b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2286b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2286bc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2286bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2286c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2286c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2286c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2286c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2286c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2286c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2286cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2286ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2286d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2286d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2286d4: 0x8c62013c  lw          $v0, 0x13C($v1)
    ctx->pc = 0x2286d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
    // 0x2286d8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2286D8u;
    {
        const bool branch_taken_0x2286d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2286DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2286D8u;
        // 0x2286dc: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2286d8) {
            ctx->pc = 0x228700u;
            goto label_228700;
        }
    }
    ctx->pc = 0x2286E0u;
    // 0x2286e0: 0x24640344  addiu       $a0, $v1, 0x344
    ctx->pc = 0x2286e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 836));
    // 0x2286e4: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x2286e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2286e8: 0x8c65033c  lw          $a1, 0x33C($v1)
    ctx->pc = 0x2286e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 828)));
    // 0x2286ec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2286ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2286f0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2286f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2286f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2286f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2286f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2286F8u;
    {
        const bool branch_taken_0x2286f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2286FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2286F8u;
        // 0x2286fc: 0x8c620050  lw          $v0, 0x50($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2286f8) {
            ctx->pc = 0x22871Cu;
            goto label_22871c;
        }
    }
    ctx->pc = 0x228700u;
label_228700:
    // 0x228700: 0x24640344  addiu       $a0, $v1, 0x344
    ctx->pc = 0x228700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 836));
    // 0x228704: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x228704u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x228708: 0x8c650340  lw          $a1, 0x340($v1)
    ctx->pc = 0x228708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x22870c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22870cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x228710: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x228710u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228714: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x228714u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228718: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x228718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_22871c:
    // 0x22871c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22871cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x228720: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x228720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x228724: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x228724u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x228728: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x228728u;
    SET_GPR_U32(ctx, 31, 0x228730u);
    ctx->pc = 0x22872Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228728u;
    // 0x22872c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x228728u, 0x228730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228730u;
label_228730:
    // 0x228730: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x228730u;
    {
        const bool branch_taken_0x228730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228730) {
            ctx->pc = 0x228734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228730u;
            // 0x228734: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228744u;
            goto label_228744;
        }
    }
    ctx->pc = 0x228738u;
    // 0x228738: 0xc0c4900  jal         func_312400
    ctx->pc = 0x228738u;
    SET_GPR_U32(ctx, 31, 0x228740u);
    ctx->pc = 0x22873Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228738u;
    // 0x22873c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x228738u, 0x228740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228740u;
label_228740:
    // 0x228740: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x228740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_228744:
    // 0x228744: 0x7a0200b0  lq          $v0, 0xB0($s0)
    ctx->pc = 0x228744u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x228748: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x228748u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x22874c: 0x2531821  addu        $v1, $s2, $s3
    ctx->pc = 0x22874cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x228750: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x228750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228754: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x228754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x228758: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x228758u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22875c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22875cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228760: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x228760u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x228764: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x228764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228768: 0x3e00008  jr          $ra
    ctx->pc = 0x228768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228768u;
        // 0x22876c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228770u;
}
