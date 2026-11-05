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

// Function: sub_002B5968
// Address: 0x2b5968 - 0x2b5a10
void sub_002B5968_0x2b5968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5968_0x2b5968");
#endif

    switch (ctx->pc) {
        case 0x2b597cu: goto label_2b597c;
        case 0x2b59fcu: goto label_2b59fc;
        default: break;
    }

    ctx->pc = 0x2b5968u;

    // 0x2b5968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b5968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b596c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b596cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b5970: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b5970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b5974: 0xc0a2460  jal         func_289180
    ctx->pc = 0x2B5974u;
    SET_GPR_U32(ctx, 31, 0x2B597Cu);
    ctx->pc = 0x2B5978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5974u;
    // 0x2b5978: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289180u, 0x2B5974u, 0x2B597Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B597Cu;
label_2b597c:
    // 0x2b597c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B597Cu;
    {
        const bool branch_taken_0x2b597c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B597Cu;
        // 0x2b5980: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b597c) {
            ctx->pc = 0x2B5994u;
            goto label_2b5994;
        }
    }
    ctx->pc = 0x2B5984u;
    // 0x2b5984: 0x8c622b38  lw          $v0, 0x2B38($v1)
    ctx->pc = 0x2b5984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11064)));
    // 0x2b5988: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2b5988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2b598c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2B598Cu;
    {
        const bool branch_taken_0x2b598c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B598Cu;
        // 0x2b5990: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b598c) {
            ctx->pc = 0x2B5A00u;
            goto label_2b5a00;
        }
    }
    ctx->pc = 0x2B5994u;
label_2b5994:
    // 0x2b5994: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b5994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5998: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2b5998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2b599c: 0xae04590c  sw          $a0, 0x590C($s0)
    ctx->pc = 0x2b599cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22796), GPR_U32(ctx, 4));
    // 0x2b59a0: 0x8c62aa88  lw          $v0, -0x5578($v1)
    ctx->pc = 0x2b59a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAA88u));
    // 0x2b59a4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B59A4u;
    {
        const bool branch_taken_0x2b59a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B59A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B59A4u;
        // 0x2b59a8: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b59a4) {
            ctx->pc = 0x2B59D4u;
            goto label_2b59d4;
        }
    }
    ctx->pc = 0x2B59ACu;
    // 0x2b59ac: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x2b59acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x2b59b0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2b59b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2b59b4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2b59b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2b59b8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B59B8u;
    {
        const bool branch_taken_0x2b59b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B59BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B59B8u;
        // 0x2b59bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b59b8) {
            ctx->pc = 0x2B59D8u;
            goto label_2b59d8;
        }
    }
    ctx->pc = 0x2B59C0u;
    // 0x2b59c0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2b59c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2b59c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b59c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b59c8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2b59c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2b59cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B59CCu;
    {
        const bool branch_taken_0x2b59cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B59D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B59CCu;
        // 0x2b59d0: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b59cc) {
            ctx->pc = 0x2B59D8u;
            goto label_2b59d8;
        }
    }
    ctx->pc = 0x2B59D4u;
label_2b59d4:
    // 0x2b59d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b59d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b59d8:
    // 0x2b59d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b59d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b59dc: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B59DCu;
    {
        const bool branch_taken_0x2b59dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B59DCu;
        // 0x2b59e0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b59dc) {
            ctx->pc = 0x2B5A00u;
            goto label_2b5a00;
        }
    }
    ctx->pc = 0x2B59E4u;
    // 0x2b59e4: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x2b59e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x2b59e8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b59e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2b59ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b59ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b59f0: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x2b59f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x2b59f4: 0xc07f540  jal         func_1FD500
    ctx->pc = 0x2B59F4u;
    SET_GPR_U32(ctx, 31, 0x2B59FCu);
    ctx->pc = 0x2B59F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B59F4u;
    // 0x2b59f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x2B59F4u, 0x2B59FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B59FCu;
label_2b59fc:
    // 0x2b59fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b59fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b5a00:
    // 0x2b5a00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b5a00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5a04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b5a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5a08: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5A08u;
        // 0x2b5a0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5A10u;
}
