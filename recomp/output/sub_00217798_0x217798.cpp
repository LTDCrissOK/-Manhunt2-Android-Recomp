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

// Function: sub_00217798
// Address: 0x217798 - 0x217850
void sub_00217798_0x217798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217798_0x217798");
#endif

    switch (ctx->pc) {
        case 0x2177e0u: goto label_2177e0;
        case 0x2177f8u: goto label_2177f8;
        case 0x21780cu: goto label_21780c;
        case 0x21782cu: goto label_21782c;
        default: break;
    }

    ctx->pc = 0x217798u;

    // 0x217798: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x217798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x21779c: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x21779cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x2177a0: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x2177a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x2177a4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2177a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2177a8: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x2177a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x2177ac: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x2177acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x2177b0: 0xffbf0138  sd          $ra, 0x138($sp)
    ctx->pc = 0x2177b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 31));
    // 0x2177b4: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x2177b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x2177b8: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x2177b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2177bc: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2177bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2177c0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2177C0u;
    {
        const bool branch_taken_0x2177c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2177C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2177C0u;
        // 0x2177c4: 0x3c050021  lui         $a1, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2177c0) {
            ctx->pc = 0x21782Cu;
            goto label_21782c;
        }
    }
    ctx->pc = 0x2177C8u;
    // 0x2177c8: 0xafbd0100  sw          $sp, 0x100($sp)
    ctx->pc = 0x2177c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 29));
    // 0x2177cc: 0x24a57670  addiu       $a1, $a1, 0x7670
    ctx->pc = 0x2177ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30320));
    // 0x2177d0: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x2177d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
    // 0x2177d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2177d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2177d8: 0xc0c4898  jal         func_312260
    ctx->pc = 0x2177D8u;
    SET_GPR_U32(ctx, 31, 0x2177E0u);
    ctx->pc = 0x2177DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2177D8u;
    // 0x2177dc: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312260u, 0x2177D8u, 0x2177E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2177E0u;
label_2177e0:
    // 0x2177e0: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x2177e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x2177e4: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2177E4u;
    {
        const bool branch_taken_0x2177e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2177E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2177E4u;
        // 0x2177e8: 0x2982a  slt         $s3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2177e4) {
            ctx->pc = 0x217818u;
            goto label_217818;
        }
    }
    ctx->pc = 0x2177ECu;
    // 0x2177ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2177ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2177f0: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x2177f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2177f4: 0x0  nop
    ctx->pc = 0x2177f4u;
    // NOP
label_2177f8:
    // 0x2177f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2177f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2177fc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2177FCu;
    {
        const bool branch_taken_0x2177fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2177fc) {
            ctx->pc = 0x217800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2177FCu;
            // 0x217800: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217810u;
            goto label_217810;
        }
    }
    ctx->pc = 0x217804u;
    // 0x217804: 0xc0c4858  jal         func_312160
    ctx->pc = 0x217804u;
    SET_GPR_U32(ctx, 31, 0x21780Cu);
    ctx->pc = 0x217808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217804u;
    // 0x217808: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312160u, 0x217804u, 0x21780Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21780Cu;
label_21780c:
    // 0x21780c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x21780cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_217810:
    // 0x217810: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x217810u;
    {
        const bool branch_taken_0x217810 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x217814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217810u;
        // 0x217814: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217810) {
            ctx->pc = 0x2177F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2177f8;
        }
    }
    ctx->pc = 0x217818u;
label_217818:
    // 0x217818: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x217818u;
    {
        const bool branch_taken_0x217818 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x21781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217818u;
        // 0x21781c: 0xdfb00110  ld          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217818) {
            ctx->pc = 0x217830u;
            goto label_217830;
        }
    }
    ctx->pc = 0x217820u;
    // 0x217820: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x217820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x217824: 0xc085db4  jal         func_2176D0
    ctx->pc = 0x217824u;
    SET_GPR_U32(ctx, 31, 0x21782Cu);
    ctx->pc = 0x217828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217824u;
    // 0x217828: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2176D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2176D0u, 0x217824u, 0x21782Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21782Cu;
label_21782c:
    // 0x21782c: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x21782cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_217830:
    // 0x217830: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x217830u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x217834: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x217834u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x217838: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x217838u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x21783c: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x21783cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x217840: 0xdfbf0138  ld          $ra, 0x138($sp)
    ctx->pc = 0x217840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x217844: 0x3e00008  jr          $ra
    ctx->pc = 0x217844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217844u;
        // 0x217848: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21784Cu;
    // 0x21784c: 0x0  nop
    ctx->pc = 0x21784cu;
    // NOP
    ctx->pc = 0x217850u;
}
