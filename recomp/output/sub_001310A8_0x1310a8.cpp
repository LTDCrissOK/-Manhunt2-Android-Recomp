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

// Function: sub_001310A8
// Address: 0x1310a8 - 0x131180
void sub_001310A8_0x1310a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001310A8_0x1310a8");
#endif

    switch (ctx->pc) {
        case 0x1310d4u: goto label_1310d4;
        case 0x1310e8u: goto label_1310e8;
        case 0x1310fcu: goto label_1310fc;
        case 0x131130u: goto label_131130;
        case 0x131168u: goto label_131168;
        default: break;
    }

    ctx->pc = 0x1310a8u;

    // 0x1310a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1310a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1310ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1310acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1310b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1310b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1310b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1310b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1310b8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1310b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1310bc: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1310bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1310c0: 0x8c820258  lw          $v0, 0x258($a0)
    ctx->pc = 0x1310c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 600)));
    // 0x1310c4: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1310C4u;
    {
        const bool branch_taken_0x1310c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1310C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1310C4u;
        // 0x1310c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1310c4) {
            ctx->pc = 0x131168u;
            goto label_131168;
        }
    }
    ctx->pc = 0x1310CCu;
    // 0x1310cc: 0xc043920  jal         func_10E480
    ctx->pc = 0x1310CCu;
    SET_GPR_U32(ctx, 31, 0x1310D4u);
    ctx->pc = 0x10E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E480u, 0x1310CCu, 0x1310D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1310D4u;
label_1310d4:
    // 0x1310d4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1310D4u;
    {
        const bool branch_taken_0x1310d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1310D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1310D4u;
        // 0x1310d8: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1310d4) {
            ctx->pc = 0x131168u;
            goto label_131168;
        }
    }
    ctx->pc = 0x1310DCu;
    // 0x1310dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1310dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1310e0: 0xc04785a  jal         func_11E168
    ctx->pc = 0x1310E0u;
    SET_GPR_U32(ctx, 31, 0x1310E8u);
    ctx->pc = 0x1310E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1310E0u;
    // 0x1310e4: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E168u, 0x1310E0u, 0x1310E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1310E8u;
label_1310e8:
    // 0x1310e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1310e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1310ec: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1310ECu;
    {
        const bool branch_taken_0x1310ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1310F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1310ECu;
        // 0x1310f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1310ec) {
            ctx->pc = 0x131168u;
            goto label_131168;
        }
    }
    ctx->pc = 0x1310F4u;
    // 0x1310f4: 0xc045f08  jal         func_117C20
    ctx->pc = 0x1310F4u;
    SET_GPR_U32(ctx, 31, 0x1310FCu);
    ctx->pc = 0x1310F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1310F4u;
    // 0x1310f8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C20u, 0x1310F4u, 0x1310FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1310FCu;
label_1310fc:
    // 0x1310fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1310fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131100: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131104: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x131104u;
    {
        const bool branch_taken_0x131104 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x131108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131104u;
        // 0x131108: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x131104) {
            ctx->pc = 0x131124u;
            goto label_131124;
        }
    }
    ctx->pc = 0x13110Cu;
    // 0x13110c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x13110Cu;
    {
        const bool branch_taken_0x13110c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13110c) {
            ctx->pc = 0x131110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13110Cu;
            // 0x131110: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131134u;
            goto label_131134;
        }
    }
    ctx->pc = 0x131114u;
    // 0x131114: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x131114u;
    {
        const bool branch_taken_0x131114 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x131114) {
            ctx->pc = 0x131118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131114u;
            // 0x131118: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131134u;
            goto label_131134;
        }
    }
    ctx->pc = 0x13111Cu;
    // 0x13111c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13111Cu;
    {
        const bool branch_taken_0x13111c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13111c) {
            ctx->pc = 0x131134u;
            goto label_131134;
        }
    }
    ctx->pc = 0x131124u;
label_131124:
    // 0x131124: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x131124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131128: 0xc043996  jal         func_10E658
    ctx->pc = 0x131128u;
    SET_GPR_U32(ctx, 31, 0x131130u);
    ctx->pc = 0x13112Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131128u;
    // 0x13112c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E658u, 0x131128u, 0x131130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131130u;
label_131130:
    // 0x131130: 0x202900b  movn        $s2, $s0, $v0
    ctx->pc = 0x131130u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 16));
label_131134:
    // 0x131134: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x131134u;
    {
        const bool branch_taken_0x131134 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x131138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131134u;
        // 0x131138: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131134) {
            ctx->pc = 0x131160u;
            goto label_131160;
        }
    }
    ctx->pc = 0x13113Cu;
    // 0x13113c: 0x8e220214  lw          $v0, 0x214($s1)
    ctx->pc = 0x13113cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x131140: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x131140u;
    {
        const bool branch_taken_0x131140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x131144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131140u;
        // 0x131144: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131140) {
            ctx->pc = 0x131154u;
            goto label_131154;
        }
    }
    ctx->pc = 0x131148u;
    // 0x131148: 0x8e220218  lw          $v0, 0x218($s1)
    ctx->pc = 0x131148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
    // 0x13114c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13114Cu;
    {
        const bool branch_taken_0x13114c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13114Cu;
        // 0x131150: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13114c) {
            ctx->pc = 0x131160u;
            goto label_131160;
        }
    }
    ctx->pc = 0x131154u;
label_131154:
    // 0x131154: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x131154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131158: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x131158u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13115c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13115cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_131160:
    // 0x131160: 0xc043970  jal         func_10E5C0
    ctx->pc = 0x131160u;
    SET_GPR_U32(ctx, 31, 0x131168u);
    ctx->pc = 0x131164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131160u;
    // 0x131164: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E5C0u, 0x131160u, 0x131168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131168u;
label_131168:
    // 0x131168: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x131168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13116c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13116cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x131170: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x131170u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131174: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x131174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x131178: 0x3e00008  jr          $ra
    ctx->pc = 0x131178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131178u;
        // 0x13117c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131180u;
}
