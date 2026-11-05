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

// Function: sub_00335108
// Address: 0x335108 - 0x3351d8
void sub_00335108_0x335108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335108_0x335108");
#endif

    switch (ctx->pc) {
        case 0x335140u: goto label_335140;
        case 0x33515cu: goto label_33515c;
        case 0x335170u: goto label_335170;
        case 0x335180u: goto label_335180;
        case 0x335198u: goto label_335198;
        case 0x3351b0u: goto label_3351b0;
        default: break;
    }

    ctx->pc = 0x335108u;

    // 0x335108: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x335108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33510c: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x33510cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x335110: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x335114: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x335114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335118: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x335118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33511c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33511cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x335120: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x335120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335124: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x335124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x335128: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x335128u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33512c: 0x8c4521e0  lw          $a1, 0x21E0($v0)
    ctx->pc = 0x33512cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5B21E0u));
    // 0x335130: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x335130u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335134: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x335134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x335138: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x335138u;
    SET_GPR_U32(ctx, 31, 0x335140u);
    ctx->pc = 0x33513Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335138u;
    // 0x33513c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x335138u, 0x335140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335140u;
label_335140:
    // 0x335140: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x335140u;
    {
        const bool branch_taken_0x335140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x335144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335140u;
        // 0x335144: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335140) {
            ctx->pc = 0x335178u;
            goto label_335178;
        }
    }
    ctx->pc = 0x335148u;
    // 0x335148: 0x8c502c7c  lw          $s0, 0x2C7C($v0)
    ctx->pc = 0x335148u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
    // 0x33514c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x33514Cu;
    {
        const bool branch_taken_0x33514c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x335150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33514Cu;
        // 0x335150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33514c) {
            ctx->pc = 0x335188u;
            goto label_335188;
        }
    }
    ctx->pc = 0x335154u;
    // 0x335154: 0xc0cd5bc  jal         func_3356F0
    ctx->pc = 0x335154u;
    SET_GPR_U32(ctx, 31, 0x33515Cu);
    ctx->pc = 0x335158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335154u;
    // 0x335158: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3356F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356F0u, 0x335154u, 0x33515Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33515Cu;
label_33515c:
    // 0x33515c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33515Cu;
    {
        const bool branch_taken_0x33515c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x335160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33515Cu;
        // 0x335160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33515c) {
            ctx->pc = 0x335188u;
            goto label_335188;
        }
    }
    ctx->pc = 0x335164u;
    // 0x335164: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x335164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335168: 0xc0cd76c  jal         func_335DB0
    ctx->pc = 0x335168u;
    SET_GPR_U32(ctx, 31, 0x335170u);
    ctx->pc = 0x33516Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335168u;
    // 0x33516c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335DB0u, 0x335168u, 0x335170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335170u;
label_335170:
    // 0x335170: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x335170u;
    {
        const bool branch_taken_0x335170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335170u;
        // 0x335174: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335170) {
            ctx->pc = 0x3351BCu;
            goto label_3351bc;
        }
    }
    ctx->pc = 0x335178u;
label_335178:
    // 0x335178: 0xc085d4e  jal         func_217538
    ctx->pc = 0x335178u;
    SET_GPR_U32(ctx, 31, 0x335180u);
    ctx->pc = 0x33517Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335178u;
    // 0x33517c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217538u, 0x335178u, 0x335180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335180u;
label_335180:
    // 0x335180: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x335180u;
    {
        const bool branch_taken_0x335180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x335180) {
            ctx->pc = 0x335190u;
            goto label_335190;
        }
    }
    ctx->pc = 0x335188u;
label_335188:
    // 0x335188: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x335188u;
    {
        const bool branch_taken_0x335188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335188u;
        // 0x33518c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335188) {
            ctx->pc = 0x3351B8u;
            goto label_3351b8;
        }
    }
    ctx->pc = 0x335190u;
label_335190:
    // 0x335190: 0xc0cd984  jal         func_336610
    ctx->pc = 0x335190u;
    SET_GPR_U32(ctx, 31, 0x335198u);
    ctx->pc = 0x335194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335190u;
    // 0x335194: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336610u, 0x335190u, 0x335198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335198u;
label_335198:
    // 0x335198: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x335198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33519c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33519Cu;
    {
        const bool branch_taken_0x33519c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3351A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33519Cu;
        // 0x3351a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33519c) {
            ctx->pc = 0x3351B4u;
            goto label_3351b4;
        }
    }
    ctx->pc = 0x3351A4u;
    // 0x3351a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3351a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3351a8: 0xc0cd76c  jal         func_335DB0
    ctx->pc = 0x3351A8u;
    SET_GPR_U32(ctx, 31, 0x3351B0u);
    ctx->pc = 0x3351ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3351A8u;
    // 0x3351ac: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335DB0u, 0x3351A8u, 0x3351B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3351B0u;
label_3351b0:
    // 0x3351b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3351b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3351b4:
    // 0x3351b4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3351b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3351b8:
    // 0x3351b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3351b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3351bc:
    // 0x3351bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3351bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3351c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3351c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3351c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3351c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3351c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3351c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3351cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3351CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3351D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3351CCu;
        // 0x3351d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3351CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3351D4u;
    // 0x3351d4: 0x0  nop
    ctx->pc = 0x3351d4u;
    // NOP
    ctx->pc = 0x3351d8u;
}
