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

// Function: sub_003EE918
// Address: 0x3ee918 - 0x3ee9b0
void sub_003EE918_0x3ee918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EE918_0x3ee918");
#endif

    switch (ctx->pc) {
        case 0x3ee9a4u: goto label_3ee9a4;
        default: break;
    }

    ctx->pc = 0x3ee918u;

    // 0x3ee918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ee918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ee91c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3ee91cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee920: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ee920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ee924: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3ee924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee928: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3ee928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3ee92c: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EE92Cu;
    {
        const bool branch_taken_0x3ee92c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ee92c) {
            ctx->pc = 0x3EE930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EE92Cu;
            // 0x3ee930: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EE940u;
            goto label_3ee940;
        }
    }
    ctx->pc = 0x3EE934u;
    // 0x3ee934: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3ee934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3ee938: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x3ee938u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x3ee93c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3ee93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3ee940:
    // 0x3ee940: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EE940u;
    {
        const bool branch_taken_0x3ee940 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ee940) {
            ctx->pc = 0x3EE944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EE940u;
            // 0x3ee944: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EE954u;
            goto label_3ee954;
        }
    }
    ctx->pc = 0x3EE948u;
    // 0x3ee948: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3ee948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3ee94c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3ee94cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x3ee950: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3ee950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3ee954:
    // 0x3ee954: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EE954u;
    {
        const bool branch_taken_0x3ee954 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ee954) {
            ctx->pc = 0x3EE958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EE954u;
            // 0x3ee958: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EE968u;
            goto label_3ee968;
        }
    }
    ctx->pc = 0x3EE95Cu;
    // 0x3ee95c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3ee95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3ee960: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3ee960u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3ee964: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x3ee964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3ee968:
    // 0x3ee968: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EE968u;
    {
        const bool branch_taken_0x3ee968 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ee968) {
            ctx->pc = 0x3EE96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EE968u;
            // 0x3ee96c: 0x8c850008  lw          $a1, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EE97Cu;
            goto label_3ee97c;
        }
    }
    ctx->pc = 0x3EE970u;
    // 0x3ee970: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3ee970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3ee974: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x3ee974u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x3ee978: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x3ee978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3ee97c:
    // 0x3ee97c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EE97Cu;
    {
        const bool branch_taken_0x3ee97c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ee97c) {
            ctx->pc = 0x3EE980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EE97Cu;
            // 0x3ee980: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EE990u;
            goto label_3ee990;
        }
    }
    ctx->pc = 0x3EE984u;
    // 0x3ee984: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3ee984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3ee988: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3ee988u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3ee98c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3ee98cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3ee990:
    // 0x3ee990: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ee990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ee994: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EE994u;
    {
        const bool branch_taken_0x3ee994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE994u;
        // 0x3ee998: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee994) {
            ctx->pc = 0x3EE9A4u;
            goto label_3ee9a4;
        }
    }
    ctx->pc = 0x3EE99Cu;
    // 0x3ee99c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3EE99Cu;
    SET_GPR_U32(ctx, 31, 0x3EE9A4u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EE99Cu, 0x3EE9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE9A4u;
label_3ee9a4:
    // 0x3ee9a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ee9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ee9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3EE9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE9A8u;
        // 0x3ee9ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EE9B0u;
}
