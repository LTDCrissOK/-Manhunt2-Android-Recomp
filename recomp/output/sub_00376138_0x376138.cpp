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

// Function: sub_00376138
// Address: 0x376138 - 0x3761e0
void sub_00376138_0x376138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376138_0x376138");
#endif

    switch (ctx->pc) {
        case 0x376164u: goto label_376164;
        case 0x376180u: goto label_376180;
        case 0x37619cu: goto label_37619c;
        case 0x3761b8u: goto label_3761b8;
        case 0x3761d0u: goto label_3761d0;
        default: break;
    }

    ctx->pc = 0x376138u;

    // 0x376138: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x376138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37613c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37613cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x376140: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x376140u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x376144: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x376144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x376148: 0x8e02cd00  lw          $v0, -0x3300($s0)
    ctx->pc = 0x376148u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FCD00u));
    // 0x37614c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x37614cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x376150: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x376150u;
    {
        const bool branch_taken_0x376150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376150u;
        // 0x376154: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376150) {
            ctx->pc = 0x376164u;
            goto label_376164;
        }
    }
    ctx->pc = 0x376158u;
    // 0x376158: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x376158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x37615c: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x37615Cu;
    SET_GPR_U32(ctx, 31, 0x376164u);
    ctx->pc = 0x376160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37615Cu;
    // 0x376160: 0xdc45cd40  ld          $a1, -0x32C0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294954304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x37615Cu, 0x376164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376164u;
label_376164:
    // 0x376164: 0x8e02cd00  lw          $v0, -0x3300($s0)
    ctx->pc = 0x376164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954240)));
    // 0x376168: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x376168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x37616c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37616Cu;
    {
        const bool branch_taken_0x37616c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37616Cu;
        // 0x376170: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37616c) {
            ctx->pc = 0x376180u;
            goto label_376180;
        }
    }
    ctx->pc = 0x376174u;
    // 0x376174: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x376174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x376178: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x376178u;
    SET_GPR_U32(ctx, 31, 0x376180u);
    ctx->pc = 0x37617Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376178u;
    // 0x37617c: 0xdc45cd48  ld          $a1, -0x32B8($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294954312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x376178u, 0x376180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376180u;
label_376180:
    // 0x376180: 0x8e02cd00  lw          $v0, -0x3300($s0)
    ctx->pc = 0x376180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954240)));
    // 0x376184: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x376184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x376188: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x376188u;
    {
        const bool branch_taken_0x376188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376188u;
        // 0x37618c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376188) {
            ctx->pc = 0x37619Cu;
            goto label_37619c;
        }
    }
    ctx->pc = 0x376190u;
    // 0x376190: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x376190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x376194: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x376194u;
    SET_GPR_U32(ctx, 31, 0x37619Cu);
    ctx->pc = 0x376198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376194u;
    // 0x376198: 0xdc45cd50  ld          $a1, -0x32B0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294954320)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x376194u, 0x37619Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37619Cu;
label_37619c:
    // 0x37619c: 0x8e02cd00  lw          $v0, -0x3300($s0)
    ctx->pc = 0x37619cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954240)));
    // 0x3761a0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3761a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x3761a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3761A4u;
    {
        const bool branch_taken_0x3761a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3761A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3761A4u;
        // 0x3761a8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3761a4) {
            ctx->pc = 0x3761B8u;
            goto label_3761b8;
        }
    }
    ctx->pc = 0x3761ACu;
    // 0x3761ac: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x3761acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x3761b0: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x3761B0u;
    SET_GPR_U32(ctx, 31, 0x3761B8u);
    ctx->pc = 0x3761B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3761B0u;
    // 0x3761b4: 0xdc45cd58  ld          $a1, -0x32A8($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294954328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x3761B0u, 0x3761B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3761B8u;
label_3761b8:
    // 0x3761b8: 0x8e03cd00  lw          $v1, -0x3300($s0)
    ctx->pc = 0x3761b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954240)));
    // 0x3761bc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3761bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3761c0: 0x3442fe1f  ori         $v0, $v0, 0xFE1F
    ctx->pc = 0x3761c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65055);
    // 0x3761c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3761c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3761c8: 0xc0dd8a2  jal         func_376288
    ctx->pc = 0x3761C8u;
    SET_GPR_U32(ctx, 31, 0x3761D0u);
    ctx->pc = 0x3761CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3761C8u;
    // 0x3761cc: 0xae03cd00  sw          $v1, -0x3300($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294954240), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376288u, 0x3761C8u, 0x3761D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3761D0u;
label_3761d0:
    // 0x3761d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3761d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3761d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3761d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3761d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3761D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3761DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3761D8u;
        // 0x3761dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3761D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3761E0u;
}
