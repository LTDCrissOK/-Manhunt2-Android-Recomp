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

// Function: sub_002974A8
// Address: 0x2974a8 - 0x297528
void sub_002974A8_0x2974a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002974A8_0x2974a8");
#endif

    switch (ctx->pc) {
        case 0x2974bcu: goto label_2974bc;
        case 0x2974ccu: goto label_2974cc;
        case 0x297514u: goto label_297514;
        default: break;
    }

    ctx->pc = 0x2974a8u;

    // 0x2974a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2974a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2974ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2974acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2974b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2974b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2974b4: 0xc0a1f58  jal         func_287D60
    ctx->pc = 0x2974B4u;
    SET_GPR_U32(ctx, 31, 0x2974BCu);
    ctx->pc = 0x2974B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2974B4u;
    // 0x2974b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287D60u, 0x2974B4u, 0x2974BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2974BCu;
label_2974bc:
    // 0x2974bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2974BCu;
    {
        const bool branch_taken_0x2974bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2974C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2974BCu;
        // 0x2974c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2974bc) {
            ctx->pc = 0x2974CCu;
            goto label_2974cc;
        }
    }
    ctx->pc = 0x2974C4u;
    // 0x2974c4: 0xc0a5d52  jal         func_297548
    ctx->pc = 0x2974C4u;
    SET_GPR_U32(ctx, 31, 0x2974CCu);
    ctx->pc = 0x2974C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2974C4u;
    // 0x2974c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297548u, 0x2974C4u, 0x2974CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2974CCu;
label_2974cc:
    // 0x2974cc: 0x92020080  lbu         $v0, 0x80($s0)
    ctx->pc = 0x2974ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2974d0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2974D0u;
    {
        const bool branch_taken_0x2974d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2974D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2974D0u;
        // 0x2974d4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2974d0) {
            ctx->pc = 0x297518u;
            goto label_297518;
        }
    }
    ctx->pc = 0x2974D8u;
    // 0x2974d8: 0x8c43aa88  lw          $v1, -0x5578($v0)
    ctx->pc = 0x2974d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945416)));
    // 0x2974dc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2974DCu;
    {
        const bool branch_taken_0x2974dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2974E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2974DCu;
        // 0x2974e0: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2974dc) {
            ctx->pc = 0x2974F8u;
            goto label_2974f8;
        }
    }
    ctx->pc = 0x2974E4u;
    // 0x2974e4: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x2974e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x2974e8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2974e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2974ec: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2974ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2974f0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2974F0u;
    {
        const bool branch_taken_0x2974f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2974f0) {
            ctx->pc = 0x2974F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2974F0u;
            // 0x2974f4: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297500u;
            goto label_297500;
        }
    }
    ctx->pc = 0x2974F8u;
label_2974f8:
    // 0x2974f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2974F8u;
    {
        const bool branch_taken_0x2974f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2974FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2974F8u;
        // 0x2974fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2974f8) {
            ctx->pc = 0x297504u;
            goto label_297504;
        }
    }
    ctx->pc = 0x297500u;
label_297500:
    // 0x297500: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x297500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_297504:
    // 0x297504: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x297504u;
    {
        const bool branch_taken_0x297504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x297504) {
            ctx->pc = 0x297508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297504u;
            // 0x297508: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29751Cu;
            goto label_29751c;
        }
    }
    ctx->pc = 0x29750Cu;
    // 0x29750c: 0xc0c6762  jal         func_319D88
    ctx->pc = 0x29750Cu;
    SET_GPR_U32(ctx, 31, 0x297514u);
    ctx->pc = 0x319D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319D88u, 0x29750Cu, 0x297514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297514u;
label_297514:
    // 0x297514: 0xa2000080  sb          $zero, 0x80($s0)
    ctx->pc = 0x297514u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 0));
label_297518:
    // 0x297518: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x297518u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29751c:
    // 0x29751c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29751cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x297520: 0x3e00008  jr          $ra
    ctx->pc = 0x297520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297520u;
        // 0x297524: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297528u;
}
