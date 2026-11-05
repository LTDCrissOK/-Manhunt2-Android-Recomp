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

// Function: sub_002B5A10
// Address: 0x2b5a10 - 0x2b5ab8
void sub_002B5A10_0x2b5a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5A10_0x2b5a10");
#endif

    switch (ctx->pc) {
        case 0x2b5a24u: goto label_2b5a24;
        case 0x2b5aa0u: goto label_2b5aa0;
        default: break;
    }

    ctx->pc = 0x2b5a10u;

    // 0x2b5a10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b5a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b5a14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b5a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b5a18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b5a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b5a1c: 0xc0a2460  jal         func_289180
    ctx->pc = 0x2B5A1Cu;
    SET_GPR_U32(ctx, 31, 0x2B5A24u);
    ctx->pc = 0x2B5A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5A1Cu;
    // 0x2b5a20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289180u, 0x2B5A1Cu, 0x2B5A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5A24u;
label_2b5a24:
    // 0x2b5a24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5A24u;
    {
        const bool branch_taken_0x2b5a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5A24u;
        // 0x2b5a28: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5a24) {
            ctx->pc = 0x2B5A38u;
            goto label_2b5a38;
        }
    }
    ctx->pc = 0x2B5A2Cu;
    // 0x2b5a2c: 0x8c622b38  lw          $v0, 0x2B38($v1)
    ctx->pc = 0x2b5a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11064)));
    // 0x2b5a30: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2B5A30u;
    {
        const bool branch_taken_0x2b5a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5A30u;
        // 0x2b5a34: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5a30) {
            ctx->pc = 0x2B5AA4u;
            goto label_2b5aa4;
        }
    }
    ctx->pc = 0x2B5A38u;
label_2b5a38:
    // 0x2b5a38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b5a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5a3c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2b5a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2b5a40: 0xae04590c  sw          $a0, 0x590C($s0)
    ctx->pc = 0x2b5a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22796), GPR_U32(ctx, 4));
    // 0x2b5a44: 0x8c62aa88  lw          $v0, -0x5578($v1)
    ctx->pc = 0x2b5a44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAA88u));
    // 0x2b5a48: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B5A48u;
    {
        const bool branch_taken_0x2b5a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5A48u;
        // 0x2b5a4c: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5a48) {
            ctx->pc = 0x2B5A78u;
            goto label_2b5a78;
        }
    }
    ctx->pc = 0x2B5A50u;
    // 0x2b5a50: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x2b5a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x2b5a54: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2b5a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2b5a58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b5a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b5a5c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B5A5Cu;
    {
        const bool branch_taken_0x2b5a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5A5Cu;
        // 0x2b5a60: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5a5c) {
            ctx->pc = 0x2B5A7Cu;
            goto label_2b5a7c;
        }
    }
    ctx->pc = 0x2B5A64u;
    // 0x2b5a64: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2b5a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2b5a68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b5a68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5a6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b5a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b5a70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B5A70u;
    {
        const bool branch_taken_0x2b5a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5A70u;
        // 0x2b5a74: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5a70) {
            ctx->pc = 0x2B5A7Cu;
            goto label_2b5a7c;
        }
    }
    ctx->pc = 0x2B5A78u;
label_2b5a78:
    // 0x2b5a78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b5a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b5a7c:
    // 0x2b5a7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b5a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5a80: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B5A80u;
    {
        const bool branch_taken_0x2b5a80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B5A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5A80u;
        // 0x2b5a84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5a80) {
            ctx->pc = 0x2B5AA4u;
            goto label_2b5aa4;
        }
    }
    ctx->pc = 0x2B5A88u;
    // 0x2b5a88: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x2b5a88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x2b5a8c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b5a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2b5a90: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b5a90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b5a94: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x2b5a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x2b5a98: 0xc07f540  jal         func_1FD500
    ctx->pc = 0x2B5A98u;
    SET_GPR_U32(ctx, 31, 0x2B5AA0u);
    ctx->pc = 0x2B5A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5A98u;
    // 0x2b5a9c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x2B5A98u, 0x2B5AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5AA0u;
label_2b5aa0:
    // 0x2b5aa0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b5aa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b5aa4:
    // 0x2b5aa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b5aa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5aa8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b5aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5aac: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5AACu;
        // 0x2b5ab0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5AB4u;
    // 0x2b5ab4: 0x0  nop
    ctx->pc = 0x2b5ab4u;
    // NOP
    ctx->pc = 0x2b5ab8u;
}
