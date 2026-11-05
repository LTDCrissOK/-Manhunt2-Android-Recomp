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

// Function: sub_001304B8
// Address: 0x1304b8 - 0x130558
void sub_001304B8_0x1304b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001304B8_0x1304b8");
#endif

    switch (ctx->pc) {
        case 0x1304f4u: goto label_1304f4;
        case 0x130500u: goto label_130500;
        case 0x130518u: goto label_130518;
        case 0x13052cu: goto label_13052c;
        case 0x130534u: goto label_130534;
        default: break;
    }

    ctx->pc = 0x1304b8u;

    // 0x1304b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1304b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1304bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1304bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1304c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1304c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1304c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1304c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1304c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1304c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1304cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1304ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1304d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1304d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1304d4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1304d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1304d8: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x1304d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
    // 0x1304dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1304DCu;
    {
        const bool branch_taken_0x1304dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1304E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1304DCu;
        // 0x1304e0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1304dc) {
            ctx->pc = 0x1304ECu;
            goto label_1304ec;
        }
    }
    ctx->pc = 0x1304E4u;
    // 0x1304e4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1304E4u;
    {
        const bool branch_taken_0x1304e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1304E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1304E4u;
        // 0x1304e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1304e4) {
            ctx->pc = 0x13053Cu;
            goto label_13053c;
        }
    }
    ctx->pc = 0x1304ECu;
label_1304ec:
    // 0x1304ec: 0xc046044  jal         func_118110
    ctx->pc = 0x1304ECu;
    SET_GPR_U32(ctx, 31, 0x1304F4u);
    ctx->pc = 0x1304F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1304ECu;
    // 0x1304f0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118110u, 0x1304ECu, 0x1304F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1304F4u;
label_1304f4:
    // 0x1304f4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1304f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1304f8: 0xc043920  jal         func_10E480
    ctx->pc = 0x1304F8u;
    SET_GPR_U32(ctx, 31, 0x130500u);
    ctx->pc = 0x1304FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1304F8u;
    // 0x1304fc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E480u, 0x1304F8u, 0x130500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130500u;
label_130500:
    // 0x130500: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x130500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130504: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x130504u;
    {
        const bool branch_taken_0x130504 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x130508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130504u;
        // 0x130508: 0x3a420001  xori        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x130504) {
            ctx->pc = 0x13053Cu;
            goto label_13053c;
        }
    }
    ctx->pc = 0x13050Cu;
    // 0x13050c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13050cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130510: 0xc04c5ca  jal         func_131728
    ctx->pc = 0x130510u;
    SET_GPR_U32(ctx, 31, 0x130518u);
    ctx->pc = 0x130514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130510u;
    // 0x130514: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131728u, 0x130510u, 0x130518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130518u;
label_130518:
    // 0x130518: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x130518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x13051c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13051cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x130520: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x130520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130524: 0xc0951ac  jal         func_2546B0
    ctx->pc = 0x130524u;
    SET_GPR_U32(ctx, 31, 0x13052Cu);
    ctx->pc = 0x130528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130524u;
    // 0x130528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2546B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2546B0u, 0x130524u, 0x13052Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13052Cu;
label_13052c:
    // 0x13052c: 0xc095216  jal         func_254858
    ctx->pc = 0x13052Cu;
    SET_GPR_U32(ctx, 31, 0x130534u);
    ctx->pc = 0x130530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13052Cu;
    // 0x130530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254858u, 0x13052Cu, 0x130534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130534u;
label_130534:
    // 0x130534: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x130534u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    // 0x130538: 0x3a420001  xori        $v0, $s2, 0x1
    ctx->pc = 0x130538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
label_13053c:
    // 0x13053c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13053cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130540: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x130540u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130544: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x130544u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130548: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x130548u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13054c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13054cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130550: 0x3e00008  jr          $ra
    ctx->pc = 0x130550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130550u;
        // 0x130554: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130558u;
}
